//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_gpu_api.cu
//
//  Code generation for function '_coder_covert_search_dp_gpu_api'
//


// Include files
#include "_coder_covert_search_dp_gpu_api.h"
#include "covert_search_dp_gpu.h"
#include "covert_search_dp_gpu_data.h"
#include "covert_search_dp_gpu_mexutil.h"
#include "covert_search_dp_gpu_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static void b_emlrt_marshallIn(const mxArray *priorhfp, const char_T *identifier,
  char_T y[10]);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[10]);
static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[9]);
static void d_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[10]);
static void emlrt_marshallIn(const mxArray *dpmapfp, const char_T *identifier,
  char_T y[9]);
static void emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[9]);

// Function Definitions
static void b_emlrt_marshallIn(const mxArray *priorhfp, const char_T *identifier,
  char_T y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(emlrtAlias(priorhfp), &thisId, y);
  emlrtDestroyArray(&priorhfp);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[10])
{
  d_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[9])
{
  static const int32_T dims[2] = { 1, 9 };

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "char", false, 2U,
    dims);
  emlrtImportCharArrayR2015b(emlrtRootTLSGlobal, src, &ret[0], 9);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, char_T ret[10])
{
  static const int32_T dims[2] = { 1, 10 };

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "char", false, 2U,
    dims);
  emlrtImportCharArrayR2015b(emlrtRootTLSGlobal, src, &ret[0], 10);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const mxArray *dpmapfp, const char_T *identifier,
  char_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(emlrtAlias(dpmapfp), &thisId, y);
  emlrtDestroyArray(&dpmapfp);
}

static void emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, char_T y[9])
{
  c_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

void covert_search_dp_gpu_api(covert_search_dp_gpuStackData *SD, const mxArray *
  const prhs[3])
{
  real_T trials;
  char_T priorhfp[10];
  char_T dpmapfp[9];

  // Marshall function inputs
  trials = emlrt_marshallIn(emlrtAliasP(prhs[0]), "trials");
  emlrt_marshallIn(emlrtAliasP(prhs[1]), "dpmapfp", dpmapfp);
  b_emlrt_marshallIn(emlrtAliasP(prhs[2]), "priorhfp", priorhfp);

  // Invoke the target function
  covert_search_dp_gpu(SD, trials, dpmapfp, priorhfp);
}

// End of code generation (_coder_covert_search_dp_gpu_api.cu)
