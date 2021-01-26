//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  fileManager.cpp
//
//  Code generation for function 'fileManager'
//


// Include files
#include "fileManager.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_mexutil.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo x_emlrtRSI = { 35,  // lineNo
  "fileManager",                       // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/private/fileManager.m"// pathName 
};

static emlrtMCInfo b_emlrtMCI = { 99,  // lineNo
  17,                                  // colNo
  "fileopen",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/private/fileManager.m"// pName 
};

static emlrtRSInfo wb_emlrtRSI = { 99, // lineNo
  "fileopen",                          // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/iofun/private/fileManager.m"// pathName 
};

// Function Declarations
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

// Function Definitions
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, &pArrays[0], "feval", true,
    location);
}

namespace coder
{
  real_T fileManager(const emlrtStack *sp, const char_T varargin_1_data[], const
                     int32_T varargin_1_size[2])
  {
    static const int32_T iv[2] = { 1, 5 };

    static const char_T u[5] = { 'f', 'o', 'p', 'e', 'n' };

    emlrtStack b_st;
    emlrtStack st;
    const mxArray *b_y;
    const mxArray *c_y;
    const mxArray *m;
    const mxArray *y;
    int32_T iv1[2];
    st.prev = sp;
    st.tls = sp->tls;
    st.site = &x_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    iv1[0] = varargin_1_size[0];
    iv1[1] = varargin_1_size[1];
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, varargin_1_size[1], m, &varargin_1_data[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateString1('r');
    emlrtAssign(&c_y, m);
    b_st.site = &wb_emlrtRSI;
    return emlrt_marshallIn(&b_st, feval(&b_st, y, b_y, c_y, &b_emlrtMCI),
      "<output of feval>");
  }

  real_T fileManager(const emlrtStack *sp)
  {
    static const int32_T iv[2] = { 1, 5 };

    static const int32_T iv1[2] = { 1, 4 };

    static const char_T u[5] = { 'f', 'o', 'p', 'e', 'n' };

    static const char_T filename[4] = { 'r', 't', 'm', 'p' };

    emlrtStack b_st;
    emlrtStack st;
    const mxArray *b_y;
    const mxArray *c_y;
    const mxArray *m;
    const mxArray *y;
    st.prev = sp;
    st.tls = sp->tls;
    st.site = &x_emlrtRSI;
    b_st.prev = &st;
    b_st.tls = st.tls;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &filename[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateString1('r');
    emlrtAssign(&c_y, m);
    b_st.site = &wb_emlrtRSI;
    return emlrt_marshallIn(&b_st, feval(&b_st, y, b_y, c_y, &b_emlrtMCI),
      "<output of feval>");
  }
}

// End of code generation (fileManager.cpp)
