// Physics module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 462 decompiled functions
// Address range: 0x8056731c - 0x8058ff88

#include "Physics.h"
#include "../types.h"

// Global Ram base pointers (defined in stubs.c)
extern void *g_Ram_ptr;
extern float g_Ram_float;
extern unsigned char g_Ram_byte;
extern unsigned int g_Ram_uint;

// === EffectGroup_validate_80567350 (0x80567350) ===
int EffectGroup_validate_80567350(int param_1,int param_2)

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

// === phys_EffectGroup_805673f0 (0x805673f0) ===
void phys_EffectGroup_805673f0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804ccf50(param_1 + 0x404,0,8,0x1b);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0x29,0x30,0x47,1,0,0);
  FUN_segment_0__80500a34(param_1 + 0x578,0x19cc,0);
  *(undefined4 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0x4c,0x53,0x58,1,0,1);
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === phys_EffectGroup_8056757c (0x8056757c) ===
void phys_EffectGroup_8056757c(int param_1)

{
  undefined4 uVar1;
  undefined auStack_28 [4];
  undefined local_24 [4];
  undefined4 local_20;
  undefined4 local_14;
  
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  local_24[0] = 0;
  local_20 = 0;
  FUN_segment_0__80559214(uRam00000000,local_24);
  *(undefined4 *)(param_1 + 0xacc) = local_14;
  uVar1 = FUN_segment_0__805593a0(uRam00000000,auStack_28);
  *(undefined4 *)(param_1 + 0xb90) = uVar1;
  FUN_segment_0__80500a34(param_1 + 0x290,0x19ca,param_1 + 0xa30);
  FUN_segment_0__80500a34(param_1 + 0x404,0x19cb,param_1 + 0xaf4);
  return;
}

// === phys_EffectGroup_8056760c (0x8056760c) ===
void phys_EffectGroup_8056760c(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_segment_0__804d24b8(param_1,0x52,0xffffffff);
    FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,0x1e);
  }
  return;
}

// === phys_EffectGroup_805676a0 (0x805676a0) ===
void phys_EffectGroup_805676a0(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x7a,1);
  }
  return;
}

// === EffectGroup_validate_80567780 (0x80567780) ===
int EffectGroup_validate_80567780(int param_1,int param_2)

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

// === phys_EffectGroup_805677e8 (0x805677e8) ===
void phys_EffectGroup_805677e8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

// === phys_EffectGroup_8056785c (0x8056785c) ===
void phys_EffectGroup_8056785c(undefined4 param_1)

{
  int iVar1;
  undefined local_28 [4];
  undefined4 local_24;
  int local_1c;
  
  local_28[0] = 0;
  local_24 = 0;
  iVar1 = FUN_segment_0__80559214(uRam00000000,local_28);
  if ((iVar1 == 0) || (local_1c != 1)) {
    FUN_segment_0__804f8c44(uRam00000000,0x7a,1);
    FUN_segment_0__804f8cd0(uRam00000000,0,0xff);
  }
  else {
    phys_EffectGroup_8056792c(param_1);
  }
  return;
}

// === phys_EffectGroup_8056792c (0x8056792c) ===
void phys_EffectGroup_8056792c(int *param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  undefined local_38 [4];
  int local_34;
  
  iVar4 = FUN_segment_0__80716a8c(0x6b);
  *(undefined4 *)(iVar4 + 0x90c) = 0;
  *(undefined4 *)(iVar4 + 0x848) = 0;
  iVar4 = FUN_segment_0__8071b994(0x6c);
  *(undefined4 *)(iVar4 + 0x6f0) = 0;
  local_38[0] = 0;
  local_34 = 0;
  FUN_segment_0__80559214(g_Ram_ptr,local_38);
  FUN_segment_0__8041d9ac(g_Ram_ptr);
  g_Ram_ptr[0x5d7] = (uint)*(byte *)(local_34 + 0x17);
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffe;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffd;
  if (*(short *)(local_34 + 0x14) == 0) {
    g_Ram_ptr[0x5d8] = 2;
  }
  else if (*(short *)(local_34 + 0x14) == 1) {
    g_Ram_ptr[0x5d8] = 1;
  }
  else {
    g_Ram_ptr[0x5d8] = 4;
  }
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] | 4;
  if (*(char *)(local_34 + 0x44) == 0) {
    g_Ram_ptr[0x5d9] = 0;
  }
  else {
    g_Ram_ptr[0x5d9] = 5;
  }
  bVar6 = 9;
  if (*(byte *)(local_34 + 0x18) < 9) {
    bVar6 = *(byte *)(local_34 + 0x18);
  }
  *(byte *)((int)g_Ram_ptr + 0x177d) = bVar6;
  g_Ram_ptr[0x5d6] = (uint)*(byte *)(local_34 + 0x16);
  *(undefined4 *)(g_Ram_ptr[0x26] + 0x124) = 1;
  sVar1 = *(short *)(local_34 + 0x1a);
  if (sVar1 == 0) {
    *(undefined4 *)(g_Ram_ptr[0x26] + 0x74) = 0;
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(g_Ram_ptr[0x26] + 0x74) = 1;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(g_Ram_ptr[0x26] + 0x74) = 2;
  }
  iVar4 = 0;
  g_Ram_ptr[0x30a] = 0;
  iVar8 = 0xb;
  do {
    uVar3 = 0xb;
    if (*(ushort *)(local_34 + 0x26) < 0xb) {
      uVar3 = (uint)*(ushort *)(local_34 + 0x26);
    }
    if (iVar4 < (int)uVar3) {
      g_Ram_ptr[(iVar4 + 1U & 0xff) * 0x3c + 0x30a] = 1;
    }
    else {
      g_Ram_ptr[(iVar4 + 1U & 0xff) * 0x3c + 0x30a] = 5;
    }
    iVar4 = iVar4 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar7 = *(int **)(*g_Ram_ptr + 0x1bc);
  if (piVar7 != (int *)0) {
    if (piVar7 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7); puVar5 != (void *)0
          ; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__80567bcc;
        }
      }
      bVar2 = false;
LAB_segment_0__80567bcc:
      if (bVar2) goto LAB_segment_0__80567bdc;
    }
    piVar7 = (int *)0;
  }
  else {
    piVar7 = (int *)0;
  }
LAB_segment_0__80567bdc:
  if (piVar7 != (int *)0) {
    if (piVar7 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x60))(piVar7); puVar5 != (void *)0
          ; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__80567c30;
        }
      }
      bVar2 = false;
LAB_segment_0__80567c30:
      if (bVar2) goto LAB_segment_0__80567c40;
    }
    piVar7 = (int *)0;
  }
  else {
    piVar7 = (int *)0;
  }
LAB_segment_0__80567c40:
  if (*(char *)(local_34 + 0x3e) == '\x01') {
    if (*(char *)(local_34 + 0x44) == 0) {
      piVar7[0x1b2] = 0x88;
    }
    else {
      piVar7[0x1b2] = 0x89;
    }
  }
  else if (*(char *)(local_34 + 0x44) == 0) {
    piVar7[0x1b2] = 0x2d;
  }
  else {
    piVar7[0x1b2] = 0x1d;
  }
  FUN_segment_0__804c1c9c(g_Ram_ptr[0x26]);
  (**(code **)(*param_1 + 0x24))(param_1,0x6b,0);
  return;
}

// === phys_EffectGroup_80567cdc (0x80567cdc) ===
undefined4 * phys_EffectGroup_80567cdc(undefined4 *param_1)

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
  FUN_segment_0__804c8134(param_1 + 0x1b);
  FUN_segment_0__804cd3f0(param_1 + 0x1f);
  FUN_segment_0__80500418(param_1 + 0x7c);
  param_1[0x7c] = 0;
  FUN_segment_0__804ccebc(param_1 + 0xd9);
  FUN_segment_0__804cd0bc(param_1 + 0x136);
  FUN_segment_0__804b4ecc(param_1 + 0x194);
  FUN_segment_0__804b4ecc(param_1 + 0x1c5);
  return param_1;
}

// === EffectGroup_validate_80567dd0 (0x80567dd0) ===
int EffectGroup_validate_80567dd0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd0f8(param_1 + 0x4d8,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x364,0xffffffff);
    if (param_1 + 0x1f0 != 0) {
      FUN_segment_0__80500540(param_1 + 0x1f0,0);
    }
    FUN_segment_0__804cd42c(param_1 + 0x7c,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === phys_EffectGroup_80567e6c (0x80567e6c) ===
void phys_EffectGroup_80567e6c(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x7c,0);
  FUN_segment_0__804cd484(param_1 + 0x7c,99,0x72,0x7d);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x1f0,0);
  FUN_segment_0__80735444(param_1 + 0x1f0,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x364,0);
  FUN_segment_0__804ccf50(param_1 + 0x364,0x88,0x97,0xb1);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x4d8,0);
  FUN_segment_0__804cd150(param_1 + 0x4d8,0xc6,0xcc,0xe5);
  *(undefined *)(param_1 + 0x64c) = 0;
  return;
}

// === phys_EffectGroup_80567f78 (0x80567f78) ===
void phys_EffectGroup_80567f78(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined local_48 [4];
  undefined4 local_44;
  undefined4 local_38;
  undefined local_2c [4];
  undefined4 local_28;
  char local_14;
  
  iVar2 = FUN_segment_0__805558e8(iRam00000000);
  if (iVar2 == 1) {
    local_2c[0] = 0;
    local_28 = 0;
    FUN_segment_0__80559214(iRam00000000,local_2c);
    if (local_14 == 0) {
      *(undefined *)(param_1 + 0x64c) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x64c) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0x64c) = 0;
  }
  if (*(char *)(param_1 + 0x64c) == 0) {
    FUN_segment_0__80545dc0(iRam00000000);
  }
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  local_48[0] = 0;
  local_44 = 0;
  FUN_segment_0__80559214(iRam00000000,local_48);
  *(undefined4 *)(param_1 + 0x6ec) = local_38;
  uVar1 = 99;
  if (*(ushort *)(iVar2 + 0x5924) < 100) {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x5924);
  }
  *(uint *)(param_1 + 0x650) = uVar1 & 0xff;
  if (*(ushort *)(iVar2 + 0x5924) < 100) {
    uVar1 = (uint)*(byte *)(iVar2 + 0x5926);
  }
  else {
    uVar1 = 0x3b;
  }
  *(uint *)(param_1 + 0x654) = uVar1;
  if (*(ushort *)(iVar2 + 0x5924) < 100) {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x5928);
  }
  else {
    uVar1 = 999;
  }
  *(uint *)(param_1 + 0x658) = uVar1;
  FUN_segment_0__80500a34(param_1 + 0x1f0,0x19cd,0);
  FUN_segment_0__80500a34(param_1 + 0x4d8,0x19ce,0);
  FUN_segment_0__80500a34(param_1 + 0x364,0x19cf,param_1 + 0x650);
  return;
}

// === phys_EffectGroup_805680f8 (0x805680f8) ===
void phys_EffectGroup_805680f8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 0xb4) {
    return;
  }
  if ((*(char *)(param_1 + 0x64c) == 0) &&
     (iVar2 = FUN_segment_0__80546a5c(g_Ram_ptr), iVar2 == 0)) {
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805681b0;
        }
      }
      bVar1 = false;
LAB_segment_0__805681b0:
      if (bVar1) goto LAB_segment_0__805681c0;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__805681c0:
  (**(code **)(*piVar5 + 100))(piVar5);
  FUN_segment_0__804ccddc(piVar5,0x19cd,0);
  iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
  if (iVar2 == 1) {
    if (*(char *)(param_1 + 0x64c) == 0) {
      (**(code **)(*piVar5 + 0x68))(piVar5,0x19d0,0);
    }
    else {
      (**(code **)(*piVar5 + 0x68))(piVar5,0x1a34,0);
    }
    piVar5[0x62] = param_1 + 0x44;
    FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
  }
  else {
    uVar4 = FUN_segment_0__8055590c(g_Ram_ptr);
    *(undefined4 *)(param_1 + 0x714) = uVar4;
    (**(code **)(*piVar5 + 0x68))(piVar5,0x19d1,param_1 + 0x714);
    piVar5[0x62] = param_1 + 0x58;
  }
  FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
  return;
}

// === phys_EffectGroup_805682d4 (0x805682d4) ===
void phys_EffectGroup_805682d4(int param_1)

{
  if (*(char *)(param_1 + 0x64c) == 0) {
    FUN_segment_0__804f8c44(uRam00000000,0x7a,0);
  }
  else {
    FUN_segment_0__804f8c44(uRam00000000,0x7e,0);
  }
  FUN_segment_0__804f8cd0(uRam00000000,0,0xff);
  return;
}

// === phys_EffectGroup_8056833c (0x8056833c) ===
void phys_EffectGroup_8056833c(void)

{
  FUN_segment_0__804f8c44(uRam00000000,0x7a,0);
  FUN_segment_0__804f8cd0(uRam00000000,0,0xff);
  return;
}

// === EffectGroup_validate_805683a8 (0x805683a8) ===
void EffectGroup_validate_805683a8(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EffectGroup_validate_805683d8 (0x805683d8) ===
void EffectGroup_validate_805683d8(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EffectGroup_validate_80568408 (0x80568408) ===
void EffectGroup_validate_80568408(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === phys_EffectGroup_80568458 (0x80568458) ===
undefined4 * phys_EffectGroup_80568458(undefined4 *param_1)

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

// === EffectGroup_validate_80568570 (0x80568570) ===
int EffectGroup_validate_80568570(int param_1,int param_2)

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

// === phys_EffectGroup_80568610 (0x80568610) ===
void phys_EffectGroup_80568610(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804ccf50(param_1 + 0x404,0,0xf,0x1d);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0x2b,0x32,0x4e,1,0,0);
  FUN_segment_0__80500a34(param_1 + 0x578,0x1b5b,0);
  *(undefined4 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0x53,0x5a,0x5f,1,0,1);
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === phys_EffectGroup_8056879c (0x8056879c) ===
void phys_EffectGroup_8056879c(int param_1)

{
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  FUN_segment_0__80500a34(param_1 + 0x290,0x1a2c,0);
  FUN_segment_0__80500a34(param_1 + 0x404,0x1a2d,0);
  return;
}

// === phys_EffectGroup_80568808 (0x80568808) ===
void phys_EffectGroup_80568808(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x7a,1);
  }
  return;
}

// === EffectGroup_validate_805688b4 (0x805688b4) ===
void EffectGroup_validate_805688b4(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5d,0,0,0x254,5);
}

// === EffectGroup_validate_80568910 (0x80568910) ===
undefined4 EffectGroup_validate_80568910(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x254,5);
  }
  return 0;
}

// === EffectGroup_assertFail_80568984 (0x80568984) ===
void EffectGroup_assertFail_80568984(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === phys_EffectGroup_80568adc (0x80568adc) ===
void phys_EffectGroup_80568adc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) - 1U < 2) &&
     (iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0), *(char *)(iVar1 + 0x35) == 0)) {
    iVar4 = param_1 + 0x174;
    iVar3 = 0;
    iVar1 = param_1;
    do {
      if ((-1 < *(int *)(iVar1 + 0x3b4)) && (FUN_segment_0__804a9fd0(iVar4,1), iVar3 == 0)) {
        FUN_segment_0__804a9f40(iVar4,0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x254;
      iVar1 = iVar1 + 0x254;
    } while (iVar3 < 5);
    uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,3);
  }
  iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  *(bool *)(param_1 + 0x80) = *(int *)(iVar1 + 0x38) == 0;
  return;
}

// === phys_EffectGroup_80568bd4 (0x80568bd4) ===
void phys_EffectGroup_80568bd4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,3);
  iVar3 = param_1 + 0x174;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x3b4) < 0) {
      FUN_segment_0__804a9fd0(iVar3,0);
    }
    else {
      FUN_segment_0__804a9fd0(iVar3,1);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x254;
    param_1 = param_1 + 0x254;
  } while (iVar2 < 5);
  return;
}

// === phys_EffectGroup_80568c6c (0x80568c6c) ===
void phys_EffectGroup_80568c6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  param_1 = param_1 + 0x174;
  iVar2 = 0;
  do {
    FUN_segment_0__804a9fd0(param_1,0);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x254;
  } while (iVar2 < 5);
  return;
}

// === phys_EffectGroup_80568cdc (0x80568cdc) ===
void phys_EffectGroup_80568cdc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  }
  else {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,2);
  }
  return;
}

// === phys_EffectGroup_80568d3c (0x80568d3c) ===
void phys_EffectGroup_80568d3c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,5);
  }
  else {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,4);
  }
  param_1 = param_1 + 0x174;
  iVar2 = 0;
  do {
    FUN_segment_0__804a9fd0(param_1,0);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x254;
  } while (iVar2 < 5);
  return;
}

// === phys_EffectGroup_80568dd4 (0x80568dd4) ===
bool phys_EffectGroup_80568dd4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 3;
}

// === phys_EffectGroup_80568e0c (0x80568e0c) ===
bool phys_EffectGroup_80568e0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 0;
}

// === phys_EffectGroup_80568e40 (0x80568e40) ===
void phys_EffectGroup_80568e40
               (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + param_2 * 0x254;
  *(int *)(iVar1 + 0x3b4) = param_3;
  if (param_3 < 0) {
    *(undefined *)(iVar1 + 500) = 1;
  }
  else {
    *(undefined *)(iVar1 + 500) = 0;
    FUN_segment_0__80500a34(iVar1 + 0x174,param_4,param_5);
    if ((param_6 == 0) ||
       (uVar2 = FUN_segment_0__804ce0ec(param_6,param_7), -1 < (int)(-uVar2 | uVar2))) {
      FUN_segment_0__805011cc(iVar1 + 0x174,0xde,0);
    }
    else {
      iVar1 = param_1 + param_2 * 0x254 + 0x174;
      FUN_segment_0__8050105c(iVar1,0xd6,param_6,param_7,0);
      FUN_segment_0__805011cc(iVar1,0xda,1);
    }
  }
  return;
}

// === phys_EffectGroup_80568f24 (0x80568f24) ===
void phys_EffectGroup_80568f24(int param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x174;
  iVar1 = 0;
  do {
    FUN_segment_0__804a9ec4(param_1,param_2,0);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x254;
  } while (iVar1 < 5);
  return;
}

// === EffectGroup_assertFail_80568f94 (0x80568f94) ===
void EffectGroup_assertFail_80568f94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === phys_PlayerTrick_80575d68 (0x80575d68) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerTrick_80575d68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerTrick_80576188 (0x80576188) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerTrick_80576188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerTrick_805765a0 (0x805765a0) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerTrick_805765a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerTrick_805768a4 (0x805768a4) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerTrick_805768a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerTrick_assertFail_80576b9c (0x80576b9c) ===
void PlayerTrick_assertFail_80576b9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === PlayerTrick_validate_80576d94 (0x80576d94) ===
undefined4 PlayerTrick_validate_80576d94(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === PlayerTrick_validate_80576df8 (0x80576df8) ===
undefined4 * PlayerTrick_validate_80576df8(undefined4 *param_1,int param_2)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
    param_1[0x41] = 0x150;
    if (g_Ram_ptr != (int *)0) {
      if (g_Ram_ptr != (int *)0) {
        (**(code **)(*g_Ram_ptr + 8))(g_Ram_ptr,1);
      }
      g_Ram_ptr = (int *)0;
    }
    g_Ram_ptr = (int *)((uint)g_Ram_ptr & 0xffffff);
    if (param_1 != (undefined4 *)0xfffffefc) {
      param_1[0x41] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1[0x46]);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffefc);
    }
  }
  return param_1;
}

// === phys_PlayerTrick_80576eb8 (0x80576eb8) ===
void phys_PlayerTrick_80576eb8(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(float)g_Ram_ptr;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  dVar1 = (double)(float)g_Ram_ptr;
  *(short *)(param_1 + 0x134) =
       (short)(int)(*(float *)(param_1 + 300) / *(float *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x164);
  FUN_segment_0__804470ec(dVar1,dVar2,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  if (*(char *)(param_1 + 0x132) == 0) {
    (**(code **)(*g_Ram_ptr + 0xc))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x124) + 0xc))();
  }
  FUN_segment_0__80700a44(param_1,0);
  *(undefined *)(param_1 + 0x1a4) = 0;
  return;
}

// === phys_PlayerTrick_80576fd4 (0x80576fd4) ===
void phys_PlayerTrick_80576fd4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  double dVar5;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined auStack_bc [12];
  undefined auStack_b0 [12];
  undefined auStack_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  piVar2 = (int *)(**(code **)(*param_1 + 300))(param_1,0);
  *(undefined *)(param_1 + 0x15) = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 4;
  param_1[0x16] = *piVar2;
  param_1[0x17] = piVar2[1];
  param_1[0x18] = piVar2[2];
  param_1[0x19] = piVar2[3];
  param_1[0x1a] = piVar2[4];
  param_1[0x1b] = piVar2[5];
  param_1[0x1c] = piVar2[6];
  param_1[0x1d] = piVar2[7];
  param_1[0x1e] = piVar2[8];
  param_1[0x1f] = piVar2[9];
  param_1[0x20] = piVar2[10];
  param_1[0x21] = piVar2[0xb];
  param_1[0xc] = piVar2[3];
  param_1[0xd] = piVar2[7];
  param_1[0xe] = piVar2[0xb];
  if (*(byte *)((int)g_Ram_ptr + 0x25) < 2) {
    bVar1 = false;
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    if (((~*(uint *)(iVar3 + 0x20) & 0x1010101) == 0) &&
       (iVar3 = FUN_segment_0__8056d8d8(g_Ram_ptr), iVar3 != 0)) {
      bVar1 = true;
    }
    FUN_segment_0__8040443c((double)(float)g_Ram_ptr,auStack_a4,0);
    FUN_segment_0__8040443c((double)(float)param_1[0x10],auStack_80,auStack_a4);
    if (*(char *)((int)param_1 + 0x132) == 0) {
      FUN_segment_0__80404464(auStack_b0,param_1 + 0xc,auStack_80);
      (**(code **)(*g_Ram_ptr + 0x74))(g_Ram_ptr,auStack_b0);
      (**(code **)(*g_Ram_ptr + 0x80))();
    }
    else {
      if (bVar1) {
        (**(code **)(*(int *)param_1[0x49] + 0x10))();
      }
      else {
        (**(code **)(*(int *)param_1[0x49] + 0xc))();
      }
      FUN_segment_0__80404464(auStack_bc,param_1 + 0xc,auStack_80);
      (**(code **)(*(int *)param_1[0x49] + 0x14))((int *)param_1[0x49],auStack_bc);
      (**(code **)(*(int *)param_1[0x49] + 0x1c))();
    }
  }
  else if (*(char *)((int)param_1 + 0x132) == 0) {
    (**(code **)(*g_Ram_ptr + 0x10))();
  }
  else {
    (**(code **)(*(int *)param_1[0x49] + 0x10))();
  }
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 300))(param_1,1);
  local_40 = *puVar4;
  local_3c = puVar4[1];
  local_38 = puVar4[2];
  local_34 = puVar4[3];
  local_30 = puVar4[4];
  local_2c = puVar4[5];
  local_28 = puVar4[6];
  local_24 = puVar4[7];
  local_20 = puVar4[8];
  local_1c = puVar4[9];
  local_18 = puVar4[10];
  local_14 = puVar4[0xb];
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 300))(param_1,0);
  local_70 = *puVar4;
  local_6c = puVar4[1];
  local_68 = puVar4[2];
  local_98 = puVar4[3];
  local_60 = puVar4[4];
  local_5c = puVar4[5];
  local_58 = puVar4[6];
  local_94 = puVar4[7];
  local_50 = puVar4[8];
  local_4c = puVar4[9];
  local_48 = puVar4[10];
  local_90 = puVar4[0xb];
  local_8c = local_34;
  local_88 = local_24;
  local_84 = local_14;
  local_64 = local_98;
  local_54 = local_94;
  local_44 = local_90;
  FUN_segment_0__80404498(&local_c8,&local_98,&local_8c);
  param_1[0x66] = local_c8;
  dVar5 = (double)(float)g_Ram_ptr;
  param_1[0x67] = local_c4;
  param_1[0x68] = local_c0;
  FUN_segment_0__80700aa8(dVar5,param_1,0x2cc);
  return;
}

// === PlayerSub10_Core_validate_805780c4 (0x805780c4) ===
int PlayerSub10_Core_validate_805780c4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === PlayerSub10_Core_calc_80578104 (0x80578104) ===
void PlayerSub10_Core_calc_80578104(int param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  
  dVar4 = dRam00000000;
  fVar3 = dRam00000000._0_4_;
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  pfVar6 = *(float **)(param_1 + 0xac);
  dVar1 = (double)CONCAT44(0x43300000,uVar5) - dRam00000000;
  *pfVar6 = -(float)((double)CONCAT44(0x43300000,uVar5) - dRam00000000);
  pfVar6[1] = fVar3;
  pfVar6[2] = -(float)dVar1;
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0xc) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  *(float *)(iVar7 + 0x10) = fVar3;
  *(float *)(iVar7 + 0x14) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0x18) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  *(float *)(iVar7 + 0x1c) = fVar3;
  *(float *)(iVar7 + 0x20) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  iVar7 = *(int *)(param_1 + 0xac);
  *(float *)(iVar7 + 0x24) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  *(float *)(iVar7 + 0x28) = fVar3;
  *(float *)(iVar7 + 0x2c) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4);
  fVar2 = *(float *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0x30) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  *(float *)(iVar7 + 0x34) = fVar3;
  *(float *)(iVar7 + 0x38) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  fVar2 = *(float *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0x3c) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  *(float *)(iVar7 + 0x40) = fVar3;
  *(float *)(iVar7 + 0x44) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  fVar2 = *(float *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0x48) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  *(float *)(iVar7 + 0x4c) = fVar3;
  *(float *)(iVar7 + 0x50) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  fVar2 = *(float *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xac);
  uVar5 = *(int *)(param_1 + 0xc0) / 2 ^ 0x80000000;
  *(float *)(iVar7 + 0x54) = -(float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  *(float *)(iVar7 + 0x58) = fVar3;
  *(float *)(iVar7 + 0x5c) = (float)((double)CONCAT44(0x43300000,uVar5) - dVar4) * fVar2;
  return;
}

// === PlayerSub10_Core_assertFail_80578428 (0x80578428) ===
void PlayerSub10_Core_assertFail_80578428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === PlayerSub10_Core_validate_80578810 (0x80578810) ===
undefined4 PlayerSub10_Core_validate_80578810(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === PlayerSub10_Core_validate_805788b4 (0x805788b4) ===
void PlayerSub10_Core_validate_805788b4(int param_1)

{
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined auStack_40 [56];
  
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_88,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_88;
    *(undefined4 *)(param_1 + 0x4c) = local_84;
    *(undefined4 *)(param_1 + 0x50) = local_80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_40,param_1 + 0x3c,param_1 + 0x48,param_1 + 0x30);
}

// === phys_PlayerSub10_Core_805789c4 (0x805789c4) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_805789c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_80578f18 (0x80578f18) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerSub10_Core_validate_80578f18(int param_1)

{
  undefined4 *puVar1;
  float local_120;
  float local_11c;
  float local_118;
  undefined auStack_114 [220];
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
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(*(int *)(iRam00000000 + 0x10) + 0x6c) + 8))();
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
  local_118 = _DAT_00000030 + *(float *)(param_1 + 0x38);
  local_11c = _DAT_00000034 + *(float *)(param_1 + 0x34);
  local_120 = fRam00000038 + *(float *)(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_114,&local_38,&local_120);
}

// === PlayerSub10_Core_validate_80579690 (0x80579690) ===
void PlayerSub10_Core_validate_80579690(int param_1)

{
  float fVar1;
  
  PlayerSub10_Core_calc_80578104();
  fVar1 = g_Ram_float;
  *(float *)(*(int *)(param_1 + 0xac) + 4) = g_Ram_float;
  *(float *)(*(int *)(param_1 + 0xac) + 0x10) = fVar1;
  *(float *)(*(int *)(param_1 + 0xac) + 0x1c) = fVar1;
  *(float *)(*(int *)(param_1 + 0xac) + 0x28) = fVar1;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x34) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x40) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x4c) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0x58) = *(undefined4 *)(param_1 + 0xc4);
  if (fVar1 != *(float *)(param_1 + 0xcc)) {
    fVar1 = ((float)((double)CONCAT44(0x43300000,*(uint *)(param_1 + 0xd8) ^ 0x80000000) -
                    dRam00000018) * fRam0000003c) / *(float *)(param_1 + 0xcc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(fRam00000040 * fVar1));
}

// === phys_PlayerSub10_Core_80579814 (0x80579814) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_80579814(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerSub10_Core_80579e54 (0x80579e54) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_80579e54(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerSub10_Core_8057a4a0 (0x8057a4a0) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057a4a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerSub10_Core_8057ac00 (0x8057ac00) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057ac00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057b368 (0x8057b368) ===
void PlayerSub10_Core_validate_8057b368
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined auStack_28 [12];
  undefined auStack_1c [16];
  
  FUN_segment_0__80404498(auStack_1c,param_4);
  FUN_segment_0__80404498(auStack_28,param_5,param_3);
  FUN_segment_0__80426d88(param_1,auStack_1c,auStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1);
}

// === PlayerSub10_Core_validate_8057b3dc (0x8057b3dc) ===
void PlayerSub10_Core_validate_8057b3dc(int *param_1)

{
  double dVar1;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined auStack_50 [48];
  undefined4 local_20;
  uint uStack_1c;
  
  dVar1 = dRam00000000;
  local_20 = 0x43300000;
  uStack_1c = param_1[0x36] + 1U ^ 0x80000000;
  param_1[0x36] = param_1[0x36] + 1U;
  if (ABS((float)param_1[0x33]) < (float)((double)CONCAT44(0x43300000,uStack_1c) - dVar1)) {
    param_1[0x36] = 0;
  }
  (**(code **)(*param_1 + 0x124))(param_1);
  (**(code **)(*param_1 + 0x120))(param_1);
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_a8,param_1 + 0x16);
    param_1[0x12] = local_a8;
    param_1[0x13] = local_a4;
    param_1[0x14] = local_a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,param_1 + 0xf,param_1 + 0x12,param_1 + 0xc);
}

// === PlayerSub10_Core_validate_8057b59c (0x8057b59c) ===
void PlayerSub10_Core_validate_8057b59c(undefined4 *param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  *param_1 = 0;
  fVar4 = fRam00000008;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  param_1[0xd] = fVar4 + (float)param_1[0xd];
  uVar7 = uRam00000014;
  uVar6 = uRam00000010;
  uVar5 = uRam0000000c;
  uVar3 = uRam00000007;
  uVar2 = uRam00000006;
  uVar1 = uRam00000005;
  *(undefined *)(param_1 + 0x3d) = uRam00000004;
  *(undefined *)((int)param_1 + 0xf5) = uVar1;
  *(undefined *)((int)param_1 + 0xf6) = uVar2;
  *(undefined *)((int)param_1 + 0xf7) = uVar3;
  param_1[0x30] = 0x1c20;
  param_1[0x31] = 0x960;
  param_1[0x33] = uVar5;
  param_1[0x32] = fVar4;
  param_1[0x34] = uVar6;
  param_1[0x35] = uVar7;
  param_1[0x36] = 0xc;
  param_1[0x37] = 0xc;
  param_1[0x3a] = 0x120;
  param_1[0x3b] = 0xa9;
  param_1[0x38] = 600;
  param_1[0x39] = 200;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7fc);
}

// === PlayerSub10_Core_validate_8057b780 (0x8057b780) ===
undefined4 PlayerSub10_Core_validate_8057b780(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === phys_PlayerSub10_Core_8057b824 (0x8057b824) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057b824(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057b9e4 (0x8057b9e4) ===
void PlayerSub10_Core_validate_8057b9e4(undefined4 *param_1,undefined4 param_2)

{
  double dVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  fVar9 = fRam0000001c;
  dVar1 = 4503601774856544.0 - dRam00000028;
  param_1[0xd] = fRam00000008 + (float)param_1[0xd];
  uVar5 = uRam0000000c;
  *param_1 = 0;
  uVar6 = uRam00000010;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  uVar10 = uRam00000020;
  uVar8 = uRam00000018;
  uVar7 = uRam00000014;
  uVar4 = uRam00000007;
  uVar3 = uRam00000006;
  uVar2 = uRam00000005;
  *(undefined *)(param_1 + 0x3d) = uRam00000004;
  *(undefined *)((int)param_1 + 0xf5) = uVar2;
  *(undefined *)((int)param_1 + 0xf6) = uVar3;
  *(undefined *)((int)param_1 + 0xf7) = uVar4;
  param_1[0x30] = 0x23f0;
  param_1[0x31] = 0x960;
  param_1[0x33] = uVar5;
  param_1[0x32] = uVar6;
  param_1[0x34] = uVar7;
  param_1[0x35] = uVar8;
  param_1[0x3f] = fVar9 * (float)dVar1;
  param_1[0x40] = uVar10;
  param_1[0x36] = 8;
  param_1[0x37] = 8;
  param_1[0x3a] = 0x80;
  param_1[0x3b] = 0x51;
  param_1[0x38] = 0x47e;
  param_1[0x39] = 300;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x3dc);
}

// === PlayerSub10_Core_validate_8057bbfc (0x8057bbfc) ===
undefined4 PlayerSub10_Core_validate_8057bbfc(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === phys_PlayerSub10_Core_8057bca0 (0x8057bca0) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057bca0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_assertFail_8057be4c (0x8057be4c) ===
void PlayerSub10_Core_assertFail_8057be4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === PlayerSub10_Core_validate_8057c07c (0x8057c07c) ===
undefined4 PlayerSub10_Core_validate_8057c07c(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === phys_PlayerSub10_Core_8057c120 (0x8057c120) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057c120(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057c5f0 (0x8057c5f0) ===
void PlayerSub10_Core_validate_8057c5f0(undefined4 *param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  param_1[0xd] = fRam00000008 + (float)param_1[0xd];
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  uVar4 = uRam0000000c;
  *param_1 = 0;
  uVar7 = uRam00000018;
  uVar6 = uRam00000014;
  uVar5 = uRam00000010;
  uVar3 = uRam00000007;
  uVar2 = uRam00000006;
  uVar1 = uRam00000005;
  *(undefined *)(param_1 + 0x3d) = uRam00000004;
  *(undefined *)((int)param_1 + 0xf5) = uVar1;
  *(undefined *)((int)param_1 + 0xf6) = uVar2;
  *(undefined *)((int)param_1 + 0xf7) = uVar3;
  param_1[0x30] = 0x12c0;
  param_1[0x31] = 0x12c0;
  param_1[0x33] = uVar4;
  param_1[0x32] = uVar5;
  param_1[0x34] = uVar6;
  param_1[0x35] = uVar7;
  param_1[0x36] = 0x10;
  param_1[0x37] = 0x10;
  param_1[0x3a] = 0x200;
  param_1[0x3b] = 0x121;
  param_1[0x38] = 300;
  param_1[0x39] = 300;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xd9c);
}

// === PlayerSub10_Core_validate_8057c7d0 (0x8057c7d0) ===
undefined4 PlayerSub10_Core_validate_8057c7d0(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === phys_PlayerSub10_Core_8057c874 (0x8057c874) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057c874(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057caf4 (0x8057caf4) ===
void PlayerSub10_Core_validate_8057caf4(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uRam0000000c;
  *(undefined4 *)(param_1 + 0x20) = uRam00000080;
  iVar1 = iRam00000250;
  if (6 < *(int *)(iRam00000000 + 0xb70)) {
    iVar1 = iRam00000250 + 4;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined4 *)(param_1 + 0x28) = uRam00000420;
  *(undefined4 *)(param_1 + 0x2c) = uRam00000664;
  *(byte *)(param_1 + 0x30) =
       (byte)((*(byte *)(iRam00000000 + 0x25) | 0xfffffffd) -
              (*(byte *)(iRam00000000 + 0x25) - 2 >> 1) >> 0x1f);
  *(byte *)(param_1 + 0x31) =
       (byte)((*(byte *)(iRam00000000 + 0x25) | 0xfffffffc) -
              (*(byte *)(iRam00000000 + 0x25) - 3 >> 1) >> 0x1f);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x1c) << 2);
}

// === PlayerSub10_Core_validate_8057ce4c (0x8057ce4c) ===
int PlayerSub10_Core_validate_8057ce4c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === phys_PlayerSub10_Core_8057ce8c (0x8057ce8c) ===
void phys_PlayerSub10_Core_8057ce8c(int param_1)

{
  *(undefined *)(param_1 + 0x33) = 0;
  return;
}

// === phys_PlayerSub10_Core_8057ce98 (0x8057ce98) ===
void phys_PlayerSub10_Core_8057ce98(void)

{
  return;
}

// === phys_PlayerSub10_Core_8057ce9c (0x8057ce9c) ===
void phys_PlayerSub10_Core_8057ce9c(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x33) == 0) {
    phys_PlayerSub10_Core_8057d920(param_1,*(undefined4 *)(*param_1 + param_2 * 4));
  }
  return;
}

// === phys_PlayerSub10_Core_8057cef0 (0x8057cef0) ===
void phys_PlayerSub10_Core_8057cef0(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) == 0) {
    phys_PlayerSub10_Core_8057d920(param_1,*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4));
  }
  return;
}

// === phys_PlayerSub10_Core_8057cf44 (0x8057cf44) ===
void phys_PlayerSub10_Core_8057cf44(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) == 0) {
    phys_PlayerSub10_Core_8057d920(param_1,*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4));
  }
  return;
}

// === phys_PlayerSub10_Core_8057d008 (0x8057d008) ===
void phys_PlayerSub10_Core_8057d008(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*param_1 + param_2 * 4) + 0x10))();
  return;
}

// === phys_PlayerSub10_Core_8057d034 (0x8057d034) ===
void phys_PlayerSub10_Core_8057d034(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + param_2 * 4) + 0x10))();
  return;
}

// === phys_PlayerSub10_Core_8057d060 (0x8057d060) ===
void phys_PlayerSub10_Core_8057d060(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + param_2 * 4) + 0x10))();
  return;
}

// === phys_PlayerSub10_Core_8057d08c (0x8057d08c) ===
void phys_PlayerSub10_Core_8057d08c(int *param_1,int param_2)

{
  if (*(char *)((int)param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*param_1 + param_2 * 4) + 0x18))();
  return;
}

// === phys_PlayerSub10_Core_8057d0b8 (0x8057d0b8) ===
void phys_PlayerSub10_Core_8057d0b8(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + param_2 * 4) + 0x18))();
  return;
}

// === phys_PlayerSub10_Core_8057d0e4 (0x8057d0e4) ===
void phys_PlayerSub10_Core_8057d0e4(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + param_2 * 4) + 0x18))();
  return;
}

// === phys_PlayerSub10_Core_8057d110 (0x8057d110) ===
void phys_PlayerSub10_Core_8057d110(double param_1,int param_2,undefined4 param_3)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_2 + 0x33) == 0) {
    if (*(char *)(param_2 + 0x30) == 0) {
      local_c = (float)param_1;
      local_8 = (float)param_1;
      local_4 = (float)param_1;
      FUN_segment_0__805a57a0(0x74,param_3,&local_c);
    }
    else {
      local_18 = (float)param_1;
      local_14 = (float)param_1;
      local_10 = (float)param_1;
      FUN_segment_0__805a57a0(0x81,param_3,&local_18);
    }
  }
  return;
}

// === phys_PlayerSub10_Core_8057d188 (0x8057d188) ===
void phys_PlayerSub10_Core_8057d188(double param_1,int param_2,undefined4 param_3)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_2 + 0x33) == 0) {
    if (*(char *)(param_2 + 0x30) == 0) {
      local_c = (float)param_1;
      local_8 = (float)param_1;
      local_4 = (float)param_1;
      FUN_segment_0__805a57a0(0x8f,param_3,&local_c);
    }
    else {
      local_18 = (float)param_1;
      local_14 = (float)param_1;
      local_10 = (float)param_1;
      FUN_segment_0__805a57a0(0x9c,param_3,&local_18);
    }
  }
  return;
}

// === phys_PlayerSub10_Core_8057d200 (0x8057d200) ===
void phys_PlayerSub10_Core_8057d200(int param_1)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
  FUN_segment_0__805a56e0(0xaa);
  return;
}

// === phys_PlayerSub10_Core_8057d220 (0x8057d220) ===
void phys_PlayerSub10_Core_8057d220(double param_1,int param_2,undefined4 param_3,int param_4)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(param_2 + 0x33) == 0) {
    if (*(char *)(param_2 + 0x30) == 0) {
      if (param_4 == 0) {
        local_c = (float)param_1;
        local_8 = (float)param_1;
        local_4 = (float)param_1;
        FUN_segment_0__805a57a0(0xb5,param_3,&local_c);
      }
      else if (param_4 == 1) {
        local_18 = (float)param_1;
        local_14 = (float)param_1;
        local_10 = (float)param_1;
        FUN_segment_0__805a57a0(0xc0,param_3,&local_18);
      }
      else if (param_4 == 2) {
        local_24 = (float)param_1;
        local_20 = (float)param_1;
        local_1c = (float)param_1;
        FUN_segment_0__805a57a0(0xcb,param_3,&local_24);
      }
    }
    else if (param_4 == 0) {
      local_30 = (float)param_1;
      local_2c = (float)param_1;
      local_28 = (float)param_1;
      FUN_segment_0__805a57a0(0xd7,param_3,&local_30);
    }
    else if (param_4 == 1) {
      local_3c = (float)param_1;
      local_38 = (float)param_1;
      local_34 = (float)param_1;
      FUN_segment_0__805a57a0(0xe3,param_3,&local_3c);
    }
    else if (param_4 == 2) {
      local_48 = (float)param_1;
      local_44 = (float)param_1;
      local_40 = (float)param_1;
      FUN_segment_0__805a57a0(0xef,param_3,&local_48);
    }
  }
  return;
}

// === phys_PlayerSub10_Core_8057d360 (0x8057d360) ===
void phys_PlayerSub10_Core_8057d360(int param_1)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) == 0) {
    FUN_segment_0__805a56e0(0xfc);
    return;
  }
  FUN_segment_0__805a56e0(0x109);
  return;
}

// === phys_PlayerSub10_Core_8057d39c (0x8057d39c) ===
void phys_PlayerSub10_Core_8057d39c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x33) == 0) {
    param_2 = param_2 * 4;
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + param_2) + 0xc))();
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2);
    (**(code **)(*piVar1 + 0x78))(piVar1,param_3);
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + param_2) + 0x80))();
  }
  return;
}

// === phys_PlayerSub10_Core_8057d434 (0x8057d434) ===
void phys_PlayerSub10_Core_8057d434(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x33) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8057d458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + param_2 * 4) + 0x18))();
  return;
}

// === phys_PlayerSub10_Core_8057d460 (0x8057d460) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057d460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerSub10_Core_8057d56c (0x8057d56c) ===
void phys_PlayerSub10_Core_8057d56c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x33) == 0) {
    FUN_segment_0__8047d97c(uRam00000000,param_3);
    iVar1 = FUN_segment_0__8047decc();
    if ((iVar1 == 0) || (*(char *)(param_1 + 0x30) != 0)) {
      FUN_segment_0__805a56e0(0x145,param_2);
    }
    else {
      FUN_segment_0__805a56e0(0x132,param_2);
    }
  }
  return;
}

// === phys_PlayerSub10_Core_8057d600 (0x8057d600) ===
void phys_PlayerSub10_Core_8057d600(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  int *piVar1;
  
  if (g_Ram_float < param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]) {
    param_2 = param_2 * 4;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + param_2) + 0xc))();
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + param_2);
    (**(code **)(*piVar1 + 0x74))(piVar1,param_3);
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + param_2);
    (**(code **)(*piVar1 + 0x70))(piVar1,param_4);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + param_2) + 0x80))();
  }
  return;
}

// === phys_PlayerSub10_Core_8057d6f0 (0x8057d6f0) ===
void phys_PlayerSub10_Core_8057d6f0(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x8057d708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + param_2 * 4) + 0x18))();
  return;
}

// === phys_PlayerSub10_Core_8057d70c (0x8057d70c) ===
void phys_PlayerSub10_Core_8057d70c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_segment_0__8047d97c(uRam00000000,param_3);
  iVar1 = FUN_segment_0__8047decc();
  if ((iVar1 == 0) || (*(char *)(param_1 + 0x30) != 0)) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + param_2 * 4) + 0xc))();
  }
  else {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + param_2 * 4) + 0xc))();
  }
  return;
}

// === PlayerSub10_Core_validate_8057d7a4 (0x8057d7a4) ===
void PlayerSub10_Core_validate_8057d7a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_segment_0__8047d97c(uRam00000000,param_4);
  iVar1 = FUN_segment_0__8047decc();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(*(int *)(param_1 + 0x14) + param_2 * 4) + 0x74);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(*(int *)(param_1 + 0x18) + param_2 * 4) + 0x74);
}

// === phys_PlayerSub10_Core_8057d920 (0x8057d920) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057d920(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057dbb0 (0x8057dbb0) ===
void PlayerSub10_Core_validate_8057dbb0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar4;
  uint uVar3;
  bool bVar5;
  
  *param_1 = 0;
  iVar1 = FUN_segment_0__8047e28c(param_2);
  *(bool *)((int)param_1 + 0xd) = iVar1 == 2;
  *(byte *)((int)param_1 + 0xe) = (byte)(*(uint *)(*(int *)(*param_2 + 4) + 0x14) >> 4) & 1;
  param_1[0x46] = param_2;
  uVar2 = FUN_segment_0__8047e2f8(param_2);
  param_1[0x47] = uVar2;
  param_1[0x48] = *(undefined4 *)(*(int *)*param_2 + 8);
  uVar2 = FUN_segment_0__8047e2e8(param_2);
  param_1[0x49] = uVar2;
  iVar1 = FUN_segment_0__8047e2a4(param_2);
  *(bool *)(param_1 + 0x4a) = iVar1 == 3;
  uVar4 = FUN_segment_0__8047e2d8(param_2);
  *(undefined *)((int)param_1 + 0x12e) = uVar4;
  uVar4 = 1;
  bVar5 = true;
  *(bool *)(param_1 + 0x4e) = *(int *)(iRam00000000 + 0xb74) == 5;
  *(bool *)((int)param_1 + 0x139) = *(int *)(iRam00000000 + 0xb74) == 1;
  iVar1 = *(int *)(iRam00000000 + 0xb74);
  if ((iVar1 != 2) && (iVar1 != 3)) {
    bVar5 = false;
  }
  if ((!bVar5) && (iVar1 != 4)) {
    uVar4 = 0;
  }
  *(undefined *)((int)param_1 + 0x13a) = uVar4;
  *(bool *)((int)param_1 + 0x13b) = *(int *)(iRam00000000 + 0xb74) == 6;
  *(byte *)(param_1 + 0x4f) = (byte)(*(uint *)(iRam00000000 + 0xb90) >> 2) & 1;
  *(bool *)((int)param_1 + 0x13d) = *(int *)(iRam00000000 + 0xb70) == 1;
  *(bool *)((int)param_1 + 0x13e) = *(int *)(iRam00000000 + 0xb68) == 6;
  *(bool *)((int)param_1 + 0x13f) = *(int *)(iRam00000000 + 0xb68) == 3;
  *(bool *)(param_1 + 0x50) = *(int *)(iRam00000000 + 0xb68) == 0xb;
  *(bool *)((int)param_1 + 0x141) = *(int *)(iRam00000000 + 0xb68) == 2;
  *(bool *)((int)param_1 + 0x142) = *(int *)(iRam00000000 + 0xb68) == 0xe;
  *(bool *)((int)param_1 + 0x143) = *(int *)(iRam00000000 + 0xb68) == 0x13;
  *(bool *)(param_1 + 0x51) = *(int *)(iRam00000000 + 0xb68) == 9;
  *(bool *)((int)param_1 + 0x145) = *(int *)(iRam00000000 + 0xb68) == 5;
  *(bool *)((int)param_1 + 0x146) = *(int *)(iRam00000000 + 0xb68) == 4;
  *(bool *)((int)param_1 + 0x147) = *(int *)(iRam00000000 + 0xb68) == 0x1c;
  uVar4 = 0;
  *(bool *)(param_1 + 0x52) = *(int *)(iRam00000000 + 0xb68) == 0x1e;
  *(bool *)((int)param_1 + 0x149) = *(int *)(iRam00000000 + 0xb68) == 0x1d;
  *(bool *)((int)param_1 + 0x14a) = *(int *)(iRam00000000 + 0xb68) == 0x20;
  *(bool *)((int)param_1 + 0x14b) = *(int *)(iRam00000000 + 0xb68) == 0x36;
  *(undefined *)(param_1 + 0x53) = *(undefined *)(iRam00000000 + 0x14);
  *(undefined *)((int)param_1 + 0x14d) = *(undefined *)(iRam00000000 + 0x15);
  *(undefined *)((int)param_1 + 0x14e) = *(undefined *)(iRam00000000 + 0x16);
  *(undefined *)((int)param_1 + 0x14f) = *(undefined *)(iRam00000000 + 0x17);
  *(byte *)(param_1 + 0x54) =
       (byte)((byte)((uint)-*(int *)(iRam00000000 + 0x50) >> 0x18) |
             (byte)((uint)*(int *)(iRam00000000 + 0x50) >> 0x18)) >> 7;
  *(bool *)((int)param_1 + 0x151) = *(int *)(iRam00000000 + 0xb68) == 0x1b;
  *(undefined *)((int)param_1 + 0x152) = *(undefined *)(iRam00000000 + 0x18);
  *(undefined *)((int)param_1 + 0x153) = *(undefined *)(iRam00000000 + 0x19);
  if ((*(uint *)(iRam00000000 + 0xb90) & 2) != 0) {
    uVar3 = FUN_segment_0__8047e2d8(param_2);
    if (*(int *)(iRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xf4) == 0) {
      uVar4 = 1;
    }
  }
  *(undefined *)(param_1 + 0x55) = uVar4;
  uVar4 = 0;
  if (((*(uint *)(iRam00000000 + 0xb90) & 2) != 0) &&
     (uVar3 = FUN_segment_0__8047e2d8(param_2),
     *(int *)(iRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xf4) == 1)) {
    uVar4 = 1;
  }
  *(undefined *)((int)param_1 + 0x155) = uVar4;
  uVar4 = 1;
  bVar5 = true;
  iVar1 = *(int *)(iRam00000000 + 0xb70);
  if ((iVar1 != 3) && (iVar1 != 9)) {
    bVar5 = false;
  }
  if ((!bVar5) && (iVar1 != 10)) {
    uVar4 = 0;
  }
  *(undefined *)((int)param_1 + 0x156) = uVar4;
  *(undefined *)((int)param_1 + 0x157) = *(undefined *)(iRam00000000 + 0x1a);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x65,0,0,4,0x10);
}

// === phys_PlayerSub10_Core_8057e448 (0x8057e448) ===
undefined4 phys_PlayerSub10_Core_8057e448(void)

{
  return uRam00000000;
}

// === phys_PlayerSub10_Core_8057e454 (0x8057e454) ===
undefined4 phys_PlayerSub10_Core_8057e454(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb68);
}

// === PlayerSub10_Core_validate_8057e460 (0x8057e460) ===
int PlayerSub10_Core_validate_8057e460(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === PlayerSub10_Core_validate_8057e4a0 (0x8057e4a0) ===
undefined4 PlayerSub10_Core_validate_8057e4a0(int param_1)

{
  if (param_1 != 0) {
    uRam00000000 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x87c,0,0xc,4);
  }
  return 0;
}

// === phys_PlayerSub10_Core_8057e5c0 (0x8057e5c0) ===
void phys_PlayerSub10_Core_8057e5c0(int param_1)

{
  phys_PlayerSub10_Core_8057e670();
  PlayerSub10_Core_validate_8057ec5c(param_1);
  if (*(char *)(param_1 + 0x14c) != 0) {
    FUN_segment_0__8044ef04(*(undefined4 *)(param_1 + 0x158));
    (**(code **)(**(int **)(param_1 + 0x158) + 0xc))(*(int **)(param_1 + 0x158),0);
  }
  if (*(char *)(param_1 + 0x14d) != 0) {
    FUN_segment_0__8044ef04(*(undefined4 *)(param_1 + 0x15c));
    (**(code **)(**(int **)(param_1 + 0x15c) + 0xc))(*(int **)(param_1 + 0x15c),0);
  }
  if (*(char *)(param_1 + 0x151) != 0) {
    (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(*(int **)(param_1 + 0x160),0);
  }
  return;
}

// === phys_PlayerSub10_Core_8057e670 (0x8057e670) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Core_8057e670(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Core_validate_8057ec5c (0x8057ec5c) ===
void PlayerSub10_Core_validate_8057ec5c(int param_1)

{
  *(uint *)(param_1 + 0x134) = *(byte *)(param_1 + 0x12e) + 2;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  if (*(char *)(param_1 + 299) == 0) {
    if ((((*(char *)(param_1 + 0xf) != 0) || (*(char *)(param_1 + 0x11) != 0)) ||
        (*(char *)(param_1 + 0x10) != 0)) || (*(char *)(param_1 + 0x13) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (((*(char *)(param_1 + 0x11) != 0) || (*(char *)(param_1 + 0x10) != 0)) ||
       (*(char *)(param_1 + 0x13) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if ((*(char *)(param_1 + 0xf) != 0) || (*(char *)(param_1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
  }
  if (*(char *)(param_1 + 299) == 0) {
    if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (((*(char *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x11) == 0)) &&
       (*(char *)(param_1 + 0x13) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  if (*(char *)(param_1 + 0x129) != 0) {
    if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
    if ((*(int *)(param_1 + 0x724) != -1) && (*(byte *)(param_1 + 0x12e) < 0xc)) {
                    /* WARNING: Could not emulate address calculation at 0x8058038c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 0x12e) << 2))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  if ((*(char *)(param_1 + 0x129) != 0) || (*(char *)(param_1 + 0x12a) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  if (*(char *)(param_1 + 0x129) != 0) {
    if (*(char *)(param_1 + 0xb) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x7c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  if (*(char *)(param_1 + 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  if ((*(char *)(param_1 + 0xf) == 0) && (*(char *)(param_1 + 299) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7c);
}

// === phys_PlayerSub10_Misc_80583970 (0x80583970) ===
void phys_PlayerSub10_Misc_80583970(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined *)(param_1 + 5) = 1;
    *(undefined *)(param_1 + 7) = 1;
    return;
  }
  *(undefined *)(param_1 + 7) = 0;
  *(undefined *)(param_1 + 5) = 0;
  *(undefined *)(param_1 + 6) = 0;
  return;
}

// === phys_PlayerSub10_Misc_8058399c (0x8058399c) ===
void phys_PlayerSub10_Misc_8058399c(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  uVar3 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 0xc) >> 0x13 & 1;
  *(char *)(param_1 + 0xf5) = (char)uVar3;
  if (uVar3 == 0) {
    phys_PlayerSub10_Misc_80583aac(param_1);
    if (*(char *)(param_1 + 299) == 0) {
      iVar4 = PlayerPhysics_validate_8058cd38(param_1);
      if (iVar4 != 0) {
        return;
      }
      PlayerSub10_Misc_validate_80584924(param_1);
    }
    bVar1 = *(char *)(param_1 + 7) != 0;
    if (bVar1) {
      bVar2 = false;
      if ((bVar1) && (*(char *)(param_1 + 8) == 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        phys_PlayerSub10_Misc_8058550c(param_1,0);
      }
    }
    *(char *)(param_1 + 8) = *(char *)(param_1 + 7);
    if ((*(char *)(param_1 + 7) == 0) || (*(char *)(param_1 + 0x13b) != 0)) {
      phys_PlayerSub10_Misc_805842d4(param_1);
      PlayerSub10_Misc_calc_805857c0(param_1);
      phys_PlayerSub10_Misc_80586908(param_1);
    }
  }
  else {
    phys_PlayerSub10_Misc_8058550c(param_1,1);
    *(undefined *)(param_1 + 4) = 1;
  }
  return;
}

// === phys_PlayerSub10_Misc_80583aac (0x80583aac) ===
void phys_PlayerSub10_Misc_80583aac(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__8047da88(*(undefined4 *)(param_1 + 0x118));
}

// === phys_PlayerSub10_Misc_805842d4 (0x805842d4) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerSub10_Misc_805842d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerSub10_Misc_validate_80584924 (0x80584924) ===
/* WARNING: Removing unreachable block (ram,0x80584ad4) */
/* WARNING: Removing unreachable block (ram,0x80584b78) */

void PlayerSub10_Misc_validate_80584924(int param_1)

{
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined auStack_5c [12];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
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
  
  if ((*(char *)(param_1 + 0x46) == 0) || (*(char *)(param_1 + 4) != 0)) {
    FUN_segment_0__805988c8(param_1);
  }
  else {
    FUN_segment_0__805986ec();
  }
  if (*(char *)(param_1 + 4) != 0) {
    FUN_segment_0__805988c8(param_1);
  }
  PlayerPhysics_validate_8058d7bc(param_1);
  FUN_segment_0__8059a148(param_1);
  FUN_segment_0__8059a39c(param_1);
  local_4c = -*(float *)(param_1 + 0x74);
  local_50 = uRam00000000;
  local_48 = uRam00000000;
  FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_50,auStack_5c);
  local_40 = *(undefined4 *)(param_1 + 0x6f4);
  local_3c = *(undefined4 *)(param_1 + 0x6f8);
  local_38 = *(undefined4 *)(param_1 + 0x6fc);
  local_34 = *(undefined4 *)(param_1 + 0x700);
  local_30 = *(undefined4 *)(param_1 + 0x704);
  local_2c = *(undefined4 *)(param_1 + 0x708);
  local_28 = *(undefined4 *)(param_1 + 0x70c);
  local_24 = *(undefined4 *)(param_1 + 0x710);
  local_20 = *(undefined4 *)(param_1 + 0x714);
  local_1c = *(undefined4 *)(param_1 + 0x718);
  local_18 = *(undefined4 *)(param_1 + 0x71c);
  local_14 = *(undefined4 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_68,param_1 + 0x6d0,auStack_5c);
  local_34 = local_68;
  local_24 = local_64;
  local_14 = local_60;
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x23c) + 0x74);
  }
  if (*(char *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x238) == 0) {
    *(undefined *)(param_1 + 0x68) = 0;
    WheelPhysics_validate_8058e774(param_1);
    WheelPhysics_validate_8058e4c4(param_1);
    if (*(char *)(param_1 + 0x151) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x25c) + 0x74);
    }
    if (*(char *)(param_1 + 0xad) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
}

// === phys_PlayerSub10_Misc_8058521c (0x8058521c) ===
void phys_PlayerSub10_Misc_8058521c(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(char *)(param_1 + 7) != 0;
  if (bVar1) {
    bVar2 = false;
    if ((bVar1) && (*(char *)(param_1 + 8) == 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      phys_PlayerSub10_Misc_8058550c(param_1,0);
    }
  }
  *(undefined *)(param_1 + 8) = *(undefined *)(param_1 + 7);
  return;
}

// === phys_PlayerSub10_Misc_80585284 (0x80585284) ===
void phys_PlayerSub10_Misc_80585284(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  if ((*(char *)(param_1 + 5) != 0) && (*(char *)(param_1 + 6) == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = 0;
    iVar4 = param_1;
    do {
      (**(code **)(**(int **)(iVar4 + 0x1f0) + 0x20))(*(int **)(iVar4 + 0x1f0),param_2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x2c);
    iVar3 = 0;
    iVar4 = param_1;
    do {
      (**(code **)(**(int **)(iVar4 + 0x2a0) + 0x20))(*(int **)(iVar4 + 0x2a0),param_2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0xe);
    iVar3 = 0;
    iVar4 = param_1;
    do {
      (**(code **)(**(int **)(iVar4 + 0x2d8) + 0x20))(*(int **)(iVar4 + 0x2d8),param_2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x10);
    if (*(int *)(param_1 + 0x124) == 0) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x52c) + iVar3);
        (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 8);
      iVar4 = 0;
      iVar3 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x530) + iVar3);
        (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 0x24);
      iVar3 = 0;
      iVar4 = param_1;
      do {
        (**(code **)(**(int **)(iVar4 + 0x318) + 0x20))(*(int **)(iVar4 + 0x318),param_2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < 0x12);
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x610) + iVar3);
        (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 8);
      iVar4 = 0;
      iVar3 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x614) + iVar3);
        (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < 0x1c);
      iVar3 = 0;
      iVar4 = param_1;
      do {
        (**(code **)(**(int **)(iVar4 + 0x318) + 0x20))(*(int **)(iVar4 + 0x318),param_2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < 9);
    }
    *(undefined *)(param_1 + 6) = *(undefined *)(param_1 + 5);
  }
  return;
}

// === phys_PlayerSub10_Misc_8058550c (0x8058550c) ===
void phys_PlayerSub10_Misc_8058550c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 + 0x1f0);
    if ((piVar1 != (int *)0) &&
       ((param_2 != 0 ||
        ((((7 < iVar2 - 5U && (5 < iVar2 - 0xeU)) && (iVar2 != 0x1b)) && (iVar2 != 0x23)))))) {
      (**(code **)(*piVar1 + 0x18))();
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x2c);
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar3 + 0x2a0);
    if ((piVar1 != (int *)0) && (4 < iVar2 - 3U)) {
      (**(code **)(*piVar1 + 0x18))();
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0xe);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int **)(iVar2 + 0x2d8) != (int *)0) {
      (**(code **)(**(int **)(iVar2 + 0x2d8) + 0x18))();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x10);
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if (*(int **)(iVar2 + 0x318) != (int *)0) {
        (**(code **)(**(int **)(iVar2 + 0x318) + 0x18))();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x12);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar3 = 0;
    iVar2 = param_1;
    do {
      if (*(int **)(iVar2 + 0x318) != (int *)0) {
        (**(code **)(**(int **)(iVar2 + 0x318) + 0x18))();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 9);
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x52c) + iVar3);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 0x18))();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 8);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x610) + iVar3);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 0x18))();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 8);
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x530) + iVar3);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 0x18))();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x24);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x614) + iVar3);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 0x18))();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x1c);
  }
  return;
}

// === PlayerSub10_Misc_calc_805857c0 (0x805857c0) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerSub10_Misc_calc_805857c0(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int *piVar8;
  undefined auStack_d8 [12];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined auStack_c0 [12];
  int local_b4;
  float local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined auStack_9c [12];
  int local_90;
  float local_8c;
  int local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  
  if (*(char *)(param_1 + 0xc) != 0) {
    FUN_segment_0__805a04f0();
  }
  if (*(char *)(param_1 + 0x90) == 0) {
    if (*(int *)(param_1 + 0x124) == 0) {
      PlayerSub10Bike_validate_80587c40(param_1);
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      PlayerSub10Bike_assertFail_80588b88(param_1);
    }
  }
  PlayerPhysics_validate_8058b710(param_1);
  if (*(char *)(param_1 + 299) == 0) {
    phys_PlayerSub10Bike_805877f8(param_1);
    phys_PlayerPhysics_8058afac(param_1);
    PlayerBoost_assertFail_805898c8(param_1);
    PlayerPhysics_validate_8058b360(param_1);
    bVar3 = true;
    bVar7 = false;
    bVar4 = *(char *)(param_1 + 0x96) == 0;
    if ((bVar4) && (*(char *)(param_1 + 0x7a) != 0)) {
      bVar7 = true;
    }
    if (!bVar7) {
      bVar7 = false;
      if ((bVar4) && (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100))) {
        bVar7 = true;
      }
      if (!bVar7) {
        bVar3 = false;
      }
    }
    if ((*(char *)(param_1 + 0x14b) != 0) &&
       (((bVar3 = false, bVar4 && (*(char *)(param_1 + 0x7a) != 0)) ||
        ((bVar4 && ((*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100) &&
                    (*(char *)(param_1 + 0x10c) != 0)))))))) {
      bVar3 = true;
    }
    iVar5 = FUN_segment_0__8047e620(*(undefined4 *)(param_1 + 0x118));
    if ((iVar5 == 9) || (bVar3)) {
      piVar8 = *(int **)(param_1 + 0x224);
      if (piVar8 != (int *)0) {
        (**(code **)(*piVar8 + 0xc))(piVar8);
        (**(code **)(*piVar8 + 0x74))(piVar8,param_1 + 0x6d0);
        if (*(char *)(param_1 + 0xb0) != 0) {
          (**(code **)(*piVar8 + 0x70))(piVar8,param_1 + 0x72c);
        }
        (**(code **)(*piVar8 + 0x80))(piVar8);
      }
    }
    else if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x224) + 0x74);
    }
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
    phys_PlayerPhysics_8058c408(param_1);
    if (*(char *)(param_1 + 0x12a) == 0) {
      if (*(int *)(param_1 + 0x124) == 0) {
        if (*(char *)(param_1 + 0x90) == 0) {
          if (*(char *)(param_1 + 0x43) == 0) {
            if (*(char *)(param_1 + 0x44) == 0) {
              PlayerSub10Bike_validate_805873a0
                        (param_1,*(undefined4 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,
                         param_1 + 0x7bc,1);
              PlayerSub10Bike_validate_805873a0
                        (param_1,*(undefined4 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,
                         param_1 + 0x7c8,1);
            }
          }
          else {
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,param_1 + 0x7bc,
                       1);
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,param_1 + 0x7c8,
                       1);
          }
          if (*(char *)(param_1 + 0x44) == 0) {
            FUN_segment_0__80597f94(param_1);
          }
          else {
            FUN_segment_0__80597e80(param_1);
          }
        }
        else {
          iVar5 = 2;
          piVar8 = (int *)(*(int *)(param_1 + 0x52c) + 8);
          do {
            if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_segment_0__80443430(*piVar8 + 0x74);
            }
            iVar5 = iVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar5 < 8);
        }
      }
      else if (*(int *)(param_1 + 0x124) == 1) {
        if (*(char *)(param_1 + 0x90) == 0) {
          if (*(char *)(param_1 + 0x43) == 0) {
            if (*(char *)(param_1 + 0x44) == 0) {
              PlayerSub10Bike_validate_805873a0
                        (param_1,*(undefined4 *)(param_1 + 0x610),4,7,param_1 + 0x6f4,
                         param_1 + 0x7c8,1);
            }
          }
          else {
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x610),4,7,param_1 + 0x6f4,param_1 + 0x7c8,
                       1);
          }
          if (*(char *)(param_1 + 0x44) == 0) {
            FUN_segment_0__80598294(param_1);
          }
          else {
            FUN_segment_0__805981a0(param_1);
          }
        }
        else {
          iVar5 = 4;
          piVar8 = (int *)(*(int *)(param_1 + 0x610) + 0x10);
          do {
            if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_segment_0__80443430(*piVar8 + 0x74);
            }
            iVar5 = iVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar5 < 7);
        }
      }
      if (*(int *)(param_1 + 0x284) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(param_1 + 0x284) + 0x74);
      }
      bVar7 = true;
      uVar6 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 8);
      if (((uVar6 & 0x40) == 0) && ((uVar6 & 0x8000) == 0)) {
        bVar7 = false;
      }
      if (bVar7) {
        local_b0 = -*(float *)(param_1 + 0x74);
        local_b4 = iRam00000000;
        local_ac = iRam00000000;
        FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_b4,auStack_c0);
        local_80 = *(undefined4 *)(param_1 + 0x6f4);
        local_7c = *(undefined4 *)(param_1 + 0x6f8);
        local_78 = *(undefined4 *)(param_1 + 0x6fc);
        local_74 = *(undefined4 *)(param_1 + 0x700);
        local_70 = *(undefined4 *)(param_1 + 0x704);
        local_6c = *(undefined4 *)(param_1 + 0x708);
        local_68 = *(undefined4 *)(param_1 + 0x70c);
        local_64 = *(undefined4 *)(param_1 + 0x710);
        local_60 = *(undefined4 *)(param_1 + 0x714);
        local_5c = *(undefined4 *)(param_1 + 0x718);
        local_58 = *(undefined4 *)(param_1 + 0x71c);
        local_54 = *(undefined4 *)(param_1 + 0x720);
        FUN_segment_0__80404464(&local_cc,param_1 + 0x6d0,auStack_c0);
        local_74 = local_cc;
        local_64 = local_c8;
        local_54 = local_c4;
        piVar8 = *(int **)(param_1 + 0x288);
        if (piVar8 != (int *)0) {
          (**(code **)(*piVar8 + 0xc))(piVar8);
          (**(code **)(*piVar8 + 0x78))(piVar8,&local_80);
          if (*(char *)(param_1 + 0xb0) != 0) {
            (**(code **)(*piVar8 + 0x70))(piVar8,param_1 + 0x72c);
          }
          (**(code **)(*piVar8 + 0x80))(piVar8);
        }
      }
      else {
        local_8c = -*(float *)(param_1 + 0x74);
        local_90 = iRam00000000;
        local_88 = iRam00000000;
        FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_90,auStack_9c);
        local_50 = *(undefined4 *)(param_1 + 0x6f4);
        local_4c = *(undefined4 *)(param_1 + 0x6f8);
        local_48 = *(undefined4 *)(param_1 + 0x6fc);
        local_44 = *(undefined4 *)(param_1 + 0x700);
        local_40 = *(undefined4 *)(param_1 + 0x704);
        local_3c = *(undefined4 *)(param_1 + 0x708);
        local_38 = *(undefined4 *)(param_1 + 0x70c);
        local_34 = *(undefined4 *)(param_1 + 0x710);
        local_30 = *(undefined4 *)(param_1 + 0x714);
        local_2c = *(undefined4 *)(param_1 + 0x718);
        local_28 = *(undefined4 *)(param_1 + 0x71c);
        local_24 = *(undefined4 *)(param_1 + 0x720);
        FUN_segment_0__80404464(&local_a8,param_1 + 0x6d0,auStack_9c);
        local_44 = local_a8;
        local_34 = local_a4;
        local_24 = local_a0;
        if (*(int *)(param_1 + 0x288) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*(int *)(param_1 + 0x288) + 0x74);
        }
      }
      if ((((*(char *)(param_1 + 0x96) == 0) && (0 < (int)*(uint *)(param_1 + 0x7b0))) &&
          (fRam00000028 < *(float *)(param_1 + 0x6e8))) && ('\x1e' < *(char *)(param_1 + 0x7b4))) {
        if (*(char *)(param_1 + 0x129) != 0) {
          uStack_1c = *(uint *)(param_1 + 0x7b0) ^ 0x80000000;
          local_20 = 0x43300000;
          FUN_segment_0__80595ebc
                    ((double)(float)((double)CONCAT44(0x43300000,uStack_1c) - _DAT_00000030),
                     auStack_d8,param_1 + 0x7a4);
          FUN_segment_0__80596204(param_1,auStack_d8);
        }
        if (*(char *)(param_1 + 0x24) == 0) {
          FUN_segment_0__8047f0c8(*(undefined4 *)(param_1 + 0x118));
        }
        fVar1 = *(float *)(param_1 + 0x6f0);
        fVar2 = *(float *)(param_1 + 0x6e8);
        if ((fVar2 < fVar1) && (fVar1 = fVar2, fVar2 <= fRam00000028)) {
          fVar1 = fRam00000028;
        }
        FUN_segment_0__8047dc98
                  ((double)(fRam0000002c +
                           (fVar1 - fRam00000028) *
                           (fRam00000004 / (*(float *)(param_1 + 0x6f0) - fRam00000028))),
                   *(undefined4 *)(param_1 + 0x118),1,1);
        FUN_segment_0__8047e02c(*(undefined4 *)(param_1 + 0x118),0x11);
        FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
        FUN_segment_0__805f86c8();
        *(undefined *)(param_1 + 0x7b4) = 0;
      }
      if (*(int *)(param_1 + 0x280) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(param_1 + 0x280) + 0x74);
      }
      (**(code **)(**(int **)(param_1 + 0x290) + 0x80))();
      if (((*(int *)(param_1 + 0x724) != -1) &&
          (WheelPhysics_assertFail_8058f908(param_1), *(char *)(iRam00000000 + 0x25) == '\x01')) &&
         (PlayerPhysics_validate_8058a350(param_1), *(char *)(param_1 + 0x13b) == 0)) {
        if (((*(char *)(param_1 + 0x13e) != 0) && (*(char *)(iRam00000000 + 0x25) == '\x01')) &&
           (*(int *)(param_1 + 0x724) != -1)) {
          FUN_segment_0__8059c734(param_1);
        }
        phys_WheelPhysics_8058f034(param_1);
        phys_WheelPhysics_8058f2a8(param_1);
        phys_WheelPhysics_8058f530(param_1);
      }
    }
  }
  return;
}

// === phys_PlayerSub10_Misc_80586908 (0x80586908) ===
void phys_PlayerSub10_Misc_80586908(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar4;
  int iVar2;
  uint uVar3;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_1 + 0x6e8);
  uVar4 = FUN_segment_0__8047ea54(*(undefined4 *)(param_1 + 0x118));
  *(undefined2 *)(param_1 + 0x7a0) = uVar4;
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_1 + 0x7bc);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_1 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_1 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_1 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_1 + 0x7cc);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_1 + 2000);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x170);
  if (*(char *)(param_1 + 0x848) != 0) {
    *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x84c);
    *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x850);
    *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_1 + 0x854);
  }
  if (*(char *)(param_1 + 0x849) != 0) {
    *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_1 + 0x858);
    *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(param_1 + 0x85c);
    *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_1 + 0x860);
  }
  if (*(char *)(param_1 + 0x84a) != 0) {
    *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_1 + 0x864);
    *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x868);
    *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x86c);
  }
  if (*(char *)(param_1 + 0x84b) != 0) {
    *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x870);
    *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x874);
    *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_1 + 0x878);
  }
  uVar1 = uRam00000000;
  *(byte *)(param_1 + 0x96c) =
       (byte)*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 4) & 1;
  *(undefined4 *)(param_1 + 0x7ac) = uVar1;
  *(undefined4 *)(param_1 + 0x7a8) = uVar1;
  *(undefined4 *)(param_1 + 0x7a4) = uVar1;
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined *)(param_1 + 0x29) = 0;
  *(undefined *)(param_1 + 0x31) = 0;
  *(undefined *)(param_1 + 0x91) = *(undefined *)(param_1 + 0x90);
  *(undefined *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0xac) = 0;
  *(undefined *)(param_1 + 0x6c) = *(undefined *)(param_1 + 0x6b);
  *(undefined *)(param_1 + 0x6b) = 0;
  *(undefined *)(param_1 + 0x92) = 0;
  *(undefined *)(param_1 + 0x93) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x740) = uRam00000000;
  *(undefined4 *)(param_1 + 0x744) = uRam00000004;
  *(undefined4 *)(param_1 + 0x748) = uRam00000008;
  for (iVar5 = 0; uVar3 = FUN_segment_0__8047db68(*(undefined4 *)(param_1 + 0x118)),
      iVar5 < (int)(uVar3 & 0xffff); iVar5 = iVar5 + 1) {
    iVar2 = FUN_segment_0__8047dbb4(*(undefined4 *)(param_1 + 0x118),iVar5);
    if (iVar2 != 0) {
      iVar2 = FUN_segment_0__8047e0b0(*(undefined4 *)(param_1 + 0x118),iVar5);
      *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(iVar2 + 0x18);
    }
  }
  FUN_segment_0__805a3df8(param_1 + 0x740,0,param_1 + 0x74c);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x6d0);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x6d4);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x6d8);
  return;
}

// === phys_PlayerSub10_Misc_80586b34 (0x80586b34) ===
undefined4 phys_PlayerSub10_Misc_80586b34(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    if ((*(char *)(param_1 + 0xb0) != 0) && (param_3 != 0)) {
      (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x72c);
    }
  }
  return uVar1;
}

// === PlayerSub10_Misc_validate_80586bd4 (0x80586bd4) ===
void PlayerSub10_Misc_validate_80586bd4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_2 + 0x74);
  }
  return;
}

// === PlayerSub10_Misc_validate_80586c54 (0x80586c54) ===
undefined4 PlayerSub10_Misc_validate_80586c54(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x74);
}

// === PlayerSub10_Misc_validate_80586d50 (0x80586d50) ===
undefined4 PlayerSub10_Misc_validate_80586d50(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x74);
}

// === phys_PlayerSub10_Misc_80586e4c (0x80586e4c) ===
void phys_PlayerSub10_Misc_80586e4c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  if (param_2 != (int *)0) {
    (**(code **)(*param_2 + 0xc))(param_2);
    (**(code **)(*param_2 + 0x78))(param_2,param_3);
    if ((*(char *)(param_1 + 0xb0) != 0) && (param_4 != 0)) {
      (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x72c);
    }
    (**(code **)(*param_2 + 0x80))(param_2);
  }
  return;
}

// === phys_PlayerSub10_Misc_80586f0c (0x80586f0c) ===
void phys_PlayerSub10_Misc_80586f0c(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  if (param_2 != (int *)0) {
    (**(code **)(*param_2 + 0xc))(param_2);
    (**(code **)(*param_2 + 0x74))(param_2,param_3);
    if ((*(char *)(param_1 + 0xb0) != 0) && (param_4 != 0)) {
      (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x72c);
    }
    (**(code **)(*param_2 + 0x80))(param_2);
  }
  return;
}

// === PlayerSub10_Misc_validate_80586fcc (0x80586fcc) ===
undefined4 PlayerSub10_Misc_validate_80586fcc(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x74);
}

// === PlayerSub10Bike_validate_805870dc (0x805870dc) ===
undefined4 PlayerSub10Bike_validate_805870dc(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x74);
}

// === phys_PlayerSub10Bike_805871ec (0x805871ec) ===
void phys_PlayerSub10Bike_805871ec
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + param_3 * 4);
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    if ((int *)*piVar3 != (int *)0) {
      (**(code **)(*(int *)*piVar3 + 0xc))();
      (**(code **)(*(int *)*piVar3 + 0x78))((int *)*piVar3,param_5);
      (**(code **)(*(int *)*piVar3 + 0x74))((int *)*piVar3,param_6);
      bVar2 = false;
      if ((param_3 - 2U < 0x13) && ((1 << (param_3 - 2U & 0x3f) & 0x49255U) != 0)) {
        bVar2 = true;
      }
      bVar1 = false;
      if ((param_3 - 1U < 0xe) && ((1 << (param_3 - 1U & 0x3f) & 0x2495U) != 0)) {
        bVar1 = true;
      }
      if ((*(int *)(param_1 + 0x124) != 0) && (bVar2 = false, *(int *)(param_1 + 0x124) == 1)) {
        bVar2 = bVar1;
      }
      if (bVar2) {
        if ((*(char *)(param_1 + 0xb0) != 0) && (param_7 != 0)) {
          (**(code **)(*(int *)*piVar3 + 0x58))((int *)*piVar3,param_1 + 0x738);
        }
      }
      else if ((*(char *)(param_1 + 0xb0) != 0) && (param_7 != 0)) {
        (**(code **)(*(int *)*piVar3 + 0x70))((int *)*piVar3,param_1 + 0x72c);
      }
      (**(code **)(*(int *)*piVar3 + 0x80))();
    }
    piVar3 = piVar3 + 1;
  }
  return;
}

// === PlayerSub10Bike_validate_805873a0 (0x805873a0) ===
void PlayerSub10Bike_validate_805873a0(undefined4 param_1,int param_2,int param_3,int param_4)

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

// === phys_PlayerSub10Bike_80587594 (0x80587594) ===
void phys_PlayerSub10Bike_80587594(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + param_3 * 4);
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    if ((int *)*piVar1 != (int *)0) {
      (**(code **)(*(int *)*piVar1 + 0xc))();
    }
    piVar1 = piVar1 + 1;
  }
  return;
}

// === PlayerSub10Bike_validate_80587608 (0x80587608) ===
void PlayerSub10Bike_validate_80587608(undefined4 param_1,int param_2,int param_3,int param_4)

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

// === PlayerSub10Bike_validate_80587744 (0x80587744) ===
void PlayerSub10Bike_validate_80587744(undefined4 param_1,int param_2,int param_3,int param_4)

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

// === phys_PlayerSub10Bike_805877f8 (0x805877f8) ===
void phys_PlayerSub10Bike_805877f8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    iVar2 = 2;
    if (*(char *)(param_1 + 0x128) != 0) {
      iVar2 = 1;
    }
    iVar4 = 0;
    iVar2 = param_1 + iVar2 * 4;
    do {
      iVar1 = *(int *)(iVar2 + 0x164);
      if ((iVar1 == 0) || (*(short *)(param_1 + 0xada) != 0)) {
        FUN_segment_0__8059db0c(param_1,iVar4);
      }
      else if ((iVar1 == 1) || (*(short *)(param_1 + 0xadc) != 0)) {
        FUN_segment_0__8059e1a4(param_1,iVar4);
      }
      else if (iVar1 == 2) {
        FUN_segment_0__8059e6e0(param_1,iVar4);
      }
      else if (iVar1 == 3) {
        FUN_segment_0__8059f380(param_1,iVar4);
      }
      else if (iVar1 == 4) {
        FUN_segment_0__8059ec50(param_1,iVar4);
      }
      else if ((iVar1 == 5) || (*(short *)(param_1 + 0xade) != 0)) {
        FUN_segment_0__8059f81c(param_1,iVar4);
      }
      else if (iVar1 == 6) {
        FUN_segment_0__8059fcb0(param_1,iVar4);
      }
      else if (iVar1 == 7) {
        FUN_segment_0__805a00d4(param_1,iVar4);
      }
      uVar3 = *(uint *)(iVar2 + 0x174);
      if ((*(uint *)(iVar2 + 0x164) != uVar3) && (uVar3 < 8)) {
                    /* WARNING: Could not emulate address calculation at 0x8058794c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar3 << 2))();
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 2);
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    iVar2 = *(int *)(param_1 + 0x168);
    if ((iVar2 == 0) || (*(short *)(param_1 + 0xada) != 0)) {
      FUN_segment_0__8059db0c(param_1,1);
    }
    else if ((iVar2 == 1) || (*(short *)(param_1 + 0xadc) != 0)) {
      FUN_segment_0__8059e1a4(param_1,1);
    }
    else if (iVar2 == 2) {
      FUN_segment_0__8059e6e0(param_1,1);
    }
    else if (iVar2 == 3) {
      FUN_segment_0__8059f380(param_1,1);
    }
    else if (iVar2 == 4) {
      FUN_segment_0__8059ec50(param_1,1);
    }
    else if ((iVar2 == 5) || (*(short *)(param_1 + 0xade) != 0)) {
      FUN_segment_0__8059f81c(param_1,1);
    }
    else if (iVar2 == 6) {
      FUN_segment_0__8059fcb0(param_1,1);
    }
    else if (iVar2 == 7) {
      FUN_segment_0__805a00d4(param_1,1);
    }
    uVar3 = *(uint *)(param_1 + 0x178);
    if ((*(uint *)(param_1 + 0x168) != uVar3) && (uVar3 < 8)) {
                    /* WARNING: Could not emulate address calculation at 0x80587ae4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar3 << 2))();
      return;
    }
  }
  dVar5 = (double)FUN_segment_0__8047e63c(*(undefined4 *)(param_1 + 0x118));
  if ((((*(char *)(param_1 + 0x6b) != 0) && (*(char *)(param_1 + 0x6c) == 0)) &&
      ((double)g_Ram_float <= dVar5)) && (*(char *)(param_1 + 0x129) != 0)) {
    if (*(char *)(param_1 + 0xb0) == 0) {
      FUN_segment_0__805a5740(0x17b4,param_1 + 0x6f4);
    }
    else {
      FUN_segment_0__805a581c(0x17a8,param_1 + 0x6f4,param_1 + 0x72c);
    }
  }
  return;
}

// === PlayerSub10Bike_validate_80587c40 (0x80587c40) ===
void PlayerSub10Bike_validate_80587c40(int param_1)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  sVar2 = FUN_segment_0__8047ea54(*(undefined4 *)(param_1 + 0x118));
  sVar3 = FUN_segment_0__8047ea54(*(undefined4 *)(param_1 + 0x118));
  sVar4 = FUN_segment_0__8047ea54(*(undefined4 *)(param_1 + 0x118));
  bVar1 = false;
  uVar5 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 4);
  if (((uVar5 & 2) != 0) && ((uVar5 & 1) == 0)) {
    bVar1 = true;
  }
  if (((sVar2 == 1) || ((uVar5 >> 0x1c & 1) != 0)) || (*(short *)(param_1 + 0xad2) != 0)) {
    FUN_segment_0__805915f0(param_1,*(undefined4 *)(param_1 + 0x530),0,1,0);
    FUN_segment_0__805915f0(param_1,*(undefined4 *)(param_1 + 0x530),1,2,1);
    if (*(char *)(param_1 + 0xe) != 0) {
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
    }
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
    sVar2 = FUN_segment_0__8047ea64(*(undefined4 *)(param_1 + 0x118));
    if ((*(short *)(param_1 + 0x988) <= sVar2) || (*(short *)(param_1 + 0xad8) != 0)) {
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
    }
  }
  else if ((sVar3 == 2) || (*(short *)(param_1 + 0xad4) != 0)) {
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),0,1,0);
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),1,2,1);
    if (*(char *)(param_1 + 0xe) != 0) {
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,
                 1);
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,
                 1);
    }
    if ((*(short *)(param_1 + 0x7a0) == 1) || (*(short *)(param_1 + 0xad6) != 0)) {
      if ((*(char *)(param_1 + 0x7b9) != 0) ||
         (*(uint *)(param_1 + 0x80) < (uint)*(byte *)(param_1 + 0xae0))) {
        piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x28);
        iVar7 = 10;
        do {
          if ((int *)*piVar6 != (int *)0) {
            (**(code **)(*(int *)*piVar6 + 0xc))();
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < 0xd);
      }
      if ((*(char *)(param_1 + 0x7ba) != 0) ||
         (*(uint *)(param_1 + 0x84) < (uint)*(byte *)(param_1 + 0xae0))) {
        piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x34);
        iVar7 = 0xd;
        do {
          if ((int *)*piVar6 != (int *)0) {
            (**(code **)(*(int *)*piVar6 + 0xc))();
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < 0x10);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if ((uint)(int)*(short *)(param_1 + 0x98c) < *(uint *)(param_1 + 0x34)) {
      iVar7 = 0xb;
      piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x2c);
      do {
        if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*piVar6 + 0x74);
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0xd);
      iVar7 = 0xe;
      piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x38);
      do {
        if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*piVar6 + 0x74);
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0x10);
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
    iVar7 = *(int *)(*(int *)(param_1 + 0x530) + 0x58);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar7 + 0x74);
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x530) + 0x5c);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar7 + 0x74);
    }
    sVar2 = FUN_segment_0__8047ea74(*(undefined4 *)(param_1 + 0x118));
    if (*(short *)(param_1 + 0x98a) <= sVar2) {
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
    }
  }
  else if (sVar4 == 3) {
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),0,1,0);
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),1,2,1);
    if (*(char *)(param_1 + 0xe) != 0) {
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,
                 1);
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,
                 1);
    }
    if (*(short *)(param_1 + 0x7a0) == 2) {
      if ((*(char *)(param_1 + 0x7b9) != 0) ||
         (*(uint *)(param_1 + 0x80) < (uint)*(byte *)(param_1 + 0xae0))) {
        piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x40);
        iVar7 = 0x10;
        do {
          if ((int *)*piVar6 != (int *)0) {
            (**(code **)(*(int *)*piVar6 + 0xc))();
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < 0x13);
      }
      if ((*(char *)(param_1 + 0x7ba) != 0) ||
         (*(uint *)(param_1 + 0x84) < (uint)*(byte *)(param_1 + 0xae0))) {
        piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x4c);
        iVar7 = 0x13;
        do {
          if ((int *)*piVar6 != (int *)0) {
            (**(code **)(*(int *)*piVar6 + 0xc))();
          }
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar7 < 0x16);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if ((uint)(int)*(short *)(param_1 + 0x98c) < *(uint *)(param_1 + 0x34)) {
      iVar7 = 0x11;
      piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x44);
      do {
        if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*piVar6 + 0x74);
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0x13);
      iVar7 = 0x14;
      piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x50);
      do {
        if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*piVar6 + 0x74);
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0x16);
      if ((*(char *)(param_1 + 0x7b9) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x80))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
      }
      if ((*(char *)(param_1 + 0x7ba) == 0) &&
         ((uint)*(byte *)(param_1 + 0xae0) <= *(uint *)(param_1 + 0x84))) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
    }
    iVar7 = 2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    piVar6 = (int *)(*(int *)(param_1 + 0x530) + 8);
    do {
      if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*piVar6 + 0x74);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < 4);
    iVar7 = 4;
    piVar6 = (int *)(*(int *)(param_1 + 0x530) + 0x10);
    do {
      if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*piVar6 + 0x74);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < 6);
    iVar7 = *(int *)(*(int *)(param_1 + 0x530) + 0x60);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar7 + 0x74);
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x530) + 100);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar7 + 0x74);
    }
  }
  else {
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),0,1,0);
    FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),1,2,1);
    if (*(char *)(param_1 + 0xe) != 0) {
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x20,0x21,param_1 + 0x6f4,param_1 + 0x7bc,
                 1);
      PlayerSub10Bike_validate_805873a0
                (param_1,*(undefined4 *)(param_1 + 0x530),0x21,0x22,param_1 + 0x6f4,param_1 + 0x7c8,
                 1);
    }
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),2,4,param_1 + 0x6f4,param_1 + 0x7bc,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),4,6,param_1 + 0x6f4,param_1 + 0x7c8,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),6,8,param_1 + 0x6f4,param_1 + 0x7bc,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),8,10,param_1 + 0x6f4,param_1 + 0x7c8,1);
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),0x16,0x17,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),0x17,0x18,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),0x18,0x19,param_1 + 0x6f4,param_1 + 0x7bc,1)
    ;
    PlayerSub10Bike_validate_805873a0
              (param_1,*(undefined4 *)(param_1 + 0x530),0x19,0x1a,param_1 + 0x6f4,param_1 + 0x7c8,1)
    ;
    if ((!bVar1) || (*(float *)(param_1 + 0x728) <= g_Ram_float)) {
      FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),0x22,0x23,0);
      FUN_segment_0__80591780(param_1,*(undefined4 *)(param_1 + 0x530),0x23,0x24,1);
    }
    else {
      FUN_segment_0__805915f0(param_1,*(undefined4 *)(param_1 + 0x530),0x22,0x23,0);
      FUN_segment_0__805915f0(param_1,*(undefined4 *)(param_1 + 0x530),0x23,0x24,1);
    }
  }
  PlayerSub10Bike_validate_80587608
            (param_1,*(undefined4 *)(param_1 + 0x530),10,0xd,param_1 + 0x6f4,param_1 + 0x7bc,1);
  PlayerSub10Bike_validate_80587608
            (param_1,*(undefined4 *)(param_1 + 0x530),0xd,0x10,param_1 + 0x6f4,param_1 + 0x7c8,1);
  PlayerSub10Bike_validate_80587608
            (param_1,*(undefined4 *)(param_1 + 0x530),0x10,0x13,param_1 + 0x6f4,param_1 + 0x7bc,1);
  PlayerSub10Bike_validate_80587608
            (param_1,*(undefined4 *)(param_1 + 0x530),0x13,0x16,param_1 + 0x6f4,param_1 + 0x7c8,1);
  return;
}

// === PlayerSub10Bike_assertFail_80588b88 (0x80588b88) ===
void PlayerSub10Bike_assertFail_80588b88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === PlayerBoost_assertFail_805898c8 (0x805898c8) ===
void PlayerBoost_assertFail_805898c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === PlayerPhysics_validate_8058a350 (0x8058a350) ===
void PlayerPhysics_validate_8058a350(int param_1)

{
  if (*(char *)(param_1 + 0x13a) == 0) {
    if ((*(char *)(param_1 + 0x96) != 0) || (*(char *)(param_1 + 0x3a) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x2a0) + 0x74);
    }
    phys_PlayerPhysics_8058a52c();
    FUN_segment_0__8058a80c(param_1);
    phys_PlayerPhysics_8058a958(param_1);
    if (*(char *)(param_1 + 0xbf) != 0) {
      (**(code **)(**(int **)(param_1 + 0x2a0) + 0x20))(*(int **)(param_1 + 0x2a0),0);
      (**(code **)(**(int **)(param_1 + 0x2a4) + 0x20))(*(int **)(param_1 + 0x2a4),0);
      (**(code **)(**(int **)(param_1 + 0x2a8) + 0x20))(*(int **)(param_1 + 0x2a8),0);
      *(undefined *)(param_1 + 0xc1) = 0;
      *(undefined *)(param_1 + 0xc2) = 0;
      *(undefined *)(param_1 + 0xc3) = 0;
    }
  }
  return;
}

// === phys_PlayerPhysics_8058a52c (0x8058a52c) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerPhysics_8058a52c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === phys_PlayerPhysics_8058a958 (0x8058a958) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerPhysics_8058a958(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerPhysics_validate_8058ad2c (0x8058ad2c) ===
void PlayerPhysics_validate_8058ad2c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    if (*(char *)(param_1 + 0x90) == 0) {
      if (*(char *)(param_1 + 0x43) == 0) {
        if (*(char *)(param_1 + 0x44) == 0) {
          PlayerSub10Bike_validate_805873a0
                    (param_1,*(undefined4 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,param_1 + 0x7bc,1)
          ;
          PlayerSub10Bike_validate_805873a0
                    (param_1,*(undefined4 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,param_1 + 0x7c8,1)
          ;
        }
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x52c),2,5,param_1 + 0x6f4,param_1 + 0x7bc,1);
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x52c),5,8,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
      if (*(char *)(param_1 + 0x44) == 0) {
        FUN_segment_0__80597f94(param_1);
      }
      else {
        FUN_segment_0__80597e80(param_1);
      }
    }
    else {
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
    }
  }
  else if (*(int *)(param_1 + 0x124) == 1) {
    if (*(char *)(param_1 + 0x90) == 0) {
      if (*(char *)(param_1 + 0x43) == 0) {
        if (*(char *)(param_1 + 0x44) == 0) {
          PlayerSub10Bike_validate_805873a0
                    (param_1,*(undefined4 *)(param_1 + 0x610),4,7,param_1 + 0x6f4,param_1 + 0x7c8,1)
          ;
        }
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x610),4,7,param_1 + 0x6f4,param_1 + 0x7c8,1);
      }
      if (*(char *)(param_1 + 0x44) == 0) {
        FUN_segment_0__80598294(param_1);
      }
      else {
        FUN_segment_0__805981a0(param_1);
      }
    }
    else {
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
    }
  }
  return;
}

// === phys_PlayerPhysics_8058afac (0x8058afac) ===
void phys_PlayerPhysics_8058afac(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = false;
  *(undefined *)(param_1 + 0xba) = 0;
  if ((*(char *)(param_1 + 0x15) != 0) && (*(short *)(param_1 + 0x16) == 0)) {
    bVar1 = true;
  }
  if (((*(char *)(param_1 + 0x129) != 0) || ((*(char *)(param_1 + 0x12a) != 0 && (bVar1)))) &&
     (*(uint *)(iRam00000000 + 0x20) < 0x7d1)) {
    iVar3 = FUN_segment_0__804225e8();
    if ((iVar3 < 1) ||
       (iVar3 = FUN_segment_0__8047dc70(*(undefined4 *)(param_1 + 0x118)),
       (*(ushort *)(iVar3 + 0x2c) & 1) == 0)) {
      if (!bVar1) {
        if ((*(char *)(param_1 + 0x15) == 0) ||
           (*(short *)(param_1 + 0x18) <= *(short *)(param_1 + 0x16))) {
          if (*(int *)(param_1 + 0x124) == 0) {
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,
                       param_1 + 0x7bc,1);
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
          }
          else if (*(int *)(param_1 + 0x124) == 1) {
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
          }
        }
        else if (*(int *)(param_1 + 0x124) == 0) {
          if (*(char *)(param_1 + 0x7b9) == 0) {
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,
                       param_1 + 0x7bc,1);
          }
          else {
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,
                       param_1 + 0x7bc,1);
            *(undefined *)(param_1 + 0xba) = 1;
          }
          if (*(char *)(param_1 + 0x7ba) == 0) {
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
          }
          else {
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
            *(undefined *)(param_1 + 0xba) = 1;
          }
        }
        else if (*(int *)(param_1 + 0x124) == 1) {
          if (*(char *)(param_1 + 0x7ba) == 0) {
            PlayerSub10Bike_validate_805873a0
                      (param_1,*(undefined4 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
          }
          else {
            phys_PlayerSub10Bike_805871ec
                      (param_1,*(undefined4 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,
                       param_1 + 0x7c8,1);
            *(undefined *)(param_1 + 0xba) = 1;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x124) == 0) {
      if (*(char *)(param_1 + 0x7b9) == 0) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x1a,0x1d,param_1 + 0x6f4,
                   param_1 + 0x7bc,1);
        *(undefined *)(param_1 + 0xba) = 1;
      }
      if (*(char *)(param_1 + 0x7ba) == 0) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x530),0x1d,0x20,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
        *(undefined *)(param_1 + 0xba) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x124) == 1) {
      if (*(char *)(param_1 + 0x7ba) == 0) {
        PlayerSub10Bike_validate_805873a0
                  (param_1,*(undefined4 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
      }
      else {
        phys_PlayerSub10Bike_805871ec
                  (param_1,*(undefined4 *)(param_1 + 0x614),0x16,0x19,param_1 + 0x6f4,
                   param_1 + 0x7c8,1);
        *(undefined *)(param_1 + 0xba) = 1;
      }
    }
    sVar2 = *(short *)(param_1 + 0x16) + 1;
    *(short *)(param_1 + 0x16) = sVar2;
    if (1000 < sVar2) {
      *(undefined2 *)(param_1 + 0x16) = 1000;
    }
  }
  return;
}

// === PlayerPhysics_validate_8058b360 (0x8058b360) ===
void PlayerPhysics_validate_8058b360(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  
  uVar4 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 0xc);
  uVar3 = uVar4 & 1;
  uVar4 = uVar4 >> 1 & 1;
  if (uVar3 != 0) {
    uVar3 = (uint)(*(char *)(param_1 + 0xb9) == 0);
  }
  if (uVar3 != 0) {
    uVar3 = (uint)(*(char *)(param_1 + 0x96) == 0);
  }
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x1fc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x1fc) + 0x74);
    }
  }
  else {
    piVar7 = *(int **)(param_1 + 0x1fc);
    if (piVar7 != (int *)0) {
      (**(code **)(*piVar7 + 0xc))(piVar7);
      (**(code **)(*piVar7 + 0x78))(piVar7,param_1 + 0xc4);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(*piVar7 + 0x70))(piVar7,param_1 + 0x72c);
      }
      (**(code **)(*piVar7 + 0x80))(piVar7);
    }
  }
  bVar1 = false;
  if (((uVar4 != 0) && (*(char *)(param_1 + 0xb9) == 0)) && (*(char *)(param_1 + 0x96) == 0))
  {
    bVar1 = true;
  }
  if ((bVar1) && (piVar7 = *(int **)(param_1 + 0x200), piVar7 != (int *)0)) {
    (**(code **)(*piVar7 + 0xc))(piVar7);
    (**(code **)(*piVar7 + 0x78))(piVar7,param_1 + 0xc4);
    if (*(char *)(param_1 + 0xb0) != 0) {
      (**(code **)(*piVar7 + 0x70))(piVar7,param_1 + 0x72c);
    }
    (**(code **)(*piVar7 + 0x80))(piVar7);
  }
  bVar2 = false;
  if ((!bVar1) && (*(char *)(param_1 + 0x89) != 0)) {
    bVar2 = true;
  }
  bVar5 = false;
  if ((*(char *)(param_1 + 0x98) != 0) && (uVar4 != 0)) {
    bVar5 = true;
  }
  if ((bVar2) || (bVar5)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x8c);
  if (iVar6 != -1) {
    (**(code **)(**(int **)(param_1 + 0x200) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x200) + 0x78))(*(int **)(param_1 + 0x200),param_1 + 0xc4);
    (**(code **)(**(int **)(param_1 + 0x200) + 0x50))
              (*(int **)(param_1 + 0x200),0xff,0xff,0xff,iVar6 * -0x19 + 0xffU & 0xff);
    if (*(char *)(param_1 + 0xb0) != 0) {
      (**(code **)(**(int **)(param_1 + 0x200) + 0x70))(*(int **)(param_1 + 0x200),param_1 + 0x72c);
    }
    (**(code **)(**(int **)(param_1 + 0x200) + 0x80))();
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  if (9 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x200) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x200) + 0x74);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  }
  *(bool *)(param_1 + 0x89) = bVar1;
  return;
}

// === PlayerPhysics_validate_8058b710 (0x8058b710) ===
void PlayerPhysics_validate_8058b710(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar5;
  int iVar4;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  
  *(undefined *)(param_1 + 0x3a) = 0;
  if ((*(char *)(param_1 + 0x2c) != 0) &&
     (iVar3 = FUN_segment_0__804225e8(iRam00000000), -0x50 < iVar3)) {
    *(undefined *)(param_1 + 0x3a) = 1;
  }
  bVar6 = false;
  *(byte *)(param_1 + 0x3b) =
       (byte)(((uint)*(ushort *)(param_1 + 0x1a) <<
              LZCOUNT((uint)*(ushort *)(param_1 + 0x1a) ^ *(uint *)(param_1 + 0x1c))) >> 0x1f);
  if (((*(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 4) & 0x100) != 0) &&
     (*(char *)(param_1 + 0x10e) == 0)) {
    bVar6 = true;
  }
  *(bool *)(param_1 + 0x10e) = bVar6;
  bVar5 = false;
  if ((bVar6) && (*(char *)(param_1 + 0x3b) == 0)) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((*(char *)(param_1 + 0x3a) == 0) && (*(char *)(param_1 + 0x3b) == 0)) {
    bVar6 = true;
  }
  bVar7 = false;
  if ((*(char *)(param_1 + 0xbc) != 0) && (*(char *)(param_1 + 0xb9) != 0)) {
    bVar7 = true;
  }
  bVar8 = false;
  if ((*(int *)(iRam00000000 + 0xb70) == 0xb) && (*(int *)(iRam00000000 + 0xb74) == 0xc)) {
    bVar8 = true;
  }
  bVar2 = true;
  bVar1 = false;
  if (((((*(char *)(param_1 + 0xbb) != 0) || (bVar7)) || (bVar8)) ||
      (*(char *)(param_1 + 0x794) != 0)) ||
     ((*(char *)(param_1 + 0x156) != 0 && (*(char *)(param_1 + 0xc) != 0)))) {
    bVar1 = true;
  }
  if ((!bVar1) && (*(int *)(param_1 + 0x130) != 1)) {
    bVar2 = false;
  }
  bVar9 = true;
  bVar1 = false;
  if ((((*(char *)(param_1 + 0xbb) != 0) || (bVar7)) || (bVar8)) ||
     (*(char *)(param_1 + 0x794) != 0)) {
    bVar1 = true;
  }
  if ((!bVar1) && (*(int *)(param_1 + 0x130) != 1)) {
    bVar9 = false;
  }
  if ((!bVar5) || (bVar9)) {
    if ((bVar6) && ((*(short *)(param_1 + 0xad0) == 0 && (!bVar2)))) {
      FUN_segment_0__80593960(param_1);
    }
  }
  else {
    iVar3 = param_1 + 0x10;
    iVar10 = 4;
    do {
      if (*(int **)(iVar3 + 0x2d8) != (int *)0) {
        iVar4 = iVar10 >> 0x1f;
        iVar4 = param_1 + ((iVar4 * 4 | (uint)(iVar10 * 0x40000000 + iVar4) >> 0x1e) - iVar4);
        if ((*(char *)(iVar4 + 0x848) != 0) && (*(char *)(iVar4 + 0x96d) == 0)) {
          (**(code **)(**(int **)(iVar3 + 0x2d8) + 0xc))();
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < 8);
  }
  if ((*(short *)(param_1 + 0xad0) == 1) || (bVar2)) {
    iVar10 = 0;
    iVar3 = param_1;
    do {
      if ((*(int **)(iVar3 + 0x2d8) != (int *)0) &&
         (iVar4 = iVar10 >> 0x1f,
         *(char *)(param_1 + ((iVar4 * 4 | (uint)(iVar10 * 0x40000000 + iVar4) >> 0x1e) - iVar4) +
                  0x848) != 0)) {
        (**(code **)(**(int **)(iVar3 + 0x2d8) + 0x18))();
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < 4);
  }
  iVar10 = param_1 + 0x10;
  iVar3 = 4;
  do {
    if (*(int *)(iVar10 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(iVar10 + 0x2d8) + 0x74);
    }
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar3 < 8);
  iVar10 = param_1 + 0x20;
  iVar3 = 8;
  do {
    if (*(int *)(iVar10 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(iVar10 + 0x2d8) + 0x74);
    }
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar3 < 0xc);
  iVar10 = param_1 + 0x30;
  iVar3 = 0xc;
  do {
    if (*(int *)(iVar10 + 0x2d8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(iVar10 + 0x2d8) + 0x74);
    }
    iVar3 = iVar3 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar3 < 0x10);
  phys_PlayerPhysics_8058bc58(param_1);
  return;
}

// === phys_PlayerPhysics_8058bc58 (0x8058bc58) ===
void phys_PlayerPhysics_8058bc58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x3b) == 0) {
    iVar2 = param_1 + 0x30;
    iVar3 = 0xc;
    do {
      iVar1 = iVar3 >> 0x1f;
      if (*(char *)(param_1 + ((iVar1 * 4 | (uint)(iVar3 * 0x40000000 + iVar1) >> 0x1e) - iVar1) +
                   0x848) != 0) {
        (**(code **)(**(int **)(iVar2 + 0x2d8) + 0x14))();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x10);
    *(undefined4 *)(param_1 + 0x1c) = 1000;
  }
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (((*(int **)(iVar2 + 0x2d8) != (int *)0) && (*(char *)(param_1 + iVar3 + 0x848) != 0))
       && (*(char *)(param_1 + iVar3 + 0x96d) != 0)) {
      (**(code **)(**(int **)(iVar2 + 0x2d8) + 0x10))();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 4);
  iVar3 = param_1 + 0x10;
  iVar2 = 4;
  do {
    if (((*(int **)(iVar3 + 0x2d8) != (int *)0) && (*(char *)(param_1 + iVar2 + 0x848) != 0))
       && (*(char *)(param_1 + iVar2 + 0x96d) != 0)) {
      (**(code **)(**(int **)(iVar3 + 0x2d8) + 0x10))();
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 8);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if ((*(int **)(iVar2 + 0x2d8) != (int *)0) && (*(char *)(param_1 + 0x3a) != 0)) {
      (**(code **)(**(int **)(iVar2 + 0x2d8) + 0x18))();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 4);
  return;
}

// === PlayerPhysics_validate_8058bdd4 (0x8058bdd4) ===
void PlayerPhysics_validate_8058bdd4(int param_1)

{
  int *piVar1;
  
  if ((((*(char *)(param_1 + 7) == 0) && (*(char *)((int)g_Ram_float + 0x10) == 0)) &&
      (*(char *)(param_1 + 0x129) != 0)) && (*(char *)(param_1 + 0xb9) == 0)) {
    if (*(int *)(param_1 + 0x284) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x284) + 0x74);
    }
    piVar1 = *(int **)(param_1 + 0x284);
    if ((piVar1 != (int *)0) &&
       ((**(code **)(*piVar1 + 0xc))(piVar1), *(char *)(param_1 + 0xb0) != 0)) {
      (**(code **)(*piVar1 + 0x70))(piVar1,param_1 + 0x72c);
    }
    piVar1 = (int *)FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
    (**(code **)(*piVar1 + 0xe0))((double)g_Ram_float,piVar1,0x198);
  }
  return;
}

// === PlayerPhysics_validate_8058bf04 (0x8058bf04) ===
void PlayerPhysics_validate_8058bf04(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  undefined auStack_88 [12];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  if (*(int *)(param_1 + 0x284) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x284) + 0x74);
  }
  bVar1 = true;
  uVar2 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 8);
  if (((uVar2 & 0x40) == 0) && ((uVar2 & 0x8000) == 0)) {
    bVar1 = false;
  }
  if (bVar1) {
    local_90 = -*(float *)(param_1 + 0x74);
    local_94 = uRam00000000;
    local_8c = uRam00000000;
    FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_94,auStack_88);
    local_40 = *(undefined4 *)(param_1 + 0x6f4);
    local_3c = *(undefined4 *)(param_1 + 0x6f8);
    local_38 = *(undefined4 *)(param_1 + 0x6fc);
    local_34 = *(undefined4 *)(param_1 + 0x700);
    local_30 = *(undefined4 *)(param_1 + 0x704);
    local_2c = *(undefined4 *)(param_1 + 0x708);
    local_28 = *(undefined4 *)(param_1 + 0x70c);
    local_24 = *(undefined4 *)(param_1 + 0x710);
    local_20 = *(undefined4 *)(param_1 + 0x714);
    local_1c = *(undefined4 *)(param_1 + 0x718);
    local_18 = *(undefined4 *)(param_1 + 0x71c);
    local_14 = *(undefined4 *)(param_1 + 0x720);
    FUN_segment_0__80404464(&local_7c,param_1 + 0x6d0,auStack_88);
    local_34 = local_7c;
    local_24 = local_78;
    local_14 = local_74;
    piVar3 = *(int **)(param_1 + 0x288);
    if (piVar3 != (int *)0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      (**(code **)(*piVar3 + 0x78))(piVar3,&local_40);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(*piVar3 + 0x70))(piVar3,param_1 + 0x72c);
      }
      (**(code **)(*piVar3 + 0x80))(piVar3);
    }
  }
  else {
    local_b4 = -*(float *)(param_1 + 0x74);
    local_b8 = uRam00000000;
    local_b0 = uRam00000000;
    FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_b8,auStack_ac);
    local_70 = *(undefined4 *)(param_1 + 0x6f4);
    local_6c = *(undefined4 *)(param_1 + 0x6f8);
    local_68 = *(undefined4 *)(param_1 + 0x6fc);
    local_64 = *(undefined4 *)(param_1 + 0x700);
    local_60 = *(undefined4 *)(param_1 + 0x704);
    local_5c = *(undefined4 *)(param_1 + 0x708);
    local_58 = *(undefined4 *)(param_1 + 0x70c);
    local_54 = *(undefined4 *)(param_1 + 0x710);
    local_50 = *(undefined4 *)(param_1 + 0x714);
    local_4c = *(undefined4 *)(param_1 + 0x718);
    local_48 = *(undefined4 *)(param_1 + 0x71c);
    local_44 = *(undefined4 *)(param_1 + 0x720);
    FUN_segment_0__80404464(&local_a0,param_1 + 0x6d0,auStack_ac);
    local_64 = local_a0;
    local_54 = local_9c;
    local_44 = local_98;
    if (*(int *)(param_1 + 0x288) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x288) + 0x74);
    }
  }
  return;
}

// === PlayerPhysics_calc_8058c260 (0x8058c260) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerPhysics_calc_8058c260(int param_1)

{
  float fVar1;
  float fVar2;
  undefined auStack_28 [16];
  undefined4 local_18;
  uint uStack_14;
  
  if ((((*(char *)(param_1 + 0x96) == 0) && (0 < (int)*(uint *)(param_1 + 0x7b0))) &&
      (fRam00000028 < *(float *)(param_1 + 0x6e8))) && ('\x1e' < *(char *)(param_1 + 0x7b4))) {
    if (*(char *)(param_1 + 0x129) != 0) {
      uStack_14 = *(uint *)(param_1 + 0x7b0) ^ 0x80000000;
      local_18 = 0x43300000;
      FUN_segment_0__80595ebc
                ((double)(float)((double)CONCAT44(0x43300000,uStack_14) - _DAT_00000030),auStack_28,
                 param_1 + 0x7a4);
      FUN_segment_0__80596204(param_1,auStack_28);
    }
    if (*(char *)(param_1 + 0x24) == 0) {
      FUN_segment_0__8047f0c8(*(undefined4 *)(param_1 + 0x118));
    }
    fVar1 = *(float *)(param_1 + 0x6f0);
    fVar2 = *(float *)(param_1 + 0x6e8);
    if ((fVar2 < fVar1) && (fVar1 = fVar2, fVar2 <= fRam00000028)) {
      fVar1 = fRam00000028;
    }
    FUN_segment_0__8047dc98
              ((double)(fRam0000002c +
                       (fVar1 - fRam00000028) *
                       (fRam00000004 / (*(float *)(param_1 + 0x6f0) - fRam00000028))),
               *(undefined4 *)(param_1 + 0x118),1,1);
    FUN_segment_0__8047e02c(*(undefined4 *)(param_1 + 0x118),0x11);
    FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
    FUN_segment_0__805f86c8();
    *(undefined *)(param_1 + 0x7b4) = 0;
  }
  return;
}

// === phys_PlayerPhysics_8058c408 (0x8058c408) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_PlayerPhysics_8058c408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === PlayerPhysics_validate_8058cb30 (0x8058cb30) ===
void PlayerPhysics_validate_8058cb30(int param_1)

{
  if (*(char *)(param_1 + 0xad) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
}

// === phys_PlayerPhysics_8058ccd4 (0x8058ccd4) ===
void phys_PlayerPhysics_8058ccd4(int param_1)

{
  if ((*(char *)(param_1 + 0x46) == 0) || (*(char *)(param_1 + 4) != 0)) {
    FUN_segment_0__805988c8(param_1);
  }
  else {
    FUN_segment_0__805986ec();
  }
  if (*(char *)(param_1 + 4) != 0) {
    FUN_segment_0__805988c8(param_1);
  }
  return;
}

// === PlayerPhysics_validate_8058cd38 (0x8058cd38) ===
undefined PlayerPhysics_validate_8058cd38(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined auStack_cc [8];
  undefined4 local_c4;
  undefined auStack_c0 [4];
  float local_bc;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined auStack_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(char *)(param_1 + 0x7d) != 0) && (*(char *)(param_1 + 0x7e) == 0)) {
    phys_PlayerSub10_Misc_8058550c(param_1,1);
  }
  if (*(char *)(param_1 + 0x7d) != 0) {
    if (*(int *)(param_1 + 0x724) != -1) {
      WheelPhysics_assertFail_8058f908(param_1);
    }
    if (*(char *)(param_1 + 0xad) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x27c) + 0x74);
  }
  if (((*(char *)(param_1 + 0x7d) == 0) && (*(char *)(param_1 + 0x7e) != 0)) &&
     (*(char *)(param_1 + 4) == 0)) {
    piVar2 = *(int **)(param_1 + 0x20c);
    if ((piVar2 != (int *)0) &&
       ((**(code **)(*piVar2 + 0xc))(piVar2), *(char *)(param_1 + 0xb0) != 0)) {
      (**(code **)(*piVar2 + 0x70))(piVar2,param_1 + 0x72c);
    }
    *(undefined2 *)(param_1 + 0x99c) = 0xffff;
  }
  if ((*(char *)(param_1 + 0x7d) == 0) || (*(char *)(param_1 + 4) != 0)) {
    FUN_segment_0__80598c88(param_1);
  }
  local_50 = *(undefined4 *)(param_1 + 0x6f4);
  local_4c = *(undefined4 *)(param_1 + 0x6f8);
  local_48 = *(undefined4 *)(param_1 + 0x6fc);
  local_44 = *(undefined4 *)(param_1 + 0x700);
  local_40 = *(undefined4 *)(param_1 + 0x704);
  local_3c = *(undefined4 *)(param_1 + 0x708);
  local_38 = *(undefined4 *)(param_1 + 0x70c);
  local_34 = *(float *)(param_1 + 0x710);
  local_30 = *(undefined4 *)(param_1 + 0x714);
  local_2c = *(undefined4 *)(param_1 + 0x718);
  local_28 = *(undefined4 *)(param_1 + 0x71c);
  local_24 = *(undefined4 *)(param_1 + 0x720);
  FUN_segment_0__804270d8(&local_90,param_1 + 0x6f4,2);
  local_50 = local_90;
  local_40 = local_8c;
  local_30 = local_88;
  FUN_segment_0__804270d8(auStack_9c,param_1 + 0x6f4,0);
  FUN_segment_0__80404400(&local_a8,auStack_9c);
  local_48 = local_a8;
  local_38 = local_a4;
  local_28 = local_a0;
  FUN_segment_0__804270d8(local_b4,&local_50,3);
  FUN_segment_0__804270d8(auStack_c0,&local_50,3);
  FUN_segment_0__804270d8(auStack_cc,&local_50,3);
  local_34 = *(float *)(param_1 + 0xb4) + local_bc;
  local_44 = local_b4[0];
  local_24 = local_c4;
  if (*(int *)(param_1 + 0x20c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x20c) + 0x74);
  }
  *(undefined *)(param_1 + 0x7e) = *(undefined *)(param_1 + 0x7d);
  if (*(short *)(param_1 + 0x99c) != -1) {
    sVar1 = *(short *)(param_1 + 0x99c) + 1;
    *(short *)(param_1 + 0x99c) = sVar1;
    if (*(short *)(param_1 + 0x99e) < sVar1) {
      *(short *)(param_1 + 0x99c) = *(short *)(param_1 + 0x99e);
    }
  }
  return *(undefined *)(param_1 + 0x7d);
}

// === phys_PlayerPhysics_8058d754 (0x8058d754) ===
bool phys_PlayerPhysics_8058d754(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 0xc) >> 0x13 & 1;
  *(char *)(param_1 + 0xf5) = (char)uVar1;
  if (uVar1 != 0) {
    phys_PlayerSub10_Misc_8058550c(param_1,1);
    *(undefined *)(param_1 + 4) = 1;
  }
  return uVar1 != 0;
}

// === PlayerPhysics_validate_8058d7bc (0x8058d7bc) ===
void PlayerPhysics_validate_8058d7bc(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x96) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0x2b2;
    *(undefined4 *)(param_1 + 0x50) = 0x2b2;
  }
  iVar1 = 0x46 << LZCOUNT(*(uint *)(param_1 + 0x4c) ^ 0x46);
  uVar6 = *(uint *)(*(int *)(**(int **)(param_1 + 0x118) + 4) + 0xc) >> 7 & 1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0x21c;
  }
  bVar4 = false;
  if (((int)((uint)*(byte *)(param_1 + 0x12e) % 6 + 1) <= (int)*(uint *)(param_1 + 0x4c)) &&
     (*(uint *)(param_1 + 0x4c) < 0x46)) {
    bVar4 = true;
  }
  if ((bVar4) && (*(char *)(param_1 + 4) == 0)) {
    piVar5 = *(int **)(param_1 + 0x210);
    if (piVar5 != (int *)0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      (**(code **)(*piVar5 + 0x74))(piVar5,param_1 + 0x6d0);
      (**(code **)(*piVar5 + 0x80))(piVar5);
    }
    *(undefined *)(param_1 + 9) = 1;
  }
  else if (*(int *)(param_1 + 0x210) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x210) + 0x74);
  }
  iVar2 = 0x46 << LZCOUNT(*(uint *)(param_1 + 0x50) ^ 0x46);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0x2b2;
  }
  bVar4 = false;
  if (((int)((uint)*(byte *)(param_1 + 0x12e) % 6 + 1) <= (int)*(uint *)(param_1 + 0x50)) &&
     (*(uint *)(param_1 + 0x50) < 0x46)) {
    bVar4 = true;
  }
  if ((bVar4) && (*(char *)(param_1 + 4) == 0)) {
    piVar5 = *(int **)(param_1 + 0x214);
    if (piVar5 != (int *)0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      (**(code **)(*piVar5 + 0x74))(piVar5,param_1 + 0x6d0);
      (**(code **)(*piVar5 + 0x80))(piVar5);
    }
    *(undefined *)(param_1 + 9) = 1;
  }
  else if (*(char *)(param_1 + 0x129) == 0) {
    if (*(int *)(param_1 + 0x214) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x214) + 0x74);
    }
  }
  else if (*(int *)(param_1 + 0x214) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x214) + 0x74);
  }
  bVar3 = false;
  bVar4 = false;
  if ((uVar6 != 0) && (-1 < iVar1)) {
    bVar4 = true;
  }
  if ((bVar4) && (*(int *)(param_1 + 0x50) == 0x21c)) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((*(byte *)(param_1 + 0x12e) + 0x47 <= *(uint *)(param_1 + 0x4c)) &&
     ((int)*(uint *)(param_1 + 0x4c) < 0x2b2)) {
    bVar4 = true;
  }
  if (((bVar3) && (bVar4)) && (*(char *)(param_1 + 4) == 0)) {
    FUN_segment_0__805992e4(param_1);
  }
  else {
    FUN_segment_0__805994e4(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (0x2b2 < iVar1) {
    *(undefined4 *)(param_1 + 0x4c) = 0x2b2;
  }
  bVar3 = false;
  bVar4 = false;
  if ((uVar6 != 0) && (-1 < iVar2)) {
    bVar4 = true;
  }
  if ((bVar4) && (*(int *)(param_1 + 0x4c) == 0x2b2)) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((*(byte *)(param_1 + 0x12e) + 0x47 <= *(uint *)(param_1 + 0x50)) &&
     ((int)*(uint *)(param_1 + 0x50) < 0x21c)) {
    bVar4 = true;
  }
  if (((bVar3) && (bVar4)) && (*(char *)(param_1 + 4) == 0)) {
    FUN_segment_0__80599760(param_1);
  }
  else {
    FUN_segment_0__80599960(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar1;
  if (0x21c < iVar1) {
    *(undefined4 *)(param_1 + 0x50) = 0x21c;
  }
  if (*(char *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x210) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(param_1 + 0x210) + 0x74);
    }
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
    FUN_segment_0__805994e4(param_1);
    FUN_segment_0__80599960(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(param_1 + 0x210) + 0x74);
}

// === PlayerPhysics_validate_8058df1c (0x8058df1c) ===
void PlayerPhysics_validate_8058df1c(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  
  bVar4 = false;
  bVar1 = true;
  bVar2 = *(char *)(param_1 + 0x96) == 0;
  if ((bVar2) && (*(char *)(param_1 + 0x7a) != 0)) {
    bVar4 = true;
  }
  if (!bVar4) {
    bVar4 = false;
    if ((bVar2) && (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100))) {
      bVar4 = true;
    }
    if (!bVar4) {
      bVar1 = false;
    }
  }
  if ((*(char *)(param_1 + 0x14b) != 0) &&
     (((bVar1 = false, bVar2 && (*(char *)(param_1 + 0x7a) != 0)) ||
      ((bVar2 && ((*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100) &&
                  (*(char *)(param_1 + 0x10c) != 0)))))))) {
    bVar1 = true;
  }
  iVar3 = FUN_segment_0__8047e620(*(undefined4 *)(param_1 + 0x118));
  if ((iVar3 == 9) || (bVar1)) {
    piVar5 = *(int **)(param_1 + 0x224);
    if (piVar5 != (int *)0) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      (**(code **)(*piVar5 + 0x74))(piVar5,param_1 + 0x6d0);
      if (*(char *)(param_1 + 0xb0) != 0) {
        (**(code **)(*piVar5 + 0x70))(piVar5,param_1 + 0x72c);
      }
      (**(code **)(*piVar5 + 0x80))(piVar5);
    }
  }
  else if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x224) + 0x74);
  }
  return;
}

// === WheelPhysics_validate_8058e12c (0x8058e12c) ===
/* WARNING: Removing unreachable block (ram,0x8058e294) */
/* WARNING: Removing unreachable block (ram,0x8058e338) */

void WheelPhysics_validate_8058e12c(int param_1)

{
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined auStack_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  
  FUN_segment_0__8059a148();
  FUN_segment_0__8059a39c(param_1);
  local_64 = -*(float *)(param_1 + 0x74);
  local_68 = uRam00000000;
  local_60 = uRam00000000;
  FUN_segment_0__805a3d20(param_1 + 0x6f4,&local_68,auStack_5c);
  local_40 = *(undefined4 *)(param_1 + 0x6f4);
  local_3c = *(undefined4 *)(param_1 + 0x6f8);
  local_38 = *(undefined4 *)(param_1 + 0x6fc);
  local_34 = *(undefined4 *)(param_1 + 0x700);
  local_30 = *(undefined4 *)(param_1 + 0x704);
  local_2c = *(undefined4 *)(param_1 + 0x708);
  local_28 = *(undefined4 *)(param_1 + 0x70c);
  local_24 = *(undefined4 *)(param_1 + 0x710);
  local_20 = *(undefined4 *)(param_1 + 0x714);
  local_1c = *(undefined4 *)(param_1 + 0x718);
  local_18 = *(undefined4 *)(param_1 + 0x71c);
  local_14 = *(undefined4 *)(param_1 + 0x720);
  FUN_segment_0__80404464(&local_50,param_1 + 0x6d0,auStack_5c);
  local_34 = local_50;
  local_24 = local_4c;
  local_14 = local_48;
  if (*(int *)(param_1 + 0x23c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x23c) + 0x74);
  }
  if (*(char *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x238) + 0x74);
  }
  *(undefined *)(param_1 + 0x68) = 0;
  return;
}

// === WheelPhysics_validate_8058e4c4 (0x8058e4c4) ===
void WheelPhysics_validate_8058e4c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined auStack_48 [60];
  
  if (*(char *)(param_1 + 0x14e) != 0) {
    bVar1 = true;
    if (*(char *)(param_1 + 0x14b) != 0) {
      bVar1 = false;
      if (*(float *)(param_1 + 0x6e0) < fRam00000044) {
        bVar1 = true;
      }
    }
    if ((((((int)*(uint *)(param_1 + 100) >> 0x1f) - ((int)*(uint *)(param_1 + 0x60) >> 0x1f)) +
          (uint)(*(uint *)(param_1 + 0x60) <= *(uint *)(param_1 + 100)) != 0) &&
        (*(float *)(param_1 + 0x6d4) < *(float *)(param_1 + 0x70) - fRam00000040)) && (bVar1)) {
      piVar2 = *(int **)(param_1 + 0x228);
      if ((piVar2 != (int *)0) &&
         ((**(code **)(*piVar2 + 0xc))(piVar2), *(char *)(param_1 + 0xb0) != 0)) {
        (**(code **)(*piVar2 + 0x70))(piVar2,param_1 + 0x72c);
      }
      piVar2 = (int *)FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
      (**(code **)(*piVar2 + 0xe4))((double)g_Ram_float,piVar2,0x2f8);
      if (*(char *)(param_1 + 0x14b) != 0) {
        *(undefined *)(param_1 + 0x10c) = 1;
      }
    }
    if (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100)) {
      local_58 = uRam00000048;
      local_54 = g_Ram_float;
      local_50 = g_Ram_float;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_48,&local_58);
    }
    if ((*(char *)(param_1 + 0x69) != 0) ||
       (((*(uint *)(**(int **)((int)g_Ram_float + 0xc) + 0x38) & 2) != 0 &&
        (*(char *)(param_1 + 0x14b) != 0)))) {
      if (*(int *)(param_1 + 0x228) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(int *)(param_1 + 0x228) + 0x74);
      }
      *(float *)(param_1 + 0x70) = g_Ram_float;
    }
  }
  return;
}

// === WheelPhysics_validate_8058e774 (0x8058e774) ===
void WheelPhysics_validate_8058e774(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined auStack_88 [24];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (((*(char *)(param_1 + 0x129) != 0) &&
      ((*(uint *)(*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uint)*(byte *)(param_1 + 0x12e) * 4)
                 + 0x38) & 2) != 0)) &&
     ((*(char *)(param_1 + 0x13c) != 0 || (*(char *)(param_1 + 0x156) != 0)))) {
    if (*(char *)(param_1 + 0x14a) == 0) {
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
        *(undefined *)(param_1 + 0x79) = 0;
      }
      if (*(char *)(param_1 + 0x7a) != 0) {
        *(undefined *)(param_1 + 0x7a) = 0;
      }
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
      if (*(char *)(param_1 + 0x14b) != 0) {
        *(undefined *)(param_1 + 0x10c) = 0;
      }
      if (*(char *)(param_1 + 0x7b) != 0) {
        if (((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
           (*(char *)(param_1 + 299) == 0)) {
          piVar2 = *(int **)(param_1 + 0x25c);
          if ((piVar2 != (int *)0) &&
             ((**(code **)(*piVar2 + 0xc))(piVar2), *(char *)(param_1 + 0xb0) != 0)) {
            (**(code **)(*piVar2 + 0x70))(piVar2,param_1 + 0x72c);
          }
          piVar2 = (int *)FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
          (**(code **)(*piVar2 + 0xe4))((double)g_Ram_float,piVar2,0x350);
          FUN_segment_0__8047e02c(*(undefined4 *)(param_1 + 0x118),0x1a);
        }
        (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(*(int **)(param_1 + 0x160),0);
        *(undefined *)(param_1 + 0x7b) = 0;
        FUN_segment_0__8047f264(*(undefined4 *)(param_1 + 0x118));
        *(undefined *)(param_1 + 0x794) = 0;
      }
      if (*(char *)(param_1 + 0x7c) != 0) {
        *(undefined *)(param_1 + 0x7c) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x7a) != 0) {
        *(undefined *)(param_1 + 0x7a) = 0;
      }
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
      if (*(char *)(param_1 + 0x14b) != 0) {
        *(undefined *)(param_1 + 0x10c) = 0;
      }
      if (*(char *)(param_1 + 0x7b) != 0) {
        if (((*(char *)((int)g_Ram_float + 0x10) == 0) && (*(char *)(param_1 + 4) == 0)) &&
           (*(char *)(param_1 + 299) == 0)) {
          piVar2 = *(int **)(param_1 + 0x25c);
          if ((piVar2 != (int *)0) &&
             ((**(code **)(*piVar2 + 0xc))(piVar2), *(char *)(param_1 + 0xb0) != 0)) {
            (**(code **)(*piVar2 + 0x70))(piVar2,param_1 + 0x72c);
          }
          piVar2 = (int *)FUN_segment_0__8047e010(*(undefined4 *)(param_1 + 0x118));
          (**(code **)(*piVar2 + 0xe4))((double)g_Ram_float,piVar2,0x350);
          FUN_segment_0__8047e02c(*(undefined4 *)(param_1 + 0x118),0x1a);
        }
        (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(*(int **)(param_1 + 0x160),0);
        *(undefined *)(param_1 + 0x7b) = 0;
        FUN_segment_0__8047f264(*(undefined4 *)(param_1 + 0x118));
        *(undefined *)(param_1 + 0x794) = 0;
      }
      if (*(char *)(param_1 + 0x7c) != 0) {
        *(undefined *)(param_1 + 0x7c) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x69) != 0) || (*(char *)(param_1 + 0x6a) != 0)) {
    if ((*(char *)(param_1 + 0x79) != 0) &&
       ((*(char *)(param_1 + 0x7b) == 0 && (*(char *)(param_1 + 0x7c) == 0)))) {
      if (*(char *)(param_1 + 4) == 0) {
        piVar2 = *(int **)(param_1 + 0x250);
        if (piVar2 != (int *)0) {
          (**(code **)(*piVar2 + 0xc))(piVar2);
          (**(code **)(*piVar2 + 0x74))(piVar2,param_1 + 0x6d0);
          if (*(char *)(param_1 + 0xb0) != 0) {
            (**(code **)(*piVar2 + 0x70))(piVar2,param_1 + 0x72c);
          }
          (**(code **)(*piVar2 + 0x80))(piVar2);
        }
        *(undefined *)(param_1 + 9) = 1;
      }
      else if (*(char *)(param_1 + 0x129) == 0) {
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
    if (*(char *)(param_1 + 0x7b) != 0) {
      (**(code **)(**(int **)(param_1 + 0x160) + 0xc))(*(int **)(param_1 + 0x160),1);
      iVar1 = *(int *)(param_1 + 0x6cc);
      local_70 = *(undefined4 *)(param_1 + 0x6f4);
      *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(iVar1 + 0x30);
      local_6c = *(undefined4 *)(param_1 + 0x6f8);
      *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(iVar1 + 0x44);
      local_68 = *(undefined4 *)(param_1 + 0x6fc);
      local_60 = *(undefined4 *)(param_1 + 0x704);
      local_5c = *(undefined4 *)(param_1 + 0x708);
      local_58 = *(undefined4 *)(param_1 + 0x70c);
      local_50 = *(undefined4 *)(param_1 + 0x714);
      local_4c = *(undefined4 *)(param_1 + 0x718);
      local_48 = *(undefined4 *)(param_1 + 0x71c);
      local_64 = g_Ram_float;
      local_54 = uRam00000004;
      local_44 = uRam00000008;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_88,&local_70,param_1 + 0x788);
    }
  }
  return;
}

// === phys_WheelPhysics_8058f034 (0x8058f034) ===
void phys_WheelPhysics_8058f034(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [20];
  
  if (((*(char *)(param_1 + 0x152) != 0) && (*(char *)(iRam00000000 + 0x25) == '\x01')) &&
     (iVar3 = *(int *)(param_1 + 0x724), iVar3 != -1)) {
    if (*(char *)(param_1 + 0x138) == 0) {
      sVar1 = FUN_segment_0__80406434(iRam00000000,param_1 + 0x6d0,0xffffffff,1);
      if (sVar1 == -1) {
        FUN_segment_0__8059cca0(param_1);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x724);
        bVar2 = false;
        if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
          bVar2 = true;
        }
        if (!bVar2) {
          (**(code **)(iRam00000000 + 0x18))(0);
        }
        (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(&local_38);
        *(undefined4 *)(param_1 + 0x9c) = local_38;
        *(undefined4 *)(param_1 + 0xa0) = local_34;
        *(undefined4 *)(param_1 + 0xa4) = local_30;
        (**(code **)(**(int **)(param_1 + 0x2d0) + 0x10))();
      }
    }
    else {
      bVar2 = false;
      if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
        bVar2 = true;
      }
      if (!bVar2) {
        (**(code **)(iRam00000000 + 0x18))(0);
      }
      (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(auStack_20);
      sVar1 = FUN_segment_0__80406434(iRam00000000,auStack_20,0xffffffff,1);
      if (sVar1 == -1) {
        FUN_segment_0__8059cca0(param_1);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x724);
        bVar2 = false;
        if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
          bVar2 = true;
        }
        if (!bVar2) {
          (**(code **)(iRam00000000 + 0x18))(0);
        }
        (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(&local_2c);
        *(undefined4 *)(param_1 + 0x9c) = local_2c;
        *(undefined4 *)(param_1 + 0xa0) = local_28;
        *(undefined4 *)(param_1 + 0xa4) = local_24;
        (**(code **)(**(int **)(param_1 + 0x2d0) + 0x10))();
      }
    }
  }
  return;
}

// === phys_WheelPhysics_8058f2a8 (0x8058f2a8) ===
void phys_WheelPhysics_8058f2a8(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined auStack_20 [20];
  
  if (((*(char *)(param_1 + 0x153) != 0) && (*(char *)(iRam00000000 + 0x25) == '\x01')) &&
     (iVar3 = *(int *)(param_1 + 0x724), iVar3 != -1)) {
    if (*(char *)(param_1 + 0x138) == 0) {
      sVar1 = FUN_segment_0__80406434(iRam00000000,param_1 + 0x6d0,0xffffffff,1);
      if ((sVar1 == -1) || (*(char *)(param_1 + 0xa8) != 0)) {
        iVar3 = *(int *)(param_1 + 0x724);
        bVar2 = false;
        if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
          bVar2 = true;
        }
        if (!bVar2) {
          (**(code **)(iRam00000000 + 0x18))(0);
        }
        (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(&local_38);
        *(undefined4 *)(param_1 + 0x9c) = local_38;
        *(undefined4 *)(param_1 + 0xa0) = local_34;
        *(undefined4 *)(param_1 + 0xa4) = local_30;
        (**(code **)(**(int **)(param_1 + 0x2d4) + 0x10))();
      }
      else {
        FUN_segment_0__8059d1fc(param_1);
      }
    }
    else {
      bVar2 = false;
      if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
        bVar2 = true;
      }
      if (!bVar2) {
        (**(code **)(iRam00000000 + 0x18))(0);
      }
      (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(auStack_20);
      sVar1 = FUN_segment_0__80406434(iRam00000000,auStack_20,0xffffffff,1);
      if (sVar1 == -1) {
        iVar3 = *(int *)(param_1 + 0x724);
        bVar2 = false;
        if ((-1 < iVar3) && (iVar3 < iRam00000004)) {
          bVar2 = true;
        }
        if (!bVar2) {
          (**(code **)(iRam00000000 + 0x18))(0);
        }
        (**(code **)(**(int **)(*(int *)(iRam00000008 + iVar3 * 4) + 0x6c) + 0x20))(&local_2c);
        *(undefined4 *)(param_1 + 0x9c) = local_2c;
        *(undefined4 *)(param_1 + 0xa0) = local_28;
        *(undefined4 *)(param_1 + 0xa4) = local_24;
        (**(code **)(**(int **)(param_1 + 0x2d4) + 0x10))();
      }
      else {
        FUN_segment_0__8059d1fc(param_1);
      }
    }
    *(undefined *)(param_1 + 0xa8) = 0;
  }
  return;
}

// === phys_WheelPhysics_8058f530 (0x8058f530) ===
/* WARNING: Control flow encountered bad instruction data */

void phys_WheelPhysics_8058f530(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === WheelPhysics_assertFail_8058f908 (0x8058f908) ===
void WheelPhysics_assertFail_8058f908(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === phys_WheelPhysics_8058fefc (0x8058fefc) ===
void phys_WheelPhysics_8058fefc(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x2ac) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x2b4) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x2b0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x2b8) + 0x18))();
  (**(code **)(**(int **)(param_1 + 700) + 0x18))();
  return;
}

// === WheelPhysics_validate_8058ff88 (0x8058ff88) ===
void WheelPhysics_validate_8058ff88(int param_1)

{
  if (*(int *)(param_1 + 0x280) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x280) + 0x74);
  }
  (**(code **)(**(int **)(param_1 + 0x290) + 0x80))();
  return;
}

// === sub_8056731c (0x8056731c) ===
// Stub: decompiled source not found for 8056731c
void sub_8056731c(void) { return; }

// === sub_80567514 (0x80567514) ===
// Stub: decompiled source not found for 80567514
void sub_80567514(void) { return; }

// === sub_80567594 (0x80567594) ===
// Stub: decompiled source not found for 80567594
void sub_80567594(void) { return; }

// === sub_805675f8 (0x805675f8) ===
// Stub: decompiled source not found for 805675f8
void sub_805675f8(void) { return; }

// === sub_80567648 (0x80567648) ===
// Stub: decompiled source not found for 80567648
void sub_80567648(void) { return; }

// === sub_8056774c (0x8056774c) ===
// Stub: decompiled source not found for 8056774c
void sub_8056774c(void) { return; }

// === sub_805677cc (0x805677cc) ===
// Stub: decompiled source not found for 805677cc
void sub_805677cc(void) { return; }

// === sub_805678b4 (0x805678b4) ===
// Stub: decompiled source not found for 805678b4
void sub_805678b4(void) { return; }

// === sub_80567920 (0x80567920) ===
// Stub: decompiled source not found for 80567920
void sub_80567920(void) { return; }

// === sub_80567978 (0x80567978) ===
// Stub: decompiled source not found for 80567978
void sub_80567978(void) { return; }

// === sub_805679d0 (0x805679d0) ===
// Stub: decompiled source not found for 805679d0
void sub_805679d0(void) { return; }

// === sub_80567b58 (0x80567b58) ===
// Stub: decompiled source not found for 80567b58
void sub_80567b58(void) { return; }

// === sub_80567bac (0x80567bac) ===
// Stub: decompiled source not found for 80567bac
void sub_80567bac(void) { return; }

// === sub_80567c10 (0x80567c10) ===
// Stub: decompiled source not found for 80567c10
void sub_80567c10(void) { return; }

// === sub_80567c88 (0x80567c88) ===
// Stub: decompiled source not found for 80567c88
void sub_80567c88(void) { return; }

// === sub_80567d00 (0x80567d00) ===
// Stub: decompiled source not found for 80567d00
void sub_80567d00(void) { return; }

// === sub_80567fac (0x80567fac) ===
// Stub: decompiled source not found for 80567fac
void sub_80567fac(void) { return; }

// === sub_80567fec (0x80567fec) ===
// Stub: decompiled source not found for 80567fec
void sub_80567fec(void) { return; }

// === sub_8056802c (0x8056802c) ===
// Stub: decompiled source not found for 8056802c
void sub_8056802c(void) { return; }

// === sub_8056806c (0x8056806c) ===
// Stub: decompiled source not found for 8056806c
void sub_8056806c(void) { return; }

// === sub_805680ac (0x805680ac) ===
// Stub: decompiled source not found for 805680ac
void sub_805680ac(void) { return; }

// === sub_8056819c (0x8056819c) ===
// Stub: decompiled source not found for 8056819c
void sub_8056819c(void) { return; }

// === sub_80568284 (0x80568284) ===
// Stub: decompiled source not found for 80568284
void sub_80568284(void) { return; }

// === sub_8056836c (0x8056836c) ===
// Stub: decompiled source not found for 8056836c
void sub_8056836c(void) { return; }

// === sub_80568454 (0x80568454) ===
// Stub: decompiled source not found for 80568454
void sub_80568454(void) { return; }

// === sub_80568504 (0x80568504) ===
// Stub: decompiled source not found for 80568504
void sub_80568504(void) { return; }

// === sub_805685b4 (0x805685b4) ===
// Stub: decompiled source not found for 805685b4
void sub_805685b4(void) { return; }

// === PlayerTrick_ctor (0x80575a44) ===
// Stub: decompiled source not found for 80575a44
void PlayerTrick_ctor(void) { return; }

// === PlayerTrick_dtor (0x80575aa8) ===
// Stub: decompiled source not found for 80575aa8
void PlayerTrick_dtor(void) { return; }

// === PlayerTrick_updateNext (0x80575b38) ===
// Stub: decompiled source not found for 80575b38
void PlayerTrick_updateNext(void) { return; }

// === PlayerTrick_tryStart (0x80575d7c) ===
// Stub: decompiled source not found for 80575d7c
void PlayerTrick_tryStart(void) { return; }

// === PlayerTrick_start (0x80575ee8) ===
// Stub: decompiled source not found for 80575ee8
void PlayerTrick_start(void) { return; }

// === PlayerTrick_startInner (0x8057616c) ===
// Stub: decompiled source not found for 8057616c
void PlayerTrick_startInner(void) { return; }

// === PlayerTrick_update (0x805763e4) ===
// Stub: decompiled source not found for 805763e4
void PlayerTrick_update(void) { return; }

// === PlayerTrick_updateRot (0x805764fc) ===
// Stub: decompiled source not found for 805764fc
void PlayerTrick_updateRot(void) { return; }

// === PlayerTrick_end (0x805766b8) ===
// Stub: decompiled source not found for 805766b8
void PlayerTrick_end(void) { return; }

// === PlayerTrickBike_start (0x80576758) ===
// Stub: decompiled source not found for 80576758
void PlayerTrickBike_start(void) { return; }

// === PlayerTrickBike_startInner (0x8057689c) ===
// Stub: decompiled source not found for 8057689c
void PlayerTrickBike_startInner(void) { return; }

// === PlayerTrickBike_updateRot (0x80576994) ===
// Stub: decompiled source not found for 80576994
void PlayerTrickBike_updateRot(void) { return; }

// === PlayerTrickBike_dtor (0x80576afc) ===
// Stub: decompiled source not found for 80576afc
void PlayerTrickBike_dtor(void) { return; }

// === PlayerSub10_ctor (0x80577fc4) ===
// Stub: decompiled source not found for 80577fc4
void PlayerSub10_ctor(void) { return; }

// === PlayerBoost_dtor (0x8057811c) ===
// Stub: decompiled source not found for 8057811c
void PlayerBoost_dtor(void) { return; }

// === setTurnParams (0x8057829c) ===
// Stub: decompiled source not found for 8057829c
void setTurnParams(void) { return; }

// === PlayerSub10_init (0x805784d4) ===
// Stub: decompiled source not found for 805784d4
void PlayerSub10_init(void) { return; }

// === PlayerSub10_update (0x805788dc) ===
// Stub: decompiled source not found for 805788dc
void PlayerSub10_update(void) { return; }

// === updateDir (0x8057a140) ===
// Stub: decompiled source not found for 8057a140
void updateDir(void) { return; }

// === updateTurn (0x8057a8b4) ===
// Stub: decompiled source not found for 8057a8b4
void updateTurn(void) { return; }

// === updateVehicleSpeed (0x8057ab68) ===
// Stub: decompiled source not found for 8057ab68
void updateVehicleSpeed(void) { return; }

// === updateAcceleration (0x8057b9bc) ===
// Stub: decompiled source not found for 8057b9bc
void updateAcceleration(void) { return; }

// === updateOffroad (0x8057c3d4) ===
// Stub: decompiled source not found for 8057c3d4
void updateOffroad(void) { return; }

// === sub_8057c5e8 (0x8057c5e8) ===
// Stub: decompiled source not found for 8057c5e8
void sub_8057c5e8(void) { return; }

// === sub_8057c69c (0x8057c69c) ===
// Stub: decompiled source not found for 8057c69c
void sub_8057c69c(void) { return; }

// === sub_8057cdd4 (0x8057cdd4) ===
// Stub: decompiled source not found for 8057cdd4
void sub_8057cdd4(void) { return; }

// === sub_8057cf0c (0x8057cf0c) ===
// Stub: decompiled source not found for 8057cf0c
void sub_8057cf0c(void) { return; }

// === sub_8057d1d4 (0x8057d1d4) ===
// Stub: decompiled source not found for 8057d1d4
void sub_8057d1d4(void) { return; }

// === sub_8057d398 (0x8057d398) ===
// Stub: decompiled source not found for 8057d398
void sub_8057d398(void) { return; }

// === sub_8057d888 (0x8057d888) ===
// Stub: decompiled source not found for 8057d888
void sub_8057d888(void) { return; }

// === sub_8057da5c (0x8057da5c) ===
// Stub: decompiled source not found for 8057da5c
void sub_8057da5c(void) { return; }

// === sub_8057dc44 (0x8057dc44) ===
// Stub: decompiled source not found for 8057dc44
void sub_8057dc44(void) { return; }

// === sub_8057e0dc (0x8057e0dc) ===
// Stub: decompiled source not found for 8057e0dc
void sub_8057e0dc(void) { return; }

// === sub_8057e3f4 (0x8057e3f4) ===
// Stub: decompiled source not found for 8057e3f4
void sub_8057e3f4(void) { return; }

// === sub_8057e638 (0x8057e638) ===
// Stub: decompiled source not found for 8057e638
void sub_8057e638(void) { return; }

// === sub_8057e6f4 (0x8057e6f4) ===
// Stub: decompiled source not found for 8057e6f4
void sub_8057e6f4(void) { return; }

// === sub_8057e77c (0x8057e77c) ===
// Stub: decompiled source not found for 8057e77c
void sub_8057e77c(void) { return; }

// === sub_8057e804 (0x8057e804) ===
// Stub: decompiled source not found for 8057e804
void sub_8057e804(void) { return; }

// === sub_8057e99c (0x8057e99c) ===
// Stub: decompiled source not found for 8057e99c
void sub_8057e99c(void) { return; }

// === sub_8057eab8 (0x8057eab8) ===
// Stub: decompiled source not found for 8057eab8
void sub_8057eab8(void) { return; }

// === sub_8057ec28 (0x8057ec28) ===
// Stub: decompiled source not found for 8057ec28
void sub_8057ec28(void) { return; }

// === sub_8057f090 (0x8057f090) ===
// Stub: decompiled source not found for 8057f090
void sub_8057f090(void) { return; }

// === sub_8057f1d0 (0x8057f1d0) ===
// Stub: decompiled source not found for 8057f1d0
void sub_8057f1d0(void) { return; }

// === sub_8057f3d8 (0x8057f3d8) ===
// Stub: decompiled source not found for 8057f3d8
void sub_8057f3d8(void) { return; }

// === sub_8057f630 (0x8057f630) ===
// Stub: decompiled source not found for 8057f630
void sub_8057f630(void) { return; }

// === sub_8057f7a8 (0x8057f7a8) ===
// Stub: decompiled source not found for 8057f7a8
void sub_8057f7a8(void) { return; }

// === sub_8057f96c (0x8057f96c) ===
// Stub: decompiled source not found for 8057f96c
void sub_8057f96c(void) { return; }

// === sub_8057fb6c (0x8057fb6c) ===
// Stub: decompiled source not found for 8057fb6c
void sub_8057fb6c(void) { return; }

// === sub_8057fd18 (0x8057fd18) ===
// Stub: decompiled source not found for 8057fd18
void sub_8057fd18(void) { return; }

// === sub_805800bc (0x805800bc) ===
// Stub: decompiled source not found for 805800bc
void sub_805800bc(void) { return; }

// === sub_80580268 (0x80580268) ===
// Stub: decompiled source not found for 80580268
void sub_80580268(void) { return; }

// === sub_80580438 (0x80580438) ===
// Stub: decompiled source not found for 80580438
void sub_80580438(void) { return; }

// === sub_8058051c (0x8058051c) ===
// Stub: decompiled source not found for 8058051c
void sub_8058051c(void) { return; }

// === sub_805805ec (0x805805ec) ===
// Stub: decompiled source not found for 805805ec
void sub_805805ec(void) { return; }

// === sub_80580648 (0x80580648) ===
// Stub: decompiled source not found for 80580648
void sub_80580648(void) { return; }

// === sub_805806a4 (0x805806a4) ===
// Stub: decompiled source not found for 805806a4
void sub_805806a4(void) { return; }

// === sub_80580778 (0x80580778) ===
// Stub: decompiled source not found for 80580778
void sub_80580778(void) { return; }

// === sub_80580998 (0x80580998) ===
// Stub: decompiled source not found for 80580998
void sub_80580998(void) { return; }

// === sub_80580a84 (0x80580a84) ===
// Stub: decompiled source not found for 80580a84
void sub_80580a84(void) { return; }

// === sub_80580b14 (0x80580b14) ===
// Stub: decompiled source not found for 80580b14
void sub_80580b14(void) { return; }

// === sub_80580cdc (0x80580cdc) ===
// Stub: decompiled source not found for 80580cdc
void sub_80580cdc(void) { return; }

// === sub_80580dc0 (0x80580dc0) ===
// Stub: decompiled source not found for 80580dc0
void sub_80580dc0(void) { return; }

// === sub_80580f28 (0x80580f28) ===
// Stub: decompiled source not found for 80580f28
void sub_80580f28(void) { return; }

// === sub_80580f9c (0x80580f9c) ===
// Stub: decompiled source not found for 80580f9c
void sub_80580f9c(void) { return; }

// === sub_80581034 (0x80581034) ===
// Stub: decompiled source not found for 80581034
void sub_80581034(void) { return; }

// === sub_805810a8 (0x805810a8) ===
// Stub: decompiled source not found for 805810a8
void sub_805810a8(void) { return; }

// === sub_805813e8 (0x805813e8) ===
// Stub: decompiled source not found for 805813e8
void sub_805813e8(void) { return; }

// === sub_8058160c (0x8058160c) ===
// Stub: decompiled source not found for 8058160c
void sub_8058160c(void) { return; }

// === sub_8058173c (0x8058173c) ===
// Stub: decompiled source not found for 8058173c
void sub_8058173c(void) { return; }

// === sub_80581778 (0x80581778) ===
// Stub: decompiled source not found for 80581778
void sub_80581778(void) { return; }

// === sub_80581824 (0x80581824) ===
// Stub: decompiled source not found for 80581824
void sub_80581824(void) { return; }

// === sub_8058196c (0x8058196c) ===
// Stub: decompiled source not found for 8058196c
void sub_8058196c(void) { return; }

// === sub_805819a8 (0x805819a8) ===
// Stub: decompiled source not found for 805819a8
void sub_805819a8(void) { return; }

// === sub_80581a58 (0x80581a58) ===
// Stub: decompiled source not found for 80581a58
void sub_80581a58(void) { return; }

// === sub_80581b1c (0x80581b1c) ===
// Stub: decompiled source not found for 80581b1c
void sub_80581b1c(void) { return; }

// === sub_80581c90 (0x80581c90) ===
// Stub: decompiled source not found for 80581c90
void sub_80581c90(void) { return; }

// === sub_8058212c (0x8058212c) ===
// Stub: decompiled source not found for 8058212c
void sub_8058212c(void) { return; }

// === sub_80582278 (0x80582278) ===
// Stub: decompiled source not found for 80582278
void sub_80582278(void) { return; }

// === sub_805823a4 (0x805823a4) ===
// Stub: decompiled source not found for 805823a4
void sub_805823a4(void) { return; }

// === sub_80582530 (0x80582530) ===
// Stub: decompiled source not found for 80582530
void sub_80582530(void) { return; }

// === sub_80582694 (0x80582694) ===
// Stub: decompiled source not found for 80582694
void sub_80582694(void) { return; }

// === sub_80582804 (0x80582804) ===
// Stub: decompiled source not found for 80582804
void sub_80582804(void) { return; }

// === sub_805828cc (0x805828cc) ===
// Stub: decompiled source not found for 805828cc
void sub_805828cc(void) { return; }

// === sub_80582dd8 (0x80582dd8) ===
// Stub: decompiled source not found for 80582dd8
void sub_80582dd8(void) { return; }

// === sub_80582e34 (0x80582e34) ===
// Stub: decompiled source not found for 80582e34
void sub_80582e34(void) { return; }

// === sub_80582f9c (0x80582f9c) ===
// Stub: decompiled source not found for 80582f9c
void sub_80582f9c(void) { return; }

// === sub_805832e4 (0x805832e4) ===
// Stub: decompiled source not found for 805832e4
void sub_805832e4(void) { return; }

// === sub_80583424 (0x80583424) ===
// Stub: decompiled source not found for 80583424
void sub_80583424(void) { return; }

// === sub_8058348c (0x8058348c) ===
// Stub: decompiled source not found for 8058348c
void sub_8058348c(void) { return; }

// === sub_80583658 (0x80583658) ===
// Stub: decompiled source not found for 80583658
void sub_80583658(void) { return; }

// === sub_805837cc (0x805837cc) ===
// Stub: decompiled source not found for 805837cc
void sub_805837cc(void) { return; }

// === sub_80583b88 (0x80583b88) ===
// Stub: decompiled source not found for 80583b88
void sub_80583b88(void) { return; }

// === sub_80583f2c (0x80583f2c) ===
// Stub: decompiled source not found for 80583f2c
void sub_80583f2c(void) { return; }

// === sub_80583f6c (0x80583f6c) ===
// Stub: decompiled source not found for 80583f6c
void sub_80583f6c(void) { return; }

// === sub_80584084 (0x80584084) ===
// Stub: decompiled source not found for 80584084
void sub_80584084(void) { return; }

// === sub_80584374 (0x80584374) ===
// Stub: decompiled source not found for 80584374
void sub_80584374(void) { return; }

// === sub_80584688 (0x80584688) ===
// Stub: decompiled source not found for 80584688
void sub_80584688(void) { return; }

// === sub_8058477c (0x8058477c) ===
// Stub: decompiled source not found for 8058477c
void sub_8058477c(void) { return; }

// === sub_80584970 (0x80584970) ===
// Stub: decompiled source not found for 80584970
void sub_80584970(void) { return; }

// === sub_805849cc (0x805849cc) ===
// Stub: decompiled source not found for 805849cc
void sub_805849cc(void) { return; }

// === sub_80584d98 (0x80584d98) ===
// Stub: decompiled source not found for 80584d98
void sub_80584d98(void) { return; }

// === sub_80585308 (0x80585308) ===
// Stub: decompiled source not found for 80585308
void sub_80585308(void) { return; }

// === sub_805853dc (0x805853dc) ===
// Stub: decompiled source not found for 805853dc
void sub_805853dc(void) { return; }

// === sub_805855fc (0x805855fc) ===
// Stub: decompiled source not found for 805855fc
void sub_805855fc(void) { return; }

// === sub_805858ec (0x805858ec) ===
// Stub: decompiled source not found for 805858ec
void sub_805858ec(void) { return; }

// === sub_80585a44 (0x80585a44) ===
// Stub: decompiled source not found for 80585a44
void sub_80585a44(void) { return; }

// === sub_80585a68 (0x80585a68) ===
// Stub: decompiled source not found for 80585a68
void sub_80585a68(void) { return; }

// === sub_80585ae0 (0x80585ae0) ===
// Stub: decompiled source not found for 80585ae0
void sub_80585ae0(void) { return; }

// === sub_80585b38 (0x80585b38) ===
// Stub: decompiled source not found for 80585b38
void sub_80585b38(void) { return; }

// === sub_805860fc (0x805860fc) ===
// Stub: decompiled source not found for 805860fc
void sub_805860fc(void) { return; }

// === sub_805867bc (0x805867bc) ===
// Stub: decompiled source not found for 805867bc
void sub_805867bc(void) { return; }

// === sub_80586a1c (0x80586a1c) ===
// Stub: decompiled source not found for 80586a1c
void sub_80586a1c(void) { return; }

// === sub_80586df4 (0x80586df4) ===
// Stub: decompiled source not found for 80586df4
void sub_80586df4(void) { return; }

// === sub_80586ed0 (0x80586ed0) ===
// Stub: decompiled source not found for 80586ed0
void sub_80586ed0(void) { return; }

// === sub_80586fe8 (0x80586fe8) ===
// Stub: decompiled source not found for 80586fe8
void sub_80586fe8(void) { return; }

// === sub_80587500 (0x80587500) ===
// Stub: decompiled source not found for 80587500
void sub_80587500(void) { return; }

// === sub_805875d0 (0x805875d0) ===
// Stub: decompiled source not found for 805875d0
void sub_805875d0(void) { return; }

// === sub_805879e4 (0x805879e4) ===
// Stub: decompiled source not found for 805879e4
void sub_805879e4(void) { return; }

// === sub_80587b70 (0x80587b70) ===
// Stub: decompiled source not found for 80587b70
void sub_80587b70(void) { return; }

// === sub_80587bb8 (0x80587bb8) ===
// Stub: decompiled source not found for 80587bb8
void sub_80587bb8(void) { return; }

// === sub_80587bf8 (0x80587bf8) ===
// Stub: decompiled source not found for 80587bf8
void sub_80587bf8(void) { return; }

// === sub_80587c94 (0x80587c94) ===
// Stub: decompiled source not found for 80587c94
void sub_80587c94(void) { return; }

// === sub_80587d40 (0x80587d40) ===
// Stub: decompiled source not found for 80587d40
void sub_80587d40(void) { return; }

// === sub_80587da8 (0x80587da8) ===
// Stub: decompiled source not found for 80587da8
void sub_80587da8(void) { return; }

// === sub_80588390 (0x80588390) ===
// Stub: decompiled source not found for 80588390
void sub_80588390(void) { return; }

// === sub_80588434 (0x80588434) ===
// Stub: decompiled source not found for 80588434
void sub_80588434(void) { return; }

// === sub_805887d8 (0x805887d8) ===
// Stub: decompiled source not found for 805887d8
void sub_805887d8(void) { return; }

// === sub_80588990 (0x80588990) ===
// Stub: decompiled source not found for 80588990
void sub_80588990(void) { return; }

// === sub_80588b98 (0x80588b98) ===
// Stub: decompiled source not found for 80588b98
void sub_80588b98(void) { return; }

// === sub_80588cec (0x80588cec) ===
// Stub: decompiled source not found for 80588cec
void sub_80588cec(void) { return; }

// === sub_80588e64 (0x80588e64) ===
// Stub: decompiled source not found for 80588e64
void sub_80588e64(void) { return; }

// === sub_8058909c (0x8058909c) ===
// Stub: decompiled source not found for 8058909c
void sub_8058909c(void) { return; }

// === sub_805890f0 (0x805890f0) ===
// Stub: decompiled source not found for 805890f0
void sub_805890f0(void) { return; }

// === sub_80589158 (0x80589158) ===
// Stub: decompiled source not found for 80589158
void sub_80589158(void) { return; }

// === sub_80589200 (0x80589200) ===
// Stub: decompiled source not found for 80589200
void sub_80589200(void) { return; }

// === sub_805892ac (0x805892ac) ===
// Stub: decompiled source not found for 805892ac
void sub_805892ac(void) { return; }

// === sub_80589348 (0x80589348) ===
// Stub: decompiled source not found for 80589348
void sub_80589348(void) { return; }

// === sub_80589440 (0x80589440) ===
// Stub: decompiled source not found for 80589440
void sub_80589440(void) { return; }

// === sub_80589480 (0x80589480) ===
// Stub: decompiled source not found for 80589480
void sub_80589480(void) { return; }

// === sub_805894c0 (0x805894c0) ===
// Stub: decompiled source not found for 805894c0
void sub_805894c0(void) { return; }

// === sub_80589554 (0x80589554) ===
// Stub: decompiled source not found for 80589554
void sub_80589554(void) { return; }

// === sub_805895ac (0x805895ac) ===
// Stub: decompiled source not found for 805895ac
void sub_805895ac(void) { return; }

// === sub_8058960c (0x8058960c) ===
// Stub: decompiled source not found for 8058960c
void sub_8058960c(void) { return; }

// === sub_8058966c (0x8058966c) ===
// Stub: decompiled source not found for 8058966c
void sub_8058966c(void) { return; }

// === sub_80589704 (0x80589704) ===
// Stub: decompiled source not found for 80589704
void sub_80589704(void) { return; }

// === sub_80589744 (0x80589744) ===
// Stub: decompiled source not found for 80589744
void sub_80589744(void) { return; }

// === sub_80589798 (0x80589798) ===
// Stub: decompiled source not found for 80589798
void sub_80589798(void) { return; }

// === sub_805897d8 (0x805897d8) ===
// Stub: decompiled source not found for 805897d8
void sub_805897d8(void) { return; }

// === sub_80589818 (0x80589818) ===
// Stub: decompiled source not found for 80589818
void sub_80589818(void) { return; }

// === sub_8058989c (0x8058989c) ===
// Stub: decompiled source not found for 8058989c
void sub_8058989c(void) { return; }

// === sub_80589924 (0x80589924) ===
// Stub: decompiled source not found for 80589924
void sub_80589924(void) { return; }

// === sub_80589964 (0x80589964) ===
// Stub: decompiled source not found for 80589964
void sub_80589964(void) { return; }

// === sub_805899cc (0x805899cc) ===
// Stub: decompiled source not found for 805899cc
void sub_805899cc(void) { return; }

// === sub_80589fa4 (0x80589fa4) ===
// Stub: decompiled source not found for 80589fa4
void sub_80589fa4(void) { return; }

// === sub_8058a7b4 (0x8058a7b4) ===
// Stub: decompiled source not found for 8058a7b4
void sub_8058a7b4(void) { return; }

// === sub_8058a7f4 (0x8058a7f4) ===
// Stub: decompiled source not found for 8058a7f4
void sub_8058a7f4(void) { return; }

// === sub_8058a834 (0x8058a834) ===
// Stub: decompiled source not found for 8058a834
void sub_8058a834(void) { return; }

// === sub_8058a874 (0x8058a874) ===
// Stub: decompiled source not found for 8058a874
void sub_8058a874(void) { return; }

// === sub_8058a8b4 (0x8058a8b4) ===
// Stub: decompiled source not found for 8058a8b4
void sub_8058a8b4(void) { return; }

// === sub_8058a8f4 (0x8058a8f4) ===
// Stub: decompiled source not found for 8058a8f4
void sub_8058a8f4(void) { return; }

// === sub_8058a934 (0x8058a934) ===
// Stub: decompiled source not found for 8058a934
void sub_8058a934(void) { return; }

// === sub_8058a974 (0x8058a974) ===
// Stub: decompiled source not found for 8058a974
void sub_8058a974(void) { return; }

// === sub_8058a9b4 (0x8058a9b4) ===
// Stub: decompiled source not found for 8058a9b4
void sub_8058a9b4(void) { return; }

// === sub_8058a9f4 (0x8058a9f4) ===
// Stub: decompiled source not found for 8058a9f4
void sub_8058a9f4(void) { return; }

// === sub_8058aa34 (0x8058aa34) ===
// Stub: decompiled source not found for 8058aa34
void sub_8058aa34(void) { return; }

// === sub_8058aa74 (0x8058aa74) ===
// Stub: decompiled source not found for 8058aa74
void sub_8058aa74(void) { return; }

// === sub_8058aab4 (0x8058aab4) ===
// Stub: decompiled source not found for 8058aab4
void sub_8058aab4(void) { return; }

// === sub_8058aaf4 (0x8058aaf4) ===
// Stub: decompiled source not found for 8058aaf4
void sub_8058aaf4(void) { return; }

// === sub_8058ab34 (0x8058ab34) ===
// Stub: decompiled source not found for 8058ab34
void sub_8058ab34(void) { return; }

// === sub_8058ab74 (0x8058ab74) ===
// Stub: decompiled source not found for 8058ab74
void sub_8058ab74(void) { return; }

// === sub_8058abb4 (0x8058abb4) ===
// Stub: decompiled source not found for 8058abb4
void sub_8058abb4(void) { return; }

// === sub_8058abf4 (0x8058abf4) ===
// Stub: decompiled source not found for 8058abf4
void sub_8058abf4(void) { return; }

// === sub_8058ac48 (0x8058ac48) ===
// Stub: decompiled source not found for 8058ac48
void sub_8058ac48(void) { return; }

// === sub_8058ac9c (0x8058ac9c) ===
// Stub: decompiled source not found for 8058ac9c
void sub_8058ac9c(void) { return; }

// === sub_8058acf0 (0x8058acf0) ===
// Stub: decompiled source not found for 8058acf0
void sub_8058acf0(void) { return; }

// === sub_8058ad44 (0x8058ad44) ===
// Stub: decompiled source not found for 8058ad44
void sub_8058ad44(void) { return; }

// === sub_8058ad98 (0x8058ad98) ===
// Stub: decompiled source not found for 8058ad98
void sub_8058ad98(void) { return; }

// === sub_8058ae20 (0x8058ae20) ===
// Stub: decompiled source not found for 8058ae20
void sub_8058ae20(void) { return; }

// === sub_8058ae90 (0x8058ae90) ===
// Stub: decompiled source not found for 8058ae90
void sub_8058ae90(void) { return; }

// === sub_8058af00 (0x8058af00) ===
// Stub: decompiled source not found for 8058af00
void sub_8058af00(void) { return; }

// === sub_8058af70 (0x8058af70) ===
// Stub: decompiled source not found for 8058af70
void sub_8058af70(void) { return; }

// === sub_8058afe0 (0x8058afe0) ===
// Stub: decompiled source not found for 8058afe0
void sub_8058afe0(void) { return; }

// === sub_8058b050 (0x8058b050) ===
// Stub: decompiled source not found for 8058b050
void sub_8058b050(void) { return; }

// === sub_8058b0c0 (0x8058b0c0) ===
// Stub: decompiled source not found for 8058b0c0
void sub_8058b0c0(void) { return; }

// === sub_8058b184 (0x8058b184) ===
// Stub: decompiled source not found for 8058b184
void sub_8058b184(void) { return; }

// === sub_8058b1d8 (0x8058b1d8) ===
// Stub: decompiled source not found for 8058b1d8
void sub_8058b1d8(void) { return; }

// === sub_8058b4d4 (0x8058b4d4) ===
// Stub: decompiled source not found for 8058b4d4
void sub_8058b4d4(void) { return; }

// === sub_8058b8e8 (0x8058b8e8) ===
// Stub: decompiled source not found for 8058b8e8
void sub_8058b8e8(void) { return; }

// === sub_8058ba38 (0x8058ba38) ===
// Stub: decompiled source not found for 8058ba38
void sub_8058ba38(void) { return; }

// === sub_8058be20 (0x8058be20) ===
// Stub: decompiled source not found for 8058be20
void sub_8058be20(void) { return; }

// === sub_8058be60 (0x8058be60) ===
// Stub: decompiled source not found for 8058be60
void sub_8058be60(void) { return; }

// === sub_8058c0cc (0x8058c0cc) ===
// Stub: decompiled source not found for 8058c0cc
void sub_8058c0cc(void) { return; }

// === sub_8058c11c (0x8058c11c) ===
// Stub: decompiled source not found for 8058c11c
void sub_8058c11c(void) { return; }

// === sub_8058c418 (0x8058c418) ===
// Stub: decompiled source not found for 8058c418
void sub_8058c418(void) { return; }

// === sub_8058c500 (0x8058c500) ===
// Stub: decompiled source not found for 8058c500
void sub_8058c500(void) { return; }

// === sub_8058c73c (0x8058c73c) ===
// Stub: decompiled source not found for 8058c73c
void sub_8058c73c(void) { return; }

// === sub_8058c7a0 (0x8058c7a0) ===
// Stub: decompiled source not found for 8058c7a0
void sub_8058c7a0(void) { return; }

// === sub_8058c804 (0x8058c804) ===
// Stub: decompiled source not found for 8058c804
void sub_8058c804(void) { return; }

// === sub_8058c868 (0x8058c868) ===
// Stub: decompiled source not found for 8058c868
void sub_8058c868(void) { return; }

// === sub_8058c8cc (0x8058c8cc) ===
// Stub: decompiled source not found for 8058c8cc
void sub_8058c8cc(void) { return; }

// === sub_8058c930 (0x8058c930) ===
// Stub: decompiled source not found for 8058c930
void sub_8058c930(void) { return; }

// === sub_8058c994 (0x8058c994) ===
// Stub: decompiled source not found for 8058c994
void sub_8058c994(void) { return; }

// === sub_8058c9f8 (0x8058c9f8) ===
// Stub: decompiled source not found for 8058c9f8
void sub_8058c9f8(void) { return; }

// === sub_8058ca68 (0x8058ca68) ===
// Stub: decompiled source not found for 8058ca68
void sub_8058ca68(void) { return; }

// === sub_8058cab4 (0x8058cab4) ===
// Stub: decompiled source not found for 8058cab4
void sub_8058cab4(void) { return; }

// === sub_8058cafc (0x8058cafc) ===
// Stub: decompiled source not found for 8058cafc
void sub_8058cafc(void) { return; }

// === sub_8058cb70 (0x8058cb70) ===
// Stub: decompiled source not found for 8058cb70
void sub_8058cb70(void) { return; }

// === sub_8058d40c (0x8058d40c) ===
// Stub: decompiled source not found for 8058d40c
void sub_8058d40c(void) { return; }

// === sub_8058d454 (0x8058d454) ===
// Stub: decompiled source not found for 8058d454
void sub_8058d454(void) { return; }

// === sub_8058d4e0 (0x8058d4e0) ===
// Stub: decompiled source not found for 8058d4e0
void sub_8058d4e0(void) { return; }

// === sub_8058d51c (0x8058d51c) ===
// Stub: decompiled source not found for 8058d51c
void sub_8058d51c(void) { return; }

// === sub_8058d5b0 (0x8058d5b0) ===
// Stub: decompiled source not found for 8058d5b0
void sub_8058d5b0(void) { return; }

// === sub_8058d684 (0x8058d684) ===
// Stub: decompiled source not found for 8058d684
void sub_8058d684(void) { return; }

// === sub_8058d818 (0x8058d818) ===
// Stub: decompiled source not found for 8058d818
void sub_8058d818(void) { return; }

// === sub_8058d8e8 (0x8058d8e8) ===
// Stub: decompiled source not found for 8058d8e8
void sub_8058d8e8(void) { return; }

// === sub_8058d918 (0x8058d918) ===
// Stub: decompiled source not found for 8058d918
void sub_8058d918(void) { return; }

// === sub_8058d948 (0x8058d948) ===
// Stub: decompiled source not found for 8058d948
void sub_8058d948(void) { return; }

// === sub_8058d97c (0x8058d97c) ===
// Stub: decompiled source not found for 8058d97c
void sub_8058d97c(void) { return; }

// === sub_8058d9a0 (0x8058d9a0) ===
// Stub: decompiled source not found for 8058d9a0
void sub_8058d9a0(void) { return; }

// === sub_8058d9c4 (0x8058d9c4) ===
// Stub: decompiled source not found for 8058d9c4
void sub_8058d9c4(void) { return; }

// === sub_8058d9e8 (0x8058d9e8) ===
// Stub: decompiled source not found for 8058d9e8
void sub_8058d9e8(void) { return; }

// === sub_8058da6c (0x8058da6c) ===
// Stub: decompiled source not found for 8058da6c
void sub_8058da6c(void) { return; }

// === sub_8058da90 (0x8058da90) ===
// Stub: decompiled source not found for 8058da90
void sub_8058da90(void) { return; }

// === sub_8058dae4 (0x8058dae4) ===
// Stub: decompiled source not found for 8058dae4
void sub_8058dae4(void) { return; }

// === sub_8058db20 (0x8058db20) ===
// Stub: decompiled source not found for 8058db20
void sub_8058db20(void) { return; }

// === sub_8058db70 (0x8058db70) ===
// Stub: decompiled source not found for 8058db70
void sub_8058db70(void) { return; }

// === sub_8058db94 (0x8058db94) ===
// Stub: decompiled source not found for 8058db94
void sub_8058db94(void) { return; }

// === sub_8058dc1c (0x8058dc1c) ===
// Stub: decompiled source not found for 8058dc1c
void sub_8058dc1c(void) { return; }

// === sub_8058dc4c (0x8058dc4c) ===
// Stub: decompiled source not found for 8058dc4c
void sub_8058dc4c(void) { return; }

// === sub_8058dc98 (0x8058dc98) ===
// Stub: decompiled source not found for 8058dc98
void sub_8058dc98(void) { return; }

// === sub_8058dcdc (0x8058dcdc) ===
// Stub: decompiled source not found for 8058dcdc
void sub_8058dcdc(void) { return; }

// === sub_8058dd20 (0x8058dd20) ===
// Stub: decompiled source not found for 8058dd20
void sub_8058dd20(void) { return; }

// === sub_8058dd64 (0x8058dd64) ===
// Stub: decompiled source not found for 8058dd64
void sub_8058dd64(void) { return; }

// === sub_8058dda0 (0x8058dda0) ===
// Stub: decompiled source not found for 8058dda0
void sub_8058dda0(void) { return; }

// === sub_8058ddfc (0x8058ddfc) ===
// Stub: decompiled source not found for 8058ddfc
void sub_8058ddfc(void) { return; }

// === sub_8058def0 (0x8058def0) ===
// Stub: decompiled source not found for 8058def0
void sub_8058def0(void) { return; }

// === sub_8058df30 (0x8058df30) ===
// Stub: decompiled source not found for 8058df30
void sub_8058df30(void) { return; }

// === sub_8058dfbc (0x8058dfbc) ===
// Stub: decompiled source not found for 8058dfbc
void sub_8058dfbc(void) { return; }

// === sub_8058e054 (0x8058e054) ===
// Stub: decompiled source not found for 8058e054
void sub_8058e054(void) { return; }

// === sub_8058e1c8 (0x8058e1c8) ===
// Stub: decompiled source not found for 8058e1c8
void sub_8058e1c8(void) { return; }

// === sub_8058e26c (0x8058e26c) ===
// Stub: decompiled source not found for 8058e26c
void sub_8058e26c(void) { return; }

// === sub_8058e638 (0x8058e638) ===
// Stub: decompiled source not found for 8058e638
void sub_8058e638(void) { return; }

// === sub_8058e688 (0x8058e688) ===
// Stub: decompiled source not found for 8058e688
void sub_8058e688(void) { return; }

// === sub_8058e764 (0x8058e764) ===
// Stub: decompiled source not found for 8058e764
void sub_8058e764(void) { return; }

// === sub_8058e804 (0x8058e804) ===
// Stub: decompiled source not found for 8058e804
void sub_8058e804(void) { return; }

// === sub_8058e844 (0x8058e844) ===
// Stub: decompiled source not found for 8058e844
void sub_8058e844(void) { return; }

// === sub_8058e9d0 (0x8058e9d0) ===
// Stub: decompiled source not found for 8058e9d0
void sub_8058e9d0(void) { return; }

// === sub_8058ea4c (0x8058ea4c) ===
// Stub: decompiled source not found for 8058ea4c
void sub_8058ea4c(void) { return; }

// === sub_8058ec48 (0x8058ec48) ===
// Stub: decompiled source not found for 8058ec48
void sub_8058ec48(void) { return; }

// === sub_8058ec88 (0x8058ec88) ===
// Stub: decompiled source not found for 8058ec88
void sub_8058ec88(void) { return; }

// === sub_8058ed20 (0x8058ed20) ===
// Stub: decompiled source not found for 8058ed20
void sub_8058ed20(void) { return; }

// === sub_8058ed68 (0x8058ed68) ===
// Stub: decompiled source not found for 8058ed68
void sub_8058ed68(void) { return; }

// === sub_8058eda8 (0x8058eda8) ===
// Stub: decompiled source not found for 8058eda8
void sub_8058eda8(void) { return; }

// === sub_8058ee88 (0x8058ee88) ===
// Stub: decompiled source not found for 8058ee88
void sub_8058ee88(void) { return; }

// === sub_8058eefc (0x8058eefc) ===
// Stub: decompiled source not found for 8058eefc
void sub_8058eefc(void) { return; }

// === sub_8058f08c (0x8058f08c) ===
// Stub: decompiled source not found for 8058f08c
void sub_8058f08c(void) { return; }

// === sub_8058f24c (0x8058f24c) ===
// Stub: decompiled source not found for 8058f24c
void sub_8058f24c(void) { return; }

// === sub_8058f2a0 (0x8058f2a0) ===
// Stub: decompiled source not found for 8058f2a0
void sub_8058f2a0(void) { return; }

// === sub_8058f328 (0x8058f328) ===
// Stub: decompiled source not found for 8058f328
void sub_8058f328(void) { return; }

// === sub_8058f4ec (0x8058f4ec) ===
// Stub: decompiled source not found for 8058f4ec
void sub_8058f4ec(void) { return; }

// === sub_8058f52c (0x8058f52c) ===
// Stub: decompiled source not found for 8058f52c
void sub_8058f52c(void) { return; }

// === sub_8058f56c (0x8058f56c) ===
// Stub: decompiled source not found for 8058f56c
void sub_8058f56c(void) { return; }

// === sub_8058f5ac (0x8058f5ac) ===
// Stub: decompiled source not found for 8058f5ac
void sub_8058f5ac(void) { return; }

// === sub_8058f5f4 (0x8058f5f4) ===
// Stub: decompiled source not found for 8058f5f4
void sub_8058f5f4(void) { return; }

// === sub_8058f860 (0x8058f860) ===
// Stub: decompiled source not found for 8058f860
void sub_8058f860(void) { return; }

// === sub_8058f8f0 (0x8058f8f0) ===
// Stub: decompiled source not found for 8058f8f0
void sub_8058f8f0(void) { return; }

// === sub_8058f964 (0x8058f964) ===
// Stub: decompiled source not found for 8058f964
void sub_8058f964(void) { return; }

// === sub_8058f9d0 (0x8058f9d0) ===
// Stub: decompiled source not found for 8058f9d0
void sub_8058f9d0(void) { return; }

// === sub_8058fa10 (0x8058fa10) ===
// Stub: decompiled source not found for 8058fa10
void sub_8058fa10(void) { return; }

// === sub_8058fa50 (0x8058fa50) ===
// Stub: decompiled source not found for 8058fa50
void sub_8058fa50(void) { return; }

// === sub_8058fae8 (0x8058fae8) ===
// Stub: decompiled source not found for 8058fae8
void sub_8058fae8(void) { return; }

// === sub_8058fb6c (0x8058fb6c) ===
// Stub: decompiled source not found for 8058fb6c
void sub_8058fb6c(void) { return; }

// === sub_8058fe14 (0x8058fe14) ===
// Stub: decompiled source not found for 8058fe14
void sub_8058fe14(void) { return; }

// === sub_8058ff20 (0x8058ff20) ===
// Stub: decompiled source not found for 8058ff20
void sub_8058ff20(void) { return; }
