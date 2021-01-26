//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_mex.h
//
//  Code generation for function '_coder_covert_search_dp_mex'
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
void covert_search_dp_mexFunction(covert_search_dpStackData *SD, int32_T nlhs,
  int32_T nrhs, const mxArray *prhs[3]);
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
  const mxArray *prhs[]);
emlrtCTX mexFunctionCreateRootTLS();

// End of code generation (_coder_covert_search_dp_mex.h)
