//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  main.cpp
//
//  Code generation for function 'main'
//


//***********************************************************************
// This automatically generated example C++ main file shows how to call
// entry-point functions that MATLAB Coder generated. You must customize
// this file for your application. Do not modify this file directly.
// Instead, make a copy of this file, modify it, and integrate it into
// your development environment.
//
// This file initializes entry-point function arguments to a default
// size and value before calling the entry-point functions. It does
// not store or use any values returned from the entry-point functions.
// If necessary, it does pre-allocate memory for returned values.
// You can use this file as a starting point for a main function that
// you can deploy in your application.
//
// After you copy the file, and before you deploy it, you must make the
// following changes:
// * For variable-size function arguments, change the example sizes to
// the sizes that your application requires.
// * Change the example values of function arguments to the values that
// your application requires.
// * If the entry-point functions return values, store these values or
// otherwise use them as required by your application.
//
//***********************************************************************

// Include files
#include "main.h"
#include "covert_search_dp.h"
#include "covert_search_dp_terminate.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Declarations
static void argInit_2400x2400_real_T(double result[5760000]);
static double argInit_real_T();
static void main_covert_search_dp();

// Function Definitions
static void argInit_2400x2400_real_T(double result[5760000])
{
  // Loop over the array to initialize each element.
  for (int idx0 = 0; idx0 < 2400; idx0++) {
    for (int idx1 = 0; idx1 < 2400; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx0 + 2400 * idx1] = argInit_real_T();
    }
  }
}

static double argInit_real_T()
{
  return 0.0;
}

static void main_covert_search_dp()
{
  double trials = 1.0;
  double seed = 1.0;
  static double dpmap_tmp[5760000];
  coder::array<double, 2U> results;
  double trials_tmp;

  // Initialize function 'covert_search_dp' input arguments.
  trials_tmp = argInit_real_T();

  // Initialize function input argument 'dpmap'.
  argInit_2400x2400_real_T(dpmap_tmp);

  // Initialize function input argument 'priorh'.
  // Call the entry-point 'covert_search_dp'.
  covert_search_dp(trials_tmp, dpmap_tmp, dpmap_tmp, trials_tmp, results);
}

int main(int, const char * const [])
{
  // The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. 
  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_covert_search_dp();

  // Terminate the application.
  // You do not need to do this more than one time.
  covert_search_dp_terminate();
  return 0;
}

// End of code generation (main.cpp)
