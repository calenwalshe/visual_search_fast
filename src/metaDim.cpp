//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  metaDim.cpp
//
//  Code generation for function 'metaDim'
//


// Include files
#include "metaDim.h"
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
            void metaDim::initWithCompatibility()
            {
              this->tabularDimension_init();
              this->backwardsCompatibility = true;
            }

            void metaDim::tabularDimension_init()
            {
              this->length = 2.0;
            }

            void metaDim::init()
            {
              this->initWithCompatibility();
            }

            metaDim::metaDim()
            {
            }

            metaDim::~metaDim()
            {
            }
          }
        }
      }
    }
  }
}

// End of code generation (metaDim.cpp)
