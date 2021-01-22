/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "randperm.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void randperm(double p[2400])
{
  double d;
  int idx[2400];
  int iwork[2400];
  int b_i;
  int b_p;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int pEnd;
  int q;
  int qEnd;
  b_rand(p);
  for (k = 0; k <= 2398; k += 2) {
    d = p[k + 1];
    if ((p[k] <= d) || rtIsNaN(d)) {
      idx[k] = k + 1;
      idx[k + 1] = k + 2;
    } else {
      idx[k] = k + 2;
      idx[k + 1] = k + 1;
    }
  }

  i = 2;
  while (i < 2400) {
    i2 = i << 1;
    j = 1;
    for (pEnd = i + 1; pEnd < 2401; pEnd = qEnd + i) {
      b_p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > 2401) {
        qEnd = 2401;
      }

      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        d = p[idx[q] - 1];
        b_i = idx[b_p - 1];
        if ((p[b_i - 1] <= d) || rtIsNaN(d)) {
          iwork[k] = b_i;
          b_p++;
          if (b_p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              iwork[k] = idx[q];
              q++;
            }
          }
        } else {
          iwork[k] = idx[q];
          q++;
          if (q + 1 == qEnd) {
            while (b_p < pEnd) {
              k++;
              iwork[k] = idx[b_p - 1];
              b_p++;
            }
          }
        }

        k++;
      }

      for (k = 0; k < kEnd; k++) {
        idx[(j + k) - 1] = iwork[k];
      }

      j = qEnd;
    }

    i = i2;
  }

  for (b_i = 0; b_i < 2400; b_i++) {
    p[b_i] = idx[b_i];
  }
}

/* End of code generation (randperm.c) */
