//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  histc.cpp
//
//  Code generation for function 'histc'
//


// Include files
#include "histc.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstring>

// Function Definitions
namespace coder
{
  void histc(const ::coder::array<double, 1U> &X, const double edges[5760001],
             double N[5760001], ::coder::array<double, 1U> &BIN)
  {
    int i;
    int xind;
    std::memset(&N[0], 0, 5760001U * sizeof(double));
    BIN.set_size(X.size(0));
    xind = X.size(0);
    for (i = 0; i < xind; i++) {
      BIN[i] = 0.0;
    }

    xind = 0;
    i = X.size(0);
    for (int k = 0; k < i; k++) {
      int low_i;
      low_i = 0;
      if ((X[xind] >= edges[0]) && (X[xind] < edges[5760000])) {
        int high_i;
        int low_ip1;
        low_i = 1;
        low_ip1 = 2;
        high_i = 5760001;
        while (high_i > low_ip1) {
          int mid_i;
          mid_i = (low_i + high_i) >> 1;
          if (X[xind] >= edges[mid_i - 1]) {
            low_i = mid_i;
            low_ip1 = mid_i + 1;
          } else {
            high_i = mid_i;
          }
        }
      }

      if (X[xind] == edges[5760000]) {
        low_i = 5760001;
      }

      if (low_i > 0) {
        N[low_i - 1]++;
      }

      BIN[xind] = low_i;
      xind++;
    }
  }
}

// End of code generation (histc.cpp)
