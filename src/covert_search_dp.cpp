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
#include "covert_search_dp_initialize.h"
#include "fileManager.h"
#include "fread.h"
#include "minOrMax.h"
#include "rand.h"
#include "randn.h"
#include "randsample.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
void covert_search_dp(double trials, const double dpmap[5760000], const double
                      priorh[5760000], double seed, coder::array<double, 2U>
                      &results)
{
  static double half_dpmap_with_eprior[5760000];
  static double lnepriorh[5760000];
  static double re[360000];
  coder::array<double, 2U> b_fileid;
  coder::array<double, 2U> r;
  coder::array<double, 1U> b_k;
  coder::array<int, 2U> idx;
  coder::array<int, 1U> iwork;
  coder::array<int, 1U> vk;
  coder::array<signed char, 1U> b_tpaMat;
  coder::array<signed char, 1U> tpaMat;
  double x_tmp;
  int ii_data[1];
  int b_i;
  unsigned int b_seed;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int p;
  int pEnd;
  int q;
  int qEnd;
  short jj_data[1];
  if (!isInitialized_covert_search_dp) {
    covert_search_dp_initialize();
  }

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
  // coder.gpu.kernelfun;
  coder::tic();

  //  Type Checking %%
  if (seed < 4.294967296E+9) {
    if (seed >= 0.0) {
      b_seed = static_cast<unsigned int>(seed);
    } else {
      b_seed = 0U;
    }
  } else if (seed >= 4.294967296E+9) {
    b_seed = MAX_uint32_T;
  } else {
    b_seed = 0U;
  }

  if (b_seed == 0U) {
    b_seed = 5489U;
  }

  state[0] = b_seed;
  for (i = 0; i < 623; i++) {
    b_seed = ((b_seed ^ b_seed >> 30U) * 1812433253U + i) + 1U;
    state[i + 1] = b_seed;
  }

  signed char fileid;
  state[624] = 624U;
  fileid = coder::cfopen("./rtmp.bin", "rb");
  coder::b_fread(static_cast<double>(fileid), b_fileid);

  //  Setup some generic parameters for size
  //
  //  Create effective prior
  for (k = 0; k < 5760000; k++) {
    x_tmp = dpmap[k];
    half_dpmap_with_eprior[k] = 0.5 * (x_tmp * x_tmp) - std::log(priorh[k]);
  }

  x_tmp = std::floor(trials / 2.0);
  tpaMat.set_size((static_cast<int>(x_tmp) + static_cast<int>(x_tmp)));
  pEnd = static_cast<int>(x_tmp);
  for (b_i = 0; b_i < pEnd; b_i++) {
    tpaMat[b_i] = 0;
  }

  pEnd = static_cast<int>(x_tmp);
  for (b_i = 0; b_i < pEnd; b_i++) {
    tpaMat[b_i + static_cast<int>(x_tmp)] = 1;
  }

  //  1 for target present, 0 for absent.
  coder::b_rand(static_cast<double>(tpaMat.size(0)), r);
  n = r.size(1) + 1;
  idx.set_size(1, r.size(1));
  pEnd = r.size(1);
  for (b_i = 0; b_i < pEnd; b_i++) {
    idx[b_i] = 0;
  }

  if (r.size(1) != 0) {
    iwork.set_size(r.size(1));
    b_i = r.size(1) - 1;
    for (k = 1; k <= b_i; k += 2) {
      if (r[k - 1] <= r[k]) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }

    if ((r.size(1) & 1) != 0) {
      idx[r.size(1) - 1] = r.size(1);
    }

    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          b_i = idx[q - 1];
          i1 = idx[p - 1];
          if (r[i1 - 1] <= r[b_i - 1]) {
            iwork[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork[k] = idx[q - 1];
                q++;
              }
            }
          } else {
            iwork[k] = b_i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork[k] = idx[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k < kEnd; k++) {
          idx[(j + k) - 1] = iwork[k];
        }

        j = qEnd;
      }

      i = i2;
    }
  }

  i = r.size(0);
  j = r.size(1);
  r.set_size(1, j);
  pEnd = i * j;
  for (b_i = 0; b_i < pEnd; b_i++) {
    r[b_i] = idx[b_i];
  }

  b_tpaMat.set_size(r.size(1));
  pEnd = r.size(1);
  for (b_i = 0; b_i < pEnd; b_i++) {
    b_tpaMat[b_i] = tpaMat[static_cast<int>(r[b_i]) - 1];
  }

  tpaMat.set_size(b_tpaMat.size(0));
  pEnd = b_tpaMat.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    tpaMat[b_i] = b_tpaMat[b_i];
  }

  //  permute isn't necessary becuase this search with no memory. we permute anyway. 
  //  integer pixel locations
  coder::randsample(trials, priorh, b_k);
  iwork.set_size(b_k.size(0));
  pEnd = b_k.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    iwork[b_i] = static_cast<int>(b_k[b_i]) - 1;
  }

  vk.set_size(iwork.size(0));
  pEnd = iwork.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    vk[b_i] = iwork[b_i] / 2400;
  }

  pEnd = iwork.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    iwork[b_i] = iwork[b_i] - vk[b_i] * 2400;
  }

  b_k.set_size(iwork.size(0));
  pEnd = iwork.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    b_k[b_i] = iwork[b_i] + 1;
  }

  pEnd = vk.size(0);
  for (b_i = 0; b_i < pEnd; b_i++) {
    vk[b_i] = vk[b_i] + 1;
  }

  results.set_size((static_cast<int>(trials)), 7);

  //  Run simulation loop
  b_i = static_cast<int>(trials);
  for (k = 0; k < b_i; k++) {
    int tpa;
    int xt;
    int yt;
    boolean_T exitg1;

    //  background number
    coder::randn(re);

    //  human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree. 
    i = -1;
    for (j = 0; j < 600; j++) {
      for (pEnd = 0; pEnd < 4; pEnd++) {
        for (i2 = 0; i2 < 600; i2++) {
          i++;
          x_tmp = re[i2 + 600 * j];
          lnepriorh[i] = x_tmp;
          i++;
          lnepriorh[i] = x_tmp;
          i++;
          lnepriorh[i] = x_tmp;
          i++;
          lnepriorh[i] = x_tmp;
        }
      }
    }

    //  sneaky way to increase the matrix with blocks -- Kronecker product
    tpa = tpaMat[k];
    if (tpaMat[k] != 0) {
      //  if target present add target responses
      xt = vk[k];
      yt = static_cast<int>(b_k[k]);
      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        i1 = 0;
        kEnd = 0;
      } else {
        i1 = static_cast<int>(b_k[k] - 67.0) - 1;
        kEnd = static_cast<int>(b_k[k] + 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        p = 0;
        n = -1;
      } else {
        p = vk[k] - 68;
        n = vk[k] + 66;
      }

      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        i = 0;
        q = 0;
      } else {
        i = static_cast<int>(b_k[k] - 67.0) - 1;
        q = static_cast<int>(b_k[k] + 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        i2 = 0;
        qEnd = -1;
      } else {
        i2 = vk[k] - 68;
        qEnd = vk[k] + 66;
      }

      pEnd = q - i;
      j = qEnd - i2;
      b_fileid.set_size(pEnd, (j + 1));
      for (q = 0; q <= j; q++) {
        for (qEnd = 0; qEnd < pEnd; qEnd++) {
          b_fileid[qEnd + 135 * q] = dpmap[(i + qEnd) + 2400 * (i2 + q)];
        }
      }

      r.set_size(135, 135);
      for (i = 0; i < 18225; i++) {
        r[i] = std::abs(b_fileid[i]);
      }

      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        i = 1;
      } else {
        i = static_cast<int>(b_k[k] - 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        q = 68;
      } else {
        q = vk[k];
      }

      pEnd = kEnd - i1;
      j = n - p;
      b_fileid.set_size(pEnd, (j + 1));
      for (kEnd = 0; kEnd <= j; kEnd++) {
        for (n = 0; n < pEnd; n++) {
          b_fileid[n + b_fileid.size(0) * kEnd] = lnepriorh[(i1 + n) + 2400 * (p
            + kEnd)] + r[n + 135 * kEnd];
        }
      }

      pEnd = b_fileid.size(1);
      for (i1 = 0; i1 < pEnd; i1++) {
        j = b_fileid.size(0);
        for (kEnd = 0; kEnd < j; kEnd++) {
          lnepriorh[((i + kEnd) + 2400 * ((q + i1) - 68)) - 1] = b_fileid[kEnd +
            b_fileid.size(0) * i1];
        }
      }

      //  create the local target response
    } else {
      tpa = 0;
      xt = 0;
      yt = 0;
    }

    //  compute normalized responses
    //  compute log likelihood ratio of target present,
    //  location of max normalized response, and max normalized response
    for (i1 = 0; i1 < 5760000; i1++) {
      lnepriorh[i1] = lnepriorh[i1] * dpmap[i1] - half_dpmap_with_eprior[i1];
    }

    x_tmp = coder::internal::maximum(lnepriorh);
    j = 0;
    i2 = 1;
    p = 1;
    i = 1;
    pEnd = 1;
    exitg1 = false;
    while ((!exitg1) && (pEnd <= 2400)) {
      if (lnepriorh[(i + 2400 * (pEnd - 1)) - 1] == x_tmp) {
        j = 1;
        ii_data[0] = i;
        jj_data[0] = static_cast<short>(pEnd);
        exitg1 = true;
      } else {
        i++;
        if (i > 2400) {
          i = 1;
          pEnd++;
        }
      }
    }

    if (j == 0) {
      i2 = 0;
      p = 0;
    }

    //  since we use the max rule, find the max.
    //  record data
    results[k] = yt;
    results[k + results.size(0)] = xt;
    results[k + results.size(0) * 2] = tpa;
    for (i1 = 0; i1 < i2; i1++) {
      results[k + results.size(0) * 3] = ii_data[0];
    }

    for (i1 = 0; i1 < p; i1++) {
      results[k + results.size(0) * 4] = jj_data[0];
    }

    results[k + results.size(0) * 5] = -1.0;
    results[k + results.size(0) * 6] = x_tmp;
  }

  //  Structured Data Storage
  coder::toc();

  // results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx,...
  //     'VariableNames', {'trial', 'stimY', 'stimX', 'tPresent', 'ymax', 'xmax', 'llr', 'slpmx'}); 
}

// End of code generation (covert_search_dp.cpp)
