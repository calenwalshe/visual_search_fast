//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu_initialize.cu
//
//  Code generation for function 'covert_search_dp_gpu_initialize'
//


// Include files
#include "covert_search_dp_gpu_initialize.h"
#include "_coder_covert_search_dp_gpu_mex.h"
#include "covert_search_dp_gpu_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void covert_search_dp_gpu_once();

// Function Definitions
static void covert_search_dp_gpu_once()
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();
}

void covert_search_dp_gpu_initialize()
{
  mexFunctionCreateRootTLS();
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, false, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "distrib_computing_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "image_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "statistics_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    covert_search_dp_gpu_once();
  }

  cudaGetLastError();
}

// End of code generation (covert_search_dp_gpu_initialize.cu)
