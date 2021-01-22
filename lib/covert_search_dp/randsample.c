/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randsample.c
 *
 * Code generation for function 'randsample'
 *
 */

/* Include files */
#include "randsample.h"
#include "covert_search_dp_emxutil.h"
#include "covert_search_dp_types.h"
#include "histc.h"
#include "rand.h"
#include <math.h>

/* Function Definitions */
void randsample(double varargin_2, const double varargin_4[5760000],
                emxArray_real_T *y)
{
  static double edges[5760001];
  static double unusedU0[5760001];
  emxArray_real_T *r;
  double sumw;
  double x_tmp;
  int k;
  x_tmp = floor(varargin_2);
  sumw = varargin_4[0];
  for (k = 0; k < 5759999; k++) {
    sumw += varargin_4[k + 1];
  }

  edges[0] = 0.0;
  edges[5760000] = 1.0;
  for (k = 0; k < 5759999; k++) {
    edges[k + 1] = fmin(edges[k] + varargin_4[k] / sumw, 1.0);
  }

  k = y->size[0];
  y->size[0] = (int)x_tmp;
  emxEnsureCapacity_real_T(y, k);
  if ((int)x_tmp > 0) {
    emxInit_real_T(&r, 1);
    c_rand((int)x_tmp, r);
    histc(r, edges, unusedU0, y);
    emxFree_real_T(&r);
  }
}

/* End of code generation (randsample.c) */
