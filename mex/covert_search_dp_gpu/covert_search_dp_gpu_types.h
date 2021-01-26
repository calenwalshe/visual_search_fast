//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu_types.h
//
//  Code generation for function 'covert_search_dp_gpu'
//


#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"

// Custom Header Code
#ifdef __CUDA_ARCH__
#undef printf
#endif

// Type Definitions
struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

struct covert_search_dp_gpuStackData
{
  struct {
    real_T edges_data[5760001];
    real_T dpmap_data[5760000];
    real_T priorh_data[5760000];
    real_T re[360000];
  } f0;
};

// End of code generation (covert_search_dp_gpu_types.h)
