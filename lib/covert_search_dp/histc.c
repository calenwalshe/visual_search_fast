/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * histc.c
 *
 * Code generation for function 'histc'
 *
 */

/* Include files */
#include "histc.h"
#include "covert_search_dp_emxutil.h"
#include "covert_search_dp_types.h"
#include <string.h>

/* Function Definitions */
void histc(const emxArray_real_T *X, const double edges[5760001], double N
           [5760001], emxArray_real_T *BIN)
{
  int high_i;
  int i;
  int k;
  int low_i;
  int low_ip1;
  int mid_i;
  int xind;
  memset(&N[0], 0, 5760001U * sizeof(double));
  i = BIN->size[0];
  BIN->size[0] = X->size[0];
  emxEnsureCapacity_real_T(BIN, i);
  xind = X->size[0];
  for (i = 0; i < xind; i++) {
    BIN->data[i] = 0.0;
  }

  xind = 0;
  i = X->size[0];
  for (k = 0; k < i; k++) {
    low_i = 0;
    if ((X->data[xind] >= edges[0]) && (X->data[xind] < edges[5760000])) {
      low_i = 1;
      low_ip1 = 2;
      high_i = 5760001;
      while (high_i > low_ip1) {
        mid_i = (low_i + high_i) >> 1;
        if (X->data[xind] >= edges[mid_i - 1]) {
          low_i = mid_i;
          low_ip1 = mid_i + 1;
        } else {
          high_i = mid_i;
        }
      }
    }

    if (X->data[xind] == edges[5760000]) {
      low_i = 5760001;
    }

    if (low_i > 0) {
      N[low_i - 1]++;
    }

    BIN->data[xind] = low_i;
    xind++;
  }
}

/* End of code generation (histc.c) */
