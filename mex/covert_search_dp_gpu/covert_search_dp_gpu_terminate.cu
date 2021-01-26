//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu_terminate.cu
//
//  Code generation for function 'covert_search_dp_gpu_terminate'
//


// Include files
#include "covert_search_dp_gpu_terminate.h"
#include "_coder_covert_search_dp_gpu_mex.h"
#include "covert_search_dp_gpu_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void covert_search_dp_gpu_atexit()
{
  mexFunctionCreateRootTLS();
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void covert_search_dp_gpu_terminate()
{
  cudaError_t errCode;
  errCode = cudaGetLastError();
  if (errCode != cudaSuccess) {
    emlrtThinCUDAError(errCode, cudaGetErrorName(errCode), cudaGetErrorString
                       (errCode), "SafeBuild", emlrtRootTLSGlobal);
  }

  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (covert_search_dp_gpu_terminate.cu)
