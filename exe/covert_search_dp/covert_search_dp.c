/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * covert_search_dp.c
 *
 * Code generation for function 'covert_search_dp'
 *
 */

/* Include files */
#include "covert_search_dp.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_emxutil.h"
#include "covert_search_dp_initialize.h"
#include "covert_search_dp_types.h"
#include "fileManager.h"
#include "fread.h"
#include "rand.h"
#include "randn.h"
#include "randsample.h"
#include "tic.h"
#include "toc.h"
#include <math.h>

/* Function Definitions */
void covert_search_dp(double trials, const char dpmapfp[9], const char priorhfp
                      [10])
{
  static double unusedExpr[360000];
  emxArray_int8_T *tpaMat;
  emxArray_real_T c_priorh;
  emxArray_real_T *b_fileid;
  emxArray_real_T *b_priorh;
  emxArray_real_T *b_tpaMat;
  emxArray_real_T *fileid;
  emxArray_real_T *priorh;
  double x_tmp;
  int d_priorh[1];
  int i;
  int mti;
  unsigned int r;
  signed char c_fileid;
  if (!isInitialized_covert_search_dp) {
    covert_search_dp_initialize();
  }

  /* codegen */
  /*  COVERT_SEARCH_DP runs the search model with specified parameters and */
  /*  number of trials. */
  /*  */
  /*  COVERT_SEARCH_DP calls the following routines: */
  /*  mk_prior   make the prior prob distribution of target location */
  /*  mk_amap    make a map of target amplitude (may change if contrast fixed) */
  /*  mk_fov     make the scalar foveation map */
  /*  mk_tarloc  randomly sample target location from prior */
  /*  mk_lr      compute log likelihood ratio */
  /*  */
  /* note that (i,j) = (y,x) */
  /*  note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this */
  tic();
  r = 1U;
  state[0] = 1U;
  for (mti = 0; mti < 623; mti++) {
    r = ((r ^ r >> 30U) * 1812433253U + mti) + 1U;
    state[mti + 1] = r;
  }

  emxInit_real_T(&priorh, 2);
  emxInit_int8_T(&tpaMat, 1);
  emxInit_real_T(&fileid, 2);
  emxInit_real_T(&b_fileid, 2);
  state[624] = 624U;
  c_fileid = cfopen(dpmapfp, "rb");
  b_fread(c_fileid, fileid);
  c_fileid = b_cfopen(priorhfp, "rb");
  b_fread(c_fileid, priorh);
  c_fileid = c_cfopen("rtmp.bin", "rb");
  c_fread(c_fileid, b_fileid);

  /*  Setup some generic parameters */
  /*  Fixed parameters */
  /*  */
  /*  Create effective prior */
  x_tmp = floor(trials / 2.0);
  i = tpaMat->size[0];
  tpaMat->size[0] = (int)x_tmp + (int)x_tmp;
  emxEnsureCapacity_int8_T(tpaMat, i);
  mti = (int)x_tmp;
  emxFree_real_T(&b_fileid);
  emxFree_real_T(&fileid);
  for (i = 0; i < mti; i++) {
    tpaMat->data[i] = 0;
  }

  mti = (int)x_tmp;
  for (i = 0; i < mti; i++) {
    tpaMat->data[i + (int)x_tmp] = 1;
  }

  emxInit_real_T(&b_tpaMat, 2);
  emxInit_real_T(&b_priorh, 1);

  /*  1 for target present, 0 for absent. */
  b_rand(tpaMat->size[0], b_tpaMat);

  /*  permute isn't necessary becuase this search with no memory. we permute anyway. */
  /*  integer pixel locations */
  mti = priorh->size[0] * priorh->size[1];
  c_priorh = *priorh;
  d_priorh[0] = mti;
  c_priorh.size = &d_priorh[0];
  c_priorh.numDimensions = 1;
  randsample(priorh->size[0] * priorh->size[1], trials, &c_priorh, b_priorh);

  /*  Run simulation loop */
  i = (int)trials;
  emxFree_real_T(&b_priorh);
  emxFree_real_T(&b_tpaMat);
  emxFree_int8_T(&tpaMat);
  emxFree_real_T(&priorh);
  for (mti = 0; mti < i; mti++) {
    /*  background number */
    randn(unusedExpr);

    /*  human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree. */
    /*  sneaky way to increase the matrix with blocks -- Kronecker product */
    /*  compute normalized responses */
    /*  compute log likelihood ratio of target present, */
    /*  location of max normalized response, and max normalized response */
    /* log(sum(eslr(:), 'omitnan')); */
    /*  record data     */
  }

  /*  Structured Data Storage */
  /* results = 1; */
  /* results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx,... */
  /*     'VariableNames', {'trial', 'stimY', 'stimX', 'tPresent', 'ymax', 'xmax', 'llr', 'slpmx'}); */
  toc();
}

/* End of code generation (covert_search_dp.c) */
