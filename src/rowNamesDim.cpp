//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  rowNamesDim.cpp
//
//  Code generation for function 'rowNamesDim'
//


// Include files
#include "rowNamesDim.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder
{
  namespace matlab
  {
    namespace internal
    {
      namespace coder
      {
        namespace tabular
        {
          namespace private_
          {
            void rowNamesDim::tabularDimension_createLike(double dimLength)
            {
              this->length = dimLength;
            }

            rowNamesDim rowNamesDim::createLike(double dimLength)
            {
              rowNamesDim newobj;
              newobj.tabularDimension_createLike(dimLength);
              return newobj;
            }

            rowNamesDim::rowNamesDim()
            {
            }

            rowNamesDim::~rowNamesDim()
            {
            }
          }
        }
      }
    }
  }
}

// End of code generation (rowNamesDim.cpp)
