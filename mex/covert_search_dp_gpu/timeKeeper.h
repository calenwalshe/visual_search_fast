//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  timeKeeper.h
//
//  Code generation for function 'timeKeeper'
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
  namespace internal
  {
    namespace time
    {
      namespace impl
      {
        void timeKeeper(real_T *outTime_tv_sec, real_T *outTime_tv_nsec);
        void timeKeeper(const emlrtTimespec newTime);
      }
    }
  }
}

void savedTime_not_empty_init();

// End of code generation (timeKeeper.h)
