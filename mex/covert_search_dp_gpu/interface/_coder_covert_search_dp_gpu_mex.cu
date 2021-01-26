//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_gpu_mex.cu
//
//  Code generation for function '_coder_covert_search_dp_gpu_mex'
//


// Include files
#include "_coder_covert_search_dp_gpu_mex.h"
#include "_coder_covert_search_dp_gpu_api.h"
#include "covert_search_dp_gpu_data.h"
#include "covert_search_dp_gpu_initialize.h"
#include "covert_search_dp_gpu_terminate.h"
#include "covert_search_dp_gpu_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

// Function Definitions
void covert_search_dp_gpu_mexFunction(covert_search_dp_gpuStackData *SD, int32_T
  nlhs, int32_T nrhs, const mxArray *prhs[3])
{
  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs",
                        5, 12, 3, 4, 20, "covert_search_dp_gpu");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal,
                        "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "covert_search_dp_gpu");
  }

  // Call the function.
  covert_search_dp_gpu_api(SD, prhs);
}

void mexFunction(int32_T nlhs, mxArray *[], int32_T nrhs, const mxArray *prhs[])
{
  covert_search_dp_gpuStackData *c_covert_search_dp_gpuStackData = NULL;
  c_covert_search_dp_gpuStackData = new covert_search_dp_gpuStackData;
  mexAtExit(&covert_search_dp_gpu_atexit);

  // Module initialization.
  covert_search_dp_gpu_initialize();

  // Dispatch the entry-point.
  covert_search_dp_gpu_mexFunction(c_covert_search_dp_gpuStackData, nlhs, nrhs,
    prhs);

  // Module termination.
  covert_search_dp_gpu_terminate();
  delete c_covert_search_dp_gpuStackData;
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

// End of code generation (_coder_covert_search_dp_gpu_mex.cu)
