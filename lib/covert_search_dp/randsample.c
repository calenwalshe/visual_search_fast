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
void randsample(double varargin_1, double varargin_2, const emxArray_real_T
                *varargin_4, emxArray_real_T *y)
{
  emxArray_real_T *edges;
  emxArray_real_T *r;
  emxArray_real_T *unusedU0;
  double n;
  double sumw;
  double x_tmp;
  int k;
  int vlen;
  n = floor(varargin_1);
  x_tmp = floor(varargin_2);
  emxInit_real_T(&edges, 2);
  if (varargin_4->size[0] != 0) {
    vlen = varargin_4->size[0];
    sumw = varargin_4->data[0];
    for (k = 2; k <= vlen; k++) {
      sumw += varargin_4->data[k - 1];
    }

    vlen = edges->size[0] * edges->size[1];
    edges->size[0] = 1;
    edges->size[1] = (int)(n + 1.0);
    emxEnsureCapacity_real_T(edges, vlen);
    edges->data[0] = 0.0;
    edges->data[(int)(n + 1.0) - 1] = 1.0;
    vlen = (int)(n - 1.0);
    for (k = 0; k < vlen; k++) {
      edges->data[k + 1] = fmin(edges->data[k] + varargin_4->data[k] / sumw, 1.0);
    }
  } else {
    vlen = edges->size[0] * edges->size[1];
    edges->size[0] = 1;
    edges->size[1] = 1;
    emxEnsureCapacity_real_T(edges, vlen);
    edges->data[0] = 0.0;
  }

  vlen = y->size[0];
  y->size[0] = (int)x_tmp;
  emxEnsureCapacity_real_T(y, vlen);
  if ((int)x_tmp > 0) {
    if (varargin_4->size[0] == 0) {
      c_rand((int)x_tmp, y);
      vlen = y->size[0];
      for (k = 0; k < vlen; k++) {
        y->data[k] = floor(y->data[k] * n) + 1.0;
      }
    } else {
      emxInit_real_T(&unusedU0, 1);
      emxInit_real_T(&r, 1);
      c_rand((int)x_tmp, r);
      histc(r, edges, unusedU0, y);
      emxFree_real_T(&r);
      emxFree_real_T(&unusedU0);
    }
  }

  emxFree_real_T(&edges);
}

/* End of code generation (randsample.c) */
