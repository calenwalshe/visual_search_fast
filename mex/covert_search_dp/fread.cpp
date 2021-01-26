//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  fread.cpp
//
//  Code generation for function 'fread'
//


// Include files
#include "fread.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_mexutil.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo y_emlrtRSI = { 50,  // lineNo
  "fread",                             // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtRSInfo ab_emlrtRSI = { 80, // lineNo
  "fread",                             // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtRSInfo bb_emlrtRSI = { 163,// lineNo
  "fullFread",                         // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtMCInfo c_emlrtMCI = { 350, // lineNo
  1,                                   // colNo
  "freadExtrinsic",                    // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pName 
};

static emlrtMCInfo d_emlrtMCI = { 354, // lineNo
  9,                                   // colNo
  "freadExtrinsic",                    // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pName 
};

static emlrtMCInfo e_emlrtMCI = { 378, // lineNo
  13,                                  // colNo
  "freadExtrinsic",                    // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pName 
};

static emlrtRTEInfo e_emlrtRTEI = { 66,// lineNo
  9,                                   // colNo
  "fread",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pName 
};

static emlrtRTEInfo y_emlrtRTEI = { 398,// lineNo
  9,                                   // colNo
  "fread",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pName 
};

static emlrtRSInfo xb_emlrtRSI = { 350,// lineNo
  "freadExtrinsic",                    // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtRSInfo yb_emlrtRSI = { 378,// lineNo
  "freadExtrinsic",                    // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtRSInfo ac_emlrtRSI = { 354,// lineNo
  "freadExtrinsic",                    // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

static emlrtRSInfo dc_emlrtRSI = { 401,// lineNo
  "freadExtrinsic",                    // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fread.m"// pathName 
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t, const
  char_T *identifier, coder::array<real_T, 2U> &y);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<real_T, 2U> &y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<real_T, 2U> &ret);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<real_T, 2U> &ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *t, const
  char_T *identifier, coder::array<real_T, 2U> &y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<real_T, 2U> &y);
static const mxArray *emlrt_marshallOut(const real_T u[2]);
static void feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  const mxArray *d, const mxArray *e, const mxArray *f,
                  emlrtMCInfo *location, const mxArray **g, const mxArray **h);
static const mxArray *size(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t, const
  char_T *identifier, coder::array<real_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(t), &thisId, y);
  emlrtDestroyArray(&t);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<real_T, 2U> &y)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2] = { 2400, 2400 };

  int32_T iv[2];
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret.set_size(((emlrtRTEInfo *)NULL), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b(sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<real_T, 2U> &ret)
{
  static const int32_T dims[2] = { 135, 135 };

  int32_T iv[2];
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret.set_size(((emlrtRTEInfo *)NULL), sp, iv[0], iv[1]);
  emlrtImportArrayR2015b(sp, src, &(ret.data())[0], 8, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *t, const
  char_T *identifier, coder::array<real_T, 2U> &y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(t), &thisId, y);
  emlrtDestroyArray(&t);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<real_T, 2U> &y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *emlrt_marshallOut(const real_T u[2])
{
  static const int32_T iv[2] = { 1, 2 };

  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = NULL;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u[0];
  pData[1] = u[1];
  emlrtAssign(&y, m);
  return y;
}

static void feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  const mxArray *d, const mxArray *e, const mxArray *f,
                  emlrtMCInfo *location, const mxArray **g, const mxArray **h)
{
  const mxArray *pArrays[5];
  const mxArray *mv[2];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  emlrtAssign(g, emlrtCallMATLABR2012b(sp, 2, &mv[0], 5, &pArrays[0], "feval",
    true, location));
  emlrtAssign(h, mv[1]);
}

static const mxArray *size(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, &pArrays[0], "size", true, location);
}

namespace coder
{
  void b_fread(const emlrtStack *sp, real_T fileID, ::coder::array<real_T, 2U>
               &A)
  {
    static const int32_T iv[2] = { 1, 5 };

    static const int32_T iv1[2] = { 1, 6 };

    static const char_T precision[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

    static const char_T u[5] = { 'f', 'r', 'e', 'a', 'd' };

    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    const mxArray *b_y;
    const mxArray *c_y;
    const mxArray *count;
    const mxArray *d_y;
    const mxArray *e_y;
    const mxArray *f_y;
    const mxArray *m;
    const mxArray *t;
    const mxArray *y;
    real_T dv[2];
    real_T ncols;
    real_T nrows;
    st.prev = sp;
    st.tls = sp->tls;
    st.site = &y_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    if ((!(fileID != 0.0)) || (!(fileID != 1.0)) || (!(fileID != 2.0))) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:legacy_two_part:notimplemented_mx",
        "MATLAB:legacy_two_part:notimplemented_mx", 0);
    }

    b_st.site = &ab_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    t = NULL;
    count = NULL;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(fileID);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 6, m, &precision[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = 0;
    emlrtAssign(&d_y, m);
    dv[0] = 2400.0;
    dv[1] = 2400.0;
    d_st.site = &xb_emlrtRSI;
    feval(&d_st, y, b_y, emlrt_marshallOut(dv), c_y, d_y, &c_emlrtMCI, &t,
          &count);
    d_st.site = &xb_emlrtRSI;
    emlrt_marshallIn(&d_st, emlrtAlias(count), "count");
    e_y = NULL;
    m = emlrtCreateDoubleScalar(1.0);
    emlrtAssign(&e_y, m);
    d_st.site = &ac_emlrtRSI;
    nrows = emlrt_marshallIn(&d_st, ::size(&d_st, emlrtAlias(t), e_y,
      &d_emlrtMCI), "<output of size>");
    f_y = NULL;
    m = emlrtCreateDoubleScalar(2.0);
    emlrtAssign(&f_y, m);
    d_st.site = &yb_emlrtRSI;
    ncols = emlrt_marshallIn(&d_st, ::size(&d_st, emlrtAlias(t), f_y,
      &e_emlrtMCI), "<output of size>");
    if (nrows * ncols == 0.0) {
      A.set_size((&y_emlrtRTEI), (&c_st), 2400, 0);
    } else {
      d_st.site = &dc_emlrtRSI;
      emlrt_marshallIn(&d_st, emlrtAlias(t), "t", A);
    }

    emlrtDestroyArray(&t);
    emlrtDestroyArray(&count);
  }

  void c_fread(const emlrtStack *sp, real_T fileID, ::coder::array<real_T, 2U>
               &A)
  {
    static const int32_T iv[2] = { 1, 5 };

    static const int32_T iv1[2] = { 1, 6 };

    static const char_T precision[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

    static const char_T u[5] = { 'f', 'r', 'e', 'a', 'd' };

    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    const mxArray *b_y;
    const mxArray *c_y;
    const mxArray *count;
    const mxArray *d_y;
    const mxArray *e_y;
    const mxArray *f_y;
    const mxArray *m;
    const mxArray *t;
    const mxArray *y;
    real_T dv[2];
    real_T ncols;
    real_T nrows;
    st.prev = sp;
    st.tls = sp->tls;
    st.site = &y_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    if ((!(fileID != 0.0)) || (!(fileID != 1.0)) || (!(fileID != 2.0))) {
      emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
        "MATLAB:legacy_two_part:notimplemented_mx",
        "MATLAB:legacy_two_part:notimplemented_mx", 0);
    }

    b_st.site = &ab_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    t = NULL;
    count = NULL;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(fileID);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 6, m, &precision[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = 0;
    emlrtAssign(&d_y, m);
    dv[0] = 135.0;
    dv[1] = 135.0;
    d_st.site = &xb_emlrtRSI;
    feval(&d_st, y, b_y, emlrt_marshallOut(dv), c_y, d_y, &c_emlrtMCI, &t,
          &count);
    d_st.site = &xb_emlrtRSI;
    emlrt_marshallIn(&d_st, emlrtAlias(count), "count");
    e_y = NULL;
    m = emlrtCreateDoubleScalar(1.0);
    emlrtAssign(&e_y, m);
    d_st.site = &ac_emlrtRSI;
    nrows = emlrt_marshallIn(&d_st, ::size(&d_st, emlrtAlias(t), e_y,
      &d_emlrtMCI), "<output of size>");
    f_y = NULL;
    m = emlrtCreateDoubleScalar(2.0);
    emlrtAssign(&f_y, m);
    d_st.site = &yb_emlrtRSI;
    ncols = emlrt_marshallIn(&d_st, ::size(&d_st, emlrtAlias(t), f_y,
      &e_emlrtMCI), "<output of size>");
    if (nrows * ncols == 0.0) {
      A.set_size((&y_emlrtRTEI), (&c_st), 135, 0);
    } else {
      d_st.site = &dc_emlrtRSI;
      b_emlrt_marshallIn(&d_st, emlrtAlias(t), "t", A);
    }

    emlrtDestroyArray(&t);
    emlrtDestroyArray(&count);
  }
}

// End of code generation (fread.cpp)
