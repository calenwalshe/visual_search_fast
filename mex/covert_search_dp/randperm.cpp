//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  randperm.cpp
//
//  Code generation for function 'randperm'
//


// Include files
#include "randperm.h"
#include "covert_search_dp_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo db_emlrtRSI = { 16, // lineNo
  "randperm",                          // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randperm.m"// pathName 
};

static emlrtRSInfo eb_emlrtRSI = { 15, // lineNo
  "randperm",                          // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randperm.m"// pathName 
};

static emlrtRSInfo fb_emlrtRSI = { 145,// lineNo
  "sortIdx",                           // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/sortIdx.m"// pathName 
};

static emlrtRSInfo gb_emlrtRSI = { 57, // lineNo
  "mergesort",                         // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/mergesort.m"// pathName 
};

static emlrtRSInfo hb_emlrtRSI = { 21, // lineNo
  "eml_int_forloop_overflow_check",    // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"// pathName 
};

static emlrtRTEInfo g_emlrtRTEI = { 12,// lineNo
  15,                                  // colNo
  "randperm",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randperm.m"// pName 
};

static emlrtRTEInfo db_emlrtRTEI = { 16,// lineNo
  5,                                   // colNo
  "randperm",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randperm.m"// pName 
};

static emlrtRTEInfo eb_emlrtRTEI = { 52,// lineNo
  9,                                   // colNo
  "mergesort",                         // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/mergesort.m"// pName 
};

static emlrtRTEInfo fb_emlrtRTEI = { 17,// lineNo
  5,                                   // colNo
  "randperm",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randperm.m"// pName 
};

// Function Definitions
namespace coder
{
  void randperm(const emlrtStack *sp, real_T n, ::coder::array<real_T, 2U> &p)
  {
    array<int32_T, 2U> idx;
    array<int32_T, 1U> iwork;
    emlrtStack b_st;
    emlrtStack c_st;
    emlrtStack d_st;
    emlrtStack st;
    int32_T b_i;
    int32_T b_n;
    int32_T i;
    int32_T i2;
    int32_T k;
    int32_T qEnd;
    st.prev = sp;
    st.tls = sp->tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    c_st.prev = &b_st;
    c_st.tls = b_st.tls;
    d_st.prev = &c_st;
    d_st.tls = c_st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b(sp);
    if (!(n == muDoubleScalarFloor(n))) {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
        "MATLAB:randperm:inputType", "MATLAB:randperm:inputType", 0);
    }

    st.site = &eb_emlrtRSI;
    b_rand(&st, n, p);
    st.site = &db_emlrtRSI;
    b_n = p.size(1) + 1;
    idx.set_size((&db_emlrtRTEI), (&st), 1, p.size(1));
    i = p.size(1);
    for (b_i = 0; b_i < i; b_i++) {
      idx[b_i] = 0;
    }

    if (p.size(1) != 0) {
      real_T d;
      b_st.site = &fb_emlrtRSI;
      iwork.set_size((&eb_emlrtRTEI), (&b_st), p.size(1));
      i2 = p.size(1) - 1;
      c_st.site = &gb_emlrtRSI;
      if ((1 <= p.size(1) - 1) && (p.size(1) - 1 > 2147483645)) {
        d_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 1; k <= i2; k += 2) {
        d = p[k];
        if ((p[k - 1] <= d) || muDoubleScalarIsNaN(d)) {
          idx[k - 1] = k;
          idx[k] = k + 1;
        } else {
          idx[k - 1] = k + 1;
          idx[k] = k;
        }
      }

      if ((p.size(1) & 1) != 0) {
        idx[p.size(1) - 1] = p.size(1);
      }

      i = 2;
      while (i < b_n - 1) {
        int32_T j;
        i2 = i << 1;
        j = 1;
        for (int32_T pEnd = i + 1; pEnd < b_n; pEnd = qEnd + i) {
          int32_T b_p;
          int32_T kEnd;
          int32_T q;
          b_p = j;
          q = pEnd - 1;
          qEnd = j + i2;
          if (qEnd > b_n) {
            qEnd = b_n;
          }

          k = 0;
          kEnd = qEnd - j;
          while (k + 1 <= kEnd) {
            d = p[idx[q] - 1];
            b_i = idx[b_p - 1];
            if ((p[b_i - 1] <= d) || muDoubleScalarIsNaN(d)) {
              iwork[k] = b_i;
              b_p++;
              if (b_p == pEnd) {
                while (q + 1 < qEnd) {
                  k++;
                  iwork[k] = idx[q];
                  q++;
                }
              }
            } else {
              iwork[k] = idx[q];
              q++;
              if (q + 1 == qEnd) {
                while (b_p < pEnd) {
                  k++;
                  iwork[k] = idx[b_p - 1];
                  b_p++;
                }
              }
            }

            k++;
          }

          for (k = 0; k < kEnd; k++) {
            idx[(j + k) - 1] = iwork[k];
          }

          j = qEnd;
        }

        i = i2;
      }
    }

    i = p.size(0);
    i2 = p.size(1);
    p.set_size((&fb_emlrtRTEI), sp, 1, i2);
    i *= i2;
    for (b_i = 0; b_i < i; b_i++) {
      p[b_i] = idx[b_i];
    }

    emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  }
}

// End of code generation (randperm.cpp)
