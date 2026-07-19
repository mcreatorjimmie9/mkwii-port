// KartMovement module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 366 decompiled functions
// Address range: 0x80580128 - 0x805a6f4c

#include "KartMovement.h"
#include "../types.h"
#include "../stubs.h"


// === PlayerSub10Bike_getWheelieSoftSpeedLimitBonus (0x8058a80c) ===
void PlayerSub10Bike_getWheelieSoftSpeedLimitBonus(int param_1)

{
  bool bVar1;
  short sVar2;
  double dVar3;
  
  sVar2 = *(short *)(param_1 + 0x996);
  if ((sVar2 < 1) || (*(short *)(param_1 + 0x99a) <= sVar2)) {
    if ((*(short *)(param_1 + 0x99a) <= sVar2) || (*(short *)(param_1 + 0x994) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2a4) + 0x74);
    }
  }
  else {
    KartPhysics_Wheel_validate_80595618(param_1,0);
  }
  sVar2 = *(short *)(param_1 + 0x996) + 1;
  *(short *)(param_1 + 0x996) = sVar2;
  if (200 < sVar2) {
    *(u16 *)(param_1 + 0x996) = 100;
  }
  bVar1 = false;
  if (((*(char *)(param_1 + 0x46) != 0) || (*(char *)(param_1 + 0x47) != 0)) ||
     (*(char *)(param_1 + 0x48) != 0)) {
    dVar3 = (double)FUN_segment_0__8047e63c(*(u32 *)(param_1 + 0x118));
    if ((double)g_Ram_float <= dVar3) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    KartPhysics_Wheel_validate_80595618(param_1,0);
    *(u16 *)(param_1 + 0x996) = 0;
  }
  return;
}

// === KartPhysics_Wheel_validate_80590040 (0x80590040) ===
void KartPhysics_Wheel_validate_80590040(int param_1)

{
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x260) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x260) + 0x74);
  }
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x268) + 0x74);
  }
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x264) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x264) + 0x74);
  }
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x26c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x26c) + 0x74);
  }
  if (*(int *)(param_1 + 0x1f8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x1f8) + 0x74);
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x1f0) + 0x74);
  }
  if (*(int *)(param_1 + 600) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 600) + 0x74);
  }
  if (*(int *)(param_1 + 0x294) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x294) + 0x74);
  }
  if (*(int *)(param_1 + 0x298) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x298) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80590764 (0x80590764) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartPhysics_Wheel_80590764(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartPhysics_Wheel_80590bf4 (0x80590bf4) ===
void kart_KartPhysics_Wheel_80590bf4(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x29) == 0) {
    *(u32 *)(param_1 + 0x25) = 0;
    *(u32 *)(param_1 + 0x29) = 1;
    *(u32 *)(param_1 + 0x2a) = 0;
  }
  iVar1 = FUN_segment_0__804225e8(uRam00000000);
  if (iVar1 < 1) {
    uVar2 = 0;
    if (((param_3 & 0x40) != 0) || ((param_3 & 0x80) != 0)) {
      uVar2 = 1;
    }
    *(byte *)(param_1 + 0x25) = (u8)(-(*(byte *)(param_1 + 0x25) | uVar2) >> 0x1f);
    if ((param_3 & 0x100) != 0) {
      *(u32 *)(param_1 + 0x2a) = 1;
    }
  }
  if ((param_3 & 2) == 0) {
    if (((param_3 & 4) == 0) || (*(char *)(param_1 + 0xab) != 0)) {
      if ((param_3 & 8) == 0) {
        if ((param_3 & 0x10) == 0) {
          if ((param_3 & 0x400) == 0) {
            if (((param_3 & 1) == 0) ||
               ((*(char *)(param_1 + 0x143) == 0 && (*(char *)(param_1 + 0x149) == 0)))) {
              if (((param_3 & 0x800000) == 0) || (*(char *)(param_1 + 0x143) == 0)) {
                if ((param_3 & 0x400000) == 0) {
                  if ((((param_3 & 0x800) == 0) || (*(char *)(param_1 + 0xab) != 0)) ||
                     (3 < (int)param_4)) {
                    if (((param_3 & 1) == 0) || (param_4 != 5)) {
                      if ((param_3 & 0x200000) == 0) {
                        *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
                      }
                      else {
                        *(u32 *)(param_1 + 0x31) = 1;
                      }
                    }
                    else {
                      *(u32 *)(param_1 + param_2 * 4 + 0x164) = 4;
                    }
                  }
                  else {
                    *(u32 *)(param_1 + param_2 * 4 + 0x164) = 3;
                  }
                }
                else if (param_4 == 7) {
                  param_1 = param_1 + param_2 * 4;
                  *(u32 *)(param_1 + 0x164) = 5;
                  *(u32 *)(param_1 + 0x184) = 0;
                }
                else {
                  *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
                }
              }
              else if (param_4 == 2) {
                if (*(char *)(param_1 + 0xb) == 0) {
                  param_1 = param_1 + param_2 * 4;
                  *(u32 *)(param_1 + 0x164) = 1;
                  *(u32 *)(param_1 + 0x184) = 3;
                }
              }
              else {
                *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
              }
            }
            else if (param_4 == 1) {
              if (*(char *)(param_1 + 0x143) == 0) {
                if (*(char *)(param_1 + 0x149) != 0) {
                  param_1 = param_1 + param_2 * 4;
                  *(u32 *)(param_1 + 0x164) = 0;
                  *(u32 *)(param_1 + 0x184) = 0xf;
                }
              }
              else if (*(char *)(param_1 + 0xb) == 0) {
                param_1 = param_1 + param_2 * 4;
                *(u32 *)(param_1 + 0x164) = 0;
                *(u32 *)(param_1 + 0x184) = 0xf;
              }
            }
            else {
              *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
            }
          }
          else if (param_4 == 7) {
            param_1 = param_1 + param_2 * 4;
            *(u32 *)(param_1 + 0x164) = 0;
            *(u32 *)(param_1 + 0x184) = 0xe;
          }
          else {
            *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
          }
        }
        else if (param_4 == 0) {
          param_1 = param_1 + param_2 * 4;
          *(u32 *)(param_1 + 0x164) = 0;
          *(u32 *)(param_1 + 0x184) = 0xb;
        }
        else if (param_4 == 1) {
          param_1 = param_1 + param_2 * 4;
          *(u32 *)(param_1 + 0x164) = 0;
          *(u32 *)(param_1 + 0x184) = 0xc;
        }
        else if (param_4 == 6) {
          param_1 = param_1 + param_2 * 4;
          *(u32 *)(param_1 + 0x164) = 0;
          *(u32 *)(param_1 + 0x184) = 0xd;
        }
        else if (param_4 == 3) {
          *(u32 *)(param_1 + param_2 * 4 + 0x164) = 6;
        }
        else if (param_4 == 5) {
          *(u32 *)(param_1 + param_2 * 4 + 0x164) = 2;
          *(u32 *)(param_1 + 0x6b) = 1;
        }
        else if (param_4 == 2) {
          param_1 = param_1 + param_2 * 4;
          *(u32 *)(param_1 + 0x164) = 5;
          *(u32 *)(param_1 + 0x184) = 1;
        }
        else if (param_4 == 4) {
          param_1 = param_1 + param_2 * 4;
          *(u32 *)(param_1 + 0x164) = 1;
          *(u32 *)(param_1 + 0x184) = 1;
        }
        else {
          *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
        }
      }
      else if (param_4 == 0) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 0;
        *(u32 *)(param_1 + 0x184) = 7;
      }
      else if (param_4 == 1) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 0;
        *(u32 *)(param_1 + 0x184) = 8;
      }
      else if (param_4 == 5) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 0;
        *(u32 *)(param_1 + 0x184) = 9;
      }
      else if (param_4 == 7) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 0;
        *(u32 *)(param_1 + 0x184) = 10;
      }
      else if (param_4 == 2) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 5;
        *(u32 *)(param_1 + 0x184) = 0;
      }
      else if (param_4 == 6) {
        *(u32 *)(param_1 + param_2 * 4 + 0x164) = 7;
      }
      else if (param_4 == 4) {
        param_1 = param_1 + param_2 * 4;
        *(u32 *)(param_1 + 0x164) = 1;
        *(u32 *)(param_1 + 0x184) = 0;
      }
      else {
        *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
      }
    }
    else {
      *(u32 *)(param_1 + 0xac) = 1;
      if (param_4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x80590d6c */
                    /* WARNING: Treating indirect jump as call */
        ((void(*)(...))(*(void**)(param_4 << 2)))();
        return;
      }
      *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
    }
  }
  else if (param_4 == 0) {
    param_1 = param_1 + param_2 * 4;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x184) = 0;
  }
  else if (param_4 == 1) {
    param_1 = param_1 + param_2 * 4;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x184) = 1;
  }
  else if (param_4 == 5) {
    if (*(char *)(param_1 + 0xb) == 0) {
      param_1 = param_1 + param_2 * 4;
      *(u32 *)(param_1 + 0x164) = 0;
      *(u32 *)(param_1 + 0x184) = 2;
    }
    else {
      *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
    }
  }
  else {
    *(u32 *)(param_1 + param_2 * 4 + 0x164) = 0xffffffff;
  }
  return;
}

// === kart_KartPhysics_Wheel_80591278 (0x80591278) ===
void kart_KartPhysics_Wheel_80591278(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  uVar4 = param_3 & 0x40000000;
  bVar8 = false;
  if ((uVar4 != 0) && (param_4 == 1)) {
    bVar8 = true;
  }
  bVar9 = false;
  if (((param_3 & 0x1000) != 0) && (param_4 == 5)) {
    bVar9 = true;
  }
  bVar5 = false;
  if (((param_3 & 0x2000) != 0) && ((param_4 == 1 || (param_4 == 2)))) {
    bVar5 = true;
  }
  bVar2 = false;
  if (((param_3 & 0x100000) != 0) && (param_4 == 7)) {
    bVar2 = true;
  }
  bVar10 = false;
  if ((uVar4 != 0) && (param_4 == 3)) {
    bVar10 = true;
  }
  bVar11 = false;
  if ((uVar4 != 0) && (param_4 == 0)) {
    bVar11 = true;
  }
  bVar7 = true;
  bVar3 = false;
  if ((bVar2) || (bVar10)) {
    bVar3 = true;
  }
  if ((!bVar3) && (!bVar11)) {
    bVar7 = false;
  }
  if (!bVar8) {
    if (bVar9) {
      KartPhysics_Wheel_validate_805962bc(param_1);
    }
    else if (((param_3 & 0x40109000) != 0 || bVar5) && (!bVar7)) {
      iVar6 = FUN_segment_0__8047dc28(*(u32 *)(param_1 + 0x118));
      iVar6 = *(int *)(*(int *)(iVar6 + 8) + 0x8c) + (param_2 & 0xff) * 0x30;
      *(float *)(param_1 + 0x7a4) = *(float *)(param_1 + 0x7a4) + *(float *)(iVar6 + 0xc);
      *(float *)(param_1 + 0x7a8) = *(float *)(param_1 + 0x7a8) + *(float *)(iVar6 + 0x10);
      fVar1 = *(float *)(iVar6 + 0x14);
      *(int *)(param_1 + 0x7b0) = *(int *)(param_1 + 0x7b0) + 1;
      *(float *)(param_1 + 0x7ac) = *(float *)(param_1 + 0x7ac) + fVar1;
    }
  }
  return;
}

// === kart_KartPhysics_Wheel_80591420 (0x80591420) ===
void kart_KartPhysics_Wheel_80591420(int param_1,u16 param_2)

{
  *(u32 *)(param_1 + 0x15) = 1;
  *(u16 *)(param_1 + 0x18) = param_2;
  *(u16 *)(param_1 + 0x16) = 0;
  return;
}

// === kart_KartPhysics_Wheel_80591438 (0x80591438) ===
void kart_KartPhysics_Wheel_80591438(int param_1)

{
  KartPhysics_Wheel_assertFail_805915f0(param_1,*(u32 *)(param_1 + 0x530),0,1,0);
  KartPhysics_Wheel_assertFail_805915f0(param_1,*(u32 *)(param_1 + 0x530),1,2,1);
  if (*(char *)(param_1 + 0xe) != 0) {
    if ((*(char *)(param_1 + 0x7b9) == 0) &&
       ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,
                 1);
    }
    else {
      FUN_segment_0__805871ec
                (param_1,*(u32 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,
                 1);
    }
    if ((*(char *)(param_1 + 0x7ba) == 0) &&
       ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,
                 1);
    }
    else {
      FUN_segment_0__805871ec
                (param_1,*(u32 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,
                 1);
    }
  }
  return;
}

// === kart_KartPhysics_Wheel_80591550 (0x80591550) ===
void kart_KartPhysics_Wheel_80591550(int param_1)

{
  KartPhysics_Wheel_assertFail_80591780(param_1,*(u32 *)(param_1 + 0x530),0,1,0);
  KartPhysics_Wheel_assertFail_80591780(param_1,*(u32 *)(param_1 + 0x530),1,2,1);
  if (*(char *)(param_1 + 0xe) != 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  return;
}

// === KartPhysics_Wheel_assertFail_805915f0 (0x805915f0) ===
void KartPhysics_Wheel_assertFail_805915f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartPhysics_Wheel_assertFail_80591780 (0x80591780) ===
void KartPhysics_Wheel_assertFail_80591780(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === kart_KartPhysics_Wheel_805918e0 (0x805918e0) ===
void kart_KartPhysics_Wheel_805918e0(int param_1)

{
  KartPhysics_Wheel_assertFail_805915f0(param_1,*(u32 *)(param_1 + 0x530),0x22,0x23,0);
  KartPhysics_Wheel_assertFail_805915f0(param_1,*(u32 *)(param_1 + 0x530),0x23,0x24,1);
  return;
}

// === kart_KartPhysics_Wheel_80591934 (0x80591934) ===
void kart_KartPhysics_Wheel_80591934(int param_1)

{
  KartPhysics_Wheel_assertFail_80591780(param_1,*(u32 *)(param_1 + 0x530),0x22,0x23,0);
  KartPhysics_Wheel_assertFail_80591780(param_1,*(u32 *)(param_1 + 0x530),0x23,0x24,1);
  return;
}

// === kart_KartPhysics_Wheel_80591988 (0x80591988) ===
void kart_KartPhysics_Wheel_80591988(int param_1)

{
  if ((*(char *)(param_1 + 0x7b9) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
  }
  if ((*(char *)(param_1 + 0x7ba) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  return;
}

// === kart_KartPhysics_Wheel_80591a64 (0x80591a64) ===
void kart_KartPhysics_Wheel_80591a64(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_80591ac8 (0x80591ac8) ===
void KartPhysics_Wheel_validate_80591ac8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 2;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 8);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  iVar2 = 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x10);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 6);
  return;
}

// === kart_KartPhysics_Wheel_80591bf0 (0x80591bf0) ===
void kart_KartPhysics_Wheel_80591bf0(int param_1)

{
  if ((*(char *)(param_1 + 0x7b9) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
  }
  if ((*(char *)(param_1 + 0x7ba) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  return;
}

// === kart_KartPhysics_Wheel_80591ccc (0x80591ccc) ===
void kart_KartPhysics_Wheel_80591ccc(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === kart_KartPhysics_Wheel_80591d30 (0x80591d30) ===
void kart_KartPhysics_Wheel_80591d30(int param_1)

{
  if ((*(char *)(param_1 + 0x7b9) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
  }
  if ((*(char *)(param_1 + 0x7ba) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  return;
}

// === kart_KartPhysics_Wheel_80591e0c (0x80591e0c) ===
void kart_KartPhysics_Wheel_80591e0c(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_80591e70 (0x80591e70) ===
void KartPhysics_Wheel_validate_80591e70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x530) + 0x58);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x530) + 0x5c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80591f60 (0x80591f60) ===
void kart_KartPhysics_Wheel_80591f60(int param_1)

{
  if ((*(char *)(param_1 + 0x7b9) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
  }
  if ((*(char *)(param_1 + 0x7ba) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  return;
}

// === kart_KartPhysics_Wheel_8059203c (0x8059203c) ===
void kart_KartPhysics_Wheel_8059203c(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_805920a0 (0x805920a0) ===
void KartPhysics_Wheel_validate_805920a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x530) + 0x60);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x530) + 100);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === KartPhysics_Wheel_validate_80592204 (0x80592204) ===
void KartPhysics_Wheel_validate_80592204(u32 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + param_3 * 4);
  while( true ) {
    if (param_4 <= param_3) {
      return;
    }
    if (*piVar1 != 0) break;
    piVar1 = piVar1 + 1;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*piVar1 + 0x74);
}

// === kart_KartPhysics_Wheel_805922b8 (0x805922b8) ===
void kart_KartPhysics_Wheel_805922b8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x7b9) != 0) ||
     (*(uint *)(param_1 + 0x80) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
    piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x28);
    iVar2 = 10;
    do {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0xd);
  }
  if ((*(char *)(param_1 + 0x7ba) != 0) ||
     (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
    piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x34);
    iVar2 = 0xd;
    do {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}

// === kart_KartPhysics_Wheel_80592398 (0x80592398) ===
void kart_KartPhysics_Wheel_80592398(int param_1)

{
  FUN_segment_0__80587608
            (param_1,*(u32 *)(param_1 + 0x530),10,0xd,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__80587608
            (param_1,*(u32 *)(param_1 + 0x530),0xd,0x10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_805923fc (0x805923fc) ===
void KartPhysics_Wheel_validate_805923fc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xb;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x2c);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xd);
  iVar2 = 0xe;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x38);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x10);
  return;
}

// === kart_KartPhysics_Wheel_80592524 (0x80592524) ===
void kart_KartPhysics_Wheel_80592524(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x7b9) != 0) ||
     (*(uint *)(param_1 + 0x80) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
    piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x40);
    iVar2 = 0x10;
    do {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x13);
  }
  if ((*(char *)(param_1 + 0x7ba) != 0) ||
     (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
    piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x4c);
    iVar2 = 0x13;
    do {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x16);
  }
  return;
}

// === kart_KartPhysics_Wheel_80592604 (0x80592604) ===
void kart_KartPhysics_Wheel_80592604(int param_1)

{
  FUN_segment_0__80587608
            (param_1,*(u32 *)(param_1 + 0x530),0x10,0x13,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__80587608
            (param_1,*(u32 *)(param_1 + 0x530),0x13,0x16,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_80592668 (0x80592668) ===
void KartPhysics_Wheel_validate_80592668(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x11;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x44);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x13);
  iVar2 = 0x14;
  piVar1 = (int *)(*(int *)(param_1 + 0x530) + 0x50);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x16);
  return;
}

// === kart_KartPhysics_Wheel_80592790 (0x80592790) ===
void kart_KartPhysics_Wheel_80592790(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + param_5 + 0x7b9) != 0) ||
     (*(uint *)(param_1 + (param_5 & 0xff) * 4 + 0x80) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
    piVar1 = (int *)(param_2 + param_3 * 4);
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      piVar1 = piVar1 + 1;
    }
  }
  return;
}

// === KartPhysics_Wheel_validate_80592848 (0x80592848) ===
void KartPhysics_Wheel_validate_80592848(u32 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + param_3 * 4);
  while( true ) {
    if (param_4 <= param_3) {
      return;
    }
    if (*piVar1 != 0) break;
    piVar1 = piVar1 + 1;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*piVar1 + 0x74);
}

// === kart_KartPhysics_Wheel_805928fc (0x805928fc) ===
void kart_KartPhysics_Wheel_805928fc(int param_1,int param_2)

{
  KartPhysics_Wheel_assertFail_805915f0(param_1,*(u32 *)(param_1 + 0x614),0,1,1);
  if (*(char *)(param_1 + 0xe) != 0) {
    if (param_2 == -1) {
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x614),0x1a,0x1b,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        FUN_segment_0__805871ec
                  (param_1,*(u32 *)(param_1 + 0x614),0x1a,0x1b,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
    }
    else if (param_2 == 1) {
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x614),0x1b,0x1c,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        FUN_segment_0__805871ec
                  (param_1,*(u32 *)(param_1 + 0x614),0x1b,0x1c,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
    }
  }
  return;
}

// === kart_KartPhysics_Wheel_80592a1c (0x80592a1c) ===
void kart_KartPhysics_Wheel_80592a1c(int param_1)

{
  KartPhysics_Wheel_assertFail_80591780(param_1,*(u32 *)(param_1 + 0x614),0,1,1);
  if (*(char *)(param_1 + 0xe) != 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x1a,0x1b,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x1b,0x1c,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  return;
}

// === kart_KartPhysics_Wheel_80592b38 (0x80592b38) ===
void kart_KartPhysics_Wheel_80592b38
               (int param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,
               u32 param_6,u32 param_7)

{
  if (param_2 == -1) {
    if (*(char *)(param_1 + 0xd) != 0) {
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x614),param_3,param_4,param_1 + 0x818,param_7,
                   1);
        return;
      }
      FUN_segment_0__805871ec
                (param_1,*(u32 *)(param_1 + 0x614),param_3,param_4,param_1 + 0x818,param_7,1)
      ;
      return;
    }
    if ((*(char *)(param_1 + 0x7ba) == 0) &&
       ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x614),param_3,param_4,param_1 + 0x6f4,param_7,1)
      ;
      return;
    }
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x614),param_3,param_4,param_1 + 0x6f4,param_7,1);
    return;
  }
  if (param_2 != 1) {
    if (param_2 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0xd) == 0) {
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x6f4,param_7,1);
        return;
      }
      FUN_segment_0__805871ec
                (param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x6f4,param_7,1);
      return;
    }
    if ((*(char *)(param_1 + 0x7ba) == 0) &&
       ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x818,param_7,1);
      return;
    }
    FUN_segment_0__805871ec(param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x818,param_7,1);
    return;
  }
  if (*(char *)(param_1 + 0xd) != 0) {
    if ((*(char *)(param_1 + 0x7ba) == 0) &&
       ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x614),param_5,param_6,param_1 + 0x818,param_7,1)
      ;
      return;
    }
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x614),param_5,param_6,param_1 + 0x818,param_7,1);
    return;
  }
  if ((*(char *)(param_1 + 0x7ba) == 0) &&
     ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),param_5,param_6,param_1 + 0x6f4,param_7,1);
    return;
  }
  FUN_segment_0__805871ec
            (param_1,*(u32 *)(param_1 + 0x614),param_5,param_6,param_1 + 0x6f4,param_7,1);
  return;
}

// === kart_KartPhysics_Wheel_80592d50 (0x80592d50) ===
void kart_KartPhysics_Wheel_80592d50(int param_1,u32 param_2)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  local_18 = *(u32 *)(param_1 + 0x7c8);
  local_14 = *(u32 *)(param_1 + 0x7cc);
  local_10 = *(u32 *)(param_1 + 2000);
  kart_KartPhysics_Wheel_80592b38(param_1,param_2,1,3,3,5,&local_18);
  return;
}

// === kart_KartPhysics_Wheel_80592d9c (0x80592d9c) ===
void kart_KartPhysics_Wheel_80592d9c(int param_1,int param_2)

{
  if (param_2 == -1) {
    if (*(char *)(param_1 + 0xd) == 0) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x614),1,3,param_1 + 0x6f4,param_1 + 0x7c8,1);
      return;
    }
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),1,3,param_1 + 0x818,param_1 + 0x7c8,1);
    return;
  }
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0xd) == 0) {
      FUN_segment_0__805873a0
                (param_1,*(u32 *)(param_1 + 0x614),3,5,param_1 + 0x6f4,param_1 + 0x7c8,1);
      return;
    }
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),3,5,param_1 + 0x818,param_1 + 0x7c8,1);
    return;
  }
  if (param_2 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x6f4,param_1 + 0x7c8,1);
    return;
  }
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x614),5,7,param_1 + 0x818,param_1 + 0x7c8,1);
  return;
}

// === kart_KartPhysics_Wheel_80592e84 (0x80592e84) ===
void kart_KartPhysics_Wheel_80592e84(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == -1) {
    if ((*(char *)(param_1 + 0x7ba) != 0) ||
       (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
      iVar2 = 7;
      piVar1 = (int *)(*(int *)(param_1 + 0x614) + 0x1c);
      do {
        if ((int *)*piVar1 != (int *)0) {
          (**(code **)(*(int *)*piVar1 + 0xc))();
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar2 < 10);
    }
  }
  else if (param_2 == 1) {
    if ((*(char *)(param_1 + 0x7ba) != 0) ||
       (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
      iVar2 = 10;
      piVar1 = (int *)(*(int *)(param_1 + 0x614) + 0x28);
      do {
        if ((int *)*piVar1 != (int *)0) {
          (**(code **)(*(int *)*piVar1 + 0xc))();
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar2 < 0xd);
    }
  }
  else if ((param_2 == 0) &&
          ((*(char *)(param_1 + 0x7ba) != 0 ||
           (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))))) {
    iVar2 = 0xd;
    piVar1 = (int *)(*(int *)(param_1 + 0x614) + 0x34);
    do {
      if ((int *)*piVar1 != (int *)0) {
        (**(code **)(*(int *)*piVar1 + 0xc))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 0x10);
  }
  return;
}

// === kart_KartPhysics_Wheel_80592fcc (0x80592fcc) ===
void kart_KartPhysics_Wheel_80592fcc(int param_1)

{
  if (*(char *)(param_1 + 0xd) == 0) {
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),7,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),10,0xd,param_1 + 0x6f4,param_1 + 0x7c8,1);
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),0xd,0x10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  else {
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),7,10,param_1 + 0x818,param_1 + 0x7c8,1);
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),10,0xd,param_1 + 0x818,param_1 + 0x7c8,1);
    FUN_segment_0__80587608
              (param_1,*(u32 *)(param_1 + 0x614),0xd,0x10,param_1 + 0x818,param_1 + 0x7c8,1);
  }
  return;
}

// === KartPhysics_Wheel_validate_805930bc (0x805930bc) ===
void KartPhysics_Wheel_validate_805930bc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 8;
  piVar1 = (int *)(*(int *)(param_1 + 0x614) + 0x20);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 10);
  iVar2 = 0xb;
  piVar1 = (int *)(*(int *)(param_1 + 0x614) + 0x2c);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0xd);
  return;
}

// === kart_KartPhysics_Wheel_805931e4 (0x805931e4) ===
void kart_KartPhysics_Wheel_805931e4(int param_1,u32 param_2)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  local_18 = *(u32 *)(param_1 + 0x7c8);
  local_14 = *(u32 *)(param_1 + 0x7cc);
  local_10 = *(u32 *)(param_1 + 2000);
  kart_KartPhysics_Wheel_80592b38(param_1,param_2,0x10,0x11,0x11,0x12,&local_18);
  return;
}

// === kart_KartPhysics_Wheel_80593230 (0x80593230) ===
void kart_KartPhysics_Wheel_80593230(int param_1)

{
  if (*(char *)(param_1 + 0xd) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x10,0x11,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x11,0x12,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  else {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x10,0x11,param_1 + 0x818,param_1 + 0x7c8,1)
    ;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x11,0x12,param_1 + 0x818,param_1 + 0x7c8,1)
    ;
  }
  return;
}

// === KartPhysics_Wheel_validate_805932e0 (0x805932e0) ===
void KartPhysics_Wheel_validate_805932e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x614) + 0x40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x614) + 0x44);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_805933d0 (0x805933d0) ===
void kart_KartPhysics_Wheel_805933d0(int param_1,u32 param_2)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  u32 local_c;
  u32 local_8;
  u32 local_4;
  
  local_10 = *(u32 *)(param_1 + 0x6d8);
  local_14 = *(u32 *)(param_1 + 0x7cc);
  local_18 = *(u32 *)(param_1 + 0x6d0);
  local_c = local_18;
  local_8 = local_14;
  local_4 = local_10;
  kart_KartPhysics_Wheel_80592b38(param_1,param_2,0x13,0x14,0x12,0x13,&local_18);
  return;
}

// === kart_KartPhysics_Wheel_80593434 (0x80593434) ===
void kart_KartPhysics_Wheel_80593434(int param_1)

{
  u32 in_r10;
  
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x614),0x12,0x13,param_1 + 0x818,param_1 + 0x7c8,1,
             in_r10,*(u32 *)(param_1 + 0x6d0),*(u32 *)(param_1 + 0x7cc),
             *(u32 *)(param_1 + 0x6d8));
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x614),0x13,0x14,param_1 + 0x818,param_1 + 0x7c8,1);
  return;
}

// === kart_KartPhysics_Wheel_805934b0 (0x805934b0) ===
void kart_KartPhysics_Wheel_805934b0(int param_1,u32 param_2)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  local_18 = *(u32 *)(param_1 + 0x7c8);
  local_14 = *(u32 *)(param_1 + 0x7cc);
  local_10 = *(u32 *)(param_1 + 2000);
  kart_KartPhysics_Wheel_80592b38(param_1,param_2,0x15,0x16,0x14,0x15,&local_18);
  return;
}

// === kart_KartPhysics_Wheel_805934fc (0x805934fc) ===
void kart_KartPhysics_Wheel_805934fc(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x614),0x14,0x15,param_1 + 0x818,param_1 + 0x7c8,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x614),0x15,0x16,param_1 + 0x818,param_1 + 0x7c8,1);
  return;
}

// === KartPhysics_Wheel_validate_80593560 (0x80593560) ===
void KartPhysics_Wheel_validate_80593560(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((*(char *)(param_1 + 0x25) == 0) || (*(char *)(param_1 + 0x27) != 0)) &&
      (*(char *)(param_1 + 0x28) == 0)) &&
     ((*(char *)(param_1 + 7) == 0 && (*(char *)(iRam00000000 + 0x10) == 0)))) {
    iVar2 = param_1 + 0x20;
    iVar3 = 8;
    do {
      if (*(int *)(iVar2 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(iVar2 + 0x2d8) + 0x74);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0xc);
    iVar2 = param_1 + 0x20;
    iVar3 = 8;
    do {
      if (*(int **)(iVar2 + 0x2d8) != (int *)0) {
        iVar1 = iVar3 >> 0x1f;
        iVar1 = param_1 + ((iVar1 * 4 | (unsigned int)(iVar3 * 0x40000000 + iVar1) >> 0x1e) - iVar1);
        if ((*(char *)(iVar1 + 0x848) != 0) && (*(char *)(iVar1 + 0x96d) == 0)) {
          (**(code **)(**(int **)(iVar2 + 0x2d8) + 0xc))();
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0xc);
  }
  return;
}

// === KartPhysics_Wheel_validate_805936dc (0x805936dc) ===
void KartPhysics_Wheel_validate_805936dc(int param_1,u16 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((*(char *)(param_1 + 0x25) == 0) || (*(char *)(param_1 + 0x27) != 0)) &&
      (*(char *)(param_1 + 0x28) == 0)) &&
     ((*(char *)(param_1 + 7) == 0 && (*(char *)(iRam00000000 + 0x10) == 0)))) {
    iVar2 = param_1 + 0x30;
    iVar3 = 0xc;
    do {
      if (*(int *)(iVar2 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(iVar2 + 0x2d8) + 0x74);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if ((*(int **)(iVar2 + 0x2d8) != (int *)0) &&
         (iVar1 = iVar3 >> 0x1f,
         *(char *)(param_1 + ((iVar1 * 4 | (unsigned int)(iVar3 * 0x40000000 + iVar1) >> 0x1e) - iVar1) +
                  0x848) != 0)) {
        (**(code **)(**(int **)(iVar2 + 0x2d8) + 0x18))();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 4);
    iVar2 = param_1 + 0x10;
    iVar3 = 4;
    do {
      if (*(int *)(iVar2 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(iVar2 + 0x2d8) + 0x74);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 8);
    iVar2 = param_1 + 0x30;
    iVar3 = 0xc;
    do {
      if (*(int **)(iVar2 + 0x2d8) != (int *)0) {
        iVar1 = iVar3 >> 0x1f;
        iVar1 = param_1 + ((iVar1 * 4 | (unsigned int)(iVar3 * 0x40000000 + iVar1) >> 0x1e) - iVar1);
        if ((*(char *)(iVar1 + 0x848) != 0) && (*(char *)(iVar1 + 0x96d) == 0)) {
          (**(code **)(**(int **)(iVar2 + 0x2d8) + 0xc))();
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x10);
    *(u16 *)(param_1 + 0x1a) = param_2;
    *(u32 *)(param_1 + 0x1c) = 0;
  }
  return;
}

// === kart_KartPhysics_Wheel_80593960 (0x80593960) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartPhysics_Wheel_80593960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartPhysics_Wheel_80593ba8 (0x80593ba8) ===
void kart_KartPhysics_Wheel_80593ba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  do {
    if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
      iVar1 = iVar2 >> 0x1f;
      if (*(char *)(param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1) +
                   0x848) != 0) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0x10))();
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 4);
  return;
}

// === kart_KartPhysics_Wheel_80593c38 (0x80593c38) ===
void kart_KartPhysics_Wheel_80593c38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  do {
    if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
      iVar1 = iVar2 >> 0x1f;
      if (*(char *)(param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1) +
                   0x848) != 0) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0x18))();
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 4);
  return;
}

// === kart_KartPhysics_Wheel_80593cc8 (0x80593cc8) ===
void kart_KartPhysics_Wheel_80593cc8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x10;
  iVar2 = 4;
  do {
    if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
      iVar1 = iVar2 >> 0x1f;
      iVar1 = param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1);
      if ((*(char *)(iVar1 + 0x848) != 0) && (*(char *)(iVar1 + 0x96d) == 0)) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0xc))();
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 8);
  return;
}

// === KartPhysics_Wheel_validate_80593d64 (0x80593d64) ===
void KartPhysics_Wheel_validate_80593d64(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = 4;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 8);
  return;
}

// === KartPhysics_Wheel_validate_80593e60 (0x80593e60) ===
void KartPhysics_Wheel_validate_80593e60(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x10;
  iVar1 = 4;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 8);
  return;
}

// === kart_KartPhysics_Wheel_80593f30 (0x80593f30) ===
void kart_KartPhysics_Wheel_80593f30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x20;
  iVar2 = 8;
  do {
    if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
      iVar1 = iVar2 >> 0x1f;
      iVar1 = param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1);
      if ((*(char *)(iVar1 + 0x848) != 0) && (*(char *)(iVar1 + 0x96d) == 0)) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0xc))();
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0xc);
  return;
}

// === KartPhysics_Wheel_validate_80593fcc (0x80593fcc) ===
void KartPhysics_Wheel_validate_80593fcc(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0xc);
  return;
}

// === KartPhysics_Wheel_validate_805940c8 (0x805940c8) ===
void KartPhysics_Wheel_validate_805940c8(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  iVar1 = 8;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0xc);
  return;
}

// === kart_KartPhysics_Wheel_80594198 (0x80594198) ===
void kart_KartPhysics_Wheel_80594198(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x30;
  iVar2 = 0xc;
  do {
    if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
      iVar1 = iVar2 >> 0x1f;
      iVar1 = param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1);
      if ((*(char *)(iVar1 + 0x848) != 0) && (*(char *)(iVar1 + 0x96d) == 0)) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0xc))();
      }
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x10);
  return;
}

// === KartPhysics_Wheel_validate_80594234 (0x80594234) ===
void KartPhysics_Wheel_validate_80594234(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x30;
  iVar1 = 0xc;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0x10);
  return;
}

// === KartPhysics_Wheel_validate_80594330 (0x80594330) ===
void KartPhysics_Wheel_validate_80594330(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x30;
  iVar1 = 0xc;
  do {
    if (*(int *)(param_1 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2d8) + 0x74);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0x10);
  return;
}

// === kart_KartPhysics_Wheel_80594400 (0x80594400) ===
void kart_KartPhysics_Wheel_80594400(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x30;
  iVar2 = 0xc;
  do {
    iVar1 = iVar2 >> 0x1f;
    if (*(char *)(param_1 + ((iVar1 * 4 | (unsigned int)(iVar2 * 0x40000000 + iVar1) >> 0x1e) - iVar1) +
                 0x848) != 0) {
      (**(code **)(**(int **)(iVar3 + 0x2d8) + 0x14))();
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x10);
  return;
}

// === kart_KartPhysics_Wheel_80594488 (0x80594488) ===
void kart_KartPhysics_Wheel_80594488(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(u32 **)(param_1 + 0x52c);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)**(u32 **)(param_1 + 0x52c) + 0x78))
              ((int *)**(u32 **)(param_1 + 0x52c),param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594538 (0x80594538) ===
void KartPhysics_Wheel_validate_80594538(int param_1)

{
  if (**(int **)(param_1 + 0x52c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(**(int **)(param_1 + 0x52c) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_805945e0 (0x805945e0) ===
void kart_KartPhysics_Wheel_805945e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x52c) + 4);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x52c) + 4);
    ((void(*)(...))(*(void**)(*piVar2 + 0x78)))(piVar2,param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594690 (0x80594690) ===
void KartPhysics_Wheel_validate_80594690(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x52c) + 4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80594738 (0x80594738) ===
void kart_KartPhysics_Wheel_80594738(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24c);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartPhysics_Wheel_validate_805947ac (0x805947ac) ===
void KartPhysics_Wheel_validate_805947ac(int param_1)

{
  if (*(int *)(param_1 + 0x24c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x24c) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80594850 (0x80594850) ===
void kart_KartPhysics_Wheel_80594850(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)**(u32 **)(param_1 + 0x610);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)**(u32 **)(param_1 + 0x610) + 0x78))
              ((int *)**(u32 **)(param_1 + 0x610),param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594900 (0x80594900) ===
void KartPhysics_Wheel_validate_80594900(int param_1)

{
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  FUN_segment_0__80404464(auStack_1c,param_1 + 0x7bc,param_1 + 0x7c8);
  FUN_segment_0__8040443c((double)g_Ram_float,auStack_28,auStack_1c);
  if (**(int **)(param_1 + 0x610) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(**(int **)(param_1 + 0x610) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_805949c4 (0x805949c4) ===
void kart_KartPhysics_Wheel_805949c4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 0xc);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 0xc);
    ((void(*)(...))(*(void**)(*piVar2 + 0x78)))(piVar2,param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594a74 (0x80594a74) ===
void KartPhysics_Wheel_validate_80594a74(int param_1)

{
  int iVar1;
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  FUN_segment_0__80404464(auStack_1c,param_1 + 0x7bc,param_1 + 0x7c8);
  FUN_segment_0__8040443c((double)g_Ram_float,auStack_28,auStack_1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x610) + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80594b38 (0x80594b38) ===
void kart_KartPhysics_Wheel_80594b38(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 4);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 4);
    ((void(*)(...))(*(void**)(*piVar2 + 0x78)))(piVar2,param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594be8 (0x80594be8) ===
void KartPhysics_Wheel_validate_80594be8(int param_1)

{
  int iVar1;
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  FUN_segment_0__80404464(auStack_1c,param_1 + 0x7bc,param_1 + 0x7c8);
  FUN_segment_0__8040443c((double)g_Ram_float,auStack_28,auStack_1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x610) + 4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80594cac (0x80594cac) ===
void kart_KartPhysics_Wheel_80594cac(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 8);
  if (piVar2 == (int *)0) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((void(*)(...))(*(void**)(*piVar2 + 0xc)))(piVar2);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar2 + 0x70)))(piVar2,param_1 + 0x72c);
    }
  }
  if (iVar1 != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x610) + 8);
    ((void(*)(...))(*(void**)(*piVar2 + 0x78)))(piVar2,param_1 + 0x74c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594d5c (0x80594d5c) ===
void KartPhysics_Wheel_validate_80594d5c(int param_1)

{
  int iVar1;
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  FUN_segment_0__80404464(auStack_1c,param_1 + 0x7bc,param_1 + 0x7c8);
  FUN_segment_0__8040443c((double)g_Ram_float,auStack_28,auStack_1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x610) + 8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0x74);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594e20 (0x80594e20) ===
void KartPhysics_Wheel_validate_80594e20(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x284) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x284) + 0x74);
  }
  piVar1 = *(int **)(param_1 + 0x284);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80594ef0 (0x80594ef0) ===
void KartPhysics_Wheel_validate_80594ef0(int param_1)

{
  if (*(int *)(param_1 + 0x284) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x284) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80594f94 (0x80594f94) ===
void kart_KartPhysics_Wheel_80594f94(int param_1)

{
  int *piVar1;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 auStack_5c [12];
  u32 local_50;
  float local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  KartDynamics_assertFail_805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_34 = *(u32 *)(param_1 + 0x700);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_24 = *(u32 *)(param_1 + 0x710);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_14 = *(u32 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  piVar1 = *(int **)(param_1 + 0x288);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x78)))(piVar1,&local_40);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  return;
}

// === KartPhysics_Wheel_validate_805950e8 (0x805950e8) ===
void KartPhysics_Wheel_validate_805950e8(int param_1)

{
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 auStack_5c [12];
  u32 local_50;
  float local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  KartDynamics_assertFail_805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_34 = *(u32 *)(param_1 + 0x700);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_24 = *(u32 *)(param_1 + 0x710);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_14 = *(u32 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  if (*(int *)(param_1 + 0x288) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x288) + 0x74);
  }
  return;
}

// === KartPhysics_Wheel_validate_80595278 (0x80595278) ===
void KartPhysics_Wheel_validate_80595278(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 auStack_58 [12];
  u32 auStack_4c [60];
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x724);
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
  ((void(*)(...))(*(void**)(**(int **)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c) + 0x20)))(auStack_4c);
  iVar2 = *(int *)(param_1 + 0x724);
  bVar1 = false;
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,*(u32 *)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c));
}

// === KartPhysics_Wheel_validate_80595594 (0x80595594) ===
void KartPhysics_Wheel_validate_80595594(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x2a0) + 0x74);
}

// === KartPhysics_Wheel_validate_80595618 (0x80595618) ===
void KartPhysics_Wheel_validate_80595618(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 auStack_f4 [12];
  u32 auStack_e8 [216];
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x724);
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
  ((void(*)(...))(*(void**)(**(int **)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c) + 0x20)))(auStack_e8);
  iVar2 = *(int *)(param_1 + 0x724);
  bVar1 = false;
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_f4,*(u32 *)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c));
}

// === KartPhysics_Wheel_validate_805959c8 (0x805959c8) ===
void KartPhysics_Wheel_validate_805959c8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x2a4) + 0x74);
}

// === KartPhysics_Wheel_assertFail_80595a4c (0x80595a4c) ===
void KartPhysics_Wheel_assertFail_80595a4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartPhysics_Wheel_validate_80595dc8 (0x80595dc8) ===
void KartPhysics_Wheel_validate_80595dc8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x2a8) + 0x74);
}

// === kart_KartPhysics_Wheel_80595e4c (0x80595e4c) ===
void kart_KartPhysics_Wheel_80595e4c(int param_1)

{
  u32 auStack_28 [16];
  u32 local_18;
  uint uStack_14;
  
  if (*(char *)(param_1 + 0x129) != 0) {
    local_18 = 0x43300000;
    uStack_14 = *(uint *)(param_1 + 0x7b0) ^ 0x80000000;
    KartPhysics_Wheel_calcVec3_80595ebc
              ((double)(float)((double)CONCAT44(0x43300000,uStack_14) - dRam00000000),auStack_28,
               param_1 + 0x7a4);
    kart_KartPhysics_Wheel_80596204(param_1,auStack_28);
  }
  return;
}

// === KartPhysics_Wheel_calcVec3_80595ebc (0x80595ebc) ===
void KartPhysics_Wheel_calcVec3_80595ebc(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3[1];
  fVar1 = (float)((double)g_Ram_float / param_1);
  fVar3 = *param_3;
  param_2[2] = param_3[2] * fVar1;
  *param_2 = fVar3 * fVar1;
  param_2[1] = fVar2 * fVar1;
  return;
}

// === kart_KartPhysics_Wheel_80595ef0 (0x80595ef0) ===
void kart_KartPhysics_Wheel_80595ef0(int param_1)

{
  if (((*(char *)(param_1 + 0x96) == 0) && (*(char *)(param_1 + 0x129) != 0)) &&
     ('\x1e' < *(char *)(param_1 + 0x7b5))) {
    kart_KartPhysics_Wheel_80596204();
    *(u32 *)(param_1 + 0x7b5) = 0;
  }
  return;
}

// === KartPhysics_Wheel_calc_80595f4c (0x80595f4c) ===
void KartPhysics_Wheel_calc_80595f4c(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((((*(char *)(param_1 + 0x96) == 0) && (*(char *)(param_1 + 0x129) != 0)) &&
      ('\x1e' < *(char *)(param_1 + 0x7b5))) && (fRam00000028 < *(float *)(param_1 + 0x6e8))) {
    kart_KartPhysics_Wheel_80596204();
    if (*(char *)(param_1 + 0x24) == 0) {
      FUN_segment_0__8047f0c8(*(u32 *)(param_1 + 0x118));
    }
    fVar1 = *(float *)(param_1 + 0x6f0);
    fVar2 = *(float *)(param_1 + 0x6e8);
    *(u32 *)(param_1 + 0x7b5) = 0;
    if ((fVar2 < fVar1) && (fVar1 = fVar2, fVar2 <= fRam00000028)) {
      fVar1 = fRam00000028;
    }
    FUN_segment_0__8047dc98
              ((double)(fRam0000002c +
                       (fVar1 - fRam00000028) *
                       (fRam00000004 / (*(float *)(param_1 + 0x6f0) - fRam00000028))),
               *(u32 *)(param_1 + 0x118),1,1);
  }
  return;
}

// === KartPhysics_Wheel_assertFail_80596040 (0x80596040) ===
void KartPhysics_Wheel_assertFail_80596040(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === kart_KartPhysics_Wheel_80596204 (0x80596204) ===
void kart_KartPhysics_Wheel_80596204(int param_1,u32 param_2)

{
  if (*(char *)(param_1 + 7) != 0) {
    return;
  }
  if (*(char *)(iRam00000000 + 0x10) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x129) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xf) != 0) {
    if (*(char *)(param_1 + 0xb0) != 0) {
      KartDynamics_validate_805a57a0(0x17c0,param_2,param_1 + 0x72c);
      return;
    }
    KartDynamics_validate_805a56e0(0x17c8);
    return;
  }
  if ((*(char *)(param_1 + 0x11) == 0) && (*(char *)(param_1 + 0x13) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0xb0) != 0) {
    KartDynamics_validate_805a57a0(0x17d0,param_2,param_1 + 0x72c);
    return;
  }
  KartDynamics_validate_805a56e0(0x17d9);
  return;
}

// === KartPhysics_Wheel_validate_805962bc (0x805962bc) ===
void KartPhysics_Wheel_validate_805962bc(int param_1)

{
  double dVar1;
  u32 local_48;
  u32 local_44;
  u32 local_40;
  
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)((int)g_Ram_float + 0x10) == 0)) &&
      (*(char *)(param_1 + 0x129) != 0)) &&
     (('\x1e' < *(char *)(param_1 + 0x7b7) &&
      (dVar1 = (double)FUN_segment_0__8047e63c(*(u32 *)(param_1 + 0x118)),
      (double)g_Ram_float <= dVar1)))) {
    local_48 = *(u32 *)(param_1 + 0x6dc);
    local_44 = *(u32 *)(param_1 + 0x6e0);
    local_40 = *(u32 *)(param_1 + 0x6e4);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(&local_48);
  }
  return;
}

// === kart_KartPhysics_Wheel_80596644 (0x80596644) ===
void kart_KartPhysics_Wheel_80596644(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x260);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x94) = 1;
  }
  return;
}

// === KartPhysics_Wheel_validate_805966f0 (0x805966f0) ===
void KartPhysics_Wheel_validate_805966f0(int param_1)

{
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x260) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x260) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_8059684c (0x8059684c) ===
void kart_KartPhysics_Wheel_8059684c(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x268);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x94) = 1;
  }
  return;
}

// === KartPhysics_Wheel_validate_805968f8 (0x805968f8) ===
void KartPhysics_Wheel_validate_805968f8(int param_1)

{
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x268) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80596a54 (0x80596a54) ===
void kart_KartPhysics_Wheel_80596a54(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x264);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x93) = 1;
  }
  return;
}

// === KartPhysics_Wheel_validate_80596b00 (0x80596b00) ===
void KartPhysics_Wheel_validate_80596b00(int param_1)

{
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x264) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x264) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80596c5c (0x80596c5c) ===
void kart_KartPhysics_Wheel_80596c5c(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x26c);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x93) = 1;
  }
  return;
}

// === KartPhysics_Wheel_validate_80596d08 (0x80596d08) ===
void KartPhysics_Wheel_validate_80596d08(int param_1)

{
  if ((0x45 < *(uint *)(param_1 + 0x4c)) && (0x45 < *(uint *)(param_1 + 0x50))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x26c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x26c) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80596e64 (0x80596e64) ===
void kart_KartPhysics_Wheel_80596e64(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x278);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80596ed8 (0x80596ed8) ===
void KartPhysics_Wheel_validate_80596ed8(int param_1)

{
  if (*(int *)(param_1 + 0x278) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x278) + 0x74);
  }
  return;
}

// === kart_KartPhysics_Wheel_80596f7c (0x80596f7c) ===
void kart_KartPhysics_Wheel_80596f7c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x274);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartPhysics_Wheel_validate_80596ff0 (0x80596ff0) ===
void KartPhysics_Wheel_validate_80596ff0(int param_1)

{
  if (*(int *)(param_1 + 0x274) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x274) + 0x74);
  }
  return;
}

// === kart_KartSettings_80597094 (0x80597094) ===
void kart_KartSettings_80597094(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x1f0);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x92) = 1;
  }
  return;
}

// === KartSettings_validate_80597140 (0x80597140) ===
void KartSettings_validate_80597140(int param_1)

{
  if (*(int *)(param_1 + 0x1f0) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x1f0) + 0x74);
  }
  return;
}

// === kart_KartSettings_805971e4 (0x805971e4) ===
void kart_KartSettings_805971e4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x270);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartSettings_validate_80597258 (0x80597258) ===
void KartSettings_validate_80597258(int param_1)

{
  if (*(int *)(param_1 + 0x270) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x270) + 0x74);
  }
  return;
}

// === KartSettings_validate_805972fc (0x805972fc) ===
void KartSettings_validate_805972fc(int param_1)

{
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    if (*(int **)(param_1 + 0x1f8) != (int *)0) {
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0xc))();
    }
    if (*(int *)(param_1 + 500) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 500) + 0x74);
    }
  }
  return;
}

// === KartSettings_validate_805973cc (0x805973cc) ===
void KartSettings_validate_805973cc(int param_1)

{
  if (*(int *)(param_1 + 0x1f8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x1f8) + 0x74);
  }
  return;
}

// === kart_KartSettings_80597470 (0x80597470) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartSettings_80597470(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartSettings_validate_8059760c (0x8059760c) ===
void KartSettings_validate_8059760c(int param_1)

{
  if (*(int *)(param_1 + 500) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 500) + 0x74);
  }
  return;
}

// === KartSettings_validate_805976fc (0x805976fc) ===
void KartSettings_validate_805976fc(int param_1)

{
  if (*(int *)(param_1 + 500) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 500) + 0x74);
  }
  return;
}

// === kart_KartSettings_80597780 (0x80597780) ===
void kart_KartSettings_80597780(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28c);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x74)))(piVar1,param_1 + 0x6d0);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  return;
}

// === KartSettings_validate_80597820 (0x80597820) ===
void KartSettings_validate_80597820(int param_1)

{
  if (*(int *)(param_1 + 0x28c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x28c) + 0x74);
  }
  return;
}

// === kart_KartSettings_805978a4 (0x805978a4) ===
void kart_KartSettings_805978a4(int param_1)

{
  int *piVar1;
  
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
      (*(char *)(param_1 + 0x129) != 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x280), piVar1 != (int *)0 &&
      (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)))) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartSettings_validate_80597948 (0x80597948) ===
void KartSettings_validate_80597948(int param_1)

{
  if (*(int *)(param_1 + 0x280) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x280) + 0x74);
  }
  return;
}

// === kart_KartSettings_805979ec (0x805979ec) ===
void kart_KartSettings_805979ec(int param_1)

{
  if (*(char *)(param_1 + 0x7b9) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
    *(u32 *)(param_1 + 0xba) = 1;
  }
  if (*(char *)(param_1 + 0x7ba) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    *(u32 *)(param_1 + 0xba) = 1;
  }
  return;
}

// === kart_KartSettings_80597abc (0x80597abc) ===
void kart_KartSettings_80597abc(int param_1)

{
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805873a0
            (param_1,*(u32 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === kart_KartSettings_80597b20 (0x80597b20) ===
void kart_KartSettings_80597b20(int param_1)

{
  if (*(char *)(param_1 + 0x7ba) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
  }
  else {
    FUN_segment_0__805871ec
              (param_1,*(u32 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    *(u32 *)(param_1 + 0xba) = 1;
  }
  return;
}

// === kart_KartSettings_80597bb8 (0x80597bb8) ===
void kart_KartSettings_80597bb8(int param_1)

{
  int *piVar1;
  
  if (((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 600);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    *(u32 *)(param_1 + 0x2c) = 1;
  }
  return;
}

// === KartSettings_validate_80597c64 (0x80597c64) ===
void KartSettings_validate_80597c64(int param_1)

{
  if (*(int *)(param_1 + 600) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 600) + 0x74);
  }
  return;
}

// === kart_KartSettings_80597d08 (0x80597d08) ===
void kart_KartSettings_80597d08(int param_1)

{
  FUN_segment_0__805871ec
            (param_1,*(u32 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,param_1 + 0x7bc,1);
  FUN_segment_0__805871ec
            (param_1,*(u32 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === kart_KartSettings_80597d6c (0x80597d6c) ===
void kart_KartSettings_80597d6c(int param_1)

{
  if (*(char *)(param_1 + 0x44) == 0) {
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,param_1 + 0x7bc,1);
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,param_1 + 0x7c8,1);
  }
  return;
}

// === KartSettings_validate_80597ddc (0x80597ddc) ===
void KartSettings_validate_80597ddc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 2;
  piVar1 = (int *)(*(int *)(param_1 + 0x52c) + 8);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;
}

// === kart_KartSettings_80597e80 (0x80597e80) ===
void kart_KartSettings_80597e80(int param_1)

{
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 auStack_60 [12];
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_44;
  u32 local_40;
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
  
  FUN_segment_0__804270d8(&local_48,param_1 + 0x6f4,0);
  local_38 = local_48;
  local_28 = local_44;
  local_18 = local_40;
  FUN_segment_0__804270d8(&local_54,param_1 + 0x6f4,1);
  local_34 = local_54;
  local_24 = local_50;
  local_14 = local_4c;
  FUN_segment_0__804270d8(auStack_60,param_1 + 0x6f4,2);
  FUN_segment_0__80404400(&local_6c,auStack_60);
  local_30 = local_6c;
  local_20 = local_68;
  local_10 = local_64;
  FUN_segment_0__804270d8(&local_78,param_1 + 0x6f4,3);
  local_2c = local_78;
  local_1c = local_74;
  local_c = local_70;
  FUN_segment_0__805871ec(param_1,*(u32 *)(param_1 + 0x52c),2,5,&local_38,param_1 + 0x7bc,1);
  FUN_segment_0__805871ec(param_1,*(u32 *)(param_1 + 0x52c),5,8,&local_38,param_1 + 0x7c8,1);
  return;
}

// === kart_KartSettings_80597f94 (0x80597f94) ===
void kart_KartSettings_80597f94(int param_1)

{
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 auStack_60 [12];
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_44;
  u32 local_40;
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
  
  if (*(char *)(param_1 + 0x43) == 0) {
    FUN_segment_0__804270d8(&local_48,param_1 + 0x6f4,0);
    local_38 = local_48;
    local_28 = local_44;
    local_18 = local_40;
    FUN_segment_0__804270d8(&local_54,param_1 + 0x6f4,1);
    local_34 = local_54;
    local_24 = local_50;
    local_14 = local_4c;
    FUN_segment_0__804270d8(auStack_60,param_1 + 0x6f4,2);
    FUN_segment_0__80404400(&local_6c,auStack_60);
    local_30 = local_6c;
    local_20 = local_68;
    local_10 = local_64;
    FUN_segment_0__804270d8(&local_78,param_1 + 0x6f4,3);
    local_2c = local_78;
    local_1c = local_74;
    local_c = local_70;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x52c),2,5,&local_38,param_1 + 0x7bc,1);
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x52c),5,8,&local_38,param_1 + 0x7c8,1);
  }
  return;
}

// === KartSettings_validate_805980fc (0x805980fc) ===
void KartSettings_validate_805980fc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x610) + 0x10);
  do {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*piVar1 + 0x74);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 7);
  return;
}

// === kart_KartSettings_805981a0 (0x805981a0) ===
void kart_KartSettings_805981a0(int param_1)

{
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 auStack_60 [12];
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_44;
  u32 local_40;
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
  
  FUN_segment_0__804270d8(&local_48,param_1 + 0x6f4,0);
  local_38 = local_48;
  local_28 = local_44;
  local_18 = local_40;
  FUN_segment_0__804270d8(&local_54,param_1 + 0x6f4,1);
  local_34 = local_54;
  local_24 = local_50;
  local_14 = local_4c;
  FUN_segment_0__804270d8(auStack_60,param_1 + 0x6f4,2);
  FUN_segment_0__80404400(&local_6c,auStack_60);
  local_30 = local_6c;
  local_20 = local_68;
  local_10 = local_64;
  FUN_segment_0__804270d8(&local_78,param_1 + 0x6f4,3);
  local_2c = local_78;
  local_1c = local_74;
  local_c = local_70;
  FUN_segment_0__805871ec(param_1,*(u32 *)(param_1 + 0x610),4,7,&local_38,param_1 + 0x7c8,1);
  return;
}

// === kart_KartSettings_80598294 (0x80598294) ===
void kart_KartSettings_80598294(int param_1)

{
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 auStack_60 [12];
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_44;
  u32 local_40;
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
  
  if (*(char *)(param_1 + 0x43) == 0) {
    FUN_segment_0__804270d8(&local_48,param_1 + 0x6f4,0);
    local_38 = local_48;
    local_28 = local_44;
    local_18 = local_40;
    FUN_segment_0__804270d8(&local_54,param_1 + 0x6f4,1);
    local_34 = local_54;
    local_24 = local_50;
    local_14 = local_4c;
    FUN_segment_0__804270d8(auStack_60,param_1 + 0x6f4,2);
    FUN_segment_0__80404400(&local_6c,auStack_60);
    local_30 = local_6c;
    local_20 = local_68;
    local_10 = local_64;
    FUN_segment_0__804270d8(&local_78,param_1 + 0x6f4,3);
    local_2c = local_78;
    local_1c = local_74;
    local_c = local_70;
    FUN_segment_0__805873a0
              (param_1,*(u32 *)(param_1 + 0x610),4,7,&local_38,param_1 + 0x7c8,1);
  }
  return;
}

// === kart_KartSettings_80598394 (0x80598394) ===
void kart_KartSettings_80598394(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1fc);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x78)))(piVar1,param_1 + 0xc4);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  return;
}

// === KartSettings_validate_80598434 (0x80598434) ===
void KartSettings_validate_80598434(int param_1)

{
  if (*(int *)(param_1 + 0x1fc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x1fc) + 0x74);
  }
  return;
}

// === kart_KartSettings_80598510 (0x80598510) ===
void kart_KartSettings_80598510(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x200);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x78)))(piVar1,param_1 + 0xc4);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  return;
}

// === KartSettings_validate_805985b0 (0x805985b0) ===
void KartSettings_validate_805985b0(int param_1)

{
  if (*(int *)(param_1 + 0x200) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x200) + 0x74);
  }
  return;
}

// === kart_KartSettings_80598630 (0x80598630) ===
void kart_KartSettings_80598630(int param_1,u32 param_2)

{
  (**(code **)(**(int **)(param_1 + 0x200) + 0xc))();
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x200) + 0x78)))(*(int **)(param_1 + 0x200),param_1 + 0xc4);
  (**(code **)(**(int **)(param_1 + 0x200) + 0x50))
            (*(int **)(param_1 + 0x200),0xff,0xff,0xff,param_2);
  if (*(char *)(param_1 + 0xb0) != 0) {
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x200) + 0x70)))(*(int **)(param_1 + 0x200),param_1 + 0x72c);
  }
  (**(code **)(**(int **)(param_1 + 0x200) + 0x80))();
  return;
}

// === kart_KartSettings_805986ec (0x805986ec) ===
void kart_KartSettings_805986ec(int param_1)

{
  u32 uVar1;
  int iVar2;
  int *piVar3;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
  iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
  if (iVar2 == 0) {
    FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
    local_40 = local_74;
    local_30 = local_70;
    local_20 = local_6c;
    FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
    local_3c = local_80;
    local_2c = local_7c;
    local_1c = local_78;
    FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
    local_38 = local_8c;
    local_28 = local_88;
    local_18 = local_84;
    FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
    local_34 = local_98;
    local_24 = local_94;
    local_14 = local_90;
  }
  else {
    FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
    local_40 = local_50;
    local_30 = local_4c;
    local_20 = local_48;
    FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
    local_3c = local_5c;
    local_2c = local_58;
    local_1c = local_54;
    FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
    local_38 = local_68;
    local_28 = local_64;
    local_18 = local_60;
  }
  piVar3 = *(int **)(param_1 + 0x204);
  if (piVar3 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar3 + 0xc)))(piVar3);
    ((void(*)(...))(*(void**)(*piVar3 + 0x78)))(piVar3,&local_40);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar3 + 0x70)))(piVar3,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar3 + 0x80)))(piVar3);
  }
  *(u32 *)(param_1 + 9) = 1;
  return;
}

// === KartSettings_validate_805988c8 (0x805988c8) ===
void KartSettings_validate_805988c8(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x204) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x204) + 0x74);
    }
  }
  else {
    uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
    iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
    if (iVar2 == 0) {
      FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
      local_40 = local_74;
      local_30 = local_70;
      local_20 = local_6c;
      FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
      local_3c = local_80;
      local_2c = local_7c;
      local_1c = local_78;
      FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
      local_38 = local_8c;
      local_28 = local_88;
      local_18 = local_84;
      FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
      local_34 = local_98;
      local_24 = local_94;
      local_14 = local_90;
    }
    else {
      FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
      local_40 = local_50;
      local_30 = local_4c;
      local_20 = local_48;
      FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
      local_3c = local_5c;
      local_2c = local_58;
      local_1c = local_54;
      FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
      local_38 = local_68;
      local_28 = local_64;
      local_18 = local_60;
    }
    if (*(int *)(param_1 + 0x204) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x204) + 0x74);
    }
  }
  return;
}

// === kart_KartSettings_80598b44 (0x80598b44) ===
void kart_KartSettings_80598b44(int param_1,u32 param_2)

{
  u32 auStack_38 [4];
  float local_34;
  u32 auStack_2c [4];
  float local_28;
  u32 local_20;
  uint uStack_1c;
  u32 local_18;
  uint uStack_14;
  
  if ((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) {
    (**(code **)(**(int **)(param_1 + 0x208) + 0xc))();
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x208) + 0x78)))(*(int **)(param_1 + 0x208),param_2);
    if ((int)*(short *)(param_1 + 0x99c) != 0xffffffff) {
      uStack_1c = (int)*(short *)(param_1 + 0x99c) ^ 0x80000000;
      local_20 = 0x43300000;
      uStack_14 = (int)*(short *)(param_1 + 0x99e) ^ 0x80000000;
      local_18 = 0x43300000;
      (**(code **)(**(int **)(param_1 + 0x208) + 0x2c))
                ((double)(g_Ram_float -
                         (g_Ram_float *
                         (float)((double)CONCAT44(0x43300000,uStack_1c) -
                                (double)CONCAT44(g_Ram_float,uRam00000004))) /
                         (float)((double)CONCAT44(0x43300000,uStack_14) -
                                (double)CONCAT44(g_Ram_float,uRam00000004))));
    }
    (**(code **)(**(int **)(param_1 + 0x208) + 0x80))();
    *(u32 *)(param_1 + 9) = 1;
    FUN_segment_0__804270d8(auStack_2c,param_2,3);
    FUN_segment_0__804270d8(auStack_38,param_1 + 0x6f4,3);
    *(float *)(param_1 + 0xb4) = local_28 - local_34;
  }
  return;
}

// === KartSettings_validate_80598c88 (0x80598c88) ===
void KartSettings_validate_80598c88(int param_1)

{
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x208) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x208) + 0x74);
    }
  }
  else if (*(int *)(param_1 + 0x208) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x208) + 0x74);
  }
  return;
}

// === kart_KartSettings_80598ebc (0x80598ebc) ===
void kart_KartSettings_80598ebc(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x210);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x74)))(piVar1,param_1 + 0x6d0);
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  *(u32 *)(param_1 + 9) = 1;
  return;
}

// === KartSettings_validate_80598f40 (0x80598f40) ===
void KartSettings_validate_80598f40(int param_1)

{
  if (*(int *)(param_1 + 0x210) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x210) + 0x74);
  }
  return;
}

// === kart_KartSettings_80598fc0 (0x80598fc0) ===
void kart_KartSettings_80598fc0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x214);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x74)))(piVar1,param_1 + 0x6d0);
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  *(u32 *)(param_1 + 9) = 1;
  return;
}

// === KartSub_validate_80599044 (0x80599044) ===
void KartSub_validate_80599044(int param_1)

{
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x214) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x214) + 0x74);
    }
  }
  else if (*(int *)(param_1 + 0x214) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x214) + 0x74);
  }
  return;
}

// === kart_KartSub_80599168 (0x80599168) ===
void kart_KartSub_80599168(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x224);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x74)))(piVar1,param_1 + 0x6d0);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  return;
}

// === KartSub_validate_80599208 (0x80599208) ===
void KartSub_validate_80599208(int param_1)

{
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x224) + 0x74);
  }
  return;
}

// === kart_KartSub_805992e4 (0x805992e4) ===
void kart_KartSub_805992e4(int param_1)

{
  u32 uVar1;
  int iVar2;
  int *piVar3;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
  iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
  if (iVar2 == 0) {
    FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
    local_40 = local_74;
    local_30 = local_70;
    local_20 = local_6c;
    FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
    local_3c = local_80;
    local_2c = local_7c;
    local_1c = local_78;
    FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
    local_38 = local_8c;
    local_28 = local_88;
    local_18 = local_84;
    FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
    local_34 = local_98;
    local_24 = local_94;
    local_14 = local_90;
  }
  else {
    FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
    local_40 = local_50;
    local_30 = local_4c;
    local_20 = local_48;
    FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
    local_3c = local_5c;
    local_2c = local_58;
    local_1c = local_54;
    FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
    local_38 = local_68;
    local_28 = local_64;
    local_18 = local_60;
  }
  piVar3 = *(int **)(param_1 + 0x218);
  if (piVar3 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar3 + 0xc)))(piVar3);
    ((void(*)(...))(*(void**)(*piVar3 + 0x78)))(piVar3,&local_40);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar3 + 0x70)))(piVar3,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar3 + 0x80)))(piVar3);
  }
  *(u32 *)(param_1 + 9) = 1;
  piVar3 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
  ((void(*)(...))(*(void**)(*piVar3 + 0xe8)))((double)g_Ram_float,piVar3,0x117);
  return;
}

// === KartSub_validate_805994e4 (0x805994e4) ===
void KartSub_validate_805994e4(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x218) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x218) + 0x74);
    }
  }
  else {
    uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
    iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
    if (iVar2 == 0) {
      FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
      local_40 = local_74;
      local_30 = local_70;
      local_20 = local_6c;
      FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
      local_3c = local_80;
      local_2c = local_7c;
      local_1c = local_78;
      FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
      local_38 = local_8c;
      local_28 = local_88;
      local_18 = local_84;
      FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
      local_34 = local_98;
      local_24 = local_94;
      local_14 = local_90;
    }
    else {
      FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
      local_40 = local_50;
      local_30 = local_4c;
      local_20 = local_48;
      FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
      local_3c = local_5c;
      local_2c = local_58;
      local_1c = local_54;
      FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
      local_38 = local_68;
      local_28 = local_64;
      local_18 = local_60;
    }
    if (*(int *)(param_1 + 0x218) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x218) + 0x74);
    }
  }
  return;
}

// === kart_KartSub_80599760 (0x80599760) ===
void kart_KartSub_80599760(int param_1)

{
  u32 uVar1;
  int iVar2;
  int *piVar3;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
  iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
  if (iVar2 == 0) {
    FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
    local_40 = local_74;
    local_30 = local_70;
    local_20 = local_6c;
    FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
    local_3c = local_80;
    local_2c = local_7c;
    local_1c = local_78;
    FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
    local_38 = local_8c;
    local_28 = local_88;
    local_18 = local_84;
    FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
    local_34 = local_98;
    local_24 = local_94;
    local_14 = local_90;
  }
  else {
    FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
    local_40 = local_50;
    local_30 = local_4c;
    local_20 = local_48;
    FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
    local_3c = local_5c;
    local_2c = local_58;
    local_1c = local_54;
    FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
    local_38 = local_68;
    local_28 = local_64;
    local_18 = local_60;
  }
  piVar3 = *(int **)(param_1 + 0x21c);
  if (piVar3 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar3 + 0xc)))(piVar3);
    ((void(*)(...))(*(void**)(*piVar3 + 0x78)))(piVar3,&local_40);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar3 + 0x70)))(piVar3,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar3 + 0x80)))(piVar3);
  }
  *(u32 *)(param_1 + 9) = 1;
  piVar3 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
  ((void(*)(...))(*(void**)(*piVar3 + 0xe8)))((double)g_Ram_float,piVar3,0x117);
  return;
}

// === KartSub_validate_80599960 (0x80599960) ===
void KartSub_validate_80599960(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x21c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x21c) + 0x74);
    }
  }
  else {
    uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
    iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
    if (iVar2 == 0) {
      FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
      local_40 = local_74;
      local_30 = local_70;
      local_20 = local_6c;
      FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
      local_3c = local_80;
      local_2c = local_7c;
      local_1c = local_78;
      FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
      local_38 = local_8c;
      local_28 = local_88;
      local_18 = local_84;
      FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
      local_34 = local_98;
      local_24 = local_94;
      local_14 = local_90;
    }
    else {
      FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
      local_40 = local_50;
      local_30 = local_4c;
      local_20 = local_48;
      FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
      local_3c = local_5c;
      local_2c = local_58;
      local_1c = local_54;
      FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
      local_38 = local_68;
      local_28 = local_64;
      local_18 = local_60;
    }
    if (*(int *)(param_1 + 0x21c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x21c) + 0x74);
    }
  }
  return;
}

// === KartSub_validate_80599bdc (0x80599bdc) ===
void KartSub_validate_80599bdc(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
  iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
  if (iVar2 == 0) {
    FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
    local_40 = local_74;
    local_30 = local_70;
    local_20 = local_6c;
    FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
    local_3c = local_80;
    local_2c = local_7c;
    local_1c = local_78;
    FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
    local_38 = local_8c;
    local_28 = local_88;
    local_18 = local_84;
    FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
    local_34 = local_98;
    local_24 = local_94;
    local_14 = local_90;
  }
  else {
    FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
    local_40 = local_50;
    local_30 = local_4c;
    local_20 = local_48;
    FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
    local_3c = local_5c;
    local_2c = local_58;
    local_1c = local_54;
    FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
    local_38 = local_68;
    local_28 = local_64;
    local_18 = local_60;
  }
  if (*(int *)(param_1 + 0x220) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x220) + 0x74);
  }
  *(u32 *)(param_1 + 9) = 1;
  return;
}

// === kart_KartSub_80599de0 (0x80599de0) ===
void kart_KartSub_80599de0(int param_1)

{
  int *piVar1;
  
  *(u32 *)(param_1 + 0x68) = 1;
  if ((((*(char *)(iRam00000000 + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
      (*(char *)(param_1 + 0x96) == 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x238), piVar1 != (int *)0 &&
      (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)))) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartSub_validate_80599e8c (0x80599e8c) ===
/* WARNING: Removing unreachable block (ram,0x80599f34) */

void KartSub_validate_80599e8c(int param_1)

{
  if (*(int *)(param_1 + 0x238) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  return;
}

// === KartSub_validate_80599f54 (0x80599f54) ===
void KartSub_validate_80599f54(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
}

// === kart_KartSub_8059a0e4 (0x8059a0e4) ===
void kart_KartSub_8059a0e4(int param_1)

{
  if (*(char *)(iRam00000000 + 0x10) != 0) {
    return;
  }
  if (*(char *)(param_1 + 4) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x96) != 0) {
    return;
  }
  *(u32 *)(param_1 + 0x54) = 0;
  return;
}

// === KartSub_validate_8059a148 (0x8059a148) ===
/* WARNING: Removing unreachable block (ram,0x8059a36c) */

void KartSub_validate_8059a148(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 auStack_5c [12];
  u32 local_50;
  float local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  if (*(char *)(param_1 + 0x24) == 0) {
    bVar1 = (unsigned int)*(byte *)(param_1 + 0x12e) % 6 + 1 == *(int *)(param_1 + 0x54);
  }
  else {
    bVar1 = *(int *)(param_1 + 0x54) == 1;
  }
  iVar2 = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x54) = iVar2;
  if (0x2b2 < iVar2) {
    *(u32 *)(param_1 + 0x54) = 0x2b2;
  }
  if ((((bVar1) && (*(char *)(param_1 + 4) == 0)) &&
      (piVar3 = *(int **)(param_1 + 0x230), piVar3 != (int *)0)) &&
     (((void(*)(...))(*(void**)(*piVar3 + 0xc)))(piVar3), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar3 + 0x70)))(piVar3,param_1 + 0x72c);
  }
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  KartDynamics_assertFail_805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_34 = *(u32 *)(param_1 + 0x700);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_24 = *(u32 *)(param_1 + 0x710);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_14 = *(u32 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  if (*(int *)(param_1 + 0x230) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x230) + 0x74);
  }
  *(u32 *)(param_1 + 0xbb) = 0;
  return;
}

// === KartSub_validate_8059a39c (0x8059a39c) ===
/* WARNING: Removing unreachable block (ram,0x8059a580) */

void KartSub_validate_8059a39c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 auStack_5c [12];
  u32 local_50;
  float local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = iVar2 + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x2b2 < iVar1) {
    *(u32 *)(param_1 + 0x58) = 0x2b2;
  }
  if ((((*(byte *)(param_1 + 0x12e) + 1 == iVar2) && (*(char *)(param_1 + 4) == 0)) &&
      (piVar3 = *(int **)(param_1 + 0x234), piVar3 != (int *)0)) &&
     (((void(*)(...))(*(void**)(*piVar3 + 0xc)))(piVar3), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar3 + 0x70)))(piVar3,param_1 + 0x72c);
  }
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  KartDynamics_assertFail_805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_34 = *(u32 *)(param_1 + 0x700);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_24 = *(u32 *)(param_1 + 0x710);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_14 = *(u32 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  if (*(int *)(param_1 + 0x234) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x234) + 0x74);
  }
  return;
}

// === kart_KartSub_8059a5a0 (0x8059a5a0) ===
void kart_KartSub_8059a5a0(int param_1)

{
  int *piVar1;
  
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
      (*(char *)(param_1 + 4) == 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x23c), piVar1 != (int *)0 &&
      (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)))) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  return;
}

// === KartSub_validate_8059a644 (0x8059a644) ===
/* WARNING: Removing unreachable block (ram,0x8059a7a0) */

void KartSub_validate_8059a644(int param_1)

{
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 auStack_5c [12];
  u32 local_50;
  float local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  KartDynamics_assertFail_805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_34 = *(u32 *)(param_1 + 0x700);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_24 = *(u32 *)(param_1 + 0x710);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_14 = *(u32 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x23c) + 0x74);
  }
  return;
}

// === KartSub_validate_8059a810 (0x8059a810) ===
/* WARNING: Removing unreachable block (ram,0x8059a8dc) */

void KartSub_validate_8059a810(int param_1)

{
  if (*(int *)(param_1 + 0x22c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x22c) + 0x74);
  }
  return;
}

// === KartSub_validate_8059a8fc (0x8059a8fc) ===
void KartSub_validate_8059a8fc(int param_1)

{
  int *piVar1;
  
  if ((*(char *)(iRam00000000 + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) {
    if ((*(char *)(param_1 + 7) == 0) &&
       ((piVar1 = *(int **)(param_1 + 0x240), piVar1 != (int *)0 &&
        (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)))) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    if (*(int *)(param_1 + 0x248) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x248) + 0x74);
    }
  }
  return;
}

// === KartSub_validate_8059aa18 (0x8059aa18) ===
void KartSub_validate_8059aa18(int param_1)

{
  KartSub_validate_8059ab1c();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x248) + 0x74);
}

// === KartSub_validate_8059ab1c (0x8059ab1c) ===
void KartSub_validate_8059ab1c(int param_1)

{
  u32 uVar1;
  int iVar2;
  u32 local_98;
  u32 local_94;
  u32 local_90;
  u32 local_8c;
  u32 local_88;
  u32 local_84;
  u32 local_80;
  u32 local_7c;
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  u32 local_5c;
  u32 local_58;
  u32 local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  u32 local_40;
  u32 local_3c;
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
  
  uVar1 = FUN_segment_0__8047e2bc(*(u32 *)(param_1 + 0x118));
  iVar2 = FUN_segment_0__806b8ea8(uVar1,&local_40);
  if (iVar2 == 0) {
    FUN_segment_0__804270d8(&local_74,param_1 + 0x6f4,1);
    local_40 = local_74;
    local_30 = local_70;
    local_20 = local_6c;
    FUN_segment_0__804270d8(&local_80,param_1 + 0x6f4,2);
    local_3c = local_80;
    local_2c = local_7c;
    local_1c = local_78;
    FUN_segment_0__804270d8(&local_8c,param_1 + 0x6f4,0);
    local_38 = local_8c;
    local_28 = local_88;
    local_18 = local_84;
    FUN_segment_0__804270d8(&local_98,param_1 + 0x6f4,3);
    local_34 = local_98;
    local_24 = local_94;
    local_14 = local_90;
  }
  else {
    FUN_segment_0__804270d8(&local_50,param_1 + 0x6f4,1);
    local_40 = local_50;
    local_30 = local_4c;
    local_20 = local_48;
    FUN_segment_0__804270d8(&local_5c,param_1 + 0x6f4,2);
    local_3c = local_5c;
    local_2c = local_58;
    local_1c = local_54;
    FUN_segment_0__804270d8(&local_68,param_1 + 0x6f4,0);
    local_38 = local_68;
    local_28 = local_64;
    local_18 = local_60;
  }
  if (*(int *)(param_1 + 0x240) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x240) + 0x74);
  }
  return;
}

// === KartSub_validate_8059acec (0x8059acec) ===
void KartSub_validate_8059acec(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x248) + 0x74);
}

// === KartSub_validate_8059adec (0x8059adec) ===
void KartSub_validate_8059adec(int param_1)

{
  if (((*(char *)(iRam00000000 + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
     (*(int *)(param_1 + 0x244) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x244) + 0x74);
  }
  return;
}

// === KartSub_validate_8059aeb0 (0x8059aeb0) ===
void KartSub_validate_8059aeb0(int param_1)

{
  if (*(int *)(param_1 + 0x244) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x244) + 0x74);
  }
  return;
}

// === KartSub_validate_8059af54 (0x8059af54) ===
void KartSub_validate_8059af54(int param_1)

{
  double dVar1;
  
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)((int)g_Ram_float + 0x10) == 0)) &&
      (*(char *)(param_1 + 299) == 0)) &&
     ((dVar1 = (double)FUN_segment_0__8047e63c(*(u32 *)(param_1 + 0x118)),
      (double)g_Ram_float <= dVar1 && (*(int *)(param_1 + 0x294) != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x294) + 0x74);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059b080 (0x8059b080) ===
void KartDynamics_Wheel_validate_8059b080(int param_1)

{
  if (*(int *)(param_1 + 0x294) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x294) + 0x74);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059b124 (0x8059b124) ===
void KartDynamics_Wheel_validate_8059b124(int param_1)

{
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) &&
      (*(char *)(param_1 + 299) == 0)) && (*(int *)(param_1 + 0x298) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x298) + 0x74);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059b224 (0x8059b224) ===
void KartDynamics_Wheel_validate_8059b224(int param_1)

{
  if (*(int *)(param_1 + 0x298) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x298) + 0x74);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059b2c8 (0x8059b2c8) ===
void KartDynamics_Wheel_validate_8059b2c8(int param_1,u32 param_2,int param_3)

{
  u16 uVar1;
  
  if ((((param_3 == 0) &&
       ((((*(char *)(param_1 + 0x14c) != 0 || (*(char *)(param_1 + 0x14d) != 0)) ||
         (*(char *)(param_1 + 0x14e) != 0)) &&
        ((*(char *)(param_1 + 299) == 0 &&
         (uVar1 = *(u16 *)(iRam00000000 + 4) >> 5 & 7, *(char *)(param_1 + 0x79) == 0)))))) &&
      (*(char *)(param_1 + 0x7a) == 0)) && (*(int *)(param_1 + 100) == -1)) {
    if (uVar1 == 1) {
      *(u32 *)(param_1 + 0x79) = 1;
    }
    else if (uVar1 == 2) {
      *(u32 *)(param_1 + 0x7a) = 1;
    }
    else if (uVar1 == 3) {
      *(u32 *)(param_1 + 0x79) = 1;
      *(u32 *)(param_1 + 0x7b) = 1;
    }
    if (*(char *)(param_1 + 4) == 0) {
      if (uVar1 == 1) {
        if (*(char *)(param_1 + 0x14c) != 0) {
          kart_KartDynamics_Wheel_8059b774
                    ((double)*(float *)(iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 8 & 7) * 4
                                       + 0x1c),param_1);
        }
      }
      else if (uVar1 == 2) {
        KartDynamics_Wheel_validate_8059b954(param_1,*(u16 *)(iRam00000000 + 4) >> 8 & 7);
      }
      else if (uVar1 == 3) {
        if (*(char *)(param_1 + 0x14c) != 0) {
          kart_KartDynamics_Wheel_8059b774
                    ((double)*(float *)(iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 8 & 7) * 4
                                       + 0x1c),param_1);
        }
      }
      else if ((uVar1 == 5) && (*(int *)(param_1 + 0x228) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(param_1 + 0x228) + 0x74);
      }
    }
  }
  return;
}

// === kart_KartDynamics_Wheel_8059b4b8 (0x8059b4b8) ===
void kart_KartDynamics_Wheel_8059b4b8(int param_1)

{
  bool bVar1;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u32 local_18;
  u32 local_14;
  
  if (((*(char *)(param_1 + 0x78) == 0) && (*(char *)(param_1 + 299) == 0)) &&
     (*(char *)(param_1 + 4) == 0)) {
    bVar1 = *(char *)(param_1 + 0x14c) == 0;
    if (bVar1) {
      if (*(char *)(param_1 + 0x14d) == 0) {
        if (!bVar1) {
          *(u32 *)(param_1 + 0x79) = 1;
        }
      }
      else {
        *(u32 *)(param_1 + 0x7a) = 1;
      }
    }
    else {
      *(u32 *)(param_1 + 0x79) = 1;
    }
    if (*(int *)(iRam00000000 + 0xb68) == 10) {
      bVar1 = (*(u16 *)(iRam00000000 + 4) >> 8 & 7) == 5;
      *(bool *)(param_1 + 0x7c) = bVar1;
      if (bVar1) {
        local_1c = *(u32 *)(param_1 + 0x6d0);
        local_14 = *(u32 *)(param_1 + 0x6d8);
        local_18 = *(u32 *)
                    (iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 6 & 0x1c) + 0x1c);
        if (*(char *)(param_1 + 0xb0) == 0) {
          KartDynamics_validate_805a56e0(0x17ef,&local_1c);
        }
        else {
          KartDynamics_validate_805a57a0(0x17e2,&local_1c,param_1 + 0x72c);
        }
      }
      else if (*(char *)(param_1 + 0x14c) != 0) {
        kart_KartDynamics_Wheel_8059b774
                  ((double)*(float *)(iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 8 & 7) * 4 +
                                     0x1c),param_1);
      }
    }
    else if (*(int *)(iRam00000000 + 0xb68) == 0x26) {
      bVar1 = (*(u16 *)(iRam00000000 + 4) >> 8 & 7) == 0;
      *(bool *)(param_1 + 0x7c) = bVar1;
      if (bVar1) {
        local_28 = *(u32 *)(param_1 + 0x6d0);
        local_20 = *(u32 *)(param_1 + 0x6d8);
        local_24 = *(u32 *)
                    (iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 6 & 0x1c) + 0x1c);
        if (*(char *)(param_1 + 0xb0) == 0) {
          KartDynamics_validate_805a56e0(0x180a,&local_28);
        }
        else {
          KartDynamics_validate_805a57a0(0x17fc,&local_28,param_1 + 0x72c);
        }
      }
    }
    else if (*(char *)(param_1 + 0x14c) != 0) {
      kart_KartDynamics_Wheel_8059b774
                ((double)*(float *)(iRam00000000 + (*(u16 *)(iRam00000000 + 4) >> 8 & 7) * 4 +
                                   0x1c),param_1);
    }
    *(u32 *)(param_1 + 0x78) = 1;
  }
  return;
}

// === kart_KartDynamics_Wheel_8059b774 (0x8059b774) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Wheel_8059b774(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_Wheel_validate_8059b954 (0x8059b954) ===
void KartDynamics_Wheel_validate_8059b954(int param_1,int param_2)

{
  int iVar1;
  u32 auStack_58 [4];
  u32 local_54;
  u32 auStack_48 [60];
  
  if (*(char *)(param_1 + 0x14d) == 0) {
    return;
  }
  FUN_segment_0__80404464(auStack_58,param_1 + 0x6d0,param_1 + 0x6dc);
  local_54 = *(u32 *)(iRam00000000 + param_2 * 4 + 0x1c);
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(char *)(param_1 + 0xc) == 0) {
      if (*(char *)(param_1 + 0xb0) == 0) {
        KartDynamics_validate_805a56e0(0x187d,auStack_58);
      }
      else {
        KartDynamics_validate_805a57a0(0x186e,auStack_58,param_1 + 0x72c);
      }
    }
  }
  else if (*(char *)(param_1 + 0xb0) == 0) {
    KartDynamics_validate_805a56e0(0x1860,auStack_58);
  }
  else {
    KartDynamics_validate_805a57a0(0x1852,auStack_58,param_1 + 0x72c);
  }
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x15c) + 0xc)))(*(int **)(param_1 + 0x15c),1);
  iVar1 = **(int **)(*(int *)(param_1 + 0x15c) + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0xc,auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48);
}

// === kart_KartDynamics_Wheel_8059bb28 (0x8059bb28) ===
void kart_KartDynamics_Wheel_8059bb28(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x228);
  if ((piVar1 != (int *)0) &&
     (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
  }
  piVar1 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
  ((void(*)(...))(*(void**)(*piVar1 + 0xe4)))((double)g_Ram_float,piVar1,0x2f8);
  return;
}

// === KartDynamics_Wheel_validate_8059bbc0 (0x8059bbc0) ===
void KartDynamics_Wheel_validate_8059bbc0(int param_1)

{
  u32 local_48;
  u32 local_44;
  u32 local_40;
  u32 auStack_38 [48];
  
  if (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100)) {
    local_48 = uRam00000000;
    local_44 = uRam00000000;
    local_40 = uRam00000000;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_38,&local_48);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059bcd8 (0x8059bcd8) ===
void KartDynamics_Wheel_validate_8059bcd8(int param_1)

{
  if (*(int *)(param_1 + 0x228) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x228) + 0x74);
  }
  return;
}

// === kart_KartDynamics_Wheel_8059bd58 (0x8059bd58) ===
void kart_KartDynamics_Wheel_8059bd58(int param_1,int param_2,int param_3)

{
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  local_18 = *(u32 *)(param_1 + 0x6d0);
  local_10 = *(u32 *)(param_1 + 0x6d8);
  local_14 = *(u32 *)(iRam00000000 + param_2 * 4 + 0x1c);
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0xb0) == 0) {
      KartDynamics_validate_805a56e0(0x18b4,&local_18);
    }
    else {
      KartDynamics_validate_805a57a0(0x18a6,&local_18,param_1 + 0x72c);
    }
  }
  else if (*(char *)(param_1 + 0xb0) == 0) {
    KartDynamics_validate_805a56e0(0x1899,&local_18);
  }
  else {
    KartDynamics_validate_805a57a0(0x188c,&local_18,param_1 + 0x72c);
  }
  return;
}

// === kart_KartDynamics_Wheel_8059be28 (0x8059be28) ===
void kart_KartDynamics_Wheel_8059be28(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x250);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1);
    ((void(*)(...))(*(void**)(*piVar1 + 0x74)))(piVar1,param_1 + 0x6d0);
    if (*(char *)(param_1 + 0xb0) != 0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    ((void(*)(...))(*(void**)(*piVar1 + 0x80)))(piVar1);
  }
  *(u32 *)(param_1 + 9) = 1;
  return;
}

// === KartDynamics_Wheel_validate_8059bed0 (0x8059bed0) ===
void KartDynamics_Wheel_validate_8059bed0(int param_1)

{
  if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x250) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x250) + 0x74);
    }
  }
  else if (*(int *)(param_1 + 0x250) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x250) + 0x74);
  }
  return;
}

// === kart_KartDynamics_Wheel_8059c018 (0x8059c018) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Wheel_8059c018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_Wheel_validate_8059c230 (0x8059c230) ===
void KartDynamics_Wheel_validate_8059c230(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x254) + 0x74);
}

// === KartDynamics_Wheel_validate_8059c2b4 (0x8059c2b4) ===
void KartDynamics_Wheel_validate_8059c2b4(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x254) + 0x74);
}

// === kart_KartDynamics_Wheel_8059c354 (0x8059c354) ===
void kart_KartDynamics_Wheel_8059c354(int param_1)

{
  int *piVar1;
  
  if (((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
     (*(char *)(param_1 + 299) == 0)) {
    piVar1 = *(int **)(param_1 + 0x25c);
    if ((piVar1 != (int *)0) &&
       (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    piVar1 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
    ((void(*)(...))(*(void**)(*piVar1 + 0xe4)))((double)g_Ram_float,piVar1,0x350);
    FUN_segment_0__8047e02c(*(u32 *)(param_1 + 0x118),0x1a);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059c428 (0x8059c428) ===
void KartDynamics_Wheel_validate_8059c428(int param_1)

{
  if (*(char *)(param_1 + 0x151) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x25c) + 0x74);
  }
  return;
}

// === KartDynamics_Wheel_validate_8059c53c (0x8059c53c) ===
void KartDynamics_Wheel_validate_8059c53c(int param_1)

{
  int iVar1;
  u32 auStack_7c [60];
  u32 local_40;
  u32 local_3c;
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
  
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x160) + 0xc)))(*(int **)(param_1 + 0x160),1);
  iVar1 = *(int *)(param_1 + 0x6cc);
  local_40 = *(u32 *)(param_1 + 0x6f4);
  *(u32 *)(param_1 + 0x77c) = *(u32 *)(iVar1 + 0x30);
  local_3c = *(u32 *)(param_1 + 0x6f8);
  *(u32 *)(param_1 + 0x780) = *(u32 *)(iVar1 + 0x34);
  *(u32 *)(param_1 + 0x784) = *(u32 *)(iVar1 + 0x38);
  *(u32 *)(param_1 + 0x788) = *(u32 *)(iVar1 + 0x3c);
  *(u32 *)(param_1 + 0x78c) = *(u32 *)(iVar1 + 0x40);
  *(u32 *)(param_1 + 0x790) = *(u32 *)(iVar1 + 0x44);
  local_38 = *(u32 *)(param_1 + 0x6fc);
  local_30 = *(u32 *)(param_1 + 0x704);
  local_2c = *(u32 *)(param_1 + 0x708);
  local_28 = *(u32 *)(param_1 + 0x70c);
  local_20 = *(u32 *)(param_1 + 0x714);
  local_1c = *(u32 *)(param_1 + 0x718);
  local_18 = *(u32 *)(param_1 + 0x71c);
  local_34 = uRam00000000;
  local_24 = uRam00000004;
  local_14 = uRam00000008;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_7c,&local_40,param_1 + 0x788);
}

// === kart_KartDynamics_Wheel_8059c734 (0x8059c734) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Wheel_8059c734(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Wheel_8059cbd4 (0x8059cbd4) ===
void kart_KartDynamics_Wheel_8059cbd4(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x724);
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
  ((void(*)(...))(*(void**)(**(int **)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c) + 0x20)))(&local_18);
  *(u32 *)(param_1 + 0x9c) = local_18;
  *(u32 *)(param_1 + 0xa0) = local_14;
  *(u32 *)(param_1 + 0xa4) = local_10;
  (**(code **)(**(int **)(param_1 + 0x2cc) + 0x18))();
  return;
}

// === kart_KartDynamics_Wheel_8059cca0 (0x8059cca0) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Wheel_8059cca0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059d130 (0x8059d130) ===
void kart_KartDynamics_Tire_8059d130(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x724);
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
  ((void(*)(...))(*(void**)(**(int **)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c) + 0x20)))(&local_18);
  *(u32 *)(param_1 + 0x9c) = local_18;
  *(u32 *)(param_1 + 0xa0) = local_14;
  *(u32 *)(param_1 + 0xa4) = local_10;
  (**(code **)(**(int **)(param_1 + 0x2d0) + 0x10))();
  return;
}

// === kart_KartDynamics_Tire_8059d1fc (0x8059d1fc) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059d1fc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059d68c (0x8059d68c) ===
void kart_KartDynamics_Tire_8059d68c(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 local_18;
  u32 local_14;
  u32 local_10;
  
  bVar1 = false;
  iVar2 = *(int *)(param_1 + 0x724);
  if ((-1 < iVar2) && (iVar2 < iRam00000004)) {
    bVar1 = true;
  }
  if (!bVar1) {
    ((void(*)(...))(*(void**)(iRam00000000 + 0x18)))(0);
  }
  ((void(*)(...))(*(void**)(**(int **)(*(int *)(iRam00000008 + iVar2 * 4) + 0x6c) + 0x20)))(&local_18);
  *(u32 *)(param_1 + 0x9c) = local_18;
  *(u32 *)(param_1 + 0xa0) = local_14;
  *(u32 *)(param_1 + 0xa4) = local_10;
  (**(code **)(**(int **)(param_1 + 0x2d4) + 0x10))();
  return;
}

// === kart_KartDynamics_Tire_8059d758 (0x8059d758) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059d758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059db0c (0x8059db0c) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059db0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059df84 (0x8059df84) ===
void kart_KartDynamics_Tire_8059df84
               (u32 *param_1,u32 param_2,u32 param_3,u32 param_4,
               u32 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// === kart_KartDynamics_Tire_8059df98 (0x8059df98) ===
void kart_KartDynamics_Tire_8059df98(u32 *param_1,u32 *param_2)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// === kart_KartDynamics_Tire_8059dfbc (0x8059dfbc) ===
void kart_KartDynamics_Tire_8059dfbc(int param_1)

{
  u32 auStack_48 [12];
  u32 auStack_3c [12];
  u32 auStack_30 [12];
  u32 auStack_24 [12];
  u32 auStack_18 [20];
  
  if (((*(int *)(param_1 + 0x124) != 0) || (*(int *)(param_1 + 0x318) != 0)) &&
     ((*(int *)(param_1 + 0x124) != 1 || (*(int *)(param_1 + 0x318) != 0)))) {
    FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xa50),auStack_18,param_1 + 0x6dc);
    FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xa50),auStack_24,param_1 + 0x7ec);
    FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xa50),auStack_30,param_1 + 0x7f8);
    if (*(int *)(param_1 + 0x124) == 0) {
      (**(code **)(**(int **)(param_1 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x78)))(*(int **)(param_1 + 0x318),param_1 + 0x6f4);
      FUN_segment_0__80404464(auStack_3c,param_1 + 0x7d4,param_1 + 0x7e0);
      FUN_segment_0__8040443c((double)g_Ram_float,auStack_48,auStack_3c);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x74)))(*(int **)(param_1 + 0x318),auStack_48);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x4c)))(*(int **)(param_1 + 0x318),auStack_24);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x318) + 0x58))
                  (*(int **)(param_1 + 0x318),param_1 + 0x738);
      }
      (**(code **)(**(int **)(param_1 + 0x318) + 0x80))();
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      (**(code **)(**(int **)(param_1 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x74)))(*(int **)(param_1 + 0x318),param_1 + 0x7e0);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x78)))(*(int **)(param_1 + 0x318),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x318) + 0x4c)))(*(int **)(param_1 + 0x318),auStack_30);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x318) + 0x58))
                  (*(int **)(param_1 + 0x318),param_1 + 0x738);
      }
      (**(code **)(**(int **)(param_1 + 0x318) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059e1a4 (0x8059e1a4) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059e1a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059e504 (0x8059e504) ===
void kart_KartDynamics_Tire_8059e504(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x124);
  if (((iVar2 != 0) || (*(int *)(param_1 + 800) != 0)) &&
     ((iVar2 != 1 || (*(int *)(param_1 + 0x31c) != 0)))) {
    if (iVar2 == 0) {
      iVar2 = param_1 + (param_2 + 2) * 4;
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x78)))(*(int **)(iVar2 + 0x318),param_1 + 0x6f4);
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x74))
                (*(int **)(iVar2 + 0x318),param_1 + param_2 * 0xc + 0x7bc);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x70)))(*(int **)(iVar2 + 0x318),param_1 + 0x72c);
      }
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x58)))(*(int **)(iVar2 + 0x318),param_1 + 0x738);
      }
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x80))();
    }
    else if (iVar2 == 1) {
      (**(code **)(**(int **)(param_1 + 0x31c) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x31c) + 0x78)))(*(int **)(param_1 + 0x31c),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x31c) + 0x74)))(*(int **)(param_1 + 0x31c),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x31c) + 0x70))
                  (*(int **)(param_1 + 0x31c),param_1 + 0x72c);
      }
      if (*(char *)(param_1 + 0xb0) != 0) {
        piVar1 = *(int **)(param_1 + (param_2 + 1) * 4 + 0x318);
        ((void(*)(...))(*(void**)(*piVar1 + 0x58)))(piVar1,param_1 + 0x738);
      }
      (**(code **)(**(int **)(param_1 + 0x31c) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059e6e0 (0x8059e6e0) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059e6e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059e9d4 (0x8059e9d4) ===
void kart_KartDynamics_Tire_8059e9d4(int param_1)

{
  u32 auStack_58 [12];
  u32 auStack_4c [12];
  u32 auStack_40 [12];
  u32 auStack_34 [12];
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  if (((*(int *)(param_1 + 0x124) != 0) || (*(int *)(param_1 + 0x328) != 0)) &&
     ((*(int *)(param_1 + 0x124) != 1 || (*(int *)(param_1 + 800) != 0)))) {
    FUN_segment_0__804270d8(auStack_28,param_1 + 0x6f4,1);
    FUN_segment_0__8040443c((double)g_Ram_float,auStack_1c,auStack_28);
    if (*(int *)(param_1 + 0x124) == 0) {
      (**(code **)(**(int **)(param_1 + 0x328) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x328) + 0x78)))(*(int **)(param_1 + 0x328),param_1 + 0x6f4);
      FUN_segment_0__80404464(auStack_34,param_1 + 0x7bc,param_1 + 0x7c8);
      FUN_segment_0__8040443c((double)g_Ram_float,auStack_40,auStack_34);
      FUN_segment_0__80404464(auStack_4c,auStack_40,auStack_1c);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x328) + 0x74)))(*(int **)(param_1 + 0x328),auStack_4c);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x328) + 0x70))
                  (*(int **)(param_1 + 0x328),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 0x328) + 0x80))();
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      (**(code **)(**(int **)(param_1 + 800) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 800) + 0x78)))(*(int **)(param_1 + 800),param_1 + 0x6f4);
      FUN_segment_0__80404464(auStack_58,param_1 + 0x7c8,auStack_1c);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 800) + 0x74)))(*(int **)(param_1 + 800),auStack_58);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(param_1 + 800) + 0x70)))(*(int **)(param_1 + 800),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 800) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059eba0 (0x8059eba0) ===
void kart_KartDynamics_Tire_8059eba0(int param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_segment_0__8047e63c(*(u32 *)(param_1 + 0x118));
  if ((((*(char *)(param_1 + 0x6b) != 0) && (*(char *)(param_1 + 0x6c) == 0)) &&
      ((double)g_Ram_float <= dVar1)) && (*(char *)(param_1 + 0x129) != 0)) {
    if (*(char *)(param_1 + 0xb0) == 0) {
      KartDynamics_validate_805a5740(0x18ce,param_1 + 0x6f4);
    }
    else {
      KartDynamics_validate_805a581c(0x18c2,param_1 + 0x6f4,param_1 + 0x72c);
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059ec50 (0x8059ec50) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059ec50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059f0e8 (0x8059f0e8) ===
void kart_KartDynamics_Tire_8059f0e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0x338) != 0)) &&
     ((iVar1 != 1 || (*(int *)(param_1 + 0x328) != 0)))) {
    if (iVar1 == 0) {
      iVar2 = param_1 + (param_2 + 8) * 4;
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x78)))(*(int **)(iVar2 + 0x318),param_1 + 0x6f4);
      iVar1 = param_1 + param_2 * 0xc + 0x7bc;
      ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x74)))(*(int **)(iVar2 + 0x318),iVar1);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x70)))(*(int **)(iVar2 + 0x318),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x80))();
      iVar2 = param_1 + (param_2 + 10) * 4;
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x78)))(*(int **)(iVar2 + 0x318),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x74)))(*(int **)(iVar2 + 0x318),iVar1);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar2 + 0x318) + 0x70)))(*(int **)(iVar2 + 0x318),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(iVar2 + 0x318) + 0x80))();
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 0x328) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x328) + 0x78)))(*(int **)(param_1 + 0x328),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x328) + 0x74)))(*(int **)(param_1 + 0x328),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x328) + 0x70))
                  (*(int **)(param_1 + 0x328),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 0x328) + 0x80))();
      (**(code **)(**(int **)(param_1 + 0x32c) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x32c) + 0x78)))(*(int **)(param_1 + 0x32c),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x32c) + 0x74)))(*(int **)(param_1 + 0x32c),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x32c) + 0x70))
                  (*(int **)(param_1 + 0x32c),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 0x32c) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059f380 (0x8059f380) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059f380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_Tire_validate_8059f604 (0x8059f604) ===
void KartDynamics_Tire_validate_8059f604(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0x330) != 0)) &&
     ((iVar1 != 1 || (*(int *)(param_1 + 0x324) != 0)))) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + (param_2 + 6) * 4 + 0x318);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar1 + 0x74);
      }
    }
    else if ((iVar1 == 1) && (*(int *)(param_1 + 0x324) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x324) + 0x74);
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059f81c (0x8059f81c) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059f81c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059fb28 (0x8059fb28) ===
void kart_KartDynamics_Tire_8059fb28(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0x348) != 0)) &&
     ((iVar1 != 1 || (*(int *)(param_1 + 0x330) != 0)))) {
    if (iVar1 == 0) {
      iVar1 = param_1 + (param_2 + 0xc) * 4;
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(iVar1 + 0x318) + 0x78)))(*(int **)(iVar1 + 0x318),param_1 + 0x6f4);
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x74))
                (*(int **)(iVar1 + 0x318),param_1 + param_2 * 0xc + 0x7bc);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar1 + 0x318) + 0x70)))(*(int **)(iVar1 + 0x318),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x80))();
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 0x330) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x330) + 0x78)))(*(int **)(param_1 + 0x330),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x330) + 0x74)))(*(int **)(param_1 + 0x330),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x330) + 0x70))
                  (*(int **)(param_1 + 0x330),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 0x330) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_8059fcb0 (0x8059fcb0) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_8059fcb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_8059ff4c (0x8059ff4c) ===
void kart_KartDynamics_Tire_8059ff4c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0x350) != 0)) &&
     ((iVar1 != 1 || (*(int *)(param_1 + 0x334) != 0)))) {
    if (iVar1 == 0) {
      iVar1 = param_1 + (param_2 + 0xe) * 4;
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(iVar1 + 0x318) + 0x78)))(*(int **)(iVar1 + 0x318),param_1 + 0x6f4);
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x74))
                (*(int **)(iVar1 + 0x318),param_1 + param_2 * 0xc + 0x7bc);
      if (*(char *)(param_1 + 0xb0) != 0) {
        ((void(*)(...))(*(void**)(**(int **)(iVar1 + 0x318) + 0x70)))(*(int **)(iVar1 + 0x318),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(iVar1 + 0x318) + 0x80))();
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 0x334) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x334) + 0x78)))(*(int **)(param_1 + 0x334),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x334) + 0x74)))(*(int **)(param_1 + 0x334),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x334) + 0x70))
                  (*(int **)(param_1 + 0x334),param_1 + 0x72c);
      }
      (**(code **)(**(int **)(param_1 + 0x334) + 0x80))();
    }
  }
  return;
}

// === kart_KartDynamics_Tire_805a00d4 (0x805a00d4) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_805a00d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_Tire_805a036c (0x805a036c) ===
void kart_KartDynamics_Tire_805a036c(int param_1)

{
  int iVar1;
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  iVar1 = *(int *)(param_1 + 0x124);
  if (((iVar1 != 0) || (*(int *)(param_1 + 0x358) != 0)) &&
     ((iVar1 != 1 || (*(int *)(param_1 + 0x338) != 0)))) {
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x358) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x358) + 0x78)))(*(int **)(param_1 + 0x358),param_1 + 0x6f4);
      FUN_segment_0__80404464(auStack_1c,param_1 + 0x7bc,param_1 + 0x7c8);
      FUN_segment_0__8040443c((double)g_Ram_float,auStack_28,auStack_1c);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x358) + 0x74)))(*(int **)(param_1 + 0x358),auStack_28);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x358) + 0x58))
                  (*(int **)(param_1 + 0x358),param_1 + 0x738);
      }
      (**(code **)(**(int **)(param_1 + 0x358) + 0x80))();
    }
    else if (iVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 0x338) + 0x14))();
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x338) + 0x78)))(*(int **)(param_1 + 0x338),param_1 + 0x6f4);
      ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x338) + 0x74)))(*(int **)(param_1 + 0x338),param_1 + 0x7c8);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(**(int **)(param_1 + 0x338) + 0x58))
                  (*(int **)(param_1 + 0x338),param_1 + 0x738);
      }
      (**(code **)(**(int **)(param_1 + 0x338) + 0x80))();
    }
  }
  return;
}

// === KartDynamics_Tire_assertFail_805a04f0 (0x805a04f0) ===
void KartDynamics_Tire_assertFail_805a04f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === kart_KartDynamics_Tire_805a07cc (0x805a07cc) ===
void kart_KartDynamics_Tire_805a07cc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  do {
    piVar1 = *(int **)(iVar3 + 0x1f0);
    if (piVar1 != (int *)0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x2c);
  iVar2 = 0;
  iVar3 = param_1;
  do {
    piVar1 = *(int **)(iVar3 + 0x2d8);
    if (piVar1 != (int *)0) {
      ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x10);
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      piVar1 = *(int **)(iVar3 + 0x318);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x12);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar2 = 0;
    iVar3 = param_1;
    do {
      piVar1 = *(int **)(iVar3 + 0x318);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 9);
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x52c) + iVar2);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 8);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x610) + iVar2);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 8);
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x530) + iVar2);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x24);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x614) + iVar2);
      if (piVar1 != (int *)0) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x1c);
  }
  return;
}

// === kart_KartDynamics_Tire_805a0a1c (0x805a0a1c) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_Tire_805a0a1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a1334 (0x805a1334) ===
void kart_KartDynamics_805a1334(int param_1)

{
  int iVar1;
  u32 auStack_108 [4];
  u32 auStack_104 [4];
  u32 auStack_100 [4];
  u32 auStack_fc [4];
  u32 auStack_f8 [4];
  u32 auStack_f4 [4];
  u32 auStack_f0 [4];
  u32 auStack_ec [4];
  u32 auStack_e8 [4];
  u32 auStack_e4 [4];
  u32 auStack_e0 [4];
  u32 auStack_dc [4];
  u32 auStack_d8 [4];
  u32 auStack_d4 [4];
  u32 auStack_d0 [4];
  u32 auStack_cc [4];
  u32 auStack_c8 [4];
  u32 auStack_c4 [4];
  u32 auStack_c0 [4];
  u32 auStack_bc [4];
  u32 auStack_b8 [4];
  u32 auStack_b4 [4];
  u32 auStack_b0 [4];
  u32 auStack_ac [4];
  u32 auStack_a8 [4];
  u32 auStack_a4 [4];
  u32 auStack_a0 [4];
  u32 auStack_9c [4];
  u32 auStack_98 [4];
  u32 auStack_94 [4];
  u32 auStack_90 [4];
  u32 auStack_8c [4];
  u32 auStack_88 [4];
  u32 auStack_84 [4];
  u32 auStack_80 [4];
  u32 auStack_7c [4];
  u32 auStack_78 [4];
  u32 auStack_74 [4];
  u32 auStack_70 [4];
  u32 auStack_6c [4];
  u32 auStack_68 [4];
  u32 auStack_64 [4];
  u32 auStack_60 [4];
  u32 auStack_5c [4];
  u32 auStack_58 [4];
  u32 auStack_54 [4];
  u32 auStack_50 [4];
  u32 auStack_4c [4];
  u32 auStack_48 [4];
  u32 auStack_44 [4];
  u32 auStack_40 [4];
  u32 auStack_3c [4];
  u32 auStack_38 [4];
  u32 auStack_34 [4];
  u32 auStack_30 [4];
  u32 auStack_2c [4];
  u32 auStack_28 [4];
  u32 auStack_24 [4];
  u32 auStack_20 [4];
  u32 auStack_1c [4];
  u32 auStack_18 [20];
  
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x1f) {
    kart_KartDynamics_Tire_8059df84(auStack_18,0xff,0xee,0x9d,0x96);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x194,auStack_18);
    FUN_segment_0__8057e460(auStack_18,0xffffffff);
  }
  else {
    FUN_segment_0__8057e448();
    iVar1 = FUN_segment_0__8057e454();
    if (iVar1 == 0x24) {
      kart_KartDynamics_Tire_8059df84(auStack_1c,0xf1,0xd2,0x94,0x96);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x194,auStack_1c);
      FUN_segment_0__8057e460(auStack_1c,0xffffffff);
    }
    else {
      kart_KartDynamics_Tire_8059df84(auStack_20,0xff,0xff,0xba,0x96);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x194,auStack_20);
      FUN_segment_0__8057e460(auStack_20,0xffffffff);
    }
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x16) {
    kart_KartDynamics_Tire_8059df84(auStack_24,0xf3,0xe2,0x8e,200);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x198,auStack_24);
    FUN_segment_0__8057e460(auStack_24,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_28,0xe7,0xc0,0x6f,0x96);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x198,auStack_28);
    FUN_segment_0__8057e460(auStack_28,0xffffffff);
  }
  kart_KartDynamics_Tire_8059df84(auStack_2c,0xf3,0xdf,0xa3,0x96);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x19c,auStack_2c);
  FUN_segment_0__8057e460(auStack_2c,0xffffffff);
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x23) {
    kart_KartDynamics_Tire_8059df84(auStack_30,0xff,0xf1,0x8a,0x96);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1a0,auStack_30);
    FUN_segment_0__8057e460(auStack_30,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_34,0xcc,0x8b,0x54,200);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1a0,auStack_34);
    FUN_segment_0__8057e460(auStack_34,0xffffffff);
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 3) {
    kart_KartDynamics_Tire_8059df84(auStack_38,0x7c,0x50,0x27,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1a4,auStack_38);
    FUN_segment_0__8057e460(auStack_38,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_3c,0x9f,0x7d,0x40,200);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1a4,auStack_3c);
    FUN_segment_0__8057e460(auStack_3c,0xffffffff);
  }
  kart_KartDynamics_Tire_8059df84(auStack_40,0xff,0xff,0xba,0x96);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1a8,auStack_40);
  FUN_segment_0__8057e460(auStack_40,0xffffffff);
  kart_KartDynamics_Tire_8059df84(auStack_44,0xe7,0xe7,0xc4,100);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1ac,auStack_44);
  FUN_segment_0__8057e460(auStack_44,0xffffffff);
  kart_KartDynamics_Tire_8059df84(auStack_48,0x47,0x6b,0x3f,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1dc,auStack_48);
  FUN_segment_0__8057e460(auStack_48,0xffffffff);
  kart_KartDynamics_Tire_8059df84(auStack_4c,0x9f,0x70,0x3c,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1ec,auStack_4c);
  FUN_segment_0__8057e460(auStack_4c,0xffffffff);
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0) {
    kart_KartDynamics_Tire_8059df84(auStack_50,0xf3,0xe4,0x90,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_50);
    FUN_segment_0__8057e460(auStack_50,0xffffffff);
  }
  else {
    FUN_segment_0__8057e448();
    iVar1 = FUN_segment_0__8057e454();
    if (iVar1 == 0xc) {
      kart_KartDynamics_Tire_8059df84(auStack_54,0x46,0x41,0x32,0xff);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_54);
      FUN_segment_0__8057e460(auStack_54,0xffffffff);
    }
    else {
      FUN_segment_0__8057e448();
      iVar1 = FUN_segment_0__8057e454();
      if (iVar1 == 0x1a) {
        kart_KartDynamics_Tire_8059df84(auStack_58,0xf1,0xdb,0x9f,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_58);
        FUN_segment_0__8057e460(auStack_58,0xffffffff);
      }
      else {
        FUN_segment_0__8057e448();
        iVar1 = FUN_segment_0__8057e454();
        if (iVar1 == 0x1e) {
          kart_KartDynamics_Tire_8059df84(auStack_5c,0x9f,0x61,0x57,0xff);
          kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_5c);
          FUN_segment_0__8057e460(auStack_5c,0xffffffff);
        }
        else {
          FUN_segment_0__8057e448();
          iVar1 = FUN_segment_0__8057e454();
          if (iVar1 == 0x18) {
            kart_KartDynamics_Tire_8059df84(auStack_60,0xd8,199,0x8d,0xff);
            kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_60);
            FUN_segment_0__8057e460(auStack_60,0xffffffff);
          }
          else {
            FUN_segment_0__8057e448();
            iVar1 = FUN_segment_0__8057e454();
            if (iVar1 == 0x27) {
              kart_KartDynamics_Tire_8059df84(auStack_64,0xd8,199,0x8d,0xff);
              kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_64);
              FUN_segment_0__8057e460(auStack_64,0xffffffff);
            }
            else {
              FUN_segment_0__8057e448();
              iVar1 = FUN_segment_0__8057e454();
              if (iVar1 == 0x28) {
                kart_KartDynamics_Tire_8059df84(auStack_68,0xff,0xe0,0xb0,0xff);
                kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_68);
                FUN_segment_0__8057e460(auStack_68,0xffffffff);
              }
              else {
                FUN_segment_0__8057e448();
                iVar1 = FUN_segment_0__8057e454();
                if (iVar1 == 0xe) {
                  kart_KartDynamics_Tire_8059df84(auStack_6c,0xcf,0xb7,0x55,0xff);
                  kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_6c);
                  FUN_segment_0__8057e460(auStack_6c,0xffffffff);
                }
                else {
                  FUN_segment_0__8057e448();
                  iVar1 = FUN_segment_0__8057e454();
                  if (iVar1 == 2) {
                    kart_KartDynamics_Tire_8059df84(auStack_70,0x45,0x75,0x55,0x80);
                    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_70);
                    FUN_segment_0__8057e460(auStack_70,0xffffffff);
                  }
                  else {
                    kart_KartDynamics_Tire_8059df84(auStack_74,0xf3,0xe4,0x78,0xff);
                    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b0,auStack_74);
                    FUN_segment_0__8057e460(auStack_74,0xffffffff);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x12) {
    kart_KartDynamics_Tire_8059df84(auStack_78,0x69,0x50,0x34,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b4,auStack_78);
    FUN_segment_0__8057e460(auStack_78,0xffffffff);
  }
  else {
    FUN_segment_0__8057e448();
    iVar1 = FUN_segment_0__8057e454();
    if (iVar1 == 0x1d) {
      kart_KartDynamics_Tire_8059df84(auStack_7c,0x75,0x55,0x33,0xff);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x1b4,auStack_7c);
      FUN_segment_0__8057e460(auStack_7c,0xffffffff);
    }
    else {
      FUN_segment_0__8057e448();
      iVar1 = FUN_segment_0__8057e454();
      if (iVar1 == 0x13) {
        kart_KartDynamics_Tire_8059df84(auStack_80,0x6f,0x57,0x39,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1b4,auStack_80);
        FUN_segment_0__8057e460(auStack_80,0xffffffff);
      }
      else {
        kart_KartDynamics_Tire_8059df84(auStack_84,0xb7,0x90,0x54,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1b4,auStack_84);
        FUN_segment_0__8057e460(auStack_84,0xffffffff);
      }
    }
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x15) {
    kart_KartDynamics_Tire_8059df84(auStack_88,0xe7,0xb8,0x57,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b8,auStack_88);
    FUN_segment_0__8057e460(auStack_88,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_8c,0xf3,0xe4,0x85,200);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1b8,auStack_8c);
    FUN_segment_0__8057e460(auStack_8c,0xffffffff);
  }
  kart_KartDynamics_Tire_8059df84(auStack_90,0xb7,0x9a,0x87,200);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1bc,auStack_90);
  FUN_segment_0__8057e460(auStack_90,0xffffffff);
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x12) {
    kart_KartDynamics_Tire_8059df84(auStack_94,0x52,0x5b,0x43,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1e4,auStack_94);
    FUN_segment_0__8057e460(auStack_94,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_98,0x74,0x4d,0,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1e4,auStack_98);
    FUN_segment_0__8057e460(auStack_98,0xffffffff);
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0) {
    kart_KartDynamics_Tire_8059df84(auStack_9c,0x3c,0xa0,0,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_9c);
    FUN_segment_0__8057e460(auStack_9c,0xffffffff);
  }
  else {
    FUN_segment_0__8057e448();
    iVar1 = FUN_segment_0__8057e454();
    if (iVar1 == 1) {
      kart_KartDynamics_Tire_8059df84(auStack_a0,100,0xe7,0,0xff);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_a0);
      FUN_segment_0__8057e460(auStack_a0,0xffffffff);
    }
    else {
      FUN_segment_0__8057e448();
      iVar1 = FUN_segment_0__8057e454();
      if (iVar1 == 2) {
        kart_KartDynamics_Tire_8059df84(auStack_a4,0x44,0xca,0,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_a4);
        FUN_segment_0__8057e460(auStack_a4,0xffffffff);
      }
      else {
        FUN_segment_0__8057e448();
        iVar1 = FUN_segment_0__8057e454();
        if (iVar1 == 0xb) {
          kart_KartDynamics_Tire_8059df84(auStack_a8,0x8c,0x78,0,0xff);
          kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_a8);
          FUN_segment_0__8057e460(auStack_a8,0xffffffff);
        }
        else {
          FUN_segment_0__8057e448();
          iVar1 = FUN_segment_0__8057e454();
          if (iVar1 == 0xf) {
            kart_KartDynamics_Tire_8059df84(auStack_ac,0x28,0xb9,0,0xff);
            kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_ac);
            FUN_segment_0__8057e460(auStack_ac,0xffffffff);
          }
          else {
            FUN_segment_0__8057e448();
            iVar1 = FUN_segment_0__8057e454();
            if (iVar1 == 0x1d) {
              kart_KartDynamics_Tire_8059df84(auStack_b0,0x49,0x9e,0,0xff);
              kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_b0);
              FUN_segment_0__8057e460(auStack_b0,0xffffffff);
            }
            else {
              FUN_segment_0__8057e448();
              iVar1 = FUN_segment_0__8057e454();
              if (iVar1 == 0x16) {
                kart_KartDynamics_Tire_8059df84(auStack_b4,0x32,0xb9,0,0xff);
                kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_b4);
                FUN_segment_0__8057e460(auStack_b4,0xffffffff);
              }
              else {
                FUN_segment_0__8057e448();
                iVar1 = FUN_segment_0__8057e454();
                if (iVar1 == 0x1f) {
                  kart_KartDynamics_Tire_8059df84(auStack_b8,0x3f,0xb7,0,0xff);
                  kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_b8);
                  FUN_segment_0__8057e460(auStack_b8,0xffffffff);
                }
                else {
                  FUN_segment_0__8057e448();
                  iVar1 = FUN_segment_0__8057e454();
                  if (iVar1 == 0x1c) {
                    kart_KartDynamics_Tire_8059df84(auStack_bc,0x5a,0xaf,0,0xff);
                    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_bc);
                    FUN_segment_0__8057e460(auStack_bc,0xffffffff);
                  }
                  else {
                    FUN_segment_0__8057e448();
                    iVar1 = FUN_segment_0__8057e454();
                    if (iVar1 == 0x1a) {
                      kart_KartDynamics_Tire_8059df84(auStack_c0,0x55,0xa7,0,0xff);
                      kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_c0);
                      FUN_segment_0__8057e460(auStack_c0,0xffffffff);
                    }
                    else {
                      FUN_segment_0__8057e448();
                      iVar1 = FUN_segment_0__8057e454();
                      if (iVar1 == 0x11) {
                        kart_KartDynamics_Tire_8059df84(auStack_c4,0x55,0xaa,0,0xff);
                        kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_c4);
                        FUN_segment_0__8057e460(auStack_c4,0xffffffff);
                      }
                      else {
                        FUN_segment_0__8057e448();
                        iVar1 = FUN_segment_0__8057e454();
                        if (iVar1 == 0x10) {
                          kart_KartDynamics_Tire_8059df84(auStack_c8,0x9e,0xe7,0x30,0xff);
                          kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_c8);
                          FUN_segment_0__8057e460(auStack_c8,0xffffffff);
                        }
                        else {
                          FUN_segment_0__8057e448();
                          iVar1 = FUN_segment_0__8057e454();
                          if (iVar1 == 0x17) {
                            kart_KartDynamics_Tire_8059df84(auStack_cc,0xcf,0xcf,0x3f,0xff);
                            kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_cc);
                            FUN_segment_0__8057e460(auStack_cc,0xffffffff);
                          }
                          else {
                            FUN_segment_0__8057e448();
                            iVar1 = FUN_segment_0__8057e454();
                            if (iVar1 == 0xc) {
                              kart_KartDynamics_Tire_8059df84(auStack_d0,0x6b,0x4d,0x2f,0xff);
                              kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_d0);
                              FUN_segment_0__8057e460(auStack_d0,0xffffffff);
                            }
                            else {
                              kart_KartDynamics_Tire_8059df84(auStack_d4,0x6e,0xc3,0x32,0xff);
                              kart_KartDynamics_Tire_8059df98(param_1 + 0x1d4,auStack_d4);
                              FUN_segment_0__8057e460(auStack_d4,0xffffffff);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  kart_KartDynamics_Tire_8059df84(auStack_d8,0xf3,0xe4,0x78,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1c0,auStack_d8);
  FUN_segment_0__8057e460(auStack_d8,0xffffffff);
  kart_KartDynamics_Tire_8059df84(auStack_dc,0xb7,0x90,0x54,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1c4,auStack_dc);
  FUN_segment_0__8057e460(auStack_dc,0xffffffff);
  kart_KartDynamics_Tire_8059df84(auStack_e0,0xff,0xd0,0x6d,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1c8,auStack_e0);
  FUN_segment_0__8057e460(auStack_e0,0xffffffff);
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x1d) {
    kart_KartDynamics_Tire_8059df84(auStack_e4,99,0x4b,0x2d,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1e8,auStack_e4);
    FUN_segment_0__8057e460(auStack_e4,0xffffffff);
  }
  else {
    FUN_segment_0__8057e448();
    iVar1 = FUN_segment_0__8057e454();
    if (iVar1 == 0x17) {
      kart_KartDynamics_Tire_8059df84(auStack_e8,0x70,0x45,0,0xff);
      kart_KartDynamics_Tire_8059df98(param_1 + 0x1e8,auStack_e8);
      FUN_segment_0__8057e460(auStack_e8,0xffffffff);
    }
    else {
      FUN_segment_0__8057e448();
      iVar1 = FUN_segment_0__8057e454();
      if (iVar1 == 0xc) {
        kart_KartDynamics_Tire_8059df84(auStack_ec,0x6e,0x27,0,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1e8,auStack_ec);
        FUN_segment_0__8057e460(auStack_ec,0xffffffff);
      }
      else {
        kart_KartDynamics_Tire_8059df84(auStack_f0,99,0x4b,0x2d,0xff);
        kart_KartDynamics_Tire_8059df98(param_1 + 0x1e8,auStack_f0);
        FUN_segment_0__8057e460(auStack_f0,0xffffffff);
      }
    }
  }
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 5) {
    kart_KartDynamics_Tire_8059df84(auStack_f4,0x3c,0xc3,0,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d8,auStack_f4);
    FUN_segment_0__8057e460(auStack_f4,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_f8,0x27,0x87,0,0xff);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d8,auStack_f8);
    FUN_segment_0__8057e460(auStack_f8,0xffffffff);
  }
  kart_KartDynamics_Tire_8059df84(auStack_fc,0xbb,0x86,0x30,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1cc,auStack_fc);
  FUN_segment_0__8057e460(auStack_fc,0xffffffff);
  FUN_segment_0__8057e448();
  iVar1 = FUN_segment_0__8057e454();
  if (iVar1 == 0x13) {
    kart_KartDynamics_Tire_8059df84(auStack_100,0xe7,0xb2,0x5f,100);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d0,auStack_100);
    FUN_segment_0__8057e460(auStack_100,0xffffffff);
  }
  else {
    kart_KartDynamics_Tire_8059df84(auStack_104,0xe7,0xc0,0x6f,0x96);
    kart_KartDynamics_Tire_8059df98(param_1 + 0x1d0,auStack_104);
    FUN_segment_0__8057e460(auStack_104,0xffffffff);
  }
  kart_KartDynamics_Tire_8059df84(auStack_108,0x50,0xf0,0,0xff);
  kart_KartDynamics_Tire_8059df98(param_1 + 0x1e0,auStack_108);
  FUN_segment_0__8057e460(auStack_108,0xffffffff);
  return;
}

// === KartDynamics_assertFail_805a21c4 (0x805a21c4) ===
void KartDynamics_assertFail_805a21c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === kart_KartDynamics_805a2334 (0x805a2334) ===
void kart_KartDynamics_805a2334(int param_1)

{
  FUN_segment_0__8044ef04(*(u32 *)(param_1 + 0x158));
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x158) + 0xc)))(*(int **)(param_1 + 0x158),0);
  return;
}

// === KartDynamics_assertFail_805a237c (0x805a237c) ===
void KartDynamics_assertFail_805a237c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === kart_KartDynamics_805a2498 (0x805a2498) ===
void kart_KartDynamics_805a2498(int param_1)

{
  FUN_segment_0__8044ef04(*(u32 *)(param_1 + 0x15c));
  ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x15c) + 0xc)))(*(int **)(param_1 + 0x15c),0);
  return;
}

// === KartDynamics_assertFail_805a24e0 (0x805a24e0) ===
void KartDynamics_assertFail_805a24e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === KartDynamics_validate_805a257c (0x805a257c) ===
void KartDynamics_validate_805a257c(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x79) != 0) {
    if (*(char *)(param_1 + 299) == 0) {
      if (*(char *)(param_1 + 0x129) == 0) {
        if (*(int *)(param_1 + 0x250) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*(int *)(param_1 + 0x250) + 0x74);
        }
      }
      else if (*(int *)(param_1 + 0x250) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(param_1 + 0x250) + 0x74);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x254) + 0x74);
    }
    *(u32 *)(param_1 + 0x79) = 0;
  }
  if (*(char *)(param_1 + 0x7a) != 0) {
    *(u32 *)(param_1 + 0x7a) = 0;
  }
  *(u32 *)(param_1 + 100) = 0xffffffff;
  if (*(char *)(param_1 + 0x14b) != 0) {
    *(u32 *)(param_1 + 0x10c) = 0;
  }
  if (*(char *)(param_1 + 0x7b) != 0) {
    if (((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
       (*(char *)(param_1 + 299) == 0)) {
      piVar1 = *(int **)(param_1 + 0x25c);
      if ((piVar1 != (int *)0) &&
         (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      piVar1 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
      ((void(*)(...))(*(void**)(*piVar1 + 0xe4)))((double)g_Ram_float,piVar1,0x350);
      FUN_segment_0__8047e02c(*(u32 *)(param_1 + 0x118),0x1a);
    }
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x160) + 0xc)))(*(int **)(param_1 + 0x160),0);
    *(u32 *)(param_1 + 0x7b) = 0;
    FUN_segment_0__8047f264(*(u32 *)(param_1 + 0x118));
    *(u32 *)(param_1 + 0x794) = 0;
  }
  if (*(char *)(param_1 + 0x7c) != 0) {
    *(u32 *)(param_1 + 0x7c) = 0;
  }
  return;
}

// === kart_KartDynamics_805a2878 (0x805a2878) ===
void kart_KartDynamics_805a2878(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x7a) != 0) {
    *(u32 *)(param_1 + 0x7a) = 0;
  }
  *(u32 *)(param_1 + 100) = 0xffffffff;
  if (*(char *)(param_1 + 0x14b) != 0) {
    *(u32 *)(param_1 + 0x10c) = 0;
  }
  if (*(char *)(param_1 + 0x7b) != 0) {
    if (((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
       (*(char *)(param_1 + 299) == 0)) {
      piVar1 = *(int **)(param_1 + 0x25c);
      if ((piVar1 != (int *)0) &&
         (((void(*)(...))(*(void**)(*piVar1 + 0xc)))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
        ((void(*)(...))(*(void**)(*piVar1 + 0x70)))(piVar1,param_1 + 0x72c);
      }
      piVar1 = (int *)FUN_segment_0__8047e010(*(u32 *)(param_1 + 0x118));
      ((void(*)(...))(*(void**)(*piVar1 + 0xe4)))((double)g_Ram_float,piVar1,0x350);
      FUN_segment_0__8047e02c(*(u32 *)(param_1 + 0x118),0x1a);
    }
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x160) + 0xc)))(*(int **)(param_1 + 0x160),0);
    *(u32 *)(param_1 + 0x7b) = 0;
    FUN_segment_0__8047f264(*(u32 *)(param_1 + 0x118));
    *(u32 *)(param_1 + 0x794) = 0;
  }
  if (*(char *)(param_1 + 0x7c) != 0) {
    *(u32 *)(param_1 + 0x7c) = 0;
  }
  return;
}

// === kart_KartDynamics_805a29c4 (0x805a29c4) ===
void kart_KartDynamics_805a29c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  u32 local_38;
  u32 local_34;
  u32 local_30;
  u32 local_2c;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u32 local_18;
  
  if ((*(char *)(param_1 + 7) == 0) && (*(char *)(iRam00000000 + 0x10) == 0)) {
    uVar2 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 4);
    uVar1 = uVar2 >> 0xd & 1;
    uVar2 = uVar2 >> 0x18 & 1;
    if (*(char *)(param_1 + 0x91) == 0) {
      if (*(int *)(param_1 + 0x124) == 0) {
        if ((*(char *)(param_1 + 0x7b9) != 0) ||
           (*(uint *)(param_1 + 0x80) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
          piVar3 = (int *)(*(int *)(param_1 + 0x530) + 0x28);
          iVar4 = 10;
          do {
            if ((int *)*piVar3 != (int *)0) {
              (**(code **)(*(int *)*piVar3 + 0xc))();
            }
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar4 < 0xd);
        }
        if ((*(char *)(param_1 + 0x7ba) != 0) ||
           (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
          piVar3 = (int *)(*(int *)(param_1 + 0x530) + 0x34);
          iVar4 = 0xd;
          do {
            if ((int *)*piVar3 != (int *)0) {
              (**(code **)(*(int *)*piVar3 + 0xc))();
            }
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar4 < 0x10);
        }
      }
      else if (*(int *)(param_1 + 0x124) == 1) {
        if (uVar1 == 0) {
          if (uVar2 == 0) {
            if ((*(char *)(param_1 + 0x7ba) != 0) ||
               (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
              iVar4 = 0xd;
              piVar3 = (int *)(*(int *)(param_1 + 0x614) + 0x34);
              do {
                if ((int *)*piVar3 != (int *)0) {
                  (**(code **)(*(int *)*piVar3 + 0xc))();
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 1;
              } while (iVar4 < 0x10);
            }
          }
          else if ((*(char *)(param_1 + 0x7ba) != 0) ||
                  (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
            iVar4 = 7;
            piVar3 = (int *)(*(int *)(param_1 + 0x614) + 0x1c);
            do {
              if ((int *)*piVar3 != (int *)0) {
                (**(code **)(*(int *)*piVar3 + 0xc))();
              }
              iVar4 = iVar4 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar4 < 10);
          }
        }
        else if ((*(char *)(param_1 + 0x7ba) != 0) ||
                (*(uint *)(param_1 + 0x84) < (unsigned int)*(byte *)(param_1 + 0xae0))) {
          iVar4 = 10;
          piVar3 = (int *)(*(int *)(param_1 + 0x614) + 0x28);
          do {
            if ((int *)*piVar3 != (int *)0) {
              (**(code **)(*(int *)*piVar3 + 0xc))();
            }
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar4 < 0xd);
        }
      }
    }
    else if (*(int *)(param_1 + 0x124) == 0) {
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      else {
        FUN_segment_0__805871ec
                  (param_1,*(u32 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((unsigned int)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        FUN_segment_0__805873a0
                  (param_1,*(u32 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
      else {
        FUN_segment_0__805871ec
                  (param_1,*(u32 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      if (uVar1 == 0) {
        if (uVar2 == 0) {
          local_38 = *(u32 *)(param_1 + 0x7c8);
          local_34 = *(u32 *)(param_1 + 0x7cc);
          local_30 = *(u32 *)(param_1 + 2000);
          kart_KartPhysics_Wheel_80592b38(param_1,0,1,3,3,5,&local_38);
          kart_KartPhysics_Wheel_80592d9c(param_1,0xffffffff);
          kart_KartPhysics_Wheel_80592d9c(param_1,1);
        }
        else {
          local_2c = *(u32 *)(param_1 + 0x7c8);
          local_28 = *(u32 *)(param_1 + 0x7cc);
          local_24 = *(u32 *)(param_1 + 2000);
          kart_KartPhysics_Wheel_80592b38(param_1,0xffffffff,1,3,3,5,&local_2c);
          kart_KartPhysics_Wheel_80592d9c(param_1,1);
          kart_KartPhysics_Wheel_80592d9c(param_1,0);
        }
      }
      else {
        local_20 = *(u32 *)(param_1 + 0x7c8);
        local_1c = *(u32 *)(param_1 + 0x7cc);
        local_18 = *(u32 *)(param_1 + 2000);
        kart_KartPhysics_Wheel_80592b38(param_1,1,1,3,3,5,&local_20);
        kart_KartPhysics_Wheel_80592d9c(param_1,0xffffffff);
        kart_KartPhysics_Wheel_80592d9c(param_1,0);
      }
    }
    if (*(int *)(param_1 + 0x124) == 0) {
      FUN_segment_0__80587608
                (param_1,*(u32 *)(param_1 + 0x530),10,0xd,param_1 + 0x6f4,param_1 + 0x7bc,1);
      FUN_segment_0__80587608
                (param_1,*(u32 *)(param_1 + 0x530),0xd,0x10,param_1 + 0x6f4,param_1 + 0x7c8,1
                );
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      if (*(char *)(param_1 + 0xd) == 0) {
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),7,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),10,0xd,param_1 + 0x6f4,param_1 + 0x7c8,1
                  );
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),0xd,0x10,param_1 + 0x6f4,param_1 + 0x7c8
                   ,1);
      }
      else {
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),7,10,param_1 + 0x818,param_1 + 0x7c8,1);
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),10,0xd,param_1 + 0x818,param_1 + 0x7c8,1
                  );
        FUN_segment_0__80587608
                  (param_1,*(u32 *)(param_1 + 0x614),0xd,0x10,param_1 + 0x818,param_1 + 0x7c8
                   ,1);
      }
    }
    *(u32 *)(param_1 + 0x90) = 1;
  }
  return;
}

// === KartDynamics_validate_805a2f14 (0x805a2f14) ===
void KartDynamics_validate_805a2f14(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x2a0) + 0x74);
}

// === kart_KartDynamics_805a2ff8 (0x805a2ff8) ===
void kart_KartDynamics_805a2ff8(int param_1)

{
  if (*(char *)(param_1 + 0x13b) == 0) {
    if (((*(char *)(param_1 + 0x13e) != 0) && (*(char *)(iRam00000000 + 0x25) == '\x01')) &&
       (*(int *)(param_1 + 0x724) != -1)) {
      kart_KartDynamics_Wheel_8059c734();
    }
    FUN_segment_0__8058f034(param_1);
    FUN_segment_0__8058f2a8(param_1);
    FUN_segment_0__8058f530(param_1);
  }
  return;
}

// === kart_KartDynamics_805a3074 (0x805a3074) ===
void kart_KartDynamics_805a3074(int param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  u32 local_a8;
  u32 local_a4;
  float local_a0;
  float local_9c;
  u32 local_98;
  u32 local_94;
  float local_90;
  float local_8c;
  u32 local_88;
  u32 local_84;
  float local_80;
  float local_7c;
  u32 local_78;
  u32 local_74;
  float local_70;
  float local_6c;
  u32 local_68;
  u32 local_64;
  u32 local_60;
  float local_5c;
  float local_58;
  float local_54;
  u32 local_50;
  u32 local_4c;
  u32 local_48;
  float local_44;
  float local_40;
  float local_3c;
  u32 local_38;
  u32 local_34;
  u32 local_30;
  float local_2c;
  float local_28;
  float local_24;
  u32 local_20;
  u32 local_1c;
  u32 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_44 = g_Ram_float;
  if (*(char *)(param_1 + 0x49) == 0) {
    dVar3 = (double)*(float *)(param_1 + 0x730);
    dVar2 = (double)g_Ram_float;
    bVar1 = g_Ram_float <= ABS((float)(dVar3 - dVar2));
    *(bool *)(param_1 + 0xb0) = bVar1;
    if ((!bVar1) || (local_44 <= ABS((float)((double)*(float *)(param_1 + 0x72c) - dVar2)))) {
      local_5c = g_Ram_float;
      local_58 = g_Ram_float;
      local_54 = g_Ram_float;
      FUN_segment_0__8040443c((double)*(float *)(param_1 + 0x72c),&local_68,&local_5c);
      *(u32 *)(param_1 + 0x72c) = local_68;
      local_a0 = g_Ram_float;
      *(u32 *)(param_1 + 0x730) = local_64;
      *(u32 *)(param_1 + 0x734) = local_60;
      local_9c = local_a0;
      FUN_segment_0__8043a974(&local_a8,&local_a0);
      *(u32 *)(param_1 + 0x738) = local_a8;
      *(u32 *)(param_1 + 0x73c) = local_a4;
    }
    else if ((double)*(float *)(param_1 + 0xac4) <= dVar3) {
      local_40 = local_44;
      local_3c = local_44;
      FUN_segment_0__8040443c(dVar3,&local_50,&local_44);
      *(u32 *)(param_1 + 0x72c) = local_50;
      local_90 = g_Ram_float;
      *(u32 *)(param_1 + 0x730) = local_4c;
      *(u32 *)(param_1 + 0x734) = local_48;
      local_8c = local_90;
      FUN_segment_0__8043a974(&local_98,&local_90);
      *(u32 *)(param_1 + 0x738) = local_98;
      *(u32 *)(param_1 + 0x73c) = local_94;
    }
    else {
      local_2c = local_44;
      local_28 = local_44;
      local_24 = local_44;
      FUN_segment_0__8040443c(&local_38,&local_2c);
      *(u32 *)(param_1 + 0x72c) = local_38;
      local_80 = g_Ram_float;
      *(u32 *)(param_1 + 0x730) = local_34;
      *(u32 *)(param_1 + 0x734) = local_30;
      local_7c = local_80;
      FUN_segment_0__8043a974((double)*(float *)(param_1 + 0xac4),&local_88,&local_80);
      *(u32 *)(param_1 + 0x738) = local_88;
      *(u32 *)(param_1 + 0x73c) = local_84;
    }
  }
  else {
    *(u32 *)(param_1 + 0xb0) = 1;
    local_14 = g_Ram_float;
    local_10 = g_Ram_float;
    local_c = g_Ram_float;
    FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xac4),&local_20,&local_14);
    *(u32 *)(param_1 + 0x72c) = local_20;
    local_70 = g_Ram_float;
    *(u32 *)(param_1 + 0x730) = local_1c;
    *(u32 *)(param_1 + 0x734) = local_18;
    local_6c = local_70;
    FUN_segment_0__8043a974((double)*(float *)(param_1 + 0xac4),&local_78,&local_70);
    *(u32 *)(param_1 + 0x738) = local_78;
    *(u32 *)(param_1 + 0x73c) = local_74;
  }
  return;
}

// === kart_KartDynamics_805a32b0 (0x805a32b0) ===
void kart_KartDynamics_805a32b0(int param_1,u32 param_2)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 0x2a0) != (int *)0) {
    (**(code **)(**(int **)(param_1 + 0x2a0) + 0x20))();
  }
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x2a8);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x2ac);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x2b4);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x2b0);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x2b8);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 700);
  if (piVar1 != (int *)0) {
    ((void(*)(...))(*(void**)(*piVar1 + 0x20)))(piVar1,param_2);
  }
  return;
}

// === kart_KartDynamics_805a33e4 (0x805a33e4) ===
void kart_KartDynamics_805a33e4(int param_1)

{
  if (*(char *)(param_1 + 0x13b) == 0) {
    if (*(char *)(param_1 + 0xf8) == 0) {
      if (*(char *)(param_1 + 0xf9) != 0) {
        kart_KartDynamics_805a32b0(param_1,0);
      }
    }
    else {
      kart_KartDynamics_805a32b0(param_1,1);
    }
  }
  else {
    if (*(char *)(param_1 + 0xf8) == 0) {
      if ((*(char *)(param_1 + 0xf9) != 0) && (*(char *)(param_1 + 0xfa) != 0)) {
        kart_KartDynamics_805a32b0(param_1,0);
      }
    }
    else {
      kart_KartDynamics_805a32b0(param_1,1);
    }
    if (*(char *)(param_1 + 0xfd) == 0) {
      if ((*(char *)(param_1 + 0xfc) != 0) && (*(char *)(param_1 + 0xf6) == 0)) {
        kart_KartDynamics_805a32b0(param_1,0);
      }
    }
    else {
      kart_KartDynamics_805a32b0(param_1,1);
    }
  }
  return;
}

// === kart_KartDynamics_805a34c0 (0x805a34c0) ===
double kart_KartDynamics_805a34c0(float *param_1,float *param_2,float *param_3)

{
  return (double)((*param_3 - *param_2) * (param_1[2] - param_2[2]) -
                 (*param_1 - *param_2) * (param_3[2] - param_2[2]));
}

// === kart_KartDynamics_805a3518 (0x805a3518) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a3518(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a35f8 (0x805a35f8) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a35f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_validate_805a36dc (0x805a36dc) ===
void KartDynamics_validate_805a36dc(u32 param_1)

{
  u32 auStack_38 [12];
  u32 local_2c;
  u32 local_1c;
  u32 local_c;
  
  local_2c = uRam00000000;
  local_1c = uRam00000004;
  local_c = uRam00000008;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,param_1);
}

// === kart_KartDynamics_805a3758 (0x805a3758) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a3758(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_validate_805a38bc (0x805a38bc) ===
void KartDynamics_validate_805a38bc(u32 *param_1)

{
  u32 local_2c;
  float local_28;
  u32 local_24;
  u32 local_20;
  float local_1c;
  u32 local_18;
  
  local_1c = (float)param_1[1];
  local_20 = *param_1;
  local_18 = param_1[2];
  if (ABS(local_1c) < g_Ram_float) {
    local_1c = g_Ram_float;
  }
  local_24 = param_1[2];
  local_2c = *param_1;
  local_28 = g_Ram_float;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_2c);
}

// === kart_KartDynamics_805a3a34 (0x805a3a34) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a3a34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a3b88 (0x805a3b88) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a3b88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_assertFail_805a3d20 (0x805a3d20) ===
void KartDynamics_assertFail_805a3d20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartDynamics_validate_805a3df8 (0x805a3df8) ===
void KartDynamics_validate_805a3df8(float *param_1,float *param_2)

{
  u32 auStack_38 [24];
  u32 auStack_20 [20];
  
  FUN_segment_0__8040443c
            ((double)(param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1]),
             auStack_38,param_1);
  FUN_segment_0__80404498(auStack_20,param_2,auStack_38);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_20);
}

// === kart_KartDynamics_805a3ee0 (0x805a3ee0) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a3ee0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_assertFail_805a408c (0x805a408c) ===
void KartDynamics_assertFail_805a408c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === KartDynamics_validate_805a41d0 (0x805a41d0) ===
void KartDynamics_validate_805a41d0(u32 param_1)

{
  u32 auStack_2c [12];
  u32 auStack_20 [12];
  u32 auStack_14 [12];
  
  FUN_segment_0__804270d8(auStack_14,param_1,0);
  FUN_segment_0__804270d8(auStack_20,param_1,1);
  FUN_segment_0__804270d8(auStack_2c,param_1,2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_14);
}

// === kart_KartDynamics_805a42bc (0x805a42bc) ===
void kart_KartDynamics_805a42bc(int param_1,int param_2)

{
  KartDynamics_validate_805a38bc(param_1 + 0x24);
  *(u32 *)(param_2 + 0xc) = *(u32 *)(param_1 + 0x18);
  *(u32 *)(param_2 + 0x1c) = *(u32 *)(param_1 + 0x1c);
  *(u32 *)(param_2 + 0x2c) = *(u32 *)(param_1 + 0x20);
  return;
}

// === kart_KartDynamics_805a4310 (0x805a4310) ===
void kart_KartDynamics_805a4310(int *param_1,int param_2)

{
  u32 auStack_28 [12];
  u32 local_1c;
  u32 local_18;
  u32 local_14;
  
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,&local_1c,auStack_28);
  KartDynamics_validate_805a38bc(auStack_28,param_2);
  *(u32 *)(param_2 + 0xc) = local_1c;
  *(u32 *)(param_2 + 0x1c) = local_18;
  *(u32 *)(param_2 + 0x2c) = local_14;
  return;
}

// === kart_KartDynamics_805a4374 (0x805a4374) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a4374(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a5148 (0x805a5148) ===
double kart_KartDynamics_805a5148(u32 param_1,u32 param_2,u32 param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_segment_0__80404498(&local_1c,param_2,param_1);
  FUN_segment_0__80404498(&local_28,param_3,param_1);
  return (double)((local_14 * local_20 + local_1c * local_28 + local_18 * local_24) /
                 (local_14 * local_14 + local_1c * local_1c + local_18 * local_18));
}

// === KartDynamics_updateBothVelocities (0x805a51dc) ===
/* WARNING: Control flow encountered bad instruction data */

void KartDynamics_updateBothVelocities(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a55c0 (0x805a55c0) ===
double kart_KartDynamics_805a55c0(double param_1,double param_2,u32 param_3)

{
  return (double)((float)(param_1 *
                         (double)(float)((double)CONCAT44(0x43300000,param_3) - dRam00000000)) -
                 (float)((double)CONCAT44(0x43300000,param_3) - dRam00000000) *
                 (float)((double)dRam00000000._0_4_ * param_2) *
                 (float)((double)CONCAT44(0x43300000,param_3) - dRam00000000));
}

// === kart_KartDynamics_805a5624 (0x805a5624) ===
void kart_KartDynamics_805a5624(double param_1,double param_2,float *param_3,float *param_4)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)g_Ram_float;
  fVar1 = (float)((double)(float)(dVar2 * param_2) / param_1);
  *param_3 = fVar1;
  *param_4 = (float)((double)(fVar1 * fVar1) / (double)(float)(dVar2 * param_2));
  return;
}

// === kart_KartDynamics_805a5650 (0x805a5650) ===
void kart_KartDynamics_805a5650(void)

{
  return;
}

// === kart_KartDynamics_805a5658 (0x805a5658) ===
void kart_KartDynamics_805a5658(u32 param_1)

{
  u32 auStack_58 [12];
  u32 auStack_4c [12];
  u32 auStack_40 [12];
  u32 auStack_34 [12];
  u32 auStack_28 [12];
  u32 auStack_1c [24];
  
  FUN_segment_0__804270d8(auStack_1c,param_1,3);
  FUN_segment_0__804270d8(auStack_28,param_1,0);
  FUN_segment_0__804270d8(auStack_34,param_1,3);
  FUN_segment_0__804270d8(auStack_40,param_1,1);
  FUN_segment_0__804270d8(auStack_4c,param_1,3);
  FUN_segment_0__804270d8(auStack_58,param_1,2);
  return;
}

// === KartDynamics_validate_805a56e0 (0x805a56e0) ===
void KartDynamics_validate_805a56e0(u32 param_1)

{
  u32 auStack_88 [132];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,param_1,0);
}

// === KartDynamics_validate_805a5740 (0x805a5740) ===
void KartDynamics_validate_805a5740(u32 param_1)

{
  u32 auStack_88 [132];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,param_1,0);
}

// === KartDynamics_validate_805a57a0 (0x805a57a0) ===
void KartDynamics_validate_805a57a0(u32 param_1)

{
  u32 auStack_88 [128];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,param_1,0);
}

// === KartDynamics_validate_805a581c (0x805a581c) ===
void KartDynamics_validate_805a581c(u32 param_1)

{
  u32 auStack_88 [128];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,param_1,0);
}

// === KartDynamics_validate_805a589c (0x805a589c) ===
void KartDynamics_validate_805a589c(u32 *param_1,int *param_2,u32 param_3)

{
  double dVar1;
  
  FUN_segment_0__806ff578(param_1,param_2,0);
  param_1[0x2e] = 0xffffffff;
  *(u16 *)(param_1 + 0x2d) = 0;
  dVar1 = (double)CONCAT44(iRam00000000,uRam00000004);
  param_1[0x2f] = 0;
  *(u16 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = 0;
  param_1[0x2c] = 0xec;
  param_1[0x34] = param_3;
  param_1[0x35] =
       (float)((double)CONCAT44(0x43300000,(int)*(short *)(*param_2 + 0x2a) ^ 0x80000000) - dVar1);
  *(bool *)((int)param_1 + 0xde) = *(short *)(*param_2 + 0x38) == 1;
  if (iRam00000000 == *(short *)(*param_2 + 0x2e)) {
    iRam00000000 = 0;
  }
  param_1[0x36] = iRam00000000;
  iRam00000000 = iRam00000000 + 1;
  param_1[0x33] = param_1;
  param_1[0x32] = 0;
  *(u16 *)(param_1 + 0x30) = 2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(4);
}

// === KartDynamics_validate_805a5a34 (0x805a5a34) ===
u32 KartDynamics_validate_805a5a34(u32 *param_1)

{
  if (param_1 != (u32 *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === kart_KartDynamics_805a5a98 (0x805a5a98) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a5a98(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === KartDynamics_validate_805a5c44 (0x805a5c44) ===
void KartDynamics_validate_805a5c44(int param_1)

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

// === KartDynamics_validate_805a5d18 (0x805a5d18) ===
void KartDynamics_validate_805a5d18(int *param_1)

{
  int iVar1;
  u32 auStack_4c [12];
  int local_40;
  int local_3c;
  int local_38;
  u32 local_34;
  int local_30;
  int local_2c;
  int local_28;
  u32 local_24;
  int local_20;
  int local_1c;
  int local_18;
  u32 local_14;
  
  if (*(char *)(param_1 + 0x3c) != 0) {
    iVar1 = (**(code **)(*(int *)param_1[8] + 0x14))();
    if (iVar1 != 2) {
      FUN_segment_0__80701e3c(param_1,param_1[8] + 0x24);
      FUN_segment_0__80701bcc(param_1);
      local_40 = param_1[0x16];
      local_3c = param_1[0x17];
      local_38 = param_1[0x18];
      local_30 = param_1[0x1a];
      local_2c = param_1[0x1b];
      local_28 = param_1[0x1c];
      local_20 = param_1[0x1e];
      local_1c = param_1[0x1f];
      local_18 = param_1[0x20];
      local_34 = uRam00000000;
      local_24 = uRam00000004;
      local_14 = uRam00000008;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_4c,&local_40,param_1 + 0x39);
    }
    *(u32 *)(param_1 + 0x3c) = 0;
    ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,0);
    ((void(*)(...))(*(void**)(*param_1 + 0x8c)))(param_1);
  }
  return;
}

// === kart_KartDynamics_805a5ea0 (0x805a5ea0) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a5ea0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === kart_KartDynamics_805a6144 (0x805a6144) ===
void kart_KartDynamics_805a6144(int *param_1)

{
  float fVar1;
  uint uVar2;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(char *)((int)param_1 + 0x14e) == 0) {
    param_1[0x3e] = (int)((float)param_1[0x3e] - fRam00000038);
    FUN_segment_0__80404464(&local_58,param_1 + 0xc,param_1 + 0x3d);
    param_1[0xc] = local_58;
    fVar1 = g_Ram_float;
    *(u16 *)(param_1 + 0xb) = *(u16 *)(param_1 + 0xb) | 1;
    param_1[0xd] = local_54;
    param_1[0xe] = local_50;
    KartDynamics_validate_805a36dc((double)(fRam00000044 * fVar1),param_1 + 0x50,param_1 + 0x44);
    fVar1 = g_Ram_float;
    param_1[0x54] = (int)((float)param_1[0x54] + fRam00000044);
    KartDynamics_validate_805a36dc((double)(g_Ram_float * fVar1),param_1 + 0x44,param_1 + 0x41);
    FUN_segment_0__80426d88(&local_4c,param_1 + 0x44,param_1 + 0x41);
    local_40 = local_4c;
    local_30 = local_48;
    local_20 = local_44;
    local_3c = param_1[0x44];
    local_2c = param_1[0x45];
    local_1c = param_1[0x46];
    local_38 = param_1[0x41];
    local_28 = param_1[0x42];
    local_18 = param_1[0x43];
    *(u32 *)(param_1 + 0x15) = 0;
    *(u16 *)(param_1 + 0xb) = *(u16 *)(param_1 + 0xb) | 4;
    param_1[0x16] = local_4c;
    param_1[0x17] = local_3c;
    param_1[0x18] = local_38;
    param_1[0x19] = local_34;
    param_1[0x1a] = local_48;
    param_1[0x1b] = local_2c;
    param_1[0x1c] = local_28;
    param_1[0x1d] = local_24;
    param_1[0x1e] = local_44;
    param_1[0x1f] = local_1c;
    param_1[0x20] = local_18;
    param_1[0x19] = param_1[0xc];
    param_1[0x1d] = param_1[0xd];
    param_1[0x21] = param_1[0xe];
  }
  if ((*(char *)((int)param_1 + 0x14e) != 0) &&
     (param_1[0x55] + (unsigned int)bRam0000004c < (unsigned int)param_1[0x2f])) {
    fVar1 = (float)param_1[0xd] - fRam00000048;
    *(u16 *)(param_1 + 0xb) = *(u16 *)(param_1 + 0xb) | 1;
    param_1[0xd] = (int)fVar1;
  }
  uVar2 = param_1[0x2f];
  if (uVar2 < 0x83) {
    if (uVar2 < 0x6f) {
      if (0x5a < uVar2) {
        if (uVar2 == (uVar2 / 10) * 10) {
          ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,0);
        }
        else {
          ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,1);
        }
      }
    }
    else if (uVar2 == (uVar2 / 3) * 3) {
      ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,0);
    }
    else {
      ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,1);
    }
  }
  else if (uVar2 == (uVar2 / 5) * 5) {
    ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,1);
  }
  else {
    ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,0);
  }
  if (0x82 < (unsigned int)param_1[0x2f]) {
    ((void(*)(...))(*(void**)(*param_1 + 0xc)))(param_1);
    *(u32 *)(param_1 + 0x3c) = 0;
    ((void(*)(...))(*(void**)(*param_1 + 0x68)))(param_1,0);
  }
  return;
}

// === kart_KartDynamics_805a648c (0x805a648c) ===
int kart_KartDynamics_805a648c(int param_1,u32 param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  
  if ((*(int *)(iRam00000000 + 0xb68) == 0xe) && (*(char *)(param_1 + 0xde) != 0)) {
    sVar2 = FUN_segment_0__8070ba6c(param_2);
    iVar1 = (unsigned int)*(u16 *)(param_1 + 0xdc) * 2;
    param_3 = (int)*(short *)(*(int *)(*(int *)(*(int *)(iRam00000000 + 0x10) + 0xc) +
                                      *(short *)(*(int *)(*(int *)(iRam00000000 + 0x10) + 0x10) +
                                                iVar1) * 4) + sVar2 * 2);
    param_4 = (int)*(short *)(*(int *)(*(int *)(*(int *)(iRam00000000 + 0x14) + 0xc) +
                                      *(short *)(*(int *)(*(int *)(iRam00000000 + 0x14) + 0x10) +
                                                iVar1) * 4) + sVar2 * 2);
  }
  if (param_4 != 0) {
    if (param_4 == 3) {
      if (*(short *)(param_1 + 0xb4) != 1) {
        FUN_segment_0__8047dcf4(param_2,0);
        *(u32 *)(param_1 + 0xb8) = 1;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__8047da88(param_2);
      }
    }
    else if ((param_4 == 5) && (*(short *)(param_1 + 0xb4) != 1)) {
      FUN_segment_0__8047dcf4(param_2,0);
      *(u32 *)(param_1 + 0xb8) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__8047da88(param_2);
    }
  }
  return param_3;
}

// === KartDynamics_calc_805a6630 (0x805a6630) ===
u32 KartDynamics_calc_805a6630(int param_1,int param_2,u32 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  u32 local_108;
  u32 local_104;
  u32 local_100;
  u32 auStack_fc [12];
  u32 auStack_f0 [24];
  u32 local_d8;
  u32 local_d4;
  u32 local_d0;
  u32 auStack_cc [12];
  u32 auStack_c0 [24];
  u32 local_a8;
  u32 local_a4;
  u32 local_a0;
  u32 auStack_9c [12];
  u32 auStack_90 [24];
  u32 local_78;
  u32 local_74;
  u32 local_70;
  u32 auStack_6c [12];
  u32 auStack_60 [84];
  
  if (param_4 == 3) {
    if (*(short *)(param_1 + 0xb4) != 1) {
      *(u32 *)(param_1 + 0xb8) = 1;
      *(u32 *)(param_1 + 0x11c) = *(u32 *)(param_1 + 0x30);
      *(u32 *)(param_1 + 0x120) = *(u32 *)(param_1 + 0x34);
      *(u32 *)(param_1 + 0x124) = *(u32 *)(param_1 + 0x38);
      if (param_2 != 0) {
        fVar1 = *(float *)(param_2 + 0x50);
        *(float *)(param_1 + 0x128) = fVar1;
        fVar2 = *(float *)(param_2 + 0x54);
        *(float *)(param_1 + 300) = fVar2;
        fVar3 = *(float *)(param_2 + 0x58);
        *(float *)(param_1 + 0x130) = fVar3;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430((double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2));
      }
      FUN_segment_0__80701bcc();
      FUN_segment_0__804270d8(auStack_60,param_1 + 0x58,2);
      FUN_segment_0__80404400(auStack_6c,auStack_60);
      FUN_segment_0__8040443c((double)g_Ram_float,&local_78,auStack_6c);
      *(u32 *)(param_1 + 0x128) = local_78;
      *(u32 *)(param_1 + 300) = local_74;
      *(u32 *)(param_1 + 0x130) = local_70;
    }
  }
  else if (param_4 == 4) {
    if (*(short *)(param_1 + 0xb4) != 1) {
      *(u32 *)(param_1 + 0xb8) = 1;
      *(u32 *)(param_1 + 0x11c) = *(u32 *)(param_1 + 0x30);
      *(u32 *)(param_1 + 0x120) = *(u32 *)(param_1 + 0x34);
      *(u32 *)(param_1 + 0x124) = *(u32 *)(param_1 + 0x38);
      if (param_2 != 0) {
        fVar1 = *(float *)(param_2 + 0x50);
        *(float *)(param_1 + 0x128) = fVar1;
        fVar2 = *(float *)(param_2 + 0x54);
        *(float *)(param_1 + 300) = fVar2;
        fVar3 = *(float *)(param_2 + 0x58);
        *(float *)(param_1 + 0x130) = fVar3;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430((double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2));
      }
      FUN_segment_0__80701bcc();
      FUN_segment_0__804270d8(auStack_90,param_1 + 0x58,2);
      FUN_segment_0__80404400(auStack_9c,auStack_90);
      FUN_segment_0__8040443c((double)g_Ram_float,&local_a8,auStack_9c);
      *(u32 *)(param_1 + 0x128) = local_a8;
      *(u32 *)(param_1 + 300) = local_a4;
      *(u32 *)(param_1 + 0x130) = local_a0;
    }
  }
  else if (param_4 == 5) {
    if (*(short *)(param_1 + 0xb4) != 1) {
      *(u32 *)(param_1 + 0xb8) = 1;
      *(u32 *)(param_1 + 0x11c) = *(u32 *)(param_1 + 0x30);
      *(u32 *)(param_1 + 0x120) = *(u32 *)(param_1 + 0x34);
      *(u32 *)(param_1 + 0x124) = *(u32 *)(param_1 + 0x38);
      if (param_2 != 0) {
        fVar1 = *(float *)(param_2 + 0x50);
        *(float *)(param_1 + 0x128) = fVar1;
        fVar2 = *(float *)(param_2 + 0x54);
        *(float *)(param_1 + 300) = fVar2;
        fVar3 = *(float *)(param_2 + 0x58);
        *(float *)(param_1 + 0x130) = fVar3;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430((double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2));
      }
      FUN_segment_0__80701bcc();
      FUN_segment_0__804270d8(auStack_c0,param_1 + 0x58,2);
      FUN_segment_0__80404400(auStack_cc,auStack_c0);
      FUN_segment_0__8040443c((double)g_Ram_float,&local_d8,auStack_cc);
      *(u32 *)(param_1 + 0x128) = local_d8;
      *(u32 *)(param_1 + 300) = local_d4;
      *(u32 *)(param_1 + 0x130) = local_d0;
    }
  }
  else if ((param_4 == 6) && (*(short *)(param_1 + 0xb4) != 1)) {
    *(u32 *)(param_1 + 0xb8) = 1;
    *(u32 *)(param_1 + 0x11c) = *(u32 *)(param_1 + 0x30);
    *(u32 *)(param_1 + 0x120) = *(u32 *)(param_1 + 0x34);
    *(u32 *)(param_1 + 0x124) = *(u32 *)(param_1 + 0x38);
    if (param_2 != 0) {
      fVar1 = *(float *)(param_2 + 0x50);
      *(float *)(param_1 + 0x128) = fVar1;
      fVar2 = *(float *)(param_2 + 0x54);
      *(float *)(param_1 + 300) = fVar2;
      fVar3 = *(float *)(param_2 + 0x58);
      *(float *)(param_1 + 0x130) = fVar3;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430((double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2));
    }
    FUN_segment_0__80701bcc();
    FUN_segment_0__804270d8(auStack_f0,param_1 + 0x58,2);
    FUN_segment_0__80404400(auStack_fc,auStack_f0);
    FUN_segment_0__8040443c((double)g_Ram_float,&local_108,auStack_fc);
    *(u32 *)(param_1 + 0x128) = local_108;
    *(u32 *)(param_1 + 300) = local_104;
    *(u32 *)(param_1 + 0x130) = local_100;
  }
  return param_3;
}

// === KartDynamics_validate_805a6ac4 (0x805a6ac4) ===
void KartDynamics_validate_805a6ac4(int param_1)

{
  int iVar1;
  u32 auStack_b8 [12];
  u32 auStack_ac [12];
  u32 auStack_a0 [48];
  u32 auStack_70 [48];
  u32 auStack_40 [52];
  
  if (*(short *)(param_1 + 0xb4) == 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x10) + 0x10);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar1 + 0xc,auStack_40);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_40);
  }
  if (*(short *)(param_1 + 0xb4) == 1) {
    if ((*(char *)(param_1 + 0x14c) != 0) && (*(char *)(param_1 + 0x14e) == 0)) {
      iVar1 = **(int **)(*(int *)(param_1 + 0x10) + 0x10);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar1 + 0xc,auStack_70);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_70);
    }
    if ((*(char *)(param_1 + 0x14c) == 0) || (*(char *)(param_1 + 0x14e) == 0)) {
      FUN_segment_0__8040443c
                ((double)(*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x158)),auStack_ac,0);
      FUN_segment_0__80404498(auStack_b8,param_1 + 0x30,auStack_ac);
      iVar1 = **(int **)(*(int *)(param_1 + 0x10) + 0x10);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(iVar1 + 0xc,auStack_a0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_a0);
    }
    ((void(*)(...))(*(void**)(**(int **)(param_1 + 0x10) + 0xc)))(*(int **)(param_1 + 0x10),0);
  }
  return;
}

// === KartDynamics_validate_805a6ce8 (0x805a6ce8) ===
void KartDynamics_validate_805a6ce8(u32 *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  
  FUN_segment_0__806ff578(param_1,param_2,0x18);
  *param_1 = 0;
  param_1[0x2d] = (int)*(short *)(*param_2 + 0x2c);
  param_1[0x2e] = (int)*(short *)(*param_2 + 0x2e);
  param_1[0x2f] = (int)*(short *)(*param_2 + 0x36);
  sVar1 = *(short *)(*(int *)param_1[0x28] + 0x2a);
  piVar3 = (int *)FUN_segment_0__805d0f48
                            (uRam00000000,(int)*(short *)(*(int *)param_1[0x28] + 0x28));
  dVar4 = (double)((void(*)(...))(*(void**)(*piVar3 + 0xc)))();
  iVar2 = ((int)((float)(dVar4 / (double)(float)((double)CONCAT44(0x43300000,(int)sVar1 ^ 0x80000000
                                                                 ) -
                                                (double)CONCAT44(uRam00000000,uRam00000004))) /
                (float)((double)CONCAT44(0x43300000,param_1[0x2d] ^ 0x80000000) -
                       (double)CONCAT44(uRam00000000,uRam00000004))) + 1) * param_1[0x2e];
  param_1[0x30] = iVar2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar2 * 4);
}

// === KartDynamics_validate_805a6f0c (0x805a6f0c) ===
int KartDynamics_validate_805a6f0c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === kart_KartDynamics_805a6f4c (0x805a6f4c) ===
/* WARNING: Control flow encountered bad instruction data */

void kart_KartDynamics_805a6f4c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_cancelWheelie (0x80580128) ===
void PlayerSub10_cancelWheelie(void) { return; }

// === getMaxMtCharge__Q24Kart8KartMoveFv (0x805814c8) ===
void getMaxMtCharge__Q24Kart8KartMoveFv(void) { return; }

// === getMaxSmtCharge__Q24Kart8KartMoveFv (0x805814d4) ===
void getMaxSmtCharge__Q24Kart8KartMoveFv(void) { return; }

// === getAppliedHopStickX__Q24Kart8KartMoveFv (0x805814e0) ===
void getAppliedHopStickX__Q24Kart8KartMoveFv(void) { return; }

// === setScale__Q24Kart8KartMoveFQ23EGG8Vector3f (0x80583c08) ===
void setScale__Q24Kart8KartMoveFQ23EGG8Vector3f(void) { return; }

// === empty__Q24Kart8KartMoveFl (0x80583f0c) ===
void empty__Q24Kart8KartMoveFl(void) { return; }

// === clearBoost__Q24Kart8KartMoveFv (0x805857cc) ===
void clearBoost__Q24Kart8KartMoveFv(void) { return; }

// === PlayerSub10_updateWheelie (0x80589a74) ===
void PlayerSub10_updateWheelie(void) { return; }

// === PlayerSub10Bike_updateWheelie (0x8058a24c) ===
void PlayerSub10Bike_updateWheelie(void) { return; }

// === PlayerSub10Bike_startWheelie (0x8058a838) ===
void PlayerSub10Bike_startWheelie(void) { return; }

// === PlayerSub10Bike_cancelWheelie (0x8058a8ac) ===
void PlayerSub10Bike_cancelWheelie(void) { return; }

// === PlayerSub10Bike_tryStartWheelie (0x8058ac80) ===
void PlayerSub10Bike_tryStartWheelie(void) { return; }

// === PlayerSub10Bike_checkWheelieSpeed (0x8058b4c8) ===
void PlayerSub10Bike_checkWheelieSpeed(void) { return; }

// === PlayerSub10_checkWheelie (0x8058bc2c) ===
void PlayerSub10_checkWheelie(void) { return; }

// === PlayerKart_createTires (0x80590ef4) ===
void PlayerKart_createTires(void) { return; }

// === __ct__Q24Kart12KartSettingsFv (0x805954a8) ===
void __ct__Q24Kart12KartSettingsFv(void) { return; }

// === __ct__Q24Kart15KartCollideAreaFv (0x8059648c) ===
void __ct__Q24Kart15KartCollideAreaFv(void) { return; }

// === __ct__Q24Kart9KartStateFPQ24Kart12KartSettings (0x8059689c) ===
void __ct__Q24Kart9KartStateFPQ24Kart12KartSettings(void) { return; }

// === init__Q24Kart9KartStateFv (0x80596a44) ===
void init__Q24Kart9KartStateFv(void) { return; }

// === reset__Q24Kart9KartStateFv (0x80596a7c) ===
void reset__Q24Kart9KartStateFv(void) { return; }

// === resetOob__Q24Kart9KartStateFv (0x80596b1c) ===
void resetOob__Q24Kart9KartStateFv(void) { return; }

// === KartSub_createComponents (0x80598230) ===
void KartSub_createComponents(void) { return; }

// === KartSub_init (0x80598460) ===
void KartSub_init(void) { return; }

// === KartSus_ct (0x8059aff0) ===
void KartSus_ct(void) { return; }

// === KartSus_init (0x8059b048) ===
void KartSus_init(void) { return; }

// === KartSus_initPhysics (0x8059b0bc) ===
void KartSus_initPhysics(void) { return; }

// === __ct__Q24Kart16KartWheelPhysicsFUll (0x8059b8f4) ===
void __ct__Q24Kart16KartWheelPhysicsFUll(void) { return; }

// === init__Q24Kart16KartWheelPhysicsFv (0x8059b958) ===
void init__Q24Kart16KartWheelPhysicsFv(void) { return; }

// === setBsp__Q24Kart16KartWheelPhysicsFv (0x8059b9bc) ===
void setBsp__Q24Kart16KartWheelPhysicsFv(void) { return; }

// === reset__Q24Kart16KartWheelPhysicsFv (0x8059b9f0) ===
void reset__Q24Kart16KartWheelPhysicsFv(void) { return; }

// === setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f (0x8059baa8) ===
void setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f(void) { return; }

// === calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f (0x8059bb78) ===
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void) { return; }

// === calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f (0x8059bfb8) ===
void calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void) { return; }

// === updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv (0x8059c284) ===
void updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv(void) { return; }

// === unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f (0x8059c2a8) ===
void unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f(void) { return; }

// === hasFloorCollision__Q24Kart16KartWheelPhysicsCFv (0x8059c394) ===
void hasFloorCollision__Q24Kart16KartWheelPhysicsCFv(void) { return; }

// === getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv (0x8059c3a4) ===
void getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv(void) { return; }

// === getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv (0x8059c3b0) ===
void getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv(void) { return; }

// === __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel (0x8059c3bc) ===
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void) { return; }

// === reset__Q24Kart14KartSusPhysicsFv (0x8059c43c) ===
void reset__Q24Kart14KartSusPhysicsFv(void) { return; }

// === init__Q24Kart14KartSusPhysicsFv (0x8059c488) ===
void init__Q24Kart14KartSusPhysicsFv(void) { return; }

// === setInitialState__Q24Kart14KartSusPhysicsFv (0x8059c514) ===
void setInitialState__Q24Kart14KartSusPhysicsFv(void) { return; }

// === calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff (0x8059c760) ===
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void) { return; }

// === WheelPhysicsHolder_applySuspensions (0x8059ca5c) ===
void WheelPhysicsHolder_applySuspensions(void) { return; }

// === KartTire_ct (0x8059cf2c) ===
void KartTire_ct(void) { return; }

// === KartTire_init (0x8059cf98) ===
void KartTire_init(void) { return; }

// === KartTire_createPhysics (0x8059cffc) ===
void KartTire_createPhysics(void) { return; }

// === KartTire_initBsp (0x8059d050) ===
void KartTire_initBsp(void) { return; }

// === __ct__Q24Kart11KartPhysicsFb (0x805a1aa4) ===
void __ct__Q24Kart11KartPhysicsFb(void) { return; }

// === sub_805a1df0 (0x805a1df0) ===
void sub_805a1df0(void) { return; }

// === sub_805a1e24 (0x805a1e24) ===
void sub_805a1e24(void) { return; }

// === sub_805a1e54 (0x805a1e54) ===
void sub_805a1e54(void) { return; }

// === sub_805a1f04 (0x805a1f04) ===
void sub_805a1f04(void) { return; }

// === sub_805a20ac (0x805a20ac) ===
void sub_805a20ac(void) { return; }

// === sub_805a2124 (0x805a2124) ===
void sub_805a2124(void) { return; }

// === sub_805a22e4 (0x805a22e4) ===
void sub_805a22e4(void) { return; }

// === sub_805a2484 (0x805a2484) ===
void sub_805a2484(void) { return; }

// === sub_805a26e0 (0x805a26e0) ===
void sub_805a26e0(void) { return; }

// === sub_805a2730 (0x805a2730) ===
void sub_805a2730(void) { return; }

// === sub_805a2770 (0x805a2770) ===
void sub_805a2770(void) { return; }

// === sub_805a28cc (0x805a28cc) ===
void sub_805a28cc(void) { return; }

// === sub_805a2b08 (0x805a2b08) ===
void sub_805a2b08(void) { return; }

// === sub_805a2b84 (0x805a2b84) ===
void sub_805a2b84(void) { return; }

// === sub_805a2df8 (0x805a2df8) ===
void sub_805a2df8(void) { return; }

// === sub_805a2efc (0x805a2efc) ===
void sub_805a2efc(void) { return; }

// === sub_805a2f58 (0x805a2f58) ===
void sub_805a2f58(void) { return; }

// === sub_805a304c (0x805a304c) ===
void sub_805a304c(void) { return; }

// === sub_805a3b78 (0x805a3b78) ===
void sub_805a3b78(void) { return; }

// === sub_805a3c10 (0x805a3c10) ===
void sub_805a3c10(void) { return; }

// === sub_805a3c94 (0x805a3c94) ===
void sub_805a3c94(void) { return; }

// === sub_805a4508 (0x805a4508) ===
void sub_805a4508(void) { return; }

// === sub_805a45c0 (0x805a45c0) ===
void sub_805a45c0(void) { return; }

// === sub_805a47a8 (0x805a47a8) ===
void sub_805a47a8(void) { return; }

// === sub_805a4838 (0x805a4838) ===
void sub_805a4838(void) { return; }

// === sub_805a4898 (0x805a4898) ===
void sub_805a4898(void) { return; }

// === sub_805a4ae0 (0x805a4ae0) ===
void sub_805a4ae0(void) { return; }

// === sub_805a4d5c (0x805a4d5c) ===
void sub_805a4d5c(void) { return; }

// === sub_805a4f34 (0x805a4f34) ===
void sub_805a4f34(void) { return; }

// === sub_805a5390 (0x805a5390) ===
void sub_805a5390(void) { return; }

// === sub_805a53d0 (0x805a53d0) ===
void sub_805a53d0(void) { return; }

// === sub_805a5430 (0x805a5430) ===
void sub_805a5430(void) { return; }

// === sub_805a54e4 (0x805a54e4) ===
void sub_805a54e4(void) { return; }

// === sub_805a557c (0x805a557c) ===
void sub_805a557c(void) { return; }

// === sub_805a5710 (0x805a5710) ===
void sub_805a5710(void) { return; }

// === sub_805a5788 (0x805a5788) ===
void sub_805a5788(void) { return; }

// === sub_805a5974 (0x805a5974) ===
void sub_805a5974(void) { return; }

// === sub_805a5a60 (0x805a5a60) ===
void sub_805a5a60(void) { return; }

// === sub_805a5f44 (0x805a5f44) ===
void sub_805a5f44(void) { return; }

// === sub_805a601c (0x805a601c) ===
void sub_805a601c(void) { return; }

// === sub_805a60cc (0x805a60cc) ===
void sub_805a60cc(void) { return; }

// === sub_805a6118 (0x805a6118) ===
void sub_805a6118(void) { return; }

// === sub_805a6174 (0x805a6174) ===
void sub_805a6174(void) { return; }

// === sub_805a6230 (0x805a6230) ===
void sub_805a6230(void) { return; }

// === sub_805a6418 (0x805a6418) ===
void sub_805a6418(void) { return; }

// === sub_805a6498 (0x805a6498) ===
void sub_805a6498(void) { return; }

// === sub_805a653c (0x805a653c) ===
void sub_805a653c(void) { return; }

// === sub_805a6798 (0x805a6798) ===
void sub_805a6798(void) { return; }

// === sub_805a6da8 (0x805a6da8) ===
void sub_805a6da8(void) { return; }