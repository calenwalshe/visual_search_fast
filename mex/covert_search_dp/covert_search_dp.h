//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp.h
//
//  Code generation for function 'covert_search_dp'
//


#pragma once

// Include files
#include "covert_search_dp_types.h"
#include "rtwtypes.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void covert_search_dp(covert_search_dpStackData *SD, const emlrtStack *sp,
                      real_T trials, const char_T dpmapfp_data[], const int32_T
                      dpmapfp_size[2], const char_T priorhfp_data[], const
                      int32_T priorhfp_size[2]);

// End of code generation (covert_search_dp.h)
