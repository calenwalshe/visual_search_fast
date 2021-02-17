//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  table.cpp
//
//  Code generation for function 'table'
//


// Include files
#include "table.h"
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "varNamesDim.h"
#include "coder_array.h"

// Function Definitions
namespace coder
{
  void table::init(const ::coder::array<double, 1U> &varargin_1, const ::coder::
                   array<double, 1U> &varargin_2, const ::coder::array<double,
                   1U> &varargin_3, const ::coder::array<double, 1U> &varargin_4,
                   const ::coder::array<double, 1U> &varargin_5, const ::coder::
                   array<double, 1U> &varargin_6, const ::coder::array<double,
                   1U> &varargin_7)
  {
    matlab::internal::coder::tabular::private_::metaDim b;
    int i;
    int loop_ub;
    b.init();
    this->b_metaDim.length = 2.0;
    this->b_metaDim.backwardsCompatibility = true;
    this->arrayProps.Description.size[0] = 1;
    this->arrayProps.Description.size[1] = 0;
    this->data[0].f1.set_size(varargin_1.size(0));
    loop_ub = varargin_1.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[0].f1[i] = varargin_1[i];
    }

    this->data[1].f1.set_size(varargin_2.size(0));
    loop_ub = varargin_2.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[1].f1[i] = varargin_2[i];
    }

    this->data[2].f1.set_size(varargin_3.size(0));
    loop_ub = varargin_3.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[2].f1[i] = varargin_3[i];
    }

    this->data[3].f1.set_size(varargin_4.size(0));
    loop_ub = varargin_4.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[3].f1[i] = varargin_4[i];
    }

    this->data[4].f1.set_size(varargin_5.size(0));
    loop_ub = varargin_5.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[4].f1[i] = varargin_5[i];
    }

    this->data[5].f1.set_size(varargin_6.size(0));
    loop_ub = varargin_6.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[5].f1[i] = varargin_6[i];
    }

    this->data[6].f1.set_size(varargin_7.size(0));
    loop_ub = varargin_7.size(0);
    for (i = 0; i < loop_ub; i++) {
      this->data[6].f1[i] = varargin_7[i];
    }

    this->rowDim = matlab::internal::coder::tabular::private_::rowNamesDim::
      createLike((static_cast<double>(varargin_1.size(0))));
    matlab::internal::coder::tabular::private_::varNamesDim::createLike
      ((&this->varDim));
  }

  table::table()
  {
  }

  table::~table()
  {
  }
}

// End of code generation (table.cpp)
