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
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void histc(const double X[2400], const emxArray_real_T *edges, emxArray_real_T
           *N, double BIN[2400])
{
  int high_i;
  int k;
  int low_i;
  int low_ip1;
  int mid_i;
  int xind;
  high_i = N->size[0];
  N->size[0] = edges->size[1];
  emxEnsureCapacity_real_T(N, high_i);
  xind = edges->size[1];
  for (high_i = 0; high_i < xind; high_i++) {
    N->data[high_i] = 0.0;
  }

  memset(&BIN[0], 0, 2400U * sizeof(double));
  xind = 0;
  for (k = 0; k < 2400; k++) {
    low_i = 0;
    if ((X[xind] >= edges->data[0]) && (X[xind] < edges->data[edges->size[1] - 1]))
    {
      high_i = edges->size[1];
      low_i = 1;
      low_ip1 = 2;
      while (high_i > low_ip1) {
        mid_i = (low_i >> 1) + (high_i >> 1);
        if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
          mid_i++;
        }

        if (X[xind] >= edges->data[mid_i - 1]) {
          low_i = mid_i;
          low_ip1 = mid_i + 1;
        } else {
          high_i = mid_i;
        }
      }
    }

    if (X[xind] == edges->data[edges->size[1] - 1]) {
      low_i = edges->size[1];
    }

    if (low_i > 0) {
      N->data[low_i - 1]++;
    }

    BIN[xind] = low_i;
    xind++;
  }
}

/* End of code generation (histc.c) */
