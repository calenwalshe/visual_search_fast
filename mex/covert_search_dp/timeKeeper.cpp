//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  timeKeeper.cpp
//
//  Code generation for function 'timeKeeper'
//


// Include files
#include "timeKeeper.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

// Variable Definitions
static emlrtTimespec savedTime;
static boolean_T savedTime_not_empty;
static emlrtRSInfo v_emlrtRSI = { 13,  // lineNo
  "timeKeeper",                        // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/+impl/timeKeeper.m"// pathName 
};

static emlrtRTEInfo o_emlrtRTEI = { 11,// lineNo
  9,                                   // colNo
  "timeKeeper",                        // fName
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/+impl/timeKeeper.m"// pName 
};

// Function Definitions
namespace coder
{
  namespace internal
  {
    namespace time
    {
      namespace impl
      {
        void timeKeeper(const emlrtStack *sp, const emlrtTimespec newTime)
        {
          emlrtStack b_st;
          emlrtStack c_st;
          emlrtStack d_st;
          emlrtStack st;
          st.prev = sp;
          st.tls = sp->tls;
          b_st.prev = &st;
          b_st.tls = st.tls;
          c_st.prev = &b_st;
          c_st.tls = b_st.tls;
          d_st.prev = &c_st;
          d_st.tls = c_st.tls;
          if (!savedTime_not_empty) {
            int32_T status;
            st.site = &v_emlrtRSI;
            b_st.site = &s_emlrtRSI;
            c_st.site = &t_emlrtRSI;
            status = emlrtClockGettimeMonotonic(&savedTime);
            d_st.site = &u_emlrtRSI;
            if (status != 0) {
              emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                "Coder:toolbox:POSIXCallFailed", "Coder:toolbox:POSIXCallFailed",
                5, 4, 26, "emlrtClockGettimeMonotonic", 12, status);
            }

            savedTime_not_empty = true;
          }

          savedTime = newTime;
        }

        void timeKeeper(const emlrtStack *sp, real_T *outTime_tv_sec, real_T
                        *outTime_tv_nsec)
        {
          if (!savedTime_not_empty) {
            emlrtErrorWithMessageIdR2018a(sp, &o_emlrtRTEI,
              "MATLAB:toc:callTicFirstNoInputs",
              "MATLAB:toc:callTicFirstNoInputs", 0);
          }

          *outTime_tv_sec = savedTime.tv_sec;
          *outTime_tv_nsec = savedTime.tv_nsec;
        }
      }
    }
  }
}

void savedTime_not_empty_init()
{
  savedTime_not_empty = false;
}

// End of code generation (timeKeeper.cpp)
