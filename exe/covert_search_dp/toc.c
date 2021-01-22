/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * toc.c
 *
 * Code generation for function 'toc'
 *
 */

/* Include files */
#include "toc.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include <stdio.h>
#include <time.h>

/* Function Definitions */
void toc(void)
{
  struct timespec b_timespec;
  double tstart_tv_nsec;
  double tstart_tv_sec;
  b_timeKeeper(&tstart_tv_sec, &tstart_tv_nsec);
  clock_gettime(CLOCK_MONOTONIC, &b_timespec);
  printf("Elapsed time is %f seconds\n", ((double)b_timespec.tv_sec -
          tstart_tv_sec) + ((double)b_timespec.tv_nsec - tstart_tv_nsec) /
         1.0E+9);
  fflush(stdout);
}

/* End of code generation (toc.c) */
