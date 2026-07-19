// ItemSystem module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 83 decompiled functions
// Address range: 0x80574a64 - 0x807bded4

#include "ItemSystem.h"
#include "../types.h"
#include "../stubs.h"


// === ItemBehaviour_assertFail_8065e1b0 (0x8065e1b0) ===
void ItemBehaviour_assertFail_8065e1b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ItemBehaviour_validate_8065e674 (0x8065e674) ===
void ItemBehaviour_validate_8065e674(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x10));
}

// === item_ItemBehaviour_8065e930 (0x8065e930) ===
void item_ItemBehaviour_8065e930(int param_1,u32 param_2,u32 param_3,u32 param_4)

{
  FUN_segment_0__806bfdc8
            (*(u32 *)(param_1 + 0xfc),*(u32 *)(param_1 + 0x100),
             *(u32 *)(param_1 + 0xd8),param_4,param_2);
  FUN_segment_0__806b619c(*(u32 *)(param_1 + 0xd8),*(u32 *)(param_1 + 0xfc));
  FUN_segment_0__806bfef0(*(u32 *)(param_1 + 0xfc),param_3);
  return;
}

// === ItemBehaviour_validate_8065e990 (0x8065e990) ===
void ItemBehaviour_validate_8065e990(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x2400,*(u32 *)(param_1 + 0x10),4);
}

// === ItemBehaviour_validate_8065eb44 (0x8065eb44) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemBehaviour_validate_8065eb44(int param_1)

{
  float fVar1;
  u32 uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  u32 auStack_18 [4];
  u32 auStack_14 [8];
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar4 = *(int **)(iVar5 + 0x6c);
  piVar4[0x1f] = iRam00000040;
  piVar4[0x20] = iRam00000044;
  piVar4[0x21] = iRam00000048;
  piVar4[0x1c] = iRam00000028;
  piVar4[0x1d] = iRam0000002c;
  piVar4[0x1e] = _DAT_00000030;
  piVar4[0x19] = (int)fRam00000010;
  piVar4[0x1a] = (int)fRam00000014;
  piVar4[0x1b] = iRam00000018;
  ((void(*)(...))(*(void**)(*piVar4 + 0x14)))(piVar4);
  fVar3 = fRam00000014;
  if (*(float *)(iVar5 + 0x10) != fRam0000000c) {
    fVar1 = fRam0000000c * fRam00000010;
    *(float *)(iVar5 + 0x10) = fRam0000000c;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430((double)(fVar3 * fVar1),auStack_18,auStack_14);
  }
  *(u32 *)(iVar5 + 0x28) = *(u32 *)(param_1 + 0x13c);
  uVar2 = uRam00000000;
  *(u32 *)(iVar5 + 0x2c) = *(u32 *)(param_1 + 0x140);
  *(u32 *)(iVar5 + 0x30) = *(u32 *)(param_1 + 0x144);
  *(u32 *)(param_1 + 0x108) = uRam00000000;
  *(u32 *)(param_1 + 0x10c) = uRam00000004;
  *(u32 *)(param_1 + 0x110) = uRam00000008;
  *(u32 *)(param_1 + 0x114) = uVar2;
  *(u32 *)(param_1 + 0x118) = 1;
  return;
}

// === ItemBehaviour_validate_8065ec88 (0x8065ec88) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemBehaviour_validate_8065ec88(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  u32 auStack_e8 [8];
  u32 auStack_e0 [44];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  float local_80;
  int local_7c;
  u32 auStack_78 [12];
  float local_6c;
  u32 local_5c;
  float local_4c;
  u32 auStack_48 [12];
  float local_3c;
  u32 local_2c;
  float local_1c;
  
  item_ItemBehaviour_8065f014(auStack_e0,0);
  item_ItemBehaviour_8065f014(auStack_e8,0);
  fVar1 = _DAT_00000030;
  iVar3 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar2 = *(int **)(iVar3 + 0x6c);
  local_90 = piVar2[0x1f];
  local_8c = piVar2[0x20];
  local_80 = (float)piVar2[0x1d] + _DAT_00000034;
  local_88 = piVar2[0x21];
  local_84 = piVar2[0x1c];
  local_7c = piVar2[0x1e];
  local_9c = piVar2[0x19];
  local_a8 = fRam00000008 * fRam00000024;
  local_98 = (float)piVar2[0x1a] + _DAT_00000034;
  local_94 = (float)piVar2[0x1b];
  *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + _DAT_00000034;
  local_94 = local_94 + fVar1;
  if (((unsigned int)fRam0000002c & 0x100) != 0) {
    *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) + local_a8;
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + local_a8;
    *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + local_a8;
  }
  local_a4 = local_a8;
  local_a0 = local_a8;
  if (((unsigned int)fRam0000002c & 0x200) != 0) {
    FUN_segment_0__80404400(&local_b4,&local_a8);
    *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) + local_b4;
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + local_b0;
    *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + local_ac;
  }
  if ((((unsigned int)fRam0000002c & 1) == 0) && (((unsigned int)fRam0000002c & 2) == 0)) {
    if ((((unsigned int)fRam0000002c & 8) == 0) && (((unsigned int)fRam0000002c & 4) == 0)) {
      if (((unsigned int)fRam0000002c & 0xffff & ~(unsigned int)_DAT_00000046 & 0x10) != 0) {
        if (*(char *)(param_1 + 0x118) == 0) {
          *(u32 *)(param_1 + 0x118) = 1;
        }
        else {
          *(u32 *)(param_1 + 0x118) = 0;
        }
      }
      piVar2[0x1f] = local_90;
      piVar2[0x20] = local_8c;
      piVar2[0x21] = local_88;
      piVar2[0x1c] = local_84;
      piVar2[0x1d] = (int)local_80;
      piVar2[0x1e] = local_7c;
      piVar2[0x19] = local_9c;
      piVar2[0x1a] = (int)local_98;
      piVar2[0x1b] = (int)local_94;
      *(u32 *)(iVar3 + 0x28) = *(u32 *)(param_1 + 0x13c);
      *(u32 *)(iVar3 + 0x2c) = *(u32 *)(param_1 + 0x140);
      *(u32 *)(iVar3 + 0x30) = *(u32 *)(param_1 + 0x144);
      ((void(*)(...))(*(void**)(*piVar2 + 0x14)))(piVar2);
      return;
    }
    fVar1 = fRam00000008;
    if ((((unsigned int)fRam0000002c & 8) == 0) && (fVar1 = g_Ram_float, ((unsigned int)fRam0000002c & 4) != 0)) {
      fVar1 = fRam00000028;
    }
    local_6c = g_Ram_float;
    local_5c = uRam00000004;
    local_4c = fRam00000008;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430((double)(fVar1 * fRam0000002c),auStack_78,param_1 + 0x108);
  }
  fVar1 = fRam00000008;
  if ((((unsigned int)fRam0000002c & 1) == 0) && (fVar1 = g_Ram_float, ((unsigned int)fRam0000002c & 2) != 0)) {
    fVar1 = fRam00000028;
  }
  local_3c = g_Ram_float;
  local_2c = uRam00000004;
  local_1c = fRam00000008;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(fVar1 * fRam0000002c),auStack_48,0);
}

// === item_ItemBehaviour_8065f014 (0x8065f014) ===
void item_ItemBehaviour_8065f014(u32 *param_1,int param_2)

{
  u32 uVar1;
  
  uVar1 = *(u32 *)(*(int *)(param_2 + 4) + 0xa0);
  param_1[1] = *(u32 *)(*(int *)(param_2 + 4) + 0xa4);
  *param_1 = uVar1;
  return;
}

// === item_ItemBehaviour_8065f02c (0x8065f02c) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void item_ItemBehaviour_8065f02c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar3 = *(int **)(iVar4 + 0x6c);
  if (param_2 == 0) {
    piVar3[0x19] = _DAT_00000030;
    piVar3[0x1a] = _DAT_00000034;
    piVar3[0x1b] = iRam00000038;
  }
  else if (param_2 == 1) {
    piVar3[0x19] = iRam00000000;
    piVar3[0x1a] = _DAT_00000034;
    piVar3[0x1b] = iRam00000038;
  }
  else if (param_2 == 2) {
    piVar3[0x19] = iRam0000003c;
    piVar3[0x1a] = _DAT_00000034;
    piVar3[0x1b] = iRam00000038;
  }
  iVar2 = iRam00000000;
  piVar3[0x1c] = iRam00000000;
  piVar3[0x1d] = _DAT_00000034;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = iRam00000000;
  piVar3[0x20] = iRam00000004;
  piVar3[0x21] = (int)fRam00000008;
  ((void(*)(...))(*(void**)(*piVar3 + 0x14)))();
  fVar1 = fRam00000008 * *(float *)(param_1 + 0x158);
  *(float *)(iVar4 + 0x28) = fVar1;
  *(float *)(iVar4 + 0x2c) = fVar1;
  *(float *)(iVar4 + 0x30) = fVar1;
  *(u32 *)(param_1 + 0x118) = 1;
  return;
}

// === item_ItemBehaviour_8065f154 (0x8065f154) ===
void item_ItemBehaviour_8065f154(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = iRam00000044;
  iVar3 = iRam00000040;
  iVar2 = iRam00000000;
  iVar7 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar6 = *(int **)(iVar7 + 0x6c);
  piVar6[0x19] = iRam00000000;
  piVar6[0x1a] = iVar3;
  piVar6[0x1b] = iVar4;
  piVar6[0x1c] = iVar2;
  piVar6[0x1d] = iVar3;
  piVar6[0x1e] = iVar2;
  piVar6[0x1f] = iRam00000000;
  piVar6[0x20] = iRam00000004;
  piVar6[0x21] = (int)fRam00000008;
  ((void(*)(...))(*(void**)(*piVar6 + 0x14)))();
  fVar5 = fRam00000048;
  fVar1 = fRam00000008;
  *(float *)(param_1 + 0x158) = fRam00000048;
  fVar1 = fVar1 * fVar5;
  *(float *)(iVar7 + 0x28) = fVar1;
  *(float *)(iVar7 + 0x2c) = fVar1;
  *(float *)(iVar7 + 0x30) = fVar1;
  *(u32 *)(param_1 + 0x118) = 1;
  return;
}

// === item_ItemBehaviour_8065f224 (0x8065f224) ===
void item_ItemBehaviour_8065f224(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  
  iVar4 = iRam00000054;
  iVar2 = iRam00000050;
  iVar3 = iRam0000004c;
  iVar8 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar7 = *(int **)(iVar8 + 0x6c);
  piVar7[0x19] = iRam0000004c;
  piVar7[0x1a] = iVar2;
  iVar5 = iRam00000058;
  piVar7[0x1b] = iVar4;
  iVar2 = iRam00000000;
  piVar7[0x1c] = iVar3;
  piVar7[0x1d] = iVar5;
  piVar7[0x1e] = iVar2;
  piVar7[0x1f] = iRam00000000;
  piVar7[0x20] = iRam00000004;
  piVar7[0x21] = (int)fRam00000008;
  ((void(*)(...))(*(void**)(*piVar7 + 0x14)))();
  fVar6 = fRam0000005c;
  fVar1 = fRam00000008;
  *(float *)(param_1 + 0x158) = fRam0000005c;
  fVar1 = fVar1 * fVar6;
  *(float *)(iVar8 + 0x28) = fVar1;
  *(float *)(iVar8 + 0x2c) = fVar1;
  *(float *)(iVar8 + 0x30) = fVar1;
  *(u32 *)(param_1 + 0x118) = 1;
  return;
}

// === item_ItemBehaviour_8065f2fc (0x8065f2fc) ===
void item_ItemBehaviour_8065f2fc(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = iRam00000000;
  iVar6 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  piVar5 = *(int **)(iVar6 + 0x6c);
  if (*(char *)(param_1 + 0x1b8) == 0) {
    piVar5[0x19] = iRam00000000;
    iVar3 = iRam00000060;
    piVar5[0x1a] = iRam00000060;
    piVar5[0x1b] = iRam00000064;
    piVar5[0x1c] = iVar2;
    piVar5[0x1d] = iVar3;
    piVar5[0x1e] = iVar2;
    piVar5[0x1f] = iRam00000000;
    piVar5[0x20] = iRam00000004;
    piVar5[0x21] = (int)fRam00000008;
    ((void(*)(...))(*(void**)(*piVar5 + 0x14)))(piVar5);
  }
  else {
    piVar5[0x19] = *(int *)(param_1 + 0x1a0);
    piVar5[0x1a] = *(int *)(param_1 + 0x1a4);
    piVar5[0x1b] = *(int *)(param_1 + 0x1a8);
    piVar5[0x1c] = *(int *)(param_1 + 0x1ac);
    piVar5[0x1d] = *(int *)(param_1 + 0x1b0);
    piVar5[0x1e] = *(int *)(param_1 + 0x1b4);
    piVar5[0x1f] = iRam00000000;
    piVar5[0x20] = iRam00000004;
    piVar5[0x21] = (int)fRam00000008;
    ((void(*)(...))(*(void**)(*piVar5 + 0x14)))(piVar5);
  }
  fVar4 = fRam00000068;
  fVar1 = fRam00000008;
  *(float *)(param_1 + 0x158) = fRam00000068;
  fVar1 = fVar1 * fVar4;
  *(float *)(iVar6 + 0x28) = fVar1;
  *(float *)(iVar6 + 0x2c) = fVar1;
  *(float *)(iVar6 + 0x30) = fVar1;
  *(u32 *)(param_1 + 0x118) = 1;
  return;
}

// === item_ItemBehaviour_8065f444 (0x8065f444) ===
void item_ItemBehaviour_8065f444(int param_1,u32 *param_2,u32 *param_3)

{
  *(u32 *)(param_1 + 0x1a0) = *param_2;
  *(u32 *)(param_1 + 0x1a4) = param_2[1];
  *(u32 *)(param_1 + 0x1a8) = param_2[2];
  *(u32 *)(param_1 + 0x1ac) = *param_3;
  *(u32 *)(param_1 + 0x1b0) = param_3[1];
  *(u32 *)(param_1 + 0x1b4) = param_3[2];
  *(u32 *)(param_1 + 0x1b8) = 1;
  return;
}

// === item_ItemBehaviour_8065f480 (0x8065f480) ===
/* WARNING: Control flow encountered bad instruction data */

void item_ItemBehaviour_8065f480(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ItemBehaviour_validate_8065f69c (0x8065f69c) ===
void ItemBehaviour_validate_8065f69c(int param_1)

{
  u32 uVar1;
  
  *(u32 *)(*(int *)(param_1 + 0x15c) + 0x10) = uRam00000000;
  ItemBehaviour_validate_8065ec88();
  uVar1 = *(u32 *)(param_1 + 0x14);
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xd8) + 0xc)))(*(int **)(param_1 + 0xd8),1);
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xfc) + 0xc)))(*(int **)(param_1 + 0xfc),1);
  ItemBehaviour_validate_80660674(param_1,uVar1);
  FUN_segment_0__80454b58();
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xd8) + 0xc)))(*(int **)(param_1 + 0xd8),0);
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xfc) + 0xc)))(*(int **)(param_1 + 0xfc),0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x14),0,0,1,0xffffffff);
}

// === ItemBehaviour_assertFail_8065f804 (0x8065f804) ===
void ItemBehaviour_assertFail_8065f804(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ItemBehaviour_validate_8065f9e8 (0x8065f9e8) ===
void ItemBehaviour_validate_8065f9e8(int param_1,u32 *param_2)

{
  u32 uVar1;
  u32 auStack_38 [44];
  
  uVar1 = param_2[3];
  *(u32 *)(*(int *)(param_1 + 0x15c) + 0x10) = param_2[6];
  item_ItemBehaviour_8065f480(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,*param_2);
}

// === ItemBehaviour_assertFail_8065faf8 (0x8065faf8) ===
void ItemBehaviour_assertFail_8065faf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === item_ItemBehaviour_8065fc08 (0x8065fc08) ===
/* WARNING: Control flow encountered bad instruction data */

void item_ItemBehaviour_8065fc08(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === item_ItemBehaviour_8066013c (0x8066013c) ===
/* WARNING: Control flow encountered bad instruction data */

void item_ItemBehaviour_8066013c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === item_ItemBehaviour_806604e0 (0x806604e0) ===
u32 item_ItemBehaviour_806604e0(u32 param_1,u32 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804183e8(uRam00000000,param_2,0,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    FUN_segment_0__80419450(param_2,0);
    iVar1 = FUN_segment_0__804183e8(uRam00000000,param_2,0,0);
  }
  item_ItemBehaviour_80660588(param_1,iVar1);
  return 1;
}

// === item_ItemBehaviour_80660588 (0x80660588) ===
void item_ItemBehaviour_80660588(int param_1,u32 param_2)

{
  u32 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  u32 *puVar5;
  
  if (cRam00000068 == 0) {
    puVar5 = (u32 *)0x70;
    iVar4 = 0;
    do {
      uVar1 = FUN_segment_0__8044364c(*(u32 *)(iRam00000000 + 8),100);
      iVar4 = iVar4 + 1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 0x20);
    cRam00000068 = '\x01';
  }
  uVar2 = (unsigned int)bRam000000f0;
  uVar3 = uVar2 + 1;
  bRam000000f0 = (u8)uVar3;
  if ((uVar3 & 0xff) == 0x20) {
    bRam000000f0 = 0;
  }
  uVar1 = 2;
  if (*(int *)(uVar2 * 4 + 0x70) < iRam00000000) {
    uVar1 = 0;
  }
  FUN_segment_0__806bfdc8
            (*(u32 *)(param_1 + 0xfc),*(u32 *)(param_1 + 0x100),
             *(u32 *)(param_1 + 0xd8),0,param_2);
  FUN_segment_0__806b619c(*(u32 *)(param_1 + 0xd8),*(u32 *)(param_1 + 0xfc));
  FUN_segment_0__806bfef0(*(u32 *)(param_1 + 0xfc),uVar1);
  return;
}

// === ItemBehaviour_validate_80660674 (0x80660674) ===
void ItemBehaviour_validate_80660674(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_38 [2];
  u32 local_30;
  uint uStack_2c;
  u32 local_28;
  
  uVar1 = uRam000000c0;
  local_30 = 0x43300000;
  iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
  local_28 = 0x43300000;
  uStack_2c = (unsigned int)*(u16 *)(iRam00000000 * 0xc);
  *(float *)(iVar2 + 8) = (float)((double)CONCAT44(0x43300000,uStack_2c) - dRam00000090);
  *(u16 *)(iVar2 + 0x34) = *(u16 *)(iVar2 + 0x34) | 1;
  *(u32 *)(iVar2 + 0xc) = uVar1;
  local_38[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar2,7,local_38,0);
}

// === item_ItemBehaviour_8066082c (0x8066082c) ===
void item_ItemBehaviour_8066082c(int param_1,u32 param_2)

{
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xd8) + 0xc)))(*(int **)(param_1 + 0xd8),1);
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xfc) + 0xc)))(*(int **)(param_1 + 0xfc),1);
  ItemBehaviour_validate_80660674(param_1,param_2);
  FUN_segment_0__80454b58();
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xd8) + 0xc)))(*(int **)(param_1 + 0xd8),0);
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0xfc) + 0xc)))(*(int **)(param_1 + 0xfc),0);
  return;
}

// === ItemBehaviour_validate_806608d0 (0x806608d0) ===
void ItemBehaviour_validate_806608d0
               (int param_1,u32 param_2,u32 param_3,u32 param_4,
               u32 param_5,u32 param_6,u32 param_7,u32 param_8)

{
  u32 *puVar1;
  
  puVar1 = *(u32 **)(param_1 + 0x11c);
  if (puVar1 == (u32 *)0) {
    puVar1 = (u32 *)0;
  }
  else {
    *(u32 *)(param_1 + 0x11c) = *puVar1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_6;
  puVar1[4] = param_7;
  *(u32 *)(puVar1 + 5) = param_8;
  puVar1[6] = param_5;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x124,puVar1);
}

// === ItemBehaviour_validate_80660958 (0x80660958) ===
void ItemBehaviour_validate_80660958(int param_1)

{
  if (param_1 == -0x124) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0,0xcf,0);
  }
  if (*(short *)(param_1 + 300) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x124,0);
  }
  return;
}

// === ItemBehaviour_validate_80660a0c (0x80660a0c) ===
void ItemBehaviour_validate_80660a0c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x124,0);
}

// === ItemBehaviour_validate_80660a9c (0x80660a9c) ===
void ItemBehaviour_validate_80660a9c(int param_1)

{
  if (param_1 == -0x124) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0,0xcf,0);
  }
  if (*(short *)(param_1 + 300) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x124,0);
}

// === item_ItemBehaviour_80660b50 (0x80660b50) ===
void item_ItemBehaviour_80660b50(int param_1)

{
  if (*(char *)(param_1 + 0x14d) != 0) {
    if (*(char *)(param_1 + 0x14c) == 0) {
      FUN_segment_0__806bfdc8
                (*(u32 *)(param_1 + 0xfc),*(u32 *)(param_1 + 0x100),
                 *(u32 *)(param_1 + 0xd8),0,*(u32 *)(param_1 + 0x154));
      *(u32 *)(param_1 + 0x14c) = 1;
    }
    else {
      FUN_segment_0__806bfdc8
                (*(u32 *)(param_1 + 0xfc),*(u32 *)(param_1 + 0x100),
                 *(u32 *)(param_1 + 0xd8),0,*(u32 *)(param_1 + 0x150));
      *(u32 *)(param_1 + 0x14c) = 0;
    }
    *(u32 *)(param_1 + 0x14d) = 0;
  }
  return;
}

// === ItemBehaviour_validate_80660bdc (0x80660bdc) ===
void ItemBehaviour_validate_80660bdc(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xb8,0);
}

// === item_ItemBehaviour_80660d78 (0x80660d78) ===
/* WARNING: Control flow encountered bad instruction data */

void item_ItemBehaviour_80660d78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ItemBehaviour_validate_80660e24 (0x80660e24) ===
int ItemBehaviour_validate_80660e24(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === item_ItemBehaviour_80660e64 (0x80660e64) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void item_ItemBehaviour_80660e64(void)

{
  uRam00000010 = uRam00000000;
  uRam00000014 = uRam000000cc;
  uRam00000018 = uRam0000000c;
  FUN_segment_0__8077efa4(0x10,0,4);
  uRam00000028 = uRam00000000;
  uRam0000002c = uRam000000cc;
  _DAT_00000030 = uRam00000000;
  FUN_segment_0__8077efa4(0x28,0,0x1c);
  uRam00000040 = uRam00000000;
  uRam00000044 = uRam00000008;
  uRam00000048 = uRam00000000;
  FUN_segment_0__8077efa4(0x40,0,0x34);
  uRam00000058 = uRam00000000;
  uRam0000005c = uRam00000000;
  uRam00000060 = uRam00000000;
  FUN_segment_0__8077efa4(0x58,0,0x4c);
  return;
}

// === ItemBehaviour_validate_80660f4c (0x80660f4c) ===
u32 ItemBehaviour_validate_80660f4c(u32 *param_1)

{
  bool bVar1;
  u32 *puVar2;
  u32 *puVar3;
  int *piVar4;
  
  if (param_1 == (u32 *)0) {
    return 0;
  }
  *param_1 = 0;
  puVar2 = g_Ram_uint;
  bVar1 = g_Ram_uint != (u32 *)0;
  if ((bVar1) && (g_Ram_uint = (u32 *)0, bVar1)) {
    puVar2[4] = 0;
    piVar4 = (int *)puVar2[0x17];
    if ((piVar4 != (int *)0) && (piVar4 != (int *)0)) {
      ((void(*)(...))(*(void**)(*piVar4 + 8)))(piVar4,1);
    }
    puVar2[0x17] = 0;
    if (puVar2 != (u32 *)0) {
      *puVar2 = 0;
      puVar3 = g_Ram_uint;
      if (g_Ram_uint != (u32 *)0) {
        g_Ram_uint = (u32 *)0;
        FUN_segment_0__80661284(puVar3,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(puVar2,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,0);
}

// === PlayerSub18_checkItemCollision (0x80574a64) ===
void PlayerSub18_checkItemCollision(void) { return; }

// === PlayerSub10_activateMushroom (0x805818c0) ===
void PlayerSub10_activateMushroom(void) { return; }

// === PlayerSub10_activateMega (0x80582ffc) ===
void PlayerSub10_activateMega(void) { return; }

// === PlayerSub10_activateBullet (0x80587d94) ===
void PlayerSub10_activateBullet(void) { return; }

// === cancelBullet (0x8059e600) ===
void cancelBullet(void) { return; }

// === createStaticInstance__Q23Net11ITEMHandlerFv (0x8065e5d4) ===
void createStaticInstance__Q23Net11ITEMHandlerFv(void) { return; }

// === ITEMHandler_construct (0x8065e890) ===
void ITEMHandler_construct(void) { return; }

// === ITEMHandler_update (0x8065ead0) ===
void ITEMHandler_update(void) { return; }

// === ITEMHandler_getPlayerStoredItem (0x8065f704) ===
void ITEMHandler_getPlayerStoredItem(void) { return; }

// === ITEMHandler_getPlayerMode (0x8065fa50) ===
void ITEMHandler_getPlayerMode(void) { return; }

// === ITEMHandler_importNewPackets (0x80660224) ===
void ITEMHandler_importNewPackets(void) { return; }

// === initItemObjProperties (0x80792fe4) ===
void initItemObjProperties(void) { return; }

// === copyItemObjProperties (0x80793364) ===
void copyItemObjProperties(void) { return; }

// === ItemHolderPlayerb4_use (0x80793df8) ===
void ItemHolderPlayerb4_use(void) { return; }

// === ItemHolderPlayerb4_calcRotatingItemObjs (0x807966d8) ===
void ItemHolderPlayerb4_calcRotatingItemObjs(void) { return; }

// === ItemHolderItem_initObjs (0x807981b4) ===
void ItemHolderItem_initObjs(void) { return; }

// === ItemHolderItem_spawn (0x807982ec) ===
void ItemHolderItem_spawn(void) { return; }

// === ItemHolderItem_despawn (0x80798450) ===
void ItemHolderItem_despawn(void) { return; }

// === ItemHolderItem_update (0x80798958) ===
void ItemHolderItem_update(void) { return; }

// === ItemHolderPlayer_init (0x80799bc8) ===
void ItemHolderPlayer_init(void) { return; }

// === ItemHolderPlayer_update (0x80799e10) ===
void ItemHolderPlayer_update(void) { return; }

// === ItemHolder_destroy (0x8079b484) ===
void ItemHolder_destroy(void) { return; }

// === ItemHolder_construct (0x8079b7c0) ===
void ItemHolder_construct(void) { return; }

// === ItemHolderPlayer_destroy (0x8079ba04) ===
void ItemHolderPlayer_destroy(void) { return; }

// === ItemHolder_init (0x8079bc7c) ===
void ItemHolder_init(void) { return; }

// === ItemHolder_update (0x8079bd38) ===
void ItemHolder_update(void) { return; }

// === ItemHolder_checkPlayerCollision (0x8079c194) ===
void ItemHolder_checkPlayerCollision(void) { return; }

// === ItemHolder_initItemDirect (0x8079c338) ===
void ItemHolder_initItemDirect(void) { return; }

// === ItemHolder_spawnDirect (0x8079c614) ===
void ItemHolder_spawnDirect(void) { return; }

// === ItemHolder_spawnTc (0x8079c780) ===
void ItemHolder_spawnTc(void) { return; }

// === ItemObj_init (0x807a070c) ===
void ItemObj_init(void) { return; }

// === ItemObj_spawn (0x807a0a38) ===
void ItemObj_spawn(void) { return; }

// === ItemObj_update (0x807a14d4) ===
void ItemObj_update(void) { return; }

// === ItemObj_loadTeamsModel (0x807a2868) ===
void ItemObj_loadTeamsModel(void) { return; }

// === ItemObj_checkPlayerCollision (0x807a39bc) ===
void ItemObj_checkPlayerCollision(void) { return; }

// === ItemObjBomb_makeArray (0x807a66ac) ===
void ItemObjBomb_makeArray(void) { return; }

// === ItemObjBomb_loadModel (0x807a762c) ===
void ItemObjBomb_loadModel(void) { return; }

// === ItemObjFib_makeArray (0x807a9d90) ===
void ItemObjFib_makeArray(void) { return; }

// === ItemHolderPlayer_useBlooper (0x807aa69c) ===
void ItemHolderPlayer_useBlooper(void) { return; }

// === ItemObjRed_makeArray (0x807ac4d8) ===
void ItemObjRed_makeArray(void) { return; }

// === ItemObjBlue_makeArray (0x807adec8) ===
void ItemObjBlue_makeArray(void) { return; }

// === ItemObjBlue_loadModel (0x807ae4f0) ===
void ItemObjBlue_loadModel(void) { return; }

// === ItemObjBlue_tryLockPlayer (0x807b6a98) ===
void ItemObjBlue_tryLockPlayer(void) { return; }

// === ItemHolderPlayer_useLightning (0x807ba064) ===
void ItemHolderPlayer_useLightning(void) { return; }

// === ItemRoulette_update (0x807bc864) ===
void ItemRoulette_update(void) { return; }

// === ItemSlotTable_createInstance (0x807bcc64) ===
void ItemSlotTable_createInstance(void) { return; }

// === ItemSlotData_scaleTableForPlayerCount (0x807bd208) ===
void ItemSlotData_scaleTableForPlayerCount(void) { return; }

// === ItemSlotData_checkSpawnTimer (0x807bd868) ===
void ItemSlotData_checkSpawnTimer(void) { return; }

// === ItemSlotData_decideItem (0x807bd914) ===
void ItemSlotData_decideItem(void) { return; }

// === ItemSlotData_updateTimers (0x807bded4) ===
void ItemSlotData_updateTimers(void) { return; }