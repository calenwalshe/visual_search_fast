//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_gpu_api.h
//
//  Code generation for function '_coder_covert_search_dp_gpu_api'
//


#pragma once

// Include files
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

// Type Declarations
struct covert_search_dp_gpuStackData;

// Function Declarations
void covert_search_dp_gpu_api(covert_search_dp_gpuStackData *SD, const mxArray *
  const prhs[3]);

// End of code generation (_coder_covert_search_dp_gpu_api.h)
