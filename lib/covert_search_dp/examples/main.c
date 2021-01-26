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

/* Function Declarations */
static void argInit_1x10_char_T(char result[10]);
static void argInit_1x9_char_T(char result[9]);
static char argInit_char_T(void);
static double argInit_real_T(void);
static void main_covert_search_dp(void);

/* Function Definitions */
static void argInit_1x10_char_T(char result[10])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_char_T();
  }
}

static void argInit_1x9_char_T(char result[9])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 9; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_char_T();
  }
}

static char argInit_char_T(void)
{
  return '?';
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_covert_search_dp(void)
{
  char cv1[10];
  char cv[9];

  /* Initialize function 'covert_search_dp' input arguments. */
  /* Initialize function input argument 'dpmapfp'. */
  /* Initialize function input argument 'priorhfp'. */
  /* Call the entry-point 'covert_search_dp'. */
  argInit_1x9_char_T(cv);
  argInit_1x10_char_T(cv1);
  covert_search_dp(argInit_real_T(), cv, cv1);
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
