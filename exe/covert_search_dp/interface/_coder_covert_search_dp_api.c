/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_covert_search_dp_api.c
 *
 * Code generation for function 'covert_search_dp'
 *
 */

/* Include files */
#include "_coder_covert_search_dp_api.h"
#include "_coder_covert_search_dp_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131595U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "covert_search_dp",                  /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dpmapfp,
  const char_T *identifier, char_T y[9]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[9]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *priorhfp,
  const char_T *identifier, char_T y[10]);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *trials,
  const char_T *identifier);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[10]);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[9]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[10]);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dpmapfp,
  const char_T *identifier, char_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(dpmapfp), &thisId, y);
  emlrtDestroyArray(&dpmapfp);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[9])
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *priorhfp,
  const char_T *identifier, char_T y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(priorhfp), &thisId, y);
  emlrtDestroyArray(&priorhfp);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *trials,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(trials), &thisId);
  emlrtDestroyArray(&trials);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[10])
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[9])
{
  static const int32_T dims[2] = { 1, 9 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 9);
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[10])
{
  static const int32_T dims[2] = { 1, 10 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 10);
  emlrtDestroyArray(&src);
}

void covert_search_dp_api(const mxArray * const prhs[3])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T trials;
  char_T priorhfp[10];
  char_T dpmapfp[9];
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  trials = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "trials");
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "dpmapfp", dpmapfp);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "priorhfp", priorhfp);

  /* Invoke the target function */
  covert_search_dp(trials, dpmapfp, priorhfp);
}

void covert_search_dp_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  covert_search_dp_xil_terminate();
  covert_search_dp_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void covert_search_dp_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void covert_search_dp_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_covert_search_dp_api.c) */
