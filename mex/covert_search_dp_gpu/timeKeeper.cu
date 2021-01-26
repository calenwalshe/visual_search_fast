//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  timeKeeper.cu
//
//  Code generation for function 'timeKeeper'
//


// Include files
#include "timeKeeper.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

// Variable Definitions
static emlrtTimespec savedTime;
static boolean_T savedTime_not_empty;

// Function Definitions
namespace coder
{
  namespace internal
  {
    namespace time
    {
      namespace impl
      {
        void timeKeeper(real_T *outTime_tv_sec, real_T *outTime_tv_nsec)
        {
          *outTime_tv_sec = savedTime.tv_sec;
          *outTime_tv_nsec = savedTime.tv_nsec;
        }

        void timeKeeper(const emlrtTimespec newTime)
        {
          if (!savedTime_not_empty) {
            emlrtClockGettimeMonotonic(&savedTime);
            savedTime_not_empty = true;
          }

          savedTime = newTime;
        }
      }
    }
  }
}

void savedTime_not_empty_init()
{
  savedTime_not_empty = false;
}

// End of code generation (timeKeeper.cu)
