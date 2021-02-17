//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  varNamesDim.cpp
//
//  Code generation for function 'varNamesDim'
//


// Include files
#include "varNamesDim.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

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
            void varNamesDim::createLike()
            {
              this->length = 7.0;
            }

            void varNamesDim::createLike(varNamesDim *newobj)
            {
              newobj->createLike();
              newobj->hasUnits = false;
              newobj->units[0].f1.size[0] = 1;
              newobj->units[0].f1.size[1] = 0;
              newobj->units[1].f1.size[0] = 1;
              newobj->units[1].f1.size[1] = 0;
              newobj->units[2].f1.size[0] = 1;
              newobj->units[2].f1.size[1] = 0;
              newobj->units[3].f1.size[0] = 1;
              newobj->units[3].f1.size[1] = 0;
              newobj->units[4].f1.size[0] = 1;
              newobj->units[4].f1.size[1] = 0;
              newobj->units[5].f1.size[0] = 1;
              newobj->units[5].f1.size[1] = 0;
              newobj->units[6].f1.size[0] = 1;
              newobj->units[6].f1.size[1] = 0;
              newobj->hasDescrs = false;
              newobj->descrs[0].f1.size[0] = 1;
              newobj->descrs[0].f1.size[1] = 0;
              newobj->descrs[1].f1.size[0] = 1;
              newobj->descrs[1].f1.size[1] = 0;
              newobj->descrs[2].f1.size[0] = 1;
              newobj->descrs[2].f1.size[1] = 0;
              newobj->descrs[3].f1.size[0] = 1;
              newobj->descrs[3].f1.size[1] = 0;
              newobj->descrs[4].f1.size[0] = 1;
              newobj->descrs[4].f1.size[1] = 0;
              newobj->descrs[5].f1.size[0] = 1;
              newobj->descrs[5].f1.size[1] = 0;
              newobj->descrs[6].f1.size[0] = 1;
              newobj->descrs[6].f1.size[1] = 0;
              newobj->hasContinuity = false;
              for (int i = 0; i < 7; i++) {
                newobj->continuity[i] = unset;
              }

              newobj->hasCustomProps = false;
            }

            varNamesDim::varNamesDim()
            {
            }

            varNamesDim::~varNamesDim()
            {
            }
          }
        }
      }
    }
  }
}

// End of code generation (varNamesDim.cpp)
