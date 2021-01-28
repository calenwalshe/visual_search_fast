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
#include "rt_nonfinite.h"
#include <time.h>

// Type Definitions
struct struct_T
{
  double tv_sec;
  double tv_nsec;
};

// Variable Definitions
static struct_T savedTime;
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
        void timeKeeper(double newTime_tv_sec, double newTime_tv_nsec)
        {
          struct timespec b_timespec;
          if (!savedTime_not_empty) {
            clock_gettime(CLOCK_MONOTONIC, &b_timespec);
            savedTime_not_empty = true;
          }

          savedTime.tv_sec = newTime_tv_sec;
          savedTime.tv_nsec = newTime_tv_nsec;
        }

        void timeKeeper(double *outTime_tv_sec, double *outTime_tv_nsec)
        {
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
