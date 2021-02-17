//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  varNamesDim.h
//
//  Code generation for function 'varNamesDim'
//


#ifndef VARNAMESDIM_H
#define VARNAMESDIM_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
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
          enum Continuity
          {
            unset = 0,                 // Default value
            continuous,
            step,
            event
          };
        }
      }
    }
  }
}

struct cell_wrap_3
{
  coder::empty_bounded_array<char, 2U> f1;
};

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
            class varNamesDim
            {
             public:
              static void createLike(varNamesDim *newobj);
              void createLike();
              varNamesDim();
              ~varNamesDim();
              double length;
              cell_wrap_3 descrs[7];
              cell_wrap_3 units[7];
              Continuity continuity[7];
              boolean_T hasDescrs;
              boolean_T hasUnits;
              boolean_T hasContinuity;
              boolean_T hasCustomProps;
            };
          }
        }
      }
    }
  }
}

#endif

// End of code generation (varNamesDim.h)
