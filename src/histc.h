//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  histc.h
//
//  Code generation for function 'histc'
//


#ifndef HISTC_H
#define HISTC_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder
{
  void histc(const ::coder::array<double, 1U> &X, const double edges[5760001],
             double N[5760001], ::coder::array<double, 1U> &BIN);
}

#endif

// End of code generation (histc.h)
