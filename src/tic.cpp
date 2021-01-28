//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  tic.cpp
//
//  Code generation for function 'tic'
//


// Include files
#include "tic.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include <time.h>

// Function Definitions
namespace coder
{
  void tic()
  {
    struct timespec b_timespec;
    clock_gettime(CLOCK_MONOTONIC, &b_timespec);
    internal::time::impl::timeKeeper((double)b_timespec.tv_sec, (double)
      b_timespec.tv_nsec);
  }
}

// End of code generation (tic.cpp)
