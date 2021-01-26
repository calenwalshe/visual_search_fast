//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  randsample.cpp
//
//  Code generation for function 'randsample'
//


// Include files
#include "randsample.h"
#include "covert_search_dp_data.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo jb_emlrtRSI = { 59, // lineNo
  "randsample",                        // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pathName
};

static emlrtRSInfo kb_emlrtRSI = { 60, // lineNo
  "randsample",                        // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pathName
};

static emlrtRSInfo lb_emlrtRSI = { 84, // lineNo
  "randsample",                        // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pathName
};

static emlrtRSInfo mb_emlrtRSI = { 95, // lineNo
  "randsample",                        // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pathName
};

static emlrtRSInfo pb_emlrtRSI = { 61, // lineNo
  "randi",                             // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randi.m"// pathName 
};

static emlrtRTEInfo i_emlrtRTEI = { 25,// lineNo
  27,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo j_emlrtRTEI = { 58,// lineNo
  13,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo k_emlrtRTEI = { 60,// lineNo
  31,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtBCInfo t_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  38,                                  // colNo
  "",                                  // aName
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo u_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  45,                                  // colNo
  "",                                  // aName
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo l_emlrtRTEI = { 79,// lineNo
  27,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtECInfo f_emlrtECI = { -1,  // nDims
  91,                                  // lineNo
  17,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtECInfo g_emlrtECI = { -1,  // nDims
  103,                                 // lineNo
  13,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtBCInfo v_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  160,                                 // lineNo
  10,                                  // colNo
  "",                                  // aName
  "allNonNegative",                    // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo w_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  64,                                  // lineNo
  9,                                   // colNo
  "",                                  // aName
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m",// pName
  0                                    // checkKind
};

static emlrtBCInfo x_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  66,                                  // lineNo
  13,                                  // colNo
  "",                                  // aName
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m",// pName
  0                                    // checkKind
};

static emlrtRTEInfo m_emlrtRTEI = { 60,// lineNo
  15,                                  // colNo
  "histc",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/datafun/histc.m"// pName 
};

static emlrtRTEInfo hb_emlrtRTEI = { 69,// lineNo
  9,                                   // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo ib_emlrtRTEI = { 62,// lineNo
  32,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo jb_emlrtRTEI = { 75,// lineNo
  24,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo kb_emlrtRTEI = { 91,// lineNo
  17,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo lb_emlrtRTEI = { 103,// lineNo
  13,                                  // colNo
  "randsample",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/stats/eml/randsample.m"// pName
};

static emlrtRTEInfo mb_emlrtRTEI = { 54,// lineNo
  1,                                   // colNo
  "histc",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/datafun/histc.m"// pName 
};

static emlrtRTEInfo nb_emlrtRTEI = { 55,// lineNo
  1,                                   // colNo
  "histc",                             // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/datafun/histc.m"// pName 
};

// Function Definitions
namespace coder
{
  void randsample(const emlrtStack *sp, real_T varargin_1, real_T varargin_2,
                  const ::coder::array<real_T, 1U> &varargin_4, ::coder::array<
                  real_T, 1U> &y)
  {
    array<real_T, 2U> edges;
    array<real_T, 1U> idx;
    array<real_T, 1U> r;
    array<real_T, 1U> unusedU0;
    emlrtStack b_st;
    emlrtStack st;
    real_T n;
    real_T sumw;
    real_T x_tmp;
    int32_T high_i;
    int32_T i;
    int32_T k;
    int32_T nbins;
    st.prev = sp;
    st.tls = sp->tls;
    b_st.prev = &st;
    b_st.tls = st.tls;
    emlrtHeapReferenceStackEnterFcnR2012b(sp);
    n = muDoubleScalarFloor(varargin_1);
    if (!(n == varargin_1)) {
      emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
        "Coder:stats:RandsampleBadN", "Coder:stats:RandsampleBadN", 0);
    }

    x_tmp = muDoubleScalarFloor(varargin_2);
    if (varargin_4.size(0) != 0) {
      boolean_T guard1 = false;
      if (!(varargin_4.size(0) == n)) {
        emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
          "stats:randsample:InputSizeMismatch",
          "stats:randsample:InputSizeMismatch", 2, 6, n);
      }

      st.site = &jb_emlrtRSI;
      nbins = varargin_4.size(0);
      sumw = varargin_4[0];
      for (k = 2; k <= nbins; k++) {
        sumw += varargin_4[k - 1];
      }

      guard1 = false;
      if (sumw > 0.0) {
        boolean_T p;
        st.site = &kb_emlrtRSI;
        p = true;
        i = varargin_4.size(0);
        for (k = 0; k < i; k++) {
          if ((k + 1 < 1) || (k + 1 > varargin_4.size(0))) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, varargin_4.size(0),
              &v_emlrtBCI, &st);
          }

          p = ((varargin_4[k] >= 0.0) && p);
        }

        if (!p) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
          "stats:randsample:InvalidWeights", "stats:randsample:InvalidWeights",
          0);
      }

      i = static_cast<int32_T>(n);
      nbins = i + 1;
      edges.set_size((&ib_emlrtRTEI), sp, 1, nbins);
      edges[0] = 0.0;
      if (i + 1 < 1.0) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n) + 1, 1,
          static_cast<int32_T>(n) + 1, &w_emlrtBCI, sp);
      }

      edges[static_cast<int32_T>(n)] = 1.0;
      for (high_i = 0; high_i <= i - 2; high_i++) {
        nbins = high_i + 1;
        if ((nbins < 1) || (nbins > edges.size(1))) {
          emlrtDynamicBoundsCheckR2012b(nbins, 1, edges.size(1), &t_emlrtBCI, sp);
        }

        if (nbins > varargin_4.size(0)) {
          emlrtDynamicBoundsCheckR2012b(nbins, 1, varargin_4.size(0),
            &u_emlrtBCI, sp);
        }

        if ((high_i + 2 < 1) || (high_i + 2 > edges.size(1))) {
          emlrtDynamicBoundsCheckR2012b(high_i + 2, 1, edges.size(1),
            &x_emlrtBCI, sp);
        }

        edges[high_i + 1] = muDoubleScalarMin(edges[high_i] + varargin_4[high_i]
          / sumw, 1.0);
      }
    } else {
      edges.set_size((&hb_emlrtRTEI), sp, 1, 1);
      edges[0] = 0.0;
    }

    y.set_size((&jb_emlrtRTEI), sp, (static_cast<int32_T>(x_tmp)));
    if ((!(n > 0.0)) && (static_cast<int32_T>(x_tmp) != 0)) {
      emlrtErrorWithMessageIdR2018a(sp, &l_emlrtRTEI,
        "stats:randsample:EmptyPopulation", "stats:randsample:EmptyPopulation",
        0);
    }

    if (static_cast<int32_T>(x_tmp) > 0) {
      if (varargin_4.size(0) == 0) {
        st.site = &lb_emlrtRSI;
        b_st.site = &pb_emlrtRSI;
        b_rand(&b_st, static_cast<int32_T>(x_tmp), idx);
        i = idx.size(0);
        for (k = 0; k < i; k++) {
          idx[k] = muDoubleScalarFloor(idx[k] * n) + 1.0;
        }

        i = static_cast<int32_T>(muDoubleScalarFloor(varargin_2));
        if (i != idx.size(0)) {
          emlrtSubAssignSizeCheck1dR2017a(i, idx.size(0), &f_emlrtECI, sp);
        }

        y.set_size((&kb_emlrtRTEI), sp, idx.size(0));
        nbins = idx.size(0);
        for (i = 0; i < nbins; i++) {
          y[i] = idx[i];
        }
      } else {
        st.site = &mb_emlrtRSI;
        b_rand(&st, static_cast<int32_T>(x_tmp), r);
        st.site = &mb_emlrtRSI;
        unusedU0.set_size((&mb_emlrtRTEI), (&st), edges.size(1));
        nbins = edges.size(1);
        for (i = 0; i < nbins; i++) {
          unusedU0[i] = 0.0;
        }

        idx.set_size((&nb_emlrtRTEI), (&st), r.size(0));
        nbins = r.size(0);
        for (i = 0; i < nbins; i++) {
          idx[i] = 0.0;
        }

        nbins = edges.size(1);
        if (nbins > 1) {
          boolean_T exitg1;
          high_i = 1;
          exitg1 = false;
          while ((!exitg1) && (high_i + 1 <= nbins)) {
            if (!(edges[high_i] >= edges[high_i - 1])) {
              emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI,
                "Coder:MATLAB:histc_InvalidInput3",
                "Coder:MATLAB:histc_InvalidInput3", 0);
            } else {
              high_i++;
            }
          }
        }

        nbins = 0;
        i = r.size(0);
        for (k = 0; k < i; k++) {
          int32_T low_i;
          low_i = 0;
          if (!muDoubleScalarIsNaN(r[nbins])) {
            if ((r[nbins] >= edges[0]) && (r[nbins] < edges[edges.size(1) - 1]))
            {
              int32_T low_ip1;
              high_i = edges.size(1);
              low_i = 1;
              low_ip1 = 2;
              while (high_i > low_ip1) {
                int32_T mid_i;
                mid_i = (low_i >> 1) + (high_i >> 1);
                if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
                  mid_i++;
                }

                if (r[nbins] >= edges[mid_i - 1]) {
                  low_i = mid_i;
                  low_ip1 = mid_i + 1;
                } else {
                  high_i = mid_i;
                }
              }
            }

            if (r[nbins] == edges[edges.size(1) - 1]) {
              low_i = edges.size(1);
            }
          }

          if (low_i > 0) {
            unusedU0[low_i - 1] = unusedU0[low_i - 1] + 1.0;
          }

          idx[nbins] = low_i;
          nbins++;
        }
      }

      if (y.size(0) != idx.size(0)) {
        emlrtSubAssignSizeCheck1dR2017a(y.size(0), idx.size(0), &g_emlrtECI, sp);
      }

      y.set_size((&lb_emlrtRTEI), sp, idx.size(0));
      nbins = idx.size(0);
      for (i = 0; i < nbins; i++) {
        y[i] = idx[i];
      }
    }

    emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  }
}

// End of code generation (randsample.cpp)
