//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  indexShapeCheck.cpp
//
//  Code generation for function 'indexShapeCheck'
//


// Include files
#include "indexShapeCheck.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
static emlrtRSInfo ib_emlrtRSI = { 43, // lineNo
  "indexShapeCheck",                   // fcnName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"// pathName 
};

static emlrtRTEInfo h_emlrtRTEI = { 121,// lineNo
  5,                                   // colNo
  "errOrWarnIf",                       // fName
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"// pName 
};

// Function Definitions
namespace coder
{
  namespace internal
  {
    void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
                         indexSize[2])
    {
      emlrtStack st;
      boolean_T c;
      st.prev = sp;
      st.tls = sp->tls;
      if ((matrixSize == 1) && (indexSize[1] != 1)) {
        c = true;
      } else {
        c = false;
      }

      st.site = &ib_emlrtRSI;
      if (c) {
        emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
          "Coder:FE:PotentialVectorVector", "Coder:FE:PotentialVectorVector", 0);
      }
    }
  }
}

// End of code generation (indexShapeCheck.cpp)
