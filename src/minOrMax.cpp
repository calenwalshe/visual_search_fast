//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  minOrMax.cpp
//
//  Code generation for function 'minOrMax'
//


// Include files
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder
{
  namespace internal
  {
    double maximum(const double x[5760000])
    {
      double ex;
      int idx;
      int k;
      if (!rtIsNaN(x[0])) {
        idx = 1;
      } else {
        boolean_T exitg1;
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 5760001)) {
          if (!rtIsNaN(x[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        ex = x[0];
      } else {
        ex = x[idx - 1];
        idx++;
        for (k = idx; k < 5760001; k++) {
          double d;
          d = x[k - 1];
          if (ex < d) {
            ex = d;
          }
        }
      }

      return ex;
    }
  }
}

// End of code generation (minOrMax.cpp)
