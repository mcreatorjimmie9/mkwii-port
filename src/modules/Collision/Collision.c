// Collision module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 130 decompiled functions
// Address range: 0x805701c0 - 0x805bcfd0

#include "Collision.h"
#include "../types.h"
#include "../stubs.h"


// === KartCollide_validate_805701c0 (0x805701c0) ===
u32 KartCollide_validate_805701c0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1,0);
  }
  return 0;
}

// === col_KartCollide_80570274 (0x80570274) ===
void col_KartCollide_80570274(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x14)))(piVar1,param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x90) != 0) {
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xc) + 0x14)))(*(int **)(param_1 + 0xc),param_1 + 0x3c);
  }
  return;
}

// === col_KartCollide_805702f4 (0x805702f4) ===
int col_KartCollide_805702f4(int *param_1)

{
  uint uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x24)))();
  return *(int *)(*(int *)(iRam00000000 + 4) + 8) +
         *(short *)(*(int *)(*(int *)(iRam00000000 + 4) + 0xc) + (uVar1 & 0xffff) * 2) * 0x74 + 0x22
  ;
}

// === col_KartCollide_80570348 (0x80570348) ===
int col_KartCollide_80570348(int *param_1)

{
  uint uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x24)))();
  return *(int *)(*(int *)(iRam00000000 + 4) + 8) +
         *(short *)(*(int *)(*(int *)(iRam00000000 + 4) + 0xc) + (uVar1 & 0xffff) * 2) * 0x74 + 0x22
  ;
}

// === col_KartCollide_8057039c (0x8057039c) ===
int col_KartCollide_8057039c(int *param_1)

{
  uint uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x24)))();
  return *(int *)(*(int *)(iRam00000000 + 4) + 8) +
         *(short *)(*(int *)(*(int *)(iRam00000000 + 4) + 0xc) + (uVar1 & 0xffff) * 2) * 0x74 + 2;
}

// === col_KartCollide_80570408 (0x80570408) ===
u32
col_KartCollide_80570408
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x138)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806ab90c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x13c)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570514 (0x80570514) ===
u32
col_KartCollide_80570514
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x140)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806abb00(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x144)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570620 (0x80570620) ===
u32
col_KartCollide_80570620
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x138)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806abcf4(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x13c)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_805707e4 (0x805707e4) ===
u32
col_KartCollide_805707e4
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x140)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806ab414(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x144)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_8057089c (0x8057089c) ===
u32
col_KartCollide_8057089c
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x138)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806ab5ec(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x13c)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570954 (0x80570954) ===
u32
col_KartCollide_80570954
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x140)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806ab77c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x144)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570a0c (0x80570a0c) ===
u32
col_KartCollide_80570a0c
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x138)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aab5c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x13c)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570b08 (0x80570b08) ===
u32
col_KartCollide_80570b08
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x140)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aad38(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x144)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570c04 (0x80570c04) ===
u32
col_KartCollide_80570c04
          (u64 param_1,int *param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6,u32 param_7,u32 param_8)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x138)))(param_2,param_5,param_7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    ((void(*)(...))(*(void**)(*param_2 + 0x124)))(param_2,param_8);
    ((void(*)(...))(*(void**)(*param_2 + 0x120)))(param_2,param_8);
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aaf14(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_2 + 0x13c)))(param_2,param_5,param_7), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570dc8 (0x80570dc8) ===
u32
col_KartCollide_80570dc8
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x140)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aa6ac(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x144)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570e80 (0x80570e80) ===
u32
col_KartCollide_80570e80
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x138)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aa86c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x13c)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570f38 (0x80570f38) ===
u32
col_KartCollide_80570f38
          (int *param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5,
          u32 param_6)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x140)))(param_1,param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__806aa9e4(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if ((iVar1 != 0) &&
       (iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x144)))(param_1,param_4,param_6), iVar1 != 0)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === col_KartCollide_80570ff0 (0x80570ff0) ===
void col_KartCollide_80570ff0(int param_1,int param_2,u32 *param_3)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  FUN_segment_0__80404464(&local_18,param_2 + 8,param_1 + 0x30);
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
  return;
}

// === col_KartCollide_805710dc (0x805710dc) ===
double col_KartCollide_805710dc(int param_1)

{
  return (double)(dRam00000000._0_4_ *
                 (float)((double)CONCAT44(0x43300000,
                                          (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x2e) ^
                                          0x80000000) - dRam00000000));
}

// === KartCollide_validate_80571120 (0x80571120) ===
void KartCollide_validate_80571120(int *param_1)

{
  u32 uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_1 + 0x28)))();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar1,0);
}

// === col_KartCollide_805711b8 (0x805711b8) ===
/* WARNING: Control flow encountered bad instruction data */

void col_KartCollide_805711b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_KartCollide_805712f0 (0x805712f0) ===
void col_KartCollide_805712f0(u64 param_1,int *param_2)

{
  u64 uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_2 + 0xa0)))();
  ((void(*)(...))(*(void**)(*param_2 + 0xe4)))(uVar1,param_1,param_2);
  return;
}

// === col_KartCollide_80571360 (0x80571360) ===
void col_KartCollide_80571360(int *param_1,u32 param_2,u32 param_3)

{
  u32 uVar1;
  
  uVar1 = ((void(*)(...))(*(void**)(*param_1 + 0xb4)))();
  FUN_segment_0__807104f0(param_2,uVar1,param_3);
  return;
}

// === col_KartCollide_805713cc (0x805713cc) ===
void col_KartCollide_805713cc(u32 param_1)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  u32 local_c;
  
  local_10 = uRam00000000;
  local_c = uRam00000004;
  local_18 = uRam00000000;
  local_14 = uRam00000004;
  FUN_segment_0__80701444(param_1,&local_10,&local_18,2,0);
  return;
}

// === KartCollide_validate_80571440 (0x80571440) ===
int KartCollide_validate_80571440(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === KartCollide_assertFail_80571568 (0x80571568) ===
void KartCollide_assertFail_80571568(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartCollide_validate_80571a3c (0x80571a3c) ===
void KartCollide_validate_80571a3c
               (u32 param_1,u32 param_2,u32 param_3,u32 param_4,
               u32 param_5)

{
  u32 auStack_28 [12];
  u32 auStack_1c [16];
  
  FUN_segment_0__80404498(auStack_1c,param_4);
  FUN_segment_0__80404498(auStack_28,param_5,param_3);
  FUN_segment_0__80426d88(param_1,auStack_1c,auStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1);
}

// === KartCollide_assertFail_80571ab0 (0x80571ab0) ===
void KartCollide_assertFail_80571ab0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartCollide_validate_80571d78 (0x80571d78) ===
void KartCollide_validate_80571d78(int param_1)

{
  u32 *puVar1;
  float local_120;
  float local_11c;
  float local_118;
  u32 auStack_114 [220];
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  u32 local_c;
  
  puVar1 = (u32 *)(**(code **)(**(int **)(*(int *)(iRam00000000 + 0x10) + 0x6c) + 8))();
  local_38 = *puVar1;
  local_34 = puVar1[1];
  local_30 = puVar1[2];
  local_2c = puVar1[3];
  local_28 = puVar1[4];
  local_24 = puVar1[5];
  local_20 = puVar1[6];
  local_1c = puVar1[7];
  local_18 = puVar1[8];
  local_14 = puVar1[9];
  local_10 = puVar1[10];
  local_c = puVar1[0xb];
  local_118 = fRam0000001c + *(float *)(param_1 + 0x38);
  local_11c = fRam00000020 + *(float *)(param_1 + 0x34);
  local_120 = fRam00000024 + *(float *)(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_114,&local_38,&local_120);
}

// === KartCollide_validate_80572354 (0x80572354) ===
void KartCollide_validate_80572354(int *param_1)

{
  double dVar1;
  int local_a8;
  int local_a4;
  int local_a0;
  u32 auStack_50 [48];
  u32 local_20;
  uint uStack_1c;
  
  dVar1 = dRam00000000;
  local_20 = 0x43300000;
  uStack_1c = param_1[0x3c] + 1U ^ 0x80000000;
  param_1[0x3c] = param_1[0x3c] + 1U;
  if (ABS((float)param_1[0x34]) < (float)((double)CONCAT44(0x43300000,uStack_1c) - dVar1)) {
    param_1[0x3c] = 0;
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x120)))(param_1);
  KartCollide_assertFail_80571568(param_1);
  if (*(char *)(param_1 + 0x15) == 0) {
    *(u32 *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_a8,param_1 + 0x16);
    param_1[0x12] = local_a8;
    param_1[0x13] = local_a4;
    param_1[0x14] = local_a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,param_1 + 0xf,param_1 + 0x12,param_1 + 0xc);
}

// === KartCollide_validate_805725b8 (0x805725b8) ===
int KartCollide_validate_805725b8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === col_KartCollide_805725f8 (0x805725f8) ===
/* WARNING: Control flow encountered bad instruction data */

void col_KartCollide_805725f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_KartCollide_805733d4 (0x805733d4) ===
/* WARNING: Control flow encountered bad instruction data */

void col_KartCollide_805733d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_KartCollide_805741b0 (0x805741b0) ===
/* WARNING: Control flow encountered bad instruction data */

void col_KartCollide_805741b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_KartCollide_80574f8c (0x80574f8c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_KartCollide_80574f8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Hitbox_validate_805b7240 (0x805b7240) ===
void Hitbox_validate_805b7240(int param_1)

{
  float fVar1;
  float fVar2;
  u16 uVar3;
  int iVar4;
  int iVar5;
  uint local_108 [4];
  u32 local_f8;
  u32 local_f4;
  u32 local_f0;
  u32 local_ec;
  u32 local_e8;
  u32 local_e4;
  u32 local_e0;
  u32 local_dc;
  u32 local_d8;
  u32 auStack_d4 [12];
  float local_c8;
  float local_c4;
  float local_c0;
  u32 auStack_b8 [48];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  float local_40;
  u32 local_30;
  u32 local_28;
  uint uStack_24;
  u32 local_20;
  uint uStack_1c;
  
  local_88 = g_Ram_float;
  *(u32 *)(param_1 + 0x130) = 0;
  local_84 = local_88;
  local_80 = local_88;
  local_7c = local_88;
  local_78 = local_88;
  local_74 = local_88;
  local_30 = 0;
  local_108[0] = 0;
  local_c8 = local_88;
  local_c4 = fRam0000003c;
  local_c0 = local_88;
  FUN_segment_0__80404464(auStack_d4,param_1 + 0x30,&local_c8);
  iVar4 = FUN_segment_0__8067a594
                    ((double)fRam00000038,g_Ram_float,auStack_d4,0,0xeaf8bdff,&local_88,local_108,0
                    );
  if (iVar4 != 0) {
    *(u32 *)(param_1 + 0x130) = 1;
    if (fRam00000060 < local_40) {
      *(u32 *)(param_1 + 0x118) = local_64;
      *(u32 *)(param_1 + 0x11c) = local_60;
      *(u32 *)(param_1 + 0x120) = local_5c;
    }
    uVar3 = *(u16 *)(param_1 + 0x2c) | 1;
    fVar1 = (fRam00000038 - fRam0000003c) - fRam00000040;
    *(u16 *)(param_1 + 0x2c) = uVar3;
    *(float *)(param_1 + 0x30) =
         (*(float *)(param_1 + 0x30) + local_70) - *(float *)(param_1 + 0x118) * fVar1;
    fVar2 = fRam00000040;
    fVar1 = fRam00000038 - fRam0000003c;
    *(u16 *)(param_1 + 0x2c) = uVar3;
    *(float *)(param_1 + 0x38) =
         (*(float *)(param_1 + 0x38) + local_68) - *(float *)(param_1 + 0x120) * (fVar1 - fVar2);
    if (((local_108[0] & 0x2000) == 0) && (*(int *)(param_1 + 0x134) != 1)) {
      iVar4 = *(int *)(param_1 + 0x20);
      FUN_segment_0__80404498
                (&local_e0,*(int *)(iVar4 + 8) + *(short *)(iVar4 + 0x48) * 0x10,
                 *(int *)(iVar4 + 8) + *(short *)(iVar4 + 0x46) * 0x10);
      *(u32 *)(param_1 + 0x10c) = local_e0;
      *(u32 *)(param_1 + 0x110) = local_dc;
      *(u32 *)(param_1 + 0x114) = local_d8;
      if (*(int *)(param_1 + 0x134) == 2) {
        FUN_segment_0__804470ec
                  ((double)g_Ram_float,(double)fRam00000050,
                   *(u32 *)(*(int *)(param_1 + 8) + 0x28),3);
        *(u32 *)(param_1 + 0x134) = 3;
      }
    }
    else {
      *(u32 *)(param_1 + 0x130) = 0;
      iVar4 = *(int *)(param_1 + 0x20);
      iVar5 = *(int *)(iVar4 + 8) + *(short *)(iVar4 + 0x48) * 0x10;
      iVar4 = *(int *)(iVar4 + 8) + *(short *)(iVar4 + 0x46) * 0x10;
      if (*(float *)(iVar5 + 4) <= *(float *)(iVar4 + 4)) {
        FUN_segment_0__80404498(&local_f8,iVar4,param_1 + 0xdc);
        *(u32 *)(param_1 + 0x10c) = local_f8;
        *(u32 *)(param_1 + 0x110) = local_f4;
        *(u32 *)(param_1 + 0x114) = local_f0;
      }
      else {
        FUN_segment_0__80404498(&local_ec,iVar5,param_1 + 0xdc);
        *(u32 *)(param_1 + 0x10c) = local_ec;
        *(u32 *)(param_1 + 0x110) = local_e8;
        *(u32 *)(param_1 + 0x114) = local_e4;
      }
      if (((*(int *)(param_1 + 0xd0) == 0) &&
          (uStack_1c = (int)*(short *)(param_1 + 0x140) - (int)*(short *)(param_1 + 0x142),
          -1 < (int)uStack_1c)) && ((int)uStack_1c <= 0x2d0 / (int)*(short *)(param_1 + 0x144))) {
        uStack_24 = -(int)*(short *)(param_1 + 0x144) ^ 0x80000000;
        uStack_1c = uStack_1c ^ 0x80000000;
        local_28 = 0x43300000;
        local_20 = 0x43300000;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430
                  ((double)((float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000048) *
                           (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000048) *
                           fRam00000064),auStack_b8,param_1 + 0x100);
      }
      *(short *)(param_1 + 0x140) = *(short *)(param_1 + 0x140) + 1;
    }
  }
  if ((fRam00000068 < *(float *)(*(int *)(param_1 + 0x20) + 0x40)) &&
     (*(int *)(param_1 + 0x134) == 1)) {
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)fRam00000050,
               *(u32 *)(*(int *)(param_1 + 8) + 0x28),2);
    *(u32 *)(param_1 + 0x134) = 2;
  }
  return;
}

// === col_Hitbox_805b75d4 (0x805b75d4) ===
void col_Hitbox_805b75d4(int param_1)

{
  double dVar1;
  float fVar2;
  
  *(u32 *)(param_1 + 0x152) = 1;
  fVar2 = g_Ram_float;
  *(u16 *)(param_1 + 0x154) = 0;
  *(u32 *)(param_1 + 0x158) = *(u32 *)(param_1 + 0x10c);
  dVar1 = (double)CONCAT44(g_Ram_float,uRam00000004);
  *(u32 *)(param_1 + 0x15c) = *(u32 *)(param_1 + 0x110);
  *(u32 *)(param_1 + 0x160) = *(u32 *)(param_1 + 0x114);
  *(float *)(param_1 + 0x168) =
       (fVar2 * g_Ram_float) / (float)((double)CONCAT44(0x43300000,-g_Ram_float) - dVar1);
  return;
}

// === Hitbox_calc_805b764c (0x805b764c) ===
void Hitbox_calc_805b764c(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  *(u32 *)(param_1 + 0x16c) = *(u32 *)(param_1 + 0x10c);
  uVar3 = (unsigned int)*(u16 *)(param_1 + 0x154);
  *(u32 *)(param_1 + 0x170) = *(u32 *)(param_1 + 0x110);
  *(u32 *)(param_1 + 0x174) = *(u32 *)(param_1 + 0x114);
  fVar2 = fRam00000064;
  if ((int)uVar3 < (int)g_Ram_float) {
    fVar1 = g_Ram_float * (float)((double)CONCAT44(0x43300000,uVar3) - dRam00000078) -
            (float)((double)CONCAT44(0x43300000,uVar3) - dRam00000078) *
            fRam0000006c * *(float *)(param_1 + 0x168) *
            (float)((double)CONCAT44(0x43300000,uVar3) - dRam00000078);
    *(float *)(param_1 + 0x164) = fVar1;
    FUN_segment_0__805a36dc((double)(-fVar1 * fVar2),param_1 + 0x100,param_1 + 0x16c);
    *(u32 *)(param_1 + 0x10c) = *(u32 *)(param_1 + 0x16c);
    *(u32 *)(param_1 + 0x110) = *(u32 *)(param_1 + 0x170);
    *(u32 *)(param_1 + 0x114) = *(u32 *)(param_1 + 0x174);
    *(u32 *)(param_1 + 0x178) = *(u32 *)(param_1 + 0x164);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x178) +
            fRam00000070 * g_Ram_float *
            (float)((double)CONCAT44(0x43300000,uVar3 - (int)g_Ram_float ^ 0x80000000) -
                   dRam00000048);
    *(float *)(param_1 + 0x164) = fVar1;
    FUN_segment_0__805a36dc((double)(-fVar1 * fVar2),param_1 + 0x100,param_1 + 0x16c);
    if ((*(char *)(param_1 + 0x130) == 0) && (*(short *)(param_1 + 0xb4) == 1)) {
      *(u32 *)(param_1 + 0x10c) = *(u32 *)(param_1 + 0x16c);
      *(u32 *)(param_1 + 0x110) = *(u32 *)(param_1 + 0x170);
      *(u32 *)(param_1 + 0x114) = *(u32 *)(param_1 + 0x174);
    }
    else if (fRam00000074 <
             *(float *)(param_1 + 0x174) * *(float *)(param_1 + 0x114) +
             *(float *)(param_1 + 0x16c) * *(float *)(param_1 + 0x10c) + g_Ram_float * g_Ram_float
            ) {
      *(u32 *)(param_1 + 0x152) = 0;
    }
  }
  FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x2b8);
  *(short *)(param_1 + 0x154) = *(short *)(param_1 + 0x154) + 1;
  return;
}

// === col_Hitbox_805b78c4 (0x805b78c4) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b78c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Hitbox_validate_805b7ac4 (0x805b7ac4) ===
void Hitbox_validate_805b7ac4(int param_1)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  col_Hitbox_805b7b3c((double)g_Ram_float,&local_18,param_1 + 0x100,param_1 + 0x118);
  *(u32 *)(param_1 + 0x100) = local_18;
  *(u32 *)(param_1 + 0x104) = local_14;
  *(u32 *)(param_1 + 0x108) = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x100);
}

// === col_Hitbox_805b7b3c (0x805b7b3c) ===
void col_Hitbox_805b7b3c
               (u64 param_1,u32 *param_2,u32 param_3,u32 param_4)

{
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 auStack_2c [12];
  u32 auStack_20 [16];
  
  FUN_segment_0__80404498(auStack_20,param_4,param_3);
  FUN_segment_0__8040443c(param_1,auStack_2c,auStack_20);
  FUN_segment_0__80404464(&local_38,param_3,auStack_2c);
  param_2[1] = local_34;
  *param_2 = local_38;
  param_2[2] = local_30;
  return;
}

// === col_Hitbox_805b7c50 (0x805b7c50) ===
void col_Hitbox_805b7c50(u32 param_1)

{
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  
  local_28 = uRam00000000;
  local_24 = uRam00000004;
  local_20 = uRam00000008;
  local_1c = uRam0000000c;
  local_38 = uRam00000000;
  local_34 = uRam00000004;
  local_30 = uRam00000008;
  local_2c = uRam0000000c;
  FUN_segment_0__80701444(param_1,&local_28,&local_38,4,0);
  return;
}

// === Hitbox_validate_805b7ce8 (0x805b7ce8) ===
void Hitbox_validate_805b7ce8(int *param_1)

{
  int iVar1;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  u32 local_c;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0xb4)))();
  if (iVar1 != 0) {
    local_78 = uRam00000000;
    local_74 = uRam00000000;
    local_70 = uRam00000000;
    local_38 = uRam00000000;
    local_34 = uRam00000000;
    local_30 = uRam00000000;
    local_2c = uRam00000000;
    local_28 = uRam00000000;
    local_24 = uRam00000000;
    local_20 = uRam00000000;
    local_1c = uRam00000000;
    local_18 = uRam00000000;
    local_14 = uRam00000000;
    local_10 = uRam00000000;
    local_c = uRam00000000;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(&local_38,&local_78);
  }
  return;
}

// === Hitbox_assertFail_805b7dd8 (0x805b7dd8) ===
void Hitbox_assertFail_805b7dd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Hitbox_validate_805b84b8 (0x805b84b8) ===
u32 Hitbox_validate_805b84b8(u32 *param_1)

{
  if (param_1 != (u32 *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2e]);
  }
  return 0;
}

// === col_Hitbox_805b858c (0x805b858c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b858c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b87fc (0x805b87fc) ===
void col_Hitbox_805b87fc(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xb4); iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xc0) + iVar4);
    *(u32 *)(piVar2 + 0x2c) = 0;
    ((void(*)(...))(*(void**)(*piVar2 + 0x68)))(piVar2,0);
    piVar2 = *(int **)(*(int *)(param_1 + 0xc4) + iVar4);
    *(u32 *)(piVar2 + 0x2c) = 0;
    ((void(*)(...))(*(void**)(*piVar2 + 0x68)))(piVar2,0);
    iVar4 = iVar4 + 4;
  }
  iVar3 = 0;
  for (iVar4 = 0; fVar1 = g_Ram_float, iVar4 < *(int *)(param_1 + 0x100); iVar4 = iVar4 + 1) {
    *(u32 *)(*(int *)(param_1 + 0x120) + iVar3) = 600;
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  *(float *)(param_1 + 0x124) = g_Ram_float;
  *(float *)(param_1 + 0x128) = fVar1 * fVar1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xe4); iVar3 = iVar3 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xd4) + iVar4) + 0x74))();
    iVar4 = iVar4 + 4;
  }
  return;
}

// === col_Hitbox_805b892c (0x805b892c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b892c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b8e1c (0x805b8e1c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b8e1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b916c (0x805b916c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b916c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b932c (0x805b932c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b932c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b94ec (0x805b94ec) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b94ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805b982c (0x805b982c) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805b982c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === Hitbox_assertFail_805b9b6c (0x805b9b6c) ===
void Hitbox_assertFail_805b9b6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Hitbox_assertFail_805b9e00 (0x805b9e00) ===
void Hitbox_assertFail_805b9e00(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === col_Hitbox_805ba094 (0x805ba094) ===
void col_Hitbox_805ba094(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar6 = *(int *)(param_1 + 0xb0);
  iVar4 = iVar6;
  if (0 < iVar6) {
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xb8) + iVar3) + 0xb0) == 0)
      goto LAB_segment_0__805ba0e4;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar2 = -1;
LAB_segment_0__805ba0e4:
  if (iVar2 != -1) {
    bVar5 = false;
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 200) + param_2 * 4) + 0x1c8);
    if ((fVar1 <= *(float *)(param_1 + 0x128)) && (g_Ram_float < fVar1)) {
      bVar5 = true;
    }
    iVar4 = 0;
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        if (param_2 == *(int *)(*(int *)(*(int *)(param_1 + 0xb8) + iVar3) + 0xb4))
        goto LAB_segment_0__805ba160;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar4 = -1;
LAB_segment_0__805ba160:
    if ((bVar5) && (iVar4 == -1)) {
      dVar8 = (double)g_Ram_float;
      *(int *)(*(int *)(*(int *)(param_1 + 0xb8) + iVar2 * 4) + 0xb4) = param_2;
      piVar7 = *(int **)(*(int *)(param_1 + 0xb8) + iVar2 * 4);
      FUN_segment_0__804470ec(dVar8,(double)g_Ram_float,*(u32 *)(piVar7[2] + 0x28),0);
      *(u32 *)(piVar7 + 0x2c) = 1;
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,1);
    }
  }
  return;
}

// === col_Hitbox_805ba1e8 (0x805ba1e8) ===
void col_Hitbox_805ba1e8(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar6 = *(int *)(param_1 + 0xb0);
  iVar4 = iVar6;
  if (0 < iVar6) {
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xbc) + iVar3) + 0xb0) == 0)
      goto LAB_segment_0__805ba238;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar2 = -1;
LAB_segment_0__805ba238:
  if (iVar2 != -1) {
    bVar5 = false;
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0xcc) + param_2 * 4) + 0x1c8);
    if ((fVar1 <= *(float *)(param_1 + 0x128)) && (g_Ram_float < fVar1)) {
      bVar5 = true;
    }
    iVar4 = 0;
    iVar3 = 0;
    if (0 < iVar6) {
      do {
        if (param_2 == *(int *)(*(int *)(*(int *)(param_1 + 0xbc) + iVar3) + 0xb4))
        goto LAB_segment_0__805ba2b4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar4 = -1;
LAB_segment_0__805ba2b4:
    if ((bVar5) && (iVar4 == -1)) {
      dVar8 = (double)g_Ram_float;
      *(int *)(*(int *)(*(int *)(param_1 + 0xbc) + iVar2 * 4) + 0xb4) = param_2;
      piVar7 = *(int **)(*(int *)(param_1 + 0xbc) + iVar2 * 4);
      FUN_segment_0__804470ec(dVar8,(double)g_Ram_float,*(u32 *)(piVar7[2] + 0x28),0);
      *(u32 *)(piVar7 + 0x2c) = 1;
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,1);
    }
  }
  return;
}

// === col_Hitbox_805ba57c (0x805ba57c) ===
void col_Hitbox_805ba57c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x100); iVar3 = iVar3 + 1) {
    iVar2 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xec); iVar4 = iVar4 + 1) {
      if ((*(char *)(iVar3 + *(int *)(*(int *)(param_1 + 0xd8) + iVar2) + 0x1b1) != 0) &&
         (199 < *(int *)(iVar1 + *(int *)(param_1 + 0x120)))) {
        *(u32 *)(iVar1 + *(int *)(param_1 + 0x120)) = 0;
      }
      iVar2 = iVar2 + 4;
    }
    iVar1 = iVar1 + 4;
  }
  iVar3 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xec); iVar1 = iVar1 + 1) {
    FUN_segment_0__805bec64(*(u32 *)(*(int *)(param_1 + 0xd8) + iVar3));
    iVar3 = iVar3 + 4;
  }
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x100); iVar3 = iVar3 + 1) {
    *(int *)(*(int *)(param_1 + 0x120) + iVar1) = *(int *)(*(int *)(param_1 + 0x120) + iVar1) + 1;
    if (600 < *(int *)(*(int *)(param_1 + 0x120) + iVar1)) {
      *(u32 *)(*(int *)(param_1 + 0x120) + iVar1) = 600;
    }
    iVar1 = iVar1 + 4;
  }
  return;
}

// === col_Hitbox_805ba698 (0x805ba698) ===
void col_Hitbox_805ba698(int param_1)

{
  int *piVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  
  iVar7 = 0;
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + 0xec) <= iVar7) {
      return;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0xd8) + iVar6);
    if (*(char *)(piVar1 + 0x6c) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x74)))();
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xe4); iVar4 = iVar4 + 1) {
        local_28 = uRam00000000;
        local_24 = uRam00000004;
        local_20 = uRam00000008;
        iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0xd8));
        if ((*(int *)(iVar2 + 0x154) == 2) && (*(char *)(iVar2 + 0x1d8) == 0)) {
          return;
        }
        uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0xd4) + iVar5) + 0xb4))();
        piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0xd8));
        iVar2 = ((void(*)(...))(*(void**)(*piVar1 + 0xd0)))(piVar1,uVar3,&local_28);
        if (iVar2 != 0) {
          FUN_segment_0__807089b4(*(u32 *)(*(int *)(param_1 + 0xd4) + iVar5));
        }
        iVar5 = iVar5 + 4;
      }
    }
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + 1;
  } while( true );
}

// === col_Hitbox_805ba7b0 (0x805ba7b0) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805ba7b0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805ba98c (0x805ba98c) ===
void col_Hitbox_805ba98c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0xec); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + iVar3);
    if (*(char *)(iVar1 + 0x1bd) == 0) {
      if (param_2 == iVar1) {
        iVar1 = 0;
      }
      else if (*(short *)(*(int *)(param_2 + 0x20) + 4) == *(short *)(*(int *)(iVar1 + 0x20) + 4)) {
        iVar1 = FUN_segment_0__805cd26c
                          ((double)*(float *)(param_2 + 500),(double)*(float *)(param_2 + 0x1fc),
                           *(int *)(iVar1 + 0x20),*(u16 *)(param_2 + 0x1f0),
                           *(u16 *)(param_2 + 0x1f8));
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + iVar3) + 0x154) == 2) {
          FUN_segment_0__805bd1b8();
        }
        else {
          FUN_segment_0__805bd104();
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  return;
}

// === col_Hitbox_805baabc (0x805baabc) ===
/* WARNING: Control flow encountered bad instruction data */

void col_Hitbox_805baabc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === col_Hitbox_805babd0 (0x805babd0) ===
/* WARNING: Removing unreachable block (ram,0x805bad14) */

u32 col_Hitbox_805babd0(int param_1,int param_2,int param_3)

{
  u16 uVar1;
  u32 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 == param_3) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x20);
    if (*(short *)(iVar3 + 4) == *(short *)(*(int *)(param_3 + 0x20) + 4)) {
      uVar2 = 0;
    }
    else {
      if (*(short *)(iVar3 + 4) == 0) {
        uVar1 = *(u16 *)(*(int *)(param_1 + 0x104) + *(short *)(iVar3 + 0x48) * 2);
        uVar5 = *(u16 *)(*(int *)(param_1 + 0x104) + *(short *)(iVar3 + 0x46) * 2) - 2 & 0xffff;
        if (uVar5 == 0xffffffff) {
          iVar3 = FUN_segment_0__805d0f48(g_Ram_float,1);
          uVar5 = *(u16 *)(iVar3 + 8) - 1 & 0xffff;
        }
        else if (uVar5 == 0xfffffffe) {
          iVar3 = FUN_segment_0__805d0f48(g_Ram_float,1);
          uVar5 = *(u16 *)(iVar3 + 8) - 2 & 0xffff;
        }
        uVar4 = uVar1 + 2 & 0xffff;
        iVar3 = FUN_segment_0__805d0f48(g_Ram_float,1);
        if (uVar4 == *(u16 *)(iVar3 + 8)) {
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_segment_0__805d0f48(g_Ram_float,1);
          if (uVar4 == *(u16 *)(iVar3 + 8) + 1) {
            uVar4 = 1;
          }
        }
      }
      else {
        uVar5 = *(u16 *)(*(int *)(param_1 + 0x108) + *(short *)(iVar3 + 0x46) * 2) - 2 & 0xffff;
        uVar4 = *(u16 *)(*(int *)(param_1 + 0x108) + *(short *)(iVar3 + 0x48) * 2) + 2 & 0xffff;
        iVar3 = FUN_segment_0__805d0f48(g_Ram_float,0);
        if (*(u16 *)(iVar3 + 8) <= uVar4) {
          uVar4 = 0;
        }
      }
      uVar2 = FUN_segment_0__805cd26c
                        ((double)g_Ram_float,(double)g_Ram_float,*(u32 *)(param_3 + 0x20),
                         uVar5,uVar4);
    }
  }
  return uVar2;
}

// === col_Hitbox_805bad9c (0x805bad9c) ===
void col_Hitbox_805bad9c(u32 param_1)

{
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  
  local_28 = uRam00000000;
  local_24 = uRam00000004;
  local_20 = uRam00000008;
  local_1c = uRam0000000c;
  local_38 = uRam00000000;
  local_34 = uRam00000004;
  local_30 = uRam00000008;
  local_2c = uRam0000000c;
  FUN_segment_0__80701444(param_1,&local_28,&local_38,4,0);
  return;
}

// === Hitbox_validate_805bae5c (0x805bae5c) ===
int Hitbox_validate_805bae5c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === col_Hitbox_805baea4 (0x805baea4) ===
void col_Hitbox_805baea4(u32 param_1)

{
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  
  local_28 = uRam00000000;
  local_24 = uRam00000004;
  local_20 = uRam00000008;
  local_1c = uRam0000000c;
  local_38 = uRam00000000;
  local_34 = uRam00000004;
  local_30 = uRam00000008;
  local_2c = uRam0000000c;
  FUN_segment_0__80701444(param_1,&local_28,&local_38,4,0);
  return;
}

// === Hitbox_validate_805baf64 (0x805baf64) ===
int Hitbox_validate_805baf64(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === col_Hitbox_805bafac (0x805bafac) ===
void col_Hitbox_805bafac(u32 param_1)

{
  u32 local_8;
  u32 local_4;
  
  local_4 = uRam00000000;
  local_8 = uRam00000000;
  FUN_segment_0__80701444(param_1,&local_4,&local_8,1,0);
  return;
}

// === CollisionDetection_validate_805bb028 (0x805bb028) ===
int CollisionDetection_validate_805bb028(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === col_CollisionDetection_805bb070 (0x805bb070) ===
void col_CollisionDetection_805bb070(u32 param_1)

{
  u32 local_8;
  u32 local_4;
  
  local_4 = uRam00000000;
  local_8 = uRam00000000;
  FUN_segment_0__80701444(param_1,&local_4,&local_8,1,0);
  return;
}

// === CollisionDetection_validate_805bb0ec (0x805bb0ec) ===
int CollisionDetection_validate_805bb0ec(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === col_CollisionDetection_805bb144 (0x805bb144) ===
/* WARNING: Control flow encountered bad instruction data */

void col_CollisionDetection_805bb144(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === CollisionDetection_validate_805bbb18 (0x805bbb18) ===
u32 CollisionDetection_validate_805bbb18(u32 *param_1)

{
  if (param_1 != (u32 *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === CollisionDetection_validate_805bbb7c (0x805bbb7c) ===
int CollisionDetection_validate_805bbb7c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xb0) {
      *(u32 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(param_1 + 0xc4));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffff50);
    }
  }
  return param_1;
}

// === col_CollisionDetection_805bbbe8 (0x805bbbe8) ===
void col_CollisionDetection_805bbbe8(u32 param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_segment_0__80455350();
  FUN_segment_0__8070028c(param_1,uVar1);
  return;
}

// === col_CollisionDetection_805bbc20 (0x805bbc20) ===
/* WARNING: Control flow encountered bad instruction data */

void col_CollisionDetection_805bbc20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === CollisionDetection_assertFail_805bbd74 (0x805bbd74) ===
void CollisionDetection_assertFail_805bbd74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === CollisionDetection_validate_805bc12c (0x805bc12c) ===
void CollisionDetection_validate_805bc12c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (-1 < (int)uVar1) {
    *(short *)(param_1 + 0xb4) = (short)uVar1;
    *(u32 *)(param_1 + 0xb8) = 0xffffffff;
    *(u32 *)(param_1 + 0xbc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              (*(int *)(param_1 + 200) +
               (unsigned int)*(u16 *)(*(int *)(param_1 + 0xc4) + (uVar1 & 0xffff) * 2) * 0x1c + 4);
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (*(int *)(param_1 + 200) +
             (unsigned int)*(u16 *)(*(int *)(param_1 + 0xc4) + (unsigned int)*(u16 *)(param_1 + 0xb4) * 2) *
             0x1c + 0x10);
}

// === CollisionDetection_assertFail_805bc588 (0x805bc588) ===
void CollisionDetection_assertFail_805bc588(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === CollisionDetection_calc_805bc9e0 (0x805bc9e0) ===
u32 CollisionDetection_calc_805bc9e0(int *param_1,int param_2,u32 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_4 == 3) {
    if (*(char *)((int)param_1 + 0x1bd) == 0) {
      if ((param_2 != 0) && (*(int *)(param_2 + 4) == 9)) {
        *(u32 *)(param_1 + 0x86) = 1;
      }
      if (param_1[0x55] == 2) {
        FUN_segment_0__805bd1b8(param_1);
      }
      else {
        *(u32 *)((int)param_1 + 0x1bd) = 1;
        *(u32 *)(param_1 + 0x88) = 0;
        *(u32 *)((int)param_1 + 0x221) = 0;
        param_1[0x70] = 0;
        ((void(*)(...))(*(void**)(*param_1 + 0x90)))(param_1);
        param_1[0x80] = iRam00000014;
        fVar2 = fRam00000078;
        fVar1 = (fRam00000074 * g_Ram_float) / g_Ram_float;
        param_1[0x85] = param_1[0x60];
        param_1[0x83] = param_1[0x5e];
        param_1[0x84] = param_1[0x5f];
        param_1[0x82] = (int)fVar1;
        param_1[0x71] = param_1[0xd];
        param_1[0x81] = (int)(fVar2 / fVar1);
      }
    }
  }
  else if (param_4 == 4) {
    if (*(char *)((int)param_1 + 0x1bd) == 0) {
      if ((param_2 != 0) && (*(int *)(param_2 + 4) == 9)) {
        *(u32 *)(param_1 + 0x86) = 1;
      }
      if (param_1[0x55] == 2) {
        FUN_segment_0__805bd1b8(param_1);
      }
      else {
        *(u32 *)((int)param_1 + 0x1bd) = 1;
        *(u32 *)(param_1 + 0x88) = 0;
        *(u32 *)((int)param_1 + 0x221) = 0;
        param_1[0x70] = 0;
        ((void(*)(...))(*(void**)(*param_1 + 0x90)))(param_1);
        param_1[0x80] = iRam00000014;
        fVar2 = fRam00000078;
        fVar1 = (fRam00000074 * g_Ram_float) / g_Ram_float;
        param_1[0x85] = param_1[0x60];
        param_1[0x83] = param_1[0x5e];
        param_1[0x84] = param_1[0x5f];
        param_1[0x82] = (int)fVar1;
        param_1[0x71] = param_1[0xd];
        param_1[0x81] = (int)(fVar2 / fVar1);
      }
    }
  }
  else if (param_4 == 5) {
    if (*(char *)((int)param_1 + 0x1bd) == 0) {
      if ((param_2 != 0) && (*(int *)(param_2 + 4) == 9)) {
        *(u32 *)(param_1 + 0x86) = 1;
      }
      if (param_1[0x55] == 2) {
        FUN_segment_0__805bd1b8(param_1);
      }
      else {
        *(u32 *)((int)param_1 + 0x1bd) = 1;
        *(u32 *)(param_1 + 0x88) = 0;
        *(u32 *)((int)param_1 + 0x221) = 0;
        param_1[0x70] = 0;
        ((void(*)(...))(*(void**)(*param_1 + 0x90)))(param_1);
        param_1[0x80] = iRam00000014;
        fVar2 = fRam00000078;
        fVar1 = (fRam00000074 * g_Ram_float) / g_Ram_float;
        param_1[0x85] = param_1[0x60];
        param_1[0x83] = param_1[0x5e];
        param_1[0x84] = param_1[0x5f];
        param_1[0x82] = (int)fVar1;
        param_1[0x71] = param_1[0xd];
        param_1[0x81] = (int)(fVar2 / fVar1);
      }
    }
  }
  else if ((param_4 == 6) && (*(char *)((int)param_1 + 0x1bd) == 0)) {
    if ((param_2 != 0) && (*(int *)(param_2 + 4) == 9)) {
      *(u32 *)(param_1 + 0x86) = 1;
    }
    if (param_1[0x55] == 2) {
      FUN_segment_0__805bd1b8(param_1);
    }
    else {
      *(u32 *)((int)param_1 + 0x1bd) = 1;
      *(u32 *)(param_1 + 0x88) = 0;
      *(u32 *)((int)param_1 + 0x221) = 0;
      param_1[0x70] = 0;
      ((void(*)(...))(*(void**)(*param_1 + 0x90)))(param_1);
      param_1[0x80] = iRam00000014;
      fVar2 = fRam00000078;
      fVar1 = (fRam00000074 * g_Ram_float) / g_Ram_float;
      param_1[0x85] = param_1[0x60];
      param_1[0x83] = param_1[0x5e];
      param_1[0x84] = param_1[0x5f];
      param_1[0x82] = (int)fVar1;
      param_1[0x71] = param_1[0xd];
      param_1[0x81] = (int)(fVar2 / fVar1);
    }
  }
  return param_3;
}

// === CollisionDetection_validate_805bcd58 (0x805bcd58) ===
void CollisionDetection_validate_805bcd58(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if (iVar1 == 1) {
    FUN_segment_0__806ff7b0();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x6c);
  }
  if (iVar1 == 0) {
    FUN_segment_0__806ff7b0();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x6c);
  }
  if (iVar1 == 2) {
    FUN_segment_0__806ff7b0();
  }
  return;
}

// === col_CollisionDetection_805bce58 (0x805bce58) ===
void col_CollisionDetection_805bce58(int *param_1)

{
  int iVar1;
  int *piVar2;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 auStack_4c [12];
  u32 auStack_40 [12];
  u32 local_34;
  u32 local_24;
  u32 local_14;
  
  iVar1 = ((void(*)(...))(*(void**)(*param_1 + 0xb4)))();
  if (iVar1 != 0) {
    FUN_segment_0__80701bcc(param_1);
    piVar2 = (int *)((void(*)(...))(*(void**)(*param_1 + 0xb4)))(param_1);
    ((void(*)(...))(*(void**)(*piVar2 + 0x10)))(piVar2,param_1 + 0x16,param_1 + 0xf,param_1 + 0x5a);
    FUN_segment_0__80701bcc(param_1);
    FUN_segment_0__804270d8(auStack_4c,param_1 + 0x16,2);
    FUN_segment_0__805a3df8(auStack_4c,0,auStack_40);
    FUN_segment_0__80701bcc(param_1);
    FUN_segment_0__804270d8(&local_58,param_1 + 0x16,3);
    local_34 = local_58;
    local_24 = local_54;
    local_14 = local_50;
    if (param_1[0x55] != 2) {
      (**(code **)(*(int *)param_1[0x39] + 0x10))
                ((int *)param_1[0x39],auStack_40,param_1 + 0xf,param_1 + 0x5a);
    }
  }
  return;
}

// === col_CollisionDetection_805bcfd0 (0x805bcfd0) ===
void col_CollisionDetection_805bcfd0(int param_1)

{
  float fVar1;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  fVar1 = *(float *)(param_1 + 0x174) + g_Ram_float;
  *(float *)(param_1 + 0x174) = fVar1;
  if (*(float *)(param_1 + 0xec) < fVar1) {
    *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0xec);
    *(u32 *)(param_1 + 0xb8) = 0;
  }
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x20) + 0x18)))((double)*(float *)(param_1 + 0x174));
  FUN_segment_0__804086e4
            ((double)*(float *)(param_1 + 0x174),&local_18,*(int *)(param_1 + 0x20) + 0x24);
  *(u32 *)(param_1 + 0x168) = local_18;
  *(u32 *)(param_1 + 0x16c) = local_14;
  *(u32 *)(param_1 + 0x170) = local_10;
  return;
}

// === __ct__Q24Kart11KartCollideFv (0x80570a54) ===
void __ct__Q24Kart11KartCollideFv(void) { return; }

// === init__Q24Kart11KartCollideFv (0x80570b0c) ===
void init__Q24Kart11KartCollideFv(void) { return; }

// === updateBbox__Q24Kart11KartCollideFv (0x80570bf4) ===
void updateBbox__Q24Kart11KartCollideFv(void) { return; }

// === processBody__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl (0x80570c4c) ===
void processBody__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void) { return; }

// === processWheels__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl (0x80570dbc) ===
void processWheels__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void) { return; }

// === processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl (0x80570e18) ===
void processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl(void) { return; }

// === processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb (0x80570eec) ===
void processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb(void) { return; }

// === updateHitboxes__Q24Kart11KartCollideFv (0x8057130c) ===
void updateHitboxes__Q24Kart11KartCollideFv(void) { return; }

// === processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl (0x8057166c) ===
void processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl(void) { return; }

// === checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo (0x80571754) ===
void checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo(void) { return; }

// === processCannon__Q24Kart11KartCollideFPUl (0x80571978) ===
void processCannon__Q24Kart11KartCollideFPUl(void) { return; }

// === PlayerSub18_checkPlayerCollision (0x80571cd8) ===
void PlayerSub18_checkPlayerCollision(void) { return; }

// === PlayerSub18_checkItemCollision (0x80574a64) ===
void PlayerSub18_checkItemCollision(void) { return; }

// === PlayerSub18_findCollision (0x80575108) ===
void PlayerSub18_findCollision(void) { return; }

// === PlayerSub18_initHitboxes (0x805755bc) ===
void PlayerSub18_initHitboxes(void) { return; }

// === PlayerSub18_handleNoopCollision (0x80575658) ===
void PlayerSub18_handleNoopCollision(void) { return; }

// === PlayerSub18_handleBananaCollision (0x80575660) ===
void PlayerSub18_handleBananaCollision(void) { return; }

// === PlayerSub18_handleShellCollision (0x80575678) ===
void PlayerSub18_handleShellCollision(void) { return; }

// === PlayerSub18_handleBlueShellCollision (0x80575698) ===
void PlayerSub18_handleBlueShellCollision(void) { return; }

// === PlayerSub18_handleBombCollision (0x805756b0) ===
void PlayerSub18_handleBombCollision(void) { return; }

// === PlayerSub18_handleMushroomCollision (0x805756c8) ===
void PlayerSub18_handleMushroomCollision(void) { return; }

// === PlayerSub18_handleStarCollision (0x8057570c) ===
void PlayerSub18_handleStarCollision(void) { return; }

// === PlayerSub18_handleFibCollision (0x80575744) ===
void PlayerSub18_handleFibCollision(void) { return; }

// === __dt__Q24Kart11KartCollideFv (0x805764d8) ===
void __dt__Q24Kart11KartCollideFv(void) { return; }

// === PlayerSub10_computeWallCollisionSpeedFactor (0x8057d5f0) ===
void PlayerSub10_computeWallCollisionSpeedFactor(void) { return; }

// === PlayerSub10_doRespawn (0x8058681c) ===
void PlayerSub10_doRespawn(void) { return; }

// === setBsp__Q24Kart16KartWheelPhysicsFv (0x8059b9bc) ===
void setBsp__Q24Kart16KartWheelPhysicsFv(void) { return; }

// === calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f (0x8059bb78) ===
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void) { return; }

// === __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel (0x8059c3bc) ===
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void) { return; }

// === reset__Q24Kart14KartSusPhysicsFv (0x8059c43c) ===
void reset__Q24Kart14KartSusPhysicsFv(void) { return; }

// === calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff (0x8059c760) ===
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void) { return; }

// === setBspParams__Q24Kart12KartDynamicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3fbf (0x805b72ac) ===
void setBspParams__Q24Kart12KartDynamicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3fbf(void) { return; }

// === PlayerSub18_findCollisionInner (0x805b8c0c) ===
void PlayerSub18_findCollisionInner(void) { return; }

// === applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb (0x805b9e10) ===
void applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb(void) { return; }

// === __ct__Q24Kart6HitboxFv (0x805ba430) ===
void __ct__Q24Kart6HitboxFv(void) { return; }

// === reset__Q24Kart6HitboxFv (0x805ba46c) ===
void reset__Q24Kart6HitboxFv(void) { return; }

// === update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff (0x805ba4a4) ===
void update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff(void) { return; }

// === create__Q24Kart6HitboxFRCQ23EGG8Vector3ff (0x805ba640) ===
void create__Q24Kart6HitboxFRCQ23EGG8Vector3ff(void) { return; }

// === setScale__Q24Kart6HitboxFf (0x805ba6b8) ===
void setScale__Q24Kart6HitboxFf(void) { return; }

// === __ct__Q24Kart11HitboxGroupFv (0x805ba7a4) ===
void __ct__Q24Kart11HitboxGroupFv(void) { return; }

// === reset__Q24Kart11HitboxGroupFv (0x805ba818) ===
void reset__Q24Kart11HitboxGroupFv(void) { return; }

// === setHitboxScale__Q24Kart11HitboxGroupFf (0x805ba8c0) ===
void setHitboxScale__Q24Kart11HitboxGroupFf(void) { return; }

// === createHitboxes__Q24Kart11HitboxGroupFl (0x805ba908) ===
void createHitboxes__Q24Kart11HitboxGroupFl(void) { return; }

// === initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl (0x805ba9a8) ===
void initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl(void) { return; }

// === setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox (0x805bab90) ===
void setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox(void) { return; }

// === createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff (0x805bac44) ===
void createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff(void) { return; }

// === computeCollisionLimits__Q24Kart11HitboxGroupFv (0x805bad24) ===
void computeCollisionLimits__Q24Kart11HitboxGroupFv(void) { return; }