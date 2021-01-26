/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fileManager.h
 *
 * Code generation for function 'fileManager'
 *
 */

#ifndef FILEMANAGER_H
#define FILEMANAGER_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  signed char b_cfopen(const char cfilename[10], const char *cpermission);
  signed char c_cfopen(const char *cfilename, const char *cpermission);
  signed char cfopen(const char cfilename[9], const char *cpermission);
  void filedata_init(void);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (fileManager.h) */
