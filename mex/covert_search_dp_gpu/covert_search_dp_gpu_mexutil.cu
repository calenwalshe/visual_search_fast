//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu_mexutil.cu
//
//  Code generation for function 'covert_search_dp_gpu_mexutil'
//


// Include files
#include "covert_search_dp_gpu_mexutil.h"
#include "covert_search_dp_gpu_data.h"
#include "rt_nonfinite.h"

// Function Definitions
real_T b_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U,
    &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

real_T emlrt_marshallIn(const mxArray *a__output_of_feval_, const char_T
  *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(emlrtAlias(a__output_of_feval_), &thisId);
  emlrtDestroyArray(&a__output_of_feval_);
  return y;
}

real_T emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

// End of code generation (covert_search_dp_gpu_mexutil.cu)
