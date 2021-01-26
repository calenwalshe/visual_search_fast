//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  covert_search_dp_gpu.cu
//
//  Code generation for function 'covert_search_dp_gpu'
//


// Include files
#include "covert_search_dp_gpu.h"
#include "covert_search_dp_gpu_data.h"
#include "covert_search_dp_gpu_emxutil.h"
#include "covert_search_dp_gpu_mexutil.h"
#include "covert_search_dp_gpu_types.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "MWCudaDimUtility.hpp"
#include "MWLaunchParametersUtilities.hpp"
#include "rt_nonfinite.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include <stddef.h>
#include <string.h>

// Variable Definitions
static emlrtMCInfo emlrtMCI = { 34,    // lineNo
  9,                                   // colNo
  "rng",                               // fName
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/randfun/rng.m"// pName
};

static emlrtMCInfo b_emlrtMCI = { 99,  // lineNo
  17,                                  // colNo
  "fileopen",                          // fName
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/iofun/private/fileManager.m"// pName 
};

static emlrtMCInfo c_emlrtMCI = { 350, // lineNo
  1,                                   // colNo
  "freadExtrinsic",                    // fName
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/iofun/fread.m"// pName
};

static emlrtMCInfo d_emlrtMCI = { 354, // lineNo
  9,                                   // colNo
  "freadExtrinsic",                    // fName
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/iofun/fread.m"// pName
};

static emlrtMCInfo e_emlrtMCI = { 378, // lineNo
  13,                                  // colNo
  "freadExtrinsic",                    // fName
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/iofun/fread.m"// pName
};

// Function Declarations
static __device__ real_T atomicOpreal_T(real_T *address, real_T value);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[], int32_T y_size[2]);
static void b_emlrt_marshallIn(const mxArray *t, const char_T *identifier,
  real_T y_data[], int32_T y_size[2]);
static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[], int32_T ret_size[2]);
static void checkCudaError(cudaError_t errCode, const char_T *file, uint32_T
  line);
static __global__ void covert_search_dp_gpu_kernel1(const real_T dpmap_data
  [5760000], const int32_T dpmap_size[2], real_T priorh_data[5760000]);
static __global__ void covert_search_dp_gpu_kernel10(const emxArray_int32_T idx,
  const int32_T A_size[2], emxArray_real_T dv1);
static __global__ void covert_search_dp_gpu_kernel11(const emxArray_int8_T
  tpaMat, const emxArray_real_T dv1, const int32_T dv1_dim1, emxArray_int8_T
  b_tpaMat);
static __global__ void covert_search_dp_gpu_kernel12(const emxArray_int8_T
  tpaMat, const int32_T tpaMat_dim0, emxArray_int8_T b_tpaMat);
static __global__ void covert_search_dp_gpu_kernel13(const real_T priorh_data
  [5760000], real_T *nrows);
static __global__ void covert_search_dp_gpu_kernel14(const real_T priorh_data
  [5760000], int32_T pEnd, real_T *nrows);
static __global__ void covert_search_dp_gpu_kernel15(const uint32_T dv2[2],
  emxArray_real_T idx);
static __global__ void covert_search_dp_gpu_kernel16(const int32_T priorh_size[2],
  const int32_T pEnd, emxArray_real_T idx);
static __global__ void covert_search_dp_gpu_kernel17(const int32_T priorh_size[2],
  int16_T sizeA[2]);
static __global__ void covert_search_dp_gpu_kernel18(const emxArray_real_T idx,
  const int32_T idx_dim0, emxArray_int32_T v1);
static __global__ void covert_search_dp_gpu_kernel19(const int32_T p, const
  emxArray_int32_T v1, const int32_T v1_dim0, emxArray_int32_T vk);
static __global__ void covert_search_dp_gpu_kernel2(const int32_T dpmap_size[2],
  int16_T sizeA[2]);
static __global__ void covert_search_dp_gpu_kernel20(const int32_T p, const
  emxArray_int32_T vk, const int32_T v1_dim0, emxArray_int32_T v1);
static __global__ void covert_search_dp_gpu_kernel21(const emxArray_int32_T v1,
  const int32_T v1_dim0, emxArray_int32_T pre_yt);
static __global__ void covert_search_dp_gpu_kernel22(const emxArray_int32_T vk,
  const int32_T vk_dim0, emxArray_int32_T pre_xt);
static __global__ void covert_search_dp_gpu_kernel3(const real_T priorh_data
  [5760000], const int32_T A_size[2], const int32_T dpmap_size[2], const int16_T
  sizeA[2], const int32_T pEnd, real_T dpmap_data[5760000]);
static __global__ void covert_search_dp_gpu_kernel4(const int32_T pEnd,
  emxArray_int8_T tpaMat);
static __global__ void covert_search_dp_gpu_kernel5(const real_T *nrows, const
  int32_T pEnd, emxArray_int8_T tpaMat);
static __global__ void covert_search_dp_gpu_kernel6(const int32_T dv1_dim1,
  emxArray_int32_T idx);
static __global__ void covert_search_dp_gpu_kernel7(const emxArray_real_T dv1,
  const int32_T pEnd, emxArray_int32_T idx);
static __global__ void covert_search_dp_gpu_kernel8(const int32_T dv1_dim1,
  emxArray_int32_T idx);
static __global__ void covert_search_dp_gpu_kernel9(const emxArray_int32_T iwork,
  const int32_T j, const int32_T kEnd, emxArray_int32_T idx);
static void d_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[], int32_T ret_size[2]);
static __device__ int32_T div_s32_device(int32_T numerator, int32_T denominator);
static void emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[], int32_T y_size[2]);
static void emlrt_marshallIn(const mxArray *t, const char_T *identifier, real_T
  y_data[], int32_T y_size[2]);
static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  emlrtMCInfo *location);
static void feval(const mxArray *b, const mxArray *c, const mxArray *d, const
                  mxArray *e, const mxArray *f, emlrtMCInfo *location, const
                  mxArray **g, const mxArray **h);
static void gpuEmxFree_int32_T(emxArray_int32_T *gpu);
static void gpuEmxFree_int8_T(emxArray_int8_T *gpu);
static void gpuEmxFree_real_T(emxArray_real_T *gpu);
static void gpuEmxMemcpyCpuToGpu_int32_T(const emxArray_int32_T *cpu,
  emxArray_int32_T *gpu);
static void gpuEmxMemcpyCpuToGpu_int8_T(const emxArray_int8_T *cpu,
  emxArray_int8_T *gpu);
static void gpuEmxMemcpyCpuToGpu_real_T(const emxArray_real_T *cpu,
  emxArray_real_T *gpu);
static void gpuEmxMemcpyGpuToCpu_int32_T(emxArray_int32_T *cpu, emxArray_int32_T
  *gpu);
static void gpuEmxMemcpyGpuToCpu_int8_T(emxArray_int8_T *cpu, emxArray_int8_T
  *gpu);
static void gpuEmxMemcpyGpuToCpu_real_T(emxArray_real_T *cpu, emxArray_real_T
  *gpu);
static void gpuEmxReset_int32_T(emxArray_int32_T *gpu);
static void gpuEmxReset_int8_T(emxArray_int8_T *gpu);
static void gpuEmxReset_real_T(emxArray_real_T *gpu);
static void rng(const mxArray *b, emlrtMCInfo *location);
static __device__ real_T shflDown2(real_T in1, uint32_T offset, uint32_T mask);
static const mxArray *size(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static __device__ real_T threadGroupReduction(real_T val, uint32_T lane,
  uint32_T mask);
static __device__ real_T workGroupReduction(real_T val, uint32_T mask, uint32_T
  numActiveWarps);

// Function Definitions
static __device__ real_T atomicOpreal_T(real_T *address, real_T value)
{
  unsigned long long int old;
  unsigned long long int *address_as_up;
  address_as_up = (unsigned long long int *)address;
  old = *address_as_up;
  unsigned long long int assumed;
  do {
    assumed = old;
    old = atomicCAS(address_as_up, old, __double_as_longlong(value +
      __longlong_as_double(old)));
  } while (assumed != old);

  return __longlong_as_double(old);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[], int32_T y_size[2])
{
  d_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const mxArray *t, const char_T *identifier,
  real_T y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(emlrtAlias(t), &thisId, y_data, y_size);
  emlrtDestroyArray(&t);
}

static void c_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 2400, 2400 };

  int32_T iv[2];
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    dims, &bv[0], iv);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b(emlrtRootTLSGlobal, src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

static void checkCudaError(cudaError_t errCode, const char_T *file, uint32_T
  line)
{
  emlrtRTEInfo rtInfo;
  char_T *brk;
  char_T *fn;
  char_T *pn;
  if (errCode != cudaSuccess) {
    uint32_T len;
    cudaGetLastError();
    len = strlen(file);
    pn = (char_T *)calloc(len + 1U, 1U);
    fn = (char_T *)calloc(len + 1U, 1U);
    memcpy(pn, file, len);
    memcpy(fn, file, len);
    brk = strrchr(fn, '.');
    *brk = '\x00';
    brk = strrchr(fn, '/');
    if (brk == NULL) {
      brk = strrchr(fn, '\\');
    }

    if (brk == NULL) {
      brk = fn;
    } else {
      brk++;
    }

    rtInfo.lineNo = static_cast<int32_T>(line);
    rtInfo.colNo = 0;
    rtInfo.fName = brk;
    rtInfo.pName = pn;
    emlrtCUDAError(errCode, cudaGetErrorName(errCode), cudaGetErrorString
                   (errCode), &rtInfo, emlrtRootTLSGlobal);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel1(
  const real_T dpmap_data[5760000], const int32_T dpmap_size[2], real_T
  priorh_data[5760000])
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(dpmap_size[0] * dpmap_size[1] - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    priorh_data[i] = dpmap_data[i];
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel10(
  const emxArray_int32_T idx, const int32_T A_size[2], emxArray_real_T dv1)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(A_size[0] * A_size[1] - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    dv1.data[i] = static_cast<real_T>(idx.data[i]);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel11(
  const emxArray_int8_T tpaMat, const emxArray_real_T dv1, const int32_T
  dv1_dim1, emxArray_int8_T b_tpaMat)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(dv1_dim1 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    b_tpaMat.data[i] = tpaMat.data[static_cast<int32_T>(dv1.data[i]) - 1];
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel12(
  const emxArray_int8_T tpaMat, const int32_T tpaMat_dim0, emxArray_int8_T
  b_tpaMat)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(tpaMat_dim0 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    b_tpaMat.data[i] = tpaMat.data[i];
  }
}

static __global__ __launch_bounds__(32, 1) void covert_search_dp_gpu_kernel13(
  const real_T priorh_data[5760000], real_T *nrows)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    *nrows = priorh_data[0];
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel14(
  const real_T priorh_data[5760000], int32_T pEnd, real_T *nrows)
{
  int64_T loopEnd;
  real_T tmpRed0;
  uint32_T blockStride;
  uint32_T idx;
  uint32_T m;
  uint32_T thBlkId;
  uint32_T threadId;
  uint32_T threadStride;
  threadStride = static_cast<uint32_T>(mwGetTotalThreadsLaunched());
  threadId = static_cast<uint32_T>(mwGetGlobalThreadIndex());
  thBlkId = static_cast<uint32_T>(mwGetThreadIndexWithinBlock());
  blockStride = static_cast<uint32_T>(mwGetThreadsPerBlock());
  tmpRed0 = 0.0;
  loopEnd = static_cast<int64_T>(pEnd - 2);
  if (mwIsLastBlock()) {
    m = (static_cast<int64_T>(pEnd - 2) + 1L) % static_cast<int64_T>(blockStride);
    if (m > 0U) {
      blockStride = m;
    }
  }

  blockStride = (uint32_T)(blockStride + (static_cast<int64_T>(warpSize) - 1L)) /
    warpSize;
  if (static_cast<int64_T>(threadId) <= loopEnd) {
    tmpRed0 = priorh_data[static_cast<int32_T>(threadId) + 1];
  }

  m = __ballot_sync(MAX_uint32_T, static_cast<int64_T>(threadId) <= loopEnd);
  for (idx = threadId + threadStride; idx <= static_cast<uint32_T>(loopEnd); idx
       += threadStride) {
    tmpRed0 += priorh_data[static_cast<int32_T>(idx) + 1];
  }

  tmpRed0 = workGroupReduction(tmpRed0, m, blockStride);
  if (thBlkId == 0U) {
    atomicOpreal_T(&nrows[0], tmpRed0);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel15(
  const uint32_T dv2[2], emxArray_real_T idx)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(static_cast<int32_T>(dv2[0]) - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    idx.data[i] = 0.0;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel16(
  const int32_T priorh_size[2], const int32_T pEnd, emxArray_real_T idx)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(pEnd - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    idx.data[i] = floor(idx.data[i] * static_cast<real_T>(priorh_size[0] *
      priorh_size[1])) + 1.0;
  }
}

static __global__ __launch_bounds__(32, 1) void covert_search_dp_gpu_kernel17(
  const int32_T priorh_size[2], int16_T sizeA[2])
{
  int32_T i;
  i = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (i < 2) {
    sizeA[i] = static_cast<int16_T>(priorh_size[i]);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel18(
  const emxArray_real_T idx, const int32_T idx_dim0, emxArray_int32_T v1)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(idx_dim0 - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    v1.data[i] = static_cast<int32_T>(idx.data[i]) - 1;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel19(
  const int32_T p, const emxArray_int32_T v1, const int32_T v1_dim0,
  emxArray_int32_T vk)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(v1_dim0 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    vk.data[i] = div_s32_device(v1.data[i], p);
  }
}

static __global__ __launch_bounds__(32, 1) void covert_search_dp_gpu_kernel2(
  const int32_T dpmap_size[2], int16_T sizeA[2])
{
  int32_T i;
  i = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (i < 2) {
    sizeA[i] = static_cast<int16_T>(dpmap_size[i]);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel20(
  const int32_T p, const emxArray_int32_T vk, const int32_T v1_dim0,
  emxArray_int32_T v1)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(v1_dim0 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    v1.data[i] -= vk.data[i] * p;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel21(
  const emxArray_int32_T v1, const int32_T v1_dim0, emxArray_int32_T pre_yt)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(v1_dim0 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    pre_yt.data[i] = v1.data[i] + 1;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel22(
  const emxArray_int32_T vk, const int32_T vk_dim0, emxArray_int32_T pre_xt)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(vk_dim0 - 1);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    pre_xt.data[i] = vk.data[i] + 1;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel3(
  const real_T priorh_data[5760000], const int32_T A_size[2], const int32_T
  dpmap_size[2], const int16_T sizeA[2], const int32_T pEnd, real_T dpmap_data
  [5760000])
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = (static_cast<int64_T>(static_cast<int32_T>(sizeA[0]) - 1) + 1L) * (
    static_cast<int64_T>(pEnd - 1) + 1L) - 1L;
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    int32_T j;
    i = static_cast<int32_T>(idx % (static_cast<uint64_T>(static_cast<int32_T>
      (sizeA[0]) - 1) + 1UL));
    j = static_cast<int32_T>((idx - static_cast<uint64_T>(i)) /
      (static_cast<uint64_T>(static_cast<int32_T>(sizeA[0]) - 1) + 1UL));
    dpmap_data[i + dpmap_size[0] * j] = priorh_data[((static_cast<int32_T>
      (sizeA[0]) - i) + A_size[0] * ((static_cast<int32_T>(sizeA[1]) - j) - 1))
      - 1];
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel4(
  const int32_T pEnd, emxArray_int8_T tpaMat)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(pEnd);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    tpaMat.data[i] = static_cast<int8_T>(0);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel5(
  const real_T *nrows, const int32_T pEnd, emxArray_int8_T tpaMat)
{
  int64_T loopEnd;
  uint64_T idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(pEnd);
  for (idx = threadId; idx <= static_cast<uint64_T>(loopEnd); idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(idx);
    tpaMat.data[i + static_cast<int32_T>(*nrows)] = static_cast<int8_T>(1);
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel6(
  const int32_T dv1_dim1, emxArray_int32_T idx)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(dv1_dim1 - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    idx.data[i] = 0;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel7(
  const emxArray_real_T dv1, const int32_T pEnd, emxArray_int32_T idx)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>((pEnd - 1) / 2);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    i = (i << 1) + 1;
    if ((static_cast<int32_T>(dv1.data[i - 1] <= dv1.data[i])) ||
        (static_cast<int32_T>(isnan(dv1.data[i])))) {
      idx.data[i - 1] = i;
      idx.data[i] = i + 1;
    } else {
      idx.data[i - 1] = i + 1;
      idx.data[i] = i;
    }
  }
}

static __global__ __launch_bounds__(32, 1) void covert_search_dp_gpu_kernel8(
  const int32_T dv1_dim1, emxArray_int32_T idx)
{
  int32_T tmpIdx;
  tmpIdx = static_cast<int32_T>(mwGetGlobalThreadIndex());
  if (tmpIdx < 1) {
    idx.data[dv1_dim1 - 1] = dv1_dim1;
  }
}

static __global__ __launch_bounds__(1024, 1) void covert_search_dp_gpu_kernel9(
  const emxArray_int32_T iwork, const int32_T j, const int32_T kEnd,
  emxArray_int32_T idx)
{
  int64_T loopEnd;
  uint64_T b_idx;
  uint64_T threadId;
  uint64_T threadStride;
  threadId = mwGetGlobalThreadIndex();
  threadStride = mwGetTotalThreadsLaunched();
  loopEnd = static_cast<int64_T>(kEnd - 1);
  for (b_idx = threadId; b_idx <= static_cast<uint64_T>(loopEnd); b_idx +=
       threadStride) {
    int32_T i;
    i = static_cast<int32_T>(b_idx);
    idx.data[(j + i) - 1] = iwork.data[i];
  }
}

static void d_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 135, 135 };

  int32_T iv[2];
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    dims, &bv[0], iv);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b(emlrtRootTLSGlobal, src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

static __device__ int32_T div_s32_device(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T b_numerator;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    uint32_T b_denominator;
    if (numerator < 0) {
      b_numerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      b_numerator = static_cast<uint32_T>(numerator);
    }

    if (denominator < 0) {
      b_denominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      b_denominator = static_cast<uint32_T>(denominator);
    }

    b_numerator /= b_denominator;
    if (static_cast<int32_T>(numerator < 0) != static_cast<int32_T>(denominator <
         0)) {
      quotient = -static_cast<int32_T>(b_numerator);
    } else {
      quotient = static_cast<int32_T>(b_numerator);
    }
  }

  return quotient;
}

static void emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y_data[], int32_T y_size[2])
{
  c_emlrt_marshallIn(emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const mxArray *t, const char_T *identifier, real_T
  y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(emlrtAlias(t), &thisId, y_data, y_size);
  emlrtDestroyArray(&t);
}

static void feval(const mxArray *b, const mxArray *c, const mxArray *d, const
                  mxArray *e, const mxArray *f, emlrtMCInfo *location, const
                  mxArray **g, const mxArray **h)
{
  const mxArray *pArrays[5];
  const mxArray *mv[2];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  emlrtAssign(g, emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 2, &mv[0], 5, pArrays,
    "feval", true, location));
  emlrtAssign(h, mv[1]);
}

static const mxArray *feval(const mxArray *b, const mxArray *c, const mxArray *d,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m, 3, pArrays, "feval",
    true, location);
}

static void gpuEmxFree_int32_T(emxArray_int32_T *gpu)
{

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->data != (void *)4207599121UL) {
    CUDACHECK(cudaFree(gpu->data));
  }

  emlrtFreeMex(gpu->size);

#undef CUDACHECK

}

static void gpuEmxFree_int8_T(emxArray_int8_T *gpu)
{

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->data != (void *)4207599121UL) {
    CUDACHECK(cudaFree(gpu->data));
  }

  emlrtFreeMex(gpu->size);

#undef CUDACHECK

}

static void gpuEmxFree_real_T(emxArray_real_T *gpu)
{

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->data != (void *)4207599121UL) {
    CUDACHECK(cudaFree(gpu->data));
  }

  emlrtFreeMex(gpu->size);

#undef CUDACHECK

}

static void gpuEmxMemcpyCpuToGpu_int32_T(const emxArray_int32_T *cpu,
  emxArray_int32_T *gpu)
{
  int32_T actualSize;
  int32_T i;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->numDimensions < cpu->numDimensions) {
    gpu->numDimensions = cpu->numDimensions;
    emlrtFreeMex(gpu->size);
    gpu->size = (int32_T *)emlrtCallocMex(gpu->numDimensions, sizeof(int32_T));
  } else {
    gpu->numDimensions = cpu->numDimensions;
  }

  actualSize = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  if (gpu->allocatedSize < actualSize) {
    if (gpu->canFreeData) {
      CUDACHECK(cudaFree(gpu->data));
    }

    i = cpu->allocatedSize;
    if (i < actualSize) {
      i = actualSize;
    }

    gpu->allocatedSize = i;
    gpu->canFreeData = true;
    CUDACHECK(cudaMalloc(&gpu->data, gpu->allocatedSize * sizeof(int32_T)));
  }

  CUDACHECK(cudaMemcpy(gpu->data, cpu->data, actualSize * sizeof(int32_T),
                       cudaMemcpyHostToDevice));

#undef CUDACHECK

}

static void gpuEmxMemcpyCpuToGpu_int8_T(const emxArray_int8_T *cpu,
  emxArray_int8_T *gpu)
{
  int32_T actualSize;
  int32_T i;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->numDimensions < cpu->numDimensions) {
    gpu->numDimensions = cpu->numDimensions;
    emlrtFreeMex(gpu->size);
    gpu->size = (int32_T *)emlrtCallocMex(gpu->numDimensions, sizeof(int32_T));
  } else {
    gpu->numDimensions = cpu->numDimensions;
  }

  actualSize = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  if (gpu->allocatedSize < actualSize) {
    if (gpu->canFreeData) {
      CUDACHECK(cudaFree(gpu->data));
    }

    i = cpu->allocatedSize;
    if (i < actualSize) {
      i = actualSize;
    }

    gpu->allocatedSize = i;
    gpu->canFreeData = true;
    CUDACHECK(cudaMalloc(&gpu->data, gpu->allocatedSize * sizeof(int8_T)));
  }

  CUDACHECK(cudaMemcpy(gpu->data, cpu->data, actualSize * sizeof(int8_T),
                       cudaMemcpyHostToDevice));

#undef CUDACHECK

}

static void gpuEmxMemcpyCpuToGpu_real_T(const emxArray_real_T *cpu,
  emxArray_real_T *gpu)
{
  int32_T actualSize;
  int32_T i;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  if (gpu->numDimensions < cpu->numDimensions) {
    gpu->numDimensions = cpu->numDimensions;
    emlrtFreeMex(gpu->size);
    gpu->size = (int32_T *)emlrtCallocMex(gpu->numDimensions, sizeof(int32_T));
  } else {
    gpu->numDimensions = cpu->numDimensions;
  }

  actualSize = 1;
  for (i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  if (gpu->allocatedSize < actualSize) {
    if (gpu->canFreeData) {
      CUDACHECK(cudaFree(gpu->data));
    }

    i = cpu->allocatedSize;
    if (i < actualSize) {
      i = actualSize;
    }

    gpu->allocatedSize = i;
    gpu->canFreeData = true;
    CUDACHECK(cudaMalloc(&gpu->data, gpu->allocatedSize * sizeof(real_T)));
  }

  CUDACHECK(cudaMemcpy(gpu->data, cpu->data, actualSize * sizeof(real_T),
                       cudaMemcpyHostToDevice));

#undef CUDACHECK

}

static void gpuEmxMemcpyGpuToCpu_int32_T(emxArray_int32_T *cpu, emxArray_int32_T
  *gpu)
{
  int32_T actualSize;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  actualSize = 1;
  for (int32_T i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  CUDACHECK(cudaMemcpy(cpu->data, gpu->data, actualSize * sizeof(int32_T),
                       cudaMemcpyDeviceToHost));

#undef CUDACHECK

}

static void gpuEmxMemcpyGpuToCpu_int8_T(emxArray_int8_T *cpu, emxArray_int8_T
  *gpu)
{
  int32_T actualSize;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  actualSize = 1;
  for (int32_T i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  CUDACHECK(cudaMemcpy(cpu->data, gpu->data, actualSize * sizeof(int8_T),
                       cudaMemcpyDeviceToHost));

#undef CUDACHECK

}

static void gpuEmxMemcpyGpuToCpu_real_T(emxArray_real_T *cpu, emxArray_real_T
  *gpu)
{
  int32_T actualSize;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  actualSize = 1;
  for (int32_T i = 0; i < cpu->numDimensions; i++) {
    actualSize *= cpu->size[i];
    gpu->size[i] = cpu->size[i];
  }

  CUDACHECK(cudaMemcpy(cpu->data, gpu->data, actualSize * sizeof(real_T),
                       cudaMemcpyDeviceToHost));

#undef CUDACHECK

}

static void gpuEmxReset_int32_T(emxArray_int32_T *gpu)
{
  memset(gpu, 0, sizeof(emxArray_int32_T));
}

static void gpuEmxReset_int8_T(emxArray_int8_T *gpu)
{
  memset(gpu, 0, sizeof(emxArray_int8_T));
}

static void gpuEmxReset_real_T(emxArray_real_T *gpu)
{
  memset(gpu, 0, sizeof(emxArray_real_T));
}

static void rng(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "rng", true,
                        location);
}

static __device__ real_T shflDown2(real_T in1, uint32_T offset, uint32_T mask)
{
  int2 tmp;
  tmp = *(int2 *)&in1;
  tmp.x = __shfl_down_sync(mask, tmp.x, offset);
  tmp.y = __shfl_down_sync(mask, tmp.y, offset);
  return *(real_T *)&tmp;
}

static const mxArray *size(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m, 2, pArrays, "size",
    true, location);
}

static __device__ real_T threadGroupReduction(real_T val, uint32_T lane,
  uint32_T mask)
{
  uint32_T activeSize;
  uint32_T offset;
  activeSize = __popc(mask);
  offset = (activeSize + 1U) / 2U;
  while (activeSize > 1U) {
    real_T other;
    other = shflDown2(val, offset, mask);
    if (lane + offset < activeSize) {
      val += other;
    }

    activeSize = offset;
    offset = (offset + 1U) / 2U;
  }

  return val;
}

static __device__ real_T workGroupReduction(real_T val, uint32_T mask, uint32_T
  numActiveWarps)
{
  __shared__ real_T shared[32];
  uint32_T lane;
  uint32_T thBlkId;
  thBlkId = static_cast<uint32_T>(mwGetThreadIndexWithinBlock());
  lane = thBlkId % warpSize;
  thBlkId /= warpSize;
  val = threadGroupReduction(val, lane, mask);
  if (lane == 0U) {
    shared[thBlkId] = val;
  }

  __syncthreads();
  mask = __ballot_sync(MAX_uint32_T, lane < numActiveWarps);
  val = shared[lane];
  if (thBlkId == 0U) {
    val = threadGroupReduction(val, lane, mask);
  }

  return val;
}

void covert_search_dp_gpu(covert_search_dp_gpuStackData *SD, real_T trials,
  const char_T dpmapfp[9], const char_T priorhfp[10])
{
  static const int32_T iv[2] = { 1, 5 };

  static const int32_T iv1[2] = { 1, 9 };

  static const int32_T iv10[2] = { 1, 5 };

  static const int32_T iv11[2] = { 1, 8 };

  static const int32_T iv12[2] = { 1, 5 };

  static const int32_T iv13[2] = { 1, 2 };

  static const int32_T iv14[2] = { 1, 6 };

  static const int32_T iv2[2] = { 1, 5 };

  static const int32_T iv3[2] = { 1, 2 };

  static const int32_T iv4[2] = { 1, 6 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 10 };

  static const int32_T iv7[2] = { 1, 5 };

  static const int32_T iv8[2] = { 1, 2 };

  static const int32_T iv9[2] = { 1, 6 };

  static const char_T filename[8] = { 'r', 't', 'm', 'p', '.', 'b', 'i', 'n' };

  static const char_T precision[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

  static const char_T b_u[5] = { 'f', 'r', 'e', 'a', 'd' };

  static const char_T u[5] = { 'f', 'o', 'p', 'e', 'n' };

  dim3 b_block;
  dim3 b_grid;
  dim3 block;
  dim3 c_block;
  dim3 c_grid;
  dim3 d_block;
  dim3 d_grid;
  dim3 e_block;
  dim3 e_grid;
  dim3 f_block;
  dim3 f_grid;
  dim3 g_block;
  dim3 g_grid;
  dim3 grid;
  dim3 h_block;
  dim3 h_grid;
  dim3 i_block;
  dim3 i_grid;
  dim3 j_block;
  dim3 j_grid;
  dim3 k_block;
  dim3 k_grid;
  dim3 l_block;
  dim3 l_grid;
  dim3 m_block;
  dim3 m_grid;
  dim3 n_block;
  dim3 n_grid;
  dim3 o_block;
  dim3 o_grid;
  dim3 p_block;
  dim3 p_grid;
  dim3 q_block;
  dim3 q_grid;
  dim3 r_block;
  dim3 r_grid;
  emxArray_int32_T gpu_idx;
  emxArray_int32_T gpu_iwork;
  emxArray_int32_T gpu_pre_xt;
  emxArray_int32_T gpu_pre_yt;
  emxArray_int32_T gpu_v1;
  emxArray_int32_T gpu_vk;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_int32_T *pre_xt;
  emxArray_int32_T *pre_yt;
  emxArray_int32_T *v1;
  emxArray_int32_T *vk;
  emxArray_int8_T b_gpu_tpaMat;
  emxArray_int8_T gpu_tpaMat;
  emxArray_int8_T *b_tpaMat;
  emxArray_int8_T *tpaMat;
  emxArray_real_T b_gpu_idx;
  emxArray_real_T gpu_dv1;
  emxArray_real_T *b_idx;
  emxArray_real_T *dv1;
  emxArray_real_T *r;
  const mxArray *ab_y;
  const mxArray *b_count;
  const mxArray *b_t;
  const mxArray *b_y;
  const mxArray *bb_y;
  const mxArray *c_count;
  const mxArray *c_t;
  const mxArray *c_y;
  const mxArray *cb_y;
  const mxArray *count;
  const mxArray *d_y;
  const mxArray *db_y;
  const mxArray *e_y;
  const mxArray *eb_y;
  const mxArray *f_y;
  const mxArray *fb_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t;
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y;
  const mxArray *y_y;
  real_T (*gpu_dpmap_data)[5760000];
  real_T (*gpu_priorh_data)[5760000];
  real_T rtmp_data[18225];
  real_T (*gpu_rtmp_data)[18225];
  real_T ncols;
  real_T nrows;
  real_T *gpu_nrows;
  real_T *pData;
  int32_T A_size[2];
  int32_T dpmap_size[2];
  int32_T edges_size[2];
  int32_T priorh_size[2];
  int32_T rtmp_size[2];
  int32_T x_size[2];
  int32_T (*gpu_A_size)[2];
  int32_T (*gpu_dpmap_size)[2];
  int32_T (*gpu_priorh_size)[2];
  int32_T (*gpu_rtmp_size)[2];
  int32_T (*gpu_x_size)[2];
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T rt;
  uint32_T dv2[2];
  uint32_T (*gpu_dv2)[2];
  int16_T sizeA[2];
  int16_T (*gpu_sizeA)[2];
  boolean_T A_size_dirtyOnCpu;
  boolean_T dpmap_data_dirtyOnCpu;
  boolean_T dpmap_size_dirtyOnCpu;
  boolean_T dv1_dirtyOnCpu;
  boolean_T idx_dirtyOnCpu;
  boolean_T idx_dirtyOnGpu;
  boolean_T iwork_dirtyOnCpu;
  boolean_T nrows_dirtyOnCpu;
  boolean_T priorh_data_dirtyOnCpu;
  boolean_T priorh_data_dirtyOnGpu;
  boolean_T priorh_size_dirtyOnCpu;
  boolean_T rtmp_data_dirtyOnCpu;
  boolean_T rtmp_size_dirtyOnCpu;
  boolean_T sizeA_dirtyOnGpu;
  boolean_T tpaMat_dirtyOnCpu;
  boolean_T tpaMat_dirtyOnGpu;
  boolean_T validLaunchParams;

#define CUDACHECK(errCall)             checkCudaError(errCall, __FILE__, __LINE__)

  checkCudaError(cudaGetLastError(), __FILE__, __LINE__);
  CUDACHECK(cudaMalloc(&gpu_rtmp_data, 145800UL));
  CUDACHECK(cudaMalloc(&gpu_x_size, 8UL));
  gpuEmxReset_int32_T(&gpu_pre_xt);
  gpuEmxReset_int32_T(&gpu_pre_yt);
  gpuEmxReset_int32_T(&gpu_vk);
  gpuEmxReset_int32_T(&gpu_v1);
  CUDACHECK(cudaMalloc(&gpu_dv2, 8UL));
  gpuEmxReset_real_T(&b_gpu_idx);
  gpuEmxReset_int8_T(&b_gpu_tpaMat);
  gpuEmxReset_int32_T(&gpu_iwork);
  gpuEmxReset_int32_T(&gpu_idx);
  gpuEmxReset_real_T(&gpu_dv1);
  gpuEmxReset_int8_T(&gpu_tpaMat);
  CUDACHECK(cudaMalloc(&gpu_rtmp_size, 8UL));
  CUDACHECK(cudaMalloc(&gpu_priorh_size, 8UL));
  CUDACHECK(cudaMalloc(&gpu_priorh_data, 46080000UL));
  CUDACHECK(cudaMalloc(&gpu_sizeA, 4UL));
  CUDACHECK(cudaMalloc(&gpu_dpmap_data, 46080000UL));
  CUDACHECK(cudaMalloc(&gpu_A_size, 8UL));
  CUDACHECK(cudaMalloc(&gpu_dpmap_size, 8UL));
  CUDACHECK(cudaMalloc(&gpu_nrows, 8UL));
  rtmp_data_dirtyOnCpu = false;
  priorh_data_dirtyOnCpu = false;
  dpmap_data_dirtyOnCpu = false;
  priorh_data_dirtyOnGpu = false;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  // codegen
  //  COVERT_SEARCH_DP runs the search model with specified parameters and
  //  number of trials.
  //
  //  COVERT_SEARCH_DP calls the following routines:
  //  mk_prior   make the prior prob distribution of target location
  //  mk_amap    make a map of target amplitude (may change if contrast fixed)
  //  mk_fov     make the scalar foveation map
  //  mk_tarloc  randomly sample target location from prior
  //  mk_lr      compute log likelihood ratio
  //
  // note that (i,j) = (y,x)
  //  note:  xcorr2 = conv2(a, rot90(conj(b),2));  can add 'same' to this
  // coder.gpu.kernelfun;
  coder::tic();
  y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&y, m);
  rng(y, &emlrtMCI);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 9, m, &dpmapfp[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateString1('r');
  emlrtAssign(&d_y, m);
  nrows = emlrt_marshallIn(feval(b_y, c_y, d_y, &b_emlrtMCI),
    "<output of feval>");
  t = NULL;
  count = NULL;
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &b_u[0]);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(nrows);
  emlrtAssign(&f_y, m);
  g_y = NULL;
  m = emlrtCreateNumericArray(2, &iv3[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (pEnd = 0; pEnd < 2; pEnd++) {
    pData[pEnd] = 2400.0;
  }

  emlrtAssign(&g_y, m);
  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m, &precision[0]);
  emlrtAssign(&h_y, m);
  i_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = 0;
  emlrtAssign(&i_y, m);
  feval(e_y, f_y, g_y, h_y, i_y, &c_emlrtMCI, &t, &count);
  emlrt_marshallIn(emlrtAlias(count), "count");
  j_y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&j_y, m);
  nrows = emlrt_marshallIn(size(emlrtAlias(t), j_y, &d_emlrtMCI),
    "<output of size>");
  k_y = NULL;
  m = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&k_y, m);
  ncols = emlrt_marshallIn(size(emlrtAlias(t), k_y, &e_emlrtMCI),
    "<output of size>");
  if (nrows * ncols == 0.0) {
    dpmap_size[0] = 2400;
    dpmap_size[1] = 0;
    dpmap_size_dirtyOnCpu = true;
  } else {
    emlrt_marshallIn(emlrtAlias(t), "t", SD->f0.dpmap_data, dpmap_size);
    dpmap_size_dirtyOnCpu = true;
    dpmap_data_dirtyOnCpu = true;
  }

  emlrtDestroyArray(&t);
  emlrtDestroyArray(&count);
  A_size[0] = dpmap_size[0];
  A_size[1] = dpmap_size[1];
  A_size_dirtyOnCpu = true;
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((dpmap_size[0] *
    dpmap_size[1] - 1) + 1L), &grid, &block, 1024U, 65535U);
  if (validLaunchParams) {
    if (dpmap_data_dirtyOnCpu) {
      CUDACHECK(cudaMemcpy(gpu_dpmap_data, &SD->f0.dpmap_data[0], 46080000UL,
                           cudaMemcpyHostToDevice));
      dpmap_data_dirtyOnCpu = false;
    }

    CUDACHECK(cudaMemcpy(gpu_dpmap_size, &dpmap_size[0], 8UL,
                         cudaMemcpyHostToDevice));
    dpmap_size_dirtyOnCpu = false;
    covert_search_dp_gpu_kernel1<<<grid, block>>>(*gpu_dpmap_data,
      *gpu_dpmap_size, *gpu_priorh_data);
    CUDACHECK(cudaGetLastError());
    priorh_data_dirtyOnGpu = true;
  }

  if ((dpmap_size[0] != 0) && (dpmap_size[1] != 0)) {
    if (dpmap_size_dirtyOnCpu) {
      CUDACHECK(cudaMemcpy(gpu_dpmap_size, &dpmap_size[0], 8UL,
                           cudaMemcpyHostToDevice));
    }

    covert_search_dp_gpu_kernel2<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>
      (*gpu_dpmap_size, *gpu_sizeA);
    CUDACHECK(cudaGetLastError());
    CUDACHECK(cudaMemcpy(&sizeA[0], gpu_sizeA, 4UL, cudaMemcpyDeviceToHost));
    dpmap_size[0] = sizeA[0];
    dpmap_size[1] = sizeA[1];
    dpmap_size_dirtyOnCpu = true;
    pEnd = sizeA[1];
    validLaunchParams = mwGetLaunchParameters(static_cast<real_T>(((sizeA[0] - 1)
      + 1L) * ((pEnd - 1) + 1L)), &b_grid, &b_block, 1024U, 65535U);
    if (validLaunchParams) {
      if (dpmap_data_dirtyOnCpu) {
        CUDACHECK(cudaMemcpy(gpu_dpmap_data, &SD->f0.dpmap_data[0], 46080000UL,
                             cudaMemcpyHostToDevice));
      }

      CUDACHECK(cudaMemcpy(gpu_dpmap_size, &dpmap_size[0], 8UL,
                           cudaMemcpyHostToDevice));
      dpmap_size_dirtyOnCpu = false;
      CUDACHECK(cudaMemcpy(gpu_A_size, &A_size[0], 8UL, cudaMemcpyHostToDevice));
      A_size_dirtyOnCpu = false;
      covert_search_dp_gpu_kernel3<<<b_grid, b_block>>>(*gpu_priorh_data,
        *gpu_A_size, *gpu_dpmap_size, *gpu_sizeA, pEnd, *gpu_dpmap_data);
      CUDACHECK(cudaGetLastError());
      dpmap_data_dirtyOnCpu = false;
    }
  }

  l_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &u[0]);
  emlrtAssign(&l_y, m);
  m_y = NULL;
  m = emlrtCreateCharArray(2, &iv6[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 10, m, &priorhfp[0]);
  emlrtAssign(&m_y, m);
  n_y = NULL;
  m = emlrtCreateString1('r');
  emlrtAssign(&n_y, m);
  nrows = emlrt_marshallIn(feval(l_y, m_y, n_y, &b_emlrtMCI),
    "<output of feval>");
  b_t = NULL;
  b_count = NULL;
  o_y = NULL;
  m = emlrtCreateCharArray(2, &iv7[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &b_u[0]);
  emlrtAssign(&o_y, m);
  p_y = NULL;
  m = emlrtCreateDoubleScalar(nrows);
  emlrtAssign(&p_y, m);
  q_y = NULL;
  m = emlrtCreateNumericArray(2, &iv8[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (i = 0; i < 2; i++) {
    pData[i] = 2400.0;
  }

  emlrtAssign(&q_y, m);
  r_y = NULL;
  m = emlrtCreateCharArray(2, &iv9[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m, &precision[0]);
  emlrtAssign(&r_y, m);
  s_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = 0;
  emlrtAssign(&s_y, m);
  feval(o_y, p_y, q_y, r_y, s_y, &c_emlrtMCI, &b_t, &b_count);
  emlrt_marshallIn(emlrtAlias(b_count), "count");
  t_y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&t_y, m);
  nrows = emlrt_marshallIn(size(emlrtAlias(b_t), t_y, &d_emlrtMCI),
    "<output of size>");
  u_y = NULL;
  m = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&u_y, m);
  ncols = emlrt_marshallIn(size(emlrtAlias(b_t), u_y, &e_emlrtMCI),
    "<output of size>");
  if (nrows * ncols == 0.0) {
    priorh_size[0] = 2400;
    priorh_size[1] = 0;
    priorh_size_dirtyOnCpu = true;
  } else {
    emlrt_marshallIn(emlrtAlias(b_t), "t", SD->f0.priorh_data, priorh_size);
    priorh_size_dirtyOnCpu = true;
    priorh_data_dirtyOnGpu = false;
    priorh_data_dirtyOnCpu = true;
  }

  emlrtDestroyArray(&b_t);
  emlrtDestroyArray(&b_count);
  v_y = NULL;
  m = emlrtCreateCharArray(2, &iv10[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &u[0]);
  emlrtAssign(&v_y, m);
  w_y = NULL;
  m = emlrtCreateCharArray(2, &iv11[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m, &filename[0]);
  emlrtAssign(&w_y, m);
  x_y = NULL;
  m = emlrtCreateString1('r');
  emlrtAssign(&x_y, m);
  nrows = emlrt_marshallIn(feval(v_y, w_y, x_y, &b_emlrtMCI),
    "<output of feval>");
  c_t = NULL;
  c_count = NULL;
  y_y = NULL;
  m = emlrtCreateCharArray(2, &iv12[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m, &b_u[0]);
  emlrtAssign(&y_y, m);
  ab_y = NULL;
  m = emlrtCreateDoubleScalar(nrows);
  emlrtAssign(&ab_y, m);
  bb_y = NULL;
  m = emlrtCreateNumericArray(2, &iv13[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (i = 0; i < 2; i++) {
    pData[i] = 135.0;
  }

  emlrtAssign(&bb_y, m);
  cb_y = NULL;
  m = emlrtCreateCharArray(2, &iv14[0]);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m, &precision[0]);
  emlrtAssign(&cb_y, m);
  db_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = 0;
  emlrtAssign(&db_y, m);
  feval(y_y, ab_y, bb_y, cb_y, db_y, &c_emlrtMCI, &c_t, &c_count);
  emlrt_marshallIn(emlrtAlias(c_count), "count");
  eb_y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&eb_y, m);
  nrows = emlrt_marshallIn(size(emlrtAlias(c_t), eb_y, &d_emlrtMCI),
    "<output of size>");
  fb_y = NULL;
  m = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&fb_y, m);
  ncols = emlrt_marshallIn(size(emlrtAlias(c_t), fb_y, &e_emlrtMCI),
    "<output of size>");
  if (nrows * ncols == 0.0) {
    rtmp_size[0] = 135;
    rtmp_size[1] = 0;
    rtmp_size_dirtyOnCpu = true;
  } else {
    b_emlrt_marshallIn(emlrtAlias(c_t), "t", rtmp_data, rtmp_size);
    rtmp_size_dirtyOnCpu = true;
    rtmp_data_dirtyOnCpu = true;
  }

  emlrtDestroyArray(&c_t);
  emlrtDestroyArray(&c_count);

  //  Setup some generic parameters
  //  Fixed parameters
  rt = static_cast<int32_T>(trunc(static_cast<real_T>(rtmp_size[0]) / 2.0));

  //
  //  Create effective prior
  emxInit_int8_T(&tpaMat, 1, true);
  tpaMat_dirtyOnGpu = false;
  nrows = floor(trials / 2.0);
  nrows_dirtyOnCpu = true;
  ncols = floor(trials / 2.0);
  pEnd = tpaMat->size[0];
  tpaMat->size[0] = static_cast<int32_T>(nrows) + static_cast<int32_T>(ncols);
  emxEnsureCapacity_int8_T(tpaMat, pEnd);
  tpaMat_dirtyOnCpu = true;
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>
    ((static_cast<int32_T>(nrows) - 1) + 1L), &c_grid, &c_block, 1024U, 65535U);
  if (validLaunchParams) {
    gpuEmxMemcpyCpuToGpu_int8_T(tpaMat, &gpu_tpaMat);
    covert_search_dp_gpu_kernel4<<<c_grid, c_block>>>(static_cast<int32_T>(nrows)
      - 1, gpu_tpaMat);
    CUDACHECK(cudaGetLastError());
    tpaMat_dirtyOnCpu = false;
    tpaMat_dirtyOnGpu = true;
  }

  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>
    ((static_cast<int32_T>(ncols) - 1) + 1L), &d_grid, &d_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (tpaMat_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int8_T(tpaMat, &gpu_tpaMat);
      tpaMat_dirtyOnCpu = false;
    }

    CUDACHECK(cudaMemcpy(gpu_nrows, &nrows, 8UL, cudaMemcpyHostToDevice));
    nrows_dirtyOnCpu = false;
    covert_search_dp_gpu_kernel5<<<d_grid, d_block>>>(gpu_nrows,
      static_cast<int32_T>(ncols) - 1, gpu_tpaMat);
    CUDACHECK(cudaGetLastError());
    tpaMat_dirtyOnGpu = true;
  }

  emxInit_real_T(&dv1, 2, true);
  sizeA_dirtyOnGpu = false;

  //  1 for target present, 0 for absent.
  pEnd = dv1->size[0] * dv1->size[1];
  dv1->size[0] = 1;
  if (tpaMat_dirtyOnGpu) {
    gpuEmxMemcpyGpuToCpu_int8_T(tpaMat, &gpu_tpaMat);
    tpaMat_dirtyOnGpu = false;
  }

  dv1->size[1] = tpaMat->size[0];
  emxEnsureCapacity_real_T(dv1, pEnd);
  dv1_dirtyOnCpu = true;
  if (dv1->size[1] != 0) {
    emlrtRandu(&dv1->data[0], dv1->size[1]);
  }

  emxInit_int32_T(&idx, 2, true);
  idx_dirtyOnGpu = false;
  n = dv1->size[1] + 1;
  pEnd = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = dv1->size[1];
  emxEnsureCapacity_int32_T(idx, pEnd);
  idx_dirtyOnCpu = true;
  p = dv1->size[1];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &e_grid, &e_block, 1024U, 65535U);
  if (validLaunchParams) {
    gpuEmxMemcpyCpuToGpu_real_T(dv1, &gpu_dv1);
    dv1_dirtyOnCpu = false;
    gpuEmxMemcpyCpuToGpu_int32_T(idx, &gpu_idx);
    covert_search_dp_gpu_kernel6<<<e_grid, e_block>>>(p, gpu_idx);
    CUDACHECK(cudaGetLastError());
    idx_dirtyOnCpu = false;
    idx_dirtyOnGpu = true;
  }

  if (dv1->size[1] != 0) {
    emxInit_int32_T(&iwork, 1, true);
    pEnd = iwork->size[0];
    iwork->size[0] = dv1->size[1];
    emxEnsureCapacity_int32_T(iwork, pEnd);
    iwork_dirtyOnCpu = true;
    pEnd = dv1->size[1] - 1;
    validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((pEnd - 1) / 2
      + 1L), &f_grid, &f_block, 1024U, 65535U);
    if (validLaunchParams) {
      if (dv1_dirtyOnCpu) {
        gpuEmxMemcpyCpuToGpu_real_T(dv1, &gpu_dv1);
        dv1_dirtyOnCpu = false;
      }

      if (idx_dirtyOnCpu) {
        gpuEmxMemcpyCpuToGpu_int32_T(idx, &gpu_idx);
        idx_dirtyOnCpu = false;
      }

      covert_search_dp_gpu_kernel7<<<f_grid, f_block>>>(gpu_dv1, pEnd, gpu_idx);
      CUDACHECK(cudaGetLastError());
      idx_dirtyOnGpu = true;
    }

    if ((dv1->size[1] & 1) != 0) {
      p = dv1->size[1];
      if (dv1_dirtyOnCpu) {
        gpuEmxMemcpyCpuToGpu_real_T(dv1, &gpu_dv1);
      }

      if (idx_dirtyOnCpu) {
        gpuEmxMemcpyCpuToGpu_int32_T(idx, &gpu_idx);
        idx_dirtyOnCpu = false;
      }

      covert_search_dp_gpu_kernel8<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>(p,
        gpu_idx);
      CUDACHECK(cudaGetLastError());
      idx_dirtyOnGpu = true;
    }

    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if (idx_dirtyOnGpu) {
            gpuEmxMemcpyGpuToCpu_int32_T(idx, &gpu_idx);
            idx_dirtyOnGpu = false;
          }

          if ((dv1->data[idx->data[p - 1] - 1] <= dv1->data[idx->data[q] - 1]) ||
              rtIsNaN(dv1->data[idx->data[q] - 1])) {
            iwork->data[k] = idx->data[p - 1];
            iwork_dirtyOnCpu = true;
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[k] = idx->data[q];
            iwork_dirtyOnCpu = true;
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((kEnd - 1)
          + 1L), &g_grid, &g_block, 1024U, 65535U);
        if (validLaunchParams) {
          if (idx_dirtyOnCpu) {
            gpuEmxMemcpyCpuToGpu_int32_T(idx, &gpu_idx);
            idx_dirtyOnCpu = false;
          }

          if (iwork_dirtyOnCpu) {
            gpuEmxMemcpyCpuToGpu_int32_T(iwork, &gpu_iwork);
            iwork_dirtyOnCpu = false;
          }

          covert_search_dp_gpu_kernel9<<<g_grid, g_block>>>(gpu_iwork, j, kEnd,
            gpu_idx);
          CUDACHECK(cudaGetLastError());
          idx_dirtyOnGpu = true;
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&iwork);
    gpuEmxFree_int32_T(&gpu_iwork);
  }

  for (i = 0; i < 2; i++) {
    A_size[i] = dv1->size[i];
    A_size_dirtyOnCpu = true;
  }

  pEnd = dv1->size[0] * dv1->size[1];
  dv1->size[0] = 1;
  dv1->size[1] = A_size[1];
  emxEnsureCapacity_real_T(dv1, pEnd);
  dv1_dirtyOnCpu = true;
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((A_size[0] *
    A_size[1] - 1) + 1L), &h_grid, &h_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (A_size_dirtyOnCpu) {
      CUDACHECK(cudaMemcpy(gpu_A_size, &A_size[0], 8UL, cudaMemcpyHostToDevice));
    }

    gpuEmxMemcpyCpuToGpu_real_T(dv1, &gpu_dv1);
    if (idx_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int32_T(idx, &gpu_idx);
    }

    covert_search_dp_gpu_kernel10<<<h_grid, h_block>>>(gpu_idx, *gpu_A_size,
      gpu_dv1);
    CUDACHECK(cudaGetLastError());
    dv1_dirtyOnCpu = false;
    sizeA_dirtyOnGpu = true;
  }

  emxFree_int32_T(&idx);
  gpuEmxFree_int32_T(&gpu_idx);
  emxInit_int8_T(&b_tpaMat, 1, true);
  idx_dirtyOnGpu = false;
  pEnd = b_tpaMat->size[0];
  if (sizeA_dirtyOnGpu) {
    gpuEmxMemcpyGpuToCpu_real_T(dv1, &gpu_dv1);
  }

  b_tpaMat->size[0] = dv1->size[1];
  emxEnsureCapacity_int8_T(b_tpaMat, pEnd);
  A_size_dirtyOnCpu = true;
  p = dv1->size[1];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &i_grid, &i_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (tpaMat_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int8_T(tpaMat, &gpu_tpaMat);
    }

    if (dv1_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_real_T(dv1, &gpu_dv1);
    }

    gpuEmxMemcpyCpuToGpu_int8_T(b_tpaMat, &b_gpu_tpaMat);
    covert_search_dp_gpu_kernel11<<<i_grid, i_block>>>(gpu_tpaMat, gpu_dv1, p,
      b_gpu_tpaMat);
    CUDACHECK(cudaGetLastError());
    A_size_dirtyOnCpu = false;
    idx_dirtyOnGpu = true;
  }

  emxFree_real_T(&dv1);
  gpuEmxFree_real_T(&gpu_dv1);
  pEnd = tpaMat->size[0];
  if (idx_dirtyOnGpu) {
    gpuEmxMemcpyGpuToCpu_int8_T(b_tpaMat, &b_gpu_tpaMat);
  }

  tpaMat->size[0] = b_tpaMat->size[0];
  emxEnsureCapacity_int8_T(tpaMat, pEnd);
  p = b_tpaMat->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &j_grid, &j_block, 1024U, 65535U);
  if (validLaunchParams) {
    gpuEmxMemcpyCpuToGpu_int8_T(tpaMat, &gpu_tpaMat);
    if (A_size_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int8_T(b_tpaMat, &b_gpu_tpaMat);
    }

    covert_search_dp_gpu_kernel12<<<j_grid, j_block>>>(b_gpu_tpaMat, p,
      gpu_tpaMat);
    CUDACHECK(cudaGetLastError());
    tpaMat_dirtyOnGpu = true;
  }

  emxFree_int8_T(&b_tpaMat);
  gpuEmxFree_int8_T(&b_gpu_tpaMat);

  //  permute isn't necessary becuase this search with no memory. we permute anyway. 
  //  integer pixel locations
  if (priorh_size[0] * priorh_size[1] != 0) {
    pEnd = priorh_size[0] * priorh_size[1];
    if (priorh_data_dirtyOnCpu) {
      CUDACHECK(cudaMemcpy(gpu_priorh_data, &SD->f0.priorh_data[0], 46080000UL,
                           cudaMemcpyHostToDevice));
    }

    if (nrows_dirtyOnCpu) {
      CUDACHECK(cudaMemcpy(gpu_nrows, &nrows, 8UL, cudaMemcpyHostToDevice));
    }

    covert_search_dp_gpu_kernel13<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>
      (*gpu_priorh_data, gpu_nrows);
    CUDACHECK(cudaGetLastError());
    A_size_dirtyOnCpu = true;
    validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((pEnd - 2) +
      1L), &k_grid, &k_block, 1024U, 65535U);
    if (validLaunchParams) {
      CUDACHECK(cudaMemcpy(gpu_priorh_size, &priorh_size[0], 8UL,
                           cudaMemcpyHostToDevice));
      priorh_size_dirtyOnCpu = false;
      covert_search_dp_gpu_kernel14<<<k_grid, k_block>>>(*gpu_priorh_data, pEnd,
        gpu_nrows);
      CUDACHECK(cudaGetLastError());
    }

    edges_size[1] = priorh_size[0] * priorh_size[1] + 1;
    SD->f0.edges_data[0] = 0.0;
    SD->f0.edges_data[priorh_size[0] * priorh_size[1]] = 1.0;
    pEnd = priorh_size[0] * priorh_size[1];
    for (j = 0; j <= pEnd - 2; j++) {
      if (priorh_data_dirtyOnGpu) {
        CUDACHECK(cudaMemcpy(&SD->f0.priorh_data[0], gpu_priorh_data, 46080000UL,
                             cudaMemcpyDeviceToHost));
        priorh_data_dirtyOnGpu = false;
      }

      if (A_size_dirtyOnCpu) {
        CUDACHECK(cudaMemcpy(&nrows, gpu_nrows, 8UL, cudaMemcpyDeviceToHost));
        A_size_dirtyOnCpu = false;
      }

      SD->f0.edges_data[j + 1] = fmin(SD->f0.edges_data[j] + SD->
        f0.priorh_data[j] / nrows, 1.0);
    }
  } else {
    edges_size[1] = 1;
    SD->f0.edges_data[0] = 0.0;
  }

  emxInit_real_T(&b_idx, 1, true);
  idx_dirtyOnGpu = false;
  pEnd = b_idx->size[0];
  b_idx->size[0] = static_cast<int32_T>(trials);
  emxEnsureCapacity_real_T(b_idx, pEnd);
  idx_dirtyOnCpu = true;
  if (static_cast<int32_T>(trials) > 0) {
    if (priorh_size[0] * priorh_size[1] == 0) {
      pEnd = b_idx->size[0];
      b_idx->size[0] = static_cast<int32_T>(trials);
      emxEnsureCapacity_real_T(b_idx, pEnd);
      emlrtRandu(&b_idx->data[0], b_idx->size[0]);
      pEnd = b_idx->size[0];
      validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((pEnd - 1) +
        1L), &l_grid, &l_block, 1024U, 65535U);
      if (validLaunchParams) {
        if (priorh_size_dirtyOnCpu) {
          CUDACHECK(cudaMemcpy(gpu_priorh_size, &priorh_size[0], 8UL,
                               cudaMemcpyHostToDevice));
          priorh_size_dirtyOnCpu = false;
        }

        gpuEmxMemcpyCpuToGpu_real_T(b_idx, &b_gpu_idx);
        covert_search_dp_gpu_kernel16<<<l_grid, l_block>>>(*gpu_priorh_size,
          pEnd, b_gpu_idx);
        CUDACHECK(cudaGetLastError());
        idx_dirtyOnCpu = false;
        idx_dirtyOnGpu = true;
      }
    } else {
      emxInit_real_T(&r, 1, true);
      pEnd = r->size[0];
      r->size[0] = static_cast<int32_T>(trials);
      emxEnsureCapacity_real_T(r, pEnd);
      emlrtRandu(&r->data[0], r->size[0]);
      dv2[0] = static_cast<uint32_T>(r->size[0]);
      pEnd = b_idx->size[0];
      b_idx->size[0] = static_cast<int32_T>(dv2[0]);
      emxEnsureCapacity_real_T(b_idx, pEnd);
      validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((
        static_cast<int32_T>(dv2[0]) - 1) + 1L), &l_grid, &l_block, 1024U,
        65535U);
      if (validLaunchParams) {
        CUDACHECK(cudaMemcpy(gpu_dv2, &dv2[0], 8UL, cudaMemcpyHostToDevice));
        gpuEmxMemcpyCpuToGpu_real_T(b_idx, &b_gpu_idx);
        covert_search_dp_gpu_kernel15<<<l_grid, l_block>>>(*gpu_dv2, b_gpu_idx);
        CUDACHECK(cudaGetLastError());
        idx_dirtyOnCpu = false;
        idx_dirtyOnGpu = true;
      }

      pEnd = 0;
      p = r->size[0];
      for (k = 0; k < p; k++) {
        i2 = 0;
        if (!rtIsNaN(r->data[pEnd])) {
          if ((r->data[pEnd] >= SD->f0.edges_data[0]) && (r->data[pEnd] <
               SD->f0.edges_data[edges_size[1] - 1])) {
            q = edges_size[1];
            i2 = 1;
            qEnd = 2;
            while (q > qEnd) {
              kEnd = (i2 >> 1) + (q >> 1);
              if (((i2 & 1) == 1) && ((q & 1) == 1)) {
                kEnd++;
              }

              if (r->data[pEnd] >= SD->f0.edges_data[kEnd - 1]) {
                i2 = kEnd;
                qEnd = kEnd + 1;
              } else {
                q = kEnd;
              }
            }
          }

          if (r->data[pEnd] == SD->f0.edges_data[edges_size[1] - 1]) {
            i2 = edges_size[1];
          }
        }

        if (idx_dirtyOnGpu) {
          gpuEmxMemcpyGpuToCpu_real_T(b_idx, &b_gpu_idx);
          idx_dirtyOnGpu = false;
        }

        b_idx->data[pEnd] = i2;
        idx_dirtyOnCpu = true;
        pEnd++;
      }

      emxFree_real_T(&r);
    }
  }

  if (priorh_size_dirtyOnCpu) {
    CUDACHECK(cudaMemcpy(gpu_priorh_size, &priorh_size[0], 8UL,
                         cudaMemcpyHostToDevice));
  }

  covert_search_dp_gpu_kernel17<<<dim3(1U, 1U, 1U), dim3(32U, 1U, 1U)>>>
    (*gpu_priorh_size, *gpu_sizeA);
  CUDACHECK(cudaGetLastError());
  emxInit_int32_T(&v1, 1, true);
  nrows_dirtyOnCpu = false;
  pEnd = v1->size[0];
  if (idx_dirtyOnGpu) {
    gpuEmxMemcpyGpuToCpu_real_T(b_idx, &b_gpu_idx);
  }

  v1->size[0] = b_idx->size[0];
  emxEnsureCapacity_int32_T(v1, pEnd);
  A_size_dirtyOnCpu = true;
  p = b_idx->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &m_grid, &m_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (idx_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_real_T(b_idx, &b_gpu_idx);
    }

    gpuEmxMemcpyCpuToGpu_int32_T(v1, &gpu_v1);
    covert_search_dp_gpu_kernel18<<<m_grid, m_block>>>(b_gpu_idx, p, gpu_v1);
    CUDACHECK(cudaGetLastError());
    A_size_dirtyOnCpu = false;
    nrows_dirtyOnCpu = true;
  }

  emxFree_real_T(&b_idx);
  gpuEmxFree_real_T(&b_gpu_idx);
  emxInit_int32_T(&vk, 1, true);
  idx_dirtyOnGpu = false;
  CUDACHECK(cudaMemcpy(&sizeA[0], gpu_sizeA, 4UL, cudaMemcpyDeviceToHost));
  pEnd = vk->size[0];
  if (nrows_dirtyOnCpu) {
    gpuEmxMemcpyGpuToCpu_int32_T(v1, &gpu_v1);
    nrows_dirtyOnCpu = false;
  }

  vk->size[0] = v1->size[0];
  emxEnsureCapacity_int32_T(vk, pEnd);
  iwork_dirtyOnCpu = true;
  p = v1->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &n_grid, &n_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (A_size_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int32_T(v1, &gpu_v1);
    }

    gpuEmxMemcpyCpuToGpu_int32_T(vk, &gpu_vk);
    covert_search_dp_gpu_kernel19<<<n_grid, n_block>>>(static_cast<int32_T>
      (sizeA[0]), gpu_v1, p, gpu_vk);
    CUDACHECK(cudaGetLastError());
    iwork_dirtyOnCpu = false;
    idx_dirtyOnGpu = true;
  }

  pEnd = v1->size[0];
  emxEnsureCapacity_int32_T(v1, pEnd);
  A_size_dirtyOnCpu = true;
  p = v1->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &o_grid, &o_block, 1024U, 65535U);
  if (validLaunchParams) {
    gpuEmxMemcpyCpuToGpu_int32_T(v1, &gpu_v1);
    if (iwork_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int32_T(vk, &gpu_vk);
      iwork_dirtyOnCpu = false;
    }

    covert_search_dp_gpu_kernel20<<<o_grid, o_block>>>(static_cast<int32_T>
      (sizeA[0]), gpu_vk, p, gpu_v1);
    CUDACHECK(cudaGetLastError());
    A_size_dirtyOnCpu = false;
    nrows_dirtyOnCpu = true;
  }

  emxInit_int32_T(&pre_yt, 1, true);
  sizeA_dirtyOnGpu = false;
  pEnd = pre_yt->size[0];
  if (nrows_dirtyOnCpu) {
    gpuEmxMemcpyGpuToCpu_int32_T(v1, &gpu_v1);
  }

  pre_yt->size[0] = v1->size[0];
  emxEnsureCapacity_int32_T(pre_yt, pEnd);
  p = v1->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &p_grid, &p_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (A_size_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int32_T(v1, &gpu_v1);
    }

    gpuEmxMemcpyCpuToGpu_int32_T(pre_yt, &gpu_pre_yt);
    covert_search_dp_gpu_kernel21<<<p_grid, p_block>>>(gpu_v1, p, gpu_pre_yt);
    CUDACHECK(cudaGetLastError());
    sizeA_dirtyOnGpu = true;
  }

  emxFree_int32_T(&v1);
  gpuEmxFree_int32_T(&gpu_v1);
  emxInit_int32_T(&pre_xt, 1, true);
  A_size_dirtyOnCpu = false;
  pEnd = pre_xt->size[0];
  if (idx_dirtyOnGpu) {
    gpuEmxMemcpyGpuToCpu_int32_T(vk, &gpu_vk);
  }

  pre_xt->size[0] = vk->size[0];
  emxEnsureCapacity_int32_T(pre_xt, pEnd);
  p = vk->size[0];
  validLaunchParams = mwGetLaunchParameters(static_cast<real_T>((p - 1) + 1L),
    &q_grid, &q_block, 1024U, 65535U);
  if (validLaunchParams) {
    if (iwork_dirtyOnCpu) {
      gpuEmxMemcpyCpuToGpu_int32_T(vk, &gpu_vk);
    }

    gpuEmxMemcpyCpuToGpu_int32_T(pre_xt, &gpu_pre_xt);
    covert_search_dp_gpu_kernel22<<<q_grid, q_block>>>(gpu_vk, p, gpu_pre_xt);
    CUDACHECK(cudaGetLastError());
    A_size_dirtyOnCpu = true;
  }

  emxFree_int32_T(&vk);
  gpuEmxFree_int32_T(&gpu_vk);

  //  Run simulation loop
  pEnd = static_cast<int32_T>(trials);
  for (k = 0; k < pEnd; k++) {
    //  background number
    emlrtRandn(&SD->f0.re[0], 360000);

    //  human experiments have 30 independent pix per degree. upsample via nearest neighbor to run simulations in 120 pix per degree. 
    //  sneaky way to increase the matrix with blocks -- Kronecker product
    if (tpaMat_dirtyOnGpu) {
      gpuEmxMemcpyGpuToCpu_int8_T(tpaMat, &gpu_tpaMat);
      tpaMat_dirtyOnGpu = false;
    }

    if (tpaMat->data[k] != 0) {
      //  if target present add target responses
      if (sizeA_dirtyOnGpu) {
        gpuEmxMemcpyGpuToCpu_int32_T(pre_yt, &gpu_pre_yt);
        sizeA_dirtyOnGpu = false;
      }

      nrows = static_cast<real_T>(pre_yt->data[k]) - static_cast<real_T>(rt);
      ncols = static_cast<real_T>(pre_yt->data[k]) + static_cast<real_T>(rt);
      if (nrows > ncols) {
        p = 0;
        q = -1;
      } else {
        p = static_cast<int32_T>(nrows) - 1;
        q = static_cast<int32_T>(ncols) - 1;
      }

      if (A_size_dirtyOnCpu) {
        gpuEmxMemcpyGpuToCpu_int32_T(pre_xt, &gpu_pre_xt);
        A_size_dirtyOnCpu = false;
      }

      nrows = static_cast<real_T>(pre_xt->data[k]) - static_cast<real_T>(rt);
      ncols = static_cast<real_T>(pre_xt->data[k]) + static_cast<real_T>(rt);
      if (nrows > ncols) {
        i2 = 0;
        qEnd = -1;
      } else {
        i2 = static_cast<int32_T>(nrows) - 1;
        qEnd = static_cast<int32_T>(ncols) - 1;
      }

      x_size[0] = (q - p) + 1;
      x_size[1] = (qEnd - i2) + 1;
      validLaunchParams = mwGetLaunchParameters(static_cast<real_T>(((q - p) +
        1L) * ((qEnd - i2) + 1L)), &r_grid, &r_block, 1024U, 65535U);
      if (validLaunchParams) {
        if (dpmap_data_dirtyOnCpu) {
          CUDACHECK(cudaMemcpy(gpu_dpmap_data, &SD->f0.dpmap_data[0], 46080000UL,
                               cudaMemcpyHostToDevice));
          dpmap_data_dirtyOnCpu = false;
        }

        if (dpmap_size_dirtyOnCpu) {
          CUDACHECK(cudaMemcpy(gpu_dpmap_size, &dpmap_size[0], 8UL,
                               cudaMemcpyHostToDevice));
          dpmap_size_dirtyOnCpu = false;
        }

        if (rtmp_data_dirtyOnCpu) {
          CUDACHECK(cudaMemcpy(gpu_rtmp_data, &rtmp_data[0], 145800UL,
                               cudaMemcpyHostToDevice));
          rtmp_data_dirtyOnCpu = false;
        }

        if (rtmp_size_dirtyOnCpu) {
          CUDACHECK(cudaMemcpy(gpu_rtmp_size, &rtmp_size[0], 8UL,
                               cudaMemcpyHostToDevice));
          rtmp_size_dirtyOnCpu = false;
        }

        CUDACHECK(cudaMemcpy(gpu_x_size, &x_size[0], 8UL, cudaMemcpyHostToDevice));
      }

      //  create the local target response
    }

    //  compute normalized responses
    //  compute log likelihood ratio of target present,
    //  location of max normalized response, and max normalized response
    // log(sum(eslr(:), 'omitnan'));
  }

  emxFree_int32_T(&pre_xt);
  gpuEmxFree_int32_T(&gpu_pre_xt);
  emxFree_int32_T(&pre_yt);
  gpuEmxFree_int32_T(&gpu_pre_yt);
  emxFree_int8_T(&tpaMat);
  gpuEmxFree_int8_T(&gpu_tpaMat);

  //  Structured Data Storage
  // results = 1;
  // results = table(trial, stimY, stimX, tPresent, ymax, xmax, llr, slpmx,...
  //     'VariableNames', {'trial', 'stimY', 'stimX', 'tPresent', 'ymax', 'xmax', 'llr', 'slpmx'}); 
  coder::toc();
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  CUDACHECK(cudaFree(gpu_nrows));
  CUDACHECK(cudaFree(*gpu_dpmap_size));
  CUDACHECK(cudaFree(*gpu_A_size));
  CUDACHECK(cudaFree(*gpu_dpmap_data));
  CUDACHECK(cudaFree(*gpu_sizeA));
  CUDACHECK(cudaFree(*gpu_priorh_data));
  CUDACHECK(cudaFree(*gpu_priorh_size));
  CUDACHECK(cudaFree(*gpu_rtmp_size));
  CUDACHECK(cudaFree(*gpu_dv2));
  CUDACHECK(cudaFree(*gpu_x_size));
  CUDACHECK(cudaFree(*gpu_rtmp_data));

#undef CUDACHECK

}

// End of code generation (covert_search_dp_gpu.cu)
