//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  table.h
//
//  Code generation for function 'table'
//


#ifndef TABLE_H
#define TABLE_H

// Include files
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rtwtypes.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
struct cell_wrap_4
{
  coder::array<double, 1U> f1;
};

struct struct0_T
{
  coder::empty_bounded_array<char, 2U> Description;
};

namespace coder
{
  class table
  {
   public:
    void init(const ::coder::array<double, 1U> &varargin_1, const ::coder::array<
              double, 1U> &varargin_2, const ::coder::array<double, 1U>
              &varargin_3, const ::coder::array<double, 1U> &varargin_4, const ::
              coder::array<double, 1U> &varargin_5, const ::coder::array<double,
              1U> &varargin_6, const ::coder::array<double, 1U> &varargin_7);
    table();
    ~table();
   protected:
    matlab::internal::coder::tabular::private_::metaDim b_metaDim;
    matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
    matlab::internal::coder::tabular::private_::varNamesDim varDim;
    cell_wrap_4 data[7];
    struct0_T arrayProps;
  };
}

#endif

// End of code generation (table.h)
