// Data module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 438 decompiled functions
// Address range: 0x806701e8 - 0x8068fd70

#include "Data.h"
#include "../types.h"

// Global Ram base pointers (defined in stubs.c)
extern void *g_Ram_ptr;
extern float g_Ram_float;
extern unsigned char g_Ram_byte;
extern unsigned int g_Ram_uint;

// === Config_validate_806701e8 (0x806701e8) ===
int Config_validate_806701e8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80670228 (0x80670228) ===
undefined4 * data_Config_80670228(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  return param_1;
}

// === Config_validate_80670268 (0x80670268) ===
int Config_validate_80670268(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (iRam00000000 != 0) {
      iRam00000000 = 0;
      uRam00000004 = 0;
      uRam00000008 = 0;
      uRam0000000c = 0;
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === Config_assertFail_806702e0 (0x806702e0) ===
void Config_assertFail_806702e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067081c (0x8067081c) ===
undefined4 * data_Config_8067081c(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  return param_1;
}

// === Config_assertFail_80670868 (0x80670868) ===
void Config_assertFail_80670868(void)

{
  int iVar1;
  
  FUN_segment_0__80700278();
  iVar1 = FUN_segment_0__8040bafc();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x12000,*(undefined4 *)(iVar1 + 0xc98),0x20);
}

// === Config_validate_80670a44 (0x80670a44) ===
int Config_validate_80670a44(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80670a84 (0x80670a84) ===
undefined4 * data_Config_80670a84(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  return param_1;
}

// === Config_assertFail_80670ac4 (0x80670ac4) ===
void Config_assertFail_80670ac4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80670d70 (0x80670d70) ===
int Config_validate_80670d70(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80670db0 (0x80670db0) ===
undefined4 * data_Config_80670db0(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  return param_1;
}

// === data_Config_80670df0 (0x80670df0) ===
void data_Config_80670df0(int *param_1)

{
  short sVar1;
  
  param_1[0x30] = param_1[0xc];
  param_1[0x31] = param_1[0xd];
  param_1[0x32] = param_1[0xe];
  *(undefined *)(param_1 + 0x2c) = 0;
  FUN_segment_0__80700a44(param_1,0);
  *(undefined *)(param_1 + 0x33) = 1;
  sVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (sVar1 == 0x1aa) {
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),0);
  }
  return;
}

// === data_Config_80670e88 (0x80670e88) ===
void data_Config_80670e88(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xb0) != 0) {
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) - g_Ram_float;
    FUN_segment_0__80404464(&local_18,param_1 + 0x30,param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x30) = local_18;
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
    *(undefined4 *)(param_1 + 0x34) = local_14;
    *(undefined4 *)(param_1 + 0x38) = local_10;
    data_Config_80670f7c(param_1);
  }
  return;
}

// === data_Config_80670f0c (0x80670f0c) ===
void data_Config_80670f0c(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) - g_Ram_float;
  FUN_segment_0__80404464(&local_18,param_1 + 0x30,param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x30) = local_18;
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
  *(undefined4 *)(param_1 + 0x34) = local_14;
  *(undefined4 *)(param_1 + 0x38) = local_10;
  return;
}

// === data_Config_80670f7c (0x80670f7c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80670f7c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80671160 (0x80671160) ===
void data_Config_80671160(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xb0) == 0) {
    *(undefined *)(param_1 + 0xb0) = 1;
    FUN_segment_0__8040443c((double)g_Ram_float,&local_18,0);
    *(undefined4 *)(param_1 + 0xb4) = local_18;
    *(undefined4 *)(param_1 + 0xb8) = local_14;
    *(undefined4 *)(param_1 + 0xbc) = local_10;
  }
  return;
}

// === data_Config_806711cc (0x806711cc) ===
undefined4 data_Config_806711cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((param_4 == 3) || (param_4 == 5)) {
    if (*(char *)(param_1 + 0xb0) == 0) {
      *(undefined *)(param_1 + 0xb0) = 1;
      FUN_segment_0__8040443c((double)g_Ram_float,&local_28,0);
      *(undefined4 *)(param_1 + 0xb4) = local_28;
      *(undefined4 *)(param_1 + 0xb8) = local_24;
      *(undefined4 *)(param_1 + 0xbc) = local_20;
    }
    if (*(char *)(param_1 + 0xcc) != 0) {
      FUN_segment_0__8047dcf4(param_2,0);
      *(undefined *)(param_1 + 0xcc) = 0;
    }
  }
  return param_3;
}

// === data_Config_80671284 (0x80671284) ===
undefined4 data_Config_80671284(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (((param_4 == 3) || (param_4 == 5)) && (*(char *)(param_1 + 0xb0) == 0)) {
    *(undefined *)(param_1 + 0xb0) = 1;
    FUN_segment_0__8040443c((double)g_Ram_float,&local_18,0);
    *(undefined4 *)(param_1 + 0xb4) = local_18;
    *(undefined4 *)(param_1 + 0xb8) = local_14;
    *(undefined4 *)(param_1 + 0xbc) = local_10;
  }
  return param_3;
}

// === data_Config_80671310 (0x80671310) ===
void data_Config_80671310(int *param_1)

{
  short sVar2;
  undefined4 uVar1;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  sVar2 = (**(code **)(*param_1 + 0x24))();
  if (sVar2 == 0x12e) {
    FUN_segment_0__806ffd54(param_1);
  }
  else {
    FUN_segment_0__80701bcc(param_1);
    local_40 = param_1[0x16];
    local_3c = param_1[0x17];
    local_38 = param_1[0x18];
    local_4c = (float)param_1[0x19];
    local_30 = param_1[0x1a];
    local_2c = param_1[0x1b];
    local_28 = param_1[0x1c];
    local_48 = (float)param_1[0x1d];
    local_20 = param_1[0x1e];
    local_1c = param_1[0x1f];
    local_18 = param_1[0x20];
    local_44 = (float)param_1[0x21];
    local_34 = local_4c;
    local_24 = local_48;
    local_14 = local_44;
    FUN_segment_0__8040443c((double)g_Ram_float,&local_58,0);
    local_4c = local_4c + local_58;
    local_48 = local_48 + local_54;
    local_44 = local_44 + local_50;
    local_34 = local_4c;
    local_24 = local_48;
    local_14 = local_44;
    uVar1 = (**(code **)(*param_1 + 0xd4))(param_1);
    (**(code **)(*(int *)param_1[0x2b] + 0x10))((int *)param_1[0x2b],&local_40,param_1 + 0xf,uVar1);
  }
  return;
}

// === Config_validate_80671468 (0x80671468) ===
void Config_validate_80671468(int param_1)

{
  int iVar1;
  undefined auStack_48 [60];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  iVar1 = **(int **)(*(int *)(param_1 + 0x10) + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0xc,auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48);
}

// === data_Config_8067151c (0x8067151c) ===
void data_Config_8067151c(int *param_1)

{
  short sVar1;
  undefined local_18 [4];
  undefined4 local_14;
  undefined4 local_10 [3];
  
  sVar1 = (**(code **)(*param_1 + 0x24))();
  if (sVar1 == 0x1aa) {
    local_10[0] = uRam00000000;
    local_14 = 0;
    local_18[0] = uRam00000000._0_1_;
    FUN_segment_0__80701444(param_1,local_10,&local_14,1,local_18);
  }
  return;
}

// === Config_validate_806715ac (0x806715ac) ===
int Config_validate_806715ac(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_806715ec (0x806715ec) ===
undefined4 * data_Config_806715ec(undefined4 *param_1)

{
  FUN_segment_0__80708b3c();
  *param_1 = 0;
  return param_1;
}

// === Config_validate_80671628 (0x80671628) ===
int Config_validate_80671628(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_80671668 (0x80671668) ===
void Config_validate_80671668(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))((double)g_Ram_float,*(int **)(param_1 + 0x20),0)
  ;
  *(undefined4 *)(param_1 + 200) = 0;
  *(int *)(param_1 + 0xe0) = (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x32);
  dVar5 = (double)FUN_segment_0__805cd150(*(undefined4 *)(param_1 + 0x20));
  fVar4 = fRam0000000c;
  *(float *)(param_1 + 0xd0) = (float)(dVar5 * (double)fRam00000004);
  dVar5 = dRam00000018;
  fVar3 = fRam00000008;
  fVar2 = fVar4 * fRam00000010;
  sVar1 = *(short *)(**(int **)(param_1 + 0xa0) + 0x2a);
  *(float *)(param_1 + 0xdc) = fVar4;
  *(float *)(param_1 + 0xd8) =
       fVar3 / (float)((double)CONCAT44(0x43300000,(int)sVar1 ^ 0x80000000) - dVar5);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)fVar2);
}

// === data_Config_80671748 (0x80671748) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80671748(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067188c (0x8067188c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067188c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_806719a0 (0x806719a0) ===
void Config_validate_806719a0(undefined4 *param_1,int *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  uint uStack_14;
  
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  local_18 = 0x43300000;
  uStack_14 = (int)*(short *)(*param_2 + 0x2e) ^ 0x80000000;
  param_1[0x2c] =
       g_Ram_float /
       (float)((double)CONCAT44(0x43300000,uStack_14) - (double)CONCAT44(g_Ram_float,uRam00000004))
  ;
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x2e,param_1 + 0x12);
}

// === Config_validate_80671a70 (0x80671a70) ===
int Config_validate_80671a70(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80671ab0 (0x80671ab0) ===
void data_Config_80671ab0(int param_1)

{
  *(float *)(param_1 + 0xb4) =
       (float)((double)CONCAT44(0x43300000,
                                (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x30) ^ 0x80000000) -
              dRam00000000) * dRam00000000._0_4_;
  return;
}

// === Config_validate_80671af8 (0x80671af8) ===
void Config_validate_80671af8(int param_1)

{
  undefined auStack_38 [52];
  
  if (*(short *)(**(int **)(param_1 + 0xa0) + 0x2c) == 0) {
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xb0);
  }
  else {
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)*(float *)(param_1 + 0xb4),auStack_38,0);
}

// === Config_validate_80671c08 (0x80671c08) ===
void Config_validate_80671c08(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7c);
}

// === Config_validate_80671c6c (0x80671c6c) ===
int Config_validate_80671c6c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80671cac (0x80671cac) ===
void data_Config_80671cac(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(*(int *)param_1[0x28] + 0x2c);
  if (iVar1 == 0) {
    param_1[0x2d] = (int)*(short *)(*(int *)param_1[0x28] + 0x2e);
  }
  else {
    param_1[0x2d] = iVar1;
  }
  param_1[0x2c] = 0;
  (**(code **)(*(int *)param_1[0x2f] + 0xc))();
  FUN_segment_0__80701bcc(param_1);
  (**(code **)(*(int *)param_1[0x2f] + 0x78))((int *)param_1[0x2f],param_1 + 0x16);
  (**(code **)(*(int *)param_1[0x2f] + 0x80))();
  (**(code **)(*param_1 + 0x54))(param_1);
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === data_Config_80671d90 (0x80671d90) ===
void data_Config_80671d90(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1[0x2c] == 0) {
    (**(code **)(*(int *)param_1[0x2f] + 0x10))();
    iVar2 = param_1[0x2d];
    param_1[0x2d] = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      param_1[0x2c] = 1;
      param_1[0x2e] = (int)*(short *)(*(int *)param_1[0x28] + 0x30);
    }
  }
  else if (param_1[0x2c] == 1) {
    bVar1 = false;
    iVar2 = (**(code **)(*param_1 + 0x30))();
    if (((~*(uint *)(iVar2 + 0x20) & 0x1010101) == 0) &&
       (iVar2 = FUN_segment_0__8056d8d8(g_Ram_float), iVar2 != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      (**(code **)(*(int *)param_1[0x2f] + 0xc))();
      FUN_segment_0__80701bcc(param_1);
      (**(code **)(*(int *)param_1[0x2f] + 0x78))((int *)param_1[0x2f],param_1 + 0x16);
      (**(code **)(*(int *)param_1[0x2f] + 0x80))();
    }
    if (*(short *)(*(int *)param_1[0x28] + 0x2e) != 0) {
      iVar2 = param_1[0x2e];
      param_1[0x2e] = iVar2 + -1;
      if (iVar2 + -1 < 0) {
        param_1[0x2c] = 0;
        param_1[0x2d] = (int)*(short *)(*(int *)param_1[0x28] + 0x2e);
      }
      FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x2a5);
    }
  }
  return;
}

// === data_Config_80671ef4 (0x80671ef4) ===
void data_Config_80671ef4(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x10))();
  iVar1 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    *(int *)(param_1 + 0xb8) = (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x30);
  }
  return;
}

// === data_Config_80671f58 (0x80671f58) ===
void data_Config_80671f58(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*param_1 + 0x30))();
  if (((~*(uint *)(iVar2 + 0x20) & 0x1010101) == 0) &&
     (iVar2 = FUN_segment_0__8056d8d8(g_Ram_float), iVar2 != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    (**(code **)(*(int *)param_1[0x2f] + 0xc))();
    FUN_segment_0__80701bcc(param_1);
    (**(code **)(*(int *)param_1[0x2f] + 0x78))((int *)param_1[0x2f],param_1 + 0x16);
    (**(code **)(*(int *)param_1[0x2f] + 0x80))();
  }
  if (*(short *)(*(int *)param_1[0x28] + 0x2e) != 0) {
    iVar2 = param_1[0x2e];
    param_1[0x2e] = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      param_1[0x2c] = 0;
      param_1[0x2d] = (int)*(short *)(*(int *)param_1[0x28] + 0x2e);
    }
    FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x2a5);
  }
  return;
}

// === data_Config_80672064 (0x80672064) ===
void data_Config_80672064(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xbc) + 0xc))();
  FUN_segment_0__80701bcc(param_1);
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x78))(*(int **)(param_1 + 0xbc),param_1 + 0x58);
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x80))();
  return;
}

// === Config_validate_806720fc (0x806720fc) ===
int * Config_validate_806720fc(int *param_1,int *param_2)

{
  short sVar1;
  
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  *(undefined *)(param_1 + 0x2e) = 1;
  sVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (((sVar1 == 0x2de) || (sVar1 = (**(code **)(*param_1 + 0x24))(param_1), sVar1 == 0x2f3)) &&
     (1 < *(byte *)(iRam00000000 + 0x25))) {
    *(undefined *)(param_1 + 0x2e) = 0;
  }
  if (*(char *)(param_1 + 0x2e) != 0) {
    sVar1 = (**(code **)(*param_1 + 0x24))(param_1);
    if (sVar1 == 0x2cb) {
      if (*(byte *)(iRam00000000 + 0x25) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (sVar1 == 0x2cc) {
      if (*(byte *)(iRam00000000 + 0x25) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (sVar1 == 0x2cd) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (sVar1 == 0x2d9) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (sVar1 == 0x2da) {
      sVar1 = *(short *)(*param_2 + 0x2a);
      if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
      if (sVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
      if (sVar1 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
    }
    else {
      if (sVar1 == 0x2de) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
      if (sVar1 == 0x2f3) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0x7c);
      }
    }
  }
  return param_1;
}

// === Config_validate_80672434 (0x80672434) ===
int Config_validate_80672434(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80672478 (0x80672478) ===
void data_Config_80672478(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2e) != 0) {
    bVar1 = false;
    iVar2 = (**(code **)(*param_1 + 0x30))();
    if (((~*(uint *)(iVar2 + 0x20) & 0x1010101) == 0) &&
       (iVar2 = FUN_segment_0__8056d8d8(uRam00000000), iVar2 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(int *)param_1[0x2d] + 0x10))();
    }
    else {
      (**(code **)(*(int *)param_1[0x2d] + 0xc))();
      FUN_segment_0__80701bcc(param_1);
      (**(code **)(*(int *)param_1[0x2d] + 0x78))((int *)param_1[0x2d],param_1 + 0x16);
      (**(code **)(*(int *)param_1[0x2d] + 0x80))();
    }
  }
  return;
}

// === data_Config_8067255c (0x8067255c) ===
void data_Config_8067255c(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2e) != 0) {
    bVar1 = false;
    iVar2 = (**(code **)(*param_1 + 0x30))();
    if (((~*(uint *)(iVar2 + 0x20) & 0x1010101) == 0) &&
       (iVar2 = FUN_segment_0__8056d8d8(uRam00000000), iVar2 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(int *)param_1[0x2d] + 0x10))();
    }
    else {
      (**(code **)(*(int *)param_1[0x2d] + 0xc))();
      FUN_segment_0__80701bcc(param_1);
      (**(code **)(*(int *)param_1[0x2d] + 0x78))((int *)param_1[0x2d],param_1 + 0x16);
      (**(code **)(*(int *)param_1[0x2d] + 0x80))();
    }
  }
  return;
}

// === Config_validate_80672658 (0x80672658) ===
int Config_validate_80672658(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_8067269c (0x8067269c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067269c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80672778 (0x80672778) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80672778(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80672884 (0x80672884) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80672884(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80672948 (0x80672948) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80672948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_806729e4 (0x806729e4) ===
void Config_validate_806729e4(int param_1)

{
  undefined4 local_18 [3];
  
  local_18[0] = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(local_18);
}

// === Config_validate_80672ac0 (0x80672ac0) ===
void Config_validate_80672ac0(int param_1)

{
  undefined4 local_18 [3];
  
  local_18[0] = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(local_18);
}

// === data_Config_80672be4 (0x80672be4) ===
undefined4 data_Config_80672be4(void)

{
  if (*(char *)(iRam00000000 + 0x54) != 0) {
    return *(undefined4 *)(iRam00000000 + 8);
  }
  return *(undefined4 *)(iRam00000000 + 4);
}

// === Config_validate_80672c18 (0x80672c18) ===
void Config_validate_80672c18(undefined4 param_1,undefined4 param_2,float *param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]));
}

// === Config_validate_80672cc0 (0x80672cc0) ===
void Config_validate_80672cc0(undefined4 param_1,undefined4 param_2,float *param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]));
}

// === data_Config_80672ec4 (0x80672ec4) ===
undefined4 data_Config_80672ec4(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  fVar1 = param_1[2] * param_3[2] + *param_1 * *param_3 + param_1[1] * param_3[1];
  fVar2 = param_1[2] * param_4[2] + *param_1 * *param_4 + param_1[1] * param_4[1];
  fVar5 = fRam00000004;
  if (fVar1 != fVar2) {
    fVar5 = -(fVar2 + param_1[3]) / (fVar1 - fVar2);
  }
  if ((g_Ram_float <= fVar5) && (fVar5 <= fRam00000008)) {
    if ((g_Ram_float <= fVar5) && (fVar5 <= fRam00000008)) {
      fVar5 = fRam00000008 - fVar5;
      fVar1 = param_4[1];
      fVar2 = param_3[1];
      fVar3 = param_4[2];
      fVar4 = param_3[2];
      *param_2 = *param_3 + (*param_4 - *param_3) * fVar5;
      param_2[1] = fVar2 + (fVar1 - fVar2) * fVar5;
      param_2[2] = fVar4 + (fVar3 - fVar4) * fVar5;
    }
    uVar6 = 1;
  }
  return uVar6;
}

// === Config_validate_80672fe4 (0x80672fe4) ===
undefined4 Config_validate_80672fe4(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar2,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar3 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar3,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      Config_assertFail_806731b8();
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_validate_80673110 (0x80673110) ===
int Config_validate_80673110(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x40);
  }
  return iRam00000000;
}

// === Config_assertFail_806731b8 (0x806731b8) ===
void Config_assertFail_806731b8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
    return;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      puVar2 = g_Ram_uint;
      if (g_Ram_uint != (void *)0) {
        g_Ram_uint = (void *)0;
        Config_validate_8067326c(puVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_validate_8067326c (0x8067326c) ===
undefined4 * Config_validate_8067326c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != (void *)0) {
    if (param_1 != (void *)0) {
      *param_1 = 0;
      iVar2 = iRam00000000;
      bVar1 = iRam00000000 != 0;
      if ((bVar1) && (iRam00000000 = 0, bVar1)) {
        Config_validate_80672fe4(iVar2,0xffffffff);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === Config_assertFail_80673310 (0x80673310) ===
void Config_assertFail_80673310(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067338c (0x8067338c) ===
void data_Config_8067338c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  uVar2 = FUN_segment_0__804214c8(g_Ram_float);
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 0xffffffff) {
    return;
  }
  if (param_2 != 0) {
    return;
  }
  FUN_segment_0__8047d97c(g_Ram_float,uVar2);
  iVar3 = FUN_segment_0__8047decc();
  if (iVar3 == 0) {
    return;
  }
  puVar4 = (undefined4 *)FUN_segment_0__8047d97c(g_Ram_float,uVar2);
  iVar3 = *(int *)((int)g_Ram_float + 0xb70);
  pfVar5 = *(float **)(*(int *)*puVar4 + 0x38);
  fVar10 = *pfVar5;
  fVar9 = pfVar5[1];
  fVar8 = pfVar5[2];
  fVar7 = pfVar5[3];
  fVar6 = pfVar5[4];
  if (iVar3 != 6) {
    if (iVar3 < 6) {
      if (iVar3 == 3) {
LAB_segment_0__80673478:
        *(undefined *)(param_1 + 0x11) = 1;
      }
      else if ((2 < iVar3) || (-1 < iVar3)) {
LAB_segment_0__8067346c:
        *(undefined *)(param_1 + 0x10) = 1;
      }
    }
    else if (iVar3 < 0xb) {
      if (iVar3 < 9) goto LAB_segment_0__8067346c;
      goto LAB_segment_0__80673478;
    }
  }
  *(float *)(param_1 + 0x14) = g_Ram_float * fVar10;
  puVar4 = (undefined4 *)FUN_segment_0__8047d97c(g_Ram_float,uVar2);
  uVar11 = *(undefined4 *)(*(int *)*puVar4 + 8);
  iVar3 = FUN_segment_0__80417218(uVar11);
  if (iVar3 != 0) {
    uVar11 = 0x18;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar11;
  FUN_segment_0__8047d97c(g_Ram_float,uVar2);
  uVar11 = FUN_segment_0__8047e2f8();
  *(undefined4 *)(param_1 + 0x24) = uVar11;
  if (((*(uint *)((int)g_Ram_float + 0xb90) & 4) == 0) &&
     (*(uint *)((int)g_Ram_float + 0xb70) < 0xb)) {
                    /* WARNING: Could not emulate address calculation at 0x8067350c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(uint *)((int)g_Ram_float + 0xb70) << 2))();
    return;
  }
  iVar3 = 0;
  bVar1 = *(byte *)((int)g_Ram_float + uVar2 * 0xf0 + 0x2e);
  if (-1 < (char)bVar1) {
    iVar3 = (int)g_Ram_float + (uint)bVar1 * 0xec + 4;
  }
  if (iVar3 == 0) goto LAB_segment_0__806735e8;
  if (*(int **)(iVar3 + 4) == (int *)0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x10))();
  }
  if (iVar3 != 0) goto LAB_segment_0__806735e8;
  iVar3 = *(int *)((int)g_Ram_float + 0xb70);
  if (iVar3 == 6) goto LAB_segment_0__806735e8;
  if (iVar3 < 6) {
    if (iVar3 == 3) {
LAB_segment_0__806735e0:
      *(undefined *)(param_1 + 0x31) = 1;
      goto LAB_segment_0__806735e8;
    }
    if ((iVar3 < 3) && (iVar3 < 0)) goto LAB_segment_0__806735e8;
  }
  else {
    if (10 < iVar3) goto LAB_segment_0__806735e8;
    if (8 < iVar3) goto LAB_segment_0__806735e0;
  }
  *(undefined *)(param_1 + 0x30) = 1;
LAB_segment_0__806735e8:
  *(float *)(param_1 + 0x34) = fVar8;
  *(float *)(param_1 + 0x38) = fVar7;
  *(float *)(param_1 + 0x3c) = fVar6;
  if (((*(uint *)((int)g_Ram_float + 0xb90) & 4) == 0) &&
     ((((iVar3 = *(int *)((int)g_Ram_float + 0xb70), iVar3 == 0 || (iVar3 == 1)) || (iVar3 == 7))
      || (iVar3 == 8)))) {
    fVar9 = g_Ram_float * fVar9;
    *(float *)(param_1 + 0x1c) = g_Ram_float * fVar10;
    *(float *)(param_1 + 0x18) = fVar9;
  }
  return;
}

// === data_Config_80673a94 (0x80673a94) ===
void data_Config_80673a94(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_segment_0__8047d97c(uRam00000000);
  uVar3 = *(undefined4 *)(*(int *)*puVar1 + 8);
  iVar2 = FUN_segment_0__80417218(uVar3);
  if (iVar2 != 0) {
    uVar3 = 0x18;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_segment_0__8047d97c(uRam00000000,param_2);
  uVar3 = FUN_segment_0__8047e2f8();
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  return;
}

// === data_Config_80673b68 (0x80673b68) ===
void data_Config_80673b68(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = *(byte *)(iRam00000000 + param_2 * 0xf0 + 0x2e);
  if (-1 < (char)bVar1) {
    iVar2 = iRam00000000 + (uint)bVar1 * 0xec + 4;
  }
  if (iVar2 == 0) {
    return;
  }
  if (*(int **)(iVar2 + 4) == (int *)0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x10))();
  }
  if (iVar2 != 0) {
    return;
  }
  iVar2 = *(int *)(iRam00000000 + 0xb70);
  if (iVar2 == 6) {
    return;
  }
  if (iVar2 < 6) {
    if (iVar2 == 3) {
LAB_segment_0__80673c34:
      *(undefined *)(param_1 + 0x31) = 1;
      return;
    }
    if ((iVar2 < 3) && (iVar2 < 0)) {
      return;
    }
  }
  else {
    if (10 < iVar2) {
      return;
    }
    if (8 < iVar2) goto LAB_segment_0__80673c34;
  }
  *(undefined *)(param_1 + 0x30) = 1;
  return;
}

// === data_Config_80673d18 (0x80673d18) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80673d18(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80673ec0 (0x80673ec0) ===
void data_Config_80673ec0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(char *)(param_1 + 0x3c) == 0) {
    FUN_segment_0__80404498(&local_18,param_1,param_1 + 0xc);
    *(float *)(param_1 + 0x18) = local_18;
    *(float *)(param_1 + 0x1c) = local_14;
    fVar1 = local_18 + *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24);
    fVar2 = local_14 + *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x28);
    fVar3 = local_10 + *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x18) = fVar1;
    *(float *)(param_1 + 0x1c) = fVar2;
    *(float *)(param_1 + 0x20) = fVar3;
    if (*(int *)(*(int *)((int)g_Ram_float + 0x54) + 0x18) == 2) {
      fVar2 = fVar2 * g_Ram_float;
      fVar3 = fVar3 * g_Ram_float;
      *(float *)(param_1 + 0x18) = fVar1 * g_Ram_float;
      *(float *)(param_1 + 0x1c) = fVar2;
      *(float *)(param_1 + 0x20) = fVar3;
    }
    else {
      fVar2 = fVar2 * g_Ram_float;
      fVar3 = fVar3 * g_Ram_float;
      *(float *)(param_1 + 0x18) = fVar1 * g_Ram_float;
      *(float *)(param_1 + 0x1c) = fVar2;
      *(float *)(param_1 + 0x20) = fVar3;
    }
    *(float *)(param_1 + 0x24) = g_Ram_float;
    *(undefined4 *)(param_1 + 0x28) = uRam00000004;
    *(undefined4 *)(param_1 + 0x2c) = uRam00000008;
  }
  return;
}

// === Config_assertFail_80673fd0 (0x80673fd0) ===
void Config_assertFail_80673fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80674238 (0x80674238) ===
undefined4 * Config_validate_80674238(undefined4 *param_1,int param_2)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1[2]);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === Config_validate_806742b0 (0x806742b0) ===
undefined4 * Config_validate_806742b0(undefined4 *param_1,int param_2)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1[2]);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === Config_assertFail_80674330 (0x80674330) ===
void Config_assertFail_80674330(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8067462c (0x8067462c) ===
void Config_assertFail_8067462c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_806748c8 (0x806748c8) ===
void Config_assertFail_806748c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_80674c04 (0x80674c04) ===
void Config_assertFail_80674c04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_80674d94 (0x80674d94) ===
void data_Config_80674d94(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    bVar4 = true;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 4) + 0x18))((int *)(param_1 + 4));
  }
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0xc) + (param_2 & 0xff) * 4);
  uVar1 = param_3[1];
  *puVar3 = *param_3;
  uVar2 = param_3[2];
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  return;
}

// === data_Config_80674e2c (0x80674e2c) ===
void data_Config_80674e2c(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    bVar4 = true;
  }
  if (!bVar4) {
    (**(code **)(*(int *)(param_1 + 4) + 0x18))((int *)(param_1 + 4));
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + (param_2 & 0xff) * 4);
  uVar1 = param_3[1];
  *(undefined4 *)(iVar3 + 0x30) = *param_3;
  uVar2 = param_3[2];
  *(undefined4 *)(iVar3 + 0x34) = uVar1;
  *(undefined4 *)(iVar3 + 0x38) = uVar2;
  return;
}

// === data_Config_80674ec4 (0x80674ec4) ===
void data_Config_80674ec4(int param_1,uint param_2,undefined param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    bVar1 = true;
  }
  if (!bVar1) {
    (**(code **)(*(int *)(param_1 + 4) + 0x18))((int *)(param_1 + 4));
  }
  *(undefined *)(*(int *)(*(int *)(param_1 + 0xc) + (param_2 & 0xff) * 4) + 0x3c) = param_3;
  return;
}

// === data_Config_80674f48 (0x80674f48) ===
undefined4 data_Config_80674f48(int param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    bVar1 = true;
  }
  if (!bVar1) {
    (**(code **)(*(int *)(param_1 + 4) + 0x18))((int *)(param_1 + 4));
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + (param_2 & 0xff) * 4);
}

// === Config_validate_80674fbc (0x80674fbc) ===
void Config_validate_80674fbc(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 << 2);
}

// === Config_validate_8067500c (0x8067500c) ===
void Config_validate_8067500c(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_3 == 0) {
    param_3 = iRam00000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 4) << 2,param_3,4);
}

// === Config_validate_80675088 (0x80675088) ===
void Config_validate_80675088(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 << 2);
}

// === Config_validate_806750d8 (0x806750d8) ===
void Config_validate_806750d8(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  if (param_3 == 0) {
    param_3 = iRam00000000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 4) << 2,param_3,4);
}

// === Config_validate_80675154 (0x80675154) ===
undefined4 Config_validate_80675154(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      puVar2 = g_Ram_uint;
      if (g_Ram_uint != (void *)0) {
        g_Ram_uint = (void *)0;
        Config_validate_80675548(puVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_validate_8067524c (0x8067524c) ===
int Config_validate_8067524c(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x454);
  }
  return iRam00000000;
}

// === Config_assertFail_8067529c (0x8067529c) ===
void Config_assertFail_8067529c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
    return;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      puVar2 = g_Ram_uint;
      if (g_Ram_uint != (void *)0) {
        g_Ram_uint = (void *)0;
        Config_validate_80675548(puVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_assertFail_80675350 (0x80675350) ===
void Config_assertFail_80675350(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80675548 (0x80675548) ===
undefined4 * Config_validate_80675548(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != (void *)0) {
    if (param_1 != (void *)0) {
      *param_1 = 0;
      iVar2 = iRam00000000;
      bVar1 = iRam00000000 != 0;
      if ((bVar1) && (iRam00000000 = 0, bVar1)) {
        Config_validate_80675154(iVar2,0xffffffff);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === data_Config_80675620 (0x80675620) ===
void data_Config_80675620(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  uVar5 = uRam00000000;
  iVar10 = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x428) = 0x100;
  *(undefined4 *)(param_1 + 0x42c) = 0x100;
  *(undefined4 *)(param_1 + 0x430) = 0x100;
  *(undefined4 *)(param_1 + 0x434) = 0x100;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = uVar5;
  *(undefined4 *)(param_1 + 0x450) = 0;
  while (iVar10 < *(int *)(param_1 + 0x420)) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar8);
    if ((puVar6[3] & 0x400) != 0) {
      if ((puVar6[3] & 0x900) == 0) {
        iVar10 = iVar10 + 1;
      }
      else {
        pfVar13 = (float *)*puVar6;
        iVar10 = iVar10 + 1;
        fVar4 = (float)puVar6[2];
        puVar6[6] = *pfVar13 + fVar4;
        puVar6[7] = *pfVar13 - fVar4;
        *(float *)(*(int *)(param_1 + 0x10) + *(short *)(puVar6 + 5) * 8) = pfVar13[2] + fVar4;
        *(float *)(*(int *)(param_1 + 0x14) + *(short *)((int)puVar6 + 0x16) * 8) =
             pfVar13[2] - fVar4;
        puVar6[3] = puVar6[3] & 0xfffff7ff;
      }
    }
    iVar8 = iVar8 + 0x20;
  }
  for (iVar8 = 1; iVar8 < *(int *)(param_1 + 0x420); iVar8 = iVar8 + 1) {
    iVar10 = iVar8 << 3;
    iVar12 = iVar8;
    while( true ) {
      iVar11 = *(int *)(param_1 + 0x10);
      iVar15 = (iVar12 + -1) * 8;
      pfVar14 = (float *)(iVar11 + iVar15);
      pfVar13 = (float *)(iVar11 + iVar10);
      if ((*(float *)(iVar11 + iVar15) <= *pfVar13) || (iVar12 < 1)) break;
      bVar1 = *(byte *)(pfVar13 + 1);
      fVar4 = *pfVar13;
      uVar2 = *(undefined *)((int)pfVar13 + 5);
      *pfVar13 = *pfVar14;
      *(undefined *)(pfVar13 + 1) = *(undefined *)(pfVar14 + 1);
      *(undefined *)((int)pfVar13 + 5) = *(undefined *)((int)pfVar14 + 5);
      *pfVar14 = fVar4;
      *(byte *)(pfVar14 + 1) = bVar1;
      *(undefined *)((int)pfVar14 + 5) = uVar2;
      iVar15 = *(int *)(param_1 + 0x14) + (uint)*(byte *)(pfVar13 + 1) * 8;
      iVar11 = *(int *)(param_1 + 0x14) + (uint)bVar1 * 8;
      *(char *)(iVar15 + 4) = *(char *)(iVar15 + 4) + '\x01';
      *(char *)(iVar11 + 4) = *(char *)(iVar11 + 4) + -1;
      iVar15 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(iVar15 + 5) * 0x20;
      *(short *)(iVar15 + 0x14) = *(short *)(iVar15 + 0x14) + 1;
      iVar15 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(iVar11 + 5) * 0x20;
      *(short *)(iVar15 + 0x14) = *(short *)(iVar15 + 0x14) + -1;
      uVar7 = (uint)*(byte *)((int)pfVar13 + 5);
      if (uVar7 == *(byte *)(pfVar14 + 1)) {
        iVar15 = uVar7 << 3;
        do {
          iVar15 = iVar15 + 8;
          uVar7 = uVar7 + 1;
        } while ((int)(uint)*(byte *)(*(int *)(param_1 + 0x14) + iVar15 + 4) < iVar12);
        *(char *)((int)pfVar13 + 5) = (char)uVar7;
      }
      if (*(byte *)(pfVar13 + 1) < *(byte *)((int)pfVar14 + 5)) {
        *(byte *)((int)pfVar14 + 5) = *(byte *)(pfVar13 + 1);
      }
      iVar10 = iVar10 + -8;
      iVar12 = iVar12 + -1;
    }
  }
  for (uVar7 = 1; (int)uVar7 < *(int *)(param_1 + 0x420); uVar7 = uVar7 + 1) {
    iVar8 = uVar7 << 3;
    uVar9 = uVar7;
    while( true ) {
      iVar12 = *(int *)(param_1 + 0x14);
      iVar10 = (uVar9 - 1) * 8;
      pfVar14 = (float *)(iVar12 + iVar10);
      pfVar13 = (float *)(iVar12 + iVar8);
      if ((*(float *)(iVar12 + iVar10) <= *pfVar13) || ((int)uVar9 < 1)) break;
      fVar4 = *pfVar13;
      uVar2 = *(undefined *)(pfVar13 + 1);
      uVar3 = *(undefined *)((int)pfVar13 + 5);
      *pfVar13 = *pfVar14;
      *(undefined *)(pfVar13 + 1) = *(undefined *)(pfVar14 + 1);
      *(undefined *)((int)pfVar13 + 5) = *(undefined *)((int)pfVar14 + 5);
      *pfVar14 = fVar4;
      *(undefined *)(pfVar14 + 1) = uVar2;
      *(undefined *)((int)pfVar14 + 5) = uVar3;
      iVar10 = *(int *)(param_1 + 0x10) + (uint)*(byte *)(pfVar13 + 1) * 8;
      *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + '\x01';
      iVar10 = *(int *)(param_1 + 0x10) + (uint)*(byte *)(pfVar14 + 1) * 8;
      *(char *)(iVar10 + 4) = *(char *)(iVar10 + 4) + -1;
      iVar10 = *(int *)(param_1 + 0x18) + (uint)*(byte *)((int)pfVar13 + 5) * 0x20;
      *(short *)(iVar10 + 0x16) = *(short *)(iVar10 + 0x16) + 1;
      iVar10 = *(int *)(param_1 + 0x18) + (uint)*(byte *)((int)pfVar14 + 5) * 0x20;
      *(short *)(iVar10 + 0x16) = *(short *)(iVar10 + 0x16) + -1;
      uVar16 = (uint)*(byte *)(pfVar14 + 1);
      uVar17 = (uint)*(byte *)(pfVar13 + 1);
      if (uVar16 < uVar17) {
        iVar10 = uVar17 << 3;
        iVar12 = uVar17 << 3;
        while (((int)(uint)*(byte *)(pfVar14 + 1) < (int)uVar17 &&
               (uVar9 - 1 == (uint)*(byte *)(*(int *)(param_1 + 0x10) + iVar10 + 5)))) {
          iVar15 = *(int *)(param_1 + 0x10) + iVar12;
          iVar10 = iVar10 + -8;
          uVar17 = uVar17 - 1;
          iVar12 = iVar12 + -8;
          *(char *)(iVar15 + 5) = *(char *)(iVar15 + 5) + '\x01';
        }
      }
      else {
        iVar10 = uVar16 << 3;
        iVar12 = uVar16 << 3;
        while (((int)(uint)*(byte *)(pfVar13 + 1) < (int)uVar16 &&
               (uVar9 == *(byte *)(*(int *)(param_1 + 0x10) + iVar10 + 5)))) {
          iVar15 = *(int *)(param_1 + 0x10) + iVar12;
          iVar10 = iVar10 + -8;
          uVar16 = uVar16 - 1;
          iVar12 = iVar12 + -8;
          *(char *)(iVar15 + 5) = *(char *)(iVar15 + 5) + -1;
        }
      }
      iVar8 = iVar8 + -8;
      uVar9 = uVar9 - 1;
    }
  }
  return;
}

// === data_Config_80675a64 (0x80675a64) ===
undefined4 data_Config_80675a64(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x42c) == 0x100) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x42c) * 4);
  do {
    iVar1 = *(int *)(param_1 + 0x42c) + 1;
    *(int *)(param_1 + 0x42c) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x42c) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x42c) * 4) + 0xc) & 2)
           == 0);
  return *(undefined4 *)(iVar2 + 0x10);
}

// === data_Config_80675b34 (0x80675b34) ===
undefined4 data_Config_80675b34(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x434) == 0x100) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x434) * 4);
  do {
    iVar1 = *(int *)(param_1 + 0x434) + 1;
    *(int *)(param_1 + 0x434) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x434) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x434) * 4) + 0xc) &
           0x10) == 0);
  return *(undefined4 *)(iVar2 + 0x10);
}

// === data_Config_80675b9c (0x80675b9c) ===
void data_Config_80675b9c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x428) + 1;
    *(int *)(param_1 + 0x428) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x428) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x428) * 4) + 0xc) & 1)
           == 0);
  *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x42c) + 1;
    *(int *)(param_1 + 0x42c) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x42c) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x42c) * 4) + 0xc) & 2)
           == 0);
  *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x430) + 1;
    *(int *)(param_1 + 0x430) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x430) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x430) * 4) + 0xc) &
           0xc) == 0);
  *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x434) + 1;
    *(int *)(param_1 + 0x434) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x434) = 0x100;
      return;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x434) * 4) + 0xc) &
           0x10) == 0);
  return;
}

// === data_Config_80675cd4 (0x80675cd4) ===
void data_Config_80675cd4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = 0x102;
  }
  data_Config_80675da4(param_1,param_2,uVar1);
  return;
}

// === data_Config_80675ce8 (0x80675ce8) ===
void data_Config_80675ce8
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               int param_5,int *param_6)

{
  undefined4 uVar1;
  undefined2 uVar3;
  int iVar2;
  uint uVar4;
  
  uVar1 = uRam00000000;
  uVar3 = (**(code **)(*param_6 + 0x24))(param_6);
  iVar2 = FUN_segment_0__8061fd98(uVar1,uVar3);
  uVar4 = 8;
  if (iVar2 != 0) {
    uVar4 = 4;
  }
  if (param_5 != 0) {
    uVar4 = uVar4 | 0x100;
  }
  data_Config_80675da4(param_1,param_2,param_3,param_4,uVar4,param_6);
  return;
}

// === data_Config_80675da4 (0x80675da4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80675da4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_806761e8 (0x806761e8) ===
void data_Config_806761e8(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar4 = *param_2;
  if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0xc) & 0x400) != 0)) {
    iVar3 = (int)*(short *)(iVar4 + 0x14);
    uVar5 = (uint)*(short *)(iVar4 + 0x16);
    iVar4 = iVar3 << 3;
    for (iVar8 = iVar3; iVar8 < *(int *)(param_1 + 0x420) + -1; iVar8 = iVar8 + 1) {
      iVar9 = *(int *)(param_1 + 0x10);
      iVar7 = (iVar8 + 1) * 8;
      iVar10 = iVar9 + iVar7;
      puVar2 = (undefined4 *)(iVar9 + iVar4);
      *puVar2 = *(undefined4 *)(iVar9 + iVar7);
      bVar1 = *(byte *)(iVar10 + 4);
      *(byte *)(puVar2 + 1) = bVar1;
      *(undefined *)((int)puVar2 + 5) = *(undefined *)(iVar10 + 5);
      iVar7 = *(int *)(param_1 + 0x14) + (uint)bVar1 * 8;
      *(char *)(iVar7 + 4) = *(char *)(iVar7 + 4) + -1;
      iVar7 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(iVar7 + 5) * 0x20;
      *(short *)(iVar7 + 0x14) = *(short *)(iVar7 + 0x14) + -1;
      if ((int)uVar5 < (int)(uint)*(byte *)((int)puVar2 + 5)) {
        *(byte *)((int)puVar2 + 5) = *(byte *)((int)puVar2 + 5) - 1;
      }
      iVar4 = iVar4 + 8;
    }
    iVar4 = uVar5 << 3;
    for (uVar6 = uVar5; (int)uVar6 < *(int *)(param_1 + 0x420) + -1; uVar6 = uVar6 + 1) {
      iVar10 = *(int *)(param_1 + 0x14);
      iVar8 = (uVar6 + 1) * 8;
      iVar7 = iVar10 + iVar8;
      puVar2 = (undefined4 *)(iVar10 + iVar4);
      *puVar2 = *(undefined4 *)(iVar10 + iVar8);
      bVar1 = *(byte *)(iVar7 + 4);
      *(byte *)(puVar2 + 1) = bVar1;
      *(undefined *)((int)puVar2 + 5) = *(undefined *)(iVar7 + 5);
      iVar8 = *(int *)(param_1 + 0x10) + (uint)bVar1 * 8;
      *(char *)(iVar8 + 4) = *(char *)(iVar8 + 4) + -1;
      iVar8 = *(int *)(param_1 + 0x18) + (uint)*(byte *)((int)puVar2 + 5) * 0x20;
      *(short *)(iVar8 + 0x16) = *(short *)(iVar8 + 0x16) + -1;
      uVar11 = (uint)*(byte *)(puVar2 + 1);
      if ((int)uVar11 < iVar3) {
        iVar8 = *(int *)(param_1 + 0x10) + uVar11 * 8;
        uVar12 = (uint)*(byte *)(iVar8 + 5);
        if (uVar12 == uVar5) {
          for (iVar7 = *(int *)(param_1 + 0x14) + uVar12 * 8; *(byte *)(iVar7 + 4) < uVar11;
              iVar7 = iVar7 + 8) {
            uVar12 = uVar12 + 1;
          }
          *(char *)(iVar8 + 5) = (char)uVar12;
        }
      }
      iVar4 = iVar4 + 8;
    }
    data_Config_80676bdc(*param_2);
    uVar5 = *param_2 - *(int *)(param_1 + 0x18);
    iVar4 = ((int)uVar5 >> 5) + (uint)((int)uVar5 < 0 && (uVar5 & 0x1f) != 0);
    *(undefined4 *)(param_1 + iVar4 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x424);
    *(int *)(param_1 + 0x424) = iVar4;
    *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + -1;
    *param_2 = 0;
  }
  return;
}

// === data_Config_806763e4 (0x806763e4) ===
void data_Config_806763e4(int param_1)

{
  int iVar1;
  
  data_Config_80676530();
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x428) + 1;
    *(int *)(param_1 + 0x428) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x428) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x428) * 4) + 0xc) & 1)
           == 0);
  *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x42c) + 1;
    *(int *)(param_1 + 0x42c) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x42c) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x42c) * 4) + 0xc) & 2)
           == 0);
  *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x430) + 1;
    *(int *)(param_1 + 0x430) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x430) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x430) * 4) + 0xc) &
           0xc) == 0);
  *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x434) + 1;
    *(int *)(param_1 + 0x434) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x434) = 0x100;
      return;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x434) * 4) + 0xc) &
           0x10) == 0);
  return;
}

// === data_Config_80676530 (0x80676530) ===
void data_Config_80676530(int param_1,undefined4 *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  
  uVar8 = uRam00000000;
  if ((param_2[3] & 0x400) != 0) {
    iVar9 = (int)*(short *)((int)param_2 + 0x16);
    iVar11 = (int)*(short *)(param_2 + 5);
    iVar15 = iVar11 * 8;
    fVar1 = (float)param_2[1];
    fVar2 = ((float *)*param_2)[2];
    fVar3 = *(float *)*param_2;
    fVar6 = *(float *)(*(int *)(param_1 + 0x10) + iVar15);
    fVar7 = *(float *)(*(int *)(param_1 + 0x14) + iVar9 * 8);
    fVar4 = (float)param_2[6];
    fVar5 = (float)param_2[7];
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 **)(param_1 + 0x43c) = param_2;
    *(undefined4 *)(param_1 + 0x44c) = uVar8;
    *(uint *)(param_1 + 0x450) = param_3;
    for (; (7 < iVar11 && (fVar7 <= *(float *)(*(int *)(param_1 + 0x10) + iVar15 + -0x40)));
        iVar15 = iVar15 + -0x40) {
      iVar11 = iVar11 + -8;
    }
    for (iVar15 = iVar11 << 3;
        (0 < iVar11 && (fVar7 <= *(float *)(*(int *)(param_1 + 0x10) + iVar15 + -8)));
        iVar15 = iVar15 + -8) {
      iVar11 = iVar11 + -1;
    }
    iVar12 = iVar9;
    for (iVar15 = iVar9 << 3;
        (iVar12 < *(int *)(param_1 + 0x420) + -8 &&
        (*(float *)(*(int *)(param_1 + 0x14) + iVar15 + 0x40) <= fVar6)); iVar15 = iVar15 + 0x40) {
      iVar12 = iVar12 + 8;
    }
    for (iVar15 = iVar12 << 3;
        (iVar12 < *(int *)(param_1 + 0x420) + -1 &&
        (*(float *)(*(int *)(param_1 + 0x14) + iVar15 + 8) <= fVar6)); iVar15 = iVar15 + 8) {
      iVar12 = iVar12 + 1;
    }
    iVar15 = iVar12 << 3;
    uVar13 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + iVar11 * 8 + 5);
    iVar10 = (iVar12 + 1) - uVar13;
    if ((int)uVar13 <= iVar12) {
      do {
        iVar14 = *(int *)(param_1 + 0x14) + iVar15;
        if (((int)(uint)*(byte *)(iVar14 + 4) < iVar11) || (iVar12 == iVar9)) {
LAB_segment_0__8067675c:
          if (iVar12 == 0) {
            return;
          }
        }
        else {
          puVar16 = (undefined4 *)(*(int *)(param_1 + 0x18) + (uint)*(byte *)(iVar14 + 5) * 0x20);
          if ((fVar5 <= (float)puVar16[6]) &&
             ((((float)puVar16[7] <= fVar4 && ((puVar16[3] & param_3) != 0)) &&
              ((puVar16[3] & 0x200) == 0)))) {
            fVar6 = (float)puVar16[1];
            fVar7 = ((float *)*puVar16)[2];
            if ((((fVar2 - fVar1 <= fVar7 + fVar6) && (fVar7 - fVar6 <= fVar2 + fVar1)) &&
                (fVar7 = *(float *)*puVar16, fVar3 - fVar1 <= fVar7 + fVar6)) &&
               (fVar7 - fVar6 <= fVar3 + fVar1)) {
              iVar14 = *(int *)(param_1 + 0x438) + 1;
              *(undefined4 **)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x438) * 4) = puVar16;
              *(int *)(param_1 + 0x438) = iVar14;
              if (iVar14 == 0x100) {
                return;
              }
              goto LAB_segment_0__8067675c;
            }
          }
        }
        iVar15 = iVar15 + -8;
        iVar12 = iVar12 + -1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}

// === data_Config_80676784 (0x80676784) ===
void data_Config_80676784(int param_1)

{
  int iVar1;
  
  data_Config_806768d0();
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x428) + 1;
    *(int *)(param_1 + 0x428) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x428) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x428) * 4) + 0xc) & 1)
           == 0);
  *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x42c) + 1;
    *(int *)(param_1 + 0x42c) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x42c) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x42c) * 4) + 0xc) & 2)
           == 0);
  *(undefined4 *)(param_1 + 0x430) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x430) + 1;
    *(int *)(param_1 + 0x430) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x430) = 0x100;
      break;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x430) * 4) + 0xc) &
           0xc) == 0);
  *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
  do {
    iVar1 = *(int *)(param_1 + 0x434) + 1;
    *(int *)(param_1 + 0x434) = iVar1;
    if (*(int *)(param_1 + 0x438) <= iVar1) {
      *(undefined4 *)(param_1 + 0x434) = 0x100;
      return;
    }
  } while ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x434) * 4) + 0xc) &
           0x10) == 0);
  return;
}

// === data_Config_806768d0 (0x806768d0) ===
void data_Config_806768d0(double param_1,int param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  fVar1 = param_3[2];
  dVar12 = (double)fVar1;
  iVar4 = 0;
  fVar2 = *param_3;
  dVar11 = (double)fVar2;
  iVar5 = 0;
  fVar3 = param_3[1];
  iVar7 = *(int *)(param_2 + 0x420);
  *(undefined4 *)(param_2 + 0x438) = 0;
  *(undefined4 *)(param_2 + 0x43c) = 0;
  iVar8 = iVar7 + -1;
  *(float *)(param_2 + 0x440) = fVar2;
  *(float *)(param_2 + 0x444) = fVar3;
  *(float *)(param_2 + 0x448) = fVar1;
  *(float *)(param_2 + 0x44c) = (float)param_1;
  *(uint *)(param_2 + 0x450) = param_4;
  while( true ) {
    iVar9 = iVar4 + iVar8;
    iVar10 = iVar5 + iVar8;
    if ((iVar9 <= iVar7) &&
       (*(float *)(*(int *)(param_2 + 0x10) + iVar9 * 8 + -8) < (float)(dVar12 - param_1))) {
      iVar4 = iVar9;
    }
    if ((iVar10 <= iVar7) &&
       (*(float *)(*(int *)(param_2 + 0x14) + iVar10 * 8) <= (float)(dVar12 + param_1))) {
      iVar5 = iVar10;
    }
    if (iVar8 == 1) break;
    iVar8 = iVar8 + 1 >> 1;
  }
  iVar7 = iVar5 << 3;
  uVar6 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + iVar4 * 8 + 5);
  iVar8 = (iVar5 + 1) - uVar6;
  if (iVar5 < (int)uVar6) {
    return;
  }
  do {
    iVar9 = *(int *)(param_2 + 0x14) + iVar7;
    if ((int)(uint)*(byte *)(iVar9 + 4) < iVar4) {
LAB_segment_0__80676a14:
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      iVar9 = *(int *)(param_2 + 0x18) + (uint)*(byte *)(iVar9 + 5) * 0x20;
      if ((float)(dVar11 - param_1) <= *(float *)(iVar9 + 0x18)) {
        if (*(float *)(iVar9 + 0x1c) <= (float)(dVar11 + param_1)) {
          if (((*(uint *)(iVar9 + 0xc) & param_4) != 0) && ((*(uint *)(iVar9 + 0xc) & 0x200) == 0))
          {
            iVar10 = *(int *)(param_2 + 0x438) + 1;
            *(int *)(*(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x438) * 4) = iVar9;
            *(int *)(param_2 + 0x438) = iVar10;
            if (iVar10 == 0x100) {
              return;
            }
            goto LAB_segment_0__80676a14;
          }
        }
      }
    }
    iVar7 = iVar7 + -8;
    iVar5 = iVar5 + -1;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      return;
    }
  } while( true );
}

// === data_Config_80676a2c (0x80676a2c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80676a2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80676ad0 (0x80676ad0) ===
undefined4 data_Config_80676ad0(double param_1,int param_2,float *param_3,uint param_4)

{
  float fVar1;
  
  if (((double)g_Ram_float != (double)*(float *)(param_2 + 0x44c)) &&
     (*(uint *)(param_2 + 0x450) == (*(uint *)(param_2 + 0x450) | param_4))) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x44c) - param_1);
    if ((ABS(*param_3 - *(float *)(param_2 + 0x440)) <= fVar1) &&
       (ABS(param_3[2] - *(float *)(param_2 + 0x448)) <= fVar1)) {
      return 1;
    }
  }
  return 0;
}

// === Config_validate_80676b64 (0x80676b64) ===
int Config_validate_80676b64(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80676bdc (0x80676bdc) ===
void data_Config_80676bdc(int param_1)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffbff;
  return;
}

// === data_Config_80676bec (0x80676bec) ===
void data_Config_80676bec(double param_1,double param_2,int param_3)

{
  *(float *)(param_3 + 4) = (float)param_1;
  *(float *)(param_3 + 8) = (float)(param_1 + param_2);
  *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) | 0x800;
  return;
}

// === data_Config_80676c30 (0x80676c30) ===
uint data_Config_80676c30(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  
  iVar1 = iRam00000000;
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(iRam00000000 + 0x2c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(*(int *)(iRam00000000 + 0x2c) + 4);
  }
  for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
    iVar2 = FUN_segment_0__80406394(iVar1,uVar3);
    if ((((iVar2 != 0) && (param_2 == *(byte *)(*(int *)(iVar2 + 4) + 1))) &&
        (uVar5 = 1 << ((int)*(short *)(*(int *)(iVar2 + 4) + 0x28) & 0x3fU), (uVar4 & uVar5) == 0))
       && (iVar2 = FUN_segment_0__80405cdc(iVar2,param_1), iVar2 != 0)) {
      uVar4 = uVar4 | uVar5 & 0xffff;
    }
  }
  return uVar4;
}

// === data_Config_80676cec (0x80676cec) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80676cec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80676f30 (0x80676f30) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80676f30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_80676fb0 (0x80676fb0) ===
undefined4 Config_validate_80676fb0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar2,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar3 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar3,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      Config_assertFail_806771a8();
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_validate_806770dc (0x806770dc) ===
int Config_validate_806770dc(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x20);
  }
  return iRam00000000;
}

// === Config_assertFail_806771a8 (0x806771a8) ===
void Config_assertFail_806771a8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
    return;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      puVar2 = g_Ram_uint;
      if (g_Ram_uint != (void *)0) {
        g_Ram_uint = (void *)0;
        Config_validate_80677340(puVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_assertFail_8067725c (0x8067725c) ===
void Config_assertFail_8067725c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80677300 (0x80677300) ===
int Config_validate_80677300(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_80677340 (0x80677340) ===
undefined4 * Config_validate_80677340(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != (void *)0) {
    if (param_1 != (void *)0) {
      *param_1 = 0;
      iVar2 = iRam00000000;
      bVar1 = iRam00000000 != 0;
      if ((bVar1) && (iRam00000000 = 0, bVar1)) {
        Config_validate_80676fb0(iVar2,0xffffffff);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === Config_assertFail_806773e4 (0x806773e4) ===
void Config_assertFail_806773e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_80677728 (0x80677728) ===
int data_Config_80677728
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9)

{
  int iVar1;
  undefined2 uVar2;
  
  if (*(int *)(param_4 + 0x18) < *(int *)(param_4 + 0x14)) {
    iVar1 = *(int *)(param_4 + 0x10) + *(int *)(param_4 + 0x18) * 0x24;
    uVar2 = data_Config_80676c30(param_5,8);
    data_Config_80677894
              (param_1,param_2,param_3,iVar1,param_5,param_6,uVar2,param_7,param_8,param_9);
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// === data_Config_80677810 (0x80677810) ===
void data_Config_80677810(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = data_Config_80676c30(*param_2,8);
  *(undefined2 *)(param_2 + 7) = uVar1;
  return;
}

// === Config_validate_80677854 (0x80677854) ===
int Config_validate_80677854(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_80677894 (0x80677894) ===
void data_Config_80677894
               (double param_1,undefined8 param_2,double param_3,undefined4 *param_4,
               undefined4 param_5,int param_6,undefined2 param_7,undefined param_8,int param_9,
               int param_10)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000000;
  *param_4 = param_5;
  param_4[1] = (float)param_1;
  param_4[2] = (float)(param_3 * param_3);
  param_4[3] = uVar1;
  *(undefined *)(param_4 + 8) = 3;
  param_4[4] = uVar1;
  *(undefined *)((int)param_4 + 0x21) = 3;
  param_4[5] = uVar1;
  *(undefined *)((int)param_4 + 0x22) = 3;
  param_4[6] = uVar1;
  *(undefined *)((int)param_4 + 0x23) = 3;
  if (param_6 != 0) {
    param_4[8] = param_4[8] | 0x10101010;
  }
  if (param_9 != 0) {
    param_4[8] = param_4[8] | 0x40404040;
  }
  if (param_10 != -1) {
    if (param_10 != 0) {
      *(byte *)(param_4 + 8) = *(byte *)(param_4 + 8) | 0x80;
    }
    if (param_10 != 1) {
      *(byte *)((int)param_4 + 0x21) = *(byte *)((int)param_4 + 0x21) | 0x80;
    }
    if (param_10 != 2) {
      *(byte *)((int)param_4 + 0x22) = *(byte *)((int)param_4 + 0x22) | 0x80;
    }
    if (param_10 != 3) {
      *(byte *)((int)param_4 + 0x23) = *(byte *)((int)param_4 + 0x23) | 0x80;
    }
  }
  *(undefined2 *)(param_4 + 7) = param_7;
  *(undefined *)((int)param_4 + 0x1e) = param_8;
  return;
}

// === data_Config_80677988 (0x80677988) ===
double data_Config_80677988(int param_1)

{
  double dVar1;
  
  dVar1 = (double)*(float *)(param_1 + 0xc);
  if ((double)*(float *)(param_1 + 0x10) < (double)*(float *)(param_1 + 0xc)) {
    dVar1 = (double)*(float *)(param_1 + 0x10);
  }
  if ((double)*(float *)(param_1 + 0x14) < dVar1) {
    dVar1 = (double)*(float *)(param_1 + 0x14);
  }
  if (dVar1 <= (double)*(float *)(param_1 + 0x18)) {
    return dVar1;
  }
  return (double)*(float *)(param_1 + 0x18);
}

// === data_Config_806779c0 (0x806779c0) ===
void data_Config_806779c0(int param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xdededede;
  if (*(char *)(param_1 + 0x1e) != 0) {
    return;
  }
  data_Config_80677810(uRam00000000,param_1);
  return;
}

// === Config_validate_806779f4 (0x806779f4) ===
undefined4 Config_validate_806779f4(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0) {
    *param_1 = 0;
    iVar1 = iRam00000000;
    if (iRam00000000 != 0) {
      iRam00000000 = 0;
      Config_validate_80677eb8(iVar1,1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  return 0;
}

// === Config_validate_80677a7c (0x80677a7c) ===
int Config_validate_80677a7c(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x1f0);
  }
  return iRam00000000;
}

// === data_Config_80677acc (0x80677acc) ===
void data_Config_80677acc(void)

{
  int iVar1;
  
  iVar1 = iRam00000000;
  if (iRam00000000 == 0) {
    return;
  }
  iRam00000000 = 0;
  Config_validate_80677eb8(iVar1,1);
  return;
}

// === Config_assertFail_80677af0 (0x80677af0) ===
void Config_assertFail_80677af0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80677eb8 (0x80677eb8) ===
undefined4 Config_validate_80677eb8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 + 0x10) != 0) {
        FUN_segment_0__806b7dc4();
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
    if (*(char *)(param_1 + 0x160) != 0) {
      FUN_segment_0__806c4618();
    }
    uRam00000000 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x1b0,0,0xc,5);
  }
  return 0;
}

// === data_Config_80677fcc (0x80677fcc) ===
undefined4 data_Config_80677fcc(undefined4 param_1,int param_2)

{
  return *(undefined4 *)(param_2 << 2);
}

// === data_Config_80677ff0 (0x80677ff0) ===
void data_Config_80677ff0(undefined4 param_1,undefined4 param_2)

{
  FUN_segment_0__806b5ed8((double)g_Ram_float,param_2);
  FUN_segment_0__806b5f78((double)g_Ram_float,param_2);
  return;
}

// === data_Config_80678038 (0x80678038) ===
undefined4 data_Config_80678038(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = (param_1 & 0xff) * 4;
  iVar6 = iRam00000000 + iVar4;
  if (*(int *)(iVar6 + 0x178) == 4) {
    if ((*(uint *)(iRam00000000 + 0xb90) & 4) == 0) {
      iVar2 = *(int *)(iRam00000000 + 0xb70);
      if (((iVar2 < 0) || (1 < iVar2)) && ((iVar2 < 7 || (8 < iVar2)))) {
        if (iVar2 == 4) {
          iVar4 = 0;
        }
        else if ((iVar2 == 2) || (iVar2 == 5)) {
          FUN_segment_0__8047d97c(iRam00000000,param_1);
          iVar4 = FUN_segment_0__8047def4();
          if (iVar4 == 0) {
            iVar4 = iRam00000000;
            if (*(int *)(iRam00000000 + param_1 * 0xf0 + 0x38) == 1) {
              iVar4 = 4;
            }
          }
          else {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = data_Config_80678560(param_1);
        }
      }
      else {
        bVar1 = *(byte *)(iRam00000000 + 0x24);
        uVar5 = (uint)*(byte *)(*(int *)(*(int *)(iRam00000000 + 0xc) + iVar4) + 0x20);
        if (((iRam00000000._0_1_ != 0) &&
            (iVar4 = FUN_segment_0__80425788(iRam00000000,4), iVar4 == 0)) &&
           (uVar3 = (uint)*(byte *)(iRam00000000 + param_1 + 0x161), uVar5 < uVar3)) {
          uVar5 = uVar3;
        }
        if (uVar5 == 1) {
          iVar4 = 0;
        }
        else {
          iVar4 = 2;
          if ((int)uVar5 <= *(int *)((bVar1 - 1) * 4)) {
            iVar4 = 1;
          }
        }
      }
    }
    else {
      FUN_segment_0__8047d97c(iRam00000000,param_1);
      iVar4 = FUN_segment_0__8047def4();
      if (iVar4 == 0) {
        iVar4 = iRam00000000;
        if (*(int *)(iRam00000000 + param_1 * 0xf0 + 0x38) == 1) {
          iVar4 = 4;
        }
      }
      else {
        iVar4 = 0;
      }
    }
    *(int *)(iVar6 + 0x178) = iVar4;
  }
  return *(undefined4 *)(iVar6 + 0x178);
}

// === data_Config_80678234 (0x80678234) ===
int data_Config_80678234(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(uint *)(iRam00000000 + 0xb90) & 4) == 0) {
    iVar3 = *(int *)(iRam00000000 + 0xb70);
    if (((iVar3 < 0) || (1 < iVar3)) && ((iVar3 < 7 || (8 < iVar3)))) {
      if (iVar3 == 4) {
        iVar3 = 0;
      }
      else if ((iVar3 == 2) || (iVar3 == 5)) {
        FUN_segment_0__8047d97c(iRam00000000,param_1);
        iVar3 = FUN_segment_0__8047def4();
        if (iVar3 == 0) {
          iVar3 = iRam00000000;
          if (*(int *)(iRam00000000 + param_1 * 0xf0 + 0x38) == 1) {
            iVar3 = 4;
          }
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = data_Config_80678560(param_1);
      }
    }
    else {
      bVar1 = *(byte *)(iRam00000000 + 0x24);
      uVar4 = (uint)*(byte *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x20);
      if (((iRam00000000._0_1_ != 0) &&
          (iVar3 = FUN_segment_0__80425788(iRam00000000,4), iVar3 == 0)) &&
         (uVar2 = (uint)*(byte *)(iRam00000000 + param_1 + 0x161), uVar4 < uVar2)) {
        uVar4 = uVar2;
      }
      if (uVar4 == 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
        if ((int)uVar4 <= *(int *)((bVar1 - 1) * 4)) {
          iVar3 = 1;
        }
      }
    }
  }
  else {
    FUN_segment_0__8047d97c(iRam00000000,param_1);
    iVar3 = FUN_segment_0__8047def4();
    if (iVar3 == 0) {
      iVar3 = iRam00000000;
      if (*(int *)(iRam00000000 + param_1 * 0xf0 + 0x38) == 1) {
        iVar3 = 4;
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

// === data_Config_8067840c (0x8067840c) ===
undefined4 data_Config_8067840c(uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(iRam00000000 + 0x24);
  uVar5 = (uint)*(byte *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x20);
  if (((iRam00000000._0_1_ != 0) && (iVar3 = FUN_segment_0__80425788(iRam00000000,4), iVar3 == 0)
      ) && (uVar2 = (uint)*(byte *)(iRam00000000 + param_1 + 0x161), uVar5 < uVar2)) {
    uVar5 = uVar2;
  }
  if (uVar5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
    if ((int)uVar5 <= *(int *)((bVar1 - 1) * 4)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

// === data_Config_806784e0 (0x806784e0) ===
int data_Config_806784e0(int param_1)

{
  int iVar1;
  
  FUN_segment_0__8047d97c(iRam00000000,param_1);
  iVar1 = FUN_segment_0__8047def4();
  if (iVar1 == 0) {
    iVar1 = iRam00000000;
    if (*(int *)(iRam00000000 + param_1 * 0xf0 + 0x38) == 1) {
      iVar1 = 4;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

// === data_Config_80678560 (0x80678560) ===
uint data_Config_80678560(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar9;
  uint uVar11;
  undefined2 uVar8;
  undefined2 uVar10;
  
  iVar1 = iRam00000000;
  if (*(int *)(iRam00000000 + 0x170) == 3) {
    iVar5 = 0;
    iVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    for (uVar2 = (uint)*(byte *)(iRam00000000 + 0x24); uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar4 = (uint)*(ushort *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar11 & 0xff) * 4) + 0x22)
      ;
      iVar3 = *(int *)(iRam00000000 + (uVar11 & 0xff) * 0xf0 + 0xf4);
      if ((iVar3 == 0) && (iVar5 = iVar5 + uVar4, uVar7 < uVar4)) {
        uVar7 = uVar4;
      }
      uVar8 = (undefined2)uVar7;
      if ((iVar3 == 1) && (iVar6 = iVar6 + uVar4, uVar9 < uVar4)) {
        uVar9 = uVar4;
      }
      uVar10 = (undefined2)uVar9;
      uVar11 = uVar11 + 1;
    }
    if (iVar6 < iVar5) {
      *(undefined4 *)(iRam00000000 + 0x170) = 0;
      *(undefined2 *)(iVar1 + 0x174) = uVar8;
    }
    else if (iVar5 < iVar6) {
      *(undefined4 *)(iRam00000000 + 0x170) = 1;
      *(undefined2 *)(iVar1 + 0x174) = uVar10;
    }
    else {
      *(undefined4 *)(iRam00000000 + 0x170) = 2;
    }
  }
  if (*(int *)(iVar1 + 0x170) == 2) {
    uVar2 = 3;
  }
  else if (*(int *)(iVar1 + 0x170) == *(int *)(iRam00000000 + param_1 * 0xf0 + 0xf4)) {
    uVar2 = (uint)*(ushort *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x22)
            - (uint)*(ushort *)(iVar1 + 0x174) >> 0x1f;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

// === Config_validate_806786b0 (0x806786b0) ===
undefined4 Config_validate_806786b0(undefined4 param_1)

{
  int iVar1;
  undefined auStack_e8 [104];
  undefined auStack_80 [124];
  
  FUN_segment_0__8047d97c(iRam00000000,param_1);
  iVar1 = FUN_segment_0__8047def4();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_segment_0__8040be9c(auStack_e8);
  FUN_segment_0__8040c3bc(auStack_e8,*(undefined4 *)(iRam00000000 + 0xc0c));
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === data_Config_80678818 (0x80678818) ===
void data_Config_80678818(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_segment_0__806b3238(*(int *)(param_1 + 0x10),param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0xc);
  return;
}

// === data_Config_806788b8 (0x806788b8) ===
void data_Config_806788b8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = 0;
  iVar9 = 0xc;
  do {
    iVar8 = *(int *)(param_1 + iVar3 + 0x10);
    if (iVar8 != 0) {
      if (*(int *)(iVar8 + 700) == 0) {
        cVar2 = 0;
      }
      else {
        cVar2 = *(char *)(iVar8 + 0x2b4);
      }
      if (cVar2 == 0) {
        *(int *)(param_1 + iVar3 + 0x100) = *(int *)(param_1 + iVar3 + 0x100) + 1;
      }
      else {
        *(undefined4 *)(param_1 + iVar3 + 0x100) = 0;
      }
      iVar6 = param_1 + iVar3;
      iVar4 = *(int *)(iVar6 + 0x130);
      *(int *)(iVar6 + 0x130) = iVar4 + -1;
      if (iVar4 < 1) {
        if ((*(int *)(iVar6 + 0xd0) != 0) &&
           (*(undefined4 *)(iVar6 + 0xd0) = 0, *(int *)(iVar8 + 700) == 2)) {
          *(undefined4 *)(iVar8 + 700) = 0;
        }
      }
      else {
        puVar5 = *(undefined4 **)(iVar6 + 0xd0);
        if (*(int *)(iVar8 + 700) == 2) {
          *(undefined4 *)(iVar8 + 0x2a8) = *puVar5;
          *(undefined4 *)(iVar8 + 0x2ac) = puVar5[1];
          *(undefined4 *)(iVar8 + 0x2b0) = puVar5[2];
        }
      }
    }
    iVar3 = iVar3 + 4;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (*(char *)(param_1 + 0x160) != 0) {
    FUN_segment_0__806c680c(iRam00000000);
  }
  bVar7 = 0;
  bVar1 = *(byte *)(iRam00000000 + 0x24);
  while( true ) {
    if (bVar1 <= bVar7) break;
    iVar3 = *(int *)(*(int *)(iRam00000000 + 0xc) + (uint)bVar7 * 4);
    if ((*(uint *)(iVar3 + 0x38) & 2) == 0) {
      *(undefined *)(param_1 + (uint)bVar7 + 0x161) = *(undefined *)(iVar3 + 0x20);
    }
    bVar7 = bVar7 + 1;
  }
  return;
}

// === data_Config_80678b24 (0x80678b24) ===
undefined4
data_Config_80678b24(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + param_3 * 4;
  if (param_5 <= *(int *)(iVar1 + 0x100)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    *(undefined4 **)(iVar1 + 0xd0) = param_2;
    if ((*(int *)(iVar2 + 700) == 0) || (*(int *)(iVar2 + 700) == 2)) {
      *(undefined4 *)(iVar2 + 0x2b8) = uRam00000000;
      *(undefined4 *)(iVar2 + 700) = 2;
    }
    if (*(int *)(iVar2 + 700) == 2) {
      *(undefined4 *)(iVar2 + 0x2a8) = *param_2;
      *(undefined4 *)(iVar2 + 0x2ac) = param_2[1];
      *(undefined4 *)(iVar2 + 0x2b0) = param_2[2];
    }
    *(undefined4 *)(param_1 + param_3 * 4 + 0x130) = param_4;
    return 1;
  }
  return 0;
}

// === data_Config_80678ba4 (0x80678ba4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80678ba4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80678d00 (0x80678d00) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80678d00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80678e48 (0x80678e48) ===
undefined4 data_Config_80678e48(void)

{
  if ((iRam00000000._0_1_ == 0) && (*(char *)(iRam00000000 + 0x4c) == 0)) {
    return 0;
  }
  return 1;
}

// === data_Config_80678e78 (0x80678e78) ===
void data_Config_80678e78(undefined param_1)

{
  *(undefined *)(iRam00000000 + 0x1ec) = param_1;
  return;
}

// === data_Config_80678e88 (0x80678e88) ===
undefined data_Config_80678e88(void)

{
  return *(undefined *)(iRam00000000 + 0x1ec);
}

// === data_Config_80678e98 (0x80678e98) ===
undefined4 * data_Config_80678e98(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__804a8d30(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x13] = 0x28;
  param_1[0x1d] = 2;
  param_1[0x1e] = 2;
  param_1[0x1f] = 2;
  param_1[0x20] = 2;
  return param_1;
}

// === Config_validate_80678ef4 (0x80678ef4) ===
void Config_validate_80678ef4(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_74 [15];
  undefined local_38;
  undefined uStack_37;
  undefined uStack_36;
  undefined uStack_35;
  
  uVar1 = *(ushort *)(*(int *)(*(int *)(_uRam00000000 + 0x18) + param_2 * 4) + 0x334) >> 2 & 1;
  FUN_segment_0__804a8fe8();
  iVar2 = param_1 + param_2 * 4;
  if (*(uint *)(iVar2 + 0x74) != (uint)(uVar1 == 0)) {
    uStack_35 = uRam00000003;
    uStack_36 = uRam00000002;
    uStack_37 = (undefined)uRam00000000;
    local_38 = uRam00000000._0_1_;
    if (*(short *)(param_1 + 0x70) != 0) {
      local_74[0] = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(local_74,_uRam00000000);
    }
    *(uint *)(iVar2 + 0x74) = (uint)(uVar1 == 0);
  }
  return;
}

// === Config_assertFail_8067907c (0x8067907c) ===
void Config_assertFail_8067907c(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x14);
  }
  return;
}

// === Config_assertFail_806791b8 (0x806791b8) ===
void Config_assertFail_806791b8(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = g_Ram_ptr;
  if (g_Ram_ptr != (int *)0) {
    FUN_segment_0__806a7ec4();
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0) {
      (**(code **)(*piVar2 + 8))(piVar2,1);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != (int *)0) {
      (**(code **)(*piVar2 + 8))(piVar2,1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(piVar1);
  }
  g_Ram_ptr = (int *)0;
  return;
}

// === Config_assertFail_80679244 (0x80679244) ===
void Config_assertFail_80679244(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_806793d0 (0x806793d0) ===
int data_Config_806793d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = FUN_segment_0__8042fd60(uRam00000000,1,0x69,0);
  FUN_segment_0__806a7e64();
  FUN_segment_0__806a7f18(uRam00000000,uVar1);
  uVar3 = 0x74;
  uVar1 = 0x89;
  iVar2 = FUN_segment_0__8044b720(1,0x74);
  if (iVar2 == 0) {
    uVar3 = 0x9e;
  }
  iVar2 = FUN_segment_0__8044b720(1,0x89);
  if (iVar2 == 0) {
    uVar1 = 0xb1;
  }
  Config_assertFail_80679244(1,param_1 + 8,param_1,uVar3,0xc4,6);
  Config_assertFail_80679244(0,param_1 + 0xc,param_1 + 4,uVar1,0xcb,4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

// === Config_validate_806794e8 (0x806794e8) ===
int * Config_validate_806794e8(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0) {
    FUN_segment_0__806a7ec4();
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 8))(piVar1,1);
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 8))(piVar1,1);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === data_Config_80679584 (0x80679584) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80679584(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8067961c (0x8067961c) ===
void Config_validate_8067961c(int *param_1)

{
  undefined4 local_44 [5];
  
  if (iRam00000000 < 1) {
    return;
  }
  local_44[0] = *(undefined4 *)(*param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(local_44,iRam00000000);
}

// === Config_validate_80679728 (0x80679728) ===
void Config_validate_80679728(int *param_1)

{
  undefined4 local_44 [2];
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  
  local_3c = uRam00000000._0_1_;
  local_3b = (undefined)uRam00000000;
  local_3a = uRam00000002;
  local_39 = uRam00000003;
  if (_uRam00000000 < 1) {
    return;
  }
  local_44[0] = *(undefined4 *)(*param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(local_44,_uRam00000000);
}

// === Config_validate_80679858 (0x80679858) ===
void Config_validate_80679858(int *param_1)

{
  undefined4 local_44 [5];
  
  if (iRam00000000 < 1) {
    return;
  }
  local_44[0] = *(undefined4 *)(*param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(local_44,iRam00000000);
}

// === Config_assertFail_80679984 (0x80679984) ===
void Config_assertFail_80679984(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80679b2c (0x80679b2c) ===
int * Config_validate_80679b2c(int *param_1,int param_2)

{
  if (param_1 != (int *)0) {
    if (*param_1 != 0) {
      *(undefined4 *)(iRam00000000 + 8) = 0;
      *(undefined4 *)*param_1 = 0;
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === Config_assertFail_80679b94 (0x80679b94) ===
void Config_assertFail_80679b94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_80679d3c (0x80679d3c) ===
void Config_assertFail_80679d3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_80679f88 (0x80679f88) ===
void Config_assertFail_80679f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067a1d4 (0x8067a1d4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067a1d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067a3b4 (0x8067a3b4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067a3b4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067a594 (0x8067a594) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067a594(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067a818 (0x8067a818) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067a818(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_assertFail_8067aa9c (0x8067aa9c) ===
void Config_assertFail_8067aa9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8067ac44 (0x8067ac44) ===
void Config_assertFail_8067ac44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8067adec (0x8067adec) ===
void Config_assertFail_8067adec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8067b038 (0x8067b038) ===
void Config_assertFail_8067b038(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067b284 (0x8067b284) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067b284(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067b450 (0x8067b450) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067b450(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067b61c (0x8067b61c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067b61c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067b88c (0x8067b88c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067b88c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8067bafc (0x8067bafc) ===
int Config_validate_8067bafc(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804a8e44(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === data_Config_8067bb6c (0x8067bb6c) ===
void data_Config_8067bb6c(void)

{
  data_Config_8067bb90();
  data_Config_8067c04c();
  return;
}

// === data_Config_8067bb90 (0x8067bb90) ===
void data_Config_8067bb90(void)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  double dVar7;
  
  Config_assertFail_8067bf10(0,0);
  iVar6 = 0;
  Config_assertFail_8067bf10(0x74,0);
  Config_assertFail_8067bf10(0xe8,0);
  Config_assertFail_8067bf10(0x15c,0);
  Config_assertFail_8067bf10(0x1d0,0);
  Config_assertFail_8067bf10(0x244,0);
  Config_assertFail_8067bf10(0x2b8,0);
  Config_assertFail_8067bf10(0x32c,0);
  Config_assertFail_8067bf10(0x3a0,0);
  Config_assertFail_8067bf10(0x414,0);
  Config_assertFail_8067bf10(0x488,0);
  Config_assertFail_8067bf10(0x4fc,0);
  Config_assertFail_8067bf10(0x570,0);
  Config_assertFail_8067bf10(0x5e4,0);
  Config_assertFail_8067bf10(0x658,0);
  iVar4 = 0;
  do {
    if (*(code **)(iVar6 + 0x24) == (void (*)(void))0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(iVar6 + 0x24))(0,0,1);
    }
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar6 + 0x28) = uVar1;
    iVar6 = iVar6 + 0x74;
  } while (iVar4 < 0xf);
  iVar4 = data_Config_8067beb0();
  if (iVar4 != 0) {
    uRam00000058 = 0;
    uRam000000cc = 0;
    uRam00000140 = 0;
    uRam000001b4 = 0;
    uRam00000228 = 0;
    uRam0000029c = 0;
    uRam00000310 = 0;
    uRam00000384 = 0;
    uRam000003f8 = 0;
    uRam0000046c = 0;
    uRam000004e0 = 0;
    uRam00000554 = 0;
    uRam000005c8 = 0;
    uRam0000063c = 0;
    uRam000006b0 = 0;
  }
  data_Config_8067bec4();
  iVar4 = data_Config_8067bebc();
  if (iVar4 != 0) {
    uRam00000004 = 1;
    uRam00000078 = 1;
    uRam000000ec = 1;
    uRam00000160 = 1;
    uRam000001d4 = 1;
    uRam00000248 = 1;
    uRam000002bc = 1;
    uRam00000330 = 1;
    uRam000003a4 = 1;
    uRam00000418 = 1;
    uRam0000048c = 1;
    uRam00000500 = 1;
    uRam00000574 = 1;
    uRam000005e8 = 1;
    uRam0000065c = 1;
  }
  uVar5 = 0;
  uVar2 = data_Config_8067bed0();
  do {
    if (uVar2 <= uVar5) {
LAB_segment_0__8067be0c:
      iVar4 = FUN_segment_0__806a2d24();
      if (iVar4 != 0) {
        uRam00000004 = uRam00000008;
        uRam00000078 = uRam0000007c;
        uRam000000ec = uRam000000f0;
        uRam00000160 = uRam00000164;
        uRam000001d4 = uRam000001d8;
        uRam00000248 = uRam0000024c;
        uRam000002bc = uRam000002c0;
        uRam00000330 = uRam00000334;
        uRam000003a4 = uRam000003a8;
        uRam00000418 = uRam0000041c;
        uRam0000048c = uRam00000490;
        uRam00000500 = uRam00000504;
        uRam00000574 = uRam00000578;
        uRam000005e8 = uRam000005ec;
        uRam0000065c = uRam00000660;
      }
      return;
    }
    data_Config_8067bf00(uVar5);
    sVar3 = data_Config_8067bef4();
    if (sVar3 == 0x1ab) {
      dVar7 = (double)FUN_segment_0__80697f60();
      fRam00000044 = (float)((double)fRam00000044 * dVar7);
      dVar7 = (double)FUN_segment_0__80697f6c();
      fRam00000048 = (float)((double)fRam00000048 * dVar7);
      dVar7 = (double)FUN_segment_0__80697f78();
      fRam0000004c = (float)((double)fRam0000004c * dVar7);
      dVar7 = (double)FUN_segment_0__80697f84();
      fRam00000050 = (float)((double)fRam00000050 * dVar7);
      goto LAB_segment_0__8067be0c;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// === data_Config_8067beb0 (0x8067beb0) ===
undefined data_Config_8067beb0(void)

{
  return uRam00000000;
}

// === data_Config_8067bebc (0x8067bebc) ===
undefined data_Config_8067bebc(int param_1)

{
  return *(undefined *)(param_1 + 0x160);
}

// === data_Config_8067bec4 (0x8067bec4) ===
undefined4 data_Config_8067bec4(void)

{
  return uRam00000000;
}

// === data_Config_8067bed0 (0x8067bed0) ===
undefined2 data_Config_8067bed0(void)

{
  if (*(int *)(iRam00000000 + 0x28) != 0) {
    return *(undefined2 *)(*(int *)(iRam00000000 + 0x28) + 4);
  }
  return 0;
}

// === data_Config_8067bef4 (0x8067bef4) ===
undefined2 data_Config_8067bef4(undefined4 *param_1)

{
  return *(undefined2 *)*param_1;
}

// === data_Config_8067bf00 (0x8067bf00) ===
void data_Config_8067bf00(undefined4 param_1)

{
  FUN_segment_0__80403d74(uRam00000000,param_1);
  return;
}

// === Config_assertFail_8067bf10 (0x8067bf10) ===
void Config_assertFail_8067bf10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067c04c (0x8067c04c) ===
void data_Config_8067c04c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_48 [18];
  
  local_48[0] = 1;
  iRam00000010 = iRam00000004 + -1;
  pcVar4 = (char *)0x0;
  local_48[1] = 1;
  iRam00000084 = iRam00000078 + -1;
  local_48[2] = 1;
  iRam000000f8 = iRam000000ec + -1;
  local_48[3] = 1;
  iRam0000016c = iRam00000160 + -1;
  local_48[4] = 1;
  iRam000001e0 = iRam000001d4 + -1;
  local_48[5] = 1;
  iRam00000254 = iRam00000248 + -1;
  local_48[6] = 1;
  iRam000002c8 = iRam000002bc + -1;
  local_48[7] = 1;
  iRam0000033c = iRam00000330 + -1;
  local_48[8] = 1;
  iRam000003b0 = iRam000003a4 + -1;
  local_48[9] = 1;
  iRam00000424 = iRam00000418 + -1;
  local_48[10] = 1;
  iRam00000498 = iRam0000048c + -1;
  local_48[0xb] = 1;
  iRam0000050c = iRam00000500 + -1;
  local_48[0xc] = 1;
  iRam00000580 = iRam00000574 + -1;
  local_48[0xd] = 1;
  iRam000005f4 = iRam000005e8 + -1;
  local_48[0xe] = 1;
  iRam00000668 = iRam0000065c + -1;
  iVar7 = 0x13;
  do {
    if (*pcVar4 != 0) {
      if (local_48[*(int *)(pcVar4 + 4)] < *(int *)(pcVar4 + 8)) {
        local_48[*(int *)(pcVar4 + 4)] = *(int *)(pcVar4 + 8);
      }
    }
    pcVar4 = pcVar4 + 0x1c;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar6 = local_48;
  iVar7 = 0;
  iVar8 = 3;
  do {
    iVar5 = piVar6[1];
    iVar1 = *(int *)(iVar7 + 0x10) + *piVar6;
    *(int *)(iVar7 + 0x10) = iVar1;
    iVar3 = piVar6[2];
    *(int *)(iVar7 + 0xc) = iVar1;
    iVar2 = piVar6[3];
    iVar1 = piVar6[4];
    piVar6 = piVar6 + 5;
    iVar5 = *(int *)(iVar7 + 0x84) + iVar5;
    *(int *)(iVar7 + 0x84) = iVar5;
    *(int *)(iVar7 + 0x80) = iVar5;
    iVar3 = *(int *)(iVar7 + 0xf8) + iVar3;
    *(int *)(iVar7 + 0xf8) = iVar3;
    *(int *)(iVar7 + 0xf4) = iVar3;
    iVar2 = *(int *)(iVar7 + 0x16c) + iVar2;
    *(int *)(iVar7 + 0x16c) = iVar2;
    *(int *)(iVar7 + 0x168) = iVar2;
    iVar1 = *(int *)(iVar7 + 0x1e0) + iVar1;
    *(int *)(iVar7 + 0x1e0) = iVar1;
    *(int *)(iVar7 + 0x1dc) = iVar1;
    iVar7 = iVar7 + 0x244;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (cRam00000000 != 0) {
    iVar7 = 0;
    iVar8 = 0;
    iVar1 = 3;
    do {
      if (*(int *)(iVar7 + 0xc) == 1) {
        *(uint *)(iVar7 + 0xc) = (iVar8 == 9) + 2;
      }
      if (*(int *)(iVar7 + 0x80) == 1) {
        *(uint *)(iVar7 + 0x80) = (iVar8 == 8) + 2;
      }
      if (*(int *)(iVar7 + 0xf4) == 1) {
        *(uint *)(iVar7 + 0xf4) = (iVar8 == 7) + 2;
      }
      if (*(int *)(iVar7 + 0x168) == 1) {
        *(uint *)(iVar7 + 0x168) = (iVar8 == 6) + 2;
      }
      if (*(int *)(iVar7 + 0x1dc) == 1) {
        *(uint *)(iVar7 + 0x1dc) = (iVar8 == 5) + 2;
      }
      iVar7 = iVar7 + 0x244;
      iVar8 = iVar8 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// === Config_validate_8067c300 (0x8067c300) ===
void Config_validate_8067c300(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,param_1);
}

// === Config_validate_8067c374 (0x8067c374) ===
void Config_validate_8067c374(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xc,param_1 + 0xc);
}

// === Config_validate_8067c3ec (0x8067c3ec) ===
void Config_validate_8067c3ec(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x18,param_1 + 0x18);
}

// === Config_validate_8067c464 (0x8067c464) ===
void Config_validate_8067c464(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xc,param_1 + 0xc);
}

// === Config_validate_8067c4dc (0x8067c4dc) ===
void Config_validate_8067c4dc(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x18,param_1 + 0x18);
}

// === Config_validate_8067c554 (0x8067c554) ===
void Config_validate_8067c554(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,param_1);
}

// === Config_validate_8067c5c8 (0x8067c5c8) ===
void Config_validate_8067c5c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_segment_0__8069f414(param_2,param_1);
  FUN_segment_0__8069f078(param_3,param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_3,param_3);
}

// === Config_validate_8067c63c (0x8067c63c) ===
void Config_validate_8067c63c(int param_1,undefined4 param_2)

{
  undefined auStack_28 [28];
  
  FUN_segment_0__8069f414(param_2,param_1);
  FUN_segment_0__8069f078(auStack_28,param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_28,auStack_28);
}

// === data_Config_8067c6d8 (0x8067c6d8) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067c6d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8067c7f4 (0x8067c7f4) ===
void Config_validate_8067c7f4(int param_1)

{
  FUN_segment_0__8047da08();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x2c,0,0,0xc,3);
}

// === Config_validate_8067c894 (0x8067c894) ===
int Config_validate_8067c894(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_8067c8d4 (0x8067c8d4) ===
void data_Config_8067c8d4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined *)(param_1 + 0x10) = *(undefined *)(param_2 + 0x18);
  FUN_segment_0__8047da4c();
  puVar1 = (undefined4 *)FUN_segment_0__8047e170(param_1);
  *(undefined4 *)(param_1 + 0xd4) = puVar1[1];
  *(undefined4 *)(param_1 + 0xd0) = *puVar1;
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd0) * g_Ram_float;
  *(undefined4 *)(param_1 + 0xdc) = puVar1[2];
  *(undefined4 *)(param_1 + 0xe0) = puVar1[3];
  *(undefined4 *)(param_1 + 0x14) = 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0x14;
  *(undefined4 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 8;
  return;
}

// === data_Config_8067c9a4 (0x8067c9a4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067c9a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067cc9c (0x8067cc9c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067cc9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067cd5c (0x8067cd5c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067cd5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067ce8c (0x8067ce8c) ===
void data_Config_8067ce8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x50); iVar1 = iVar1 + 1) {
    data_Config_80689e48(*(undefined4 *)(iVar2 + 0x20),param_1 + 0xb0);
    iVar2 = iVar2 + 4;
  }
  return;
}

// === data_Config_8067cef0 (0x8067cef0) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067cef0(undefined4 param_1)

{
  int iVar1;
  undefined auStack_28 [24];
  
  FUN_segment_0__8047dff8();
  iVar1 = FUN_segment_0__806a2dcc(param_1);
  if (iVar1 != 0) {
    FUN_segment_0__8047e4e8(param_1,auStack_28);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067d1d4 (0x8067d1d4) ===
void data_Config_8067d1d4(int param_1,int param_2)

{
  data_Config_80681284(iRam00000000 + *(int *)(param_2 + 4) * 0x24 + 0x48);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),param_2);
  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
  FUN_segment_0__8047dff8(param_1);
  FUN_segment_0__8047e584(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(param_1);
}

// === data_Config_8067d284 (0x8067d284) ===
void data_Config_8067d284(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar1 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar1;
    if (((iVar1 == 8) || (iVar1 == 4)) || (iVar1 == 0)) {
      iVar1 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar1;
      iVar1 = *(int *)(param_1 + iVar1 * 4 + 0x20);
      data_Config_80681284(iRam00000000 + *(int *)(iVar1 + 4) * 0x24 + 0x48,iVar1);
      data_Config_80683984(*(undefined4 *)(param_1 + 0xc),iVar1);
      *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) & 0xfffffffe;
      FUN_segment_0__8047dff8(param_1);
      FUN_segment_0__8047e584(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__8047da88(param_1);
    }
  }
  return;
}

// === Config_validate_8067d3b0 (0x8067d3b0) ===
void Config_validate_8067d3b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = data_Config_8067cef0();
  if (iVar2 != 0) {
    iVar2 = param_1;
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x50); iVar3 = iVar3 + 1) {
      data_Config_80689e48(*(undefined4 *)(iVar2 + 0x20),param_1 + 0xb0);
      iVar2 = iVar2 + 4;
    }
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) * 0xc);
  local_28 = *puVar1;
  local_24 = puVar1[1];
  local_20 = puVar1[2];
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_28);
}

// === Config_assertFail_8067d6ac (0x8067d6ac) ===
void Config_assertFail_8067d6ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8067dcfc (0x8067dcfc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067dcfc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067e05c (0x8067e05c) ===
void data_Config_8067e05c(int param_1,int param_2)

{
  data_Config_80681284(iRam00000000 + *(int *)(param_2 + 4) * 0x24 + 0x48);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),param_2);
  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
  return;
}

// === data_Config_8067e0c4 (0x8067e0c4) ===
void data_Config_8067e0c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar1;
  piVar4 = *(int **)(param_1 + iVar1 * 4 + 0x20);
  data_Config_80681284(iRam00000000 + piVar4[1] * 0x24 + 0x48,piVar4);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),piVar4);
  piVar4[0x1e] = piVar4[0x1e] & 0xfffffffe;
  iVar1 = (**(code **)(*piVar4 + 0x20))(piVar4,param_1);
  if ((iVar1 == 0) &&
     (piVar4[0x1e] = piVar4[0x1e] & 0xfdffffff, *(char *)(*(int *)(param_1 + 0xc) + 0x239) != 0))
  {
    piVar4[0x1e] = piVar4[0x1e] | 0x100000;
  }
  iVar2 = *(int *)(param_1 + 0x14) * 0x74;
  iVar3 = *(int *)(iVar2 + 0x1c);
  iVar1 = *(int *)(iVar2 + 0x20);
  if ((piVar4[0x1e] & 0xc0U) == 0) {
    piVar4[0x5a] = *(int *)(iVar2 + 0x18);
    piVar4[0x5b] = iVar3;
    piVar4[0x5c] = iVar1;
  }
  if (param_2 != 0) {
    data_Config_806839bc(*(undefined4 *)(param_1 + 0xc),piVar4);
  }
  return;
}

// === data_Config_8067e1f8 (0x8067e1f8) ===
void data_Config_8067e1f8(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  data_Config_80681284(iRam00000000 + *(int *)(param_3 + 4) * 0x24 + 0x48,param_3);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),param_3);
  *(uint *)(param_3 + 0x78) = *(uint *)(param_3 + 0x78) & 0xfffffffe;
  return;
}

// === data_Config_8067e270 (0x8067e270) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067e270(int param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x74);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067e600 (0x8067e600) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067e600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8067ef98 (0x8067ef98) ===
void Config_validate_8067ef98(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2);
}

// === data_Config_8067f008 (0x8067f008) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067f008(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067f284 (0x8067f284) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067f284(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067f5f0 (0x8067f5f0) ===
void data_Config_8067f5f0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ushort uVar6;
  int iVar5;
  
  fVar1 = g_Ram_float;
  *(undefined2 *)(param_1 + 0x156) = 0;
  *(undefined2 *)(param_1 + 0x17a) = 0;
  *(undefined2 *)(param_1 + 0x158) = 600;
  *(float *)(param_1 + 0x15c) = fVar1;
  *(float *)(param_1 + 0x160) = fVar1;
  *(float *)(param_1 + 0x164) = fVar1;
  for (uVar6 = 0; (int)(uint)uVar6 < *(int *)(param_1 + 0x50); uVar6 = uVar6 + 1) {
    *(ushort *)(param_1 + (uint)uVar6 * 2 + 0x174) = uVar6;
  }
  fVar1 = *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 100) * fVar1;
  *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x68) * fVar1;
  *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x6c) * fVar1;
  iVar2 = param_1;
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x50); iVar5 = iVar5 + 1) {
    iVar4 = *(int *)(iVar2 + 0x20);
    iVar2 = iVar2 + 4;
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(param_1 + 0x84);
  }
  data_Config_8067f284(param_1);
  iVar2 = FUN_segment_0__8047decc(param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_segment_0__8047e010(param_1);
    (**(code **)(*piVar3 + 0xe0))((double)g_Ram_float,piVar3,0xf6);
  }
  return;
}

// === data_Config_8067f728 (0x8067f728) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067f728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8067fb44 (0x8067fb44) ===
void data_Config_8067fb44(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x50) + -1;
  if (param_2 != iVar3) {
    iVar6 = param_1 + iVar3 * 4;
    iVar4 = param_1 + iVar3 * 2;
    iVar5 = param_1 + param_2 * 2;
    iVar3 = param_1 + param_2 * 4;
    uVar7 = *(undefined4 *)(iVar6 + 0x20);
    uVar1 = *(undefined2 *)(iVar5 + 0x174);
    uVar2 = *(undefined2 *)(iVar4 + 0x174);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined2 *)(iVar4 + 0x174) = uVar1;
    *(undefined4 *)(iVar3 + 0x20) = uVar7;
    *(undefined2 *)(iVar5 + 0x174) = uVar2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  data_Config_80681284(iRam00000000 + *(int *)(param_3 + 4) * 0x24 + 0x48,param_3);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),param_3);
  *(uint *)(param_3 + 0x78) = *(uint *)(param_3 + 0x78) & 0xfffffffe;
  return;
}

// === data_Config_8067fc40 (0x8067fc40) ===
void data_Config_8067fc40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50) + -1;
  *(int *)(param_1 + 0x50) = iVar1;
  data_Config_80680ffc
            (iRam00000000 + *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x20) + 4) * 0x24 + 0x48);
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x10;
    *(undefined4 *)(param_1 + 0x18) = 0x14;
    *(undefined4 *)(param_1 + 0x1c) = 4;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

// === data_Config_8067fcd8 (0x8067fcd8) ===
void data_Config_8067fcd8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x154) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x78) == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78) = 0x14;
    }
    *(undefined *)(param_1 + 0x154) = 0;
  }
  while (0 < *(int *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    data_Config_80680ffc
              (iRam00000000 + *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x20) + 4) * 0x24 + 0x48);
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x10;
      *(undefined4 *)(param_1 + 0x18) = 0x14;
      *(undefined4 *)(param_1 + 0x1c) = 4;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  return;
}

// === data_Config_8067fdb0 (0x8067fdb0) ===
void data_Config_8067fdb0(int *param_1,int param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*param_3 * *param_3 + param_3[2] * param_3[2] < g_Ram_float) {
    *param_3 = (float)param_1[0x19];
    param_3[1] = (float)param_1[0x1a];
    param_3[2] = (float)param_1[0x1b];
  }
  if ((param_2 == 0) && ((*(uint *)(*(int *)(*param_1 + 4) + 4) & 0x10000) != 0)) {
    iVar1 = FUN_segment_0__8047dff8(param_1);
    local_38 = *(float *)(iVar1 + 0x38) + (float)param_1[0x1c] * g_Ram_float;
    local_34 = *(float *)(iVar1 + 0x3c) + (float)param_1[0x1d] * g_Ram_float;
    local_30 = *(float *)(iVar1 + 0x40) + (float)param_1[0x1e] * g_Ram_float;
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
                    /* WARNING: Subroutine does not return */
    data_Config_80676f30(&local_20,&local_38);
  }
  FUN_segment_0__806c3110((double)*(float *)(param_1[3] + 0x40),param_3,param_3);
  local_2c = *param_3;
  local_28 = param_3[1];
  local_24 = param_3[2];
                    /* WARNING: Subroutine does not return */
  data_Config_80676f30(param_4,&local_2c);
}

// === data_Config_8067ff1c (0x8067ff1c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8067ff1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_806800c4 (0x806800c4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_806800c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_80680240 (0x80680240) ===
void Config_validate_80680240(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar1 = param_1;
  iVar4 = iVar2;
  if (0 < iVar2) {
    do {
      if (*(int *)(iVar1 + 0x20) == param_2) {
        if ((*(uint *)(param_2 + 0x7c) & 0x20) != 0) {
          if (iVar2 == 1) {
            *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) | 0x8000000;
          }
          else if (iVar2 == 2) {
            *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) | 0x10000000;
          }
          else if (iVar2 == 3) {
            *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) | 0x20000000;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1,iVar3,param_2);
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

// === data_Config_80680370 (0x80680370) ===
void data_Config_80680370(int param_1,int param_2)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  data_Config_80681284(iRam00000000 + *(int *)(param_2 + 4) * 0x24 + 0x48);
  data_Config_80683984(*(undefined4 *)(param_1 + 0xc),param_2);
  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
  return;
}

// === data_Config_806803e4 (0x806803e4) ===
void data_Config_806803e4(int param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if ((iRam00000000._0_1_ != 0) && (param_2 < 0xc)) {
    iVar9 = *(int *)(param_1 + 0x50) + -1;
    iVar10 = param_1 + iVar9 * 4;
    for (; -1 < iVar9; iVar9 = iVar9 + -1) {
      uVar8 = *(undefined4 *)(iVar10 + 0x20);
      piVar2 = (int *)FUN_segment_0__8047d97c(iRam00000000,param_2);
      uVar3 = 1;
      bVar4 = true;
      iVar7 = *(int *)(*piVar2 + 4);
      bVar1 = true;
      bVar5 = true;
      bVar6 = true;
      if (((*(uint *)(iVar7 + 8) & 0x102) == 0) && ((*(uint *)(iVar7 + 0xc) & 0x20c6000) == 0)) {
        bVar6 = false;
      }
      if ((!bVar6) && ((*(uint *)(iVar7 + 4) & 0x10) == 0)) {
        bVar5 = false;
      }
      if ((!bVar5) && ((*(uint *)(iVar7 + 0x14) & 0x80) == 0)) {
        bVar1 = false;
      }
      if ((!bVar1) && ((*(uint *)(iVar7 + 8) & 0x80000019) == 0)) {
        bVar4 = false;
      }
      if ((!bVar4) && ((*(uint *)(iVar7 + 0xc) & 0xa008000) == 0)) {
        uVar3 = 0;
      }
      iVar7 = data_Config_8068c568(uVar8,piVar2,uVar3);
      if (iVar7 != 0) {
        Config_validate_80680240
                  (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(param_1 + 0x10) * 0x248 + 0xb4,
                   uVar8);
        data_Config_8068e824(uVar8,piVar2,0);
      }
      iVar10 = iVar10 + -4;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 10;
  return;
}

// === data_Config_8068056c (0x8068056c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068056c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x20);
  iVar1 = data_Config_8067a594
                    ((double)*(float *)(iVar1 + 0xb4),uRam00000000,iVar1 + 0x44,iVar1 + 0xbc,
                     0x20e80fff,iVar1 + 0xd8,uRam00000000,0);
  if (iVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_assertFail_80680658 (0x80680658) ===
void Config_assertFail_80680658(void)

{
  undefined4 uVar1;
  undefined auStack_38 [52];
  
  uVar1 = FUN_segment_0__8047dae0();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar1,auStack_38);
}

// === data_Config_806806fc (0x806806fc) ===
void data_Config_806806fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_segment_0__8055240c
                    (iRam00000000,*(undefined *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x17c));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0x10) {
      if (*(char *)(param_1 + 0x154) != 0) {
        if (*(int *)(*(int *)(param_1 + 0xc) + 0x78) == *(int *)(param_1 + 0x18)) {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78) = 0x14;
        }
        *(undefined *)(param_1 + 0x154) = 0;
      }
      while (0 < *(int *)(param_1 + 0x50)) {
        iVar1 = *(int *)(param_1 + 0x50) + -1;
        *(int *)(param_1 + 0x50) = iVar1;
        data_Config_80680ffc
                  (iRam00000000 + *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x20) + 4) * 0x24 + 0x48);
        if (*(int *)(param_1 + 0x50) == 0) {
          *(undefined4 *)(param_1 + 0x14) = 0x10;
          *(undefined4 *)(param_1 + 0x18) = 0x14;
          *(undefined4 *)(param_1 + 0x1c) = 4;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
      }
      *(undefined4 *)(param_1 + 0x17c) = 8;
    }
    data_Config_8067c9a4(param_1,1);
  }
  uVar2 = FUN_segment_0__80552120(iRam00000000,*(undefined *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0x10) {
    iVar1 = FUN_segment_0__80552330(iRam00000000,*(undefined *)(param_1 + 0x10));
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_segment_0__80551be8(iRam00000000,*(undefined *)(param_1 + 0x10));
    }
    while (uVar3 < *(uint *)(param_1 + 0x50)) {
      iVar1 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar1;
      data_Config_80680ffc
                (iRam00000000 + *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x20) + 4) * 0x24 + 0x48);
      if (*(int *)(param_1 + 0x50) == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0x10;
        *(undefined4 *)(param_1 + 0x18) = 0x14;
        *(undefined4 *)(param_1 + 0x1c) = 4;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
    }
  }
  return;
}

// === data_Config_806808dc (0x806808dc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_806808dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80680bf4 (0x80680bf4) ===
void data_Config_80680bf4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x154) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x78) == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78) = 0x14;
    }
    *(undefined *)(param_1 + 0x154) = 0;
  }
  while (0 < *(int *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x50) + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    data_Config_80680ffc
              (iRam00000000 + *(int *)(*(int *)(param_1 + iVar1 * 4 + 0x20) + 4) * 0x24 + 0x48);
    if (*(int *)(param_1 + 0x50) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x10;
      *(undefined4 *)(param_1 + 0x18) = 0x14;
      *(undefined4 *)(param_1 + 0x1c) = 4;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x17c) = 8;
  return;
}

// === data_Config_80680cd4 (0x80680cd4) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void data_Config_80680cd4(void)

{
  _DAT_00000030 = uRam00000000;
  _DAT_00000034 = uRam00000004;
  uRam00000038 = uRam00000008;
  uRam00000060 = uRam00000000;
  uRam00000064 = uRam00000004;
  uRam00000068 = uRam00000008;
  return;
}

// === data_Config_80680d60 (0x80680d60) ===
void data_Config_80680d60(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)(param_2 * 0x74);
  iVar2 = *param_3;
  iVar4 = puVar3[3];
  *param_1 = param_2;
  iVar1 = (*(code *)*puVar3)(iVar4);
  param_1[1] = iVar1;
  param_1[2] = iVar4;
  iVar5 = 0;
  param_1[3] = puVar3[4];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[7] = puVar3[1];
  for (iVar1 = 0; iVar1 < iVar4; iVar1 = iVar1 + 1) {
    Config_validate_806892b8(*(undefined4 *)(param_1[1] + iVar5),iVar2,iVar1,param_2);
    iVar5 = iVar5 + 4;
    iVar2 = iVar2 + 1;
  }
  *param_3 = iVar2;
  return;
}

// === data_Config_80680e28 (0x80680e28) ===
void data_Config_80680e28(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 8); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + iVar2) + 8))();
    iVar2 = iVar2 + 4;
  }
  return;
}

// === data_Config_80680e98 (0x80680e98) ===
void data_Config_80680e98
               (undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((int)param_1[2] < param_1[4] + param_2) {
    while ((int)param_1[2] < param_1[4] + param_2) {
      if ((0 < (int)param_1[5]) &&
         (data_Config_80680ffc(param_1,*(undefined4 *)param_1[1]), 1 < (int)param_1[5])) {
        iVar2 = 0;
        uVar3 = *(undefined4 *)param_1[1];
        for (iVar4 = 0; iVar4 < param_1[5] + -1; iVar4 = iVar4 + 1) {
          puVar1 = (undefined4 *)(param_1[1] + iVar2);
          iVar2 = iVar2 + 4;
          *puVar1 = puVar1[1];
        }
        *(undefined4 *)(param_1[1] + iVar4 * 4) = uVar3;
      }
    }
  }
  for (iVar4 = 0; iVar4 < param_2; iVar4 = iVar4 + 1) {
    iVar2 = param_1[4];
    *param_3 = *(undefined4 *)(param_1[1] + iVar2 * 4);
    param_1[4] = iVar2 + 1;
    data_Config_806895e4(*param_3,*param_1,param_4,param_5,param_6);
    param_3 = param_3 + 1;
  }
  return;
}

// === data_Config_80680ffc (0x80680ffc) ===
void data_Config_80680ffc(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  
  iVar5 = 0;
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = iVar7;
  iVar3 = iVar7;
  if (0 < iVar7) {
    do {
      iVar6 = iVar5;
      if (*(int *)(*(int *)(param_1 + 4) + iVar8) == param_2) break;
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      iVar6 = iVar7;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar6 < iVar3) {
    uVar4 = iVar3 - 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    if (iVar6 < (int)uVar4) {
      if (8 < (int)(uVar4 - iVar6)) {
        bVar10 = false;
        bVar11 = false;
        bVar2 = false;
        bVar1 = false;
        if ((iVar6 <= (int)uVar4) && ((int)uVar4 < 0x7fffffff)) {
          bVar1 = true;
        }
        if ((bVar1) && (iVar6 < 0x7fffffff)) {
          bVar2 = true;
        }
        if ((bVar2) && (iVar6 != -0x80000000)) {
          bVar11 = true;
        }
        if (bVar11) {
          bVar1 = true;
          if (((uVar4 & 0x80000000) == (-iVar6 & 0x80000000U)) &&
             ((uVar4 & 0x80000000) != (uVar4 - iVar6 & 0x80000000))) {
            bVar1 = false;
          }
          if (bVar1) {
            bVar10 = true;
          }
        }
        if (bVar10) {
          iVar5 = iVar6 << 2;
          uVar12 = (uint)((iVar3 + -2) - iVar6) >> 3;
          if (iVar6 < iVar3 + -9) {
            do {
              iVar6 = iVar6 + 8;
              puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
              *puVar9 = puVar9[1];
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar3 + 8);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 0xc);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar3 + 0x10);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 0x14);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0x18);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
              iVar3 = *(int *)(param_1 + 4) + iVar5;
              iVar5 = iVar5 + 0x20;
              *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x20);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
      iVar5 = uVar4 - iVar6;
      iVar3 = iVar6 << 2;
      if (iVar6 < (int)uVar4) {
        do {
          iVar6 = iVar6 + 1;
          puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
          iVar3 = iVar3 + 4;
          *puVar9 = puVar9[1];
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  if (iVar6 < *(int *)(param_1 + 0x14)) {
    iVar3 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar6 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4);
    iVar6 = *(int *)(param_1 + 0x14);
  }
  if (iVar6 < *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined4 *)(*(int *)(param_1 + 4) + iVar6 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 4) + iVar3 * 4);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  *(int *)(*(int *)(param_1 + 4) + iVar6 * 4) = param_2;
  data_Config_80689918(param_2);
  *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffd;
  return;
}

// === data_Config_80681284 (0x80681284) ===
void data_Config_80681284(int *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1[5];
  iVar5 = param_1[4];
  iVar1 = iVar5 - iVar7;
  iVar3 = iVar7;
  iVar4 = iVar5;
  iVar6 = iVar7 * 4;
  if (iVar7 < iVar5) {
    do {
      iVar4 = iVar3;
      if (*(int **)(param_1[1] + iVar6) == param_2) break;
      iVar6 = iVar6 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
      iVar4 = iVar5;
    } while (iVar1 != 0);
  }
  if (iVar7 < iVar4) {
    *(undefined4 *)(param_1[1] + iVar4 * 4) = *(undefined4 *)(param_1[1] + iVar7 * 4);
    *(int **)(param_1[1] + param_1[5] * 4) = param_2;
  }
  param_1[5] = param_1[5] + 1;
  if (((param_2[0x1f] & 1U) == 0) && ((param_2[0x1e] & 1U) != 0)) {
    uVar2 = data_Config_80685d54(param_2,-(param_2[0x1e] & 0x38000000U) >> 0x1f);
    *(undefined2 *)(param_2 + 3) = uVar2;
  }
  param_2[0x1e] = param_2[0x1e] | 2;
  if ((g_Ram_float < *(float *)(*param_1 * 0x74 + 0x40)) && (param_2[0x2c] == 0)) {
    data_Config_80689ec4(param_2,0);
    param_2[0x1f] = param_2[0x1f] | 0x800;
  }
  param_2[0x58] = 0;
  (**(code **)(*param_2 + 0x1c))(param_2);
  return;
}

// === data_Config_806813dc (0x806813dc) ===
bool data_Config_806813dc(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = iRam00000000 == 0;
  if (*param_1 == 2) {
    iVar6 = param_1[6] + -3;
  }
  else {
    iVar6 = param_1[6];
  }
  iVar8 = iRam00000000 << 2;
  iVar7 = iRam00000000;
  do {
    if (iVar6 <= iVar7) {
      return bVar1;
    }
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar8 + param_1[1]);
      iVar5 = *(int *)(param_1[1] + iVar8 + -4);
      if ((*(uint *)(iVar5 + 0x78) & 0xc0) == 0) {
        iVar2 = Config_validate_8068af48(iVar5);
        if (iVar2 == 0) {
          iVar2 = Config_validate_8068af48(iVar4);
          if (iVar2 != 0) {
            *(int *)(param_1[1] + iVar8 + -4) = iVar4;
            *(int *)(param_1[1] + iVar8) = iVar5;
          }
        }
        else {
          iVar2 = Config_validate_8068af48(iVar4);
          if (iVar2 != 0) {
            puVar3 = (uint *)0x0;
            iVar2 = 0xf;
            do {
              if ((*(uint *)(iVar4 + 0x138) & *puVar3) != 0) break;
              if ((*(uint *)(iVar5 + 0x138) & *puVar3) != 0) {
                *(int *)(param_1[1] + iVar8 + -4) = iVar4;
                *(int *)(param_1[1] + iVar8) = iVar5;
                break;
              }
              puVar3 = puVar3 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
      }
    }
    iVar8 = iVar8 + 0x20;
    iVar7 = iVar7 + 8;
  } while( true );
}

// === data_Config_80681504 (0x80681504) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80681504(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80681a3c (0x80681a3c) ===
undefined4 data_Config_80681a3c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    uVar3 = 0;
  }
  else {
    data_Config_80680ffc(param_1,**(undefined4 **)(param_1 + 4));
    if (1 < *(int *)(param_1 + 0x14)) {
      iVar2 = 0;
      uVar3 = **(undefined4 **)(param_1 + 4);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14) + -1; iVar4 = iVar4 + 1) {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        iVar2 = iVar2 + 4;
        *puVar1 = puVar1[1];
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// === data_Config_80681adc (0x80681adc) ===
void data_Config_80681adc(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *param_1;
  if (iVar2 == 10) {
    FUN_segment_0__806c91f4(uRam00000000);
  }
  else if (iVar2 == 0xb) {
    FUN_segment_0__806cdf68(uRam00000000);
  }
  else if (iVar2 != 0xe) {
    do {
      if (param_1[5] < 1) {
        bVar1 = false;
      }
      else {
        data_Config_80680ffc(param_1,*(undefined4 *)param_1[1]);
        if (1 < param_1[5]) {
          iVar5 = 0;
          uVar4 = *(undefined4 *)param_1[1];
          for (iVar2 = 0; iVar2 < param_1[5] + -1; iVar2 = iVar2 + 1) {
            puVar3 = (undefined4 *)(param_1[1] + iVar5);
            iVar5 = iVar5 + 4;
            *puVar3 = puVar3[1];
          }
          *(undefined4 *)(param_1[1] + iVar2 * 4) = uVar4;
        }
        bVar1 = true;
      }
    } while (bVar1);
  }
  return;
}

// === data_Config_80681bc4 (0x80681bc4) ===
void data_Config_80681bc4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar3 <= iVar2) break;
    piVar1 = *(int **)(*(int *)(param_1 + 4) + iVar4);
    if ((~*(uint *)(piVar1[0x29] + 0x20) & 0x1010101) == 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    else {
      (**(code **)(*piVar1 + 0x10))();
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
  }
  return;
}

// === data_Config_80681ccc (0x80681ccc) ===
void data_Config_80681ccc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    thunk_FUN_segment_0__806915f4(*(undefined4 *)(*(int *)(param_1 + 4) + iVar2),1);
    iVar2 = iVar2 + 4;
  }
  return;
}

// === data_Config_80681d34 (0x80681d34) ===
undefined4
data_Config_80681d34
          (int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6)

{
  bool bVar1;
  undefined uVar4;
  uint uVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  
  iVar5 = iRam00000000;
  if (param_2 == 1) {
    if (((*param_1 - 10U < 2) || (*param_1 == 6)) &&
       (iVar6 = FUN_segment_0__806a09c0(iRam00000000,*param_1,1), iVar6 != 0)) {
      uVar3 = 0;
    }
    else {
      if (*param_1 == 6) {
        uVar4 = data_Config_80687978(param_4);
        FUN_segment_0__8069d260(uVar4);
        FUN_segment_0__806a0ffc(iVar5);
      }
      if (*param_1 == 10) {
        uVar4 = data_Config_80687978(param_4);
        FUN_segment_0__806c9f88(iRam00000000,uVar4);
        FUN_segment_0__806a1014(iVar5);
      }
      if (*param_1 == 0xb) {
        uVar4 = data_Config_80687978(param_4);
        FUN_segment_0__806cd8a8(iRam00000000,uVar4);
        FUN_segment_0__806a1020(iVar5);
      }
      iVar5 = iRam00000000;
      if (*param_1 == 0xe) {
        uVar4 = data_Config_80687978(param_4);
        data_Config_8068544c(iVar5,uVar4);
      }
      uVar3 = 0;
    }
  }
  else if (param_2 == 2) {
    iVar5 = data_Config_80682004(param_1,param_3,param_4,0,0,0);
    if (iVar5 == 0) {
      uVar3 = 0;
    }
    else {
      data_Config_806839bc
                (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(iVar5 + 0x6c) * 0x248,iVar5);
      uVar3 = 0;
    }
  }
  else if (param_2 == 3) {
    data_Config_80682004(param_1,param_3,param_4,1,0,0);
    uVar3 = 0;
  }
  else {
    if (param_2 == 4) {
      iVar5 = data_Config_806821d4(param_1,param_4);
      if (iVar5 != 0) {
        return 0;
      }
    }
    else if (param_2 == 5) {
      iVar5 = data_Config_8068234c(param_1,param_4);
      if (iVar5 != 0) {
        return 0;
      }
    }
    else {
      if (param_2 != 6) {
        if (param_2 != 7) {
          return 0;
        }
        data_Config_80682004(param_1,param_3,param_4,0,1,0);
        return 0;
      }
      uVar2 = data_Config_8068795c(param_4,*param_1);
      bVar1 = false;
      iVar5 = 0;
      for (iVar6 = 0; iVar6 < param_1[5]; iVar6 = iVar6 + 1) {
        if (((uVar2 & 0xffff) == (int)*(short *)(*(int *)(param_1[1] + iVar5) + 0xc)) &&
           (bVar1 = true, *param_1 == 1)) {
          FUN_segment_0__806940c4();
        }
        iVar5 = iVar5 + 4;
      }
      if (bVar1) {
        return 0;
      }
    }
    if (param_6 == 0) {
      data_Config_806879c4(*param_1,param_2,param_3,param_4,param_5);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

// === data_Config_80682004 (0x80682004) ===
int * data_Config_80682004
                (undefined4 *param_1,undefined2 param_2,undefined4 param_3,int param_4,int param_5)

{
  ushort uVar2;
  undefined uVar3;
  int *piVar1;
  int iVar4;
  int iVar5;
  
  uVar2 = data_Config_8068795c(param_3,*param_1);
  uVar3 = data_Config_80685dc4(uVar2);
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < (int)param_1[5]; iVar4 = iVar4 + 1) {
    if ((uint)uVar2 == (int)*(short *)(*(int *)(param_1[1] + iVar5) + 0xc)) {
      data_Config_80680ffc(param_1);
    }
    iVar5 = iVar5 + 4;
  }
  iVar4 = param_1[4];
  if (iVar4 < (int)param_1[2]) {
    param_1[4] = iVar4 + 1;
    piVar1 = *(int **)(param_1[1] + iVar4 * 4);
    data_Config_80688ec8(piVar1,*param_1,param_3,param_4,param_5,uVar3);
    data_Config_80681284(param_1,piVar1);
    *(undefined2 *)((int)piVar1 + 0x6e) = param_2;
    *(undefined2 *)(piVar1 + 0x1c) = param_2;
    if ((param_4 != 0) && ((uVar2 & 0xff) == 0x80)) {
      data_Config_8068e20c(piVar1);
    }
    if (param_4 == 0) {
      if (param_5 == 0) {
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
      else {
        (**(code **)(*piVar1 + 0x34))(piVar1);
      }
    }
    else {
      thunk_data_Config_80688f78(piVar1);
    }
    piVar1[0x1f] = piVar1[0x1f] | 2;
    if (param_4 != 0) {
      if ((piVar1[0x1e] & 0x200000U) != 0) {
        thunk_FUN_segment_0__80691a0c(piVar1);
      }
      if ((piVar1[0x1e] & 0x400000U) != 0) {
        thunk_FUN_segment_0__80691ff8(piVar1);
      }
      if ((piVar1[0x1e] & 0x800000U) != 0) {
        thunk_FUN_segment_0__80692000(piVar1);
      }
    }
    piVar1[0x1f] = piVar1[0x1f] | 4;
  }
  else {
    if (param_4 == 0) {
      data_Config_80687458(*param_1,3,0xc,uVar2);
    }
    piVar1 = (int *)0;
  }
  return piVar1;
}

// === data_Config_806821d4 (0x806821d4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_806821d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068234c (0x8068234c) ===
undefined4 data_Config_8068234c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined local_28;
  undefined local_27;
  undefined local_26 [2];
  int local_24 [2];
  
  uVar1 = data_Config_8068795c(param_2,*param_1);
  uVar5 = 0;
  iVar6 = 0;
  for (iVar4 = 0; iVar4 < param_1[5]; iVar4 = iVar4 + 1) {
    iVar3 = *(int *)(param_1[1] + iVar6);
    if ((uVar1 & 0xffff) == (int)*(short *)(iVar3 + 0xc)) {
      uVar5 = 1;
      if (*param_1 == 1) {
        uVar2 = data_Config_8068792c(param_2);
        FUN_segment_0__80694078(iVar3,uVar2);
      }
      if (*param_1 == 5) {
        uVar2 = data_Config_8068792c(param_2);
        FUN_segment_0__806959ec(iVar3,uVar2);
      }
      if (*param_1 == 0xe) {
        data_Config_80687934(param_2,&local_27,&local_28,local_26,local_24);
        if (local_24[0] == 0) {
          FUN_segment_0__806ccdf8(iVar3,local_26[0],local_27,local_28);
        }
        else if (local_24[0] == 1) {
          FUN_segment_0__806cd134(iVar3,local_26[0],local_27,local_28);
        }
        else if (local_24[0] == 2) {
          FUN_segment_0__806cd390(iVar3,local_26[0],local_27,local_28,0);
        }
        else if (local_24[0] == 3) {
          FUN_segment_0__806cd444(iVar3,local_26[0],local_28);
        }
      }
    }
    iVar6 = iVar6 + 4;
  }
  return uVar5;
}

// === data_Config_806824b8 (0x806824b8) ===
undefined4 data_Config_806824b8(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = data_Config_8068795c(param_2,*param_1);
  uVar3 = 0;
  iVar4 = 0;
  for (iVar2 = 0; iVar2 < param_1[5]; iVar2 = iVar2 + 1) {
    if (((uVar1 & 0xffff) == (int)*(short *)(*(int *)(param_1[1] + iVar4) + 0xc)) &&
       (uVar3 = 1, *param_1 == 1)) {
      FUN_segment_0__806940c4();
    }
    iVar4 = iVar4 + 4;
  }
  return uVar3;
}

// === data_Config_80682540 (0x80682540) ===
int data_Config_80682540(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (iRam00000000._0_1_ == 0) {
    iVar2 = param_1[4];
    iVar1 = data_Config_806856f0(*param_1);
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = iRam00000000 + *param_1 * 0xc;
    iVar1 = param_1[5] + *(int *)(iVar1 + 0xd4) + *(int *)(iVar1 + 0xd8) + *(int *)(iVar1 + 0xd0);
  }
  return iVar1;
}

// === data_Config_806825b8 (0x806825b8) ===
short data_Config_806825b8(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = *(short *)(param_1 + 0x20);
  uVar2 = sVar1 + 1;
  *(ushort *)(param_1 + 0x20) = uVar2;
  if (0x7f < uVar2) {
    *(undefined2 *)(param_1 + 0x20) = 0;
  }
  return sVar1;
}

// === data_Config_806825e0 (0x806825e0) ===
int data_Config_806825e0(int param_1)

{
  FUN_segment_0__8047da08();
  *(undefined2 *)(param_1 + 0xc) = 0;
  FUN_segment_0__8069f588(param_1 + 0x54);
  FUN_segment_0__806a1738(param_1 + 0x88);
  Config_validate_8067c7f4(param_1 + 0xb4);
  return param_1;
}

// === Config_validate_80682630 (0x80682630) ===
int Config_validate_80682630(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_80682670 (0x80682670) ===
int Config_validate_80682670(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_806826b0 (0x806826b0) ===
int Config_validate_806826b0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_806826f0 (0x806826f0) ===
undefined4 Config_validate_806826f0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0xfc,0,0xc,3);
  }
  return 0;
}

// === data_Config_80682774 (0x80682774) ===
void data_Config_80682774(int param_1,uint param_2)

{
  undefined uVar3;
  undefined4 uVar1;
  int iVar2;
  
  FUN_segment_0__8047da4c();
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(char *)(param_1 + 0x18) = (char)param_2;
  uVar3 = FUN_segment_0__806a2bfc(param_2);
  *(undefined *)(param_1 + 0x19) = uVar3;
  *(bool *)(param_1 + 0x1a) = *(int *)(iRam00000000 + param_2 * 0xf0 + 0x38) == 4;
  uVar1 = FUN_segment_0__8047d97c(iRam00000000,param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iRam00000000 + (param_2 & 0xff) * 4 + 0x10);
  iVar2 = FUN_segment_0__8047e2e8();
  *(bool *)(param_1 + 0x1b) = iVar2 == 1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(param_1);
}

// === data_Config_80682924 (0x80682924) ===
void data_Config_80682924(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar2 = *(ushort *)(param_1 + 0xc) >> 0xc & 1;
  iVar4 = FUN_segment_0__8047dc70();
  uVar1 = *(ushort *)(iVar4 + 0x2c);
  uVar3 = *(ushort *)(param_1 + 0xc) & 0xdff;
  *(ushort *)(param_1 + 0xc) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    if (uVar2 != 0) {
      *(ushort *)(param_1 + 0xc) = uVar3 | 0x4000;
    }
  }
  else if (uVar2 == 0) {
    *(ushort *)(param_1 + 0xc) = uVar3 | 0x3000;
  }
  else {
    *(ushort *)(param_1 + 0xc) = uVar3 | 0x1000;
  }
  return;
}

// === data_Config_806829bc (0x806829bc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_806829bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80683324 (0x80683324) ===
void data_Config_80683324(int *param_1)

{
  float fVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xff30;
  iVar4 = FUN_segment_0__8047dc70();
  fVar1 = *(float *)(iVar4 + 0x34);
  if (fVar1 <= fRam00000020) {
    if (fVar1 < fRam00000024) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffef;
    }
  }
  else {
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x10;
  }
  if (fRam00000028 <= fVar1) {
    if (fRam0000002c < fVar1) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffdf;
    }
  }
  else {
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x20;
  }
  if ((*(ushort *)(param_1 + 3) & 0x2000) != 0) {
    iVar4 = FUN_segment_0__80425788(uRam00000000,2);
    if (iVar4 == 0) {
      bVar3 = false;
    }
    else {
      uVar5 = *(uint *)(*(int *)(*param_1 + 4) + 8);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 0x40000) == 0) {
          if (param_1[0x32] == 0x10) {
            if (param_1[0x23] == 0x14) {
              if (param_1[0x16] != 0) {
                *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
              }
            }
            else {
              *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
            }
          }
          else {
            *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 4;
          }
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = false;
      }
    }
    if (bVar3) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x40;
    }
  }
  if ((*(ushort *)(param_1 + 3) & 0x100) != 0) {
    uVar2 = *(ushort *)(param_1 + 3);
    *(ushort *)(param_1 + 3) = uVar2 & 0xfeff;
    if ((uVar2 & 0x1000) == 0) {
      iVar4 = FUN_segment_0__80425788(uRam00000000,2);
      if (iVar4 == 0) {
        bVar3 = false;
      }
      else {
        uVar5 = *(uint *)(*(int *)(*param_1 + 4) + 8);
        if ((uVar5 & 1) == 0) {
          if ((uVar5 & 0x40000) == 0) {
            if (param_1[0x32] == 0x10) {
              if (param_1[0x23] == 0x14) {
                if (param_1[0x16] != 0) {
                  *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
                }
              }
              else {
                *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
              }
            }
            else {
              *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 4;
            }
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = false;
        }
      }
      if (bVar3) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x80;
      }
    }
  }
  return;
}

// === data_Config_80683570 (0x80683570) ===
void data_Config_80683570(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_segment_0__8047dc70();
  fVar1 = *(float *)(iVar2 + 0x34);
  if (fVar1 <= fRam00000020) {
    if (fVar1 < fRam00000024) {
      *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffef;
    }
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x10;
  }
  if (fRam00000028 <= fVar1) {
    if (fRam0000002c < fVar1) {
      *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) & 0xffdf;
    }
  }
  else {
    *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x20;
  }
  return;
}

// === data_Config_80683618 (0x80683618) ===
undefined4 data_Config_80683618(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_segment_0__80425788(uRam00000000,2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(*param_1 + 4) + 8);
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 0x40000) == 0) {
        if (param_1[0x32] == 0x10) {
          if (param_1[0x23] == 0x14) {
            if (param_1[0x16] != 0) {
              *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
            }
          }
          else {
            *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
          }
        }
        else {
          *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 4;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// === data_Config_806836e0 (0x806836e0) ===
void data_Config_806836e0(int param_1)

{
  FUN_segment_0__8047dff8();
  FUN_segment_0__8046cc14();
  *(undefined *)(param_1 + 0x238) = 1;
  return;
}

// === data_Config_80683718 (0x80683718) ===
void data_Config_80683718(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__8047dff8();
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x18))();
  return;
}

// === data_Config_80683748 (0x80683748) ===
void data_Config_80683748(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__8047dff8();
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x1c))();
  return;
}

// === data_Config_80683778 (0x80683778) ===
void data_Config_80683778(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__8047dff8();
  FUN_segment_0__80473128(uVar1,0xff);
  return;
}

// === data_Config_806837a0 (0x806837a0) ===
void data_Config_806837a0(void)

{
  return;
}

// === data_Config_806837bc (0x806837bc) ===
int data_Config_806837bc(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = true;
  uVar3 = *(uint *)(*(int *)(*param_1 + 4) + 8);
  if (((uVar3 & 0x102) == 0) && ((*(uint *)(*(int *)(*param_1 + 4) + 0xc) & 0x20c6000) == 0)) {
    bVar2 = false;
  }
  if ((bVar2) || ((uVar3 & 0x10) != 0)) {
    iVar1 = 0;
  }
  else {
    FUN_segment_0__8047dff8(param_1);
    iVar1 = FUN_segment_0__8046dc74();
    uVar3 = FUN_segment_0__8047e2d8(param_1);
    *(undefined4 *)(*(int *)(*(int *)(iRam00000000 + 0x68) + (uVar3 & 0xff) * 4) + 0x4c) = 0;
    if (iVar1 != 0) {
      FUN_segment_0__8047dff8(param_1);
      FUN_segment_0__8047f15c();
    }
  }
  return iVar1;
}

// === data_Config_80683880 (0x80683880) ===
void data_Config_80683880(int *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 8) & 0x102) == 0) {
    if ((*(uint *)(*(int *)(*param_1 + 4) + 0xc) & 0x20c6000) == 0) {
      bVar1 = false;
    }
  }
  if (!bVar1) {
    FUN_segment_0__8047dff8();
    FUN_segment_0__8046de28();
  }
  return;
}

// === data_Config_806838dc (0x806838dc) ===
void data_Config_806838dc(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined *)(param_1 + 0x244) = 1;
  }
  if ((*(char *)(param_1 + 0x1a) == 0) || (param_2 != 0)) {
    if (*(int *)(param_1 + 0x8c) != 0x14) {
      FUN_segment_0__806a2034(param_1 + 0x88,0);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_segment_0__8069fc18(param_1 + 0x54);
    }
    if (*(int *)(param_1 + 0x78) != 0x14) {
      *(undefined4 *)(param_1 + 0x78) = 0x14;
    }
    if (*(int *)(param_1 + 200) != 0x10) {
      data_Config_8067fcd8(param_1 + 0xb4);
    }
  }
  return;
}

// === data_Config_80683984 (0x80683984) ===
void data_Config_80683984(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88();
}

// === data_Config_806839bc (0x806839bc) ===
void data_Config_806839bc(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x7c) & 1) == 0) {
    data_Config_8068de7c((double)g_Ram_float,param_2);
  }
  FUN_segment_0__806b7dd8(*(undefined4 *)(param_1 + 0x20),param_2);
  Config_validate_80689f74(param_2);
  return;
}

// === data_Config_80683a20 (0x80683a20) ===
void data_Config_80683a20(int param_1)

{
  if (*(char *)(param_1 + 0x44) != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__8047da88();
  }
  return;
}

// === data_Config_80683ac4 (0x80683ac4) ===
void data_Config_80683ac4(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x1a) == 0) &&
     ((cRam00000000 == 0 || (*(int *)(param_1 + 0x78) == 0x14)))) {
    bVar1 = false;
    if ((*(int *)(param_1 + 0x8c) != 0x14) && (*(int *)(param_1 + 0xa0) == 0)) {
      bVar1 = true;
    }
    if ((bVar1) && (*(int *)(param_1 + 0x8c) != 0xe)) {
      FUN_segment_0__806a1c50(param_1 + 0x88);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_segment_0__8069fc18(param_1 + 0x54);
    }
    if (*(char *)(param_1 + 0x1a) == 0) {
      bVar1 = false;
      if (((*(int *)(param_1 + 200) != 0x10) && (*(int *)(param_1 + 0x108) == 0)) &&
         (*(char *)(param_1 + 0x208) == 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        data_Config_806803e4(param_1 + 0xb4,param_2);
      }
    }
  }
  return;
}

// === data_Config_80683bbc (0x80683bbc) ===
void data_Config_80683bbc(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x1a) != 0) {
    return;
  }
  bVar1 = false;
  if (((*(int *)(param_1 + 200) != 0x10) && (*(int *)(param_1 + 0x108) == 0)) &&
     (*(char *)(param_1 + 0x208) == 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if ((param_2 != 0) && (*(int *)(param_1 + 0xd0) != 1)) {
    return;
  }
  data_Config_806803e4(param_1 + 0xb4,param_3);
  return;
}

// === data_Config_80683c20 (0x80683c20) ===
bool data_Config_80683c20(int param_1,int param_2)

{
  undefined uVar1;
  bool bVar2;
  
  if (param_2 == 0x14) {
    bVar2 = true;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0) {
      if ((*(int *)(param_1 + 0x58) == 1) && (*(int *)(param_1 + 0x5c) < 0x3c)) {
        return true;
      }
      uVar1 = *(undefined *)(param_1 + 0x82);
      FUN_segment_0__8069f990(param_1 + 0x54);
      FUN_segment_0__806a1f80(param_1 + 0x88,param_2,uVar1);
    }
    FUN_segment_0__806a1fbc(param_1 + 0x88,1);
    bVar2 = *(int *)(param_1 + 0x8c) == 0x14;
  }
  return bVar2;
}

// === data_Config_80683ccc (0x80683ccc) ===
void data_Config_80683ccc(int param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined uVar3;
  
  if (*(int *)(param_1 + 0x8c) == 0x14) {
    if ((*(char *)(param_1 + 0x1a) == 0) &&
       ((*(uint *)(*(int *)(*(int *)(uRam00000000 + 0xc) + (uint)*(byte *)(param_1 + 0x18) * 4) +
                  0x38) & 2) == 0)) {
      cVar1 = *(char *)(param_1 + 0x19);
      uVar2 = uRam00000000 >> 0x18;
      if (cVar1 != 0) {
        param_3 = param_2;
      }
      uVar3 = FUN_segment_0__806a29b4((uint)*(byte *)(param_1 + 0x18));
      FUN_segment_0__8069f5f0
                (param_1 + 0x54,param_3,uVar3,cVar1,param_4 & ~((int)(-uVar2 | uVar2) >> 0x1f));
    }
  }
  return;
}

// === data_Config_80683da0 (0x80683da0) ===
void data_Config_80683da0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined local_18 [16];
  
  iVar1 = FUN_segment_0__8069dfbc(param_1 + 0x44,param_2,local_18);
  if ((iVar1 != 0) &&
     (FUN_segment_0__8069f014(param_1 + 0x44,local_18[0],1), *(char *)(param_1 + 0x44) != -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__8047da88(param_1);
  }
  return;
}

// === data_Config_80683fa0 (0x80683fa0) ===
int data_Config_80683fa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x8c) != 0x14) &&
     (param_2 == *(int *)(*(int *)(param_1 + 0x8c) * 0x1c + 4))) {
    iVar2 = *(int *)(param_1 + 0x90);
  }
  if (((*(int *)(param_1 + 0x58) != 0) && (*(char *)(param_1 + 0x82) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0x74) * 0x1c, param_2 == *(int *)(iVar1 + 4))) {
    iVar2 = iVar2 + *(int *)(iVar1 + 8);
  }
  return iVar2;
}

// === data_Config_80684018 (0x80684018) ===
void data_Config_80684018(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 0x78;
  return;
}

// === data_Config_80684024 (0x80684024) ===
void data_Config_80684024(int param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 0;
  return;
}

// === Config_validate_80684030 (0x80684030) ===
undefined4 Config_validate_80684030(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  iVar2 = iRam00000000;
  bVar1 = iRam00000000 != 0;
  if ((bVar1) && (iRam00000000 = 0, bVar1)) {
    FUN_segment_0__8069fe54();
    if (iRam00000000._0_1_ != 0) {
      Config_assertFail_80685bfc();
    }
    FUN_segment_0__806c9e00();
    FUN_segment_0__806cd764();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar2 + 0x48,0,0x24,0xf);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,0);
}

// === Config_validate_806841cc (0x806841cc) ===
int Config_validate_806841cc(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x430);
  }
  return iRam00000000;
}

// === Config_assertFail_8068421c (0x8068421c) ===
void Config_assertFail_8068421c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = iRam00000000;
  bVar1 = iRam00000000 != 0;
  if ((bVar1) && (iRam00000000 = 0, bVar1)) {
    FUN_segment_0__8069fe54();
    if (iRam00000000._0_1_ != 0) {
      Config_assertFail_80685bfc();
    }
    FUN_segment_0__806c9e00();
    FUN_segment_0__806cd764();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar2 + 0x48,0,0x24,0xf);
  }
  return;
}

// === Config_assertFail_8068436c (0x8068436c) ===
void Config_assertFail_8068436c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80684570 (0x80684570) ===
int Config_validate_80684570(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_806845b0 (0x806845b0) ===
int Config_validate_806845b0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xb4) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x1b0,0,0xc,3);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffff4c);
    }
  }
  return param_1;
}

// === Config_validate_80684644 (0x80684644) ===
int Config_validate_80684644(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_80684684 (0x80684684) ===
int Config_validate_80684684(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_806846c4 (0x806846c4) ===
int Config_validate_806846c4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_80684704 (0x80684704) ===
undefined4 Config_validate_80684704(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__8069fe54();
    if (cRam00000000 != 0) {
      Config_assertFail_80685bfc();
    }
    FUN_segment_0__806c9e00();
    FUN_segment_0__806cd764();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x48,0,0x24,0xf);
  }
  return 0;
}

// === data_Config_80684828 (0x80684828) ===
void data_Config_80684828(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 0x48;
  do {
    data_Config_80680e28(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x24;
  } while (iVar2 < 0xf);
  if (bRam00000000 != 0) {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)(uint)bRam00000000; iVar1 = iVar1 + 1) {
      FUN_segment_0__806a1f80(*(int *)(param_1 + 0x14) + iVar2 + 0x88,5,0);
      iVar2 = iVar2 + 0x248;
    }
  }
  data_Config_80684ee4(param_1);
  FUN_segment_0__806c9e38();
  FUN_segment_0__806cd79c();
  return;
}

// === data_Config_806848e4 (0x806848e4) ===
void data_Config_806848e4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_segment_0__806a102c(iRam00000000);
  FUN_segment_0__806a2980();
  FUN_segment_0__806ca110(iRam00000000);
  FUN_segment_0__806cddec(iRam00000000);
  if (iRam00000000._0_1_ != 0) {
    data_Config_80686e28(iRam00000000);
    data_Config_80686f64(iRam00000000);
  }
  iVar8 = param_1 + 0x48;
  iVar7 = 0;
  iVar3 = iVar8;
  do {
    if (*(int *)(iVar3 + 0x14) != 0) {
      data_Config_80681504(iVar3);
    }
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 0x24;
  } while (iVar7 < 0xf);
  iVar4 = 0;
  iVar3 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    iVar2 = data_Config_80682540(iRam00000000 + iVar7 + 0x48);
    piVar1 = (int *)(iVar3 + 0x5c);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0x24;
    iVar3 = iVar3 + 0x74;
    iVar4 = iVar4 + (*piVar1 * iVar2 & 0xffffU);
  } while (iVar6 < 0xf);
  *(int *)(param_1 + 0x42c) = iVar4 + -0x1e;
  for (bVar5 = 0; bVar5 < *(byte *)(param_1 + 0x10); bVar5 = bVar5 + 1) {
    data_Config_806829bc(*(int *)(param_1 + 0x14) + (uint)bVar5 * 0x248);
  }
  iVar3 = 0;
  do {
    if (*(int *)(iVar8 + 0x10) != 0) {
      data_Config_80681bc4(iVar8);
    }
    iVar3 = iVar3 + 1;
    iVar8 = iVar8 + 0x24;
  } while (iVar3 < 0xf);
  return;
}

// === data_Config_80684a34 (0x80684a34) ===
void data_Config_80684a34(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x48;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      data_Config_80681bc4(param_1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x24;
  } while (iVar1 < 0xf);
  return;
}

// === data_Config_80684a8c (0x80684a8c) ===
void data_Config_80684a8c(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x48;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x14) != 0) {
      data_Config_80681504(param_1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x24;
  } while (iVar1 < 0xf);
  return;
}

// === data_Config_80684ae4 (0x80684ae4) ===
void data_Config_80684ae4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = 0;
  do {
    iVar2 = data_Config_80682540(iRam00000000 + iVar6 + 0x48);
    piVar1 = (int *)(iVar5 + 0x5c);
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 0x24;
    iVar5 = iVar5 + 0x74;
    iVar4 = iVar4 + (*piVar1 * iVar2 & 0xffffU);
  } while (iVar3 < 0xf);
  *(int *)(param_1 + 0x42c) = iVar4 + -0x1e;
  return;
}

// === data_Config_80684b60 (0x80684b60) ===
void data_Config_80684b60(int param_1)

{
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < *(byte *)(param_1 + 0x10); bVar1 = bVar1 + 1) {
    data_Config_806829bc(*(int *)(param_1 + 0x14) + (uint)bVar1 * 0x248);
  }
  return;
}

// === data_Config_80684bc0 (0x80684bc0) ===
undefined4 data_Config_80684bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 * 0x1c + 4);
  iVar5 = *(int *)(param_1 * 0x1c + 8);
  iVar3 = iRam00000000 + iVar1 * 0x24;
  iVar4 = iVar3 + 0x48;
  while( true ) {
    iVar2 = data_Config_80682540(iVar4);
    if (iVar5 <= *(int *)(iVar3 + 0x54) - iVar2) {
      return 1;
    }
    if (*(int *)(iVar1 * 0x74 + 4) == 1) break;
    iVar2 = data_Config_80681a3c(iVar4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

// === data_Config_80684c7c (0x80684c7c) ===
int data_Config_80684c7c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0x14) {
    iVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 * 0x1c + 8);
    iVar2 = iRam00000000 + *(int *)(param_1 * 0x1c + 4) * 0x24;
    iVar3 = data_Config_80682540(iVar2 + 0x48);
    uVar1 = *(int *)(iVar2 + 0x54) - iVar3;
    iVar2 = (((int)uVar1 >> 0x1f) - ((int)uVar4 >> 0x1f)) + (uint)(uVar4 <= uVar1);
  }
  return iVar2;
}

// === data_Config_80684d04 (0x80684d04) ===
undefined4 data_Config_80684d04(undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((*(uint *)(param_2 + 0x78) & 8) != 0) {
    FUN_segment_0__8047e2d8(param_3);
  }
  return 1;
}

// === data_Config_80684d40 (0x80684d40) ===
int data_Config_80684d40(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (iRam00000000._0_1_ != 0) {
    return 0;
  }
  iVar5 = 0;
LAB_segment_0__80684eb8:
  do {
    iVar3 = data_Config_80675a64(iRam00000000);
    if (iVar3 == 0) {
      return iVar5;
    }
    iVar2 = data_Config_8068c568(iVar3,param_2,0);
  } while (iVar2 == 0);
  if ((*(uint *)(iVar3 + 0x78) & 8) != 0) {
    FUN_segment_0__8047e2d8(param_2);
  }
  uVar6 = *(uint *)(*(int *)(*param_2 + 4) + 0x14) >> 3 & 1;
  if (uVar6 != 0) goto code_r0x80684dd4;
  goto LAB_segment_0__80684e30;
code_r0x80684dd4:
  bVar4 = true;
  bVar1 = false;
  if ((*(int *)(iVar3 + 4) == 5) && (*(short *)(iVar3 + 0x2c0) == 6)) {
    bVar1 = true;
  }
  if (!bVar1) {
    bVar1 = false;
    if ((*(int *)(iVar3 + 4) == 9) && (*(short *)(iVar3 + 0x1a8) == 2)) {
      bVar1 = true;
    }
    if (!bVar1) {
      bVar4 = false;
    }
  }
  if (bVar4) {
LAB_segment_0__80684e30:
    iVar2 = data_Config_8068afa8(iVar3);
    if ((iVar2 == 0) || (uVar6 != 0)) {
      iVar2 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + iVar2 + 0x264) = iVar3;
      if (((*(uint *)(iVar3 + 0x78) & 1) != 0) && (uVar6 == 0)) {
        Config_validate_80680240
                  (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(iVar3 + 0x6c) * 0x248 + 0xb4,
                   iVar3);
      }
      data_Config_8068e824(iVar3,param_2,uVar6);
      if (0xf < iVar5) {
        iVar5 = 0xf;
      }
    }
    else {
      thunk_FUN_segment_0__80691ca8(iVar3,0);
    }
  }
  goto LAB_segment_0__80684eb8;
}

// === data_Config_80684ee4 (0x80684ee4) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80684ee4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_assertFail_80685050 (0x80685050) ===
void Config_assertFail_80685050(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_806851c0 (0x806851c0) ===
void Config_assertFail_806851c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8068532c (0x8068532c) ===
void data_Config_8068532c(undefined4 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(*(int *)(iRam00000000 + 0x14) + param_2 * 0x248);
}

// === data_Config_8068544c (0x8068544c) ===
void data_Config_8068544c(undefined4 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(*(int *)(iRam00000000 + 0x14) + param_2 * 0x248);
}

// === data_Config_8068552c (0x8068552c) ===
void data_Config_8068552c(undefined4 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(*(int *)(iRam00000000 + 0x14) + param_2 * 0x248);
}

// === data_Config_8068560c (0x8068560c) ===
void data_Config_8068560c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = iRam00000000;
  iVar6 = 0;
  iVar4 = *(int *)(iRam00000000 + 0x254);
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x244) + iVar6);
    uVar2 = FUN_segment_0__806ccd00(uVar3);
    if (param_2 == (uVar2 & 0xff)) {
      FUN_segment_0__806cc640(uVar3,param_3);
    }
    iVar6 = iVar6 + 4;
  }
  return;
}

// === data_Config_80685688 (0x80685688) ===
void data_Config_80685688(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = iRam00000000;
  iVar4 = 0;
  iVar2 = *(int *)(iRam00000000 + 0x154);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FUN_segment_0__80692e24(*(undefined4 *)(*(int *)(iVar1 + 0x148) + iVar4),param_2);
    iVar4 = iVar4 + 4;
  }
  return;
}

// === data_Config_806856e8 (0x806856e8) ===
void data_Config_806856e8(int param_1)

{
  data_Config_8068e6dc(param_1 + 0x2a4);
  return;
}

// === data_Config_806856f0 (0x806856f0) ===
int data_Config_806856f0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = uRam00000000 >> 0x18;
  for (uVar3 = 0; (uVar3 & 0xff) < uVar1; uVar3 = uVar3 + 1) {
    iVar2 = data_Config_80683fa0(*(int *)(uRam00000000 + 0x14) + (uVar3 & 0xff) * 0x248,param_1);
    iVar4 = iVar4 + iVar2;
  }
  return iVar4;
}

// === data_Config_80685764 (0x80685764) ===
void data_Config_80685764(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar1 = iRam00000000;
  iVar4 = 0;
  iVar2 = 0;
  do {
    data_Config_80681adc(iRam00000000 + iVar4 + 0x48);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x24;
  } while (iVar2 < 0xf);
  for (bVar3 = 0; bVar3 < *(byte *)(iVar1 + 0x10); bVar3 = bVar3 + 1) {
    data_Config_806838dc(*(int *)(iRam00000000 + 0x14) + (uint)bVar3 * 0x248,1);
  }
  return;
}

// === Config_validate_8068580c (0x8068580c) ===
undefined4 Config_validate_8068580c(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar2,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar3 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(puVar3,0);
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      Config_assertFail_80685bfc();
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === Config_validate_80685938 (0x80685938) ===
int Config_validate_80685938(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x2c);
  }
  return iRam00000000;
}

// === Config_assertFail_80685bfc (0x80685bfc) ===
void Config_assertFail_80685bfc(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint == (void *)0;
  if ((bVar1) || (g_Ram_uint = (void *)0, bVar1)) {
    return;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
  *puVar2 = 0;
  puVar3 = g_Ram_uint;
  bVar1 = g_Ram_uint != (void *)0;
  if ((bVar1) && (g_Ram_uint = (void *)0, bVar1)) {
    if (bVar1) {
      *puVar3 = 0;
      puVar2 = g_Ram_uint;
      if (g_Ram_uint != (void *)0) {
        g_Ram_uint = (void *)0;
        Config_validate_80688708(puVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar3,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(puVar2,0);
}

// === data_Config_80685d38 (0x80685d38) ===
uint data_Config_80685d38(double param_1)

{
  return (uint)(int)param_1 >> 1 & 1;
}

// === data_Config_80685d54 (0x80685d54) ===
uint data_Config_80685d54(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) == 0xe) {
      uVar2 = 0;
    }
    else {
      uVar2 = data_Config_806825b8(iRam00000000 + *(int *)(param_1 + 4) * 0x24 + 0x48);
    }
  }
  else {
    uVar2 = 0x80;
  }
  return (uint)bVar1 << 8 | uVar2 & 0xffff;
}

// === data_Config_80685dc4 (0x80685dc4) ===
uint data_Config_80685dc4(uint param_1)

{
  return param_1 >> 8 & 0xf;
}

// === data_Config_80685f9c (0x80685f9c) ===
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80685fdc) */
/* WARNING: Removing unreachable block (ram,0x80686080) */

int data_Config_80685f9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    return param_1 + 3;
  }
  if (param_4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_806863cc (0x806863cc) ===
ushort * data_Config_806863cc(ushort *param_1,ushort *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 == (ushort *)0x0) {
    return param_1 + 1;
  }
  if (param_4 == 0) {
    uVar1 = (uint)*param_1;
  }
  else {
    uVar1 = (uint)*param_2 | (*param_3 & 0xf) << 0xc;
    *param_1 = (ushort)uVar1;
  }
  if (param_4 == 0) {
    *param_2 = (ushort)uVar1 & 0xfff;
    *param_3 = (byte)(uVar1 >> 0xc);
    return param_1 + 1;
  }
  return param_1 + 1;
}

// === data_Config_8068642c (0x8068642c) ===
byte * data_Config_8068642c(byte *param_1,byte *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_2 != (byte *)0x0) {
    if (param_3 == 0) {
      uVar2 = (ushort)*param_1;
      if (uVar2 != 0xff) {
        if (*(int *)(iRam00000000 + 0x18) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(ushort *)(*(int *)(iRam00000000 + 0x18) + 4);
        }
        if (uVar1 <= uVar2) {
          uVar2 = 0xff;
        }
      }
      FUN_segment_0__8069f014(param_2,uVar2,1);
    }
    else {
      *param_1 = *param_2;
    }
  }
  return param_1 + 1;
}

// === data_Config_806864d4 (0x806864d4) ===
char * data_Config_806864d4(char *param_1,float *param_2,int param_3)

{
  double local_8;
  
  if (param_2 != (float *)0x0) {
    if (param_3 == 0) {
      local_8 = (double)(CONCAT44(0x43300000,(int)*param_1 >> 6) ^ 0x80000000);
      *param_2 = (float)(local_8 - dRam00000000);
    }
    else {
      *param_1 = (char)((int)*param_2 << 6);
    }
  }
  return param_1 + 1;
}

// === data_Config_80686540 (0x80686540) ===
void data_Config_80686540(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 != 0) {
    if (param_3 != 0) {
      param_1 = iRam00000000;
    }
    param_1 = param_1 + 2;
  }
  if (param_2 == 0) {
    puVar7 = (void *)0;
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    puVar7 = (undefined4 *)(param_2 + 0x78);
    iVar6 = param_2 + 0x6d;
    iVar4 = param_2 + 0xc;
  }
  puVar2 = (undefined4 *)data_Config_806863cc(param_1,iVar4,iVar6,param_3);
  if (puVar7 != (void *)0) {
    if (param_3 == 0) {
      *puVar7 = *puVar2;
    }
    else {
      *puVar2 = *puVar7;
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x44;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x44;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x44);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(puVar2 + 1) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x44);
      }
      *(short *)(puVar2 + 1) = (short)((int)*pfVar5 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x44;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x44;
    }
    iVar6 = iVar6 + 4;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x44;
        }
        pfVar5 = (float *)(iVar6 + 4);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,
                                         (int)*(short *)((int)puVar2 + 6) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x44;
        }
        pfVar5 = (float *)(iVar6 + 4);
      }
      *(short *)((int)puVar2 + 6) = (short)((int)*pfVar5 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x44;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x44;
    }
    iVar6 = iVar6 + 8;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x44;
        }
        pfVar5 = (float *)(iVar6 + 8);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(puVar2 + 2) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x44;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x44;
        }
        pfVar5 = (float *)(iVar6 + 8);
      }
      *(short *)(puVar2 + 2) = (short)((int)*pfVar5 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    iVar6 = param_2 + 0xbc;
    iVar4 = param_2 + 0x44;
  }
  pcVar3 = (char *)data_Config_80685f9c((int)puVar2 + 10,iVar4,iVar6,param_3);
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x50;
  }
  if ((iVar6 != 0) && (param_3 != 0)) {
    if (param_2 == 0) {
      pfVar5 = (float *)0x0;
    }
    else {
      pfVar5 = (float *)(param_2 + 0x50);
    }
    if (fRam00000018 <= *pfVar5) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x50);
      }
      *pfVar5 = fRam00000018;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x50);
      }
      if (fRam0000001c < *pfVar5) {
        if (param_2 == 0) {
          pfVar5 = (float *)0x0;
        }
        else {
          pfVar5 = (float *)(param_2 + 0x50);
        }
        *pfVar5 = fRam0000001c;
      }
    }
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x50;
    }
    if (fRam00000020 <= *(float *)(iVar6 + 4)) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      *(float *)(iVar6 + 4) = fRam00000020;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (fRam00000024 < *(float *)(iVar6 + 4)) {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        *(float *)(iVar6 + 4) = fRam00000024;
      }
    }
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x50;
    }
    if (fRam00000018 <= *(float *)(iVar6 + 8)) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      *(float *)(iVar6 + 8) = fRam00000018;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (fRam0000001c < *(float *)(iVar6 + 8)) {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        *(float *)(iVar6 + 8) = fRam0000001c;
      }
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x50;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x50;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x50);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,(int)*pcVar3 << 1 ^ 0x80000000) - dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)(param_2 + 0x50);
      }
      *pcVar3 = (char)((int)*pfVar5 >> 1);
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x50;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x50;
    }
    iVar6 = iVar6 + 4;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        pfVar5 = (float *)(iVar6 + 4);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,(int)pcVar3[1] ^ 0x80000000) - dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        pfVar5 = (float *)(iVar6 + 4);
      }
      pcVar3[1] = (char)(int)*pfVar5;
    }
  }
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_2 + 0x50;
  }
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_2 + 0x50;
    }
    iVar6 = iVar6 + 8;
  }
  if (iVar6 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        pfVar5 = (float *)(iVar6 + 8);
      }
      *pfVar5 = (float)((double)CONCAT44(0x43300000,(int)pcVar3[2] << 1 ^ 0x80000000) - dRam00000010
                       );
    }
    else {
      if (param_2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_2 + 0x50;
      }
      if (iVar6 == 0) {
        pfVar5 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_2 + 0x50;
        }
        pfVar5 = (float *)(iVar6 + 8);
      }
      pcVar3[2] = (char)((int)*pfVar5 >> 1);
    }
  }
  if ((pcVar3 != (char *)0xfffffffd) && (param_3 == 0)) {
    *(byte *)(param_2 + 0x6c) = (byte)((ushort)*(undefined2 *)(param_2 + 0xc) >> 8) & 0xf;
  }
  return;
}

// === data_Config_80686e28 (0x80686e28) ===
void data_Config_80686e28(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = uRam00000000;
  bVar1 = *(byte *)(param_1 + 0x10);
  while( true ) {
    uVar7 = (uint)bVar1;
    if (uVar7 == 0xff) {
      return;
    }
    iVar6 = uVar7 * 4;
    bVar2 = *(byte *)(*(int *)(param_1 + 0x14) + iVar6);
    uVar4 = FUN_segment_0__80544428(uVar3);
    if ((uVar4 < *(byte *)(*(int *)(param_1 + 0x14) + iVar6 + 2)) ||
       (iVar5 = FUN_segment_0__80544370(uVar3), iVar5 == 0)) break;
    *(undefined *)(*(int *)(param_1 + 0x14) + iVar6) = *(undefined *)(param_1 + 0x11);
    *(byte *)(param_1 + 0x11) = bVar1;
    iVar5 = *(int *)(param_1 + 0x18) + uVar7 * 0x24;
    *(byte *)(param_1 + 0x10) = bVar2;
    FUN_segment_0__80544364
              (uVar3,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c),iVar5,
               *(undefined *)(*(int *)(param_1 + 0x14) + iVar6 + 2));
    bVar1 = bVar2;
  }
  iVar6 = 0;
  for (bVar1 = *(byte *)(param_1 + 0x10); bVar1 != 0xff;
      bVar1 = *(byte *)(*(int *)(param_1 + 0x14) + (uint)bVar1 * 4)) {
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(param_1 + 0x1c) < iVar6) {
    *(int *)(param_1 + 0x1c) = iVar6;
  }
  return;
}

// === data_Config_80686f64 (0x80686f64) ===
void data_Config_80686f64(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = uRam00000000;
  uVar7 = 0xff;
  bVar1 = *(byte *)(param_1 + 0x20);
  while (bVar2 = bVar1, uVar8 = (uint)bVar2, uVar8 != 0xff) {
    iVar3 = uVar8 * 4;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + iVar3);
    *(undefined *)(*(int *)(param_1 + 0x24) + iVar3) = *(undefined *)(param_1 + 0x21);
    *(byte *)(param_1 + 0x21) = bVar2;
    if (uVar7 == 0xff) {
      *(byte *)(param_1 + 0x20) = bVar1;
    }
    else {
      *(byte *)(*(int *)(param_1 + 0x24) + uVar7 * 4) = bVar1;
    }
    iVar5 = *(int *)(param_1 + 0x28) + uVar8 * 0x24;
    iVar6 = *(int *)(iVar5 + 0x20);
    if (((iVar6 == 0) || (uVar4 <= iVar6 + 0x200U)) &&
       (iVar5 = data_Config_80681d34
                          (uRam00000000 + *(int *)(iVar5 + 0x18) * 0x24 + 0x48,
                           *(undefined4 *)(iVar5 + 0x1c),
                           -(int)*(short *)(*(int *)(param_1 + 0x24) + iVar3 + 2),iVar5,iVar6,1),
       iVar5 != 0)) {
      *(undefined *)(param_1 + 0x21) = *(undefined *)(*(int *)(param_1 + 0x24) + iVar3);
      *(byte *)(*(int *)(param_1 + 0x24) + iVar3) = bVar1;
      if (uVar7 == 0xff) {
        *(byte *)(param_1 + 0x20) = bVar2;
        uVar7 = uVar8;
      }
      else {
        *(byte *)(*(int *)(param_1 + 0x24) + uVar7 * 4) = bVar2;
        uVar7 = uVar8;
      }
    }
  }
  return;
}

// === Config_validate_80687080 (0x80687080) ===
void Config_validate_80687080
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x11) != 0xff) {
    iVar1 = *(int *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x11) * 0x24;
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1,param_4,param_5);
  }
  return;
}

// === Config_validate_80687140 (0x80687140) ===
void Config_validate_80687140
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    iVar2 = *(int *)(param_1 + 0x28) + (uint)*(byte *)(param_1 + 0x21) * 0x24;
    *(undefined4 *)(iVar2 + 0x18) = param_2;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    iVar1 = iRam00000000;
    if (param_6 != 0) {
      iVar1 = param_6;
    }
    *(int *)(iVar2 + 0x20) = iVar1;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar2,param_5,0x15);
  }
  return;
}

// === data_Config_80687208 (0x80687208) ===
void data_Config_80687208(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_3 + 2U & 0xff;
  *g_Ram_uint = (short)g_Ram_uint;
  puVar2 = g_Ram_uint;
  uVar3 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar3 < uVar1) || (iVar4 = FUN_segment_0__80544370(puVar2), iVar4 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,param_2,g_Ram_uint,uVar1);
  }
  else {
    FUN_segment_0__80544364(puVar2,param_1,param_2,g_Ram_uint,uVar1);
  }
  return;
}

// === data_Config_806872b4 (0x806872b4) ===
undefined2 * data_Config_806872b4(undefined4 param_1,undefined param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined *)(g_Ram_uint + 1) = param_2;
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 3) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,1,g_Ram_uint,3);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,1,g_Ram_uint,3);
  }
  return g_Ram_uint;
}

// === data_Config_80687378 (0x80687378) ===
undefined2 * data_Config_80687378(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 * 0x74 + 0x28);
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar4 = (uVar4 & 0xff) + 2 & 0xff;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < uVar4) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,2,g_Ram_uint,uVar4);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,2,g_Ram_uint,uVar4);
  }
  return g_Ram_uint;
}

// === data_Config_80687458 (0x80687458) ===
undefined2 * data_Config_80687458(undefined4 param_1,byte param_2,int param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  g_Ram_uint[1] = param_4;
  *(byte *)(g_Ram_uint + 2) = param_2 | (byte)(param_3 << 4);
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 5) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,4,g_Ram_uint,5);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,4,g_Ram_uint,5);
  }
  return g_Ram_uint;
}

// === data_Config_8068752c (0x8068752c) ===
undefined2 * data_Config_8068752c(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 0x14) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,3,g_Ram_uint,0x14);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,3,g_Ram_uint,0x14);
  }
  return g_Ram_uint;
}

// === data_Config_806875e8 (0x806875e8) ===
undefined2 * data_Config_806875e8(undefined4 param_1,undefined param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  g_Ram_uint[1] = param_3;
  *(undefined *)(g_Ram_uint + 2) = param_2;
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 5) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,5,g_Ram_uint,5);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,5,g_Ram_uint,5);
  }
  return g_Ram_uint;
}

// === data_Config_806876b4 (0x806876b4) ===
undefined2 * data_Config_806876b4(undefined4 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  g_Ram_uint[1] = param_2;
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 4) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,6,g_Ram_uint,4);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,6,g_Ram_uint,4);
  }
  return g_Ram_uint;
}

// === data_Config_80687778 (0x80687778) ===
undefined2 *
data_Config_80687778
          (undefined4 param_1,int param_2,int param_3,ushort param_4,ushort param_5,byte param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  g_Ram_uint[1] = param_5 | param_4 | (ushort)(param_2 << 0xc);
  *(byte *)(g_Ram_uint + 2) = param_6 | (byte)(param_3 << 4);
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 5) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,5,g_Ram_uint,5);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,5,g_Ram_uint,5);
  }
  return g_Ram_uint;
}

// === data_Config_80687858 (0x80687858) ===
undefined2 * data_Config_80687858(undefined4 param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  
  *g_Ram_uint = (short)g_Ram_uint;
  puVar1 = g_Ram_uint;
  uVar2 = FUN_segment_0__80544428(g_Ram_uint);
  if ((uVar2 < 0x14) || (iVar3 = FUN_segment_0__80544370(puVar1), iVar3 == 0)) {
    Config_validate_80687080(g_Ram_uint,param_1,7,g_Ram_uint,0x14);
  }
  else {
    FUN_segment_0__80544364(puVar1,param_1,7,g_Ram_uint,0x14);
  }
  return g_Ram_uint;
}

// === data_Config_8068792c (0x8068792c) ===
undefined data_Config_8068792c(int param_1)

{
  return *(undefined *)(param_1 + 4);
}

// === data_Config_80687934 (0x80687934) ===
void data_Config_80687934
               (int param_1,byte *param_2,byte *param_3,undefined *param_4,uint *param_5)

{
  byte bVar1;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)(param_1 + 2);
  *param_4 = (char)uVar2;
  *param_2 = (byte)((ushort)uVar2 >> 0xc);
  bVar1 = *(byte *)(param_1 + 4);
  *param_3 = bVar1 >> 4;
  *param_5 = bVar1 & 0xf;
  return;
}

// === data_Config_8068795c (0x8068795c) ===
ushort data_Config_8068795c(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 2) & 0xfff;
  if (param_2 == 0xe) {
    uVar1 = *(ushort *)(param_1 + 2) & 0xf00;
  }
  return uVar1;
}

// === data_Config_80687978 (0x80687978) ===
undefined data_Config_80687978(int param_1)

{
  return *(undefined *)(param_1 + 2);
}

// === data_Config_80687980 (0x80687980) ===
void data_Config_80687980(undefined4 param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  
  iVar1 = (int)(short)((short)uRam00000000 - *param_3);
  if (0x200 < iVar1) {
    iVar1 = 0x200;
  }
  Config_validate_80687140(uRam00000000,param_1,param_2,iVar1,param_3,0);
  return;
}

// === data_Config_806879c4 (0x806879c4) ===
void data_Config_806879c4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  Config_validate_80687140(uRam00000000,param_1,param_2,param_3,param_4,param_5);
  return;
}

// === data_Config_806879f4 (0x806879f4) ===
char * data_Config_806879f4(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  if (param_2 != 0) {
    if (param_3 != 0) {
      param_1 = pcRam00000000;
    }
    param_1 = param_1 + 2;
  }
  if (param_2 == 0) {
    puVar8 = (void *)0;
    iVar7 = 0;
    iVar5 = 0;
  }
  else {
    puVar8 = (undefined4 *)(param_2 + 0x78);
    iVar7 = param_2 + 0x6d;
    iVar5 = param_2 + 0xc;
  }
  puVar2 = (undefined4 *)data_Config_806863cc(param_1,iVar5,iVar7,param_3);
  if (puVar8 != (void *)0) {
    if (param_3 == 0) {
      *puVar8 = *puVar2;
    }
    else {
      *puVar2 = *puVar8;
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x44;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x44;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x44);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(puVar2 + 1) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x44);
      }
      *(short *)(puVar2 + 1) = (short)((int)*pfVar6 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x44;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x44;
    }
    iVar7 = iVar7 + 4;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x44;
        }
        pfVar6 = (float *)(iVar7 + 4);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,
                                         (int)*(short *)((int)puVar2 + 6) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x44;
        }
        pfVar6 = (float *)(iVar7 + 4);
      }
      *(short *)((int)puVar2 + 6) = (short)((int)*pfVar6 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x44;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x44;
    }
    iVar7 = iVar7 + 8;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x44;
        }
        pfVar6 = (float *)(iVar7 + 8);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(puVar2 + 2) << 2 ^ 0x80000000) -
                       dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x44;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x44;
        }
        pfVar6 = (float *)(iVar7 + 8);
      }
      *(short *)(puVar2 + 2) = (short)((int)*pfVar6 >> 2);
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
    iVar5 = 0;
  }
  else {
    iVar7 = param_2 + 0xbc;
    iVar5 = param_2 + 0x44;
  }
  pcVar3 = (char *)data_Config_80685f9c((int)puVar2 + 10,iVar5,iVar7,param_3);
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x50;
  }
  if ((iVar7 != 0) && (param_3 != 0)) {
    if (param_2 == 0) {
      pfVar6 = (float *)0x0;
    }
    else {
      pfVar6 = (float *)(param_2 + 0x50);
    }
    if (fRam00000018 <= *pfVar6) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x50);
      }
      *pfVar6 = fRam00000018;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x50);
      }
      if (fRam0000001c < *pfVar6) {
        if (param_2 == 0) {
          pfVar6 = (float *)0x0;
        }
        else {
          pfVar6 = (float *)(param_2 + 0x50);
        }
        *pfVar6 = fRam0000001c;
      }
    }
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x50;
    }
    if (fRam00000020 <= *(float *)(iVar7 + 4)) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      *(float *)(iVar7 + 4) = fRam00000020;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (fRam00000024 < *(float *)(iVar7 + 4)) {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        *(float *)(iVar7 + 4) = fRam00000024;
      }
    }
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x50;
    }
    if (fRam00000018 <= *(float *)(iVar7 + 8)) {
      bVar1 = false;
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      *(float *)(iVar7 + 8) = fRam00000018;
      bVar1 = true;
    }
    if (!bVar1) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (fRam0000001c < *(float *)(iVar7 + 8)) {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        *(float *)(iVar7 + 8) = fRam0000001c;
      }
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x50;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x50;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x50);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,(int)*pcVar3 << 1 ^ 0x80000000) - dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else if (param_2 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        pfVar6 = (float *)(param_2 + 0x50);
      }
      *pcVar3 = (char)((int)*pfVar6 >> 1);
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x50;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x50;
    }
    iVar7 = iVar7 + 4;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        pfVar6 = (float *)(iVar7 + 4);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,(int)pcVar3[1] ^ 0x80000000) - dRam00000010);
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        pfVar6 = (float *)(iVar7 + 4);
      }
      pcVar3[1] = (char)(int)*pfVar6;
    }
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_2 + 0x50;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_2 + 0x50;
    }
    iVar7 = iVar7 + 8;
  }
  if (iVar7 != 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        pfVar6 = (float *)(iVar7 + 8);
      }
      *pfVar6 = (float)((double)CONCAT44(0x43300000,(int)pcVar3[2] << 1 ^ 0x80000000) - dRam00000010
                       );
    }
    else {
      if (param_2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 + 0x50;
      }
      if (iVar7 == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        if (param_2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = param_2 + 0x50;
        }
        pfVar6 = (float *)(iVar7 + 8);
      }
      pcVar3[2] = (char)((int)*pfVar6 >> 1);
    }
  }
  pcVar3 = pcVar3 + 3;
  if ((pcVar3 != (char *)0x0) && (param_3 == 0)) {
    *(byte *)(param_2 + 0x6c) = (byte)((ushort)*(undefined2 *)(param_2 + 0xc) >> 8) & 0xf;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar9 = *(undefined4 *)(param_2 + 4);
    *(short *)pcRam00000000 = (short)pcRam00000000;
    pcVar3 = pcRam00000000;
    uVar4 = FUN_segment_0__80544428(pcRam00000000);
    if ((uVar4 < 0x14) || (iVar7 = FUN_segment_0__80544370(pcVar3), iVar7 == 0)) {
      Config_validate_80687080(pcRam00000000,uVar9,3,pcRam00000000,0x14);
      pcVar3 = pcRam00000000;
    }
    else {
      FUN_segment_0__80544364(pcVar3,uVar9,3,pcRam00000000,0x14);
      pcVar3 = pcRam00000000;
    }
  }
  return pcVar3;
}

// === Config_assertFail_80688470 (0x80688470) ===
void Config_assertFail_80688470(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_validate_80688708 (0x80688708) ===
undefined4 * Config_validate_80688708(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != (void *)0) {
    if (param_1 != (void *)0) {
      *param_1 = 0;
      iVar2 = iRam00000000;
      bVar1 = iRam00000000 != 0;
      if ((bVar1) && (iRam00000000 = 0, bVar1)) {
        Config_validate_8068580c(iVar2,0xffffffff);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === data_Config_806887b4 (0x806887b4) ===
uint data_Config_806887b4(int param_1)

{
  return (*(uint *)(param_1 * 0x74 + 0x28) & 0xff) + 2 & 0xff;
}

// === data_Config_80688800 (0x80688800) ===
uint data_Config_80688800(int param_1,int param_2)

{
  if (param_2 == 1) {
    return 3;
  }
  if (param_2 == 2) {
    return (*(uint *)(param_1 * 0x74 + 0x28) & 0xff) + 2 & 0xff;
  }
  if (param_2 == 3) {
    return 0x14;
  }
  if (param_2 != 4) {
    if (param_2 == 5) {
      return 5;
    }
    if (param_2 != 6) {
      if (param_2 != 7) {
        return 0;
      }
      return 0x14;
    }
    return 4;
  }
  return 5;
}

// === data_Config_80688898 (0x80688898) ===
void data_Config_80688898(undefined4 param_1)

{
  Config_assertFail_8068b0d4(param_1,0,0,0,0,0,0,0,0);
  return;
}

// === Config_validate_806888e0 (0x806888e0) ===
void Config_validate_806888e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined auStack_38 [12];
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_c;
  
  if (auStack_38 != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*param_2,auStack_38);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_2c = *puVar1;
  local_1c = puVar1[1];
  local_c = puVar1[2];
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,*param_2);
}

// === data_Config_80688950 (0x80688950) ===
void data_Config_80688950(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000000;
  param_1[0x1d] = 0;
  *param_1 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = uVar1;
  param_1[0x37] = uVar1;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  param_1[0x3a] = uVar1;
  param_1[0x3b] = uVar1;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  return;
}

// === data_Config_806889b4 (0x806889b4) ===
void data_Config_806889b4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x9c) != (int *)0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0xc))();
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,(*(uint *)(param_1 + 0x78) & 0x10000) == 0);
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) =
           *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) | 0x21212121;
    }
  }
  else {
    data_Config_806779c0(*(undefined4 *)(param_1 + 0xa4));
  }
  return;
}

// === data_Config_80688a90 (0x80688a90) ===
void data_Config_80688a90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,1);
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,1);
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,(*(uint *)(param_1 + 0x78) & 0x10000) == 0);
  }
  data_Config_806779c0(*(undefined4 *)(param_1 + 0xa4));
  return;
}

// === Config_validate_80688b30 (0x80688b30) ===
void Config_validate_80688b30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined uVar3;
  bool bVar4;
  
  bVar4 = false;
  if ((*(int *)(param_1 + 4) == 2) && (iRam00000000._0_1_ != 0)) {
    bVar4 = true;
  }
  if (bVar4) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_segment_0__8044d640(*(int *)(param_1 + 0x9c),6);
    }
  }
  else if (*(char *)(*(int *)(param_1 + 4) * 0x74 + 0x70) != 0) {
    if (*(int *)(iRam00000000 + 0x34) == -0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0,0xcf,0);
    }
    if (*(short *)(*(int *)(iRam00000000 + 0x34) + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (*(int *)(param_1 + 0x9c) != 0) {
        if ((*(uint *)(param_1 + 0x78) & 0x8000) == 0) {
          iVar2 = FUN_segment_0__8047ecb0
                            (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(param_1 + 0x6c) * 0x248
                            );
          uVar3 = *(undefined *)(iVar2 + 0x21);
        }
        else {
          uVar3 = 0;
        }
        FUN_segment_0__8044d640(*(undefined4 *)(param_1 + 0x9c),uVar3);
      }
    }
    else {
      uVar1 = FUN_segment_0__80455350();
      *(undefined4 *)(param_1 + 0xac) = uVar1;
      if (*(int *)(param_1 + 0x9c) != 0) {
        FUN_segment_0__8044efd4(*(int *)(param_1 + 0x9c),uVar1);
      }
      if ((*(uint *)(param_1 + 0x78) & 0x8000) == 0) {
        uVar1 = FUN_segment_0__8047ecb0
                          (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(param_1 + 0x6c) * 0x248);
        FUN_segment_0__8045051c(*(undefined4 *)(param_1 + 0xac),uVar1);
      }
      else {
        FUN_segment_0__80450368(*(undefined4 *)(param_1 + 0xac),0,1);
      }
    }
  }
  return;
}

// === data_Config_80688d50 (0x80688d50) ===
undefined4 data_Config_80688d50(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,(*(uint *)(param_1 + 0x78) & 0x10000) == 0);
  }
  *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) =
       *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) | 0x21212121;
  return 2;
}

// === data_Config_80688e04 (0x80688e04) ===
void data_Config_80688e04(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,(*(uint *)(param_1 + 0x78) & 0x10000) == 0);
  }
  *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) =
       *(uint *)(*(int *)(param_1 + 0xa4) + 0x20) | 0x21212121;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_segment_0__80455360();
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}

// === data_Config_80688ec8 (0x80688ec8) ===
void data_Config_80688ec8
               (int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined param_6
               )

{
  code *pcVar1;
  
  if (param_4 == 0) {
    if (param_5 == 0) {
      pcVar1 = *(code **)(param_2 * 0x74 + 0x24);
    }
    else {
      pcVar1 = (void (*)(void))0;
    }
  }
  else {
    pcVar1 = (void (*)(void))0;
  }
  *(undefined *)(param_1 + 0x6c) = param_6;
  Config_validate_80689688(param_1);
  (*pcVar1)(param_3,param_1,0);
  Config_assertFail_80689420(param_1);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  return;
}

// === data_Config_80688f78 (0x80688f78) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80688f78(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x48);
  if (fRam00000008 < fVar1) {
    fVar1 = fRam00000008;
  }
  iVar7 = *(int *)(param_1 + 4) * 0x74;
  *(float *)(param_1 + 0x68) = fVar1;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
  *(float *)(param_1 + 100) = fVar1;
  *(float *)(param_1 + 0x60) = fVar1;
  uVar5 = uRam00000000;
  *(float *)(param_1 + 0x5c) = fVar1;
  uVar4 = uRam00000004;
  fVar2 = *(float *)(iVar7 + 0x38);
  fVar3 = fVar1 * *(float *)(iVar7 + 0x40);
  *(float *)(param_1 + 0xb8) = fVar3;
  *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
  *(float *)(*(int *)(param_1 + 0xa4) + 4) = fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34)
  ;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar4;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  FUN_segment_0__806a30bc(param_1 + 0xd4);
  uVar4 = uRam0000000c;
  uVar5 = uRam00000000;
  *(undefined4 *)(param_1 + 0xe0) = uRam00000000;
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0x128) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = uVar4;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 300) = uVar5;
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar5 = FUN_segment_0__8047d97c(uRam00000000,*(undefined *)(param_1 + 0x6c));
  FUN_segment_0__8047e510(uVar5,&local_20);
  *(undefined4 *)(param_1 + 0x38) = local_20;
  *(undefined4 *)(param_1 + 0x3c) = local_1c;
  uVar4 = uRam00000004;
  uVar5 = uRam00000000;
  *(undefined4 *)(param_1 + 0x40) = local_18;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  uVar4 = uRam00000004;
  uVar5 = uRam00000000;
  if ((1 << (*(uint *)(param_1 + 4) & 0x3f) & 0x23U) != 0) {
    if (fRam00000014 <= *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x3c)) {
      *(undefined4 *)(param_1 + 0x38) = uRam00000000;
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      FUN_segment_0__8069f414(param_1 + 0x10,param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x140) = uRam00000000;
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_segment_0__806a2df4();
      }
      *(undefined2 *)(param_1 + 0x15c) = 5;
      *(undefined2 *)(param_1 + 0x15e) = 0;
      iVar7 = FUN_segment_0__806b841c(*(uint *)(param_1 + 0x78) >> 0x19 & 1);
      iVar6 = *(int *)(param_1 + 4) * 0x74;
      *(int *)(param_1 + 0x160) = iVar7 + -1;
      local_2c = *(undefined4 *)(iVar6 + 0x18);
      local_28 = *(undefined4 *)(iVar6 + 0x1c);
      local_24 = *(undefined4 *)(iVar6 + 0x20);
      if ((*(uint *)(param_1 + 0x78) & 0xc0) == 0) {
        *(undefined4 *)(param_1 + 0x168) = local_2c;
        *(undefined4 *)(param_1 + 0x16c) = local_28;
        *(undefined4 *)(param_1 + 0x170) = local_24;
      }
      if ((((*(uint *)(param_1 + 0x78) & 0xe00000) == 0) &&
          (iVar7 = *(int *)(param_1 + 4) * 0x74, *(char *)(iVar7 + 0x2c) == 0)) &&
         (*(int *)(param_1 + 0xb0) == 0)) {
        uVar5 = data_Config_80675cd4
                          ((double)(*(float *)(iVar7 + 0x48) * *(float *)(iVar7 + 0x40)),
                           (double)fRam00000018,uRam00000000,param_1 + 0x44,1,param_1);
        *(undefined4 *)(param_1 + 0xb0) = uVar5;
        *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x1000;
      }
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = uRam00000000;
    local_38 = *(undefined4 *)(param_1 + 0x38);
    local_34 = *(undefined4 *)(param_1 + 0x3c);
    local_30 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
    data_Config_80676f30(param_1 + 0x38,&local_38);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80689284 (0x80689284) ===
void data_Config_80689284(undefined4 param_1)

{
  data_Config_80688f78();
  FUN_segment_0__80692278(param_1);
  return;
}

// === Config_validate_806892b8 (0x806892b8) ===
void Config_validate_806892b8(int *param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  param_1[1] = param_4;
  *(undefined2 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 10) = param_3;
  (**(code **)(*param_1 + 0xc))();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xac);
}

// === data_Config_80689394 (0x80689394) ===
void data_Config_80689394(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  return;
}

// === Config_assertFail_80689420 (0x80689420) ===
void Config_assertFail_80689420(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_806895e4 (0x806895e4) ===
void data_Config_806895e4
               (int param_1,undefined4 param_2,undefined param_3,undefined4 *param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  *(undefined4 *)(param_1 + 0x44) = *param_4;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined *)(param_1 + 0x6c) = param_3;
  *(undefined *)(param_1 + 0x6d) = 0xc;
  Config_validate_80689688();
  Config_assertFail_80689420(param_1);
  if ((*(uint *)(param_1 + 0x78) & 0x1000000) == 0) {
    data_Config_8068b84c((double)g_Ram_float,param_1,0);
  }
  else {
    Config_validate_8068bd68(param_1,0);
  }
  uVar3 = data_Config_80685d54(param_1,param_5);
  *(undefined2 *)(param_1 + 0xc) = uVar3;
  return;
}

// === Config_validate_80689688 (0x80689688) ===
void Config_validate_80689688(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = iRam00000020;
  iVar8 = iRam0000001c;
  iVar7 = iRam00000000;
  param_1[1] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)((int)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = iVar8;
  param_1[0x19] = iVar8;
  param_1[0x18] = iVar8;
  param_1[0x17] = iVar8;
  param_1[0x50] = iVar7;
  param_1[0x2d] = iVar1;
  param_1[0x2e] = iVar1;
  FUN_segment_0__806a30bc(param_1 + 0x35);
  iVar8 = iRam0000000c;
  iVar7 = iRam00000000;
  param_1[0x38] = iRam00000000;
  param_1[0x37] = iVar7;
  param_1[0x36] = iVar7;
  param_1[0x3b] = iVar7;
  param_1[0x3a] = iVar7;
  param_1[0x39] = iVar7;
  param_1[0x4a] = iVar8;
  param_1[0x49] = iVar8;
  param_1[0x48] = iVar8;
  param_1[0x4b] = iVar7;
  param_1[0x4e] = 0;
  *(undefined2 *)((int)param_1 + 0x15e) = 0;
  *(undefined2 *)(param_1 + 0x57) = 5;
  iVar7 = iRam00000000;
  param_1[0x5e] = iRam00000004;
  param_1[0x5d] = iVar7;
  param_1[0x5f] = iRam00000008;
  param_1[0x26] = (int)(param_1 + 0x11);
  *(int **)param_1[0x29] = param_1 + 0x11;
  param_1[0x2c] = 0;
  *(undefined *)(param_1 + 0x4f) = 0xc;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  if (param_1[0x4d] != 0) {
    FUN_segment_0__806a2df4();
  }
  iVar4 = iRam00000004;
  iVar3 = iRam00000000;
  iVar7 = param_1[0x11];
  iVar8 = param_1[0x12];
  iVar1 = param_1[0x13];
  param_1[0x2f] = iVar7;
  param_1[0x30] = iVar8;
  param_1[0x31] = iVar1;
  param_1[0x20] = iVar7;
  param_1[0x21] = iVar8;
  param_1[0x22] = iVar1;
  param_1[0x23] = iVar7;
  param_1[0x24] = iVar8;
  param_1[0x25] = iVar1;
  param_1[8] = iVar4;
  param_1[9] = iVar3;
  param_1[10] = iVar3;
  param_1[0xb] = iVar3;
  param_1[0xc] = iVar4;
  param_1[0xd] = iVar3;
  param_1[0xe] = iVar3;
  param_1[0xf] = iVar3;
  param_1[0x10] = iVar4;
  FUN_segment_0__8069f414(param_1 + 4,param_1 + 8);
  if (iRam00000000._0_1_ != 0) {
    param_1[0x1f] = param_1[0x1f] | 0x20;
  }
  iVar7 = 0;
  param_1[0x1e] = param_1[0x1e] | 0x20000;
  iVar8 = 0;
  param_1[0x2b] = 0;
  param_1[0x1f] = param_1[0x1f] & 0xfffffff7;
  while( true ) {
    if (param_1[0x27] != 0) {
      bVar2 = true;
      puVar5 = *(undefined4 **)(param_1[0x27] + iVar8 + 0x14);
      iVar7 = puVar5[1];
      if ((iVar7 != 0) && (iVar7 != 1)) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar6 = *puVar5;
      }
      else {
        uVar6 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(uVar6,2);
    }
    if (param_1[0x2a] != 0) break;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
    if (1 < iVar7) {
      (**(code **)(*param_1 + 0x18))(param_1);
      *(undefined *)(param_1 + 0x61) = 0;
      return;
    }
  }
  bVar2 = true;
  puVar5 = *(undefined4 **)(param_1[0x2a] + iVar8 + 0x14);
  iVar7 = puVar5[1];
  if ((iVar7 != 0) && (iVar7 != 1)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar6 = *puVar5;
  }
  else {
    uVar6 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar6,2);
}

// === data_Config_80689918 (0x80689918) ===
void data_Config_80689918(int *param_1)

{
  if (param_1[0x2c] != 0) {
    data_Config_806761e8(uRam00000000,param_1 + 0x2c);
    param_1[0x1f] = param_1[0x1f] | 0x40000;
  }
  param_1[0x1d] = param_1[0x1d] | 4;
  (**(code **)(*param_1 + 0x2c))(param_1);
  return;
}

// === Config_validate_80689988 (0x80689988) ===
void Config_validate_80689988(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffff7;
  while( true ) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      bVar1 = true;
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x9c) + iVar5 + 0x14);
      iVar4 = puVar2[1];
      if ((iVar4 != 0) && (iVar4 != 1)) {
        bVar1 = false;
      }
      if (bVar1) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(uVar3,2);
    }
    if (*(int *)(param_1 + 0xa8) != 0) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
    if (1 < iVar4) {
      return;
    }
  }
  bVar1 = true;
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xa8) + iVar5 + 0x14);
  iVar4 = puVar2[1];
  if ((iVar4 != 0) && (iVar4 != 1)) {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar3,2);
}

// === data_Config_80689aec (0x80689aec) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80689aec(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x90);
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80689cd8 (0x80689cd8) ===
double data_Config_80689cd8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 4) * 0x74;
    fVar1 = *(float *)(iVar2 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_1 + 4) * 0x74;
    fVar1 = *(float *)(iVar2 + 0x3c);
  }
  return (double)(*(float *)(iVar2 + 0x48) * fVar1);
}

// === data_Config_80689db0 (0x80689db0) ===
undefined4 data_Config_80689db0(double param_1,double param_2,int param_3)

{
  float fVar1;
  
  if ((double)*(float *)(param_3 + 0x68) < param_1) {
    fVar1 = (float)((double)*(float *)(param_3 + 0x68) + param_2);
    *(float *)(param_3 + 0x68) = fVar1;
    if (param_1 < (double)fVar1) {
      *(float *)(param_3 + 0x68) = (float)param_1;
    }
    return 1;
  }
  return 0;
}

// === data_Config_80689de0 (0x80689de0) ===
void data_Config_80689de0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 4) * 0x74;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
  *(float *)(param_1 + 100) = fVar1;
  *(float *)(param_1 + 0x60) = fVar1;
  *(float *)(param_1 + 0x5c) = fVar1;
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar3 = fVar1 * *(float *)(iVar4 + 0x40);
  *(float *)(param_1 + 0xb8) = fVar3;
  *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
  *(float *)(*(int *)(param_1 + 0xa4) + 4) = fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34)
  ;
  return;
}

// === data_Config_80689e48 (0x80689e48) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_80689e48(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_80689ec4 (0x80689ec4) ===
void data_Config_80689ec4(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 4) * 0x74;
    fVar1 = *(float *)(iVar2 + 0x40);
  }
  else {
    iVar2 = *(int *)(param_1 + 4) * 0x74;
    fVar1 = *(float *)(iVar2 + 0x3c);
  }
  uVar3 = data_Config_80675cd4
                    ((double)(*(float *)(iVar2 + 0x48) * fVar1),(double)g_Ram_float,g_Ram_float,
                     param_1 + 0x44,1,param_1);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  return;
}

// === data_Config_80689f60 (0x80689f60) ===
void data_Config_80689f60(int param_1)

{
  data_Config_806761e8(uRam00000000,param_1 + 0xb0);
  return;
}

// === Config_validate_80689f74 (0x80689f74) ===
void Config_validate_80689f74(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 8;
  while( true ) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      bVar1 = true;
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x9c) + iVar5 + 0x14);
      iVar4 = puVar2[1];
      if ((iVar4 != 0) && (iVar4 != 1)) {
        bVar1 = false;
      }
      if (bVar1) {
        uVar3 = *puVar2;
      }
      else {
        uVar3 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(uVar3,2);
    }
    if (*(int *)(param_1 + 0xa8) != 0) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
    if (1 < iVar4) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4c);
      return;
    }
  }
  bVar1 = true;
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0xa8) + iVar5 + 0x14);
  iVar4 = puVar2[1];
  if ((iVar4 != 0) && (iVar4 != 1)) {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar3,2);
}

// === Config_validate_8068a080 (0x8068a080) ===
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Config_validate_8068a080(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  bool bVar11;
  
  bVar8 = false;
  bVar9 = false;
  bVar11 = false;
  uVar10 = *(uint *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((uVar10 & 0x20) != 0) {
    if (((uVar10 & 1) == 0) || ((*(uint *)(param_1 + 0x78) & 0x38000000) != 0)) {
      bVar8 = true;
    }
    if (bVar8) {
      bVar9 = true;
    }
  }
  if ((bVar9) && ((uVar10 & 0x12) == 0)) {
    bVar11 = true;
  }
  if ((bVar11) &&
     ((iVar6 = FUN_segment_0__806b841c(*(uint *)(param_1 + 0x78) >> 5 & 1),
      *(int *)(param_1 + 0x160) - iVar6 == -1 ||
      (((*(uint *)(param_1 + 0x78) & 0xe00000) != 0 && (*(int *)(param_1 + 0x160) == 1)))))) {
    data_Config_8068e254(param_1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x100) != 0) {
    data_Config_8068a9c8(param_1);
  }
  if (*(short *)(param_1 + 0x15c) < 6) {
    *(short *)(param_1 + 0x15c) = *(short *)(param_1 + 0x15c) + 1;
  }
  if ((*(uint *)(param_1 + 0x78) & 8) == 0) {
    FUN_segment_0__806a30bc(param_1 + 0xd4);
  }
  if ((*(uint *)(param_1 + 0x78) & 0x400) != 0) goto LAB_segment_0__8068a52c;
  if (g_Ram_float != *(float *)(param_1 + 0x140)) {
    fVar1 = *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x44);
    if (fVar1 <= *(float *)(param_1 + 0x68)) {
      bVar11 = false;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x68) + fRam00000028;
      *(float *)(param_1 + 0x68) = fVar2;
      if (fVar1 < fVar2) {
        *(float *)(param_1 + 0x68) = fVar1;
      }
      bVar11 = true;
    }
    if (bVar11) {
      fVar1 = *(float *)(param_1 + 0x68);
      iVar6 = *(int *)(param_1 + 4) * 0x74;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
      *(float *)(param_1 + 100) = fVar1;
      *(float *)(param_1 + 0x60) = fVar1;
      *(float *)(param_1 + 0x5c) = fVar1;
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = fVar1 * *(float *)(iVar6 + 0x40);
      *(float *)(param_1 + 0xb8) = fVar3;
      *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
      *(float *)(*(int *)(param_1 + 0xa4) + 4) =
           fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34);
      goto LAB_segment_0__8068a52c;
    }
  }
  if ((*(uint *)(param_1 + 0x78) & 0xc) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x2000000) == 0) {
      iVar6 = *(int *)(param_1 + 4) * 0x74;
      fVar1 = *(float *)(iVar6 + 0x50);
    }
    else {
      iVar6 = *(int *)(param_1 + 4) * 0x74;
      fVar1 = *(float *)(iVar6 + 0x4c);
    }
    fVar2 = *(float *)(iVar6 + 0x48);
    if (fVar2 <= *(float *)(param_1 + 0x68)) {
      bVar11 = false;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x68) + fVar1;
      *(float *)(param_1 + 0x68) = fVar1;
      if (fVar2 < fVar1) {
        *(float *)(param_1 + 0x68) = fVar2;
      }
      bVar11 = true;
    }
    if (bVar11) {
      fVar1 = *(float *)(param_1 + 0x68);
      iVar6 = *(int *)(param_1 + 4) * 0x74;
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
      *(float *)(param_1 + 100) = fVar1;
      *(float *)(param_1 + 0x60) = fVar1;
      *(float *)(param_1 + 0x5c) = fVar1;
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar3 = fVar1 * *(float *)(iVar6 + 0x40);
      *(float *)(param_1 + 0xb8) = fVar3;
      *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
      *(float *)(*(int *)(param_1 + 0xa4) + 4) =
           fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34);
    }
    goto LAB_segment_0__8068a52c;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x48);
  if (fVar1 <= *(float *)(param_1 + 0x68)) {
    bVar11 = false;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x68) + fRam0000002c;
    *(float *)(param_1 + 0x68) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x68) = fVar1;
    }
    bVar11 = true;
  }
  fVar1 = _DAT_00000034;
  bVar8 = false;
  if ((_DAT_00000030 < *(float *)(param_1 + 0x140)) && (*(float *)(param_1 + 0x140) < _DAT_00000034)
     ) {
    bVar8 = true;
  }
  if (bVar8) {
    bVar8 = false;
    fVar2 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x60);
    if ((_DAT_00000030 < fVar2) && (fVar2 < _DAT_00000034)) {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_segment_0__8068a308;
    bVar8 = false;
    *(float *)(param_1 + 0x140) = g_Ram_float;
  }
  else {
LAB_segment_0__8068a308:
    fVar2 = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
    fVar3 = fRam0000003c;
    if (fVar2 < fVar1) {
      fVar2 = fVar1;
    }
    iVar6 = *(int *)(param_1 + 4) * 0x74;
    bVar8 = true;
    fVar1 = fRam00000038 * (*(float *)(param_1 + 0x68) - fVar2);
    fVar4 = fRam00000040 * *(float *)(param_1 + 0x68) - fVar2;
    *(float *)(param_1 + 0x60) = fVar2;
    *(float *)(param_1 + 0x5c) = fVar4;
    *(float *)(param_1 + 100) = fVar4;
    *(float *)(param_1 + 0x140) = fVar3 * (*(float *)(param_1 + 0x140) + fVar1);
    fVar1 = *(float *)(iVar6 + 0x38);
    fVar4 = fVar4 * *(float *)(iVar6 + 0x40);
    *(float *)(param_1 + 0xb8) = fVar4;
    *(float *)(param_1 + 0xb4) = fVar2 * fVar1;
    *(float *)(*(int *)(param_1 + 0xa4) + 4) =
         fVar4 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34);
  }
  if ((!bVar8) && (bVar11)) {
    fVar1 = *(float *)(param_1 + 0x68);
    iVar6 = *(int *)(param_1 + 4) * 0x74;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
    *(float *)(param_1 + 100) = fVar1;
    *(float *)(param_1 + 0x60) = fVar1;
    *(float *)(param_1 + 0x5c) = fVar1;
    fVar2 = *(float *)(iVar6 + 0x38);
    fVar3 = fVar1 * *(float *)(iVar6 + 0x40);
    *(float *)(param_1 + 0xb8) = fVar3;
    *(float *)(param_1 + 0xb4) = fVar1 * fVar2;
    *(float *)(*(int *)(param_1 + 0xa4) + 4) =
         fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34);
  }
LAB_segment_0__8068a52c:
  if (((*(uint *)(param_1 + 0x7c) & 1) != 0) || ((*(uint *)(param_1 + 0x7c) & 8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x168);
  }
  Config_assertFail_8068d644(param_1);
  if ((*(uint *)(param_1 + 0x74) & 4) == 0) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      if ((*(uint *)(param_1 + 0x78) & 8) == 0) {
        if (param_2 == 0) {
          data_Config_806763e4(g_Ram_float,*(undefined4 *)(param_1 + 0xb0),0xe);
        }
        data_Config_8068cd28(param_1);
        data_Config_8068cf6c(param_1);
      }
      else if (*(int *)(param_1 + 4) == 9) {
        if (param_2 == 0) {
          data_Config_806763e4(g_Ram_float,*(undefined4 *)(param_1 + 0xb0),0xc);
        }
        data_Config_8068cf6c(param_1);
      }
    }
    if (((*(uint *)(param_1 + 0x78) & 8) != 0) || ((*(uint *)(param_1 + 0xd4) & 0x20e80fff) != 0)) {
      *(undefined2 *)(param_1 + 0x15c) = 0;
      if (((((*(uint *)(param_1 + 0x138) & 0x400) != 0) ||
           (((*(uint *)(param_1 + 0xd4) & 0x400) != 0 && ((*(uint *)(param_1 + 0x74) & 0x20) == 0)))
           ) && (*(short *)(param_1 + 0x15e) == 0)) && (*(int *)(param_1 + 4) != 9)) {
        if ((*(uint *)(param_1 + 0x78) & 8) == 0) {
          *(undefined2 *)(param_1 + 0x15e) = 0x3c;
        }
        else {
          *(undefined2 *)(param_1 + 0x15e) = 0xb4;
        }
      }
      if (((((*(uint *)(param_1 + 0x138) & 0x20e80dff) == 0) &&
           ((*(uint *)(param_1 + 0xd4) & 0x20e80dff) == 0)) && (*(short *)(param_1 + 0x15e) == 0))
         && ((*(int *)(param_1 + 4) != 9 && ((*(uint *)(param_1 + 0x78) & 8) != 0)))) {
        *(undefined2 *)(param_1 + 0x15e) = 0xb4;
      }
    }
    if ((((*(short *)(param_1 + 0x15e) != 0) && ((*(uint *)(param_1 + 0x78) & 0xc0) == 0)) &&
        (((*(uint *)(param_1 + 0x78) & 8) != 0 || ((*(uint *)(param_1 + 0xd4) & 0x20e80bff) == 0))))
       && (sVar5 = *(short *)(param_1 + 0x15e) + -1, *(short *)(param_1 + 0x15e) = sVar5, sVar5 == 0
          )) {
      FUN_segment_0__80691ca8(param_1,1);
    }
    if (g_Ram_float == (float)(param_1 + 0xd4)) {
      if ((*(uint *)(param_1 + 0xd4) & 0x10000) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_segment_0__806a2fac(param_1 + 0xd4,0x10000);
      }
      if ((iVar6 != 0) && ((*(ushort *)((int)g_Ram_float + 4) & 0x1f) == 4)) {
        FUN_segment_0__80691ca8(param_1,1);
      }
    }
    if (g_Ram_float == (float)(param_1 + 0xd4)) {
      if ((*(uint *)(param_1 + 0xd4) & 0x40000000) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_segment_0__806a2fac(param_1 + 0xd4,0x40000000);
      }
      if ((iVar6 != 0) && ((*(ushort *)((int)g_Ram_float + 4) & 0x1f) == 6)) {
        FUN_segment_0__80691ca8(param_1,1);
      }
    }
    if (((*(float *)(param_1 + 0x48) < g_Ram_float) && (*(int *)(param_1 + 4) != 0xe)) &&
       (*(int *)(param_1 + 4) != 10)) {
      FUN_segment_0__80691ca8(param_1,0);
    }
    if (*(short *)(param_1 + 0x15c) < 5) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffffdf;
    }
    else {
      bVar11 = *(float *)(param_1 + 0xcc) < fRam00000044;
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x20;
      if ((bVar11) && ((*(uint *)(param_1 + 0x74) & 0x80) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar10 = *(uint *)(param_1 + 0x78);
    iVar6 = *(int *)(param_1 + 0x160) + 1;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x160) = iVar6;
    if ((uVar10 & 0x20000) != 0) {
      if ((uVar10 & 0x80000) == 0) {
        if ((uVar10 & 0x40000) == 0) {
          if (0x1e < iVar6) {
            *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffdffff;
          }
        }
        else if ((0xf < iVar6) && ((uVar10 & 0x20) == 0)) {
          *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffdffff;
        }
      }
      else if (7 < iVar6) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffdffff;
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

// === Config_assertFail_8068a948 (0x8068a948) ===
void Config_assertFail_8068a948(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x2c);
}

// === Config_validate_8068a988 (0x8068a988) ===
int Config_validate_8068a988(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_8068a9c8 (0x8068a9c8) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068a9c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068ae18 (0x8068ae18) ===
undefined4 data_Config_8068ae18(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (g_Ram_float != *(float *)(param_1 + 0x140)) {
    iVar4 = *(int *)(param_1 + 4) * 0x74;
    fVar2 = *(float *)(param_1 + 0x60) +
            fRam00000038 * (*(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x60));
    fVar3 = fRam00000040 * *(float *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x40;
    *(float *)(param_1 + 0x60) = fVar2;
    fVar3 = fVar3 - fVar2;
    *(float *)(param_1 + 0x5c) = fVar3;
    *(float *)(param_1 + 100) = fVar3;
    fVar1 = *(float *)(iVar4 + 0x38);
    fVar3 = fVar3 * *(float *)(iVar4 + 0x40);
    *(float *)(param_1 + 0xb8) = fVar3;
    *(float *)(param_1 + 0xb4) = fVar2 * fVar1;
    *(float *)(*(int *)(param_1 + 0xa4) + 4) =
         fVar3 * *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x34);
    return 1;
  }
  return 0;
}

// === Config_validate_8068aec4 (0x8068aec4) ===
/* WARNING: Removing unreachable block (ram,0x8068af1c) */

void Config_validate_8068aec4(int param_1)

{
  if ((300 < *(int *)(param_1 + 0x160)) && ((*(uint *)(param_1 + 0x78) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x168,0);
  }
  return;
}

// === Config_validate_8068af48 (0x8068af48) ===
undefined4 Config_validate_8068af48(int param_1)

{
  if ((300 < *(int *)(param_1 + 0x160)) && ((*(uint *)(param_1 + 0x78) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x168,0);
  }
  return 0;
}

// === data_Config_8068afa8 (0x8068afa8) ===
undefined4 data_Config_8068afa8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*(uint *)(param_1 + 0x7c) & 0x40) == 0) && ((*(uint *)(param_1 + 0x78) & 4) != 0)) &&
     (*(char *)(*(int *)(param_1 + 4) * 0x74 + 0x58) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

// === data_Config_8068aff0 (0x8068aff0) ===
void data_Config_8068aff0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  Config_assertFail_8068b0d4(param_1,0,param_2,param_3,0,param_4,param_5,0,param_6);
  return;
}

// === data_Config_8068b038 (0x8068b038) ===
void data_Config_8068b038(void)

{
  Config_assertFail_8068b0d4();
  return;
}

// === data_Config_8068b070 (0x8068b070) ===
void data_Config_8068b070
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  Config_assertFail_8068b0d4(param_1,0,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}

// === Config_assertFail_8068b0d4 (0x8068b0d4) ===
void Config_assertFail_8068b0d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8068b414 (0x8068b414) ===
void Config_assertFail_8068b414(void)

{
  if (*(int *)(iRam00000000 + 0xb74) == 6) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x4c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === data_Config_8068b664 (0x8068b664) ===
void data_Config_8068b664(int param_1)

{
  if ((*(uint *)(param_1 + 0x78) & 0x1000000) != 0) {
    Config_validate_8068bd68(param_1,0);
    return;
  }
  data_Config_8068b84c((double)g_Ram_float,param_1,0);
  return;
}

// === Config_validate_8068b688 (0x8068b688) ===
void Config_validate_8068b688(int param_1)

{
  int iVar1;
  undefined auStack_48 [56];
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x9c) + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0xc,auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48);
}

// === data_Config_8068b84c (0x8068b84c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068b84c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8068bafc (0x8068bafc) ===
void Config_validate_8068bafc(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float local_28;
  float local_24;
  float local_20;
  
  local_20 = *(float *)(*(int *)(param_1 + 4) * 0x74 + 0x6c);
  local_28 = *(float *)(param_1 + 0x5c) * local_20;
  local_20 = *(float *)(param_1 + 100) * local_20;
  local_24 = *(float *)(param_1 + 0x60);
  if ((*(uint *)(param_1 + 0x7c) & 8) != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x8000) == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x6c);
    }
    else {
      uVar1 = 0xc;
    }
    bVar2 = false;
    iVar3 = *(int *)((int)g_Ram_float + uVar1 * 4 + 0x10);
    if ((0 < *(int *)(iVar3 + 0x6dc)) && ((param_1 == 0 || (param_1 == *(int *)(iVar3 + 0x6e0))))) {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = g_Ram_float;
      local_24 = g_Ram_float;
      local_20 = g_Ram_float;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xa0) + 0x14))(*(int **)(param_1 + 0xa0),&local_28);
  if ((*(uint *)(param_1 + 0x78) & 0x4000) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x48);
  }
  bVar2 = false;
  if ((((*(uint *)(param_1 + 0x7c) & 0x40) == 0) && ((*(uint *)(param_1 + 0x78) & 4) != 0)) &&
     (*(char *)(*(int *)(param_1 + 4) * 0x74 + 0x58) == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_2);
  }
  if ((((*(uint *)(param_1 + 0x78) & 0x4000000) != 0) && ((*(uint *)(param_1 + 0x78) & 8) == 0)) &&
     (*(float *)(param_2 + 0x24) < fRam00000054)) {
    if (g_Ram_float <
        *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
        *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    FUN_segment_0__806c0b80(param_2);
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar3 = 0;
  do {
    if (**(int **)(iVar4 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(**(int **)(iVar4 + 0x14),0,param_2);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 2);
  return;
}

// === Config_validate_8068bd68 (0x8068bd68) ===
void Config_validate_8068bd68(int param_1)

{
  undefined auStack_48 [56];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48,param_1 + 0x10);
}

// === data_Config_8068bebc (0x8068bebc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068bebc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068c108 (0x8068c108) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068c108(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068c2f0 (0x8068c2f0) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068c2f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068c568 (0x8068c568) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068c568(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068c714 (0x8068c714) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068c714(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068c8f8 (0x8068c8f8) ===
void data_Config_8068c8f8(float *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  dVar2 = (double)Config_validate_8068c980(&local_18);
  if ((double)g_Ram_float < dVar2) {
    dVar3 = (double)g_Ram_float;
    fVar1 = param_2[2];
    *param_1 = *param_2 * (float)(dVar3 / dVar2);
    param_1[2] = fVar1 * (float)(dVar3 / dVar2);
  }
  return;
}

// === Config_validate_8068c980 (0x8068c980) ===
void Config_validate_8068c980(int param_1)

{
  *(undefined4 *)(param_1 + 4) = uRam00000000;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8068c990 (0x8068c990) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068c990(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068cd28 (0x8068cd28) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068cd28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068cf6c (0x8068cf6c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068cf6c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068d304 (0x8068d304) ===
void data_Config_8068d304(int param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(float *)(param_1 + 0x50) * *param_2 + *(float *)(param_1 + 0x58) * param_2[2] <=
      g_Ram_float) {
    dVar3 = (double)fRam00000074;
  }
  else {
    fVar1 = fRam00000074;
    if (g_Ram_float != fRam00000070 - g_Ram_float) {
      fVar1 = fRam00000074 +
              (fRam00000078 * (param_2[1] - g_Ram_float)) / (fRam00000070 - g_Ram_float);
    }
    dVar2 = (double)fVar1;
    dVar3 = (double)fRam00000074;
    if ((dVar3 <= dVar2) && (dVar3 = dVar2, (double)fRam0000007c < dVar2)) {
      dVar3 = (double)fRam0000007c;
    }
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  FUN_segment_0__806c23b4
            ((double)fRam00000070,(double)fRam00000080,dVar3,param_1 + 0x50,param_1 + 0x50,&local_18
            );
  return;
}

// === data_Config_8068d3e0 (0x8068d3e0) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068d3e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068d58c (0x8068d58c) ===
void data_Config_8068d58c(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0xb8);
  fVar2 = param_2[4];
  fVar3 = *param_2;
  fVar4 = param_2[7];
  fVar8 = g_Ram_float * -fVar1;
  fVar5 = param_2[3];
  fVar6 = param_2[6];
  fVar7 = param_2[2];
  *(float *)(param_1 + 0x94) = param_2[0xb] + fVar1 * param_2[8] + fVar8 * param_2[10];
  *(float *)(param_1 + 0x8c) = fVar5 + fVar1 * fVar3 + fVar8 * fVar7;
  *(float *)(param_1 + 0x90) = fVar4 + fVar1 * fVar2 + fVar8 * fVar6;
  return;
}

// === data_Config_8068d604 (0x8068d604) ===
int data_Config_8068d604(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__806b841c(*(uint *)(param_1 + 0x78) >> 5 & 1);
  return (*(int *)(param_1 + 0x160) - iVar1) + 2;
}

// === Config_assertFail_8068d644 (0x8068d644) ===
void Config_assertFail_8068d644(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Config_assertFail_8068db3c (0x8068db3c) ===
void Config_assertFail_8068db3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === data_Config_8068de7c (0x8068de7c) ===
void data_Config_8068de7c(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 4) * 0x74;
  fVar2 = *(float *)(iVar4 + 0x44) *
          (float)((double)g_Ram_float + (double)(float)(param_1 * (double)g_Ram_float));
  *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) | 0x40;
  *(float *)(param_2 + 0x68) = fVar2;
  *(float *)(param_2 + 100) = fVar2;
  *(float *)(param_2 + 0x60) = fVar2;
  *(float *)(param_2 + 0x5c) = fVar2;
  fVar1 = *(float *)(iVar4 + 0x38);
  fVar3 = fVar2 * *(float *)(iVar4 + 0x40);
  *(float *)(param_2 + 0xb8) = fVar3;
  *(float *)(param_2 + 0xb4) = fVar2 * fVar1;
  *(float *)(*(int *)(param_2 + 0xa4) + 4) = fVar3 * *(float *)(*(int *)(param_2 + 4) * 0x74 + 0x34)
  ;
  return;
}

// === data_Config_8068defc (0x8068defc) ===
/* WARNING: Control flow encountered bad instruction data */

undefined4 data_Config_8068defc(int param_1)

{
  if ((*(uint *)(param_1 + 0x78) & 0x1000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

// === data_Config_8068df94 (0x8068df94) ===
void data_Config_8068df94(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_segment_0__805ebcd8(uRam00000000);
  return;
}

// === data_Config_8068dfac (0x8068dfac) ===
void data_Config_8068dfac(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8068dfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x180) + 0xe0))();
  return;
}

// === data_Config_8068dfcc (0x8068dfcc) ===
void data_Config_8068dfcc(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8068dfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x180) + 0xe8))();
  return;
}

// === data_Config_8068e01c (0x8068e01c) ===
void data_Config_8068e01c(int param_1)

{
  if (*(int *)(param_1 + 0x98) != param_1 + 0x80) {
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x88);
  *(int *)(param_1 + 0x98) = param_1 + 0x44;
  return;
}

// === data_Config_8068e050 (0x8068e050) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068e050(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = uRam00000004;
  uVar3 = uRam00000000;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  if ((1 << (*(uint *)(param_1 + 4) & 0x3f) & 0x23U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x3c) < fRam00000014) {
    *(undefined4 *)(param_1 + 0x3c) = uRam00000000;
    local_18 = *(undefined4 *)(param_1 + 0x38);
    local_14 = *(undefined4 *)(param_1 + 0x3c);
    local_10 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
    data_Config_80676f30(param_1 + 0x38,&local_18);
  }
  *(undefined4 *)(param_1 + 0x38) = uRam00000000;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

// === data_Config_8068e158 (0x8068e158) ===
void data_Config_8068e158(int param_1)

{
  FUN_segment_0__806a2ea4(*(undefined4 *)(param_1 + 0x134));
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x10;
  return;
}

// === data_Config_8068e194 (0x8068e194) ===
void data_Config_8068e194(int param_1)

{
  FUN_segment_0__806a2ecc(*(undefined4 *)(param_1 + 0x134));
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x10;
  return;
}

// === data_Config_8068e1d0 (0x8068e1d0) ===
void data_Config_8068e1d0(int param_1)

{
  FUN_segment_0__806a2ef8(*(undefined4 *)(param_1 + 0x134));
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffffef;
  return;
}

// === data_Config_8068e20c (0x8068e20c) ===
void data_Config_8068e20c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x78) & 0x10000000) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x20000000) != 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  data_Config_806808dc
            (*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(param_1 + 0x6c) * 0x248 + 0xb4,param_1,
             uVar1);
  return;
}

// === data_Config_8068e254 (0x8068e254) ===
void data_Config_8068e254(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((param_1[0x1e] & 0xe00000U) == 0) {
    if ((param_1[0x1e] & 0x8000U) == 0) {
      pcVar2 = *(code **)(param_1[1] * 0x74 + 0x24);
      uVar1 = (*pcVar2)(0,param_1,1);
      FUN_segment_0__806b841c((uint)param_1[0x1e] >> 0x19 & 1);
      (*pcVar2)(uVar1,param_1,0);
      param_1[0x1f] = param_1[0x1f] | 0x80;
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    else {
      uVar1 = data_Config_80686540(0,param_1,1);
      if (param_1 != (int *)0) {
        uVar1 = (*(void (*)(void))0)(param_1[1]);
      }
      data_Config_80686540(uVar1,param_1,0);
      param_1[0x1f] = param_1[0x1f] | 0x80;
      (**(code **)(*param_1 + 0x34))(param_1);
    }
  }
  else {
    uVar1 = data_Config_806879f4(0,param_1,1);
    data_Config_806879f4(uVar1,param_1,0);
    param_1[0x1f] = param_1[0x1f] | 0x80;
    thunk_data_Config_80688f78(param_1);
    if ((param_1[0x1e] & 0x200000U) != 0) {
      FUN_segment_0__80691a0c(param_1);
    }
    if ((param_1[0x1e] & 0x400000U) != 0) {
      FUN_segment_0__80691ff8(param_1);
    }
    if ((param_1[0x1e] & 0x800000U) != 0) {
      FUN_segment_0__80692000(param_1);
    }
  }
  param_1[0x1f] = param_1[0x1f] | 2;
  return;
}

// === data_Config_8068e404 (0x8068e404) ===
void data_Config_8068e404(undefined4 param_1,int param_2,int param_3)

{
  data_Config_80686540();
  if ((param_2 != 0) && (param_3 != 0)) {
    (*(void (*)(void))0)(*(undefined4 *)(param_2 + 4));
  }
  return;
}

// === data_Config_8068e474 (0x8068e474) ===
uint data_Config_8068e474(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = uRam00000000 >> 0x18;
  if (uVar1 != 0) {
    uVar1 = (uint)((*(uint *)(param_1 + 0x78) & 0x8000) == 0);
  }
  if (uVar1 != 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x8000) == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x6c);
    }
    else {
      uVar1 = 0xc;
    }
    iVar3 = *(int *)(uRam00000000 + uVar1 * 0xf0 + 0xf4);
    if (iVar3 == 2) {
      uVar1 = 0;
    }
    else {
      iVar2 = *(int *)(uRam00000000 + param_2 * 0xf0 + 0xf4);
      if (iVar2 == 2) {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)(iVar2 == iVar3);
      }
    }
  }
  return uVar1;
}

// === data_Config_8068e5d8 (0x8068e5d8) ===
void data_Config_8068e5d8(int param_1)

{
  FUN_segment_0__806c20c0
            (0x93,(int)*(float *)(param_1 + 0x44),(int)*(float *)(param_1 + 0x48),
             (int)*(float *)(param_1 + 0x4c),*(undefined4 *)(iRam00000000 + 0xb68));
  return;
}

// === data_Config_8068e6dc (0x8068e6dc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068e6dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068e824 (0x8068e824) ===
void data_Config_8068e824(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) * 0x74;
  if ((*(char *)(iVar1 + 0x5a) != 0) && (param_3 == 0)) {
    if (*(char *)(iVar1 + 0x59) != 0) {
      FUN_segment_0__8047dff8(param_2);
      FUN_segment_0__8047e584(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__8047da88(param_2);
    }
    FUN_segment_0__80691f5c(param_1,1);
  }
  return;
}

// === data_Config_8068e904 (0x8068e904) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068e904(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_validate_8068ea28 (0x8068ea28) ===
int Config_validate_8068ea28(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068ea68 (0x8068ea68) ===
int Config_validate_8068ea68(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068eab8 (0x8068eab8) ===
void Config_validate_8068eab8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 << 2);
}

// === Config_validate_8068eb34 (0x8068eb34) ===
int Config_validate_8068eb34(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068eb74 (0x8068eb74) ===
int Config_validate_8068eb74(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068ebb4 (0x8068ebb4) ===
int Config_validate_8068ebb4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068ebf4 (0x8068ebf4) ===
int Config_validate_8068ebf4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === Config_validate_8068ec34 (0x8068ec34) ===
int Config_validate_8068ec34(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === data_Config_8068ec74 (0x8068ec74) ===
bool data_Config_8068ec74(int param_1,int param_2)

{
  bool bVar1;
  
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4040000;
  bVar1 = (*(ushort *)(*(int *)(param_2 + 0xc) + 0xc) & 0x10) == 0;
  if (bVar1) {
    FUN_segment_0__8069c744
              ((double)fRam000000b4,(double)fRam000000b8,(double)fRam000000bc,param_1,param_2,0,0);
  }
  else {
    FUN_segment_0__8069c744
              ((double)fRam000000b4,(double)fRam000000b8,(double)fRam000000bc,param_1,param_2,0,1);
    data_Config_8068dfac((double)g_Ram_float,param_1,0x100);
  }
  return !bVar1;
}

// === data_Config_8068ed14 (0x8068ed14) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068ed14(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068ef0c (0x8068ef0c) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068ef0c(int param_1)

{
  if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
    data_Config_8068ed14();
    return;
  }
  if ((*(uint *)(param_1 + 0x78) & 0x2000000) == 0) {
    FUN_segment_0__8069cbb0((double)fRam000000e0,(double)fRam000000e4,(double)g_Ram_float);
  }
  else {
    FUN_segment_0__8069cbb0((double)fRam000000d8,(double)fRam000000dc,(double)g_Ram_float);
  }
  if (((*(uint *)(param_1 + 0x74) & 8) != 0) && ((*(uint *)(param_1 + 0x74) & 3) == 0)) {
    if ((*(uint *)(param_1 + 0x78) & 0x2000000) != 0) {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * fRam000000e8;
    }
    FUN_segment_0__8069bf50(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068f0a0 (0x8068f0a0) ===
void data_Config_8068f0a0(int param_1)

{
  data_Config_80688f78();
  FUN_segment_0__8069d0e4(param_1,0);
  if (((*(uint *)(param_1 + 0x7c) & 1) != 0) && ((*(uint *)(param_1 + 0x78) & 0x2000000) != 0)) {
    data_Config_8068dfac((double)g_Ram_float,param_1,0x100);
  }
  return;
}

// === data_Config_8068f104 (0x8068f104) ===
void data_Config_8068f104(undefined4 param_1)

{
  if (cRam00000000 == 0) {
    data_Config_8068aff0(param_1,0x10,0x17,0,0,0);
  }
  else {
    data_Config_8068aff0(param_1,0,7,0,0,0);
    Config_assertFail_8068b414(param_1);
  }
  return;
}

// === data_Config_8068f258 (0x8068f258) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068f258(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068f490 (0x8068f490) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068f490(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === data_Config_8068f5e8 (0x8068f5e8) ===
void data_Config_8068f5e8(int param_1)

{
  int iVar1;
  
  if (((*(uint *)(param_1 + 0x74) & 0x10) == 0) || (g_Ram_float != *(float *)(param_1 + 0x1a0))) {
    if ((*(uint *)(param_1 + 0x74) & 8) == 0) {
      return;
    }
    iVar1 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x28),0);
    if (*(short *)(iVar1 + 8) != 4) {
      return;
    }
  }
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,
             *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x28),5);
  return;
}

// === data_Config_8068f674 (0x8068f674) ===
void data_Config_8068f674(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  fVar2 = fRam00000004;
  fVar1 = g_Ram_float;
  iVar3 = *(int *)(param_1 + 0x1c4);
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x400;
  *(float *)(param_1 + 0x140) = fVar1;
  *(float *)(param_1 + 0x5c) = fVar2;
  *(float *)(param_1 + 0x60) = fVar2;
  *(float *)(param_1 + 100) = fVar2;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0xc))(*(int **)(param_1 + 0x1d4),1);
  data_Config_806779c0(*(undefined4 *)(param_1 + 0xa4));
  local_28 = uRam000000a0;
  local_24 = uRam000000a0;
  local_20 = uRam000000a0;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0x14))(*(int **)(param_1 + 0x1d4),&local_28);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam00000004,
             *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x28),0);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam00000004,
             *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x28),1);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam00000004,
             *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 0x28),iVar3 + 2U & 0xffff);
  data_Config_8068dfac((double)g_Ram_float,param_1,0x109);
  data_Config_8068df94(param_1,0x106);
  fVar1 = g_Ram_float;
  if ((*(uint *)(param_1 + 0x7c) & 0x40) != 0) {
    fVar1 = fRam000000a4;
  }
  data_Config_80676bec
            ((double)(fVar1 * fRam00000454),(double)g_Ram_float,*(undefined4 *)(param_1 + 0xb0));
  return;
}

// === data_Config_8068f7c8 (0x8068f7c8) ===
void data_Config_8068f7c8(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x1b0);
  uVar3 = *(uint *)(param_1 + 0x7c) & 0x40;
  fVar1 = g_Ram_float;
  if (uVar3 != 0) {
    fVar1 = fRam000000a8;
  }
  fVar2 = g_Ram_float;
  if (uVar3 != 0) {
    fVar2 = fRam000000a4;
  }
  iVar4 = data_Config_80689db0((double)fVar2,(double)fVar1,param_1);
  if (iVar4 != 0) {
    data_Config_80689de0(param_1);
  }
  if (uVar5 == 10) {
    data_Config_80678ba4
              ((double)fRam000000ac,g_Ram_float,param_1 + 0x44,param_1 + 0x44,0x28,10,0,0x1e);
  }
  if (0x1d < uVar5) {
    if (uVar5 == 0x1e) {
      *(undefined *)(param_1 + 0x1d8) = 1;
    }
    else if (uVar5 == 0x2a) {
      data_Config_80689f60(param_1);
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x80000;
    }
    if (0x55 < uVar5) {
      data_Config_80680ffc((int)g_Ram_float + *(int *)(param_1 + 4) * 0x24 + 0x48,param_1);
    }
  }
  return;
}

// === Config_validate_8068f8e4 (0x8068f8e4) ===
void Config_validate_8068f8e4(undefined4 *param_1)

{
  float fVar1;
  
  FUN_segment_0__806919bc();
  *(undefined2 *)(param_1 + 0x6a) = 0;
  fVar1 = g_Ram_float;
  param_1[0x6b] = 0xffffffff;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *param_1 = 0;
  param_1[0x69] = 0x38;
  fRam00000004 = g_Ram_float;
  fRam00000008 = fVar1 * fRam00000454 * fVar1 * fRam00000454;
  if (*(int *)((int)fVar1 + 0xb6c) == 1) {
    uRam0000000c = 0x96;
  }
  else if (*(int *)((int)fVar1 + 0xb6c) == 0) {
    uRam0000000c = 0xb4;
  }
  else {
    uRam0000000c = 0x78;
  }
  g_Ram_float = fVar1;
  param_1[0x70] = param_1;
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(6);
}

// === Config_validate_8068fa48 (0x8068fa48) ===
undefined4 Config_validate_8068fa48(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === data_Config_8068faac (0x8068faac) ===
undefined4 data_Config_8068faac(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  
  fVar3 = fRam000000b4;
  fVar2 = fRam000000b0;
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x4040000;
  fVar4 = fRam000000b8;
  fVar2 = fVar2 + fVar3 * *(float *)(param_2 + 0x94);
  *(float *)(param_1 + 0x1d0) = fVar2;
  if (fVar4 < fVar2) {
    *(float *)(param_1 + 0x1d0) = fVar4;
  }
  uVar1 = *(ushort *)(*(int *)(param_2 + 0xc) + 0xc);
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x10) == 0) {
      FUN_segment_0__8069c744
                ((double)fRam000000d0,(double)fRam000000cc,(double)fRam000000c4,param_1,param_2,3,1)
      ;
    }
    else {
      FUN_segment_0__8069c744
                ((double)fRam000000c8,(double)fRam000000cc,(double)fRam000000c4,param_1,param_2,3,1)
      ;
    }
    data_Config_8068dfac((double)g_Ram_float,param_1,0x100);
    uVar5 = 1;
  }
  else {
    dVar7 = (double)fRam000000bc;
    dVar6 = (double)(float)(dVar7 + (double)(*(float *)(param_2 + 0x94) * fRam000000c0));
    if ((dVar7 <= dVar6) && (dVar7 = dVar6, (double)fRam000000c4 < dVar6)) {
      dVar7 = (double)fRam000000c4;
    }
    FUN_segment_0__8069c744((double)fRam000000c8,(double)fRam000000cc,dVar7,param_1,param_2,2,0);
    *(undefined4 *)(param_1 + 0x1dc) = 0x5a;
    uVar5 = 0;
  }
  return uVar5;
}

// === data_Config_8068fbdc (0x8068fbdc) ===
/* WARNING: Control flow encountered bad instruction data */

void data_Config_8068fbdc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Config_assertFail_8068fd70 (0x8068fd70) ===
void Config_assertFail_8068fd70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}
