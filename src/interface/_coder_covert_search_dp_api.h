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

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void covert_search_dp(real_T trials, real_T dpmap[5760000], real_T priorh
                        [5760000], real_T rtmp[18225], real_T seed,
                        emxArray_real_T *results);
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
