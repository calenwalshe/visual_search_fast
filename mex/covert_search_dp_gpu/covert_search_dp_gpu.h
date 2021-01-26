//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu.h
//
//  Code generation for function 'covert_search_dp_gpu'
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
void covert_search_dp_gpu(covert_search_dp_gpuStackData *SD, real_T trials,
  const char_T dpmapfp[9], const char_T priorhfp[10]);

// End of code generation (covert_search_dp_gpu.h)
