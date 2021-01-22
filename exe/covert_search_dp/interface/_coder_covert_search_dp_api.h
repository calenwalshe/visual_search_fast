/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_covert_search_dp_api.h
 *
 * Code generation for function 'covert_search_dp'
 *
 */

#ifndef _CODER_COVERT_SEARCH_DP_API_H
#define _CODER_COVERT_SEARCH_DP_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  real_T covert_search_dp(real_T trials, real_T priorhfn[5760000], real_T
    dpmapfn[5760000], real_T rtmpfn[18225], real_T seed_val);
  void covert_search_dp_api(const mxArray * const prhs[5], const mxArray *plhs[1]);
  void covert_search_dp_atexit(void);
  void covert_search_dp_initialize(void);
  void covert_search_dp_terminate(void);
  void covert_search_dp_xil_shutdown(void);
  void covert_search_dp_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (_coder_covert_search_dp_api.h) */
