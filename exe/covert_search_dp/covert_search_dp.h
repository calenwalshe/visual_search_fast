/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * covert_search_dp.h
 *
 * Code generation for function 'covert_search_dp'
 *
 */

#ifndef COVERT_SEARCH_DP_H
#define COVERT_SEARCH_DP_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern double covert_search_dp(double trials, const double priorhfn[5760000],
    const double dpmapfn[5760000], const double rtmpfn[18225], double seed_val);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (covert_search_dp.h) */
