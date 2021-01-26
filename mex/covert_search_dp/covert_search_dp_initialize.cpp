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
#include "_coder_covert_search_dp_mex.h"
#include "covert_search_dp_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"

// Function Declarations
static void covert_search_dp_once();

// Function Definitions
static void covert_search_dp_once()
{
  mex_InitInfAndNan();
  savedTime_not_empty_init();

  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  // Initialize Coverage Information
  covrtScriptInit(&emlrtCoverageInstance,
                  "/Users/calenwalshe/Dropbox/Calen/Work/search/modeling/visual_search_c/covert_search_dp.m",
                  0U, 1U, 6U, 1U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);

  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "covert_search_dp", 0, -1, 3245);

  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 2826, -1, 3244);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 2433, -1, 2820);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 2215, -1, 2254);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 1996, -1, 2161);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 1656, -1, 1924);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 583, -1, 1577);

  // Initialize If Information
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 1930, 1936, 2202, 2263);

  // Initialize MCDC Information
  // Initialize For Information
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 1604, 1621, 2825);

  // Initialize While Information
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void covert_search_dp_initialize()
{
  emlrtStack st = { NULL,              // site
    NULL,                              // tls
    NULL                               // prev
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "image_toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "statistics_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    covert_search_dp_once();
  }
}

// End of code generation (covert_search_dp_initialize.cpp)
