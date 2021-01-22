/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fread.c
 *
 * Code generation for function 'fread'
 *
 */

/* Include files */
#include "fread.h"
#include "covert_search_dp_data.h"
#include "covert_search_dp_emxutil.h"
#include "covert_search_dp_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>

/* Function Declarations */
static FILE * getFileStar(double fileID);
static double rt_roundd_snf(double u);

/* Function Definitions */
static FILE * getFileStar(double fileID)
{
  FILE * filestar;
  signed char fileid;
  fileid = (signed char)rt_roundd_snf(fileID);
  if ((fileid < 0) || (fileID != fileid)) {
    fileid = -1;
  }

  if (fileid >= 3) {
    filestar = eml_openfiles[fileid - 3];
  } else if (fileid == 0) {
    filestar = stdin;
  } else if (fileid == 1) {
    filestar = stdout;
  } else if (fileid == 2) {
    filestar = stderr;
  } else {
    filestar = NULL;
  }

  if ((!(fileID != 0.0)) || (!(fileID != 1.0)) || (!(fileID != 2.0))) {
    filestar = NULL;
  }

  return filestar;
}

static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

void b_fread(double fileID, emxArray_real_T *A)
{
  FILE * filestar;
  size_t nBytes;
  size_t numReadSizeT;
  emxArray_real_T *b_A;
  double A_data[2399];
  int bytesOut;
  int i;
  int numRead;
  nBytes = sizeof(double);
  filestar = getFileStar(fileID);
  if (filestar == NULL) {
    A->size[0] = 2400;
    A->size[1] = 0;
  } else {
    emxInit_real_T(&b_A, 2);
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 2400;
    b_A->size[1] = 2400;
    emxEnsureCapacity_real_T(b_A, i);
    bytesOut = 0;
    numRead = 1;
    while ((bytesOut < 5760000) && (numRead > 0)) {
      numReadSizeT = fread(&b_A->data[bytesOut], nBytes, 5760000 - bytesOut,
                           filestar);
      numRead = (int)numReadSizeT;
      bytesOut += (int)numReadSizeT;
    }

    i = bytesOut + 1;
    for (numRead = i; numRead < 5760001; numRead++) {
      b_A->data[numRead - 1] = 0.0;
    }

    i = A->size[0] * A->size[1];
    A->size[0] = 2400;
    A->size[1] = 2400;
    emxEnsureCapacity_real_T(A, i);
    for (i = 0; i < 5760000; i++) {
      A->data[i] = b_A->data[i];
    }

    if (bytesOut < 5760000) {
      if (bytesOut >= 2400) {
        numRead = (int)ceil((double)bytesOut / 2400.0);
        i = A->size[0] * A->size[1];
        A->size[0] = 2400;
        A->size[1] = numRead;
        emxEnsureCapacity_real_T(A, i);
        for (i = 0; i < numRead; i++) {
          for (bytesOut = 0; bytesOut < 2400; bytesOut++) {
            A->data[bytesOut + A->size[0] * i] = b_A->data[bytesOut + 2400 * i];
          }
        }
      } else {
        if (1 > bytesOut) {
          numRead = 0;
        } else {
          numRead = bytesOut;
        }

        for (i = 0; i < numRead; i++) {
          A_data[i] = b_A->data[i];
        }

        i = A->size[0] * A->size[1];
        A->size[0] = numRead;
        A->size[1] = 1;
        emxEnsureCapacity_real_T(A, i);
        for (i = 0; i < numRead; i++) {
          A->data[i] = A_data[i];
        }
      }
    }

    emxFree_real_T(&b_A);
  }
}

void c_fread(double fileID, emxArray_real_T *A)
{
  FILE * filestar;
  size_t nBytes;
  size_t numReadSizeT;
  emxArray_real_T *b_A;
  double A_data[134];
  int bytesOut;
  int i;
  int numRead;
  nBytes = sizeof(double);
  filestar = getFileStar(fileID);
  if (filestar == NULL) {
    A->size[0] = 135;
    A->size[1] = 0;
  } else {
    emxInit_real_T(&b_A, 2);
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 135;
    b_A->size[1] = 135;
    emxEnsureCapacity_real_T(b_A, i);
    bytesOut = 0;
    numRead = 1;
    while ((bytesOut < 18225) && (numRead > 0)) {
      numReadSizeT = fread(&b_A->data[bytesOut], nBytes, 18225 - bytesOut,
                           filestar);
      numRead = (int)numReadSizeT;
      bytesOut += (int)numReadSizeT;
    }

    i = bytesOut + 1;
    for (numRead = i; numRead < 18226; numRead++) {
      b_A->data[numRead - 1] = 0.0;
    }

    i = A->size[0] * A->size[1];
    A->size[0] = 135;
    A->size[1] = 135;
    emxEnsureCapacity_real_T(A, i);
    for (i = 0; i < 18225; i++) {
      A->data[i] = b_A->data[i];
    }

    if (bytesOut < 18225) {
      if (bytesOut >= 135) {
        numRead = (int)ceil((double)bytesOut / 135.0);
        i = A->size[0] * A->size[1];
        A->size[0] = 135;
        A->size[1] = numRead;
        emxEnsureCapacity_real_T(A, i);
        for (i = 0; i < numRead; i++) {
          for (bytesOut = 0; bytesOut < 135; bytesOut++) {
            A->data[bytesOut + A->size[0] * i] = b_A->data[bytesOut + 135 * i];
          }
        }
      } else {
        if (1 > bytesOut) {
          numRead = 0;
        } else {
          numRead = bytesOut;
        }

        for (i = 0; i < numRead; i++) {
          A_data[i] = b_A->data[i];
        }

        i = A->size[0] * A->size[1];
        A->size[0] = numRead;
        A->size[1] = 1;
        emxEnsureCapacity_real_T(A, i);
        for (i = 0; i < numRead; i++) {
          A->data[i] = A_data[i];
        }
      }
    }

    emxFree_real_T(&b_A);
  }
}

/* End of code generation (fread.c) */
