/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_covert_search_dp_mex.c
 *
 * Code generation for function 'covert_search_dp'
 *
 */

/* Include files */
#include "_coder_covert_search_dp_mex.h"
#include "_coder_covert_search_dp_api.h"

/* Function Definitions */
void covert_search_dp_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[3])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        16, "covert_search_dp");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "covert_search_dp");
  }

  /* Call the function. */
  covert_search_dp_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&covert_search_dp_atexit);

  /* Module initialization. */
  covert_search_dp_initialize();

  /* Dispatch the entry-point. */
  covert_search_dp_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  covert_search_dp_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_covert_search_dp_mex.c) */
