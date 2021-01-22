/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * covert_search_dp_emxutil.h
 *
 * Code generation for function 'covert_search_dp_emxutil'
 *
 */

#ifndef COVERT_SEARCH_DP_EMXUTIL_H
#define COVERT_SEARCH_DP_EMXUTIL_H

/* Include files */
#include "covert_search_dp_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
  extern void emxFree_real_T(emxArray_real_T **pEmxArray);
  extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (covert_search_dp_emxutil.h) */
