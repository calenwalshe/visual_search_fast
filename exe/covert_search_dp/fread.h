/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fread.h
 *
 * Code generation for function 'fread'
 *
 */

#ifndef FREAD_H
#define FREAD_H

/* Include files */
#include "covert_search_dp_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void b_fread(double fileID, emxArray_real_T *A);
  void c_fread(double fileID, emxArray_real_T *A);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (fread.h) */
