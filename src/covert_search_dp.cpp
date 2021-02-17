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
                      priorh[5760000], const double rtmp[18225], double seed,
                      coder::array<double, 2U> &results)
{
  static double half_dpmap_with_eprior[5760000];
  static double lnepriorh[5760000];
  static double re[360000];
  coder::array<double, 2U> dataTotal;
  coder::array<double, 2U> y;
  coder::array<double, 1U> b_k;
  coder::array<int, 2U> idx;
  coder::array<int, 1U> iwork;
  coder::array<int, 1U> vk;
  coder::array<signed char, 1U> b_tpaMat;
  coder::array<signed char, 1U> tpaMat;
  double b_y[18225];
  double x_tmp;
  int ii_data[1];
  int b_i;
  int b_loop_ub;
  unsigned int b_seed;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int kEnd;
  int loop_ub;
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
  // note that (i,j) = (y,x)
  //  note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this
  // coder.gpu.kernelfun;
  coder::tic();
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

  state[624] = 624U;

  //  Setup some generic parameters for size
  //  in releases this can be variable size.
  //
  //  Create effective prior
  for (k = 0; k < 5760000; k++) {
    x_tmp = dpmap[k];
    half_dpmap_with_eprior[k] = 0.5 * (x_tmp * x_tmp) - std::log(priorh[k]);
  }

  x_tmp = std::floor(trials / 2.0);
  tpaMat.set_size((static_cast<int>(x_tmp) + static_cast<int>(x_tmp)));
  loop_ub = static_cast<int>(x_tmp);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    tpaMat[b_i] = 0;
  }

  loop_ub = static_cast<int>(x_tmp);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    tpaMat[b_i + static_cast<int>(x_tmp)] = 1;
  }

  //  1 for target present, 0 for absent.
  coder::b_rand(static_cast<double>(tpaMat.size(0)), y);
  n = y.size(1) + 1;
  idx.set_size(1, y.size(1));
  loop_ub = y.size(1);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    idx[b_i] = 0;
  }

  if (y.size(1) != 0) {
    iwork.set_size(y.size(1));
    b_i = y.size(1) - 1;
    for (k = 1; k <= b_i; k += 2) {
      if (y[k - 1] <= y[k]) {
        idx[k - 1] = k;
        idx[k] = k + 1;
      } else {
        idx[k - 1] = k + 1;
        idx[k] = k;
      }
    }

    if ((y.size(1) & 1) != 0) {
      idx[y.size(1) - 1] = y.size(1);
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
          if (y[i1 - 1] <= y[b_i - 1]) {
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

  i2 = y.size(0);
  i = y.size(1);
  y.set_size(1, i);
  loop_ub = i2 * i;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    y[b_i] = idx[b_i];
  }

  b_tpaMat.set_size(y.size(1));
  loop_ub = y.size(1);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_tpaMat[b_i] = tpaMat[static_cast<int>(y[b_i]) - 1];
  }

  tpaMat.set_size(b_tpaMat.size(0));
  loop_ub = b_tpaMat.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    tpaMat[b_i] = b_tpaMat[b_i];
  }

  //  permute isn't necessary becuase this search with no memory. we permute anyway. 
  //  integer pixel locations
  coder::randsample(trials, priorh, b_k);
  iwork.set_size(b_k.size(0));
  loop_ub = b_k.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    iwork[b_i] = static_cast<int>(b_k[b_i]) - 1;
  }

  vk.set_size(iwork.size(0));
  loop_ub = iwork.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    vk[b_i] = iwork[b_i] / 2400;
  }

  loop_ub = iwork.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    iwork[b_i] = iwork[b_i] - vk[b_i] * 2400;
  }

  b_k.set_size(iwork.size(0));
  loop_ub = iwork.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    b_k[b_i] = iwork[b_i] + 1;
  }

  loop_ub = vk.size(0);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    vk[b_i] = vk[b_i] + 1;
  }

  dataTotal.set_size((static_cast<int>(trials)), 6);

  //  preallocate memory storage for results
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

    //  Kronecker product is a sneaky way to increase the matrix with blocks
    tpa = tpaMat[k];
    if (tpaMat[k] != 0) {
      int b_i2;
      int i3;

      //  if target present add target responses
      xt = vk[k];
      yt = static_cast<int>(b_k[k]);
      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        i1 = 0;
        b_i2 = 0;
      } else {
        i1 = static_cast<int>(b_k[k] - 67.0) - 1;
        b_i2 = static_cast<int>(b_k[k] + 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        j = 0;
        qEnd = -1;
      } else {
        j = vk[k] - 68;
        qEnd = vk[k] + 66;
      }

      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        i = 0;
        pEnd = 0;
      } else {
        i = static_cast<int>(b_k[k] - 67.0) - 1;
        pEnd = static_cast<int>(b_k[k] + 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        i2 = 0;
        p = -1;
      } else {
        i2 = vk[k] - 68;
        p = vk[k] + 66;
      }

      if (b_k[k] - 67.0 > b_k[k] + 67.0) {
        n = 0;
        q = 0;
      } else {
        n = static_cast<int>(b_k[k] - 67.0) - 1;
        q = static_cast<int>(b_k[k] + 67.0);
      }

      if (vk[k] - 67 > vk[k] + 67) {
        i3 = -67;
        kEnd = -67;
      } else {
        i3 = vk[k] - 135;
        kEnd = vk[k];
      }

      loop_ub = pEnd - i;
      b_loop_ub = p - i2;
      y.set_size(loop_ub, (b_loop_ub + 1));
      for (pEnd = 0; pEnd <= b_loop_ub; pEnd++) {
        for (p = 0; p < loop_ub; p++) {
          y[p + y.size(0) * pEnd] = dpmap[(i + p) + 2400 * (i2 + pEnd)];
        }
      }

      for (i = 0; i < 18225; i++) {
        b_y[i] = std::abs(y[i] * rtmp[i]);
      }

      loop_ub = b_i2 - i1;
      b_loop_ub = qEnd - j;
      y.set_size(loop_ub, (b_loop_ub + 1));
      for (b_i2 = 0; b_i2 <= b_loop_ub; b_i2++) {
        for (qEnd = 0; qEnd < loop_ub; qEnd++) {
          y[qEnd + y.size(0) * b_i2] = lnepriorh[(i1 + qEnd) + 2400 * (j + b_i2)];
        }
      }

      for (i1 = 0; i1 < 18225; i1++) {
        b_y[i1] += y[i1];
      }

      i2 = q - n;
      i = kEnd - i3;
      for (i1 = 0; i1 < i; i1++) {
        for (b_i2 = 0; b_i2 < i2; b_i2++) {
          lnepriorh[(n + b_i2) + 2400 * ((i3 + i1) + 67)] = b_y[b_i2 + i2 * i1];
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
    i = 0;
    i2 = 1;
    p = 1;
    j = 1;
    pEnd = 1;
    exitg1 = false;
    while ((!exitg1) && (pEnd <= 2400)) {
      if (lnepriorh[(j + 2400 * (pEnd - 1)) - 1] == x_tmp) {
        i = 1;
        ii_data[0] = j;
        jj_data[0] = static_cast<short>(pEnd);
        exitg1 = true;
      } else {
        j++;
        if (j > 2400) {
          j = 1;
          pEnd++;
        }
      }
    }

    if (i == 0) {
      i2 = 0;
      p = 0;
    }

    //  since we use the max rule, find the max.
    //  record data
    dataTotal[k] = yt;
    dataTotal[k + dataTotal.size(0)] = xt;
    dataTotal[k + dataTotal.size(0) * 2] = tpa;
    for (i1 = 0; i1 < i2; i1++) {
      dataTotal[k + dataTotal.size(0) * 3] = ii_data[0];
    }

    for (i1 = 0; i1 < p; i1++) {
      dataTotal[k + dataTotal.size(0) * 4] = jj_data[0];
    }

    dataTotal[k + dataTotal.size(0) * 5] = x_tmp;
  }

  //  Structured Data Storage
  if (dataTotal.size(0) < 1) {
    y.set_size(1, 0);
  } else {
    y.set_size(1, (static_cast<int>(static_cast<double>(dataTotal.size(0)) - 1.0)
                   + 1));
    loop_ub = static_cast<int>(static_cast<double>(dataTotal.size(0)) - 1.0);
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      y[b_i] = static_cast<double>(b_i) + 1.0;
    }
  }

  coder::toc();
  loop_ub = dataTotal.size(0);
  b_loop_ub = dataTotal.size(0);
  i = dataTotal.size(0);
  j = dataTotal.size(0);
  pEnd = dataTotal.size(0);
  i2 = dataTotal.size(0);
  results.set_size(y.size(1), 7);
  p = y.size(1);
  for (b_i = 0; b_i < p; b_i++) {
    results[b_i] = y[b_i];
  }

  for (b_i = 0; b_i < loop_ub; b_i++) {
    results[b_i + results.size(0)] = dataTotal[b_i];
  }

  for (b_i = 0; b_i < b_loop_ub; b_i++) {
    results[b_i + results.size(0) * 2] = dataTotal[b_i + dataTotal.size(0)];
  }

  for (b_i = 0; b_i < i; b_i++) {
    results[b_i + results.size(0) * 3] = dataTotal[b_i + dataTotal.size(0) * 2];
  }

  for (b_i = 0; b_i < j; b_i++) {
    results[b_i + results.size(0) * 4] = dataTotal[b_i + dataTotal.size(0) * 3];
  }

  for (b_i = 0; b_i < pEnd; b_i++) {
    results[b_i + results.size(0) * 5] = dataTotal[b_i + dataTotal.size(0) * 4];
  }

  for (b_i = 0; b_i < i2; b_i++) {
    results[b_i + results.size(0) * 6] = dataTotal[b_i + dataTotal.size(0) * 5];
  }
}

// End of code generation (covert_search_dp.cpp)
