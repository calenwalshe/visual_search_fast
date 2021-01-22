/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "covert_search_dp.h"
#include "covert_search_dp_terminate.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void argInit_135x135_real_T(double result[18225]);
static void argInit_2400x2400_real_T(double result[5760000]);
static double argInit_real_T(void);
static void main_covert_search_dp(void);

/* Function Definitions */
static void argInit_135x135_real_T(double result[18225])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 135; idx0++) {
    for (idx1 = 0; idx1 < 135; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 135 * idx1] = argInit_real_T();
    }
  }
}

static void argInit_2400x2400_real_T(double result[5760000])
{
  int idx0;
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2400; idx0++) {
    for (idx1 = 0; idx1 < 2400; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result[idx0 + 2400 * idx1] = argInit_real_T();
    }
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_covert_search_dp(void)
{
  static double priorhfn_tmp[5760000];
  static double dv[18225];
  double trials_tmp;

  /* Initialize function 'covert_search_dp' input arguments. */
  trials_tmp = argInit_real_T();

  /* Initialize function input argument 'priorhfn'. */
  argInit_2400x2400_real_T(priorhfn_tmp);

  /* Initialize function input argument 'dpmapfn'. */
  /* Initialize function input argument 'rtmpfn'. */
  /* Call the entry-point 'covert_search_dp'. */
  argInit_135x135_real_T(dv);
  trials_tmp = covert_search_dp(trials_tmp, priorhfn_tmp, priorhfn_tmp, dv,
    trials_tmp);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_covert_search_dp();

  /* Terminate the application.
     You do not need to do this more than one time. */
  covert_search_dp_terminate();
  return 0;
}

/* End of code generation (main.c) */
