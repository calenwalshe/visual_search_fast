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
#include "rand.h"
#include "randn.h"
#include "randsample.h"
#include "tic.h"
#include "toc.h"
#include <math.h>

/* Function Definitions */
double covert_search_dp(double trials, const double priorh[5760000], const
  double dpmap[5760000], const double rtmp[18225], double seed_val)
{
  static double unusedExpr[360000];
  emxArray_int8_T *tpaMat;
  emxArray_real_T *b_tpaMat;
  emxArray_real_T *b_trials;
  double results;
  double x_tmp;
  int i;
  int mti;
  unsigned int seed;
  (void)dpmap;
  (void)rtmp;
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
  if (seed_val < 4.294967296E+9) {
    if (seed_val >= 0.0) {
      seed = (unsigned int)seed_val;
    } else {
      seed = 0U;
    }
  } else if (seed_val >= 4.294967296E+9) {
    seed = MAX_uint32_T;
  } else {
    seed = 0U;
  }

  if (seed == 0U) {
    seed = 5489U;
  }

  state[0] = seed;
  for (mti = 0; mti < 623; mti++) {
    seed = ((seed ^ seed >> 30U) * 1812433253U + mti) + 1U;
    state[mti + 1] = seed;
  }

  emxInit_int8_T(&tpaMat, 1);
  state[624] = 624U;

  /*  Setup some generic parameters */
  /*  Fixed parameters */
  /*  */
  /*  Create effective prior */
  x_tmp = floor(trials / 2.0);
  i = tpaMat->size[0];
  tpaMat->size[0] = (int)x_tmp + (int)x_tmp;
  emxEnsureCapacity_int8_T(tpaMat, i);
  mti = (int)x_tmp;
  for (i = 0; i < mti; i++) {
    tpaMat->data[i] = 0;
  }

  mti = (int)x_tmp;
  for (i = 0; i < mti; i++) {
    tpaMat->data[i + (int)x_tmp] = 1;
  }

  emxInit_real_T(&b_tpaMat, 2);
  emxInit_real_T(&b_trials, 1);

  /*  1 for target present, 0 for absent. */
  b_rand(tpaMat->size[0], b_tpaMat);

  /*  permute isn't necessary becuase this search with no memory. we permute anyway. */
  /*  integer pixel locations */
  randsample(trials, priorh, b_trials);

  /*  Run simulation loop */
  i = (int)trials;
  emxFree_real_T(&b_trials);
  emxFree_real_T(&b_tpaMat);
  emxFree_int8_T(&tpaMat);
  for (mti = 0; mti < i; mti++) {
    /*  background number */
    randn(unusedExpr);

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
