// RaceEngine module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 216 decompiled functions
// Address range: 0x8052ffd8 - 0x80857bcc

#include "RaceEngine.h"
#include "../types.h"
#include "../stubs.h"


// === RaceFlow_validate_80530074 (0x80530074) ===
int RaceFlow_validate_80530074(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xb00 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xb00,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x8ac,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x658,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x404,0xffffffff);
    if (param_1 + 0x290 != 0) {
      FUN_segment_0__80500540(param_1 + 0x290,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_80530120 (0x80530120) ===
void race_RaceFlow_80530120(int param_1)

{
  *(u32 *)(param_1 + 0xd64) = 0xffffffff;
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x6c) + 0x10)))((int *)(param_1 + 0x6c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,1);
  FUN_segment_0__80735844(param_1 + 0x290,0x1b5a,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804a9914(param_1 + 0x404,0,7,0x17,1,0,0);
  *(u32 *)(param_1 + 0x644) = 1;
  FUN_segment_0__804a9ec4(param_1 + 0x404,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x658,0);
  FUN_segment_0__804a9914(param_1 + 0x658,0x1e,0x25,0x35,1,0,0);
  *(u32 *)(param_1 + 0x898) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x658,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0x8ac,0);
  FUN_segment_0__804a9914(param_1 + 0x8ac,0x3d,0x44,0x54,1,0,0);
  *(u32 *)(param_1 + 0xaec) = 4;
  FUN_segment_0__804a9ec4(param_1 + 0x8ac,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0xb00,0);
  FUN_segment_0__804a9914(param_1 + 0xb00,99,0x6a,0x6f,1,0,1);
  *(u32 *)(param_1 + 0xd40) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0xb00,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x404,0);
  return;
}

// === race_RaceFlow_80530348 (0x80530348) ===
void race_RaceFlow_80530348(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_2 + 0x240);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      param_1[0x359] = 0xc1;
      FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804d1c48(param_1,0);
      return;
    }
    if (iVar2 != 4) {
      if (iVar2 != 3) {
        return;
      }
      param_1[0x359] = -1;
      FUN_segment_0__804aa384(param_2);
      ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x43,1);
      return;
    }
    param_1[0x359] = 0xca;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 800);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805303f8;
        }
      }
      bVar1 = false;
LAB_segment_0__805303f8:
      if (bVar1) goto LAB_segment_0__80530408;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80530408:
  piVar4[0x1a] = 0;
  param_1[0x359] = 0xc6;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === RaceFlow_validate_80530614 (0x80530614) ===
int RaceFlow_validate_80530614(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xfa8 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xfa8,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0xd54,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0xb00,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x8ac,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x658,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x404,0xffffffff);
    if (param_1 + 0x290 != 0) {
      FUN_segment_0__80500540(param_1 + 0x290,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_805306d8 (0x805306d8) ===
void race_RaceFlow_805306d8(int param_1)

{
  *(u32 *)(param_1 + 0x120c) = 0xffffffff;
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x6c) + 0x10)))((int *)(param_1 + 0x6c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,7);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,1);
  FUN_segment_0__80735844(param_1 + 0x290,0x1b59,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804a9914(param_1 + 0x404,0x7a,0x81,0x95,1,0,0);
  *(u32 *)(param_1 + 0x644) = 1;
  FUN_segment_0__804a9ec4(param_1 + 0x404,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x658,0);
  FUN_segment_0__804a9914(param_1 + 0x658,0xa3,0xaa,0xbe,1,0,0);
  *(u32 *)(param_1 + 0x898) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x658,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x8ac,0);
  FUN_segment_0__804a9914(param_1 + 0x8ac,0xca,0xd1,0xe5,1,0,0);
  *(u32 *)(param_1 + 0xaec) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x8ac,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xb00,0);
  FUN_segment_0__804a9914(param_1 + 0xb00,0xf4,0xfb,0x10f,1,0,0);
  *(u32 *)(param_1 + 0xd40) = 4;
  FUN_segment_0__804a9ec4(param_1 + 0xb00,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,5,param_1 + 0xd54,0);
  FUN_segment_0__804a9914(param_1 + 0xd54,0x11a,0x121,0x135,1,0,0);
  *(u32 *)(param_1 + 0xf94) = 5;
  FUN_segment_0__804a9ec4(param_1 + 0xd54,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,6,param_1 + 0xfa8,0);
  FUN_segment_0__804a9914(param_1 + 0xfa8,0x140,0x147,0x14c,1,0,1);
  *(u32 *)(param_1 + 0x11e8) = 6;
  FUN_segment_0__804a9ec4(param_1 + 0xfa8,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x404,0);
  return;
}

// === race_RaceFlow_80530994 (0x80530994) ===
void race_RaceFlow_80530994(int param_1,int param_2)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_2 + 0x240);
  if (3 < iVar3 - 2U) {
    if (iVar3 == 1) {
      *(u32 *)(param_1 + 0x120c) = 0xc5;
      FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804d1c48(param_1,0);
      return;
    }
    if (iVar3 != 6) {
      return;
    }
    *(u32 *)(param_1 + 0x120c) = 0xc0;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 800);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80530a60;
        }
      }
      bVar1 = false;
LAB_segment_0__80530a60:
      if (bVar1) goto LAB_segment_0__80530a70;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80530a70:
  *(u32 *)(param_1 + 0x120c) = 0xc6;
  iVar3 = *(int *)(param_2 + 0x240);
  if (iVar3 == 2) {
    piVar4[0x1a] = 1;
  }
  else if (iVar3 == 3) {
    if ((*(uint *)(g_Ram_ptr[0x93ff] + 0x2330c) & 8) == 0) {
      piVar4[0x1a] = 2;
    }
    else {
      piVar4[0x1a] = 3;
    }
  }
  else if (iVar3 == 4) {
    piVar4[0x1a] = 4;
  }
  else if (iVar3 == 5) {
    piVar4[0x1a] = 5;
  }
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === race_RaceFlow_80530b64 (0x80530b64) ===
u32 * race_RaceFlow_80530b64(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x15] = uRam00000008;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x1b);
  FUN_segment_0__80500418(param_1 + 0xa4);
  param_1[0xa4] = 0;
  FUN_segment_0__804ccebc(param_1 + 0x101);
  FUN_segment_0__804a97a4(param_1 + 0x15e);
  FUN_segment_0__804a97a4(param_1 + 499);
  uVar1 = uRam00000000;
  param_1[499] = 0;
  param_1[0x288] = 0x7d1;
  param_1[0x289] = 0;
  param_1[0x28a] = uVar1;
  return param_1;
}

// === RaceFlow_validate_80530c7c (0x80530c7c) ===
int RaceFlow_validate_80530c7c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x7cc != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x7cc,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x578,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x404,0xffffffff);
    if (param_1 + 0x290 != 0) {
      FUN_segment_0__80500540(param_1 + 0x290,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_80530d1c (0x80530d1c) ===
void race_RaceFlow_80530d1c(int param_1)

{
  *(u32 *)(param_1 + 0xa30) = 0;
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x6c) + 0x10)))((int *)(param_1 + 0x6c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,1);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804ccf50(param_1 + 0x404,0x157,0x166,0x174);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0x182,0x189,0x1a1,1,0,0);
  *(u32 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0x1a6,0x1ad,0x1b2,1,0,1);
  *(u32 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === race_RaceFlow_80530ec8 (0x80530ec8) ===
void race_RaceFlow_80530ec8(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    param_1[0x28c] = 0;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    param_1[0x28c] = 1;
    if (*(int *)*g_Ram_uint == 0x8f) {
      FUN_segment_0__804aa384(param_2);
      ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x7a,1);
    }
    else if (*(int *)*g_Ram_uint == 0xac) {
      FUN_segment_0__804aa384(param_2);
      ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x9e,1);
    }
    else {
      FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804d1c48(param_1,1);
    }
  }
  return;
}

// === RaceFlow_validate_80531034 (0x80531034) ===
void RaceFlow_validate_80531034(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x15] = uRam00000008;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x1b);
  FUN_segment_0__80500418(param_1 + 0xa4);
  param_1[0xa4] = 0;
  FUN_segment_0__804ccebc(param_1 + 0x101);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x15e,0,0,0x254,3);
}

// === RaceFlow_validate_80531164 (0x80531164) ===
u32 RaceFlow_validate_80531164(int param_1)

{
  if (param_1 != 0) {
    if (param_1 + 0xc74 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xc74,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x578,0,0x254,3);
  }
  return 0;
}

// === RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario::postInitControllers (0x80531210) ===
void RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario::postInitControllers(int param_1)

{
  u32 auStack_28 [20];
  
  if (*(int *)(param_1 + 4) == 0xc3) {
    *(u32 *)(param_1 + 0xee4) = 2;
  }
  else if (*(int *)(param_1 + 4) == 0xc4) {
    *(u32 *)(param_1 + 0xee4) = 3;
  }
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x6c) + 0x10)))((int *)(param_1 + 0x6c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  if (*(int *)(param_1 + 4) == 0xc3) {
    FUN_segment_0__804ca380(param_1 + 0x6c,2);
  }
  else if (*(int *)(param_1 + 4) == 0xc4) {
    FUN_segment_0__804ca380(param_1 + 0x6c,1);
  }
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  if (*(int *)(param_1 + 4) == 0xc3) {
    FUN_segment_0__804d1c1c(param_1,5);
  }
  else if (*(int *)(param_1 + 4) == 0xc4) {
    FUN_segment_0__804d1c1c(param_1,6);
  }
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,1);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  if (*(int *)(param_1 + 4) == 0xc3) {
    FUN_segment_0__804ccf50(param_1 + 0x404,0x1bd,0x1cc,0x1e4);
  }
  else if (*(int *)(param_1 + 4) == 0xc4) {
    FUN_segment_0__804ccf50(param_1 + 0x404,0x1f6,0x205,0x220);
  }
  if (0 < *(int *)(param_1 + 0xee4)) {
    FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x578,0);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_28,0xf,0x235,0,*(u32 *)(param_1 + 0xee4));
  }
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0xc74,0);
  FUN_segment_0__804a9914(param_1 + 0xc74,0x25b,0x262,0x267,1,0,1);
  *(u32 *)(param_1 + 0xeb4) = 0xffffffff;
  FUN_segment_0__804a9ec4(param_1 + 0xc74,param_1 + 0x44,0);
  *(u32 *)(param_1 + 0xeec) = 0;
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === race_RaceFlow_805314c4 (0x805314c4) ===
void race_RaceFlow_805314c4(int param_1)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x140);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80531544;
        }
      }
      bVar1 = false;
LAB_segment_0__80531544:
      if (bVar1) goto LAB_segment_0__80531554;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80531554:
  if (piVar3[0x9c] == 0) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
  }
  else {
    *(u32 *)(param_1 + 0xee8) = 0xffffffff;
  }
  return;
}

// === race_RaceFlow_805315b4 (0x805315b4) ===
void race_RaceFlow_805315b4(int param_1,uint param_2,u32 param_3,u32 param_4)

{
  FUN_segment_0__80500a34(param_1 + param_2 * 0x254 + 0x578,param_3,0);
  *(u32 *)(param_1 + (param_2 & 0xff) * 4 + 0xed8) = param_4;
  return;
}

// === race_RaceFlow_80531620 (0x80531620) ===
void race_RaceFlow_80531620(int *param_1,int param_2)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_2 + 0x240);
  param_1[0x3ba] = iVar3;
  if (*(int *)(param_2 + 0x240) < 0) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,1);
    return;
  }
  if (param_1[iVar3 + 0x3b6] == 0) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x140);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805316d0;
        }
      }
      bVar1 = false;
LAB_segment_0__805316d0:
      if (bVar1) goto LAB_segment_0__805316e0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805316e0:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__80512c88(piVar4,param_1[param_1[0x3ba] + 0x3b6],0);
  FUN_segment_0__80512c90(piVar4,0,0x7d2,0,0xffffffff,0);
  FUN_segment_0__80512c90(piVar4,1,0x7d3,0,0xffffffff,0);
  piVar4[0x9f] = 1;
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x4e,0);
  FUN_segment_0__804aa82c(param_2,0);
  return;
}

// === race_RaceFlow_805317e0 (0x805317e0) ===
u32 * race_RaceFlow_805317e0(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000064;
  uVar1 = uRam00000060;
  param_1[0x15] = uRam00000068;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar2 = uRam00000070;
  uVar1 = uRam0000006c;
  param_1[0x1a] = uRam00000074;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  uVar3 = uRam00000080;
  uVar2 = uRam0000007c;
  uVar1 = uRam00000078;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x20);
  FUN_segment_0__80500418(param_1 + 0xa9);
  param_1[0xa9] = 0;
  FUN_segment_0__804ccebc(param_1 + 0x106);
  FUN_segment_0__804a97a4(param_1 + 0x163);
  FUN_segment_0__804a97a4(param_1 + 0x1f8);
  uVar1 = uRam00000000;
  param_1[0x1f8] = 0;
  param_1[0x28d] = 0x7d1;
  param_1[0x28e] = 0;
  param_1[0x28f] = uVar1;
  return param_1;
}

// === RaceFlow_validate_80531938 (0x80531938) ===
int RaceFlow_validate_80531938(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x7e0 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x7e0,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x58c,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x418,0xffffffff);
    if (param_1 + 0x2a4 != 0) {
      FUN_segment_0__80500540(param_1 + 0x2a4,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x80,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_805319d8 (0x805319d8) ===
void race_RaceFlow_805319d8(int param_1)

{
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x80) + 0x10)))(param_1 + 0x80,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x80);
  FUN_segment_0__804ca380(param_1 + 0x80,1);
  FUN_segment_0__804ca350(param_1 + 0x80,1,param_1 + 0x6c,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2a4,0);
  FUN_segment_0__80735444(param_1 + 0x2a4,1);
  FUN_segment_0__80735844(param_1 + 0x2a4,0x1c20,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x418,0);
  FUN_segment_0__804ccf50(param_1 + 0x418,0x272,0x281,0x293);
  FUN_segment_0__80500a34(param_1 + 0x418,0x1c21,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x58c,0);
  FUN_segment_0__804a9914(param_1 + 0x58c,0x2a5,0x2ac,0x2b6,1,0,0);
  FUN_segment_0__804a9ec4(param_1 + 0x58c,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7e0,0);
  FUN_segment_0__804a9914(param_1 + 0x7e0,0x2b9,0x2c0,0x2c5,1,0,1);
  FUN_segment_0__804a9ec4(param_1 + 0x7e0,param_1 + 0x58,0);
  FUN_segment_0__804a9eec(param_1 + 0x58c,0);
  return;
}

// === race_RaceFlow_80531bd0 (0x80531bd0) ===
void race_RaceFlow_80531bd0(int *param_1,u32 param_2)

{
  FUN_segment_0__804aa384(param_2);
  ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,3,0);
  return;
}

// === race_RaceFlow_80531c1c (0x80531c1c) ===
void race_RaceFlow_80531c1c(int *param_1,u32 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 == 0x8c) || (iVar1 == 0xaa)) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,1);
  }
  else if (iVar1 == 0x8e) {
    FUN_segment_0__804aa384(param_2);
    ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x7a,1);
  }
  else if (iVar1 == 0xab) {
    FUN_segment_0__804aa384(param_2);
    ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x9e,1);
  }
  return;
}

// === race_RaceFlow_80531d64 (0x80531d64) ===
u32 * race_RaceFlow_80531d64(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  FUN_segment_0__804c8134(param_1 + 0x16);
  return param_1;
}

// === RaceFlow_validate_80531de0 (0x80531de0) ===
int RaceFlow_validate_80531de0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_80531e48 (0x80531e48) ===
void race_RaceFlow_80531e48(int param_1)

{
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x58) + 0x10)))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === race_RaceFlow_80531f1c (0x80531f1c) ===
void race_RaceFlow_80531f1c(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x6c) != 3) {
    if (*(int *)(param_1 + 0x6c) != 6) {
      return;
    }
    iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
    if (iVar2 == 1) {
      return;
    }
    iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
    if (iVar2 == 1) {
      *(u32 *)(param_1 + 0x6c) = 7;
    }
    else if (iVar2 == 6) {
      *(u32 *)(param_1 + 0x6c) = 8;
    }
    else {
      *(u32 *)(param_1 + 0x6c) = 8;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x324);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4);
            puVar3 != (u32 *)0; puVar3 = (u32 *)*puVar3) {
          if (puVar3 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__805320d0;
          }
        }
        bVar1 = false;
LAB_segment_0__805320d0:
        if (bVar1) goto LAB_segment_0__805320e0;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__805320e0:
    FUN_segment_0__804a9164(piVar4);
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
  if (iVar2 == 1) {
    *(u32 *)(param_1 + 0x6c) = 4;
  }
  else if (iVar2 == 6) {
    *(u32 *)(param_1 + 0x6c) = 5;
  }
  else {
    *(u32 *)(param_1 + 0x6c) = 5;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x324);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80532000;
        }
      }
      bVar1 = false;
LAB_segment_0__80532000:
      if (bVar1) goto LAB_segment_0__80532010;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80532010:
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === race_RaceFlow_80532100 (0x80532100) ===
void race_RaceFlow_80532100(int param_1)

{
  if (*(uint *)(param_1 + 0x6c) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x80532134 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(uint *)(param_1 + 0x6c) << 2))();
    return;
  }
  return;
}

// === race_RaceFlow_80532b64 (0x80532b64) ===
void race_RaceFlow_80532b64(int *param_1,u32 param_2)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x310);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80532bec;
        }
      }
      bVar1 = false;
LAB_segment_0__80532bec:
      if (bVar1) goto LAB_segment_0__80532bfc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80532bfc:
  iVar2 = param_1[0x1a];
  if (iVar2 == 1) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c52,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1c53,0);
  }
  else if (iVar2 == 2) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c84,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1c85,0);
  }
  else if (iVar2 == 3) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c84,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1cb6,0);
  }
  else if (iVar2 == 4) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1ce8,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1ce9,0);
  }
  else if (iVar2 == 5) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1d4c,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1d4d,0);
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xc2,param_2);
  param_1[0x1b] = 0;
  return;
}

// === race_RaceFlow_80532d20 (0x80532d20) ===
void race_RaceFlow_80532d20(int *param_1,u32 param_2)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x310);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80532da8;
        }
      }
      bVar1 = false;
LAB_segment_0__80532da8:
      if (bVar1) goto LAB_segment_0__80532db8;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80532db8:
  FUN_segment_0__80735844(piVar3 + 0xa4,0x1ce8,0);
  FUN_segment_0__80500a34(piVar3 + 0x101,0x1cf0,0);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xc2,param_2);
  param_1[0x1b] = 1;
  return;
}

// === race_RaceFlow_80532e1c (0x80532e1c) ===
void race_RaceFlow_80532e1c(int *param_1,u32 param_2)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0xc3;
  if (param_1[0x1a] == 3) {
    iVar5 = 0xc4;
  }
  piVar4 = *(int **)(*g_Ram_ptr + iVar5 * 4 + 8);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80532eb4;
        }
      }
      bVar1 = false;
LAB_segment_0__80532eb4:
      if (bVar1) goto LAB_segment_0__80532ec4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80532ec4:
  iVar2 = param_1[0x1a];
  if (iVar2 == 0) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1bbc,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1bbd,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1bbe,0);
    piVar4[0x3b6] = 0;
    FUN_segment_0__80500a34(piVar4 + 499,0x1bbf,0);
    piVar4[0x3b7] = 0;
    *(byte *)(piVar4 + 0x3bb) = (u8)*(u32 *)(g_Ram_ptr[0x93ff] + 0x2330c) & 1 ^ 1;
  }
  else if (iVar2 == 1) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c52,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1c54,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1c55,0);
    piVar4[0x3b6] = 0;
    FUN_segment_0__80500a34(piVar4 + 499,0x1c56,0);
    piVar4[0x3b7] = 0;
    *(byte *)(piVar4 + 0x3bb) = (u8)(*(uint *)(g_Ram_ptr[0x93ff] + 0x2330c) >> 1) & 1 ^ 1;
  }
  else if (iVar2 == 2) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c84,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1c86,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1c87,0);
    piVar4[0x3b6] = 0;
    FUN_segment_0__80500a34(piVar4 + 499,0x1c88,0);
    piVar4[0x3b7] = 0x1c8a;
    *(u32 *)(piVar4 + 0x3bb) = 1;
  }
  else if (iVar2 == 3) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1c84,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1cb7,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1cb8,0);
    piVar4[0x3b6] = 0x1cbb;
    FUN_segment_0__80500a34(piVar4 + 499,0x1cb9,0);
    piVar4[0x3b7] = 0x1cbc;
    FUN_segment_0__80500a34(piVar4 + 0x288,0x1cba,0);
    piVar4[0x3b8] = 0;
    *(u32 *)(piVar4 + 0x3bb) = 2;
  }
  else if (iVar2 == 4) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1ce8,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1cea,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1ceb,0);
    piVar4[0x3b6] = 0;
    FUN_segment_0__80500a34(piVar4 + 499,0x1cec,0);
    piVar4[0x3b7] = 0x1cee;
    *(byte *)(piVar4 + 0x3bb) = (u8)(*(uint *)(g_Ram_ptr[0x93ff] + 0x2330c) >> 4) & 1 ^ 1;
  }
  else if (iVar2 == 5) {
    FUN_segment_0__80735844(piVar4 + 0xa4,0x1d4c,0);
    FUN_segment_0__80500a34(piVar4 + 0x101,0x1d4e,0);
    FUN_segment_0__80500a34(piVar4 + 0x15e,0x1d4f,0);
    piVar4[0x3b6] = 0;
    FUN_segment_0__80500a34(piVar4 + 499,0x1d50,0);
    piVar4[0x3b7] = 0x1d53;
    *(byte *)(piVar4 + 0x3bb) = (u8)(*(uint *)(g_Ram_ptr[0x93ff] + 0x2330c) >> 5) & 1 ^ 1;
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,iVar5,param_2);
  param_1[0x1b] = 2;
  return;
}

// === race_RaceFlow_805331d8 (0x805331d8) ===
void race_RaceFlow_805331d8(int *param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__8055e0ac(g_Ram_ptr);
  if (iVar2 == 0) {
    race_RaceFlow_805337fc(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x324);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053326c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053326c:
      if (bVar1) goto LAB_segment_0__8053327c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053327c:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__804a96f0(piVar4,0x1c84,0);
  ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x10cd,0);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,199,0);
  param_1[0x1b] = 3;
  return;
}

// === race_RaceFlow_80533308 (0x80533308) ===
void race_RaceFlow_80533308(int *param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__8055dccc(g_Ram_ptr);
  if (iVar2 == 0) {
    race_RaceFlow_805337fc(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x324);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053339c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053339c:
      if (bVar1) goto LAB_segment_0__805333ac;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805333ac:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__804a96f0(piVar4,0x1c84,0);
  ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x10cd,0);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,199,0);
  param_1[0x1b] = 6;
  return;
}

// === race_RaceFlow_80533438 (0x80533438) ===
void race_RaceFlow_80533438(int *param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  FUN_segment_0__804e45d0(g_Ram_ptr[0x24]);
  piVar4 = *(int **)(*g_Ram_ptr + 0x328);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805334c4;
        }
      }
      bVar1 = false;
LAB_segment_0__805334c4:
      if (bVar1) goto LAB_segment_0__805334d4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805334d4:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  iVar2 = param_1[0x1a];
  if (iVar2 == 0) {
    FUN_segment_0__804ccddc(piVar4,0x1bbc,0);
    if (param_1[0x1d] == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1bc0,0);
    }
    else if (param_1[0x1d] == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1bc1,0);
    }
  }
  else if (iVar2 == 1) {
    FUN_segment_0__804ccddc(piVar4,0x1c52,0);
    if (param_1[0x1d] == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1c57,0);
    }
    else if (param_1[0x1d] == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1c58,0);
    }
  }
  else if (iVar2 == 2) {
    FUN_segment_0__804ccddc(piVar4,0x1c84,0);
    if (param_1[0x1d] == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1c89,0);
    }
    else if (param_1[0x1d] == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1cbe,0);
    }
  }
  else if (iVar2 == 3) {
    FUN_segment_0__804ccddc(piVar4,0x1c84,0);
    iVar2 = param_1[0x1d];
    if (iVar2 == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1cbf,0);
    }
    else if (iVar2 == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1cc0,0);
    }
    else if (iVar2 == 2) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1cbd,0);
    }
  }
  else if (iVar2 == 4) {
    FUN_segment_0__804ccddc(piVar4,0x1ce8,0);
    if (param_1[0x1d] == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1ced,0);
    }
    else if (param_1[0x1d] == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1cef,0);
    }
  }
  else if (iVar2 == 5) {
    FUN_segment_0__804ccddc(piVar4,0x1d4c,0);
    if (param_1[0x1d] == 0) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1d51,0);
    }
    else if (param_1[0x1d] == 1) {
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x1d52,0);
    }
  }
  piVar4[0x62] = (int)(param_1 + 0x11);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,200,0);
  param_1[0x1b] = 9;
  return;
}

// === race_RaceFlow_805337fc (0x805337fc) ===
void race_RaceFlow_805337fc(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  uint uVar3;
  int *piVar4;
  u32 local_d8 [51];
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x328);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053387c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053387c:
      if (bVar1) goto LAB_segment_0__8053388c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053388c:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  uVar3 = FUN_segment_0__80555918(g_Ram_ptr);
  if (9 < uVar3) {
    FUN_segment_0__804b4ecc(local_d8);
    local_d8[0] = FUN_segment_0__805558f0(g_Ram_ptr);
    FUN_segment_0__804ccddc(piVar4,0x1c84,0);
    ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0,local_d8);
    piVar4[0x62] = (int)(param_1 + 0x11);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,200,0);
    param_1[0x1b] = 9;
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x805338c4 */
                    /* WARNING: Treating indirect jump as call */
  ((void(*)(...))(*(void**)(uVar3 << 2)))();
  return;
}

// === race_RaceFlow_805339c4 (0x805339c4) ===
void race_RaceFlow_805339c4(void)

{
  if (*(int *)*g_Ram_uint == 0x8f) {
    FUN_segment_0__804f8c44(g_Ram_uint,0x7a,0);
  }
  else if (*(int *)*g_Ram_uint == 0xac) {
    FUN_segment_0__804f8c44(g_Ram_uint,0x9e,0);
  }
  else {
    FUN_segment_0__804f8c44(g_Ram_uint,0x8c,0);
    FUN_segment_0__805e819c(g_Ram_uint);
  }
  FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  return;
}

// === RaceFlow_validate_80533ab0 (0x80533ab0) ===
void RaceFlow_validate_80533ab0(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_80533ae0 (0x80533ae0) ===
void RaceFlow_validate_80533ae0(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_80533b10 (0x80533b10) ===
void RaceFlow_validate_80533b10(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_80533b40 (0x80533b40) ===
void RaceFlow_validate_80533b40(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_80533b70 (0x80533b70) ===
void RaceFlow_validate_80533b70(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_80533ba0 (0x80533ba0) ===
void RaceFlow_validate_80533ba0(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_80533bd0 (0x80533bd0) ===
void RaceFlow_validate_80533bd0(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_80533c00 (0x80533c00) ===
void RaceFlow_validate_80533c00(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_80533c30 (0x80533c30) ===
void RaceFlow_validate_80533c30(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_80533c60 (0x80533c60) ===
void RaceFlow_validate_80533c60(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_80533c90 (0x80533c90) ===
void RaceFlow_validate_80533c90(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === race_RaceFlow_80533cf8 (0x80533cf8) ===
u32 * race_RaceFlow_80533cf8(u32 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_80533d34 (0x80533d34) ===
int RaceFlow_validate_80533d34(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === RaceFlow_assertFail_80533d8c (0x80533d8c) ===
void RaceFlow_assertFail_80533d8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === race_RaceFlow_80533eb0 (0x80533eb0) ===
void race_RaceFlow_80533eb0(int param_1)

{
  u32 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === RaceFlow_validate_80533ee8 (0x80533ee8) ===
void RaceFlow_validate_80533ee8(int param_1,int param_2)

{
  int iVar1;
  u32 auStack_1a8 [204];
  u32 auStack_dc [72];
  u32 local_94;
  
  FUN_segment_0__804cddcc
            (*(u32 *)(param_1 + 0x174),*(u32 *)(param_1 + 0x178),param_2 + 0xc);
  FUN_segment_0__804b4ecc(auStack_dc);
  local_94 = FUN_segment_0__804ce0ec
                       (*(u32 *)(param_1 + 0x174),*(u32 *)(param_1 + 0x178));
  FUN_segment_0__8050093c(param_1,0x4d,0x251d,auStack_dc);
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x59);
  *(byte *)(iVar1 + 0xbb) = *(int *)(param_2 + 0x58) == 0 | *(byte *)(iVar1 + 0xbb) & 0xfe;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1a8,7,100,*(u32 *)(param_2 + 100));
}

// === RaceFlow_validate_80534094 (0x80534094) ===
void RaceFlow_validate_80534094(int param_1,int *param_2)

{
  u32 *puVar1;
  u32 uVar2;
  uint uVar3;
  int iVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 auStack_1f8 [7];
  u32 uStack_1f1;
  u32 local_1f0 [272];
  u32 auStack_e0 [72];
  u32 local_98;
  
  if (*param_2 == 0) {
    FUN_segment_0__804cde9c
              (*(u32 *)(param_1 + 0x174),*(u32 *)(param_1 + 0x178),
               (int)g_Ram_ptr + (param_2[1] & 0xffU) * 0x93f0 + 0x4e);
  }
  else if (*param_2 == 1) {
    iVar4 = FUN_segment_0__804b9814(*(u32 *)(*g_Ram_ptr + 0x404),param_2[1]);
    puVar6 = &uStack_1f1;
    puVar5 = (u32 *)(iVar4 + 0x21);
    iVar4 = 0x26;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar2 = *puVar5;
      puVar6[1] = *puVar1;
      puVar6 = puVar6 + 2;
      *puVar6 = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_segment_0__804cddcc
              (*(u32 *)(param_1 + 0x174),*(u32 *)(param_1 + 0x178),local_1f0);
  }
  FUN_segment_0__804b4ecc(auStack_e0);
  local_98 = FUN_segment_0__804ce0ec
                       (*(u32 *)(param_1 + 0x174),*(u32 *)(param_1 + 0x178));
  FUN_segment_0__8050093c(param_1,0x98,0x251d,auStack_e0);
  iVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xa4);
  uVar3 = param_2[7];
  *(byte *)(iVar4 + 0xbb) = param_2[5] == 0 | *(byte *)(iVar4 + 0xbb) & 0xfe;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1f8,7,0xaf,uVar3 >> 0x18);
}

// === RaceFlow_validate_805342f8 (0x805342f8) ===
void RaceFlow_validate_805342f8(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x15] = uRam00000008;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x1b);
  FUN_segment_0__804a97a4(param_1 + 0xa4);
  uVar1 = uRam00000000;
  param_1[0xa4] = 0;
  param_1[0x139] = 0x7d1;
  param_1[0x13a] = 0;
  param_1[0x13b] = uVar1;
  FUN_segment_0__80500418(param_1 + 0x13d);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x19a,0,0,0x17c,10);
}

// === RaceFlow_validate_80534420 (0x80534420) ===
u32 RaceFlow_validate_80534420(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x16bc,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x1540,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x668,0,0x17c,10);
  }
  return 0;
}

// === RaceFlow_assertFail_805344d4 (0x805344d4) ===
void RaceFlow_assertFail_805344d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === race_RaceFlow_80534778 (0x80534778) ===
void race_RaceFlow_80534778(int param_1)

{
  FUN_segment_0__804a9eec(param_1 + 0x290,0);
  FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
  return;
}

// === race_RaceFlow_805347c0 (0x805347c0) ===
void race_RaceFlow_805347c0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  u32 auStack_e8 [36];
  int local_c4;
  
  FUN_segment_0__804b4ecc(auStack_e8);
  local_c4 = param_2 + 0x2490;
  if (param_3 == 1) {
    FUN_segment_0__80500a34(param_1 + 0x4f4,0x1776,auStack_e8);
  }
  else if (param_3 == 2) {
    FUN_segment_0__80500a34(param_1 + 0x4f4,0x1777,auStack_e8);
  }
  *(u32 *)(param_1 + 0x16b4) = 0;
  piVar4 = param_4 + 1;
  iVar3 = param_1 + 0x668;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (iVar1 < *param_4) {
      RaceFlow_validate_80533ee8(iVar3,piVar4);
      *(u32 *)(iVar2 + 0x6e8) = 0;
      FUN_segment_0__80500024(iVar3,0x37,0x38);
    }
    else {
      *(u32 *)(iVar2 + 0x6e8) = 1;
      FUN_segment_0__80500024(iVar3,0,0);
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 0x17c;
    iVar2 = iVar2 + 0x17c;
    piVar4 = piVar4 + 0x1a;
  } while (iVar1 < 10);
  *(byte *)(param_1 + 0x15c0) =
       (u8)((u8)((unsigned int)-*param_4 >> 0x18) & ~(u8)((unsigned int)*param_4 >> 0x18)) >> 7;
  return;
}

// === RaceFlow_validate_805348c8 (0x805348c8) ===
void RaceFlow_validate_805348c8(int param_1,int param_2)

{
  u32 auStack_534 [36];
  int local_510;
  u32 auStack_470 [1096];
  
  FUN_segment_0__804b4ecc(auStack_534);
  local_510 = param_2 + 0x2490;
  FUN_segment_0__80500a34(param_1 + 0x4f4,0x1775,auStack_534);
  *(u32 *)(param_1 + 0x16b4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_470,0,0,0x20,0x22);
}

// === RaceFlow_validate_80534bd0 (0x80534bd0) ===
int RaceFlow_validate_80534bd0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === race_RaceFlow_80534c10 (0x80534c10) ===
void race_RaceFlow_80534c10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  u32 local_108 [4];
  u32 local_104;
  int local_100;
  u32 local_f8;
  u32 auStack_ec [36];
  u32 local_c8;
  u32 local_50;
  
  local_108[0] = 0;
  local_104 = 0;
  FUN_segment_0__80559214(uRam00000000,local_108);
  FUN_segment_0__804b4ecc(auStack_ec);
  local_c8 = 0x19ca;
  if (param_2 == local_100) {
    local_50 = local_f8;
  }
  else {
    local_50 = FUN_segment_0__80558ccc(uRam00000000,param_2);
  }
  if (param_3 == 1) {
    FUN_segment_0__80500a34(param_1 + 0x4f4,0x1776,auStack_ec);
  }
  else if (param_3 == 2) {
    FUN_segment_0__80500a34(param_1 + 0x4f4,0x1777,auStack_ec);
  }
  *(u32 *)(param_1 + 0x16b4) = 0;
  piVar4 = param_4 + 1;
  iVar3 = param_1 + 0x668;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (iVar1 < *param_4) {
      RaceFlow_validate_80533ee8(iVar3,piVar4);
      *(u32 *)(iVar2 + 0x6e8) = 0;
      FUN_segment_0__80500024(iVar3,0x37,0x38);
    }
    else {
      *(u32 *)(iVar2 + 0x6e8) = 1;
      FUN_segment_0__80500024(iVar3,0,0);
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 0x17c;
    iVar2 = iVar2 + 0x17c;
    piVar4 = piVar4 + 0x1a;
  } while (iVar1 < 10);
  *(byte *)(param_1 + 0x15c0) =
       (u8)((u8)((unsigned int)-*param_4 >> 0x18) & ~(u8)((unsigned int)*param_4 >> 0x18)) >> 7;
  return;
}

// === RaceFlow_validate_80534d5c (0x80534d5c) ===
void RaceFlow_validate_80534d5c(int param_1,int param_2)

{
  u32 local_55c [4];
  u32 local_558;
  int local_554;
  u32 local_54c;
  u32 auStack_540 [36];
  u32 local_51c;
  u32 local_4a4;
  u32 auStack_478 [1100];
  
  local_55c[0] = 0;
  local_558 = 0;
  FUN_segment_0__80559214(uRam00000000,local_55c);
  FUN_segment_0__804b4ecc(auStack_540);
  local_51c = 0x19ca;
  if (param_2 == local_554) {
    local_4a4 = local_54c;
  }
  else {
    local_4a4 = FUN_segment_0__80558ccc(uRam00000000,param_2);
  }
  FUN_segment_0__80500a34(param_1 + 0x4f4,0x1775,auStack_540);
  *(u32 *)(param_1 + 0x16b4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_478,0,0,0x20,0x22);
}

// === race_RaceFlow_8053529c (0x8053529c) ===
void race_RaceFlow_8053529c(u32 param_1,u32 param_2)

{
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === RaceFlow_validate_805352e8 (0x805352e8) ===
void RaceFlow_validate_805352e8(u32 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x19,0,0,0x68,10);
}

// === RaceFlow_validate_80535370 (0x80535370) ===
int RaceFlow_validate_80535370(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === RaceFlow_validate_805353b0 (0x805353b0) ===
u32 RaceFlow_validate_805353b0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 4,0,0x68,10);
  }
  return 0;
}

// === RaceFlow_validate_80535418 (0x80535418) ===
int RaceFlow_validate_80535418(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x60) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 100,0,0x68,10);
    }
    FUN_segment_0__804c8158(0xffffffe4,0xffffffff);
    FUN_segment_0__804d11c4(0xffffffa0,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffffa0);
    }
  }
  return param_1;
}

// === race_RaceFlow_805354a0 (0x805354a0) ===
void race_RaceFlow_805354a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 == 0x7d) || (iVar1 == 0xa1)) {
    *(u32 *)(param_1 + 0x474) = 0;
  }
  else if ((iVar1 == 0x7e) || (iVar1 == 0xa2)) {
    *(u32 *)(param_1 + 0x474) = 1;
  }
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x44) + 0x10)))((int *)(param_1 + 0x44),0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === race_RaceFlow_80535550 (0x80535550) ===
void race_RaceFlow_80535550(int *param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  if (1 < param_1[0x16] - 1U) {
    if (param_1[0x16] != 0) {
      return;
    }
    race_RaceFlow_80536644();
    return;
  }
  iVar2 = FUN_segment_0__805469b4(g_Ram_ptr);
  if (iVar2 != 0) {
    race_RaceFlow_80535b08(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053560c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053560c:
      if (bVar1) goto LAB_segment_0__8053561c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053561c:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__804ad8bc(piVar4,0x17ea,0);
  FUN_segment_0__804ad8c4(piVar4,0x17e9,0);
  piVar4[0x208] = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
  param_1[0x15] = 0;
  return;
}

// === RaceInfo_update (0x8053569c) ===
void RaceInfo_update(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  if (*(int *)(param_1 + 0x54) != 2) {
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80535748;
        }
      }
      bVar1 = false;
LAB_segment_0__80535748:
      if (bVar1) goto LAB_segment_0__80535758;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80535758:
  FUN_segment_0__804a9164(piVar4);
  iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
  if (iVar2 - 3U < 2) {
    *(u32 *)(param_1 + 0x54) = 4;
  }
  else if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x474) == 0) {
      race_RaceFlow_80535d64(param_1);
    }
    else if (*(int *)(param_1 + 0x474) == 1) {
      race_RaceFlow_8053617c(param_1);
    }
    *(u32 *)(param_1 + 0x54) = 3;
  }
  else if (iVar2 == 5) {
    *(u32 *)(param_1 + 0x54) = 4;
  }
  return;
}

// === race_RaceFlow_805357f4 (0x805357f4) ===
void race_RaceFlow_805357f4(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  u32 local_d8 [51];
  
  iVar3 = param_1[0x15];
  if (iVar3 - 5U < 2) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
    return;
  }
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 == 3) {
        race_RaceFlow_80536644();
        return;
      }
      if (iVar3 != 4) {
        return;
      }
      piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__80535a20;
            }
          }
          bVar1 = false;
LAB_segment_0__80535a20:
          if (bVar1) goto LAB_segment_0__80535a30;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__80535a30:
      ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
      FUN_segment_0__804b4ecc(local_d8);
      local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x17e3,local_d8);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0x15] = 6;
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x218);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__80535974;
          }
        }
        bVar1 = false;
LAB_segment_0__80535974:
        if (bVar1) goto LAB_segment_0__80535984;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80535984:
    if (*(char *)((int)piVar4 + 0x6e) != 0) {
      race_RaceFlow_80535b08(param_1);
      return;
    }
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,piVar4[4]);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805358a8;
        }
      }
      bVar1 = false;
LAB_segment_0__805358a8:
      if (bVar1) goto LAB_segment_0__805358b8;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805358b8:
  if (piVar4[0x294] == 0) {
    param_1[0x15] = 1;
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x84,0);
  }
  else if (piVar4[0x294] == 1) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
  }
  return;
}

// === race_RaceFlow_80535afc (0x80535afc) ===
void race_RaceFlow_80535afc(int param_1,u32 param_2,u32 param_3)

{
  *(u32 *)(param_1 + 0x58) = param_3;
  *(u32 *)(param_1 + 0x5c) = param_2;
  return;
}

// === race_RaceFlow_80535b08 (0x80535b08) ===
void race_RaceFlow_80535b08(int *param_1,u32 param_2,u32 param_3)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  u32 local_d8 [51];
  
  param_1[0x15] = 2;
  if (param_1[0x16] == 2) {
    param_3 = 1;
  }
  else if (param_1[0x16] == 1) {
    param_3 = 0;
  }
  if (param_1[0x11d] == 0) {
    piVar3 = (int *)FUN_segment_0__805603d8(g_Ram_ptr,param_1[0x17],param_3,param_1 + 0x18);
  }
  else {
    piVar3 = param_1;
    if (param_1[0x11d] == 1) {
      piVar3 = (int *)FUN_segment_0__80560528(g_Ram_ptr,param_1[0x17],param_3,param_1 + 0x18);
    }
  }
  if (piVar3 != (int *)0) {
    piVar3 = *(int **)(*g_Ram_ptr + 0x148);
    if (piVar3 != (int *)0) {
      if (piVar3 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__80535ce4;
          }
        }
        bVar1 = false;
LAB_segment_0__80535ce4:
        if (bVar1) goto LAB_segment_0__80535cf4;
      }
      piVar3 = (int *)0;
    }
    else {
      piVar3 = (int *)0;
    }
LAB_segment_0__80535cf4:
    ((void(*)(...))(*(void**)(*piVar3 + 100)))(piVar3);
    ((void(*)(...))(*(void**)(*piVar3 + 0x68)))(piVar3,0x17e2,0);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x50,0);
    param_1[0x15] = 2;
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80535c00;
        }
      }
      bVar1 = false;
LAB_segment_0__80535c00:
      if (bVar1) goto LAB_segment_0__80535c10;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80535c10:
  ((void(*)(...))(*(void**)(*piVar3 + 100)))(piVar3);
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
  ((void(*)(...))(*(void**)(*piVar3 + 0x68)))(piVar3,0x17e3,local_d8);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
  param_1[0x15] = 6;
  return;
}

// === race_RaceFlow_80535d64 (0x80535d64) ===
void race_RaceFlow_80535d64(int param_1)

{
  u32 *puVar1;
  u32 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  u16 uVar6;
  int iVar7;
  u32 *puVar8;
  int iVar9;
  u32 *puVar10;
  int unaff_r28;
  u32 uVar11;
  u16 local_24;
  byte local_22;
  u16 local_20;
  
  iVar7 = iRam00000000;
  if (*(int *)(param_1 + 0x60) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x58) == 2) {
    unaff_r28 = 1;
  }
  else if (*(int *)(param_1 + 0x58) == 1) {
    unaff_r28 = 0;
  }
  uVar11 = *(u32 *)(param_1 + 0x5c);
  uVar6 = FUN_segment_0__80440ed8(uVar11);
  if (-1 < (short)uVar6) {
    iVar7 = *(int *)(iVar7 + 0x24ffc) + 0x23308;
    if (*(char *)(param_1 + 0x6e) == 0) {
      iVar7 = iVar7 + (unsigned int)uVar6 * 0xa0 + unaff_r28 * 0x50;
      *(uint *)(iVar7 + 0x2330) = *(uint *)(iVar7 + 0x2330) & 0x7fffffff;
    }
    else {
      iVar9 = iVar7 + (unsigned int)uVar6 * 0xa0 + unaff_r28 * 0x50;
      *(uint *)(iVar9 + 0x2330) = *(uint *)(iVar9 + 0x2330) | 0x80000000;
      uVar5 = 99;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(u16 *)(param_1 + 0x68);
      }
      *(uint *)(iVar9 + 0x2330) = (uVar5 & 0x7f) << 0x18 | *(uint *)(iVar9 + 0x2330) & 0x80ffffff;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(byte *)(param_1 + 0x6a);
      }
      else {
        uVar5 = 0x3b;
      }
      *(uint *)(iVar9 + 0x2330) = (uVar5 & 0x7f) << 0x11 | *(uint *)(iVar9 + 0x2330) & 0xff01ffff;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(u16 *)(param_1 + 0x6c);
      }
      else {
        uVar5 = 999;
      }
      *(uint *)(iVar9 + 0x2330) = (uVar5 & 0x3ff) << 7 | *(uint *)(iVar9 + 0x2330) & 0xfffe007f;
      puVar10 = (u32 *)(iVar7 + (unsigned int)uVar6 * 0xa0 + unaff_r28 * 0x50 + 0x2333);
      puVar8 = (u32 *)(param_1 + 0x6f);
      iVar7 = 0x26;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        uVar2 = *puVar8;
        puVar10[1] = *puVar1;
        puVar10 = puVar10 + 2;
        *puVar10 = uVar2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = iRam00000000;
  if (*(int *)(param_1 + 0x58) != 1) goto LAB_segment_0__8053614c;
  bVar3 = false;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  uVar6 = FUN_segment_0__80440ed8(uVar11);
  iVar9 = iRam00000000;
  if ((short)uVar6 < 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(iVar7 + 0x24ffc) + (unsigned int)uVar6 * 0xa0 + 0x25688);
    if ((int)uVar5 < 0) {
      local_20 = (u16)(uVar5 >> 7) & 0x3ff;
      local_22 = (u8)(uVar5 >> 0x11) & 0x7f;
      local_24 = (u8)(uVar5 >> 0x18) & 0x7f;
      bVar3 = true;
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
    }
  }
  uVar6 = FUN_segment_0__80440ed8(uVar11);
  iVar4 = iRam00000000;
  if ((short)uVar6 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(iVar9 + 0x24ffc) + (unsigned int)uVar6 * 0xa0 + 0x25688) >> 0x1f;
  }
  if (((unsigned int)-iVar7 >> 0x1f & uVar5) != 0) {
    if (*(char *)(param_1 + 0x6e) == 0) {
      bVar3 = false;
    }
    else if (bVar3) {
      if (*(u16 *)(param_1 + 0x68) < local_24) {
        bVar3 = true;
      }
      else if (*(u16 *)(param_1 + 0x68) == local_24) {
        if (*(byte *)(param_1 + 0x6a) < local_22) {
          bVar3 = true;
        }
        else {
          if ((*(byte *)(param_1 + 0x6a) != local_22) || (local_20 <= *(u16 *)(param_1 + 0x6c)))
          goto LAB_segment_0__80536044;
          bVar3 = true;
        }
      }
      else {
LAB_segment_0__80536044:
        bVar3 = false;
      }
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_segment_0__8053614c;
  }
  uVar6 = FUN_segment_0__80440ed8(uVar11);
  if (-1 < (short)uVar6) {
    iVar7 = *(int *)(iVar4 + 0x24ffc) + 0x23308;
    if (*(char *)(param_1 + 0x6e) == 0) {
      iVar7 = iVar7 + (unsigned int)uVar6 * 0xa0;
      *(uint *)(iVar7 + 0x2380) = *(uint *)(iVar7 + 0x2380) & 0x7fffffff;
    }
    else {
      iVar9 = iVar7 + (unsigned int)uVar6 * 0xa0;
      *(uint *)(iVar9 + 0x2380) = *(uint *)(iVar9 + 0x2380) | 0x80000000;
      uVar5 = 99;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(u16 *)(param_1 + 0x68);
      }
      *(uint *)(iVar9 + 0x2380) = (uVar5 & 0x7f) << 0x18 | *(uint *)(iVar9 + 0x2380) & 0x80ffffff;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(byte *)(param_1 + 0x6a);
      }
      else {
        uVar5 = 0x3b;
      }
      *(uint *)(iVar9 + 0x2380) = (uVar5 & 0x7f) << 0x11 | *(uint *)(iVar9 + 0x2380) & 0xff01ffff;
      if (*(u16 *)(param_1 + 0x68) < 100) {
        uVar5 = (unsigned int)*(u16 *)(param_1 + 0x6c);
      }
      else {
        uVar5 = 999;
      }
      *(uint *)(iVar9 + 0x2380) = (uVar5 & 0x3ff) << 7 | *(uint *)(iVar9 + 0x2380) & 0xfffe007f;
      puVar10 = (u32 *)(iVar7 + (unsigned int)uVar6 * 0xa0 + 0x2383);
      puVar8 = (u32 *)(param_1 + 0x6f);
      iVar7 = 0x26;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        uVar2 = *puVar8;
        puVar10[1] = *puVar1;
        puVar10 = puVar10 + 2;
        *puVar10 = uVar2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
LAB_segment_0__8053614c:
  FUN_segment_0__804e45fc(*(u32 *)(iRam00000000 + 0x90));
  return;
}

// === race_RaceFlow_8053617c (0x8053617c) ===
void race_RaceFlow_8053617c
               (int param_1,u32 param_2,u32 param_3,int param_4,u32 param_5,
               int param_6)

{
  u32 *puVar1;
  bool bVar2;
  bool bVar3;
  u32 uVar4;
  u32 *puVar5;
  int iVar6;
  uint uVar7;
  u32 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  u32 local_28 [4];
  u32 local_24;
  int local_20;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    return;
  }
  local_28[0] = 0;
  local_24 = 0;
  FUN_segment_0__80559214(iRam00000000,local_28);
  if (local_20 != *(int *)(param_1 + 0x5c)) {
    return;
  }
  if (*(int *)(param_1 + 0x58) == 2) {
    param_4 = 1;
  }
  else if (*(int *)(param_1 + 0x58) == 1) {
    param_4 = 0;
  }
  iVar6 = *(int *)(iRam00000000 + 0x24ffc) + 0x23308;
  if (*(char *)(param_1 + 0x6e) == 0) {
    iVar6 = iVar6 + param_4 * 0x54;
    *(uint *)(iVar6 + 0x3730) = *(uint *)(iVar6 + 0x3730) & 0x7fffffff;
  }
  else {
    iVar9 = iVar6 + param_4 * 0x54;
    *(uint *)(iVar9 + 0x3730) = *(uint *)(iVar9 + 0x3730) | 0x80000000;
    *(int *)(iVar9 + 0x3734) = local_20;
    uVar7 = 99;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(u16 *)(param_1 + 0x68);
    }
    *(uint *)(iVar9 + 0x3730) = (uVar7 & 0x7f) << 0x18 | *(uint *)(iVar9 + 0x3730) & 0x80ffffff;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(byte *)(param_1 + 0x6a);
    }
    else {
      uVar7 = 0x3b;
    }
    *(uint *)(iVar9 + 0x3730) = (uVar7 & 0x7f) << 0x11 | *(uint *)(iVar9 + 0x3730) & 0xff01ffff;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(u16 *)(param_1 + 0x6c);
    }
    else {
      uVar7 = 999;
    }
    *(uint *)(iVar9 + 0x3730) = (uVar7 & 0x3ff) << 7 | *(uint *)(iVar9 + 0x3730) & 0xfffe007f;
    puVar8 = (u32 *)(iVar6 + param_4 * 0x54 + 0x3737);
    puVar5 = (u32 *)(param_1 + 0x6f);
    iVar6 = 0x26;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar4 = *puVar5;
      puVar8[1] = *puVar1;
      puVar8 = puVar8 + 2;
      *puVar8 = uVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0x58) != 1) goto LAB_segment_0__80536504;
  uVar7 = 0;
  uVar10 = 0;
  uVar12 = 0;
  iVar6 = *(int *)(iRam00000000 + 0x24ffc);
  bVar2 = *(int *)(iVar6 + 0x26a8c) < 0;
  if (bVar2) {
    param_6 = *(int *)(iVar6 + 0x26a90);
  }
  uVar13 = *(uint *)(iVar6 + 0x26a8c);
  bVar3 = (int)uVar13 < 0;
  if (bVar3) {
    uVar7 = uVar13 >> 0x18 & 0x7f;
    uVar10 = uVar13 >> 0x11 & 0x7f;
    uVar12 = uVar13 >> 7 & 0x3ff;
  }
  if ((int)(-(-(-(unsigned int)bVar2 >> 0x1f & (unsigned int)(local_20 == param_6)) >> 0x1f & (unsigned int)bVar3) &
           *(uint *)(iVar6 + 0x26a8c)) >> 0x1f < 0) {
    if (*(char *)(param_1 + 0x6e) == 0) {
      bVar2 = false;
    }
    else if (bVar3) {
      if (*(u16 *)(param_1 + 0x68) < uVar7) {
        bVar2 = true;
      }
      else if (*(u16 *)(param_1 + 0x68) == uVar7) {
        if (*(byte *)(param_1 + 0x6a) < uVar10) {
          bVar2 = true;
        }
        else {
          if ((*(byte *)(param_1 + 0x6a) != uVar10) || (uVar12 <= *(u16 *)(param_1 + 0x6c)))
          goto LAB_segment_0__8053642c;
          bVar2 = true;
        }
      }
      else {
LAB_segment_0__8053642c:
        bVar2 = false;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_segment_0__80536504;
  }
  iVar6 = *(int *)(iRam00000000 + 0x24ffc);
  if (*(char *)(param_1 + 0x6e) == 0) {
    *(uint *)(iVar6 + 0x26a8c) = *(uint *)(iVar6 + 0x26a8c) & 0x7fffffff;
  }
  else {
    puVar11 = (uint *)(iVar6 + 0x26a8c);
    *(uint *)(iVar6 + 0x26a8c) = *(uint *)(iVar6 + 0x26a8c) | 0x80000000;
    *(int *)(iVar6 + 0x26a90) = local_20;
    uVar7 = 99;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(u16 *)(param_1 + 0x68);
    }
    *puVar11 = (uVar7 & 0x7f) << 0x18 | *puVar11 & 0x80ffffff;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(byte *)(param_1 + 0x6a);
    }
    else {
      uVar7 = 0x3b;
    }
    *puVar11 = (uVar7 & 0x7f) << 0x11 | *puVar11 & 0xff01ffff;
    if (*(u16 *)(param_1 + 0x68) < 100) {
      uVar7 = (unsigned int)*(u16 *)(param_1 + 0x6c);
    }
    else {
      uVar7 = 999;
    }
    *puVar11 = (uVar7 & 0x3ff) << 7 | *puVar11 & 0xfffe007f;
    puVar8 = (u32 *)(iVar6 + 0x26a93);
    puVar5 = (u32 *)(param_1 + 0x6f);
    iVar6 = 0x26;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar4 = *puVar5;
      puVar8[1] = *puVar1;
      puVar8 = puVar8 + 2;
      *puVar8 = uVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
LAB_segment_0__80536504:
  FUN_segment_0__804e45fc(*(u32 *)(iRam00000000 + 0x90));
  return;
}

// === race_RaceFlow_8053652c (0x8053652c) ===
void race_RaceFlow_8053652c(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  u32 local_d8 [51];
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805365ac;
        }
      }
      bVar1 = false;
LAB_segment_0__805365ac:
      if (bVar1) goto LAB_segment_0__805365bc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__805365bc:
  ((void(*)(...))(*(void**)(*piVar3 + 100)))(piVar3);
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
  ((void(*)(...))(*(void**)(*piVar3 + 0x68)))(piVar3,0x17e3,local_d8);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
  param_1[0x15] = 6;
  return;
}

// === race_RaceFlow_80536644 (0x80536644) ===
void race_RaceFlow_80536644(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x2c4);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__805366c4;
        }
      }
      bVar1 = false;
LAB_segment_0__805366c4:
      if (bVar1) goto LAB_segment_0__805366d4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805366d4:
  if (param_1[0x11d] == 0) {
    iVar3 = param_1[0x16];
    if (iVar3 - 1U < 2) {
      race_RaceFlow_805347c0(piVar4,param_1[0x17],iVar3,param_1 + 0x18);
    }
    else if (iVar3 == 0) {
      RaceFlow_validate_805348c8(piVar4,param_1[0x17]);
    }
  }
  else if (param_1[0x11d] == 1) {
    iVar3 = param_1[0x16];
    if (iVar3 - 1U < 2) {
      race_RaceFlow_80534c10(piVar4,param_1[0x17],iVar3,param_1 + 0x18);
    }
    else if (iVar3 == 0) {
      RaceFlow_validate_80534d5c(piVar4,param_1[0x17]);
    }
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xaf,0);
  param_1[0x15] = 5;
  return;
}

// === RaceFlow_validate_805367cc (0x805367cc) ===
void RaceFlow_validate_805367cc(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_805367fc (0x805367fc) ===
void RaceFlow_validate_805367fc(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_assertFail_80536854 (0x80536854) ===
void RaceFlow_assertFail_80536854(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RaceFlow_validate_805369cc (0x805369cc) ===
int RaceFlow_validate_805369cc(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0xb10,0xffffffff);
    if (param_1 + 0x8ac != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x8ac,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x658,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x404,0xffffffff);
    FUN_segment_0__804c0aa0(param_1 + 0x1b8,0xffffffff);
    FUN_segment_0__80500540(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_80536a74 (0x80536a74) ===
void race_RaceFlow_80536a74(int param_1)

{
  u32 auStack_38 [48];
  
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0xb10) + 0x10)))(param_1 + 0xb10,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0xb10);
  FUN_segment_0__804ca380(param_1 + 0xb10,2);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x1b8,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x404,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x658,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0x8ac,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x44);
  FUN_segment_0__804ae36c(auStack_38,0,8,0x1b,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  FUN_segment_0__804c0b08(param_1 + 0x1b8,0x21);
  FUN_segment_0__804a9914(param_1 + 0x404,0x32,0x39,0x4a,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x658,0x4e,0x55,0x66,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x8ac,0x6c,0x73,0x78,1,0,1);
  FUN_segment_0__804a9ec4(param_1 + 0x404,param_1 + 0xd34,0);
  FUN_segment_0__804a9ec4(param_1 + 0x658,param_1 + 0xd48,0);
  FUN_segment_0__804a9ec4(param_1 + 0x8ac,param_1 + 0xd5c,0);
  FUN_segment_0__804ca350(param_1 + 0xb10,1,param_1 + 0xd70,0,0);
  FUN_segment_0__804a9eec(param_1 + 0x404,0);
  *(u32 *)(param_1 + 0xd84) = 0xffffffff;
  FUN_segment_0__8041d9ac(uRam00000000);
  return;
}

// === race_RaceFlow_80536c6c (0x80536c6c) ===
void race_RaceFlow_80536c6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  u32 uVar2;
  
  FUN_segment_0__804c0c30(param_1 + 0x1b8,param_2,0);
  iVar1 = *(int *)(param_2 + 0xc4);
  uVar2 = 0;
  if (iVar1 == 5) {
    uVar2 = 0x17af;
  }
  else if (iVar1 < 5) {
    if (iVar1 == 2) {
      uVar2 = 0x17a7;
    }
    else if (iVar1 < 2) {
      if (0 < iVar1) {
        if (param_3 == *(short *)(iRam00000000 + 0x36)) {
          uVar2 = 0x1398;
        }
        else {
          uVar2 = 0x17ad;
        }
      }
    }
    else if (iVar1 < 4) {
      uVar2 = 0x17a6;
    }
    else {
      uVar2 = 0x17a8;
    }
  }
  else if (iVar1 < 0x25) {
    if (6 < iVar1) {
      uVar2 = 0x17ae;
    }
  }
  else if (iVar1 < 0x27) {
    uVar2 = 0x17b0;
  }
  FUN_segment_0__80500a34(param_1 + 0x44,uVar2,0);
  return;
}

// === race_RaceFlow_80536d6c (0x80536d6c) ===
void race_RaceFlow_80536d6c(int *param_1,u32 param_2)

{
  param_1[0x361] = 0;
  FUN_segment_0__804aa384(param_2);
  ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x4e,0);
  return;
}

// === race_RaceFlow_80536dc0 (0x80536dc0) ===
void race_RaceFlow_80536dc0(int *param_1,u32 param_2)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  param_1[0x361] = 1;
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80536e44;
        }
      }
      bVar1 = false;
LAB_segment_0__80536e44:
      if (bVar1) goto LAB_segment_0__80536e54;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80536e54:
  FUN_segment_0__804bfa90(piVar3);
  g_Ram_ptr[0x346] = 5;
  g_Ram_ptr[0x382] = 5;
  g_Ram_ptr[0x3be] = 5;
  g_Ram_ptr[0x3fa] = 5;
  g_Ram_ptr[0x436] = 5;
  g_Ram_ptr[0x472] = 5;
  g_Ram_ptr[0x4ae] = 5;
  g_Ram_ptr[0x4ea] = 5;
  g_Ram_ptr[0x526] = 5;
  g_Ram_ptr[0x562] = 5;
  g_Ram_ptr[0x59e] = 5;
  g_Ram_ptr[0x5d7] = 2;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffe;
  g_Ram_ptr[0x5d9] = 0;
  g_Ram_ptr[0x5d8] = 2;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffd;
  FUN_segment_0__804aa384(param_2);
  ((void(*)(...))(*(void**)(*param_1 + 0x1c)))(param_1,0x32,0);
  return;
}

// === race_RaceFlow_80536fb4 (0x80536fb4) ===
void race_RaceFlow_80536fb4(int param_1,u32 param_2)

{
  *(u32 *)(param_1 + 0xd84) = 2;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === race_RaceFlow_80537010 (0x80537010) ===
void race_RaceFlow_80537010(void)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053708c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053708c:
      if (bVar1) goto LAB_segment_0__8053709c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8053709c:
  FUN_segment_0__804bfa90(piVar3);
  g_Ram_ptr[0x346] = 5;
  g_Ram_ptr[0x382] = 5;
  g_Ram_ptr[0x3be] = 5;
  g_Ram_ptr[0x3fa] = 5;
  g_Ram_ptr[0x436] = 5;
  g_Ram_ptr[0x472] = 5;
  g_Ram_ptr[0x4ae] = 5;
  g_Ram_ptr[0x4ea] = 5;
  g_Ram_ptr[0x526] = 5;
  g_Ram_ptr[0x562] = 5;
  g_Ram_ptr[0x59e] = 5;
  g_Ram_ptr[0x5d7] = 2;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffe;
  g_Ram_ptr[0x5d9] = 0;
  g_Ram_ptr[0x5d8] = 2;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffd;
  return;
}

// === race_RaceFlow_805371e0 (0x805371e0) ===
u32 * race_RaceFlow_805371e0(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  FUN_segment_0__804c8134(param_1 + 0x16);
  FUN_segment_0__8040bcb4(param_1 + 0x1a);
  return param_1;
}

// === RaceFlow_validate_80537264 (0x80537264) ===
int RaceFlow_validate_80537264(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_805372cc (0x805372cc) ===
void race_RaceFlow_805372cc(int param_1)

{
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x58) + 0x10)))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === race_RaceFlow_80537354 (0x80537354) ===
void race_RaceFlow_80537354(int param_1,u32 param_2)

{
  *(u32 *)(param_1 + 0x2870) = param_2;
  return;
}

// === RaceFlow_validate_8053735c (0x8053735c) ===
void RaceFlow_validate_8053735c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  u32 *puVar4;
  int *piVar5;
  double dVar6;
  u32 auStack_1c8 [104];
  u32 auStack_160 [92];
  int local_104;
  char local_f0 [104];
  u32 auStack_88 [80];
  int local_38;
  int local_1c;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2874);
  if (iVar3 != 0) {
    if (iVar3 == 4) {
      iVar3 = FUN_segment_0__805558e0(g_Ram_ptr);
      if (iVar3 == 1) {
        return;
      }
      iVar3 = FUN_segment_0__805558e8(g_Ram_ptr);
      if (1 < iVar3 - 3U) {
        if (iVar3 == 1) {
          FUN_segment_0__8040bfc4(local_f0,param_1 + 0x68);
          bVar1 = false;
          if ((local_f0[0] != 0) && (local_1c != 0)) {
            bVar1 = true;
          }
          if ((!bVar1) || (local_38 != *(int *)(g_Ram_ptr[0x26] + 0x3c8))) {
            piVar5 = *(int **)(*g_Ram_ptr + 0x148);
            if (piVar5 != (int *)0) {
              if (piVar5 != (int *)0) {
                for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
                    puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
                  if (puVar4 == (u32 *)0) {
                    bVar1 = true;
                    goto LAB_segment_0__8053768c;
                  }
                }
                bVar1 = false;
LAB_segment_0__8053768c:
                if (bVar1) goto LAB_segment_0__8053769c;
              }
              piVar5 = (int *)0;
            }
            else {
              piVar5 = (int *)0;
            }
LAB_segment_0__8053769c:
            FUN_segment_0__804a9164(piVar5);
            *(u32 *)(param_1 + 0x2874) = 5;
                    /* WARNING: Subroutine does not return */
            FUN_segment_0__80443430(auStack_88,0,0xc,5);
          }
          if (*(int *)(g_Ram_ptr[0x26] + 0x3c4) - 2U < 2) {
            RaceFlow_validate_8053a328(param_1);
          }
          piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
          if (piVar5 != (int *)0) {
            if (piVar5 != (int *)0) {
              for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
                  puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
                if (puVar4 == (u32 *)0) {
                  bVar1 = true;
                  goto LAB_segment_0__805375bc;
                }
              }
              bVar1 = false;
LAB_segment_0__805375bc:
              if (bVar1) goto LAB_segment_0__805375cc;
            }
            piVar5 = (int *)0;
          }
          else {
            piVar5 = (int *)0;
          }
LAB_segment_0__805375cc:
          FUN_segment_0__8040bfc4(auStack_1c8,param_1 + 0x68);
          if (local_104 == 5) {
            FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
          }
          FUN_segment_0__804bfb58(piVar5,param_1 + 0x68,0);
          *(u32 *)(param_1 + 0x2874) = 6;
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(auStack_160,0,0xc,5);
        }
        if (iVar3 != 5) {
          return;
        }
        piVar5 = *(int **)(*g_Ram_ptr + 0x148);
        if (piVar5 != (int *)0) {
          if (piVar5 != (int *)0) {
            for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
                puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
              if (puVar4 == (u32 *)0) {
                bVar1 = true;
                goto LAB_segment_0__805377b4;
              }
            }
            bVar1 = false;
LAB_segment_0__805377b4:
            if (bVar1) goto LAB_segment_0__805377c4;
          }
          piVar5 = (int *)0;
        }
        else {
          piVar5 = (int *)0;
        }
LAB_segment_0__805377c4:
        FUN_segment_0__804a9164(piVar5);
        *(u32 *)(param_1 + 0x2874) = 5;
        return;
      }
      piVar5 = *(int **)(*g_Ram_ptr + 0x148);
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__8053772c;
            }
          }
          bVar1 = false;
LAB_segment_0__8053772c:
          if (bVar1) goto LAB_segment_0__8053773c;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__8053773c:
      FUN_segment_0__804a9164(piVar5);
      *(u32 *)(param_1 + 0x2874) = 5;
      return;
    }
    if (iVar3 != 6) {
      if (iVar3 != 9) {
        if (iVar3 != 10) {
          return;
        }
        iVar3 = FUN_segment_0__805558e0(g_Ram_ptr);
        if (iVar3 == 1) {
          return;
        }
        iVar3 = FUN_segment_0__805558e8(g_Ram_ptr);
        if (iVar3 == 1) {
          *(u32 *)(param_1 + 0x2874) = 0xb;
        }
        else if (iVar3 == 6) {
          *(u32 *)(param_1 + 0x2874) = 0xc;
        }
        else {
          dVar6 = (double)(float)g_Ram_ptr;
          *(u32 *)(param_1 + 0x2878) = 0xa8;
          FUN_segment_0__804d1c48(dVar6,param_1,1);
        }
        piVar5 = *(int **)(*g_Ram_ptr + 0x148);
        if (piVar5 != (int *)0) {
          if (piVar5 != (int *)0) {
            for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
                puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
              if (puVar4 == (u32 *)0) {
                bVar1 = true;
                goto LAB_segment_0__80537af0;
              }
            }
            bVar1 = false;
LAB_segment_0__80537af0:
            if (bVar1) goto LAB_segment_0__80537b00;
          }
          piVar5 = (int *)0;
        }
        else {
          piVar5 = (int *)0;
        }
LAB_segment_0__80537b00:
        FUN_segment_0__804a9164(piVar5);
        return;
      }
      piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__8053793c;
            }
          }
          bVar1 = false;
LAB_segment_0__8053793c:
          if (bVar1) goto LAB_segment_0__8053794c;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__8053794c:
      piVar2 = g_Ram_ptr;
      if (piVar5[0x25] != 0) {
        return;
      }
      iVar3 = FUN_segment_0__8040bd4c(g_Ram_ptr[6]);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = piVar2[6];
      }
      iVar3 = FUN_segment_0__8055a6d0(g_Ram_ptr,param_1 + 0x2868,iVar3);
      if (iVar3 != 0) {
        *(u32 *)(param_1 + 0x2874) = 10;
        return;
      }
      piVar5 = *(int **)(*g_Ram_ptr + 0x148);
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__80537a04;
            }
          }
          bVar1 = false;
LAB_segment_0__80537a04:
          if (bVar1) goto LAB_segment_0__80537a14;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__80537a14:
      FUN_segment_0__804a9164(piVar5);
      *(u32 *)(param_1 + 0x2874) = 0xc;
      return;
    }
    piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053783c;
          }
        }
        bVar1 = false;
LAB_segment_0__8053783c:
        if (bVar1) goto LAB_segment_0__8053784c;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__8053784c:
    if (piVar5[0x25] != 0) {
      return;
    }
    piVar5 = *(int **)(*g_Ram_ptr + 0x148);
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__805378bc;
          }
        }
        bVar1 = false;
LAB_segment_0__805378bc:
        if (bVar1) goto LAB_segment_0__805378cc;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__805378cc:
    FUN_segment_0__804a9164(piVar5);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80537418;
        }
      }
      bVar1 = false;
LAB_segment_0__80537418:
      if (bVar1) goto LAB_segment_0__80537428;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80537428:
  if (piVar5[0x25] != 0) {
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80537498;
        }
      }
      bVar1 = false;
LAB_segment_0__80537498:
      if (bVar1) goto LAB_segment_0__805374a8;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__805374a8:
  FUN_segment_0__804a9164(piVar5);
  return;
}

// === RaceFlow_assertFail_80537b24 (0x80537b24) ===
void RaceFlow_assertFail_80537b24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === race_RaceFlow_8053851c (0x8053851c) ===
void race_RaceFlow_8053851c(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  u16 uVar6;
  uint uVar3;
  u32 uVar4;
  int *piVar5;
  int iVar7;
  int *piVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int unaff_r26;
  int iVar13;
  uint uVar14;
  int *piVar15;
  u16 local_2e4;
  byte local_2e2;
  u16 local_2e0;
  u32 auStack_2dc [76];
  u32 local_290;
  u16 local_28c;
  byte local_28a;
  u16 local_288;
  byte local_286;
  uint local_278;
  uint local_274;
  uint local_270;
  int local_254;
  int local_230;
  u32 auStack_1b4 [108];
  u32 local_148;
  u32 auStack_f0 [36];
  int local_cc;
  
  piVar15 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar15 != (int *)0) {
    unaff_r26 = 0;
    if (piVar15 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
          puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar9 = true;
          goto LAB_segment_0__80538594;
        }
      }
      bVar9 = false;
LAB_segment_0__80538594:
      if (bVar9) goto LAB_segment_0__805385a4;
    }
    piVar15 = (int *)0;
  }
  else {
    piVar15 = (int *)0;
  }
LAB_segment_0__805385a4:
  if (piVar15[0x25] != 0) {
    param_1[0xa1d] = 0;
    piVar15 = *(int **)(*g_Ram_ptr + 0x148);
    if (piVar15 != (int *)0) {
      if (piVar15 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar9 = true;
            goto LAB_segment_0__8053861c;
          }
        }
        bVar9 = false;
LAB_segment_0__8053861c:
        if (bVar9) goto LAB_segment_0__8053862c;
      }
      piVar15 = (int *)0;
    }
    else {
      piVar15 = (int *)0;
    }
LAB_segment_0__8053862c:
    ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
    ((void(*)(...))(*(void**)(*piVar15 + 0x68)))(piVar15,0x157c,0);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x50,0);
    return;
  }
  iVar7 = g_Ram_ptr[0x26];
  uVar14 = *(uint *)(iVar7 + 0x3cc);
  iVar13 = *(int *)(iVar7 + 0x3c8);
  iVar12 = *(int *)(iVar7 + 0x3c4);
  iVar7 = FUN_segment_0__804bf900(piVar15,iVar12,uVar14,iVar13);
  piVar8 = g_Ram_ptr;
  if (iVar12 == 1) {
    if (iVar7 == 0) {
      if (uVar14 != (int)*(short *)((int)g_Ram_ptr + 0x36)) {
        piVar15 = *(int **)(*g_Ram_ptr + 0x14c);
        if (piVar15 != (int *)0) {
          if (piVar15 != (int *)0) {
            for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
              if (puVar2 == (u32 *)0) {
                bVar9 = true;
                goto LAB_segment_0__805388bc;
              }
            }
            bVar9 = false;
LAB_segment_0__805388bc:
            if (bVar9) goto LAB_segment_0__805388cc;
          }
          piVar15 = (int *)0;
        }
        else {
          piVar15 = (int *)0;
        }
LAB_segment_0__805388cc:
        ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
        FUN_segment_0__804b4ecc(auStack_1b4);
        local_148 = (u32)uVar14;
        ((void(*)(...))(*(void**)(*piVar15 + 0x68)))(piVar15,0x17d5,auStack_1b4);
        ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
        param_1[0xa1d] = 0xe;
        return;
      }
      piVar15 = *(int **)(*g_Ram_ptr + 0x150);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__805387d8;
            }
          }
          bVar9 = false;
LAB_segment_0__805387d8:
          if (bVar9) goto LAB_segment_0__805387e8;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__805387e8:
      ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
      FUN_segment_0__804b4ecc(auStack_f0);
      local_cc = iVar13 + 0x2490;
      FUN_segment_0__804ad8bc(piVar15,0x17d4,auStack_f0);
      FUN_segment_0__804ad8c4(piVar15,0x177a,0);
      piVar15[0x208] = (int)(param_1 + 0x11);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
      param_1[0xa1d] = 0xd;
      return;
    }
    piVar15 = *(int **)(*g_Ram_ptr + 700);
    if (piVar15 != (int *)0) {
      if (piVar15 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar9 = true;
            goto LAB_segment_0__8053871c;
          }
        }
        bVar9 = false;
LAB_segment_0__8053871c:
        if (bVar9) goto LAB_segment_0__8053872c;
      }
      piVar15 = (int *)0;
    }
    else {
      piVar15 = (int *)0;
    }
LAB_segment_0__8053872c:
    race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
    param_1[0xa1d] = 7;
    return;
  }
  if (1 < iVar12 - 2U) {
    if (iVar12 - 7U < 0x1e) {
      if (iVar7 == 0) {
        FUN_segment_0__804b4ecc(&local_278);
        local_254 = iVar13 + 0x2490;
        local_230 = param_1[0xa1c];
        local_290 = 0;
        local_28c = 0;
        local_28a = 0;
        local_288 = 0;
        local_286 = 0;
        uVar4 = FUN_segment_0__804b9814(*(u32 *)(*g_Ram_ptr + 0x404),iVar12 + -7);
        FUN_segment_0__804093ac(uVar4,auStack_2dc,iVar13);
        if (local_286 != 0) {
          uVar14 = (unsigned int)local_28c;
          local_278 = 99;
          if (uVar14 < 100) {
            local_278 = uVar14;
          }
          local_278 = local_278 & 0xff;
          if (uVar14 < 100) {
            local_274 = (unsigned int)local_28a;
            local_270 = (unsigned int)local_288;
          }
          else {
            local_274 = 0x3b;
            local_270 = 999;
          }
        }
        iVar7 = FUN_segment_0__804bf900(piVar15,1,(int)*(short *)((int)g_Ram_ptr + 0x36),iVar13)
        ;
        if (iVar7 == 0) {
          piVar15 = *(int **)(*g_Ram_ptr + 0x14c);
          if (piVar15 != (int *)0) {
            if (piVar15 != (int *)0) {
              for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                  puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
                if (puVar2 == (u32 *)0) {
                  bVar9 = true;
                  goto LAB_segment_0__805390c8;
                }
              }
              bVar9 = false;
LAB_segment_0__805390c8:
              if (bVar9) goto LAB_segment_0__805390d8;
            }
            piVar15 = (int *)0;
          }
          else {
            piVar15 = (int *)0;
          }
LAB_segment_0__805390d8:
          ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
          (**(code **)(*piVar15 + 0x68))
                    (piVar15,0x189d - ((int)-(unsigned int)local_286 >> 0x1f),&local_278);
          ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
          param_1[0xa1d] = 0xe;
          return;
        }
        piVar15 = *(int **)(*g_Ram_ptr + 0x150);
        if (piVar15 != (int *)0) {
          if (piVar15 != (int *)0) {
            for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
              if (puVar2 == (u32 *)0) {
                bVar9 = true;
                goto LAB_segment_0__80538fe0;
              }
            }
            bVar9 = false;
LAB_segment_0__80538fe0:
            if (bVar9) goto LAB_segment_0__80538ff0;
          }
          piVar15 = (int *)0;
        }
        else {
          piVar15 = (int *)0;
        }
LAB_segment_0__80538ff0:
        ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
        FUN_segment_0__804ad8bc(piVar15,0x189f - ((int)-(unsigned int)local_286 >> 0x1f),&local_278);
        FUN_segment_0__804ad8c4(piVar15,0x189c,0);
        piVar15[0x208] = 0;
        ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
        param_1[0xa1d] = 8;
        return;
      }
      piVar15 = *(int **)(*g_Ram_ptr + 700);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__80538e60;
            }
          }
          bVar9 = false;
LAB_segment_0__80538e60:
          if (bVar9) goto LAB_segment_0__80538e70;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__80538e70:
      race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
      param_1[0xa1d] = 7;
      return;
    }
    if (iVar12 != 4) {
      if (iVar12 == 5) {
        piVar5 = (int *)FUN_segment_0__8055946c(g_Ram_ptr);
        iVar12 = *piVar5;
        piVar10 = (int *)0;
        iVar11 = 0;
        piVar8 = piVar5;
        if (0 < iVar12) {
          do {
            if (iVar13 == piVar8[1]) {
              piVar10 = piVar5 + iVar11 * 0x1c + 1;
              break;
            }
            piVar8 = piVar8 + 0x1c;
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        if (iVar7 == 0) {
          iVar7 = FUN_segment_0__804bfae4(piVar15);
          if (iVar7 == 0) {
            iVar7 = FUN_segment_0__805469b4(g_Ram_ptr);
            if (iVar7 != 0) {
              race_RaceFlow_80539d54(param_1);
              return;
            }
            piVar15 = *(int **)(*g_Ram_ptr + 0x150);
            if (piVar15 != (int *)0) {
              if (piVar15 != (int *)0) {
                for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                    puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
                  if (puVar2 == (u32 *)0) {
                    bVar9 = true;
                    goto LAB_segment_0__80539908;
                  }
                }
                bVar9 = false;
LAB_segment_0__80539908:
                if (bVar9) goto LAB_segment_0__80539918;
              }
              piVar15 = (int *)0;
            }
            else {
              piVar15 = (int *)0;
            }
LAB_segment_0__80539918:
            ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
            FUN_segment_0__804ad8bc(piVar15,0x17e8,0);
            FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
            piVar15[0x208] = 0;
            ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
            param_1[0xa1d] = 2;
            return;
          }
          piVar15 = *(int **)(*g_Ram_ptr + 0x14c);
          if (piVar15 != (int *)0) {
            if (piVar15 != (int *)0) {
              for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                  puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
                if (puVar2 == (u32 *)0) {
                  bVar9 = true;
                  goto LAB_segment_0__8053981c;
                }
              }
              bVar9 = false;
LAB_segment_0__8053981c:
              if (bVar9) goto LAB_segment_0__8053982c;
            }
            piVar15 = (int *)0;
          }
          else {
            piVar15 = (int *)0;
          }
LAB_segment_0__8053982c:
          ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
          ((void(*)(...))(*(void**)(*piVar15 + 0x68)))(piVar15,0x17df,0);
          ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
          param_1[0xa1d] = 0xf;
          return;
        }
        if ((*(char *)((int)piVar10 + 0xe) == 0) || (*(char *)(iVar7 + 0xae) == 0)) {
          bVar9 = false;
        }
        else {
          bVar9 = false;
          if (((*(short *)(iVar7 + 0xac) == *(short *)(piVar10 + 3)) &&
              (*(char *)(iVar7 + 0xaa) == *(char *)((int)piVar10 + 10))) &&
             (*(short *)(iVar7 + 0xa8) == *(short *)(piVar10 + 2))) {
            bVar9 = true;
          }
        }
        if (!bVar9) {
          piVar15 = *(int **)(*g_Ram_ptr + 0x150);
          if (piVar15 != (int *)0) {
            if (piVar15 != (int *)0) {
              for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                  puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
                if (puVar2 == (u32 *)0) {
                  bVar9 = true;
                  goto LAB_segment_0__80539734;
                }
              }
              bVar9 = false;
LAB_segment_0__80539734:
              if (bVar9) goto LAB_segment_0__80539744;
            }
            piVar15 = (int *)0;
          }
          else {
            piVar15 = (int *)0;
          }
LAB_segment_0__80539744:
          ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
          FUN_segment_0__804ad8bc(piVar15,0x17eb,0);
          FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
          piVar15[0x208] = 0;
          ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
          param_1[0xa1d] = 1;
          return;
        }
        piVar15 = *(int **)(*g_Ram_ptr + 700);
        if (piVar15 != (int *)0) {
          if (piVar15 != (int *)0) {
            for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
              if (puVar2 == (u32 *)0) {
                bVar9 = true;
                goto LAB_segment_0__80539688;
              }
            }
            bVar9 = false;
LAB_segment_0__80539688:
            if (bVar9) goto LAB_segment_0__80539698;
          }
          piVar15 = (int *)0;
        }
        else {
          piVar15 = (int *)0;
        }
LAB_segment_0__80539698:
        race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
        ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
        param_1[0xa1d] = 7;
        return;
      }
      if (1 < iVar12 - 0x25U) {
        return;
      }
      piVar15 = *(int **)(*g_Ram_ptr + 700);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__805399e8;
            }
          }
          bVar9 = false;
LAB_segment_0__805399e8:
          if (bVar9) goto LAB_segment_0__805399f8;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__805399f8:
      race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
      param_1[0xa1d] = 7;
      return;
    }
    if (iVar7 == 0) {
      iVar7 = FUN_segment_0__804bfae4(piVar15);
      if (iVar7 == 0) {
        iVar7 = FUN_segment_0__805469b4(g_Ram_ptr);
        if (iVar7 != 0) {
          race_RaceFlow_80539d54(param_1);
          return;
        }
        piVar15 = *(int **)(*g_Ram_ptr + 0x150);
        if (piVar15 != (int *)0) {
          if (piVar15 != (int *)0) {
            for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
                puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
              if (puVar2 == (u32 *)0) {
                bVar9 = true;
                goto LAB_segment_0__805394f0;
              }
            }
            bVar9 = false;
LAB_segment_0__805394f0:
            if (bVar9) goto LAB_segment_0__80539500;
          }
          piVar15 = (int *)0;
        }
        else {
          piVar15 = (int *)0;
        }
LAB_segment_0__80539500:
        ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
        FUN_segment_0__804ad8bc(piVar15,0x17e8,0);
        FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
        piVar15[0x208] = 0;
        ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
        param_1[0xa1d] = 2;
        return;
      }
      piVar15 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__80539408;
            }
          }
          bVar9 = false;
LAB_segment_0__80539408:
          if (bVar9) goto LAB_segment_0__80539418;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__80539418:
      ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
      ((void(*)(...))(*(void**)(*piVar15 + 0x68)))(piVar15,0x17df,0);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0xa1d] = 0xf;
      return;
    }
    if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
      piVar15 = (int *)0;
    }
    else {
      piVar15 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar12 = FUN_segment_0__80437994(piVar15,0,iVar13);
    if (*(char *)(iVar12 + 0x56) == 0) {
      bVar9 = false;
    }
    else if (*(char *)(iVar7 + 0xae) == 0) {
      bVar9 = true;
    }
    else if (*(u16 *)(iVar12 + 0x50) < *(u16 *)(iVar7 + 0xa8)) {
      bVar9 = true;
    }
    else if (*(u16 *)(iVar12 + 0x50) == *(u16 *)(iVar7 + 0xa8)) {
      if (*(byte *)(iVar12 + 0x52) < *(byte *)(iVar7 + 0xaa)) {
        bVar9 = true;
      }
      else {
        if ((*(byte *)(iVar12 + 0x52) != *(byte *)(iVar7 + 0xaa)) ||
           (*(u16 *)(iVar7 + 0xac) < *(u16 *)(iVar12 + 0x54))) goto LAB_segment_0__80539208;
        bVar9 = true;
      }
    }
    else {
LAB_segment_0__80539208:
      bVar9 = false;
    }
    if (!bVar9) {
      piVar15 = *(int **)(*g_Ram_ptr + 700);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__80539350;
            }
          }
          bVar9 = false;
LAB_segment_0__80539350:
          if (bVar9) goto LAB_segment_0__80539360;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__80539360:
      race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
      param_1[0xa1d] = 7;
      return;
    }
    piVar15 = *(int **)(*g_Ram_ptr + 0x150);
    if (piVar15 != (int *)0) {
      if (piVar15 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar9 = true;
            goto LAB_segment_0__80539278;
          }
        }
        bVar9 = false;
LAB_segment_0__80539278:
        if (bVar9) goto LAB_segment_0__80539288;
      }
      piVar15 = (int *)0;
    }
    else {
      piVar15 = (int *)0;
    }
LAB_segment_0__80539288:
    ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
    FUN_segment_0__804ad8bc(piVar15,0x17eb,0);
    FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
    piVar15[0x208] = 0;
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
    param_1[0xa1d] = 1;
    return;
  }
  if (iVar7 == 0) {
    iVar7 = FUN_segment_0__804bfae4(piVar15);
    if (iVar7 == 0) {
      iVar7 = FUN_segment_0__805469b4(g_Ram_ptr);
      if (iVar7 != 0) {
        race_RaceFlow_80539d54(param_1);
        return;
      }
      piVar15 = *(int **)(*g_Ram_ptr + 0x150);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__80538d78;
            }
          }
          bVar9 = false;
LAB_segment_0__80538d78:
          if (bVar9) goto LAB_segment_0__80538d88;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__80538d88:
      ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
      FUN_segment_0__804ad8bc(piVar15,0x17e8,0);
      FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
      piVar15[0x208] = 0;
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
      param_1[0xa1d] = 2;
      return;
    }
    piVar15 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar15 != (int *)0) {
      if (piVar15 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar9 = true;
            goto LAB_segment_0__80538c90;
          }
        }
        bVar9 = false;
LAB_segment_0__80538c90:
        if (bVar9) goto LAB_segment_0__80538ca0;
      }
      piVar15 = (int *)0;
    }
    else {
      piVar15 = (int *)0;
    }
LAB_segment_0__80538ca0:
    ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
    ((void(*)(...))(*(void**)(*piVar15 + 0x68)))(piVar15,0x17df,0);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
    param_1[0xa1d] = 0xf;
    return;
  }
  if (*(int *)(g_Ram_ptr[0x26] + 0x3c4) == 2) {
    unaff_r26 = 1;
  }
  else if (*(int *)(g_Ram_ptr[0x26] + 0x3c4) == 3) {
    unaff_r26 = 0;
  }
  bVar9 = false;
  local_2e4 = 0;
  local_2e2 = 0;
  local_2e0 = 0;
  uVar6 = FUN_segment_0__80440ed8(iVar13);
  if ((short)uVar6 < 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(uint *)(piVar8[0x93ff] + (unsigned int)uVar6 * 0xa0 + 0x25638 + unaff_r26 * 0x50);
    if ((int)uVar3 < 0) {
      local_2e0 = (u16)(uVar3 >> 7) & 0x3ff;
      local_2e2 = (u8)(uVar3 >> 0x11) & 0x7f;
      local_2e4 = (u8)(uVar3 >> 0x18) & 0x7f;
      bVar9 = true;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    if (bVar9) {
      if (*(char *)(iVar7 + 0xae) == 0) {
        bVar9 = true;
      }
      else if (local_2e4 < *(u16 *)(iVar7 + 0xa8)) {
        bVar9 = true;
      }
      else if (local_2e4 == *(u16 *)(iVar7 + 0xa8)) {
        if (local_2e2 < *(byte *)(iVar7 + 0xaa)) {
          bVar9 = true;
        }
        else {
          if ((local_2e2 != *(byte *)(iVar7 + 0xaa)) || (*(u16 *)(iVar7 + 0xac) <= local_2e0))
          goto LAB_segment_0__80538a90;
          bVar9 = true;
        }
      }
      else {
LAB_segment_0__80538a90:
        bVar9 = false;
      }
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) {
      piVar15 = *(int **)(*g_Ram_ptr + 700);
      if (piVar15 != (int *)0) {
        if (piVar15 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar9 = true;
              goto LAB_segment_0__80538bd8;
            }
          }
          bVar9 = false;
LAB_segment_0__80538bd8:
          if (bVar9) goto LAB_segment_0__80538be8;
        }
        piVar15 = (int *)0;
      }
      else {
        piVar15 = (int *)0;
      }
LAB_segment_0__80538be8:
      race_RaceFlow_80536c6c(piVar15,iVar7,uVar14 & 0xff);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,0);
      param_1[0xa1d] = 7;
      return;
    }
  }
  piVar15 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar15 != (int *)0) {
    if (piVar15 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar15 + 0x60)))(piVar15);
          puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar9 = true;
          goto LAB_segment_0__80538b00;
        }
      }
      bVar9 = false;
LAB_segment_0__80538b00:
      if (bVar9) goto LAB_segment_0__80538b10;
    }
    piVar15 = (int *)0;
  }
  else {
    piVar15 = (int *)0;
  }
LAB_segment_0__80538b10:
  ((void(*)(...))(*(void**)(*piVar15 + 100)))(piVar15);
  FUN_segment_0__804ad8bc(piVar15,0x17eb,0);
  FUN_segment_0__804ad8c4(piVar15,0x17e9,0);
  piVar15[0x208] = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
  param_1[0xa1d] = 1;
  return;
}

// === race_RaceFlow_80539a40 (0x80539a40) ===
void race_RaceFlow_80539a40(int *param_1,u32 param_2,u32 param_3,u32 param_4)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 700);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80539ac4;
        }
      }
      bVar1 = false;
LAB_segment_0__80539ac4:
      if (bVar1) goto LAB_segment_0__80539ad4;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80539ad4:
  race_RaceFlow_80536c6c(piVar3,param_2,param_3);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0xad,param_4);
  param_1[0xa1d] = 7;
  return;
}

// === race_RaceFlow_80539b1c (0x80539b1c) ===
void race_RaceFlow_80539b1c(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80539b9c;
        }
      }
      bVar1 = false;
LAB_segment_0__80539b9c:
      if (bVar1) goto LAB_segment_0__80539bac;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80539bac:
  ((void(*)(...))(*(void**)(*piVar3 + 100)))(piVar3);
  FUN_segment_0__804ad8bc(piVar3,0x17eb,0);
  FUN_segment_0__804ad8c4(piVar3,0x17e9,0);
  piVar3[0x208] = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
  param_1[0xa1d] = 1;
  return;
}

// === race_RaceFlow_80539c28 (0x80539c28) ===
void race_RaceFlow_80539c28(int *param_1)

{
  bool bVar1;
  int iVar2;
  u32 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__805469b4(g_Ram_ptr);
  if (iVar2 != 0) {
    race_RaceFlow_80539d54(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar3 != (u32 *)0
          ; puVar3 = (u32 *)*puVar3) {
        if (puVar3 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__80539cc8;
        }
      }
      bVar1 = false;
LAB_segment_0__80539cc8:
      if (bVar1) goto LAB_segment_0__80539cd8;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80539cd8:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__804ad8bc(piVar4,0x17e8,0);
  FUN_segment_0__804ad8c4(piVar4,0x17e9,0);
  piVar4[0x208] = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x52,0);
  param_1[0xa1d] = 2;
  return;
}

// === race_RaceFlow_80539d54 (0x80539d54) ===
void race_RaceFlow_80539d54(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  u32 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  u32 auStack_338 [12];
  u32 local_32c [49];
  u32 local_268 [49];
  u32 local_1a4 [49];
  u32 local_e0 [53];
  
  iVar2 = *(int *)(g_Ram_ptr[0x26] + 0x3c4);
  iVar6 = *(int *)(g_Ram_ptr[0x26] + 0x3c8);
  if (iVar2 == 2) {
    iVar2 = FUN_segment_0__805607c8(g_Ram_ptr,iVar6,1,param_1 + 0x1a);
    if (iVar2 == 0) {
      piVar7 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar7 != (int *)0) {
        if (piVar7 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar7 + 0x60)))(piVar7);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__80539e28;
            }
          }
          bVar1 = false;
LAB_segment_0__80539e28:
          if (bVar1) goto LAB_segment_0__80539e38;
        }
        piVar7 = (int *)0;
      }
      else {
        piVar7 = (int *)0;
      }
LAB_segment_0__80539e38:
      FUN_segment_0__804b4ecc(local_e0);
      local_e0[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      ((void(*)(...))(*(void**)(*piVar7 + 100)))(piVar7);
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,0x17e0,local_e0);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0xa1d] = 0x10;
      return;
    }
  }
  else if (iVar2 == 3) {
    iVar2 = FUN_segment_0__805607c8(g_Ram_ptr,iVar6,0,param_1 + 0x1a);
    if (iVar2 == 0) {
      piVar7 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar7 != (int *)0) {
        if (piVar7 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar7 + 0x60)))(piVar7);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__80539f28;
            }
          }
          bVar1 = false;
LAB_segment_0__80539f28:
          if (bVar1) goto LAB_segment_0__80539f38;
        }
        piVar7 = (int *)0;
      }
      else {
        piVar7 = (int *)0;
      }
LAB_segment_0__80539f38:
      FUN_segment_0__804b4ecc(local_1a4);
      local_1a4[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      ((void(*)(...))(*(void**)(*piVar7 + 100)))(piVar7);
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,0x17e0,local_1a4);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0xa1d] = 0x10;
      return;
    }
  }
  else if (iVar2 == 4) {
    if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
      piVar7 = (int *)0;
    }
    else {
      piVar7 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar2 = FUN_segment_0__80437994(piVar7,0,iVar6);
    FUN_segment_0__80423bdc((double)(float)g_Ram_ptr,auStack_338,iVar2 + 0x4c);
    iVar2 = FUN_segment_0__80560a90(g_Ram_ptr,iVar6,auStack_338,param_1 + 0x1a);
    if (iVar2 == 0) {
      piVar7 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar7 != (int *)0) {
        if (piVar7 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar7 + 0x60)))(piVar7);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__8053a084;
            }
          }
          bVar1 = false;
LAB_segment_0__8053a084:
          if (bVar1) goto LAB_segment_0__8053a094;
        }
        piVar7 = (int *)0;
      }
      else {
        piVar7 = (int *)0;
      }
LAB_segment_0__8053a094:
      FUN_segment_0__804b4ecc(local_268);
      local_268[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      ((void(*)(...))(*(void**)(*piVar7 + 100)))(piVar7);
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,0x17e0,local_268);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0xa1d] = 0x10;
      return;
    }
  }
  else if (iVar2 == 5) {
    piVar7 = (int *)FUN_segment_0__8055946c(g_Ram_ptr);
    iVar3 = *piVar7;
    iVar2 = -1;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar5;
        if (iVar6 == piVar7[1]) break;
        piVar7 = piVar7 + 0x1c;
        iVar5 = iVar2 + 1;
        iVar3 = iVar3 + -1;
        iVar2 = -1;
      } while (iVar3 != 0);
    }
    iVar2 = FUN_segment_0__8056093c(g_Ram_ptr,iVar2,param_1 + 0x1a);
    if (iVar2 == 0) {
      piVar7 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar7 != (int *)0) {
        if (piVar7 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar7 + 0x60)))(piVar7);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__8053a1c4;
            }
          }
          bVar1 = false;
LAB_segment_0__8053a1c4:
          if (bVar1) goto LAB_segment_0__8053a1d4;
        }
        piVar7 = (int *)0;
      }
      else {
        piVar7 = (int *)0;
      }
LAB_segment_0__8053a1d4:
      FUN_segment_0__804b4ecc(local_32c);
      local_32c[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      ((void(*)(...))(*(void**)(*piVar7 + 100)))(piVar7);
      ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,0x17e0,local_32c);
      ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
      param_1[0xa1d] = 0x10;
      return;
    }
  }
  param_1[0xa1d] = 4;
  piVar7 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar7 != (int *)0) {
    if (piVar7 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar7 + 0x60)))(piVar7); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053a2b0;
        }
      }
      bVar1 = false;
LAB_segment_0__8053a2b0:
      if (bVar1) goto LAB_segment_0__8053a2c0;
    }
    piVar7 = (int *)0;
  }
  else {
    piVar7 = (int *)0;
  }
LAB_segment_0__8053a2c0:
  ((void(*)(...))(*(void**)(*piVar7 + 100)))(piVar7);
  ((void(*)(...))(*(void**)(*piVar7 + 0x68)))(piVar7,0x17de,0);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x50,0);
  return;
}

// === RaceFlow_validate_8053a328 (0x8053a328) ===
void RaceFlow_validate_8053a328(int param_1)

{
  u32 *puVar1;
  u32 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  u16 uVar7;
  u32 *puVar8;
  int iVar9;
  u32 *puVar10;
  int unaff_r29;
  u16 local_f4;
  byte local_f2;
  u16 local_f0;
  u32 auStack_e8 [23];
  u32 uStack_d1;
  u32 local_d0 [80];
  u32 auStack_80 [64];
  u16 local_40;
  byte local_3e;
  u16 local_3c;
  char local_3a;
  u32 local_30;
  
  iVar5 = *(int *)(*(int *)(iRam00000000 + 0x98) + 0x3c4);
  if (iVar5 == 2) {
    unaff_r29 = 1;
  }
  else if (iVar5 == 3) {
    unaff_r29 = 0;
  }
  FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x68);
  iVar5 = iRam00000000;
  uVar7 = FUN_segment_0__80440ed8(local_30);
  if (-1 < (short)uVar7) {
    iVar5 = *(int *)(iVar5 + 0x24ffc) + 0x23308;
    if (local_3a == 0) {
      iVar5 = iVar5 + (unsigned int)uVar7 * 0xa0 + unaff_r29 * 0x50;
      *(uint *)(iVar5 + 0x2330) = *(uint *)(iVar5 + 0x2330) & 0x7fffffff;
    }
    else {
      iVar9 = iVar5 + (unsigned int)uVar7 * 0xa0 + unaff_r29 * 0x50;
      *(uint *)(iVar9 + 0x2330) = *(uint *)(iVar9 + 0x2330) | 0x80000000;
      uVar6 = 99;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_40;
      }
      *(uint *)(iVar9 + 0x2330) = (uVar6 & 0x7f) << 0x18 | *(uint *)(iVar9 + 0x2330) & 0x80ffffff;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_3e;
      }
      else {
        uVar6 = 0x3b;
      }
      *(uint *)(iVar9 + 0x2330) = (uVar6 & 0x7f) << 0x11 | *(uint *)(iVar9 + 0x2330) & 0xff01ffff;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_3c;
      }
      else {
        uVar6 = 999;
      }
      *(uint *)(iVar9 + 0x2330) = (uVar6 & 0x3ff) << 7 | *(uint *)(iVar9 + 0x2330) & 0xfffe007f;
      puVar10 = (u32 *)(iVar5 + (unsigned int)uVar7 * 0xa0 + unaff_r29 * 0x50 + 0x2333);
      puVar8 = &uStack_d1;
      iVar5 = 0x26;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        uVar2 = *puVar8;
        puVar10[1] = *puVar1;
        puVar10 = puVar10 + 2;
        *puVar10 = uVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  iVar5 = iRam00000000;
  if (*(int *)(*(int *)(iRam00000000 + 0x98) + 0x3c4) != 3) goto LAB_segment_0__8053a71c;
  bVar3 = false;
  local_f4 = 0;
  local_f2 = 0;
  local_f0 = 0;
  uVar7 = FUN_segment_0__80440ed8(local_30);
  iVar9 = iRam00000000;
  if ((short)uVar7 < 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(*(int *)(iVar5 + 0x24ffc) + (unsigned int)uVar7 * 0xa0 + 0x25688);
    if ((int)uVar6 < 0) {
      local_f0 = (u16)(uVar6 >> 7) & 0x3ff;
      local_f2 = (u8)(uVar6 >> 0x11) & 0x7f;
      local_f4 = (u8)(uVar6 >> 0x18) & 0x7f;
      bVar3 = true;
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
  }
  uVar7 = FUN_segment_0__80440ed8(local_30);
  iVar4 = iRam00000000;
  if ((short)uVar7 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*(int *)(iVar9 + 0x24ffc) + (unsigned int)uVar7 * 0xa0 + 0x25688) >> 0x1f;
  }
  if (((unsigned int)-iVar5 >> 0x1f & uVar6) != 0) {
    if (local_3a == 0) {
      bVar3 = false;
    }
    else if (bVar3) {
      if (local_40 < local_f4) {
        bVar3 = true;
      }
      else if (local_40 == local_f4) {
        if (local_3e < local_f2) {
          bVar3 = true;
        }
        else {
          if ((local_3e != local_f2) || (local_f0 <= local_3c)) goto LAB_segment_0__8053a618;
          bVar3 = true;
        }
      }
      else {
LAB_segment_0__8053a618:
        bVar3 = false;
      }
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_segment_0__8053a71c;
  }
  uVar7 = FUN_segment_0__80440ed8(local_30);
  if (-1 < (short)uVar7) {
    iVar5 = *(int *)(iVar4 + 0x24ffc) + 0x23308;
    if (local_3a == 0) {
      iVar5 = iVar5 + (unsigned int)uVar7 * 0xa0;
      *(uint *)(iVar5 + 0x2380) = *(uint *)(iVar5 + 0x2380) & 0x7fffffff;
    }
    else {
      iVar9 = iVar5 + (unsigned int)uVar7 * 0xa0;
      *(uint *)(iVar9 + 0x2380) = *(uint *)(iVar9 + 0x2380) | 0x80000000;
      uVar6 = 99;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_40;
      }
      *(uint *)(iVar9 + 0x2380) = (uVar6 & 0x7f) << 0x18 | *(uint *)(iVar9 + 0x2380) & 0x80ffffff;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_3e;
      }
      else {
        uVar6 = 0x3b;
      }
      *(uint *)(iVar9 + 0x2380) = (uVar6 & 0x7f) << 0x11 | *(uint *)(iVar9 + 0x2380) & 0xff01ffff;
      if (local_40 < 100) {
        uVar6 = (unsigned int)local_3c;
      }
      else {
        uVar6 = 999;
      }
      *(uint *)(iVar9 + 0x2380) = (uVar6 & 0x3ff) << 7 | *(uint *)(iVar9 + 0x2380) & 0xfffe007f;
      puVar10 = (u32 *)(iVar5 + (unsigned int)uVar7 * 0xa0 + 0x2383);
      puVar8 = &uStack_d1;
      iVar5 = 0x26;
      do {
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        uVar2 = *puVar8;
        puVar10[1] = *puVar1;
        puVar10 = puVar10 + 2;
        *puVar10 = uVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
LAB_segment_0__8053a71c:
  FUN_segment_0__804e45fc(*(u32 *)(iRam00000000 + 0x90));
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === RaceFlow_validate_8053a760 (0x8053a760) ===
void RaceFlow_validate_8053a760(int param_1)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  u32 auStack_e8 [104];
  u32 auStack_80 [92];
  int local_24;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053a7e0;
        }
      }
      bVar1 = false;
LAB_segment_0__8053a7e0:
      if (bVar1) goto LAB_segment_0__8053a7f0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8053a7f0:
  FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x68);
  if (local_24 == 5) {
    FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
  }
  FUN_segment_0__804bfb58(piVar3,param_1 + 0x68,0);
  *(u32 *)(param_1 + 0x2874) = 6;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === race_RaceFlow_8053a864 (0x8053a864) ===
void race_RaceFlow_8053a864(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int *piVar3;
  u32 local_d8 [51];
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar3 + 0x60)))(piVar3); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053a8e4;
        }
      }
      bVar1 = false;
LAB_segment_0__8053a8e4:
      if (bVar1) goto LAB_segment_0__8053a8f4;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8053a8f4:
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
  ((void(*)(...))(*(void**)(*piVar3 + 100)))(piVar3);
  ((void(*)(...))(*(void**)(*piVar3 + 0x68)))(piVar3,0x17e0,local_d8);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
  param_1[0xa1d] = 0x10;
  return;
}

// === race_RaceFlow_8053a97c (0x8053a97c) ===
void race_RaceFlow_8053a97c(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  int local_d8 [18];
  int local_90;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053a9fc;
        }
      }
      bVar1 = false;
LAB_segment_0__8053a9fc:
      if (bVar1) goto LAB_segment_0__8053aa0c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053aa0c:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  iVar3 = FUN_segment_0__8056319c(g_Ram_ptr);
  FUN_segment_0__804b4ecc(local_d8);
  local_90 = param_1[0xa1c];
  if (iVar3 < 5) {
    local_d8[0] = iVar3;
    ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x151c,local_d8);
  }
  else {
    ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x151d,local_d8);
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
  param_1[0xa1d] = 0x11;
  if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
    piVar4 = (int *)0;
  }
  else {
    piVar4 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
  }
  if ((unsigned int)piVar4[0x24a9] < 99999) {
    piVar4[0x24a9] = piVar4[0x24a9] + 1;
  }
  FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
  FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
  return;
}

// === race_RaceFlow_8053ab3c (0x8053ab3c) ===
void race_RaceFlow_8053ab3c(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  uint uVar3;
  int *piVar4;
  u32 local_d8 [51];
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053abbc;
        }
      }
      bVar1 = false;
LAB_segment_0__8053abbc:
      if (bVar1) goto LAB_segment_0__8053abcc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053abcc:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  uVar3 = FUN_segment_0__80555918(g_Ram_ptr);
  if (9 < uVar3) {
    FUN_segment_0__804b4ecc(local_d8);
    local_d8[0] = FUN_segment_0__805558f0(g_Ram_ptr);
    ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0,local_d8);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
    param_1[0xa1d] = 0x12;
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x8053ac04 */
                    /* WARNING: Treating indirect jump as call */
  ((void(*)(...))(*(void**)(uVar3 << 2)))();
  return;
}

// === race_RaceFlow_8053acf4 (0x8053acf4) ===
void race_RaceFlow_8053acf4(double param_1)

{
  *(u32 *)(iRam00000000 + 0xc28) = 0;
  FUN_segment_0__804f8c44(iRam00000000,0x4f,0);
  FUN_segment_0__804f8cd0(iRam00000000,(int)param_1,0xff);
  return;
}

// === RaceFlow_validate_8053ad80 (0x8053ad80) ===
void RaceFlow_validate_8053ad80(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === RaceFlow_validate_8053adb0 (0x8053adb0) ===
void RaceFlow_validate_8053adb0(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === RaceFlow_validate_8053ade0 (0x8053ade0) ===
void RaceFlow_validate_8053ade0(int param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_1);
}

// === race_RaceFlow_8053ae2c (0x8053ae2c) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053ae2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053af88 (0x8053af88) ===
int * race_RaceFlow_8053af88(int *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x3c)))(param_1);
  return param_1;
}

// === RaceFlow_validate_8053afd8 (0x8053afd8) ===
int RaceFlow_validate_8053afd8(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === race_RaceFlow_8053b030 (0x8053b030) ===
void race_RaceFlow_8053b030(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1[0x19] + 8);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x28)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053b0ac;
        }
      }
      bVar1 = false;
LAB_segment_0__8053b0ac:
      if (bVar1) goto LAB_segment_0__8053b0bc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053b0bc:
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x28)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053b110;
        }
      }
      bVar1 = false;
LAB_segment_0__8053b110:
      if (bVar1) goto LAB_segment_0__8053b120;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053b120:
  param_1[0x62] = (int)piVar4;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xc);
  param_1[99] = iVar3;
  *(byte *)(iVar3 + 0xbb) = *(byte *)(iVar3 + 0xbb) & 0xfd | 2;
  param_1[0x5d] = param_2;
  param_1[0x5e] = param_3;
  param_1[0x5f] = param_4;
  if (-1 < param_4) {
    FUN_segment_0__8050105c(param_1,0x15,param_1[0x62] + 0x174,param_4,6);
    iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x19);
    if (iVar3 != 0) {
      FUN_segment_0__8050105c(param_1,0x23,param_1[0x62] + 0x174,param_1[0x5f],6);
    }
    iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x2d);
    if (iVar3 != 0) {
      FUN_segment_0__8050105c(param_1,0x38,param_1[0x62] + 0x174,param_1[0x5f],6);
    }
  }
  ((void(*)(...))(*(void**)(*param_1 + 0x3c)))(param_1);
  return;
}

// === race_RaceFlow_8053b20c (0x8053b20c) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053b20c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053b6d4 (0x8053b6d4) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void race_RaceFlow_8053b6d4(int param_1)

{
  float fVar1;
  double dVar2;
  u32 auStack_28 [28];
  
  *(u32 *)(param_1 + 0x180) = 2;
  *(u32 *)(param_1 + 0x1a0) = uRam00000010;
  FUN_segment_0__804434e4(auStack_28);
  dVar2 = (double)FUN_segment_0__80443728((double)(fRam00000038 * fRam00000014),auStack_28);
  fVar1 = (float)((double)(*(float *)(param_1 + 0x194) - fRam00000014) + dVar2);
  *(float *)(param_1 + 0x1a4) = fVar1;
  if (fRam0000000c <= fVar1) {
    if (fRam00000008 < fVar1) {
      *(float *)(param_1 + 0x1a4) = fRam00000008;
    }
  }
  else {
    *(float *)(param_1 + 0x1a4) = fRam0000000c;
  }
  *(u32 *)(param_1 + 0x1a8) = _DAT_00000034;
  dVar2 = (double)fRam00000038;
  *(u32 *)(param_1 + 0x1ac) = uRam0000001c;
  dVar2 = (double)FUN_segment_0__80443728(dVar2,auStack_28);
  *(bool *)(param_1 + 0x1b0) = dVar2 < (double)fRam00000064;
  *(u32 *)(*(int *)(param_1 + 0x18c) + 0xb8) = 0xff;
  *(u32 *)(param_1 + 0x80) = 0;
  FUN_segment_0__804435b8(auStack_28,0xffffffff);
  return;
}

// === race_RaceFlow_8053b80c (0x8053b80c) ===
u32 race_RaceFlow_8053b80c(int param_1)

{
  u32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 - 2U < 3) {
    return 1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 != 1) {
    return 0;
  }
  if (-1 < *(int *)(param_1 + 0x17c)) {
    uVar1 = FUN_segment_0__804ce138(*(int *)(param_1 + 0x188) + 0x174);
    return uVar1;
  }
  return 1;
}

// === race_RaceFlow_8053b868 (0x8053b868) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053b868(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053b9a0 (0x8053b9a0) ===
int * race_RaceFlow_8053b9a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_segment_0__80500418();
  *param_1 = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x3c)))(param_1);
  *param_1 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x6d);
  iVar2 = iRam00000004;
  iVar1 = iRam00000000;
  param_1[0x92] = iRam00000008;
  param_1[0x8e] = 0;
  param_1[0x8f] = (int)param_1;
  param_1[0x90] = iVar1;
  param_1[0x91] = iVar2;
  iVar2 = iRam00000010;
  iVar1 = iRam0000000c;
  param_1[0x97] = iRam00000014;
  param_1[0x93] = 0;
  param_1[0x94] = (int)param_1;
  param_1[0x95] = iVar1;
  param_1[0x96] = iVar2;
  iVar2 = iRam0000001c;
  iVar1 = iRam00000018;
  param_1[0x9c] = iRam00000020;
  param_1[0x98] = 0;
  param_1[0x99] = (int)param_1;
  param_1[0x9a] = iVar1;
  param_1[0x9b] = iVar2;
  return param_1;
}

// === RaceFlow_validate_8053bab4 (0x8053bab4) ===
int RaceFlow_validate_8053bab4(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c91a0(param_1 + 0x1b4,0xffffffff);
    if (param_1 != 0) {
      FUN_segment_0__80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === RaceFlow_assertFail_8053bb24 (0x8053bb24) ===
void RaceFlow_assertFail_8053bb24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === race_RaceFlow_8053bf84 (0x8053bf84) ===
void race_RaceFlow_8053bf84(int param_1)

{
  u32 uVar1;
  
  FUN_segment_0__804c92e0(param_1 + 0x1b4,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,1);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,2);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  race_RaceFlow_8053d47c(param_1,0);
  return;
}

// === race_RaceFlow_8053c034 (0x8053c034) ===
void race_RaceFlow_8053c034(int param_1)

{
  u32 *puVar1;
  u32 uVar2;
  bool bVar3;
  u32 *puVar4;
  int iVar5;
  uint uVar6;
  u16 uVar9;
  int *piVar7;
  u32 *puVar8;
  u32 *puVar10;
  u32 *puVar11;
  u32 *puVar12;
  u32 *puVar13;
  int *piVar14;
  int iVar15;
  u32 uVar16;
  int *piVar17;
  int unaff_r31;
  u32 local_1a8 [4];
  u32 local_1a4;
  int local_1a0;
  u32 uStack_190;
  u32 local_18c;
  u32 local_188 [17];
  u32 uStack_141;
  u32 local_140 [80];
  u32 auStack_f0 [8];
  u32 local_e8;
  u16 local_e4;
  u32 local_e2;
  u16 local_e0;
  u32 local_de;
  u32 local_dc;
  u16 local_d8;
  u32 local_d6;
  u16 local_d4;
  u32 local_d2;
  u32 local_d0 [48];
  
  *(u32 *)(param_1 + 0x180) = 1;
  *(u32 *)(param_1 + 0x1b1) = 0;
  FUN_segment_0__804c92e0(param_1 + 0x1b4,0);
  iVar5 = *(int *)(param_1 + 0x174);
  if (iVar5 == 2) {
    uVar6 = FUN_segment_0__804ce0ec
                      (*(int *)(param_1 + 0x188) + 0x174,*(u32 *)(param_1 + 0x17c));
    if ((int)(-uVar6 | uVar6) < 0) {
      return;
    }
    iVar5 = FUN_segment_0__804b9884
                      (*(u32 *)(*g_Ram_ptr + 0x404),*(u32 *)(param_1 + 0x178));
    if (iVar5 == 0) {
      return;
    }
    iVar5 = FUN_segment_0__804b9814
                      (*(u32 *)(*g_Ram_ptr + 0x404),*(u32 *)(param_1 + 0x178));
    puVar12 = &uStack_141;
    puVar10 = (u32 *)(iVar5 + 0x21);
    iVar5 = 0x26;
    do {
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      uVar2 = *puVar10;
      puVar12[1] = *puVar1;
      puVar12 = puVar12 + 2;
      *puVar12 = uVar2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_segment_0__804cddcc
              (*(int *)(param_1 + 0x188) + 0x174,*(u32 *)(param_1 + 0x17c),local_140);
    return;
  }
  if (iVar5 != 3) {
    if (iVar5 == 4) {
      piVar7 = (int *)FUN_segment_0__8055946c(g_Ram_ptr);
      iVar5 = *piVar7;
      piVar14 = (int *)0;
      iVar15 = 0;
      piVar17 = piVar7;
      if (0 < iVar5) {
        do {
          if (piVar17[1] == *(int *)(*(int *)(param_1 + 0x188) + 0xc38)) {
            piVar14 = piVar7 + iVar15 * 0x1c + 1;
            break;
          }
          piVar17 = piVar17 + 0x1c;
          iVar15 = iVar15 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_segment_0__804cddcc
                (*(int *)(param_1 + 0x188) + 0x174,*(u32 *)(param_1 + 0x17c),piVar14 + 5);
      return;
    }
    if (iVar5 != 7) {
      return;
    }
    piVar17 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar17 != (int *)0) {
      if (piVar17 != (int *)0) {
        for (puVar8 = (u32 *)((void(*)(...))(*(void**)(*piVar17 + 0x60)))(piVar17);
            puVar8 != (u32 *)0; puVar8 = (u32 *)*puVar8) {
          if (puVar8 == (u32 *)0) {
            bVar3 = true;
            goto LAB_segment_0__8053c4c4;
          }
        }
        bVar3 = false;
LAB_segment_0__8053c4c4:
        if (bVar3) goto LAB_segment_0__8053c4d4;
      }
      piVar17 = (int *)0;
    }
    else {
      piVar17 = (int *)0;
    }
LAB_segment_0__8053c4d4:
    uVar16 = *(u32 *)(*(int *)(param_1 + 0x188) + 0xc38);
    iVar5 = FUN_segment_0__804452a4(uVar16);
    if (iVar5 == 2) {
      iVar5 = FUN_segment_0__804bf900(piVar17,0x26,0,uVar16);
    }
    else {
      iVar5 = FUN_segment_0__804bf900(piVar17,0x25,0,uVar16);
    }
    FUN_segment_0__804cddcc
              (*(int *)(param_1 + 0x188) + 0x174,*(u32 *)(param_1 + 0x17c),iVar5 + 0x18);
    return;
  }
  piVar17 = *(int **)(param_1 + 0x188);
  if (piVar17[0x30f] == 2) {
    unaff_r31 = 1;
  }
  else if (piVar17[0x30f] == 1) {
    unaff_r31 = 0;
  }
  if (piVar17 != (int *)0) {
    if (piVar17 != (int *)0) {
      for (puVar8 = (u32 *)((void(*)(...))(*(void**)(*piVar17 + 0x28)))(piVar17);
          puVar8 != (u32 *)0; puVar8 = (u32 *)*puVar8) {
        if (puVar8 == (u32 *)0) {
          bVar3 = true;
          goto LAB_segment_0__8053c1a4;
        }
      }
      bVar3 = false;
LAB_segment_0__8053c1a4:
      if (bVar3) goto LAB_segment_0__8053c1b4;
    }
    piVar17 = (int *)0;
  }
  else {
    piVar17 = (int *)0;
  }
LAB_segment_0__8053c1b4:
  piVar7 = g_Ram_ptr;
  if (piVar17 != (int *)0) {
    uVar9 = FUN_segment_0__80440ed8(*(u32 *)(*(int *)(param_1 + 0x188) + 0xc38));
    if ((-1 < (short)uVar9) &&
       (iVar5 = piVar7[0x93ff] + 0x23308 + (unsigned int)uVar9 * 0xa0 + unaff_r31 * 0x50,
       *(int *)(iVar5 + 0x2330) < 0)) {
      puVar12 = (u32 *)((int)&uStack_190 + 3);
      puVar10 = (u32 *)(iVar5 + 0x2333);
      iVar5 = 0x26;
      do {
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        uVar2 = *puVar10;
        puVar12[1] = *puVar1;
        puVar12 = puVar12 + 2;
        *puVar12 = uVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    goto LAB_segment_0__8053c3d8;
  }
  piVar17 = *(int **)(param_1 + 0x188);
  if (piVar17 != (int *)0) {
    if (piVar17 != (int *)0) {
      for (puVar8 = (u32 *)((void(*)(...))(*(void**)(*piVar17 + 0x28)))(piVar17);
          puVar8 != (u32 *)0; puVar8 = (u32 *)*puVar8) {
        if (puVar8 == (u32 *)0) {
          bVar3 = true;
          goto LAB_segment_0__8053c28c;
        }
      }
      bVar3 = false;
LAB_segment_0__8053c28c:
      if (bVar3) goto LAB_segment_0__8053c29c;
    }
    piVar17 = (int *)0;
  }
  else {
    piVar17 = (int *)0;
  }
LAB_segment_0__8053c29c:
  if (piVar17 != (int *)0) {
    local_1a8[0] = 0;
    local_1a4 = 0;
    FUN_segment_0__80559214(g_Ram_ptr,local_1a8);
    if (local_1a0 == *(int *)(*(int *)(param_1 + 0x188) + 0xc38)) {
      iVar5 = g_Ram_ptr[0x93ff] + 0x23308 + unaff_r31 * 0x54;
      if (*(int *)(iVar5 + 0x3730) < 0) {
        puVar12 = (u32 *)((int)&uStack_190 + 3);
        puVar10 = (u32 *)(iVar5 + 0x3737);
        iVar5 = 0x26;
        do {
          puVar1 = puVar10 + 1;
          puVar10 = puVar10 + 2;
          uVar2 = *puVar10;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 2;
          *puVar12 = uVar2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x188) + 0xc3c);
      if (iVar5 == 2) {
        unaff_r31 = 1;
      }
      else if (iVar5 == 1) {
        unaff_r31 = 0;
      }
      local_e8 = 0;
      local_de = 0;
      local_e4 = 0;
      local_e2 = 0;
      local_e0 = 0;
      local_dc = 0;
      local_d2 = 0;
      local_d8 = 0;
      local_d6 = 0;
      local_d4 = 0;
      iVar5 = FUN_segment_0__805581f4
                        (g_Ram_ptr,*(u32 *)(*(int *)(param_1 + 0x188) + 0xc38),unaff_r31,
                         auStack_f0,0);
      if (iVar5 != 0) {
        iVar5 = 9;
        puVar8 = (u32 *)&local_d4;
        puVar4 = &uStack_190;
        do {
          puVar13 = puVar4;
          puVar11 = puVar8;
          uVar16 = puVar11[2];
          puVar13[1] = puVar11[1];
          puVar13[2] = uVar16;
          iVar5 = iVar5 + -1;
          puVar8 = puVar11 + 2;
          puVar4 = puVar13 + 2;
        } while (iVar5 != 0);
        puVar13[3] = puVar11[3];
      }
    }
  }
LAB_segment_0__8053c3d8:
  FUN_segment_0__804cddcc
            (*(int *)(param_1 + 0x188) + 0x174,*(u32 *)(param_1 + 0x17c),&local_18c);
  return;
}

// === RaceFlow_assertFail_8053c8d8 (0x8053c8d8) ===
void RaceFlow_assertFail_8053c8d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RaceFlow_validate_8053d0d4 (0x8053d0d4) ===
void RaceFlow_validate_8053d0d4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  u32 *puVar4;
  
  piVar2 = (int *)FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  if (piVar2[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(u32 *)(*piVar2 + 0x10));
  }
  if (piVar2[0xe] == 2) {
    FUN_segment_0__804ff59c((double)g_Ram_float,piVar2,3);
  }
  race_RaceFlow_8053d47c(param_1,0);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x188) + 0x40))
                    (*(int **)(param_1 + 0x188),*(u32 *)(param_1 + 0x174));
  *(u32 *)(iVar3 + 0x80) = 1;
  piVar2 = *(int **)(*(int *)(param_1 + 100) + 0xc);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar2 + 0x60)))(piVar2); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053d200;
        }
      }
      bVar1 = false;
LAB_segment_0__8053d200:
      if (bVar1) goto LAB_segment_0__8053d210;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__8053d210:
  FUN_segment_0__804de9ac(piVar2,0,0);
  return;
}

// === race_RaceFlow_8053d238 (0x8053d238) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053d238(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053d47c (0x8053d47c) ===
void race_RaceFlow_8053d47c(int param_1,int param_2)

{
  float fVar1;
  
  if (*(uint *)(param_1 + 0x174) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x8053d49c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(uint *)(param_1 + 0x174) << 2))();
    return;
  }
  fVar1 = fRam00000064;
  if (param_2 != 0) {
    fVar1 = fRam00000064 + fRam00000004;
  }
  *(float *)(param_1 + 0x7c) = fVar1;
  return;
}

// === race_RaceFlow_8053d514 (0x8053d514) ===
int * race_RaceFlow_8053d514(int *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  ((void(*)(...))(*(void**)(*param_1 + 0x3c)))(param_1);
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_8053d570 (0x8053d570) ===
int RaceFlow_validate_8053d570(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_8053d5cc (0x8053d5cc) ===
void race_RaceFlow_8053d5cc
               (u32 param_1,u32 param_2,u32 param_3,u32 param_4)

{
  u32 auStack_38 [40];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,0x129,0x131,0x145,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  race_RaceFlow_8053b030(param_1,param_2,param_3,param_4);
  return;
}

// === race_RaceFlow_8053d6fc (0x8053d6fc) ===
u32 * race_RaceFlow_8053d6fc(u32 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_8053d738 (0x8053d738) ===
int RaceFlow_validate_8053d738(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === race_RaceFlow_8053d790 (0x8053d790) ===
void race_RaceFlow_8053d790(int param_1)

{
  u32 local_38;
  u32 local_34;
  u32 auStack_30 [44];
  
  FUN_segment_0__804ae324(auStack_30,param_1);
  local_38 = 0;
  local_34 = 0;
  FUN_segment_0__804ae36c(auStack_30,0x15e,0x166,0x177,&local_38);
  *(u32 *)(param_1 + 0x80) = 1;
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  return;
}

// === race_RaceFlow_8053d810 (0x8053d810) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053d810(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053d954 (0x8053d954) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053d954(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053da00 (0x8053da00) ===
void race_RaceFlow_8053da00(int param_1)

{
  *(u32 *)(param_1 + 0x80) = 1;
  return;
}

// === race_RaceFlow_8053da1c (0x8053da1c) ===
u32 * race_RaceFlow_8053da1c(u32 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_8053da58 (0x8053da58) ===
int RaceFlow_validate_8053da58(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === race_RaceFlow_8053dab0 (0x8053dab0) ===
void race_RaceFlow_8053dab0(int param_1,int param_2)

{
  u32 local_38;
  u32 local_34;
  u32 auStack_30 [40];
  
  FUN_segment_0__804ae324(auStack_30,param_1);
  local_38 = 0;
  local_34 = 0;
  if (param_2 == 0) {
    FUN_segment_0__804ae36c(auStack_30,0x1a1,0x1a9,0x1c9,&local_38);
  }
  else if (param_2 == 1) {
    FUN_segment_0__804ae36c(auStack_30,0x1d6,0x1de,0x1fa,&local_38);
  }
  else if (param_2 == 2) {
    FUN_segment_0__804ae36c(auStack_30,0x207,0x20f,0x22f,&local_38);
  }
  else if (param_2 == 3) {
    FUN_segment_0__804ae36c(auStack_30,0x23c,0x244,0x260,&local_38);
  }
  else if (param_2 == 4) {
    FUN_segment_0__804ae36c(auStack_30,0x26d,0x275,0x291,&local_38);
  }
  else if (param_2 == 5) {
    FUN_segment_0__804ae36c(auStack_30,0x29e,0x2a6,0x2be,&local_38);
  }
  *(int *)(param_1 + 0x174) = param_2;
  *(u32 *)(param_1 + 0x7c) = uRam00000000;
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  return;
}

// === race_RaceFlow_8053dc2c (0x8053dc2c) ===
void race_RaceFlow_8053dc2c(int param_1)

{
  int iVar1;
  u32 auStack_d8 [120];
  u32 local_60;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if ((((iVar1 - 4U < 2) || (iVar1 == 0)) || (iVar1 == 2)) && (*(char *)(param_1 + 0x80) == 0)) {
    FUN_segment_0__804b4ecc(auStack_d8);
    local_60 = 0;
    FUN_segment_0__8050093c(param_1,0x2cb,0x17ac,auStack_d8);
  }
  return;
}

// === RaceFlow_assertFail_8053dcb8 (0x8053dcb8) ===
void RaceFlow_assertFail_8053dcb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RaceFlow_validate_8053df20 (0x8053df20) ===
void RaceFlow_validate_8053df20(int param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 4),param_2,param_3,param_1);
}

// === race_RaceFlow_8053df50 (0x8053df50) ===
void race_RaceFlow_8053df50(void)

{
  race_RaceFlow_8053ae2c(0);
  uRam00000074 = 0;
  uRam00000078 = 0x74;
  uRam0000007c = 0x74;
  uRam00000080 = 0;
  uRam00000084 = 0;
  return;
}

// === race_RaceFlow_8053dfa4 (0x8053dfa4) ===
u32 * race_RaceFlow_8053dfa4(u32 *param_1)

{
  *param_1 = 0;
  FUN_segment_0__804434e4(param_1 + 0x2a);
  return param_1;
}

// === RaceFlow_validate_8053dfe4 (0x8053dfe4) ===
int RaceFlow_validate_8053dfe4(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804435b8(param_1 + 0xa8,0xffffffff), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === race_RaceFlow_8053e040 (0x8053e040) ===
void race_RaceFlow_8053e040(int param_1,u32 param_2,u32 param_3,u32 param_4)

{
  *(u32 *)(param_1 + 4) = param_2;
  *(u32 *)(param_1 + 0x34) = param_3;
  *(u32 *)(param_1 + 0x38) = param_4;
  return;
}

// === race_RaceFlow_8053e050 (0x8053e050) ===
void race_RaceFlow_8053e050(int param_1,u32 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  dVar4 = dRam00000000;
  iVar6 = 0;
  fVar2 = (float)((double)CONCAT44(0x43300000,param_2) - dRam00000000) - dRam00000000._0_4_;
  fVar3 = dRam00000000._0_4_ + (float)((double)CONCAT44(0x43300000,param_2) - dRam00000000);
  *(float *)(param_1 + 0xc) = fVar2;
  fVar1 = (float)((double)CONCAT44(0x43300000,param_2) - dVar4);
  *(float *)(param_1 + 0x10) = fVar3;
  *(float *)(param_1 + 8) = fVar1;
  fVar1 = dRam00000000._0_4_ / (fVar2 - fVar1);
  *(u32 *)(param_1 + 0x18) = 0xffffffff;
  *(u32 *)(param_1 + 0x1c) = 0xffffffff;
  *(u32 *)(param_1 + 0x20) = 0xffffffff;
  *(u32 *)(param_1 + 0x24) = 0xffffffff;
  *(u32 *)(param_1 + 0x28) = 0xffffffff;
  *(float *)(param_1 + 0x14) = fVar1;
  *(u32 *)(param_1 + 0x2c) = 0xffffffff;
  *(u32 *)(param_1 + 0x30) = 0;
  *(u32 *)(param_1 + 0x3c) = 0;
  iVar7 = 2;
  do {
    iVar5 = param_1 + iVar6;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar5 = param_1 + iVar6 + 8;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar5 = param_1 + iVar6 + 0x10;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar5 = param_1 + iVar6 + 0x18;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar5 = param_1 + iVar6 + 0x20;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar5 = param_1 + iVar6 + 0x28;
    iVar6 = iVar6 + 0x30;
    *(u32 *)(iVar5 + 0x44) = 0;
    *(u32 *)(iVar5 + 0x45) = 0;
    *(u32 *)(iVar5 + 0x46) = 0;
    *(u32 *)(iVar5 + 0x47) = 0;
    *(u32 *)(iVar5 + 0x48) = 0;
    *(u32 *)(iVar5 + 0x49) = 0;
    *(u32 *)(iVar5 + 0x4a) = 0;
    *(u32 *)(iVar5 + 0x4b) = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar6 = param_1 + iVar6;
  *(u32 *)(iVar6 + 0x44) = 0;
  iVar7 = 0;
  *(u32 *)(iVar6 + 0x45) = 0;
  *(u32 *)(iVar6 + 0x46) = 0;
  *(u32 *)(iVar6 + 0x47) = 0;
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x38); iVar6 = iVar6 + 1) {
    *(u32 *)(*(int *)(param_1 + 0x34) + iVar7) = 0;
    iVar7 = iVar7 + 4;
  }
  *(u32 *)(param_1 + 0x40) = 0;
  return;
}

// === race_RaceFlow_8053e238 (0x8053e238) ===
void race_RaceFlow_8053e238(int param_1,u32 param_2)

{
  *(u32 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 4) = param_2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}

// === race_RaceFlow_8053e258 (0x8053e258) ===
void race_RaceFlow_8053e258(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(u32 *)(param_1 + 0x40) = 0;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x3c); iVar2 = iVar2 + 1) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x34) + iVar1) + 0x184) < 0) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    iVar1 = iVar1 + 4;
  }
  return;
}

// === race_RaceFlow_8053e2a4 (0x8053e2a4) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053e2a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === RaceFlow_validate_8053e544 (0x8053e544) ===
void RaceFlow_validate_8053e544(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x34),*(u32 *)(param_1 + 0x3c),4,0);
}

// === race_RaceFlow_8053e560 (0x8053e560) ===
void race_RaceFlow_8053e560(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x3c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + iVar2) + 0x40))();
    iVar2 = iVar2 + 4;
  }
  return;
}

// === race_RaceFlow_8053e5d0 (0x8053e5d0) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void race_RaceFlow_8053e5d0(int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  u64 local_8;
  
  if (*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc) < fRam00000020) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) - fRam00000020;
  }
  if (fRam00000024 < *(float *)(param_1 + 8) - *(float *)(param_1 + 0xc)) {
    *(float *)(param_1 + 8) = fRam00000024 + *(float *)(param_1 + 0xc);
  }
  fVar4 = fRam00000028;
  fVar1 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 8) - fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = fVar2 - *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x14) = g_Ram_float / fVar1;
  dVar3 = dRam00000018;
  if (fVar4 < fVar2) {
    if (fRam0000002c < fVar2) {
      if (_DAT_00000030 < fVar2) {
        if (_DAT_00000034 < fVar2) {
          if (fRam00000038 < fVar2) {
            if (fRam0000003c < fVar2) {
              if (fRam00000040 < fVar2) {
                uVar6 = 60000;
              }
              else {
                uVar6 = 30000;
              }
            }
            else {
              uVar6 = 10000;
            }
          }
          else {
            uVar6 = 5000;
          }
        }
        else {
          uVar6 = 2000;
        }
      }
      else {
        uVar6 = 1000;
      }
    }
    else {
      uVar6 = 500;
    }
  }
  else {
    uVar6 = 200;
  }
  fVar1 = *(float *)(param_1 + 0xc) /
          (float)((double)CONCAT44(0x43300000,uVar6 ^ 0x80000000) - dRam00000018);
  if (fVar1 < fRam00000010) {
    iVar5 = (int)fVar1;
  }
  else {
    iVar5 = (int)fVar1 + 1;
  }
  uVar7 = uVar6 * iVar5;
  iVar9 = 2;
  iVar5 = param_1;
  do {
    local_8 = (double)CONCAT44(0x43300000,uVar7 ^ 0x80000000);
    if (*(float *)(param_1 + 0x10) <= (float)(local_8 - dVar3)) {
      *(u32 *)(iVar5 + 0x18) = 0xffffffff;
    }
    else {
      *(uint *)(iVar5 + 0x18) = uVar7;
    }
    iVar8 = uVar7 + uVar6;
    local_8 = (double)(CONCAT44(0x43300000,iVar8) ^ 0x80000000);
    if (*(float *)(param_1 + 0x10) <= (float)(local_8 - dVar3)) {
      *(u32 *)(iVar5 + 0x1c) = 0xffffffff;
    }
    else {
      *(int *)(iVar5 + 0x1c) = iVar8;
    }
    iVar8 = iVar8 + uVar6;
    local_8 = (double)(CONCAT44(0x43300000,iVar8) ^ 0x80000000);
    if (*(float *)(param_1 + 0x10) <= (float)(local_8 - dVar3)) {
      *(u32 *)(iVar5 + 0x20) = 0xffffffff;
    }
    else {
      *(int *)(iVar5 + 0x20) = iVar8;
    }
    uVar7 = iVar8 + uVar6;
    iVar5 = iVar5 + 0xc;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(byte *)(param_1 + 0x30) = (u8)(((int)(uVar6 ^ 1000) >> 1) - ((uVar6 ^ 1000) & 1000) >> 0x1f);
  return;
}

// === race_RaceFlow_8053e824 (0x8053e824) ===
void race_RaceFlow_8053e824(int param_1,u32 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + param_3 * 4 + 0x18);
  if ((int)uVar1 < 0) {
    race_RaceFlow_8053da00(param_2);
  }
  else {
    race_RaceFlow_8053d810
              ((double)(*(float *)(param_1 + 0x14) *
                       ((float)((double)CONCAT44(0x43300000,uVar1 ^ 0x80000000) - dRam00000000) -
                       *(float *)(param_1 + 8))),param_2,uVar1,*(u32 *)(param_1 + 0x30));
  }
  return;
}

// === race_RaceFlow_8053e914 (0x8053e914) ===
double race_RaceFlow_8053e914(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)dRam00000000._0_4_ <= param_1) {
    dVar2 = (double)dRam00000000._0_4_;
    dVar3 = (double)(*(float *)(param_2 + 0x14) * (float)(param_1 - (double)*(float *)(param_2 + 8))
                    );
    dVar1 = (double)(float)(-dVar2 + (double)((float)((double)CONCAT44(0x43300000,
                                                                       *(uint *)(param_2 + 0x40) ^
                                                                       0x80000000) - dRam00000000) *
                                             dRam00000000._4_4_));
    if ((dVar1 <= dVar3) && (dVar1 = dVar3, dVar2 < dVar3)) {
      dVar1 = dVar2;
    }
  }
  else {
    dVar1 = (double)FUN_segment_0__80443728
                              ((double)((float)((double)CONCAT44(0x43300000,
                                                                 *(uint *)(param_2 + 0x40) ^
                                                                 0x80000000) - dRam00000000) *
                                       dRam00000000._4_4_),param_2 + 0xa8);
    dVar1 = (double)(float)(-(double)dRam00000000._0_4_ + dVar1);
  }
  return dVar1;
}

// === race_RaceFlow_8053ea04 (0x8053ea04) ===
double race_RaceFlow_8053ea04(int param_1,u32 param_2)

{
  return (double)(*(float *)(param_1 + 0x10) +
                 ((float)((double)CONCAT44(0x43300000,param_2) - dRam00000000) *
                 (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10))) / dRam00000000._0_4_);
}

// === race_RaceFlow_8053ea4c (0x8053ea4c) ===
int race_RaceFlow_8053ea4c(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  fVar1 = *(float *)(*param_1 + 400);
  fVar2 = *(float *)(*param_2 + 400);
  if (fVar1 <= fVar2) {
    if (fVar2 <= fVar1) {
      uVar5 = *(uint *)(*param_1 + 0x184);
      if (dRam00000000._0_4_ <=
          (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000000)) {
        uVar4 = *(uint *)(*param_2 + 0x184);
        if (dRam00000000._0_4_ <=
            (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dRam00000000)) {
          iVar3 = uVar5 - uVar4;
        }
        else {
          iVar3 = -1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

// === race_RaceFlow_8053eaec (0x8053eaec) ===
int race_RaceFlow_8053eaec(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  fVar1 = *(float *)(*param_1 + 400);
  fVar2 = *(float *)(*param_2 + 400);
  if (fVar1 <= fVar2) {
    if (fVar2 <= fVar1) {
      uVar5 = *(uint *)(*param_1 + 0x184);
      if (dRam00000000._0_4_ <=
          (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000000)) {
        uVar4 = *(uint *)(*param_2 + 0x184);
        if (dRam00000000._0_4_ <=
            (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dRam00000000)) {
          iVar3 = uVar4 - uVar5;
        }
        else {
          iVar3 = -1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}

// === race_RaceFlow_8053eb8c (0x8053eb8c) ===
u32 * race_RaceFlow_8053eb8c(u32 *param_1)

{
  *param_1 = 0;
  FUN_segment_0__804434e4(param_1 + 0x2a);
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_8053ebd8 (0x8053ebd8) ===
int RaceFlow_validate_8053ebd8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804435b8(param_1 + 0xa8,0xffffffff);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_8053ec38 (0x8053ec38) ===
void race_RaceFlow_8053ec38(int param_1,int *param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  dVar1 = (double)CONCAT44(0x43300000,
                           (unsigned int)*(u16 *)(param_2 + 7) +
                           ((unsigned int)*(byte *)((int)param_2 + 0x1a) +
                           (unsigned int)*(u16 *)(param_2 + 6) * 0x3c) * 1000) - dRam00000000;
  *(float *)(param_1 + 8) =
       (float)((double)CONCAT44(0x43300000,
                                (unsigned int)*(u16 *)(param_2 + 4) +
                                ((unsigned int)*(byte *)((int)param_2 + 0xe) +
                                (unsigned int)*(u16 *)(param_2 + 3) * 0x3c) * 1000) - dRam00000000);
  *(float *)(param_1 + 0xc) = (float)dVar1;
  race_RaceFlow_8053e5d0();
  iVar4 = 4;
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    iVar2 = param_1 + iVar3;
    *(u32 *)(iVar2 + 0xc0) = *(u32 *)((int)param_2 + iVar3 + 0x7c);
    *(u32 *)(iVar2 + 0xc1) = *(u32 *)((int)param_2 + iVar3 + 0x7d);
    *(u32 *)(iVar2 + 0xc2) = *(u32 *)((int)param_2 + iVar3 + 0x7e);
    *(u32 *)(iVar2 + 0xc3) = *(u32 *)((int)param_2 + iVar3 + 0x7f);
    *(u32 *)(iVar2 + 0xc4) = *(u32 *)((int)param_2 + iVar3 + 0x80);
    *(u32 *)(iVar2 + 0xc5) = *(u32 *)((int)param_2 + iVar3 + 0x81);
    *(u32 *)(iVar2 + 0xc6) = *(u32 *)((int)param_2 + iVar3 + 0x82);
    *(u32 *)(iVar2 + 199) = *(u32 *)((int)param_2 + iVar3 + 0x83);
    iVar2 = param_1 + iVar3 + 8;
    *(u32 *)(iVar2 + 0xc0) = *(u32 *)((int)param_2 + iVar3 + 0x84);
    *(u32 *)(iVar2 + 0xc1) = *(u32 *)((int)param_2 + iVar3 + 0x85);
    *(u32 *)(iVar2 + 0xc2) = *(u32 *)((int)param_2 + iVar3 + 0x86);
    *(u32 *)(iVar2 + 0xc3) = *(u32 *)((int)param_2 + iVar3 + 0x87);
    *(u32 *)(iVar2 + 0xc4) = *(u32 *)((int)param_2 + iVar3 + 0x88);
    *(u32 *)(iVar2 + 0xc5) = *(u32 *)((int)param_2 + iVar3 + 0x89);
    *(u32 *)(iVar2 + 0xc6) = *(u32 *)((int)param_2 + iVar3 + 0x8a);
    *(u32 *)(iVar2 + 199) = *(u32 *)((int)param_2 + iVar3 + 0x8b);
    iVar2 = param_1 + iVar3 + 0x10;
    *(u32 *)(iVar2 + 0xc0) = *(u32 *)((int)param_2 + iVar3 + 0x8c);
    *(u32 *)(iVar2 + 0xc1) = *(u32 *)((int)param_2 + iVar3 + 0x8d);
    *(u32 *)(iVar2 + 0xc2) = *(u32 *)((int)param_2 + iVar3 + 0x8e);
    *(u32 *)(iVar2 + 0xc3) = *(u32 *)((int)param_2 + iVar3 + 0x8f);
    *(u32 *)(iVar2 + 0xc4) = *(u32 *)((int)param_2 + iVar3 + 0x90);
    *(u32 *)(iVar2 + 0xc5) = *(u32 *)((int)param_2 + iVar3 + 0x91);
    *(u32 *)(iVar2 + 0xc6) = *(u32 *)((int)param_2 + iVar3 + 0x92);
    *(u32 *)(iVar2 + 199) = *(u32 *)((int)param_2 + iVar3 + 0x93);
    iVar4 = iVar4 + -1;
    iVar2 = iVar3 + 0x18;
  } while (iVar4 != 0);
  iVar2 = param_1 + iVar3 + 0x18;
  *(u32 *)(iVar2 + 0xc0) = *(u32 *)((int)param_2 + iVar3 + 0x94);
  *(u32 *)(iVar2 + 0xc1) = *(u32 *)((int)param_2 + iVar3 + 0x95);
  *(u32 *)(iVar2 + 0xc2) = *(u32 *)((int)param_2 + iVar3 + 0x96);
  *(u32 *)(iVar2 + 0xc3) = *(u32 *)((int)param_2 + iVar3 + 0x97);
  if (param_3 == 0) {
    iVar2 = (*param_2 * 0x69) / 100 + (*param_2 * 0x69 >> 0x1f);
    *(int *)(param_1 + 0x124) = (iVar2 - (iVar2 >> 0x1f)) + 0x23;
  }
  else {
    iVar2 = (*param_2 * 0x96) / 100 + (*param_2 * 0x96 >> 0x1f);
    *(int *)(param_1 + 0x124) = (iVar2 - (iVar2 >> 0x1f)) + 0x32;
  }
  return;
}

// === race_RaceFlow_8053ee60 (0x8053ee60) ===
/* WARNING: Control flow encountered bad instruction data */

void race_RaceFlow_8053ee60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === race_RaceFlow_8053f104 (0x8053f104) ===
double race_RaceFlow_8053f104(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  uVar2 = (unsigned int)*(byte *)(param_1 + param_2 + 0xc0);
  uVar1 = (unsigned int)*(byte *)(param_1 + param_2 + 0x44);
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  dVar3 = (double)FUN_segment_0__80443728
                            ((double)((float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000) *
                                     dRam00000000._0_4_),param_1 + 0xa8);
  return (double)(fRam0000000c + (float)(dVar3 * (double)(fRam00000008 - fRam0000000c)));
}

// === race_RaceFlow_8053f188 (0x8053f188) ===
u32 * race_RaceFlow_8053f188(u32 *param_1)

{
  *param_1 = 0;
  FUN_segment_0__804434e4(param_1 + 0x2a);
  *param_1 = 0;
  return param_1;
}

// === RaceFlow_validate_8053f1d4 (0x8053f1d4) ===
int RaceFlow_validate_8053f1d4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804435b8(param_1 + 0xa8,0xffffffff);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_8053f234 (0x8053f234) ===
void race_RaceFlow_8053f234(int param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  u64 local_18;
  u64 local_10;
  
  dVar2 = dRam00000018;
  uVar8 = 0;
  iVar6 = 0;
  iVar7 = *(int *)(param_1 + 0x3c);
  uVar9 = -(unsigned int)(*(int *)(param_1 + 4) == 0) & 0x7fffffff;
  fVar1 = fRam00000010;
  if (0 < iVar7) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x34) + iVar6);
      iVar4 = *(int *)(iVar3 + 0x174);
      if (((-1 < iVar4) && (iVar4 < 3)) && (uVar5 = *(uint *)(iVar3 + 0x184), -1 < (int)uVar5)) {
        uVar8 = uVar8 + 1;
        local_18 = (double)CONCAT44(0x43300000,uVar5 ^ 0x80000000);
        fVar1 = fVar1 + (float)(local_18 - dRam00000018);
        if ((int)uVar5 < (int)uVar9) {
          uVar9 = uVar5;
        }
      }
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (0 < (int)uVar8) {
    local_18 = (double)CONCAT44(0x43300000,uVar8 ^ 0x80000000);
    local_10 = (double)CONCAT44(0x43300000,uVar9 ^ 0x80000000);
    *(float *)(param_1 + 8) = fVar1 / (float)(local_18 - dRam00000018);
    *(float *)(param_1 + 0xc) = (float)(local_10 - dVar2);
  }
  race_RaceFlow_8053e5d0(param_1);
  iVar6 = *(int *)(param_1 + 0x3c);
  iVar3 = 0;
  iVar4 = 0;
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x34) + iVar7) + 0x174) == 6) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x34) + iVar4 * 4);
        break;
      }
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar3 != 0) {
    iVar6 = (int)((fRam00000048 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8)) /
                 fRam0000004c);
    iVar7 = 5999999;
    if (iVar6 < 5999999) {
      iVar7 = iVar6;
    }
    *(int *)(iVar3 + 0x184) = iVar7;
  }
  return;
}

// === race_RaceFlow_8053f3e4 (0x8053f3e4) ===
double race_RaceFlow_8053f3e4(int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_segment_0__80443728
                            ((double)((float)((double)CONCAT44(0x43300000,
                                                               (unsigned int)*(byte *)(param_1 + param_2 +
                                                                              0x44)) - dRam00000000)
                                     * dRam00000000._0_4_),param_1 + 0xa8);
  return (double)(fRam0000000c + (float)(dVar1 * (double)(fRam00000008 - fRam0000000c)));
}

// === race_RaceFlow_8053f454 (0x8053f454) ===
u32 * race_RaceFlow_8053f454(u32 *param_1)

{
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  FUN_segment_0__804c8134(param_1 + 0x16);
  FUN_segment_0__804cd634(param_1 + 0x1e);
  return param_1;
}

// === RaceFlow_validate_8053f4d8 (0x8053f4d8) ===
int RaceFlow_validate_8053f4d8(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x78,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === race_RaceFlow_8053f54c (0x8053f54c) ===
void race_RaceFlow_8053f54c(int param_1)

{
  FUN_segment_0__804e5ea4(*g_Ram_uint);
  ((void(*)(...))(*(void**)(*(int *)(param_1 + 0x58) + 0x10)))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804cd808(param_1 + 0x78,1,0,0);
  return;
}

// === RaceFlow_validate_8053f5cc (0x8053f5cc) ===
void RaceFlow_validate_8053f5cc(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar4 + 0x60)))(piVar4); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053f64c;
        }
      }
      bVar1 = false;
LAB_segment_0__8053f64c:
      if (bVar1) goto LAB_segment_0__8053f65c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8053f65c:
  ((void(*)(...))(*(void**)(*piVar4 + 100)))(piVar4);
  FUN_segment_0__804a96f0(piVar4,0x189c,0);
  ((void(*)(...))(*(void**)(*piVar4 + 0x68)))(piVar4,0x18a1,0);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x4f,0);
  param_1[0x1a] = 0;
  iVar3 = *(int *)(g_Ram_ptr[0x26] + 0x3c4);
  param_1[0x1b] = iVar3;
  iVar3 = FUN_segment_0__804b9814(*(u32 *)(*g_Ram_ptr + 0x404),iVar3 + -7);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1c,iVar3 + 8,8);
}

// === race_RaceFlow_8053f76c (0x8053f76c) ===
void race_RaceFlow_8053f76c(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  u32 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 0) {
    piVar6 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar6 != (int *)0) {
      if (piVar6 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053f818;
          }
        }
        bVar1 = false;
LAB_segment_0__8053f818:
        if (bVar1) goto LAB_segment_0__8053f828;
      }
      piVar6 = (int *)0;
    }
    else {
      piVar6 = (int *)0;
    }
LAB_segment_0__8053f828:
    if (piVar6[0x25] == 0) {
      *(u32 *)(g_Ram_ptr[0x26] + 0x3c4) = 1;
      *(int *)(g_Ram_ptr[0x26] + 0x3cc) = (int)*(short *)((int)g_Ram_ptr + 0x36);
      FUN_segment_0__804c045c(piVar6 + 0x28);
      FUN_segment_0__804bfac4(piVar6,0);
      *(u32 *)(param_1 + 0x68) = 1;
    }
    return;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
      if (iVar2 == 1) {
        return;
      }
      iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
      if (iVar2 != 1) {
        if (iVar2 != 6) {
          return;
        }
        piVar6 = *(int **)(*g_Ram_ptr + 0x144);
        if (piVar6 != (int *)0) {
          if (piVar6 != (int *)0) {
            for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
                puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
              if (puVar4 == (u32 *)0) {
                bVar1 = true;
                goto LAB_segment_0__8053fc54;
              }
            }
            bVar1 = false;
LAB_segment_0__8053fc54:
            if (bVar1) goto LAB_segment_0__8053fc64;
          }
          piVar6 = (int *)0;
        }
        else {
          piVar6 = (int *)0;
        }
LAB_segment_0__8053fc64:
        FUN_segment_0__804a9164(piVar6);
        *(u32 *)(param_1 + 0x68) = 5;
        return;
      }
      piVar6 = *(int **)(*g_Ram_ptr + 0x2a4);
      if (piVar6 != (int *)0) {
        if (piVar6 != (int *)0) {
          for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
              puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
            if (puVar4 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__8053fafc;
            }
          }
          bVar1 = false;
LAB_segment_0__8053fafc:
          if (bVar1) goto LAB_segment_0__8053fb0c;
        }
        piVar6 = (int *)0;
      }
      else {
        piVar6 = (int *)0;
      }
LAB_segment_0__8053fb0c:
      iVar2 = 0;
      while ((iVar5 = -1, iVar2 < piVar6[0xc0] &&
             (((pcVar3 = (char *)FUN_segment_0__804c07c4(piVar6 + 0x28,iVar2), *pcVar3 == 0 ||
               (*(int *)(param_1 + 0x6c) != *(int *)(pcVar3 + 0xc4))) ||
              (iVar5 = iVar2, *(int *)(pcVar3 + 0xb8) != *(int *)(g_Ram_ptr[0x26] + 0x3c8))))))
      {
        iVar2 = iVar2 + 1;
      }
      FUN_segment_0__804c08d4(piVar6 + 0x28,iVar5);
      if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
        piVar6 = (int *)0;
      }
      else {
        piVar6 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      if ((unsigned int)piVar6[0x24a9] < 99999) {
        piVar6[0x24a9] = piVar6[0x24a9] + 1;
      }
      FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
      *(u32 *)(param_1 + 0x68) = 3;
      return;
    }
    if (iVar2 != 3) {
      return;
    }
    piVar6 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar6 != (int *)0) {
      if (piVar6 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053fcdc;
          }
        }
        bVar1 = false;
LAB_segment_0__8053fcdc:
        if (bVar1) goto LAB_segment_0__8053fcec;
      }
      piVar6 = (int *)0;
    }
    else {
      piVar6 = (int *)0;
    }
LAB_segment_0__8053fcec:
    if (piVar6[0x25] != 0) {
      return;
    }
    piVar6 = *(int **)(*g_Ram_ptr + 0x144);
    if (piVar6 != (int *)0) {
      if (piVar6 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053fd5c;
          }
        }
        bVar1 = false;
LAB_segment_0__8053fd5c:
        if (bVar1) goto LAB_segment_0__8053fd6c;
      }
      piVar6 = (int *)0;
    }
    else {
      piVar6 = (int *)0;
    }
LAB_segment_0__8053fd6c:
    FUN_segment_0__804a9164(piVar6);
    return;
  }
  piVar6 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar6 != (int *)0) {
    if (piVar6 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053f8e0;
        }
      }
      bVar1 = false;
LAB_segment_0__8053f8e0:
      if (bVar1) goto LAB_segment_0__8053f8f0;
    }
    piVar6 = (int *)0;
  }
  else {
    piVar6 = (int *)0;
  }
LAB_segment_0__8053f8f0:
  if (piVar6[0x25] != 0) {
    return;
  }
  iVar2 = FUN_segment_0__8040bd4c(g_Ram_ptr[6]);
  piVar6 = g_Ram_ptr;
  if (iVar2 != 0) {
    iVar2 = FUN_segment_0__8040bd4c(g_Ram_ptr[6]);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = piVar6[6];
    }
    iVar2 = FUN_segment_0__8055a6d0(g_Ram_ptr,param_1 + 0x70,iVar2);
    if (iVar2 != 0) {
      *(u32 *)(param_1 + 0x68) = 2;
      return;
    }
    piVar6 = *(int **)(*g_Ram_ptr + 0x144);
    if (piVar6 != (int *)0) {
      if (piVar6 != (int *)0) {
        for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6);
            puVar4 != (u32 *)0; puVar4 = (u32 *)*puVar4) {
          if (puVar4 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053f9bc;
          }
        }
        bVar1 = false;
LAB_segment_0__8053f9bc:
        if (bVar1) goto LAB_segment_0__8053f9cc;
      }
      piVar6 = (int *)0;
    }
    else {
      piVar6 = (int *)0;
    }
LAB_segment_0__8053f9cc:
    FUN_segment_0__804a9164(piVar6);
    *(u32 *)(param_1 + 0x68) = 5;
    return;
  }
  piVar6 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar6 != (int *)0) {
    if (piVar6 != (int *)0) {
      for (puVar4 = (u32 *)((void(*)(...))(*(void**)(*piVar6 + 0x60)))(piVar6); puVar4 != (u32 *)0
          ; puVar4 = (u32 *)*puVar4) {
        if (puVar4 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053fa44;
        }
      }
      bVar1 = false;
LAB_segment_0__8053fa44:
      if (bVar1) goto LAB_segment_0__8053fa54;
    }
    piVar6 = (int *)0;
  }
  else {
    piVar6 = (int *)0;
  }
LAB_segment_0__8053fa54:
  FUN_segment_0__804a9164(piVar6);
  *(u32 *)(param_1 + 0x68) = 4;
  return;
}

// === race_RaceFlow_8053fd88 (0x8053fd88) ===
void race_RaceFlow_8053fd88(int *param_1)

{
  bool bVar1;
  u32 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  u32 local_198 [49];
  int local_d4 [18];
  u32 local_8c;
  
  iVar4 = param_1[0x1a];
  if (iVar4 - 6U < 3) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0xffffffff);
    return;
  }
  if (iVar4 != 3) {
    if (iVar4 != 4) {
      if (iVar4 != 5) {
        return;
      }
      piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
              puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
            if (puVar2 == (u32 *)0) {
              bVar1 = true;
              goto LAB_segment_0__80540050;
            }
          }
          bVar1 = false;
LAB_segment_0__80540050:
          if (bVar1) goto LAB_segment_0__80540060;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__80540060:
      ((void(*)(...))(*(void**)(*piVar5 + 100)))(piVar5);
      uVar3 = FUN_segment_0__80555918(g_Ram_ptr);
      if (9 < uVar3) {
        FUN_segment_0__804b4ecc(local_198);
        local_198[0] = FUN_segment_0__805558f0(g_Ram_ptr);
        FUN_segment_0__804ccddc(piVar5,0x189c,0);
        ((void(*)(...))(*(void**)(*piVar5 + 0x68)))(piVar5,0,local_198);
        piVar5[0x62] = (int)(param_1 + 0x11);
        ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
        param_1[0x1a] = 8;
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x80540098 */
                    /* WARNING: Treating indirect jump as call */
      ((void(*)(...))(*(void**)(uVar3 << 2)))();
      return;
    }
    piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5);
            puVar2 != (u32 *)0; puVar2 = (u32 *)*puVar2) {
          if (puVar2 == (u32 *)0) {
            bVar1 = true;
            goto LAB_segment_0__8053ff6c;
          }
        }
        bVar1 = false;
LAB_segment_0__8053ff6c:
        if (bVar1) goto LAB_segment_0__8053ff7c;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__8053ff7c:
    ((void(*)(...))(*(void**)(*piVar5 + 100)))(piVar5);
    FUN_segment_0__804ccddc(piVar5,0x189c,0);
    ((void(*)(...))(*(void**)(*piVar5 + 0x68)))(piVar5,0x151e,0);
    piVar5[0x62] = (int)(param_1 + 0x11);
    ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
    param_1[0x1a] = 7;
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar2 = (u32 *)((void(*)(...))(*(void**)(*piVar5 + 0x60)))(piVar5); puVar2 != (u32 *)0
          ; puVar2 = (u32 *)*puVar2) {
        if (puVar2 == (u32 *)0) {
          bVar1 = true;
          goto LAB_segment_0__8053fe34;
        }
      }
      bVar1 = false;
LAB_segment_0__8053fe34:
      if (bVar1) goto LAB_segment_0__8053fe44;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8053fe44:
  ((void(*)(...))(*(void**)(*piVar5 + 100)))(piVar5);
  FUN_segment_0__804ccddc(piVar5,0x189c,0);
  iVar4 = FUN_segment_0__8056319c(g_Ram_ptr);
  FUN_segment_0__804b4ecc(local_d4);
  local_8c = FUN_segment_0__804ce0ec(param_1 + 0x1e,0);
  if (iVar4 < 5) {
    local_d4[0] = iVar4;
    ((void(*)(...))(*(void**)(*piVar5 + 0x68)))(piVar5,0x151c,local_d4);
  }
  else {
    ((void(*)(...))(*(void**)(*piVar5 + 0x68)))(piVar5,0x151d,local_d4);
  }
  piVar5[0x62] = (int)(param_1 + 0x11);
  ((void(*)(...))(*(void**)(*param_1 + 0x24)))(param_1,0x51,0);
  param_1[0x1a] = 6;
  return;
}

// === computeGpRank__Q36System10RaceConfig6PlayerCFv (0x8052ffd8) ===
void computeGpRank__Q36System10RaceConfig6PlayerCFv(void) { return; }

// === init__Q26System10RaceConfigFv (0x80530228) ===
void init__Q26System10RaceConfigFv(void) { return; }

// === clear__Q26System10RaceConfigFv (0x8053093c) ===
void clear__Q26System10RaceConfigFv(void) { return; }

// === clear__Q36System10RaceConfig8ScenarioFv (0x80530b50) ===
void clear__Q36System10RaceConfig8ScenarioFv(void) { return; }

// === update__Q36System10RaceConfig8ScenarioFv (0x80530c58) ===
void update__Q36System10RaceConfig8ScenarioFv(void) { return; }

// === updateRating__Q26System10RaceConfigFUc (0x80530d58) ===
void updateRating__Q26System10RaceConfigFUc(void) { return; }

// === initGhost__Q36System10RaceConfig8ScenarioFUcSc (0x805313d8) ===
void initGhost__Q36System10RaceConfig8ScenarioFUcSc(void) { return; }

// === initPlayers__Q36System10RaceConfig8ScenarioFUc (0x8053154c) ===
void initPlayers__Q36System10RaceConfig8ScenarioFUc(void) { return; }

// === copyPrevPositions__Q36System10RaceConfig8ScenarioFv (0x805316c8) ===
void copyPrevPositions__Q36System10RaceConfig8ScenarioFv(void) { return; }

// === initControllers__Q36System10RaceConfig8ScenarioFUc (0x805319d0) ===
void initControllers__Q36System10RaceConfig8ScenarioFUc(void) { return; }

// === computePlayerCounts__Q36System10RaceConfig8ScenarioFRUcRUcRUc (0x80531c70) ===
void computePlayerCounts__Q36System10RaceConfig8ScenarioFRUcRUcRUc(void) { return; }

// === initRng__Q36System10RaceConfig8ScenarioFv (0x80531e0c) ===
void initRng__Q36System10RaceConfig8ScenarioFv(void) { return; }

// === initCompetitionSettings__Q36System10RaceConfig8ScenarioFv (0x80531ef4) ===
void initCompetitionSettings__Q36System10RaceConfig8ScenarioFv(void) { return; }

// === initRace__Q36System10RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario (0x80532078) ===
void initRace__Q36System10RaceConfig8ScenarioFPQ36System10RaceConfig8Scenario(void) { return; }

// === createInstance__Q26System10RaceConfigFv (0x80532340) ===
void createInstance__Q26System10RaceConfigFv(void) { return; }

// === __dt__Q26System10RaceConfigFv (0x80532520) ===
void __dt__Q26System10RaceConfigFv(void) { return; }

// === __ct__Q26System10RaceConfigFv (0x80532644) ===
void __ct__Q26System10RaceConfigFv(void) { return; }

// === initRace__Q26System10RaceConfigFv (0x805327ac) ===
void initRace__Q26System10RaceConfigFv(void) { return; }

// === copy__Q36System10RaceConfig8ScenarioFRCQ36System10RaceConfig8Scenario (0x80532a94) ===
void copy__Q36System10RaceConfig8ScenarioFRCQ36System10RaceConfig8Scenario(void) { return; }

// === Racedata_initAwards (0x80532d4c) ===
void Racedata_initAwards(void) { return; }

// === setMii__Q36System10RaceConfig6PlayerFRCQ26System3Mii (0x80533418) ===
void setMii__Q36System10RaceConfig6PlayerFRCQ26System3Mii(void) { return; }

// === Racedata_initCredits (0x80533558) ===
void Racedata_initCredits(void) { return; }

// === update__Q26System10RaceConfigFv (0x805341cc) ===
void update__Q26System10RaceConfigFv(void) { return; }

// === appendParamFile__Q36System10RaceConfig8ScenarioFPQ26System10RaceConfig (0x805342cc) ===
void appendParamFile__Q36System10RaceConfig8ScenarioFPQ26System10RaceConfig(void) { return; }

// === Raceinfo_initGamemode (0x80534670) ===
void Raceinfo_initGamemode(void) { return; }

// === Raceinfo_construct (0x80534c88) ===
void Raceinfo_construct(void) { return; }

// === Raceinfo_init (0x80535470) ===
void Raceinfo_init(void) { return; }

// === RaceinfoPlayer_construct (0x805363c0) ===
void RaceinfoPlayer_construct(void) { return; }

// === RaceinfoPlayer_init (0x8053667c) ===
void RaceinfoPlayer_init(void) { return; }

// === RaceinfoPlayer_endRace (0x80536cdc) ===
void RaceinfoPlayer_endRace(void) { return; }

// === RaceinfoPlayer_endLap (0x80536ea0) ===
void RaceinfoPlayer_endLap(void) { return; }

// === RaceinfoPlayer_updateCheckpoint (0x805372e0) ===
void RaceinfoPlayer_updateCheckpoint(void) { return; }

// === RaceinfoPlayer_update (0x805377ec) ===
void RaceinfoPlayer_update(void) { return; }

// === RaceinfoPlayer_getLapSplit (0x80537c14) ===
void RaceinfoPlayer_getLapSplit(void) { return; }

// === TimeAttackGamemode_canEndRace (0x805381fc) ===
void TimeAttackGamemode_canEndRace(void) { return; }

// === Raceinfo_getInitialPosAndRotForPlayer (0x805387c4) ===
void Raceinfo_getInitialPosAndRotForPlayer(void) { return; }

// === updateGpRankScore__Q26System17RaceManagerPlayerFv (0x80538de0) ===
void updateGpRankScore__Q26System17RaceManagerPlayerFv(void) { return; }

// === RacedataHandler_processInputs (0x8058d680) ===
void RacedataHandler_processInputs(void) { return; }

// === RacedataFactory_packRacedataRecord (0x8058f018) ===
void RacedataFactory_packRacedataRecord(void) { return; }

// === TimeAttackBackPage_onActivate (0x8063b488) ===
void TimeAttackBackPage_onActivate(void) { return; }

// === TimeAttackBackPage_afterCalc (0x8063b634) ===
void TimeAttackBackPage_afterCalc(void) { return; }

// === TimeAttackBackPage_onRefocus (0x8063b748) ===
void TimeAttackBackPage_onRefocus(void) { return; }

// === TimeAttackBackPage_onReady (0x8063b8b0) ===
void TimeAttackBackPage_onReady(void) { return; }

// === CtrlRaceLap_load (0x807f1db8) ===
void CtrlRaceLap_load(void) { return; }

// === CtrlRaceTime_initSelf (0x807fa154) ===
void CtrlRaceTime_initSelf(void) { return; }

// === CtrlRaceTime_calcSelf (0x807fa3a8) ===
void CtrlRaceTime_calcSelf(void) { return; }

// === CtrlRaceTime_refresh (0x807fa9a8) ===
void CtrlRaceTime_refresh(void) { return; }

// === TimeAttackSplitsPage_ct (0x80857bcc) ===
void TimeAttackSplitsPage_ct(void) { return; }