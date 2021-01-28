//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_initialize.cpp
//
//  Code generation for function 'covert_search_dp_initialize'
//


// Include files
#include "covert_search_dp_initialize.h"
#include "covert_search_dp_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Definitions
void covert_search_dp_initialize()
{
  savedTime_not_empty_init();
  eml_rand_mt19937ar_stateful_init();
  isInitialized_covert_search_dp = true;
}

// End of code generation (covert_search_dp_initialize.cpp)
