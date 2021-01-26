//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  toc.h
//
//  Code generation for function 'toc'
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

// Function Declarations
namespace coder
{
  void toc();
}

// End of code generation (toc.h)
