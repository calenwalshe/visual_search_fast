//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  metaDim.h
//
//  Code generation for function 'metaDim'
//


#ifndef METADIM_H
#define METADIM_H

// Include files
#include "rtwtypes.h"
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
          namespace private_
          {
            class metaDim
            {
             public:
              void init();
              void initWithCompatibility();
              void tabularDimension_init();
              metaDim();
              ~metaDim();
              double length;
              boolean_T backwardsCompatibility;
            };
          }
        }
      }
    }
  }
}

#endif

// End of code generation (metaDim.h)
