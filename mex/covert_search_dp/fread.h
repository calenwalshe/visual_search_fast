//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  fread.h
//
//  Code generation for function 'fread'
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
  void b_fread(const emlrtStack *sp, real_T fileID, ::coder::array<real_T, 2U>
               &A);
  void c_fread(const emlrtStack *sp, real_T fileID, ::coder::array<real_T, 2U>
               &A);
}

// End of code generation (fread.h)
