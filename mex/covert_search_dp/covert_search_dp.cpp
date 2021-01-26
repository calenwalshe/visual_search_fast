//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp.cpp
//
//  Code generation for function 'covert_search_dp'
//


// Include files
#include "covert_search_dp.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_types.h"
#include "fileManager.h"
#include "fread.h"
#include "imrotate.h"
#include "ind2sub.h"
#include "indexShapeCheck.h"
#include "randn.h"
#include "randperm.h"
#include "randsample.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <math.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI = { 15,    // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo b_emlrtRSI = { 18,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo c_emlrtRSI = { 20,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo d_emlrtRSI = { 21,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo e_emlrtRSI = { 22,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo f_emlrtRSI = { 24,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo g_emlrtRSI = { 25,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo h_emlrtRSI = { 27,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo i_emlrtRSI = { 28,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo j_emlrtRSI = { 38,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo k_emlrtRSI = { 40,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo l_emlrtRSI = { 46,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo m_emlrtRSI = { 49,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo n_emlrtRSI = { 50,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo o_emlrtRSI = { 55,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo p_emlrtRSI = { 58,  // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo q_emlrtRSI = { 102, // lineNo
  "covert_search_dp",                  // fcnName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pathName 
};

static emlrtRSInfo w_emlrtRSI = { 51,  // lineNo
  "fopen",                             // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fopen.m"// pathName 
};

static emlrtRSInfo cb_emlrtRSI = { 70, // lineNo
  "power",                             // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/power.m"// pathName 
};

static emlrtRSInfo qb_emlrtRSI = { 19, // lineNo
  "ind2sub",                           // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pathName 
};

static emlrtMCInfo emlrtMCI = { 34,    // lineNo
  9,                                   // colNo
  "rng",                               // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/rng.m"// pName 
};

static emlrtRTEInfo emlrtRTEI = { 14,  // lineNo
  9,                                   // colNo
  "log",                               // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elfun/log.m"// pName
};

static emlrtRTEInfo b_emlrtRTEI = { 37,// lineNo
  9,                                   // colNo
  "fopen",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fopen.m"// pName 
};

static emlrtBCInfo emlrtBCI = { -1,    // iFirst
  -1,                                  // iLast
  85,                                  // lineNo
  15,                                  // colNo
  "dataTotal",                         // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtECInfo emlrtECI = { 2,     // nDims
  72,                                  // lineNo
  17,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtECInfo b_emlrtECI = { -1,  // nDims
  61,                                  // lineNo
  9,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtBCInfo b_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  61,                                  // lineNo
  30,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  61,                                  // lineNo
  24,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  61,                                  // lineNo
  18,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo e_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  61,                                  // lineNo
  12,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtECInfo c_emlrtECI = { 2,   // nDims
  62,                                  // lineNo
  13,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtECInfo d_emlrtECI = { 2,   // nDims
  62,                                  // lineNo
  47,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtBCInfo f_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  71,                                  // colNo
  "dpmap",                             // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo g_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  65,                                  // colNo
  "dpmap",                             // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo h_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  59,                                  // colNo
  "dpmap",                             // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo i_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  62,                                  // lineNo
  53,                                  // colNo
  "dpmap",                             // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo j_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  62,                                  // lineNo
  34,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo k_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  62,                                  // lineNo
  28,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo l_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  62,                                  // lineNo
  22,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo m_emlrtBCI = { 1,   // iFirst
  2400,                                // iLast
  62,                                  // lineNo
  16,                                  // colNo
  "re",                                // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtRTEInfo c_emlrtRTEI = { 54,// lineNo
  9,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtECInfo e_emlrtECI = { 2,   // nDims
  41,                                  // lineNo
  26,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtDCInfo emlrtDCI = { 43,    // lineNo
  19,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  1                                    // checkKind
};

static emlrtDCInfo b_emlrtDCI = { 43,  // lineNo
  19,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  4                                    // checkKind
};

static emlrtDCInfo c_emlrtDCI = { 45,  // lineNo
  1,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  1                                    // checkKind
};

static emlrtDCInfo d_emlrtDCI = { 45,  // lineNo
  19,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  1                                    // checkKind
};

static emlrtBCInfo n_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  46,                                  // lineNo
  26,                                  // colNo
  "tpaMat",                            // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo o_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  57,                                  // lineNo
  11,                                  // colNo
  "tpaMat",                            // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo p_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  59,                                  // lineNo
  14,                                  // colNo
  "pre_yt",                            // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo q_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  60,                                  // lineNo
  14,                                  // colNo
  "pre_xt",                            // aName
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",// pName 
  0                                    // checkKind
};

static emlrtRTEInfo p_emlrtRTEI = { 22,// lineNo
  19,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo q_emlrtRTEI = { 38,// lineNo
  1,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo r_emlrtRTEI = { 43,// lineNo
  13,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo s_emlrtRTEI = { 45,// lineNo
  1,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo t_emlrtRTEI = { 46,// lineNo
  19,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo u_emlrtRTEI = { 46,// lineNo
  1,                                   // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo v_emlrtRTEI = { 21,// lineNo
  5,                                   // colNo
  "ind2sub",                           // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pName 
};

static emlrtRTEInfo w_emlrtRTEI = { 62,// lineNo
  47,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo x_emlrtRTEI = { 62,// lineNo
  13,                                  // colNo
  "covert_search_dp",                  // fName
  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m"// pName 
};

static emlrtRTEInfo cb_emlrtRTEI = { 46,// lineNo
  6,                                   // colNo
  "applyBinaryScalarFunction",         // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"// pName 
};

static emlrtRTEInfo rb_emlrtRTEI = { 31,// lineNo
  21,                                  // colNo
  "applyScalarFunction",               // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"// pName 
};

static emlrtRSInfo vb_emlrtRSI = { 34, // lineNo
  "rng",                               // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/rng.m"// pathName 
};

// Function Declarations
static void rng(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

// Function Definitions
static void rng(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "rng", true, location);
}

void covert_search_dp(covert_search_dpStackData *SD, const emlrtStack *sp,
                      real_T trials, const char_T dpmapfp_data[], const int32_T
                      dpmapfp_size[2], const char_T priorhfp_data[], const
                      int32_T priorhfp_size[2])
{
  static const char_T cv[3] = { 'a', 'l', 'l' };

  coder::array<real_T, 2U> dataTotal;
  coder::array<real_T, 2U> dpmap;
  coder::array<real_T, 2U> half_dpmap;
  coder::array<real_T, 2U> lnepriorh;
  coder::array<real_T, 2U> priorh;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> rtmp;
  coder::array<real_T, 1U> b_k;
  coder::array<real_T, 1U> b_priorh;
  coder::array<int32_T, 1U> varargout_3;
  coder::array<int32_T, 1U> varargout_4;
  coder::array<int8_T, 1U> b_tpaMat;
  coder::array<int8_T, 1U> tpaMat;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T ex[2400];
  real_T c_priorh[2];
  real_T fileID;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nx;
  int32_T rt;
  int16_T idx[2400];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 0);

  // codegen
  //  COVERT_SEARCH_DP runs the search model with specified parameters and
  //  number of trials.
  //
  //  COVERT_SEARCH_DP calls the following routines:
  //  mk_prior   make the prior prob distribution of target location
  //  mk_amap    make a map of target amplitude (may change if contrast fixed)
  //  mk_fov     make the scalar foveation map
  //  mk_tarloc  randomly sample target location from prior
  //  mk_lr      compute log likelihood ratio
  //
  // note that (i,j) = (y,x)
  //  note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this
  st.site = &emlrtRSI;
  coder::tic(&st);
  st.site = &b_emlrtRSI;
  y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&y, m);
  b_st.site = &vb_emlrtRSI;
  rng(&b_st, y, &emlrtMCI);
  st.site = &c_emlrtRSI;
  b_bool = false;
  if (dpmapfp_size[1] == 3) {
    nx = 0;
    do {
      exitg1 = 0;
      if (nx < 3) {
        if (dpmapfp_data[nx] != cv[nx]) {
          exitg1 = 1;
        } else {
          nx++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:toolbox:fopenAllNotSupported", "Coder:toolbox:fopenAllNotSupported",
      0);
  } else {
    b_st.site = &w_emlrtRSI;
    fileID = coder::fileManager(&b_st, dpmapfp_data, dpmapfp_size);
  }

  st.site = &d_emlrtRSI;
  coder::b_fread(&st, fileID, dpmap);
  priorh.set_size((&p_emlrtRTEI), sp, dpmap.size(0), dpmap.size(1));
  nx = dpmap.size(0) * dpmap.size(1) - 1;
  for (i = 0; i <= nx; i++) {
    priorh[i] = dpmap[i];
  }

  st.site = &e_emlrtRSI;
  coder::imrotate(&st, priorh, dpmap);
  st.site = &f_emlrtRSI;
  b_bool = false;
  if (priorhfp_size[1] == 3) {
    nx = 0;
    do {
      exitg1 = 0;
      if (nx < 3) {
        if (priorhfp_data[nx] != cv[nx]) {
          exitg1 = 1;
        } else {
          nx++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:toolbox:fopenAllNotSupported", "Coder:toolbox:fopenAllNotSupported",
      0);
  } else {
    b_st.site = &w_emlrtRSI;
    fileID = coder::fileManager(&b_st, priorhfp_data, priorhfp_size);
  }

  st.site = &g_emlrtRSI;
  coder::b_fread(&st, fileID, priorh);
  st.site = &h_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  fileID = coder::fileManager(&b_st);
  st.site = &i_emlrtRSI;
  coder::c_fread(&st, fileID, rtmp);

  //  Setup some generic parameters
  //  Fixed parameters
  rt = static_cast<int32_T>(trunc(static_cast<real_T>(rtmp.size(0)) / 2.0));

  //
  st.site = &j_emlrtRSI;
  lnepriorh.set_size((&q_emlrtRTEI), (&st), priorh.size(0), priorh.size(1));
  nx = priorh.size(0) * priorh.size(1);
  for (i = 0; i < nx; i++) {
    lnepriorh[i] = priorh[i];
  }

  b_bool = false;
  i = priorh.size(0) * priorh.size(1);
  for (k = 0; k < i; k++) {
    if (b_bool || (priorh[k] < 0.0)) {
      b_bool = true;
    }
  }

  if (b_bool) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  nx = priorh.size(0) * priorh.size(1);
  for (k = 0; k < nx; k++) {
    lnepriorh[k] = muDoubleScalarLog(lnepriorh[k]);
  }

  //  Create effective prior
  st.site = &k_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  half_dpmap.set_size((&cb_emlrtRTEI), (&b_st), (static_cast<int32_T>(
    static_cast<int16_T>(dpmap.size(0)))), (static_cast<int32_T>
    (static_cast<int16_T>(dpmap.size(1)))));
  nx = static_cast<int16_T>(dpmap.size(0)) * static_cast<int16_T>(dpmap.size(1));
  for (k = 0; k < nx; k++) {
    half_dpmap[k] = dpmap[k] * dpmap[k];
  }

  nx = half_dpmap.size(0) * half_dpmap.size(1);
  for (i = 0; i < nx; i++) {
    half_dpmap[i] = 0.5 * half_dpmap[i];
  }

  emlrtSizeEqCheckNDR2012b(half_dpmap.size(), lnepriorh.size(), &e_emlrtECI, sp);
  nx = half_dpmap.size(0) * half_dpmap.size(1);
  for (i = 0; i < nx; i++) {
    half_dpmap[i] = half_dpmap[i] - lnepriorh[i];
  }

  if (!(trials >= 0.0)) {
    emlrtNonNegativeCheckR2012b(trials, &b_emlrtDCI, sp);
  }

  if (trials != static_cast<int32_T>(muDoubleScalarFloor(trials))) {
    emlrtIntegerCheckR2012b(trials, &emlrtDCI, sp);
  }

  dataTotal.set_size((&r_emlrtRTEI), sp, (static_cast<int32_T>(trials)), 7);
  fileID = muDoubleScalarFloor(trials / 2.0);
  if (fileID != static_cast<int32_T>(fileID)) {
    emlrtIntegerCheckR2012b(fileID, &c_emlrtDCI, sp);
  }

  i = static_cast<int32_T>(fileID);
  if (static_cast<int32_T>(fileID) != i) {
    emlrtIntegerCheckR2012b(fileID, &c_emlrtDCI, sp);
  }

  tpaMat.set_size((&s_emlrtRTEI), sp, (static_cast<int32_T>(fileID) +
    static_cast<int32_T>(fileID)));
  if (static_cast<int32_T>(fileID) != static_cast<int32_T>(fileID)) {
    emlrtIntegerCheckR2012b(fileID, &d_emlrtDCI, sp);
  }

  nx = static_cast<int32_T>(fileID);
  for (i1 = 0; i1 < nx; i1++) {
    tpaMat[i1] = 0;
  }

  if (static_cast<int32_T>(fileID) != i) {
    emlrtIntegerCheckR2012b(fileID, &d_emlrtDCI, sp);
  }

  nx = static_cast<int32_T>(fileID);
  for (i = 0; i < nx; i++) {
    if (static_cast<int32_T>(fileID) != static_cast<int32_T>(fileID)) {
      emlrtIntegerCheckR2012b(fileID, &c_emlrtDCI, sp);
    }

    tpaMat[i + static_cast<int32_T>(fileID)] = 1;
  }

  //  1 for target present, 0 for absent.
  st.site = &l_emlrtRSI;
  coder::randperm(&st, static_cast<real_T>(tpaMat.size(0)), r);
  iv[0] = (*(int32_T (*)[2])r.size())[0];
  iv[1] = (*(int32_T (*)[2])r.size())[1];
  st.site = &l_emlrtRSI;
  coder::internal::indexShapeCheck(&st, tpaMat.size(0), iv);
  b_tpaMat.set_size((&t_emlrtRTEI), sp, r.size(1));
  nx = r.size(1);
  for (i = 0; i < nx; i++) {
    i1 = static_cast<int32_T>(r[i]);
    if ((i1 < 1) || (i1 > tpaMat.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, tpaMat.size(0), &n_emlrtBCI, sp);
    }

    b_tpaMat[i] = tpaMat[i1 - 1];
  }

  tpaMat.set_size((&u_emlrtRTEI), sp, b_tpaMat.size(0));
  nx = b_tpaMat.size(0);
  for (i = 0; i < nx; i++) {
    tpaMat[i] = b_tpaMat[i];
  }

  //  permute isn't necessary becuase this search with no memory. we permute anyway. 
  //  integer pixel locations
  nx = priorh.size(0) * priorh.size(1);
  b_priorh = priorh.reshape(nx);
  st.site = &m_emlrtRSI;
  coder::randsample(&st, static_cast<real_T>(priorh.size(0) * priorh.size(1)),
                    trials, b_priorh, b_k);
  st.site = &n_emlrtRSI;
  c_priorh[0] = priorh.size(0);
  c_priorh[1] = priorh.size(1);
  b_st.site = &qb_emlrtRSI;
  coder::ind2sub_indexClass(&b_st, c_priorh, b_k, varargout_3, varargout_4);
  b_k.set_size((&v_emlrtRTEI), (&st), varargout_3.size(0));
  nx = varargout_3.size(0);
  for (i = 0; i < nx; i++) {
    b_k[i] = varargout_3[i];
  }

  //  Run simulation loop
  i = static_cast<int32_T>(trials);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, trials, mxDOUBLE_CLASS,
    static_cast<int32_T>(trials), &c_emlrtRTEI, sp);
  for (k = 0; k < i; k++) {
    real_T d;
    int32_T b_i1;
    int32_T b_j1;
    int32_T j2;
    int32_T tpa;
    int32_T xt;
    int32_T yt;
    covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 1);

    //  background number
    st.site = &o_emlrtRSI;
    coder::randn(SD->f0.b_re);

    //  human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree. 
    nx = -1;
    for (b_j1 = 0; b_j1 < 600; b_j1++) {
      for (j2 = 0; j2 < 4; j2++) {
        for (b_i1 = 0; b_i1 < 600; b_i1++) {
          nx++;
          fileID = SD->f0.b_re[b_i1 + 600 * b_j1];
          SD->f0.re[nx] = fileID;
          nx++;
          SD->f0.re[nx] = fileID;
          nx++;
          SD->f0.re[nx] = fileID;
          nx++;
          SD->f0.re[nx] = fileID;
        }
      }
    }

    //  sneaky way to increase the matrix with blocks -- Kronecker product
    if ((static_cast<int32_T>(k + 1U) < 1) || (static_cast<int32_T>(k + 1U) >
         tpaMat.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, tpaMat.size
        (0), &o_emlrtBCI, sp);
    }

    tpa = tpaMat[k];
    st.site = &p_emlrtRSI;
    if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 0, tpaMat[k] != 0)) {
      real_T d1;
      real_T d2;
      int32_T i2;
      int32_T i3;
      int32_T i4;
      int32_T i5;
      int32_T i6;
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 2);

      //  if target present add target responses
      if ((static_cast<int32_T>(k + 1U) < 1) || (static_cast<int32_T>(k + 1U) >
           b_k.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1, b_k.size
          (0), &p_emlrtBCI, sp);
      }

      yt = static_cast<int32_T>(b_k[k]);
      if ((static_cast<int32_T>(k + 1U) < 1) || (static_cast<int32_T>(k + 1U) >
           varargout_4.size(0))) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
          varargout_4.size(0), &q_emlrtBCI, sp);
      }

      xt = varargout_4[k];
      d = b_k[k] - static_cast<real_T>(rt);
      fileID = b_k[k] + static_cast<real_T>(rt);
      if (d > fileID) {
        i1 = -1;
        i2 = -1;
      } else {
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 2400)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 2400,
            &m_emlrtBCI, sp);
        }

        i1 = static_cast<int32_T>(d) - 2;
        if ((static_cast<int32_T>(fileID) < 1) || (static_cast<int32_T>(fileID) >
             2400)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(fileID), 1, 2400,
            &l_emlrtBCI, sp);
        }

        i2 = static_cast<int32_T>(fileID) - 1;
      }

      i3 = varargout_4[k];
      d1 = static_cast<real_T>(i3) - static_cast<real_T>(rt);
      d2 = static_cast<real_T>(i3) + static_cast<real_T>(rt);
      if (d1 > d2) {
        i3 = -1;
        i4 = -1;
      } else {
        if ((static_cast<int32_T>(d1) < 1) || (static_cast<int32_T>(d1) > 2400))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, 2400,
            &k_emlrtBCI, sp);
        }

        i3 = static_cast<int32_T>(d1) - 2;
        if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) > 2400))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, 2400,
            &j_emlrtBCI, sp);
        }

        i4 = static_cast<int32_T>(d2) - 1;
      }

      if (d > fileID) {
        b_j1 = -1;
        i5 = -1;
      } else {
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) >
             dpmap.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, dpmap.size(0),
            &i_emlrtBCI, sp);
        }

        b_j1 = static_cast<int32_T>(d) - 2;
        if ((static_cast<int32_T>(fileID) < 1) || (static_cast<int32_T>(fileID) >
             dpmap.size(0))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(fileID), 1,
            dpmap.size(0), &h_emlrtBCI, sp);
        }

        i5 = static_cast<int32_T>(fileID) - 1;
      }

      if (d1 > d2) {
        j2 = -1;
        i6 = -1;
      } else {
        if ((static_cast<int32_T>(d1) < 1) || (static_cast<int32_T>(d1) >
             dpmap.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, dpmap.size
            (1), &g_emlrtBCI, sp);
        }

        j2 = static_cast<int32_T>(d1) - 2;
        if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) >
             dpmap.size(1))) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, dpmap.size
            (1), &f_emlrtBCI, sp);
        }

        i6 = static_cast<int32_T>(d2) - 1;
      }

      nx = i5 - b_j1;
      iv[0] = nx;
      b_i1 = i6 - j2;
      iv[1] = b_i1;
      emlrtSizeEqCheckNDR2012b(&iv[0], rtmp.size(), &d_emlrtECI, sp);
      lnepriorh.set_size((&w_emlrtRTEI), sp, nx, b_i1);
      for (i5 = 0; i5 < b_i1; i5++) {
        for (i6 = 0; i6 < nx; i6++) {
          lnepriorh[i6 + lnepriorh.size(0) * i5] = dpmap[((b_j1 + i6) +
            dpmap.size(0) * ((j2 + i5) + 1)) + 1] * rtmp[i6 + rtmp.size(0) * i5];
        }
      }

      nx = lnepriorh.size(0) * lnepriorh.size(1);
      r1.set_size((&rb_emlrtRTEI), sp, (static_cast<int32_T>(static_cast<uint8_T>
        (lnepriorh.size(0)))), (static_cast<int32_T>(static_cast<uint8_T>
        (lnepriorh.size(1)))));
      for (b_j1 = 0; b_j1 < nx; b_j1++) {
        r1[b_j1] = muDoubleScalarAbs(lnepriorh[b_j1]);
      }

      nx = i2 - i1;
      iv[0] = nx;
      b_i1 = i4 - i3;
      iv[1] = b_i1;
      emlrtSizeEqCheckNDR2012b(&iv[0], r1.size(), &c_emlrtECI, sp);
      if (d > fileID) {
        i2 = 0;
        i4 = 0;
      } else {
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 2400)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 2400,
            &e_emlrtBCI, sp);
        }

        i2 = static_cast<int32_T>(d) - 1;
        if ((static_cast<int32_T>(fileID) < 1) || (static_cast<int32_T>(fileID) >
             2400)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(fileID), 1, 2400,
            &d_emlrtBCI, sp);
        }

        i4 = static_cast<int32_T>(fileID);
      }

      if (d1 > d2) {
        b_j1 = 0;
        i5 = 0;
      } else {
        if ((static_cast<int32_T>(d1) < 1) || (static_cast<int32_T>(d1) > 2400))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, 2400,
            &c_emlrtBCI, sp);
        }

        b_j1 = static_cast<int32_T>(d1) - 1;
        if ((static_cast<int32_T>(d2) < 1) || (static_cast<int32_T>(d2) > 2400))
        {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1, 2400,
            &b_emlrtBCI, sp);
        }

        i5 = static_cast<int32_T>(d2);
      }

      iv[0] = i4 - i2;
      iv[1] = i5 - b_j1;
      iv1[0] = nx;
      iv1[1] = b_i1;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &b_emlrtECI, sp);
      priorh.set_size((&x_emlrtRTEI), sp, nx, b_i1);
      for (i4 = 0; i4 < b_i1; i4++) {
        for (i5 = 0; i5 < nx; i5++) {
          priorh[i5 + priorh.size(0) * i4] = SD->f0.re[((i1 + i5) + 2400 * ((i3
            + i4) + 1)) + 1] + r1[i5 + r1.size(0) * i4];
        }
      }

      nx = priorh.size(1);
      for (i1 = 0; i1 < nx; i1++) {
        b_i1 = priorh.size(0);
        for (i3 = 0; i3 < b_i1; i3++) {
          SD->f0.re[(i2 + i3) + 2400 * (b_j1 + i1)] = priorh[i3 + priorh.size(0)
            * i1];
        }
      }

      //  create the local target response
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0, 3);
      tpa = 0;
      xt = 0;
      yt = 0;
    }

    covrtLogBasicBlock(&emlrtCoverageInstance, 0, 4);

    //  compute normalized responses
    //  compute log likelihood ratio of target present,
    //  location of max normalized response, and max normalized response
    iv[0] = 2400;
    iv[1] = 2400;
    emlrtSizeEqCheckNDR2012b(&iv[0], dpmap.size(), &emlrtECI, sp);
    iv[0] = 2400;
    iv[1] = 2400;
    emlrtSizeEqCheckNDR2012b(&iv[0], half_dpmap.size(), &emlrtECI, sp);
    for (i1 = 0; i1 < 5760000; i1++) {
      SD->f0.re[i1] = SD->f0.re[i1] * dpmap[i1] - half_dpmap[i1];
    }

    // log(sum(eslr(:), 'omitnan'));
    for (nx = 0; nx < 2400; nx++) {
      idx[nx] = 1;
      ex[nx] = SD->f0.re[2400 * nx];
      for (b_j1 = 0; b_j1 < 2399; b_j1++) {
        d = SD->f0.re[(b_j1 + 2400 * nx) + 1];
        if (muDoubleScalarIsNaN(d)) {
          b_bool = false;
        } else if (muDoubleScalarIsNaN(ex[nx])) {
          b_bool = true;
        } else {
          b_bool = (ex[nx] < d);
        }

        if (b_bool) {
          ex[nx] = d;
          idx[nx] = static_cast<int16_T>(b_j1 + 2);
        }
      }
    }

    if (!muDoubleScalarIsNaN(ex[0])) {
      nx = 1;
    } else {
      boolean_T exitg2;
      nx = 0;
      b_j1 = 2;
      exitg2 = false;
      while ((!exitg2) && (b_j1 < 2401)) {
        if (!muDoubleScalarIsNaN(ex[b_j1 - 1])) {
          nx = b_j1;
          exitg2 = true;
        } else {
          b_j1++;
        }
      }
    }

    if (nx == 0) {
      fileID = ex[0];
      nx = 1;
    } else {
      fileID = ex[nx - 1];
      i1 = nx + 1;
      for (b_j1 = i1; b_j1 < 2401; b_j1++) {
        d = ex[b_j1 - 1];
        if (fileID < d) {
          fileID = d;
          nx = b_j1;
        }
      }
    }

    //  record data
    if ((static_cast<int32_T>(k + 1U) < 1) || (static_cast<int32_T>(k + 1U) >
         dataTotal.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(k + 1U), 1,
        dataTotal.size(0), &emlrtBCI, sp);
    }

    dataTotal[k] = yt;
    dataTotal[k + dataTotal.size(0)] = xt;
    dataTotal[k + dataTotal.size(0) * 2] = tpa;
    dataTotal[k + dataTotal.size(0) * 3] = idx[nx - 1];
    dataTotal[k + dataTotal.size(0) * 4] = nx;
    dataTotal[k + dataTotal.size(0) * 5] = -1.0;
    dataTotal[k + dataTotal.size(0) * 6] = fileID;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 5);

  //  Structured Data Storage
  // results = 1;
  // results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx,...
  //     'VariableNames', {'trial', 'stimY', 'stimX', 'tPresent', 'ymax', 'xmax', 'llr', 'slpmx'}); 
  st.site = &q_emlrtRSI;
  coder::toc(&st);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

// End of code generation (covert_search_dp.cpp)
