//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  rand.cpp
//
//  Code generation for function 'rand'
//


// Include files
#include "rand.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRTEInfo gb_emlrtRTEI = { 100,// lineNo
  28,                                  // colNo
  "rand",                              // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/rand.m"// pName 
};

// Function Definitions
namespace coder
{
  void b_rand(const emlrtStack *sp, real_T varargin_2, ::coder::array<real_T, 2U>
              &r)
  {
    r.set_size((&gb_emlrtRTEI), sp, 1, (static_cast<int32_T>(varargin_2)));
    if (static_cast<int32_T>(varargin_2) != 0) {
      emlrtRandu(&r[0], static_cast<int32_T>(varargin_2));
    }
  }

  void b_rand(const emlrtStack *sp, int32_T varargin_1, ::coder::array<real_T,
              1U> &r)
  {
    r.set_size((&gb_emlrtRTEI), sp, varargin_1);
    emlrtRandu(&(r.data())[0], varargin_1);
  }
}

// End of code generation (rand.cpp)
