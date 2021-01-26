//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  ind2sub.cpp
//
//  Code generation for function 'ind2sub'
//


// Include files
#include "ind2sub.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo n_emlrtRTEI = { 38,// lineNo
  15,                                  // colNo
  "ind2sub_indexClass",                // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pName 
};

static emlrtRTEInfo ob_emlrtRTEI = { 30,// lineNo
  1,                                   // colNo
  "ind2sub",                           // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pName 
};

static emlrtRTEInfo pb_emlrtRTEI = { 42,// lineNo
  5,                                   // colNo
  "ind2sub",                           // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pName 
};

static emlrtRTEInfo qb_emlrtRTEI = { 43,// lineNo
  5,                                   // colNo
  "ind2sub",                           // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m"// pName 
};

static emlrtRSInfo cc_emlrtRSI = { 18, // lineNo
  "indexDivide",                       // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexDivide.m"// pathName 
};

// Function Declarations
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

// Function Definitions
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T b_numerator;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    uint32_T b_denominator;
    if (numerator < 0) {
      b_numerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      b_numerator = static_cast<uint32_T>(numerator);
    }

    if (denominator < 0) {
      b_denominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      b_denominator = static_cast<uint32_T>(denominator);
    }

    b_numerator /= b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(b_numerator);
    } else {
      quotient = static_cast<int32_T>(b_numerator);
    }
  }

  return quotient;
}

namespace coder
{
  void ind2sub_indexClass(const emlrtStack *sp, const real_T siz[2], const ::
    coder::array<real_T, 1U> &ndx, ::coder::array<int32_T, 1U> &varargout_1, ::
    coder::array<int32_T, 1U> &varargout_2)
  {
    array<int32_T, 1U> vk;
    emlrtStack st;
    int32_T k;
    int32_T loop_ub;
    boolean_T exitg1;
    st.prev = sp;
    st.tls = sp->tls;
    emlrtHeapReferenceStackEnterFcnR2012b(sp);
    varargout_1.set_size((&ob_emlrtRTEI), sp, ndx.size(0));
    loop_ub = ndx.size(0);
    for (k = 0; k < loop_ub; k++) {
      varargout_1[k] = static_cast<int32_T>(ndx[k]);
    }

    loop_ub = static_cast<int32_T>(siz[0]) * static_cast<int32_T>(siz[1]);
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargout_1.size(0) - 1)) {
      if ((varargout_1[k] >= 1) && (varargout_1[k] <= loop_ub)) {
        k++;
      } else {
        emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI,
          "Coder:MATLAB:ind2sub_IndexOutOfRange",
          "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
      }
    }

    loop_ub = varargout_1.size(0);
    for (k = 0; k < loop_ub; k++) {
      varargout_1[k] = varargout_1[k] - 1;
    }

    vk.set_size((&pb_emlrtRTEI), sp, varargout_1.size(0));
    loop_ub = varargout_1.size(0);
    for (k = 0; k < loop_ub; k++) {
      st.site = &cc_emlrtRSI;
      vk[k] = div_s32(&st, varargout_1[k], static_cast<int32_T>(siz[0]));
    }

    varargout_2.set_size((&qb_emlrtRTEI), sp, vk.size(0));
    loop_ub = vk.size(0);
    for (k = 0; k < loop_ub; k++) {
      varargout_2[k] = vk[k] + 1;
    }

    loop_ub = varargout_1.size(0);
    for (k = 0; k < loop_ub; k++) {
      varargout_1[k] = varargout_1[k] - vk[k] * static_cast<int32_T>(siz[0]);
    }

    loop_ub = varargout_1.size(0);
    for (k = 0; k < loop_ub; k++) {
      varargout_1[k] = varargout_1[k] + 1;
    }

    emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  }
}

// End of code generation (ind2sub.cpp)
