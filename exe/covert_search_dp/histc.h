/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * histc.h
 *
 * Code generation for function 'histc'
 *
 */

#ifndef HISTC_H
#define HISTC_H

/* Include files */
#include "covert_search_dp_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void histc(const emxArray_real_T *X, const emxArray_real_T *edges,
             emxArray_real_T *N, emxArray_real_T *BIN);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (histc.h) */
