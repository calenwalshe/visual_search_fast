function covert_search_dp_gpu(trials, dpmapfp, priorhfp) %codegen
% COVERT_SEARCH_DP runs the search model with specified parameters and
% number of trials.
%
% COVERT_SEARCH_DP calls the following routines:
% mk_prior   make the prior prob distribution of target location
% mk_amap    make a map of target amplitude (may change if contrast fixed)
% mk_fov     make the scalar foveation map
% mk_tarloc  randomly sample target location from prior
% mk_lr      compute log likelihood ratio
%
%note that (i,j) = (y,x)
% note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this
%coder.gpu.kernelfun;
tic;
expandMat = ones(4,4);

rng(1)

fileID = fopen(dpmapfp);
dpmap  = fread(fileID, [2400, 2400], 'double');
dpmap  = imrotate(dpmap, 180);

fileID = fopen(priorhfp);
priorh = fread(fileID, [2400, 2400], 'double');

fileID = fopen('rtmp.bin');
rtmp   = fread(fileID, [135, 135], 'double');

%% Setup some generic parameters
% Fixed parameters
sz      = floor(600);

szrtmp = size(rtmp); 
rt     = fix(szrtmp(1)/2); 

%%
lnepriorh = log(priorh); % Create effective prior

half_dpmap             = 0.5 .* dpmap.^2;
half_dpmap_with_eprior = half_dpmap - lnepriorh;

dataTotal = zeros(trials, 7);

tpaMat          = [zeros(floor(trials/2),1); ones(floor(trials/2),1)]; % 1 for target present, 0 for absent.
tpaMat          = tpaMat(randperm(length(tpaMat))); % permute isn't necessary becuase this search with no memory. we permute anyway.

N               = length(priorh(:)); % integer pixel locations
k               = randsample(N,trials,true,priorh(:));
[pre_yt,pre_xt] = ind2sub(size(priorh), k);


%% Run simulation loop
for k = 1:trials            % background number
    re  = randn(sz, sz); % human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree.
    re  = kron(re, expandMat); % sneaky way to increase the matrix with blocks -- Kronecker product
    tpa = tpaMat(k);
    if tpa           % if target present add target responses
        yt = pre_yt(k);
        xt = pre_xt(k);
        re(yt-rt:yt+rt,xt-rt:xt+rt) = ...
            re(yt-rt:yt+rt,xt-rt:xt+rt) + abs(dpmap(yt-rt:yt+rt,xt-rt:xt+rt).*rtmp); % create the local target response
    else
        tpa = 0;
        xt = 0;
        yt = 0;
    end
    
    % compute normalized responses
    % compute log likelihood ratio of target present,
    % location of max normalized response, and max normalized response
    norm_resp = re .* dpmap - half_dpmap_with_eprior;
    
    llr         = -1;%log(sum(eslr(:), 'omitnan'));
    [maxj,imax] = max(norm_resp);
    [maxi,jmax] = max(maxj);
    ymx   = imax(jmax);
    xmx   = jmax;
    slpmx = maxi;
    
    dataTotal(k, :) = [yt, xt, tpa, ymx, xmx, llr, slpmx];
end
data = dataTotal;

%% Structured Data Storage
stimY = data(:, 1);
stimX = data(:, 2);
tPresent = data(:, 3);
ymax     = data(:, 4);
xmax     = data(:, 5);
llr      = data(:, 6);
slpmx    = data(:, 7);
trial = (1:length(slpmx))';

%results = 1;
%results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx,...
%    'VariableNames', {'trial', 'stimY', 'stimX', 'tPresent', 'ymax', 'xmax', 'llr', 'slpmx'});
toc;