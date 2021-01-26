//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  imrotate.cpp
//
//  Code generation for function 'imrotate'
//


// Include files
#include "imrotate.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtBCInfo r_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  42,                                  // colNo
  "",                                  // aName
  "imrotate",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/images/images/eml/imrotate.m",// pName 
  0                                    // checkKind
};

static emlrtBCInfo s_emlrtBCI = { -1,  // iFirst
  -1,                                  // iLast
  133,                                 // lineNo
  33,                                  // colNo
  "",                                  // aName
  "imrotate",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/images/images/eml/imrotate.m",// pName 
  0                                    // checkKind
};

static emlrtRTEInfo ab_emlrtRTEI = { 86,// lineNo
  40,                                  // colNo
  "imrotate",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/images/images/eml/imrotate.m"// pName 
};

static emlrtRTEInfo bb_emlrtRTEI = { 12,// lineNo
  5,                                   // colNo
  "imrotate",                          // fName
  "/Applications/MATLAB_R2020b.app/toolbox/images/images/eml/imrotate.m"// pName 
};

// Function Definitions
namespace coder
{
  void imrotate(const emlrtStack *sp, const ::coder::array<real_T, 2U>
                &varargin_1, ::coder::array<real_T, 2U> &B)
  {
    if ((varargin_1.size(0) == 0) || (varargin_1.size(1) == 0)) {
      int32_T loop_ub;
      B.set_size((&bb_emlrtRTEI), sp, varargin_1.size(0), varargin_1.size(1));
      loop_ub = varargin_1.size(0) * varargin_1.size(1);
      for (int32_T i = 0; i < loop_ub; i++) {
        B[i] = varargin_1[i];
      }
    } else {
      int32_T i;
      int16_T sizeA_idx_0;
      int16_T sizeA_idx_1;
      sizeA_idx_0 = static_cast<int16_T>(varargin_1.size(0));
      sizeA_idx_1 = static_cast<int16_T>(varargin_1.size(1));
      B.set_size((&ab_emlrtRTEI), sp, (static_cast<int32_T>(static_cast<int16_T>
        (varargin_1.size(0)))), (static_cast<int32_T>(static_cast<int16_T>
        (varargin_1.size(1)))));
      i = static_cast<int16_T>(varargin_1.size(1));
      for (int32_T j = 0; j < i; j++) {
        int32_T loop_ub;
        loop_ub = sizeA_idx_0;
        for (int32_T b_i = 0; b_i < loop_ub; b_i++) {
          int32_T i1;
          int32_T i2;
          i1 = sizeA_idx_0 - b_i;
          if ((i1 < 1) || (i1 > varargin_1.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, varargin_1.size(0), &r_emlrtBCI,
              sp);
          }

          i2 = sizeA_idx_1 - j;
          if ((i2 < 1) || (i2 > varargin_1.size(1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, varargin_1.size(1), &r_emlrtBCI,
              sp);
          }

          if (b_i + 1 > B.size(0)) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, B.size(0), &s_emlrtBCI, sp);
          }

          if (j + 1 > B.size(1)) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, B.size(1), &s_emlrtBCI, sp);
          }

          B[b_i + B.size(0) * j] = varargin_1[(i1 + varargin_1.size(0) * (i2 - 1))
            - 1];
        }
      }
    }
  }
}

// End of code generation (imrotate.cpp)
