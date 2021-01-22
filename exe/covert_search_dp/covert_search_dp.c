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
#include "randn.h"
#include "randperm.h"
#include "randsample.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"

/* Function Definitions */
double covert_search_dp(double trials, const double priorhfn[5760000], const
  double dpmapfn[5760000], const double rtmpfn[18225], double seed_val)
{
  static double c_unusedExpr[360000];
  emxArray_real_T b_priorh;
  emxArray_real_T *b_fileid;
  emxArray_real_T *fileid;
  emxArray_real_T *priorh;
  double b_unusedExpr[2400];
  double unusedExpr[2400];
  double results;
  int c_priorh[1];
  int mti;
  unsigned int r;
  signed char c_fileid;
  (void)trials;
  (void)priorhfn;
  (void)dpmapfn;
  (void)rtmpfn;
  (void)seed_val;
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
  /*  note that (i,j) = (y,x) */
  /*  note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this */
  tic();
  r = 1U;
  state[0] = 1U;
  for (mti = 0; mti < 623; mti++) {
    r = ((r ^ r >> 30U) * 1812433253U + mti) + 1U;
    state[mti + 1] = r;
  }

  emxInit_real_T(&priorh, 2);
  emxInit_real_T(&fileid, 2);
  emxInit_real_T(&b_fileid, 2);
  state[624] = 624U;
  c_fileid = cfopen("dpmap.bin", "rb");
  b_fread(c_fileid, fileid);
  c_fileid = cfopen("priorh.bin", "rb");
  b_fread(c_fileid, priorh);
  c_fileid = cfopen("rtmp.bin", "rb");
  c_fread(c_fileid, b_fileid);

  /*  Setup some generic parameters */
  /*  Fixed parameters */
  /*  */
  /*  Create effective prior */
  /*  1 for target present, 0 for absent. */
  randperm(unusedExpr);

  /*  permute isn't necessary becuase this search with no memory. we permute anyway. */
  /*  integer pixel locations */
  mti = priorh->size[0] * priorh->size[1];
  b_priorh = *priorh;
  c_priorh[0] = mti;
  b_priorh.size = &c_priorh[0];
  b_priorh.numDimensions = 1;
  randsample(priorh->size[0] * priorh->size[1], &b_priorh, b_unusedExpr);

  /*  Run simulation loop */
  emxFree_real_T(&b_fileid);
  emxFree_real_T(&fileid);
  emxFree_real_T(&priorh);
  for (mti = 0; mti < 2400; mti++) {
    /*  background number */
    randn(c_unusedExpr);

    /*  human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree. */
    /*  sneaky way to increase the matrix with blocks - Kronecker product */
    /*  compute normalized responses */
    /*  compute log likelihood ratio of target present, */
    /*  location of max normalized response, and max normalized response */
    /* log(sum(eslr(:), 'omitnan')); */
    /*  record data     */
  }

  /*  Structured Data Storage */
  results = 1.0;

  /* results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx); */
  toc();
  return results;
}

/* End of code generation (covert_search_dp.c) */
