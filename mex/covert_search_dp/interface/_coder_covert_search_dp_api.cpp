//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  _coder_covert_search_dp_api.cpp
//
//  Code generation for function '_coder_covert_search_dp_api'
//


// Include files
#include "_coder_covert_search_dp_api.h"
#include "covert_search_dp.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_mexutil.h"
#include "covert_search_dp_types.h"
#include "rt_nonfinite.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *dpmapfp, const
  char_T *identifier, char_T y_data[], int32_T y_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 1, 10 };

  int32_T iv[2];
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims, &bv[0], iv);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *dpmapfp, const
  char_T *identifier, char_T y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(dpmapfp), &thisId, y_data, y_size);
  emlrtDestroyArray(&dpmapfp);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

void covert_search_dp_api(covert_search_dpStackData *SD, const mxArray * const
  prhs[3])
{
  emlrtStack st = { NULL,              // site
    NULL,                              // tls
    NULL                               // prev
  };

  real_T trials;
  int32_T dpmapfp_size[2];
  int32_T priorhfp_size[2];
  char_T dpmapfp_data[10];
  char_T priorhfp_data[10];
  st.tls = emlrtRootTLSGlobal;

  // Marshall function inputs
  trials = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "trials");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "dpmapfp", dpmapfp_data,
                   dpmapfp_size);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "priorhfp", priorhfp_data,
                   priorhfp_size);

  // Invoke the target function
  covert_search_dp(SD, &st, trials, dpmapfp_data, dpmapfp_size, priorhfp_data,
                   priorhfp_size);
}

// End of code generation (_coder_covert_search_dp_api.cpp)
