//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_mex.cpp
//
//  Code generation for function '_coder_covert_search_dp_mex'
//


// Include files
#include "_coder_covert_search_dp_mex.h"
#include "_coder_covert_search_dp_api.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_initialize.h"
#include "covert_search_dp_terminate.h"
#include "covert_search_dp_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

// Function Definitions
void covert_search_dp_mexFunction(covert_search_dpStackData *SD, int32_T nlhs,
  int32_T nrhs, const mxArray *prhs[3])
{
  emlrtStack st = { NULL,              // site
    NULL,                              // tls
    NULL                               // prev
  };

  st.tls = emlrtRootTLSGlobal;

  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        16, "covert_search_dp");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "covert_search_dp");
  }

  // Call the function.
  covert_search_dp_api(SD, prhs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  covert_search_dpStackData *covert_search_dpStackDataGlobal = NULL;
  (void)plhs;
  covert_search_dpStackDataGlobal = new covert_search_dpStackData;
  mexAtExit(&covert_search_dp_atexit);

  // Module initialization.
  covert_search_dp_initialize();
  try {
    emlrtShouldCleanupOnError(emlrtRootTLSGlobal, false);

    // Dispatch the entry-point.
    covert_search_dp_mexFunction(covert_search_dpStackDataGlobal, nlhs, nrhs,
      prhs);

    // Module termination.
    covert_search_dp_terminate();
  } catch (...) {
    emlrtCleanupOnException(emlrtRootTLSGlobal);
    throw;
  }

  delete covert_search_dpStackDataGlobal;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_covert_search_dp_mex.cpp)
