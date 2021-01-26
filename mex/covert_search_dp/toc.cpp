//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  toc.cpp
//
//  Code generation for function 'toc'
//


// Include files
#include "toc.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_mexutil.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include "emlrt.h"
#include <stdio.h>

// Variable Definitions
static emlrtRSInfo rb_emlrtRSI = { 31, // lineNo
  "toc",                               // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/timefun/toc.m"// pathName 
};

static emlrtRSInfo sb_emlrtRSI = { 36, // lineNo
  "toc",                               // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/timefun/toc.m"// pathName 
};

static emlrtRSInfo tb_emlrtRSI = { 43, // lineNo
  "toc",                               // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/timefun/toc.m"// pathName 
};

static emlrtRSInfo ub_emlrtRSI = { 38, // lineNo
  "fprintf",                           // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"// pathName 
};

static emlrtMCInfo f_emlrtMCI = { 64,  // lineNo
  18,                                  // colNo
  "fprintf",                           // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"// pName 
};

static emlrtRSInfo bc_emlrtRSI = { 64, // lineNo
  "fprintf",                           // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/fprintf.m"// pathName 
};

// Function Declarations
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

// Function Definitions
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, &pArrays[0], "feval", true,
    location);
}

namespace coder
{
  void toc(const emlrtStack *sp)
  {
    static const int32_T iv[2] = { 1, 7 };

    static const int32_T iv1[2] = { 1, 28 };

    static const char_T b_u[28] = { 'E', 'l', 'a', 'p', 's', 'e', 'd', ' ', 't',
      'i', 'm', 'e', ' ', 'i', 's', ' ', '%', 'f', ' ', 's', 'e', 'c', 'o', 'n',
      'd', 's', '\\', 'n' };

    static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    emlrtTimespec tnow;
    const mxArray *b_y;
    const mxArray *c_y;
    const mxArray *d_y;
    const mxArray *m;
    const mxArray *y;
    real_T tstart_tv_nsec;
    real_T tstart_tv_sec;
    int32_T status;
    st.prev = sp;
    st.tls = sp->tls;
    st.site = &rb_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    internal::time::impl::timeKeeper(&st, &tstart_tv_sec, &tstart_tv_nsec);
    st.site = &sb_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &t_emlrtRSI;
    status = emlrtClockGettimeMonotonic(&tnow);
    d_st.site = &u_emlrtRSI;
    if (status != 0) {
      emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
        "Coder:toolbox:POSIXCallFailed", "Coder:toolbox:POSIXCallFailed", 5, 4,
        26, "emlrtClockGettimeMonotonic", 12, status);
    }

    st.site = &tb_emlrtRSI;
    b_st.site = &ub_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(1.0);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateDoubleScalar((tnow.tv_sec - tstart_tv_sec) + (tnow.tv_nsec -
      tstart_tv_nsec) / 1.0E+9);
    emlrtAssign(&d_y, m);
    c_st.site = &bc_emlrtRSI;
    emlrt_marshallIn(&c_st, feval(&c_st, y, b_y, c_y, d_y, &f_emlrtMCI),
                     "<output of feval>");
  }
}

// End of code generation (toc.cpp)
