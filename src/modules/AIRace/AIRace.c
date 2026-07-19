// AIRace module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 394 decompiled functions
// Address range: 0x805230b8 - 0x80739f5c

#include "AIRace.h"
#include "../types.h"

// Global Ram base pointers (defined in stubs.c)
extern void *g_Ram_ptr;
extern float g_Ram_float;
extern unsigned char g_Ram_byte;
extern unsigned int g_Ram_uint;

// === AI_Engine_validate_805230b8 (0x805230b8) ===
int AI_Engine_validate_805230b8(int param_1,int param_2)

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

// === ai_AI_Engine_80523158 (0x80523158) ===
void ai_AI_Engine_80523158(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  ai_AI_Tricks_80735444(param_1 + 0x290,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804ccf50(param_1 + 0x404,0,0xf,0x1d);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0x2b,0x32,0x4f,1,0,0);
  *(undefined4 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0x54,0x5b,0x60,1,0,1);
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === ai_AI_Engine_805232d4 (0x805232d4) ===
void ai_AI_Engine_805232d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_d8;
  undefined4 local_d4;
  
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  FUN_segment_0__80500a34(param_1 + 0x290,0xfa3,0);
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  uVar3 = *(uint *)(iVar1 + 0x928c);
  if (uVar3 < 2) {
    uVar2 = 0x1397;
    goto LAB_segment_0__805233e4;
  }
  if ((int)uVar3 < 0x65) {
    if (0x14 < (int)uVar3) {
      if ((int)uVar3 < 0x33) {
        uVar2 = 0x139b;
      }
      else {
        uVar2 = 0x139c;
      }
      goto LAB_segment_0__805233e4;
    }
    if (10 < (int)uVar3) {
      uVar2 = 0x139a;
      goto LAB_segment_0__805233e4;
    }
    if (-1 < (int)uVar3) {
      uVar2 = 0x1399;
      goto LAB_segment_0__805233e4;
    }
  }
  else {
    if ((int)uVar3 < 0x1f5) {
      if ((int)uVar3 < 0xc9) {
        uVar2 = 0x139d;
      }
      else {
        uVar2 = 0x139e;
      }
      goto LAB_segment_0__805233e4;
    }
    if ((int)uVar3 < 0x3e9) {
      uVar2 = 0x139f;
      goto LAB_segment_0__805233e4;
    }
  }
  uVar2 = 0x13a0;
LAB_segment_0__805233e4:
  FUN_segment_0__804b4ecc(&local_d8);
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  local_d4 = *(undefined4 *)(iVar1 + 0x9290);
  local_d8 = uVar3;
  FUN_segment_0__80500a34(param_1 + 0x404,uVar2,&local_d8);
  return;
}

// === ai_AI_Engine_805234ac (0x805234ac) ===
void ai_AI_Engine_805234ac(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x7c,1);
    FUN_segment_0__804e6240(*g_Ram_uint);
  }
  return;
}

// === ai_AI_Engine_80523538 (0x80523538) ===
void ai_AI_Engine_80523538(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,0x7c,1);
  FUN_segment_0__804e6240(*g_Ram_uint);
  return;
}

// === ai_AI_Engine_80523584 (0x80523584) ===
undefined4 * ai_AI_Engine_80523584(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  FUN_segment_0__8040bcb4(param_1 + 0x1c);
  return param_1;
}

// === AI_Engine_validate_80523608 (0x80523608) ===
int AI_Engine_validate_80523608(int param_1,int param_2)

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

// === ai_AI_Engine_80523670 (0x80523670) ===
void ai_AI_Engine_80523670(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804e4e28(*(undefined4 *)(iRam00000000 + 0x90),4,0,0xffffffff,0);
  FUN_segment_0__804e43c8(*(undefined4 *)(iRam00000000 + 0x90));
  iVar3 = FUN_segment_0__8040bd4c(*(undefined4 *)(iRam00000000 + 0x18));
  iVar4 = iRam00000000;
  if (iVar3 == 0) {
    *(undefined *)(param_1 + 0x6c) = 0;
  }
  else {
    iVar3 = FUN_segment_0__8040bd4c(*(undefined4 *)(iRam00000000 + 0x18));
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x18);
    }
    puVar6 = (undefined4 *)(param_1 + 0x6c);
    puVar5 = (undefined4 *)(iVar4 + -4);
    iVar4 = 0x500;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar2 = *puVar5;
      puVar6[1] = *puVar1;
      puVar6 = puVar6 + 2;
      *puVar6 = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined *)(param_1 + 0x6c) = 1;
  }
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === AI_Engine_validate_80523780 (0x80523780) ===
void AI_Engine_validate_80523780(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined auStack_e8 [104];
  undefined auStack_80 [116];
  
  *(undefined4 *)(param_1 + 0x2870) = 0xffffffff;
  if (*(char *)(param_1 + 0x6c) == 0) {
    AI_Engine_assertFail_80523f28();
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x28c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80523814;
        }
      }
      bVar1 = false;
LAB_segment_0__80523814:
      if (bVar1) goto LAB_segment_0__80523824;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80523824:
  FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x70);
  FUN_segment_0__804c0c30(piVar3 + 0x101,auStack_e8,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === AI_Engine_validate_805238a8 (0x805238a8) ===
void AI_Engine_validate_805238a8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined auStack_e8 [104];
  undefined auStack_80 [116];
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = FUN_segment_0__804e44e8(g_Ram_ptr[0x24]);
      if (iVar2 != 0) {
        return;
      }
      FUN_segment_0__804e4e28(g_Ram_ptr[0x24],4,0,0xffffffff,1);
      *(undefined4 *)(param_1 + 0x68) = 2;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_segment_0__804e44e8(g_Ram_ptr[0x24]);
    if (iVar2 != 0) {
      return;
    }
    *(undefined *)(param_1 + 0x6c) = 1;
    piVar4 = *(int **)(*g_Ram_ptr + 0x148);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80523ab4;
          }
        }
        bVar1 = false;
LAB_segment_0__80523ab4:
        if (bVar1) goto LAB_segment_0__80523ac4;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80523ac4:
    FUN_segment_0__804a9164(piVar4);
    *(undefined4 *)(param_1 + 0x68) = 3;
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
  if (2 < iVar2 - 3U) {
    if (iVar2 != 1) {
      return;
    }
    FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x70);
    FUN_segment_0__804e4670(g_Ram_ptr[0x24],4,0,auStack_e8);
    *(undefined4 *)(param_1 + 0x68) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_80,0,0xc,5);
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805239d0;
        }
      }
      bVar1 = false;
LAB_segment_0__805239d0:
      if (bVar1) goto LAB_segment_0__805239e0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805239e0:
  FUN_segment_0__804a9164(piVar4);
  *(undefined4 *)(param_1 + 0x68) = 4;
  return;
}

// === AI_Engine_validate_80523af0 (0x80523af0) ===
void AI_Engine_validate_80523af0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined auStack_288 [104];
  undefined auStack_220 [112];
  undefined4 local_1b0 [50];
  undefined auStack_e8 [104];
  undefined auStack_80 [116];
  
  iVar2 = param_1[0x1a];
  if (iVar2 != 3) {
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        param_1[0xa1c] = -1;
        FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
        return;
      }
      if (iVar2 != 6) {
        if (iVar2 != 7) {
          return;
        }
        if (g_Ram_ptr[0xc] != 0) {
          return;
        }
        piVar4 = *(int **)(*g_Ram_ptr + 0x28c);
        if (piVar4 != (int *)0) {
          if (piVar4 != (int *)0) {
            for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
                puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
              if (puVar3 == (void *)0) {
                bVar1 = true;
                goto LAB_segment_0__80523ea4;
              }
            }
            bVar1 = false;
LAB_segment_0__80523ea4:
            if (bVar1) goto LAB_segment_0__80523eb4;
          }
          piVar4 = (int *)0;
        }
        else {
          piVar4 = (int *)0;
        }
LAB_segment_0__80523eb4:
        FUN_segment_0__8040bfc4(auStack_288,param_1 + 0x1c);
        FUN_segment_0__804c0c30(piVar4 + 0x101,auStack_288,0);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(auStack_220,0,0xc,5);
      }
      piVar4 = *(int **)(*g_Ram_ptr + 0x28c);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__80523da8;
            }
          }
          bVar1 = false;
LAB_segment_0__80523da8:
          if (bVar1) goto LAB_segment_0__80523db8;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__80523db8:
      if (piVar4[0x2c2] == 0) {
        AI_Engine_validate_805248f4(param_1);
        return;
      }
      if (piVar4[0x2c2] != 1) {
        return;
      }
      iVar2 = *(int *)*g_Ram_ptr;
      if ((iVar2 < 0x7f) || (0x80 < iVar2)) {
        if (iVar2 == 0x81) {
          param_1[0xa1c] = -1;
        }
      }
      else {
        param_1[0xa1c] = 0x9f;
      }
      FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80523c80;
          }
        }
        bVar1 = false;
LAB_segment_0__80523c80:
        if (bVar1) goto LAB_segment_0__80523c90;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80523c90:
    (**(code **)(*piVar4 + 100))(piVar4);
    FUN_segment_0__804ccddc(piVar4,0xfa3,0);
    piVar4[0x62] = (int)(param_1 + 0x11);
    FUN_segment_0__804b4ecc(local_1b0);
    local_1b0[0] = FUN_segment_0__8055590c(g_Ram_ptr);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x17e0,local_1b0);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0x1a] = 5;
    FUN_segment_0__804e6240(*g_Ram_ptr);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x28c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80523ba0;
        }
      }
      bVar1 = false;
LAB_segment_0__80523ba0:
      if (bVar1) goto LAB_segment_0__80523bb0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80523bb0:
  FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x1c);
  FUN_segment_0__804c0c30(piVar4 + 0x101,auStack_e8,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === AI_Engine_assertFail_80523f28 (0x80523f28) ===
void AI_Engine_assertFail_80523f28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Engine_validate_805246a4 (0x805246a4) ===
void AI_Engine_validate_805246a4(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined auStack_e8 [104];
  undefined auStack_80 [112];
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x28c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052472c;
        }
      }
      bVar1 = false;
LAB_segment_0__8052472c:
      if (bVar1) goto LAB_segment_0__8052473c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8052473c:
  FUN_segment_0__8040bfc4(auStack_e8,param_1 + 0x70);
  FUN_segment_0__804c0c30(piVar3 + 0x101,auStack_e8,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === ai_AI_Engine_805247b4 (0x805247b4) ===
void ai_AI_Engine_805247b4(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_d8 [51];
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80524834;
        }
      }
      bVar1 = false;
LAB_segment_0__80524834:
      if (bVar1) goto LAB_segment_0__80524844;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80524844:
  (**(code **)(*piVar3 + 100))(piVar3);
  FUN_segment_0__804ccddc(piVar3,0xfa3,0);
  piVar3[0x62] = (int)(param_1 + 0x11);
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x17e0,local_d8);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  param_1[0x1a] = 5;
  FUN_segment_0__804e6240(*g_Ram_ptr);
  return;
}

// === AI_Engine_validate_805248f4 (0x805248f4) ===
void AI_Engine_validate_805248f4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_f8 [24];
  undefined auStack_e0 [80];
  undefined auStack_90 [80];
  undefined4 local_40;
  
  iVar1 = FUN_segment_0__80716a8c(0x6b);
  *(undefined4 *)(iVar1 + 0x90c) = 0;
  *(undefined4 *)(iVar1 + 0x848) = 0;
  iVar1 = FUN_segment_0__8071b994(0x6c);
  *(undefined4 *)(iVar1 + 0x6f0) = 0;
  iVar2 = FUN_segment_0__80722778(0x6d);
  *(undefined4 *)(iVar2 + 0x6c4) = 0;
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x80) || (0x81 < iVar1)) {
    if (iVar1 == 0x7f) {
      *(undefined4 *)(iVar2 + 0x6c8) = 0x30;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x6c8) = 0x31;
  }
  FUN_segment_0__8040bfc4(auStack_f8,param_1 + 0x1c);
  FUN_segment_0__8041d9ac(g_Ram_uint);
  g_Ram_uint[0x5d7] = 2;
  g_Ram_uint[0x5e0] = g_Ram_uint[0x5e0] & 0xfffffffe;
  g_Ram_uint[0x5e0] = g_Ram_uint[0x5e0] & 0xfffffffd;
  g_Ram_uint[0x5d8] = 5;
  g_Ram_uint[0x5d9] = 0;
  g_Ram_uint[0x346] = 3;
  FUN_segment_0__80421484(g_Ram_uint,param_1 + 0x1c);
  FUN_segment_0__804cddcc(g_Ram_uint[0x26] + 0x188,1,auStack_e0);
  g_Ram_uint[0x382] = 5;
  g_Ram_uint[0x3be] = 5;
  g_Ram_uint[0x3fa] = 5;
  g_Ram_uint[0x436] = 5;
  g_Ram_uint[0x472] = 5;
  g_Ram_uint[0x4ae] = 5;
  g_Ram_uint[0x4ea] = 5;
  g_Ram_uint[0x526] = 5;
  g_Ram_uint[0x562] = 5;
  g_Ram_uint[0x59e] = 5;
  g_Ram_uint[0x5d6] = local_40;
  FUN_segment_0__804c1c9c(g_Ram_uint[0x26]);
  (**(code **)(*param_1 + 0x24))(param_1,0x6b,0);
  param_1[0x1a] = 7;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_90,0,0xc,5);
}

// === ai_AI_Engine_80524aec (0x80524aec) ===
void ai_AI_Engine_80524aec(void)

{
  FUN_segment_0__804f8c44(uRam00000000,0x7c,0);
  FUN_segment_0__804f8cd0(uRam00000000,0,0xff);
  return;
}

// === ai_AI_Engine_80524b34 (0x80524b34) ===
undefined4 * ai_AI_Engine_80524b34(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  FUN_segment_0__804c0a10(param_1 + 0x101);
  FUN_segment_0__804a97a4(param_1 + 0x194);
  FUN_segment_0__804a97a4(param_1 + 0x229);
  uVar1 = uRam00000000;
  param_1[0x229] = 0;
  param_1[0x2be] = 0x7d1;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = uVar1;
  return param_1;
}

// === AI_Engine_validate_80524c4c (0x80524c4c) ===
int AI_Engine_validate_80524c4c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x8a4 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x8a4,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x650,0xffffffff);
    FUN_segment_0__804c0aa0(param_1 + 0x404,0xffffffff);
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

// === ai_AI_Engine_80524cec (0x80524cec) ===
void ai_AI_Engine_80524cec(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  ai_AI_Tricks_80735444(param_1 + 0x290,0);
  ai_AI_Tricks_80735844(param_1 + 0x290,0xfa3,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804c0b08(param_1 + 0x404,0x6b);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x650,0);
  FUN_segment_0__804a9914(param_1 + 0x650,0x7b,0x82,0x95,1,0,0);
  *(undefined4 *)(param_1 + 0x890) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x650,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x8a4,0);
  FUN_segment_0__804a9914(param_1 + 0x8a4,0x9f,0xa6,0xab,1,0,1);
  *(undefined4 *)(param_1 + 0xae4) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x8a4,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x650,0);
  return;
}

// === AI_Engine_validate_80524e70 (0x80524e70) ===
void AI_Engine_validate_80524e70(int param_1)

{
  undefined auStack_e8 [104];
  undefined auStack_80 [124];
  
  FUN_segment_0__8040bfc4(auStack_e8);
  FUN_segment_0__804c0c30(param_1 + 0x404,auStack_e8,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === ai_AI_Engine_80524ec8 (0x80524ec8) ===
void ai_AI_Engine_80524ec8(int param_1,int param_2)

{
  undefined4 *puVar1;
  double dVar2;
  
  if (*(int *)(param_2 + 0x240) == 2) {
    *(undefined4 *)(param_1 + 0xb08) = 0;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    *(undefined4 *)(param_1 + 0xb08) = 1;
    if (*(int *)*g_Ram_uint == 0x81) {
      FUN_segment_0__804f8c44(g_Ram_uint,0x7c,0);
      puVar1 = g_Ram_uint;
      dVar2 = (double)FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804f8cd0(puVar1,(int)dVar2,0xff);
      FUN_segment_0__804e6240(*g_Ram_uint);
    }
    else if (*(int *)*g_Ram_uint == 0xa3) {
      FUN_segment_0__804f8c44(g_Ram_uint,0xa0,0);
      puVar1 = g_Ram_uint;
      dVar2 = (double)FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804f8cd0(puVar1,(int)dVar2,0xff);
    }
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,1);
  }
  return;
}

// === ai_AI_Engine_80524ff4 (0x80524ff4) ===
void ai_AI_Engine_80524ff4(int param_1)

{
  *(undefined4 *)(param_1 + 0xb08) = 1;
  if (*(int *)*g_Ram_uint == 0x81) {
    FUN_segment_0__804f8c44(g_Ram_uint,0x7c,0);
    FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
    FUN_segment_0__804e6240(*g_Ram_uint);
  }
  else if (*(int *)*g_Ram_uint == 0xa3) {
    FUN_segment_0__804f8c44(g_Ram_uint,0xa0,0);
    FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  }
  FUN_segment_0__804d1c48((double)(float)g_Ram_uint,param_1,1);
  return;
}

// === AI_Engine_validate_805250d8 (0x805250d8) ===
void AI_Engine_validate_805250d8(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Engine_validate_80525108 (0x80525108) ===
void AI_Engine_validate_80525108(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Engine_validate_80525138 (0x80525138) ===
void AI_Engine_validate_80525138(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80525168 (0x80525168) ===
void AI_Engine_validate_80525168(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80525198 (0x80525198) ===
void AI_Engine_validate_80525198(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === ai_AI_Engine_805251e8 (0x805251e8) ===
undefined4 * ai_AI_Engine_805251e8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__8040bcb4(param_1 + 0x7d);
  return param_1;
}

// === AI_Engine_validate_80525234 (0x80525234) ===
int AI_Engine_validate_80525234(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === ai_AI_Engine_8052529c (0x8052529c) ===
void ai_AI_Engine_8052529c(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === AI_Engine_validate_80525308 (0x80525308) ===
void AI_Engine_validate_80525308(int param_1)

{
  *(undefined *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x29f4) = 0;
  *(undefined *)(param_1 + 0x1f0) = 0;
  *(undefined *)(param_1 + 0x1f1) = 0;
  *(undefined *)(param_1 + 0x1f2) = 0;
  *(undefined *)(param_1 + 499) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_805253c4 (0x805253c4) ===
void ai_AI_Engine_805253c4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 1) {
    FUN_segment_0__80557d54(iRam00000000);
  }
  else if (iVar1 == 2) {
    FUN_segment_0__80557d54(iRam00000000);
  }
  else if (iVar1 == 3) {
    FUN_segment_0__80557d54(iRam00000000);
  }
  else if (iVar1 == 4) {
    FUN_segment_0__80557d54(iRam00000000);
  }
  if (*(char *)(param_1 + 0x58) != 0) {
    FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
    *(undefined *)(param_1 + 0x58) = 0;
  }
  return;
}

// === AI_Engine_assertFail_80525474 (0x80525474) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AI_Engine_assertFail_80525474(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__805558e0(uRam00000000);
  if (iVar1 != 1) {
    return;
  }
  FUN_segment_0__80555ba0(uRam00000000);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,(_DAT_800000f8 / 4000) * 10);
}

// === AI_Engine_validate_805254f0 (0x805254f0) ===
void AI_Engine_validate_805254f0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  
  if (*(int *)(param_1 + 8) == 4) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 - 5U < 4) {
      iVar2 = FUN_segment_0__804e44e8(*(undefined4 *)((int)g_Ram_float + 0x90));
      if (iVar2 == 0) {
        AI_Engine_validate_805258b8(param_1);
      }
    }
    else if (iVar2 == 0) {
      if (*(int *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c4) == 0) {
        local_20[0] = 0;
        local_24 = 0;
        local_28 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(local_20,&local_24,&local_28);
      }
      if (*(int *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c4) != 0) {
        FUN_segment_0__8055ba08(g_Ram_float);
        *(undefined4 *)(param_1 + 0x54) = 1;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_segment_0__805558e0(g_Ram_float);
      if (iVar2 != 1) {
        iVar2 = FUN_segment_0__805558e8(g_Ram_float);
        if ((iVar2 != 1) && (iVar2 = FUN_segment_0__805558e8(g_Ram_float), iVar2 == 7)) {
          FUN_segment_0__804e45a4(*(undefined4 *)((int)g_Ram_float + 0x90));
        }
        FUN_segment_0__8055b498(g_Ram_float,param_1 + 0x5c,param_1 + 0x29f4);
        *(undefined4 *)(param_1 + 0x54) = 2;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = FUN_segment_0__805558e0(g_Ram_float);
      if (iVar2 != 1) {
        iVar2 = FUN_segment_0__805558e8(g_Ram_float);
        bVar1 = iVar2 == 1;
        if ((!bVar1) && (iVar2 = FUN_segment_0__805558e8(g_Ram_float), iVar2 == 7)) {
          FUN_segment_0__804e45a4(*(undefined4 *)((int)g_Ram_float + 0x90));
        }
        if ((bVar1) && (*(int *)(param_1 + 0x5c) != 0)) {
          *(undefined *)(param_1 + 0x58) = 1;
          FUN_segment_0__8055b7f0(g_Ram_float,param_1 + 0x5c);
          *(undefined4 *)(param_1 + 0x54) = 3;
        }
        else {
          if ((bVar1) && (*(char *)(param_1 + 0x29f4) != 0)) {
            *(undefined *)(param_1 + 0x58) = 1;
          }
          FUN_segment_0__8055b3bc(g_Ram_float,param_1 + 0x1f0);
          *(undefined4 *)(param_1 + 0x54) = 4;
        }
      }
    }
    else if (iVar2 == 3) {
      iVar2 = FUN_segment_0__805558e0(g_Ram_float);
      if (iVar2 != 1) {
        iVar2 = FUN_segment_0__805558e8(g_Ram_float);
        if ((iVar2 != 1) && (iVar2 = FUN_segment_0__805558e8(g_Ram_float), iVar2 == 7)) {
          FUN_segment_0__804e45a4(*(undefined4 *)((int)g_Ram_float + 0x90));
        }
        FUN_segment_0__8055b3bc(g_Ram_float,param_1 + 0x1f0);
        *(undefined4 *)(param_1 + 0x54) = 4;
      }
    }
    else if ((iVar2 == 4) && (iVar2 = FUN_segment_0__805558e0(g_Ram_float), iVar2 != 1)) {
      iVar2 = FUN_segment_0__805558e8(g_Ram_float);
      if ((iVar2 != 1) && (iVar2 = FUN_segment_0__805558e8(g_Ram_float), iVar2 == 7)) {
        FUN_segment_0__804e45a4(*(undefined4 *)((int)g_Ram_float + 0x90));
      }
      *(undefined *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c0) = *(undefined *)(param_1 + 0x1f0);
      *(undefined *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c1) = *(undefined *)(param_1 + 0x1f1);
      *(undefined *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c2) = *(undefined *)(param_1 + 0x1f2);
      *(undefined *)(*(int *)((int)g_Ram_float + 0x98) + 0x4c3) = *(undefined *)(param_1 + 499);
      AI_Engine_validate_805258b8(param_1);
    }
  }
  if ((*(int *)(param_1 + 8) == 4) && (*(int *)((int)g_Ram_float + 0x30) != 0)) {
    FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0xffffffff);
  }
  return;
}

// === AI_Engine_validate_805258b8 (0x805258b8) ===
void AI_Engine_validate_805258b8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short local_f8;
  char local_f6;
  short local_f4;
  char local_f2;
  undefined auStack_f0 [104];
  undefined auStack_88 [64];
  short local_48;
  char local_46;
  short local_44;
  char local_42;
  int local_38;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = iVar3 + 1;
  *(int *)(param_1 + 0x54) = iVar4;
  if (8 < iVar4) {
    *(undefined4 *)(param_1 + 0x54) = 9;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  iVar4 = 0x10000;
  uVar2 = iVar3 - 4U & 0xff;
  if ((*(int *)(*(int *)(iRam00000000 + 0x14) + uVar2 * 0x8cc0 + 8) == 0x524b5044) &&
     (iVar3 = FUN_segment_0__80557df8(iRam00000000,param_1 + 500,uVar2), iVar3 != 0)) {
    local_f2 = 0;
    iVar3 = iRam00000000 + uVar2 * 0x93f0;
    local_f8 = 0;
    local_f6 = 0;
    local_f4 = 0;
    if (*(char *)(iVar3 + 0x9292) != 0) {
      local_f8 = *(short *)(iVar3 + 0x928c);
      local_f6 = *(char *)(iVar3 + 0x928e);
      local_f4 = *(short *)(iVar3 + 0x9290);
      iVar4 = *(int *)(iVar3 + 0x9294);
      local_f2 = *(char *)(iVar3 + 0x9292);
    }
    FUN_segment_0__8040bfc4(auStack_f0,param_1 + 500);
    if ((local_42 == 0) || (local_f2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      if ((local_f4 == local_44) && ((local_f6 == local_46 && (local_f8 == local_48)))) {
        bVar1 = true;
      }
    }
    if ((!bVar1) || (iVar4 != local_38)) {
      FUN_segment_0__804e4a18(*(undefined4 *)(iRam00000000 + 0x90),uVar2,4,0,auStack_f0);
      *(short *)(iVar3 + 0x928c) = local_48;
      *(char *)(iVar3 + 0x928e) = local_46;
      *(short *)(iVar3 + 0x9290) = local_44;
      *(char *)(iVar3 + 0x9292) = local_42;
      *(int *)(iVar3 + 0x9294) = local_38;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_88,0,0xc,5);
  }
  return;
}

// === AI_Engine_validate_80525afc (0x80525afc) ===
int AI_Engine_validate_80525afc(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === AI_Engine_assertFail_80525bac (0x80525bac) ===
void AI_Engine_assertFail_80525bac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_80525de4 (0x80525de4) ===
undefined4 * ai_AI_Engine_80525de4(undefined4 *param_1)

{
  FUN_segment_0__804a97a4();
  *param_1 = 0;
  return param_1;
}

// === AI_Engine_validate_80525e20 (0x80525e20) ===
int AI_Engine_validate_80525e20(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804a98ac(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_validate_80525e78 (0x80525e78) ===
undefined4 AI_Engine_validate_80525e78(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x1270,0xffffffff);
    if (param_1 + 0x100c != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x100c,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0xdb8,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x468,0,0x254,4);
  }
  return 0;
}

// === AI_Engine_validate_80525f30 (0x80525f30) ===
void AI_Engine_validate_80525f30(int param_1)

{
  undefined auStack_40 [24];
  
  FUN_segment_0__804cd808(param_1 + 0x1270,4,1,0);
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x10))(param_1 + 0xd0,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0xd0);
  FUN_segment_0__804ca380(param_1 + 0xd0,2);
  FUN_segment_0__804ca350(param_1 + 0xd0,1,param_1 + 0x80,0,0);
  FUN_segment_0__804d1c1c(param_1,7);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2f4,0);
  ai_AI_Tricks_80735444(param_1 + 0x2f4,0);
  ai_AI_Tricks_80735844(param_1 + 0x2f4,0x838,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x468,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_40,0xf,0x3b,0);
}

// === AI_Engine_validate_8052620c (0x8052620c) ===
/* WARNING: Removing unreachable block (ram,0x80526584) */

void AI_Engine_validate_8052620c
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined auStack_280 [16];
  undefined auStack_270 [16];
  int *local_260;
  int *local_25c;
  int *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined auStack_11c [72];
  undefined4 local_d4;
  int local_58;
  
  local_58 = 0;
  FUN_segment_0__8050105c(param_2,0x80,param_4,param_5,0);
  bVar2 = *(int *)(*(int *)(iRam00000000 + 0x14) + 8 + param_3 * 0x8cc0) == 0x524b5044;
  FUN_segment_0__805011cc(param_2,0x84,!bVar2);
  FUN_segment_0__8050093c(param_2,0x88,0x1781,0);
  FUN_segment_0__805011cc(param_2,0x8c,bVar2);
  if ((bVar2) && (uVar3 = FUN_segment_0__804ce0ec(param_4,param_5), (int)(-uVar3 | uVar3) < 0)) {
    FUN_segment_0__804b4ecc(auStack_11c);
    local_d4 = FUN_segment_0__804ce0ec(param_4,param_5);
    FUN_segment_0__8050093c(param_2,0x90,0x251d,auStack_11c);
  }
  else {
    FUN_segment_0__80500b6c(param_2,0x97);
  }
  local_23c = *(undefined4 *)(local_58 + 0x6c);
  local_238 = *(undefined4 *)(local_58 + 0x70);
  local_234 = *(undefined4 *)(local_58 + 0x74);
  local_230 = *(undefined4 *)(local_58 + 0x30);
  local_240 = *(undefined4 *)(local_58 + 0x68);
  local_250 = *(undefined4 *)(local_58 + 0x78);
  local_22c = *(undefined4 *)(local_58 + 0x34);
  local_228 = *(undefined4 *)(local_58 + 0x38);
  local_224 = *(undefined4 *)(local_58 + 0x3c);
  local_24c = *(undefined4 *)(local_58 + 0x7c);
  local_248 = *(undefined4 *)(local_58 + 0x80);
  local_244 = *(undefined4 *)(local_58 + 0x84);
  local_260 = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0x9e);
  if (local_260 != (int *)0) {
    if (local_260 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_260 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80526444;
        }
      }
      bVar1 = false;
LAB_segment_0__80526444:
      if (bVar1) goto LAB_segment_0__80526454;
    }
    local_260 = (int *)0;
  }
  else {
    local_260 = (int *)0;
  }
LAB_segment_0__80526454:
  local_25c = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0xa9);
  if (local_25c != (int *)0) {
    if (local_25c != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_25c + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805264c0;
        }
      }
      bVar1 = false;
LAB_segment_0__805264c0:
      if (bVar1) goto LAB_segment_0__805264d0;
    }
    local_25c = (int *)0;
  }
  else {
    local_25c = (int *)0;
  }
LAB_segment_0__805264d0:
  local_258 = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0xb6);
  if (local_258 != (int *)0) {
    if (local_258 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_258 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052653c;
        }
      }
      bVar1 = false;
LAB_segment_0__8052653c:
      if (bVar1) goto LAB_segment_0__8052654c;
    }
    local_258 = (int *)0;
  }
  else {
    local_258 = (int *)0;
  }
LAB_segment_0__8052654c:
  if (!bVar2) {
    FUN_segment_0__80500b6c(param_2,local_230);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_280,0xf,0xcb,local_240,0);
  }
  FUN_segment_0__8050093c(param_2,local_230,local_250,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_270,0xf,0xc3,local_240,0);
}

// === ai_AI_Engine_80526b18 (0x80526b18) ===
void ai_AI_Engine_80526b18(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  double dVar8;
  
  FUN_segment_0__804c236c(g_Ram_ptr[0x26]);
  uVar5 = *(int *)(param_2 + 0x240) - 1;
  *(char *)(g_Ram_ptr[0x26] + 0x4e8) = (char)uVar5;
  uVar5 = uVar5 & 0xff;
  if (*(int *)(g_Ram_ptr[5] + uVar5 * 0x8cc0 + 8) == 0x524b5044) {
    FUN_segment_0__8043383c(g_Ram_ptr,uVar5);
    piVar7 = g_Ram_ptr;
    uVar6 = (uint)*(short *)((int)g_Ram_ptr + 0x36);
    if ((int)uVar6 < 0) {
      piVar2 = (int *)0;
    }
    else {
      piVar2 = g_Ram_ptr + (uVar6 & 0xff) * 0x24fc + 0xe;
    }
    if (((*(char *)((int)piVar2 + 0x93e6) != *(char *)(g_Ram_ptr + 0x3c)) ||
        (*(char *)((int)piVar2 + 0x93e7) != *(char *)((int)g_Ram_ptr + 0xf1))) ||
       (*(char *)(piVar2 + 0x24fa) != *(char *)((int)g_Ram_ptr + 0xf2))) {
      if ((int)uVar6 < 0) {
        piVar2 = (int *)0;
      }
      else {
        piVar2 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      *(undefined *)((int)piVar2 + 0x93e6) = *(undefined *)(g_Ram_ptr + 0x3c);
      *(undefined *)((int)piVar2 + 0x93e7) = *(undefined *)((int)piVar7 + 0xf1);
      *(undefined *)(piVar2 + 0x24fa) = *(undefined *)((int)piVar7 + 0xf2);
      *(undefined *)((int)piVar2 + 0x93e9) = *(undefined *)((int)piVar7 + 0xf3);
      if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
        piVar7 = (int *)0;
      }
      else {
        piVar7 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      FUN_segment_0__804383dc(piVar7);
    }
    uVar6 = FUN_segment_0__804ce0ec(param_1 + 0x1270,uVar5);
    if ((int)(-uVar6 | uVar6) < 0) {
      iVar3 = FUN_segment_0__8074db94();
      if (iVar3 == -1) {
        *(undefined4 *)(param_1 + 0x1308) = 0x5a;
      }
      else {
        FUN_segment_0__804f8c44(g_Ram_ptr,iVar3,0);
        piVar7 = g_Ram_ptr;
        dVar8 = (double)FUN_segment_0__804aa384(param_2);
        FUN_segment_0__804f8cd0(piVar7,(int)dVar8,0xff);
        *(undefined4 *)(param_1 + 0x1308) = 0xffffffff;
      }
      FUN_segment_0__804ce6f0(g_Ram_ptr[0x26] + 0x238,param_1 + 0x1270,uVar5,0);
      goto LAB_segment_0__80526e94;
    }
    piVar7 = *(int **)(*g_Ram_ptr + 0x150);
    if (piVar7 != (int *)0) {
      if (piVar7 != (int *)0) {
        for (puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7);
            puVar4 != (void *)0; puVar4 = (undefined4 *)*puVar4) {
          if (puVar4 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80526d78;
          }
        }
        bVar1 = false;
LAB_segment_0__80526d78:
        if (bVar1) goto LAB_segment_0__80526d88;
      }
      piVar7 = (int *)0;
    }
    else {
      piVar7 = (int *)0;
    }
LAB_segment_0__80526d88:
    (**(code **)(*piVar7 + 100))(piVar7);
    FUN_segment_0__804ad8b4(piVar7,0x898,0);
    FUN_segment_0__804ad8bc(piVar7,0x89d,0);
    piVar7[0x208] = param_1 + 0xa8;
    piVar7[0x209] = param_1 + 0xbc;
    *(undefined4 *)(param_1 + 0x1308) = 0x52;
    goto LAB_segment_0__80526e94;
  }
  piVar7 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar7 != (int *)0) {
    if (piVar7 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80526e38;
        }
      }
      bVar1 = false;
LAB_segment_0__80526e38:
      if (bVar1) goto LAB_segment_0__80526e48;
    }
    piVar7 = (int *)0;
  }
  else {
    piVar7 = (int *)0;
  }
LAB_segment_0__80526e48:
  (**(code **)(*piVar7 + 100))(piVar7);
  FUN_segment_0__804ad8b4(piVar7,0x836,0);
  FUN_segment_0__804ad8bc(piVar7,0x835,0);
  piVar7[0x208] = param_1 + 0x94;
  piVar7[0x209] = param_1 + 0xbc;
  *(undefined4 *)(param_1 + 0x1308) = 0x52;
LAB_segment_0__80526e94:
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === ai_AI_Engine_80526ebc (0x80526ebc) ===
void ai_AI_Engine_80526ebc(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(char *)(g_Ram_ptr[0x24] + 0x14) == 0) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x8c,0);
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80526f54;
        }
      }
      bVar1 = false;
LAB_segment_0__80526f54:
      if (bVar1) goto LAB_segment_0__80526f64;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80526f64:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x816,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
  FUN_segment_0__804aa82c(param_2,0);
  return;
}

// === ai_AI_Engine_80527004 (0x80527004) ===
void ai_AI_Engine_80527004(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1308) = 0x57;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === ai_AI_Engine_80527060 (0x80527060) ===
void ai_AI_Engine_80527060(double param_1)

{
  FUN_segment_0__804f8c44(uRam00000000,0x45,0);
  FUN_segment_0__804f8cd0(uRam00000000,(int)param_1,0xff);
  return;
}

// === ai_AI_Engine_805270bc (0x805270bc) ===
void ai_AI_Engine_805270bc(double param_1)

{
  FUN_segment_0__804f8c44(uRam00000000,0x46,0);
  FUN_segment_0__804f8cd0(uRam00000000,(int)param_1,0xff);
  return;
}

// === ai_AI_Engine_80527124 (0x80527124) ===
undefined4 * ai_AI_Engine_80527124(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000058;
  uVar1 = uRam00000054;
  param_1[0x15] = uRam0000005c;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar2 = uRam00000064;
  uVar1 = uRam00000060;
  param_1[0x1a] = uRam00000068;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  uVar2 = uRam00000070;
  uVar1 = uRam0000006c;
  param_1[0x1f] = uRam00000074;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  uVar3 = uRam00000080;
  uVar2 = uRam0000007c;
  uVar1 = uRam00000078;
  param_1[0x20] = 0;
  param_1[0x21] = param_1;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar2;
  param_1[0x24] = uVar3;
  FUN_segment_0__804c880c(param_1 + 0x25);
  FUN_segment_0__80500418(param_1 + 0x76);
  param_1[0x76] = 0;
  FUN_segment_0__80500418(param_1 + 0xd3);
  param_1[0xd3] = 0;
  FUN_segment_0__804ccebc(param_1 + 0x130);
  FUN_segment_0__804cd634(param_1 + 0x18d);
  return param_1;
}

// === AI_Engine_validate_80527288 (0x80527288) ===
int AI_Engine_validate_80527288(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_validate_805272e0 (0x805272e0) ===
int AI_Engine_validate_805272e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x634,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x4c0,0xffffffff);
    if (param_1 + 0x34c != 0) {
      FUN_segment_0__80500540(param_1 + 0x34c,0);
    }
    if (param_1 + 0x1d8 != 0) {
      FUN_segment_0__80500540(param_1 + 0x1d8,0);
    }
    FUN_segment_0__804c88c8(param_1 + 0x94,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === AI_Engine_assertFail_80527380 (0x80527380) ===
void AI_Engine_assertFail_80527380(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Engine_validate_805275ec (0x805275ec) ===
void AI_Engine_validate_805275ec(int param_1)

{
  int iVar1;
  undefined auStack_58 [4];
  undefined auStack_54 [24];
  undefined auStack_3c [36];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = *(int *)*g_Ram_uint;
    if ((0x45 < iVar1) && (iVar1 < 0x48)) {
      FUN_segment_0__804ce0ec(param_1 + 0x634,0);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_54,0,0x16);
    }
    if (iVar1 == 0x45) {
      FUN_segment_0__804ce0ec(param_1 + 0x634,0);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_3c,0,0x16);
    }
    AI_Engine_validate_80527860
              (auStack_58,param_1 + 0x34c,*(undefined *)(g_Ram_uint[0x26] + 0x4e8),
               param_1 + 0x634,0);
  }
  return;
}

// === AI_Engine_validate_80527860 (0x80527860) ===
/* WARNING: Removing unreachable block (ram,0x80527bd8) */

void AI_Engine_validate_80527860
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined auStack_280 [16];
  undefined auStack_270 [16];
  int *local_260;
  int *local_25c;
  int *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined auStack_11c [72];
  undefined4 local_d4;
  int local_58;
  
  local_58 = 0;
  FUN_segment_0__8050105c(param_2,0x154,param_4,param_5,0);
  bVar2 = *(int *)(*(int *)(iRam00000000 + 0x14) + 8 + param_3 * 0x8cc0) == 0x524b5044;
  FUN_segment_0__805011cc(param_2,0x158,!bVar2);
  FUN_segment_0__8050093c(param_2,0x15c,0x1781,0);
  FUN_segment_0__805011cc(param_2,0x160,bVar2);
  if ((bVar2) && (uVar3 = FUN_segment_0__804ce0ec(param_4,param_5), (int)(-uVar3 | uVar3) < 0)) {
    FUN_segment_0__804b4ecc(auStack_11c);
    local_d4 = FUN_segment_0__804ce0ec(param_4,param_5);
    FUN_segment_0__8050093c(param_2,0x164,0x251d,auStack_11c);
  }
  else {
    FUN_segment_0__80500b6c(param_2,0x16b);
  }
  local_23c = *(undefined4 *)(local_58 + 0x23c);
  local_238 = *(undefined4 *)(local_58 + 0x240);
  local_234 = *(undefined4 *)(local_58 + 0x244);
  local_230 = *(undefined4 *)(local_58 + 0x200);
  local_240 = *(undefined4 *)(local_58 + 0x238);
  local_250 = *(undefined4 *)(local_58 + 0x248);
  local_22c = *(undefined4 *)(local_58 + 0x204);
  local_228 = *(undefined4 *)(local_58 + 0x208);
  local_224 = *(undefined4 *)(local_58 + 0x20c);
  local_24c = *(undefined4 *)(local_58 + 0x24c);
  local_248 = *(undefined4 *)(local_58 + 0x250);
  local_244 = *(undefined4 *)(local_58 + 0x254);
  local_260 = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0x172);
  if (local_260 != (int *)0) {
    if (local_260 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_260 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80527a98;
        }
      }
      bVar1 = false;
LAB_segment_0__80527a98:
      if (bVar1) goto LAB_segment_0__80527aa8;
    }
    local_260 = (int *)0;
  }
  else {
    local_260 = (int *)0;
  }
LAB_segment_0__80527aa8:
  local_25c = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0x17d);
  if (local_25c != (int *)0) {
    if (local_25c != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_25c + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80527b14;
        }
      }
      bVar1 = false;
LAB_segment_0__80527b14:
      if (bVar1) goto LAB_segment_0__80527b24;
    }
    local_25c = (int *)0;
  }
  else {
    local_25c = (int *)0;
  }
LAB_segment_0__80527b24:
  local_258 = (int *)FUN_segment_0__804c5d1c(param_2 + 0xa8,0x18a);
  if (local_258 != (int *)0) {
    if (local_258 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*local_258 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80527b90;
        }
      }
      bVar1 = false;
LAB_segment_0__80527b90:
      if (bVar1) goto LAB_segment_0__80527ba0;
    }
    local_258 = (int *)0;
  }
  else {
    local_258 = (int *)0;
  }
LAB_segment_0__80527ba0:
  if (!bVar2) {
    FUN_segment_0__80500b6c(param_2,local_230);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_280,0xf,0x19f,local_240,0);
  }
  FUN_segment_0__8050093c(param_2,local_230,local_250,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_270,0xf,0x197,local_240,0);
}

// === ai_AI_Engine_80528140 (0x80528140) ===
void ai_AI_Engine_80528140(int param_1,undefined4 param_2)

{
  FUN_segment_0__804cde9c(param_1 + 0x634,0,param_2);
  return;
}

// === ai_AI_Engine_80528150 (0x80528150) ===
void ai_AI_Engine_80528150(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined auStack_d8 [72];
  undefined4 local_90;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805281d0;
        }
      }
      bVar1 = false;
LAB_segment_0__805281d0:
      if (bVar1) goto LAB_segment_0__805281e0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805281e0:
  (**(code **)(*piVar4 + 100))(piVar4);
  FUN_segment_0__804b4ecc(auStack_d8);
  local_90 = FUN_segment_0__804ce0ec(param_1 + 0x634,0);
  iVar2 = *(int *)*g_Ram_ptr;
  if ((iVar2 < 0x46) || (0x47 < iVar2)) {
    if (iVar2 == 0x45) {
      FUN_segment_0__804ad8b4(piVar4,0x836,0);
      FUN_segment_0__804ad8bc(piVar4,0x83f,auStack_d8);
    }
  }
  else {
    FUN_segment_0__804ad8b4(piVar4,0x898,0);
    FUN_segment_0__804ad8bc(piVar4,0x840,auStack_d8);
  }
  piVar4[0x208] = param_1 + 0x58;
  piVar4[0x209] = param_1 + 0x6c;
  return;
}

// === AI_Engine_validate_805282a4 (0x805282a4) ===
void AI_Engine_validate_805282a4(int param_1)

{
  undefined auStack_38 [36];
  
  FUN_segment_0__804ce0ec(param_1 + 0x634,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,0,0x16);
}

// === AI_Engine_validate_80528368 (0x80528368) ===
void AI_Engine_validate_80528368(int param_1)

{
  undefined auStack_28 [32];
  
  FUN_segment_0__804ce0ec(param_1 + 0x634,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_28,0,0x16);
}

// === ai_AI_Engine_805284e4 (0x805284e4) ===
void ai_AI_Engine_805284e4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80528564;
        }
      }
      bVar1 = false;
LAB_segment_0__80528564:
      if (bVar1) goto LAB_segment_0__80528574;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80528574:
  (**(code **)(*piVar4 + 100))(piVar4);
  iVar2 = *(int *)*g_Ram_ptr;
  if ((iVar2 < 0x46) || (0x47 < iVar2)) {
    if (iVar2 == 0x45) {
      FUN_segment_0__804ccddc(piVar4,0x836,0);
    }
  }
  else {
    FUN_segment_0__804ccddc(piVar4,0x898,0);
  }
  iVar2 = FUN_segment_0__804ce0ec(param_1 + 0x634,0);
  if (*(char *)(iVar2 + 0xa5) == 0) {
    (**(code **)(*piVar4 + 0x68))(piVar4,0x813,0);
  }
  else {
    (**(code **)(*piVar4 + 0x68))(piVar4,0x814,0);
  }
  piVar4[0x62] = param_1 + 0x80;
  return;
}

// === ai_AI_Engine_8052864c (0x8052864c) ===
void ai_AI_Engine_8052864c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805286cc;
        }
      }
      bVar1 = false;
LAB_segment_0__805286cc:
      if (bVar1) goto LAB_segment_0__805286dc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805286dc:
  (**(code **)(*piVar4 + 100))(piVar4);
  iVar2 = *(int *)*g_Ram_ptr;
  if ((iVar2 < 0x46) || (0x47 < iVar2)) {
    if (iVar2 == 0x45) {
      FUN_segment_0__804ccddc(piVar4,0x836,0);
    }
  }
  else {
    FUN_segment_0__804ccddc(piVar4,0x898,0);
  }
  iVar2 = FUN_segment_0__804ce0ec(param_1 + 0x634,0);
  if (*(char *)(iVar2 + 0xa5) == 0) {
    (**(code **)(*piVar4 + 0x68))(piVar4,0x813,0);
  }
  else {
    (**(code **)(*piVar4 + 0x68))(piVar4,0x814,0);
  }
  dVar5 = (double)(float)g_Ram_ptr;
  piVar4[0x62] = param_1 + 0x80;
  FUN_segment_0__804d1c48(dVar5,param_1,0);
  return;
}

// === ai_AI_Engine_805287e0 (0x805287e0) ===
void ai_AI_Engine_805287e0(void)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x45) || (0x46 < iVar1)) {
    if (iVar1 == 0x47) {
      FUN_segment_0__804f8c44(g_Ram_uint,0x47,0);
      FUN_segment_0__805e819c(g_Ram_uint);
    }
  }
  else {
    FUN_segment_0__804f8c44(g_Ram_uint,0x41,0);
  }
  FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  return;
}

// === AI_Engine_assertFail_80528864 (0x80528864) ===
void AI_Engine_assertFail_80528864(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Engine_validate_80528a84 (0x80528a84) ===
int AI_Engine_validate_80528a84(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x109c,0xffffffff);
    if (param_1 + 0xf28 != 0) {
      FUN_segment_0__80500540(param_1 + 0xf28,0);
    }
    if (param_1 + 0xcc4 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xcc4,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0xa70,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x81c,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x5c8,0xffffffff);
    if (param_1 + 0x454 != 0) {
      FUN_segment_0__80500540(param_1 + 0x454,0);
    }
    if (param_1 + 0x2e0 != 0) {
      FUN_segment_0__80500540(param_1 + 0x2e0,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0xbc,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === AI_Engine_assertFail_80528b5c (0x80528b5c) ===
void AI_Engine_assertFail_80528b5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_80528f70 (0x80528f70) ===
void ai_AI_Engine_80528f70(int param_1)

{
  *(undefined4 *)(param_1 + 0x1134) = 0xffffffff;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_segment_0__804a9eec(param_1 + 0x5c8,0);
    ai_AI_Tricks_80735a00(param_1 + 0xf28,0x849,0);
  }
  return;
}

// === ai_AI_Engine_80528fc8 (0x80528fc8) ===
void ai_AI_Engine_80528fc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1134) = 0xce;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === ai_AI_Engine_8052900c (0x8052900c) ===
void ai_AI_Engine_8052900c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1134) = 0x60;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === ai_AI_Engine_80529050 (0x80529050) ===
void ai_AI_Engine_80529050(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1134) = 0x68;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === ai_AI_Engine_80529094 (0x80529094) ===
void ai_AI_Engine_80529094(int *param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  (**(code **)(*param_1 + 0x1c))(param_1,0x41,1);
  return;
}

// === AI_Engine_validate_805292fc (0x805292fc) ===
int AI_Engine_validate_805292fc(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xa48 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xa48,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x7f4,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x5a0,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x42c,0xffffffff);
    if (param_1 + 0x2b8 != 0) {
      FUN_segment_0__80500540(param_1 + 0x2b8,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x94,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === ai_AI_Engine_805293a8 (0x805293a8) ===
void ai_AI_Engine_805293a8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x94) + 0x10))(param_1 + 0x94,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x94);
  FUN_segment_0__804ca380(param_1 + 0x94,2);
  FUN_segment_0__804ca350(param_1 + 0x94,1,param_1 + 0x6c,0,0);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2b8,0);
  ai_AI_Tricks_80735444(param_1 + 0x2b8,0);
  ai_AI_Tricks_80735844(param_1 + 0x2b8,0x837,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x42c,0);
  FUN_segment_0__804ccf50(param_1 + 0x42c,0x270,0x27f,0x291);
  FUN_segment_0__80500a34(param_1 + 0x42c,0x868,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x5a0,0);
  FUN_segment_0__804a9914(param_1 + 0x5a0,0x2a3,0x2b2,0x2be,1,0,0);
  *(undefined4 *)(param_1 + 0x7e0) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x5a0,param_1 + 0x44,0);
  FUN_segment_0__80500a34(param_1 + 0x5a0,0x7d2,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7f4,0);
  FUN_segment_0__804a9914(param_1 + 0x7f4,0x2c6,0x2d5,0x2e1,1,0,0);
  *(undefined4 *)(param_1 + 0xa34) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7f4,param_1 + 0x58,0);
  FUN_segment_0__80500a34(param_1 + 0x7f4,0x7d3,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xa48,0);
  FUN_segment_0__804a9914(param_1 + 0xa48,0x2e9,0x2f0,0x2f5,1,0,1);
  *(undefined4 *)(param_1 + 0xc88) = 4;
  FUN_segment_0__804a9ec4(param_1 + 0xa48,param_1 + 0x58,0);
  FUN_segment_0__804a9eec(param_1 + 0x7f4,0);
  return;
}

// === ai_AI_Engine_805295bc (0x805295bc) ===
void ai_AI_Engine_805295bc(int param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x140);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80529640;
        }
      }
      bVar1 = false;
LAB_segment_0__80529640:
      if (bVar1) goto LAB_segment_0__80529650;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80529650:
  if (piVar4[0x9c] != 0) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805296c0;
        }
      }
      bVar1 = false;
LAB_segment_0__805296c0:
      if (bVar1) goto LAB_segment_0__805296d0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805296d0:
  (**(code **)(*piVar4 + 100))(piVar4);
  FUN_segment_0__804ccddc(piVar4,0x837,0);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x869,0);
  piVar4[0x62] = param_1 + 0x80;
  uVar2 = *(ushort *)((int)g_Ram_ptr + 0x36) & 0xff;
  FUN_segment_0__804e4df4(g_Ram_ptr[0x24],uVar2,4,0,0);
  FUN_segment_0__80436b20(g_Ram_ptr,uVar2);
  FUN_segment_0__804e45d0(g_Ram_ptr[0x24]);
  FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
  return;
}

// === ai_AI_Engine_805297ac (0x805297ac) ===
void ai_AI_Engine_805297ac(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x140);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80529834;
        }
      }
      bVar1 = false;
LAB_segment_0__80529834:
      if (bVar1) goto LAB_segment_0__80529844;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80529844:
  (**(code **)(*piVar3 + 100))(piVar3);
  FUN_segment_0__80512c88(piVar3,0x86e,0);
  FUN_segment_0__80512c90(piVar3,0,0x7d2,0,0xffffffff,0);
  FUN_segment_0__80512c90(piVar3,1,0x7d3,0,0xffffffff,0);
  piVar3[0x9f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x4e,0);
  FUN_segment_0__804aa82c(param_2,0);
  return;
}

// === ai_AI_Engine_805298f0 (0x805298f0) ===
void ai_AI_Engine_805298f0(undefined4 param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  FUN_segment_0__804aa82c(param_2,6);
  return;
}

// === ai_AI_Engine_80529954 (0x80529954) ===
void ai_AI_Engine_80529954(void)

{
  FUN_segment_0__804f8c44(uRam00000000,0x3f,0);
  FUN_segment_0__804f8cd0(uRam00000000,0,0xff);
  return;
}

// === AI_Engine_validate_805299fc (0x805299fc) ===
void AI_Engine_validate_805299fc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Engine_validate_80529a2c (0x80529a2c) ===
void AI_Engine_validate_80529a2c(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Engine_validate_80529a5c (0x80529a5c) ===
void AI_Engine_validate_80529a5c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529a8c (0x80529a8c) ===
void AI_Engine_validate_80529a8c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529abc (0x80529abc) ===
void AI_Engine_validate_80529abc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Engine_validate_80529aec (0x80529aec) ===
void AI_Engine_validate_80529aec(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529b1c (0x80529b1c) ===
void AI_Engine_validate_80529b1c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529b4c (0x80529b4c) ===
void AI_Engine_validate_80529b4c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529b7c (0x80529b7c) ===
void AI_Engine_validate_80529b7c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529bac (0x80529bac) ===
void AI_Engine_validate_80529bac(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Engine_validate_80529bdc (0x80529bdc) ===
void AI_Engine_validate_80529bdc(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === ai_AI_Engine_80529c48 (0x80529c48) ===
undefined4 ai_AI_Engine_80529c48(undefined4 param_1)

{
  FUN_segment_0__804cc2f0();
  return param_1;
}

// === AI_Engine_validate_80529c78 (0x80529c78) ===
int AI_Engine_validate_80529c78(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804cc30c(param_1,0xffffffff), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_validate_80529cd0 (0x80529cd0) ===
void AI_Engine_validate_80529cd0(int param_1)

{
  int iVar1;
  undefined auStack_a8 [160];
  
  FUN_segment_0__804cc34c(param_1,0);
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  FUN_segment_0__804cd634(auStack_a8);
  FUN_segment_0__804cd808(auStack_a8,1,0,0);
  FUN_segment_0__804cde9c(auStack_a8,0,iVar1 + 0x16);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x14,0,0x16);
}

// === AI_Engine_validate_80529df0 (0x80529df0) ===
void AI_Engine_validate_80529df0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x38,0,0x800);
}

// === ai_AI_Engine_80529eec (0x80529eec) ===
undefined4 * ai_AI_Engine_80529eec(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Engine_validate_80529f28 (0x80529f28) ===
int AI_Engine_validate_80529f28(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === ai_AI_Engine_80529f80 (0x80529f80) ===
void ai_AI_Engine_80529f80(int param_1)

{
  undefined4 uVar1;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_38 [52];
  
  *(undefined *)(param_1 + 0x17e) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_48 = g_Ram_float;
  local_44 = uRam00000004;
  local_40 = uRam00000008;
  local_3c = uRam0000000c;
  FUN_segment_0__804ae36c(auStack_38,0x17,0x1d,0x2d,&local_48);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined *)(param_1 + 0x80) = 1;
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === AI_Engine_validate_8052a064 (0x8052a064) ===
void AI_Engine_validate_8052a064(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined uVar6;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  int *piVar8;
  undefined auStack_30 [32];
  
  if (*(char *)(param_1 + 0x17e) == 0) {
    if (*(int *)(param_1 + 0x174) != -1) {
      uVar3 = 0xff;
      iVar4 = *(short *)(param_1 + 0x17c) + 0x32;
      if (iVar4 < 0x100) {
        uVar3 = (undefined2)iVar4;
      }
      *(undefined2 *)(param_1 + 0x17c) = uVar3;
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x17c) + -0x32;
    *(short *)(param_1 + 0x17c) = sVar2;
    if (sVar2 < 1) {
      *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x178);
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(int *)(param_1 + 0x178) != -1) {
        *(undefined *)(param_1 + 0x17e) = 0;
        piVar8 = *(int **)(*g_Ram_ptr + 0x204);
        if (piVar8 != (int *)0) {
          if (piVar8 != (int *)0) {
            for (puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8);
                puVar5 != (void *)0; puVar5 = (undefined4 *)*puVar5) {
              if (puVar5 == (void *)0) {
                bVar1 = true;
                goto LAB_segment_0__8052a124;
              }
            }
            bVar1 = false;
LAB_segment_0__8052a124:
            if (bVar1) goto LAB_segment_0__8052a134;
          }
          piVar8 = (int *)0;
        }
        else {
          piVar8 = (int *)0;
        }
LAB_segment_0__8052a134:
        if (piVar8 != (int *)0) {
          ai_AI_Engine_8052cb40(piVar8,*(undefined4 *)(param_1 + 0x174));
        }
      }
    }
  }
  uVar6 = 0;
  if ((*(int *)(param_1 + 0x174) == -1) && (*(short *)(param_1 + 0x17c) == 0)) {
    uVar6 = 1;
  }
  *(undefined *)(param_1 + 0x80) = uVar6;
  piVar8 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar5 != (void *)0
          ; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052a1fc;
        }
      }
      bVar1 = false;
LAB_segment_0__8052a1fc:
      if (bVar1) goto LAB_segment_0__8052a20c;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__8052a20c:
  if (piVar8 != (int *)0) {
    uVar7 = 0;
    if ((*(int *)(param_1 + 0x174) != -1) || (*(short *)(param_1 + 0x17c) != 0)) {
      uVar7 = 1;
    }
    ai_AI_Engine_8052cbec(piVar8,uVar7);
    iVar4 = ai_AI_Engine_8052cc2c(piVar8);
    if (iVar4 != 0) {
      piVar8 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x3d);
      if ((piVar8 != (int *)0) && (piVar8 != (int *)0)) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0xc))();
            (puVar5 != (void *)0 && (puVar5 != (void *)0));
            puVar5 = (undefined4 *)*puVar5) {
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_30,iVar4);
    }
  }
  return;
}

// === ai_AI_Engine_8052a404 (0x8052a404) ===
undefined4 * ai_AI_Engine_8052a404(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Engine_validate_8052a440 (0x8052a440) ===
int AI_Engine_validate_8052a440(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_assertFail_8052a498 (0x8052a498) ===
void AI_Engine_assertFail_8052a498(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_8052a628 (0x8052a628) ===
void ai_AI_Engine_8052a628(int param_1,int param_2)

{
  if ((param_2 != 0x83) && (param_2 != 0x6b)) {
    *(undefined *)(param_1 + 0x180) = 1;
    return;
  }
  *(undefined *)(param_1 + 0x180) = 0;
  return;
}

// === ai_AI_Engine_8052a650 (0x8052a650) ===
void ai_AI_Engine_8052a650(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  piVar3 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052a6dc;
        }
      }
      bVar1 = false;
LAB_segment_0__8052a6dc:
      if (bVar1) goto LAB_segment_0__8052a6ec;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8052a6ec:
  ai_AI_Engine_8052c89c(piVar3,*(undefined *)(param_1 + 0x174),param_2);
  ai_AI_Engine_8052a9ec(param_1);
  return;
}

// === AI_Engine_validate_8052a728 (0x8052a728) ===
void AI_Engine_validate_8052a728(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined auStack_38 [40];
  
  piVar6 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar6 != (int *)0) {
    if (piVar6 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0x60))(piVar6); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052a7ac;
        }
      }
      bVar1 = false;
LAB_segment_0__8052a7ac:
      if (bVar1) goto LAB_segment_0__8052a7bc;
    }
    piVar6 = (int *)0;
  }
  else {
    piVar6 = (int *)0;
  }
LAB_segment_0__8052a7bc:
  if (piVar6 != (int *)0) {
    ai_AI_Engine_8052cb68(piVar6,*(undefined *)(param_1 + 0x174),1,0);
    iVar2 = ai_AI_Engine_8052cc08(piVar6,*(undefined *)(param_1 + 0x174));
    if (iVar2 != 0) {
      piVar6 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x62);
      if ((piVar6 != (int *)0) && (piVar6 != (int *)0)) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0xc))();
            (puVar3 != (void *)0 && (puVar3 != (void *)0));
            puVar3 = (undefined4 *)*puVar3) {
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_38,iVar2);
    }
    if ((g_Ram_ptr != (int *)0) && (iVar2 = g_Ram_ptr[5], iVar2 != 0)) {
      uVar5 = (uint)*(byte *)(param_1 + 0x174);
      iVar4 = *(int *)(iVar2 + uVar5 * 0xc + 0x18);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      if ((iVar4 != 1) && (iVar2 = *(int *)(iVar2 + uVar5 * 0xc + 0x18), iVar2 != 0)) {
        FUN_segment_0__807408f0(iVar2,uVar5,0);
      }
    }
  }
  return;
}

// === ai_AI_Engine_8052a9a0 (0x8052a9a0) ===
void ai_AI_Engine_8052a9a0(int param_1)

{
  if (*(char *)(param_1 + 0x180) != 0) {
    *(undefined4 *)(param_1 + 0x184) = uRam00000000;
    FUN_segment_0__804ffe14();
    ai_AI_Engine_8052a9ec(param_1);
  }
  return;
}

// === ai_AI_Engine_8052a9ec (0x8052a9ec) ===
void ai_AI_Engine_8052a9ec(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  
  piVar12 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar12 != (int *)0) {
    if (piVar12 != (int *)0) {
      for (puVar8 = (undefined4 *)(**(code **)(*piVar12 + 0x60))(piVar12);
          puVar8 != (void *)0; puVar8 = (undefined4 *)*puVar8) {
        if (puVar8 == (void *)0) {
          bVar7 = true;
          goto LAB_segment_0__8052aa6c;
        }
      }
      bVar7 = false;
LAB_segment_0__8052aa6c:
      if (bVar7) goto LAB_segment_0__8052aa7c;
    }
    piVar12 = (int *)0;
  }
  else {
    piVar12 = (int *)0;
  }
LAB_segment_0__8052aa7c:
  if (piVar12 != (int *)0) {
    pfVar9 = (float *)ai_AI_Engine_8052d160
                                (piVar12 + 0x25,*(undefined4 *)(param_1 + 0x17c),
                                 *(undefined4 *)(param_1 + 0x178),0);
    pfVar10 = (float *)ai_AI_Engine_8052d160
                                 (piVar12 + 0x25,*(undefined4 *)(param_1 + 0x17c),
                                  *(undefined4 *)(param_1 + 0x178),2);
    iVar11 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x6e);
    piVar12 = g_Ram_ptr;
    fVar1 = *(float *)(param_1 + 0x184);
    fVar6 = (float)g_Ram_ptr - fVar1;
    fVar2 = pfVar9[1];
    fVar3 = pfVar10[1];
    fVar4 = pfVar9[2];
    fVar5 = pfVar10[2];
    *(float *)(iVar11 + 0x2c) = *pfVar9 * fVar6 + *pfVar10 * fVar1;
    *(float *)(iVar11 + 0x30) = fVar2 * fVar6 + fVar3 * fVar1;
    *(int **)(iVar11 + 0x34) = piVar12;
    fVar1 = fVar4 * fVar6 + fVar5 * fVar1;
    *(float *)(iVar11 + 0x44) = fVar1;
    *(float *)(iVar11 + 0x48) = fVar1;
  }
  return;
}

// === ai_AI_Engine_8052ab78 (0x8052ab78) ===
undefined4 * ai_AI_Engine_8052ab78(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Engine_validate_8052abb4 (0x8052abb4) ===
int AI_Engine_validate_8052abb4(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_assertFail_8052ac0c (0x8052ac0c) ===
void AI_Engine_assertFail_8052ac0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_8052ad54 (0x8052ad54) ===
void ai_AI_Engine_8052ad54(int param_1,int param_2)

{
  if ((1 < param_2 - 0x6dU) && (param_2 != 0x82)) {
    *(undefined *)(param_1 + 0x17c) = 0;
    return;
  }
  *(undefined *)(param_1 + 0x17c) = 1;
  return;
}

// === ai_AI_Engine_8052ad80 (0x8052ad80) ===
void ai_AI_Engine_8052ad80(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052ae08;
        }
      }
      bVar1 = false;
LAB_segment_0__8052ae08:
      if (bVar1) goto LAB_segment_0__8052ae18;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8052ae18:
  ai_AI_Engine_8052cb14(piVar3,*(undefined *)(param_1 + 0x174),param_2);
  return;
}

// === ai_AI_Engine_8052ae48 (0x8052ae48) ===
void ai_AI_Engine_8052ae48(int param_1)

{
  int iVar1;
  
  if ((iRam00000000 != 0) && (*(int *)(iRam00000000 + 0x14) != 0)) {
    iVar1 = *(int *)(*(int *)(iRam00000000 + 0x14) + (uint)*(byte *)(param_1 + 0x174) * 0xc + 0x18);
    if (iVar1 != 0) {
      FUN_segment_0__807408f0(iVar1,(uint)*(byte *)(param_1 + 0x174),2);
    }
  }
  ai_AI_Engine_8052b2cc(param_1);
  return;
}

// === AI_Engine_validate_8052aeb4 (0x8052aeb4) ===
void AI_Engine_validate_8052aeb4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined auStack_38 [40];
  
  *(undefined *)(param_1 + 0x80) = 1;
  piVar8 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052af40;
        }
      }
      bVar1 = false;
LAB_segment_0__8052af40:
      if (bVar1) goto LAB_segment_0__8052af50;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__8052af50:
  if (piVar8 == (int *)0) {
    return;
  }
  ai_AI_Engine_8052cb68(piVar8,*(undefined *)(param_1 + 0x174),0,0);
  uVar5 = (uint)*(byte *)(param_1 + 0x174);
  if (*(char *)(piVar8 + uVar5 * 3 + 0x17) == 0) goto LAB_segment_0__8052b0fc;
  iVar2 = *(int *)*g_Ram_ptr;
  if (((iVar2 < 0x92) || (0x93 < iVar2)) && (iVar2 != 0x90)) {
    if (iVar2 == 0x91) {
      ai_AI_Engine_8052cb68(piVar8,uVar5,0,1);
      *(undefined *)(param_1 + 0x80) = 0;
    }
    else {
      ai_AI_Engine_8052cb68(piVar8,uVar5,1,1);
      *(undefined *)(param_1 + 0x80) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0x80) = 1;
  }
  piVar7 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar7 != (int *)0) {
    if (piVar7 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052b05c;
        }
      }
      bVar1 = false;
LAB_segment_0__8052b05c:
      if (bVar1) goto LAB_segment_0__8052b06c;
    }
    piVar7 = (int *)0;
  }
  else {
    piVar7 = (int *)0;
  }
LAB_segment_0__8052b06c:
  iVar2 = piVar7[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x16];
  ai_AI_Engine_8052cb14(piVar7,(uint)*(byte *)(param_1 + 0x174),iVar2);
  if ((g_Ram_ptr != (int *)0) && (iVar6 = g_Ram_ptr[5], iVar6 != 0)) {
    uVar5 = (uint)*(byte *)(param_1 + 0x174);
    iVar3 = *(int *)(iVar6 + uVar5 * 0xc + 0x18);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 8);
    }
    if (iVar3 != 3) {
      iVar6 = iVar6 + uVar5 * 0xc;
      iVar3 = *(int *)(iVar6 + 0x18);
      if (iVar3 != 0) {
        if (iVar2 != -1) {
          *(int *)(iVar3 + 0x14) = iVar2;
        }
        FUN_segment_0__807408f0(*(undefined4 *)(iVar6 + 0x18),uVar5,2);
      }
    }
  }
LAB_segment_0__8052b0fc:
  iVar2 = ai_AI_Engine_8052cc08(piVar8,*(undefined *)(param_1 + 0x174));
  if (iVar2 == 0) {
    return;
  }
  piVar8 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x93);
  if ((piVar8 != (int *)0) && (piVar8 != (int *)0)) {
    for (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0xc))();
        (puVar4 != (void *)0 && (puVar4 != (void *)0));
        puVar4 = (undefined4 *)*puVar4) {
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,iVar2);
}

// === ai_AI_Engine_8052b260 (0x8052b260) ===
void ai_AI_Engine_8052b260(double param_1,int param_2)

{
  if (*(char *)(param_2 + 0x17c) == 0) {
    *(float *)(param_2 + 0x180) = g_Ram_float;
    FUN_segment_0__804ffe14();
  }
  else {
    if (param_1 <= (double)g_Ram_float) {
      param_1 = -param_1;
    }
    *(float *)(param_2 + 0x180) = (float)param_1;
  }
  ai_AI_Engine_8052b2cc(param_2);
  return;
}

// === ai_AI_Engine_8052b2cc (0x8052b2cc) ===
void ai_AI_Engine_8052b2cc(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  
  piVar12 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar12 != (int *)0) {
    if (piVar12 != (int *)0) {
      for (puVar8 = (undefined4 *)(**(code **)(*piVar12 + 0x60))(piVar12);
          puVar8 != (void *)0; puVar8 = (undefined4 *)*puVar8) {
        if (puVar8 == (void *)0) {
          bVar7 = true;
          goto LAB_segment_0__8052b34c;
        }
      }
      bVar7 = false;
LAB_segment_0__8052b34c:
      if (bVar7) goto LAB_segment_0__8052b35c;
    }
    piVar12 = (int *)0;
  }
  else {
    piVar12 = (int *)0;
  }
LAB_segment_0__8052b35c:
  if (piVar12 != (int *)0) {
    pfVar9 = (float *)ai_AI_Engine_8052d160
                                (piVar12 + 0x25,piVar12[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x15]
                                 ,*(undefined4 *)(param_1 + 0x178),1);
    pfVar10 = (float *)ai_AI_Engine_8052d160
                                 (piVar12 + 0x25,
                                  piVar12[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x15],
                                  *(undefined4 *)(param_1 + 0x178),2);
    iVar11 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x9f);
    piVar12 = g_Ram_ptr;
    fVar1 = *(float *)(param_1 + 0x180);
    fVar6 = (float)g_Ram_ptr - fVar1;
    fVar2 = pfVar9[1];
    fVar3 = pfVar10[1];
    fVar4 = pfVar9[2];
    fVar5 = pfVar10[2];
    *(float *)(iVar11 + 0x2c) = *pfVar9 * fVar6 + *pfVar10 * fVar1;
    *(float *)(iVar11 + 0x30) = fVar2 * fVar6 + fVar3 * fVar1;
    *(int **)(iVar11 + 0x34) = piVar12;
    fVar1 = fVar4 * fVar6 + fVar5 * fVar1;
    *(float *)(iVar11 + 0x44) = fVar1;
    *(float *)(iVar11 + 0x48) = fVar1;
  }
  return;
}

// === ai_AI_Engine_8052b470 (0x8052b470) ===
undefined4 * ai_AI_Engine_8052b470(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Engine_validate_8052b4ac (0x8052b4ac) ===
int AI_Engine_validate_8052b4ac(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Engine_assertFail_8052b504 (0x8052b504) ===
void AI_Engine_assertFail_8052b504(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_8052b65c (0x8052b65c) ===
void ai_AI_Engine_8052b65c(int param_1,int param_2)

{
  undefined uVar1;
  
  uVar1 = 0;
  if ((param_2 == -1) || (param_2 == 0x70)) {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0x17c) = uVar1;
  return;
}

// === ai_AI_Engine_8052b67c (0x8052b67c) ===
void ai_AI_Engine_8052b67c(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined *)(param_1 + 0x80) = 1;
  piVar5 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__8052b704;
        }
      }
      bVar2 = false;
LAB_segment_0__8052b704:
      if (bVar2) goto LAB_segment_0__8052b714;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8052b714:
  if (piVar5 != (int *)0) {
    puVar3 = (undefined4 *)
             ai_AI_Engine_8052d160
                       (piVar5 + 0x25,piVar5[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x15],
                        *(undefined4 *)(param_1 + 0x178),2);
    iVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xc1);
    uVar1 = puVar3[1];
    *(undefined4 *)(iVar4 + 0x2c) = *puVar3;
    piVar5 = g_Ram_ptr;
    *(undefined4 *)(iVar4 + 0x30) = uVar1;
    *(int **)(iVar4 + 0x34) = piVar5;
    uVar1 = puVar3[2];
    *(undefined4 *)(iVar4 + 0x44) = uVar1;
    *(undefined4 *)(iVar4 + 0x48) = uVar1;
  }
  return;
}

// === AI_Engine_assertFail_8052b7b4 (0x8052b7b4) ===
void AI_Engine_assertFail_8052b7b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Engine_8052beb8 (0x8052beb8) ===
void ai_AI_Engine_8052beb8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 0x17c) == 0) {
    FUN_segment_0__804ffe14((double)(float)g_Ram_ptr);
  }
  else {
    FUN_segment_0__804ffe14();
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__8052bf58;
        }
      }
      bVar2 = false;
LAB_segment_0__8052bf58:
      if (bVar2) goto LAB_segment_0__8052bf68;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8052bf68:
  if (piVar5 != (int *)0) {
    puVar3 = (undefined4 *)
             ai_AI_Engine_8052d160
                       (piVar5 + 0x25,piVar5[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x15],
                        *(undefined4 *)(param_1 + 0x178),2);
    iVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xd8);
    uVar1 = puVar3[1];
    *(undefined4 *)(iVar4 + 0x2c) = *puVar3;
    piVar5 = g_Ram_ptr;
    *(undefined4 *)(iVar4 + 0x30) = uVar1;
    *(int **)(iVar4 + 0x34) = piVar5;
    uVar1 = puVar3[2];
    *(undefined4 *)(iVar4 + 0x44) = uVar1;
    *(undefined4 *)(iVar4 + 0x48) = uVar1;
  }
  return;
}

// === ai_AI_Engine_8052c008 (0x8052c008) ===
void ai_AI_Engine_8052c008(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__8052c088;
        }
      }
      bVar2 = false;
LAB_segment_0__8052c088:
      if (bVar2) goto LAB_segment_0__8052c098;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8052c098:
  if (piVar5 != (int *)0) {
    puVar3 = (undefined4 *)
             ai_AI_Engine_8052d160
                       (piVar5 + 0x25,piVar5[(uint)*(byte *)(param_1 + 0x174) * 3 + 0x15],
                        *(undefined4 *)(param_1 + 0x178),2);
    iVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xe3);
    uVar1 = puVar3[1];
    *(undefined4 *)(iVar4 + 0x2c) = *puVar3;
    piVar5 = g_Ram_ptr;
    *(undefined4 *)(iVar4 + 0x30) = uVar1;
    *(int **)(iVar4 + 0x34) = piVar5;
    uVar1 = puVar3[2];
    *(undefined4 *)(iVar4 + 0x44) = uVar1;
    *(undefined4 *)(iVar4 + 0x48) = uVar1;
  }
  return;
}

// === ai_AI_Engine_8052c18c (0x8052c18c) ===
undefined4 * ai_AI_Engine_8052c18c(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  uVar4 = uRam00000000;
  puVar7 = param_1 + 0x28;
  puVar6 = param_1 + 0x679;
  *(undefined *)(param_1 + 0x21) = 0;
  param_1[0x25] = uVar4;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar4;
  uVar4 = uRam00000000;
  if (puVar7 < puVar6) {
    uVar8 = (int)puVar6 - (int)(param_1 + 0x28);
    uVar9 = uVar8 + 0xb;
    iVar5 = (int)uVar9 / 0xc + ((int)uVar9 >> 0x1f);
    uVar10 = iVar5 - (iVar5 >> 0x1f);
    uVar11 = uVar10 + 1;
    if (8 < (int)uVar11) {
      bVar3 = false;
      bVar2 = false;
      if (param_1 + 0x28 <= puVar6) {
        bVar1 = true;
        if (((uVar8 & 0x80000000) == 0) && ((uVar9 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        bVar2 = true;
        if (((uVar10 & 0x80000000) == 0) && ((uVar11 & 0x80000000) != 0)) {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        uVar8 = (uint)((int)param_1 + (0x19e3 - (int)puVar7)) / 0x60;
        if (puVar7 < param_1 + 0x661) {
          do {
            *puVar7 = uVar4;
            puVar7[1] = uVar4;
            puVar7[2] = uVar4;
            puVar7[3] = uVar4;
            puVar7[4] = uVar4;
            puVar7[5] = uVar4;
            puVar7[6] = uVar4;
            puVar7[7] = uVar4;
            puVar7[8] = uVar4;
            puVar7[9] = uVar4;
            puVar7[10] = uVar4;
            puVar7[0xb] = uVar4;
            puVar7[0xc] = uVar4;
            puVar7[0xd] = uVar4;
            puVar7[0xe] = uVar4;
            puVar7[0xf] = uVar4;
            puVar7[0x10] = uVar4;
            puVar7[0x11] = uVar4;
            puVar7[0x12] = uVar4;
            puVar7[0x13] = uVar4;
            puVar7[0x14] = uVar4;
            puVar7[0x15] = uVar4;
            puVar7[0x16] = uVar4;
            puVar7[0x17] = uVar4;
            puVar7 = puVar7 + 0x18;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
    }
    uVar4 = uRam00000000;
    uVar8 = (uint)((int)param_1 + (0x19ef - (int)puVar7)) / 0xc;
    if (puVar7 < param_1 + 0x679) {
      do {
        *puVar7 = uVar4;
        puVar7[1] = uVar4;
        puVar7[2] = uVar4;
        puVar7 = puVar7 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  ai_AI_Engine_8052d1b8(param_1 + 0x25);
  return param_1;
}

// === AI_Engine_validate_8052c384 (0x8052c384) ===
int AI_Engine_validate_8052c384(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === AI_Engine_validate_8052c3ec (0x8052c3ec) ===
void AI_Engine_validate_8052c3ec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined uVar3;
  
  puVar1 = g_Ram_uint;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 4;
  *(undefined *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 4;
  *(undefined *)(param_1 + 0x68) = 0;
  *(undefined *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 4;
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 4;
  *(undefined *)(param_1 + 0x80) = 0;
  *(undefined *)(param_1 + 0x81) = 0;
  *(undefined4 **)(param_1 + 0x88) = puVar1;
  *(undefined *)(param_1 + 0x90) = 0;
  iVar2 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_uint);
  if ((iVar2 != 1) && (iVar2 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_uint), iVar2 != 4))
  {
    *(undefined *)(param_1 + 0x90) = 1;
    (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
    FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
    FUN_segment_0__804d1c1c(param_1,0);
    return;
  }
  if (g_Ram_uint == (void *)0) {
    *(undefined *)(param_1 + 0x90) = 1;
    (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
    FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
    FUN_segment_0__804d1c1c(param_1,0);
    return;
  }
  iVar2 = *(int *)*g_Ram_uint;
  if (iVar2 != 0x5a) {
    if (iVar2 < 0x5a) {
      if (iVar2 == 0x4e) goto LAB_segment_0__8052c5ac;
      if (iVar2 < 0x4e) {
        if (iVar2 < 0x48) {
          if ((0x3e < iVar2) || (iVar2 < 0x3d)) goto LAB_segment_0__8052c5bc;
        }
        else if ((iVar2 < 0x4d) && (0x4a < iVar2)) goto LAB_segment_0__8052c5b4;
      }
      else {
        if (iVar2 == 0x54) {
LAB_segment_0__8052c5b4:
          uVar3 = ai_AI_Control_8072fa50();
          goto LAB_segment_0__8052c5c0;
        }
        if (iVar2 < 0x54) {
          if (iVar2 == 0x50) goto LAB_segment_0__8052c5ac;
          if (0x4f < iVar2) goto LAB_segment_0__8052c5bc;
        }
      }
      goto LAB_segment_0__8052c5a4;
    }
    if (iVar2 != 0x82) {
      if (iVar2 < 0x82) {
        if (iVar2 < 0x68) {
          if ((iVar2 < 100) && (0x5f < iVar2)) goto LAB_segment_0__8052c5a4;
        }
        else if (iVar2 < 0x7f) goto LAB_segment_0__8052c5bc;
LAB_segment_0__8052c5ac:
        uVar3 = 2;
        goto LAB_segment_0__8052c5c0;
      }
      if (iVar2 < 0x90) {
        if (iVar2 < 0x87) {
LAB_segment_0__8052c5a4:
          uVar3 = 1;
          goto LAB_segment_0__8052c5c0;
        }
      }
      else if (iVar2 < 0x94) goto LAB_segment_0__8052c5a4;
    }
  }
LAB_segment_0__8052c5bc:
  uVar3 = 0;
LAB_segment_0__8052c5c0:
  *(undefined *)(param_1 + 0x84) = uVar3;
  iVar2 = FUN_segment_0__8040bafc();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar2 + 0xc94,0);
}

// === ai_AI_Engine_8052c6dc (0x8052c6dc) ===
void ai_AI_Engine_8052c6dc(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x4a) || (0x4c < iVar1)) {
    if ((0x3c < iVar1) &&
       ((iVar1 < 0x3f && (*(undefined4 *)(param_1 + 0x54) = 0x19, *(char *)(param_1 + 0x90) == 0)
        ))) {
      FUN_segment_0__804a75f0(g_Ram_uint,0,0x19);
    }
  }
  else {
    for (bVar7 = 0; bVar3 = ai_AI_Control_8072fa50(), bVar7 < bVar3; bVar7 = bVar7 + 1) {
      iVar1 = g_Ram_uint[0x26] + (uint)bVar7 * 4;
      uVar6 = *(undefined4 *)(iVar1 + 300);
      uVar5 = *(undefined4 *)(iVar1 + 0x13c);
      iVar1 = ai_AI_Control_8072fee0();
      if (((iVar1 != 0) && (g_Ram_uint != (void *)0)) && (g_Ram_uint[6] != 0)) {
        *(undefined4 *)(g_Ram_uint[6] + (uint)bVar7 * 0x10 + 0x14) =
             g_Ram_uint[(uint)bVar7 * 0x3c + 0x339];
      }
      iVar1 = param_1 + (uint)bVar7 * 0xc;
      *(undefined4 *)(iVar1 + 0x54) = uVar6;
      if (*(char *)(param_1 + 0x90) == 0) {
        FUN_segment_0__804a75f0(g_Ram_uint,(uint)bVar7,uVar6);
      }
      if ((*(char *)(param_1 + 0x90) == 0) && (*(char *)(iVar1 + 0x5d) == 0)) {
        *(undefined *)(iVar1 + 0x5d) = 1;
        *(undefined *)(iVar1 + 0x5c) = 0;
        FUN_segment_0__804a75d8(g_Ram_uint,bVar7);
        uVar4 = 2;
        iVar2 = ai_AI_Control_8072fee0();
        if (iVar2 != 0) {
          uVar4 = 0;
        }
        FUN_segment_0__80430d74(g_Ram_uint,bVar7,uVar6,uVar4);
      }
      *(undefined4 *)(iVar1 + 0x58) = uVar5;
      if (*(char *)(param_1 + 0x90) == 0) {
        FUN_segment_0__804a7608(g_Ram_uint,bVar7,uVar5);
      }
    }
  }
  return;
}

// === ai_AI_Engine_8052c89c (0x8052c89c) ===
void ai_AI_Engine_8052c89c(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x54) = param_3;
  if (*(char *)(param_1 + 0x90) != 0) {
    return;
  }
  FUN_segment_0__804a75f0(uRam00000000,param_2 & 0xff);
  return;
}

// === ai_AI_Engine_8052c8c8 (0x8052c8c8) ===
void ai_AI_Engine_8052c8c8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x90) == 0) &&
     (param_1 = param_1 + param_2 * 0xc, *(char *)(param_1 + 0x5d) == 0)) {
    *(undefined *)(param_1 + 0x5d) = 1;
    *(undefined *)(param_1 + 0x5c) = 0;
    FUN_segment_0__804a75d8(uRam00000000,param_2 & 0xff);
    uVar2 = 2;
    iVar1 = ai_AI_Control_8072fee0();
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    FUN_segment_0__80430d74(uRam00000000,param_2 & 0xff,param_3,uVar2);
  }
  return;
}

// === ai_AI_Engine_8052c974 (0x8052c974) ===
void ai_AI_Engine_8052c974(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  bVar4 = 0;
  do {
    if ((*(byte *)(param_1 + 0x84) <= bVar4) || (*(char *)(param_1 + 0x90) != 0)) {
      return;
    }
    iVar2 = param_1 + (uint)bVar4 * 0xc;
    if (*(char *)(iVar2 + 0x5d) != 0) {
      return;
    }
    *(undefined *)(iVar2 + 0x5d) = 1;
    *(undefined *)(iVar2 + 0x5c) = 0;
    FUN_segment_0__804a75d8(g_Ram_ptr);
    iVar6 = 2;
    iVar2 = ai_AI_Control_8072fee0();
    if (iVar2 != 0) {
      piVar7 = *(int **)(*g_Ram_ptr + 0x248);
      if (piVar7 != (int *)0) {
        if (piVar7 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__8052ca50;
            }
          }
          bVar1 = false;
LAB_segment_0__8052ca50:
          if (bVar1) goto LAB_segment_0__8052ca60;
        }
        piVar7 = (int *)0;
      }
      else {
        piVar7 = (int *)0;
      }
LAB_segment_0__8052ca60:
      iVar2 = FUN_segment_0__80511b68
                        (piVar7,*(undefined *)
                                 ((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59),bVar4);
      iVar6 = piVar7[iVar2 * 3 + 0x7e];
      *(int *)(g_Ram_ptr[6] + (uint)bVar4 * 0x10 + 0x14) = iVar6;
    }
    uVar5 = *(undefined4 *)(g_Ram_ptr[0x26] + (uint)bVar4 * 0xc + 0x220);
    *(undefined4 *)(param_1 + (uint)bVar4 * 0xc + 0x54) = uVar5;
    if (*(char *)(param_1 + 0x90) == 0) {
      FUN_segment_0__804a75f0(g_Ram_ptr,(uint)bVar4,uVar5);
    }
    FUN_segment_0__80430d74(g_Ram_ptr,bVar4,uVar5,iVar6);
    bVar4 = bVar4 + 1;
  } while( true );
}

// === ai_AI_Engine_8052cb14 (0x8052cb14) ===
void ai_AI_Engine_8052cb14(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0xc + 0x58) = param_3;
  if (*(char *)(param_1 + 0x90) != 0) {
    return;
  }
  FUN_segment_0__804a7608(uRam00000000,param_2 & 0xff);
  return;
}

// === ai_AI_Engine_8052cb40 (0x8052cb40) ===
void ai_AI_Engine_8052cb40(int param_1)

{
  if (*(char *)(param_1 + 0x90) != 0) {
    return;
  }
  if (*(int *)(param_1 + 8) < 2) {
    return;
  }
  FUN_segment_0__804a7620(uRam00000000);
  return;
}

// === ai_AI_Engine_8052cb68 (0x8052cb68) ===
void ai_AI_Engine_8052cb68(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(char *)(param_1 + 0x90) == 0) &&
     (FUN_segment_0__804a762c(uRam00000000), *(char *)(param_1 + param_2 * 0xc + 0x5c) != 0)) {
    FUN_segment_0__804a7644(uRam00000000,param_2,param_4);
  }
  return;
}

// === ai_AI_Engine_8052cbec (0x8052cbec) ===
void ai_AI_Engine_8052cbec(int param_1)

{
  if (*(char *)(param_1 + 0x90) != 0) {
    return;
  }
  FUN_segment_0__804a765c(uRam00000000);
  return;
}

// === ai_AI_Engine_8052cc08 (0x8052cc08) ===
undefined4 ai_AI_Engine_8052cc08(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x90) != 0) {
    return 0;
  }
  uVar1 = FUN_segment_0__804a7664(uRam00000000);
  return uVar1;
}

// === ai_AI_Engine_8052cc2c (0x8052cc2c) ===
int ai_AI_Engine_8052cc2c(int param_1)

{
  if (*(char *)(param_1 + 0x90) != 0) {
    return 0;
  }
  return *(int *)(iRam00000000 + 0x28) + 8;
}

// === ai_AI_Engine_8052cc54 (0x8052cc54) ===
undefined4 ai_AI_Engine_8052cc54(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 == 0x5a) {
    return 0xffffffff;
  }
  if (iVar1 < 0x5a) {
    if (iVar1 == 0x4e) {
LAB_segment_0__8052cd3c:
      if (param_1 == 0) {
        return 7;
      }
      if (param_1 != 1) {
        return 0xffffffff;
      }
      return 8;
    }
    if (iVar1 < 0x4e) {
      if (iVar1 < 0x48) {
        if (0x3e < iVar1) {
          return 0xffffffff;
        }
        if (iVar1 < 0x3d) {
          return 0xffffffff;
        }
      }
      else if ((iVar1 < 0x4d) && (0x4a < iVar1)) goto LAB_segment_0__8052cd60;
    }
    else {
      if (iVar1 == 0x54) {
LAB_segment_0__8052cd60:
        cVar2 = ai_AI_Control_8072fa50();
        if (cVar2 == '\x01') {
          if (param_1 != 0) {
            return 0xffffffff;
          }
          return 0;
        }
        if (cVar2 == '\x02') {
          if (param_1 == 0) {
            return 1;
          }
          if (param_1 != 1) {
            return 0xffffffff;
          }
          return 2;
        }
        if (cVar2 == '\x03') {
          if (param_1 == 0) {
            return 3;
          }
          if (param_1 == 1) {
            return 4;
          }
          if (param_1 == 2) {
            return 5;
          }
        }
        else if (cVar2 != '\x04') {
          return 0xffffffff;
        }
        if (param_1 == 0) {
          return 3;
        }
        if (param_1 != 1) {
          if (param_1 == 2) {
            return 5;
          }
          if (param_1 != 3) {
            return 0xffffffff;
          }
          return 6;
        }
        return 4;
      }
      if (iVar1 < 0x54) {
        if (iVar1 == 0x50) goto LAB_segment_0__8052cd3c;
        if (0x4f < iVar1) {
          return 0xffffffff;
        }
      }
    }
  }
  else {
    if (iVar1 == 0x82) {
      return 0xffffffff;
    }
    if (iVar1 < 0x82) {
      if (0x67 < iVar1) {
        if (iVar1 < 0x7f) {
          return 0xffffffff;
        }
        goto LAB_segment_0__8052cd3c;
      }
      if ((99 < iVar1) || (iVar1 < 0x60)) goto LAB_segment_0__8052cd60;
    }
    else if (iVar1 < 0x90) {
      if (0x86 < iVar1) {
        return 0xffffffff;
      }
    }
    else if (0x93 < iVar1) {
      return 0xffffffff;
    }
  }
  if (param_1 != 0) {
    return 0xffffffff;
  }
  return 0;
}

// === ai_AI_Engine_8052ce50 (0x8052ce50) ===
void ai_AI_Engine_8052ce50(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8052ced0;
        }
      }
      bVar1 = false;
LAB_segment_0__8052ced0:
      if (bVar1) goto LAB_segment_0__8052cee0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8052cee0:
  *(undefined *)(piVar3 + param_1 * 3 + 0x17) = 1;
  *(undefined *)((int)piVar3 + param_1 * 0xc + 0x5d) = 0;
  return;
}

// === ai_AI_Engine_8052d000 (0x8052d000) ===
undefined4 * ai_AI_Engine_8052d000(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = uRam00000000;
  puVar3 = param_1 + 3;
  *param_1 = uRam00000000;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  uVar1 = uRam00000000;
  if (puVar3 < param_1 + 0x654) {
    if ((puVar3 <= param_1 + 0x654) &&
       (uVar2 = (uint)((int)param_1 + (0x194f - (int)puVar3)) / 0x60, puVar3 < param_1 + 0x63c)) {
      do {
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        puVar3[2] = uVar1;
        puVar3[3] = uVar1;
        puVar3[4] = uVar1;
        puVar3[5] = uVar1;
        puVar3[6] = uVar1;
        puVar3[7] = uVar1;
        puVar3[8] = uVar1;
        puVar3[9] = uVar1;
        puVar3[10] = uVar1;
        puVar3[0xb] = uVar1;
        puVar3[0xc] = uVar1;
        puVar3[0xd] = uVar1;
        puVar3[0xe] = uVar1;
        puVar3[0xf] = uVar1;
        puVar3[0x10] = uVar1;
        puVar3[0x11] = uVar1;
        puVar3[0x12] = uVar1;
        puVar3[0x13] = uVar1;
        puVar3[0x14] = uVar1;
        puVar3[0x15] = uVar1;
        puVar3[0x16] = uVar1;
        puVar3[0x17] = uVar1;
        puVar3 = puVar3 + 0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uRam00000000;
    uVar2 = (uint)((int)param_1 + (0x195b - (int)puVar3)) / 0xc;
    if (puVar3 < param_1 + 0x654) {
      do {
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        puVar3[2] = uVar1;
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  ai_AI_Engine_8052d1b8(param_1);
  return param_1;
}

// === ai_AI_Engine_8052d160 (0x8052d160) ===
int ai_AI_Engine_8052d160(int param_1,int param_2,int param_3,int param_4)

{
  return param_4 * 0xc +
         param_3 * 0x24 +
         (uint)*(byte *)(param_1 + param_2 + 0x1950) * 0x144 +
         param_1 + *(int *)(iRam00000000 + 0x58) * 0xca8;
}

// === ai_AI_Engine_8052d1b8 (0x8052d1b8) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ai_AI_Engine_8052d1b8(int param_1)

{
  ai_AI_Engine_8052fce0((double)g_Ram_float,(double)fRam00000004,(double)fRam00000008);
  ai_AI_Engine_8052fce0
            ((double)fRam0000000c,(double)fRam00000010,(double)fRam00000008,param_1 + 0xc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000014,(double)fRam00000018,(double)fRam00000008,param_1 + 0x18);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)fRam00000020,(double)fRam00000024,param_1 + 0x24);
  ai_AI_Engine_8052fce0
            ((double)fRam00000028,(double)fRam0000002c,(double)fRam00000008,param_1 + 0x30);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)_DAT_00000030,(double)_DAT_00000034,param_1 + 0x3c);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)fRam00000038,(double)fRam00000024,param_1 + 0x48);
  ai_AI_Engine_8052fce0
            ((double)fRam00000028,(double)fRam0000003c,(double)fRam00000008,param_1 + 0x54);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)fRam00000040,(double)_DAT_00000034,param_1 + 0x60);
  ai_AI_Engine_8052fce0
            ((double)fRam00000044,(double)fRam00000020,(double)fRam00000048,param_1 + 0x6c);
  ai_AI_Engine_8052fce0
            ((double)fRam0000004c,(double)_DAT_00000030,(double)fRam00000050,param_1 + 0x78);
  ai_AI_Engine_8052fce0
            ((double)fRam00000054,(double)fRam00000058,(double)fRam0000005c,param_1 + 0x84);
  ai_AI_Engine_8052fce0
            ((double)fRam00000060,(double)fRam00000020,(double)fRam00000048,param_1 + 0x90);
  ai_AI_Engine_8052fce0
            ((double)_DAT_00000030,(double)_DAT_00000030,(double)fRam00000024,param_1 + 0x9c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000064,(double)fRam00000058,(double)fRam0000005c,param_1 + 0xa8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000044,(double)fRam00000068,(double)fRam00000048,param_1 + 0xb4);
  ai_AI_Engine_8052fce0
            ((double)fRam0000004c,(double)fRam0000006c,(double)fRam00000050,param_1 + 0xc0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000054,(double)fRam0000003c,(double)fRam0000005c,param_1 + 0xcc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000060,(double)fRam00000068,(double)fRam00000048,param_1 + 0xd8);
  ai_AI_Engine_8052fce0
            ((double)_DAT_00000030,(double)fRam0000006c,(double)fRam00000050,param_1 + 0xe4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000064,(double)fRam0000003c,(double)fRam0000005c,param_1 + 0xf0);
  ai_AI_Engine_8052fce0
            ((double)g_Ram_float,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000070,(double)fRam00000018,(double)fRam00000074,param_1 + 0x108);
  ai_AI_Engine_8052fce0
            ((double)fRam00000014,(double)fRam00000018,(double)fRam00000008,param_1 + 0x114);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000078,(double)fRam00000008,param_1 + 0x120);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam0000007c,(double)fRam00000008,param_1 + 300);
  ai_AI_Engine_8052fce0
            ((double)fRam00000080,(double)fRam00000084,(double)fRam00000048,param_1 + 0x138);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x144);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x150);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x168);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x174);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x180);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x198);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x204);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x210);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x21c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x228);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x234);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x240);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x24c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 600);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x264);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x270);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x27c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x288);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x294);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x2f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x300);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x30c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x318);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x324);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x330);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x33c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x348);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x354);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x360);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x36c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x378);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 900);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x390);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x39c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x3fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x408);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x414);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x420);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x42c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x438);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x444);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x450);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x45c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x468);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x474);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x480);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x48c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x498);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x4f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x504);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x510);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x51c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x528);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x534);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x540);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x54c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x558);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x564);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x570);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x57c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x588);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x594);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x5f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x600);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x60c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x618);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x624);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x630);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x63c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x648);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x654);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x660);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x66c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x678);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x684);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x690);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x69c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x6fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x708);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x714);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x720);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x72c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x738);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x744);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x750);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x75c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x768);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x774);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x780);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x78c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x798);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x7f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x804);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x810);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x81c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x828);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x834);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x840);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x84c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x858);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x864);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x870);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x87c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x888);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x894);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x8f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x900);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x90c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x918);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x924);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x930);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x93c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x948);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x954);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x960);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x96c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x978);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x984);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x990);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x99c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x9fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa08);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa14);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa20);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa2c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa38);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa44);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa50);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa5c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa68);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa74);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa80);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa8c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xa98);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xaa4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xab0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xabc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xac8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xad4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xae0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xaec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xaf8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb04);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb10);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb1c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb28);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb34);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb40);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb4c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb58);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb64);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb70);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb7c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb88);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xb94);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xba0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 3000);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbc4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbd0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbdc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbe8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xbf4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc00);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc0c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc18);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc24);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc30);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc3c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc48);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc54);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc60);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc6c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc78);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc84);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc90);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xc9c);
  ai_AI_Engine_8052fce0
            ((double)g_Ram_float,(double)fRam00000004,(double)fRam00000008,param_1 + 0xca8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000070,(double)fRam00000088,(double)fRam00000074,param_1 + 0xcb4);
  ai_AI_Engine_8052fce0
            ((double)fRam0000008c,(double)fRam00000018,(double)fRam00000074,param_1 + 0xcc0);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)fRam00000020,(double)fRam00000024,param_1 + 0xccc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000028,(double)_DAT_00000030,(double)fRam00000008,param_1 + 0xcd8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000090,(double)fRam00000094,(double)_DAT_00000034,param_1 + 0xce4);
  ai_AI_Engine_8052fce0
            ((double)fRam0000001c,(double)fRam00000038,(double)fRam00000024,param_1 + 0xcf0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000028,(double)fRam0000003c,(double)fRam00000008,param_1 + 0xcfc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000090,(double)fRam00000040,(double)_DAT_00000034,param_1 + 0xd08);
  ai_AI_Engine_8052fce0
            ((double)fRam00000098,(double)fRam00000020,(double)fRam00000024,param_1 + 0xd14);
  ai_AI_Engine_8052fce0
            ((double)fRam0000004c,(double)_DAT_00000030,(double)fRam00000050,param_1 + 0xd20);
  ai_AI_Engine_8052fce0
            ((double)fRam00000098,(double)fRam00000020,(double)fRam00000024,param_1 + 0xd2c);
  ai_AI_Engine_8052fce0
            ((double)fRam0000009c,(double)fRam00000020,(double)fRam00000024,param_1 + 0xd38);
  ai_AI_Engine_8052fce0
            ((double)_DAT_00000030,(double)_DAT_00000030,(double)fRam00000050,param_1 + 0xd44);
  ai_AI_Engine_8052fce0
            ((double)fRam0000009c,(double)fRam00000020,(double)fRam00000024,param_1 + 0xd50);
  ai_AI_Engine_8052fce0
            ((double)fRam00000098,(double)fRam00000038,(double)fRam00000024,param_1 + 0xd5c);
  ai_AI_Engine_8052fce0
            ((double)fRam0000004c,(double)fRam0000006c,(double)fRam00000050,param_1 + 0xd68);
  ai_AI_Engine_8052fce0
            ((double)fRam00000098,(double)fRam00000038,(double)fRam00000024,param_1 + 0xd74);
  ai_AI_Engine_8052fce0
            ((double)fRam0000009c,(double)fRam00000038,(double)fRam00000024,param_1 + 0xd80);
  ai_AI_Engine_8052fce0
            ((double)_DAT_00000030,(double)fRam0000006c,(double)fRam00000050,param_1 + 0xd8c);
  ai_AI_Engine_8052fce0
            ((double)fRam0000009c,(double)fRam00000038,(double)fRam00000024,param_1 + 0xd98);
  ai_AI_Engine_8052fce0
            ((double)g_Ram_float,(double)fRam00000004,(double)fRam00000008,param_1 + 0xda4);
  ai_AI_Engine_8052fce0
            ((double)fRam0000008c,(double)fRam00000018,(double)fRam00000074,param_1 + 0xdb0);
  ai_AI_Engine_8052fce0
            ((double)fRam0000008c,(double)fRam00000018,(double)fRam00000074,param_1 + 0xdbc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam0000005c,param_1 + 0xdc8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam0000005c,param_1 + 0xdd4);
  ai_AI_Engine_8052fce0
            ((double)fRam000000a0,(double)_DAT_00000030,(double)fRam00000048,param_1 + 0xde0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xdec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xdf8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe04);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe10);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe1c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe28);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe34);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe40);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe4c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe58);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe64);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe70);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe7c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe88);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xe94);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xea0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xeac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xeb8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xec4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xed0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xedc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xee8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xef4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf00);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf0c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf18);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf24);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf30);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf3c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf48);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf54);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf60);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf6c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf78);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf84);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf90);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xf9c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfa8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfb4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfc0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfcc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfd8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xfe4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xff0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0xffc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1008);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1014);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1020);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x102c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1038);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1044);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1050);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x105c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1068);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1074);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1080);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x108c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1098);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x10f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1104);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1110);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x111c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1128);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1134);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1140);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x114c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1158);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1164);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1170);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x117c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1188);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1194);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x11f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1200);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x120c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1218);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1224);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1230);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x123c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1248);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1254);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1260);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x126c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1278);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1284);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1290);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x129c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x12fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1308);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1314);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1320);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x132c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1338);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1344);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1350);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x135c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1368);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1374);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1380);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x138c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1398);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x13f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1404);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1410);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x141c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1428);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1434);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1440);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x144c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1458);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1464);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1470);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x147c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1488);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1494);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x14f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1500);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x150c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1518);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1524);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1530);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x153c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1548);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1554);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1560);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x156c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1578);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1584);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1590);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x159c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x15fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1608);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1614);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1620);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x162c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1638);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1644);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1650);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x165c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1668);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1674);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1680);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x168c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1698);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16a4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16b0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16bc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16c8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16d4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16e0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16ec);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x16f8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1704);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1710);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x171c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1728);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1734);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1740);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x174c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1758);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1764);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 6000);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x177c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1788);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1794);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17a0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17ac);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17b8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17c4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17d0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17dc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17e8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x17f4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1800);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x180c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1818);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1824);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1830);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x183c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1848);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1854);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1860);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x186c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1878);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1884);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1890);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x189c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18a8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18b4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18c0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18cc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18d8);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18e4);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18f0);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x18fc);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1908);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1914);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1920);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x192c);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1938);
  ai_AI_Engine_8052fce0
            ((double)fRam00000004,(double)fRam00000004,(double)fRam00000008,param_1 + 0x1944);
  *(undefined *)(param_1 + 0x1950) = 0;
  *(undefined *)(param_1 + 0x1951) = 0;
  *(undefined *)(param_1 + 0x1952) = 0;
  *(undefined *)(param_1 + 0x1953) = 0;
  *(undefined *)(param_1 + 0x1954) = 0;
  *(undefined *)(param_1 + 0x1955) = 0;
  *(undefined *)(param_1 + 0x1956) = 0;
  *(undefined *)(param_1 + 0x1957) = 0;
  *(undefined *)(param_1 + 0x1958) = 0;
  *(undefined *)(param_1 + 0x1959) = 0;
  *(undefined *)(param_1 + 0x195a) = 0;
  *(undefined *)(param_1 + 0x195b) = 0;
  *(undefined *)(param_1 + 0x195c) = 0;
  *(undefined *)(param_1 + 0x195d) = 0;
  *(undefined *)(param_1 + 0x195e) = 0;
  *(undefined *)(param_1 + 0x195f) = 0;
  *(undefined *)(param_1 + 0x1960) = 0;
  *(undefined *)(param_1 + 0x1961) = 0;
  *(undefined *)(param_1 + 0x1962) = 0;
  *(undefined *)(param_1 + 0x1963) = 0;
  *(undefined *)(param_1 + 0x1964) = 0;
  *(undefined *)(param_1 + 0x1965) = 0;
  *(undefined *)(param_1 + 0x1966) = 0;
  *(undefined *)(param_1 + 0x1967) = 0;
  *(undefined *)(param_1 + 0x1968) = 0;
  *(undefined *)(param_1 + 0x1969) = 0;
  *(undefined *)(param_1 + 0x196a) = 0;
  *(undefined *)(param_1 + 0x196b) = 0;
  *(undefined *)(param_1 + 0x196c) = 0;
  *(undefined *)(param_1 + 0x196d) = 0;
  *(undefined *)(param_1 + 0x196e) = 0;
  *(undefined *)(param_1 + 0x196f) = 0;
  *(undefined *)(param_1 + 0x1970) = 0;
  *(undefined *)(param_1 + 0x1971) = 0;
  *(undefined *)(param_1 + 0x1972) = 0;
  *(undefined *)(param_1 + 0x1973) = 0;
  *(undefined *)(param_1 + 0x1974) = 0;
  *(undefined *)(param_1 + 0x1975) = 0;
  *(undefined *)(param_1 + 0x1976) = 0;
  *(undefined *)(param_1 + 0x1977) = 0;
  *(undefined *)(param_1 + 0x1978) = 0;
  *(undefined *)(param_1 + 0x1979) = 0;
  *(undefined *)(param_1 + 0x197a) = 0;
  *(undefined *)(param_1 + 0x197b) = 0;
  *(undefined *)(param_1 + 0x197c) = 0;
  *(undefined *)(param_1 + 0x197d) = 0;
  *(undefined *)(param_1 + 0x197e) = 0;
  *(undefined *)(param_1 + 0x197f) = 0;
  return;
}

// === ai_AI_Engine_8052fce0 (0x8052fce0) ===
void ai_AI_Engine_8052fce0(double param_1,double param_2,double param_3,float *param_4)

{
  *param_4 = (float)param_1;
  param_4[1] = (float)param_2;
  param_4[2] = (float)param_3;
  return;
}

// === ai_AI_Engine_8052fcf0 (0x8052fcf0) ===
undefined4 * ai_AI_Engine_8052fcf0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80500418(param_1 + 0x15);
  ai_AI_Engine_80529eec(param_1 + 0x72);
  return param_1;
}

// === AI_Engine_validate_8052fd44 (0x8052fd44) ===
int AI_Engine_validate_8052fd44(int param_1,int param_2)

{
  if (param_1 != 0) {
    AI_Engine_validate_80529f28(param_1 + 0x1c8,0xffffffff);
    FUN_segment_0__80500540(param_1 + 0x54,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === ai_AI_Engine_8052fdc4 (0x8052fdc4) ===
void ai_AI_Engine_8052fdc4(int param_1)

{
  undefined4 uVar1;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_38 [52];
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x54);
  local_48 = g_Ram_uint;
  local_44 = uRam00000004;
  local_40 = uRam00000008;
  local_3c = uRam0000000c;
  FUN_segment_0__804ae36c(auStack_38,0,3,10,&local_48);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0xec,0);
  FUN_segment_0__804ff59c((double)(float)g_Ram_uint,uVar1,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x1c8,0);
  ai_AI_Engine_80529f80(param_1 + 0x1c8);
  if (*(int *)*g_Ram_uint - 0x49U < 0x1f) {
                    /* WARNING: Could not emulate address calculation at 0x8052fed8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_uint - 0x49U) * 4))();
    return;
  }
  return;
}

// === ai_AI_Engine_8052ff54 (0x8052ff54) ===
undefined4 * ai_AI_Engine_8052ff54(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  FUN_segment_0__804a97a4(param_1 + 0x101);
  FUN_segment_0__804a97a4(param_1 + 0x196);
  FUN_segment_0__804a97a4(param_1 + 0x22b);
  FUN_segment_0__804a97a4(param_1 + 0x2c0);
  uVar1 = uRam00000000;
  param_1[0x2c0] = 0;
  param_1[0x355] = 0x7d1;
  param_1[0x356] = 0;
  param_1[0x357] = uVar1;
  return param_1;
}

// === AI_Control_validate_80728140 (0x80728140) ===
void AI_Control_validate_80728140(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined uVar11;
  int iVar12;
  byte bVar14;
  int iVar13;
  ushort local_214;
  byte local_212;
  ushort local_210;
  char local_20e;
  undefined auStack_20c [76];
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined local_1ba;
  undefined2 local_1b8;
  undefined local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8 [18];
  undefined4 uStack_160;
  undefined4 local_15c [19];
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined2 local_108;
  undefined local_106;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  char local_f8 [104];
  undefined auStack_90 [108];
  int local_24;
  
  bVar14 = 0;
  *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d0) = 0;
  *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d8) = 0;
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x3d4) = 0xffffffff;
  while( true ) {
    if (*(byte *)(param_1 + 0x48) <= bVar14) break;
    uVar2 = (uint)bVar14;
    if (uVar2 == 0) {
      iVar13 = *(int *)(**(int **)(iRam00000000 + 0xc) + 0x40);
      *(undefined2 *)(param_1 + 0x1ac) = *(undefined2 *)(iVar13 + 4);
      *(undefined *)(param_1 + 0x1ae) = *(undefined *)(iVar13 + 6);
      *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(iVar13 + 8);
      *(undefined *)(param_1 + 0x1b2) = *(undefined *)(iVar13 + 10);
    }
    else {
      FUN_segment_0__80424c84
                (**(undefined4 **)(iRam00000000 + 0xc),uVar2,param_1 + uVar2 * 0xc + 0x1a8);
    }
    FUN_segment_0__806e1a60
              (*(undefined4 *)(*(int *)(param_1 + 0x44) + (uint)bVar14 * 4),
               param_1 + uVar2 * 0xc + 0x1a8);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + (uint)bVar14 * 4) + 0x50))();
    bVar14 = bVar14 + 1;
  }
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  iVar7 = FUN_segment_0__80437c58(iVar13,param_1 + 0x1a8,*(undefined4 *)(iRam00000000 + 0xb68));
  *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4b4) = iVar7;
  if (iVar7 != -1) {
    local_110 = 0;
    local_10c = *(undefined2 *)(param_1 + 0x1ac);
    local_10a = *(undefined *)(param_1 + 0x1ae);
    local_108 = *(undefined2 *)(param_1 + 0x1b0);
    local_106 = *(undefined *)(param_1 + 0x1b2);
    local_104 = *(undefined4 *)(iRam00000000 + 0x34);
    local_100 = *(undefined4 *)(iRam00000000 + 0x30);
    FUN_segment_0__804df3bc(iRam00000000 + 0x34,0);
    local_fc = FUN_segment_0__804e0010();
    iVar8 = FUN_segment_0__804ce0ec(*(int *)(iRam00000000 + 0x98) + 0x188,0);
    FUN_segment_0__804171b8(local_1a8,iVar8 + 0x94);
    iVar8 = 9;
    puVar3 = &local_1ac;
    puVar4 = &uStack_160;
    do {
      puVar10 = puVar4;
      puVar9 = puVar3;
      uVar5 = puVar9[2];
      puVar10[1] = puVar9[1];
      puVar10[2] = uVar5;
      iVar8 = iVar8 + -1;
      puVar3 = puVar9 + 2;
      puVar4 = puVar10 + 2;
    } while (iVar8 != 0);
    puVar10[3] = puVar9[3];
    FUN_segment_0__80437ae8(iVar13,local_15c,iVar7,*(undefined4 *)(iRam00000000 + 0xb68));
  }
  if (iVar7 == 0) {
    (**(code **)(*(int *)(param_1 + 0x1d8) + 0x54))(param_1 + 0x1d8);
    *(undefined *)(param_1 + 600) = 0;
    uVar11 = 0;
    *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d8) = 1;
    if (*(int *)(*(int *)(iRam00000000 + 0xec) + 0x14) != 3) {
      uVar6 = 99;
      if (*(ushort *)(param_1 + 0x1ac) < 100) {
        uVar6 = *(ushort *)(param_1 + 0x1ac);
      }
      if ((uVar6 & 0xff) < 6) {
        uVar11 = 1;
      }
    }
    *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d0) = uVar11;
    FUN_segment_0__806e1e18(**(undefined4 **)(param_1 + 0x44));
    FUN_segment_0__804d24b8(param_1,0xdd,0xffffffff);
  }
  else {
    *(undefined *)(param_1 + 600) = 1;
    *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d8) = 0;
    *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d0) = 0;
  }
  local_214 = *(ushort *)(param_1 + 0x1b8);
  local_212 = *(byte *)(param_1 + 0x1ba);
  local_210 = *(ushort *)(param_1 + 0x1bc);
  iVar12 = param_1 + 0x18;
  local_20e = *(char *)(param_1 + 0x1be);
  iVar7 = 1;
  for (iVar8 = 2; iVar8 < (int)(uint)*(byte *)(param_1 + 0x48); iVar8 = iVar8 + 1) {
    if (*(char *)(iVar12 + 0x1b2) == 0) {
      bVar1 = false;
    }
    else if (local_20e == 0) {
      bVar1 = true;
    }
    else if (*(ushort *)(iVar12 + 0x1ac) < local_214) {
      bVar1 = true;
    }
    else if (*(ushort *)(iVar12 + 0x1ac) == local_214) {
      if (*(byte *)(iVar12 + 0x1ae) < local_212) {
        bVar1 = true;
      }
      else {
        if ((*(byte *)(iVar12 + 0x1ae) != local_212) || (local_210 <= *(ushort *)(iVar12 + 0x1b0)))
        goto LAB_segment_0__807284f8;
        bVar1 = true;
      }
    }
    else {
LAB_segment_0__807284f8:
      bVar1 = false;
    }
    if (bVar1) {
      local_214 = *(ushort *)(iVar12 + 0x1ac);
      local_212 = *(byte *)(iVar12 + 0x1ae);
      local_210 = *(ushort *)(iVar12 + 0x1b0);
      local_20e = *(char *)(iVar12 + 0x1b2);
      iVar7 = iVar8;
    }
    iVar12 = iVar12 + 0xc;
  }
  iVar8 = FUN_segment_0__80437994(iVar13,5,*(undefined4 *)(iRam00000000 + 0xb68));
  if (((iVar8 == 0) || (bVar1 = *(char *)(iVar8 + 0x56) == 0, bVar1)) || (bVar1)) {
LAB_segment_0__807285ec:
    iVar8 = param_1 + iVar7 * 0xc;
    local_1c0 = 0;
    local_1bc = *(undefined2 *)(iVar8 + 0x1ac);
    local_1ba = *(undefined *)(iVar8 + 0x1ae);
    local_1b8 = *(undefined2 *)(iVar8 + 0x1b0);
    local_1b6 = *(undefined *)(iVar8 + 0x1b2);
    local_1b4 = *(undefined4 *)(iRam00000000 + 0x34);
    local_1b0 = *(undefined4 *)(iRam00000000 + 0x30);
    FUN_segment_0__804df3bc(iRam00000000 + 0x34,0);
    local_1ac = FUN_segment_0__804e0010();
    FUN_segment_0__804379f4(iVar13,auStack_20c,5,*(undefined4 *)(iRam00000000 + 0xb68));
    *(int *)(*(int *)(iRam00000000 + 0x98) + 0x3d4) = iVar7;
    FUN_segment_0__806e1e18(*(undefined4 *)(*(int *)(param_1 + 0x44) + iVar7 * 4));
  }
  else {
    if (!bVar1) {
      if (local_20e == 0) {
        bVar1 = false;
      }
      else if (bVar1) {
        bVar1 = true;
      }
      else if (local_214 < *(ushort *)(iVar8 + 0x50)) {
        bVar1 = true;
      }
      else if (local_214 == *(ushort *)(iVar8 + 0x50)) {
        if (local_212 < *(byte *)(iVar8 + 0x52)) {
          bVar1 = true;
        }
        else {
          if ((local_212 != *(byte *)(iVar8 + 0x52)) || (*(ushort *)(iVar8 + 0x54) <= local_210))
          goto LAB_segment_0__807285e0;
          bVar1 = true;
        }
      }
      else {
LAB_segment_0__807285e0:
        bVar1 = false;
      }
      if (bVar1) goto LAB_segment_0__807285ec;
    }
    *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x3d4) = 0xffffffff;
  }
  if (*(char *)(*(int *)(iRam00000000 + 0x98) + 0x3d0) != 0) {
    FUN_segment_0__8040be9c(local_f8);
    FUN_segment_0__8040c748(local_f8,0);
    bVar1 = false;
    if ((local_f8[0] != 0) && (local_24 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_segment_0__804e4670
                (*(undefined4 *)(iRam00000000 + 0x90),0,*(uint *)(iRam00000000 + 0xb68) & 0xff,
                 local_f8);
      FUN_segment_0__80500a34(param_1 + 0x370,0x45b,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_90,0,0xc,5);
  }
  FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
  return;
}

// === ai_AI_Control_8072877c (0x8072877c) ===
void ai_AI_Control_8072877c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 0x48); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + iVar2) + 0x54))();
    iVar2 = iVar2 + 4;
  }
  return;
}

// === AI_Control_validate_80728844 (0x80728844) ===
void AI_Control_validate_80728844(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Control_validate_80728888 (0x80728888) ===
/* WARNING: Removing unreachable block (ram,0x80728c2c) */

void AI_Control_validate_80728888(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined uVar8;
  short sVar7;
  undefined4 *puVar9;
  char local_e8 [104];
  undefined auStack_80 [64];
  undefined2 local_40;
  undefined local_3e;
  undefined2 local_3c;
  undefined local_3a;
  int local_14;
  
  param_1[0x1f] = 0;
  param_1[0x75] = 0;
  *(undefined *)(param_1 + 0x1a) = 0;
  AI_Control_validate_80728c74();
  uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar6 = ai_AI_Control_8072a118(param_1,uVar5);
  FUN_segment_0__804d1c1c(param_1,uVar6);
  AI_Control_assertFail_8072a2d0(param_1,uVar5);
  if (((((g_Ram_ptr[0x2e4] & 4U) != 0) || (g_Ram_ptr[0x2dc] != 2)) ||
      (*(int *)(g_Ram_ptr[0x26] + 0x3c4) == 0)) && (g_Ram_ptr[0x2dc] != 5)) {
    if ((0x2f < *(int *)*g_Ram_ptr) && (*(int *)*g_Ram_ptr < 0x32)) {
      FUN_segment_0__804e4dbc(g_Ram_ptr[0x24],4,0,g_Ram_ptr[0x2da]);
      if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
        puVar9 = (void *)0;
      }
      else {
        puVar9 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      param_1[0x1b] = puVar9[0x24a4];
      uVar4 = puVar9[0x24a4] + 1;
      if (99999 < puVar9[0x24a4] + 1) {
        uVar4 = 99999;
      }
      puVar9[0x24a4] = uVar4;
      param_1[0x1b] = uVar4 - param_1[0x1b];
      FUN_segment_0__80563240(g_Ram_ptr);
      FUN_segment_0__804e45d0(g_Ram_ptr[0x24]);
    }
    bVar2 = false;
    if ((6 < g_Ram_ptr[0x2dc]) && (g_Ram_ptr[0x2dc] < 0xb)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
        puVar9 = (void *)0;
      }
      else {
        puVar9 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      iVar3 = *(int *)*g_Ram_ptr;
      if ((iVar3 < 0x68) || (0x69 < iVar3)) {
        if ((0x6b < iVar3) && (iVar3 < 0x6e)) {
          uVar1 = *(ushort *)(puVar9 + 0x2408);
          uVar8 = FUN_segment_0__804214c8(g_Ram_ptr,0);
          sVar7 = FUN_segment_0__8041ddc8(g_Ram_ptr,uVar8);
          iVar3 = (int)sVar7 + (uint)uVar1;
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          else if (9999 < iVar3) {
            iVar3 = 9999;
          }
          *(short *)(puVar9 + 0x2408) = (short)iVar3;
        }
      }
      else {
        uVar1 = *(ushort *)(puVar9 + 0x2406);
        uVar8 = FUN_segment_0__804214c8(g_Ram_ptr,0);
        sVar7 = FUN_segment_0__8041ddc8(g_Ram_ptr,uVar8);
        iVar3 = (int)sVar7 + (uint)uVar1;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        else if (9999 < iVar3) {
          iVar3 = 9999;
        }
        *(short *)(puVar9 + 0x2406) = (short)iVar3;
      }
      iVar3 = *(int *)*g_Ram_ptr;
      if (((0x67 < iVar3) && (iVar3 < 0x6a)) || ((0x6b < iVar3 && (iVar3 < 0x6e)))) {
        uVar4 = *(byte *)((int)puVar9 + 0x93ea) + 1;
        if (uVar4 < 0x1f) {
          if (0x1f < uVar4) {
            uVar4 = 0x1f;
          }
          *(char *)((int)puVar9 + 0x93ea) = (char)uVar4;
        }
        FUN_segment_0__804e45d0(g_Ram_ptr[0x24]);
      }
    }
    g_Ram_ptr = param_1;
    return;
  }
  FUN_segment_0__8040be9c(local_e8);
  FUN_segment_0__8040c3bc(local_e8,g_Ram_ptr[0x303]);
  bVar2 = false;
  if ((local_e8[0] != 0) && (local_14 != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined2 *)(param_1 + 0x13) = local_40;
    *(undefined *)((int)param_1 + 0x4e) = local_3e;
    *(undefined2 *)(param_1 + 0x14) = local_3c;
    *(undefined *)((int)param_1 + 0x52) = local_3a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === AI_Control_validate_80728c74 (0x80728c74) ===
void AI_Control_validate_80728c74(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1;
  uVar4 = (uint)*(byte *)((int)g_Ram_uint + 0x26);
  uVar3 = 0;
  if (uVar4 != 0) {
    if (((8 < uVar4) && (uVar4 < 0x7fffffff)) && (uVar6 = uVar4 - 1 >> 3, 0 < (int)(uVar4 - 8))) {
      do {
        uVar5 = uVar5 | 1 << (uVar3 & 0x3f) | 1 << (uVar3 + 1 & 0x3f) | 1 << (uVar3 + 2 & 0x3f) |
                1 << (uVar3 + 3 & 0x3f) | 1 << (uVar3 + 4 & 0x3f) | 1 << (uVar3 + 5 & 0x3f) |
                1 << (uVar3 + 6 & 0x3f) | 1 << (uVar3 + 7 & 0x3f);
        uVar3 = uVar3 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    iVar2 = uVar4 - uVar3;
    if ((int)uVar3 < (int)uVar4) {
      do {
        uVar6 = uVar3 & 0x3f;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 | 1 << uVar6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x80) + 0x10))
            ((int *)(param_1 + 0x80),uVar5,(uVar4 | 0xfffffffd) - (uVar4 - 2 >> 1) >> 0x1f);
  FUN_segment_0__804c821c(param_1 + 0x80,uVar5);
  bVar1 = false;
  if ((6 < (int)g_Ram_uint[0x2dc]) && ((int)g_Ram_uint[0x2dc] < 0xb)) {
    bVar1 = true;
  }
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x14);
  }
  iVar2 = *(int *)*g_Ram_uint;
  if (((iVar2 < 0x6a) || (0x6b < iVar2)) && ((iVar2 < 0x6e || (0x6f < iVar2)))) {
    FUN_segment_0__804d1c34(param_1,param_1 + 0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x14);
}

// === ai_AI_Control_80728fcc (0x80728fcc) ===
void ai_AI_Control_80728fcc(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(*param_1 + 100))();
  if (iVar2 == -1) {
    return;
  }
  bVar1 = false;
  if ((param_1[0x1f] != 0) && (1 < *(int *)(param_1[0x1f] + 8))) {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  if (g_Ram_ptr[10] != 2) {
    if ((g_Ram_ptr[0x2dd] != 1) && (g_Ram_ptr[0xe] != 3)) {
      return;
    }
    iVar3 = FUN_segment_0__80425788(g_Ram_ptr,4);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0x7c))(param_1);
    if (iVar3 != 0) {
      return;
    }
  }
  piVar5 = *(int **)(*g_Ram_ptr + iVar2 * 4 + 8);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__807290f4;
        }
      }
      bVar1 = false;
LAB_segment_0__807290f4:
      if (bVar1) goto LAB_segment_0__80729104;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80729104:
  if ((((g_Ram_ptr[0x2dd] == 0) && (iVar3 = *(int *)*g_Ram_ptr, iVar3 != 0x32)) &&
      (iVar3 != 0x33)) && (iVar3 != 0x34)) {
    ai_AI_Control_8072f530(g_Ram_ptr);
  }
  piVar5[0x11] = param_2;
  iVar2 = (**(code **)(*param_1 + 0x24))(param_1,iVar2,0);
  param_1[0x1f] = iVar2;
  return;
}

// === ai_AI_Control_80729184 (0x80729184) ===
void ai_AI_Control_80729184(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 1;
  uVar1 = *(uint *)(param_1 + 100);
  if (param_3 != 0) {
    iVar4 = -1;
  }
  iVar6 = 6;
  uVar5 = uVar1;
  while( true ) {
    iVar3 = uVar5 + iVar4 + 0xc;
    iVar2 = iVar3 / 0xc + (iVar3 >> 0x1f);
    uVar5 = iVar3 + (iVar2 - (iVar2 >> 0x1f)) * -0xc;
    if (uVar5 == uVar1) {
      return;
    }
    if ((*(int *)(iRam00000000 + 0x28 + (uVar5 & 0xff) * 0xf0 + 0x10) != 5) &&
       ((*(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar5 * 4 & 0x3fc)) + 0x38) & 0x10) == 0
       )) {
      *(undefined *)(param_1 + 0x68) = 1;
      FUN_segment_0__80678e78(uVar5 & 0xff);
      *(uint *)(param_1 + 100) = uVar5;
      return;
    }
    iVar3 = uVar5 + iVar4 + 0xc;
    iVar2 = iVar3 / 0xc + (iVar3 >> 0x1f);
    uVar5 = iVar3 + (iVar2 - (iVar2 >> 0x1f)) * -0xc;
    if (uVar5 == uVar1) {
      return;
    }
    if ((*(int *)(iRam00000000 + 0x28 + (uVar5 & 0xff) * 0xf0 + 0x10) != 5) &&
       ((*(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar5 * 4 & 0x3fc)) + 0x38) & 0x10) == 0
       )) break;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return;
    }
  }
  *(undefined *)(param_1 + 0x68) = 1;
  FUN_segment_0__80678e78(uVar5 & 0xff);
  *(uint *)(param_1 + 100) = uVar5;
  return;
}

// === AI_Control_assertFail_807292fc (0x807292fc) ===
void AI_Control_assertFail_807292fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Control_807298e4 (0x807298e4) ===
uint ai_AI_Control_807298e4(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 4) {
    uVar1 = FUN_segment_0__804214c8(iRam00000000);
    uVar1 = *(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x38) >> 1 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// === ai_AI_Control_8072993c (0x8072993c) ===
uint ai_AI_Control_8072993c(void)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  if ((*(int *)((int)g_Ram_float + 0xb74) == 1) &&
     (iVar1 = FUN_segment_0__80425788(g_Ram_float,2), iVar1 != 0)) {
    dVar3 = (double)(**(code **)(**(int **)((int)g_Ram_float + 8) + 0x24))();
    uVar2 = ((uint)(byte)(((double)g_Ram_float < dVar3) << 3) << 0x1c) >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// === ai_AI_Control_807299bc (0x807299bc) ===
uint ai_AI_Control_807299bc(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(*g_Ram_ptr + 0x38b) == 0) {
    if (*(int *)(param_1 + 8) == 4) {
      iVar2 = FUN_segment_0__80425788(g_Ram_ptr,4);
      if (iVar2 == 0) {
        iVar2 = *(int *)*g_Ram_ptr;
        if (((((iVar2 == 0x6a) || (iVar2 == 0x6b)) || (iVar2 == 0x6e)) || (iVar2 == 0x6f)) &&
           (g_Ram_ptr[2] != 0)) {
          *(undefined4 *)(param_1 + 0x44) = 0x48;
          uVar1 = 1;
        }
        else if (((iVar2 == 0x33) || (iVar2 == 0x32)) || (iVar2 == 0x34)) {
          uVar1 = *(uint *)(*(int *)g_Ram_ptr[3] + 0x38) >> 1 & 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// === AI_Control_assertFail_80729ac8 (0x80729ac8) ===
void AI_Control_assertFail_80729ac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Control_validate_8072a0d8 (0x8072a0d8) ===
int AI_Control_validate_8072a0d8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === ai_AI_Control_8072a118 (0x8072a118) ===
char ai_AI_Control_8072a118(int *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar2 = '\x01';
  if (*(char *)(iRam00000000 + 0x26) != 0) {
    cVar2 = *(char *)(iRam00000000 + 0x26);
  }
  cVar4 = 0;
  if ((param_2 & 0x10) != 0) {
    cVar4 = cVar2;
  }
  if ((param_2 & 0x20) != 0) {
    cVar4 = cVar4 + cVar2;
  }
  if ((param_2 & 0x40) != 0) {
    cVar4 = cVar4 + cVar2;
  }
  if ((param_2 & 0x80) != 0) {
    cVar4 = cVar4 + cVar2 * '\x02' + '\x01';
  }
  if ((param_2 & 2) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  if ((param_2 & 8) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  cVar3 = (**(code **)(*param_1 + 0x6c))(param_1);
  cVar4 = cVar4 + cVar3;
  cVar3 = (**(code **)(*param_1 + 0x6c))(param_1);
  if ((cVar3 != 0) && ((param_2 & 0x800) != 0)) {
    cVar4 = cVar4 + cVar2;
  }
  if ((param_2 & 4) != 0) {
    cVar4 = cVar4 + cVar2 * '\x02';
  }
  if ((param_2 & 0x100) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  if ((param_2 & 0x1000) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  if ((param_2 & 0x200) != 0) {
    cVar4 = cVar4 + '\x02';
  }
  if ((param_2 & 0x400) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  if ((param_2 & 0x2000) != 0) {
    cVar4 = cVar4 + '\x01';
  }
  bVar1 = false;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar1 = true;
  }
  if (bVar1) {
    cVar4 = cVar4 + cVar2 * '\x02' + '\x01';
  }
  return cVar4;
}

// === AI_Control_assertFail_8072a2d0 (0x8072a2d0) ===
void AI_Control_assertFail_8072a2d0(void)

{
  byte bVar1;
  
  bVar1 = 1;
  if (*(byte *)(iRam00000000 + 0x26) != 0) {
    bVar1 = *(byte *)(iRam00000000 + 0x26);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uint)bVar1 * 0x330 + 0x10);
}

// === ai_AI_Control_8072ae38 (0x8072ae38) ===
undefined4 * ai_AI_Control_8072ae38(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Control_validate_8072ae74 (0x8072ae74) ===
undefined4 AI_Control_validate_8072ae74(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x20,0,0xc,0xc);
  }
  return 0;
}

// === ai_AI_Control_8072aedc (0x8072aedc) ===
undefined4 * ai_AI_Control_8072aedc(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  *(undefined *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0;
  return param_1;
}

// === ai_AI_Control_8072af2c (0x8072af2c) ===
undefined4 * ai_AI_Control_8072af2c(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  *(undefined *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0xffffffff;
  param_1[0x62] = 0;
  return param_1;
}

// === ai_AI_Control_8072b060 (0x8072b060) ===
void ai_AI_Control_8072b060(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((iRam00000000 != 0) && (*(int *)(iRam00000000 + 0x1d4) != 0)) {
    uVar3 = 1;
    if (*(byte *)(iRam00000000 + 0x26) != 0) {
      uVar3 = (uint)*(byte *)(iRam00000000 + 0x26);
    }
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
      FUN_segment_0__806db82c(*(int *)(iRam00000000 + 0x1d4) + iVar2,param_1);
      iVar2 = iVar2 + 0xc4;
    }
  }
  return;
}

// === ai_AI_Control_8072b0f4 (0x8072b0f4) ===
void ai_AI_Control_8072b0f4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((iRam00000000 != 0) && (*(int *)(iRam00000000 + 0x1d4) != 0)) {
    uVar3 = 1;
    if (*(byte *)(iRam00000000 + 0x26) != 0) {
      uVar3 = (uint)*(byte *)(iRam00000000 + 0x26);
    }
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
      FUN_segment_0__806dada4(*(int *)(iRam00000000 + 0x1d4) + iVar2);
      iVar2 = iVar2 + 0xc4;
    }
  }
  return;
}

// === AI_Control_validate_8072b1a8 (0x8072b1a8) ===
int AI_Control_validate_8072b1a8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804c88c8(param_1 + 0x80,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === AI_Control_validate_8072b22c (0x8072b22c) ===
void AI_Control_validate_8072b22c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === ai_AI_Control_8072b2b4 (0x8072b2b4) ===
undefined4 * ai_AI_Control_8072b2b4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  param_1[0x3c] = 0xffffffff;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x41] = uRam00000008;
  param_1[0x3d] = 0;
  param_1[0x3e] = param_1;
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x42] = 0;
  param_1[0x43] = param_1;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar2;
  param_1[0x46] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x47);
  return param_1;
}

// === AI_Control_validate_8072b370 (0x8072b370) ===
void AI_Control_validate_8072b370(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  (**(code **)(param_1[0x47] + 0x10))(param_1 + 0x47,1,0);
  iVar3 = (**(code **)(*param_1 + 0x74))(param_1);
  if (iVar3 != 0) {
    FUN_segment_0__804ca350(param_1 + 0x47,2,param_1 + 0x42,0,0);
  }
  FUN_segment_0__804d1c34(param_1,param_1 + 0x47);
  iVar3 = (**(code **)(*param_1 + 0x6c))(param_1);
  param_1[0x15] = iVar3;
  iVar6 = 0;
  iVar3 = (**(code **)(*param_1 + 0x74))(param_1);
  if (iVar3 != 0) {
    bVar2 = true;
    bVar5 = true;
    bVar1 = true;
    iVar3 = *(int *)*g_Ram_uint;
    if ((iVar3 != 0x1e) && (iVar3 != 0x20)) {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar3 != 0x24)) {
      bVar5 = false;
    }
    if ((!bVar5) && (iVar3 != 0x28)) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar6 = 1;
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_segment_0__804d1c1c
            (param_1,(iVar6 - ((int)(-uVar4 | uVar4) >> 0x1f)) +
                     (uint)(param_1[1] == 0x27) + param_1[0x15]);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1[0x15] * 0x254 + 0x10);
}

// === AI_Control_validate_8072c03c (0x8072c03c) ===
void AI_Control_validate_8072c03c(int *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined auStack_1a8 [104];
  undefined auStack_140 [64];
  ushort local_100;
  byte local_fe;
  ushort local_fc;
  char local_fa;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_88;
  
  if ((param_1[4] == 0) &&
     (((iVar5 = param_1[1], 0x37 < iVar5 && (iVar5 < 0x3a)) || (iVar5 == 0x1f)))) {
    FUN_segment_0__80602604(g_Ram_uint);
    FUN_segment_0__804d24b8(param_1,0xd3,0xffffffff);
  }
  uVar10 = 1;
  uVar6 = 0;
  uVar9 = (uint)*(byte *)((int)g_Ram_uint + 0x26);
  if (uVar9 != 0) {
    if (((8 < uVar9) && (uVar9 < 0x7fffffff)) && (uVar11 = uVar9 - 1 >> 3, 0 < (int)(uVar9 - 8))) {
      do {
        uVar10 = uVar10 | 1 << (uVar6 & 0x3f) | 1 << (uVar6 + 1 & 0x3f) | 1 << (uVar6 + 2 & 0x3f) |
                 1 << (uVar6 + 3 & 0x3f) | 1 << (uVar6 + 4 & 0x3f) | 1 << (uVar6 + 5 & 0x3f) |
                 1 << (uVar6 + 6 & 0x3f) | 1 << (uVar6 + 7 & 0x3f);
        uVar6 = uVar6 + 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar5 = uVar9 - uVar6;
    if ((int)uVar6 < (int)uVar9) {
      do {
        uVar11 = uVar6 & 0x3f;
        uVar6 = uVar6 + 1;
        uVar10 = uVar10 | 1 << uVar11;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  (**(code **)(param_1[0x47] + 0x1c))
            (param_1 + 0x47,1 << (param_1[0x11] & 0x3fU),uVar10,
             (uVar9 | 0xfffffffd) - (uVar9 - 2 >> 1) >> 0x1f);
  if (param_1[0x15] < 3) {
    FUN_segment_0__804ca380(param_1 + 0x47,2);
  }
  else {
    FUN_segment_0__804ca380(param_1 + 0x47,1);
  }
  FUN_segment_0__804a9eec(param_1[0x12],param_1[0x11]);
  if (param_1[1] == 0x29) {
    param_1[0x16] = 0x21;
  }
  if ((param_1[1] == 0x27) && (*(int *)*g_Ram_uint == 0x31)) {
    FUN_segment_0__8050eb28(param_1[0x14]);
  }
  iVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar5 != 0) {
    FUN_segment_0__804b4ecc(&local_d0);
    iVar5 = param_1[1];
    if (iVar5 == 0x27) {
      iVar5 = *(int *)(*(int *)g_Ram_uint[3] + 0x40);
      uVar3 = *(ushort *)(iVar5 + 4);
      bVar1 = *(byte *)(iVar5 + 6);
      uVar4 = *(ushort *)(iVar5 + 8);
      cVar2 = *(char *)(iVar5 + 10);
      FUN_segment_0__8040be9c(auStack_1a8);
      FUN_segment_0__8040c3bc(auStack_1a8,g_Ram_uint[0x303]);
      if (cVar2 == 0) {
        uVar6 = 0;
      }
      else if (local_fa == 0) {
        uVar6 = 1;
      }
      else if (uVar3 < local_100) {
        uVar6 = 1;
      }
      else {
        if (uVar3 == local_100) {
          if (bVar1 < local_fe) {
            uVar6 = 1;
            goto LAB_segment_0__8072c35c;
          }
          if ((bVar1 == local_fe) && (uVar4 <= local_fc)) {
            uVar6 = 1;
            goto LAB_segment_0__8072c35c;
          }
        }
        uVar6 = 0;
      }
LAB_segment_0__8072c35c:
      param_1[0xd0] = ((int)(-uVar6 | uVar6) >> 0x1f) + 0x533;
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar7 = (void *)0;
      }
      else {
        puVar7 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      local_d0 = puVar7[0x24a3];
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar7 = (void *)0;
      }
      else {
        puVar7 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      local_cc = puVar7[0x24a4];
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_140,0,0xc,5);
    }
    if (iVar5 == 0x29) {
      param_1[0xd0] = 0x451;
      local_88 = FUN_segment_0__804ce0ec(g_Ram_uint[0x26] + 0x188,1);
    }
    else if ((iVar5 == 0x2c) && (*(int *)*g_Ram_uint == 0x34)) {
      param_1[0xd0] = 0x45e;
      FUN_segment_0__80500a34(param_1[0x12],0x455,0);
      FUN_segment_0__80500a34(param_1[0x12] + 0x254,0x454,0);
    }
    uVar8 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_segment_0__80500a34(param_1[0x13],uVar8,&local_d0);
  }
  return;
}

// === ai_AI_Control_8072c4a8 (0x8072c4a8) ===
void ai_AI_Control_8072c4a8(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 4) &&
     (((*(int *)((int)g_Ram_float + 0xb74) == 1 || (*(int *)((int)g_Ram_float + 0x38) == 3)) &&
      (iVar1 = FUN_segment_0__80425788(g_Ram_float,4), iVar1 != 0)))) {
    (**(code **)(*param_1 + 100))(param_1,0xffffffff);
    FUN_segment_0__804d1c48((double)g_Ram_float,param_1,1);
  }
  return;
}

// === ai_AI_Control_8072c544 (0x8072c544) ===
void ai_AI_Control_8072c544(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 1) &&
     (((iVar1 = *(int *)(param_1 + 4), 0x37 < iVar1 && (iVar1 < 0x3a)) || (iVar1 == 0x1f)))) {
    FUN_segment_0__80602614(uRam00000000);
    FUN_segment_0__804d24b8(param_1,0xd4,0xffffffff);
  }
  return;
}

// === ai_AI_Control_8072c5b4 (0x8072c5b4) ===
void ai_AI_Control_8072c5b4(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(byte *)(iRam00000000 + 0x26);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (*(int *)(iRam00000000 + 0x1764) != 1) {
    for (iVar2 = 0; iVar2 < (int)uVar1; iVar2 = iVar2 + 1) {
      FUN_segment_0__804df4d4(iRam00000000 + 0x34,iVar2);
    }
    *(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x3d0) = 0;
  }
  return;
}

// === ai_AI_Control_8072c64c (0x8072c64c) ===
void ai_AI_Control_8072c64c(int *param_1)

{
  (**(code **)(*param_1 + 100))(param_1,0xffffffff);
  FUN_segment_0__804d1c48((double)g_Ram_float,param_1,1);
  ai_AI_Control_8072f554(g_Ram_float);
  return;
}

// === ai_AI_Control_8072c6a8 (0x8072c6a8) ===
void ai_AI_Control_8072c6a8(int *param_1)

{
  (**(code **)(*param_1 + 100))(param_1,0xffffffff);
  FUN_segment_0__804d1c48((double)g_Ram_float,param_1,1);
  ai_AI_Control_8072f554(g_Ram_float);
  return;
}

// === AIControlBaseFv::initAfterManager (0x8072c704) ===
/* WARNING: Control flow encountered bad instruction data */

void AIControlBaseFv::initAfterManager(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_8072e220 (0x8072e220) ===
bool ai_AI_Control_8072e220(void)

{
  int iVar1;
  
  iVar1 = *(int *)(iRam00000000 + 0xb70);
  if (iVar1 == 0) {
    return *(char *)(iRam00000000 + 0xb8c) == '\x03';
  }
  if (iVar1 == 1) {
    return *(int *)(*(int *)(iRam00000000 + 0x98) + 100) ==
           *(int *)(*(int *)(iRam00000000 + 0x98) + 0x60);
  }
  if (iVar1 != 3) {
    return false;
  }
  iVar1 = *(int *)(iRam00000000 + 0x98);
  if (*(int *)(iVar1 + 100) <= *(int *)(iVar1 + 0x68)) {
    return true;
  }
  if (*(int *)(iVar1 + 100) <= *(int *)(iVar1 + 0x6c)) {
    return true;
  }
  return false;
}

// === AI_Control_validate_8072e374 (0x8072e374) ===
void AI_Control_validate_8072e374(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === AI_Control_validate_8072e3a4 (0x8072e3a4) ===
void AI_Control_validate_8072e3a4(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === ai_AI_Control_8072e454 (0x8072e454) ===
undefined4 * ai_AI_Control_8072e454(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar4 = uRam00000008;
  uVar3 = uRam00000004;
  iVar2 = iRam00000000;
  param_1[0x12] = 0;
  param_1[0x13] = param_1;
  param_1[0x14] = iVar2;
  param_1[0x15] = uVar3;
  param_1[0x16] = uVar4;
  FUN_segment_0__804c880c(param_1 + 0x17);
  (**(code **)(param_1[0x17] + 0x10))
            (param_1 + 0x17,1,
             (*(byte *)(iRam00000000 + 0x26) | 0xfffffffd) -
             (*(byte *)(iRam00000000 + 0x26) - 2 >> 1) >> 0x1f);
  FUN_segment_0__804c821c(param_1 + 0x17,0);
  FUN_segment_0__804c8d34(param_1 + 0x17,2,param_1 + 0x12,0);
  FUN_segment_0__804c8d34(param_1 + 0x17,0,param_1 + 0x12,0);
  FUN_segment_0__804c8d34(param_1 + 0x17,1,param_1 + 0x12,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x17);
  bVar1 = false;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar1 = true;
  }
  if (bVar1) {
    param_1[0x11] = 300;
  }
  else {
    param_1[0x11] = 600;
  }
  return param_1;
}

// === ai_AI_Control_8072e5a4 (0x8072e5a4) ===
void ai_AI_Control_8072e5a4(int *param_1)

{
  int iVar1;
  
  param_1[0x11] = 600;
  (**(code **)(*param_1 + 0x68))();
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(iRam00000000 + 0x24); iVar1 = iVar1 + 1) {
    FUN_segment_0__8047d97c(iRam00000000,iVar1);
    if (param_1[1] == 0x33) {
      FUN_segment_0__8047dfe0();
      FUN_segment_0__80485c58();
    }
    else if (param_1[1] == 0x35) {
      if (*(int *)(iRam00000000 + 0xb70) == 4) {
        FUN_segment_0__8047dfe0();
        FUN_segment_0__80485c70();
      }
      else if (*(int *)(iRam00000000 + 0xb70) == 2) {
        FUN_segment_0__8047dfe0();
        FUN_segment_0__80485c70();
      }
    }
  }
  return;
}

// === ai_AI_Control_8072e680 (0x8072e680) ===
void ai_AI_Control_8072e680(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 100))();
  if (iVar1 == 0) {
    FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0xffffffff);
  }
  return;
}

// === ai_AI_Control_8072e6d4 (0x8072e6d4) ===
void ai_AI_Control_8072e6d4(int *param_1)

{
  int iVar1;
  
  if (*(char *)(*g_Ram_ptr + 0x38b) != 0) {
    param_1[0x11] = param_1[0x11] + 1;
  }
  if (param_1[2] == 4) {
    iVar1 = (**(code **)(*param_1 + 100))(param_1);
    if (iVar1 == 0) {
      if (param_1[0x11] == param_1[7]) {
        FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0xffffffff);
      }
    }
    else {
      param_1[0x11] = param_1[0x11] + 1;
    }
  }
  return;
}

// === ai_AI_Control_8072e77c (0x8072e77c) ===
void ai_AI_Control_8072e77c(void)

{
  ushort uVar1;
  int iVar2;
  undefined uVar4;
  short sVar3;
  undefined4 *puVar5;
  
  iVar2 = *(int *)*g_Ram_uint;
  if ((iVar2 < 0x68) || (0x69 < iVar2)) {
    if ((0x6b < iVar2) && (iVar2 < 0x6e)) {
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar5 = (void *)0;
      }
      else {
        puVar5 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      uVar1 = *(ushort *)(puVar5 + 0x2408);
      uVar4 = FUN_segment_0__804214c8(g_Ram_uint,0);
      sVar3 = FUN_segment_0__8041ddc8(g_Ram_uint,uVar4);
      iVar2 = (uint)uVar1 - (int)sVar3;
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      else if (9999 < iVar2) {
        iVar2 = 9999;
      }
      *(short *)(puVar5 + 0x2408) = (short)iVar2;
      iVar2 = *(byte *)((int)puVar5 + 0x93ea) - 1;
      if (iVar2 < 0x1f) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x1f < iVar2) {
          iVar2 = 0x1f;
        }
        *(char *)((int)puVar5 + 0x93ea) = (char)iVar2;
      }
      FUN_segment_0__804e45fc(g_Ram_uint[0x24]);
    }
  }
  else {
    if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
      puVar5 = (void *)0;
    }
    else {
      puVar5 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    uVar1 = *(ushort *)(puVar5 + 0x2406);
    uVar4 = FUN_segment_0__804214c8(g_Ram_uint,0);
    sVar3 = FUN_segment_0__8041ddc8(g_Ram_uint,uVar4);
    iVar2 = (uint)uVar1 - (int)sVar3;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (9999 < iVar2) {
      iVar2 = 9999;
    }
    *(short *)(puVar5 + 0x2406) = (short)iVar2;
    iVar2 = *(byte *)((int)puVar5 + 0x93ea) - 1;
    if (iVar2 < 0x1f) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x1f < iVar2) {
        iVar2 = 0x1f;
      }
      *(char *)((int)puVar5 + 0x93ea) = (char)iVar2;
    }
    FUN_segment_0__804e45fc(g_Ram_uint[0x24]);
  }
  return;
}

// === AI_Control_validate_8072e9ac (0x8072e9ac) ===
void AI_Control_validate_8072e9ac(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === AI_Control_validate_8072e9f0 (0x8072e9f0) ===
void AI_Control_validate_8072e9f0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 4) == 0x33) {
    uVar1 = 3;
  }
  FUN_segment_0__804d1c1c(param_1,uVar1);
  uVar2 = 0;
  iVar3 = 0;
  do {
    iVar4 = param_1 + (uVar2 & 0xff) * 0xb90 + 0x1a0;
    FUN_segment_0__804d1c2c(param_1,iVar3,iVar4,0);
    FUN_segment_0__806dff94(iVar4,uVar2 & 0xff);
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 2);
  if (*(int *)(param_1 + 4) == 0x33) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x198);
  }
  uRam00000000 = 0;
  return;
}

// === ai_AI_Control_8072eb1c (0x8072eb1c) ===
void ai_AI_Control_8072eb1c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18c0);
  if ((piVar1 != (int *)0) && (*(int *)(param_1 + 0x20) == 0x14)) {
    (**(code **)(*piVar1 + 0x54))(piVar1);
  }
  ai_AI_Control_8072e6d4(param_1);
  return;
}

// === ai_AI_Control_8072eb78 (0x8072eb78) ===
undefined4 ai_AI_Control_8072eb78(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 0x1a0;
  iVar2 = 0;
  do {
    iVar1 = FUN_segment_0__806e0c9c(param_1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0xb90;
  } while (iVar2 < 2);
  return 0;
}

// === ai_AI_Control_8072ebd8 (0x8072ebd8) ===
int ai_AI_Control_8072ebd8(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (iRam00000000._0_1_ == 0) {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    for (bVar5 = 0; bVar5 < *(byte *)(iRam00000000 + 0x24); bVar5 = bVar5 + 1) {
      iVar7 = (uint)bVar5 * 0xf0;
      iVar8 = iRam00000000 + 0x28 + iVar7;
      if (*(int *)(iVar8 + 0xcc) == 1) {
        bVar1 = false;
        uVar6 = *(int *)(iRam00000000 + 0xb70) - 3;
        if ((uVar6 < 8) && ((1 << (uVar6 & 0x3f) & 0xc1U) != 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar2 = iVar2 + (uint)*(ushort *)
                                 (*(int *)(*(int *)(iRam00000000 + 0xc) + (uint)bVar5 * 4) + 0x22);
        }
        else {
          uVar6 = (uint)*(ushort *)(iRam00000000 + 0xc18 + iVar7 + 0xda);
          iVar7 = uVar6 - *(ushort *)(iVar8 + 0xd8);
          iVar2 = iVar2 + uVar6;
          if (iVar4 < iVar7) {
            iVar4 = iVar7;
          }
        }
      }
      else if (*(int *)(iVar8 + 0xcc) == 0) {
        bVar1 = false;
        uVar6 = *(int *)(iRam00000000 + 0xb70) - 3;
        if ((uVar6 < 8) && ((1 << (uVar6 & 0x3f) & 0xc1U) != 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar3 = iVar3 + (uint)*(ushort *)
                                 (*(int *)(*(int *)(iRam00000000 + 0xc) + (uint)bVar5 * 4) + 0x22);
        }
        else {
          uVar6 = (uint)*(ushort *)(iRam00000000 + 0xc18 + iVar7 + 0xda);
          iVar7 = uVar6 - *(ushort *)(iVar8 + 0xd8);
          iVar3 = iVar3 + uVar6;
          if (iVar4 < iVar7) {
            iVar4 = iVar7;
          }
        }
      }
    }
    iRam00000000 = iVar3 - iVar2;
  }
  return iRam00000000;
}

// === ai_AI_Control_8072ed60 (0x8072ed60) ===
void ai_AI_Control_8072ed60(void)

{
  int iVar1;
  
  iVar1 = ai_AI_Control_8072ebd8();
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 1;
    }
    else {
      *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 2;
    }
  }
  else {
    *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 0;
  }
  return;
}

// === ai_AI_Control_8072ede0 (0x8072ede0) ===
void ai_AI_Control_8072ede0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar3 = ai_AI_Control_8072ebd8();
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 1;
      *(int *)(*(int *)(iRam00000000 + 0x98) + 0x6c) =
           *(int *)(*(int *)(iRam00000000 + 0x98) + 0x6c) + 1;
      FUN_segment_0__80500a34(*(undefined4 *)(param_1 + 0x18c0),0x4bf,0);
      *(undefined *)(*(int *)(param_1 + 0x18c0) + 0x80) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 2;
      FUN_segment_0__80500a34(*(undefined4 *)(param_1 + 0x18c0),0x4c2,0);
      *(undefined *)(*(int *)(param_1 + 0x18c0) + 0x80) = 0;
    }
  }
  else {
    *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x70) = 0;
    *(int *)(*(int *)(iRam00000000 + 0x98) + 0x68) =
         *(int *)(*(int *)(iRam00000000 + 0x98) + 0x68) + 1;
    FUN_segment_0__80500a34(*(undefined4 *)(param_1 + 0x18c0),0x4be,0);
    *(undefined *)(*(int *)(param_1 + 0x18c0) + 0x80) = 0;
  }
  bVar6 = false;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar6 = true;
  }
  if (bVar6) {
    if (*(short *)(iRam00000000 + 0x36) < 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar4 = FUN_segment_0__804214c8(iRam00000000,0);
    uVar7 = 0;
    for (uVar1 = (uint)*(byte *)(iRam00000000 + 0x24); uVar1 != 0; uVar1 = uVar1 - 1) {
      bVar6 = false;
      if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
        bVar6 = true;
      }
      if ((!bVar6) || (*(int *)(iRam00000000 + 0x28 + (uVar7 & 0xff) * 0xf0 + 0x10) != 0)) {
        if (*(int *)(iRam00000000 + 0x28 + (uVar7 & 0xff) * 0xf0 + 0xcc) == 1) {
          uVar8 = uVar8 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
        }
      }
      uVar7 = uVar7 + 1;
    }
    uVar2 = 0;
    uVar5 = 0;
    uVar7 = uVar2;
    uVar1 = uVar5;
    if (iVar3 < 1) {
      if ((iVar3 < 0) && (uVar7 = uVar9, *(int *)(iRam00000000 + (uVar4 & 0xff) * 0xf0 + 0xf4) != 1)
         ) {
        uVar7 = uVar2;
        uVar1 = uVar8;
      }
    }
    else {
      uVar1 = uVar9;
      if (*(int *)(iRam00000000 + (uVar4 & 0xff) * 0xf0 + 0xf4) == 0) {
        uVar7 = uVar8;
        uVar1 = uVar5;
      }
    }
    uVar9 = *(int *)(iVar10 + 0x9274) + (uVar7 & 0xffff);
    if (99999 < uVar9) {
      uVar9 = 99999;
    }
    *(uint *)(iVar10 + 0x9274) = uVar9;
    uVar9 = *(int *)(iVar10 + 0x9278) + (uVar1 & 0xffff);
    if (99999 < uVar9) {
      uVar9 = 99999;
    }
    *(uint *)(iVar10 + 0x9278) = uVar9;
    bVar6 = false;
    if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
      bVar6 = true;
    }
    if (bVar6) {
      uVar9 = *(int *)(iVar10 + 0x9284) + (uVar7 & 0xffff);
      if (99999 < uVar9) {
        uVar9 = 99999;
      }
      *(uint *)(iVar10 + 0x9284) = uVar9;
      uVar9 = *(int *)(iVar10 + 0x9288) + (uVar1 & 0xffff);
      if (99999 < uVar9) {
        uVar9 = 99999;
      }
      *(uint *)(iVar10 + 0x9288) = uVar9;
    }
    FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
  }
  return;
}

// === ai_AI_Control_8072f190 (0x8072f190) ===
undefined4 ai_AI_Control_8072f190(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 < 0x72) {
    if (iVar1 < 0x6e) {
      if (0x6b < iVar1) {
        return 0x45;
      }
    }
    else if (iVar1 < 0x70) {
      return 0x48;
    }
  }
  else if (iVar1 < 0x76) {
    if (iVar1 < 0x74) {
      return 0x44;
    }
  }
  else if (iVar1 < 0x78) {
    return 0x44;
  }
  iVar1 = ai_AI_Control_8072e220();
  uVar2 = 0x23;
  if (iVar1 != 0) {
    uVar2 = 0x24;
  }
  return uVar2;
}

// === AI_Control_validate_8072f22c (0x8072f22c) ===
int AI_Control_validate_8072f22c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x1a0,0,0xb90,2);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === AI_Control_validate_8072f2c4 (0x8072f2c4) ===
int AI_Control_validate_8072f2c4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x1a0,0,0xb90,2);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === AI_Control_validate_8072f35c (0x8072f35c) ===
int AI_Control_validate_8072f35c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x1a0,0,0xb90,2);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === AI_Control_validate_8072f428 (0x8072f428) ===
int AI_Control_validate_8072f428(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(8);
  }
  return iRam00000000;
}

// === ai_AI_Control_8072f4a0 (0x8072f4a0) ===
void ai_AI_Control_8072f4a0(void)

{
  if (g_Ram_ptr != (int *)0) {
    if (g_Ram_ptr != (int *)0) {
      (**(code **)(*g_Ram_ptr + 8))(g_Ram_ptr,1);
    }
    g_Ram_ptr = (int *)0;
  }
  return;
}

// === AI_Control_validate_8072f4f0 (0x8072f4f0) ===
int AI_Control_validate_8072f4f0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === ai_AI_Control_8072f530 (0x8072f530) ===
void ai_AI_Control_8072f530(int param_1)

{
  *(undefined *)(*g_Ram_ptr + 0x389) = 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

// === ai_AI_Control_8072f554 (0x8072f554) ===
void ai_AI_Control_8072f554(int param_1)

{
  *(undefined *)(*g_Ram_ptr + 0x389) = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}

// === ai_AI_Control_8072f808 (0x8072f808) ===
undefined4 ai_AI_Control_8072f808(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x20) {
                    /* WARNING: Could not emulate address calculation at 0x8072f81c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 << 2))();
    return uVar1;
  }
  return 0xffffffff;
}

// === ai_AI_Control_8072f8a4 (0x8072f8a4) ===
undefined4 ai_AI_Control_8072f8a4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0x1eU < 0x69) {
                    /* WARNING: Could not emulate address calculation at 0x8072f8bc */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((param_1 - 0x1eU) * 4))();
    return uVar1;
  }
  return 0;
}

// === ai_AI_Control_8072f8d8 (0x8072f8d8) ===
undefined4 ai_AI_Control_8072f8d8(int param_1)

{
  if ((((0xc < param_1 - 0x5bU) && (4 < param_1 - 0x55U)) && (1 < param_1 - 0x83U)) &&
     (param_1 != 0xa5)) {
    return 0;
  }
  return 1;
}

// === ai_AI_Control_8072f914 (0x8072f914) ===
uint ai_AI_Control_8072f914(int param_1)

{
  return (~(param_1 - 0x7fU) | 2) - (2 - (param_1 - 0x7fU) >> 1) >> 0x1f;
}

// === ai_AI_Control_8072f934 (0x8072f934) ===
uint ai_AI_Control_8072f934(int param_1)

{
  return (~(param_1 - 0x85U) | 1) - (1 - (param_1 - 0x85U) >> 1) >> 0x1f;
}

// === ai_AI_Control_8072f954 (0x8072f954) ===
char ai_AI_Control_8072f954(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  cVar1 = 0;
  uVar3 = 0;
  iVar2 = iRam00000000 + 0xc18;
  iVar4 = 2;
  do {
    if (*(int *)(iVar2 + (uVar3 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(int *)(iVar2 + (uVar3 + 1 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(int *)(iVar2 + (uVar3 + 2 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(int *)(iVar2 + (uVar3 + 3 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(int *)(iVar2 + (uVar3 + 4 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(int *)(iVar2 + (uVar3 + 5 & 0xff) * 0xf0 + 0x10) != 5) {
      cVar1 = cVar1 + '\x01';
    }
    uVar3 = uVar3 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return cVar1;
}

// === ai_AI_Control_8072fa50 (0x8072fa50) ===
uint ai_AI_Control_8072fa50(void)

{
  return *(uint *)(*(int *)(iRam00000000 + 0x98) + 0x124) & 0xff;
}

// === AI_Control_validate_8072fb60 (0x8072fb60) ===
undefined4 AI_Control_validate_8072fb60(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(uint *)(*(int *)(iRam00000000 + 0x98) + 0x3c8) = param_1;
  FUN_segment_0__804385cc(iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,0,0,param_1);
  if (*(char *)(iRam00000000 + 0x25000) == 0) {
    bVar1 = false;
    iVar4 = *(int *)(iRam00000000 + 0x18);
    iVar2 = FUN_segment_0__8040bd4c(iVar4);
    if ((iVar2 != 0) && ((*(uint *)(iVar4 + 4) >> 2 & 0x3f) == param_1)) {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(iRam00000000 + 0xd18) = 3;
      iVar2 = iRam00000000;
      iVar4 = FUN_segment_0__8040bd4c(*(undefined4 *)(iRam00000000 + 0x18));
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar2 + 0x18);
      }
      FUN_segment_0__80421484(iRam00000000,uVar3);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *(undefined4 *)(iRam00000000 + 0xd18) = 5;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Control_validate_8072fc80 (0x8072fc80) ===
undefined4 AI_Control_validate_8072fc80(undefined param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804385cc(iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,1,param_1,0xffffffff)
  ;
  if (*(char *)(iRam00000000 + 0x25000) == 0) {
    *(undefined4 *)(iRam00000000 + 0xd18) = 3;
    iVar1 = iRam00000000;
    iVar2 = FUN_segment_0__8040bd4c(*(undefined4 *)(iRam00000000 + 0x18));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x18);
    }
    FUN_segment_0__80421484(iRam00000000,uVar3);
    *(undefined4 *)(iRam00000000 + 0x1758) = 0xffffffff;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Control_8072fd38 (0x8072fd38) ===
void ai_AI_Control_8072fd38(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(ushort *)(param_1 + 4) < 100) {
    uVar2 = (uint)*(byte *)(param_1 + 6);
    uVar1 = *(ushort *)(param_1 + 4) & 0xff;
    uVar3 = (uint)*(ushort *)(param_1 + 8);
  }
  else {
    uVar1 = 99;
    uVar2 = 0x3b;
    uVar3 = 999;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0x258a;
  *(undefined4 *)(param_2 + 0x38) = 0x258b;
  *(uint *)(param_2 + 0x24) = uVar1 / 10 + 0x2580;
  *(uint *)(param_2 + 0x30) = uVar2 / 10 + 0x2580;
  *(uint *)(param_2 + 0x3c) = uVar3 / 100 + 0x2580;
  *(uint *)(param_2 + 0x28) = uVar1 % 10 + 0x2580;
  *(uint *)(param_2 + 0x34) = uVar2 % 10 + 0x2580;
  *(uint *)(param_2 + 0x40) = (uVar3 / 10) % 10 + 0x2580;
  *(uint *)(param_2 + 0x44) = uVar3 % 10 + 0x2580;
  return;
}

// === ai_AI_Control_8072fe50 (0x8072fe50) ===
bool ai_AI_Control_8072fe50(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804f4774();
  return iVar1 == 2;
}

// === ai_AI_Control_8072fe7c (0x8072fe7c) ===
undefined4 ai_AI_Control_8072fe7c(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(iRam00000000 + 0x98) + 0x124) & 0xff;
  if (*(int *)(iRam00000000 + 0x1760) == 1) {
    if (uVar1 != 1) {
      return 2;
    }
    return 0;
  }
  if (*(int *)(iRam00000000 + 0x1760) != 3) {
    return 0xffffffff;
  }
  if (uVar1 != 1) {
    return 3;
  }
  return 1;
}

// === ai_AI_Control_8072fee0 (0x8072fee0) ===
undefined4 ai_AI_Control_8072fee0(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  iVar2 = *(int *)(iRam00000000 + 0x1760);
  if ((iVar2 != 3) && (iVar2 != 9)) {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  if (iVar2 == 10) {
    return 1;
  }
  return 0;
}

// === ai_AI_Control_8072ff20 (0x8072ff20) ===
undefined4 ai_AI_Control_8072ff20(int param_1)

{
  if (param_1 == -1) {
    return 0;
  }
  return *(undefined4 *)(param_1 << 2);
}

// === ai_AI_Control_8072ff44 (0x8072ff44) ===
undefined4 ai_AI_Control_8072ff44(int param_1,int param_2)

{
  if (param_1 == 5) {
    if (param_2 == 1) {
      return 0;
    }
    if (param_2 == 2) {
      return 7;
    }
    if (param_2 == 3) {
      return 0x10;
    }
  }
  return *(undefined4 *)(param_1 << 2);
}

// === ai_AI_Control_8072ffa8 (0x8072ffa8) ===
undefined4 ai_AI_Control_8072ffa8(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    return *(undefined4 *)(param_1 << 2);
  }
  return 0x19;
}

// === ai_AI_Control_80730044 (0x80730044) ===
undefined4 ai_AI_Control_80730044(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((((0x54 < iVar1) && (iVar1 < 0x58)) || ((0x5a < iVar1 && (iVar1 < 0x5e)))) ||
     ((0x82 < iVar1 && (iVar1 < 0x85)))) {
    if (param_1 == 0) {
      return 0x46;
    }
    if (param_1 == 1) {
      return 0x52;
    }
    if (param_1 == 2) {
      return 0x5e;
    }
    if (param_1 == 0x12) {
      return 0x6a;
    }
    if (param_1 == 0x13) {
      return 0x76;
    }
    if (param_1 == 0x14) {
      return 0x82;
    }
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      return 0x8e;
    }
    if (param_1 == 1) {
      return 0x99;
    }
    if (param_1 == 2) {
      return 0xa4;
    }
    if (param_1 == 0x12) {
      return 0xaf;
    }
    if (param_1 == 0x13) {
      return 0xba;
    }
    if (param_1 == 0x14) {
      return 0xc5;
    }
  }
  else if (param_2 == 1) {
    if (param_1 == 0) {
      return 0xd0;
    }
    if (param_1 == 1) {
      return 0xdc;
    }
    if (param_1 == 2) {
      return 0xe8;
    }
    if (param_1 == 0x12) {
      return 0xf4;
    }
    if (param_1 == 0x13) {
      return 0x100;
    }
    if (param_1 == 0x14) {
      return 0x10c;
    }
  }
  return 0;
}

// === ai_AI_Control_8073025c (0x8073025c) ===
undefined4 ai_AI_Control_8073025c(int param_1)

{
  if (param_1 == 0x1a3) {
    return 0x151;
  }
  if (param_1 < 0x1a3) {
    if (param_1 == 0xf1) {
      return 0x133;
    }
    if (param_1 < 0xf1) {
      if (param_1 == 0xeb) {
        return 0x125;
      }
      if ((param_1 < 0xeb) && (param_1 == 0x18)) {
        return 0x118;
      }
    }
    else {
      if (param_1 == 0x17b) {
        return 400;
      }
      if ((param_1 < 0x17b) && (param_1 < 0xf3)) {
        return 0x141;
      }
    }
  }
  else if (param_1 < 0x1f7) {
    if (param_1 == 0x1ac) {
      return 0x171;
    }
    if (param_1 < 0x1ac) {
      if (0x1aa < param_1) {
        return 0x160;
      }
    }
    else if (500 < param_1) {
      return 0x182;
    }
  }
  else {
    if (param_1 == 0x2f2) {
      return 400;
    }
    if ((param_1 < 0x2f2) && (param_1 == 0x1fa)) {
      return 0x182;
    }
  }
  return 0;
}

// === ai_AI_Control_80730380 (0x80730380) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_80730380(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Control_validate_807307ac (0x807307ac) ===
void AI_Control_validate_807307ac(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_90 [64];
  undefined auStack_50 [52];
  
  *(undefined4 *)(param_1 + 0x644) = 0;
  FUN_segment_0__804ae324(auStack_50,param_1);
  bVar1 = ai_AI_Control_8072fa50();
  uVar2 = 0x49;
  if (bVar1 < 3) {
    uVar2 = 0x38;
  }
  FUN_segment_0__804ae36c(auStack_50,0x5c,100,uVar2,0);
  FUN_segment_0__804ffee8(param_1,3);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_90,0x14,0x78,0);
}

// === ai_AI_Control_807309a4 (0x807309a4) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807309a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_80730ae4 (0x80730ae4) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ai_AI_Control_80730ae4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 0x240);
  uVar1 = FUN_segment_0__80744258(0x78);
  FUN_segment_0__80744948(uVar1,param_1,param_2,param_3);
  FUN_segment_0__80501244
            ((double)(fRam00000028 *
                     (float)((double)CONCAT44(0x43300000,*(uint *)(param_1 + 0x644) ^ 0x80000000) -
                            dRam00000038)),
             (double)(fRam00000028 *
                     (float)((double)CONCAT44(0x43300000,*(uint *)(param_1 + 0x644) + 1 ^ 0x80000000
                                             ) - dRam00000038)),(double)fRam0000002c,
             (double)_DAT_00000030,param_1 + 0x660,0xf0);
  return;
}

// === ai_AI_Control_80730bb4 (0x80730bb4) ===
void ai_AI_Control_80730bb4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 0x240);
  uVar1 = FUN_segment_0__80744258(0x78);
  FUN_segment_0__80744954(uVar1,param_1,param_2,param_3);
  return;
}

// === AI_Control_validate_80730c14 (0x80730c14) ===
void AI_Control_validate_80730c14(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_c8 [64];
  undefined auStack_88 [112];
  
  FUN_segment_0__804ae324(auStack_88,param_1);
  bVar1 = ai_AI_Control_8072fa50();
  uVar2 = 0x10f;
  if (bVar1 < 3) {
    uVar2 = 0xfb;
  }
  FUN_segment_0__804ae36c(auStack_88,0x125,0x12d,uVar2,0);
  FUN_segment_0__804ffee8(param_1,5);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0x14,0x141,0);
}

// === AI_Control_assertFail_80730d38 (0x80730d38) ===
void AI_Control_assertFail_80730d38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Control_assertFail_80730e24 (0x80730e24) ===
void AI_Control_assertFail_80730e24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Control_80730f28 (0x80730f28) ===
void ai_AI_Control_80730f28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_segment_0__804d09c8(*(undefined4 *)(*g_Ram_ptr + 0x400));
  iVar2 = FUN_segment_0__80744258(0x78);
  if (*(int *)(iVar2 + 0x424) == -1) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x424);
  }
  if (((iVar2 < 1) || (iVar1 < 0)) || (4 < iVar1)) {
    param_1 = param_1 + 0x174;
    iVar1 = 0;
    do {
      uVar3 = FUN_segment_0__804ff4a0(param_1 + 0x98,1);
      FUN_segment_0__804ff59c((double)(float)g_Ram_ptr,uVar3,0);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x174;
    } while (iVar1 < 5);
  }
  else {
    iVar4 = param_1 + iVar1 * 0x174 + 0x20c;
    iVar2 = FUN_segment_0__804ff4a0(iVar4,1);
    if (*(int *)(iVar2 + 0x38) == 0) {
      uVar3 = FUN_segment_0__804ff4a0(iVar4,1);
      FUN_segment_0__804ff59c((double)(float)g_Ram_ptr,uVar3,1);
      param_1 = param_1 + 0x174;
      iVar2 = 0;
      do {
        if ((iVar2 != iVar1) &&
           ((iVar4 = FUN_segment_0__804ff4a0(param_1 + 0x98,1), *(int *)(iVar4 + 0x38) == 2 ||
            (iVar4 = FUN_segment_0__804ff4a0(param_1 + 0x98,1), *(int *)(iVar4 + 0x38) == 1)))) {
          uVar3 = FUN_segment_0__804ff4a0(param_1 + 0x98,1);
          FUN_segment_0__804ff59c((double)(float)g_Ram_ptr,uVar3,3);
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 0x174;
      } while (iVar2 < 5);
    }
  }
  return;
}

// === AI_Control_validate_8073110c (0x8073110c) ===
void AI_Control_validate_8073110c(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_d8 [64];
  undefined auStack_98 [128];
  
  FUN_segment_0__804ae324(auStack_98,param_1);
  bVar1 = ai_AI_Control_8072fa50();
  uVar2 = 0x79;
  if (bVar1 < 3) {
    uVar2 = 0x68;
  }
  FUN_segment_0__804ae36c(auStack_98,0x8c,0x94,uVar2,0);
  FUN_segment_0__804ffee8(param_1,2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_d8,0x14,0xa8,0);
}

// === AI_Control_assertFail_80731298 (0x80731298) ===
void AI_Control_assertFail_80731298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Control_8073139c (0x8073139c) ===
void ai_AI_Control_8073139c(int param_1,float *param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_2c [12];
  undefined auStack_20 [24];
  
  FUN_segment_0__8040443c((double)param_2[1],auStack_20,0);
  FUN_segment_0__8040443c((double)*param_2,auStack_2c,0);
  FUN_segment_0__80404464(&local_38,auStack_20,auStack_2c);
  *(undefined4 *)(param_1 + 0x17c) = local_38;
  *(undefined4 *)(param_1 + 0x180) = local_34;
  *(undefined4 *)(param_1 + 0x184) = local_30;
  return;
}

// === ai_AI_Control_80731420 (0x80731420) ===
void ai_AI_Control_80731420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x174) = uRam00000000;
  iVar2 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xef);
  *(undefined *)(param_1 + 0x189) = 0;
  *(int *)(param_1 + 0x178) = iVar2;
  uVar1 = uRam00000000;
  *(undefined4 *)(iVar2 + 0x2c) = uRam00000000;
  *(undefined4 *)(iVar2 + 0x30) = uRam00000004;
  *(undefined4 *)(iVar2 + 0x34) = uRam00000008;
  *(undefined *)(*(int *)(param_1 + 0x178) + 0xb8) = 0xff;
  iVar2 = *(int *)(param_1 + 0x178);
  *(undefined4 *)(iVar2 + 0x44) = uVar1;
  *(undefined4 *)(iVar2 + 0x48) = uVar1;
  return;
}

// === ai_AI_Control_807314bc (0x807314bc) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807314bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Control_validate_80731bd4 (0x80731bd4) ===
void AI_Control_validate_80731bd4(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_60 [24];
  undefined auStack_48 [40];
  
  FUN_segment_0__804ae324(auStack_48,param_1);
  bVar1 = ai_AI_Control_8072fa50();
  uVar2 = 0x171;
  if (bVar1 < 3) {
    uVar2 = 0x15d;
  }
  FUN_segment_0__804ae36c(auStack_48,0x187,399,uVar2,0);
  FUN_segment_0__804ffee8(param_1,5);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_60,0x14,0x1a3,0);
}

// === ai_AI_Control_80731d24 (0x80731d24) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_80731d24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_80732108 (0x80732108) ===
void ai_AI_Control_80732108(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__807464d8(0x79);
  FUN_segment_0__80746968(uVar1,param_1,param_2,param_3);
  return;
}

// === ai_AI_Control_80732160 (0x80732160) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_80732160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Control_assertFail_807323ec (0x807323ec) ===
void AI_Control_assertFail_807323ec(void)

{
  FUN_segment_0__8042fd60(uRam00000000,2,0x36,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x20);
}

// === ai_AI_Control_80732634 (0x80732634) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_80732634(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_807327e4 (0x807327e4) ===
void ai_AI_Control_807327e4(int param_1,int param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x143c) = *(undefined4 *)(param_2 + 0x240);
  uVar2 = FUN_segment_0__80748220(0x7a);
  FUN_segment_0__80748450(uVar2,param_1,param_2,param_3);
  iVar5 = *(int *)(param_1 + 0x143c);
  dVar1 = (double)CONCAT44(g_Ram_float,uRam00000004);
  iVar3 = iVar5 / 5 + (iVar5 >> 0x1f);
  uVar4 = iVar3 - (iVar3 >> 0x1f);
  uVar6 = iVar5 + (iVar3 - (iVar3 >> 0x1f)) * -5;
  FUN_segment_0__80501244
            ((double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar6 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar6 + 1 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar4 + 1 ^ 0x80000000) - dVar1)),
             param_1 + 0x1458,0xf7);
  return;
}

// === ai_AI_Control_80732904 (0x80732904) ===
void ai_AI_Control_80732904(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x143c) = *(undefined4 *)(param_2 + 0x240);
  uVar1 = FUN_segment_0__80748220(0x7a);
  FUN_segment_0__8074845c(uVar1,param_1,param_2,param_3);
  return;
}

// === AI_Control_assertFail_80732964 (0x80732964) ===
void AI_Control_assertFail_80732964(void)

{
  FUN_segment_0__8042fd60(uRam00000000,2,0x102,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x20);
}

// === AI_Control_assertFail_80732aec (0x80732aec) ===
void AI_Control_assertFail_80732aec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Control_assertFail_80732bd8 (0x80732bd8) ===
void AI_Control_assertFail_80732bd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === AI_Control_assertFail_80732d6c (0x80732d6c) ===
void AI_Control_assertFail_80732d6c(void)

{
  FUN_segment_0__8042fd60(uRam00000000,2,0x62,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x20);
}

// === AI_Control_assertFail_80732f38 (0x80732f38) ===
void AI_Control_assertFail_80732f38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Control_80733058 (0x80733058) ===
void ai_AI_Control_80733058(int param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_segment_0__8040443c((double)*(float *)(param_2 + 4),&local_18,0);
  *(undefined4 *)(param_1 + 0x17c) = local_18;
  *(undefined4 *)(param_1 + 0x180) = local_14;
  *(undefined4 *)(param_1 + 0x184) = local_10;
  return;
}

// === ai_AI_Control_807330b0 (0x807330b0) ===
void ai_AI_Control_807330b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x174) = uRam00000000;
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xe4);
  *(int *)(param_1 + 0x178) = iVar1;
  *(undefined *)(param_1 + 0x189) = 0;
  *(undefined *)(iVar1 + 0xb8) = 0xff;
  return;
}

// === ai_AI_Control_8073310c (0x8073310c) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_8073310c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_80733370 (0x80733370) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_80733370(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_807335a4 (0x807335a4) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807335a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_8073377c (0x8073377c) ===
void ai_AI_Control_8073377c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__80748d24(0x7b);
  FUN_segment_0__80748f10(uVar1,param_1,param_2,param_3);
  return;
}

// === ai_AI_Control_807337d4 (0x807337d4) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807337d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Control_validate_80733a00 (0x80733a00) ===
void AI_Control_validate_80733a00(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined auStack_50 [48];
  
  FUN_segment_0__804ae324(auStack_50,param_1);
  uVar1 = 0x31;
  if (param_4 != 0) {
    uVar1 = 0x1d;
  }
  FUN_segment_0__804ae36c(auStack_50,0x15,uVar1,0x44,0);
  FUN_segment_0__804ffee8(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 * 0x17c + 0x10);
}

// === ai_AI_Control_80733d50 (0x80733d50) ===
undefined4 * ai_AI_Control_80733d50(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === AI_Control_validate_80733d8c (0x80733d8c) ===
int AI_Control_validate_80733d8c(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === ai_AI_Control_80733de8 (0x80733de8) ===
void ai_AI_Control_80733de8(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_30 [8];
  undefined4 local_10;
  uint uStack_c;
  
  dVar4 = dRam00000070;
  uVar3 = uRam00000068;
  fVar2 = fRam00000064;
  if (param_2 - 0x18U < 4) {
    param_2 = 0x18;
  }
  else if (param_2 - 0x1eU < 4) {
    param_2 = 0x19;
  }
  else if (param_2 - 0x24U < 4) {
    param_2 = 0x1a;
  }
  piVar7 = local_30;
  iVar9 = 0;
  iVar6 = 0;
  iVar8 = 0;
  iVar10 = 7;
  do {
    *piVar7 = (int)*(short *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x178)) + iVar6) +
              (int)*(short *)(*(int *)(param_3 * 4 + *(int *)(param_1 + 0x17c)) + iVar6);
    fVar1 = fRam00000060;
    if (iVar9 == 0) {
      *piVar7 = *piVar7 + 5;
      fVar1 = fRam0000005c;
    }
    local_10 = 0x43300000;
    iVar6 = iVar6 + 2;
    uStack_c = *piVar7 + 5U ^ 0x80000000;
    iVar5 = *(int *)(*(int *)(param_1 + 0x174) + iVar8 + 0x174);
    iVar8 = iVar8 + 0x17c;
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + 1;
    *(float *)(iVar5 + 0x44) =
         (float)((double)CONCAT44(0x43300000,uStack_c) - dVar4) / (fVar2 + fVar1);
    *(undefined4 *)(iVar5 + 0x48) = uVar3;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  return;
}

// === ai_AI_Control_80733f0c (0x80733f0c) ===
void ai_AI_Control_80733f0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined4 local_64;
  undefined4 local_60;
  short local_58;
  short local_56;
  short local_54;
  short local_50;
  short local_4e;
  short local_4c;
  undefined4 local_48;
  uint uStack_44;
  longlong local_40;
  undefined4 local_38;
  uint uStack_34;
  longlong local_30;
  undefined4 local_28;
  uint uStack_24;
  longlong local_20;
  
  uVar2 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x99);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  FUN_segment_0__804c9a0c(*(undefined4 *)(param_1 + 0x178),&local_50,&local_58);
  local_48 = 0x43300000;
  uStack_44 = (int)local_50 + (int)local_58 ^ 0x80000000;
  iVar1 = (int)(g_Ram_float *
               (float)((double)CONCAT44(0x43300000,uStack_44) -
                      (double)CONCAT44(g_Ram_float,uRam00000004)));
  local_40 = (longlong)iVar1;
  iVar5 = 0xff;
  if (iVar1 < 0xff) {
    iVar5 = iVar1;
  }
  local_38 = 0x43300000;
  uStack_34 = (int)local_4e + (int)local_56 ^ 0x80000000;
  iVar1 = (int)(g_Ram_float *
               (float)((double)CONCAT44(0x43300000,uStack_34) -
                      (double)CONCAT44(g_Ram_float,uRam00000004)));
  local_30 = (longlong)iVar1;
  iVar4 = 0xff;
  if (iVar1 < 0xff) {
    iVar4 = iVar1;
  }
  local_28 = 0x43300000;
  uStack_24 = (int)local_4c + (int)local_54 ^ 0x80000000;
  iVar1 = (int)(g_Ram_float *
               (float)((double)CONCAT44(0x43300000,uStack_24) -
                      (double)CONCAT44(g_Ram_float,uRam00000004)));
  local_20 = (longlong)iVar1;
  iVar3 = 0xff;
  if (iVar1 < 0xff) {
    iVar3 = iVar1;
  }
  uVar6 = 1;
  local_60 = CONCAT31(CONCAT21(CONCAT11((char)iVar5,(char)iVar4),(char)iVar3),0xff);
  uVar2 = local_60;
  do {
    local_64 = uVar2;
    (**(code **)(**(int **)(param_1 + 0x174) + 0x28))(*(int **)(param_1 + 0x174),uVar6,&local_64);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  local_68 = 0xff;
  local_67 = 0xff;
  local_66 = 0xff;
  local_65 = 0xff;
  (**(code **)(**(int **)(param_1 + 0x174) + 0x28))(*(int **)(param_1 + 0x174),0,&local_68);
  return;
}

// === ai_AI_Tricks_80734150 (0x80734150) ===
uint ai_AI_Tricks_80734150(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = ai_AI_Control_8072f8d8(*(undefined4 *)*g_Ram_uint);
  if (iVar2 != 0) {
    piVar5 = (int *)((int *)*g_Ram_uint)[0x92];
    if (piVar5 != (int *)0) {
      iVar2 = *(int *)*g_Ram_uint;
      if ((((iVar2 < 0x60) || (0x61 < iVar2)) && ((iVar2 < 100 || (0x65 < iVar2)))) &&
         ((iVar2 != 0x58 && (iVar2 != 0x5e)))) {
        return 0;
      }
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__8073421c;
            }
          }
          bVar1 = false;
LAB_segment_0__8073421c:
          if (bVar1) goto LAB_segment_0__8073422c;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__8073422c:
      iVar2 = FUN_segment_0__805118cc(piVar5);
      return (uint)(iVar2 == 3);
    }
  }
  iVar2 = ai_AI_Control_8072f8d8(*(undefined4 *)*g_Ram_uint);
  if (iVar2 == 0) {
    uVar4 = g_Ram_uint[0x5e0] & 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

// === AI_Tricks_validate_807342c8 (0x807342c8) ===
void AI_Tricks_validate_807342c8(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uVar1 & 0xff) << 2);
}

// === AI_Tricks_assertFail_80734474 (0x80734474) ===
void AI_Tricks_assertFail_80734474(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Tricks_80734660 (0x80734660) ===
void ai_AI_Tricks_80734660(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 3) == 0) {
    iVar3 = 0;
    for (iVar5 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar5 < (int)(uVar2 & 0xff);
        iVar5 = iVar5 + 1) {
      piVar1 = (int *)(param_1[1] + iVar3);
      iVar3 = iVar3 + 4;
      *(undefined *)(*piVar1 + 0xb8) = 1;
    }
  }
  else {
    iVar5 = (*(int *)(param_1[2] + 0x20) - param_1[4]) * 7;
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    iVar4 = 0;
    for (iVar3 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar3 < (int)(uVar2 & 0xff);
        iVar3 = iVar3 + 1) {
      piVar1 = (int *)(param_1[1] + iVar4);
      iVar4 = iVar4 + 4;
      *(char *)(*piVar1 + 0xb8) = (char)iVar5;
    }
  }
  return;
}

// === AI_Tricks_validate_80734774 (0x80734774) ===
void AI_Tricks_validate_80734774(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uVar1 & 0xff) << 2);
}

// === AI_Tricks_assertFail_80734924 (0x80734924) ===
void AI_Tricks_assertFail_80734924(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Tricks_80734b10 (0x80734b10) ===
void ai_AI_Tricks_80734b10(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 3) == 0) {
    iVar3 = 0;
    for (iVar5 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar5 < (int)(uVar2 & 0xff);
        iVar5 = iVar5 + 1) {
      piVar1 = (int *)(param_1[1] + iVar3);
      iVar3 = iVar3 + 4;
      *(undefined *)(*piVar1 + 0xb8) = 1;
    }
  }
  else {
    iVar5 = (*(int *)(param_1[2] + 0x20) - param_1[4]) * 7;
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    iVar4 = 0;
    for (iVar3 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar3 < (int)(uVar2 & 0xff);
        iVar3 = iVar3 + 1) {
      piVar1 = (int *)(param_1[1] + iVar4);
      iVar4 = iVar4 + 4;
      *(char *)(*piVar1 + 0xb8) = (char)iVar5;
    }
  }
  return;
}

// === AI_Tricks_validate_80734c24 (0x80734c24) ===
void AI_Tricks_validate_80734c24(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uVar1 & 0xff) << 2);
}

// === AI_Tricks_assertFail_80734dd4 (0x80734dd4) ===
void AI_Tricks_assertFail_80734dd4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Tricks_80734fc0 (0x80734fc0) ===
void ai_AI_Tricks_80734fc0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 3) == 0) {
    iVar3 = 0;
    for (iVar5 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar5 < (int)(uVar2 & 0xff);
        iVar5 = iVar5 + 1) {
      piVar1 = (int *)(param_1[1] + iVar3);
      iVar3 = iVar3 + 4;
      *(undefined *)(*piVar1 + 0xb8) = 1;
    }
  }
  else {
    iVar5 = (*(int *)(param_1[2] + 0x20) - param_1[4]) * 7;
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    iVar4 = 0;
    for (iVar3 = 0; uVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar3 < (int)(uVar2 & 0xff);
        iVar3 = iVar3 + 1) {
      piVar1 = (int *)(param_1[1] + iVar4);
      iVar4 = iVar4 + 4;
      *(char *)(*piVar1 + 0xb8) = (char)iVar5;
    }
  }
  return;
}

// === AI_Tricks_validate_807350dc (0x807350dc) ===
int AI_Tricks_validate_807350dc(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804a98ac(param_1 + 0x18,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === ai_AI_Tricks_80735238 (0x80735238) ===
void ai_AI_Tricks_80735238(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined auStack_e8 [120];
  undefined4 local_70;
  
  if (*(int *)(param_1 + 0x254) != 0) {
    uVar2 = *(uint *)(param_1 + 0x244) &
            *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38) + 4);
    FUN_segment_0__804b4ecc(auStack_e8);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 4) == 0) {
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 0x10) == 0) {
              local_70 = 0;
            }
            else {
              local_70 = 4;
            }
          }
          else {
            local_70 = 3;
          }
        }
        else {
          local_70 = 2;
        }
      }
      else {
        local_70 = 1;
      }
    }
    else {
      local_70 = 0;
    }
    FUN_segment_0__80500a34(param_1,*(undefined4 *)(param_1 + 0x254),auStack_e8);
  }
  fVar1 = fRam00000008;
  if (*(int *)(param_1 + 600) == 1) {
    if (g_Ram_float < *(float *)(param_1 + 0x25c)) {
      *(undefined *)(param_1 + 0x80) = 1;
    }
    else {
      *(char *)(*(int *)(param_1 + 0x260) + 0xb8) =
           (char)(int)(fRam00000004 - ABS(fRam00000004 * *(float *)(param_1 + 0x25c)));
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) + fVar1;
    }
  }
  return;
}

// === ai_AI_Tricks_80735380 (0x80735380) ===
void ai_AI_Tricks_80735380(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x74);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  *(undefined4 *)(param_1 + 0x25c) = uRam00000000;
  FUN_segment_0__804aa82c(param_1,6);
  return;
}

// === ai_AI_Tricks_807353d8 (0x807353d8) ===
void ai_AI_Tricks_807353d8(double param_1,int param_2,int param_3)

{
  if (*(int *)(*(int *)(*(int *)(param_2 + 100) + 0xc) + 4) == 0x4b) {
    *(float *)(param_3 + 4) = (float)((double)g_Ram_float * ABS(param_1));
  }
  *(char *)(param_3 + 0x14) =
       (char)(int)((double)g_Ram_float - ABS((double)(float)((double)g_Ram_float * param_1)));
  FUN_segment_0__805001d0();
  return;
}

// === ai_AI_Tricks_80735444 (0x80735444) ===
void ai_AI_Tricks_80735444(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_38 [48];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  if (param_2 == 1) {
    FUN_segment_0__804ae36c(auStack_38,0x81,0x84,0x9b,0);
  }
  else {
    iVar1 = *(int *)*g_Ram_uint;
    if (iVar1 == 0x93) {
      FUN_segment_0__804ae36c(auStack_38,0xb2,0xba,0xd2,0);
    }
    else if (iVar1 == 0x90) {
      FUN_segment_0__804ae36c(auStack_38,0xed,0xf5,0x10d,0);
    }
    else if (iVar1 == 0x92) {
      FUN_segment_0__804ae36c(auStack_38,0x128,0x130,0x145,0);
    }
    else if (iVar1 == 0x91) {
      FUN_segment_0__804ae36c(auStack_38,0x160,0x168,0x181,0);
    }
    else if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 4) == 0x4b) {
      FUN_segment_0__804ae36c(auStack_38,0x19c,0x19f,0x1b0,0);
    }
    else {
      FUN_segment_0__804ae36c(auStack_38,0x1cb,0x1ce,0x1df,0);
    }
  }
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === ai_AI_Tricks_807355d8 (0x807355d8) ===
void ai_AI_Tricks_807355d8(int param_1)

{
  *(undefined4 *)(param_1 + 600) = 1;
  FUN_segment_0__804a9fd0(param_1,0);
  return;
}

// === AI_Tricks_assertFail_807355e8 (0x807355e8) ===
void AI_Tricks_assertFail_807355e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === ai_AI_Tricks_807356ec (0x807356ec) ===
void ai_AI_Tricks_807356ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_d8 [120];
  int local_60;
  
  iVar2 = -1;
  if ((*(uint *)(param_1 + 0x174) & 1) != 0) {
    iVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,0);
    if (iVar1 != 0) {
      iVar2 = 0;
      goto LAB_segment_0__807357f4;
    }
  }
  if ((*(uint *)(param_1 + 0x174) & 2) != 0) {
    iVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,1);
    if (iVar1 != 0) {
      iVar2 = 1;
      goto LAB_segment_0__807357f4;
    }
  }
  if ((*(uint *)(param_1 + 0x174) & 4) != 0) {
    iVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,2);
    if (iVar1 != 0) {
      iVar2 = 2;
      goto LAB_segment_0__807357f4;
    }
  }
  if ((*(uint *)(param_1 + 0x174) & 8) != 0) {
    iVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,3);
    if (iVar1 != 0) {
      iVar2 = 3;
      goto LAB_segment_0__807357f4;
    }
  }
  if (((*(uint *)(param_1 + 0x174) & 0x10) != 0) &&
     (iVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,4), iVar1 != 0)) {
    iVar2 = 4;
  }
LAB_segment_0__807357f4:
  if (iVar2 == -1) {
    *(undefined *)(param_1 + 0x80) = 1;
  }
  else {
    FUN_segment_0__804b4ecc(auStack_d8);
    local_60 = iVar2;
    FUN_segment_0__80500a34(param_1,0x7d1,auStack_d8);
    *(undefined *)(param_1 + 0x80) = 0;
  }
  return;
}

// === ai_AI_Tricks_80735844 (0x80735844) ===
void ai_AI_Tricks_80735844(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_segment_0__80500c48();
    return;
  }
  if (param_2 == -1) {
    return;
  }
  FUN_segment_0__80500a34();
  return;
}

// === ai_AI_Tricks_80735860 (0x80735860) ===
void ai_AI_Tricks_80735860(double param_1,int param_2,int param_3)

{
  if (*(int *)(*(int *)(*(int *)(param_2 + 100) + 0xc) + 4) == 0x4b) {
    *(float *)(param_3 + 4) = (float)((double)g_Ram_float * ABS(param_1));
  }
  *(char *)(param_3 + 0x14) =
       (char)(int)((double)g_Ram_float -
                  (double)(float)((double)(float)((double)g_Ram_float * param_1) * param_1));
  FUN_segment_0__805001d0();
  return;
}

// === ai_AI_Tricks_807358cc (0x807358cc) ===
void ai_AI_Tricks_807358cc(undefined4 param_1)

{
  undefined auStack_28 [40];
  
  FUN_segment_0__804ae324(auStack_28,param_1);
  if ((*(int *)*g_Ram_uint < 0x90) || (0x93 < *(int *)*g_Ram_uint)) {
    FUN_segment_0__804ae36c(auStack_28,0x225,0x228,0x23f,0);
  }
  else {
    FUN_segment_0__804ae36c(auStack_28,0x1f0,0x1f7,0x20e,0);
  }
  FUN_segment_0__804ae32c(auStack_28,0xffffffff);
  return;
}

// === ai_AI_Tricks_80735964 (0x80735964) ===
void ai_AI_Tricks_80735964(double param_1,int param_2)

{
  int iVar1;
  undefined uVar2;
  double dVar3;
  
  dVar3 = (double)g_Ram_float;
  *(float *)(param_2 + 0x7c) = g_Ram_float;
  iVar1 = FUN_segment_0__804c5d1c(param_2 + 0xa8,0x256);
  uVar2 = (undefined)(int)(dVar3 - (double)(float)((double)(float)(dVar3 * param_1) * param_1));
  *(undefined *)(iVar1 + 0xb8) = uVar2;
  iVar1 = FUN_segment_0__804c5d1c(param_2 + 0xa8,0x262);
  *(undefined *)(iVar1 + 0xb8) = uVar2;
  iVar1 = FUN_segment_0__804c5d1c(param_2 + 0xa8,0x26c);
  *(undefined *)(iVar1 + 0xb8) = uVar2;
  return;
}

// === ai_AI_Tricks_80735a00 (0x80735a00) ===
void ai_AI_Tricks_80735a00(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_segment_0__80500c48();
    return;
  }
  if (param_2 == -1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = uRam00000000;
  *(undefined *)(param_1 + 0x80) = 0;
  FUN_segment_0__80500a34();
  return;
}

// === ai_AI_Tricks_80735a30 (0x80735a30) ===
void ai_AI_Tricks_80735a30(double param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)g_Ram_float;
  *(float *)(param_3 + 4) = (float)((double)g_Ram_float * ABS(param_1));
  *(char *)(param_3 + 0x14) =
       (char)(int)(dVar1 - (double)(float)((double)(float)(dVar1 * param_1) * param_1));
  FUN_segment_0__805001d0();
  return;
}

// === ai_AI_Tricks_80735a88 (0x80735a88) ===
void ai_AI_Tricks_80735a88(double param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)g_Ram_float;
  *(float *)(param_3 + 4) = (float)((double)g_Ram_float * ABS(param_1));
  *(char *)(param_3 + 0x14) =
       (char)(int)(dVar1 - (double)(float)((double)(float)(dVar1 * param_1) * param_1));
  FUN_segment_0__805001d0();
  return;
}

// === AI_Tricks_validate_80735ae0 (0x80735ae0) ===
int AI_Tricks_validate_80735ae0(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === AI_Tricks_validate_80735b44 (0x80735b44) ===
int AI_Tricks_validate_80735b44(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === ai_AI_Tricks_80735c18 (0x80735c18) ===
void ai_AI_Tricks_80735c18(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined auStack_30 [44];
  
  *(int *)(param_1 + 0x174) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_3;
  FUN_segment_0__804ae324(auStack_30,param_1);
  local_58 = iRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  local_3c = uRam0000001c;
  local_38 = uRam00000020;
  if (*(int *)(iRam00000000 + 0xb74) == 5) {
    uVar1 = 0x32;
    if (param_2 == 1) {
      uVar1 = 0x1f;
    }
    FUN_segment_0__804ae36c(auStack_30,0x17,uVar1,0x44,&local_58);
  }
  else {
    uVar1 = 0x74;
    if (param_2 == 1) {
      uVar1 = 0x61;
    }
    FUN_segment_0__804ae36c(auStack_30,0x59,uVar1,0x86,&local_58);
  }
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  return;
}

// === ai_AI_Tricks_80735d2c (0x80735d2c) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80735d2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Tricks_validate_8073604c (0x8073604c) ===
int AI_Tricks_validate_8073604c(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === ai_AI_Tricks_807360d0 (0x807360d0) ===
void ai_AI_Tricks_807360d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_segment_0__806d6fec();
  *(undefined *)(param_1 + 0x199) =
       *(undefined *)(*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uVar1 & 0xff) * 4) + 0x26);
  *(undefined *)(param_1 + 0x27e) = 1;
  *(undefined2 *)(param_1 + 0x278) = 0;
  *(undefined *)(param_1 + 0x27a) = 0;
  *(undefined2 *)(param_1 + 0x27c) = 0;
  *(undefined *)(param_1 + 0x28a) = 1;
  *(undefined2 *)(param_1 + 0x284) = 0;
  *(undefined *)(param_1 + 0x286) = 0;
  *(undefined2 *)(param_1 + 0x288) = 0;
  if (*(int *)((int)g_Ram_float + 0x128) == 3) {
    FUN_segment_0__8040c3bc(param_1 + 0x19c,*(undefined4 *)((int)g_Ram_float + 0xc0c));
  }
  uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,2);
  FUN_segment_0__80500740(param_1);
  return;
}

// === ai_AI_Tricks_80736184 (0x80736184) ===
void ai_AI_Tricks_80736184(int *param_1)

{
  byte bVar1;
  undefined uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined auStack_118 [12];
  undefined auStack_10c [12];
  undefined auStack_100 [4];
  undefined2 local_fc;
  undefined local_fa;
  undefined2 local_f8;
  undefined local_f6;
  undefined auStack_f4 [4];
  undefined2 local_f0;
  undefined local_ee;
  undefined2 local_ec;
  undefined local_ea;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined2 local_e0;
  undefined local_de;
  undefined auStack_dc [208];
  
  (**(code **)(*param_1 + 0x3c))();
  uVar4 = FUN_segment_0__806d6fec(param_1);
  bVar3 = false;
  bVar1 = *(byte *)(*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uVar4 & 0xff) * 4) + 0x26);
  if ((*(char *)(param_1 + 0x67) != 0) && (param_1[0x9c] != 0)) {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((uint)*(byte *)((int)param_1 + 0x199) == (uint)bVar1) {
    return;
  }
  ai_AI_Tricks_807363fc
            (auStack_f4,param_1 + 0xa0,param_1 + (*(byte *)((int)param_1 + 0x199) - 1) * 3 + 0x81);
  *(undefined2 *)(param_1 + 0xa1) = local_f0;
  *(undefined *)((int)param_1 + 0x286) = local_ee;
  *(undefined2 *)(param_1 + 0xa2) = local_ec;
  *(undefined *)((int)param_1 + 0x28a) = local_ea;
  local_e8 = 0;
  local_de = 0;
  local_e4 = 0;
  local_e2 = 0;
  local_e0 = 0;
  uVar2 = *(undefined *)((int)param_1 + 0x199);
  uVar4 = FUN_segment_0__806d6fec(param_1);
  FUN_segment_0__80424c84
            (*(undefined4 *)(*(int *)((int)g_Ram_float + 0xc) + (uVar4 & 0xff) * 4),uVar2,&local_e8
            );
  ai_AI_Tricks_807363fc(auStack_100,param_1 + 0x9d,&local_e8);
  *(undefined2 *)(param_1 + 0x9e) = local_fc;
  *(undefined *)((int)param_1 + 0x27a) = local_fa;
  *(undefined2 *)(param_1 + 0x9f) = local_f8;
  *(undefined *)((int)param_1 + 0x27e) = local_f6;
  FUN_segment_0__804b4ecc(auStack_dc);
  if (*(char *)((int)param_1 + 0x27e) == 0) {
    bVar3 = false;
  }
  else if (*(char *)((int)param_1 + 0x28a) == 0) {
    bVar3 = true;
  }
  else if (*(ushort *)(param_1 + 0x9e) < *(ushort *)(param_1 + 0xa1)) {
    bVar3 = true;
  }
  else {
    if (*(ushort *)(param_1 + 0x9e) == *(ushort *)(param_1 + 0xa1)) {
      if (*(byte *)((int)param_1 + 0x27a) < *(byte *)((int)param_1 + 0x286)) {
        bVar3 = true;
        goto LAB_segment_0__80736340;
      }
      if ((*(byte *)((int)param_1 + 0x27a) == *(byte *)((int)param_1 + 0x286)) &&
         (*(ushort *)(param_1 + 0x9f) < *(ushort *)(param_1 + 0xa2))) {
        bVar3 = true;
        goto LAB_segment_0__80736340;
      }
    }
    bVar3 = false;
  }
LAB_segment_0__80736340:
  if (bVar3) {
    uVar5 = FUN_segment_0__804ff4a0(param_1 + 0x26,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar5,0);
    ai_AI_Tricks_8073649c(auStack_10c,param_1 + 0xa0,param_1 + 0x9d);
    ai_AI_Control_8072fd38(auStack_10c,auStack_dc);
    FUN_segment_0__80500a34(param_1,0x25b3,auStack_dc);
  }
  else {
    ai_AI_Tricks_8073649c(auStack_118,param_1 + 0x9d,param_1 + 0xa0);
    ai_AI_Control_8072fd38(auStack_118,auStack_dc);
    uVar5 = FUN_segment_0__804ff4a0(param_1 + 0x26,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar5,1);
    FUN_segment_0__80500a34(param_1,0x25b4,auStack_dc);
  }
  *(byte *)((int)param_1 + 0x199) = bVar1;
  return;
}

// === ai_AI_Tricks_807363fc (0x807363fc) ===
void ai_AI_Tricks_807363fc(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  
  uVar4 = *(short *)(param_2 + 8) + *(short *)(param_3 + 8);
  bVar1 = 999 < uVar4;
  if (bVar1) {
    uVar4 = uVar4 - 1000;
  }
  bVar3 = *(char *)(param_3 + 6) + bVar1 + *(char *)(param_2 + 6);
  bVar1 = 0x3b < bVar3;
  if (bVar1) {
    bVar3 = bVar3 - 0x3c;
  }
  uVar2 = *(short *)(param_3 + 4) + (ushort)bVar1 + *(short *)(param_2 + 4);
  if (999 < uVar2) {
    uVar2 = 999;
    bVar3 = 0x3b;
    uVar4 = 999;
  }
  *param_1 = 0;
  *(undefined *)((int)param_1 + 10) = 1;
  *(ushort *)(param_1 + 1) = uVar2;
  *(byte *)((int)param_1 + 6) = bVar3;
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}

// === ai_AI_Tricks_8073649c (0x8073649c) ===
void ai_AI_Tricks_8073649c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  undefined2 uVar5;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar4 = (uint)*(ushort *)(param_2 + 8) - (uint)*(ushort *)(param_3 + 8);
  if (iVar4 < 0) {
    iVar2 = -1;
    iVar4 = iVar4 + 1000;
  }
  uVar5 = (undefined2)iVar4;
  iVar2 = iVar2 + ((uint)*(byte *)(param_2 + 6) - (uint)*(byte *)(param_3 + 6));
  if (iVar2 < 0) {
    iVar1 = -1;
    iVar2 = iVar2 + 0x3c;
  }
  uVar3 = (undefined)iVar2;
  iVar1 = iVar1 + ((uint)*(ushort *)(param_2 + 4) - (uint)*(ushort *)(param_3 + 4));
  if (iVar1 < 0) {
    iVar1 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  *param_1 = 0;
  *(undefined *)((int)param_1 + 10) = 1;
  *(short *)(param_1 + 1) = (short)iVar1;
  *(undefined *)((int)param_1 + 6) = uVar3;
  *(undefined2 *)(param_1 + 2) = uVar5;
  return;
}

// === ai_AI_Tricks_8073651c (0x8073651c) ===
void ai_AI_Tricks_8073651c(int param_1,undefined4 param_2)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [52];
  
  FUN_segment_0__804ae324(auStack_40,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  FUN_segment_0__804ae36c(auStack_40,0x16,0x21,param_2,&local_58);
  *(undefined *)(param_1 + 400) = 0;
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  return;
}

// === AI_Tricks_validate_807365cc (0x807365cc) ===
int AI_Tricks_validate_807365cc(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x19c) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x204,0,0xc,5);
    }
    FUN_segment_0__80500540(0xfffffe64,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffe64);
    }
  }
  return param_1;
}

// === ai_AI_Tricks_8073667c (0x8073667c) ===
void ai_AI_Tricks_8073667c(undefined4 param_1)

{
  undefined auStack_38 [52];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,0xd,0x18,0x1d,0);
  FUN_segment_0__80500a34(param_1,0x539,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === ai_AI_Tricks_80736704 (0x80736704) ===
void ai_AI_Tricks_80736704(undefined4 param_1)

{
  undefined auStack_28 [40];
  
  FUN_segment_0__804ae324(auStack_28,param_1);
  FUN_segment_0__804ae36c(auStack_28,0x36,0x41,0x4d,0);
  FUN_segment_0__804ae32c(auStack_28,0xffffffff);
  return;
}

// === ai_AI_Tricks_80736758 (0x80736758) ===
void ai_AI_Tricks_80736758(int param_1)

{
  int iVar1;
  undefined4 local_d8 [53];
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x6a) || (0x6b < iVar1)) {
    if ((0x6d < iVar1) && (iVar1 < 0x70)) {
      *(undefined4 *)(param_1 + 0x198) = 0x53b;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x198) = 0x53a;
  }
  *(undefined4 *)(param_1 + 0x19c) = g_Ram_uint[g_Ram_uint[0xa47] * 0x16 + 0x11];
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = *(undefined4 *)(param_1 + 0x19c);
  FUN_segment_0__80500a34(param_1,*(undefined4 *)(param_1 + 0x198),local_d8);
  FUN_segment_0__806d6edc(param_1);
  return;
}

// === ai_AI_Tricks_8073680c (0x8073680c) ===
void ai_AI_Tricks_8073680c(int param_1)

{
  int local_d8 [53];
  
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = *(int *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x44);
  if (local_d8[0] < 2) {
    local_d8[0] = 2;
  }
  else if (0xc < local_d8[0]) {
    local_d8[0] = 0xc;
  }
  if (local_d8[0] != *(int *)(param_1 + 0x19c)) {
    FUN_segment_0__80500a34(param_1,*(undefined4 *)(param_1 + 0x198),local_d8);
    *(int *)(param_1 + 0x19c) = local_d8[0];
  }
  return;
}

// === AI_Tricks_validate_8073689c (0x8073689c) ===
int AI_Tricks_validate_8073689c(int param_1,int param_2)

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

// === AI_Tricks_validate_80736904 (0x80736904) ===
int AI_Tricks_validate_80736904(int param_1,int param_2)

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

// === ai_AI_Tricks_80736994 (0x80736994) ===
void ai_AI_Tricks_80736994(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14 [3];
  
  FUN_segment_0__806d6714(param_1,0xe,1);
  FUN_segment_0__806d6714(param_1,0x17,1);
  iVar2 = *(int *)(iRam00000000 + 0xbcc);
  *(int *)(param_1 + 0x1a0) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 99;
  }
  if (*(int *)(param_1 + 0x1a0) < 100) {
    uVar3 = 0x25b5;
    if (9 < *(int *)(param_1 + 0x1a0)) {
      uVar3 = 0x25b6;
    }
  }
  else {
    uVar3 = 0x25b7;
  }
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  if (*(int *)(iRam00000000 + 0xb70) == 4) {
    uVar3 = *(undefined4 *)(*(int *)(iRam00000000 + 0x10) + 8);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x19c) = uVar3;
  ai_AI_Tricks_80736c0c(param_1);
  FUN_segment_0__806d6edc(param_1);
  iVar1 = iRam00000000;
  local_14[0] = iRam00000000;
  local_14[1] = uRam00000004;
  local_14[2] = uRam00000008;
  iVar2 = local_14[*(int *)(param_1 + 0x198) + -0x25b5];
  iVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x22);
  *(int *)(iVar4 + 0x2c) = iVar2;
  *(int *)(iVar4 + 0x30) = iVar1;
  *(int *)(iVar4 + 0x34) = iRam00000000;
  return;
}

// === ai_AI_Tricks_80736ae8 (0x80736ae8) ===
void ai_AI_Tricks_80736ae8(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))();
  if (*(int *)(iRam00000000 + 0xb70) == 4) {
    iVar1 = *(int *)(*(int *)(iRam00000000 + 0x10) + 8);
  }
  else {
    iVar1 = 0;
  }
  if (param_1[0x68] < iVar1) {
    iVar1 = param_1[0x68];
  }
  if (param_1[0x67] != iVar1) {
    ai_AI_Tricks_80736c0c(param_1,iVar1);
    if (param_1[0x67] < iVar1) {
      FUN_segment_0__805003cc(param_1,0xe8,0xffffffff);
    }
    else {
      FUN_segment_0__805003cc(param_1,0xea,0xffffffff);
    }
    param_1[0x67] = iVar1;
  }
  return;
}

// === ai_AI_Tricks_80736bb0 (0x80736bb0) ===
void ai_AI_Tricks_80736bb0(int param_1)

{
  undefined auStack_28 [40];
  
  *(undefined *)(param_1 + 400) = 0;
  FUN_segment_0__804ae324(auStack_28,param_1);
  FUN_segment_0__804ae36c(auStack_28,0x2b,0x36,0x3c,0);
  FUN_segment_0__804ae32c(auStack_28,0xffffffff);
  return;
}

// === ai_AI_Tricks_80736c0c (0x80736c0c) ===
void ai_AI_Tricks_80736c0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_d8 [36];
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  
  FUN_segment_0__804b4ecc(auStack_d8);
  iVar1 = *(int *)(param_1 + 0x198);
  if (iVar1 == 0x25b5) {
    local_b4 = param_2 + 0x2580;
    local_b0 = *(int *)(param_1 + 0x1a0) + 0x2580;
  }
  else {
    iVar2 = param_2 >> 0x1f;
    if (iVar1 == 0x25b6) {
      iVar2 = param_2 / 10 + iVar2;
      local_b4 = (iVar2 - (iVar2 >> 0x1f)) + 0x2580;
      local_b0 = param_2 + (iVar2 - (iVar2 >> 0x1f)) * -10 + 0x2580;
      iVar2 = *(int *)(param_1 + 0x1a0);
      iVar1 = iVar2 / 10 + (iVar2 >> 0x1f);
      local_ac = (iVar1 - (iVar1 >> 0x1f)) + 0x2580;
      local_a8 = iVar2 + (iVar1 - (iVar1 >> 0x1f)) * -10 + 0x2580;
    }
    else if (iVar1 == 0x25b7) {
      iVar1 = param_2 / 100 + iVar2;
      local_b4 = (iVar1 - (iVar1 >> 0x1f)) + 0x2580;
      iVar2 = param_2 / 10 + iVar2;
      iVar3 = iVar2 - (iVar2 >> 0x1f);
      iVar1 = iVar3 / 10 + (iVar3 >> 0x1f);
      local_b0 = iVar3 + (iVar1 - (iVar1 >> 0x1f)) * -10 + 0x2580;
      local_ac = param_2 + (iVar2 - (iVar2 >> 0x1f)) * -10 + 0x2580;
      iVar4 = *(int *)(param_1 + 0x1a0);
      iVar1 = iVar4 / 100 + (iVar4 >> 0x1f);
      local_a8 = (iVar1 - (iVar1 >> 0x1f)) + 0x2580;
      iVar1 = iVar4 / 10 + (iVar4 >> 0x1f);
      iVar3 = iVar1 - (iVar1 >> 0x1f);
      iVar2 = iVar3 / 10 + (iVar3 >> 0x1f);
      local_a4 = iVar3 + (iVar2 - (iVar2 >> 0x1f)) * -10 + 0x2580;
      local_a0 = iVar4 + (iVar1 - (iVar1 >> 0x1f)) * -10 + 0x2580;
    }
  }
  FUN_segment_0__80500a34(param_1,*(undefined4 *)(param_1 + 0x198),auStack_d8);
  return;
}

// === AI_Tricks_validate_80736de4 (0x80736de4) ===
int AI_Tricks_validate_80736de4(int param_1,int param_2)

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

// === AI_Tricks_validate_80736e6c (0x80736e6c) ===
void AI_Tricks_validate_80736e6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_118 [272];
  
  *(char *)(param_1 + 400) = (char)param_3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_118,0x20,0x19,param_2,param_3);
}

// === ai_AI_Tricks_8073707c (0x8073707c) ===
bool ai_AI_Tricks_8073707c(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__80425788(uRam00000000,1);
  return iVar1 == 0;
}

// === AI_Tricks_validate_8073712c (0x8073712c) ===
void AI_Tricks_validate_8073712c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_58 [76];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,0x20,0x68,param_2,param_3);
}

// === ai_AI_Tricks_807371e0 (0x807371e0) ===
undefined4 ai_AI_Tricks_807371e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = FUN_segment_0__80425788(iRam00000000,4);
  if ((iVar1 == 0) &&
     (uVar2 = FUN_segment_0__806d6fec(param_1),
     (*(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar2 & 0xff) * 4) + 0x38) & 2) == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}

// === ai_AI_Tricks_80737268 (0x80737268) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737268(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Tricks_80737484 (0x80737484) ===
void ai_AI_Tricks_80737484(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 uVar1;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined auStack_38 [48];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_48 = g_Ram_float;
  local_44 = uRam00000004;
  local_40 = uRam00000008;
  local_3c = uRam0000000c;
  FUN_segment_0__804ae36c(auStack_38,0xb1,0xc0,0xcf,&local_48);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xde);
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === ai_AI_Tricks_80737540 (0x80737540) ===
bool ai_AI_Tricks_80737540(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__80425788(uRam00000000,1);
  return iVar1 == 0;
}

// === AI_Tricks_validate_807375e8 (0x807375e8) ===
int AI_Tricks_validate_807375e8(int param_1,int param_2)

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

// === AI_Tricks_validate_80737658 (0x80737658) ===
int AI_Tricks_validate_80737658(int param_1,int param_2)

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

// === AI_Tricks_validate_807376c8 (0x807376c8) ===
int AI_Tricks_validate_807376c8(int param_1,int param_2)

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

// === ai_AI_Tricks_80737750 (0x80737750) ===
undefined4 * ai_AI_Tricks_80737750(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x2d] = 0xd;
  param_1[0x2e] = 0x14;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(bool *)(param_1 + 0x31) = *(short *)(*param_2 + 0x2a) == 1;
  uVar1 = uRam00000000;
  param_1[0x33] = uRam00000004;
  param_1[0x32] = uVar1;
  param_1[0x34] = uRam00000008;
  return param_1;
}

// === ai_AI_Tricks_807377ec (0x807377ec) ===
undefined4 *
ai_AI_Tricks_807377ec
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined param_5)

{
  undefined4 uVar1;
  
  FUN_segment_0__806fba4c(param_1,0,param_2,param_3,param_4,0);
  *param_1 = 0;
  param_1[0x2d] = 0xd;
  param_1[0x2e] = 0x14;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined *)(param_1 + 0x31) = param_5;
  uVar1 = uRam00000000;
  param_1[0x33] = uRam00000004;
  param_1[0x32] = uVar1;
  param_1[0x34] = uRam00000008;
  return param_1;
}

// === ai_AI_Tricks_80737894 (0x80737894) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737894(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Tricks_80737944 (0x80737944) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737944(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Tricks_80737a64 (0x80737a64) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737a64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Tricks_80737b30 (0x80737b30) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737b30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Tricks_validate_80737cd0 (0x80737cd0) ===
int AI_Tricks_validate_80737cd0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === ai_AI_Tricks_80737d10 (0x80737d10) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737d10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Tricks_80737fd4 (0x80737fd4) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Tricks_80737fd4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_807382b8 (0x807382b8) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807382b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_807388dc (0x807388dc) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_807388dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === ai_AI_Control_80738f18 (0x80738f18) ===
undefined4 * ai_AI_Control_80738f18(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  uVar2 = FUN_segment_0__8070c704(*(undefined4 *)(iRam00000000 + 4),0xe);
  *(undefined2 *)(param_1 + 0x2c) = uVar2;
  iVar1 = *(int *)(iRam00000000 + 0xb6c);
  if (iVar1 == 2) {
    param_1[0x2d] = (int)*(short *)(*param_2 + 0x2a);
  }
  else if (iVar1 == 1) {
    param_1[0x2d] = (int)*(short *)(*param_2 + 0x2e);
  }
  else if (iVar1 == 0) {
    param_1[0x2d] = (int)*(short *)(*param_2 + 0x30);
  }
  return param_1;
}

// === AI_Control_validate_80738fe0 (0x80738fe0) ===
void AI_Control_validate_80738fe0(int *param_1)

{
  int iVar1;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  if (iVar1 != 0) {
    local_80 = uRam00000000;
    local_78 = uRam00000000;
    local_7c = (fRam00000008 * fRam0000000c * (float)param_1[0x10]) / fRam00000010;
    local_40 = uRam00000000;
    local_3c = uRam00000000;
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
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(&local_40,&local_80);
  }
  return;
}

// === AI_Control_validate_80739130 (0x80739130) ===
void AI_Control_validate_80739130(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  uint uStack_14;
  
  FUN_segment_0__806fbc74(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x41] = 0;
  iVar1 = *(int *)((int)g_Ram_float + 0xb6c);
  if (iVar1 == 2) {
    param_1[0x42] = (int)*(short *)(*param_2 + 0x2a);
  }
  else if (iVar1 == 1) {
    param_1[0x42] = (int)*(short *)(*param_2 + 0x2e);
  }
  else if (iVar1 == 0) {
    param_1[0x42] = (int)*(short *)(*param_2 + 0x30);
  }
  uStack_14 = (int)*(short *)(*param_2 + 0x2c) ^ 0x80000000;
  local_18 = 0x43300000;
  param_1[0x43] =
       (g_Ram_float *
       (float)((double)CONCAT44(0x43300000,uStack_14) - (double)CONCAT44(g_Ram_float,uRam00000004))
       ) / g_Ram_float;
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
  param_1[0x44] = param_1[0x12];
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x104);
}

// === AI_Control_validate_80739388 (0x80739388) ===
void AI_Control_validate_80739388(int param_1)

{
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined auStack_48 [60];
  
  FUN_segment_0__807001f4();
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_6c,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_6c;
    *(undefined4 *)(param_1 + 0x4c) = local_68;
    *(undefined4 *)(param_1 + 0x50) = local_64;
  }
  local_50 = *(undefined4 *)(param_1 + 0x4c);
  local_4c = *(undefined4 *)(param_1 + 0x50);
  local_54 = uRam00000000;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48,&local_54,param_1 + 0x30);
}

// === ai_AI_Control_8073952c (0x8073952c) ===
/* WARNING: Control flow encountered bad instruction data */

void ai_AI_Control_8073952c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === AI_Control_validate_8073994c (0x8073994c) ===
void AI_Control_validate_8073994c(int param_1)

{
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined auStack_48 [56];
  
  if (*(int *)(param_1 + 0x104) != 1) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int **)(param_1 + 0x10),0);
    return;
  }
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_78,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_78;
    *(undefined4 *)(param_1 + 0x4c) = local_74;
    *(undefined4 *)(param_1 + 0x50) = local_70;
  }
  local_54 = *(float *)(param_1 + 0x48);
  local_50 = *(undefined4 *)(param_1 + 0x4c);
  local_4c = *(undefined4 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_84,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_84;
    *(undefined4 *)(param_1 + 0x4c) = local_80;
    *(undefined4 *)(param_1 + 0x50) = local_7c;
  }
  if (fRam00000028 <= *(float *)(param_1 + 0x48)) {
    if (*(char *)(param_1 + 0x54) == 0) {
      *(undefined *)(param_1 + 0x54) = 1;
      FUN_segment_0__8056e704(&local_90,param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x48) = local_90;
      *(undefined4 *)(param_1 + 0x4c) = local_8c;
      *(undefined4 *)(param_1 + 0x50) = local_88;
    }
    local_54 = *(float *)(param_1 + 0x48);
  }
  else {
    local_54 = fRam00000028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48,&local_54,param_1 + 0x30);
}

// === AI_Control_validate_80739bec (0x80739bec) ===
void AI_Control_validate_80739bec(int param_1,int param_2)

{
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  uint uStack_14;
  
  local_24 = *(undefined4 *)(param_1 + 0x118);
  param_2 = *(int *)((int)dRam00000000._0_4_ + 0x20) - param_2;
  local_20 = *(undefined4 *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x18c) < param_2) {
    local_28 = *(float *)(param_1 + 0x10c);
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x108);
    local_18 = 0x43300000;
    uStack_14 = param_2 * param_2 * param_2 ^ 0x80000000;
    local_28 = *(float *)(param_1 + 0x110) +
               dRam00000000._0_4_ * (float)((double)CONCAT44(0x43300000,uStack_14) - dRam00000000);
    if (*(float *)(param_1 + 0x10c) < local_28) {
      local_28 = *(float *)(param_1 + 0x10c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x15c,&local_28,param_1 + 0x30);
}

// === ai_AI_Control_80739cbc (0x80739cbc) ===
double ai_AI_Control_80739cbc(int param_1,int param_2)

{
  double dVar1;
  
  if (*(int *)(param_1 + 0x18c) < param_2) {
    dVar1 = (double)*(float *)(param_1 + 0x10c);
  }
  else {
    param_2 = param_2 - *(int *)(param_1 + 0x108);
    dVar1 = (double)(*(float *)(param_1 + 0x110) +
                    dRam00000000._0_4_ *
                    (float)((double)CONCAT44(0x43300000,param_2 * param_2 * param_2 ^ 0x80000000) -
                           dRam00000000));
    if ((double)*(float *)(param_1 + 0x10c) < dVar1) {
      dVar1 = (double)*(float *)(param_1 + 0x10c);
    }
  }
  return dVar1;
}

// === ai_AI_Control_80739d3c (0x80739d3c) ===
void ai_AI_Control_80739d3c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x90) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),param_1 + 0x3c);
  }
  (**(code **)(**(int **)(param_1 + 0x154) + 0x78))();
  (**(code **)(**(int **)(param_1 + 0x158) + 0x78))();
  return;
}

// === AI_Control_validate_80739de4 (0x80739de4) ===
int AI_Control_validate_80739de4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === AI_Control_validate_80739e50 (0x80739e50) ===
int AI_Control_validate_80739e50(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === AI_Control_validate_80739e90 (0x80739e90) ===
int AI_Control_validate_80739e90(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === ai_AI_Control_80739ed0 (0x80739ed0) ===
undefined4 * ai_AI_Control_80739ed0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  uVar1 = uRam00000004;
  *param_1 = 0;
  uVar2 = uRam00000010;
  param_1[0x2b] = uVar1;
  uVar1 = uRam00000014;
  dVar3 = dRam00000008 * (double)g_Ram_float;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar1;
  param_1[0x2c] = (float)dVar3;
  return param_1;
}

// === AI_Control_assertFail_80739f5c (0x80739f5c) ===
void AI_Control_assertFail_80739f5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState (0x80523e94) ===
// Stub: decompiled source not found for 80523e94
void setInputState__Q26System6KPadAIFPQ26System18KPadRaceInputState(void) { return; }

// === __ct__Q26System6KPadAIFv (0x80525988) ===
// Stub: decompiled source not found for 80525988
void __ct__Q26System6KPadAIFv(void) { return; }

// === calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState (0x80526f40) ===
// Stub: decompiled source not found for 80526f40
void calcInner__Q26System16KPadAIControllerFPQ26System18KPadRaceInputStatePQ26System16KPadUIInputState(void) { return; }

// === __ct__Q25Enemy2AIFb (0x807284c4) ===
// Stub: decompiled source not found for 807284c4
void __ct__Q25Enemy2AIFb(void) { return; }

// === __dt__Q25Enemy2AIFv (0x80728570) ===
// Stub: decompiled source not found for 80728570
void __dt__Q25Enemy2AIFv(void) { return; }

// === init__Q25Enemy2AIFv (0x807285f8) ===
// Stub: decompiled source not found for 807285f8
void init__Q25Enemy2AIFv(void) { return; }

// === update__Q25Enemy2AIFv (0x807286a0) ===
// Stub: decompiled source not found for 807286a0
void update__Q25Enemy2AIFv(void) { return; }

// === getStick__Q25Enemy2AIFv (0x807286ec) ===
// Stub: decompiled source not found for 807286ec
void getStick__Q25Enemy2AIFv(void) { return; }

// === isCPU__Q25Enemy2AIFv (0x80728734) ===
// Stub: decompiled source not found for 80728734
void isCPU__Q25Enemy2AIFv(void) { return; }

// === isRealLocal__Q25Enemy2AIFv (0x80728778) ===
// Stub: decompiled source not found for 80728778
void isRealLocal__Q25Enemy2AIFv(void) { return; }

// === isRealLocalAndCPU__Q25Enemy2AIFv (0x807287b8) ===
// Stub: decompiled source not found for 807287b8
void isRealLocalAndCPU__Q25Enemy2AIFv(void) { return; }

// === isAICPU__Q25Enemy2AIFv (0x80728820) ===
// Stub: decompiled source not found for 80728820
void isAICPU__Q25Enemy2AIFv(void) { return; }

// === isGhost__Q25Enemy2AIFv (0x80728824) ===
// Stub: decompiled source not found for 80728824
void isGhost__Q25Enemy2AIFv(void) { return; }

// === isSameTeam__Q25Enemy2AIFPQ25Enemy2AI (0x80728868) ===
// Stub: decompiled source not found for 80728868
void isSameTeam__Q25Enemy2AIFPQ25Enemy2AI(void) { return; }

// === endRace__Q25Enemy2AIFv (0x80728890) ===
// Stub: decompiled source not found for 80728890
void endRace__Q25Enemy2AIFv(void) { return; }

// === onOutOfBounds__Q25Enemy2AIFRCQ26System17MapdataJugemPoint (0x80728898) ===
// Stub: decompiled source not found for 80728898
void onOutOfBounds__Q25Enemy2AIFRCQ26System17MapdataJugemPoint(void) { return; }

// === forceRecalculation__Q25Enemy2AIFb (0x807288ac) ===
// Stub: decompiled source not found for 807288ac
void forceRecalculation__Q25Enemy2AIFb(void) { return; }

// === handleBump__Q25Enemy2AIFRCQ23EGG8Vector3fRCQ25Enemy2AI (0x807288b4) ===
// Stub: decompiled source not found for 807288b4
void handleBump__Q25Enemy2AIFRCQ23EGG8Vector3fRCQ25Enemy2AI(void) { return; }

// === isOnGround__Q25Enemy2AIFv (0x807289d0) ===
// Stub: decompiled source not found for 807289d0
void isOnGround__Q25Enemy2AIFv(void) { return; }

// === isAllWheelsCollision__Q25Enemy2AIFv (0x807289e4) ===
// Stub: decompiled source not found for 807289e4
void isAllWheelsCollision__Q25Enemy2AIFv(void) { return; }

// === isDriftingOnGround__Q25Enemy2AIFv (0x807289f8) ===
// Stub: decompiled source not found for 807289f8
void isDriftingOnGround__Q25Enemy2AIFv(void) { return; }

// === isHopping__Q25Enemy2AIFv (0x80728a0c) ===
// Stub: decompiled source not found for 80728a0c
void isHopping__Q25Enemy2AIFv(void) { return; }

// === isAutoDrift__Q25Enemy2AIFv (0x80728a20) ===
// Stub: decompiled source not found for 80728a20
void isAutoDrift__Q25Enemy2AIFv(void) { return; }

// === isInBullet__Q25Enemy2AIFv (0x80728a34) ===
// Stub: decompiled source not found for 80728a34
void isInBullet__Q25Enemy2AIFv(void) { return; }

// === setDoNotSelectBackward__Q25Enemy13AIControlBaseFv (0x8072a6f4) ===
// Stub: decompiled source not found for 8072a6f4
void setDoNotSelectBackward__Q25Enemy13AIControlBaseFv(void) { return; }

// === getAIProbability__Q25Enemy13AIControlBaseFv (0x8072a6fc) ===
// Stub: decompiled source not found for 8072a6fc
void getAIProbability__Q25Enemy13AIControlBaseFv(void) { return; }

// === setBattleType__Q25Enemy13AIControlBaseFv (0x8072aab0) ===
// Stub: decompiled source not found for 8072aab0
void setBattleType__Q25Enemy13AIControlBaseFv(void) { return; }

// === __ct__Q25Enemy13AIControlBaseFRCQ25Enemy6AIInfo (0x8072c284) ===
// Stub: decompiled source not found for 8072c284
void __ct__Q25Enemy13AIControlBaseFRCQ25Enemy6AIInfo(void) { return; }

// === __dt__Q25Enemy13AIControlBaseFv (0x8072c400) ===
// Stub: decompiled source not found for 8072c400
void __dt__Q25Enemy13AIControlBaseFv(void) { return; }

// === init__Q25Enemy13AIControlBaseFv (0x8072c5d0) ===
// Stub: decompiled source not found for 8072c5d0
void init__Q25Enemy13AIControlBaseFv(void) { return; }

// === onOutOfBoundsInner__Q25Enemy13AIControlBaseFRCQ26System17MapdataJugemPoint (0x8072c790) ===
// Stub: decompiled source not found for 8072c790
void onOutOfBoundsInner__Q25Enemy13AIControlBaseFRCQ26System17MapdataJugemPoint(void) { return; }

// === onForceRecalculation__Q25Enemy13AIControlBaseFRCQ23EGG8Vector3f (0x8072c7d0) ===
// Stub: decompiled source not found for 8072c7d0
void onForceRecalculation__Q25Enemy13AIControlBaseFRCQ23EGG8Vector3f(void) { return; }

// === onPlayerGoal__Q25Enemy13AIControlBaseFv (0x8072c7d8) ===
// Stub: decompiled source not found for 8072c7d8
void onPlayerGoal__Q25Enemy13AIControlBaseFv(void) { return; }

// === onCpuGoal__Q25Enemy13AIControlBaseFv (0x8072c7e0) ===
// Stub: decompiled source not found for 8072c7e0
void onCpuGoal__Q25Enemy13AIControlBaseFv(void) { return; }

// === setStartDashTypeToKart__Q25Enemy13AIControlBaseFv (0x8072c7f8) ===
// Stub: decompiled source not found for 8072c7f8
void setStartDashTypeToKart__Q25Enemy13AIControlBaseFv(void) { return; }

// === setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo (0x8072c864) ===
// Stub: decompiled source not found for 8072c864
void setBasicDriveInfo___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(void) { return; }

// === doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo (0x8072ca58) ===
// Stub: decompiled source not found for 8072ca58
void doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(void) { return; }

// === __ct__Q25Enemy16AIAirtimeTrackerFRCQ25Enemy6AIInfo (0x8072cb38) ===
// Stub: decompiled source not found for 8072cb38
void __ct__Q25Enemy16AIAirtimeTrackerFRCQ25Enemy6AIInfo(void) { return; }

// === init__Q25Enemy16AIAirtimeTrackerFl (0x8072cb9c) ===
// Stub: decompiled source not found for 8072cb9c
void init__Q25Enemy16AIAirtimeTrackerFl(void) { return; }

// === update__Q25Enemy16AIAirtimeTrackerFv (0x8072cbc4) ===
// Stub: decompiled source not found for 8072cbc4
void update__Q25Enemy16AIAirtimeTrackerFv(void) { return; }

// === __ct__Q25Enemy12AIPowAvoiderFRCQ25Enemy6AIInfo (0x8072cc28) ===
// Stub: decompiled source not found for 8072cc28
void __ct__Q25Enemy12AIPowAvoiderFRCQ25Enemy6AIInfo(void) { return; }

// === init__Q25Enemy12AIPowAvoiderFv (0x8072cc7c) ===
// Stub: decompiled source not found for 8072cc7c
void init__Q25Enemy12AIPowAvoiderFv(void) { return; }

// === update__Q25Enemy12AIPowAvoiderFv (0x8072cc88) ===
// Stub: decompiled source not found for 8072cc88
void update__Q25Enemy12AIPowAvoiderFv(void) { return; }

// === isSameTeam__Q25Enemy12AIPowAvoiderFl (0x8072cd2c) ===
// Stub: decompiled source not found for 8072cd2c
void isSameTeam__Q25Enemy12AIPowAvoiderFl(void) { return; }

// === isAllStopAfterGoal__Q25Enemy13AIControlBaseFv (0x8072cd74) ===
// Stub: decompiled source not found for 8072cd74
void isAllStopAfterGoal__Q25Enemy13AIControlBaseFv(void) { return; }

// === setAIRankTopOfPlayer__Q25Enemy13AIControlBaseFv (0x8072cd7c) ===
// Stub: decompiled source not found for 8072cd7c
void setAIRankTopOfPlayer__Q25Enemy13AIControlBaseFv(void) { return; }

// === getAIRank__Q25Enemy13AIControlBaseFv (0x8072cd88) ===
// Stub: decompiled source not found for 8072cd88
void getAIRank__Q25Enemy13AIControlBaseFv(void) { return; }

// === onRaceStart__Q25Enemy13AIControlBaseFv (0x8072cd90) ===
// Stub: decompiled source not found for 8072cd90
void onRaceStart__Q25Enemy13AIControlBaseFv(void) { return; }

// === update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor (0x80734b60) ===
// Stub: decompiled source not found for 80734b60
void update__Q25Enemy8AIEngineFPCQ26System24MapdataEnemyPathAccessor(void) { return; }

// === forceRecalculation__Q25Enemy8AIEngineFb (0x80734b70) ===
// Stub: decompiled source not found for 80734b70
void forceRecalculation__Q25Enemy8AIEngineFb(void) { return; }

// === endRace__Q25Enemy8AIEngineFv (0x80734b78) ===
// Stub: decompiled source not found for 80734b78
void endRace__Q25Enemy8AIEngineFv(void) { return; }

// === __ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI (0x8073569c) ===
// Stub: decompiled source not found for 8073569c
void __ct__Q25Enemy12AIEngineBikeFRCQ25Enemy2AI(void) { return; }

// === __ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI (0x8073578c) ===
// Stub: decompiled source not found for 8073578c
void __ct__Q25Enemy12AIEngineKartFRCQ25Enemy2AI(void) { return; }

// === avoidPow__Q25Enemy14AITrickHandlerFv (0x807377e0) ===
// Stub: decompiled source not found for 807377e0
void avoidPow__Q25Enemy14AITrickHandlerFv(void) { return; }

// === allowTricking__Q25Enemy14AITrickHandlerFv (0x807377f0) ===
// Stub: decompiled source not found for 807377f0
void allowTricking__Q25Enemy14AITrickHandlerFv(void) { return; }

// === shouldTrick__Q25Enemy14AITrickHandlerFv (0x80737830) ===
// Stub: decompiled source not found for 80737830
void shouldTrick__Q25Enemy14AITrickHandlerFv(void) { return; }

// === calc__Q25Enemy14AITrickHandlerFv (0x80737938) ===
// Stub: decompiled source not found for 80737938
void calc__Q25Enemy14AITrickHandlerFv(void) { return; }

// === update__Q25Enemy14AITrickHandlerFv (0x8073794c) ===
// Stub: decompiled source not found for 8073794c
void update__Q25Enemy14AITrickHandlerFv(void) { return; }
