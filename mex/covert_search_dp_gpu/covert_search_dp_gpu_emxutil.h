//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu_emxutil.h
//
//  Code generation for function 'covert_search_dp_gpu_emxutil'
//


#pragma once

// Include files
#include "covert_search_dp_gpu_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Custom Header Code
#ifdef __CUDA_ARCH__
#undef printf
#endif

// Function Declarations
void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T oldNumel);
void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int32_T oldNumel);
void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
void emxFree_int32_T(emxArray_int32_T **pEmxArray);
void emxFree_int8_T(emxArray_int8_T **pEmxArray);
void emxFree_real_T(emxArray_real_T **pEmxArray);
void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T numDimensions,
                     boolean_T doPush);
void emxInit_int8_T(emxArray_int8_T **pEmxArray, int32_T numDimensions,
                    boolean_T doPush);
void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions,
                    boolean_T doPush);

// End of code generation (covert_search_dp_gpu_emxutil.h)
