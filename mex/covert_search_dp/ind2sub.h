//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  ind2sub.h
//
//  Code generation for function 'ind2sub'
//


#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder
{
  void ind2sub_indexClass(const emlrtStack *sp, const real_T siz[2], const ::
    coder::array<real_T, 1U> &ndx, ::coder::array<int32_T, 1U> &varargout_1, ::
    coder::array<int32_T, 1U> &varargout_2);
}

// End of code generation (ind2sub.h)
