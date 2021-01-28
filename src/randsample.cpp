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
#include "histc.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
namespace coder
{
  void randsample(double varargin_2, const double varargin_4[5760000], ::coder::
                  array<double, 1U> &y)
  {
    static double edges[5760001];
    static double unusedU0[5760001];
    array<double, 1U> r;
    double sumw;
    double x;
    int k;
    x = std::floor(varargin_2);
    sumw = varargin_4[0];
    for (k = 0; k < 5759999; k++) {
      sumw += varargin_4[k + 1];
    }

    edges[0] = 0.0;
    edges[5760000] = 1.0;
    for (k = 0; k < 5759999; k++) {
      double u0;
      u0 = edges[k] + varargin_4[k] / sumw;
      if (!(u0 < 1.0)) {
        u0 = 1.0;
      }

      edges[k + 1] = u0;
    }

    y.set_size((static_cast<int>(x)));
    if (static_cast<int>(x) > 0) {
      b_rand(static_cast<int>(x), r);
      histc(r, edges, unusedU0, y);
    }
  }
}

// End of code generation (randsample.cpp)
