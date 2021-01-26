//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  randn.cpp
//
//  Code generation for function 'randn'
//


// Include files
#include "randn.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder
{
  void randn(real_T r[360000])
  {
    emlrtRandn(&r[0], 360000);
  }
}

// End of code generation (randn.cpp)
