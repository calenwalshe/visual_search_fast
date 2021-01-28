//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp.h
//
//  Code generation for function 'covert_search_dp'
//


#ifndef COVERT_SEARCH_DP_H
#define COVERT_SEARCH_DP_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern void covert_search_dp(double trials, const double dpmap[5760000], const
  double priorh[5760000], double seed, coder::array<double, 2U> &results);

#endif

// End of code generation (covert_search_dp.h)
