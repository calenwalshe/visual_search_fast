/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fileManager.c
 *
 * Code generation for function 'fileManager'
 *
 */

/* Include files */
#include "fileManager.h"
#include "covert_search_dp_data.h"
#include <stdio.h>

/* Variable Definitions */
static boolean_T eml_autoflush[20];

/* Function Declarations */
static signed char filedata(void);

/* Function Definitions */
static signed char filedata(void)
{
  int k;
  signed char f;
  boolean_T exitg1;
  f = 0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 20)) {
    if (eml_openfiles[k] == NULL) {
      f = (signed char)(k + 1);
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

signed char b_cfopen(const char cfilename[10], const char *cpermission)
{
  FILE * filestar;
  int i;
  char ccfilename[11];
  signed char fileid;
  signed char j;
  fileid = -1;
  j = filedata();
  if (j >= 1) {
    for (i = 0; i < 10; i++) {
      ccfilename[i] = cfilename[i];
    }

    ccfilename[10] = '\x00';
    filestar = fopen(&ccfilename[0], cpermission);
    if (filestar != NULL) {
      eml_openfiles[j - 1] = filestar;
      eml_autoflush[j - 1] = true;
      i = j + 2;
      if (j + 2 > 127) {
        i = 127;
      }

      fileid = (signed char)i;
    }
  }

  return fileid;
}

signed char c_cfopen(const char *cfilename, const char *cpermission)
{
  FILE * filestar;
  int i;
  signed char fileid;
  signed char j;
  fileid = -1;
  j = filedata();
  if (j >= 1) {
    filestar = fopen(cfilename, cpermission);
    if (filestar != NULL) {
      eml_openfiles[j - 1] = filestar;
      eml_autoflush[j - 1] = true;
      i = j + 2;
      if (j + 2 > 127) {
        i = 127;
      }

      fileid = (signed char)i;
    }
  }

  return fileid;
}

signed char cfopen(const char cfilename[9], const char *cpermission)
{
  FILE * filestar;
  int i;
  char ccfilename[10];
  signed char fileid;
  signed char j;
  fileid = -1;
  j = filedata();
  if (j >= 1) {
    for (i = 0; i < 9; i++) {
      ccfilename[i] = cfilename[i];
    }

    ccfilename[9] = '\x00';
    filestar = fopen(&ccfilename[0], cpermission);
    if (filestar != NULL) {
      eml_openfiles[j - 1] = filestar;
      eml_autoflush[j - 1] = true;
      i = j + 2;
      if (j + 2 > 127) {
        i = 127;
      }

      fileid = (signed char)i;
    }
  }

  return fileid;
}

void filedata_init(void)
{
  FILE * a;
  int i;
  a = NULL;
  for (i = 0; i < 20; i++) {
    eml_autoflush[i] = false;
    eml_openfiles[i] = a;
  }
}

/* End of code generation (fileManager.c) */
