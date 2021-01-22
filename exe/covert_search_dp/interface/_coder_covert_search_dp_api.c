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
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *priorhfn,
  const char_T *identifier))[5760000];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[5760000];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rtmpfn,
  const char_T *identifier))[18225];
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *trials,
  const char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[18225];
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[5760000];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[18225];

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *priorhfn,
  const char_T *identifier))[5760000]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[5760000];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(priorhfn), &thisId);
  emlrtDestroyArray(&priorhfn);
  return y;
}
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[5760000]
{
  real_T (*y)[5760000];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rtmpfn,
  const char_T *identifier))[18225]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[18225];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(rtmpfn), &thisId);
  emlrtDestroyArray(&rtmpfn);
  return y;
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

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[18225]
{
  real_T (*y)[18225];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[5760000]
{
  static const int32_T dims[2] = { 2400, 2400 };

  real_T (*ret)[5760000];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[5760000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[18225]
{
  static const int32_T dims[2] = { 135, 135 };

  real_T (*ret)[18225];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[18225])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void covert_search_dp_api(const mxArray * const prhs[5], const mxArray *plhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T (*dpmapfn)[5760000];
  real_T (*priorhfn)[5760000];
  real_T (*rtmpfn)[18225];
  real_T seed_val;
  real_T trials;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  trials = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "trials");
  priorhfn = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "priorhfn");
  dpmapfn = c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "dpmapfn");
  rtmpfn = e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "rtmpfn");
  seed_val = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "seed_val");

  /* Invoke the target function */
  trials = covert_search_dp(trials, *priorhfn, *dpmapfn, *rtmpfn, seed_val);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(trials);
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
