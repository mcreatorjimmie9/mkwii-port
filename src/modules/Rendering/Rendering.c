// Rendering module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 1130 decompiled functions
// Address range: 0x804e0010 - 0x806fff48

#include "Rendering.h"
#include "../types.h"

// Global Ram base pointers (defined in stubs.c)
extern void *g_Ram_ptr;
extern float g_Ram_float;
extern unsigned char g_Ram_byte;
extern unsigned int g_Ram_uint;

// === gfx_EGG_Display_804e0010 (0x804e0010) ===
undefined4 gfx_EGG_Display_804e0010(uint param_1)

{
  param_1 = param_1 & 0xf;
  if (param_1 == 1) {
    return 0;
  }
  if (param_1 == 2) {
    return 1;
  }
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 4) {
    return 0xffffffff;
  }
  return 3;
}

// === gfx_EGG_Display_804e0060 (0x804e0060) ===
undefined4 * gfx_EGG_Display_804e0060(undefined4 *param_1)

{
  FUN_segment_0__804d24ec();
  *param_1 = 0;
  FUN_segment_0__804d0a7c(param_1 + 0x11);
  FUN_segment_0__804d0fa4(param_1 + 0x72);
  FUN_segment_0__804cd278(param_1 + 0xcf);
  param_1[300] = 0;
  return param_1;
}

// === EGG_Display_validate_804e00bc (0x804e00bc) ===
int EGG_Display_validate_804e00bc(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd2b4(param_1 + 0x33c,0xffffffff);
    FUN_segment_0__804d0fe0(param_1 + 0x1c8,0xffffffff);
    FUN_segment_0__804d0ab8(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d2580(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e013c (0x804e013c) ===
void gfx_EGG_Display_804e013c(int param_1)

{
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x1c8,0);
  FUN_segment_0__804d1038(param_1 + 0x1c8,0,0xe,0x21);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x33c,0);
  FUN_segment_0__804cd30c(param_1 + 0x33c,0x34,0x43,0x4d);
  *(undefined4 *)(param_1 + 0x3b8) = uRam00000000;
  gfx_EGG_Display_804ffee8(param_1 + 0x1c8,1);
  gfx_EGG_Display_804ffef8(param_1 + 0x1c8,0,param_1 + 0x44);
  FUN_segment_0__804d0b10(param_1 + 0x44,0x5d,0x6b,0x78,0,0,0,0);
  gfx_nw4r_g3d_80500680(param_1 + 0x44,0x85);
  return;
}

// === gfx_EGG_Display_804e0224 (0x804e0224) ===
void gfx_EGG_Display_804e0224(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  *(undefined *)(*g_Ram_ptr + 0x388) = 1;
  iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x24))();
  }
  piVar3 = g_Ram_ptr + 0xd;
  FUN_segment_0__804dfa04(piVar3);
  uVar2 = FUN_segment_0__804dfa20(piVar3);
  *(undefined4 *)(param_1 + 0x4b0) = uVar2;
  uVar2 = FUN_segment_0__804df3bc(piVar3,uVar2);
  *(undefined4 *)(param_1 + 0x4b8) = uVar2;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x4b4) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x4b4) = *(undefined *)(*(int *)(iVar1 + 0x38) + 0xd);
  }
  return;
}

// === gfx_EGG_Display_804e02ec (0x804e02ec) ===
void gfx_EGG_Display_804e02ec(void)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x24))();
  }
  *(undefined *)(*g_Ram_ptr + 0x388) = 0;
  return;
}

// === gfx_EGG_Display_804e0348 (0x804e0348) ===
void gfx_EGG_Display_804e0348(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)g_Ram_float + 0x34;
  if ((*(int *)(param_1 + 8) == 4) &&
     (iVar1 = FUN_segment_0__804df430(iVar3,*(undefined4 *)(param_1 + 0x4b0)), iVar1 != 0)) {
    uVar2 = FUN_segment_0__804df3bc(iVar3,*(undefined4 *)(param_1 + 0x4b0));
    FUN_segment_0__804d0d24(param_1 + 0x44,uVar2);
    FUN_segment_0__804d0d2c(param_1 + 0x44);
    FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0);
    FUN_segment_0__804d24b8(param_1,0x20,*(undefined4 *)(param_1 + 0x4b0));
  }
  return;
}

// === gfx_EGG_Display_804e03e8 (0x804e03e8) ===
void gfx_EGG_Display_804e03e8(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,0x1e);
  return;
}

// === gfx_EGG_Display_804e042c (0x804e042c) ===
void gfx_EGG_Display_804e042c(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,10);
  return;
}

// === gfx_EGG_Display_804e0470 (0x804e0470) ===
undefined4 gfx_EGG_Display_804e0470(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  iVar3 = FUN_segment_0__804dfa20(g_Ram_uint + 0xd);
  if ((iVar3 != -1) && (iVar3 = gfx_EGG_Display_804e608c(*g_Ram_uint), iVar3 != 0)) {
    bVar4 = true;
  }
  if (bVar4) {
    iVar3 = gfx_EGG_Display_804e608c(*g_Ram_uint);
    bVar4 = false;
    if ((*(int *)(iVar3 + 8) == 4) && (*(char *)(iVar3 + 0xc) == 0)) {
      bVar4 = true;
    }
    if (bVar4) {
      bVar1 = true;
    }
  }
  if ((bVar1) && (g_Ram_uint[0xc] == 0)) {
    bVar2 = true;
  }
  if ((bVar2) &&
     (iVar3 = (**(code **)(**(int **)(g_Ram_uint[0x15] + 0x24) + 0xc))(),
     -1 < (int)(1U - iVar3 | iVar3 - 1U))) {
    uVar5 = 1;
  }
  return uVar5;
}

// === gfx_EGG_Display_804e05a0 (0x804e05a0) ===
undefined4 * gfx_EGG_Display_804e05a0(undefined4 *param_1)

{
  FUN_segment_0__804d24ec();
  *param_1 = 0;
  FUN_segment_0__804d0a7c(param_1 + 0x11);
  FUN_segment_0__804d0fa4(param_1 + 0x72);
  FUN_segment_0__804cd278(param_1 + 0xcf);
  param_1[300] = 0;
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804e0608 (0x804e0608) ===
int EGG_Display_validate_804e0608(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804cd2b4(param_1 + 0x33c,0xffffffff);
      FUN_segment_0__804d0fe0(param_1 + 0x1c8,0xffffffff);
      FUN_segment_0__804d0ab8(param_1 + 0x44,0xffffffff);
      FUN_segment_0__804d2580(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e068c (0x804e068c) ===
void gfx_EGG_Display_804e068c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4b0) == -1) {
    FUN_segment_0__804d1c3c();
  }
  else {
    uVar1 = FUN_segment_0__804df3dc((int)g_Ram_float + 0x34);
    FUN_segment_0__804d0d14
              (param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b0),*(undefined *)(param_1 + 0x4b4),0);
    iVar2 = FUN_segment_0__804dfaac(uVar1,*(undefined4 *)(param_1 + 0x4b8));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4bc) = 0;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
      FUN_segment_0__804d0d24(param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b8));
    }
    else {
      *(undefined4 *)(param_1 + 0x4bc) = 1;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ad,0);
      FUN_segment_0__804d0d24(param_1 + 0x44,uVar1);
    }
    FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
    FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,0x1e);
  }
  return;
}

// === gfx_EGG_Display_804e07e4 (0x804e07e4) ===
void gfx_EGG_Display_804e07e4(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,10);
  return;
}

// === gfx_EGG_Display_804e0828 (0x804e0828) ===
void gfx_EGG_Display_804e0828(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = iRam00000000 + 0x34;
  uVar1 = FUN_segment_0__804df3dc(iVar3,*(undefined4 *)(param_1 + 0x4b0));
  if ((*(int *)(param_1 + 0x4bc) == 1) &&
     (((*(int *)(param_1 + 8) == 3 || (*(int *)(param_1 + 8) == 4)) &&
      (iVar2 = FUN_segment_0__804dfaac(uVar1,*(undefined4 *)(param_1 + 0x4b8)), iVar2 == 0)))) {
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
    if (*(int *)(param_1 + 8) == 4) {
      FUN_segment_0__804df750(iVar3,*(undefined4 *)(param_1 + 0x4b0));
    }
  }
  return;
}

// === gfx_EGG_Display_804e08e4 (0x804e08e4) ===
undefined4 * gfx_EGG_Display_804e08e4(undefined4 *param_1)

{
  FUN_segment_0__804d24ec();
  *param_1 = 0;
  FUN_segment_0__804d0a7c(param_1 + 0x11);
  FUN_segment_0__804d0fa4(param_1 + 0x72);
  FUN_segment_0__804cd278(param_1 + 0xcf);
  param_1[300] = 0;
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804e094c (0x804e094c) ===
int EGG_Display_validate_804e094c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804cd2b4(param_1 + 0x33c,0xffffffff);
      FUN_segment_0__804d0fe0(param_1 + 0x1c8,0xffffffff);
      FUN_segment_0__804d0ab8(param_1 + 0x44,0xffffffff);
      FUN_segment_0__804d2580(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e09d0 (0x804e09d0) ===
void gfx_EGG_Display_804e09d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  *(undefined *)(*g_Ram_ptr + 0x38a) = 1;
  *(undefined *)(*g_Ram_ptr + 0x388) = 1;
  iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x24))();
  }
  piVar3 = g_Ram_ptr + 0xd;
  FUN_segment_0__804dfa04(piVar3);
  uVar2 = FUN_segment_0__804dfa20(piVar3);
  *(undefined4 *)(param_1 + 0x4b0) = uVar2;
  uVar2 = FUN_segment_0__804df3bc(piVar3,uVar2);
  *(undefined4 *)(param_1 + 0x4b8) = uVar2;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x4b4) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x4b4) = *(undefined *)(*(int *)(iVar1 + 0x38) + 0xd);
  }
  return;
}

// === gfx_EGG_Display_804e0aa4 (0x804e0aa4) ===
void gfx_EGG_Display_804e0aa4(void)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x24))();
  }
  *(undefined *)(*g_Ram_ptr + 0x388) = 0;
  *(undefined *)(*g_Ram_ptr + 0x38a) = 0;
  return;
}

// === gfx_EGG_Display_804e0b0c (0x804e0b0c) ===
void gfx_EGG_Display_804e0b0c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4b0) == -1) {
    FUN_segment_0__804d1c3c();
  }
  else {
    uVar1 = FUN_segment_0__804df3dc((int)g_Ram_float + 0x34);
    FUN_segment_0__804d0d14
              (param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b0),*(undefined *)(param_1 + 0x4b4),0);
    FUN_segment_0__804d0d24(param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b8));
    iVar2 = FUN_segment_0__804dfaac(uVar1,*(undefined4 *)(param_1 + 0x4b8));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4bc) = 0;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x4bc) = 1;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ae,0);
    }
    FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
    FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,0x1e);
  }
  return;
}

// === gfx_EGG_Display_804e0c58 (0x804e0c58) ===
void gfx_EGG_Display_804e0c58(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,10);
  return;
}

// === gfx_EGG_Display_804e0c9c (0x804e0c9c) ===
void gfx_EGG_Display_804e0c9c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = iRam00000000 + 0x34;
  iVar1 = FUN_segment_0__804df3dc(iVar2,*(undefined4 *)(param_1 + 0x4b0));
  if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 4)) {
    if (*(int *)(param_1 + 0x4bc) == 1) {
      iVar1 = FUN_segment_0__804dfaac(iVar1,*(undefined4 *)(param_1 + 0x4b8));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4bc) = 0;
        gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
        if (*(int *)(param_1 + 8) == 4) {
          FUN_segment_0__804df914(iVar2,*(undefined4 *)(param_1 + 0x4b0));
        }
      }
    }
    else if ((*(int *)(param_1 + 0x4bc) == 0) &&
            (((*(int *)(param_1 + 0x4b8) == 0 || (iVar1 != *(int *)(param_1 + 0x4b8))) &&
             (iVar1 = FUN_segment_0__804df430(iVar2,*(undefined4 *)(param_1 + 0x4b0)), iVar1 != 0)))
            ) {
      FUN_segment_0__804df914(iVar2,*(undefined4 *)(param_1 + 0x4b0));
    }
  }
  return;
}

// === gfx_EGG_Display_804e0da4 (0x804e0da4) ===
undefined4 * gfx_EGG_Display_804e0da4(undefined4 *param_1)

{
  FUN_segment_0__804d24ec();
  *param_1 = 0;
  FUN_segment_0__804d0a7c(param_1 + 0x11);
  FUN_segment_0__804d0fa4(param_1 + 0x72);
  FUN_segment_0__804cd278(param_1 + 0xcf);
  param_1[300] = 0;
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804e0e0c (0x804e0e0c) ===
int EGG_Display_validate_804e0e0c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804cd2b4(param_1 + 0x33c,0xffffffff);
      FUN_segment_0__804d0fe0(param_1 + 0x1c8,0xffffffff);
      FUN_segment_0__804d0ab8(param_1 + 0x44,0xffffffff);
      FUN_segment_0__804d2580(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e0e90 (0x804e0e90) ===
void gfx_EGG_Display_804e0e90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  FUN_segment_0__804df608(g_Ram_ptr + 0xd);
  *(undefined *)(*g_Ram_ptr + 0x388) = 1;
  iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x24))();
  }
  piVar3 = g_Ram_ptr + 0xd;
  FUN_segment_0__804dfa04(piVar3);
  uVar2 = FUN_segment_0__804dfa20(piVar3);
  *(undefined4 *)(param_1 + 0x4b0) = uVar2;
  uVar2 = FUN_segment_0__804df3bc(piVar3,uVar2);
  *(undefined4 *)(param_1 + 0x4b8) = uVar2;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x4b4) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x4b4) = *(undefined *)(*(int *)(iVar1 + 0x38) + 0xd);
  }
  return;
}

// === gfx_EGG_Display_804e0f64 (0x804e0f64) ===
void gfx_EGG_Display_804e0f64(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4b0) == -1) {
    FUN_segment_0__804d1c3c();
  }
  else {
    uVar1 = FUN_segment_0__804df3dc((int)g_Ram_float + 0x34);
    FUN_segment_0__804d0d14
              (param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b0),*(undefined *)(param_1 + 0x4b4),0);
    FUN_segment_0__804d0d24(param_1 + 0x44,*(undefined4 *)(param_1 + 0x4b8));
    iVar2 = FUN_segment_0__804dfaac(uVar1,*(undefined4 *)(param_1 + 0x4b8));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x4bc) = 0;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x4bc) = 1;
      gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26af,0);
    }
    FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
    FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,0x1e);
  }
  return;
}

// === gfx_EGG_Display_804e10b0 (0x804e10b0) ===
void gfx_EGG_Display_804e10b0(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,5,10);
  return;
}

// === gfx_EGG_Display_804e10f4 (0x804e10f4) ===
void gfx_EGG_Display_804e10f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = iRam00000000 + 0x34;
  iVar1 = FUN_segment_0__804df3dc(iVar2,*(undefined4 *)(param_1 + 0x4b0));
  if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 4)) {
    if (*(int *)(param_1 + 0x4bc) == 1) {
      iVar1 = FUN_segment_0__804dfaac(iVar1,*(undefined4 *)(param_1 + 0x4b8));
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4bc) = 0;
        gfx_nw4r_g3d_80500a34(param_1 + 0x1c8,0x26ac,0);
        if (*(int *)(param_1 + 8) == 4) {
          FUN_segment_0__804df914(iVar2,*(undefined4 *)(param_1 + 0x4b0));
        }
      }
    }
    else if ((*(int *)(param_1 + 0x4bc) == 0) &&
            (((*(int *)(param_1 + 0x4b8) == 0 || (iVar1 != *(int *)(param_1 + 0x4b8))) &&
             (iVar1 = FUN_segment_0__804df430(iVar2,*(undefined4 *)(param_1 + 0x4b0)), iVar1 != 0)))
            ) {
      FUN_segment_0__804df914(iVar2,*(undefined4 *)(param_1 + 0x4b0));
    }
  }
  return;
}

// === gfx_EGG_Display_804e1278 (0x804e1278) ===
undefined4 * gfx_EGG_Display_804e1278(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x11);
  param_1[0x11] = 0;
  FUN_segment_0__804c8134(param_1 + 0x6f);
  FUN_segment_0__804b4ecc(param_1 + 0x73);
  FUN_segment_0__804b4ecc(param_1 + 0xa4);
  return param_1;
}

// === EGG_Display_validate_804e12ec (0x804e12ec) ===
int EGG_Display_validate_804e12ec(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x1bc,0xffffffff);
    if (param_1 + 0x44 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x44,0);
    }
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e1364 (0x804e1364) ===
void gfx_EGG_Display_804e1364(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x360) = 0;
  (**(code **)(*(int *)(param_1 + 0x1bc) + 0x10))((int *)(param_1 + 0x1bc),0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x1bc);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
  FUN_segment_0__80735444(param_1 + 0x44,0);
  FUN_segment_0__80735844(param_1 + 0x44,0x138e,0);
  EGG_Display_validate_804e5ea4(*g_Ram_uint);
  return;
}

// === gfx_EGG_Display_804e140c (0x804e140c) ===
void gfx_EGG_Display_804e140c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  FUN_segment_0__804b4ecc(param_1 + 0x73);
  FUN_segment_0__804b4ecc(param_1 + 0xa4);
  piVar4 = *(int **)(*g_Ram_ptr + 0x2a0);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e14a8;
        }
      }
      bVar1 = false;
LAB_segment_0__804e14a8:
      if (bVar1) goto LAB_segment_0__804e14b8;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e14b8:
  FUN_segment_0__804b4024(piVar4 + 0x70d);
  FUN_segment_0__804a9eec(piVar4 + 0xa6,0);
  FUN_segment_0__80735a00(piVar4 + 0x843,0x1126,0);
  FUN_segment_0__804a9fd0(piVar4 + 0x678,0);
  param_1[0x6e] = 0;
  iVar3 = (**(code **)(*param_1 + 0x24))(param_1,0xa6,0);
  param_1[0xd8] = iVar3;
  return;
}

// === EGG_Display_validate_804e1534 (0x804e1534) ===
void EGG_Display_validate_804e1534(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x1b8) == 2) {
    iVar2 = FUN_segment_0__804b98d0(*(undefined4 *)(*g_Ram_ptr + 0x404));
    if (iVar2 != 0) {
      return;
    }
    if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
      piVar4 = (int *)0;
    }
    else {
      piVar4 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(piVar4 + 0x2394,g_Ram_ptr + 0x81,0x168);
  }
  if (*(int *)(param_1 + 0x1b8) != 3) {
    return;
  }
  iVar2 = gfx_EGG_Display_804e44e8(g_Ram_ptr[0x24]);
  if (iVar2 != 0) {
    return;
  }
  piVar4 = *(int **)(param_1 + 0x360);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e165c;
        }
      }
      bVar1 = false;
LAB_segment_0__804e165c:
      if (bVar1) goto LAB_segment_0__804e166c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e166c:
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === EGG_Display_validate_804e168c (0x804e168c) ===
void EGG_Display_validate_804e168c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  undefined8 uVar6;
  
  iVar2 = param_1[0x6e];
  if (iVar2 == 0) {
    piVar4 = (int *)param_1[0xd8];
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__804e1740;
          }
        }
        bVar1 = false;
LAB_segment_0__804e1740:
        if (bVar1) goto LAB_segment_0__804e1750;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__804e1750:
    if (piVar4[0x94c] != 0) {
      if (piVar4[0x94c] == 1) {
        dVar5 = (double)(float)g_Ram_ptr;
        param_1[0x6e] = -1;
        FUN_segment_0__804d1c48(dVar5,param_1,1);
        param_1[0xd8] = 0;
      }
      return;
    }
    uVar6 = FUN_segment_0__804b4158(piVar4 + 0x70d);
    *(undefined8 *)(param_1 + 0xd6) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0,100000000);
  }
  if (iVar2 != 1) {
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        uVar6 = FUN_segment_0__8054ed60(g_Ram_ptr);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0,100000000);
      }
      if (iVar2 != 5) {
        return;
      }
      param_1[0x6e] = -1;
      FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
      param_1[0xd8] = 0;
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__804e1abc;
          }
        }
        bVar1 = false;
LAB_segment_0__804e1abc:
        if (bVar1) goto LAB_segment_0__804e1acc;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__804e1acc:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x13ef,param_1 + 0x73);
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0xd8] = iVar2;
    param_1[0x6e] = 4;
    return;
  }
  piVar4 = (int *)param_1[0xd8];
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e190c;
        }
      }
      bVar1 = false;
LAB_segment_0__804e190c:
      if (bVar1) goto LAB_segment_0__804e191c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e191c:
  if (piVar4[0x294] != 0) {
    if (piVar4[0x294] != 1) {
      return;
    }
    param_1[0x6e] = 0;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,0xa6,1);
    param_1[0xd8] = iVar2;
    return;
  }
  FUN_segment_0__804b94e0(*(undefined4 *)(*g_Ram_ptr + 0x404),param_1 + 0xd6);
  FUN_segment_0__804b9138(*(undefined4 *)(*g_Ram_ptr + 0x404));
  FUN_segment_0__804b98ec(*(undefined4 *)(*g_Ram_ptr + 0x404));
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e19cc;
        }
      }
      bVar1 = false;
LAB_segment_0__804e19cc:
      if (bVar1) goto LAB_segment_0__804e19dc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e19dc:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x10cd,0);
  iVar2 = (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  param_1[0xd8] = iVar2;
  param_1[0x6e] = 2;
  return;
}

// === EGG_Display_assertFail_804e1d1c (0x804e1d1c) ===
void EGG_Display_assertFail_804e1d1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804e1f54 (0x804e1f54) ===
undefined4 EGG_Display_validate_804e1f54(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0x2280,0xffffffff);
    if (param_1 + 0x210c != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x210c,0);
    }
    if (param_1 + 0x1ea8 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x1ea8,0);
    }
    FUN_segment_0__804b3ae8(param_1 + 0x1c34,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x19e0,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x178c,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x44,0,0x254,10);
  }
  return 0;
}

// === EGG_Display_validate_804e2018 (0x804e2018) ===
void EGG_Display_validate_804e2018(int param_1)

{
  undefined auStack_f0 [216];
  
  *(undefined4 *)(param_1 + 0x2530) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x2280) + 0x10))((int *)(param_1 + 0x2280),1,0);
  FUN_segment_0__804ca380(param_1 + 0x2280,2);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x2280);
  FUN_segment_0__804ca350(param_1 + 0x2280,1,param_1 + 0x251c,0,0);
  FUN_segment_0__804d1c1c(param_1,0xf);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_f0,0,0);
}

// === gfx_EGG_Display_804e22d4 (0x804e22d4) ===
void gfx_EGG_Display_804e22d4(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2530) = 0xffffffff;
  FUN_segment_0__804a9eec(param_1 + 0x298,0);
  FUN_segment_0__80735a00(param_1 + 0x210c,0x1126,0);
  iVar1 = FUN_segment_0__804b40d8(param_1 + 0x1c34);
  if (iVar1 == 0) {
    FUN_segment_0__804a9fd0(param_1 + 0x19e0,0);
  }
  else {
    FUN_segment_0__804a9fd0(param_1 + 0x19e0,1);
  }
  return;
}

// === gfx_EGG_Display_804e234c (0x804e234c) ===
void gfx_EGG_Display_804e234c(int param_1)

{
  FUN_segment_0__804b4024(param_1 + 0x1c34);
  FUN_segment_0__804a9eec(param_1 + 0x298,0);
  FUN_segment_0__80735a00(param_1 + 0x210c,0x1126,0);
  FUN_segment_0__804a9fd0(param_1 + 0x19e0,0);
  return;
}

// === gfx_EGG_Display_804e23ac (0x804e23ac) ===
void gfx_EGG_Display_804e23ac(int param_1,int param_2)

{
  int iVar1;
  
  FUN_segment_0__804b41b8(param_1 + 0x1c34,*(undefined4 *)(param_2 + 0x240));
  iVar1 = FUN_segment_0__804b40d8(param_1 + 0x1c34);
  if (iVar1 != 0) {
    FUN_segment_0__804a9fd0(param_1 + 0x19e0,1);
    FUN_segment_0__804a9f40(param_1 + 0x19e0,0);
  }
  FUN_segment_0__804d24b8(param_1,0x17,0xffffffff);
  return;
}

// === gfx_EGG_Display_804e2418 (0x804e2418) ===
void gfx_EGG_Display_804e2418(int param_1)

{
  FUN_segment_0__804b4340(param_1 + 0x1c34);
  FUN_segment_0__804a9fd0(param_1 + 0x19e0,0);
  FUN_segment_0__804d24b8(param_1,0x18,0xffffffff);
  return;
}

// === EGG_Display_validate_804e2464 (0x804e2464) ===
void EGG_Display_validate_804e2464(int param_1)

{
  undefined8 uVar1;
  undefined auStack_e0 [200];
  
  FUN_segment_0__804b40d8(param_1 + 0x1c34);
  uVar1 = FUN_segment_0__804b4158(param_1 + 0x1c34);
  FUN_segment_0__804b4ecc(auStack_e0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((int)((ulonglong)uVar1 >> 0x20),(int)uVar1,0,10000);
}

// === gfx_EGG_Display_804e2750 (0x804e2750) ===
void gfx_EGG_Display_804e2750(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2530) = 1;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === gfx_EGG_Display_804e27e0 (0x804e27e0) ===
void gfx_EGG_Display_804e27e0(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_segment_0__804b4118(param_1 + 0x1c34);
  if (iVar1 == 0) {
    FUN_segment_0__804b4340(param_1 + 0x1c34);
    iVar1 = FUN_segment_0__804aa340(param_1 + 0x19e0);
    if (iVar1 != 0) {
      FUN_segment_0__804a9f40(param_1 + 0x298,0);
    }
    FUN_segment_0__804a9fd0(param_1 + 0x19e0,0);
  }
  else {
    dVar2 = (double)g_Ram_float;
    *(undefined4 *)(param_1 + 0x2530) = 1;
    FUN_segment_0__804d1c48(dVar2,param_1,1);
  }
  return;
}

// === EGG_Display_validate_804e2880 (0x804e2880) ===
void EGG_Display_validate_804e2880(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804e28b0 (0x804e28b0) ===
void EGG_Display_validate_804e28b0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === gfx_EGG_Display_804e28fc (0x804e28fc) ===
undefined4 * gfx_EGG_Display_804e28fc(undefined4 *param_1)

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
  return param_1;
}

// === EGG_Display_validate_804e2978 (0x804e2978) ===
int EGG_Display_validate_804e2978(int param_1,int param_2)

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

// === gfx_EGG_Display_804e29e0 (0x804e29e0) ===
void gfx_EGG_Display_804e29e0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  return;
}

// === gfx_EGG_Display_804e2a3c (0x804e2a3c) ===
void gfx_EGG_Display_804e2a3c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__804df3dc(g_Ram_uint + 0xd,0);
  if (iVar2 == 0) {
    FUN_segment_0__804df50c(g_Ram_uint + 0xd);
    FUN_segment_0__804df608(g_Ram_uint + 0xd);
  }
  gfx_EGG_Display_804e6240(*g_Ram_uint);
  FUN_segment_0__8056037c(g_Ram_uint);
  gfx_EGG_Display_804e3f90(g_Ram_uint[0x24]);
  iVar2 = *(int *)*g_Ram_uint;
  if ((0x10 < iVar2) && (iVar2 < 0x13)) {
    gfx_EGG_Display_804e2fb0(param_1);
    return;
  }
  if (iVar2 != 0x10) {
    return;
  }
  piVar4 = (int *)((int *)*g_Ram_uint)[0x51];
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e2b30;
        }
      }
      bVar1 = false;
LAB_segment_0__804e2b30:
      if (bVar1) goto LAB_segment_0__804e2b40;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e2b40:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x811,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  FUN_segment_0__8055dec4(g_Ram_uint);
  param_1[0x1a] = 1;
  return;
}

// === gfx_EGG_Display_804e2bc8 (0x804e2bc8) ===
void gfx_EGG_Display_804e2bc8(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1[2] != 4) {
    return;
  }
  iVar2 = param_1[0x1a];
  if (iVar2 == 1) {
    iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
    if (iVar2 == 1) {
      FUN_segment_0__80555ba0(g_Ram_ptr);
      return;
    }
    iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
    if ((iVar2 == 6) && (iVar2 = FUN_segment_0__80555918(g_Ram_ptr), iVar2 == 7)) {
      gfx_EGG_Display_804e45a4(g_Ram_ptr[0x24]);
    }
    gfx_EGG_Display_804e45b8(g_Ram_ptr[0x24]);
    param_1[0x1a] = 2;
    return;
  }
  if (iVar2 == 2) {
    iVar2 = gfx_EGG_Display_804e44e8(g_Ram_ptr[0x24]);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_segment_0__80555a34(g_Ram_ptr);
    if (iVar2 == 0) {
      FUN_segment_0__80559488(g_Ram_ptr);
      param_1[0x1a] = 3;
      return;
    }
    param_1[0x1a] = 4;
    return;
  }
  if (iVar2 == 3) {
    iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
    if (iVar2 == 1) {
      FUN_segment_0__80555ba0(g_Ram_ptr);
      return;
    }
    iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
    if ((iVar2 == 6) && (iVar2 = FUN_segment_0__80555918(g_Ram_ptr), iVar2 == 7)) {
      gfx_EGG_Display_804e45a4(g_Ram_ptr[0x24]);
    }
    param_1[0x1a] = 4;
    return;
  }
  if (iVar2 != 4) {
    return;
  }
  if (param_1[8] < 0x78) {
    return;
  }
  if (g_Ram_ptr[0xc] != 0) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e2da8;
        }
      }
      bVar1 = false;
LAB_segment_0__804e2da8:
      if (bVar1) goto LAB_segment_0__804e2db8;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e2db8:
  FUN_segment_0__804a9164(piVar4);
  (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x3f,0);
  return;
}

// === gfx_EGG_Display_804e2e00 (0x804e2e00) ===
void gfx_EGG_Display_804e2e00(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_1[0x1a] != 0) {
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x154);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e2e8c;
        }
      }
      bVar1 = false;
LAB_segment_0__804e2e8c:
      if (bVar1) goto LAB_segment_0__804e2e9c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804e2e9c:
  if (piVar3[0x9c] != 0) {
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e2f0c;
        }
      }
      bVar1 = false;
LAB_segment_0__804e2f0c:
      if (bVar1) goto LAB_segment_0__804e2f1c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804e2f1c:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x811,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  FUN_segment_0__8055dec4(g_Ram_ptr);
  param_1[0x1a] = 1;
  return;
}

// === gfx_EGG_Display_804e2fb0 (0x804e2fb0) ===
void gfx_EGG_Display_804e2fb0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x154);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e3030;
        }
      }
      bVar1 = false;
LAB_segment_0__804e3030:
      if (bVar1) goto LAB_segment_0__804e3040;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804e3040:
  (**(code **)(*piVar3 + 100))(piVar3);
  if (*(int *)*g_Ram_ptr == 0x11) {
    FUN_segment_0__80512c88(piVar3,0x807,0);
    FUN_segment_0__80512c90(piVar3,0,2000,0,0,0);
    FUN_segment_0__80512c90(piVar3,1,0x80c,0,1,param_1 + 0x11);
  }
  else if (*(int *)*g_Ram_ptr == 0x12) {
    FUN_segment_0__80512c88(piVar3,0x819,0);
    FUN_segment_0__80512c90(piVar3,0,0x81a,0,0,0);
    FUN_segment_0__80512c90(piVar3,1,0x80c,0,1,param_1 + 0x11);
  }
  piVar3[0x9f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x53,0);
  param_1[0x1a] = 0;
  return;
}

// === gfx_EGG_Display_804e3154 (0x804e3154) ===
void gfx_EGG_Display_804e3154(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e31d4;
        }
      }
      bVar1 = false;
LAB_segment_0__804e31d4:
      if (bVar1) goto LAB_segment_0__804e31e4;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804e31e4:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x811,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  FUN_segment_0__8055dec4(g_Ram_ptr);
  param_1[0x1a] = 1;
  return;
}

// === gfx_EGG_Display_804e3260 (0x804e3260) ===
void gfx_EGG_Display_804e3260(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  double dVar2;
  
  if (param_2 == 1) {
    gfx_EGG_Display_804f8c44(uRam00000000,4,1);
    uVar1 = uRam00000000;
    dVar2 = (double)FUN_segment_0__804aa384(param_3);
    gfx_EGG_Display_804f8cd0(uVar1,(int)dVar2,0xff);
  }
  return;
}

// === gfx_EGG_Display_804e32d0 (0x804e32d0) ===
undefined4 * gfx_EGG_Display_804e32d0(undefined4 *param_1)

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
  return param_1;
}

// === EGG_Display_validate_804e334c (0x804e334c) ===
int EGG_Display_validate_804e334c(int param_1,int param_2)

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

// === gfx_EGG_Display_804e33b4 (0x804e33b4) ===
void gfx_EGG_Display_804e33b4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,0);
  return;
}

// === gfx_EGG_Display_804e3410 (0x804e3410) ===
void gfx_EGG_Display_804e3410(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__804df3dc(g_Ram_ptr + 0xd,0);
  if (iVar2 == 0) {
    FUN_segment_0__804df50c(g_Ram_ptr + 0xd);
    FUN_segment_0__804df608(g_Ram_ptr + 0xd);
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x154);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804e34c4;
        }
      }
      bVar1 = false;
LAB_segment_0__804e34c4:
      if (bVar1) goto LAB_segment_0__804e34d4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804e34d4:
  (**(code **)(*piVar4 + 100))(piVar4);
  if ((*(uint *)(g_Ram_ptr[0x24] + 0x10) & 4) == 0) {
    if ((*(uint *)(g_Ram_ptr[0x24] + 0x10) & 2) != 0) {
      FUN_segment_0__80512c88(piVar4,0x817,0);
    }
  }
  else {
    FUN_segment_0__80512c88(piVar4,0x805,0);
  }
  FUN_segment_0__80512c90(piVar4,0,0x80b,0,0,param_1 + 0x11);
  FUN_segment_0__80512c90(piVar4,1,0x80c,0,1,param_1 + 0x11);
  piVar4[0x9f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x53,0);
  gfx_EGG_Display_804e3f90(g_Ram_ptr[0x24]);
  return;
}

// === gfx_EGG_Display_804e35b4 (0x804e35b4) ===
void gfx_EGG_Display_804e35b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  double dVar2;
  
  if (param_2 == 0) {
    *(undefined *)(*(int *)(iRam00000000 + 0x90) + 0x14) = 1;
    gfx_EGG_Display_804e3f90();
    gfx_EGG_Display_804f8c44(iRam00000000,0x3f,0);
  }
  else {
    gfx_EGG_Display_804f8c44(iRam00000000,4,1);
  }
  iVar1 = iRam00000000;
  dVar2 = (double)FUN_segment_0__804aa384(param_3);
  gfx_EGG_Display_804f8cd0(iVar1,(int)dVar2,0xff);
  return;
}

// === gfx_EGG_Display_804e3654 (0x804e3654) ===
undefined4 * gfx_EGG_Display_804e3654(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__804ccebc(param_1 + 0x15);
  return param_1;
}

// === EGG_Display_validate_804e36a0 (0x804e36a0) ===
int EGG_Display_validate_804e36a0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ccef8(param_1 + 0x54,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e3714 (0x804e3714) ===
void gfx_EGG_Display_804e3714(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804ccf50(param_1 + 0x54,0,0xf,0x1d);
  if (*(int *)(*(int *)(iRam00000000 + 0x90) + 0xc) == 6) {
    gfx_nw4r_g3d_80500a34(param_1 + 0x54,0x806,0);
  }
  else {
    gfx_nw4r_g3d_80500a34(param_1 + 0x54,0x809,0);
  }
  return;
}

// === gfx_EGG_Display_804e37d8 (0x804e37d8) ===
void gfx_EGG_Display_804e37d8(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804df3dc(g_Ram_uint + 0xd,0);
  if (iVar1 == 0) {
    FUN_segment_0__804df50c(g_Ram_uint + 0xd);
    FUN_segment_0__804df608(g_Ram_uint + 0xd);
  }
  gfx_EGG_Display_804e6240(*g_Ram_uint);
  FUN_segment_0__8056037c(g_Ram_uint);
  return;
}

// === gfx_EGG_Display_804e384c (0x804e384c) ===
undefined4 * gfx_EGG_Display_804e384c(undefined4 *param_1)

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
  FUN_segment_0__804c9f74(param_1 + 0x16);
  FUN_segment_0__804a97a4(param_1 + 0x9f);
  FUN_segment_0__804ccebc(param_1 + 0x134);
  return param_1;
}

// === EGG_Display_validate_804e38d8 (0x804e38d8) ===
int EGG_Display_validate_804e38d8(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ccef8(param_1 + 0x4d0,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x27c,0xffffffff);
    FUN_segment_0__804ca1a0(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e3958 (0x804e3958) ===
void gfx_EGG_Display_804e3958(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x4d0,0);
  FUN_segment_0__804ccf50(param_1 + 0x4d0,0x2b,0x3a,0x4c);
  gfx_nw4r_g3d_80500a34(param_1 + 0x4d0,0x812,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x27c,0);
  FUN_segment_0__804a9914(param_1 + 0x27c,0x5e,0x6d,0x77,1,0,0);
  gfx_nw4r_g3d_80500a34(param_1 + 0x27c,0x80c,0);
  FUN_segment_0__804a9ec4(param_1 + 0x27c,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x27c,0);
  return;
}

// === gfx_EGG_Display_804e3a5c (0x804e3a5c) ===
void gfx_EGG_Display_804e3a5c(void)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804df3dc(iRam00000000 + 0x34,0);
  if (iVar1 == 0) {
    FUN_segment_0__804df50c(iRam00000000 + 0x34);
    FUN_segment_0__804df608(iRam00000000 + 0x34);
  }
  return;
}

// === gfx_EGG_Display_804e3ab4 (0x804e3ab4) ===
void gfx_EGG_Display_804e3ab4(int *param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  (**(code **)(*param_1 + 0x1c))(param_1,4,0);
  return;
}

// === EGG_Display_validate_804e3b48 (0x804e3b48) ===
void EGG_Display_validate_804e3b48(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804e3b78 (0x804e3b78) ===
void EGG_Display_validate_804e3b78(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804e3ba8 (0x804e3ba8) ===
void EGG_Display_validate_804e3ba8(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === gfx_EGG_Display_804e3bfc (0x804e3bfc) ===
int gfx_EGG_Display_804e3bfc(int param_1)

{
  FUN_segment_0__8040be9c(param_1 + 0x24);
  return param_1;
}

// === EGG_Display_validate_804e3c30 (0x804e3c30) ===
int EGG_Display_validate_804e3c30(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x74,0,0xc,5);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffff4);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804e3ca0 (0x804e3ca0) ===
int EGG_Display_validate_804e3ca0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if ((param_1 != -0x18) && (param_1 != -0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x8c,0,0xc,5);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e3d54 (0x804e3d54) ===
void gfx_EGG_Display_804e3d54(char *param_1)

{
  bool bVar1;
  
  if (param_1[0x14] == 0) {
    if (*(int *)(param_1 + 8) == -1) {
      if (*param_1 == 0) {
        if (param_1[1] == 0) {
          if (param_1[2] == 0) {
            if (param_1[3] == 0) {
              if (param_1[4] == 0) {
                if (param_1[5] == 0) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    gfx_EGG_Display_804e3fc4(param_1);
  }
  if (param_1[0x15] != 0) {
    gfx_EGG_Display_804f8c44(uRam00000000,0x14,0);
    gfx_EGG_Display_804f8cd0(uRam00000000,0,0xff);
    param_1[0x15] = 0;
  }
  return;
}

// === EGG_Display_validate_804e3e70 (0x804e3e70) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EGG_Display_validate_804e3e70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = *(int *)(iRam00000000 + 0x25004);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 7) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iRam00000000 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80555a34(iRam00000000);
    if (iVar1 == 0) {
      FUN_segment_0__80559488(iRam00000000);
      iVar1 = FUN_segment_0__805558e0(iRam00000000);
      if (iVar1 == 1) {
        FUN_segment_0__80555ba0(iRam00000000);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0,(_DAT_800000f8 / 4000) * 100);
      }
    }
  }
  else if (iVar1 == 4) {
    uVar2 = 0x10;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x11;
  }
  else if (iVar1 == 9) {
    uVar2 = 0x12;
  }
  else if (iVar1 == 7) {
    uVar2 = 0x13;
  }
  else {
    uVar2 = 0x14;
  }
  return uVar2;
}

// === gfx_EGG_Display_804e3f90 (0x804e3f90) ===
void gfx_EGG_Display_804e3f90(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x16] = 0;
  return;
}

// === gfx_EGG_Display_804e3fc4 (0x804e3fc4) ===
void gfx_EGG_Display_804e3fc4(char *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1[0x14] == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    if ((*(int *)(param_1 + 8) != -1) && (*(char *)(iRam00000000 + 0x25000) == 0)) {
      iVar2 = *(int *)(iRam00000000 + 0x25004);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 7) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iRam00000000 + 0x18);
      }
      if (((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) == 4)) &&
         (param_1[0x10c] != 0)) {
        if (*(int *)(param_1 + 0x100) == 0) {
          uVar6 = *(uint *)(param_1 + 0x108);
          bVar1 = false;
          iVar5 = *(int *)(iRam00000000 + 0x18);
          iVar2 = FUN_segment_0__8040bd4c(iVar5);
          if ((iVar2 != 0) && ((*(uint *)(iVar5 + 4) >> 2 & 0x3f) == uVar6)) {
            bVar1 = true;
          }
          if (!bVar1) {
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = '\x03';
          }
        }
        else {
          iVar2 = FUN_segment_0__8040bd4c(*(undefined4 *)(iRam00000000 + 0x18));
          if (iVar2 == 0) {
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = '\x03';
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        param_1[8] = -1;
        param_1[9] = -1;
        param_1[10] = -1;
        param_1[0xb] = -1;
      }
      else {
        if (iVar2 == 3) {
          uVar4 = 0x11;
        }
        else if (iVar2 == 9) {
          uVar4 = 0x12;
        }
        else if (iVar2 == 7) {
          uVar4 = 0x13;
        }
        else {
          uVar4 = 0x14;
        }
        gfx_EGG_Display_804f8c44(iRam00000000,uVar4,0);
        gfx_EGG_Display_804f8cd0(iRam00000000,0,0xff);
      }
    }
    if (*(int *)(param_1 + 8) == -1) {
      iVar2 = 0;
      iVar5 = 6;
      pcVar3 = param_1;
      do {
        if (*pcVar3 != 0) {
          if (iVar2 == 0) {
            FUN_segment_0__804393cc(iRam00000000);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
          }
          else if (iVar2 == 1) {
            uVar6 = *(uint *)(param_1 + 0x18);
            if ((int)uVar6 < 0) {
              if (param_1[2] == 0) {
                FUN_segment_0__80438bac
                          (iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,
                           *(undefined4 *)(param_1 + 0x1c),param_1[0x20],param_1 + 0x24,0);
              }
              else {
                FUN_segment_0__80438bac
                          (iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,
                           *(undefined4 *)(param_1 + 0x1c),param_1[0x20],param_1 + 0x24,1);
                param_1[2] = 0;
              }
            }
            else if (param_1[2] == 0) {
              FUN_segment_0__80438bac
                        (iRam00000000,uVar6 & 0xff,*(undefined4 *)(param_1 + 0x1c),param_1[0x20],
                         param_1 + 0x24,0);
            }
            else {
              FUN_segment_0__80438bac
                        (iRam00000000,uVar6 & 0xff,*(undefined4 *)(param_1 + 0x1c),param_1[0x20],
                         param_1 + 0x24,1);
              param_1[2] = 0;
            }
          }
          else if (iVar2 == 2) {
            FUN_segment_0__80433790(iRam00000000);
          }
          else if (iVar2 == 3) {
            if ((int)*(uint *)(param_1 + 0x110) < 0) {
              FUN_segment_0__80438f28
                        (iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,
                         *(undefined4 *)(param_1 + 0x114),param_1[0x118],
                         *(undefined4 *)(param_1 + 0x11c));
            }
            else {
              FUN_segment_0__80438f28
                        (iRam00000000,*(uint *)(param_1 + 0x110) & 0xff,
                         *(undefined4 *)(param_1 + 0x114),param_1[0x118],
                         *(undefined4 *)(param_1 + 0x11c));
            }
          }
          else if (iVar2 == 4) {
            if ((int)*(uint *)(param_1 + 0xfc) < 0) {
              FUN_segment_0__804385cc
                        (iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,
                         *(undefined4 *)(param_1 + 0x100),param_1[0x104],
                         *(undefined4 *)(param_1 + 0x108));
            }
            else {
              FUN_segment_0__804385cc
                        (iRam00000000,*(uint *)(param_1 + 0xfc) & 0xff,
                         *(undefined4 *)(param_1 + 0x100),param_1[0x104],
                         *(undefined4 *)(param_1 + 0x108));
            }
          }
          else if (iVar2 == 5) {
            if ((int)*(uint *)(param_1 + 0x120) < 0) {
              FUN_segment_0__80438910
                        (iRam00000000,*(ushort *)(iRam00000000 + 0x36) & 0xff,
                         *(undefined4 *)(param_1 + 0x124));
            }
            else {
              FUN_segment_0__80438910
                        (iRam00000000,*(uint *)(param_1 + 0x120) & 0xff,
                         *(undefined4 *)(param_1 + 0x124));
            }
          }
          *(int *)(param_1 + 8) = iVar2;
          param_1[iVar2] = 0;
          return;
        }
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

// === EGG_Display_validate_804e43c8 (0x804e43c8) ===
void EGG_Display_validate_804e43c8(char *param_1)

{
  bool bVar1;
  
  while( true ) {
    if (*(int *)(param_1 + 0xc) != 0) {
      return;
    }
    if (param_1[0x14] == 0) {
      if (*(int *)(param_1 + 8) == -1) {
        if (*param_1 == 0) {
          if (param_1[1] == 0) {
            if (param_1[2] == 0) {
              if (param_1[3] == 0) {
                if (param_1[4] == 0) {
                  if (param_1[5] == 0) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    if (*(char *)(iRam00000000 + 0x25000) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    gfx_EGG_Display_804e3fc4(param_1);
  }
  return;
}

// === gfx_EGG_Display_804e44e8 (0x804e44e8) ===
undefined4 gfx_EGG_Display_804e44e8(char *param_1)

{
  if (param_1[0x14] != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != -1) {
    return 1;
  }
  if (*param_1 != 0) {
    return 1;
  }
  if (param_1[1] != 0) {
    return 1;
  }
  if (param_1[2] != 0) {
    return 1;
  }
  if (param_1[3] != 0) {
    return 1;
  }
  if (param_1[4] != 0) {
    return 1;
  }
  if (param_1[5] != 0) {
    return 1;
  }
  return 0;
}

// === gfx_EGG_Display_804e4590 (0x804e4590) ===
uint gfx_EGG_Display_804e4590(int param_1)

{
  return (-*(uint *)(param_1 + 0xc) | *(uint *)(param_1 + 0xc)) >> 0x1f;
}

// === gfx_EGG_Display_804e45a4 (0x804e45a4) ===
void gfx_EGG_Display_804e45a4(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 6;
  *(undefined *)(param_1 + 0x15) = 1;
  return;
}

// === gfx_EGG_Display_804e45b8 (0x804e45b8) ===
void gfx_EGG_Display_804e45b8(undefined *param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *param_1 = 1;
  return;
}

// === gfx_EGG_Display_804e45d0 (0x804e45d0) ===
void gfx_EGG_Display_804e45d0(int param_1)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 0x16) = 0;
  return;
}

// === gfx_EGG_Display_804e45fc (0x804e45fc) ===
void gfx_EGG_Display_804e45fc(int param_1)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(char *)(param_1 + 2) != 0) {
    return;
  }
  *(undefined *)(param_1 + 0x16) = 1;
  return;
}

// === gfx_EGG_Display_804e4620 (0x804e4620) ===
void gfx_EGG_Display_804e4620(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x14) != 0;
  if (bVar1) {
    return;
  }
  if (*(char *)(param_1 + 0x16) == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 2) {
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    return;
  }
  if (bVar1) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 0x16) = 0;
  return;
}

// === gfx_EGG_Display_804e4670 (0x804e4670) ===
void gfx_EGG_Display_804e4670(int param_1,undefined4 param_2,undefined param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  if ((*(char *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    *(undefined *)(param_1 + 1) = 1;
    puVar9 = (undefined *)(param_1 + 0x3b);
    puVar8 = param_4 + 0x17;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined *)(param_1 + 0x20) = param_3;
    *(undefined *)(param_1 + 0x24) = *param_4;
    uVar3 = *(undefined2 *)(param_4 + 2);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_4 + 4);
    *(undefined2 *)(param_1 + 0x26) = uVar3;
    uVar3 = *(undefined2 *)(param_4 + 6);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_4 + 8);
    *(undefined2 *)(param_1 + 0x2a) = uVar3;
    uVar3 = *(undefined2 *)(param_4 + 10);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_4 + 0xc);
    *(undefined2 *)(param_1 + 0x2e) = uVar3;
    uVar3 = *(undefined2 *)(param_4 + 0xe);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_4 + 0x10);
    *(undefined2 *)(param_1 + 0x32) = uVar3;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_4 + 0x12);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_4 + 0x14);
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_4 + 0x16);
    iVar15 = 0x26;
    do {
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 2;
      uVar2 = *puVar8;
      puVar9[1] = *puVar1;
      puVar9 = puVar9 + 2;
      *puVar9 = uVar2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar7 = param_1 + 0x98;
    *(undefined *)(param_1 + 0x88) = param_4[100];
    uVar10 = param_1 + 200;
    puVar8 = param_4 + 0x74;
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_4 + 0x6c);
    *(undefined *)(param_1 + 0x92) = param_4[0x6e];
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_4 + 0x70);
    *(undefined *)(param_1 + 0x96) = param_4[0x72];
    if (uVar7 < uVar10) {
      uVar11 = uVar10 - (param_1 + 0x98U);
      uVar12 = uVar11 + 0xb;
      iVar15 = (int)uVar12 / 0xc + ((int)uVar12 >> 0x1f);
      uVar14 = iVar15 - (iVar15 >> 0x1f);
      uVar13 = uVar14 + 1;
      if (8 < (int)uVar13) {
        bVar6 = false;
        bVar5 = false;
        if (param_1 + 0x98U <= uVar10) {
          bVar4 = true;
          if (((uVar11 & 0x80000000) == 0) && ((uVar12 & 0x80000000) != 0)) {
            bVar4 = false;
          }
          if (bVar4) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          bVar5 = true;
          if (((uVar14 & 0x80000000) == 0) && ((uVar13 & 0x80000000) != 0)) {
            bVar5 = false;
          }
          if (bVar5) {
            bVar6 = true;
          }
        }
        if ((bVar6) && (uVar10 = ((param_1 + 199) - uVar7) / 0x60, uVar7 < param_1 + 0x68U)) {
          do {
            *(undefined2 *)(uVar7 + 4) = *(undefined2 *)(puVar8 + 4);
            *(undefined *)(uVar7 + 6) = puVar8[6];
            *(undefined2 *)(uVar7 + 8) = *(undefined2 *)(puVar8 + 8);
            *(undefined *)(uVar7 + 10) = puVar8[10];
            *(undefined2 *)(uVar7 + 0x10) = *(undefined2 *)(puVar8 + 0x10);
            *(undefined *)(uVar7 + 0x12) = puVar8[0x12];
            *(undefined2 *)(uVar7 + 0x14) = *(undefined2 *)(puVar8 + 0x14);
            *(undefined *)(uVar7 + 0x16) = puVar8[0x16];
            *(undefined2 *)(uVar7 + 0x1c) = *(undefined2 *)(puVar8 + 0x1c);
            *(undefined *)(uVar7 + 0x1e) = puVar8[0x1e];
            *(undefined2 *)(uVar7 + 0x20) = *(undefined2 *)(puVar8 + 0x20);
            *(undefined *)(uVar7 + 0x22) = puVar8[0x22];
            *(undefined2 *)(uVar7 + 0x28) = *(undefined2 *)(puVar8 + 0x28);
            *(undefined *)(uVar7 + 0x2a) = puVar8[0x2a];
            *(undefined2 *)(uVar7 + 0x2c) = *(undefined2 *)(puVar8 + 0x2c);
            *(undefined *)(uVar7 + 0x2e) = puVar8[0x2e];
            *(undefined2 *)(uVar7 + 0x34) = *(undefined2 *)(puVar8 + 0x34);
            *(undefined *)(uVar7 + 0x36) = puVar8[0x36];
            *(undefined2 *)(uVar7 + 0x38) = *(undefined2 *)(puVar8 + 0x38);
            *(undefined *)(uVar7 + 0x3a) = puVar8[0x3a];
            *(undefined2 *)(uVar7 + 0x40) = *(undefined2 *)(puVar8 + 0x40);
            *(undefined *)(uVar7 + 0x42) = puVar8[0x42];
            *(undefined2 *)(uVar7 + 0x44) = *(undefined2 *)(puVar8 + 0x44);
            *(undefined *)(uVar7 + 0x46) = puVar8[0x46];
            *(undefined2 *)(uVar7 + 0x4c) = *(undefined2 *)(puVar8 + 0x4c);
            *(undefined *)(uVar7 + 0x4e) = puVar8[0x4e];
            *(undefined2 *)(uVar7 + 0x50) = *(undefined2 *)(puVar8 + 0x50);
            *(undefined *)(uVar7 + 0x52) = puVar8[0x52];
            *(undefined2 *)(uVar7 + 0x58) = *(undefined2 *)(puVar8 + 0x58);
            *(undefined *)(uVar7 + 0x5a) = puVar8[0x5a];
            *(undefined2 *)(uVar7 + 0x5c) = *(undefined2 *)(puVar8 + 0x5c);
            puVar9 = puVar8 + 0x5e;
            puVar8 = puVar8 + 0x60;
            *(undefined *)(uVar7 + 0x5e) = *puVar9;
            uVar7 = uVar7 + 0x60;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar10 = ((param_1 + 0xd3) - uVar7) / 0xc;
      if (uVar7 < param_1 + 200U) {
        do {
          *(undefined2 *)(uVar7 + 4) = *(undefined2 *)(puVar8 + 4);
          *(undefined *)(uVar7 + 6) = puVar8[6];
          *(undefined2 *)(uVar7 + 8) = *(undefined2 *)(puVar8 + 8);
          puVar9 = puVar8 + 10;
          puVar8 = puVar8 + 0xc;
          *(undefined *)(uVar7 + 10) = *puVar9;
          uVar7 = uVar7 + 0xc;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_4 + 0xa8);
    *(undefined *)(param_1 + 0xce) = param_4[0xaa];
    *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_4 + 0xac);
    *(undefined *)(param_1 + 0xd2) = param_4[0xae];
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_4 + 0xb0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_4 + 0xb4);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_4 + 0xb8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_4 + 0xbc);
    *(undefined *)(param_1 + 0xe4) = param_4[0xc0];
    *(undefined *)(param_1 + 0xe5) = param_4[0xc1];
    *(undefined *)(param_1 + 0xe6) = param_4[0xc2];
    *(undefined *)(param_1 + 0xe7) = param_4[0xc3];
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_4 + 0xc4);
    *(undefined *)(param_1 + 0xec) = param_4[200];
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_4 + 0xcc);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_4 + 0xd0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_4 + 0xd4);
  }
  return;
}

// === gfx_EGG_Display_804e4a18 (0x804e4a18) ===
void gfx_EGG_Display_804e4a18
               (int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
               undefined *param_5)

{
  undefined *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  if ((*(char *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    *(undefined *)(param_1 + 1) = 1;
    puVar10 = (undefined *)(param_1 + 0x3b);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    puVar8 = param_5 + 0x17;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(undefined *)(param_1 + 0x20) = param_4;
    *(undefined *)(param_1 + 0x24) = *param_5;
    uVar3 = *(undefined2 *)(param_5 + 2);
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_5 + 4);
    *(undefined2 *)(param_1 + 0x26) = uVar3;
    uVar3 = *(undefined2 *)(param_5 + 6);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_5 + 8);
    *(undefined2 *)(param_1 + 0x2a) = uVar3;
    uVar3 = *(undefined2 *)(param_5 + 10);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_5 + 0xc);
    *(undefined2 *)(param_1 + 0x2e) = uVar3;
    uVar3 = *(undefined2 *)(param_5 + 0xe);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_5 + 0x10);
    *(undefined2 *)(param_1 + 0x32) = uVar3;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_5 + 0x12);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_5 + 0x14);
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_5 + 0x16);
    iVar15 = 0x26;
    do {
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 2;
      uVar2 = *puVar8;
      puVar10[1] = *puVar1;
      puVar10 = puVar10 + 2;
      *puVar10 = uVar2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar7 = param_1 + 0x98;
    *(undefined *)(param_1 + 0x88) = param_5[100];
    uVar9 = param_1 + 200;
    puVar8 = param_5 + 0x74;
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_5 + 0x6c);
    *(undefined *)(param_1 + 0x92) = param_5[0x6e];
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_5 + 0x70);
    *(undefined *)(param_1 + 0x96) = param_5[0x72];
    if (uVar7 < uVar9) {
      uVar11 = uVar9 - (param_1 + 0x98U);
      uVar12 = uVar11 + 0xb;
      iVar15 = (int)uVar12 / 0xc + ((int)uVar12 >> 0x1f);
      uVar14 = iVar15 - (iVar15 >> 0x1f);
      uVar13 = uVar14 + 1;
      if (8 < (int)uVar13) {
        bVar6 = false;
        bVar5 = false;
        if (param_1 + 0x98U <= uVar9) {
          bVar4 = true;
          if (((uVar11 & 0x80000000) == 0) && ((uVar12 & 0x80000000) != 0)) {
            bVar4 = false;
          }
          if (bVar4) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          bVar5 = true;
          if (((uVar14 & 0x80000000) == 0) && ((uVar13 & 0x80000000) != 0)) {
            bVar5 = false;
          }
          if (bVar5) {
            bVar6 = true;
          }
        }
        if ((bVar6) && (uVar9 = ((param_1 + 199) - uVar7) / 0x60, uVar7 < param_1 + 0x68U)) {
          do {
            *(undefined2 *)(uVar7 + 4) = *(undefined2 *)(puVar8 + 4);
            *(undefined *)(uVar7 + 6) = puVar8[6];
            *(undefined2 *)(uVar7 + 8) = *(undefined2 *)(puVar8 + 8);
            *(undefined *)(uVar7 + 10) = puVar8[10];
            *(undefined2 *)(uVar7 + 0x10) = *(undefined2 *)(puVar8 + 0x10);
            *(undefined *)(uVar7 + 0x12) = puVar8[0x12];
            *(undefined2 *)(uVar7 + 0x14) = *(undefined2 *)(puVar8 + 0x14);
            *(undefined *)(uVar7 + 0x16) = puVar8[0x16];
            *(undefined2 *)(uVar7 + 0x1c) = *(undefined2 *)(puVar8 + 0x1c);
            *(undefined *)(uVar7 + 0x1e) = puVar8[0x1e];
            *(undefined2 *)(uVar7 + 0x20) = *(undefined2 *)(puVar8 + 0x20);
            *(undefined *)(uVar7 + 0x22) = puVar8[0x22];
            *(undefined2 *)(uVar7 + 0x28) = *(undefined2 *)(puVar8 + 0x28);
            *(undefined *)(uVar7 + 0x2a) = puVar8[0x2a];
            *(undefined2 *)(uVar7 + 0x2c) = *(undefined2 *)(puVar8 + 0x2c);
            *(undefined *)(uVar7 + 0x2e) = puVar8[0x2e];
            *(undefined2 *)(uVar7 + 0x34) = *(undefined2 *)(puVar8 + 0x34);
            *(undefined *)(uVar7 + 0x36) = puVar8[0x36];
            *(undefined2 *)(uVar7 + 0x38) = *(undefined2 *)(puVar8 + 0x38);
            *(undefined *)(uVar7 + 0x3a) = puVar8[0x3a];
            *(undefined2 *)(uVar7 + 0x40) = *(undefined2 *)(puVar8 + 0x40);
            *(undefined *)(uVar7 + 0x42) = puVar8[0x42];
            *(undefined2 *)(uVar7 + 0x44) = *(undefined2 *)(puVar8 + 0x44);
            *(undefined *)(uVar7 + 0x46) = puVar8[0x46];
            *(undefined2 *)(uVar7 + 0x4c) = *(undefined2 *)(puVar8 + 0x4c);
            *(undefined *)(uVar7 + 0x4e) = puVar8[0x4e];
            *(undefined2 *)(uVar7 + 0x50) = *(undefined2 *)(puVar8 + 0x50);
            *(undefined *)(uVar7 + 0x52) = puVar8[0x52];
            *(undefined2 *)(uVar7 + 0x58) = *(undefined2 *)(puVar8 + 0x58);
            *(undefined *)(uVar7 + 0x5a) = puVar8[0x5a];
            *(undefined2 *)(uVar7 + 0x5c) = *(undefined2 *)(puVar8 + 0x5c);
            puVar10 = puVar8 + 0x5e;
            puVar8 = puVar8 + 0x60;
            *(undefined *)(uVar7 + 0x5e) = *puVar10;
            uVar7 = uVar7 + 0x60;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      uVar9 = ((param_1 + 0xd3) - uVar7) / 0xc;
      if (uVar7 < param_1 + 200U) {
        do {
          *(undefined2 *)(uVar7 + 4) = *(undefined2 *)(puVar8 + 4);
          *(undefined *)(uVar7 + 6) = puVar8[6];
          *(undefined2 *)(uVar7 + 8) = *(undefined2 *)(puVar8 + 8);
          puVar10 = puVar8 + 10;
          puVar8 = puVar8 + 0xc;
          *(undefined *)(uVar7 + 10) = *puVar10;
          uVar7 = uVar7 + 0xc;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    *(undefined2 *)(param_1 + 0xcc) = *(undefined2 *)(param_5 + 0xa8);
    *(undefined *)(param_1 + 0xce) = param_5[0xaa];
    *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_5 + 0xac);
    *(undefined *)(param_1 + 0xd2) = param_5[0xae];
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_5 + 0xb0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_5 + 0xb4);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_5 + 0xb8);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_5 + 0xbc);
    *(undefined *)(param_1 + 0xe4) = param_5[0xc0];
    *(undefined *)(param_1 + 0xe5) = param_5[0xc1];
    *(undefined *)(param_1 + 0xe6) = param_5[0xc2];
    *(undefined *)(param_1 + 0xe7) = param_5[0xc3];
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_5 + 0xc4);
    *(undefined *)(param_1 + 0xec) = param_5[200];
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_5 + 0xcc);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_5 + 0xd0);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_5 + 0xd4);
  }
  return;
}

// === gfx_EGG_Display_804e4dbc (0x804e4dbc) ===
void gfx_EGG_Display_804e4dbc(int param_1,undefined4 param_2,undefined param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 3) = 1;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = param_2;
  *(undefined *)(param_1 + 0x118) = param_3;
  *(undefined4 *)(param_1 + 0x11c) = param_4;
  return;
}

// === gfx_EGG_Display_804e4df4 (0x804e4df4) ===
void gfx_EGG_Display_804e4df4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
               undefined4 param_5)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 3) = 1;
  *(undefined4 *)(param_1 + 0x110) = param_2;
  *(undefined4 *)(param_1 + 0x114) = param_3;
  *(undefined *)(param_1 + 0x118) = param_4;
  *(undefined4 *)(param_1 + 0x11c) = param_5;
  return;
}

// === gfx_EGG_Display_804e4e28 (0x804e4e28) ===
void gfx_EGG_Display_804e4e28
               (int param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
               undefined param_5)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x100) = param_2;
  *(undefined *)(param_1 + 0x104) = param_3;
  *(undefined4 *)(param_1 + 0x108) = param_4;
  *(undefined *)(param_1 + 0x10c) = param_5;
  return;
}

// === gfx_EGG_Display_804e4e64 (0x804e4e64) ===
void gfx_EGG_Display_804e4e64
               (int param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
               undefined4 param_5,undefined param_6)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  *(undefined4 *)(param_1 + 0x100) = param_3;
  *(undefined *)(param_1 + 0x104) = param_4;
  *(undefined4 *)(param_1 + 0x108) = param_5;
  *(undefined *)(param_1 + 0x10c) = param_6;
  return;
}

// === gfx_EGG_Display_804e4e9c (0x804e4e9c) ===
void gfx_EGG_Display_804e4e9c(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}

// === gfx_EGG_Display_804e4ecc (0x804e4ecc) ===
void gfx_EGG_Display_804e4ecc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x14) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  *(undefined *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 0x120) = param_2;
  *(undefined4 *)(param_1 + 0x124) = param_3;
  return;
}

// === EGG_Display_validate_804e4ef8 (0x804e4ef8) ===
void EGG_Display_validate_804e4ef8(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[0xdf] = 0;
  *(undefined *)(param_1 + 0xe2) = 0;
  *(undefined *)((int)param_1 + 0x389) = 0;
  *(undefined *)((int)param_1 + 0x38a) = 0;
  *(undefined *)((int)param_1 + 0x38b) = 0;
  *(undefined *)(param_1 + 0xe3) = 0;
  *(undefined *)((int)param_1 + 0x38d) = 0;
  *(undefined *)((int)param_1 + 0x38e) = 0;
  *(undefined *)((int)param_1 + 0x38f) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xe4);
}

// === EGG_Display_validate_804e4f70 (0x804e4f70) ===
undefined4 EGG_Display_validate_804e4f70(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x3e4));
  }
  return 0;
}

// === EGG_Display_validate_804e4fec (0x804e4fec) ===
void EGG_Display_validate_804e4fec(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined *)((int)param_1 + 0x38f) = 1;
  *param_1 = param_2;
  iVar4 = 0xd;
  puVar2 = param_1;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
    iVar1 = iVar3 + 0x10;
  } while (iVar4 != 0);
  param_1[iVar3 + 0x12] = 0;
  param_1[iVar3 + 0x13] = 0;
  param_1[iVar3 + 0x14] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  iVar1 = gfx_EGG_Display_804f4774(*param_1);
  if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x1c);
}

// === gfx_EGG_Display_804e529c (0x804e529c) ===
void gfx_EGG_Display_804e529c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  param_1[1] = param_2;
  while (iVar1 = param_1[0xdf], 0 < iVar1) {
    FUN_segment_0__804d1704(param_1[iVar1 + 0xd4]);
    if (iVar1 + -1 == param_1[0xdf] + -1) {
      FUN_segment_0__804d13c8(param_1[param_1[0xdf] + 0xd4]);
      param_1[param_1[0xdf] + 0xd5] = 0;
      param_1[0xdf] = param_1[0xdf] + -1;
    }
  }
  gfx_EGG_Display_804f3280(param_1,*param_1);
  puVar3 = g_Ram_uint;
  *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xef;
  param_1[0xf5] = puVar3;
  param_1[0xf6] = puVar3;
  *g_Ram_uint = 0;
  puVar3 = g_Ram_uint + 0xd;
  uVar2 = (**(code **)(**(int **)(param_1[param_1[0xdf] + 0xd4] + 0x38) + 0x30))();
  FUN_segment_0__804dfd78(puVar3,uVar2);
  return;
}

// === EGG_Display_validate_804e53c4 (0x804e53c4) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EGG_Display_validate_804e53c4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  while (0 < *(int *)(param_1 + 0x37c)) {
    iVar2 = *(int *)(param_1 + 0x37c) + -1;
    FUN_segment_0__804d1704(*(undefined4 *)(param_1 + iVar2 * 4 + 0x354));
    if (iVar2 == *(int *)(param_1 + 0x37c) + -1) {
      FUN_segment_0__804d13c8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x350));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = 0;
      *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + -1;
    }
  }
  FUN_segment_0__804dfd78(iRam00000000 + 0x34,0);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_segment_0__804d129c();
      piVar1 = *(int **)(iVar2 + 8);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 8))(piVar1,1);
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0xd3);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x380) != 0) {
      FUN_segment_0__804d1704();
      FUN_segment_0__804d129c(*(undefined4 *)(iVar2 + 0x380));
      piVar1 = *(int **)(iVar2 + 0x380);
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 8))(piVar1,1);
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 2);
  FUN_segment_0__804b50e8();
  FUN_segment_0__804c78ac(*(undefined4 *)(param_1 + 0x3ec),1);
  FUN_segment_0__804c7c4c(*(undefined4 *)(param_1 + 1000),1);
  iRam00000000 = 0;
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_segment_0__804d0344();
  }
  if ((*(char *)(param_1 + 0x38e) != 0) &&
     (iVar2 = FUN_segment_0__80546a5c(iRam00000000), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0,_DAT_800000f8 / 4000);
  }
  return;
}

// === gfx_EGG_Display_804e558c (0x804e558c) ===
void gfx_EGG_Display_804e558c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  puVar6 = param_1;
  do {
    piVar4 = (int *)puVar6[0xe0];
    if (piVar4 != (int *)0) {
      while( true ) {
        FUN_segment_0__804d14e4(piVar4);
        if (piVar4[2] == 6) {
          FUN_segment_0__804d13c8(piVar4);
        }
        if ((piVar4[2] != 1) || (iVar2 = (**(code **)(*piVar4 + 100))(piVar4), iVar2 == 0)) break;
        FUN_segment_0__804d12ac(piVar4);
      }
    }
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 2);
  bVar1 = true;
  if ((*(char *)((int)param_1 + 0x389) == 0) && (*(char *)((int)param_1 + 0x38a) == 0)) {
    bVar1 = false;
  }
  iVar5 = gfx_EGG_Display_804f4774(*param_1);
  if (iVar5 == 2) {
    if ((bVar1) || (*(char *)((int)param_1 + 0x38b) != '\x01')) {
      if ((bVar1) && (*(char *)((int)param_1 + 0x38b) == 0)) {
        FUN_segment_0__806024c8(uRam00000000);
      }
    }
    else {
      FUN_segment_0__8060255c(uRam00000000);
    }
  }
  uVar3 = 0;
  *(bool *)((int)param_1 + 0x38b) = bVar1;
  if ((*(char *)((int)param_1 + 0x389) != 0) || (*(char *)(param_1 + 0xe2) != 0)) {
    uVar3 = 1;
  }
  *(undefined *)(param_1 + 0xe3) = uVar3;
  *(undefined *)((int)param_1 + 0x38d) = *(undefined *)(param_1 + 0xe2);
  return;
}

// === gfx_EGG_Display_804e56e4 (0x804e56e4) ===
void gfx_EGG_Display_804e56e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  gfx_EGG_Display_804e6254();
  iVar4 = param_1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x37c); iVar3 = iVar3 + 1) {
    FUN_segment_0__804d1408(*(undefined4 *)(iVar4 + 0x354));
    iVar4 = iVar4 + 4;
  }
  iVar3 = 0;
  iVar4 = param_1;
  do {
    if (*(int *)(iVar4 + 0x380) != 0) {
      FUN_segment_0__804d1408();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 2);
  if ((*(char *)(param_1 + 0x38d) == 0) && (0 < *(int *)(param_1 + 0x37c))) {
    if (g_Ram_ptr[0xc] == 0) {
      iVar4 = (**(code **)(**(int **)(g_Ram_ptr[0x15] + 0x24) + 0xc))();
      if (-1 < (int)(1U - iVar4 | iVar4 - 1U)) {
        FUN_segment_0__804d1424
                  (*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354));
      }
    }
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_segment_0__804d03d4();
  }
  if (*(int *)(param_1 + 0x404) != 0) {
    FUN_segment_0__804b91e8();
  }
  iVar4 = param_1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x37c); iVar3 = iVar3 + 1) {
    FUN_segment_0__804d1a8c(*(undefined4 *)(iVar4 + 0x354));
    iVar4 = iVar4 + 4;
  }
  iVar3 = 0;
  iVar4 = param_1;
  do {
    if (((*(int *)(iVar4 + 0x380) != 0) &&
        (iVar1 = *(int *)(*(int *)(iVar4 + 0x380) + 8), 1 < iVar1)) && (iVar1 < 6)) {
      FUN_segment_0__804d1a8c();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 2);
  *g_Ram_ptr = *g_Ram_ptr + 1;
  FUN_segment_0__8056d6c8(g_Ram_ptr);
  iVar4 = param_1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x37c); iVar3 = iVar3 + 1) {
    FUN_segment_0__804d1af8(*(undefined4 *)(iVar4 + 0x354));
    iVar4 = iVar4 + 4;
  }
  iVar3 = 0;
  iVar4 = param_1;
  do {
    if (((*(int *)(iVar4 + 0x380) != 0) &&
        (iVar1 = *(int *)(*(int *)(iVar4 + 0x380) + 8), 1 < iVar1)) && (iVar1 < 6)) {
      FUN_segment_0__804d1af8();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 2);
  if (*(int *)(param_1 + 0x37c) < 1) {
    FUN_segment_0__804dfd78(g_Ram_ptr + 0xd,0);
  }
  else {
    piVar5 = g_Ram_ptr + 0xd;
    uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354)
                                   + 0x38) + 0x30))();
    FUN_segment_0__804dfd78(piVar5,uVar2);
  }
  return;
}

// === gfx_EGG_Display_804e5950 (0x804e5950) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804e5950(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Display_804e5ccc (0x804e5ccc) ===
void gfx_EGG_Display_804e5ccc(int param_1)

{
  if (0 < *(int *)(param_1 + 0x37c)) {
    FUN_segment_0__804d1b38(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354))
    ;
  }
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_segment_0__804d0990();
  }
  FUN_segment_0__804dfd78(iRam00000000 + 0x34,1);
  return;
}

// === gfx_EGG_Display_804e5d38 (0x804e5d38) ===
void gfx_EGG_Display_804e5d38(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_segment_0__804d09ac(*(int *)(param_1 + 0x400));
  }
  if (0 < *(int *)(param_1 + 0x37c)) {
    FUN_segment_0__804d1b4c(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354))
    ;
  }
  if (*(int *)(param_1 + 0x37c) < 1) {
    FUN_segment_0__804dfd78(iRam00000000 + 0x34,0);
  }
  else {
    iVar2 = iRam00000000 + 0x34;
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354)
                                   + 0x38) + 0x30))();
    FUN_segment_0__804dfd78(iVar2,uVar1);
  }
  return;
}

// === gfx_EGG_Display_804e5df4 (0x804e5df4) ===
void gfx_EGG_Display_804e5df4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x37c); iVar1 = iVar1 + 1) {
    FUN_segment_0__804d1be8(*(undefined4 *)(iVar2 + 0x354));
    iVar2 = iVar2 + 4;
  }
  return;
}

// === EGG_Display_validate_804e5e54 (0x804e5e54) ===
void EGG_Display_validate_804e5e54(int param_1)

{
  if (*(int *)(param_1 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x100);
  }
  return;
}

// === EGG_Display_validate_804e5ea4 (0x804e5ea4) ===
void EGG_Display_validate_804e5ea4(int param_1)

{
  if (*(int *)(param_1 + 0x404) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x38d0);
  }
  return;
}

// === gfx_EGG_Display_804e5ef4 (0x804e5ef4) ===
void gfx_EGG_Display_804e5ef4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804e657c(param_2);
  *(undefined4 *)(param_1 + param_2 * 4 + 8) = uVar1;
  FUN_segment_0__804d1220(uVar1,param_2);
  return;
}

// === gfx_EGG_Display_804e5f40 (0x804e5f40) ===
void gfx_EGG_Display_804e5f40(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = EGG_Display_validate_804f7c50(param_2,*param_1);
  param_1[param_2 + 0xe0] = iVar1;
  if (iVar1 != 0) {
    FUN_segment_0__804d2614();
  }
  return;
}

// === gfx_EGG_Display_804e5f8c (0x804e5f8c) ===
void gfx_EGG_Display_804e5f8c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + param_2 * 4 + 8);
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = uVar2;
  *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
  FUN_segment_0__804d1c0c(uVar2,uVar1);
  FUN_segment_0__804d12ac(uVar2);
  return;
}

// === gfx_EGG_Display_804e5fec (0x804e5fec) ===
undefined4 gfx_EGG_Display_804e5fec(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 8);
  iVar2 = param_1 + *(int *)(param_1 + 0x37c) * 4;
  *(undefined4 *)(iVar2 + 0x354) = uVar1;
  *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
  FUN_segment_0__804d1c0c(uVar1,param_3);
  FUN_segment_0__804d12ac(uVar1);
  return *(undefined4 *)(iVar2 + 0x354);
}

// === gfx_EGG_Display_804e6058 (0x804e6058) ===
bool gfx_EGG_Display_804e6058(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x37c) < 1) {
    return false;
  }
  return param_2 == *(int *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354);
}

// === gfx_EGG_Display_804e608c (0x804e608c) ===
undefined4 gfx_EGG_Display_804e608c(int param_1)

{
  if (*(int *)(param_1 + 0x37c) < 1) {
    return 0;
  }
  return *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354);
}

// === gfx_EGG_Display_804e60b4 (0x804e60b4) ===
uint gfx_EGG_Display_804e60b4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = param_1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x37c); iVar3 = iVar3 + 1) {
    uVar2 = (**(code **)(**(int **)(iVar4 + 0x354) + 0x14))();
    uVar5 = uVar5 | uVar2;
    iVar4 = iVar4 + 4;
  }
  iVar4 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x380);
    if ((piVar1 != (int *)0) && (piVar1[2] != 1)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))();
      uVar5 = uVar5 | uVar2;
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 4;
  } while (iVar4 < 2);
  return uVar5;
}

// === gfx_EGG_Display_804e6174 (0x804e6174) ===
undefined4 gfx_EGG_Display_804e6174(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x37c); iVar3 = iVar3 + 1) {
    iVar1 = (**(code **)(**(int **)(iVar4 + 0x354) + 0x18))();
    if (iVar1 == 0) {
      return 0;
    }
    iVar4 = iVar4 + 4;
  }
  iVar4 = 0;
  while (((piVar2 = *(int **)(param_1 + 0x380), piVar2 == (int *)0 || (piVar2[2] == 1)) ||
         (iVar3 = (**(code **)(*piVar2 + 0x18))(), iVar3 != 0))) {
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 4;
    if (1 < iVar4) {
      return 1;
    }
  }
  return 0;
}

// === gfx_EGG_Display_804e6240 (0x804e6240) ===
void gfx_EGG_Display_804e6240(int param_1)

{
  *(undefined *)(param_1 + 0x38e) = 1;
  FUN_segment_0__80545dc0(uRam00000000);
  return;
}

// === gfx_EGG_Display_804e6254 (0x804e6254) ===
void gfx_EGG_Display_804e6254(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x37c) + -1;
  while (-1 < iVar1) {
    iVar5 = param_1 + iVar1 * 4;
    iVar2 = FUN_segment_0__804d14e4(*(undefined4 *)(iVar5 + 0x354));
    iVar4 = *(int *)(param_1 + 0x37c);
    iVar3 = iVar4 + -1;
    if (iVar1 == iVar3) {
      if ((*(int **)(iVar5 + 0x354))[2] == 6) {
        iVar3 = (**(code **)(**(int **)(iVar5 + 0x354) + 0x10))();
        uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x354) + 0x10);
        FUN_segment_0__804d13c8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x350));
        *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = 0;
        iVar1 = *(int *)(param_1 + 0x37c) + -1;
        *(int *)(param_1 + 0x37c) = iVar1;
        if (iVar3 == -1) {
          if (0 < iVar1) {
            FUN_segment_0__804d1b50(*(undefined4 *)(param_1 + iVar1 * 4 + 0x350));
          }
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + iVar3 * 4 + 8);
          *(undefined4 *)(param_1 + iVar1 * 4 + 0x354) = uVar7;
          *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
          FUN_segment_0__804d1c0c(uVar7,uVar6);
          FUN_segment_0__804d12ac(uVar7);
        }
        iVar4 = *(int *)(param_1 + 0x37c);
        iVar3 = iVar4 + -1;
        iVar1 = iVar3;
      }
      else {
        iVar1 = iVar1 + -1;
      }
    }
    else {
      iVar1 = iVar1 + -1;
    }
    if (iVar2 != 0) {
      if (iVar4 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + iVar4 * 4 + 0x350);
      }
      iVar1 = iVar3;
      if (iVar2 != 0) {
        if (iVar4 < 1) {
          iVar2 = 0;
          iVar3 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + iVar4 * 4 + 0x350);
          iVar3 = *(int *)(param_1 + iVar4 * 4 + 0x350);
        }
        (**(code **)(*g_Ram_ptr + 0x18))
                  (g_Ram_ptr,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar3 + 8));
      }
    }
  }
  return;
}

// === gfx_EGG_Display_804e6414 (0x804e6414) ===
void gfx_EGG_Display_804e6414(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 8);
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = uVar1;
  *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
  FUN_segment_0__804d1c0c(uVar1,param_3);
  FUN_segment_0__804d12ac(uVar1);
  return;
}

// === gfx_EGG_Display_804e6474 (0x804e6474) ===
void gfx_EGG_Display_804e6474(int param_1)

{
  FUN_segment_0__804d13c8(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x37c) + -1) * 4 + 0x354));
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = 0;
  *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + -1;
  return;
}

// === gfx_EGG_Display_804e64d4 (0x804e64d4) ===
void gfx_EGG_Display_804e64d4(int param_1,int param_2)

{
  int iVar1;
  
  while (param_2 < *(int *)(param_1 + 0x37c)) {
    iVar1 = *(int *)(param_1 + 0x37c) + -1;
    FUN_segment_0__804d1704(*(undefined4 *)(param_1 + iVar1 * 4 + 0x354));
    if (iVar1 == *(int *)(param_1 + 0x37c) + -1) {
      FUN_segment_0__804d13c8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x350));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x37c) * 4 + 0x354) = 0;
      *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + -1;
    }
  }
  return;
}

// === gfx_EGG_Display_804e657c (0x804e657c) ===
undefined4 gfx_EGG_Display_804e657c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xd3) {
                    /* WARNING: Could not emulate address calculation at 0x804e659c */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 << 2))();
    return uVar1;
  }
  return 0;
}

// === gfx_EGG_Display_804e787c (0x804e787c) ===
undefined4 * gfx_EGG_Display_804e787c(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x11);
  gfx_nw4r_g3d_80500418(param_1 + 0x6e);
  FUN_segment_0__804c8134(param_1 + 0xcb);
  return param_1;
}

// === gfx_EGG_Display_804e78d0 (0x804e78d0) ===
undefined4 * gfx_EGG_Display_804e78d0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x2f;
  return param_1;
}

// === EGG_Display_validate_804e7950 (0x804e7950) ===
int EGG_Display_validate_804e7950(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c88c8(param_1 + 0x80,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e79b8 (0x804e79b8) ===
undefined4 * gfx_EGG_Display_804e79b8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  if ((*(int *)(iRam00000000 + 0xb70) == 2) || (*(int *)(iRam00000000 + 0xb70) == 5)) {
    param_1[0x11] = 0x2d;
  }
  else {
    param_1[0x11] = 0x21;
  }
  return param_1;
}

// === gfx_EGG_Display_804e7a60 (0x804e7a60) ===
undefined4 * gfx_EGG_Display_804e7a60(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x2f;
  return param_1;
}

// === gfx_EGG_Display_804e7ae0 (0x804e7ae0) ===
undefined4 * gfx_EGG_Display_804e7ae0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x2f;
  return param_1;
}

// === gfx_EGG_Display_804e7b60 (0x804e7b60) ===
undefined4 * gfx_EGG_Display_804e7b60(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x33;
  return param_1;
}

// === gfx_EGG_Display_804e7be0 (0x804e7be0) ===
undefined4 * gfx_EGG_Display_804e7be0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x33;
  return param_1;
}

// === gfx_EGG_Display_804e7c60 (0x804e7c60) ===
undefined4 * gfx_EGG_Display_804e7c60(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x35;
  return param_1;
}

// === gfx_EGG_Display_804e7ce0 (0x804e7ce0) ===
undefined4 * gfx_EGG_Display_804e7ce0(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === EGG_Display_validate_804e7d24 (0x804e7d24) ===
int EGG_Display_validate_804e7d24(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e7d8c (0x804e7d8c) ===
undefined4 * gfx_EGG_Display_804e7d8c(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7dd0 (0x804e7dd0) ===
undefined4 * gfx_EGG_Display_804e7dd0(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7e14 (0x804e7e14) ===
undefined4 * gfx_EGG_Display_804e7e14(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7e58 (0x804e7e58) ===
undefined4 * gfx_EGG_Display_804e7e58(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7e9c (0x804e7e9c) ===
undefined4 * gfx_EGG_Display_804e7e9c(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7ee0 (0x804e7ee0) ===
undefined4 * gfx_EGG_Display_804e7ee0(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x459;
  return param_1;
}

// === gfx_EGG_Display_804e7f24 (0x804e7f24) ===
undefined4 * gfx_EGG_Display_804e7f24(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x45a;
  return param_1;
}

// === gfx_EGG_Display_804e7f68 (0x804e7f68) ===
undefined4 * gfx_EGG_Display_804e7f68(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7fac (0x804e7fac) ===
undefined4 * gfx_EGG_Display_804e7fac(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e7ff0 (0x804e7ff0) ===
undefined4 * gfx_EGG_Display_804e7ff0(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8034 (0x804e8034) ===
undefined4 * gfx_EGG_Display_804e8034(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8078 (0x804e8078) ===
undefined4 * gfx_EGG_Display_804e8078(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e80bc (0x804e80bc) ===
undefined4 * gfx_EGG_Display_804e80bc(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8100 (0x804e8100) ===
undefined4 * gfx_EGG_Display_804e8100(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8144 (0x804e8144) ===
undefined4 * gfx_EGG_Display_804e8144(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8188 (0x804e8188) ===
undefined4 * gfx_EGG_Display_804e8188(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x532;
  return param_1;
}

// === gfx_EGG_Display_804e81cc (0x804e81cc) ===
undefined4 * gfx_EGG_Display_804e81cc(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x457;
  return param_1;
}

// === gfx_EGG_Display_804e8210 (0x804e8210) ===
undefined4 * gfx_EGG_Display_804e8210(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x451;
  return param_1;
}

// === gfx_EGG_Display_804e8254 (0x804e8254) ===
undefined4 * gfx_EGG_Display_804e8254(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x458;
  return param_1;
}

// === gfx_EGG_Display_804e8298 (0x804e8298) ===
undefined4 * gfx_EGG_Display_804e8298(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x44e;
  return param_1;
}

// === gfx_EGG_Display_804e82dc (0x804e82dc) ===
undefined4 * gfx_EGG_Display_804e82dc(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0x44d;
  return param_1;
}

// === gfx_EGG_Display_804e8320 (0x804e8320) ===
undefined4 * gfx_EGG_Display_804e8320(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *(undefined *)((int)param_1 + 0x1b2) = 0;
  *param_1 = 0;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  *(undefined *)((int)param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x6e);
  return param_1;
}

// === EGG_Display_validate_804e8384 (0x804e8384) ===
int EGG_Display_validate_804e8384(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c88c8(param_1 + 0x5c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804e83ec (0x804e83ec) ===
int EGG_Display_validate_804e83ec(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804c88c8(param_1 + 0x5c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804e8458 (0x804e8458) ===
undefined4 * gfx_EGG_Display_804e8458(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8494 (0x804e8494) ===
undefined4 * gfx_EGG_Display_804e8494(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Display_804e84d0 (0x804e84d0) ===
undefined4 * gfx_EGG_Display_804e84d0(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804e850c (0x804e850c) ===
void EGG_Display_validate_804e850c(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x68,0,0,0xb90,2);
}

// === EGG_Display_validate_804e8574 (0x804e8574) ===
void EGG_Display_validate_804e8574(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x7c,0,0,0x174,6);
}

// === EGG_Display_validate_804e85d8 (0x804e85d8) ===
undefined4 EGG_Display_validate_804e85d8(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x1f0,0,0x174,6);
  }
  return 0;
}

// === EGG_Display_validate_804e864c (0x804e864c) ===
undefined4 EGG_Display_validate_804e864c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x1a0,0,0xb90,2);
  }
  return 0;
}

// === EGG_Display_validate_804e86d4 (0x804e86d4) ===
void EGG_Display_validate_804e86d4(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x68,0,0,0xb90,2);
}

// === EGG_Display_validate_804e873c (0x804e873c) ===
void EGG_Display_validate_804e873c(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x68,0,0,0xb90,2);
}

// === gfx_EGG_Display_804e87a4 (0x804e87a4) ===
undefined4 * gfx_EGG_Display_804e87a4(undefined4 *param_1)

{
  FUN_segment_0__8072e454();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Display_804e87e0 (0x804e87e0) ===
undefined4 * gfx_EGG_Display_804e87e0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0xffffffff;
  return param_1;
}

// === gfx_EGG_Display_804e8860 (0x804e8860) ===
undefined4 * gfx_EGG_Display_804e8860(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0xffffffff;
  return param_1;
}

// === gfx_EGG_Display_804e88e0 (0x804e88e0) ===
undefined4 * gfx_EGG_Display_804e88e0(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8924 (0x804e8924) ===
undefined4 * gfx_EGG_Display_804e8924(undefined4 *param_1)

{
  FUN_segment_0__8072b2b4();
  *param_1 = 0;
  param_1[0xd0] = 0;
  return param_1;
}

// === gfx_EGG_Display_804e8968 (0x804e8968) ===
undefined4 * gfx_EGG_Display_804e8968(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x31;
  return param_1;
}

// === gfx_EGG_Display_804e89e8 (0x804e89e8) ===
undefined4 * gfx_EGG_Display_804e89e8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x31;
  return param_1;
}

// === gfx_EGG_Display_804e8a68 (0x804e8a68) ===
undefined4 * gfx_EGG_Display_804e8a68(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x2f;
  return param_1;
}

// === gfx_EGG_Display_804e8ae8 (0x804e8ae8) ===
undefined4 * gfx_EGG_Display_804e8ae8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x2f;
  return param_1;
}

// === gfx_EGG_Display_804e8b68 (0x804e8b68) ===
undefined4 * gfx_EGG_Display_804e8b68(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x48;
  return param_1;
}

// === gfx_EGG_Display_804e8be8 (0x804e8be8) ===
undefined4 * gfx_EGG_Display_804e8be8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *(undefined *)((int)param_1 + 0x52) = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  FUN_segment_0__804c880c(param_1 + 0x20);
  *param_1 = 0;
  param_1[0x11] = 0x48;
  return param_1;
}

// === EGG_Display_assertFail_804e8c68 (0x804e8c68) ===
void EGG_Display_assertFail_804e8c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804e8f1c (0x804e8f1c) ===
int EGG_Display_validate_804e8f1c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x54 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x54,0);
    }
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_assertFail_804e8f8c (0x804e8f8c) ===
void EGG_Display_assertFail_804e8f8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804e9264 (0x804e9264) ===
undefined4 * gfx_EGG_Display_804e9264(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  param_1[0x13] = 0;
  FUN_segment_0__804a97a4(param_1 + 0x15);
  uVar1 = uRam00000000;
  param_1[0x15] = 0;
  param_1[0xaa] = 0x7d1;
  param_1[0xab] = 0;
  param_1[0xac] = uVar1;
  param_1[0xc4] = 0;
  FUN_segment_0__804b4ecc(param_1 + 0xc5);
  param_1[0xf6] = 1;
  *(undefined *)(param_1 + 0xf7) = 1;
  *(undefined *)((int)param_1 + 0x3dd) = 0;
  param_1[0xf9] = 0xffffffff;
  param_1[0xfa] = 0xffffffff;
  param_1[0xfb] = 0xffffffff;
  param_1[0xfd] = 0xffffffff;
  param_1[0xfe] = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x103] = uRam00000008;
  param_1[0xff] = 0;
  param_1[0x100] = param_1;
  param_1[0x101] = uVar1;
  param_1[0x102] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x104] = 0;
  param_1[0x105] = param_1;
  param_1[0x106] = uVar1;
  param_1[0x107] = uVar2;
  param_1[0x108] = uVar3;
  param_1[0x109] = 0xffffffff;
  param_1[0x10a] = 0;
  *(undefined *)(param_1 + 0x10b) = 0;
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x10c);
  (**(code **)(param_1[0x10c] + 0x10))(param_1 + 0x10c,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x10c);
  return param_1;
}

// === gfx_EGG_Display_804e93d4 (0x804e93d4) ===
undefined4 * gfx_EGG_Display_804e93d4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  param_1[0x13] = 0;
  FUN_segment_0__804a97a4(param_1 + 0x15);
  uVar1 = uRam00000000;
  param_1[0x15] = 0;
  param_1[0xaa] = 0x7d1;
  param_1[0xab] = 0;
  param_1[0xac] = uVar1;
  param_1[0xc4] = 0;
  FUN_segment_0__804b4ecc(param_1 + 0xc5);
  param_1[0xf6] = 2;
  *(undefined *)(param_1 + 0xf7) = 1;
  *(undefined *)((int)param_1 + 0x3dd) = 0;
  param_1[0xf9] = 0xffffffff;
  param_1[0xfa] = 0xffffffff;
  param_1[0xfb] = 0xffffffff;
  param_1[0xfd] = 0xffffffff;
  param_1[0xfe] = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x103] = uRam00000008;
  param_1[0xff] = 0;
  param_1[0x100] = param_1;
  param_1[0x101] = uVar1;
  param_1[0x102] = uVar2;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x104] = 0;
  param_1[0x105] = param_1;
  param_1[0x106] = uVar1;
  param_1[0x107] = uVar2;
  param_1[0x108] = uVar3;
  param_1[0x109] = 0xffffffff;
  param_1[0x10a] = 0;
  *(undefined *)(param_1 + 0x10b) = 0;
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x10d);
  (**(code **)(param_1[0x10d] + 0x10))(param_1 + 0x10d,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x10d);
  return param_1;
}

// === EGG_Display_assertFail_804e9548 (0x804e9548) ===
void EGG_Display_assertFail_804e9548(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804e982c (0x804e982c) ===
int EGG_Display_validate_804e982c(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_assertFail_804e9884 (0x804e9884) ===
void EGG_Display_assertFail_804e9884(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804e9b3c (0x804e9b3c) ===
void EGG_Display_assertFail_804e9b3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804e9dfc (0x804e9dfc) ===
void EGG_Display_assertFail_804e9dfc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804ea1f4 (0x804ea1f4) ===
int EGG_Display_validate_804ea1f4(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_assertFail_804ea24c (0x804ea24c) ===
void EGG_Display_assertFail_804ea24c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804ea524 (0x804ea524) ===
undefined4 * gfx_EGG_Display_804ea524(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804ea560 (0x804ea560) ===
int EGG_Display_validate_804ea560(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_assertFail_804ea5b8 (0x804ea5b8) ===
void EGG_Display_assertFail_804ea5b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ea870 (0x804ea870) ===
void EGG_Display_assertFail_804ea870(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804eac2c (0x804eac2c) ===
int EGG_Display_validate_804eac2c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Display_validate_804eac6c (0x804eac6c) ===
int EGG_Display_validate_804eac6c(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1 + 0x18,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804eacc8 (0x804eacc8) ===
undefined4 EGG_Display_validate_804eacc8(int param_1)

{
  if (param_1 != 0) {
    if (param_1 != -0x1440) {
      nw4r_g3d_validate_80500540(param_1 + 0x1458,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x254,8);
  }
  return 0;
}

// === EGG_Display_validate_804ead50 (0x804ead50) ===
undefined4 EGG_Display_validate_804ead50(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x174,4);
  }
  return 0;
}

// === EGG_Display_assertFail_804eadc4 (0x804eadc4) ===
void EGG_Display_assertFail_804eadc4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804eb158 (0x804eb158) ===
undefined4 * gfx_EGG_Display_804eb158(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804eb194 (0x804eb194) ===
int EGG_Display_validate_804eb194(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804eb1ec (0x804eb1ec) ===
undefined4 EGG_Display_validate_804eb1ec(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x18c,8);
  }
  return 0;
}

// === gfx_EGG_Display_804eb260 (0x804eb260) ===
undefined4 * gfx_EGG_Display_804eb260(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FUN_segment_0__804a97a4(param_1 + 6);
  *param_1 = 0;
  param_1[6] = 0x18;
  return param_1;
}

// === EGG_Display_validate_804eb2c0 (0x804eb2c0) ===
int EGG_Display_validate_804eb2c0(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804a98ac(param_1 + 0x18,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804eb31c (0x804eb31c) ===
int EGG_Display_validate_804eb31c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x18,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804eb37c (0x804eb37c) ===
undefined4 EGG_Display_validate_804eb37c(int param_1)

{
  if (param_1 != 0) {
    nw4r_g3d_validate_80500540(param_1 + 0xb24,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x26c,4);
  }
  return 0;
}

// === EGG_Display_assertFail_804eb3fc (0x804eb3fc) ===
void EGG_Display_assertFail_804eb3fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804eb6b4 (0x804eb6b4) ===
void EGG_Display_assertFail_804eb6b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804eb9cc (0x804eb9cc) ===
void EGG_Display_assertFail_804eb9cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804ebca0 (0x804ebca0) ===
void EGG_Display_validate_804ebca0(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5e,0,0,0x174,6);
}

// === EGG_Display_validate_804ebcfc (0x804ebcfc) ===
undefined4 EGG_Display_validate_804ebcfc(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x178,0,0x174,6);
  }
  return 0;
}

// === EGG_Display_assertFail_804ebd70 (0x804ebd70) ===
void EGG_Display_assertFail_804ebd70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ec028 (0x804ec028) ===
void EGG_Display_assertFail_804ec028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804ec318 (0x804ec318) ===
int EGG_Display_validate_804ec318(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_assertFail_804ec370 (0x804ec370) ===
void EGG_Display_assertFail_804ec370(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ec688 (0x804ec688) ===
void EGG_Display_assertFail_804ec688(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804eca44 (0x804eca44) ===
undefined4 EGG_Display_validate_804eca44(int param_1)

{
  if (param_1 != 0) {
    if (param_1 != -0x648) {
      nw4r_g3d_validate_80500540(param_1 + 0x660,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x254,2);
  }
  return 0;
}

// === EGG_Display_validate_804ecacc (0x804ecacc) ===
undefined4 EGG_Display_validate_804ecacc(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x174,5);
  }
  return 0;
}

// === EGG_Display_assertFail_804ecb40 (0x804ecb40) ===
void EGG_Display_assertFail_804ecb40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804eced4 (0x804eced4) ===
undefined4 * gfx_EGG_Display_804eced4(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804ecf10 (0x804ecf10) ===
int EGG_Display_validate_804ecf10(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804ecf68 (0x804ecf68) ===
undefined4 EGG_Display_validate_804ecf68(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x18c,2);
  }
  return 0;
}

// === gfx_EGG_Display_804ecfdc (0x804ecfdc) ===
undefined4 * gfx_EGG_Display_804ecfdc(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FUN_segment_0__804a97a4(param_1 + 6);
  *param_1 = 0;
  param_1[6] = 0x18;
  return param_1;
}

// === EGG_Display_validate_804ed03c (0x804ed03c) ===
int EGG_Display_validate_804ed03c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x18,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804ed09c (0x804ed09c) ===
undefined4 EGG_Display_validate_804ed09c(int param_1)

{
  if (param_1 != 0) {
    nw4r_g3d_validate_80500540(param_1 + 0xd90,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x26c,5);
  }
  return 0;
}

// === EGG_Display_assertFail_804ed11c (0x804ed11c) ===
void EGG_Display_assertFail_804ed11c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804ed4d8 (0x804ed4d8) ===
undefined4 EGG_Display_validate_804ed4d8(int param_1)

{
  if (param_1 != 0) {
    if (param_1 != -0x1440) {
      nw4r_g3d_validate_80500540(param_1 + 0x1458,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x254,8);
  }
  return 0;
}

// === EGG_Display_validate_804ed560 (0x804ed560) ===
undefined4 EGG_Display_validate_804ed560(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x174,8);
  }
  return 0;
}

// === EGG_Display_assertFail_804ed5d4 (0x804ed5d4) ===
void EGG_Display_assertFail_804ed5d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804ed968 (0x804ed968) ===
undefined4 * gfx_EGG_Display_804ed968(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804ed9a4 (0x804ed9a4) ===
int EGG_Display_validate_804ed9a4(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804ed9fc (0x804ed9fc) ===
undefined4 EGG_Display_validate_804ed9fc(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x18c,8);
  }
  return 0;
}

// === gfx_EGG_Display_804eda70 (0x804eda70) ===
undefined4 * gfx_EGG_Display_804eda70(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FUN_segment_0__804a97a4(param_1 + 6);
  *param_1 = 0;
  param_1[6] = 0x18;
  return param_1;
}

// === EGG_Display_validate_804edad0 (0x804edad0) ===
int EGG_Display_validate_804edad0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x18,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804edb30 (0x804edb30) ===
undefined4 EGG_Display_validate_804edb30(int param_1)

{
  if (param_1 != 0) {
    nw4r_g3d_validate_80500540(param_1 + 0x14d4,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x26c,8);
  }
  return 0;
}

// === EGG_Display_assertFail_804edbb0 (0x804edbb0) ===
void EGG_Display_assertFail_804edbb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ede88 (0x804ede88) ===
void EGG_Display_assertFail_804ede88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ee174 (0x804ee174) ===
void EGG_Display_assertFail_804ee174(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ee42c (0x804ee42c) ===
void EGG_Display_assertFail_804ee42c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ee6e0 (0x804ee6e0) ===
void EGG_Display_assertFail_804ee6e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804eea14 (0x804eea14) ===
undefined4 * gfx_EGG_Display_804eea14(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804eea50 (0x804eea50) ===
int EGG_Display_validate_804eea50(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_assertFail_804eeaa8 (0x804eeaa8) ===
void EGG_Display_assertFail_804eeaa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804eed5c (0x804eed5c) ===
void EGG_Display_assertFail_804eed5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ef010 (0x804ef010) ===
void EGG_Display_assertFail_804ef010(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_assertFail_804ef2e0 (0x804ef2e0) ===
void EGG_Display_assertFail_804ef2e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804ef590 (0x804ef590) ===
void gfx_EGG_Display_804ef590(undefined4 param_1,int param_2)

{
  if (param_2 - 6U < 0x8f) {
                    /* WARNING: Could not emulate address calculation at 0x804ef5bc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((param_2 - 6U) * 4))();
    return;
  }
  return;
}

// === gfx_EGG_Display_804f3280 (0x804f3280) ===
void gfx_EGG_Display_804f3280(undefined4 param_1,int param_2)

{
  if (param_2 - 6U < 0x8e) {
                    /* WARNING: Could not emulate address calculation at 0x804f32ac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((param_2 - 6U) * 4))();
    return;
  }
  return;
}

// === gfx_EGG_Display_804f4774 (0x804f4774) ===
undefined4 gfx_EGG_Display_804f4774(int param_1)

{
  if (param_1 == 0x44) {
    return 2;
  }
  if (param_1 < 0x44) {
    if (param_1 == 0xc) {
      return 10;
    }
    if (0xb < param_1) {
      if (param_1 == 0xf) {
        return 2;
      }
      if (param_1 < 0xf) {
        if (0xd < param_1) {
          return 0xb;
        }
        return 2;
      }
      if (0x3a < param_1) {
        return 1;
      }
      if (0x18 < param_1) {
        return 2;
      }
      return 1;
    }
    if (param_1 == 8) {
      return 6;
    }
    if (7 < param_1) {
      if (param_1 == 10) {
        return 8;
      }
      if (9 < param_1) {
        return 9;
      }
      return 7;
    }
    if (5 < param_1) {
      return 3;
    }
    if (-1 < param_1) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x78) {
      if (0x59 < param_1) {
        if (0x67 < param_1) {
          return 2;
        }
        if (0x5d < param_1) {
          return 1;
        }
        return 4;
      }
      if (0x57 < param_1) {
        return 1;
      }
      if (0x54 < param_1) {
        return 4;
      }
      return 1;
    }
    if (param_1 < 0x8a) {
      if (0x87 < param_1) {
        return 1;
      }
      if (0x79 < param_1) {
        return 4;
      }
      return 1;
    }
    if (param_1 < 0x95) {
      if (0x8b < param_1) {
        return 1;
      }
      return 4;
    }
  }
  return 1;
}

// === gfx_EGG_Display_804f4c44 (0x804f4c44) ===
undefined4 gfx_EGG_Display_804f4c44(int param_1)

{
  if (param_1 < 0x58) {
    if (0x47 < param_1) {
      if (0x54 < param_1) {
        return 0;
      }
      return 1;
    }
    if (0xf < param_1) {
      return 0;
    }
    if (-1 < param_1) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x68) {
      if (0x5d < param_1) {
        return 1;
      }
      if (0x59 < param_1) {
        return 0;
      }
      return 1;
    }
    if (param_1 < 0x95) {
      return 0;
    }
  }
  return 0;
}

// === gfx_EGG_Display_804f4ce4 (0x804f4ce4) ===
undefined4 gfx_EGG_Display_804f4ce4(int param_1)

{
  if (param_1 < 0x68) {
    if (0x50 < param_1) {
      if (param_1 == 0x5a) {
        return 0;
      }
      if (0x59 < param_1) {
        return 1;
      }
      if (0x53 < param_1) {
        return 1;
      }
      return 0;
    }
    if (0xf < param_1) {
      if (0x47 < param_1) {
        return 1;
      }
      return 0;
    }
    if (-1 < param_1) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x87) {
      if (param_1 == 0x82) {
        return 0;
      }
      if (0x81 < param_1) {
        return 1;
      }
      if (0x7e < param_1) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0x94) {
      return 0;
    }
    if (param_1 < 0x94) {
      if (0x8f < param_1) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

// === gfx_EGG_Display_804f4dfc (0x804f4dfc) ===
undefined4 gfx_EGG_Display_804f4dfc(int param_1)

{
  if (param_1 < 0x95) {
    if (0xf < param_1) {
      return 1;
    }
    if (-1 < param_1) {
      return 0;
    }
  }
  else if (param_1 < 0xb3) {
    if (0xac < param_1) {
      return 4;
    }
    return 2;
  }
  return 0xffffffff;
}

// === gfx_EGG_Display_804f4e54 (0x804f4e54) ===
undefined4 gfx_EGG_Display_804f4e54(int param_1)

{
  if (param_1 < 0x68) {
    if (param_1 == 0x2e) {
      return 0x59;
    }
    if (0x2d < param_1) {
      if (0x3e < param_1) {
        if (0x47 < param_1) {
          if (0x54 < param_1) {
            return 1;
          }
          return 0x55;
        }
        if (0x44 < param_1) {
          return 0x53;
        }
        return 0x54;
      }
      if (0x38 < param_1) {
        if (0x3a < param_1) {
          return 0xffffffff;
        }
        return 0xce;
      }
      if (0x34 < param_1) {
        return 0xffffffff;
      }
      if (0x31 < param_1) {
        return 0xcf;
      }
      return 0x5a;
    }
    if (0x1a < param_1) {
      if (param_1 == 0x1f) {
        return 0x5a;
      }
      if (0x1e < param_1) {
        if (0x27 < param_1) {
          return 0x5a;
        }
        return 0x59;
      }
      if (0x1d < param_1) {
        return 0x59;
      }
      return 0x57;
    }
    if (param_1 == 0xf) {
      return 0xce;
    }
    if (0xe < param_1) {
      if (0x18 < param_1) {
        return 0x56;
      }
      return 0xffffffff;
    }
    if (-1 < param_1) {
      return 0xffffffff;
    }
  }
  else {
    if (param_1 < 0x90) {
      if (0x77 < param_1) {
        if (0x7e < param_1) {
          if (0x8b < param_1) {
            return 0x53;
          }
          return 1;
        }
        if (0x7c < param_1) {
          return 3;
        }
        if (0x79 < param_1) {
          return 2;
        }
        return 0xffffffff;
      }
      if (0x6d < param_1) {
        if (0x6f < param_1) {
          return 0x5b;
        }
        return 0xffffffff;
      }
      if (0x6b < param_1) {
        return 0x5b;
      }
      if (0x69 < param_1) {
        return 0xffffffff;
      }
      return 0x5b;
    }
    if (param_1 < 0xa3) {
      if (0x99 < param_1) {
        if (0xa0 < param_1) {
          return 3;
        }
        return 2;
      }
      if (param_1 == 0x94) {
        return 0xffffffff;
      }
      if (0x93 < param_1) {
        return 0xffffffff;
      }
      return 0x73;
    }
    if (param_1 < 0xad) {
      if (0xa9 < param_1) {
        return 4;
      }
      return 1;
    }
    if (param_1 < 0xb3) {
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

// === gfx_EGG_Display_804f50e4 (0x804f50e4) ===
undefined4 gfx_EGG_Display_804f50e4(int param_1)

{
  if (param_1 < 0x48) {
    if (0x34 < param_1) {
      if (0x3c < param_1) {
        if (0x44 < param_1) {
          return 6;
        }
        if (0x3e < param_1) {
          return 5;
        }
        return 0xb;
      }
      if (0x3a < param_1) {
        return 10;
      }
      if (0x38 < param_1) {
        return 9;
      }
      return 8;
    }
    if (param_1 == 0xe) {
      return 0xffffffff;
    }
    if (0xd < param_1) {
      if (0xf < param_1) {
        return 0xffffffff;
      }
      return 9;
    }
    if (0xc < param_1) {
      return 8;
    }
    if (-1 < param_1) {
      return 0xffffffff;
    }
  }
  else {
    if (param_1 < 0x8c) {
      if (0x79 < param_1) {
        if (0x7e < param_1) {
          return 3;
        }
        if (0x7c < param_1) {
          return 4;
        }
        return 2;
      }
      if (0x67 < param_1) {
        return 0xffffffff;
      }
      if (0x54 < param_1) {
        return 3;
      }
      return 7;
    }
    if (param_1 == 0x94) {
      return 0xffffffff;
    }
    if (param_1 < 0x94) {
      if (0x8f < param_1) {
        return 0xc;
      }
      return 6;
    }
    if (param_1 < 0xb3) {
      if (0xac < param_1) {
        return 0xffffffff;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

// === gfx_EGG_Display_804f526c (0x804f526c) ===
undefined4 gfx_EGG_Display_804f526c(int param_1)

{
  if (param_1 < 0x68) {
    if (param_1 == 0xf) {
      return 1;
    }
    if (0xe < param_1) {
      if (0x31 < param_1) {
        if (0x3a < param_1) {
          return 0;
        }
        return 1;
      }
      if (0x1d < param_1) {
        return 3;
      }
      if (0x18 < param_1) {
        return 2;
      }
      return 0;
    }
    if (param_1 == 0xd) {
      return 1;
    }
    if (0xc < param_1) {
      return 0;
    }
    if (-1 < param_1) {
      return 0;
    }
  }
  else {
    if (param_1 < 0x78) {
      if (0x6d < param_1) {
        if (0x6f < param_1) {
          return 3;
        }
        return 1;
      }
      if (0x6b < param_1) {
        return 3;
      }
      if (0x69 < param_1) {
        return 1;
      }
      return 3;
    }
    if (param_1 < 0xad) {
      if (0x94 < param_1) {
        return 0;
      }
      return 0;
    }
    if (param_1 < 0xb3) {
      return 0;
    }
  }
  return 0;
}

// === gfx_EGG_Display_804f53a0 (0x804f53a0) ===
undefined4 gfx_EGG_Display_804f53a0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xd3) {
                    /* WARNING: Could not emulate address calculation at 0x804f53b4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 << 2))();
    return uVar1;
  }
  return 6;
}

// === EGG_Display_validate_804f5638 (0x804f5638) ===
int EGG_Display_validate_804f5638(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f56e0 (0x804f56e0) ===
int EGG_Display_validate_804f56e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5788 (0x804f5788) ===
int EGG_Display_validate_804f5788(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5830 (0x804f5830) ===
int EGG_Display_validate_804f5830(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f58d8 (0x804f58d8) ===
int EGG_Display_validate_804f58d8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5980 (0x804f5980) ===
int EGG_Display_validate_804f5980(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5a28 (0x804f5a28) ===
int EGG_Display_validate_804f5a28(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5ad0 (0x804f5ad0) ===
int EGG_Display_validate_804f5ad0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5b78 (0x804f5b78) ===
int EGG_Display_validate_804f5b78(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5c20 (0x804f5c20) ===
int EGG_Display_validate_804f5c20(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804f5ca8 (0x804f5ca8) ===
undefined4 gfx_EGG_Display_804f5ca8(void)

{
  FUN_segment_0__8072e220();
  return 0;
}

// === gfx_EGG_Display_804f5cec (0x804f5cec) ===
int gfx_EGG_Display_804f5cec(void)

{
  uint uVar1;
  
  uVar1 = FUN_segment_0__8072e220();
  return ((int)(-uVar1 | uVar1) >> 0x1f) + 2;
}

// === EGG_Display_validate_804f5d1c (0x804f5d1c) ===
int EGG_Display_validate_804f5d1c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804f5da4 (0x804f5da4) ===
undefined4 gfx_EGG_Display_804f5da4(void)

{
  FUN_segment_0__8072e220();
  return 0;
}

// === gfx_EGG_Display_804f5de8 (0x804f5de8) ===
int gfx_EGG_Display_804f5de8(void)

{
  uint uVar1;
  
  uVar1 = FUN_segment_0__8072e220();
  return ((int)(-uVar1 | uVar1) >> 0x1f) + 3;
}

// === EGG_Display_validate_804f5e18 (0x804f5e18) ===
int EGG_Display_validate_804f5e18(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5ec0 (0x804f5ec0) ===
int EGG_Display_validate_804f5ec0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f5f68 (0x804f5f68) ===
int EGG_Display_validate_804f5f68(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6010 (0x804f6010) ===
int EGG_Display_validate_804f6010(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f60b8 (0x804f60b8) ===
int EGG_Display_validate_804f60b8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6160 (0x804f6160) ===
int EGG_Display_validate_804f6160(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804f61e8 (0x804f61e8) ===
undefined4 gfx_EGG_Display_804f61e8(void)

{
  FUN_segment_0__8072e220();
  return 0;
}

// === gfx_EGG_Display_804f622c (0x804f622c) ===
int gfx_EGG_Display_804f622c(void)

{
  uint uVar1;
  
  uVar1 = FUN_segment_0__8072e220();
  return ((int)(-uVar1 | uVar1) >> 0x1f) + 4;
}

// === EGG_Display_validate_804f625c (0x804f625c) ===
int EGG_Display_validate_804f625c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6304 (0x804f6304) ===
int EGG_Display_validate_804f6304(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f63ac (0x804f63ac) ===
int EGG_Display_validate_804f63ac(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6470 (0x804f6470) ===
int EGG_Display_validate_804f6470(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6534 (0x804f6534) ===
int EGG_Display_validate_804f6534(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f65dc (0x804f65dc) ===
int EGG_Display_validate_804f65dc(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f6684 (0x804f6684) ===
int EGG_Display_validate_804f6684(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804ca1a0(param_1 + 0x11c,0xffffffff);
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f671c (0x804f671c) ===
int EGG_Display_validate_804f671c(int param_1,int param_2)

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

// === EGG_Display_validate_804f67ac (0x804f67ac) ===
int EGG_Display_validate_804f67ac(int param_1,int param_2)

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

// === EGG_Display_validate_804f683c (0x804f683c) ===
int EGG_Display_validate_804f683c(int param_1,int param_2)

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

// === EGG_Display_validate_804f68cc (0x804f68cc) ===
int EGG_Display_validate_804f68cc(int param_1,int param_2)

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

// === EGG_Display_validate_804f695c (0x804f695c) ===
int EGG_Display_validate_804f695c(int param_1,int param_2)

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

// === EGG_Display_validate_804f69ec (0x804f69ec) ===
int EGG_Display_validate_804f69ec(int param_1,int param_2)

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

// === EGG_Display_validate_804f6aac (0x804f6aac) ===
int EGG_Display_validate_804f6aac(int param_1,int param_2)

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

// === EGG_Display_validate_804f6b6c (0x804f6b6c) ===
int EGG_Display_validate_804f6b6c(int param_1,int param_2)

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

// === EGG_Display_validate_804f6bfc (0x804f6bfc) ===
int EGG_Display_validate_804f6bfc(int param_1,int param_2)

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

// === EGG_Display_validate_804f6c8c (0x804f6c8c) ===
int EGG_Display_validate_804f6c8c(int param_1,int param_2)

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

// === EGG_Display_validate_804f6d1c (0x804f6d1c) ===
int EGG_Display_validate_804f6d1c(int param_1,int param_2)

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

// === EGG_Display_validate_804f6df0 (0x804f6df0) ===
int EGG_Display_validate_804f6df0(int param_1,int param_2)

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

// === EGG_Display_validate_804f6eb8 (0x804f6eb8) ===
int EGG_Display_validate_804f6eb8(int param_1,int param_2)

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

// === EGG_Display_validate_804f6f48 (0x804f6f48) ===
int EGG_Display_validate_804f6f48(int param_1,int param_2)

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

// === EGG_Display_validate_804f6fc0 (0x804f6fc0) ===
void EGG_Display_validate_804f6fc0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f6ff0 (0x804f6ff0) ===
void EGG_Display_validate_804f6ff0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7020 (0x804f7020) ===
void EGG_Display_validate_804f7020(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7050 (0x804f7050) ===
void EGG_Display_validate_804f7050(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7080 (0x804f7080) ===
void EGG_Display_validate_804f7080(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f70b0 (0x804f70b0) ===
void EGG_Display_validate_804f70b0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f70e0 (0x804f70e0) ===
void EGG_Display_validate_804f70e0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7110 (0x804f7110) ===
void EGG_Display_validate_804f7110(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7140 (0x804f7140) ===
void EGG_Display_validate_804f7140(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7170 (0x804f7170) ===
void EGG_Display_validate_804f7170(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f71a0 (0x804f71a0) ===
void EGG_Display_validate_804f71a0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f71d0 (0x804f71d0) ===
void EGG_Display_validate_804f71d0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7200 (0x804f7200) ===
void EGG_Display_validate_804f7200(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7230 (0x804f7230) ===
void EGG_Display_validate_804f7230(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7260 (0x804f7260) ===
void EGG_Display_validate_804f7260(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7290 (0x804f7290) ===
void EGG_Display_validate_804f7290(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f72c0 (0x804f72c0) ===
void EGG_Display_validate_804f72c0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f72f0 (0x804f72f0) ===
void EGG_Display_validate_804f72f0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7320 (0x804f7320) ===
void EGG_Display_validate_804f7320(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7350 (0x804f7350) ===
void EGG_Display_validate_804f7350(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7380 (0x804f7380) ===
void EGG_Display_validate_804f7380(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f73b0 (0x804f73b0) ===
void EGG_Display_validate_804f73b0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f73e0 (0x804f73e0) ===
void EGG_Display_validate_804f73e0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7410 (0x804f7410) ===
void EGG_Display_validate_804f7410(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7440 (0x804f7440) ===
void EGG_Display_validate_804f7440(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7470 (0x804f7470) ===
void EGG_Display_validate_804f7470(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f74a0 (0x804f74a0) ===
void EGG_Display_validate_804f74a0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f74d0 (0x804f74d0) ===
void EGG_Display_validate_804f74d0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7500 (0x804f7500) ===
void EGG_Display_validate_804f7500(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7530 (0x804f7530) ===
void EGG_Display_validate_804f7530(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7560 (0x804f7560) ===
void EGG_Display_validate_804f7560(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7590 (0x804f7590) ===
void EGG_Display_validate_804f7590(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f75c0 (0x804f75c0) ===
void EGG_Display_validate_804f75c0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f75f0 (0x804f75f0) ===
void EGG_Display_validate_804f75f0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7620 (0x804f7620) ===
void EGG_Display_validate_804f7620(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7650 (0x804f7650) ===
void EGG_Display_validate_804f7650(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804f7680 (0x804f7680) ===
void EGG_Display_validate_804f7680(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f76b0 (0x804f76b0) ===
void EGG_Display_validate_804f76b0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f76e0 (0x804f76e0) ===
void EGG_Display_validate_804f76e0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7710 (0x804f7710) ===
void EGG_Display_validate_804f7710(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7740 (0x804f7740) ===
void EGG_Display_validate_804f7740(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7770 (0x804f7770) ===
void EGG_Display_validate_804f7770(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f77a0 (0x804f77a0) ===
void EGG_Display_validate_804f77a0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f77d0 (0x804f77d0) ===
void EGG_Display_validate_804f77d0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7800 (0x804f7800) ===
void EGG_Display_validate_804f7800(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7830 (0x804f7830) ===
void EGG_Display_validate_804f7830(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7860 (0x804f7860) ===
void EGG_Display_validate_804f7860(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7890 (0x804f7890) ===
void EGG_Display_validate_804f7890(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f78c0 (0x804f78c0) ===
void EGG_Display_validate_804f78c0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f78f0 (0x804f78f0) ===
void EGG_Display_validate_804f78f0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7920 (0x804f7920) ===
void EGG_Display_validate_804f7920(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7950 (0x804f7950) ===
void EGG_Display_validate_804f7950(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7980 (0x804f7980) ===
void EGG_Display_validate_804f7980(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f79b0 (0x804f79b0) ===
void EGG_Display_validate_804f79b0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f79e0 (0x804f79e0) ===
void EGG_Display_validate_804f79e0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7a10 (0x804f7a10) ===
void EGG_Display_validate_804f7a10(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7a40 (0x804f7a40) ===
void EGG_Display_validate_804f7a40(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7a70 (0x804f7a70) ===
void EGG_Display_validate_804f7a70(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7aa0 (0x804f7aa0) ===
void EGG_Display_validate_804f7aa0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7ad0 (0x804f7ad0) ===
void EGG_Display_validate_804f7ad0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7b00 (0x804f7b00) ===
void EGG_Display_validate_804f7b00(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7b30 (0x804f7b30) ===
void EGG_Display_validate_804f7b30(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7b60 (0x804f7b60) ===
void EGG_Display_validate_804f7b60(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7b90 (0x804f7b90) ===
void EGG_Display_validate_804f7b90(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7bc0 (0x804f7bc0) ===
void EGG_Display_validate_804f7bc0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7bf0 (0x804f7bf0) ===
void EGG_Display_validate_804f7bf0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7c20 (0x804f7c20) ===
void EGG_Display_validate_804f7c20(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Display_validate_804f7c50 (0x804f7c50) ===
undefined4 EGG_Display_validate_804f7c50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7b8);
  }
  iVar1 = gfx_EGG_Display_804f4774(param_2);
  if (iVar1 != 2) {
    if ((9 < param_2 - 0x5eU) && (1 < param_2 - 0x58U)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x4c0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x4c0);
  }
  if (0x21 < param_2 - 0x19U) {
    if (0xf < param_2 - 0x68U) {
      if ((param_2 == 0xd) || (param_2 == 0xf)) goto LAB_segment_0__804f7cbc;
      if (param_2 != 0x44) {
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x4c0);
  }
LAB_segment_0__804f7cbc:
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c0);
}

// === gfx_EGG_Display_804f7d6c (0x804f7d6c) ===
undefined4 gfx_EGG_Display_804f7d6c(uint param_1)

{
  if (0xb2 < param_1) {
    return 0xffffffff;
  }
  if (param_1 == 0x78) {
    return 3;
  }
  if ((int)param_1 < 0x78) {
    if ((int)param_1 < 8) {
      if (param_1 == 4) {
        return 8;
      }
      if (3 < (int)param_1) {
        if (5 < (int)param_1) {
          return 0;
        }
        return 7;
      }
      if (param_1 == 0) {
        return 9;
      }
      if (-1 < (int)param_1) {
        return 4;
      }
    }
    else {
      if (param_1 == 0x14) {
        return 10;
      }
      if ((int)param_1 < 0x14) {
        if (0xf < (int)param_1) {
          return 6;
        }
      }
      else if (param_1 == 0x40) {
        return 5;
      }
    }
  }
  else {
    if (param_1 == 0x98) {
      return 3;
    }
    if ((int)param_1 < 0x98) {
      if (param_1 == 0x95) {
        return 6;
      }
      if ((int)param_1 < 0x95) {
        if ((int)param_1 < 0x7a) {
          return 2;
        }
      }
      else if ((int)param_1 < 0x97) {
        return 10;
      }
    }
    else {
      if (param_1 == 0xad) {
        return 0;
      }
      if (((int)param_1 < 0xad) && (param_1 == 0x9b)) {
        return 5;
      }
    }
  }
  return 1;
}

// === EGG_Display_assertFail_804f7e7c (0x804f7e7c) ===
void EGG_Display_assertFail_804f7e7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x9c);
}

// === EGG_Display_assertFail_804f7eb4 (0x804f7eb4) ===
void EGG_Display_assertFail_804f7eb4(void)

{
  int iVar1;
  
  iVar1 = iRam00000000;
  if (iRam00000000 != 0) {
    FUN_segment_0__804c12bc(*(undefined4 *)(iRam00000000 + 0x98),1);
    EGG_Display_validate_804e3ca0(*(undefined4 *)(iVar1 + 0x90),1);
    FUN_segment_0__80540758(*(undefined4 *)(iVar1 + 0x94),1);
    FUN_segment_0__804deee0(iVar1 + 0x34,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1);
  }
  iRam00000000 = 0;
  return;
}

// === gfx_EGG_Display_804f7f2c (0x804f7f2c) ===
undefined4 * gfx_EGG_Display_804f7f2c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined *)(param_1 + 8) = 0;
  param_1[9] = 7;
  param_1[10] = 0xff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  FUN_segment_0__804deed0(param_1 + 0xd);
  param_1[0x26] = 0;
  return param_1;
}

// === EGG_Display_validate_804f7fb0 (0x804f7fb0) ===
int EGG_Display_validate_804f7fb0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c12bc(*(undefined4 *)(param_1 + 0x98),1);
    EGG_Display_validate_804e3ca0(*(undefined4 *)(param_1 + 0x90),1);
    FUN_segment_0__80540758(*(undefined4 *)(param_1 + 0x94),1);
    FUN_segment_0__804deee0(param_1 + 0x34,0xffffffff);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804f8030 (0x804f8030) ===
void EGG_Display_validate_804f8030(undefined4 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x14,*(undefined4 *)(iRam00000000 + 0x34),4);
}

// === EGG_Display_validate_804f81c4 (0x804f81c4) ===
void EGG_Display_validate_804f81c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x20) != 0) && (*(int *)(iRam00000000 + 0x70) == 1)) {
    FUN_segment_0__804df608(param_1 + 0x34);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar1 = gfx_EGG_Display_804f4774(uVar2);
  FUN_segment_0__804df39c(param_1 + 0x34,iVar1 != 2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x408);
}

// === gfx_EGG_Display_804f8288 (0x804f8288) ===
void gfx_EGG_Display_804f8288(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  gfx_EGG_Display_804e529c(*param_1,param_1[5]);
  param_1[9] = 0;
  if (*param_1 != 0) {
    iVar2 = gfx_EGG_Display_804e60b4();
    param_1[9] = iVar2;
  }
  iVar2 = gfx_EGG_Display_804e4590(param_1[0x24]);
  if (iVar2 != 0) {
    param_1[9] = param_1[9] | 2;
  }
  uVar1 = param_1[9];
  iVar2 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))();
  uVar1 = -(-((uVar1 & 1 ^ 1) & ((1U - iVar2 | iVar2 - 1U) >> 0x1f ^ 1)) >> 0x1f &
           (uint)(param_1[0xc] == 0));
  if (uVar1 >> 0x1f != (uint)*(byte *)(iRam00000000 + 0x4d)) {
    *(byte *)(iRam00000000 + 0x4d) = (byte)(uVar1 >> 0x1f);
  }
  if (((param_1[9] & 2U) != 0) && (iVar2 = gfx_EGG_Display_804f7d6c(param_1[3]), iVar2 == 5)) {
    param_1[3] = 5;
  }
  return;
}

// === EGG_Display_assertFail_804f83a4 (0x804f83a4) ===
void EGG_Display_assertFail_804f83a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804f86c8 (0x804f86c8) ===
void gfx_EGG_Display_804f86c8(undefined4 *param_1)

{
  if (*(char *)(param_1 + 8) != 0) {
    *(undefined *)(param_1 + 8) = 0;
  }
  FUN_segment_0__804def84(param_1 + 0xd);
  gfx_EGG_Display_804e558c(*param_1);
  return;
}

// === EGG_Display_validate_804f8714 (0x804f8714) ===
void EGG_Display_validate_804f8714(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14 [2];
  
  if (param_1[0xc] != 0) {
    gfx_EGG_Display_804e4620(param_1[0x24]);
  }
  gfx_EGG_Display_804e56e4(*param_1);
  gfx_EGG_Display_804e3d54(param_1[0x24]);
  if (param_1[0xc] == 1) {
    if ((param_1[7] < 1) &&
       (iVar3 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))(),
       -1 < (int)(1U - iVar3 | iVar3 - 1U))) {
      local_14[0] = param_1[10];
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*(int *)(iRam00000000 + 0x54) + 0x24),local_14);
    }
    param_1[7] = param_1[7] + -1;
  }
  else if (param_1[0xc] == 2) {
    if ((param_1[7] < 1) &&
       (iVar3 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))(),
       -1 < (int)(1U - iVar3 | iVar3 - 1U))) {
      local_18 = param_1[10];
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*(int *)(iRam00000000 + 0x54) + 0x24),&local_18);
    }
    param_1[7] = param_1[7] + -1;
  }
  bVar1 = false;
  if ((-1 < param_1[0xb]) && (iVar3 = param_1[0xb] + 1, param_1[0xb] = iVar3, 0x16 < iVar3)) {
    bVar1 = true;
  }
  if ((bVar1) && (gfx_EGG_Display_804e5df4(*param_1), iRam00000000 != 0)) {
    FUN_segment_0__80660a9c();
  }
  param_1[9] = 0;
  if (*param_1 != 0) {
    iVar3 = gfx_EGG_Display_804e60b4();
    param_1[9] = iVar3;
  }
  iVar3 = gfx_EGG_Display_804e4590(param_1[0x24]);
  if (iVar3 != 0) {
    param_1[9] = param_1[9] | 2;
  }
  uVar4 = param_1[9];
  iVar3 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))();
  uVar4 = -(-((uVar4 & 1 ^ 1) & ((1U - iVar3 | iVar3 - 1U) >> 0x1f ^ 1)) >> 0x1f &
           (uint)(param_1[0xc] == 0));
  if (uVar4 >> 0x1f != (uint)*(byte *)(iRam00000000 + 0x4d)) {
    *(byte *)(iRam00000000 + 0x4d) = (byte)(uVar4 >> 0x1f);
  }
  if (((param_1[9] & 2U) != 0) && (iVar3 = gfx_EGG_Display_804f7d6c(param_1[3]), iVar3 == 5)) {
    param_1[3] = 5;
  }
  bVar2 = false;
  iVar3 = gfx_EGG_Display_804e6174(*param_1);
  if ((iVar3 != 0) || (bVar1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (bVar2) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804f8a44 (0x804f8a44) ===
void gfx_EGG_Display_804f8a44(undefined4 *param_1)

{
  if (*(char *)(param_1 + 8) != 0) {
    *(undefined *)(param_1 + 8) = 0;
  }
  FUN_segment_0__804def84(param_1 + 0xd);
  gfx_EGG_Display_804e558c(*param_1);
  EGG_Display_validate_804f8714(param_1);
  return;
}

// === EGG_Display_validate_804f8a98 (0x804f8a98) ===
void EGG_Display_validate_804f8a98(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_segment_0__804def84(param_1 + 0xd);
  gfx_EGG_Display_804e558c(*param_1);
  gfx_EGG_Display_804e56e4(*param_1);
  gfx_EGG_Display_804e3d54(param_1[0x24]);
  param_1[9] = 0;
  if (*param_1 != 0) {
    iVar2 = gfx_EGG_Display_804e60b4();
    param_1[9] = iVar2;
  }
  iVar2 = gfx_EGG_Display_804e4590(param_1[0x24]);
  if (iVar2 != 0) {
    param_1[9] = param_1[9] | 2;
  }
  uVar1 = param_1[9];
  iVar2 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))();
  uVar1 = -(-((uVar1 & 1 ^ 1) & ((1U - iVar2 | iVar2 - 1U) >> 0x1f ^ 1)) >> 0x1f &
           (uint)(param_1[0xc] == 0));
  if (uVar1 >> 0x1f != (uint)*(byte *)(iRam00000000 + 0x4d)) {
    *(byte *)(iRam00000000 + 0x4d) = (byte)(uVar1 >> 0x1f);
  }
  if (((param_1[9] & 2U) != 0) && (iVar2 = gfx_EGG_Display_804f7d6c(param_1[3]), iVar2 == 5)) {
    param_1[3] = 5;
  }
  iVar2 = gfx_EGG_Display_804e6174(*param_1);
  if (iVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === gfx_EGG_Display_804f8c44 (0x804f8c44) ===
void gfx_EGG_Display_804f8c44(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != param_2) {
    iVar1 = gfx_EGG_Display_804f7d6c(*(int *)(param_1 + 0xc));
    iVar2 = gfx_EGG_Display_804f7d6c(param_2);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0xc) = param_2;
      *(undefined4 *)(param_1 + 0x18) = param_3;
    }
    else {
      gfx_EGG_Display_804f7d6c(*(undefined4 *)(param_1 + 0xc));
      gfx_EGG_Display_804f7d6c(param_2);
    }
  }
  return;
}

// === gfx_EGG_Display_804f8cd0 (0x804f8cd0) ===
void gfx_EGG_Display_804f8cd0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 - 1U < 2) {
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (*(int *)(param_1 + 0x1c) <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    return;
  }
  if (iVar1 != 0) {
    if (iVar1 != 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 5;
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}

// === gfx_EGG_Display_804f8d34 (0x804f8d34) ===
void gfx_EGG_Display_804f8d34(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    return;
  }
  if (*(int *)(param_1 + 0x30) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) <= param_2) {
    return;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}

// === EGG_Display_validate_804f8d78 (0x804f8d78) ===
void EGG_Display_validate_804f8d78(int param_1)

{
  if ((*(uint *)(param_1 + 0x24) & 4) == 0) {
    if ((*(uint *)(param_1 + 0x24) & 2) == 0) {
      gfx_EGG_Display_804f8c44(param_1,0x40,0);
      gfx_EGG_Display_804f8cd0(param_1,0,0xff);
    }
    else {
      gfx_EGG_Display_804f8c44(param_1,5,0);
      gfx_EGG_Display_804f8cd0(param_1,0,0xff);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === EGG_Display_validate_804f8e14 (0x804f8e14) ===
void EGG_Display_validate_804f8e14(undefined4 param_1)

{
  gfx_EGG_Display_804f8c44(param_1,4,0);
  gfx_EGG_Display_804f8cd0(param_1,0,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === EGG_Display_validate_804f8e7c (0x804f8e7c) ===
void EGG_Display_validate_804f8e7c(undefined4 param_1)

{
  gfx_EGG_Display_804f8c44(param_1,0,0);
  gfx_EGG_Display_804f8cd0(param_1,0,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === gfx_EGG_Display_804f8eec (0x804f8eec) ===
void gfx_EGG_Display_804f8eec(int param_1)

{
  gfx_EGG_Display_804f4c44(*(undefined4 *)(param_1 + 0xc));
  return;
}

// === gfx_EGG_Display_804f8ef4 (0x804f8ef4) ===
void gfx_EGG_Display_804f8ef4(int param_1)

{
  gfx_EGG_Display_804f4ce4(*(undefined4 *)(param_1 + 0xc));
  return;
}

// === gfx_EGG_Display_804f8efc (0x804f8efc) ===
void gfx_EGG_Display_804f8efc(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[9] = 0;
  if (*param_1 != 0) {
    iVar2 = gfx_EGG_Display_804e60b4(*param_1);
    param_1[9] = iVar2;
  }
  iVar2 = gfx_EGG_Display_804e4590(param_1[0x24]);
  if (iVar2 != 0) {
    param_1[9] = param_1[9] | 2;
  }
  uVar1 = param_1[9];
  iVar2 = (**(code **)(**(int **)(*(int *)(iRam00000000 + 0x54) + 0x24) + 0xc))();
  uVar1 = -(-((uVar1 & 1 ^ 1) & ((1U - iVar2 | iVar2 - 1U) >> 0x1f ^ 1)) >> 0x1f &
           (uint)(param_1[0xc] == 0));
  if (uVar1 >> 0x1f != (uint)*(byte *)(iRam00000000 + 0x4d)) {
    *(byte *)(iRam00000000 + 0x4d) = (byte)(uVar1 >> 0x1f);
  }
  if (((param_1[9] & 2U) != 0) && (iVar2 = gfx_EGG_Display_804f7d6c(param_1[3]), iVar2 == 5)) {
    param_1[3] = 5;
  }
  return;
}

// === EGG_Display_validate_804f9010 (0x804f9010) ===
void EGG_Display_validate_804f9010(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = gfx_EGG_Display_804e6174(*param_1);
  if ((iVar2 != 0) || (param_2 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === gfx_EGG_Display_804f90cc (0x804f90cc) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * gfx_EGG_Display_804f90cc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  gfx_EGG_Display_804ffaec();
  puVar5 = param_1 + 0x2a;
  *param_1 = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  gfx_nw4r_g3d_80500418(puVar5);
  *puVar5 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x87);
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0xac] = uRam00000008;
  puVar4 = param_1 + 0xbc;
  param_1[0xa8] = 0;
  param_1[0xa9] = puVar5;
  param_1[0xaa] = uVar1;
  param_1[0xab] = uVar2;
  uVar2 = uRam00000010;
  uVar1 = uRam0000000c;
  param_1[0xb1] = uRam00000014;
  param_1[0xad] = 0;
  param_1[0xae] = puVar5;
  param_1[0xaf] = uVar1;
  param_1[0xb0] = uVar2;
  uVar3 = uRam00000020;
  uVar2 = uRam0000001c;
  uVar1 = uRam00000018;
  param_1[0xb2] = 0;
  param_1[0xb3] = puVar5;
  param_1[0xb4] = uVar1;
  param_1[0xb5] = uVar2;
  param_1[0xb6] = uVar3;
  gfx_nw4r_g3d_80500418(puVar4);
  *puVar4 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x119);
  uVar2 = uRam00000028;
  uVar1 = uRam00000024;
  param_1[0x13e] = uRam0000002c;
  param_1[0x13a] = 0;
  param_1[0x13b] = puVar4;
  param_1[0x13c] = uVar1;
  param_1[0x13d] = uVar2;
  uVar2 = _DAT_00000034;
  uVar1 = _DAT_00000030;
  param_1[0x143] = uRam00000038;
  param_1[0x13f] = 0;
  param_1[0x140] = puVar4;
  param_1[0x141] = uVar1;
  param_1[0x142] = uVar2;
  uVar2 = uRam00000040;
  uVar1 = uRam0000003c;
  param_1[0x148] = uRam00000044;
  param_1[0x144] = 0;
  param_1[0x145] = puVar4;
  param_1[0x146] = uVar1;
  param_1[0x147] = uVar2;
  return param_1;
}

// === EGG_Display_validate_804f9284 (0x804f9284) ===
int EGG_Display_validate_804f9284(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x2f0 != 0) {
      FUN_segment_0__804c91a0(param_1 + 0x464,0xffffffff);
      nw4r_g3d_validate_80500540(param_1 + 0x2f0,0);
    }
    if (param_1 + 0xa8 != 0) {
      FUN_segment_0__804c91a0(param_1 + 0x21c,0xffffffff);
      nw4r_g3d_validate_80500540(param_1 + 0xa8,0);
    }
    EGG_Display_validate_804ffc20(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804f9328 (0x804f9328) ===
void gfx_EGG_Display_804f9328
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
               undefined param_9)

{
  param_1[0x28] = param_7;
  gfx_EGG_Display_804ffee8(param_1,2);
  gfx_EGG_Display_804ffef8(param_1,0,param_1 + 0x2a);
  gfx_EGG_Display_804ffef8(param_1,1,param_1 + 0xbc);
  gfx_EGG_Display_804f97d4(param_1 + 0x2a,0,param_2,param_3,param_4,param_8,param_9);
  gfx_EGG_Display_804f97d4(param_1 + 0xbc,1,param_2,param_5,param_6,param_8,param_9);
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}

// === gfx_EGG_Display_804f93f0 (0x804f93f0) ===
void gfx_EGG_Display_804f93f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}

// === gfx_EGG_Display_804f93f8 (0x804f93f8) ===
void gfx_EGG_Display_804f93f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}

// === gfx_EGG_Display_804f9400 (0x804f9400) ===
void gfx_EGG_Display_804f9400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  if (*(char *)(param_1 + 0x2e4) != 0) {
    FUN_segment_0__804c92e0(param_1 + 0x21c);
  }
  *(undefined4 *)(param_1 + 0x528) = param_2;
  if (*(char *)(param_1 + 0x52c) != 0) {
    FUN_segment_0__804c92e0(param_1 + 0x464,param_2);
  }
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}

// === gfx_EGG_Display_804f946c (0x804f946c) ===
void gfx_EGG_Display_804f946c(int param_1,char param_2,char param_3)

{
  *(char *)(param_1 + 0x2e4) = param_3;
  if (param_3 == 0) {
    FUN_segment_0__804c92e0(param_1 + 0x21c,0);
  }
  else {
    FUN_segment_0__804c92e0(param_1 + 0x21c,*(undefined4 *)(param_1 + 0x2e0));
  }
  *(char *)(param_1 + 0x52c) = param_2;
  if (param_2 == 0) {
    FUN_segment_0__804c92e0(param_1 + 0x464,0);
  }
  else {
    FUN_segment_0__804c92e0(param_1 + 0x464,*(undefined4 *)(param_1 + 0x528));
  }
  return;
}

// === gfx_EGG_Display_804f94f0 (0x804f94f0) ===
void gfx_EGG_Display_804f94f0(int param_1)

{
  gfx_EGG_Display_804ffc84();
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0x2e4) != 0) {
    FUN_segment_0__804c92e0(param_1 + 0x21c);
  }
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0x52c) != 0) {
    FUN_segment_0__804c92e0(param_1 + 0x464);
  }
  return;
}

// === gfx_EGG_Display_804f9558 (0x804f9558) ===
void gfx_EGG_Display_804f9558(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x26];
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
  }
  (**(code **)(*param_1 + 0x3c))(param_1,param_2);
  gfx_nw4r_g3d_805003cc(param_1,0x15,param_2);
  return;
}

// === gfx_EGG_Display_804f95e0 (0x804f95e0) ===
void gfx_EGG_Display_804f95e0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x27];
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  gfx_nw4r_g3d_805003cc(param_1,0x14,param_2);
  return;
}

// === gfx_EGG_Display_804f9678 (0x804f9678) ===
undefined4 * gfx_EGG_Display_804f9678(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x5d);
  uVar2 = uRam000000a4;
  uVar1 = uRam000000a0;
  param_1[0x82] = uRam000000a8;
  param_1[0x7e] = 0;
  param_1[0x7f] = param_1;
  param_1[0x80] = uVar1;
  param_1[0x81] = uVar2;
  uVar2 = uRam000000b0;
  uVar1 = uRam000000ac;
  param_1[0x87] = uRam000000b4;
  param_1[0x83] = 0;
  param_1[0x84] = param_1;
  param_1[0x85] = uVar1;
  param_1[0x86] = uVar2;
  uVar2 = uRam000000bc;
  uVar1 = uRam000000b8;
  param_1[0x8c] = uRam000000c0;
  param_1[0x88] = 0;
  param_1[0x89] = param_1;
  param_1[0x8a] = uVar1;
  param_1[0x8b] = uVar2;
  return param_1;
}

// === EGG_Display_validate_804f976c (0x804f976c) ===
int EGG_Display_validate_804f976c(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c91a0(param_1 + 0x174,0xffffffff);
    nw4r_g3d_validate_80500540(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804f97d4 (0x804f97d4) ===
void gfx_EGG_Display_804f97d4
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined auStack_48 [44];
  
  *(int *)(param_1 + 0x234) = param_2;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined *)(param_1 + 0x23c) = 1;
  FUN_segment_0__804ae324(auStack_48,param_1);
  FUN_segment_0__804ae36c(auStack_48,param_3,param_4,param_5,0);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x39);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804f98b0;
        }
      }
      bVar1 = false;
LAB_segment_0__804f98b0:
      if (bVar1) goto LAB_segment_0__804f98c0;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804f98c0:
  *(int *)(param_1 + 0x198) = param_1 + 0x1f8;
  *(int **)(param_1 + 0x180) = piVar2;
  *(int *)(param_1 + 0x19c) = param_1 + 0x20c;
  FUN_segment_0__804c9214(param_1 + 0x174,0,param_6,param_7);
  FUN_segment_0__804c92c4(param_1 + 0x174,0,param_1 + 0x220,0);
  if (param_2 == 0) {
    FUN_segment_0__804c92c4(param_1 + 0x174,6,param_1 + 0x220,1);
  }
  else if (param_2 == 1) {
    FUN_segment_0__804c92c4(param_1 + 0x174,5,param_1 + 0x220,1);
  }
  FUN_segment_0__804c92e0(param_1 + 0x174,*(undefined4 *)(param_1 + 0x238));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804f99a8;
        }
      }
      bVar1 = false;
LAB_segment_0__804f99a8:
      if (bVar1) goto LAB_segment_0__804f99b8;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804f99b8:
  FUN_segment_0__804ca310(piVar2,param_1 + 0x174);
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x3f);
  *(undefined4 *)(param_1 + 0x240) = uVar4;
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x4d);
  *(undefined4 *)(param_1 + 0x244) = uVar4;
  return;
}

// === gfx_EGG_Display_804f9a00 (0x804f9a00) ===
void gfx_EGG_Display_804f9a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  
  gfx_nw4r_g3d_80500740();
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar2,0);
  piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar4 = true;
          goto LAB_segment_0__804f9a9c;
        }
      }
      bVar4 = false;
LAB_segment_0__804f9a9c:
      if (bVar4) goto LAB_segment_0__804f9aac;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804f9aac:
  iVar1 = param_1 + 0x174;
  bVar4 = false;
  if (piVar5[0x15] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x2c] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x43] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x5a] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x71] == iVar1) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,2);
  }
  else {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  }
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  if (*(char *)(param_1 + 0x23c) == 0) {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  }
  else {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  }
  return;
}

// === gfx_EGG_Display_804f9bec (0x804f9bec) ===
void gfx_EGG_Display_804f9bec(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  gfx_nw4r_g3d_80500780();
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (*(int *)(iVar1 + 0x38) == 0) {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar3,0);
    *(float *)(param_1 + 0x7c) = g_Ram_float;
  }
  else {
    piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    if (*(int *)(*piVar2 + piVar2[0xe] * 0x10) != 0) {
      *(undefined *)((int)piVar2 + 0x35) = 1;
    }
    *(float *)(param_1 + 0x7c) = g_Ram_float;
  }
  if (*(int *)(param_1 + 0x240) != 0) {
    FUN_segment_0__804c99a8(param_1 + 0x174,&local_18,&local_20);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x240) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = local_18;
    *(undefined2 *)(iVar1 + 0x12) = local_16;
    *(undefined2 *)(iVar1 + 0x14) = local_14;
    *(undefined2 *)(iVar1 + 0x16) = local_12;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x240) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = local_20;
    *(undefined2 *)(iVar1 + 0x1a) = local_1e;
    *(undefined2 *)(iVar1 + 0x1c) = local_1c;
    *(undefined2 *)(iVar1 + 0x1e) = local_1a;
  }
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_segment_0__804c9aa4(param_1 + 0x174,&local_28);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x244) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = local_28;
    *(undefined2 *)(iVar1 + 0x12) = local_26;
    *(undefined2 *)(iVar1 + 0x14) = local_24;
    *(undefined2 *)(iVar1 + 0x16) = local_22;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x244) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = local_28;
    *(undefined2 *)(iVar1 + 0x1a) = local_26;
    *(undefined2 *)(iVar1 + 0x1c) = local_24;
    *(undefined2 *)(iVar1 + 0x1e) = local_22;
  }
  if ((*(char *)(param_1 + 0x23c) == '\x01') &&
     (iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4), *(int *)(iVar1 + 0x38) != 0)) {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  }
  else if ((*(char *)(param_1 + 0x23c) == 0) &&
          ((iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4), *(int *)(iVar1 + 0x38) != 1 &&
           (iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3), *(int *)(iVar1 + 0x38) != 0)))) {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,1);
  }
  return;
}

// === gfx_EGG_Display_804f9e74 (0x804f9e74) ===
int * gfx_EGG_Display_804f9e74(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 100) + 8);
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__804f9ee4;
      }
    }
    bVar1 = false;
LAB_segment_0__804f9ee4:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Display_validate_804f9f10 (0x804f9f10) ===
void EGG_Display_validate_804f9f10(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (piVar2[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar2,1);
  }
  else if (piVar2[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar2 + 0x30));
  }
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2); puVar5 != (void *)0;
          puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fa03c;
        }
      }
      bVar1 = false;
LAB_segment_0__804fa03c:
      if (bVar1) goto LAB_segment_0__804fa04c;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804fa04c:
  iVar4 = FUN_segment_0__804cb700(piVar2,param_2);
  if (iVar4 == 0) goto LAB_segment_0__804fa19c;
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  piVar2 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x28))(piVar2); puVar5 != (void *)0
          ; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fa0d8;
        }
      }
      bVar1 = false;
LAB_segment_0__804fa0d8:
      if (bVar1) goto LAB_segment_0__804fa0e8;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804fa0e8:
  if (*(int *)(param_1 + 0x234) == 0) {
    piVar6 = (int *)piVar2[0x26];
    if (piVar6 != (int *)0) {
      (**(code **)(*piVar6 + 8))(piVar6,piVar2,param_2);
    }
    (**(code **)(*piVar2 + 0x3c))(piVar2,param_2);
    gfx_nw4r_g3d_805003cc(piVar2,0x15,param_2);
  }
  else if (*(int *)(param_1 + 0x234) == 1) {
    piVar6 = (int *)piVar2[0x27];
    if (piVar6 != (int *)0) {
      (**(code **)(*piVar6 + 8))(piVar6,piVar2,param_2);
    }
    (**(code **)(*piVar2 + 0x40))(piVar2,param_2);
    gfx_nw4r_g3d_805003cc(piVar2,0x14,param_2);
  }
LAB_segment_0__804fa19c:
  gfx_nw4r_g3d_805003cc(param_1,0x16,param_2);
  return;
}

// === EGG_Display_validate_804fa1cc (0x804fa1cc) ===
void EGG_Display_validate_804fa1cc(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fa250;
        }
      }
      bVar1 = false;
LAB_segment_0__804fa250:
      if (bVar1) goto LAB_segment_0__804fa260;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804fa260:
  bVar1 = false;
  iVar2 = param_1 + 0x174;
  if ((param_2 == 0) || (piVar4[0x15] != iVar2)) {
    if ((param_2 == 1) || (piVar4[0x2c] != iVar2)) {
      if ((param_2 == 2) || (piVar4[0x43] != iVar2)) {
        if ((param_2 == 3) || (piVar4[0x5a] != iVar2)) {
          if ((param_2 != 4) && (piVar4[0x71] == iVar2)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    piVar4 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    if (piVar4[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar4 + 0x10));
    }
    if (piVar4[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar4,3);
    }
  }
  return;
}

// === gfx_EGG_Display_804fa3b4 (0x804fa3b4) ===
void gfx_EGG_Display_804fa3b4(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  piVar5 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x28))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fa468;
        }
      }
      bVar1 = false;
LAB_segment_0__804fa468:
      if (bVar1) goto LAB_segment_0__804fa478;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804fa478:
  if (*(int *)(param_1 + 0x234) == 0) {
    piVar4 = (int *)piVar5[0x26];
    if (piVar4 != (int *)0) {
      (**(code **)(*piVar4 + 8))(piVar4,piVar5,param_2);
    }
    (**(code **)(*piVar5 + 0x3c))(piVar5,param_2);
    gfx_nw4r_g3d_805003cc(piVar5,0x15,param_2);
  }
  else if (*(int *)(param_1 + 0x234) == 1) {
    piVar4 = (int *)piVar5[0x27];
    if (piVar4 != (int *)0) {
      (**(code **)(*piVar4 + 8))(piVar4,piVar5,param_2);
    }
    (**(code **)(*piVar5 + 0x40))(piVar5,param_2);
    gfx_nw4r_g3d_805003cc(piVar5,0x14,param_2);
  }
  return;
}

// === gfx_EGG_Display_804fa54c (0x804fa54c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804fa54c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Display_validate_804fa69c (0x804fa69c) ===
int EGG_Display_validate_804fa69c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      if (param_1 + 0x2f0 != 0) {
        FUN_segment_0__804c91a0(param_1 + 0x464,0xffffffff);
        nw4r_g3d_validate_80500540(param_1 + 0x2f0,0);
      }
      if (param_1 + 0xa8 != 0) {
        FUN_segment_0__804c91a0(param_1 + 0x21c,0xffffffff);
        nw4r_g3d_validate_80500540(param_1 + 0xa8,0);
      }
      EGG_Display_validate_804ffc20(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Display_validate_804fa768 (0x804fa768) ===
void EGG_Display_validate_804fa768(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === gfx_EGG_Display_804fa7d0 (0x804fa7d0) ===
undefined4 * gfx_EGG_Display_804fa7d0(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 1;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  return param_1;
}

// === EGG_Display_validate_804fa82c (0x804fa82c) ===
undefined4 EGG_Display_validate_804fa82c(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x62],0);
  }
  return 0;
}

// === EGG_Display_assertFail_804fa8a4 (0x804fa8a4) ===
void EGG_Display_assertFail_804fa8a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804faa24 (0x804faa24) ===
void gfx_EGG_Display_804faa24(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x174) = param_2;
  return;
}

// === gfx_EGG_Display_804faa2c (0x804faa2c) ===
void gfx_EGG_Display_804faa2c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x17c); iVar1 = iVar1 + 1) {
    FUN_segment_0__804c92e0(*(int *)(param_1 + 0x188) + iVar2 + 0x174,param_2);
    iVar2 = iVar2 + 0x240;
  }
  *(undefined4 *)(param_1 + 0x178) = param_2;
  return;
}

// === EGG_Display_assertFail_804faaa8 (0x804faaa8) ===
void EGG_Display_assertFail_804faaa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804fab48 (0x804fab48) ===
void gfx_EGG_Display_804fab48(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x180) = param_2;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x17c); iVar1 = iVar1 + 1) {
    EGG_Display_validate_804fb530(*(int *)(param_1 + 0x188) + iVar2,*(int *)(param_1 + 0x180) == iVar1);
    iVar2 = iVar2 + 0x240;
  }
  return;
}

// === EGG_Display_assertFail_804fabc0 (0x804fabc0) ===
void EGG_Display_assertFail_804fabc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Display_804fac98 (0x804fac98) ===
void gfx_EGG_Display_804fac98(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != *(int *)(param_1 + 0x180)) {
    EGG_Display_validate_804fb530(*(int *)(param_1 + 0x188) + *(int *)(param_1 + 0x180) * 0x240,0);
    EGG_Display_validate_804fb530(*(int *)(param_1 + 0x188) + param_3 * 0x240,1);
    piVar1 = *(int **)(param_1 + 0x174);
    *(int *)(param_1 + 0x180) = param_3;
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3);
    }
  }
  return;
}

// === gfx_EGG_Display_804fad48 (0x804fad48) ===
undefined4 * gfx_EGG_Display_804fad48(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x5d);
  uVar2 = uRam00000064;
  uVar1 = uRam00000060;
  param_1[0x82] = uRam00000068;
  param_1[0x7e] = 0;
  param_1[0x7f] = param_1;
  param_1[0x80] = uVar1;
  param_1[0x81] = uVar2;
  uVar2 = uRam00000070;
  uVar1 = uRam0000006c;
  param_1[0x87] = uRam00000074;
  param_1[0x83] = 0;
  param_1[0x84] = param_1;
  param_1[0x85] = uVar1;
  param_1[0x86] = uVar2;
  uVar2 = uRam0000007c;
  uVar1 = uRam00000078;
  param_1[0x8c] = uRam00000080;
  param_1[0x88] = 0;
  param_1[0x89] = param_1;
  param_1[0x8a] = uVar1;
  param_1[0x8b] = uVar2;
  return param_1;
}

// === EGG_Display_validate_804fae3c (0x804fae3c) ===
int EGG_Display_validate_804fae3c(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c91a0(param_1 + 0x174,0xffffffff);
    nw4r_g3d_validate_80500540(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804faea4 (0x804faea4) ===
void gfx_EGG_Display_804faea4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined auStack_48 [48];
  
  *(undefined4 *)(param_1 + 0x234) = param_2;
  FUN_segment_0__804ae324(auStack_48,param_1);
  FUN_segment_0__804ae36c(auStack_48,param_3,param_4,param_5,0);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x24);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804faf6c;
        }
      }
      bVar1 = false;
LAB_segment_0__804faf6c:
      if (bVar1) goto LAB_segment_0__804faf7c;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804faf7c:
  *(int *)(param_1 + 0x198) = param_1 + 0x1f8;
  *(int **)(param_1 + 0x180) = piVar2;
  *(int *)(param_1 + 0x19c) = param_1 + 0x20c;
  FUN_segment_0__804c9214(param_1 + 0x174,0,param_6,param_7);
  FUN_segment_0__804c92c4(param_1 + 0x174,0,param_1 + 0x220,0);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fb018;
        }
      }
      bVar1 = false;
LAB_segment_0__804fb018:
      if (bVar1) goto LAB_segment_0__804fb028;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__804fb028:
  FUN_segment_0__804ca310(piVar2,param_1 + 0x174);
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x2a);
  *(undefined4 *)(param_1 + 0x238) = uVar4;
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x38);
  *(undefined4 *)(param_1 + 0x23c) = uVar4;
  return;
}

// === gfx_EGG_Display_804fb070 (0x804fb070) ===
void gfx_EGG_Display_804fb070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
  
  gfx_nw4r_g3d_80500740();
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar2,0);
  piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar4 = true;
          goto LAB_segment_0__804fb10c;
        }
      }
      bVar4 = false;
LAB_segment_0__804fb10c:
      if (bVar4) goto LAB_segment_0__804fb11c;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804fb11c:
  iVar1 = param_1 + 0x174;
  bVar4 = false;
  if (piVar5[0x15] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x2c] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x43] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x5a] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x71] == iVar1) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,2);
  }
  else {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  }
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  return;
}

// === gfx_EGG_Display_804fb21c (0x804fb21c) ===
void gfx_EGG_Display_804fb21c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  gfx_nw4r_g3d_80500780();
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (*(int *)(iVar1 + 0x38) == 0) {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar3,0);
    *(float *)(param_1 + 0x7c) = g_Ram_float;
  }
  else {
    piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    if (*(int *)(*piVar2 + piVar2[0xe] * 0x10) != 0) {
      *(undefined *)((int)piVar2 + 0x35) = 1;
    }
    *(float *)(param_1 + 0x7c) = g_Ram_float;
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    FUN_segment_0__804c99a8(param_1 + 0x174,&local_18,&local_20);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x238) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = local_18;
    *(undefined2 *)(iVar1 + 0x12) = local_16;
    *(undefined2 *)(iVar1 + 0x14) = local_14;
    *(undefined2 *)(iVar1 + 0x16) = local_12;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x238) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = local_20;
    *(undefined2 *)(iVar1 + 0x1a) = local_1e;
    *(undefined2 *)(iVar1 + 0x1c) = local_1c;
    *(undefined2 *)(iVar1 + 0x1e) = local_1a;
  }
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_segment_0__804c9aa4(param_1 + 0x174,&local_28);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = local_28;
    *(undefined2 *)(iVar1 + 0x12) = local_26;
    *(undefined2 *)(iVar1 + 0x14) = local_24;
    *(undefined2 *)(iVar1 + 0x16) = local_22;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = local_28;
    *(undefined2 *)(iVar1 + 0x1a) = local_26;
    *(undefined2 *)(iVar1 + 0x1c) = local_24;
    *(undefined2 *)(iVar1 + 0x1e) = local_22;
  }
  return;
}

// === gfx_EGG_Display_804fb3d0 (0x804fb3d0) ===
int * gfx_EGG_Display_804fb3d0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fb440;
        }
      }
      bVar1 = false;
LAB_segment_0__804fb440:
      if (bVar1) goto LAB_segment_0__804fb450;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fb450:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__804fb4a4;
      }
    }
    bVar1 = false;
LAB_segment_0__804fb4a4:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === gfx_EGG_Display_804fb4d0 (0x804fb4d0) ===
void gfx_EGG_Display_804fb4d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  if (param_2 == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  }
  else {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  }
  return;
}

// === EGG_Display_validate_804fb530 (0x804fb530) ===
void EGG_Display_validate_804fb530(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  if (param_2 == 0) {
    if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
    }
    if (piVar1[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
    }
    gfx_nw4r_g3d_805003cc(param_1,0xd,0xffffffff);
  }
  else if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  return;
}

// === EGG_Display_validate_804fb688 (0x804fb688) ===
void EGG_Display_validate_804fb688(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  gfx_nw4r_g3d_805003cc(param_1,0xc,param_2);
  return;
}

// === EGG_Display_validate_804fb77c (0x804fb77c) ===
void EGG_Display_validate_804fb77c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fb800;
        }
      }
      bVar1 = false;
LAB_segment_0__804fb800:
      if (bVar1) goto LAB_segment_0__804fb810;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804fb810:
  bVar1 = false;
  iVar2 = param_1 + 0x174;
  if ((param_2 == 0) || (piVar4[0x15] != iVar2)) {
    if ((param_2 == 1) || (piVar4[0x2c] != iVar2)) {
      if ((param_2 == 2) || (piVar4[0x43] != iVar2)) {
        if ((param_2 == 3) || (piVar4[0x5a] != iVar2)) {
          if ((param_2 != 4) && (piVar4[0x71] == iVar2)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    piVar4 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    if (piVar4[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar4 + 0x10));
    }
    if (piVar4[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar4,3);
    }
  }
  return;
}

// === gfx_EGG_Display_804fb964 (0x804fb964) ===
void gfx_EGG_Display_804fb964(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  piVar5 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x28))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fba18;
        }
      }
      bVar1 = false;
LAB_segment_0__804fba18:
      if (bVar1) goto LAB_segment_0__804fba28;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804fba28:
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x28))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fba7c;
        }
      }
      bVar1 = false;
LAB_segment_0__804fba7c:
      if (bVar1) goto LAB_segment_0__804fba8c;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804fba8c:
  iVar6 = *(int *)(param_1 + 0x234);
  if (iVar6 != piVar5[0x60]) {
    EGG_Display_validate_804fb530(piVar5[0x62] + piVar5[0x60] * 0x240,0);
    EGG_Display_validate_804fb530(piVar5[0x62] + iVar6 * 0x240,1);
    piVar5[0x60] = iVar6;
    piVar4 = (int *)piVar5[0x5d];
    if (piVar4 != (int *)0) {
      (**(code **)(*piVar4 + 8))(piVar4,piVar5,param_2,piVar5[0x60]);
    }
  }
  gfx_nw4r_g3d_805003cc(param_1,0xd,param_2);
  return;
}

// === EGG_Display_validate_804fbb3c (0x804fbb3c) ===
void EGG_Display_validate_804fbb3c(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === gfx_EGG_Display_804fbb88 (0x804fbb88) ===
undefined4 * gfx_EGG_Display_804fbb88(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  return param_1;
}

// === EGG_Display_validate_804fbbcc (0x804fbbcc) ===
int EGG_Display_validate_804fbbcc(int param_1,int param_2)

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

// === gfx_EGG_Display_804fbc34 (0x804fbc34) ===
void gfx_EGG_Display_804fbc34(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === gfx_EGG_Display_804fbca0 (0x804fbca0) ===
void gfx_EGG_Display_804fbca0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  param_1[0x16] = 0;
  param_1[0x15] = -1;
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fbd30;
        }
      }
      bVar1 = false;
LAB_segment_0__804fbd30:
      if (bVar1) goto LAB_segment_0__804fbd40;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fbd40:
  if (piVar3[0x25] == 0) {
    gfx_EGG_Display_804fc0c8(param_1);
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fbdb0;
        }
      }
      bVar1 = false;
LAB_segment_0__804fbdb0:
      if (bVar1) goto LAB_segment_0__804fbdc0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fbdc0:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x157c,0);
  piVar3[0xd1] = -1;
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  param_1[0x16] = 1;
  return;
}

// === gfx_EGG_Display_804fbe4c (0x804fbe4c) ===
void gfx_EGG_Display_804fbe4c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
      return;
    }
    if (iVar2 != 4) {
      return;
    }
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fbef8;
        }
      }
      bVar1 = false;
LAB_segment_0__804fbef8:
      if (bVar1) goto LAB_segment_0__804fbf08;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804fbf08:
  if (piVar4[0x25] == 0) {
    gfx_EGG_Display_804fc0c8(param_1);
  }
  return;
}

// === gfx_EGG_Display_804fbf60 (0x804fbf60) ===
void gfx_EGG_Display_804fbf60(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  double dVar4;
  
  if (param_1[0x16] != 2) {
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fbfec;
        }
      }
      bVar1 = false;
LAB_segment_0__804fbfec:
      if (bVar1) goto LAB_segment_0__804fbffc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fbffc:
  if (piVar3[0x294] == 0) {
    dVar4 = (double)(float)g_Ram_ptr;
    *(undefined4 *)(g_Ram_ptr[0x26] + 0x3c4) = 1;
    *(int *)(g_Ram_ptr[0x26] + 0x3c8) = g_Ram_ptr[0x5d6];
    *(int *)(g_Ram_ptr[0x26] + 0x3cc) = (int)*(short *)((int)g_Ram_ptr + 0x36);
    g_Ram_ptr[0x346] = 5;
    param_1[0x15] = -1;
    (**(code **)(*param_1 + 0x1c))(dVar4,param_1,0x1f,0);
    param_1[0x16] = 3;
  }
  else if (piVar3[0x294] == 1) {
    param_1[0x15] = 0x6f;
    param_1[0x16] = 4;
  }
  return;
}

// === gfx_EGG_Display_804fc0c8 (0x804fc0c8) ===
void gfx_EGG_Display_804fc0c8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_1[0x16] == 1) {
    piVar3 = *(int **)(*g_Ram_ptr + 0x144);
    if (piVar3 != (int *)0) {
      if (piVar3 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__804fc154;
          }
        }
        bVar1 = false;
LAB_segment_0__804fc154:
        if (bVar1) goto LAB_segment_0__804fc164;
      }
      piVar3 = (int *)0;
    }
    else {
      piVar3 = (int *)0;
    }
LAB_segment_0__804fc164:
    FUN_segment_0__804a9164(piVar3);
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fc1d0;
        }
      }
      bVar1 = false;
LAB_segment_0__804fc1d0:
      if (bVar1) goto LAB_segment_0__804fc1e0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fc1e0:
  FUN_segment_0__804c04c4(piVar3 + 0x28,g_Ram_ptr[0x5d6]);
  if (0 < piVar3[0xc0]) {
    param_1[0x15] = 0x71;
    param_1[0x16] = 3;
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fc278;
        }
      }
      bVar1 = false;
LAB_segment_0__804fc278:
      if (bVar1) goto LAB_segment_0__804fc288;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__804fc288:
  (**(code **)(*piVar3 + 100))(piVar3);
  FUN_segment_0__804ad8bc(piVar3,0xc1d,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x52,0);
  param_1[0x16] = 2;
  return;
}

// === EGG_Display_assertFail_804fc2ec (0x804fc2ec) ===
void EGG_Display_assertFail_804fc2ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Display_validate_804fc52c (0x804fc52c) ===
int EGG_Display_validate_804fc52c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x161c != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x161c,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x13c8,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x1174,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0xf20,0xffffffff);
    nw4r_g3d_validate_80500540(param_1 + 0xdac,0xffffffff);
    EGG_Display_validate_804f9284(param_1 + 0x874,0xffffffff);
    FUN_segment_0__804c0aa0(param_1 + 0x628,0xffffffff);
    FUN_segment_0__804c0aa0(param_1 + 0x3dc,0xffffffff);
    if (param_1 + 0x268 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x268,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804fc608 (0x804fc608) ===
void gfx_EGG_Display_804fc608(int param_1)

{
  undefined auStack_30 [40];
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804ca380(param_1 + 0x44,1);
  FUN_segment_0__804d1c1c(param_1,9);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x268,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x3dc,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x628,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x874,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xdac,0);
  FUN_segment_0__804d1c2c(param_1,5,param_1 + 0xf20,0);
  FUN_segment_0__804d1c2c(param_1,6,param_1 + 0x1174,0);
  FUN_segment_0__804d1c2c(param_1,7,param_1 + 0x13c8,0);
  FUN_segment_0__804d1c2c(param_1,8,param_1 + 0x161c,0);
  FUN_segment_0__80735444(param_1 + 0x268,0);
  FUN_segment_0__804c0b08(param_1 + 0x3dc,0);
  FUN_segment_0__804c0b08(param_1 + 0x628,0x14);
  gfx_EGG_Display_804f9328(param_1 + 0x874,0x28,0x2f,0x4d,0x5e,0x7b,1,0,0);
  FUN_segment_0__804ae324(auStack_30,param_1 + 0xdac);
  FUN_segment_0__804ae36c(auStack_30,0x8b,0x93,0xae,0);
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  FUN_segment_0__804a9914(param_1 + 0xf20,0xc9,0xd0,0xe4,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x1174,0xe8,0xef,0x103,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x13c8,0x109,0x110,0x124,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x161c,0x12a,0x131,0x136,1,0,1);
  *(int *)(param_1 + 0x1880) = param_1 + 0x3dc;
  *(int *)(param_1 + 0x1884) = param_1 + 0x628;
  gfx_EGG_Display_804f93f0(param_1 + 0x874,param_1 + 0x188c);
  gfx_EGG_Display_804f93f8(param_1 + 0x874,param_1 + 0x18a0);
  FUN_segment_0__804a9ec4(param_1 + 0xf20,param_1 + 0x18b4,0);
  FUN_segment_0__804a9ec4(param_1 + 0x1174,param_1 + 0x18c8,0);
  FUN_segment_0__804a9ec4(param_1 + 0x13c8,param_1 + 0x18dc,0);
  FUN_segment_0__804a9ec4(param_1 + 0x161c,param_1 + 0x18f0,0);
  FUN_segment_0__804ca350(param_1 + 0x44,1,param_1 + 0x1904,0,0);
  FUN_segment_0__804a9eec(param_1 + 0xf20,0);
  FUN_segment_0__80735844(param_1 + 0x268,0xd4f,0);
  return;
}

// === gfx_EGG_Display_804fc8d0 (0x804fc8d0) ===
void gfx_EGG_Display_804fc8d0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_d8;
  undefined4 local_d4;
  
  *(undefined4 *)(param_1 + 0x1888) = 5;
  FUN_segment_0__804a9eec(param_1 + 0xf20,0);
  piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fc964;
        }
      }
      bVar1 = false;
LAB_segment_0__804fc964:
      if (bVar1) goto LAB_segment_0__804fc974;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__804fc974:
  *(int **)(param_1 + 0x1918) = piVar5 + 0x28;
  if (piVar5[0xc0] < 2) {
    gfx_EGG_Display_804f946c(param_1 + 0x874,0,0);
  }
  else {
    gfx_EGG_Display_804f946c(param_1 + 0x874,1,1);
  }
  *(undefined4 *)(param_1 + 0x191c) = 0;
  uVar3 = FUN_segment_0__804c07ec(*(undefined4 *)(param_1 + 0x1918),0);
  uVar4 = FUN_segment_0__804c07c4
                    (*(undefined4 *)(param_1 + 0x1918),*(undefined4 *)(param_1 + 0x191c));
  FUN_segment_0__804c0c30(*(undefined4 *)(param_1 + 0x1880),uVar4,uVar3);
  *(undefined4 *)(param_1 + 0x1920) = 0xffffffff;
  FUN_segment_0__804b4ecc(&local_d8);
  local_d8 = *(int *)(param_1 + 0x191c) + 1;
  local_d4 = *(undefined4 *)(*(int *)(param_1 + 0x1918) + 0x260);
  gfx_nw4r_g3d_80500a34(param_1 + 0xdac,0x7d9,&local_d8);
  return;
}

// === gfx_EGG_Display_804fca34 (0x804fca34) ===
void gfx_EGG_Display_804fca34(int param_1)

{
  FUN_segment_0__804c1124(*(undefined4 *)(param_1 + 0x1880));
  FUN_segment_0__804c115c(*(undefined4 *)(param_1 + 0x1884));
  return;
}

// === gfx_EGG_Display_804fca6c (0x804fca6c) ===
void gfx_EGG_Display_804fca6c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  
  iVar2 = FUN_segment_0__80746dc0(0x4b);
  if (*(char *)(iVar2 + 0x6c4) == 0) {
    return;
  }
  iVar2 = param_1[0x622];
  if (iVar2 != 5) {
    if (iVar2 != 6) {
      if (iVar2 != 7) {
        return;
      }
      g_Ram_ptr[0x346] = 5;
      dVar5 = (double)(float)g_Ram_ptr;
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
      *(undefined4 *)(g_Ram_ptr[0x26] + 0x3c4) = 0;
      *(int *)(g_Ram_ptr[0x26] + 0x3c8) = g_Ram_ptr[0x5d6];
      *(int *)(g_Ram_ptr[0x26] + 0x3cc) = (int)*(short *)((int)g_Ram_ptr + 0x36);
      g_Ram_ptr[0x346] = 5;
      (**(code **)(*param_1 + 0x1c))(dVar5,param_1,0x1f,0);
      return;
    }
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
    FUN_segment_0__804c084c(param_1[0x646],param_1[0x647]);
    piVar4 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__804fcd18;
          }
        }
        bVar1 = false;
LAB_segment_0__804fcd18:
        if (bVar1) goto LAB_segment_0__804fcd28;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__804fcd28:
    FUN_segment_0__804bfa90(piVar4);
    FUN_segment_0__804ce6f0(g_Ram_ptr[0x26] + 0x188,g_Ram_ptr[0x26] + 0x238,0,2);
    (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x34,0);
    return;
  }
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
  FUN_segment_0__804c084c(param_1[0x646],param_1[0x647]);
  piVar4 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__804fcbbc;
        }
      }
      bVar1 = false;
LAB_segment_0__804fcbbc:
      if (bVar1) goto LAB_segment_0__804fcbcc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__804fcbcc:
  FUN_segment_0__804bfa0c(piVar4,0,0);
  (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x1f,0);
  return;
}

// === gfx_EGG_Display_804fcea4 (0x804fcea4) ===
void gfx_EGG_Display_804fcea4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_d8;
  undefined4 local_d4;
  
  bVar1 = false;
  iVar2 = FUN_segment_0__804c1194(*(undefined4 *)(param_1 + 0x1880));
  if ((iVar2 != 0) &&
     (iVar2 = FUN_segment_0__804c11cc(*(undefined4 *)(param_1 + 0x1884)), iVar2 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x191c) + 1;
    *(int *)(param_1 + 0x191c) = iVar2;
    if (*(int *)(*(int *)(param_1 + 0x1918) + 0x260) <= iVar2) {
      *(undefined4 *)(param_1 + 0x191c) = 0;
    }
    FUN_segment_0__804c1064(*(undefined4 *)(param_1 + 0x1880),1);
    uVar4 = *(undefined4 *)(param_1 + 0x1880);
    *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_1 + 0x1884);
    *(undefined4 *)(param_1 + 0x1884) = uVar4;
    uVar4 = FUN_segment_0__804c07ec
                      (*(undefined4 *)(param_1 + 0x1918),*(undefined4 *)(param_1 + 0x191c));
    uVar3 = FUN_segment_0__804c07c4
                      (*(undefined4 *)(param_1 + 0x1918),*(undefined4 *)(param_1 + 0x191c));
    FUN_segment_0__804c1004(*(undefined4 *)(param_1 + 0x1880),uVar3,uVar4,1);
    FUN_segment_0__804b4ecc(&local_d8);
    local_d8 = *(int *)(param_1 + 0x191c) + 1;
    local_d4 = *(undefined4 *)(*(int *)(param_1 + 0x1918) + 0x260);
    gfx_nw4r_g3d_80500a34(param_1 + 0xdac,0x7d9,&local_d8);
  }
  return;
}

// === gfx_EGG_Display_804fcfa4 (0x804fcfa4) ===
void gfx_EGG_Display_804fcfa4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_d8;
  undefined4 local_d4;
  
  bVar1 = false;
  iVar2 = FUN_segment_0__804c1194(*(undefined4 *)(param_1 + 0x1880));
  if ((iVar2 != 0) &&
     (iVar2 = FUN_segment_0__804c11cc(*(undefined4 *)(param_1 + 0x1884)), iVar2 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x191c) + -1;
    *(int *)(param_1 + 0x191c) = iVar2;
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x191c) = *(int *)(*(int *)(param_1 + 0x1918) + 0x260) + -1;
    }
    FUN_segment_0__804c1064(*(undefined4 *)(param_1 + 0x1880),0);
    uVar4 = *(undefined4 *)(param_1 + 0x1880);
    *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_1 + 0x1884);
    *(undefined4 *)(param_1 + 0x1884) = uVar4;
    uVar4 = FUN_segment_0__804c07ec
                      (*(undefined4 *)(param_1 + 0x1918),*(undefined4 *)(param_1 + 0x191c));
    uVar3 = FUN_segment_0__804c07c4
                      (*(undefined4 *)(param_1 + 0x1918),*(undefined4 *)(param_1 + 0x191c));
    FUN_segment_0__804c1004(*(undefined4 *)(param_1 + 0x1880),uVar3,uVar4,0);
    FUN_segment_0__804b4ecc(&local_d8);
    local_d8 = *(int *)(param_1 + 0x191c) + 1;
    local_d4 = *(undefined4 *)(*(int *)(param_1 + 0x1918) + 0x260);
    gfx_nw4r_g3d_80500a34(param_1 + 0xdac,0x7d9,&local_d8);
  }
  return;
}

// === gfx_EGG_Display_804fd15c (0x804fd15c) ===
undefined4 gfx_EGG_Display_804fd15c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_segment_0__804c1194(*(undefined4 *)(param_1 + 0x1880));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_segment_0__804c11cc(*(undefined4 *)(param_1 + 0x1884)), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

// === EGG_Display_validate_804fd1e0 (0x804fd1e0) ===
void EGG_Display_validate_804fd1e0(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804fd210 (0x804fd210) ===
void EGG_Display_validate_804fd210(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Display_validate_804fd240 (0x804fd240) ===
void EGG_Display_validate_804fd240(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === gfx_EGG_Display_804fd298 (0x804fd298) ===
undefined4 * gfx_EGG_Display_804fd298(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804fd2d4 (0x804fd2d4) ===
int EGG_Display_validate_804fd2d4(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_EGG_Display_804fd32c (0x804fd32c) ===
void gfx_EGG_Display_804fd32c(undefined4 param_1)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [48];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0xb,0x11,0x1c,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_EGG_Display_804fd3cc (0x804fd3cc) ===
void gfx_EGG_Display_804fd3cc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === EGG_Display_validate_804fd404 (0x804fd404) ===
void EGG_Display_validate_804fd404(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  return;
}

// === gfx_EGG_Display_804fd4b4 (0x804fd4b4) ===
void gfx_EGG_Display_804fd4b4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  return;
}

// === EGG_Display_validate_804fd4ec (0x804fd4ec) ===
void EGG_Display_validate_804fd4ec(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
  }
  if (piVar1[0xe] == 2) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
  }
  return;
}

// === gfx_EGG_Display_804fd59c (0x804fd59c) ===
void gfx_EGG_Display_804fd59c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Display_804fd5d4 (0x804fd5d4) ===
void gfx_EGG_Display_804fd5d4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_r30;
  
  if (param_2 == 0) {
    unaff_r30 = 0x47;
  }
  else {
    if (param_3 == 0) {
      unaff_r30 = 0x27;
    }
    else if (param_3 == 1) {
      unaff_r30 = 0x2e;
    }
    else if (param_3 == 2) {
      unaff_r30 = 0x35;
    }
    else if (param_3 == 3) {
      unaff_r30 = 0x3b;
    }
    else if (param_3 == 4) {
      unaff_r30 = 0x41;
    }
    if (((*g_Ram_ptr != 0) && (iVar1 = gfx_EGG_Display_804e608c(), iVar1 != 0)) &&
       (iVar1 = gfx_EGG_Display_804e608c(*g_Ram_ptr), *(int *)(iVar1 + 4) == 0x57)) {
      FUN_segment_0__80757db0(g_Ram_ptr,param_3);
    }
  }
  nw4r_g3d_assertFail_80500d70(param_1,0x53,unaff_r30);
  return;
}

// === gfx_EGG_Display_804fd708 (0x804fd708) ===
undefined4 * gfx_EGG_Display_804fd708(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  gfx_nw4r_g3d_80500418(param_1 + 0x15);
  param_1[0x15] = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x72);
  param_1[0x72] = 0;
  return param_1;
}

// === EGG_Display_validate_804fd78c (0x804fd78c) ===
int EGG_Display_validate_804fd78c(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Display_validate_804fd7e4 (0x804fd7e4) ===
int EGG_Display_validate_804fd7e4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x1c8 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x1c8,0);
    }
    if (param_1 + 0x54 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x54,0);
    }
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804fd86c (0x804fd86c) ===
void gfx_EGG_Display_804fd86c(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined auStack_58 [24];
  undefined auStack_40 [44];
  
  *(undefined4 *)(param_1 + 0x344) = 0;
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))((int *)(param_1 + 0x44),0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x1c8,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x54,0);
  FUN_segment_0__804ae324(auStack_40,param_1 + 0x1c8);
  local_78 = iRam00000000;
  local_74 = uRam00000004;
  local_70 = uRam00000008;
  local_6c = uRam0000000c;
  local_68 = uRam00000010;
  local_64 = uRam00000014;
  local_60 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_40,0x60,0x66,0x71,&local_78);
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  gfx_EGG_Video_806d44c4(param_1 + 0x54);
  *(undefined *)(param_1 + 0x348) = 0;
  uVar2 = 0;
  while( true ) {
    if (((*(int *)(*(int *)(iRam00000000 + 0x14) + (uVar2 & 0xff) * 0x8cc0 + 8) == 0x524b5044) &&
        (iVar1 = iRam00000000 + (uVar2 & 0xff) * 0x93f0, iVar1 != -0x38)) &&
       (iVar1 = FUN_segment_0__804384b0(iVar1 + 0x9030,0x38), iVar1 != 0)) break;
    uVar2 = uVar2 + 1;
    if (3 < uVar2) {
LAB_segment_0__804fd9d8:
      if (*(char *)(param_1 + 0x348) == 0) {
        *(undefined4 *)(param_1 + 0x34c) = 0;
      }
      else {
        FUN_segment_0__804434e4(auStack_58);
        do {
          iVar1 = FUN_segment_0__8044364c(auStack_58,5);
          *(int *)(param_1 + 0x34c) = iVar1;
        } while (iVar1 == *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4c8));
        *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4c8) = iVar1;
        FUN_segment_0__804435b8(auStack_58,0xffffffff);
      }
      FUN_segment_0__804d24e0(param_1,0,0);
      FUN_segment_0__80546648(iRam00000000);
      return;
    }
  }
  *(undefined *)(param_1 + 0x348) = 1;
  goto LAB_segment_0__804fd9d8;
}

// === gfx_EGG_Display_804fda64 (0x804fda64) ===
void gfx_EGG_Display_804fda64(int param_1)

{
  FUN_segment_0__8040afa0();
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  FUN_segment_0__804dfd2c(iRam00000000 + 0x34);
  FUN_segment_0__804df750(iRam00000000 + 0x34,0);
  *(undefined *)(param_1 + 0x33c) = 0;
  FUN_segment_0__804c14e8(*(undefined4 *)(iRam00000000 + 0x98));
  gfx_EGG_Display_804fd5d4
            (param_1 + 0x1c8,*(undefined *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x34c));
  return;
}

// === EGG_Display_validate_804fdae4 (0x804fdae4) ===
void EGG_Display_validate_804fdae4(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x260,0);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  return;
}

// === gfx_EGG_Display_804fdb94 (0x804fdb94) ===
void gfx_EGG_Display_804fdb94(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x260,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x20);
  return;
}

// === EGG_Display_validate_804fdbe0 (0x804fdbe0) ===
void EGG_Display_validate_804fdbe0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x260,0);
  if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
  }
  if (piVar1[0xe] == 2) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
  }
  return;
}

// === gfx_EGG_Display_804fdc90 (0x804fdc90) ===
void gfx_EGG_Display_804fdc90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x260,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Display_804fdcc8 (0x804fdcc8) ===
void gfx_EGG_Display_804fdcc8(int *param_1)

{
  int iVar1;
  undefined uVar2;
  double dVar3;
  
  iVar1 = gfx_EGG_Display_804e6058(*g_Ram_uint,param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0xcf) == 0)) {
    uVar2 = FUN_segment_0__804df430(g_Ram_uint + 0xd,0);
    *(undefined *)(param_1 + 0xcf) = uVar2;
  }
  if (param_1[2] == 4) {
    if (*(char *)(param_1 + 0xcf) == 0) {
      iVar1 = gfx_EGG_Display_804e6058(*g_Ram_uint,param_1);
      if (((iVar1 != 0) && (g_Ram_uint[0xc] == 0)) && (*(char *)(g_Ram_uint + 0xe) != 0)) {
        if (*(char *)(g_Ram_uint[0x26] + 0x4cc) == 0) {
          gfx_EGG_Display_804fde30(param_1);
          *(undefined *)(g_Ram_uint + 3) = 1;
          gfx_EGG_Display_804f8c44(g_Ram_uint,0x44,0);
          gfx_EGG_Display_804f8cd0(g_Ram_uint,0,0xffffffff);
        }
        else {
          (**(code **)(*param_1 + 0x24))(param_1,0x59,0);
        }
      }
    }
    else {
      dVar3 = (double)(float)g_Ram_uint;
      param_1[0xd0] = 0x65;
      FUN_segment_0__804d1c48(dVar3,param_1,0);
      FUN_segment_0__804d24b8(param_1,8,0xffffffff);
    }
  }
  return;
}

// === gfx_EGG_Display_804fde30 (0x804fde30) ===
void gfx_EGG_Display_804fde30(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_68 [6];
  undefined auStack_50 [28];
  
  FUN_segment_0__8041d9ac(iRam00000000);
  FUN_segment_0__804434e4(auStack_50);
  local_68[0] = 0;
  FUN_segment_0__80438434(local_68);
  FUN_segment_0__804391bc(iRam00000000,local_68);
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
  *(undefined4 *)(iRam00000000 + 0x1764) = *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x4d0);
  *(undefined4 *)(iRam00000000 + 0x1760) = *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x4d4);
  *(undefined4 *)(iRam00000000 + 0x176c) = 2;
  iVar1 = *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4d4);
  if (iVar1 == 1) {
    *(undefined4 *)(iRam00000000 + 0x175c) = 2;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
    do {
      do {
        iVar1 = FUN_segment_0__8044364c(auStack_50,0x20);
      } while (iVar1 == *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4e0));
      uVar2 = FUN_segment_0__804c22bc();
      iVar4 = FUN_segment_0__80444a80(uVar2,0,0,1);
    } while ((((iVar4 == 0) && (iVar4 = FUN_segment_0__80444a80(uVar2,1,0,1), iVar4 == 0)) &&
             (iVar4 = FUN_segment_0__80444a80(uVar2,2,0,1), iVar4 == 0)) &&
            (iVar4 = FUN_segment_0__80444a80(uVar2,2,1,1), iVar4 == 0));
    *(int *)(iRam00000000 + 0x1758) = iVar1;
    *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4e0) = iVar1;
    FUN_segment_0__80430510(iRam00000000,iVar1);
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(iRam00000000 + 0x175c) = 0;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) | 2;
    *(undefined4 *)(iRam00000000 + 0x1768) = *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x4d8);
    do {
      iVar1 = FUN_segment_0__8044364c(auStack_50,10);
      iVar1 = iVar1 + 0x20;
    } while (iVar1 == *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4e4));
    *(int *)(iRam00000000 + 0x1758) = iVar1;
    *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4e4) = iVar1;
    FUN_segment_0__80430510(iRam00000000);
  }
  uVar8 = 0;
  uVar7 = 0;
  do {
    iVar1 = (uVar7 & 0xff) * 0xf0;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 1;
    do {
      do {
        uVar3 = FUN_segment_0__8044364c(auStack_50,0x18);
        iVar4 = FUN_segment_0__80444d14(uVar3,1);
      } while (iVar4 == 0);
      uVar5 = 1 << (uVar3 & 0x3f);
    } while ((uVar8 & uVar5) != 0);
    uVar8 = uVar8 | uVar5;
    *(uint *)(iRam00000000 + iVar1 + 0xc24) = uVar3;
    iVar4 = *(int *)(*(int *)(iRam00000000 + 0x98) + 0x4d4);
    if (iVar4 == 1) {
      do {
        iVar4 = FUN_segment_0__8044364c(auStack_50,0xc);
        iVar6 = gfx_EGG_Video_806fe030(uVar3);
        iVar6 = iVar6 + iVar4 * 3;
        iVar4 = FUN_segment_0__80444f08(iVar6,1);
      } while (iVar4 == 0);
      *(int *)(iRam00000000 + iVar1 + 0xc20) = iVar6;
    }
    else if (iVar4 == 3) {
      iVar4 = FUN_segment_0__8044364c(auStack_50,2);
      if (iVar4 == 0) {
        iVar4 = gfx_EGG_Video_806fe030(uVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 0;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 1;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 2;
        }
      }
      else {
        iVar4 = gfx_EGG_Video_806fe030(uVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 0x12;
        }
        else if (iVar4 == 1) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 0x13;
        }
        else if (iVar4 == 2) {
          *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 0x14;
        }
      }
      *(uint *)(iRam00000000 + iVar1 + 0xce4) = uVar7 & 1;
    }
    uVar7 = uVar7 + 1;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xc28) = 1;
  } while (uVar7 < 0xc);
  FUN_segment_0__804435b8(auStack_50,0xffffffff);
  return;
}

// === gfx_EGG_Display_804fe214 (0x804fe214) ===
undefined4 * gfx_EGG_Display_804fe214(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x11);
  FUN_segment_0__804c8134(param_1 + 0x6e);
  return param_1;
}

// === EGG_Display_validate_804fe260 (0x804fe260) ===
int EGG_Display_validate_804fe260(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x1b8,0xffffffff);
    nw4r_g3d_validate_80500540(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804fe2d4 (0x804fe2d4) ===
void gfx_EGG_Display_804fe2d4(int param_1)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined auStack_30 [44];
  
  (**(code **)(*(int *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x1b8);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
  FUN_segment_0__804ae324(auStack_30,param_1 + 0x44);
  local_38 = 0;
  local_34 = 0;
  FUN_segment_0__804ae36c(auStack_30,0x7c,0x82,0x8c,&local_38);
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === gfx_EGG_Display_804fe398 (0x804fe398) ===
void gfx_EGG_Display_804fe398(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*g_Ram_ptr + 0x164);
  if ((piVar2 != (int *)0) && (piVar2 != (int *)0)) {
    for (puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x60))(piVar2);
        (puVar1 != (void *)0 && (puVar1 != (void *)0));
        puVar1 = (undefined4 *)*puVar1) {
    }
  }
  nw4r_g3d_assertFail_80500d70(param_1 + 0x44,0xe0);
  return;
}

// === gfx_EGG_Display_804fe504 (0x804fe504) ===
undefined4 * gfx_EGG_Display_804fe504(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Display_validate_804fe540 (0x804fe540) ===
int EGG_Display_validate_804fe540(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_EGG_Display_804fe598 (0x804fe598) ===
void gfx_EGG_Display_804fe598(undefined4 param_1)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [48];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0xf8,0xfe,0x109,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_EGG_Display_804fe638 (0x804fe638) ===
void gfx_EGG_Display_804fe638(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === EGG_Display_validate_804fe674 (0x804fe674) ===
void EGG_Display_validate_804fe674(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  return;
}

// === EGG_Display_validate_804fe724 (0x804fe724) ===
void EGG_Display_validate_804fe724(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
  }
  if (piVar1[0xe] == 2) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
  }
  return;
}

// === gfx_EGG_Display_804fe7d4 (0x804fe7d4) ===
bool gfx_EGG_Display_804fe7d4(int param_1)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 0;
}

// === gfx_EGG_Display_804fe808 (0x804fe808) ===
undefined4 * gfx_EGG_Display_804fe808(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x11);
  param_1[0x11] = 0;
  FUN_segment_0__804c8134(param_1 + 0x6e);
  return param_1;
}

// === EGG_Display_validate_804fe86c (0x804fe86c) ===
int EGG_Display_validate_804fe86c(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x1b8,0xffffffff);
    if (param_1 + 0x44 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x44,0);
    }
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804fe8e4 (0x804fe8e4) ===
void gfx_EGG_Display_804fe8e4(int param_1)

{
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [44];
  
  (**(code **)(*(int *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x1b8);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x44);
  local_58 = g_Ram_uint;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0x114,0x11a,0x125,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  EGG_Display_validate_804e5e54(*g_Ram_uint);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === gfx_EGG_Display_804fe9f8 (0x804fe9f8) ===
void gfx_EGG_Display_804fe9f8(int param_1)

{
  int *local_18;
  int *local_14 [3];
  
  FUN_segment_0__804dfd2c(g_Ram_ptr + 0xd);
  FUN_segment_0__804df750(g_Ram_ptr + 0xd,0);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined *)(param_1 + 0x1cc) = 0;
  if (g_Ram_ptr[0x16] == 0) {
    local_14[0] = g_Ram_ptr;
    FUN_segment_0__804d0600(*(undefined4 *)(*g_Ram_ptr + 0x400),local_14,1,0,0);
  }
  else {
    local_18 = g_Ram_ptr;
    FUN_segment_0__804d0600(*(undefined4 *)(*g_Ram_ptr + 0x400),&local_18,1,0,0);
  }
  return;
}

// === gfx_EGG_Display_804feac4 (0x804feac4) ===
void gfx_EGG_Display_804feac4(void)

{
  FUN_segment_0__804dfd2c(g_Ram_ptr + 0xd);
  FUN_segment_0__804d08f0(*(undefined4 *)(*g_Ram_ptr + 0x400));
  return;
}

// === EGG_Display_validate_804feb1c (0x804feb1c) ===
void EGG_Display_validate_804feb1c(int param_1)

{
  undefined uVar3;
  int iVar1;
  int *piVar2;
  
  if ((2 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 5)) {
    if (*(char *)(param_1 + 0x1cc) == 0) {
      uVar3 = FUN_segment_0__804df430(g_Ram_ptr + 0xd,0);
      *(undefined *)(param_1 + 0x1cc) = uVar3;
    }
    iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0xdc,0);
    if ((*(int *)(iVar1 + 0x38) == 0) &&
       (iVar1 = FUN_segment_0__804d0954(*(undefined4 *)(*g_Ram_ptr + 0x400)), iVar1 != 0)) {
      piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0xdc,0);
      if (piVar2[0xe] == 0) {
        gfx_EGG_Display_804ff59c((double)(float)g_Ram_ptr,piVar2,1);
      }
      else if (piVar2[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(undefined4 *)(*piVar2 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  return;
}

// === gfx_EGG_Display_804fec4c (0x804fec4c) ===
void gfx_EGG_Display_804fec4c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(char *)(param_1 + 0x1cc) == 0) || (*(int *)(iRam00000000 + 0x30) != 0)) {
      iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0xdc,0);
      if ((*(int *)(iVar1 + 0x38) != 0) &&
         (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c8) == 0x1068)) {
        gfx_EGG_Display_804f8c44(iRam00000000,0x3f,0);
        gfx_EGG_Display_804f8cd0(iRam00000000,0,0xffffffff);
      }
    }
    else {
      gfx_EGG_Display_804f8c44(iRam00000000,0x3f,0);
      gfx_EGG_Display_804f8cd0(iRam00000000,0,0xffffffff);
      FUN_segment_0__804d24b8(param_1,8,0xffffffff);
    }
  }
  return;
}

// === gfx_EGG_Display_804fed2c (0x804fed2c) ===
undefined4 * gfx_EGG_Display_804fed2c(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  gfx_nw4r_g3d_80500418(param_1 + 0x16);
  param_1[0x16] = 0;
  return param_1;
}

// === EGG_Display_validate_804fed90 (0x804fed90) ===
int EGG_Display_validate_804fed90(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x58 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x58,0);
    }
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Display_804fee08 (0x804fee08) ===
void gfx_EGG_Display_804fee08(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x58,0);
  gfx_EGG_Video_806d44c4(param_1 + 0x58);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === gfx_EGG_Display_804fee90 (0x804fee90) ===
void gfx_EGG_Display_804fee90(int param_1)

{
  FUN_segment_0__804dfd2c(iRam00000000 + 0x34);
  FUN_segment_0__804df750(iRam00000000 + 0x34,0);
  *(undefined *)(param_1 + 0x54) = 0;
  return;
}

// === gfx_EGG_Display_804feefc (0x804feefc) ===
void gfx_EGG_Display_804feefc(int param_1)

{
  char cVar1;
  undefined uVar2;
  
  if (*(char *)(param_1 + 0x54) == 0) {
    uVar2 = FUN_segment_0__804df430(iRam00000000 + 0x34,0);
    *(undefined *)(param_1 + 0x54) = uVar2;
  }
  if ((*(int *)(param_1 + 8) == 4) &&
     (((cVar1 = *(char *)(iRam00000000 + 0x39), *(char *)(param_1 + 0x54) != 0 || (cVar1 != 0)
       ) && (*(int *)(iRam00000000 + 0x30) == 0)))) {
    gfx_EGG_Display_804f8c44(iRam00000000,0x3f,0);
    gfx_EGG_Display_804f8cd0(iRam00000000,0,0xffffffff);
    *(undefined *)(iRam00000000 + 0xc) = 1;
    if (cVar1 == 0) {
      FUN_segment_0__805e97b0(iRam00000000);
      FUN_segment_0__804d24b8(param_1,8,0xffffffff);
    }
  }
  return;
}

// === gfx_EGG_Display_804ff06c (0x804ff06c) ===
void gfx_EGG_Display_804ff06c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// === EGG_Display_validate_804ff084 (0x804ff084) ===
undefined4 EGG_Display_validate_804ff084(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*param_1,0);
  }
  return 0;
}

// === gfx_EGG_Display_804ff0e4 (0x804ff0e4) ===
void gfx_EGG_Display_804ff0e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

// === EGG_Display_validate_804ff0f0 (0x804ff0f0) ===
void EGG_Display_validate_804ff0f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 * 0x44 + 0x10);
}

// === EGG_Display_validate_804ff154 (0x804ff154) ===
void EGG_Display_validate_804ff154(int *param_1,int param_2,int param_3)

{
  *(int *)(*param_1 + param_2 * 0x44 + 4) = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_3 * 0x10 + 0x10);
}

// === EGG_Display_validate_804ff1e0 (0x804ff1e0) ===
void EGG_Display_validate_804ff1e0(int *param_1,int param_2,char *param_3)

{
  if ((param_3 != (char *)0x0) && (*param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(param_1[3] + 0x18),param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*param_1 + param_2 * 0x44 + 8,param_1[2]);
}

// === EGG_Display_validate_804ff2d0 (0x804ff2d0) ===
void EGG_Display_validate_804ff2d0(int param_1)

{
  undefined auStack_a8 [136];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_a8,0,*(int *)(param_1 + 0xc) + 0x28);
}

// === gfx_EGG_Display_804ff394 (0x804ff394) ===
void gfx_EGG_Display_804ff394
               (double param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6,undefined param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *param_2;
  uVar1 = (**(code **)(**(int **)(param_2[3] + 0x24) + 0xc))
                    (*(int **)(param_2[3] + 0x24),0,param_5,0);
  piVar2 = (int *)(param_2[3] + 4);
  puVar4 = (undefined4 *)(*(int *)(iVar3 + param_3 * 0x44) + param_4 * 0x10);
  uVar1 = (**(code **)(*piVar2 + 0x14))(piVar2,uVar1,*(undefined4 *)(param_2[3] + 0x24));
  *puVar4 = uVar1;
  puVar4[1] = param_6;
  *(undefined *)(puVar4 + 3) = param_7;
  puVar4[2] = (float)param_1;
  return;
}

// === gfx_EGG_Display_804ff43c (0x804ff43c) ===
void gfx_EGG_Display_804ff43c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1[1]; iVar1 = iVar1 + 1) {
    gfx_EGG_Display_804ff864(*param_1 + iVar2);
    iVar2 = iVar2 + 0x44;
  }
  return;
}

// === gfx_EGG_Display_804ff4a0 (0x804ff4a0) ===
int gfx_EGG_Display_804ff4a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x44;
}

// === gfx_EGG_Display_804ff4b0 (0x804ff4b0) ===
int gfx_EGG_Display_804ff4b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x44;
}

// === gfx_EGG_Display_804ff4c0 (0x804ff4c0) ===
void gfx_EGG_Display_804ff4c0(void)

{
  return;
}

// === EGG_Display_validate_804ff4c4 (0x804ff4c4) ===
void EGG_Display_validate_804ff4c4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 2);
}

// === EGG_Display_validate_804ff52c (0x804ff52c) ===
undefined4 EGG_Display_validate_804ff52c(int *param_1)

{
  if (param_1 == (int *)0) {
    return 0;
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*param_1 + -0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 2,0xffffffff);
}

// === gfx_EGG_Display_804ff59c (0x804ff59c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804ff59c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Display_804ff718 (0x804ff718) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804ff718(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Display_804ff7a0 (0x804ff7a0) ===
void gfx_EGG_Display_804ff7a0(int param_1)

{
  gfx_EGG_Display_804ff59c();
  *(undefined *)(param_1 + 0x35) = 0;
  return;
}

// === gfx_EGG_Display_804ff7d4 (0x804ff7d4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804ff7d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Display_804ff864 (0x804ff864) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804ff864(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Display_validate_804ffa5c (0x804ffa5c) ===
void EGG_Display_validate_804ffa5c(int *param_1)

{
  if (*(char *)(*param_1 + param_1[0xe] * 0x10 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*param_1 + param_1[0xe] * 0x10));
  }
  *(int *)(*(int *)(*param_1 + param_1[0xe] * 0x10) + 0x10) = param_1[0xf];
  return;
}

// === gfx_EGG_Display_804ffaec (0x804ffaec) ===
undefined4 * gfx_EGG_Display_804ffaec(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000000;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  *(undefined *)(param_1 + 6) = 0xff;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  *(undefined *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  *(undefined *)(param_1 + 0x12) = 0xff;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  *(undefined *)(param_1 + 0x18) = 0xff;
  param_1[0x19] = 0;
  FUN_segment_0__804adaf0(param_1 + 0x1a);
  uVar1 = uRam00000000;
  param_1[0x1f] = uRam00000000;
  *(undefined *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined *)(param_1 + 0x22) = 1;
  param_1[0x23] = uVar1;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  return param_1;
}

// === EGG_Display_validate_804ffbe0 (0x804ffbe0) ===
int EGG_Display_validate_804ffbe0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Display_validate_804ffc20 (0x804ffc20) ===
int EGG_Display_validate_804ffc20(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804adb0c(param_1 + 0x68,0xffffffff), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_EGG_Display_804ffc7c (0x804ffc7c) ===
void gfx_EGG_Display_804ffc7c(int param_1)

{
  FUN_segment_0__804adf10(param_1 + 0x68);
  return;
}

// === gfx_EGG_Display_804ffc84 (0x804ffc84) ===
void gfx_EGG_Display_804ffc84(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  FUN_segment_0__804adf74(param_1 + 0x1a);
  return;
}

// === gfx_EGG_Display_804ffcc4 (0x804ffcc4) ===
void gfx_EGG_Display_804ffcc4(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))();
  FUN_segment_0__804adfe4(param_1 + 0x1a);
  return;
}

// === gfx_EGG_Display_804ffe14 (0x804ffe14) ===
void gfx_EGG_Display_804ffe14(double param_1,int param_2,float *param_3)

{
  int iVar1;
  
  *param_3 = (float)(-(double)*(float *)(*g_Ram_ptr + 0x3f0) * param_1);
  iVar1 = *(int *)(*(int *)(param_2 + 100) + 8);
  if (iVar1 == 0) {
    *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x34);
    *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x38);
  }
  else {
    *(float *)(param_2 + 0x4c) =
         *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x34) * *(float *)(iVar1 + 0x28);
    *(float *)(param_2 + 0x50) =
         *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x38) * *(float *)(iVar1 + 0x2c);
  }
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x3c);
  *(float *)(param_2 + 0x58) = *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x2c) * *(float *)(param_2 + 0x44);
  *(char *)(param_2 + 0x60) =
       (char)((*(byte *)(param_2 + 0x30) + 1) * (*(byte *)(param_2 + 0x48) + 1) + -1 >> 8);
  return;
}

// === gfx_EGG_Display_804ffee8 (0x804ffee8) ===
void gfx_EGG_Display_804ffee8(int param_1,undefined4 param_2)

{
  FUN_segment_0__804adb6c(param_1 + 0x68,param_1,param_2);
  return;
}

// === gfx_EGG_Display_804ffef8 (0x804ffef8) ===
void gfx_EGG_Display_804ffef8(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_segment_0__804adee8(param_1 + 0x68,param_2,param_3,*(undefined4 *)(param_1 + 0x84));
  return;
}

// === gfx_EGG_Display_804fff04 (0x804fff04) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Display_804fff04(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_nw4r_g3d_80500018 (0x80500018) ===
void gfx_nw4r_g3d_80500018(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined4 *)(param_1 + 0x84) = param_3;
  return;
}

// === gfx_nw4r_g3d_80500024 (0x80500024) ===
void gfx_nw4r_g3d_80500024(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  return;
}

// === gfx_nw4r_g3d_8050004c (0x8050004c) ===
void gfx_nw4r_g3d_8050004c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined *)(param_1 + 0x30) = *(undefined *)(param_1 + 0x18);
  }
  else {
    *(float *)(param_1 + 0x1c) =
         *(float *)(iVar1 + 0x1c) + *(float *)(param_1 + 4) * *(float *)(iVar1 + 0x28);
    *(float *)(param_1 + 0x20) =
         *(float *)(iVar1 + 0x20) + *(float *)(param_1 + 8) * *(float *)(iVar1 + 0x2c);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0xc) + *(float *)(iVar1 + 0x24);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x10) * *(float *)(iVar1 + 0x28);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x14) * *(float *)(iVar1 + 0x2c);
    *(char *)(param_1 + 0x30) =
         (char)((*(byte *)(param_1 + 0x18) + 1) *
                (*(byte *)(*(int *)(*(int *)(param_1 + 100) + 8) + 0x30) + 1) + -1 >> 8);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 8);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x38);
  }
  else {
    *(float *)(param_1 + 0x4c) =
         *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34) * *(float *)(iVar1 + 0x28);
    *(float *)(param_1 + 0x50) =
         *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x38) * *(float *)(iVar1 + 0x2c);
  }
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x44);
  *(char *)(param_1 + 0x60) =
       (char)((*(byte *)(param_1 + 0x30) + 1) * (*(byte *)(param_1 + 0x48) + 1) + -1 >> 8);
  FUN_segment_0__804ae168(param_1 + 0x68);
  return;
}

// === gfx_nw4r_g3d_805001d0 (0x805001d0) ===
void gfx_nw4r_g3d_805001d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 100) + 8);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x38);
  }
  else {
    *(float *)(param_1 + 0x4c) =
         *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x34) * *(float *)(iVar1 + 0x28);
    *(float *)(param_1 + 0x50) =
         *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x38) * *(float *)(iVar1 + 0x2c);
  }
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x44);
  *(char *)(param_1 + 0x60) =
       (char)((*(byte *)(param_1 + 0x30) + 1) * (*(byte *)(param_1 + 0x48) + 1) + -1 >> 8);
  return;
}

// === gfx_nw4r_g3d_80500288 (0x80500288) ===
void gfx_nw4r_g3d_80500288(int *param_1)

{
  gfx_nw4r_g3d_805002c8();
  (**(code **)(*param_1 + 0x34))(param_1);
  return;
}

// === gfx_nw4r_g3d_805002c8 (0x805002c8) ===
void gfx_nw4r_g3d_805002c8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  iVar3 = 1;
  while (param_1 = *(int *)(*(int *)(param_1 + 100) + 8), param_1 != 0) {
    iVar3 = iVar3 + 1;
  }
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    for (; -1 < iVar3; iVar3 = iVar3 + -1) {
      iVar4 = 0;
      if (0 < iVar3) {
        if (8 < iVar3) {
          bVar1 = false;
          if ((-1 < iVar3) && (iVar3 < 0x7fffffff)) {
            bVar1 = true;
          }
          if ((bVar1) && (uVar5 = iVar3 - 1U >> 3, 0 < iVar3 + -8)) {
            do {
              iVar4 = iVar4 + 8;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        iVar2 = iVar3 - iVar4;
        if (iVar4 < iVar3) {
          do {
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    return;
  }
  return;
}

// === gfx_nw4r_g3d_805003cc (0x805003cc) ===
void gfx_nw4r_g3d_805003cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_segment_0__80600ca4(param_2,param_3,*(undefined4 *)(*(int *)(param_1 + 100) + 0xc));
  return;
}

// === gfx_nw4r_g3d_805003f0 (0x805003f0) ===
void gfx_nw4r_g3d_805003f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_segment_0__80600d68(param_2,param_3,*(undefined4 *)(*(int *)(param_1 + 100) + 0xc));
  return;
}

// === gfx_nw4r_g3d_80500418 (0x80500418) ===
undefined4 * gfx_nw4r_g3d_80500418(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000000;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  *(undefined *)(param_1 + 6) = 0xff;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  *(undefined *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  *(undefined *)(param_1 + 0x12) = 0xff;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  *(undefined *)(param_1 + 0x18) = 0xff;
  param_1[0x19] = 0;
  FUN_segment_0__804adaf0(param_1 + 0x1a);
  uVar1 = uRam00000000;
  param_1[0x1f] = uRam00000000;
  *(undefined *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined *)(param_1 + 0x22) = 1;
  param_1[0x23] = uVar1;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  *param_1 = 0;
  gfx_EGG_Display_804ff06c(param_1 + 0x26);
  FUN_segment_0__804c5f5c(param_1 + 0x2a);
  FUN_segment_0__804cc2f0(param_1 + 0x51);
  FUN_segment_0__804cc2f0(param_1 + 0x56);
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return param_1;
}

// === nw4r_g3d_validate_80500540 (0x80500540) ===
int nw4r_g3d_validate_80500540(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cc30c(param_1 + 0x158,0xffffffff);
    FUN_segment_0__804cc30c(param_1 + 0x144,0xffffffff);
    FUN_segment_0__804c5fe4(param_1 + 0xa8,0xffffffff);
    EGG_Display_validate_804ff084(param_1 + 0x98,0xffffffff);
    if (param_1 != 0) {
      FUN_segment_0__804adb0c(param_1 + 0x68,0xffffffff);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_nw4r_g3d_805005d4 (0x805005d4) ===
void gfx_nw4r_g3d_805005d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_segment_0__804c60a8(param_1 + 0xa8);
  FUN_segment_0__804c6250(param_1 + 0xa8,param_3);
  gfx_EGG_Display_804ff0e4(param_1 + 0x98,param_1 + 0xa8,*(undefined4 *)(param_1 + 0xbc));
  *(byte *)(*(int *)(param_1 + 0xbc) + 0xbb) = *(byte *)(*(int *)(param_1 + 0xbc) + 0xbb) & 0xfd | 2
  ;
  return;
}

// === gfx_nw4r_g3d_80500640 (0x80500640) ===
void gfx_nw4r_g3d_80500640(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804c7934(*(undefined4 *)(*g_Ram_ptr + 0x3ec));
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  return;
}

// === gfx_nw4r_g3d_80500680 (0x80500680) ===
void gfx_nw4r_g3d_80500680(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x28))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80500700;
        }
      }
      bVar1 = false;
LAB_segment_0__80500700:
      if (bVar1) goto LAB_segment_0__80500710;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80500710:
  uVar3 = FUN_segment_0__804c5d1c(piVar4 + 0x2a,param_2);
  *(undefined4 *)(param_1 + 0x170) = uVar3;
  return;
}

// === gfx_nw4r_g3d_80500740 (0x80500740) ===
void gfx_nw4r_g3d_80500740(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  FUN_segment_0__804adf74(param_1 + 0x1a);
  return;
}

// === gfx_nw4r_g3d_80500780 (0x80500780) ===
void gfx_nw4r_g3d_80500780(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1c))();
  FUN_segment_0__804adfe4(param_1 + 0x1a);
  gfx_EGG_Display_804ff43c(param_1 + 0x26);
  iVar1 = param_1[0x2f];
  *(int *)(iVar1 + 0x2c) = param_1[0x13];
  *(int *)(iVar1 + 0x30) = param_1[0x14];
  *(int *)(iVar1 + 0x34) = param_1[0x15];
  iVar1 = param_1[0x2f];
  *(int *)(iVar1 + 0x44) = param_1[0x16];
  *(int *)(iVar1 + 0x48) = param_1[0x17];
  *(undefined *)(param_1[0x2f] + 0xb8) = *(undefined *)(param_1 + 0x18);
  return;
}

// === gfx_nw4r_g3d_80500804 (0x80500804) ===
void gfx_nw4r_g3d_80500804(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(*(int *)(param_1 + 100) + 8) != 0) || (param_2 == *(int *)(param_1 + 0x84))) &&
     (*(char *)(param_1 + 0x80) == 0)) {
    iVar3 = *(int *)(param_1 + 0x170);
    if (iVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0xbc);
      uVar1 = *(undefined4 *)(iVar3 + 0x88);
      *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(iVar3 + 0x84);
      *(undefined4 *)(iVar2 + 0x88) = uVar1;
      uVar1 = *(undefined4 *)(iVar3 + 0x90);
      *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(iVar3 + 0x8c);
      *(undefined4 *)(iVar2 + 0x90) = uVar1;
      uVar1 = *(undefined4 *)(iVar3 + 0x98);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar3 + 0x94);
      *(undefined4 *)(iVar2 + 0x98) = uVar1;
      uVar1 = *(undefined4 *)(iVar3 + 0xa0);
      *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar3 + 0x9c);
      *(undefined4 *)(iVar2 + 0xa0) = uVar1;
      uVar1 = *(undefined4 *)(iVar3 + 0xa8);
      *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar3 + 0xa4);
      *(undefined4 *)(iVar2 + 0xa8) = uVar1;
      uVar1 = *(undefined4 *)(iVar3 + 0xb0);
      *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar3 + 0xac);
      *(undefined4 *)(iVar2 + 0xb0) = uVar1;
      *(undefined *)(*(int *)(param_1 + 0xbc) + 0xb9) =
           *(undefined *)(*(int *)(param_1 + 0x170) + 0xb9);
    }
    FUN_segment_0__804c6b5c(param_1 + 0xa8);
    FUN_segment_0__804c6b70
              (param_1 + 0xa8,(-*(uint *)(param_1 + 0x170) | *(uint *)(param_1 + 0x170)) >> 0x1f);
    FUN_segment_0__804c6c1c(param_1 + 0xa8);
    if (((*(int *)(*(int *)(param_1 + 100) + 8) != 0) || (param_2 == *(int *)(param_1 + 0x84))) &&
       (*(char *)(param_1 + 0x80) == 0)) {
      FUN_segment_0__804ae054(param_1 + 0x68,param_2);
    }
  }
  return;
}

// === gfx_nw4r_g3d_8050093c (0x8050093c) ===
void gfx_nw4r_g3d_8050093c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_segment_0__804c69dc(param_1 + 0xa8);
  if (iVar2 != 0) {
    FUN_segment_0__804b5280(iVar2,param_1 + 0x144,param_1 + 0x158,param_3,param_4);
    return;
  }
  piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,param_2);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805009f0;
        }
      }
      bVar1 = false;
LAB_segment_0__805009f0:
      if (bVar1) goto LAB_segment_0__80500a00;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80500a00:
  FUN_segment_0__804c51b8(piVar3,param_1 + 0x144,param_1 + 0x158,param_3);
  return;
}

// === gfx_nw4r_g3d_80500a34 (0x80500a34) ===
void gfx_nw4r_g3d_80500a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  FUN_segment_0__804c52a4(*(undefined4 *)(param_1 + 0xbc),&local_18);
  return;
}

// === gfx_nw4r_g3d_80500a74 (0x80500a74) ===
void gfx_nw4r_g3d_80500a74(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (int *)0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80500adc;
      }
    }
    bVar1 = false;
LAB_segment_0__80500adc:
    piVar5 = param_2;
    if (bVar1) goto LAB_segment_0__80500af0;
  }
  piVar5 = (int *)0;
LAB_segment_0__80500af0:
  if (piVar5 != (int *)0) {
    iVar3 = FUN_segment_0__804c5420(param_2,0x4c);
    if (iVar3 == 0) {
      uVar4 = FUN_segment_0__804c6a54(*(int *)(param_1 + 4) + 0xa8,piVar5);
      FUN_segment_0__804b5280
                (uVar4,*(int *)(param_1 + 4) + 0x144,*(int *)(param_1 + 4) + 0x158,
                 *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
    else {
      FUN_segment_0__804c51b8
                (piVar5,*(int *)(param_1 + 4) + 0x144,*(int *)(param_1 + 4) + 0x158,
                 *(undefined4 *)(param_1 + 8));
    }
  }
  return;
}

// === gfx_nw4r_g3d_80500b6c (0x80500b6c) ===
void gfx_nw4r_g3d_80500b6c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_segment_0__804c69dc(param_1 + 0xa8);
  if (iVar2 != 0) {
    FUN_segment_0__804b634c();
    return;
  }
  piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,param_2);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80500c00;
        }
      }
      bVar1 = false;
LAB_segment_0__80500c00:
      if (bVar1) goto LAB_segment_0__80500c10;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80500c10:
  (**(code **)(*piVar3 + 0x7c))(piVar3,0,0);
  return;
}

// === gfx_nw4r_g3d_80500c48 (0x80500c48) ===
void gfx_nw4r_g3d_80500c48(int param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = param_1;
  FUN_segment_0__804c52a4(*(undefined4 *)(param_1 + 0xbc),&local_8);
  return;
}

// === gfx_nw4r_g3d_80500c80 (0x80500c80) ===
void gfx_nw4r_g3d_80500c80(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != (int *)0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80500ce8;
      }
    }
    bVar1 = false;
LAB_segment_0__80500ce8:
    piVar4 = param_2;
    if (bVar1) goto LAB_segment_0__80500cfc;
  }
  piVar4 = (int *)0;
LAB_segment_0__80500cfc:
  if (piVar4 != (int *)0) {
    iVar3 = FUN_segment_0__804c5420(param_2,0x4c);
    if (iVar3 == 0) {
      FUN_segment_0__804c6a54(*(int *)(param_1 + 4) + 0xa8,piVar4);
      FUN_segment_0__804b634c();
    }
    else {
      (**(code **)(*piVar4 + 0x7c))(piVar4,2,0);
    }
  }
  return;
}

// === nw4r_g3d_assertFail_80500d70 (0x80500d70) ===
void nw4r_g3d_assertFail_80500d70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_80500fa8 (0x80500fa8) ===
uint gfx_nw4r_g3d_80500fa8(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x16c) == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_segment_0__804c5d1c();
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80501028;
        }
      }
      bVar1 = false;
LAB_segment_0__80501028:
      if (bVar1) goto LAB_segment_0__80501038;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__80501038:
  return (-(int)piVar2 | (uint)piVar2) >> 0x1f;
}

// === nw4r_g3d_assertFail_8050105c (0x8050105c) ===
void nw4r_g3d_assertFail_8050105c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_805011cc (0x805011cc) ===
void gfx_nw4r_g3d_805011cc(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8);
  *(byte *)(iVar1 + 0xbb) = *(byte *)(iVar1 + 0xbb) & 0xfe | param_3;
  return;
}

// === gfx_nw4r_g3d_8050120c (0x8050120c) ===
void gfx_nw4r_g3d_8050120c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804c6a9c(param_1 + 0xa8);
  FUN_segment_0__804ceef4(uVar1,param_3);
  return;
}

// === nw4r_g3d_assertFail_80501244 (0x80501244) ===
void nw4r_g3d_assertFail_80501244(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_8050129c (0x8050129c) ===
void gfx_nw4r_g3d_8050129c(int *param_1)

{
  gfx_nw4r_g3d_805002c8();
  gfx_EGG_Display_804ff4c0(param_1 + 0x26);
  (**(code **)(*param_1 + 0x34))(param_1);
  return;
}

// === gfx_nw4r_g3d_805012f4 (0x805012f4) ===
undefined4 * gfx_nw4r_g3d_805012f4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = uRam00000000;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  *(undefined *)(param_1 + 6) = 0xff;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  *(undefined *)(param_1 + 0xc) = 0xff;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  *(undefined *)(param_1 + 0x12) = 0xff;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  *(undefined *)(param_1 + 0x18) = 0xff;
  param_1[0x19] = 0;
  FUN_segment_0__804adaf0(param_1 + 0x1a);
  uVar1 = uRam00000000;
  param_1[0x1f] = uRam00000000;
  *(undefined *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined *)(param_1 + 0x22) = 1;
  param_1[0x23] = uVar1;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  *param_1 = 0;
  gfx_EGG_Display_804ff06c(param_1 + 0x26);
  FUN_segment_0__804c5f5c(param_1 + 0x2a);
  FUN_segment_0__804cc2f0(param_1 + 0x51);
  FUN_segment_0__804cc2f0(param_1 + 0x56);
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *param_1 = 0;
  return param_1;
}

// === nw4r_g3d_validate_80501428 (0x80501428) ===
int nw4r_g3d_validate_80501428(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804cc30c(param_1 + 0x158,0xffffffff);
      FUN_segment_0__804cc30c(param_1 + 0x144,0xffffffff);
      FUN_segment_0__804c5fe4(param_1 + 0xa8,0xffffffff);
      EGG_Display_validate_804ff084(param_1 + 0x98,0xffffffff);
      if (param_1 != 0) {
        FUN_segment_0__804adb0c(param_1 + 0x68,0xffffffff);
      }
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === nw4r_g3d_validate_805015e0 (0x805015e0) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nw4r_g3d_validate_805015e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  uVar2 = _DAT_00000030;
  uVar1 = uRam0000002c;
  param_1[0x61] = _DAT_00000034;
  param_1[0x5d] = 0;
  param_1[0x5e] = param_1;
  param_1[0x5f] = uVar1;
  param_1[0x60] = uVar2;
  uVar2 = uRam0000003c;
  uVar1 = uRam00000038;
  param_1[0x66] = uRam00000040;
  param_1[0x62] = 0;
  param_1[99] = param_1;
  param_1[100] = uVar1;
  param_1[0x65] = uVar2;
  uVar2 = uRam00000048;
  uVar1 = uRam00000044;
  param_1[0x6b] = uRam0000004c;
  param_1[0x67] = 0;
  param_1[0x68] = param_1;
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar2;
  uVar2 = uRam00000054;
  uVar1 = uRam00000050;
  param_1[0x70] = uRam00000058;
  param_1[0x6c] = 0;
  param_1[0x6d] = param_1;
  param_1[0x6e] = uVar1;
  param_1[0x6f] = uVar2;
  uVar2 = uRam00000060;
  uVar1 = uRam0000005c;
  param_1[0x75] = uRam00000064;
  param_1[0x71] = 0;
  param_1[0x72] = param_1;
  param_1[0x73] = uVar1;
  param_1[0x74] = uVar2;
  uVar2 = uRam0000006c;
  uVar1 = uRam00000068;
  param_1[0x7a] = uRam00000070;
  param_1[0x76] = 0;
  param_1[0x77] = param_1;
  param_1[0x78] = uVar1;
  param_1[0x79] = uVar2;
  uVar3 = uRam0000007c;
  uVar2 = uRam00000078;
  uVar1 = uRam00000074;
  param_1[0x7b] = 0;
  param_1[0x7c] = param_1;
  param_1[0x7d] = uVar1;
  param_1[0x7e] = uVar2;
  param_1[0x7f] = uVar3;
  param_1[0x81] = 0xffffffff;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined *)((int)param_1 + 0x211) = 1;
  param_1[0x85] = 0;
  FUN_segment_0__804c90c4(param_1 + 0x86);
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xad,0,0,0x188,2);
}

// === nw4r_g3d_validate_805017dc (0x805017dc) ===
undefined4 nw4r_g3d_validate_805017dc(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x2b4,0,0x188,2);
  }
  return 0;
}

// === gfx_nw4r_g3d_8050185c (0x8050185c) ===
void gfx_nw4r_g3d_8050185c
               (int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,int param_11,int param_12,undefined param_13,undefined param_14,
               undefined param_15,undefined param_16)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined auStack_a8 [40];
  undefined auStack_80 [40];
  undefined auStack_58 [48];
  
  param_1[0x82] = param_2;
  param_1[0x81] = param_3;
  param_1[0x85] = param_11;
  param_1[0x80] = param_12;
  *(undefined *)(param_1 + 0x84) = param_15;
  *(undefined *)((int)param_1 + 0x212) = param_16;
  FUN_segment_0__804ae324(auStack_58,param_1);
  FUN_segment_0__804ae36c(auStack_58,param_4,param_5,param_6,0);
  FUN_segment_0__804c9214(param_1 + 0x86,2,param_13,param_14);
  FUN_segment_0__804ae32c(auStack_58,0xffffffff);
  gfx_EGG_Display_804ffee8(param_1,3);
  piVar8 = param_1 + 0xad;
  iVar6 = 0;
  piVar3 = piVar8;
  do {
    gfx_EGG_Display_804ffef8(param_1,iVar6,piVar3);
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 0x62;
  } while (iVar6 < 2);
  uVar2 = (**(code **)(*(int *)param_1[0x85] + 8))();
  gfx_EGG_Display_804ffef8(param_1,2,uVar2);
  param_1[0x10e] = param_1[0x93];
  *(undefined *)(param_1 + 0x10a) = 1;
  FUN_segment_0__804ae324(auStack_80,param_1 + 0xad);
  FUN_segment_0__804ae36c(auStack_80,param_4,param_7,param_8,0);
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0xd7,0xe);
  param_1[0x10b] = iVar6;
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0xd7,0x1c);
  param_1[0x10c] = iVar6;
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0xd7,0x27);
  param_1[0x10d] = iVar6;
  FUN_segment_0__804ae32c(auStack_80,0xffffffff);
  *(undefined *)(param_1 + 0x16c) = 1;
  param_1[0x170] = param_1[0x93] + 0x28;
  FUN_segment_0__804ae324(auStack_a8,param_1 + 0x10f);
  FUN_segment_0__804ae36c(auStack_a8,param_4,param_9,param_10,0);
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0x139,0x37);
  param_1[0x16d] = iVar6;
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0x139,0x45);
  param_1[0x16e] = iVar6;
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0x139,0x50);
  param_1[0x16f] = iVar6;
  FUN_segment_0__804ae32c(auStack_a8,0xffffffff);
  piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0x2a,0x60);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar5 != (void *)0;
          puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80501aac;
        }
      }
      bVar1 = false;
LAB_segment_0__80501aac:
      if (bVar1) goto LAB_segment_0__80501abc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80501abc:
  param_1[0x89] = (int)piVar3;
  param_1[0x8f] = (int)(param_1 + 0x5d);
  iVar7 = 0;
  iVar6 = 0;
  param_1[0x90] = (int)(param_1 + 0x62);
  do {
    piVar3 = (int *)FUN_segment_0__804c5d1c(piVar8 + 0x2a,0);
    if (piVar3 != (int *)0) {
      if (piVar3 != (int *)0) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar5 != (void *)0;
            puVar5 = (undefined4 *)*puVar5) {
          if (puVar5 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80501b44;
          }
        }
        bVar1 = false;
LAB_segment_0__80501b44:
        if (bVar1) goto LAB_segment_0__80501b54;
      }
      piVar3 = (int *)0;
    }
    else {
      piVar3 = (int *)0;
    }
LAB_segment_0__80501b54:
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 0x62;
    *(int **)(param_1[0x93] + iVar6) = piVar3;
    *(int **)(param_1[0x93] + iVar6 + 0x18) = param_1 + 0x67;
    iVar4 = param_1[0x93] + iVar6;
    iVar6 = iVar6 + 0x28;
    *(int **)(iVar4 + 0x1c) = param_1 + 0x6c;
  } while (iVar7 < 2);
  FUN_segment_0__804c92c4(param_1 + 0x86,0,param_1 + 0x71,0);
  FUN_segment_0__804c92c4(param_1 + 0x86,6,param_1 + 0x76,1);
  FUN_segment_0__804c92c4(param_1 + 0x86,5,param_1 + 0x7b,1);
  FUN_segment_0__804c92e0(param_1 + 0x86,param_1[0x80]);
  piVar3 = *(int **)(*(int *)(param_1[0x19] + 0xc) + 0x38);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3); puVar5 != (void *)0;
          puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80501c30;
        }
      }
      bVar1 = false;
LAB_segment_0__80501c30:
      if (bVar1) goto LAB_segment_0__80501c40;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80501c40:
  FUN_segment_0__804ca310(piVar3,param_1 + 0x86);
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x66);
  param_1[0xab] = iVar6;
  iVar6 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x74);
  param_1[0xac] = iVar6;
  (**(code **)(*param_1 + 0x3c))(param_1);
  return;
}

// === gfx_nw4r_g3d_80501cc0 (0x80501cc0) ===
void gfx_nw4r_g3d_80501cc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_segment_0__804ca36c(*(undefined4 *)(param_1 + 0x254),param_2,param_1 + 0x218,0xffffffff);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  (**(code **)(**(int **)(param_1 + 0x214) + 0xc))(*(int **)(param_1 + 0x214),1);
  return;
}

// === gfx_nw4r_g3d_80501d2c (0x80501d2c) ===
void gfx_nw4r_g3d_80501d2c(int param_1,undefined4 param_2)

{
  FUN_segment_0__804cb6b8(*(undefined4 *)(param_1 + 0x254),param_2,param_1 + 0x218,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_80501d40 (0x80501d40) ===
void gfx_nw4r_g3d_80501d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x208) = param_2;
  *(undefined4 *)(param_1 + 0x204) = param_3;
                    /* WARNING: Could not recover jumptable at 0x80501d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x214) + 0x14))(*(int **)(param_1 + 0x214),param_3);
  return;
}

// === gfx_nw4r_g3d_80501d78 (0x80501d78) ===
void gfx_nw4r_g3d_80501d78(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x204) = param_2;
  (**(code **)(**(int **)(param_1 + 0x214) + 0x18))();
  piVar1 = *(int **)(param_1 + 0x29c);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,0xffffffff,*(undefined4 *)(param_1 + 0x204));
  }
  return;
}

// === gfx_nw4r_g3d_80501de0 (0x80501de0) ===
void gfx_nw4r_g3d_80501de0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x200) = param_2;
  FUN_segment_0__804c92e0(param_1 + 0x218);
  return;
}

// === gfx_nw4r_g3d_80501dec (0x80501dec) ===
void gfx_nw4r_g3d_80501dec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  gfx_nw4r_g3d_80500740();
  iVar3 = *(int *)(param_1 + 0x254);
  iVar1 = param_1 + 0x218;
  iVar4 = 0;
  if (*(int *)(iVar3 + 0x54) == iVar1) {
    iVar4 = 1;
  }
  else if (*(int *)(iVar3 + 0xb0) == iVar1) {
    iVar4 = 1;
  }
  else if (*(int *)(iVar3 + 0x10c) == iVar1) {
    iVar4 = 1;
  }
  else if (*(int *)(iVar3 + 0x168) == iVar1) {
    iVar4 = 1;
  }
  else if (*(int *)(iVar3 + 0x1c4) == iVar1) {
    iVar4 = 1;
  }
  if (iVar4 == 0) {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  }
  else {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,2);
  }
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
  (**(code **)(**(int **)(param_1 + 0x214) + 0xc))(*(int **)(param_1 + 0x214),iVar4);
  FUN_segment_0__804c92e0(param_1 + 0x218,*(undefined4 *)(param_1 + 0x200));
  (**(code **)(**(int **)(param_1 + 0x214) + 0x14))
            (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x204));
  return;
}

// === nw4r_g3d_assertFail_80501f28 (0x80501f28) ===
void nw4r_g3d_assertFail_80501f28(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === nw4r_g3d_validate_80502314 (0x80502314) ===
void nw4r_g3d_validate_80502314(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x10))(*(int **)(param_1 + 0x214),1);
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
  }
  gfx_nw4r_g3d_805003cc(param_1,0xf,param_2);
  return;
}

// === nw4r_g3d_validate_80502444 (0x80502444) ===
void nw4r_g3d_validate_80502444(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
  }
  if (piVar1[0xe] == 2) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x2a8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x214) + 0x10))(*(int **)(param_1 + 0x214),0);
  return;
}

// === gfx_nw4r_g3d_80502578 (0x80502578) ===
void gfx_nw4r_g3d_80502578(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x214) + 0x20))();
  if (iVar1 != 0) {
    if (param_3 < 0) {
      if (*(char *)(param_1 + 0x212) != 0) {
        (**(code **)(**(int **)(param_1 + 0x214) + 0x1c))();
        piVar3 = *(int **)(param_1 + 0x2a0);
        if (piVar3 != (int *)0) {
          (**(code **)(*piVar3 + 8))(piVar3,param_1,param_2);
        }
        gfx_nw4r_g3d_805003cc(param_1,*(undefined4 *)(param_1 + 0x5c4),param_2);
      }
    }
    else if (param_3 == 0) {
      if ((*(char *)(param_1 + 0x211) != 0) &&
         ((*(char *)(param_1 + 0x210) != 0 ||
          (*(int *)(param_1 + 0x204) + 1 < *(int *)(param_1 + 0x208))))) {
        iVar1 = *(int *)(param_1 + 0x204) + 1;
        *(int *)(param_1 + 0x204) = iVar1;
        if (*(int *)(param_1 + 0x208) <= iVar1) {
          *(undefined4 *)(param_1 + 0x204) = 0;
        }
        (**(code **)(**(int **)(param_1 + 0x214) + 0x18))
                  (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x204),1);
        uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x34c,2);
        gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
        uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x34c,3);
        gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
        piVar3 = *(int **)(param_1 + 0x29c);
        if (piVar3 != (int *)0) {
          (**(code **)(*piVar3 + 8))(piVar3,param_1,param_2,*(undefined4 *)(param_1 + 0x204));
        }
        gfx_nw4r_g3d_805003cc(param_1,0x12,param_2);
      }
    }
    else if (((param_3 == 1) && (*(char *)(param_1 + 0x211) != 0)) &&
            ((*(char *)(param_1 + 0x210) != 0 || (-1 < *(int *)(param_1 + 0x204) + -1)))) {
      iVar1 = *(int *)(param_1 + 0x204) + -1;
      *(int *)(param_1 + 0x204) = iVar1;
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x208) + -1;
      }
      (**(code **)(**(int **)(param_1 + 0x214) + 0x18))
                (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x204),0);
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x4d4,2);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x4d4,3);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
      piVar3 = *(int **)(param_1 + 0x29c);
      if (piVar3 != (int *)0) {
        (**(code **)(*piVar3 + 8))(piVar3,param_1,param_2,*(undefined4 *)(param_1 + 0x204));
      }
      gfx_nw4r_g3d_805003cc(param_1,0x11,param_2);
    }
  }
  return;
}

// === gfx_nw4r_g3d_805027e4 (0x805027e4) ===
void gfx_nw4r_g3d_805027e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x214) + 0x20))();
  if (((iVar1 != 0) && (*(char *)(param_1 + 0x211) != 0)) &&
     ((*(char *)(param_1 + 0x210) != 0 ||
      (*(int *)(param_1 + 0x204) + 1 < *(int *)(param_1 + 0x208))))) {
    iVar1 = *(int *)(param_1 + 0x204) + 1;
    *(int *)(param_1 + 0x204) = iVar1;
    if (*(int *)(param_1 + 0x208) <= iVar1) {
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x214) + 0x18))
              (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x204),1);
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x34c,2);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x34c,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
    piVar3 = *(int **)(param_1 + 0x29c);
    if (piVar3 != (int *)0) {
      (**(code **)(*piVar3 + 8))(piVar3,param_1,param_2,*(undefined4 *)(param_1 + 0x204));
    }
    gfx_nw4r_g3d_805003cc(param_1,0x12,param_2);
  }
  return;
}

// === gfx_nw4r_g3d_80502910 (0x80502910) ===
void gfx_nw4r_g3d_80502910(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x214) + 0x20))();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x211) != 0)) {
    if ((*(char *)(param_1 + 0x210) != 0) || (-1 < *(int *)(param_1 + 0x204) + -1)) {
      iVar1 = *(int *)(param_1 + 0x204) + -1;
      *(int *)(param_1 + 0x204) = iVar1;
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x208) + -1;
      }
      (**(code **)(**(int **)(param_1 + 0x214) + 0x18))
                (*(int **)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x204),0);
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x4d4,2);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x4d4,3);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
      piVar3 = *(int **)(param_1 + 0x29c);
      if (piVar3 != (int *)0) {
        (**(code **)(*piVar3 + 8))(piVar3,param_1,param_2,*(undefined4 *)(param_1 + 0x204));
      }
      gfx_nw4r_g3d_805003cc(param_1,0x11,param_2);
    }
  }
  return;
}

// === gfx_nw4r_g3d_80502a40 (0x80502a40) ===
undefined4 * gfx_nw4r_g3d_80502a40(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === nw4r_g3d_validate_80502a7c (0x80502a7c) ===
int nw4r_g3d_validate_80502a7c(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_nw4r_g3d_80502ad4 (0x80502ad4) ===
void gfx_nw4r_g3d_80502ad4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined auStack_38 [40];
  
  *(undefined4 *)(param_1 + 0x184) = param_5;
  *(undefined *)(param_1 + 0x174) = 1;
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,param_2,param_3,param_4,0);
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x9b);
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xa9);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xb4);
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_80502b98 (0x80502b98) ===
void gfx_nw4r_g3d_80502b98(int param_1)

{
  undefined4 uVar1;
  
  gfx_nw4r_g3d_80500740();
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === gfx_nw4r_g3d_80502c30 (0x80502c30) ===
void gfx_nw4r_g3d_80502c30(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  gfx_nw4r_g3d_80500780();
  iVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (*(int *)(iVar2 + 0x38) == 0) {
    iVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    *(undefined *)(iVar2 + 0x35) = 0;
    uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar4,0);
  }
  else {
    piVar3 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    if (*(int *)(*piVar3 + piVar3[0xe] * 0x10) != 0) {
      *(undefined *)((int)piVar3 + 0x35) = 1;
    }
  }
  bVar1 = true;
  if ((*(char *)(param_1 + 0x174) == 0) &&
     (iVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3), *(int *)(iVar2 + 0x38) != 0)) {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x80) = !bVar1;
  *(bool *)(*(int *)(param_1 + 0x184) + 0x24) = bVar1;
  return;
}

// === gfx_nw4r_g3d_80502d1c (0x80502d1c) ===
int * gfx_nw4r_g3d_80502d1c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80502d8c;
        }
      }
      bVar1 = false;
LAB_segment_0__80502d8c:
      if (bVar1) goto LAB_segment_0__80502d9c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80502d9c:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80502df0;
      }
    }
    bVar1 = false;
LAB_segment_0__80502df0:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === nw4r_g3d_validate_80502e1c (0x80502e1c) ===
void nw4r_g3d_validate_80502e1c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (param_2 == 0) {
    if (piVar2[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar2 + 0x10));
    }
    if (piVar2[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar2,3);
    }
  }
  else {
    if (piVar2[0xe] == 0) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar2,1);
    }
    else if (piVar2[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar2 + 0x30));
    }
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  }
  if (param_2 != 0) {
    bVar1 = true;
    if ((*(char *)(param_1 + 0x174) == 0) &&
       (iVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3), *(int *)(iVar4 + 0x38) != 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      gfx_nw4r_g3d_805003cc(param_1,0x10,param_3);
    }
  }
  return;
}

// === gfx_nw4r_g3d_80502fe0 (0x80502fe0) ===
void gfx_nw4r_g3d_80502fe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_nw4r_g3d_80503044 (0x80503044) ===
void gfx_nw4r_g3d_80503044(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x178) != (int *)0) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x178) + 0x68))();
    *(undefined2 *)(iVar4 + 0x10) = *param_2;
    *(undefined2 *)(iVar4 + 0x12) = param_2[1];
    *(undefined2 *)(iVar4 + 0x14) = param_2[2];
    *(undefined2 *)(iVar4 + 0x16) = param_2[3];
    iVar4 = (**(code **)(**(int **)(param_1 + 0x178) + 0x68))();
    *(undefined2 *)(iVar4 + 0x18) = *param_3;
    *(undefined2 *)(iVar4 + 0x1a) = param_3[1];
    *(undefined2 *)(iVar4 + 0x1c) = param_3[2];
    *(undefined2 *)(iVar4 + 0x1e) = param_3[3];
  }
  if (*(int **)(param_1 + 0x180) != (int *)0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    iVar4 = (**(code **)(**(int **)(param_1 + 0x180) + 0x68))();
    *(undefined2 *)(iVar4 + 0x10) = uVar1;
    *(undefined2 *)(iVar4 + 0x12) = uVar2;
    *(undefined2 *)(iVar4 + 0x14) = uVar3;
    *(undefined2 *)(iVar4 + 0x16) = 0;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x180) + 0x68))();
    *(undefined2 *)(iVar4 + 0x18) = *param_3;
    *(undefined2 *)(iVar4 + 0x1a) = param_3[1];
    *(undefined2 *)(iVar4 + 0x1c) = param_3[2];
    *(undefined2 *)(iVar4 + 0x1e) = param_3[3];
  }
  return;
}

// === gfx_nw4r_g3d_80503188 (0x80503188) ===
void gfx_nw4r_g3d_80503188(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x17c) != (int *)0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x17c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = *param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_2[1];
    *(undefined2 *)(iVar1 + 0x14) = param_2[2];
    *(undefined2 *)(iVar1 + 0x16) = param_2[3];
    iVar1 = (**(code **)(**(int **)(param_1 + 0x17c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = *param_2;
    *(undefined2 *)(iVar1 + 0x1a) = param_2[1];
    *(undefined2 *)(iVar1 + 0x1c) = param_2[2];
    *(undefined2 *)(iVar1 + 0x1e) = param_2[3];
  }
  return;
}

// === nw4r_g3d_validate_80503250 (0x80503250) ===
void nw4r_g3d_validate_80503250(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  param_1[0x5d] = 0x3c;
  param_1[0x5e] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5f,0,0,0x174,2);
}

// === nw4r_g3d_validate_805032bc (0x805032bc) ===
undefined4 nw4r_g3d_validate_805032bc(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x17c,0,0x174,2);
  }
  return 0;
}

// === gfx_nw4r_g3d_80503330 (0x80503330) ===
void gfx_nw4r_g3d_80503330
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_78 [40];
  undefined auStack_50 [48];
  
  FUN_segment_0__804ae324(auStack_50,param_1);
  FUN_segment_0__804ae36c(auStack_50,param_2,param_3,param_4,0);
  gfx_EGG_Display_804ffee8(param_1,2);
  iVar3 = param_1 + 0x17c;
  iVar2 = 0;
  do {
    gfx_EGG_Display_804ffef8(param_1,iVar2,iVar3);
    FUN_segment_0__804ae324(auStack_78,iVar3);
    FUN_segment_0__804ae36c(auStack_78,param_2,param_5,param_6,0);
    FUN_segment_0__804ae32c(auStack_78,0xffffffff);
    gfx_nw4r_g3d_80500680(iVar3,0xdb);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x174;
  } while (iVar2 < 2);
  *(int *)(param_1 + 0x464) = param_1 + 0x17c;
  *(int *)(param_1 + 0x468) = param_1 + 0x2f0;
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xe5);
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xf3);
  *(undefined4 *)(param_1 + 0x470) = uVar1;
  FUN_segment_0__804ae32c(auStack_50,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_8050345c (0x8050345c) ===
void gfx_nw4r_g3d_8050345c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gfx_nw4r_g3d_80500740();
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  iVar3 = param_1 + 0x17c;
  *(int *)(param_1 + 0x464) = iVar3;
  iVar2 = 0;
  *(int *)(param_1 + 0x468) = param_1 + 0x2f0;
  do {
    uVar1 = gfx_EGG_Display_804ff4a0(iVar3 + 0x98,0);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
    uVar1 = gfx_EGG_Display_804ff4a0(iVar3 + 0x98,1);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,1);
    uVar1 = gfx_EGG_Display_804ff4a0(iVar3 + 0x98,2);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,1);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x174;
  } while (iVar2 < 2);
  uVar1 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x464) + 0x98,3);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,3);
  uVar1 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x468) + 0x98,3);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_nw4r_g3d_8050357c (0x8050357c) ===
void gfx_nw4r_g3d_8050357c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  gfx_nw4r_g3d_80500780();
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    *(undefined *)(iVar1 + 0x35) = 0;
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar3,0);
  }
  else {
    piVar2 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    if (*(int *)(*piVar2 + piVar2[0xe] * 0x10) != 0) {
      *(undefined *)((int)piVar2 + 0x35) = 1;
    }
  }
  return;
}

// === gfx_nw4r_g3d_80503620 (0x80503620) ===
int * gfx_nw4r_g3d_80503620(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 100) + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80503690;
        }
      }
      bVar1 = false;
LAB_segment_0__80503690:
      if (bVar1) goto LAB_segment_0__805036a0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__805036a0:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__805036f4;
      }
    }
    bVar1 = false;
LAB_segment_0__805036f4:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === gfx_nw4r_g3d_80503720 (0x80503720) ===
void gfx_nw4r_g3d_80503720(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (param_2 == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  }
  else {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  }
  param_1 = param_1 + 0x17c;
  iVar2 = 0;
  do {
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    if (param_2 == 0) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
    }
    else {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x174;
  } while (iVar2 < 2);
  return;
}

// === nw4r_g3d_validate_805037e8 (0x805037e8) ===
void nw4r_g3d_validate_805037e8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (param_2 == 0) {
    if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
    }
    if (piVar1[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
    }
  }
  else if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  param_1 = param_1 + 0x17c;
  iVar2 = 0;
  do {
    nw4r_g3d_validate_80503f78(param_1,param_2);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x174;
  } while (iVar2 < 2);
  return;
}

// === gfx_nw4r_g3d_8050398c (0x8050398c) ===
void gfx_nw4r_g3d_8050398c(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x178);
  uVar3 = *(undefined4 *)(param_1 + 0x464);
  uVar2 = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x464) = uVar2;
  *(undefined4 *)(param_1 + 0x468) = uVar3;
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2,param_2);
  }
  if (param_3 == 0) {
    uVar2 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x464) + 0x98,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,2);
    uVar2 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x468) + 0x98,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,4);
  }
  else {
    uVar2 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x464) + 0x98,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,1);
    uVar2 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x468) + 0x98,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,5);
  }
  return;
}

// === gfx_nw4r_g3d_80503a7c (0x80503a7c) ===
void gfx_nw4r_g3d_80503a7c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x464) + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(*(int *)(param_1 + 0x464) + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_nw4r_g3d_80503ae8 (0x80503ae8) ===
undefined4 gfx_nw4r_g3d_80503ae8(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 0x17c;
  iVar2 = 0;
  do {
    iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0x98,3);
    if ((*(int *)(iVar1 + 0x38) - 1U < 2) || (*(int *)(iVar1 + 0x38) - 4U < 2)) {
      return 0;
    }
    iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0x98,2);
    if (*(int *)(iVar1 + 0x38) == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x174;
  } while (iVar2 < 2);
  return 1;
}

// === nw4r_g3d_validate_80503b80 (0x80503b80) ===
void nw4r_g3d_validate_80503b80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)gfx_EGG_Display_804ff4b0(param_1 + 0x214,2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)*puVar1);
}

// === gfx_nw4r_g3d_80503bf4 (0x80503bf4) ===
void gfx_nw4r_g3d_80503bf4(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x46c) != (int *)0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x46c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = *param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_2[1];
    *(undefined2 *)(iVar1 + 0x14) = param_2[2];
    *(undefined2 *)(iVar1 + 0x16) = param_2[3];
    iVar1 = (**(code **)(**(int **)(param_1 + 0x46c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = *param_3;
    *(undefined2 *)(iVar1 + 0x1a) = param_3[1];
    *(undefined2 *)(iVar1 + 0x1c) = param_3[2];
    *(undefined2 *)(iVar1 + 0x1e) = param_3[3];
  }
  return;
}

// === gfx_nw4r_g3d_80503ca8 (0x80503ca8) ===
void gfx_nw4r_g3d_80503ca8(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x470) != (int *)0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x470) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = *param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_2[1];
    *(undefined2 *)(iVar1 + 0x14) = param_2[2];
    *(undefined2 *)(iVar1 + 0x16) = param_2[3];
    iVar1 = (**(code **)(**(int **)(param_1 + 0x470) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = *param_2;
    *(undefined2 *)(iVar1 + 0x1a) = param_2[1];
    *(undefined2 *)(iVar1 + 0x1c) = param_2[2];
    *(undefined2 *)(iVar1 + 0x1e) = param_2[3];
  }
  return;
}

// === gfx_nw4r_g3d_80503d60 (0x80503d60) ===
undefined4 * gfx_nw4r_g3d_80503d60(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === nw4r_g3d_validate_80503d9c (0x80503d9c) ===
int nw4r_g3d_validate_80503d9c(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_nw4r_g3d_80503df4 (0x80503df4) ===
void gfx_nw4r_g3d_80503df4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auStack_38 [44];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,param_2,param_3,param_4,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_80503e68 (0x80503e68) ===
void gfx_nw4r_g3d_80503e68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  if (*(char *)(iVar1 + 0x35) == 0) {
    iVar3 = *(int *)(iVar1 + 0x38);
    if (iVar3 - 1U < 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,iVar1,3);
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
    }
    else if ((3 < iVar3) && (iVar3 < 6)) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,iVar1,0);
      gfx_nw4r_g3d_80500c48(param_1);
    }
  }
  return;
}

// === gfx_nw4r_g3d_80503f18 (0x80503f18) ===
void gfx_nw4r_g3d_80503f18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (param_2 == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  }
  else {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  }
  return;
}

// === nw4r_g3d_validate_80503f78 (0x80503f78) ===
void nw4r_g3d_validate_80503f78(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if (param_2 == 0) {
    if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
    }
    if (piVar1[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,3);
    }
  }
  else {
    if (piVar1[0xe] == 0) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
    }
    else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
    }
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  }
  return;
}

// === gfx_nw4r_g3d_805040ec (0x805040ec) ===
undefined4 * gfx_nw4r_g3d_805040ec(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x5d);
  uVar2 = uRam00000150;
  uVar1 = uRam0000014c;
  param_1[0x82] = uRam00000154;
  param_1[0x7e] = 0;
  param_1[0x7f] = param_1;
  param_1[0x80] = uVar1;
  param_1[0x81] = uVar2;
  uVar2 = uRam0000015c;
  uVar1 = uRam00000158;
  param_1[0x87] = uRam00000160;
  param_1[0x83] = 0;
  param_1[0x84] = param_1;
  param_1[0x85] = uVar1;
  param_1[0x86] = uVar2;
  uVar2 = uRam00000168;
  uVar1 = uRam00000164;
  param_1[0x8c] = uRam0000016c;
  param_1[0x88] = 0;
  param_1[0x89] = param_1;
  param_1[0x8a] = uVar1;
  param_1[0x8b] = uVar2;
  uVar2 = uRam00000174;
  uVar1 = uRam00000170;
  param_1[0x91] = uRam00000178;
  param_1[0x8d] = 0;
  param_1[0x8e] = param_1;
  param_1[0x8f] = uVar1;
  param_1[0x90] = uVar2;
  uVar2 = uRam00000180;
  uVar1 = uRam0000017c;
  param_1[0x96] = uRam00000184;
  param_1[0x92] = 0;
  param_1[0x93] = param_1;
  param_1[0x94] = uVar1;
  param_1[0x95] = uVar2;
  uVar2 = uRam0000018c;
  uVar1 = uRam00000188;
  param_1[0x9b] = uRam00000190;
  param_1[0x97] = 0;
  param_1[0x98] = param_1;
  param_1[0x99] = uVar1;
  param_1[0x9a] = uVar2;
  uVar2 = uRam00000198;
  uVar1 = uRam00000194;
  param_1[0xa0] = uRam0000019c;
  param_1[0x9c] = 0;
  param_1[0x9d] = param_1;
  param_1[0x9e] = uVar1;
  param_1[0x9f] = uVar2;
  param_1[0xa2] = 1;
  param_1[0xa3] = 0;
  param_1[0xa4] = 1;
  return param_1;
}

// === nw4r_g3d_validate_805042a4 (0x805042a4) ===
int nw4r_g3d_validate_805042a4(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c91a0(param_1 + 0x174,0xffffffff);
    nw4r_g3d_validate_80500540(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_nw4r_g3d_8050430c (0x8050430c) ===
void gfx_nw4r_g3d_8050430c
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined auStack_48 [48];
  
  *(undefined4 *)(param_1 + 0x290) = param_3;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x288) = param_7;
  FUN_segment_0__804ae324(auStack_48,param_1);
  FUN_segment_0__804ae36c(auStack_48,param_4,param_5,param_6,0);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x133);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805043e0;
        }
      }
      bVar1 = false;
LAB_segment_0__805043e0:
      if (bVar1) goto LAB_segment_0__805043f0;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__805043f0:
  *(int *)(param_1 + 0x198) = param_1 + 0x1f8;
  *(int **)(param_1 + 0x180) = piVar2;
  *(int *)(param_1 + 0x19c) = param_1 + 0x20c;
  FUN_segment_0__804c9214(param_1 + 0x174,2,param_8,0);
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x140);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80504480;
        }
      }
      bVar1 = false;
LAB_segment_0__80504480:
      if (bVar1) goto LAB_segment_0__80504490;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__80504490:
  **(int **)(param_1 + 0x1a8) = (int)piVar2;
  *(int *)(*(int *)(param_1 + 0x1a8) + 0x18) = param_1 + 0x220;
  *(int *)(*(int *)(param_1 + 0x1a8) + 0x1c) = param_1 + 0x234;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x14d);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80504518;
        }
      }
      bVar1 = false;
LAB_segment_0__80504518:
      if (bVar1) goto LAB_segment_0__80504528;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__80504528:
  *(int **)(*(int *)(param_1 + 0x1a8) + 0x28) = piVar2;
  *(int *)(*(int *)(param_1 + 0x1a8) + 0x40) = param_1 + 0x220;
  *(int *)(*(int *)(param_1 + 0x1a8) + 0x44) = param_1 + 0x234;
  if (param_2 == 0) {
    FUN_segment_0__804c92c4(param_1 + 0x174,3,param_1 + 0x248,1);
    FUN_segment_0__804c92c4(param_1 + 0x174,4,param_1 + 0x25c,1);
  }
  else {
    FUN_segment_0__804c92c4(param_1 + 0x174,6,param_1 + 0x248,1);
    FUN_segment_0__804c92c4(param_1 + 0x174,5,param_1 + 0x25c,1);
  }
  FUN_segment_0__804c92c4(param_1 + 0x174,0,param_1 + 0x270,1);
  FUN_segment_0__804c92e0(param_1 + 0x174,*(undefined4 *)(param_1 + 0x288));
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80504624;
        }
      }
      bVar1 = false;
LAB_segment_0__80504624:
      if (bVar1) goto LAB_segment_0__80504634;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__80504634:
  FUN_segment_0__804ca310(piVar2,param_1 + 0x174);
  return;
}

// === gfx_nw4r_g3d_8050465c (0x8050465c) ===
void gfx_nw4r_g3d_8050465c(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4); puVar2 != (void *)0;
          puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805046e0;
        }
      }
      bVar1 = false;
LAB_segment_0__805046e0:
      if (bVar1) goto LAB_segment_0__805046f0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805046f0:
  FUN_segment_0__804ca36c(piVar4,param_2,param_1 + 0x174,0xffffffff);
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,2);
  return;
}

// === gfx_nw4r_g3d_80504740 (0x80504740) ===
void gfx_nw4r_g3d_80504740(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  
  gfx_nw4r_g3d_80500740();
  piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 0x38);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5); puVar2 != (void *)0;
          puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar4 = true;
          goto LAB_segment_0__805047c0;
        }
      }
      bVar4 = false;
LAB_segment_0__805047c0:
      if (bVar4) goto LAB_segment_0__805047d0;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__805047d0:
  iVar1 = param_1 + 0x174;
  bVar4 = false;
  if (piVar5[0x15] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x2c] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x43] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x5a] == iVar1) {
    bVar4 = true;
  }
  else if (piVar5[0x71] == iVar1) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,2);
  }
  else {
    uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  }
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,0);
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,1);
  uVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar3,1);
  FUN_segment_0__804c92e0(param_1 + 0x174,*(undefined4 *)(param_1 + 0x288));
  return;
}

// === nw4r_g3d_validate_80504928 (0x80504928) ===
void nw4r_g3d_validate_80504928(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return;
}

// === nw4r_g3d_validate_80504a0c (0x80504a0c) ===
void nw4r_g3d_validate_80504a0c(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(param_1[0x19] + 0xc) + 0x38);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80504a90;
        }
      }
      bVar1 = false;
LAB_segment_0__80504a90:
      if (bVar1) goto LAB_segment_0__80504aa0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80504aa0:
  bVar1 = false;
  piVar2 = param_1 + 0x5d;
  if ((param_2 == 0) || ((int *)piVar4[0x15] != piVar2)) {
    if ((param_2 == 1) || ((int *)piVar4[0x2c] != piVar2)) {
      if ((param_2 == 2) || ((int *)piVar4[0x43] != piVar2)) {
        if ((param_2 == 3) || ((int *)piVar4[0x5a] != piVar2)) {
          if ((param_2 != 4) && ((int *)piVar4[0x71] == piVar2)) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    piVar4 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
    if (piVar4[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(*piVar4 + 0x10));
    }
    if (piVar4[0xe] == 2) {
      gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar4,3);
    }
  }
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  return;
}

// === nw4r_g3d_validate_80504c10 (0x80504c10) ===
void nw4r_g3d_validate_80504c10(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)0;
  if (param_3 == 0) {
    piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  }
  else if (param_3 == 1) {
    piVar1 = (int *)gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  }
  if (piVar1[0xe] == 0) {
    gfx_EGG_Display_804ff59c((double)g_Ram_float,piVar1,1);
  }
  else if (piVar1[0xe] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x30));
  }
  return;
}

// === nw4r_g3d_assertFail_80504cf0 (0x80504cf0) ===
void nw4r_g3d_assertFail_80504cf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_80504f38 (0x80504f38) ===
void gfx_nw4r_g3d_80504f38(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  iVar3 = param_1[0xa3] + 1;
  if (param_1[0xa4] <= iVar3) {
    iVar3 = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1,iVar3);
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  piVar2 = (int *)param_1[0xa1];
  if (piVar2 != (int *)0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
  }
  return;
}

// === gfx_nw4r_g3d_80504ff0 (0x80504ff0) ===
void gfx_nw4r_g3d_80504ff0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  iVar3 = param_1[0xa3] + -1;
  if (iVar3 < 0) {
    iVar3 = param_1[0xa4] + -1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,iVar3);
  (**(code **)(*param_1 + 0x4c))(param_1,param_2);
  piVar2 = (int *)param_1[0xa1];
  if (piVar2 != (int *)0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
  }
  return;
}

// === gfx_nw4r_g3d_805050a4 (0x805050a4) ===
void gfx_nw4r_g3d_805050a4(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,3);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
    iVar3 = param_1[0xa3] + 1;
    if (param_1[0xa4] <= iVar3) {
      iVar3 = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1,iVar3);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    piVar2 = (int *)param_1[0xa1];
    if (piVar2 != (int *)0) {
      (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
    }
  }
  else if (param_3 == 1) {
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
    iVar3 = param_1[0xa3] + -1;
    if (iVar3 < 0) {
      iVar3 = param_1[0xa4] + -1;
    }
    (**(code **)(*param_1 + 0x50))(param_1,iVar3);
    (**(code **)(*param_1 + 0x4c))(param_1,param_2);
    piVar2 = (int *)param_1[0xa1];
    if (piVar2 != (int *)0) {
      (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
    }
  }
  return;
}

// === gfx_nw4r_g3d_805051f4 (0x805051f4) ===
void gfx_nw4r_g3d_805051f4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  iVar3 = param_1[0xa3] + 1;
  if (param_1[0xa4] <= iVar3) {
    iVar3 = 0;
  }
  (**(code **)(*param_1 + 0x50))(param_1,iVar3);
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  piVar2 = (int *)param_1[0xa1];
  if (piVar2 != (int *)0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
  }
  return;
}

// === gfx_nw4r_g3d_805052b0 (0x805052b0) ===
void gfx_nw4r_g3d_805052b0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  iVar3 = param_1[0xa3] + -1;
  if (iVar3 < 0) {
    iVar3 = param_1[0xa4] + -1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,iVar3);
  (**(code **)(*param_1 + 0x4c))(param_1,param_2);
  piVar2 = (int *)param_1[0xa1];
  if (piVar2 != (int *)0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1,param_2);
  }
  return;
}

// === gfx_nw4r_g3d_80505378 (0x80505378) ===
undefined4 * gfx_nw4r_g3d_80505378(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  FUN_segment_0__804c90c4(param_1 + 0x5d);
  uVar2 = uRam00000210;
  uVar1 = uRam0000020c;
  param_1[0x82] = uRam00000214;
  param_1[0x7e] = 0;
  param_1[0x7f] = param_1;
  param_1[0x80] = uVar1;
  param_1[0x81] = uVar2;
  uVar2 = uRam0000021c;
  uVar1 = uRam00000218;
  param_1[0x87] = uRam00000220;
  param_1[0x83] = 0;
  param_1[0x84] = param_1;
  param_1[0x85] = uVar1;
  param_1[0x86] = uVar2;
  uVar2 = uRam00000228;
  uVar1 = uRam00000224;
  param_1[0x8c] = uRam0000022c;
  param_1[0x88] = 0;
  param_1[0x89] = param_1;
  param_1[0x8a] = uVar1;
  param_1[0x8b] = uVar2;
  uVar2 = uRam00000234;
  uVar1 = uRam00000230;
  param_1[0x91] = uRam00000238;
  param_1[0x8d] = 0;
  param_1[0x8e] = param_1;
  param_1[0x8f] = uVar1;
  param_1[0x90] = uVar2;
  uVar2 = uRam00000240;
  uVar1 = uRam0000023c;
  param_1[0x96] = uRam00000244;
  param_1[0x92] = 0;
  param_1[0x93] = param_1;
  param_1[0x94] = uVar1;
  param_1[0x95] = uVar2;
  uVar2 = uRam0000024c;
  uVar1 = uRam00000248;
  param_1[0x9b] = uRam00000250;
  param_1[0x97] = 0;
  param_1[0x98] = param_1;
  param_1[0x99] = uVar1;
  param_1[0x9a] = uVar2;
  uVar2 = uRam00000258;
  uVar1 = uRam00000254;
  param_1[0xa0] = uRam0000025c;
  param_1[0x9c] = 0;
  param_1[0x9d] = param_1;
  param_1[0x9e] = uVar1;
  param_1[0x9f] = uVar2;
  param_1[0xa2] = 1;
  param_1[0xa3] = 0;
  param_1[0xa4] = 1;
  *param_1 = 0;
  return param_1;
}

// === nw4r_g3d_validate_8050553c (0x8050553c) ===
int nw4r_g3d_validate_8050553c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__804c91a0(param_1 + 0x174,0xffffffff);
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_nw4r_g3d_805055a8 (0x805055a8) ===
void gfx_nw4r_g3d_805055a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804c69dc(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  return;
}

// === nw4r_g3d_validate_80505640 (0x80505640) ===
void nw4r_g3d_validate_80505640(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === nw4r_g3d_validate_80505670 (0x80505670) ===
void nw4r_g3d_validate_80505670(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === gfx_nw4r_g3d_8050572c (0x8050572c) ===
undefined4 * gfx_nw4r_g3d_8050572c(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === nw4r_g3d_validate_80505768 (0x80505768) ===
int nw4r_g3d_validate_80505768(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === nw4r_g3d_validate_805057c0 (0x805057c0) ===
void nw4r_g3d_validate_805057c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack_a8 [16];
  undefined auStack_98 [36];
  undefined4 uStack_74;
  undefined4 local_70 [26];
  
  FUN_segment_0__804ae324(auStack_98,param_1);
  puVar4 = &uStack_74;
  puVar3 = (undefined4 *)0xfffffffc;
  iVar5 = 0xc;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_a8,0xf,0xc,param_2);
}

// === gfx_nw4r_g3d_8050586c (0x8050586c) ===
void gfx_nw4r_g3d_8050586c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  *(undefined *)(param_1 + 0x80) = 1;
  return;
}

// === nw4r_g3d_assertFail_80505924 (0x80505924) ===
void nw4r_g3d_assertFail_80505924(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_80505a94 (0x80505a94) ===
void gfx_nw4r_g3d_80505a94(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  gfx_nw4r_g3d_805003cc(param_1,0x45,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_80505ae8 (0x80505ae8) ===
void gfx_nw4r_g3d_80505ae8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_nw4r_g3d_80505b20 (0x80505b20) ===
void gfx_nw4r_g3d_80505b20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gfx_nw4r_g3d_80500a34(param_1,param_2,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,2);
  gfx_nw4r_g3d_805003cc(param_1,0x46,0xffffffff);
  return;
}

// === gfx_nw4r_g3d_80505b7c (0x80505b7c) ===
void gfx_nw4r_g3d_80505b7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  if (*(int *)(iVar1 + 0x38) != 0) {
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,3);
  }
  return;
}

// === gfx_nw4r_g3d_80505bd8 (0x80505bd8) ===
bool gfx_nw4r_g3d_80505bd8(int param_1)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804ff4b0(param_1 + 0x98,1);
  return *(int *)(iVar1 + 0x38) == 2;
}

// === nw4r_g3d_validate_80505c10 (0x80505c10) ===
void nw4r_g3d_validate_80505c10(undefined4 *param_1)

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
  param_1[0x1a] = 0xffffffff;
  gfx_nw4r_g3d_80500418(param_1 + 0x1b);
  param_1[0x1b] = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0x78);
  param_1[0x78] = 0;
  gfx_nw4r_g3d_80500418(param_1 + 0xd5);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x132,0,0,0x178,0xc);
}

// === nw4r_g3d_validate_80505d3c (0x80505d3c) ===
undefined4 nw4r_g3d_validate_80505d3c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x4c8,0,0x178,0xc);
  }
  return 0;
}

// === nw4r_g3d_validate_80505de8 (0x80505de8) ===
void nw4r_g3d_validate_80505de8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined auStack_d8 [16];
  undefined auStack_c8 [40];
  undefined auStack_a0 [36];
  undefined4 uStack_7c;
  undefined4 local_78 [24];
  
  iVar2 = *(int *)*g_Ram_uint;
  if (iVar2 < 0x60) {
    if (0x59 < iVar2) {
      if (iVar2 < 0x5e) goto LAB_segment_0__80505e58;
LAB_segment_0__80505e50:
      *(undefined4 *)(param_1 + 0x16a4) = 2;
      goto LAB_segment_0__80505e58;
    }
    if (iVar2 < 0x58) goto LAB_segment_0__80505e58;
  }
  else {
    if (0x67 < iVar2) goto LAB_segment_0__80505e58;
    if (99 < iVar2) goto LAB_segment_0__80505e50;
  }
  *(undefined4 *)(param_1 + 0x16a4) = 1;
LAB_segment_0__80505e58:
  if (0xf < *(int *)*g_Ram_uint - 0x58U) {
    (**(code **)(*(int *)(param_1 + 0x58) + 0x10))((int *)(param_1 + 0x58),0,0);
    FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
    FUN_segment_0__804d1c1c(param_1,0xf);
    FUN_segment_0__804d1c2c(param_1,0xc,param_1 + 0x6c,0);
    FUN_segment_0__80735444(param_1 + 0x6c,0);
    if (*(int *)(param_1 + 0x169c) == 0) {
      FUN_segment_0__80735844(param_1 + 0x6c,0x1102,0);
    }
    else if (*(int *)(param_1 + 0x169c) == 1) {
      FUN_segment_0__80735844(param_1 + 0x6c,0x1103,0);
    }
    FUN_segment_0__804d1c2c(param_1,0xd,param_1 + 0x1e0,0);
    FUN_segment_0__807358cc(param_1 + 0x1e0);
    FUN_segment_0__804d1c2c(param_1,0xe,param_1 + 0x354,0);
    FUN_segment_0__804ae324(auStack_a0,param_1 + 0x354);
    FUN_segment_0__804ae36c(auStack_a0,0x3c,0x44,0x4c,0);
    FUN_segment_0__804ae32c(auStack_a0,0xffffffff);
    FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x4c8,0);
    FUN_segment_0__804ae324(auStack_c8,param_1 + 0x4c8);
    puVar5 = &uStack_7c;
    puVar4 = (undefined4 *)0xfffffffc;
    iVar2 = 0xc;
    do {
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      uVar3 = *puVar4;
      puVar5[1] = *puVar1;
      puVar5 = puVar5 + 2;
      *puVar5 = uVar3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_d8,0xf,0x54,0);
  }
                    /* WARNING: Could not emulate address calculation at 0x80505e80 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
  return;
}

// === nw4r_g3d_assertFail_8050604c (0x8050604c) ===
void nw4r_g3d_assertFail_8050604c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_80506468 (0x80506468) ===
void gfx_nw4r_g3d_80506468(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r29;
  int *piVar11;
  bool bVar12;
  int iVar13;
  
  piVar11 = *(int **)(*g_Ram_ptr + 0x248);
  if (piVar11 != (int *)0) {
    unaff_r29 = 0;
    if (piVar11 != (int *)0) {
      for (puVar8 = (undefined4 *)(**(code **)(*piVar11 + 0x60))(piVar11);
          puVar8 != (void *)0; puVar8 = (undefined4 *)*puVar8) {
        if (puVar8 == (void *)0) {
          bVar12 = true;
          goto LAB_segment_0__805064f4;
        }
      }
      bVar12 = false;
LAB_segment_0__805064f4:
      if (bVar12) goto LAB_segment_0__80506504;
    }
    piVar11 = (int *)0;
  }
  else {
    piVar11 = (int *)0;
  }
LAB_segment_0__80506504:
  if (param_1[2] != 4) {
    return;
  }
  if (param_1[0x5a8] != 3) {
    uVar6 = 0;
    iVar9 = *(int *)*g_Ram_ptr;
    if ((iVar9 < 0x60) || (0x67 < iVar9)) {
      if (((0x57 < iVar9) && (iVar9 < 0x5a)) || ((0x5d < iVar9 && (iVar9 < 0x60)))) {
        uVar6 = (~g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x10] | 1U) -
                (1U - g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x10] >> 1) >> 0x1f;
      }
    }
    else {
      uVar6 = 1;
      bVar12 = true;
      iVar13 = g_Ram_ptr[0xa47];
      if ((1 < (uint)g_Ram_ptr[iVar13 * 0x16 + 0x10]) &&
         ((g_Ram_ptr[iVar13 * 0x16 + 0x12] & 1U) != 0)) {
        bVar12 = false;
      }
      if ((!bVar12) && (*(char *)((int)g_Ram_ptr + iVar13 * 0x58 + 0x5a) == 0)) {
        uVar6 = 0;
      }
    }
    bVar12 = false;
    if (((0x60 < iVar9) && (iVar9 < 100)) || ((100 < iVar9 && (iVar9 < 0x68)))) {
      bVar3 = false;
      bVar4 = false;
      iVar9 = 0;
      iVar13 = 6;
      piVar10 = piVar11;
      do {
        bVar12 = false;
        if ((-1 < iVar9) && (iVar9 < piVar11[0xa1])) {
          bVar12 = true;
        }
        if ((bVar12) &&
           ((1 << (*(byte *)(piVar10 + 0x7d) & 0x3f) &
            g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0)) {
          if (piVar10[0x7e] == 0) {
            bVar3 = true;
          }
          else if (piVar10[0x7e] == 1) {
            bVar4 = true;
          }
        }
        bVar12 = false;
        if ((-1 < iVar9 + 1) && (iVar9 + 1 < piVar11[0xa1])) {
          bVar12 = true;
        }
        if ((bVar12) &&
           ((1 << (*(byte *)(piVar10 + 0x80) & 0x3f) &
            g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0)) {
          if (piVar10[0x81] == 0) {
            bVar3 = true;
          }
          else if (piVar10[0x81] == 1) {
            bVar4 = true;
          }
        }
        piVar10 = piVar10 + 6;
        iVar9 = iVar9 + 2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      bVar12 = false;
      if ((!bVar3) || (!bVar4)) {
        bVar12 = true;
      }
    }
    if (((uVar6 != 0) || (bVar12)) ||
       ((param_1[8] >> 0x1f) + (uint)(0x2a2f < (uint)param_1[8]) != 0)) {
      FUN_segment_0__805464b0(g_Ram_ptr);
      param_1[0x5a8] = 3;
    }
  }
  fVar5 = fRam00000110;
  iVar9 = param_1[0x5a8];
  if (iVar9 == 0) {
    iVar13 = param_1[7];
    iVar9 = iVar13 / 5 + (iVar13 >> 0x1f);
    if (iVar13 == (iVar9 - (iVar9 >> 0x1f)) * 5) {
      iVar9 = 0;
      do {
        iVar13 = gfx_nw4r_g3d_80506c0c(param_1,iVar9);
        if (iVar13 != 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0xc);
    }
    nw4r_g3d_assertFail_80506e68(param_1);
    gfx_nw4r_g3d_805070b0(param_1);
    return;
  }
  if (iVar9 == 1) {
    fVar1 = (float)param_1[0x5ae] + (float)param_1[0x5ad];
    fVar2 = (float)param_1[0x5ad] - fRam0000010c;
    iVar13 = param_1[0x5aa];
    iVar9 = (int)fVar1;
    bVar12 = fRam00000110 < fVar2;
    param_1[0x5ae] = (int)fVar1;
    param_1[0x5aa] = iVar9 - (iVar9 / param_1[0x5a6]) * param_1[0x5a6];
    if (bVar12) {
      fVar5 = fVar2;
    }
    param_1[0x5ad] = (int)fVar5;
    if (iVar13 == param_1[0x5aa]) {
      return;
    }
    uVar7 = gfx_EGG_Display_804ff4a0(param_1 + iVar13 * 0x5e + 0x158,4);
    gfx_EGG_Display_804ff59c((double)fRam00000100,uVar7,0);
    iVar9 = param_1[0x5aa];
    uVar7 = gfx_EGG_Display_804ff4a0(param_1 + iVar9 * 0x5e + 0x158,4);
    gfx_EGG_Display_804ff59c((double)fRam00000100,uVar7,1);
    gfx_nw4r_g3d_805003cc(param_1 + iVar9 * 0x5e + 0x132,0x45,0xffffffff);
    if (fRam00000114 <= (float)param_1[0x5ad]) {
      return;
    }
    iVar9 = param_1[0x5aa];
    if (iVar9 != param_1[0x5ab]) {
      return;
    }
    gfx_nw4r_g3d_80500a34(param_1 + iVar9 * 0x5e + 0x132,param_1[0x5ac],0);
    uVar7 = gfx_EGG_Display_804ff4a0(param_1 + iVar9 * 0x5e + 0x158,4);
    gfx_EGG_Display_804ff59c((double)fRam00000100,uVar7,2);
    gfx_nw4r_g3d_805003cc(param_1 + iVar9 * 0x5e + 0x132,0x46,0xffffffff);
    param_1[0x5af] = 0xb4;
    param_1[0x5a8] = 2;
    if (param_1[0x5a7] == 0) {
      FUN_segment_0__80735a00(param_1 + 0x78,0x110a,0);
      return;
    }
    if (param_1[0x5a7] != 1) {
      return;
    }
    FUN_segment_0__80735a00(param_1 + 0x78,0x110b,0);
    return;
  }
  if (iVar9 == 2) {
    iVar9 = param_1[0x5af];
    param_1[0x5af] = iVar9 + -1;
    if (-1 < iVar9 + -1) {
      return;
    }
    FUN_segment_0__80511bb0(piVar11);
    FUN_segment_0__80512358(piVar11);
    if (0xf < *(int *)*g_Ram_ptr - 0x58U) {
      (**(code **)(*param_1 + 0x1c))((double)fRam00000100,param_1,unaff_r29,0);
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x8050699c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_ptr - 0x58U) * 4))();
    return;
  }
  if (iVar9 != 3) {
    return;
  }
  iVar9 = FUN_segment_0__80546a88(g_Ram_ptr);
  if (iVar9 != 1) {
    return;
  }
  piVar11 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar11 != (int *)0) {
    if (piVar11 != (int *)0) {
      for (puVar8 = (undefined4 *)(**(code **)(*piVar11 + 0x60))(piVar11);
          puVar8 != (void *)0; puVar8 = (undefined4 *)*puVar8) {
        if (puVar8 == (void *)0) {
          bVar12 = true;
          goto LAB_segment_0__80506aa0;
        }
      }
      bVar12 = false;
LAB_segment_0__80506aa0:
      if (bVar12) goto LAB_segment_0__80506ab0;
    }
    piVar11 = (int *)0;
  }
  else {
    piVar11 = (int *)0;
  }
LAB_segment_0__80506ab0:
  (**(code **)(*piVar11 + 100))(piVar11);
  (**(code **)(*piVar11 + 0x68))(piVar11,0xfb2,0);
  piVar11[0x62] = (int)(param_1 + 0x11);
  FUN_segment_0__804d1c48((double)fRam00000100,param_1,0);
  return;
}

// === gfx_nw4r_g3d_80506b18 (0x80506b18) ===
void gfx_nw4r_g3d_80506b18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1 = param_1 + 0x4c8;
  iVar3 = 0;
  do {
    iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
    if (*(int *)(iVar1 + 0x38) != 0) {
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,3);
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x178;
  } while (iVar3 < 0xc);
  return;
}

// === gfx_nw4r_g3d_80506bc8 (0x80506bc8) ===
void gfx_nw4r_g3d_80506bc8(void)

{
  if (0xf < *(int *)*g_Ram_uint - 0x58U) {
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x80506bf0 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
  return;
}

// === gfx_nw4r_g3d_80506c0c (0x80506c0c) ===
undefined4 gfx_nw4r_g3d_80506c0c(int param_1,int param_2)

{
  undefined uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int unaff_r26;
  int *piVar8;
  int iVar9;
  
  piVar8 = *(int **)(*g_Ram_ptr + 0x248);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar3 = true;
          goto LAB_segment_0__80506c88;
        }
      }
      bVar3 = false;
LAB_segment_0__80506c88:
      if (bVar3) goto LAB_segment_0__80506c98;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__80506c98:
  bVar3 = false;
  if ((-1 < param_2) && (param_2 < piVar8[0xa1])) {
    bVar3 = true;
  }
  if (bVar3) {
    iVar9 = param_1 + param_2 * 4;
    if (*(int *)(iVar9 + 0x1668) < 0) {
      uVar1 = *(undefined *)((int)piVar8 + param_2 * 0xc + 0x1f5);
      cVar2 = *(char *)(piVar8 + param_2 * 3 + 0x7d);
      iVar6 = FUN_segment_0__8054c638(g_Ram_ptr,cVar2,uVar1);
      if (iVar6 == 0x30) {
        uVar5 = 0;
      }
      else {
        uVar7 = FUN_segment_0__8054c6d8(g_Ram_ptr,cVar2,uVar1);
        if (*(int *)(param_1 + 0x169c) == 0) {
          bVar3 = true;
          if ((uVar7 != 0xffffffff) && (0x1f < uVar7)) {
            bVar3 = false;
          }
          if (!bVar3) {
            uVar7 = 0xffffffff;
          }
          if (uVar7 == 0xffffffff) {
            unaff_r26 = 0x1101;
          }
          else {
            unaff_r26 = uVar7 + 0x2454;
          }
        }
        else if (*(int *)(param_1 + 0x169c) == 1) {
          iVar6 = FUN_segment_0__8054c6d8(g_Ram_ptr,cVar2,uVar1);
          bVar3 = true;
          if ((iVar6 != -1) && (9 < iVar6 - 0x20U)) {
            bVar3 = false;
          }
          if (!bVar3) {
            iVar6 = -1;
          }
          unaff_r26 = 0x1101;
          if (iVar6 != -1) {
            unaff_r26 = iVar6 + 0x2498;
          }
        }
        nw4r_g3d_assertFail_80505924
                  (param_1 + *(int *)(param_1 + 0x1698) * 0x178 + 0x4c8,uVar7 == 0xffffffff,
                   unaff_r26,piVar8 + 0xa4,param_2,
                   *(char *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59) == cVar2,
                   piVar8[param_2 * 3 + 0x7e]);
        uVar5 = 1;
        *(undefined4 *)(iVar9 + 0x1668) = *(undefined4 *)(param_1 + 0x1698);
        *(int *)(param_1 + 0x1698) = *(int *)(param_1 + 0x1698) + 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

// === nw4r_g3d_assertFail_80506e68 (0x80506e68) ===
void nw4r_g3d_assertFail_80506e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_nw4r_g3d_805070b0 (0x805070b0) ===
void gfx_nw4r_g3d_805070b0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int local_f8;
  int local_f4;
  
  piVar9 = *(int **)(*g_Ram_ptr + 0x248);
  if (piVar9 != (int *)0) {
    if (piVar9 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar9 + 0x60))(piVar9); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80507128;
        }
      }
      bVar1 = false;
LAB_segment_0__80507128:
      if (bVar1) goto LAB_segment_0__80507138;
    }
    piVar9 = (int *)0;
  }
  else {
    piVar9 = (int *)0;
  }
LAB_segment_0__80507138:
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 0;
  piVar7 = piVar9;
  iVar8 = param_1;
  do {
    bVar1 = false;
    if ((-1 < iVar4) && (iVar4 < piVar9[0xa1])) {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(int *)(iVar8 + 0x1668) < 0) {
        if ((1 << (*(byte *)(piVar7 + 0x7d) & 0x3f) &
            g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0) {
          iVar5 = iVar5 + 1;
        }
      }
      else {
        iVar3 = gfx_EGG_Display_804ff4b0(param_1 + *(int *)(iVar8 + 0x1668) * 0x178 + 0x560,1);
        if (*(int *)(iVar3 + 0x38) == 2) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 3;
    iVar8 = iVar8 + 4;
  } while (iVar4 < 0xc);
  FUN_segment_0__804b4ecc(&local_f8);
  local_f4 = iVar6 + iVar5;
  local_f8 = iVar6;
  gfx_nw4r_g3d_80500a34(param_1 + 0x354,0x7d9,&local_f8);
  return;
}

// === gfx_nw4r_g3d_80507228 (0x80507228) ===
void gfx_nw4r_g3d_80507228(void)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 < 0x60) {
    if (0x59 < iVar1) {
      if (iVar1 < 0x5e) goto LAB_segment_0__805072a8;
LAB_segment_0__80507294:
      gfx_EGG_Display_804f8c44(g_Ram_uint,0x5b,0);
      goto LAB_segment_0__805072a8;
    }
    if (iVar1 < 0x58) goto LAB_segment_0__805072a8;
  }
  else {
    if (0x67 < iVar1) goto LAB_segment_0__805072a8;
    if (99 < iVar1) goto LAB_segment_0__80507294;
  }
  gfx_EGG_Display_804f8c44(g_Ram_uint,0x55,0);
LAB_segment_0__805072a8:
  gfx_EGG_Display_804f8cd0(g_Ram_uint,0,0xff);
  return;
}

// === nw4r_g3d_validate_805072e4 (0x805072e4) ===
void nw4r_g3d_validate_805072e4(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === gfx_nw4r_g3d_80507338 (0x80507338) ===
undefined4 * gfx_nw4r_g3d_80507338(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  return param_1;
}

// === nw4r_g3d_validate_8050737c (0x8050737c) ===
int nw4r_g3d_validate_8050737c(int param_1,int param_2)

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

// === gfx_nw4r_g3d_805073e4 (0x805073e4) ===
void gfx_nw4r_g3d_805073e4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  return;
}

// === gfx_nw4r_g3d_80507440 (0x80507440) ===
void gfx_nw4r_g3d_80507440(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805074c0;
        }
      }
      bVar1 = false;
LAB_segment_0__805074c0:
      if (bVar1) goto LAB_segment_0__805074d0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__805074d0:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x10cd,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  return;
}

// === gfx_nw4r_g3d_80507540 (0x80507540) ===
void gfx_nw4r_g3d_80507540(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805075b8;
        }
      }
      bVar1 = false;
LAB_segment_0__805075b8:
      if (bVar1) goto LAB_segment_0__805075c8;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__805075c8:
  if (piVar3[0x25] != 0) {
    return;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80507638;
        }
      }
      bVar1 = false;
LAB_segment_0__80507638:
      if (bVar1) goto LAB_segment_0__80507648;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80507648:
  FUN_segment_0__804a9164(piVar3);
  return;
}

// === gfx_nw4r_g3d_80507678 (0x80507678) ===
undefined4 * gfx_nw4r_g3d_80507678(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c9f74(param_1 + 0x11);
  gfx_nw4r_g3d_80500418(param_1 + 0x9a);
  param_1[0x9a] = 0;
  FUN_segment_0__804c0a10(param_1 + 0xf7);
  FUN_segment_0__804a97a4(param_1 + 0x18a);
  FUN_segment_0__804a97a4(param_1 + 0x21f);
  uVar1 = uRam00000000;
  param_1[0x21f] = 0;
  param_1[0x2b4] = 0x7d1;
  param_1[0x2b5] = 0;
  param_1[0x2b6] = uVar1;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[700] = uRam00000008;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = param_1;
  param_1[0x2ba] = uVar1;
  param_1[699] = uVar2;
  uVar2 = uRam00000010;
  uVar1 = uRam0000000c;
  param_1[0x2c1] = uRam00000014;
  param_1[0x2bd] = 0;
  param_1[0x2be] = param_1;
  param_1[0x2bf] = uVar1;
  param_1[0x2c0] = uVar2;
  uVar2 = uRam0000001c;
  uVar1 = uRam00000018;
  param_1[0x2c6] = uRam00000020;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = param_1;
  param_1[0x2c4] = uVar1;
  param_1[0x2c5] = uVar2;
  return param_1;
}

// === nw4r_g3d_validate_805077d0 (0x805077d0) ===
int nw4r_g3d_validate_805077d0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x87c != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x87c,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x628,0xffffffff);
    FUN_segment_0__804c0aa0(param_1 + 0x3dc,0xffffffff);
    if (param_1 + 0x268 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x268,0);
    }
    FUN_segment_0__804ca1a0(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_nw4r_g3d_80507870 (0x80507870) ===
void gfx_nw4r_g3d_80507870(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x268,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x3dc,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x628,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x87c,0);
  FUN_segment_0__80735444(param_1 + 0x268,0);
  FUN_segment_0__804c0b08(param_1 + 0x3dc,0);
  FUN_segment_0__804a9914(param_1 + 0x628,0x12,0x19,0x2b,1,0,0);
  FUN_segment_0__804a9914(param_1 + 0x87c,0x2e,0x35,0x3a,1,0,1);
  FUN_segment_0__804a9ec4(param_1 + 0x628,param_1 + 0xae0,0);
  FUN_segment_0__804a9ec4(param_1 + 0x87c,param_1 + 0xaf4,0);
  FUN_segment_0__804ca350(param_1 + 0x44,1,param_1 + 0xb08,0,0);
  FUN_segment_0__80735844(param_1 + 0x268,0x177c,0);
  FUN_segment_0__804a9eec(param_1 + 0x628,0);
  return;
}

// === gfx_nw4r_g3d_805079d8 (0x805079d8) ===
void gfx_nw4r_g3d_805079d8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  FUN_segment_0__804a9eec(param_1 + 0x628,0);
  piVar5 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80507a64;
        }
      }
      bVar1 = false;
LAB_segment_0__80507a64:
      if (bVar1) goto LAB_segment_0__80507a74;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80507a74:
  iVar4 = g_Ram_ptr[0x26];
  uVar3 = FUN_segment_0__804bf900
                    (piVar5,*(undefined4 *)(iVar4 + 0x3c4),*(undefined4 *)(iVar4 + 0x3cc),
                     *(undefined4 *)(iVar4 + 0x3c8));
  FUN_segment_0__804c0c30(param_1 + 0x3dc,uVar3,0);
  return;
}

// === gfx_nw4r_g3d_80507ac0 (0x80507ac0) ===
void gfx_nw4r_g3d_80507ac0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80507b3c;
        }
      }
      bVar1 = false;
LAB_segment_0__80507b3c:
      if (bVar1) goto LAB_segment_0__80507b4c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80507b4c:
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
  if (*(int *)*g_Ram_ptr == 0x52) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x32,0);
  }
  else if (*(int *)*g_Ram_ptr == 0x53) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x33,0);
  }
  return;
}

// === gfx_nw4r_g3d_80507cf8 (0x80507cf8) ===
void gfx_nw4r_g3d_80507cf8(int *param_1,undefined4 param_2)

{
  if (*(int *)*g_Ram_uint == 0x52) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x7d,1);
  }
  else if (*(int *)*g_Ram_uint == 0x53) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x82,1);
  }
  return;
}

// === gfx_nw4r_g3d_80507df8 (0x80507df8) ===
void gfx_nw4r_g3d_80507df8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x2a4);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80507e74;
        }
      }
      bVar1 = false;
LAB_segment_0__80507e74:
      if (bVar1) goto LAB_segment_0__80507e84;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80507e84:
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

// === nw4r_g3d_validate_80507fe8 (0x80507fe8) ===
void nw4r_g3d_validate_80507fe8(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === nw4r_g3d_validate_80508018 (0x80508018) ===
void nw4r_g3d_validate_80508018(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === gfx_nw4r_g3d_80508064 (0x80508064) ===
undefined4 * gfx_nw4r_g3d_80508064(undefined4 *param_1)

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
  FUN_segment_0__804c8134(param_1 + 0x17);
  return param_1;
}

// === nw4r_g3d_validate_805080e0 (0x805080e0) ===
int nw4r_g3d_validate_805080e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x5c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_nw4r_g3d_80508148 (0x80508148) ===
void gfx_nw4r_g3d_80508148(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x5c) + 0x10))(param_1 + 0x5c,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x5c);
  FUN_segment_0__804d1c1c(param_1,0);
  EGG_Display_validate_804e5ea4(*g_Ram_uint);
  return;
}

// === nw4r_g3d_validate_805081b4 (0x805081b4) ===
void nw4r_g3d_validate_805081b4(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  *(undefined *)((int)param_1 + 0x6e) = 0;
  *(undefined *)(param_1 + 0x1b) = 0;
  *(undefined *)((int)param_1 + 0x6d) = 0;
  iVar2 = FUN_segment_0__805469b4(g_Ram_ptr);
  if (iVar2 != 0) {
    *(undefined *)((int)param_1 + 0x6e) = 1;
    param_1[0x16] = 0;
    return;
  }
  if (*(int *)(g_Ram_ptr[0x26] + 0x4c4) != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  param_1[0x16] = 1;
  piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80508284;
        }
      }
      bVar1 = false;
LAB_segment_0__80508284:
      if (bVar1) goto LAB_segment_0__80508294;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80508294:
  (**(code **)(*piVar5 + 100))(piVar5);
  iVar2 = *(int *)*g_Ram_ptr;
  if (iVar2 != 0x82) {
    if (0x81 < iVar2) {
      if (iVar2 < 0xa1) {
        if (iVar2 == 0x87) {
          uVar4 = 0x19cd;
          goto LAB_segment_0__80508370;
        }
        if ((0x86 < iVar2) || (0x84 < iVar2)) goto LAB_segment_0__8050836c;
      }
      else if (iVar2 != 0xa5) {
        if ((iVar2 < 0xa5) && (iVar2 < 0xa3)) {
LAB_segment_0__80508354:
          uVar4 = 0;
          goto LAB_segment_0__80508370;
        }
        goto LAB_segment_0__8050836c;
      }
      uVar4 = 0x13ba;
      goto LAB_segment_0__80508370;
    }
    if (iVar2 < 0x5e) {
      if (iVar2 < 0x58) {
        if (0x54 < iVar2) {
          uVar4 = 0x7f1;
          goto LAB_segment_0__80508370;
        }
      }
      else if (0x5a < iVar2) {
        uVar4 = 0x7f2;
        goto LAB_segment_0__80508370;
      }
    }
    else if (iVar2 != 0x7f) {
      if (0x7e < iVar2) {
        uVar4 = 0xfa3;
        goto LAB_segment_0__80508370;
      }
      if (0x7c < iVar2) goto LAB_segment_0__80508354;
    }
  }
LAB_segment_0__8050836c:
  uVar4 = 0;
LAB_segment_0__80508370:
  FUN_segment_0__804ccddc(piVar5,uVar4,0);
  (**(code **)(*piVar5 + 0x68))(piVar5,0x18ae,0);
  piVar5[0x62] = (int)(param_1 + 0x11);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  return;
}

// === gfx_nw4r_g3d_80508690 (0x80508690) ===
void gfx_nw4r_g3d_80508690(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x228);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80508708;
        }
      }
      bVar1 = false;
LAB_segment_0__80508708:
      if (bVar1) goto LAB_segment_0__80508718;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80508718:
  if (piVar3 != (int *)0) {
    *(undefined *)(piVar3 + 0x15) = 0;
  }
  return;
}

// === nw4r_g3d_validate_80508740 (0x80508740) ===
void nw4r_g3d_validate_80508740(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 6) {
    iVar2 = FUN_segment_0__804b98d0(*(undefined4 *)(*g_Ram_ptr + 0x404));
    if (iVar2 != 0) {
      return;
    }
    FUN_segment_0__80545828(g_Ram_ptr,*(undefined4 *)(g_Ram_ptr[0x26] + 0x124));
    *(undefined4 *)(param_1 + 0x58) = 7;
    return;
  }
  if (iVar2 != 7) {
    if (iVar2 == 8) {
      iVar2 = FUN_segment_0__804b98d0(*(undefined4 *)(*g_Ram_ptr + 0x404));
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x58) = 9;
      return;
    }
    if (iVar2 != 9) {
      if (iVar2 == 10) {
        iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
        if (iVar2 == 1) {
          return;
        }
        iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
        if (iVar2 - 3U < 2) {
          *(undefined *)(param_1 + 0x6c) = 0;
        }
        else if (iVar2 == 5) {
          *(undefined *)(param_1 + 0x6c) = 0;
        }
        if (((*(char *)(param_1 + 0x6c) == 0) && (*(char *)(param_1 + 0x6d) == 0)) &&
           (iVar2 = FUN_segment_0__8054ed28(g_Ram_ptr), iVar2 == 0)) {
          *(undefined4 *)(param_1 + 0x58) = 0xb;
          return;
        }
        iVar2 = FUN_segment_0__8054ed28(g_Ram_ptr);
        if (iVar2 != 0) {
          FUN_segment_0__8054ed58(g_Ram_ptr);
          piVar6 = g_Ram_ptr;
          if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
            piVar5 = (int *)0;
          }
          else {
            piVar5 = g_Ram_ptr +
                     ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
          }
          piVar5[0x23ee] = g_Ram_ptr[0x17];
          iVar2 = piVar6[0x19];
          piVar5[0x23ef] = piVar6[0x18];
          piVar5[0x23f0] = iVar2;
          piVar5[0x23f1] = piVar6[0x1a];
          iVar2 = piVar6[0x1c];
          piVar5[0x23f2] = piVar6[0x1b];
          piVar5[0x23f3] = iVar2;
          piVar5[0x23f4] = piVar6[0x1d];
          piVar5[0x23f5] = piVar6[0x1e];
          piVar5[0x23f6] = piVar6[0x1f];
          piVar5[0x23f7] = piVar6[0x20];
          iVar2 = piVar6[0x22];
          piVar5[0x23f8] = piVar6[0x21];
          piVar5[0x23f9] = iVar2;
          iVar2 = piVar6[0x24];
          piVar5[0x23fa] = piVar6[0x23];
          piVar5[0x23fb] = iVar2;
          piVar5[0x23fc] = piVar6[0x25];
          piVar5[0x23fd] = piVar6[0x26];
        }
        if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
          piVar6 = (int *)0;
        }
        else {
          piVar6 = g_Ram_ptr +
                   ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
        }
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(piVar6 + 0x2394,g_Ram_ptr + 0x81,0x168);
      }
      if (iVar2 != 0xb) {
        return;
      }
      iVar2 = gfx_EGG_Display_804e44e8(g_Ram_ptr[0x24]);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x58) = 0xc;
      piVar6 = *(int **)(*g_Ram_ptr + 0x148);
      if (piVar6 != (int *)0) {
        if (piVar6 != (int *)0) {
          for (puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x60))(piVar6);
              puVar4 != (void *)0; puVar4 = (undefined4 *)*puVar4) {
            if (puVar4 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__80508d44;
            }
          }
          bVar1 = false;
LAB_segment_0__80508d44:
          if (bVar1) goto LAB_segment_0__80508d54;
        }
        piVar6 = (int *)0;
      }
      else {
        piVar6 = (int *)0;
      }
LAB_segment_0__80508d54:
      FUN_segment_0__804a9164(piVar6);
      return;
    }
    piVar6 = *(int **)(*g_Ram_ptr + 0x2a4);
    if (piVar6 != (int *)0) {
      if (piVar6 != (int *)0) {
        for (puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x60))(piVar6);
            puVar4 != (void *)0; puVar4 = (undefined4 *)*puVar4) {
          if (puVar4 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8050894c;
          }
        }
        bVar1 = false;
LAB_segment_0__8050894c:
        if (bVar1) goto LAB_segment_0__8050895c;
      }
      piVar6 = (int *)0;
    }
    else {
      piVar6 = (int *)0;
    }
LAB_segment_0__8050895c:
    if ((piVar6 == (int *)0) || (piVar6[0x25] == 0)) {
      iVar2 = FUN_segment_0__8055f750(g_Ram_ptr,param_1 + 0x6c);
      if (iVar2 == 0) {
        if (((*(char *)(param_1 + 0x6c) != 0) || (*(char *)(param_1 + 0x6d) != 0)) ||
           (iVar2 = FUN_segment_0__8054ed28(g_Ram_ptr), iVar2 != 0)) {
          iVar2 = FUN_segment_0__8054ed28(g_Ram_ptr);
          if (iVar2 != 0) {
            FUN_segment_0__8054ed58(g_Ram_ptr);
            piVar6 = g_Ram_ptr;
            if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
              piVar5 = (int *)0;
            }
            else {
              piVar5 = g_Ram_ptr +
                       ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
            }
            piVar5[0x23ee] = g_Ram_ptr[0x17];
            iVar2 = piVar6[0x19];
            piVar5[0x23ef] = piVar6[0x18];
            piVar5[0x23f0] = iVar2;
            piVar5[0x23f1] = piVar6[0x1a];
            iVar2 = piVar6[0x1c];
            piVar5[0x23f2] = piVar6[0x1b];
            piVar5[0x23f3] = iVar2;
            piVar5[0x23f4] = piVar6[0x1d];
            piVar5[0x23f5] = piVar6[0x1e];
            piVar5[0x23f6] = piVar6[0x1f];
            piVar5[0x23f7] = piVar6[0x20];
            iVar2 = piVar6[0x22];
            piVar5[0x23f8] = piVar6[0x21];
            piVar5[0x23f9] = iVar2;
            iVar2 = piVar6[0x24];
            piVar5[0x23fa] = piVar6[0x23];
            piVar5[0x23fb] = iVar2;
            piVar5[0x23fc] = piVar6[0x25];
            piVar5[0x23fd] = piVar6[0x26];
          }
          if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
            piVar6 = (int *)0;
          }
          else {
            piVar6 = g_Ram_ptr +
                     ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
          }
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(piVar6 + 0x2394,g_Ram_ptr + 0x81,0x168);
        }
        *(undefined4 *)(param_1 + 0x58) = 0xb;
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 10;
      }
    }
    return;
  }
  iVar2 = FUN_segment_0__805465cc(g_Ram_ptr);
  iVar3 = FUN_segment_0__805469b4(g_Ram_ptr);
  if (iVar3 != 0) {
    *(undefined *)(param_1 + 0x6e) = 1;
    FUN_segment_0__804b9960(*(undefined4 *)(*g_Ram_ptr + 0x404));
    *(undefined4 *)(param_1 + 0x58) = 8;
    return;
  }
  if (iVar2 == 0) {
    return;
  }
  piVar6 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar6 != (int *)0) {
    if (piVar6 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x60))(piVar6); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8050889c;
        }
      }
      bVar1 = false;
LAB_segment_0__8050889c:
      if (bVar1) goto LAB_segment_0__805088ac;
    }
    piVar6 = (int *)0;
  }
  else {
    piVar6 = (int *)0;
  }
LAB_segment_0__805088ac:
  FUN_segment_0__804a9164(piVar6);
  *(undefined4 *)(param_1 + 0x58) = 0xd;
  return;
}

// === gfx_nw4r_g3d_80508d78 (0x80508d78) ===
void gfx_nw4r_g3d_80508d78(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[0x16];
  if (iVar3 - 1U < 2) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
    return;
  }
  if (iVar3 == 3) {
    piVar4 = *(int **)(*g_Ram_ptr + 0x21c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80508e48;
          }
        }
        bVar1 = false;
LAB_segment_0__80508e48:
        if (bVar1) goto LAB_segment_0__80508e58;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80508e58:
    piVar4[0x28c] = 1;
    gfx_nw4r_g3d_80500a34(piVar4 + 0x101,0x1cf0,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x85,0);
    param_1[0x16] = 4;
    return;
  }
  if (iVar3 == 4) {
    piVar4 = *(int **)(*g_Ram_ptr + 0x21c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80508efc;
          }
        }
        bVar1 = false;
LAB_segment_0__80508efc:
        if (bVar1) goto LAB_segment_0__80508f0c;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80508f0c:
    if (piVar4[0x28d] == 0) {
      (**(code **)(*param_1 + 0x24))(param_1,0x86,0);
      param_1[0x16] = 5;
      return;
    }
    piVar4[0x28c] = 0;
    gfx_nw4r_g3d_80500a34(piVar4 + 0x101,0x1ce9,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x85,1);
    param_1[0x16] = 3;
    return;
  }
  if (iVar3 != 5) {
    if (iVar3 == 0xd) {
      param_1[0x16] = 0xe;
      (**(code **)(*param_1 + 0x24))(param_1,0x89,0);
      return;
    }
    if (iVar3 != 0xc) {
      return;
    }
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
    FUN_segment_0__804d24b8(param_1,0x51,0xffffffff);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x220);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80508fe4;
        }
      }
      bVar1 = false;
LAB_segment_0__80508fe4:
      if (bVar1) goto LAB_segment_0__80508ff4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80508ff4:
  iVar3 = piVar4[0x326];
  if (iVar3 == 0) {
    *(undefined *)((int)param_1 + 0x6d) = 1;
    gfx_nw4r_g3d_8050926c(param_1);
    return;
  }
  if (iVar3 == 1) {
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
    return;
  }
  if (iVar3 != 2) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x21c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805090a4;
        }
      }
      bVar1 = false;
LAB_segment_0__805090a4:
      if (bVar1) goto LAB_segment_0__805090b4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805090b4:
  piVar4[0x28c] = 1;
  gfx_nw4r_g3d_80500a34(piVar4 + 0x101,0x1cf0,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x85,1);
  param_1[0x16] = 4;
  return;
}

// === gfx_nw4r_g3d_8050926c (0x8050926c) ===
void gfx_nw4r_g3d_8050926c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(*g_Ram_ptr + 0x228);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805092ec;
        }
      }
      bVar1 = false;
LAB_segment_0__805092ec:
      if (bVar1) goto LAB_segment_0__805092fc;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__805092fc:
  if (piVar5 != (int *)0) {
    *(undefined *)(piVar5 + 0x15) = 1;
  }
  FUN_segment_0__804b98ec(*(undefined4 *)(*g_Ram_ptr + 0x404));
  param_1[0x16] = 6;
  iVar2 = *(int *)*g_Ram_ptr;
  if (((iVar2 < 0x7d) || (0x7e < iVar2)) && ((iVar2 < 0xa1 || (0xa2 < iVar2)))) {
    piVar5 = (int *)((int *)*g_Ram_ptr)[0x97];
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__805093ac;
          }
        }
        bVar1 = false;
LAB_segment_0__805093ac:
        if (bVar1) goto LAB_segment_0__805093bc;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__805093bc:
    if (piVar5 != (int *)0) {
      FUN_segment_0__804c42ac(piVar5);
    }
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80509430;
        }
      }
      bVar1 = false;
LAB_segment_0__80509430:
      if (bVar1) goto LAB_segment_0__80509440;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80509440:
  (**(code **)(*piVar5 + 100))(piVar5);
  iVar2 = *(int *)*g_Ram_ptr;
  if (iVar2 != 0x82) {
    if (iVar2 < 0x82) {
      if (iVar2 < 0x5e) {
        if (iVar2 < 0x58) {
          if (0x54 < iVar2) {
            uVar4 = 0x7f1;
            goto LAB_segment_0__8050951c;
          }
        }
        else if (0x5a < iVar2) {
          uVar4 = 0x7f2;
          goto LAB_segment_0__8050951c;
        }
      }
      else if (iVar2 != 0x7f) {
        if (0x7e < iVar2) {
          uVar4 = 0xfa3;
          goto LAB_segment_0__8050951c;
        }
        if (0x7c < iVar2) goto LAB_segment_0__80509500;
      }
    }
    else if (iVar2 < 0xa1) {
      if (iVar2 == 0x87) {
        uVar4 = 0x19cd;
        goto LAB_segment_0__8050951c;
      }
      if ((iVar2 < 0x87) && (iVar2 < 0x85)) goto LAB_segment_0__805094f8;
    }
    else {
      if (iVar2 == 0xa5) {
LAB_segment_0__805094f8:
        uVar4 = 0x13ba;
        goto LAB_segment_0__8050951c;
      }
      if ((iVar2 < 0xa5) && (iVar2 < 0xa3)) {
LAB_segment_0__80509500:
        uVar4 = 0;
        goto LAB_segment_0__8050951c;
      }
    }
  }
  uVar4 = 0;
LAB_segment_0__8050951c:
  FUN_segment_0__804a96f0(piVar5,uVar4,0);
  (**(code **)(*piVar5 + 0x68))(piVar5,0xfaa,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x50,0);
  return;
}

// === gfx_nw4r_g3d_80509648 (0x80509648) ===
void gfx_nw4r_g3d_80509648(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 == 0x82) goto LAB_segment_0__80509720;
  if (iVar1 < 0x82) {
    if (iVar1 == 0x7d) {
LAB_segment_0__8050970c:
      iVar2 = -1;
      goto LAB_segment_0__80509720;
    }
    if (iVar1 < 0x7d) {
      if (iVar1 < 0x5b) {
        if ((0x57 < iVar1) || (iVar1 < 0x55)) goto LAB_segment_0__80509720;
      }
      else if (0x5d < iVar1) goto LAB_segment_0__80509720;
      iVar2 = 0x41;
      goto LAB_segment_0__80509720;
    }
    if (iVar1 == 0x7f) goto LAB_segment_0__80509720;
  }
  else {
    if (iVar1 == 0xa1) goto LAB_segment_0__8050970c;
    if (0xa0 < iVar1) {
      if (iVar1 == 0xa5) {
        iVar2 = 0x9e;
      }
      else if ((iVar1 < 0xa5) && (iVar1 < 0xa3)) {
        iVar2 = 0x9e;
      }
      goto LAB_segment_0__80509720;
    }
    if (iVar1 != 0x87) {
      if ((iVar1 < 0x87) && (iVar1 < 0x85)) {
        iVar2 = 0x7a;
      }
      goto LAB_segment_0__80509720;
    }
  }
  iVar2 = 0x7a;
LAB_segment_0__80509720:
  if (iVar2 != -1) {
    gfx_EGG_Display_804f8c44(g_Ram_uint,iVar2,0);
    gfx_EGG_Display_804f8cd0(g_Ram_uint,0,0xff);
  }
  return;
}

// === gfx_nw4r_g3d_8050975c (0x8050975c) ===
undefined4 * gfx_nw4r_g3d_8050975c(undefined4 *param_1)

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
  gfx_nw4r_g3d_80500418(param_1 + 0xa4);
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

// === nw4r_g3d_validate_80509874 (0x80509874) ===
int nw4r_g3d_validate_80509874(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x7cc != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x7cc,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x578,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x404,0xffffffff);
    if (param_1 + 0x290 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x290,0);
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

// === gfx_nw4r_g3d_80509914 (0x80509914) ===
void gfx_nw4r_g3d_80509914(int param_1)

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
  gfx_nw4r_g3d_80500a34(param_1 + 0x404,0x1ce9,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0x2b,0x32,0x4a,1,0,0);
  *(undefined4 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0x4f,0x56,0x5b,1,0,1);
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  *(undefined4 *)(param_1 + 0xa30) = 0;
  *(undefined4 *)(param_1 + 0xa34) = 0xffffffff;
  return;
}

// === gfx_nw4r_g3d_80509ab0 (0x80509ab0) ===
void gfx_nw4r_g3d_80509ab0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  piVar2 = *(int **)(*g_Ram_ptr + 0x218);
  if ((piVar2 != (int *)0) && (piVar2 != (int *)0)) {
    for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x60))();
        (puVar3 != (void *)0 && (puVar3 != (void *)0));
        puVar3 = (undefined4 *)*puVar3) {
    }
  }
  iVar1 = *(int *)*g_Ram_ptr;
  if (iVar1 != 0x82) {
    if (iVar1 < 0x82) {
      if (iVar1 < 0x5e) {
        if (iVar1 < 0x58) {
          if (0x54 < iVar1) {
            uVar4 = 0x7f1;
            goto LAB_segment_0__80509bdc;
          }
        }
        else if (0x5a < iVar1) {
          uVar4 = 0x7f2;
          goto LAB_segment_0__80509bdc;
        }
      }
      else if (iVar1 != 0x7f) {
        if (0x7e < iVar1) {
          uVar4 = 0xfa3;
          goto LAB_segment_0__80509bdc;
        }
        if (0x7c < iVar1) goto LAB_segment_0__80509bc0;
      }
    }
    else if (iVar1 < 0xa1) {
      if (iVar1 == 0x87) {
        uVar4 = 0x19cd;
        goto LAB_segment_0__80509bdc;
      }
      if ((iVar1 < 0x87) && (iVar1 < 0x85)) goto LAB_segment_0__80509bb8;
    }
    else {
      if (iVar1 == 0xa5) {
LAB_segment_0__80509bb8:
        uVar4 = 0x13ba;
        goto LAB_segment_0__80509bdc;
      }
      if ((iVar1 < 0xa5) && (iVar1 < 0xa3)) {
LAB_segment_0__80509bc0:
        uVar4 = 0;
        goto LAB_segment_0__80509bdc;
      }
    }
  }
  uVar4 = 0;
LAB_segment_0__80509bdc:
  gfx_nw4r_g3d_80500a34(param_1 + 0x290,uVar4,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  if (*(int *)(param_1 + 0xa30) == 0) {
    FUN_segment_0__804a9fd0(param_1 + 0x7cc,0);
    *(undefined *)(param_1 + 0x84c) = 1;
  }
  else if (*(int *)(param_1 + 0xa30) == 1) {
    FUN_segment_0__804a9fd0(param_1 + 0x7cc,1);
    *(undefined *)(param_1 + 0x84c) = 0;
  }
  *(undefined4 *)(param_1 + 0xa34) = 0xffffffff;
  return;
}

// === gfx_nw4r_g3d_80509c94 (0x80509c94) ===
void gfx_nw4r_g3d_80509c94(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    *(undefined4 *)(param_1 + 0xa34) = 0;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    *(undefined4 *)(param_1 + 0xa34) = 1;
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,1);
  }
  return;
}

// === gfx_nw4r_g3d_80509d38 (0x80509d38) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * gfx_nw4r_g3d_80509d38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  uVar2 = uRam00000028;
  uVar1 = uRam00000024;
  param_1[0x15] = uRam0000002c;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  uVar2 = _DAT_00000034;
  uVar1 = _DAT_00000030;
  param_1[0x1a] = uRam00000038;
  param_1[0x16] = 0;
  param_1[0x17] = param_1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  uVar3 = uRam00000044;
  uVar2 = uRam00000040;
  uVar1 = uRam0000003c;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  FUN_segment_0__804c9f74(param_1 + 0x20);
  gfx_nw4r_g3d_80500418(param_1 + 0xa9);
  param_1[0xa9] = 0;
  FUN_segment_0__804ccebc(param_1 + 0x106);
  FUN_segment_0__804a97a4(param_1 + 0x163);
  FUN_segment_0__804a97a4(param_1 + 0x1f8);
  FUN_segment_0__804a97a4(param_1 + 0x28d);
  uVar1 = uRam00000000;
  param_1[0x28d] = 0;
  param_1[0x322] = 0x7d1;
  param_1[0x323] = 0;
  param_1[0x324] = uVar1;
  return param_1;
}

// === nw4r_g3d_validate_80509ea0 (0x80509ea0) ===
int nw4r_g3d_validate_80509ea0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xa34 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0xa34,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x7e0,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x58c,0xffffffff);
    FUN_segment_0__804ccef8(param_1 + 0x418,0xffffffff);
    if (param_1 + 0x2a4 != 0) {
      nw4r_g3d_validate_80500540(param_1 + 0x2a4,0);
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

// === gfx_nw4r_g3d_80509f4c (0x80509f4c) ===
void gfx_nw4r_g3d_80509f4c(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x80) + 0x10))(param_1 + 0x80,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x80);
  FUN_segment_0__804ca380(param_1 + 0x80,1);
  FUN_segment_0__804ca350(param_1 + 0x80,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2a4,0);
  FUN_segment_0__80735444(param_1 + 0x2a4,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x418,0);
  FUN_segment_0__804ccf50(param_1 + 0x418,0x66,0x75,0x8d);
  gfx_nw4r_g3d_80500a34(param_1 + 0x418,0x1cea,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x58c,0);
  FUN_segment_0__804a9914(param_1 + 0x58c,0x9f,0xa6,0xb9,1,0,0);
  *(undefined4 *)(param_1 + 0x7cc) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x58c,param_1 + 0x44,0);
  gfx_nw4r_g3d_80500a34(param_1 + 0x58c,0x1ceb,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7e0,0);
  FUN_segment_0__804a9914(param_1 + 0x7e0,0xc9,0xd0,0xe3,1,0,0);
  *(undefined4 *)(param_1 + 0xa20) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7e0,param_1 + 0x44,0);
  gfx_nw4r_g3d_80500a34(param_1 + 0x7e0,0x1cec,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xa34,0);
  FUN_segment_0__804a9914(param_1 + 0xa34,0xf3,0xfa,0xff,1,0,1);
  *(undefined4 *)(param_1 + 0xc74) = 4;
  FUN_segment_0__804a9ec4(param_1 + 0xa34,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x7e0,0);
  return;
}

// === EGG_Video_validate_806d047c (0x806d047c) ===
int EGG_Video_validate_806d047c(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__8044b2dc(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Video_validate_806d04d4 (0x806d04d4) ===
int EGG_Video_validate_806d04d4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806d0524 (0x806d0524) ===
void EGG_Video_validate_806d0524(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x2c);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_validate_806d05b8 (0x806d05b8) ===
void EGG_Video_validate_806d05b8(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined auStack_48 [44];
  
  iVar7 = 0;
  puVar6 = (void *)0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  iVar5 = param_1;
  do {
    iVar8 = 0;
    puVar4 = puVar6;
    do {
      uVar1 = gfx_EGG_Video_806fe314(*puVar4);
      iVar2 = iVar5 + iVar8;
      iVar8 = iVar8 + 1;
      *(undefined *)(iVar2 + 0x18c) = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar8 < 8);
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 8;
    puVar6 = puVar6 + 8;
  } while (iVar7 < 3);
  uVar1 = gfx_EGG_Video_806fe314(0x18);
  *(undefined *)(param_1 + 0x1a4) = uVar1;
  uVar1 = gfx_EGG_Video_806fe314(0x1a);
  *(undefined *)(param_1 + 0x1a5) = uVar1;
  iVar5 = gfx_EGG_Video_806d1bfc(param_1,2);
  iVar7 = gfx_EGG_Video_806d1bfc(param_1,0);
  iVar8 = gfx_EGG_Video_806d1bfc(param_1,1);
  if (iVar7 < iVar8) {
    if (iVar5 < iVar8) {
      iVar5 = iVar8;
    }
  }
  else if (iVar5 < iVar7) {
    iVar5 = iVar7;
  }
  *(int *)(param_1 + 0x1a8) = (iVar5 + 1) / 2;
  iVar5 = gfx_EGG_Video_806d1bfc(param_1,3);
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x1a8);
    if (iVar5 < 3) {
      iVar5 = 3;
    }
    else if (4 < iVar5) {
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x1a8) = iVar5;
  }
  FUN_segment_0__804ae324(auStack_48,param_1);
  uVar3 = 0x48;
  if (param_2 < 3) {
    uVar3 = 0x34;
  }
  FUN_segment_0__804ae36c(auStack_48,0x18,0x20,uVar3,0);
  iVar5 = gfx_EGG_Video_806d1bfc(param_1,3);
  iVar5 = *(int *)(param_1 + 0x1a8) * 6 + iVar5;
  *(int *)(param_1 + 0x1ac) = iVar5;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar5 * 0x260 + 0x10);
}

// === gfx_EGG_Video_806d0818 (0x806d0818) ===
undefined4 * gfx_EGG_Video_806d0818(undefined4 *param_1)

{
  FUN_segment_0__804a97a4();
  *param_1 = 0;
  return param_1;
}

// === EGG_Video_validate_806d0854 (0x806d0854) ===
int EGG_Video_validate_806d0854(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804a98ac(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_EGG_Video_806d08ac (0x806d08ac) ===
void gfx_EGG_Video_806d08ac(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar4 = 0;
  puVar7 = (void *)0;
  iVar6 = param_1;
  do {
    iVar3 = 0;
    puVar5 = puVar7;
    do {
      uVar1 = gfx_EGG_Video_806fe314(*puVar5);
      iVar2 = iVar6 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined *)(iVar2 + 0x18c) = uVar1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < 8);
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 8;
    puVar7 = puVar7 + 8;
  } while (iVar4 < 3);
  uVar1 = gfx_EGG_Video_806fe314(0x18);
  *(undefined *)(param_1 + 0x1a4) = uVar1;
  uVar1 = gfx_EGG_Video_806fe314(0x1a);
  *(undefined *)(param_1 + 0x1a5) = uVar1;
  return;
}

// === EGG_Video_validate_806d0938 (0x806d0938) ===
void EGG_Video_validate_806d0938(int param_1,int param_2)

{
  int iVar1;
  undefined auStack_58 [56];
  
  FUN_segment_0__8072fa50();
  iVar1 = *(int *)(param_1 + 0x1a8) * 2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,0x10,0x62,param_2 - (param_2 / iVar1) * iVar1);
}

// === gfx_EGG_Video_806d0d28 (0x806d0d28) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d0d28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_assertFail_806d10bc (0x806d10bc) ===
void EGG_Video_assertFail_806d10bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d160c (0x806d160c) ===
void gfx_EGG_Video_806d160c(undefined4 param_1,int *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_2[0x90];
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d1688;
        }
      }
      bVar1 = false;
LAB_segment_0__806d1688:
      piVar3 = param_2;
      if (bVar1) goto LAB_segment_0__806d169c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__806d169c:
  gfx_EGG_Video_806d2140(piVar3,param_3,0xff);
  gfx_nw4r_g3d_80500a34(param_2,param_3 + 0x9fb,0);
  uVar4 = FUN_segment_0__80716a8c(0x6b);
  FUN_segment_0__807175e8(uVar4,param_2,iVar5,param_3);
  FUN_segment_0__80757f90(uRam00000000,param_3,iVar5);
  return;
}

// === gfx_EGG_Video_806d1704 (0x806d1704) ===
void gfx_EGG_Video_806d1704(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_2[0x90];
  *(int *)(param_1 + param_3 * 4 + 0x174) = iVar5;
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d178c;
        }
      }
      bVar1 = false;
LAB_segment_0__806d178c:
      piVar3 = param_2;
      if (bVar1) goto LAB_segment_0__806d17a0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__806d17a0:
  gfx_EGG_Video_806d2140(piVar3,param_3,0xb4);
  uVar4 = FUN_segment_0__80716a8c(0x6b);
  FUN_segment_0__80717c34(uVar4,param_2,iVar5,param_3);
  return;
}

// === gfx_EGG_Video_806d17e4 (0x806d17e4) ===
void gfx_EGG_Video_806d17e4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d1858;
        }
      }
      bVar1 = false;
LAB_segment_0__806d1858:
      if (bVar1) goto LAB_segment_0__806d1868;
    }
    param_2 = (int *)0;
  }
  else {
    param_2 = (int *)0;
  }
LAB_segment_0__806d1868:
  gfx_EGG_Video_806d1f0c(param_2,param_3);
  return;
}

// === gfx_EGG_Video_806d1890 (0x806d1890) ===
void gfx_EGG_Video_806d1890(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 8) != 4) {
    return;
  }
  iVar6 = param_2[0x90];
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d1918;
        }
      }
      bVar1 = false;
LAB_segment_0__806d1918:
      piVar4 = param_2;
      if (bVar1) goto LAB_segment_0__806d192c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__806d192c:
  *(int **)(param_1 + 0x1b4) = piVar4;
  if ((*(int *)(param_1 + 0x188) < 2) ||
     (iVar3 = FUN_segment_0__8072f8d8(*(undefined4 *)*g_Ram_uint), iVar3 != 0)) {
    gfx_EGG_Video_806d2140(piVar4,param_3,0xff);
    gfx_nw4r_g3d_80500a34(param_2,param_3 + 0x9fb,0);
    uVar5 = FUN_segment_0__80716a8c(0x6b);
    FUN_segment_0__807175e8(uVar5,param_2,iVar6,param_3);
  }
  else {
    iVar6 = FUN_segment_0__8071eeec(0x60);
    *(int *)(iVar6 + 0xda0) = param_3;
    piVar4 = (int *)FUN_segment_0__80716a8c(0x6b);
    piVar4[0x242] = iVar6;
    (**(code **)(*piVar4 + 0x24))(piVar4,0x60,0);
  }
  return;
}

// === gfx_EGG_Video_806d19dc (0x806d19dc) ===
void gfx_EGG_Video_806d19dc(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_2[0x90];
  *(int *)(param_1 + param_3 * 4 + 0x174) = iVar5;
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d1a64;
        }
      }
      bVar1 = false;
LAB_segment_0__806d1a64:
      piVar3 = param_2;
      if (bVar1) goto LAB_segment_0__806d1a78;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__806d1a78:
  gfx_EGG_Video_806d2140(piVar3,param_3,0xb4);
  uVar4 = FUN_segment_0__80716a8c(0x6b);
  FUN_segment_0__80717c34(uVar4,param_2,iVar5,param_3);
  return;
}

// === gfx_EGG_Video_806d1abc (0x806d1abc) ===
void gfx_EGG_Video_806d1abc(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if (param_2 != (int *)0) {
    if (param_2 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_2);
          puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d1b30;
        }
      }
      bVar1 = false;
LAB_segment_0__806d1b30:
      if (bVar1) goto LAB_segment_0__806d1b40;
    }
    param_2 = (int *)0;
  }
  else {
    param_2 = (int *)0;
  }
LAB_segment_0__806d1b40:
  gfx_EGG_Video_806d1f0c(param_2,param_3);
  return;
}

// === EGG_Video_validate_806d1b68 (0x806d1b68) ===
void EGG_Video_validate_806d1b68(int param_1,int param_2)

{
  undefined auStack_28 [32];
  
  gfx_EGG_Video_806d2140(*(undefined4 *)(param_1 + 0x1b4),param_2,0xff);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_28,0x20,0x1f2,param_2 + 1);
}

// === gfx_EGG_Video_806d1bfc (0x806d1bfc) ===
char gfx_EGG_Video_806d1bfc(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 3) {
    cVar1 = *(char *)(param_1 + 0x1a4) != 0;
    if (*(char *)(param_1 + 0x1a5) != 0) {
      cVar1 = cVar1 + '\x01';
    }
  }
  else {
    param_1 = param_1 + param_2 * 8;
    cVar1 = *(char *)(param_1 + 0x18c) != 0;
    if (*(char *)(param_1 + 0x18d) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 0x18e) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 399) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 400) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 0x191) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 0x192) != 0) {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_1 + 0x193) != 0) {
      cVar1 = cVar1 + '\x01';
    }
  }
  return cVar1;
}

// === gfx_EGG_Video_806d1cbc (0x806d1cbc) ===
int gfx_EGG_Video_806d1cbc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 3) {
    iVar2 = gfx_EGG_Video_806fe314(0x1e);
    if (iVar2 == 0) {
      param_3 = param_3 + 1;
    }
    iVar2 = (param_3 - (param_3 / *(int *)(param_1 + 0x1a8)) * *(int *)(param_1 + 0x1a8)) * 2 + 0x1e
    ;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1a8) * 2;
    iVar4 = param_3 - (param_3 / iVar2) * iVar2;
    if ((iVar4 < iVar2) && (*(char *)(param_1 + param_2 * 8 + iVar4 + 0x18c) != 0)) {
      iVar2 = *(int *)(iVar4 * 4 + param_2 * 0x20);
    }
    else {
      iVar5 = 0;
      iVar3 = param_1 + param_2 * 8;
      param_3 = param_3 - (param_3 / iVar2) * iVar2;
      iVar1 = param_3 + 1;
      iVar4 = iVar3;
      if (-1 < param_3) {
        do {
          if (*(char *)(iVar4 + 0x18c) == 0) {
            iVar5 = iVar5 + 1;
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar4 = *(int *)(param_1 + 0x1a8) * -2 + 8;
      iVar3 = iVar3 + iVar2;
      if (iVar2 < 8) {
        do {
          if (*(char *)(iVar3 + 0x18c) != 0) {
            iVar5 = iVar5 + -1;
          }
          if (iVar5 == 0) {
            return *(int *)(iVar2 * 4 + param_2 * 0x20);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar2 = -1;
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806d1e20 (0x806d1e20) ===
void gfx_EGG_Video_806d1e20(int param_1)

{
  byte bVar4;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  
  bVar4 = FUN_segment_0__8072fa50();
  if (bVar4 < 3) {
    *(undefined4 *)(param_1 + 600) = uRam00000000;
  }
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x224);
  *(undefined4 *)(param_1 + 0x25c) = uVar1;
  for (iVar5 = 0; uVar3 = FUN_segment_0__8072fa50(), iVar5 < (int)(uVar3 & 0xff); iVar5 = iVar5 + 1)
  {
    iVar2 = FUN_segment_0__804aa340(param_1);
    if (iVar2 == 0) {
      gfx_EGG_Video_806d1f0c(param_1,iVar5);
    }
  }
  return;
}

// === gfx_EGG_Video_806d1ebc (0x806d1ebc) ===
void gfx_EGG_Video_806d1ebc(int param_1,float *param_2)

{
  gfx_EGG_Display_804ffe14();
  *param_2 = *param_2 - *(float *)(param_1 + 600);
  gfx_nw4r_g3d_805001d0(param_1);
  return;
}

// === gfx_EGG_Video_806d1f0c (0x806d1f0c) ===
void gfx_EGG_Video_806d1f0c(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
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
  
  if (*(int **)(param_1 + 0x25c) != (int *)0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x10) = 0xff;
    *(undefined2 *)(iVar1 + 0x12) = 0xff;
    *(undefined2 *)(iVar1 + 0x14) = 0xff;
    *(undefined2 *)(iVar1 + 0x16) = 0xff;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x68))();
    *(undefined2 *)(iVar1 + 0x18) = 0xff;
    *(undefined2 *)(iVar1 + 0x1a) = 0xff;
    *(undefined2 *)(iVar1 + 0x1c) = 0xff;
    *(undefined2 *)(iVar1 + 0x1e) = 0xff;
    local_14 = 0x141414ff;
    cVar2 = FUN_segment_0__8072fa50();
    if ((*(char *)(param_1 + 0x254) == 0) || (cVar2 == '\x01')) {
      local_2c = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),0,&local_2c);
      local_30 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),1,&local_30);
      local_34 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),2,&local_34);
      local_38 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),3,&local_38);
    }
    else if (cVar2 == '\x02') {
      local_18 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2 * 2,&local_18);
      local_1c = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2 * 2 + 1,&local_1c);
    }
    else if (cVar2 == '\x03') {
      local_20 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2,&local_20);
      local_24 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),3,&local_24);
    }
    else {
      local_28 = local_14;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2,&local_28);
    }
    *(undefined *)(*(int *)(param_1 + 0x25c) + 0xb8) = 0x80;
  }
  return;
}

// === gfx_EGG_Video_806d2140 (0x806d2140) ===
void gfx_EGG_Video_806d2140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined3 local_68;
  undefined uStack_65;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
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
  
  if (*(int **)(param_1 + 0x25c) != (int *)0) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x68))();
    *(undefined2 *)(iVar4 + 0x10) = 200;
    *(undefined2 *)(iVar4 + 0x12) = 200;
    *(undefined2 *)(iVar4 + 0x14) = 200;
    *(undefined2 *)(iVar4 + 0x16) = 0xf0;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x68))();
    *(undefined2 *)(iVar4 + 0x18) = 200;
    *(undefined2 *)(iVar4 + 0x1a) = 200;
    *(undefined2 *)(iVar4 + 0x1c) = 200;
    *(undefined2 *)(iVar4 + 0x1e) = 0xf0;
    FUN_segment_0__804c9a0c(param_2,&local_50,&local_58);
    uStack_44 = (int)local_50 + (int)local_58 ^ 0x80000000;
    local_48 = 0x43300000;
    uStack_34 = (int)local_4e + (int)local_56 ^ 0x80000000;
    dVar3 = (double)CONCAT44(g_Ram_float,uRam00000004);
    uStack_24 = (int)local_4c + (int)local_54 ^ 0x80000000;
    local_38 = 0x43300000;
    local_28 = 0x43300000;
    iVar4 = (int)(g_Ram_float * (float)((double)CONCAT44(0x43300000,uStack_44) - dVar3));
    local_40 = (longlong)iVar4;
    iVar1 = (int)(g_Ram_float * (float)((double)CONCAT44(0x43300000,uStack_34) - dVar3));
    local_30 = (longlong)iVar1;
    iVar2 = (int)(g_Ram_float * (float)((double)CONCAT44(0x43300000,uStack_24) - dVar3));
    local_20 = (longlong)iVar2;
    local_5c._0_3_ = CONCAT21(CONCAT11((char)iVar4,(char)iVar1),(char)iVar2);
    local_5c._3_1_ = 0xb4;
    cVar5 = FUN_segment_0__8072fa50();
    if ((*(char *)(param_1 + 0x254) == 0) || (cVar5 == '\x01')) {
      local_5c = CONCAT31(local_5c._0_3_,0x60);
      local_6c = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),0,&local_6c);
      local_70 = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),1,&local_70);
      local_74 = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),2,&local_74);
      local_78 = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))(*(int **)(param_1 + 0x25c),3,&local_78);
    }
    else if (cVar5 == '\x02') {
      local_5c = CONCAT31(local_5c._0_3_,0x80);
      local_60 = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2 * 2,&local_60);
      local_64 = local_5c;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2 * 2 + 1,&local_64);
    }
    else {
      uStack_65 = (undefined)local_5c;
      local_68 = local_5c._0_3_;
      (**(code **)(**(int **)(param_1 + 0x25c) + 0x28))
                (*(int **)(param_1 + 0x25c),param_2,&local_68);
    }
  }
  return;
}

// === EGG_Video_validate_806d245c (0x806d245c) ===
void EGG_Video_validate_806d245c(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_d8 [64];
  undefined auStack_98 [128];
  
  FUN_segment_0__804ae324(auStack_98,param_1);
  bVar1 = FUN_segment_0__8072fa50();
  uVar2 = 0x6c;
  if (bVar1 < 3) {
    uVar2 = 0x5b;
  }
  FUN_segment_0__804ae36c(auStack_98,0x7f,0x87,uVar2,0);
  gfx_EGG_Display_804ffee8(param_1,8);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_d8,0x14,0x95,0);
}

// === EGG_Video_assertFail_806d25d0 (0x806d25d0) ===
void EGG_Video_assertFail_806d25d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d2754 (0x806d2754) ===
void gfx_EGG_Video_806d2754(int param_1,float *param_2)

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

// === gfx_EGG_Video_806d27d8 (0x806d27d8) ===
void gfx_EGG_Video_806d27d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x174) = uRam00000000;
  iVar2 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xf8);
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

// === gfx_EGG_Video_806d2874 (0x806d2874) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d2874(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d2f8c (0x806d2f8c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d2f8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d3128 (0x806d3128) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d3128(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d3444 (0x806d3444) ===
void gfx_EGG_Video_806d3444(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__80719824(0x6f);
  FUN_segment_0__80719e70(uVar1,param_1,param_2,param_3);
  return;
}

// === gfx_EGG_Video_806d349c (0x806d349c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d349c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_assertFail_806d36b8 (0x806d36b8) ===
void EGG_Video_assertFail_806d36b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d38c4 (0x806d38c4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d38c4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d3c88 (0x806d3c88) ===
void gfx_EGG_Video_806d3c88(int param_1,int param_2,undefined4 param_3)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0x143c) = *(undefined4 *)(param_2 + 0x240);
  uVar3 = FUN_segment_0__8071a42c(0x6e);
  FUN_segment_0__8071ac54(uVar3,param_1,param_2,param_3);
  uVar5 = *(uint *)(param_1 + 0x143c);
  iVar2 = (int)uVar5 >> 0x1f;
  uVar4 = (iVar2 * 4 | uVar5 * 0x40000000 + iVar2 >> 0x1e) - iVar2;
  uVar5 = ((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0);
  dVar1 = (double)CONCAT44(g_Ram_float,uRam00000004);
  nw4r_g3d_assertFail_80501244
            ((double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar4 + 1 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dVar1)),
             (double)(g_Ram_float *
                     (float)((double)CONCAT44(0x43300000,uVar5 + 1 ^ 0x80000000) - dVar1)),
             param_1 + 0x1458,0xf8);
  return;
}

// === gfx_EGG_Video_806d3d98 (0x806d3d98) ===
void gfx_EGG_Video_806d3d98(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x143c) = *(undefined4 *)(param_2 + 0x240);
  uVar1 = FUN_segment_0__8071a42c(0x6e);
  FUN_segment_0__8071ad84(uVar1,param_1,param_2,param_3);
  return;
}

// === gfx_EGG_Video_806d3df8 (0x806d3df8) ===
undefined4 gfx_EGG_Video_806d3df8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((((iVar1 == 0x48) || (iVar1 == 0x49)) || (iVar1 == 0x4a)) && (g_Ram_uint[0x5d8] == 0)) {
    uVar2 = FUN_segment_0__80444a80(param_1,g_Ram_uint[0x5d7],g_Ram_uint[0x5e0] & 1,0);
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_segment_0__80444a80(param_1,0,0,0);
    if (((iVar1 != 0) || (iVar1 = FUN_segment_0__80444a80(param_1,1,0,0), iVar1 != 0)) ||
       ((iVar1 = FUN_segment_0__80444a80(param_1,2,0,0), iVar1 != 0 ||
        (iVar1 = FUN_segment_0__80444a80(param_1,2,1,0), iVar1 != 0)))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === EGG_Video_validate_806d3efc (0x806d3efc) ===
void EGG_Video_validate_806d3efc(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined auStack_c8 [64];
  undefined auStack_88 [112];
  
  FUN_segment_0__804ae324(auStack_88,param_1);
  bVar1 = FUN_segment_0__8072fa50();
  uVar2 = 0x117;
  if (bVar1 < 3) {
    uVar2 = 0x103;
  }
  FUN_segment_0__804ae36c(auStack_88,0x12d,0x135,uVar2,0);
  gfx_EGG_Display_804ffee8(param_1,4);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0x14,0x143,0);
}

// === EGG_Video_assertFail_806d4020 (0x806d4020) ===
void EGG_Video_assertFail_806d4020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806d410c (0x806d410c) ===
void EGG_Video_assertFail_806d410c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d4210 (0x806d4210) ===
void gfx_EGG_Video_806d4210(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(*(int *)(param_1 + 100) + 0xc);
  if (piVar6 != (int *)0) {
    if (piVar6 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar6 + 0x60))(piVar6); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d428c;
        }
      }
      bVar1 = false;
LAB_segment_0__806d428c:
      if (bVar1) goto LAB_segment_0__806d429c;
    }
    piVar6 = (int *)0;
  }
  else {
    piVar6 = (int *)0;
  }
LAB_segment_0__806d429c:
  if (piVar6 != (int *)0) {
    iVar5 = -1;
    if (*(int *)(*g_Ram_ptr + 0x400) != 0) {
      iVar5 = FUN_segment_0__804d09c8();
    }
    iVar3 = FUN_segment_0__8071a42c(0x6e);
    if (*(int *)(iVar3 + 0x424) == -1) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x424);
    }
    if (((iVar3 < 1) || (iVar5 < 0)) || (3 < iVar5)) {
      param_1 = param_1 + 0x174;
      iVar5 = 0;
      do {
        uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
        gfx_EGG_Display_804ff59c((double)(float)g_Ram_ptr,uVar4,0);
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 0x174;
      } while (iVar5 < 4);
    }
    else {
      iVar7 = param_1 + iVar5 * 0x174 + 0x20c;
      iVar3 = gfx_EGG_Display_804ff4a0(iVar7,1);
      if (*(int *)(iVar3 + 0x38) == 0) {
        uVar4 = gfx_EGG_Display_804ff4a0(iVar7,1);
        gfx_EGG_Display_804ff59c((double)(float)g_Ram_ptr,uVar4,1);
        param_1 = param_1 + 0x174;
        iVar3 = 0;
        do {
          if ((iVar3 != iVar5) &&
             ((iVar7 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1), *(int *)(iVar7 + 0x38) == 2 ||
              (iVar7 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1), *(int *)(iVar7 + 0x38) == 1)))) {
            uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
            gfx_EGG_Display_804ff59c((double)(float)g_Ram_ptr,uVar4,3);
          }
          iVar3 = iVar3 + 1;
          param_1 = param_1 + 0x174;
        } while (iVar3 < 4);
      }
    }
  }
  return;
}

// === gfx_EGG_Video_806d4444 (0x806d4444) ===
void gfx_EGG_Video_806d4444(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Video_806d44c4 (0x806d44c4) ===
void gfx_EGG_Video_806d44c4(undefined4 param_1)

{
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
  undefined auStack_48 [44];
  
  FUN_segment_0__804ae324(auStack_48,param_1);
  local_78 = uRam00000000;
  local_74 = uRam00000004;
  local_70 = uRam00000008;
  local_6c = uRam0000000c;
  local_68 = uRam00000010;
  local_64 = uRam00000014;
  local_60 = uRam00000018;
  local_5c = uRam0000001c;
  local_58 = uRam00000020;
  local_54 = uRam00000024;
  local_50 = uRam00000028;
  local_4c = uRam0000002c;
  FUN_segment_0__804ae36c(auStack_48,0x13,0x1f,0x2a,&local_78);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  return;
}

// === EGG_Video_validate_806d45b4 (0x806d45b4) ===
void EGG_Video_validate_806d45b4(int param_1,undefined4 param_2)

{
  undefined auStack_c8 [156];
  
  *(undefined4 *)(param_1 + 0x174) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0x14,0x66,param_2);
}

// === EGG_Video_assertFail_806d4750 (0x806d4750) ===
void EGG_Video_assertFail_806d4750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806d4a70 (0x806d4a70) ===
void EGG_Video_assertFail_806d4a70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d5090 (0x806d5090) ===
undefined4 * gfx_EGG_Video_806d5090(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Video_validate_806d50cc (0x806d50cc) ===
int EGG_Video_validate_806d50cc(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Video_validate_806d5124 (0x806d5124) ===
int EGG_Video_validate_806d5124(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806d5180 (0x806d5180) ===
int EGG_Video_validate_806d5180(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_1 != 0;
  if (bVar1) {
    if ((bVar1) && (bVar1)) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d51e0 (0x806d51e0) ===
undefined4 * gfx_EGG_Video_806d51e0(undefined4 *param_1)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Video_validate_806d521c (0x806d521c) ===
int EGG_Video_validate_806d521c(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_1 != 0;
  if (bVar1) {
    if ((bVar1) && (bVar1)) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d52b4 (0x806d52b4) ===
void gfx_EGG_Video_806d52b4(undefined4 param_1)

{
  if ((iRam00000000 == 0) || (*(int *)(iRam00000000 + 0x404) == 0)) {
    gfx_nw4r_g3d_805011cc(param_1,0x5b,0);
  }
  else {
    gfx_nw4r_g3d_805011cc(param_1,0x56,1);
  }
  EGG_Video_validate_806d6edc(param_1);
  return;
}

// === gfx_EGG_Video_806d5420 (0x806d5420) ===
void gfx_EGG_Video_806d5420(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x5c))();
  iVar2 = FUN_segment_0__804c5d1c(param_1 + 0x2a,uVar1);
  param_1[0x66] = iVar2;
  EGG_Video_validate_806d6edc(param_1);
  return;
}

// === gfx_EGG_Video_806d547c (0x806d547c) ===
void gfx_EGG_Video_806d547c(int *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x3c))();
  iVar1 = param_1[0x66];
  local_10 = *(undefined4 *)(iVar1 + 0x34);
  local_14 = *(undefined4 *)(iVar1 + 0x30);
  local_18 = *(undefined4 *)(iVar1 + 0x2c);
  (**(code **)(*param_1 + 0x50))(param_1,param_1 + 0x67,param_1 + 0x6a,&local_18);
  return;
}

// === gfx_EGG_Video_806d54f0 (0x806d54f0) ===
void gfx_EGG_Video_806d54f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  local_2c = *(undefined4 *)(param_3 + 4);
  local_34 = g_Ram_float;
  local_30 = g_Ram_float;
  FUN_segment_0__806c4364(g_Ram_float,param_2,&local_48);
  local_24 = g_Ram_float * (local_44 - g_Ram_float);
  local_20 = g_Ram_float;
  local_28 = g_Ram_float * (local_48 - g_Ram_float);
  FUN_segment_0__80404464(&local_40,&local_28,param_4);
  iVar2 = *(int *)(param_1 + 0x198);
  *(undefined4 *)(iVar2 + 0x2c) = local_40;
  *(undefined4 *)(iVar2 + 0x30) = local_3c;
  *(undefined4 *)(iVar2 + 0x34) = local_38;
  fVar1 = g_Ram_float;
  iVar2 = *(int *)(param_1 + 0x198);
  *(float *)(iVar2 + 0x38) = local_34;
  *(float *)(iVar2 + 0x3c) = local_30;
  *(undefined4 *)(iVar2 + 0x40) = local_2c;
  *(float *)(param_1 + 0x7c) = fVar1;
  return;
}

// === gfx_EGG_Video_806d55f4 (0x806d55f4) ===
void gfx_EGG_Video_806d55f4(int param_1,undefined param_2)

{
  undefined4 uVar1;
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
  undefined auStack_40 [44];
  
  *(undefined *)(param_1 + 0x1b4) = param_2;
  uVar1 = FUN_segment_0__8047d97c(uRam00000000,param_2);
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  FUN_segment_0__804ae324(auStack_40,param_1);
  local_68 = uRam00000000;
  local_64 = uRam00000004;
  local_60 = uRam00000008;
  local_5c = uRam0000000c;
  local_58 = uRam00000010;
  local_54 = uRam00000014;
  local_50 = uRam00000018;
  local_4c = uRam0000001c;
  local_48 = uRam00000020;
  local_44 = uRam00000024;
  FUN_segment_0__804ae36c(auStack_40,0x8b,0x96,0xa0,&local_68);
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  return;
}

// === EGG_Video_validate_806d56c0 (0x806d56c0) ===
void EGG_Video_validate_806d56c0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined auStack_60 [80];
  
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar2,0);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,1);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar2,0);
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xaa);
  param_1[0x6e] = iVar3;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xb4);
  param_1[0x6f] = iVar3;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xc5);
  param_1[0x70] = iVar3;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xd6);
  param_1[0x71] = iVar3;
  cVar4 = FUN_segment_0__80421470(g_Ram_float,*(undefined *)(param_1 + 0x6d));
  if (-1 < cVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_60,0x20,0xdc,(int)cVar4);
  }
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xeb);
  *(byte *)(iVar3 + 0xbb) = *(byte *)(iVar3 + 0xbb) & 0xfe;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0xf9);
  *(byte *)(iVar3 + 0xbb) = *(byte *)(iVar3 + 0xbb) & 0xfe;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x107);
  *(byte *)(iVar3 + 0xbb) = *(byte *)(iVar3 + 0xbb) & 0xfe;
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x115);
  *(byte *)(iVar3 + 0xbb) = *(byte *)(iVar3 + 0xbb) & 0xfe;
  *(byte *)(param_1[0x71] + 0xbb) = *(byte *)(param_1[0x71] + 0xbb) & 0xfe;
  fVar1 = g_Ram_float;
  iVar3 = param_1[0x71];
  *(float *)(iVar3 + 0x44) = g_Ram_float;
  *(float *)(iVar3 + 0x48) = fVar1;
  *(undefined *)(param_1[0x71] + 0xb8) = 0xb4;
  if (*(int *)((int)g_Ram_float + (uint)*(byte *)(param_1 + 0x6d) * 0xf0 + 0x34) < 0x18) {
    iVar3 = FUN_segment_0__8072ff20();
    if (iVar3 != 0) {
      nw4r_g3d_assertFail_80500d70(param_1,0x123,iVar3);
      nw4r_g3d_assertFail_80500d70(param_1,0x12d,iVar3);
      nw4r_g3d_assertFail_80500d70(param_1,0x13e,iVar3);
    }
  }
  else {
    iVar3 = *(int *)((int)g_Ram_float + 0x98) + 0x188;
    nw4r_g3d_assertFail_8050105c(param_1,0x14f,iVar3,(uint)*(byte *)(param_1 + 0x6d),5);
    nw4r_g3d_assertFail_8050105c(param_1,0x159,iVar3,*(undefined *)(param_1 + 0x6d),5);
    nw4r_g3d_assertFail_8050105c(param_1,0x16a,iVar3,*(undefined *)(param_1 + 0x6d),5);
  }
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1);
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0x2a,uVar2);
  param_1[0x66] = iVar3;
  EGG_Video_validate_806d6edc(param_1);
  return;
}

// === gfx_EGG_Video_806d5a44 (0x806d5a44) ===
void gfx_EGG_Video_806d5a44(int *param_1)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 0x3c))();
  uVar1 = *(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uint)*(byte *)(param_1 + 0x6d) * 4) +
                   0x38);
  if ((uVar1 & 0x10) == 0) {
    if ((*(int *)(iRam00000000 + (uint)*(byte *)(param_1 + 0x6d) * 0xf0 + 0x38) != 3) ||
       ((uVar1 & 2) == 0)) {
      *(undefined *)(param_1 + 0x20) = 0;
      FUN_segment_0__8047d97c(iRam00000000,*(undefined *)(param_1 + 0x6d));
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__8047da88();
    }
  }
  *(undefined *)(param_1 + 0x20) = 1;
  return;
}

// === gfx_EGG_Video_806d5bc0 (0x806d5bc0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d5bc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d61fc (0x806d61fc) ===
void gfx_EGG_Video_806d61fc(int param_1,undefined4 param_2)

{
  undefined auStack_28 [40];
  
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  FUN_segment_0__804ae324(auStack_28,param_1);
  FUN_segment_0__804ae36c(auStack_28,400,0x19b,0x1a3,0);
  FUN_segment_0__804ae32c(auStack_28,0xffffffff);
  return;
}

// === gfx_EGG_Video_806d6254 (0x806d6254) ===
void gfx_EGG_Video_806d6254(int *param_1)

{
  int iVar1;
  undefined2 uVar4;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined auStack_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined auStack_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0x2a,0x1ab);
  param_1[0x6d] = iVar1;
  uVar4 = (**(code **)(*(int *)param_1[0x6e] + 0x24))();
  iVar1 = FUN_segment_0__8073025c(uVar4);
  if (iVar1 == 0) {
    gfx_nw4r_g3d_805011cc(param_1,0x1bf,0);
  }
  else {
    nw4r_g3d_assertFail_80500d70(param_1,0x1b5,iVar1);
  }
  uVar2 = uRam00000000;
  iVar1 = param_1[0x6d];
  *(undefined4 *)(iVar1 + 0x44) = uRam00000000;
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1);
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0x2a,uVar2);
  param_1[0x66] = iVar1;
  EGG_Video_validate_806d6edc(param_1);
  (**(code **)(*param_1 + 0x50))(param_1,param_1[0x6e] + 0x30,0,0);
  uVar3 = (**(code **)(*(int *)param_1[0x6e] + 0x24))();
  uVar2 = uRam00000098;
  uVar3 = uVar3 & 0xffff;
  if ((uVar3 - 0x1f5 < 2) || (uVar3 == 0x1fa)) {
    *(undefined *)(param_1[0x6d] + 0xb8) = 0x28;
    iVar1 = param_1[0x6d];
    *(undefined4 *)(iVar1 + 0x44) = uVar2;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
  }
  else if ((uVar3 == 0x17b) || (uVar3 == 0x2f2)) {
    iVar1 = param_1[0x6d];
    *(undefined4 *)(iVar1 + 0x44) = uRam0000009c;
    *(undefined4 *)(iVar1 + 0x48) = uRam0000000c;
    iVar1 = param_1[0x6e];
    if (*(char *)(iVar1 + 0x54) == 0) {
      *(undefined *)(iVar1 + 0x54) = 1;
      FUN_segment_0__8056e704(&local_6c,iVar1 + 0x58);
      *(undefined4 *)(iVar1 + 0x48) = local_6c;
      *(undefined4 *)(iVar1 + 0x4c) = local_68;
      *(undefined4 *)(iVar1 + 0x50) = local_64;
    }
    local_1c = *(undefined4 *)(iVar1 + 0x4c);
    local_24 = uRam00000000;
    local_20 = uRam00000000;
    FUN_segment_0__8040443c((double)fRam000000a0,auStack_30,&local_24);
    FUN_segment_0__80595ebc((double)fRam000000a4,&local_3c,auStack_30);
    iVar1 = param_1[0x6d];
    *(undefined4 *)(iVar1 + 0x38) = local_3c;
    *(undefined4 *)(iVar1 + 0x3c) = local_38;
    *(undefined4 *)(iVar1 + 0x40) = local_34;
  }
  else if (uVar3 == 0x18) {
    iVar1 = param_1[0x6d];
    uVar2 = *(undefined4 *)(param_1[0x6e] + 0x44);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1[0x6e] + 0x3c);
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    iVar1 = param_1[0x6e];
    if (*(char *)(iVar1 + 0x54) == 0) {
      *(undefined *)(iVar1 + 0x54) = 1;
      FUN_segment_0__8056e704(&local_78,iVar1 + 0x58);
      *(undefined4 *)(iVar1 + 0x48) = local_78;
      *(undefined4 *)(iVar1 + 0x4c) = local_74;
      *(undefined4 *)(iVar1 + 0x50) = local_70;
    }
    local_40 = *(undefined4 *)(iVar1 + 0x4c);
    local_48 = uRam00000000;
    local_44 = uRam00000000;
    FUN_segment_0__8040443c((double)fRam000000a0,auStack_54,&local_48);
    FUN_segment_0__80595ebc((double)fRam000000a4,&local_60,auStack_54);
    iVar1 = param_1[0x6d];
    *(undefined4 *)(iVar1 + 0x38) = local_60;
    *(undefined4 *)(iVar1 + 0x3c) = local_5c;
    *(undefined4 *)(iVar1 + 0x40) = local_58;
  }
  return;
}

// === gfx_EGG_Video_806d6544 (0x806d6544) ===
void gfx_EGG_Video_806d6544(int *param_1)

{
  int *piVar1;
  short sVar3;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x3c))();
  piVar1 = (int *)param_1[0x6e];
  if (((*(char *)((int)piVar1 + 0x9b) == 0) || (*(char *)((int)piVar1 + 0x9d) == 0)) &&
     (sVar3 = (**(code **)(*piVar1 + 0x24))(), sVar3 != 0x18)) {
    *(undefined *)(param_1 + 0x20) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x20) = 0;
    uVar2 = (**(code **)(*(int *)param_1[0x6e] + 0x24))();
    uVar2 = uVar2 & 0xffff;
    if (((1 < uVar2 - 0x1f5) && (uVar2 != 0x18)) &&
       ((uVar2 != 0x1fa && ((uVar2 != 0x17b && (uVar2 != 0x2f2)))))) {
      (**(code **)(*param_1 + 0x50))(param_1,param_1[0x6e] + 0x30,0,0);
    }
  }
  return;
}

// === EGG_Video_validate_806d6678 (0x806d6678) ===
int EGG_Video_validate_806d6678(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d6714 (0x806d6714) ===
void gfx_EGG_Video_806d6714(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  uint local_58;
  undefined4 local_54;
  short local_50;
  short local_4e;
  short local_4c;
  short local_48;
  short local_46;
  short local_44;
  undefined4 local_40;
  uint uStack_3c;
  longlong local_38;
  undefined4 local_30;
  uint uStack_2c;
  longlong local_28;
  undefined4 local_20;
  uint uStack_1c;
  longlong local_18;
  
  uVar5 = local_54;
  if ((param_3 == 0) || ((g_Ram_uint[0x2e4] & 2) == 0)) {
    FUN_segment_0__804c9a0c(*(undefined *)(param_1 + 400),&local_48,&local_50);
    uStack_3c = (int)local_48 + (int)local_50 ^ 0x80000000;
    local_40 = 0x43300000;
    uStack_2c = (int)local_46 + (int)local_4e ^ 0x80000000;
    dVar4 = (double)CONCAT44(g_Ram_uint,uRam00000004);
    uStack_1c = (int)local_44 + (int)local_4c ^ 0x80000000;
    local_30 = 0x43300000;
    local_20 = 0x43300000;
    iVar7 = (int)((float)g_Ram_uint * (float)((double)CONCAT44(0x43300000,uStack_3c) - dVar4));
    local_38 = (longlong)iVar7;
    iVar1 = (int)((float)g_Ram_uint * (float)((double)CONCAT44(0x43300000,uStack_2c) - dVar4));
    local_28 = (longlong)iVar1;
    iVar2 = (int)((float)g_Ram_uint * (float)((double)CONCAT44(0x43300000,uStack_1c) - dVar4));
    local_18 = (longlong)iVar2;
    local_54 = CONCAT31(CONCAT21(CONCAT11((char)iVar7,(char)iVar1),(char)iVar2),0xff);
    goto LAB_segment_0__806d6940;
  }
  local_54 = CONCAT31(local_54._0_3_,0xff);
  uVar6 = local_54;
  local_54._0_1_ = SUB41(uVar5,3);
  local_54._2_2_ = (undefined2)uVar6;
  local_54._1_3_ = CONCAT12(0x78,local_54._2_2_);
  iVar7 = *(int *)*g_Ram_uint;
  if (((iVar7 < 0x6a) || (0x6b < iVar7)) && ((iVar7 < 0x6e || (0x6f < iVar7)))) {
    uVar8 = FUN_segment_0__804214c8(g_Ram_uint,*(undefined *)(param_1 + 400));
    uVar8 = uVar8 & 0xff;
  }
  else {
    piVar14 = *(int **)(*(int *)(param_1 + 100) + 0xc);
    if (piVar14 != (int *)0) {
      if (piVar14 != (int *)0) {
        for (puVar12 = (undefined4 *)(**(code **)(*piVar14 + 0x60))(piVar14);
            puVar12 != (void *)0; puVar12 = (undefined4 *)*puVar12) {
          if (puVar12 == (void *)0) {
            bVar3 = true;
            goto LAB_segment_0__806d67f0;
          }
        }
        bVar3 = false;
LAB_segment_0__806d67f0:
        if (bVar3) goto LAB_segment_0__806d6800;
      }
      piVar14 = (int *)0;
    }
    else {
      piVar14 = (int *)0;
    }
LAB_segment_0__806d6800:
    if (piVar14 == (int *)0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = piVar14[0x19];
    }
  }
  if (g_Ram_uint[(uVar8 & 0xff) * 0x3c + 0x3d] == 1) {
    local_54 = local_54 & 0xffffff;
    local_54._2_2_ = CONCAT11(0xdc,(undefined)local_54);
  }
  else {
    local_54._2_2_ = CONCAT11(0x14,(undefined)local_54);
    local_54 = CONCAT22(0xe614,local_54._2_2_);
  }
LAB_segment_0__806d6940:
  piVar14 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,param_2);
  uVar8 = 0;
  do {
    if (1 < uVar8) {
      uVar13 = (local_54 >> 0x18) + 0x28;
      uVar9 = 0xff;
      if (uVar13 < 0xff) {
        uVar9 = uVar13;
      }
      uVar10 = (local_54 >> 0x10 & 0xff) + 0x82;
      uVar13 = 0xff;
      if (uVar10 < 0xff) {
        uVar13 = uVar10;
      }
      uVar11 = 0xff;
      uVar10 = (local_54 >> 8 & 0xff) + 0x28;
      if (uVar10 < 0xff) {
        uVar11 = (undefined)uVar10;
      }
      local_54._2_2_ = CONCAT11(uVar11,(undefined)local_54);
      local_54 = CONCAT22(CONCAT11((char)uVar9,(char)uVar13),local_54._2_2_);
    }
    local_58 = local_54;
    (**(code **)(*piVar14 + 0x28))(piVar14,uVar8,&local_58);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  return;
}

// === gfx_EGG_Video_806d6a00 (0x806d6a00) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d6a00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d6b00 (0x806d6b00) ===
void gfx_EGG_Video_806d6b00(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x44))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
      if ((iVar1 != 0) && (param_1[0x5d] != 3)) {
        param_1[0x5d] = 2;
      }
    }
    else if (param_1[0x5d] == 3) {
      param_1[0x5d] = 0;
    }
  }
  return;
}

// === gfx_EGG_Video_806d6bd4 (0x806d6bd4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d6bd4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806d6edc (0x806d6edc) ===
void EGG_Video_validate_806d6edc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xd);
  uVar1 = uRam00000018;
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x178);
}

// === gfx_EGG_Video_806d6fec (0x806d6fec) ===
uint gfx_EGG_Video_806d6fec(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = *(int *)*g_Ram_uint;
  if (((iVar2 < 0x6a) || (0x6b < iVar2)) && ((iVar2 < 0x6e || (0x6f < iVar2)))) {
    uVar4 = FUN_segment_0__804214c8(g_Ram_uint,*(undefined *)(param_1 + 400));
    return uVar4 & 0xff;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 100) + 0xc);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d708c;
        }
      }
      bVar1 = false;
LAB_segment_0__806d708c:
      if (bVar1) goto LAB_segment_0__806d709c;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__806d709c:
  if (piVar5 == (int *)0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = piVar5[0x19];
  }
  return uVar4;
}

// === gfx_EGG_Video_806d710c (0x806d710c) ===
void gfx_EGG_Video_806d710c(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined auStack_30 [44];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_30,param_1);
  local_48 = uRam00000000;
  local_44 = uRam00000004;
  local_40 = uRam00000008;
  local_3c = uRam0000000c;
  local_38 = uRam00000010;
  FUN_segment_0__804ae36c(auStack_30,0x17,0x22,param_2,&local_48);
  FUN_segment_0__804ae32c(auStack_30,0xffffffff);
  return;
}

// === gfx_EGG_Video_806d71a0 (0x806d71a0) ===
void gfx_EGG_Video_806d71a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  if ((*(uint *)((int)g_Ram_float + 0xb90) & 4) == 0) {
    bVar3 = false;
    uVar1 = *(int *)((int)g_Ram_float + 0xb70) - 3;
    if ((uVar1 < 8) && ((1 << (uVar1 & 0x3f) & 0xc1U) != 0)) {
      bVar3 = true;
    }
    if (bVar3) {
      uVar1 = gfx_EGG_Video_806d6fec(param_1);
      *(uint *)(param_1 + 0x198) =
           (uint)*(ushort *)
                  (*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uVar1 & 0xff) * 4) + 0x22);
    }
  }
  else {
    if (*(int *)((int)g_Ram_float + 0xb70) == 4) {
      uVar2 = *(undefined4 *)(*(int *)((int)g_Ram_float + 0x10) + 8);
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x198) = uVar2;
  }
  EGG_Video_validate_806d6edc(param_1);
  return;
}

// === gfx_EGG_Video_806d7280 (0x806d7280) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d7280(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d758c (0x806d758c) ===
void gfx_EGG_Video_806d758c(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined auStack_58 [12];
  undefined auStack_4c [12];
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
  
  fVar1 = (float)(param_1 * param_1);
  if (fVar1 < g_Ram_float) {
    FUN_segment_0__804086e4((double)(g_Ram_float * -fVar1),&local_40,param_2 + 0x5e);
    local_1c = local_40;
    local_18 = local_3c;
    local_14 = local_38;
  }
  else {
    FUN_segment_0__804086e4
              ((double)(g_Ram_float * (fVar1 - g_Ram_float)),&local_34,param_2 + 0x5e);
    local_1c = local_34;
    local_18 = local_30;
    local_14 = local_2c;
  }
  if (g_Ram_float != 0.0) {
    if (*(byte *)((int)g_Ram_float + 0x25) < 2) {
      local_28 = uRam0000000c;
      local_24 = uRam00000010;
      local_20 = uRam00000014;
    }
    else if (*(byte *)((int)g_Ram_float + 0x25) == 2) {
      local_28 = uRam00000024;
      local_24 = uRam00000028;
      local_20 = uRam0000002c;
    }
    else {
      local_28 = uRam0000003c;
      local_24 = uRam00000040;
      local_20 = uRam00000044;
    }
    FUN_segment_0__80404464(auStack_4c,param_2 + 7,&local_1c);
    FUN_segment_0__80404464(auStack_58,auStack_4c,&local_28);
    gfx_EGG_Video_806d7750(g_Ram_float,(int)*(char *)(param_2 + 100),auStack_58);
  }
  iVar2 = (**(code **)(*param_2 + 0x44))(param_2);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_2 + 0x44))(param_2);
    *(undefined4 *)(iVar2 + 0x2c) = local_1c;
    *(undefined4 *)(iVar2 + 0x30) = local_18;
    *(undefined4 *)(iVar2 + 0x34) = local_14;
  }
  return;
}

// === gfx_EGG_Video_806d7750 (0x806d7750) ===
void gfx_EGG_Video_806d7750(int param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1fa4) <= iVar1) {
    return;
  }
  iVar1 = *(int *)(param_1 + iVar1 * 4 + 0x1fa8);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x104) = *param_3;
  *(undefined4 *)(iVar1 + 0x108) = param_3[1];
  *(undefined4 *)(iVar1 + 0x10c) = param_3[2];
  *(undefined *)(iVar1 + 0x110) = 1;
  return;
}

// === gfx_EGG_Video_806d77a0 (0x806d77a0) ===
void gfx_EGG_Video_806d77a0(int param_1)

{
  undefined auStack_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  gfx_EGG_Display_804ffe14();
  if (iRam00000000 != 0) {
    if (*(byte *)(iRam00000000 + 0x25) < 2) {
      local_1c = uRam0000000c;
      local_18 = uRam00000010;
      local_14 = uRam00000014;
    }
    else if (*(byte *)(iRam00000000 + 0x25) == 2) {
      local_1c = uRam00000024;
      local_18 = uRam00000028;
      local_14 = uRam0000002c;
    }
    else {
      local_1c = uRam0000003c;
      local_18 = uRam00000040;
      local_14 = uRam00000044;
    }
    FUN_segment_0__80404464(auStack_28,param_1 + 0x4c,&local_1c);
    gfx_EGG_Video_806d7750(iRam00000000,(int)*(char *)(param_1 + 400),auStack_28);
  }
  return;
}

// === gfx_EGG_Video_806d788c (0x806d788c) ===
void gfx_EGG_Video_806d788c(int param_1)

{
  uint uVar1;
  undefined4 local_d8 [53];
  
  uVar1 = gfx_EGG_Video_806d6fec();
  *(uint *)(param_1 + 0x198) =
       (uint)*(ushort *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x22);
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = *(undefined4 *)(param_1 + 0x198);
  uVar1 = gfx_EGG_Video_806d6fec(param_1);
  gfx_nw4r_g3d_80500a34
            (param_1,0x76d - (uint)(*(int *)(iRam00000000 + (uVar1 & 0xff) * 0xf0 + 0xf4) == 0),
             local_d8);
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === gfx_EGG_Video_806d7928 (0x806d7928) ===
void gfx_EGG_Video_806d7928(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_d8 [52];
  
  (**(code **)(*param_1 + 0x3c))();
  uVar1 = gfx_EGG_Video_806d6fec(param_1);
  uVar1 = (uint)*(ushort *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x22);
  if (uVar1 != param_1[0x66]) {
    param_1[0x66] = uVar1;
    FUN_segment_0__804b4ecc(local_d8);
    local_d8[0] = uVar1;
    uVar2 = gfx_EGG_Video_806d6fec(param_1);
    gfx_nw4r_g3d_80500a34
              (param_1,0x76d - (uint)(*(int *)(iRam00000000 + (uVar2 & 0xff) * 0xf0 + 0xf4) == 0),
               local_d8);
    param_1[0x66] = uVar1;
  }
  return;
}

// === gfx_EGG_Video_806d79e4 (0x806d79e4) ===
void gfx_EGG_Video_806d79e4(int param_1,undefined4 param_2,undefined param_3)

{
  undefined auStack_38 [52];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,0x45,0x50,param_2,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_EGG_Video_806d7a5c (0x806d7a5c) ===
void gfx_EGG_Video_806d7a5c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,5);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,6);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,7);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === EGG_Video_assertFail_806d7b58 (0x806d7b58) ===
void EGG_Video_assertFail_806d7b58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_validate_806d81dc (0x806d81dc) ===
void EGG_Video_validate_806d81dc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  undefined auStack_c8 [16];
  undefined auStack_b8 [36];
  undefined4 uStack_94;
  undefined4 local_90 [34];
  
  FUN_segment_0__804ae324(auStack_b8,param_1);
  iVar7 = 0xf;
  puVar1 = (undefined4 *)0xfffffffc;
  puVar2 = &uStack_94;
  do {
    puVar5 = puVar2;
    puVar4 = puVar1;
    uVar3 = puVar4[2];
    puVar5[1] = puVar4[1];
    puVar5[2] = uVar3;
    iVar7 = iVar7 + -1;
    puVar1 = puVar4 + 2;
    puVar2 = puVar5 + 2;
  } while (iVar7 != 0);
  puVar5[3] = puVar4[3];
  cVar6 = '\x04';
  if (*(char *)(iRam00000000 + 0x27) != '\x03') {
    cVar6 = *(char *)(iRam00000000 + 0x27);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0x10,0x6f,cVar6);
}

// === EGG_Video_validate_806d8378 (0x806d8378) ===
int EGG_Video_validate_806d8378(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806d83e0 (0x806d83e0) ===
int EGG_Video_validate_806d83e0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806d8454 (0x806d8454) ===
int EGG_Video_validate_806d8454(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d84b0 (0x806d84b0) ===
void gfx_EGG_Video_806d84b0(void)

{
  uRam0000000c = uRam000001e0;
  uRam00000010 = uRam000001e4;
  uRam00000014 = uRam000001e8;
  FUN_segment_0__8077efa4(0xc,0,0);
  uRam00000024 = uRam00000040;
  uRam00000028 = uRam000001ec;
  uRam0000002c = uRam000001e8;
  FUN_segment_0__8077efa4(0x24,0,0x18);
  uRam0000003c = uRam00000040;
  uRam00000040 = uRam000001f0;
  uRam00000044 = uRam000001e8;
  FUN_segment_0__8077efa4(0x3c,0,0x30);
  uRam00000048 = 0;
  uRam0000004c = 0;
  uRam00000050 = 0;
  return;
}

// === gfx_EGG_Video_806d8598 (0x806d8598) ===
void gfx_EGG_Video_806d8598(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined auStack_40 [52];
  
  FUN_segment_0__804ae324(auStack_40,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  FUN_segment_0__804ae36c(auStack_40,0xe,param_2,param_3,&local_58);
  *(undefined4 *)(param_1 + 0x7c) = uRam00000000;
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  return;
}

// === gfx_EGG_Video_806d8648 (0x806d8648) ===
void gfx_EGG_Video_806d8648(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === gfx_EGG_Video_806d8694 (0x806d8694) ===
void gfx_EGG_Video_806d8694(int param_1)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  *(bool *)(param_1 + 0x80) = *(int *)(iVar1 + 0x38) == 0;
  return;
}

// === gfx_EGG_Video_806d86d8 (0x806d86d8) ===
bool gfx_EGG_Video_806d86d8(int param_1)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 1;
}

// === gfx_EGG_Video_806d8710 (0x806d8710) ===
void gfx_EGG_Video_806d8710(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === EGG_Video_validate_806d8748 (0x806d8748) ===
int EGG_Video_validate_806d8748(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d87d0 (0x806d87d0) ===
void gfx_EGG_Video_806d87d0(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  double dVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x13);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d8860;
        }
      }
      bVar1 = false;
LAB_segment_0__806d8860:
      if (bVar1) goto LAB_segment_0__806d8870;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d8870:
  *(int **)(param_1 + 0x1a0) = piVar2;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x1d);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d88dc;
        }
      }
      bVar1 = false;
LAB_segment_0__806d88dc:
      if (bVar1) goto LAB_segment_0__806d88ec;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d88ec:
  *(int **)(param_1 + 0x1a4) = piVar2;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x27);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d8958;
        }
      }
      bVar1 = false;
LAB_segment_0__806d8958:
      if (bVar1) goto LAB_segment_0__806d8968;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d8968:
  *(int **)(param_1 + 0x1a8) = piVar2;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x34);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d89d4;
        }
      }
      bVar1 = false;
LAB_segment_0__806d89d4:
      if (bVar1) goto LAB_segment_0__806d89e4;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d89e4:
  *(int **)(param_1 + 0x1ac) = piVar2;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x41);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d8a50;
        }
      }
      bVar1 = false;
LAB_segment_0__806d8a50:
      if (bVar1) goto LAB_segment_0__806d8a60;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d8a60:
  *(int **)(param_1 + 0x1b0) = piVar2;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x50);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806d8acc;
        }
      }
      bVar1 = false;
LAB_segment_0__806d8acc:
      if (bVar1) goto LAB_segment_0__806d8adc;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806d8adc:
  dVar5 = (double)g_Ram_float;
  *(int **)(param_1 + 0x1b4) = piVar2;
  FUN_segment_0__8040443c(dVar5,&local_1c,0);
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(undefined4 *)(iVar4 + 0x38) = local_1c;
  dVar5 = (double)g_Ram_float;
  *(undefined4 *)(iVar4 + 0x3c) = local_18;
  *(undefined4 *)(iVar4 + 0x40) = local_14;
  FUN_segment_0__8040443c(dVar5,&local_28,0);
  iVar4 = *(int *)(param_1 + 0x1b4);
  *(undefined4 *)(iVar4 + 0x38) = local_28;
  *(undefined4 *)(iVar4 + 0x3c) = local_24;
  *(undefined4 *)(iVar4 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x198) = 0x14;
  gfx_EGG_Video_806d6714(param_1,0x5f,1);
  gfx_EGG_Video_806d6714(param_1,0x6c,1);
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === gfx_EGG_Video_806d8b9c (0x806d8b9c) ===
undefined4 gfx_EGG_Video_806d8b9c(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = gfx_EGG_Video_806d6fec();
  if (*(char *)(*g_Ram_ptr + 0x38b) == 0) {
    piVar4 = (int *)FUN_segment_0__8047d97c(g_Ram_ptr,uVar2 & 0xff);
    if ((*(uint *)(*(int *)(*piVar4 + 4) + 4) & 0x10) == 0) {
      uVar3 = 0;
      bVar1 = false;
      iVar5 = g_Ram_ptr[5] + (uVar2 & 0xff) * 0x248;
      if ((*(int *)(iVar5 + 0x58) == 0) && (*(int *)(iVar5 + 0x8c) == 0x14)) {
        bVar1 = true;
      }
      if ((bVar1) && (*(int *)(iVar5 + 0x78) == 0x14)) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

// === gfx_EGG_Video_806d8c64 (0x806d8c64) ===
uint gfx_EGG_Video_806d8c64(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = gfx_EGG_Video_806d6fec();
  if (*(int *)(iRam00000000 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(iRam00000000 + 0x14) + (uVar1 & 0xff) * 0x248;
    if (*(int *)(iVar2 + 0x8c) == 0x14) {
      if (*(int *)(iVar2 + 0x58) == 0) {
        uVar1 = (0x14U - *(int *)(iVar2 + 0x78) | *(int *)(iVar2 + 0x78) - 0x14U) >> 0x1f;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// === gfx_EGG_Video_806d8cf4 (0x806d8cf4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806d8cf4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806d9258 (0x806d9258) ===
void gfx_EGG_Video_806d9258(int param_1,undefined4 param_2,undefined param_3)

{
  undefined auStack_38 [52];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,0x97,0xa2,param_2,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === gfx_EGG_Video_806d92c0 (0x806d92c0) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gfx_EGG_Video_806d92c0(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 local_38;
  undefined2 local_34;
  
  if ((int)param_2 < 9) {
    iVar3 = *(int *)(param_1 + 0x1a4);
    fVar1 = (float)(dRam00000020 -
                   (dRam00000028 *
                    ((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000058) *
                   ((double)CONCAT44(0x43300000,param_2 - 8 ^ 0x80000000) - dRam00000058)) /
                   (double)(_DAT_00000030 * (float)(4503601774854208.0 - dRam00000058)));
    fVar2 = fRam00000038 * fRam0000003c * (fVar1 - fRam00000004);
    *(float *)(iVar3 + 0x44) = fVar1 + _DAT_00000034 * (fVar1 - fRam00000004);
    *(float *)(iVar3 + 0x48) = fVar1;
    local_34 = (ushort)(int)fVar2;
    local_38 = CONCAT22(local_34,local_34) & 0xff00ff;
    local_34 = local_34 & 0xff;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1a4) + 0x68))();
    *(undefined2 *)(iVar3 + 0x10) = local_38._0_2_;
    *(undefined2 *)(iVar3 + 0x12) = local_38._2_2_;
    *(ushort *)(iVar3 + 0x14) = local_34;
    *(undefined2 *)(iVar3 + 0x16) = 0;
  }
  return;
}

// === EGG_Video_validate_806d93f0 (0x806d93f0) ===
int EGG_Video_validate_806d93f0(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806d9478 (0x806d9478) ===
void gfx_EGG_Video_806d9478(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = gfx_EGG_Video_806d6fec();
  *(undefined *)(param_1 + 0x198) =
       *(undefined *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x26);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0
            ((double)(float)((double)CONCAT44(0x43300000,
                                              (uint)*(byte *)(**(int **)(iRam00000000 + 0xc) + 0x26)
                                             ) - (double)CONCAT44(iRam00000000,uRam00000004)),uVar2,
             0);
  uVar1 = FUN_segment_0__80422bfc(iRam00000000);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff7a0
            ((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xff) -
                            (double)CONCAT44(iRam00000000,uRam00000004)),uVar2,0);
  gfx_EGG_Video_806d6714(param_1,0xc,1);
  gfx_EGG_Video_806d6714(param_1,0x16,1);
  gfx_EGG_Video_806d6714(param_1,0x1c,1);
  gfx_EGG_Video_806d6714(param_1,0x27,1);
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === gfx_EGG_Video_806d95a0 (0x806d95a0) ===
void gfx_EGG_Video_806d95a0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x3c))();
  uVar1 = gfx_EGG_Video_806d6fec(param_1);
  if (*(char *)(param_1 + 0x66) !=
      *(char *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x26)) {
    uVar1 = gfx_EGG_Video_806d6fec(param_1);
    *(undefined *)(param_1 + 0x66) =
         *(undefined *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x26);
    uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
    gfx_EGG_Display_804ff7a0
              ((double)(float)((double)CONCAT44(0x43300000,(uint)*(byte *)(param_1 + 0x66)) -
                              (double)CONCAT44(iRam00000000,uRam00000004)),uVar2,0);
  }
  return;
}

// === gfx_EGG_Video_806d9660 (0x806d9660) ===
void gfx_EGG_Video_806d9660(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [48];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0x30,0x3b,param_2,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === EGG_Video_validate_806d970c (0x806d970c) ===
int EGG_Video_validate_806d970c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_assertFail_806d9790 (0x806d9790) ===
void EGG_Video_assertFail_806d9790(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806d9940 (0x806d9940) ===
void gfx_EGG_Video_806d9940(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x35);
  *(undefined4 *)(param_1 + 0x180) = uVar4;
  uVar4 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x45);
  *(undefined4 *)(param_1 + 0x184) = uVar4;
  uVar2 = uRam000000b8;
  uVar1 = uRam000000b4;
  uVar4 = uRam00000004;
  uVar5 = (uint)*(byte *)((int)g_Ram_float + 0x25);
  if (uVar5 - 3 < 2) {
    iVar7 = *(int *)(param_1 + 0x180);
    *(undefined4 *)(iVar7 + 0x44) = uRam000000b8;
    *(undefined4 *)(iVar7 + 0x48) = uVar2;
  }
  else if (uVar5 == 1) {
    iVar7 = *(int *)(param_1 + 0x180);
    *(undefined4 *)(iVar7 + 0x44) = uRam00000004;
    *(undefined4 *)(iVar7 + 0x48) = uVar4;
  }
  else if (uVar5 == 2) {
    iVar7 = *(int *)(param_1 + 0x180);
    *(undefined4 *)(iVar7 + 0x44) = uRam000000b4;
    *(undefined4 *)(iVar7 + 0x48) = uVar1;
  }
  *(undefined *)(param_1 + 0x80) = 1;
  uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar4,0);
  iVar7 = *(int *)(param_1 + 0x17c);
  if ((iVar7 != 0) && (-1 < *(int *)(param_1 + 0x178))) {
    iVar3 = *(int *)(iVar7 + 4);
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        if ((*(int *)(iVar7 + 0x14) != -1) && (*(int *)(param_1 + 0x178) == *(int *)(iVar7 + 0x14)))
        goto LAB_segment_0__806d9a7c;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar6 = -1;
LAB_segment_0__806d9a7c:
    if ((-1 < iVar6) && (iVar6 < 3)) {
      *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
      *(undefined *)(*(int *)(param_1 + 0x17c) + iVar6) = 0;
    }
  }
  return;
}

// === EGG_Video_assertFail_806d9abc (0x806d9abc) ===
void EGG_Video_assertFail_806d9abc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806da160 (0x806da160) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806da160(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806da7a8 (0x806da7a8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806da7a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806da94c (0x806da94c) ===
void gfx_EGG_Video_806da94c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined *)(param_1 + 0x80) = 1;
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  iVar4 = *(int *)(param_1 + 0x17c);
  if ((iVar4 != 0) && (-1 < *(int *)(param_1 + 0x178))) {
    iVar1 = *(int *)(iVar4 + 4);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if ((*(int *)(iVar4 + 0x14) != -1) && (*(int *)(param_1 + 0x178) == *(int *)(iVar4 + 0x14)))
        goto LAB_segment_0__806da9d8;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar3 = -1;
LAB_segment_0__806da9d8:
    if ((-1 < iVar3) && (iVar3 < 3)) {
      *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
      *(undefined *)(*(int *)(param_1 + 0x17c) + iVar3) = 0;
    }
  }
  return;
}

// === gfx_EGG_Video_806daa10 (0x806daa10) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806daa10(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_assertFail_806dab0c (0x806dab0c) ===
void EGG_Video_assertFail_806dab0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806dada4 (0x806dada4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806dada4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806db6d0 (0x806db6d0) ===
void EGG_Video_validate_806db6d0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x20,0,0,0xc,0xc);
}

// === gfx_EGG_Video_806db7bc (0x806db7bc) ===
void gfx_EGG_Video_806db7bc(undefined *param_1,undefined param_2)

{
  char cVar1;
  
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[2] = 0;
  cVar1 = FUN_segment_0__804214c8(uRam00000000);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  return;
}

// === gfx_EGG_Video_806db82c (0x806db82c) ===
void gfx_EGG_Video_806db82c(int param_1,int param_2)

{
  float fVar1;
  undefined uVar4;
  int iVar2;
  char cVar5;
  uint uVar3;
  
  if ((*(uint *)(iRam00000000 + 0xb90) & 2) != 0) {
    uVar4 = FUN_segment_0__804214c8(iRam00000000,*(undefined *)(param_1 + 3));
    iVar2 = FUN_segment_0__8068e474(param_2,uVar4);
    if (iVar2 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0xbc) == 0) &&
     ((*(uint *)(*(int *)(param_2 + 0xa4) + 0x20) & 0x20202020) == 0)) {
    if (*(int *)(param_2 + 4) == 5) {
      cVar5 = FUN_segment_0__804214c8(iRam00000000,*(undefined *)(param_1 + 3));
      uVar3 = FUN_segment_0__80697ca8(param_2);
      if ((uVar3 & 0xff) == (int)cVar5) {
        *(int *)(param_1 + 0xbc) = param_2;
        *(undefined4 *)(param_1 + 0xb4) =
             *(undefined4 *)(*(int *)(param_2 + 0xa4) + (uint)*(byte *)(param_1 + 3) * 4 + 0xc);
      }
    }
    if (*(int *)(param_2 + 4) == 1) {
      cVar5 = FUN_segment_0__804214c8(iRam00000000,*(undefined *)(param_1 + 3));
      uVar3 = FUN_segment_0__80694c8c(param_2);
      if ((uVar3 & 0xff) == (int)cVar5) {
        *(int *)(param_1 + 0xbc) = param_2;
        *(undefined4 *)(param_1 + 0xb4) =
             *(undefined4 *)(*(int *)(param_2 + 0xa4) + (uint)*(byte *)(param_1 + 3) * 4 + 0xc);
      }
    }
    if ((*(int *)(param_2 + 4) == 5) &&
       (fVar1 = *(float *)(*(int *)(param_2 + 0xa4) + (uint)*(byte *)(param_1 + 3) * 4 + 0xc),
       fVar1 < *(float *)(param_1 + 0xb4))) {
      *(float *)(param_1 + 0xb4) = fVar1;
      *(int *)(param_1 + 0xb8) = param_2;
    }
  }
  return;
}

// === EGG_Video_assertFail_806db9c8 (0x806db9c8) ===
void EGG_Video_assertFail_806db9c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806dbb90 (0x806dbb90) ===
void EGG_Video_assertFail_806dbb90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806dbd34 (0x806dbd34) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806dbd34(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806dc5ec (0x806dc5ec) ===
void gfx_EGG_Video_806dc5ec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 1) || (*(int *)(iVar1 + 0x38) == 2)) {
    if (param_2 != *(int *)(param_1 + 0x18c)) {
      *(undefined4 *)(param_1 + 0x184) = uRam00000000;
    }
    *(int *)(param_1 + 0x18c) = param_2;
    *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
    if ((*(int *)(param_1 + 0x180) == 5) || (*(int *)(param_2 + 4) != 5)) {
      if ((*(int *)(param_2 + 4) != 5) &&
         ((*(int *)(param_1 + 0x180) != 1 && (*(int *)(param_2 + 4) == 1)))) {
        *(undefined4 *)(param_1 + 0x180) = 1;
        uVar2 = FUN_segment_0__8072ff44(1,1);
        nw4r_g3d_assertFail_80500d70(param_1,0x129,uVar2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x180) = 5;
      uVar2 = FUN_segment_0__8072ff44(7,1);
      nw4r_g3d_assertFail_80500d70(param_1,0x124,uVar2);
    }
  }
  return;
}

// === gfx_EGG_Video_806dc6fc (0x806dc6fc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806dc6fc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806dcf64 (0x806dcf64) ===
void gfx_EGG_Video_806dcf64(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = param_3;
  iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 1) || (*(int *)(iVar1 + 0x38) == 2)) {
    iVar1 = *(int *)(param_1 + 0x17c);
    if ((iVar1 == 0) || ((*(uint *)(*(int *)(*param_2 + 4) + 8) & 0x80000000) == 0)) {
      iVar3 = *(int *)(*param_2 + 4);
      if ((*(uint *)(iVar3 + 8) & 0x80000000) == 0) {
        if ((iVar1 == 1) || ((*(uint *)(iVar3 + 0xc) & 0x8000000) == 0)) {
          uVar4 = *(uint *)(iVar3 + 0xc);
          if ((uVar4 & 0x8000000) == 0) {
            if ((iVar1 == 2) || ((uVar4 & 0x8000) == 0)) {
              if (((uVar4 & 0x8000) == 0) && ((iVar1 != 3 && ((uVar4 & 0x20000000) != 0)))) {
                uVar2 = FUN_segment_0__8072ff44(0xe,1);
                nw4r_g3d_assertFail_80500d70(param_1,0x13d,uVar2);
                *(undefined4 *)(param_1 + 0x17c) = 3;
              }
            }
            else {
              uVar2 = FUN_segment_0__8072ff44(0xb,1);
              nw4r_g3d_assertFail_80500d70(param_1,0x138,uVar2);
              *(undefined4 *)(param_1 + 0x17c) = 2;
            }
          }
        }
        else {
          uVar2 = FUN_segment_0__8072ff44(0xf,1);
          nw4r_g3d_assertFail_80500d70(param_1,0x133,uVar2);
          *(undefined4 *)(param_1 + 0x17c) = 1;
        }
      }
    }
    else {
      uVar2 = FUN_segment_0__8072ff44(9,1);
      nw4r_g3d_assertFail_80500d70(param_1,0x12e,uVar2);
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
  }
  return;
}

// === gfx_EGG_Video_806dd104 (0x806dd104) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806dd104(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806dd7e0 (0x806dd7e0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806dd7e0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ddfc8 (0x806ddfc8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ddfc8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806de0f8 (0x806de0f8) ===
void gfx_EGG_Video_806de0f8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined *)(param_1 + 0x80) = 1;
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Video_806de138 (0x806de138) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806de138(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806de234 (0x806de234) ===
int EGG_Video_validate_806de234(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Video_validate_806de298 (0x806de298) ===
int EGG_Video_validate_806de298(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === gfx_EGG_Video_806de2fc (0x806de2fc) ===
void gfx_EGG_Video_806de2fc(void)

{
  uRam0000000c = uRam00000000;
  uRam00000010 = uRam00000000;
  uRam00000014 = uRam00000000;
  FUN_segment_0__8077efa4(0xc,0,0);
  uRam00000018 = 0;
  uRam0000001c = 0;
  return;
}

// === gfx_EGG_Video_806de374 (0x806de374) ===
void gfx_EGG_Video_806de374(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,1);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff7a0
            ((double)((float)((double)CONCAT44(0x43300000,(uint)*(byte *)(param_1 + 0x198)) -
                             (double)CONCAT44(g_Ram_float,uRam00000004)) - g_Ram_float),uVar1,0);
  uVar1 = gfx_EGG_Video_806d6fec(param_1);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  if (((*(uint *)((int)g_Ram_float + 0xb90) & 2) == 0) &&
     (*(char *)((int)g_Ram_float + 0x25) == '\x01')) {
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
    gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  }
  else {
    gfx_EGG_Video_806d6714(param_1,0x10,1);
  }
  uVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x19);
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  gfx_nw4r_g3d_80500740(param_1);
  return;
}

// === gfx_EGG_Video_806de480 (0x806de480) ===
void gfx_EGG_Video_806de480(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x3c))();
  uVar2 = gfx_EGG_Video_806d6fec(param_1);
  bVar1 = *(byte *)(*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uVar2 & 0xff) * 4) + 0x20);
  if ((bVar1 != *(byte *)(param_1 + 0x66)) &&
     (iVar3 = gfx_EGG_Video_806d6fec(param_1), param_1[0x67] == iVar3)) {
    iVar3 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,1);
    if (*(int *)(iVar3 + 0x38) == 2) {
      uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,1);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar4,0);
    }
    else if (*(int *)(iVar3 + 0x38) == 1) {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      if ((iVar3 == 0) && (bVar1 < *(byte *)(param_1 + 0x66))) {
        gfx_nw4r_g3d_805003cc(param_1,0xe5,*(undefined *)(param_1 + 100));
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        if (iVar3 == 0) {
          gfx_nw4r_g3d_805003cc(param_1,0xe6,*(undefined *)(param_1 + 100));
        }
      }
      *(byte *)(param_1 + 0x66) = bVar1;
      uVar4 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
      gfx_EGG_Display_804ff7a0
                ((double)((float)((double)CONCAT44(0x43300000,(uint)*(byte *)(param_1 + 0x66)) -
                                 (double)CONCAT44(g_Ram_float,uRam00000004)) - g_Ram_float),uVar4,
                 0);
    }
  }
  iVar3 = gfx_EGG_Video_806d6fec(param_1);
  param_1[0x67] = iVar3;
  FUN_segment_0__8047d97c(g_Ram_float,iVar3);
  iVar3 = FUN_segment_0__8047f01c();
  *(byte *)(param_1[0x68] + 0xbb) = *(byte *)(param_1[0x68] + 0xbb) & 0xfe | iVar3 == -1;
  return;
}

// === gfx_EGG_Video_806de62c (0x806de62c) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gfx_EGG_Video_806de62c(int param_1,undefined4 param_2,undefined param_3)

{
  uint uVar1;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined auStack_58 [52];
  
  *(undefined *)(param_1 + 400) = param_3;
  uVar1 = gfx_EGG_Video_806d6fec();
  *(undefined *)(param_1 + 0x198) =
       *(undefined *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar1 & 0xff) * 4) + 0x20);
  FUN_segment_0__804ae324(auStack_58,param_1);
  if (((*(uint *)(iRam00000000 + 0xb90) & 2) == 0) && (*(char *)(iRam00000000 + 0x25) == '\x01')) {
    local_b8 = iRam00000000;
    local_b4 = uRam00000004;
    local_b0 = uRam00000008;
    local_ac = uRam0000000c;
    local_a8 = uRam00000010;
    local_a4 = uRam00000014;
    local_a0 = uRam00000018;
    local_9c = uRam0000001c;
    local_98 = uRam00000020;
    local_94 = uRam00000024;
    local_90 = uRam00000028;
    local_8c = uRam0000002c;
    local_88 = _DAT_00000030;
    local_84 = _DAT_00000034;
    FUN_segment_0__804ae36c(auStack_58,0x41,0x4c,param_2,&local_b8);
  }
  else {
    local_80 = iRam00000000;
    local_7c = uRam00000004;
    local_78 = uRam00000008;
    local_74 = uRam0000000c;
    local_70 = uRam00000010;
    local_6c = uRam00000014;
    local_68 = uRam00000018;
    local_64 = uRam0000001c;
    local_60 = uRam00000020;
    FUN_segment_0__804ae36c(auStack_58,0x27,0x32,param_2,&local_80);
  }
  FUN_segment_0__804ae32c(auStack_58,0xffffffff);
  return;
}

// === gfx_EGG_Video_806de7b8 (0x806de7b8) ===
undefined4 gfx_EGG_Video_806de7b8(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(*g_Ram_ptr + 0x38b) == 0) {
    uVar1 = 0;
    bVar3 = false;
    if ((6 < g_Ram_ptr[0x2dc]) && (g_Ram_ptr[0x2dc] < 0xb)) {
      bVar3 = true;
    }
    if ((bVar3) &&
       (uVar2 = gfx_EGG_Video_806d6fec(),
       (*(uint *)(*(int *)(g_Ram_ptr[3] + (uVar2 & 0xff) * 4) + 0x38) & 2) != 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// === EGG_Video_validate_806de858 (0x806de858) ===
int EGG_Video_validate_806de858(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806de8e0 (0x806de8e0) ===
void EGG_Video_validate_806de8e0(undefined4 param_1)

{
  undefined auStack_a8 [160];
  
  FUN_segment_0__804ae324(auStack_a8,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(8);
}

// === gfx_EGG_Video_806dea44 (0x806dea44) ===
void gfx_EGG_Video_806dea44(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = false;
  iVar5 = *(int *)(iRam00000000 + 0x98) + 0x188;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar4 = true;
  }
  if ((bVar4) || (0x17 < *(int *)(iRam00000000 + param_2 * 0xf0 + 0x34))) {
    nw4r_g3d_assertFail_8050105c(param_1,0x1d,iVar5,param_2,2);
    nw4r_g3d_assertFail_8050105c(param_1,0x28,iVar5,param_2,2);
    return;
  }
  uVar1 = FUN_segment_0__8072ff20();
  nw4r_g3d_assertFail_80500d70(param_1,0x37,uVar1);
  nw4r_g3d_assertFail_80500d70(param_1,0x46,uVar1);
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x51);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar4 = true;
          goto LAB_segment_0__806deb84;
        }
      }
      bVar4 = false;
LAB_segment_0__806deb84:
      if (bVar4) goto LAB_segment_0__806deb94;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806deb94:
  *(byte *)((int)piVar2 + 0xbb) = *(byte *)((int)piVar2 + 0xbb) & 0xfe | 1;
  piVar2 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0x60);
  if (piVar2 != (int *)0) {
    if (piVar2 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(); puVar3 != (void *)0;
          puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar4 = true;
          goto LAB_segment_0__806dec0c;
        }
      }
      bVar4 = false;
LAB_segment_0__806dec0c:
      if (bVar4) goto LAB_segment_0__806dec1c;
    }
    piVar2 = (int *)0;
  }
  else {
    piVar2 = (int *)0;
  }
LAB_segment_0__806dec1c:
  *(byte *)((int)piVar2 + 0xbb) = *(byte *)((int)piVar2 + 0xbb) & 0xfe | 1;
  return;
}

// === gfx_EGG_Video_806dec4c (0x806dec4c) ===
void gfx_EGG_Video_806dec4c(undefined4 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar1 = true;
  }
  if (bVar1) {
    gfx_nw4r_g3d_8050093c
              (param_1,0x6b,
               *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + (param_2 & 0xff) * 4 + 0x35c),0);
  }
  else {
    iVar2 = iRam00000000 + param_2 * 0xf0;
    iVar3 = *(int *)(iVar2 + 0x38);
    if ((iVar3 == 3) && (*(int *)(iVar2 + 0xf8) == 0)) {
      gfx_nw4r_g3d_8050093c(param_1,0x77,0x25f2,0);
    }
    else {
      if (iVar3 == 0) {
        FUN_segment_0__804df3bc(iRam00000000 + 0x34);
        iVar2 = gfx_EGG_Display_804e0010();
        if (iVar2 == 0) {
          gfx_nw4r_g3d_8050093c(param_1,0x83,0x25f2,0);
          return;
        }
      }
      gfx_nw4r_g3d_80500b6c(param_1,0x8f);
    }
  }
  return;
}

// === gfx_EGG_Video_806ded6c (0x806ded6c) ===
void gfx_EGG_Video_806ded6c(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_d8 [72];
  undefined4 local_90;
  
  FUN_segment_0__804b4ecc(auStack_d8);
  iVar5 = iRam00000000 + 0x28 + param_2 * 0xf0;
  iVar4 = *(int *)(iVar5 + 0xc);
  iVar2 = *(int *)(iRam00000000 + 0x98) + 0x188;
  if (iVar4 < 0x18) {
    bVar1 = false;
    if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
      bVar1 = true;
    }
    if (((bVar1) ||
        (-1 < (int)((*(byte *)(iRam00000000 + 0x26) | 0xfffffffd) -
                   (*(byte *)(iRam00000000 + 0x26) - 2 >> 1)))) && (*(int *)(iVar5 + 0x10) != 1)) {
      local_90 = FUN_segment_0__804ce0ec(iVar2,param_2);
      gfx_nw4r_g3d_8050093c(param_1,0,0x251d,auStack_d8);
    }
    else {
      uVar3 = FUN_segment_0__8070f914(iVar4,1);
      gfx_nw4r_g3d_8050093c(param_1,0x9b,uVar3,0);
    }
  }
  else {
    local_90 = FUN_segment_0__804ce0ec(iVar2,param_2);
    gfx_nw4r_g3d_8050093c(param_1,0,0x251d,auStack_d8);
  }
  gfx_nw4r_g3d_80500b6c(param_1,0xa7);
  return;
}

// === gfx_EGG_Video_806deec4 (0x806deec4) ===
void gfx_EGG_Video_806deec4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_segment_0__8072ff20(param_2);
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0xe0);
    if (piVar3 != (int *)0) {
      if (piVar3 != (int *)0) {
        for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
            puVar4 = (undefined4 *)*puVar4) {
          if (puVar4 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__806df090;
          }
        }
        bVar1 = false;
LAB_segment_0__806df090:
        if (bVar1) goto LAB_segment_0__806df0a0;
      }
      piVar3 = (int *)0;
    }
    else {
      piVar3 = (int *)0;
    }
LAB_segment_0__806df0a0:
    *(byte *)((int)piVar3 + 0xbb) = *(byte *)((int)piVar3 + 0xbb) & 0xfe;
    piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0xef);
    if (piVar3 != (int *)0) {
      if (piVar3 != (int *)0) {
        for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
            puVar4 = (undefined4 *)*puVar4) {
          if (puVar4 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__806df114;
          }
        }
        bVar1 = false;
LAB_segment_0__806df114:
        if (bVar1) goto LAB_segment_0__806df124;
      }
      piVar3 = (int *)0;
    }
    else {
      piVar3 = (int *)0;
    }
LAB_segment_0__806df124:
    *(byte *)((int)piVar3 + 0xbb) = *(byte *)((int)piVar3 + 0xbb) & 0xfe;
    return;
  }
  nw4r_g3d_assertFail_80500d70(param_1,0xac,iVar2);
  nw4r_g3d_assertFail_80500d70(param_1,0xbb,iVar2);
  piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0xc6);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806def7c;
        }
      }
      bVar1 = false;
LAB_segment_0__806def7c:
      if (bVar1) goto LAB_segment_0__806def8c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__806def8c:
  *(byte *)((int)piVar3 + 0xbb) = *(byte *)((int)piVar3 + 0xbb) & 0xfe | 1;
  piVar3 = (int *)FUN_segment_0__804c5d1c(param_1 + 0xa8,0xd5);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(); puVar4 != (void *)0;
          puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__806df004;
        }
      }
      bVar1 = false;
LAB_segment_0__806df004:
      if (bVar1) goto LAB_segment_0__806df014;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__806df014:
  *(byte *)((int)piVar3 + 0xbb) = *(byte *)((int)piVar3 + 0xbb) & 0xfe | 1;
  return;
}

// === gfx_EGG_Video_806df14c (0x806df14c) ===
void gfx_EGG_Video_806df14c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  int local_e8 [50];
  undefined4 local_20;
  uint uStack_1c;
  longlong local_18;
  
  FUN_segment_0__804b4ecc(local_e8);
  dVar3 = dRam00000000;
  local_20 = 0x43300000;
  uStack_1c = param_2 * 10 ^ 0x80000000;
  *(undefined4 *)(param_1 + 400) = param_3;
  fVar2 = (float)((double)CONCAT44(0x43300000,uStack_1c) - dVar3);
  *(float *)(param_1 + 0x188) = fVar2;
  iVar1 = (int)(*(float *)(param_1 + 0x180) + fVar2);
  local_18 = (longlong)iVar1;
  *(int *)(param_1 + 0x18c) = iVar1;
  local_e8[0] = param_2;
  gfx_nw4r_g3d_8050093c(param_1,0xfa,0x522,local_e8);
  gfx_nw4r_g3d_8050093c(param_1,0x106,*(undefined4 *)(param_1 + 400),local_e8);
  return;
}

// === gfx_EGG_Video_806df214 (0x806df214) ===
void gfx_EGG_Video_806df214(int param_1,uint param_2,undefined param_3)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  uint local_f8 [50];
  undefined4 local_30;
  uint uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  longlong local_20;
  
  local_30 = 0x43300000;
  local_28 = 0x43300000;
  FUN_segment_0__804b4ecc(local_f8);
  bVar3 = false;
  fVar2 = fRam00000138 * (float)((double)(CONCAT44(local_30,param_2) ^ 0x80000000) - dRam00000130);
  *(float *)(param_1 + 0x180) = fVar2;
  iVar1 = (int)(fVar2 + *(float *)(param_1 + 0x188));
  local_20 = (longlong)iVar1;
  *(int *)(param_1 + 0x18c) = iVar1;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar3 = true;
  }
  if (bVar3) {
    uStack_24 = param_2 ^ 0x80000000;
    if ((float)((double)(CONCAT44(local_28,param_2) ^ 0x80000000) - dRam00000130) <= fRam00000128) {
      fVar2 = fRam00000140;
      if ((float)((double)(CONCAT44(local_30,param_2) ^ 0x80000000) - dRam00000130) / fRam00000138
          <= fRam00000140) {
        fVar2 = (float)((double)(CONCAT44(local_28,param_2) ^ 0x80000000) - dRam00000130) /
                fRam00000138;
      }
    }
    else {
      fVar2 = fRam0000013c;
      if (fRam0000013c <=
          (float)((double)(CONCAT44(local_30,param_2) ^ 0x80000000) - dRam00000130) / fRam00000138)
      {
        fVar2 = (float)((double)(CONCAT44(local_28,param_2) ^ 0x80000000) - dRam00000130) /
                fRam00000138;
      }
    }
    *(float *)(param_1 + 0x184) = fVar2;
  }
  else {
    fVar2 = fRam00000140;
    if (fRam00000128 < (float)((double)(CONCAT44(local_30,param_2) ^ 0x80000000) - dRam00000130)) {
      fVar2 = fRam0000013c;
    }
    *(float *)(param_1 + 0x184) = fVar2;
  }
  uStack_2c = param_2 ^ 0x80000000;
  *(undefined *)(param_1 + 0x17c) = param_3;
  *(byte *)(param_1 + 0x17d) = (byte)((byte)(-param_2 >> 0x18) & ~(byte)(param_2 >> 0x18)) >> 7;
  local_f8[0] = param_2;
  gfx_nw4r_g3d_8050093c(param_1,0x112,0x523,local_f8);
  return;
}

// === gfx_EGG_Video_806df3d4 (0x806df3d4) ===
void gfx_EGG_Video_806df3d4(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  
  FUN_segment_0__804b4ecc(&local_cc);
  iVar1 = *(int *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_2 & 0xff) * 4) + 0x40);
  local_c8 = (uint)*(byte *)(iVar1 + 6);
  local_c4 = (uint)*(ushort *)(iVar1 + 8);
  if (*(ushort *)(iVar1 + 4) < 100) {
    local_cc = *(ushort *)(iVar1 + 4) & 0xff;
  }
  else {
    local_cc = 99;
    local_c8 = 0x3b;
    local_c4 = 999;
  }
  gfx_nw4r_g3d_8050093c(param_1,0x11c,0x578,&local_cc);
  gfx_nw4r_g3d_80500b6c(param_1,0);
  return;
}

// === gfx_EGG_Video_806df4c8 (0x806df4c8) ===
void gfx_EGG_Video_806df4c8(int param_1)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  fVar4 = fRam00000144;
  dVar3 = dRam00000130;
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0xc) + 8) == 4) {
    iVar5 = (int)*(float *)(param_1 + 0x188);
    iVar5 = iVar5 / 10 + (iVar5 >> 0x1f);
    uVar6 = iVar5 - (iVar5 >> 0x1f);
    if ((*(char *)(param_1 + 0x17d) != 0) && (fRam00000144 < *(float *)(param_1 + 0x180))) {
      fVar2 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x184);
      *(float *)(param_1 + 0x188) = fVar2;
      iVar5 = (int)fVar2;
      *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) - *(float *)(param_1 + 0x184);
      iVar7 = iVar5 / 10 + (iVar5 >> 0x1f);
      if ((float)((double)CONCAT44(0x43300000,iVar7 - (iVar7 >> 0x1f) ^ 0x80000000) - dVar3) <=
          (float)((double)CONCAT44(0x43300000,uVar6 ^ 0x80000000) - dVar3) - fVar4) {
        return;
      }
      iVar5 = iVar5 / 10 + (iVar5 >> 0x1f);
      iVar5 = (iVar5 - (iVar5 >> 0x1f)) + 1;
      if (*(char *)(param_1 + 0x17c) != 0) {
        gfx_nw4r_g3d_805003cc(param_1,0xde,0xffffffff);
      }
      iVar7 = *(int *)(param_1 + 0x18c) / 10 + (*(int *)(param_1 + 0x18c) >> 0x1f);
      iVar7 = iVar7 - (iVar7 >> 0x1f);
      iRam00000000 = iVar5;
      if (iVar7 < iVar5) {
        *(undefined4 *)(param_1 + 0x180) = uRam00000128;
        iRam00000000 = iVar7;
      }
      gfx_nw4r_g3d_8050093c(param_1,0x121,0x522,0);
      gfx_nw4r_g3d_8050093c(param_1,0x12d,*(undefined4 *)(param_1 + 400),0);
      return;
    }
    if ((*(char *)(param_1 + 0x17d) == 0) && (*(float *)(param_1 + 0x180) < fRam00000148)) {
      fVar2 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x184);
      iVar5 = (int)fVar2;
      dVar1 = (double)CONCAT44(0x43300000,uVar6 ^ 0x80000000) - dRam00000130;
      *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) - *(float *)(param_1 + 0x184);
      *(float *)(param_1 + 0x188) = fVar2;
      iVar7 = iVar5 / 10 + (iVar5 >> 0x1f);
      if ((float)((double)CONCAT44(0x43300000,iVar7 - (iVar7 >> 0x1f) ^ 0x80000000) - dVar3) <
          fVar4 + (float)dVar1) {
        iVar5 = iVar5 / 10 + (iVar5 >> 0x1f);
        iVar5 = (iVar5 - (iVar5 >> 0x1f)) + -1;
        if (*(char *)(param_1 + 0x17c) != 0) {
          gfx_nw4r_g3d_805003cc(param_1,0xde,0xffffffff);
        }
        iVar7 = *(int *)(param_1 + 0x18c) / 10 + (*(int *)(param_1 + 0x18c) >> 0x1f);
        iVar7 = iVar7 - (iVar7 >> 0x1f);
        iRam00000000 = iVar5;
        if (iVar5 < iVar7) {
          *(undefined4 *)(param_1 + 0x180) = uRam00000128;
          iRam00000000 = iVar7;
        }
        gfx_nw4r_g3d_8050093c(param_1,0x139,0x522,0);
        gfx_nw4r_g3d_8050093c(param_1,0x145,*(undefined4 *)(param_1 + 400),0);
      }
    }
  }
  return;
}

// === gfx_EGG_Video_806df79c (0x806df79c) ===
void gfx_EGG_Video_806df79c(int param_1,byte param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  if ((*(uint *)((int)g_Ram_float + 0xb90) & 2) == 0) {
    cVar2 = FUN_segment_0__80421470(g_Ram_float,param_2);
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,(int)cVar2);
  }
  else {
    iVar3 = *(int *)((int)g_Ram_float + (uint)param_2 * 0xf0 + 0xf4);
    uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
    gfx_EGG_Display_804ff59c
              ((double)g_Ram_float,uVar1,((int)~(iVar3 - 1U | 1U - iVar3) >> 0x1f) + 6);
  }
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Video_806df8a4 (0x806df8a4) ===
void gfx_EGG_Video_806df8a4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,2);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,4);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,4);
  uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,0);
  if ((*(uint *)((int)g_Ram_float + 0xb90) & 2) != 0) {
    iVar1 = *(int *)((int)g_Ram_float + (param_2 & 0xff) * 0xf0 + 0xf4);
    if (iVar1 == 1) {
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,4);
    }
    else if (iVar1 == 0) {
      uVar2 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,3);
      gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar2,3);
    }
  }
  return;
}

// === EGG_Video_assertFail_806dfa64 (0x806dfa64) ===
void EGG_Video_assertFail_806dfa64(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_validate_806dff08 (0x806dff08) ===
int EGG_Video_validate_806dff08(int param_1,int param_2)

{
  if ((param_1 != 0) && (nw4r_g3d_validate_80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Video_assertFail_806dff94 (0x806dff94) ===
void EGG_Video_assertFail_806dff94(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806e045c (0x806e045c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e045c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e0a30 (0x806e0a30) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e0a30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e0c9c (0x806e0c9c) ===
undefined4 gfx_EGG_Video_806e0c9c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 2;
  iVar3 = param_1;
  do {
    if (dRam00000000._0_4_ <
        (float)((double)CONCAT44(0x43300000,*(uint *)(iVar3 + 0x174) ^ 0x80000000) - dRam00000000) -
        *(float *)(iVar3 + 0x178)) {
      return 1;
    }
    if (dRam00000000._0_4_ <
        (float)((double)CONCAT44(0x43300000,*(uint *)(iVar3 + 0x188) ^ 0x80000000) - dRam00000000) -
        *(float *)(iVar3 + 0x18c)) {
      return 1;
    }
    if (dRam00000000._0_4_ <
        (float)((double)CONCAT44(0x43300000,*(uint *)(iVar3 + 0x19c) ^ 0x80000000) - dRam00000000) -
        *(float *)(iVar3 + 0x1a0)) {
      return 1;
    }
    iVar3 = iVar3 + 0x3c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((float)((double)CONCAT44(0x43300000,*(uint *)(param_1 + 0xb74) ^ 0x80000000) - dRam00000000) -
      *(float *)(param_1 + 0xb70) <= dRam00000000._0_4_) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xb78);
      if (iVar4 != 0) {
        bVar1 = true;
        if ((*(char *)(iVar4 + 0x198) != 0) &&
           (iVar4 = gfx_EGG_Display_804ff4a0(iVar4 + 0x98,0), *(int *)(iVar4 + 0x38) != 1)) {
          bVar1 = false;
        }
        if (bVar1) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < 6);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

// === EGG_Video_validate_806e0ee0 (0x806e0ee0) ===
void EGG_Video_validate_806e0ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_130 [40];
  undefined auStack_108 [248];
  
  *(undefined *)(param_1 + 0x198) = 0;
  *(undefined *)(param_1 + 400) = 0;
  FUN_segment_0__804ae324(auStack_108,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_130,0x28,0x148,param_3);
}

// === gfx_EGG_Video_806e1008 (0x806e1008) ===
void gfx_EGG_Video_806e1008(int param_1)

{
  undefined4 uVar1;
  
  *(undefined *)(param_1 + 0x198) = 0;
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  EGG_Video_validate_806d6edc(param_1);
  return;
}

// === gfx_EGG_Video_806e1078 (0x806e1078) ===
undefined4 gfx_EGG_Video_806e1078(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(char *)(param_1 + 0x198) != 0) &&
     (iVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,0), *(int *)(iVar1 + 0x38) != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}

// === EGG_Video_validate_806e10e4 (0x806e10e4) ===
int EGG_Video_validate_806e10e4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806e1170 (0x806e1170) ===
undefined4 * gfx_EGG_Video_806e1170(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  gfx_nw4r_g3d_80500418();
  *param_1 = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined *)((int)param_1 + 0x1a6) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined *)((int)param_1 + 0x1a2) = 0;
  *(undefined2 *)(param_1 + 0x69) = 0;
  param_1[0x6b] = ((param_2 & 0xff) * 4 - param_2) + 1;
  *(undefined *)(param_1 + 0x6d) = 0;
  *(undefined *)((int)param_1 + 0x1b5) = 0;
  *(undefined *)((int)param_1 + 0x1b6) = 1;
  param_1[0x6e] = param_3;
  return param_1;
}

// === gfx_EGG_Video_806e120c (0x806e120c) ===
void gfx_EGG_Video_806e120c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined uVar3;
  int iVar4;
  float *pfVar5;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  EGG_Video_validate_806d6edc();
  if (param_1[0x6e] - 4U < 2) {
    (**(code **)(*param_1 + 0x40))((double)g_Ram_float,param_1);
  }
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,0);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,1);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,2);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,3);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,4);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,5);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,6);
  gfx_EGG_Display_804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x26,7);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  uVar2 = FUN_segment_0__804214c8(g_Ram_float,*(undefined *)(param_1 + 0x6a));
  pfVar5 = local_48;
  iVar4 = 0;
  param_1[0x70] =
       (uint)*(byte *)(*(int *)(*(int *)((int)g_Ram_float + 0xc) + (uVar2 & 0xff) * 4) + 0x26);
  local_48[0] = g_Ram_float;
  local_48[1] = (float)uRam00000004;
  local_48[2] = (float)uRam00000008;
  local_48[3] = (float)uRam0000000c;
  local_38 = uRam00000010;
  local_34 = uRam00000014;
  local_30 = uRam00000018;
  local_2c = uRam0000001c;
  local_28 = uRam00000020;
  local_24 = uRam00000024;
  local_20 = uRam00000028;
  do {
    gfx_EGG_Video_806d6714(param_1,*pfVar5,0);
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 1;
  } while (iVar4 < 0xb);
  uVar3 = FUN_segment_0__804214c8(g_Ram_float,*(undefined *)(param_1 + 0x6a));
  *(undefined *)((int)param_1 + 0x1a9) = uVar3;
  return;
}

// === gfx_EGG_Video_806e1404 (0x806e1404) ===
undefined gfx_EGG_Video_806e1404(uint param_1)

{
  return *(undefined *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x26);
}

// === gfx_EGG_Video_806e1420 (0x806e1420) ===
undefined gfx_EGG_Video_806e1420(int param_1)

{
  undefined uVar1;
  
  uVar1 = FUN_segment_0__804214c8(uRam00000000,*(undefined *)(param_1 + 0x1a8));
  return uVar1;
}

// === gfx_EGG_Video_806e1454 (0x806e1454) ===
undefined4 gfx_EGG_Video_806e1454(void)

{
  return uRam00000000;
}

// === gfx_EGG_Video_806e1460 (0x806e1460) ===
void gfx_EGG_Video_806e1460(int *param_1)

{
  char cVar3;
  int iVar1;
  uint uVar2;
  undefined uVar4;
  byte local_38;
  char local_37;
  short local_36;
  undefined auStack_34 [12];
  undefined auStack_28 [12];
  undefined auStack_1c [20];
  
  cVar3 = gfx_EGG_Video_806e1420();
  if (*(char *)((int)param_1 + 0x1a9) != cVar3) {
    *(char *)((int)param_1 + 0x1a9) = cVar3;
    *(undefined *)((int)param_1 + 0x1b6) = 0;
  }
  gfx_EGG_Video_806e1814(param_1);
  iVar1 = gfx_EGG_Video_806e180c();
  if (iVar1 != 0x2d) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  gfx_EGG_Video_806e1828();
  iVar1 = gfx_EGG_Video_806e1820();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = gfx_EGG_Video_806e1838();
  if ((iVar1 - 0x6aU < 2) || (iVar1 - 0x6eU < 2)) {
    gfx_EGG_Video_806e184c(param_1 + 0x67);
    gfx_EGG_Video_806e1de0(param_1);
    EGG_Video_assertFail_806e1a60(param_1,param_1 + 0x67);
    return;
  }
  if (param_1[0x6e] == 3) {
    iVar1 = param_1[0x6f];
    param_1[0x6f] = iVar1 + 1;
    if (iVar1 < 0xb4) {
      return;
    }
    param_1[0x6e] = 0;
    gfx_EGG_Video_806e1de0(param_1);
    return;
  }
  if (param_1[0x6e] == 1) {
    iVar1 = param_1[0x6f];
    param_1[0x6f] = iVar1 + 1;
    if (iVar1 < 0xb4) {
      return;
    }
    param_1[0x6e] = 0;
    gfx_EGG_Video_806e1de0(param_1);
    return;
  }
  iVar1 = gfx_EGG_Video_806e185c(cVar3);
  if (iVar1 == 0) {
    uVar2 = gfx_EGG_Video_806e1404(cVar3);
    if (param_1[0x70] != (uVar2 & 0xff)) {
      param_1[0x6e] = 3;
      param_1[0x6f] = 0;
      uVar4 = gfx_EGG_Video_806e1420(param_1);
      gfx_EGG_Video_806e187c(uVar4,param_1[0x70] & 0xff,param_1 + 0x67);
      EGG_Video_assertFail_806e1a60(param_1,param_1 + 0x67);
      gfx_EGG_Video_806e1e18(param_1);
      uVar2 = gfx_EGG_Video_806e1404(cVar3);
      param_1[0x70] = uVar2 & 0xff;
      return;
    }
    gfx_EGG_Video_806e184c(param_1 + 0x67);
    *(undefined *)((int)param_1 + 0x1b6) = 0;
    EGG_Video_assertFail_806e1a60(param_1,param_1 + 0x67);
    gfx_EGG_Video_806e1454();
    iVar1 = gfx_EGG_Video_806e1894();
    if (iVar1 == 0) {
      return;
    }
    gfx_EGG_Video_806e18c0(param_1 + 0x67,&local_37,&local_38,&local_36);
    iVar1 = gfx_EGG_Video_806e1900(param_1 + 0x67);
    if (iVar1 != 0) {
      gfx_EGG_Video_806e1920(auStack_1c,0,0,0);
      EGG_Video_assertFail_806e1a60(param_1,auStack_1c);
      FUN_segment_0__8040bf60(auStack_1c,0xffffffff);
      return;
    }
    if ((*(char *)(param_1 + 0x6d) == 0) && (local_37 == 0)) {
      gfx_EGG_Video_806e1920(auStack_28,1,0,0);
      EGG_Video_assertFail_806e1a60(param_1,auStack_28);
      FUN_segment_0__8040bf60(auStack_28,0xffffffff);
      *(undefined *)(param_1 + 0x6d) = 1;
      param_1[0x6e] = 1;
      gfx_EGG_Video_806e1e18(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x1b5) != 0) {
      return;
    }
    if (local_37 != 0) {
      return;
    }
    if (9 < local_38) {
      if (local_38 != 10) {
        return;
      }
      if (local_36 != 0) {
        return;
      }
    }
    *(undefined *)((int)param_1 + 0x1b5) = 1;
    gfx_EGG_Video_806e1e18(param_1);
    return;
  }
  if (*(char *)((int)param_1 + 0x1b6) != 0) {
    return;
  }
  gfx_EGG_Video_806e1454();
  iVar1 = gfx_EGG_Video_806e1944();
  if (iVar1 == 0) {
    gfx_EGG_Video_806e1454();
    iVar1 = gfx_EGG_Video_806e1964();
    if (iVar1 == 0) {
      gfx_EGG_Video_806e1454();
      iVar1 = gfx_EGG_Video_806e1894();
      if (iVar1 == 0) {
        uVar4 = gfx_EGG_Video_806e1420(param_1);
        iVar1 = gfx_EGG_Video_806e1970(uVar4);
        if (iVar1 != 0) goto LAB_segment_0__806e1764;
      }
    }
    gfx_EGG_Video_806e1454();
    iVar1 = gfx_EGG_Video_806e1894();
    if (iVar1 == 0) {
      uVar4 = gfx_EGG_Video_806e1420(param_1);
      gfx_EGG_Video_806e1990(uVar4,param_1 + 0x67);
      *(undefined *)((int)param_1 + 0x1b6) = 1;
      EGG_Video_assertFail_806e1a60(param_1,param_1 + 0x67);
    }
    else {
      *(undefined *)((int)param_1 + 0x1b6) = 1;
      gfx_EGG_Video_806e1920(auStack_34,0,0,0);
      EGG_Video_assertFail_806e1a60(param_1,auStack_34);
      FUN_segment_0__8040bf60(auStack_34,0xffffffff);
    }
  }
  else {
LAB_segment_0__806e1764:
    gfx_EGG_Video_806e184c(param_1 + 0x67);
    *(undefined *)((int)param_1 + 0x1b6) = 1;
    EGG_Video_assertFail_806e1a60(param_1,param_1 + 0x67);
  }
  return;
}

// === gfx_EGG_Video_806e180c (0x806e180c) ===
undefined4 gfx_EGG_Video_806e180c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// === gfx_EGG_Video_806e1814 (0x806e1814) ===
undefined4 gfx_EGG_Video_806e1814(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 100) + 0xc);
}

// === gfx_EGG_Video_806e1820 (0x806e1820) ===
undefined gfx_EGG_Video_806e1820(int param_1)

{
  return *(undefined *)(param_1 + 0x38b);
}

// === gfx_EGG_Video_806e1828 (0x806e1828) ===
undefined4 gfx_EGG_Video_806e1828(void)

{
  return *g_Ram_uint;
}

// === gfx_EGG_Video_806e1838 (0x806e1838) ===
undefined4 gfx_EGG_Video_806e1838(void)

{
  return *(undefined4 *)*g_Ram_uint;
}

// === gfx_EGG_Video_806e184c (0x806e184c) ===
void gfx_EGG_Video_806e184c(undefined4 param_1)

{
  FUN_segment_0__804251f8(uRam00000000,param_1);
  return;
}

// === gfx_EGG_Video_806e185c (0x806e185c) ===
uint gfx_EGG_Video_806e185c(uint param_1)

{
  return *(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x38) >> 1 & 1;
}

// === gfx_EGG_Video_806e187c (0x806e187c) ===
void gfx_EGG_Video_806e187c(uint param_1)

{
  FUN_segment_0__80424c84(*(undefined4 *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4));
  return;
}

// === gfx_EGG_Video_806e1894 (0x806e1894) ===
undefined4 gfx_EGG_Video_806e1894(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xb70) - 3;
  if (7 < uVar1) {
    return 0;
  }
  if ((1 << (uVar1 & 0x3f) & 0xc1U) == 0) {
    return 0;
  }
  return 1;
}

// === gfx_EGG_Video_806e18c0 (0x806e18c0) ===
void gfx_EGG_Video_806e18c0(int param_1,undefined *param_2,undefined *param_3,undefined2 *param_4)

{
  if (99 < *(ushort *)(param_1 + 4)) {
    *param_2 = 99;
    *param_3 = 0x3b;
    *param_4 = 999;
    return;
  }
  *param_2 = (char)*(ushort *)(param_1 + 4);
  *param_3 = *(undefined *)(param_1 + 6);
  *param_4 = *(undefined2 *)(param_1 + 8);
  return;
}

// === gfx_EGG_Video_806e1900 (0x806e1900) ===
uint gfx_EGG_Video_806e1900(int param_1)

{
  return (*(ushort *)(param_1 + 4) | 0xfffffc18) - (*(ushort *)(param_1 + 4) - 999 >> 1) >> 0x1f;
}

// === gfx_EGG_Video_806e1920 (0x806e1920) ===
void gfx_EGG_Video_806e1920
               (undefined4 *param_1,undefined2 param_2,undefined param_3,undefined2 param_4)

{
  *param_1 = 0;
  *(undefined *)((int)param_1 + 10) = 1;
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined *)((int)param_1 + 6) = param_3;
  *(undefined2 *)(param_1 + 2) = param_4;
  return;
}

// === gfx_EGG_Video_806e1944 (0x806e1944) ===
undefined4 gfx_EGG_Video_806e1944(int param_1)

{
  if (*(int *)(param_1 + 0xb70) == 7) {
    return 1;
  }
  if (*(int *)(param_1 + 0xb70) == 8) {
    return 1;
  }
  return 0;
}

// === gfx_EGG_Video_806e1964 (0x806e1964) ===
uint gfx_EGG_Video_806e1964(int param_1)

{
  return *(uint *)(param_1 + 0xb90) >> 2 & 1;
}

// === gfx_EGG_Video_806e1970 (0x806e1970) ===
uint gfx_EGG_Video_806e1970(uint param_1)

{
  return *(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x38) >> 6 & 1;
}

// === gfx_EGG_Video_806e1990 (0x806e1990) ===
void gfx_EGG_Video_806e1990(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (param_1 & 0xff) * 4) + 0x40);
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar1 + 4);
  *(undefined *)(param_2 + 6) = *(undefined *)(iVar1 + 6);
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(iVar1 + 8);
  *(undefined *)(param_2 + 10) = *(undefined *)(iVar1 + 10);
  return;
}

// === gfx_EGG_Video_806e19cc (0x806e19cc) ===
void gfx_EGG_Video_806e19cc(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack_98 [36];
  undefined4 uStack_74;
  undefined4 local_70 [27];
  
  *(undefined *)(param_1 + 400) = param_3;
  FUN_segment_0__804ae324(auStack_98,param_1);
  puVar4 = &uStack_74;
  puVar3 = (undefined4 *)0xfffffffc;
  iVar5 = 0xd;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_segment_0__804ae36c(auStack_98,0xd,0x18,param_2,local_70);
  FUN_segment_0__804ae32c(auStack_98,0xffffffff);
  return;
}

// === EGG_Video_assertFail_806e1a60 (0x806e1a60) ===
void EGG_Video_assertFail_806e1a60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806e1d08 (0x806e1d08) ===
void gfx_EGG_Video_806e1d08(double param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (*(int *)(param_2 + 0x1b8) == 4) {
    if ((double)fRam0000008c < param_1) {
      fVar1 = fRam00000218 + (float)(param_1 * (double)(fRam0000021c - fRam00000218));
    }
    else {
      fVar1 = (float)((double)fRam0000021c + param_1) * fRam00000218;
    }
    gfx_EGG_Display_804ffe14((double)fVar1,param_2,param_3);
    *(undefined4 *)(param_3 + 8) = uRam00000220;
  }
  else if (*(int *)(param_2 + 0x1b8) == 5) {
    gfx_EGG_Display_804ffe14();
    *(undefined4 *)(param_3 + 8) = uRam00000220;
  }
  else {
    if ((*(int *)(iRam00000000 + 0xb70) == 2) && ((double)fRam0000008c <= param_1)) {
      param_1 = (double)fRam0000008c;
    }
    gfx_EGG_Display_804ffe14(param_1,param_2,param_3);
  }
  return;
}

// === gfx_EGG_Video_806e1de0 (0x806e1de0) ===
void gfx_EGG_Video_806e1de0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,7);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === gfx_EGG_Video_806e1e18 (0x806e1e18) ===
void gfx_EGG_Video_806e1e18(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = gfx_EGG_Display_804ff4a0(param_1 + 0x98,7);
  gfx_EGG_Display_804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === EGG_Video_validate_806e1eac (0x806e1eac) ===
int EGG_Video_validate_806e1eac(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      nw4r_g3d_validate_80500540(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806e1f28 (0x806e1f28) ===
void EGG_Video_validate_806e1f28(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  short *psVar2;
  
  *param_1 = 0;
  psVar2 = (short *)FUN_segment_0__8042fd60(uRam00000000,0,param_2,0);
  param_1[1] = psVar2;
  sVar1 = *psVar2;
  *(short *)(param_1 + 2) = sVar1;
  param_1[1] = psVar2 + 1;
  *(short *)((int)param_1 + 10) = psVar2[1];
  param_1[1] = psVar2 + 2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((int)sVar1 << 2);
}

// === EGG_Video_validate_806e1ff8 (0x806e1ff8) ===
int EGG_Video_validate_806e1ff8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e2038 (0x806e2038) ===
undefined4 * gfx_EGG_Video_806e2038(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar3 = uRam00000010;
  uVar2 = uRam0000000c;
  uVar1 = uRam00000008;
  *param_1 = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  return param_1;
}

// === EGG_Video_assertFail_806e20a4 (0x806e20a4) ===
void EGG_Video_assertFail_806e20a4(void)

{
  undefined auStack_34 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_34,10,0,2);
}

// === gfx_EGG_Video_806e2164 (0x806e2164) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e2164(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e23f0 (0x806e23f0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e23f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e24dc (0x806e24dc) ===
double gfx_EGG_Video_806e24dc(undefined4 param_1,uint param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)fRam00000024;
  fVar1 = ((float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000040) / fRam00000018
          - fRam0000001c) / fRam00000018;
  dVar3 = (double)(fRam00000020 + fVar1 * fVar1);
  if (dVar3 < dVar2) {
    dVar2 = dVar3;
  }
  return dVar2;
}

// === gfx_EGG_Video_806e2540 (0x806e2540) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e2540(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e281c (0x806e281c) ===
void gfx_EGG_Video_806e281c(int param_1,uint *param_2,undefined4 param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  FUN_segment_0__80404498(&local_18,param_3,param_1 + 0x30);
  param_2[2] = local_18;
  param_2[3] = local_14;
  param_2[4] = local_10;
  *param_2 = *param_2 | 0x40;
  return;
}

// === gfx_EGG_Video_806e287c (0x806e287c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e287c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e2ad0 (0x806e2ad0) ===
void gfx_EGG_Video_806e2ad0(int *param_1)

{
  undefined local_18 [4];
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_10[0] = (**(code **)(*param_1 + 0x38))();
  local_14 = uRam00000004;
  local_18[0] = 0;
  FUN_segment_0__80701444(param_1,local_10,&local_14,1,local_18);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam00000020,*(undefined4 *)(param_1[2] + 0x28),0);
  return;
}

// === EGG_Video_validate_806e2b70 (0x806e2b70) ===
int EGG_Video_validate_806e2b70(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e2bb0 (0x806e2bb0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e2bb0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e2d90 (0x806e2d90) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e2d90(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e2fa0 (0x806e2fa0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e2fa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e334c (0x806e334c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e334c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e3728 (0x806e3728) ===
undefined4 * gfx_EGG_Video_806e3728(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar1 = uRam00000000;
  *param_1 = 0;
  param_1[0x2b] = uVar1;
  return param_1;
}

// === EGG_Video_assertFail_806e3774 (0x806e3774) ===
void EGG_Video_assertFail_806e3774(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806e3a58 (0x806e3a58) ===
undefined4 * gfx_EGG_Video_806e3a58(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar1 = uRam00000004;
  *param_1 = 0;
  uVar2 = uRam00000010;
  param_1[0x2b] = uVar1;
  uVar1 = uRam0000000c;
  *param_1 = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar2;
  return param_1;
}

// === EGG_Video_validate_806e3acc (0x806e3acc) ===
int EGG_Video_validate_806e3acc(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e3b0c (0x806e3b0c) ===
void gfx_EGG_Video_806e3b0c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined auStack_18 [16];
  
  uVar1 = uRam00000000;
  if (param_3 == 3) {
    FUN_segment_0__80404400(auStack_18,0);
    FUN_segment_0__8040443c((double)*(float *)(param_2 + 0xac),param_1,auStack_18);
  }
  else if (param_3 == 2) {
    FUN_segment_0__8040443c((double)*(float *)(param_2 + 0xac),param_1,0);
  }
  else {
    param_1[1] = uRam00000004;
    *param_1 = uVar1;
    param_1[2] = uRam00000008;
  }
  return;
}

// === gfx_EGG_Video_806e3c44 (0x806e3c44) ===
undefined4 * gfx_EGG_Video_806e3c44(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar1 = uRam00000004;
  *param_1 = 0;
  uVar2 = uRam0000001c;
  param_1[0x2b] = uVar1;
  uVar1 = uRam00000018;
  *param_1 = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar2;
  return param_1;
}

// === gfx_EGG_Video_806e3cb8 (0x806e3cb8) ===
void gfx_EGG_Video_806e3cb8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined auStack_18 [16];
  
  uVar1 = uRam00000000;
  if (param_3 == 1) {
    FUN_segment_0__8040443c((double)*(float *)(param_2 + 0xac),param_1,0);
  }
  else if (param_3 == 0) {
    FUN_segment_0__80404400(auStack_18,0);
    FUN_segment_0__8040443c((double)*(float *)(param_2 + 0xac),param_1,auStack_18);
  }
  else {
    param_1[1] = uRam00000004;
    *param_1 = uVar1;
    param_1[2] = uRam00000008;
  }
  return;
}

// === EGG_Video_validate_806e3dec (0x806e3dec) ===
void EGG_Video_validate_806e3dec(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar1 = uRam00000004;
  *param_1 = 0;
  local_28 = uRam00000000;
  param_1[0x2b] = uVar1;
  local_24 = uRam00000024;
  *param_1 = 0;
  *(bool *)(param_1 + 0x2d) = *(short *)(*param_2 + 0x2c) == 1;
  param_1[0x2e] = *(short *)(*param_2 + 0x2e) * 0x3c;
  param_1[0x2f] = *(short *)(*param_2 + 0x30) * 0x3c;
  local_20 = local_28;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x32,&local_28);
}

// === EGG_Video_validate_806e3eb4 (0x806e3eb4) ===
void EGG_Video_validate_806e3eb4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined auStack_44 [12];
  undefined4 local_38;
  undefined4 local_30;
  
  local_38 = 0x43300000;
  local_30 = 0x43300000;
  FUN_segment_0__80404498(auStack_50,param_4,param_2 + 0x30);
  local_4c = uRam00000000;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 200,auStack_50,auStack_44);
}

// === EGG_Video_assertFail_806e41dc (0x806e41dc) ===
void EGG_Video_assertFail_806e41dc(void)

{
  FUN_segment_0__80700278();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === gfx_EGG_Video_806e42c8 (0x806e42c8) ===
void gfx_EGG_Video_806e42c8(int param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [4];
  
  if (*(char *)((int)g_Ram_float + 0x25) == '\x01') {
    local_1c[0] = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,local_1c,0x34,2,0,0,9,0);
    local_20 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc0),0,&local_20,0x3f,2,0,0,9,0);
    local_24 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc4),0,&local_24,0x4a,2,0,0,9,0);
  }
  else {
    local_28 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,&local_28,0x55,2,0,0,9,0);
    local_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc0),0,&local_2c,100,2,0,0,9,0);
    local_30 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc4),0,&local_30,0x73,2,0,0,9,0);
  }
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,
             *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x28),0);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,
             *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x28),0);
  if (*(char *)((int)g_Ram_float + 0x25) == '\x01') {
    local_34 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc0),1,&local_34,0x82,1,0,0,9,0);
    local_38 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc4),1,&local_38,0x8b,1,0,0,9,0);
  }
  else {
    local_3c = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc0),1,&local_3c,0x94,1,0,0,9,0);
    local_40 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0xc4),1,&local_40,0xa0,1,0,0,9,0);
  }
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,
             *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x28),1);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,
             *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x28),1);
  return;
}

// === EGG_Video_validate_806e45c8 (0x806e45c8) ===
void EGG_Video_validate_806e45c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_segment_0__80702028();
  FUN_segment_0__80701bcc(param_1);
  iVar1 = *(int *)(param_1 + 0xc0);
  iVar2 = 0;
  do {
    if (**(int **)(iVar1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(**(int **)(iVar1 + 0x14),0,param_1 + 0x58);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  FUN_segment_0__80701bcc(param_1);
  iVar1 = *(int *)(param_1 + 0xc4);
  iVar2 = 0;
  do {
    if (**(int **)(iVar1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(**(int **)(iVar1 + 0x14),0,param_1 + 0x58);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  return;
}

// === gfx_EGG_Video_806e4694 (0x806e4694) ===
void gfx_EGG_Video_806e4694(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)g_Ram_float + 0x20);
  if (param_1[0x2e] < (int)uVar2) {
    if (param_1[0x2f] < (int)uVar2) {
      cVar1 = *(char *)(param_1 + 0x2d);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x2d) == 0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x2d);
  }
  if (cVar1 == 0) {
    (**(code **)(*(int *)param_1[0x30] + 0xc))((int *)param_1[0x30],0);
    (**(code **)(*(int *)param_1[0x31] + 0xc))((int *)param_1[0x31],1);
  }
  else {
    (**(code **)(*(int *)param_1[0x30] + 0xc))((int *)param_1[0x30],1);
    (**(code **)(*(int *)param_1[0x31] + 0xc))((int *)param_1[0x31],0);
  }
  if ((float)((double)CONCAT44(0x43300000,uVar2) - (double)CONCAT44(g_Ram_float,uRam00000004)) ==
      (float)((double)CONCAT44(0x43300000,param_1[0x2e] ^ 0x80000000) -
             (double)CONCAT44(g_Ram_float,uRam00000004)) - g_Ram_float) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x29e);
  }
  else if (uVar2 == param_1[0x2e]) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x29d);
  }
  else if ((float)((double)CONCAT44(0x43300000,uVar2) - (double)CONCAT44(g_Ram_float,uRam00000004))
           == (float)((double)CONCAT44(0x43300000,param_1[0x2f] ^ 0x80000000) -
                     (double)CONCAT44(g_Ram_float,uRam00000004)) - g_Ram_float) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x29e);
  }
  else if (uVar2 == param_1[0x2f]) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x29d);
  }
  (**(code **)(*param_1 + 300))(param_1);
  return;
}

// === gfx_EGG_Video_806e486c (0x806e486c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e486c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e4a80 (0x806e4a80) ===
double gfx_EGG_Video_806e4a80(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  
  uVar1 = (uint)ABS((float)((double)CONCAT44(0x43300000,
                                             param_2 - *(int *)(param_1 + 0xb8) ^ 0x80000000) -
                           dRam00000000));
  uVar3 = (uint)ABS((float)((double)CONCAT44(0x43300000,
                                             param_2 - *(int *)(param_1 + 0xbc) ^ 0x80000000) -
                           dRam00000000));
  if ((int)uVar1 < (int)uVar3) {
    uVar3 = uVar1;
  }
  fVar2 = dRam00000000._0_4_;
  if ((float)((double)CONCAT44(0x43300000,uVar3 ^ 0x80000000) - dRam00000000) <= dRam00000000._0_4_)
  {
    fVar2 = (dRam00000000._0_4_ *
            (float)((double)CONCAT44(0x43300000,uVar3 ^ 0x80000000) - dRam00000000)) /
            dRam00000000._0_4_;
  }
  return (double)fVar2;
}

// === EGG_Video_validate_806e4c9c (0x806e4c9c) ===
int EGG_Video_validate_806e4c9c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e4cec (0x806e4cec) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e4cec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e4d40 (0x806e4d40) ===
void gfx_EGG_Video_806e4d40(int *param_1)

{
  FUN_segment_0__80700cb8();
  (**(code **)(*param_1 + 300))(param_1);
  return;
}

// === EGG_Video_validate_806e4d88 (0x806e4d88) ===
int EGG_Video_validate_806e4d88(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806e4dd0 (0x806e4dd0) ===
int EGG_Video_validate_806e4dd0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806e4e18 (0x806e4e18) ===
void EGG_Video_validate_806e4e18(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  int local_20;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x42] = param_1[0xc];
  param_1[0x43] = param_1[0xd];
  param_1[0x44] = param_1[0xe];
  param_1[0x45] = param_1[0xf];
  param_1[0x46] = param_1[0x10];
  param_1[0x47] = param_1[0x11];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
  param_1[0x48] = param_1[0x12];
  param_1[0x49] = param_1[0x13];
  param_1[0x4a] = param_1[0x14];
  *(short *)(param_1 + 0x4e) = (short)((int)*(short *)(*param_2 + 0x30) << 1);
  *(undefined2 *)((int)param_1 + 0x13a) = 0;
  *(undefined2 *)(param_1 + 0x4f) = *(undefined2 *)(*param_2 + 0x2e);
  *(undefined2 *)((int)param_1 + 0x13e) = *(undefined2 *)(*param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x51) = *(undefined2 *)(*param_2 + 0x2c);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar1,0);
}

// === gfx_EGG_Video_806e4fc4 (0x806e4fc4) ===
void gfx_EGG_Video_806e4fc4(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [4];
  
  if (*(char *)((int)g_Ram_float + 0x25) == '\x01') {
    if (*(char *)(param_1 + 0x146) == 0) {
      local_18 = *(undefined4 *)(param_1 + 0x14);
      FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,&local_18,0x1c,2,0,0,9,0);
    }
    else {
      local_14[0] = *(undefined4 *)(param_1 + 0x14);
      FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,local_14,0xf,2,0,0,9,0);
    }
  }
  else if (*(char *)(param_1 + 0x146) == 0) {
    local_20 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,&local_20,0x3a,2,0,0,9,0);
  }
  else {
    local_1c = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 8),0,&local_1c,0x29,2,0,0,9,0);
  }
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0);
  return;
}

// === gfx_EGG_Video_806e5130 (0x806e5130) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e5130(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806e533c (0x806e533c) ===
void EGG_Video_validate_806e533c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)*(short *)(param_1 + 0x140);
  iVar1 = (int)*(short *)(param_1 + 0x13e);
  iVar2 = (int)*(short *)(param_1 + 0x142);
  uVar4 = param_2 - (param_2 / iVar3) * iVar3;
  if ((int)uVar4 < iVar2 - iVar1) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else if (((int)uVar4 < iVar2 - iVar1) || (iVar2 <= (int)uVar4)) {
    if (((int)uVar4 < iVar2) || (iVar3 - iVar1 <= (int)uVar4)) {
      *(undefined4 *)(param_1 + 0x104) = 3;
      uVar4 = (uint)*(short *)(param_1 + 0x13c);
    }
    else {
      *(undefined4 *)(param_1 + 0x104) = 2;
      uVar4 = uVar4 - iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = 1;
    uVar4 = (int)*(short *)(param_1 + 0x13c) / 2;
  }
  if (uVar4 != 1) {
    if (uVar4 != (int)*(short *)(param_1 + 0x13c) / 2 + 1U) goto LAB_segment_0__806e5420;
  }
  FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x2a2);
LAB_segment_0__806e5420:
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(*(float *)(param_1 + 0x148) *
                     (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dRam00000008)));
}

// === gfx_EGG_Video_806e551c (0x806e551c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e551c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e57ac (0x806e57ac) ===
void gfx_EGG_Video_806e57ac
               (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  (**(code **)(*param_2 + 0x124))(param_2,param_8);
  FUN_segment_0__806abea0(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  return;
}

// === EGG_Video_validate_806e5844 (0x806e5844) ===
void EGG_Video_validate_806e5844(int param_1)

{
  undefined auStack_38 [52];
  
  FUN_segment_0__80701bcc();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x58,auStack_38);
}

// === gfx_EGG_Video_806e59dc (0x806e59dc) ===
double gfx_EGG_Video_806e59dc(int param_1)

{
  return (double)(float)((double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x144) ^ 0x80000000)
                        - dRam00000000);
}

// === EGG_Video_validate_806e5a14 (0x806e5a14) ===
void EGG_Video_validate_806e5a14(int param_1,int param_2)

{
  double dVar1;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *(float *)(param_1 + 0x108);
  local_14 = *(undefined4 *)(param_1 + 0x10c);
  local_10 = *(undefined4 *)(param_1 + 0x110);
  if (*(char *)(param_1 + 0x146) == 0) {
    dVar1 = (double)EGG_Video_validate_806e533c
                              (param_1,((int)*(short *)(param_1 + 0x138) +
                                       *(int *)(iRam00000000 + 0x20)) - param_2);
    dVar1 = (double)local_18 - dVar1;
  }
  else {
    dVar1 = (double)EGG_Video_validate_806e533c
                              (param_1,((int)*(short *)(param_1 + 0x138) +
                                       *(int *)(iRam00000000 + 0x20)) - param_2);
    dVar1 = (double)local_18 + dVar1;
  }
  local_18 = (float)dVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x17c,param_1 + 0x120,&local_18);
}

// === EGG_Video_validate_806e5ad0 (0x806e5ad0) ===
int EGG_Video_validate_806e5ad0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e5b38 (0x806e5b38) ===
undefined4 * gfx_EGG_Video_806e5b38(undefined4 *param_1,int *param_2)

{
  short sVar1;
  double dVar2;
  float fVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x41] = param_1[0xc];
  param_1[0x42] = param_1[0xd];
  param_1[0x43] = param_1[0xe];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
  param_1[0x44] = param_1[0x12];
  param_1[0x45] = param_1[0x13];
  param_1[0x46] = param_1[0x14];
  param_1[0x47] = param_1[0xf];
  param_1[0x48] = param_1[0x10];
  param_1[0x49] = param_1[0x11];
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(*param_2 + 0x30);
  *(undefined2 *)((int)param_1 + 0x12a) = 0;
  sVar1 = *(short *)(*param_2 + 0x2c);
  *(short *)(param_1 + 0x4b) = sVar1;
  *(undefined2 *)((int)param_1 + 0x12e) = *(undefined2 *)(*param_2 + 0x32);
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(*param_2 + 0x2e);
  *(undefined2 *)((int)param_1 + 0x132) = *(undefined2 *)(*param_2 + 0x34);
  if (sVar1 < 2) {
    *(undefined2 *)(param_1 + 0x4b) = 2;
  }
  if (*(short *)((int)param_1 + 0x12e) < 2) {
    *(undefined2 *)((int)param_1 + 0x12e) = 2;
  }
  fVar3 = g_Ram_float;
  dVar2 = (double)CONCAT44(g_Ram_float,uRam00000004);
  param_1[0x4d] =
       g_Ram_float /
       (float)((double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x4b) ^ 0x80000000) - dVar2);
  param_1[0x4e] =
       fVar3 / (float)((double)CONCAT44(0x43300000,
                                        (int)*(short *)((int)param_1 + 0x12e) ^ 0x80000000) - dVar2)
  ;
  return param_1;
}

// === EGG_Video_validate_806e5ccc (0x806e5ccc) ===
void EGG_Video_validate_806e5ccc(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(*(float *)(param_1 + 0x134) *
                     (float)((double)CONCAT44(0x43300000,
                                              (int)*(short *)(param_1 + 0x128) ^ 0x80000000) -
                            dRam00000000)));
}

// === gfx_EGG_Video_806e5f40 (0x806e5f40) ===
void gfx_EGG_Video_806e5f40(int param_1,uint *param_2,undefined4 param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  FUN_segment_0__80404498(&local_18,param_3,param_1 + 0x30);
  param_2[2] = local_18;
  param_2[3] = local_14;
  param_2[4] = local_10;
  *param_2 = *param_2 | 0x20;
  return;
}

// === gfx_EGG_Video_806e5fa0 (0x806e5fa0) ===
int gfx_EGG_Video_806e5fa0(int param_1)

{
  FUN_segment_0__80701bcc();
  return param_1 + 0x58;
}

// === gfx_EGG_Video_806e5fd0 (0x806e5fd0) ===
double gfx_EGG_Video_806e5fd0(int param_1)

{
  return (double)(float)((double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x130) ^ 0x80000000)
                        - dRam00000000);
}

// === EGG_Video_validate_806e6008 (0x806e6008) ===
int EGG_Video_validate_806e6008(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806e6048 (0x806e6048) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EGG_Video_validate_806e6048(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined2 uVar5;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined auStack_50 [48];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  
  local_20 = 0x43300000;
  local_18 = 0x43300000;
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  uVar5 = FUN_segment_0__8070c704(*(undefined4 *)(iRam00000000 + 4),0);
  *(undefined2 *)(param_1 + 0x41) = uVar5;
  param_1[0x42] = param_1[0xc];
  param_1[0x43] = param_1[0xd];
  param_1[0x44] = param_1[0xe];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_78,param_1 + 0x16);
    param_1[0x12] = local_78;
    param_1[0x13] = local_74;
    param_1[0x14] = local_70;
  }
  iVar1 = iRam00000000;
  uVar2 = 1;
  param_1[0x45] = param_1[0x12];
  param_1[0x46] = param_1[0x13];
  param_1[0x47] = param_1[0x14];
  param_1[0x48] = iVar1;
  param_1[0x5c] = *(short *)(*param_2 + 0x2e) * 0x3c;
  param_1[0x5d] = *(short *)(*param_2 + 0x32) * 0x3c;
  if (param_3 != 0) {
    uVar2 = 0xffffffff;
  }
  uVar3 = 1;
  param_1[0x5e] =
       (float)((double)(CONCAT44(local_20,uVar2) ^ 0x80000000) - dRam00000048) *
       ((_DAT_00000030 *
        (float)((double)(CONCAT44(local_18,(int)*(short *)(*param_2 + 0x2c)) ^ 0x80000000) -
               dRam00000048)) / _DAT_00000034);
  if (param_3 != 0) {
    uVar3 = 0xffffffff;
  }
  uVar4 = 1;
  param_1[0x5f] =
       (float)((double)(CONCAT44(local_20,uVar3) ^ 0x80000000) - dRam00000048) *
       ((_DAT_00000030 *
        (float)((double)(CONCAT44(local_18,(int)*(short *)(*param_2 + 0x30)) ^ 0x80000000) -
               dRam00000048)) / _DAT_00000034);
  if (param_3 != 0) {
    uVar4 = 0xffffffff;
  }
  uStack_14 = (int)*(short *)(*param_2 + 0x34) ^ 0x80000000;
  uStack_1c = uVar4 ^ 0x80000000;
  param_1[0x60] =
       (float)((double)(CONCAT44(local_20,uVar4) ^ 0x80000000) - dRam00000048) *
       ((_DAT_00000030 *
        (float)((double)(CONCAT44(local_18,(int)*(short *)(*param_2 + 0x34)) ^ 0x80000000) -
               dRam00000048)) / _DAT_00000034);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,param_1 + 0x45);
}

// === EGG_Video_assertFail_806e62fc (0x806e62fc) ===
void EGG_Video_assertFail_806e62fc(void)

{
  FUN_segment_0__80700278();
  if (*(char *)(iRam00000000 + 0x25) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x4c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x4c);
}

// === EGG_Video_validate_806e6628 (0x806e6628) ===
void EGG_Video_validate_806e6628(int param_1)

{
  int iVar1;
  undefined auStack_11c [12];
  undefined auStack_110 [208];
  undefined auStack_40 [48];
  
  FUN_segment_0__80702028();
  FUN_segment_0__804086e4((double)fRam00000050,auStack_110,param_1 + 0x134);
  FUN_segment_0__80404464(auStack_11c,param_1 + 0x30,auStack_110);
  iVar1 = **(int **)(*(int *)(param_1 + 0x124) + 0x10);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1 + 0xc,auStack_40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_40);
}

// === EGG_Video_validate_806e6d00 (0x806e6d00) ===
void EGG_Video_validate_806e6d00(int param_1)

{
  undefined auStack_48 [60];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48,param_1 + 0x114,param_1 + 0x108);
}

// === gfx_EGG_Video_806e6e24 (0x806e6e24) ===
void gfx_EGG_Video_806e6e24(int *param_1)

{
  int iVar1;
  double dVar2;
  int local_38;
  int local_34;
  int local_30;
  undefined auStack_2c [12];
  undefined auStack_20 [24];
  
  iVar1 = *(int *)((int)g_Ram_float + 0x20);
  gfx_EGG_Video_806e74e4(param_1,iVar1);
  FUN_segment_0__804086e4(auStack_20,param_1 + 0x4d);
  (**(code **)(*param_1 + 0x128))(param_1,auStack_20);
  dVar2 = (double)gfx_EGG_Video_806e6fe4(param_1,iVar1);
  param_1[0x48] = (int)(float)dVar2;
  FUN_segment_0__8040443c((double)(float)dVar2,auStack_2c,param_1 + 0x4d);
  FUN_segment_0__80404464(&local_38,param_1 + 0x42,auStack_2c);
  param_1[0xc] = local_38;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  param_1[0xd] = local_34;
  param_1[0xe] = local_30;
  if (iVar1 == param_1[0x5c]) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x2a9);
  }
  else if (iVar1 == param_1[0x5d]) {
    FUN_segment_0__80700a88((double)g_Ram_float,param_1,0x2a9);
  }
  FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x2aa);
  return;
}

// === EGG_Video_validate_806e6f38 (0x806e6f38) ===
void EGG_Video_validate_806e6f38(int param_1,int param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_2c [12];
  undefined auStack_20 [28];
  
  gfx_EGG_Video_806e6fe4(param_1,*(int *)(iRam00000000 + 0x20) - param_2);
  FUN_segment_0__8040443c(auStack_20,param_1 + 0x134);
  FUN_segment_0__80404464(auStack_2c,param_1 + 0x108,auStack_20);
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_38,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_38;
    *(undefined4 *)(param_1 + 0x4c) = local_34;
    *(undefined4 *)(param_1 + 0x50) = local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x140,param_1 + 0x48,auStack_2c);
}

// === gfx_EGG_Video_806e6fe4 (0x806e6fe4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e6fe4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e74e4 (0x806e74e4) ===
double gfx_EGG_Video_806e74e4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  uVar2 = param_2 ^ 0x80000000;
  uVar3 = *(uint *)(param_1 + 0x170);
  uVar1 = uVar3 ^ 0x80000000;
  if ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) - dRam00000000._0_4_ <=
      (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
    if ((int)param_2 < (int)uVar3) {
      dVar4 = (double)((*(float *)(param_1 + 0x178) *
                       (float)((double)CONCAT44(0x43300000,uVar3 - param_2 ^ 0x80000000) -
                              dRam00000000)) / dRam00000000._0_4_);
    }
    else if ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) + dRam00000000._0_4_ <
             (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
      if (dRam00000000._0_4_ +
          (float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) + dRam00000000._0_4_ <=
          (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
        uVar3 = *(uint *)(param_1 + 0x174);
        uVar1 = uVar3 ^ 0x80000000;
        if ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) - dRam00000000._0_4_ <=
            (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
          if ((int)param_2 < (int)uVar3) {
            dVar4 = (double)((*(float *)(param_1 + 0x17c) *
                             (float)((double)CONCAT44(0x43300000,uVar3 - param_2 ^ 0x80000000) -
                                    dRam00000000)) / dRam00000000._0_4_);
          }
          else if ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) + dRam00000000._0_4_ <
                   (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
            if (dRam00000000._0_4_ +
                (float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) + dRam00000000._0_4_ <=
                (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000)) {
              dVar4 = (double)*(float *)(param_1 + 0x180);
            }
            else {
              dVar4 = (double)((*(float *)(param_1 + 0x180) *
                               ((float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000) -
                               ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) +
                               dRam00000000._0_4_))) / dRam00000000._0_4_);
            }
          }
          else {
            dVar4 = (double)dRam00000000._0_4_;
          }
        }
        else {
          dVar4 = (double)*(float *)(param_1 + 0x17c);
        }
      }
      else {
        dVar4 = (double)((*(float *)(param_1 + 0x17c) *
                         ((float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000) -
                         ((float)((double)CONCAT44(0x43300000,uVar1) - dRam00000000) +
                         dRam00000000._0_4_))) / dRam00000000._0_4_);
      }
    }
    else {
      dVar4 = (double)dRam00000000._0_4_;
    }
  }
  else {
    dVar4 = (double)*(float *)(param_1 + 0x178);
  }
  return dVar4;
}

// === gfx_EGG_Video_806e76f4 (0x806e76f4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e76f4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e79d4 (0x806e79d4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e79d4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806e7cb4 (0x806e7cb4) ===
void EGG_Video_validate_806e7cb4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  gfx_EGG_Video_806ff578(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x2e] = *(short *)(*param_2 + 0x2e) * 0x3c;
  param_1[0x2f] = *(short *)(*param_2 + 0x32) * 0x3c;
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_88,param_1 + 0x16);
    param_1[0x12] = local_88;
    param_1[0x13] = local_84;
    param_1[0x14] = local_80;
  }
  param_1[0x30] = param_1[0x12];
  local_28 = uRam00000000;
  param_1[0x31] = param_1[0x13];
  local_24 = uRam0000007c;
  param_1[0x32] = param_1[0x14];
  local_20 = uRam00000080;
  *(byte *)((int)param_1 + 0xcd) =
       (byte)((byte)((uint)-(int)*(short *)(*param_2 + 0x2c) >> 0x18) &
             ~(byte)(*(short *)(*param_2 + 0x2c) >> 0xf)) >> 7;
  FUN_segment_0__80404464(&local_34,param_1 + 0xc,&local_28);
  uVar1 = uRam00000084;
  param_1[0xc] = local_34;
  param_1[0xd] = local_30;
  param_1[0xe] = local_2c;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 9;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x18c);
}

// === gfx_EGG_Video_806e7f20 (0x806e7f20) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e7f20(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e80dc (0x806e80dc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e80dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e8ccc (0x806e8ccc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e8ccc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e8ed4 (0x806e8ed4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e8ed4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e91a0 (0x806e91a0) ===
void gfx_EGG_Video_806e91a0(undefined4 param_1)

{
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = _uRam00000000;
  local_14 = uRam00000004;
  local_10 = uRam00000008;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = uRam00000000._0_1_;
  local_27 = (undefined)uRam00000000;
  local_26 = uRam00000002;
  FUN_segment_0__80701444(param_1,&local_18,&local_24,3,&local_28);
  return;
}

// === EGG_Video_validate_806e9248 (0x806e9248) ===
int EGG_Video_validate_806e9248(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806e92c8 (0x806e92c8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e92c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e9408 (0x806e9408) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e9408(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e9548 (0x806e9548) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e9548(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_assertFail_806e978c (0x806e978c) ===
void EGG_Video_assertFail_806e978c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806e9880 (0x806e9880) ===
void EGG_Video_assertFail_806e9880(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806e9974 (0x806e9974) ===
void EGG_Video_assertFail_806e9974(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806e9a68 (0x806e9a68) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e9a68(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e9ba8 (0x806e9ba8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e9ba8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806e9ce8 (0x806e9ce8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806e9ce8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_assertFail_806e9f2c (0x806e9f2c) ===
void EGG_Video_assertFail_806e9f2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806ea020 (0x806ea020) ===
void EGG_Video_assertFail_806ea020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806ea114 (0x806ea114) ===
void EGG_Video_assertFail_806ea114(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_validate_806ea228 (0x806ea228) ===
int EGG_Video_validate_806ea228(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ea268 (0x806ea268) ===
void EGG_Video_validate_806ea268(undefined4 *param_1,int *param_2)

{
  EGG_Video_validate_806f90dc();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x41,0x10,0,(int)*(short *)(*param_2 + 0x2a));
}

// === EGG_Video_validate_806ea2d0 (0x806ea2d0) ===
int EGG_Video_validate_806ea2d0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ea310 (0x806ea310) ===
void EGG_Video_validate_806ea310(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_38 [44];
  
  FUN_segment_0__80700278();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,0x20,9,uVar1);
}

// === gfx_EGG_Video_806ea49c (0x806ea49c) ===
void gfx_EGG_Video_806ea49c(int param_1)

{
  int *piVar1;
  
  FUN_segment_0__807001f4();
  piVar1 = *(int **)(param_1 + 0x178);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
  }
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === EGG_Video_validate_806ea4f4 (0x806ea4f4) ===
void EGG_Video_validate_806ea4f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_segment_0__80702028();
  if (*(int *)(param_1 + 0x178) != 0) {
    FUN_segment_0__80701bcc(param_1);
    iVar1 = *(int *)(param_1 + 0x178);
    iVar2 = 0;
    do {
      if (**(int **)(iVar1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(**(int **)(iVar1 + 0x14),0,param_1 + 0x58);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 2);
  }
  return;
}

// === gfx_EGG_Video_806ea57c (0x806ea57c) ===
void gfx_EGG_Video_806ea57c(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c [4];
  
  FUN_segment_0__80700cb8();
  if (*(int *)(param_1 + 0x178) != 0) {
    local_1c[0] = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0x178),0,local_1c,0xe,2,0,0,9,0);
    local_20 = *(undefined4 *)(param_1 + 0x14);
    FUN_segment_0__8044db0c(*(undefined4 *)(param_1 + 0x178),1,&local_20,0x17,1,0,0,9,0);
  }
  return;
}

// === EGG_Video_validate_806ea630 (0x806ea630) ===
void EGG_Video_validate_806ea630(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_98 [136];
  
  EGG_Video_validate_806fbd4c();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_98,0x80,0x20,uVar1);
}

// === gfx_EGG_Video_806ea9e8 (0x806ea9e8) ===
void gfx_EGG_Video_806ea9e8
               (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Video_806fa2c0(param_2,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_2 + 0x158))(param_2,iVar1);
  if (iVar1 == 0) {
    FUN_segment_0__806aa408(param_1,param_2[0x2b],param_3,param_4,param_5);
  }
  else {
    FUN_segment_0__806aa408(param_1,param_2[0x2b],param_3,param_4,param_5);
    if (param_2[0x5b] != 0) {
      FUN_segment_0__806aa408(param_1,param_2[0x5b],param_3,param_4,param_5);
    }
    if (param_2[0x5c] != 0) {
      FUN_segment_0__806aa408(param_1,param_2[0x5c],param_3,param_4,param_5);
    }
  }
  return;
}

// === gfx_EGG_Video_806eaad4 (0x806eaad4) ===
undefined4
gfx_EGG_Video_806eaad4
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806ab90c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806ab90c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806ab90c
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806ab90c
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eac58 (0x806eac58) ===
undefined4
gfx_EGG_Video_806eac58
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806abb00(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806abb00(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806abb00
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806abb00
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eaddc (0x806eaddc) ===
undefined4
gfx_EGG_Video_806eaddc
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806abcf4(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806abcf4(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806abcf4
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806abcf4
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb0b8 (0x806eb0b8) ===
undefined4
gfx_EGG_Video_806eb0b8
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806ab414(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806ab414(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806ab414(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806ab414(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb200 (0x806eb200) ===
undefined4
gfx_EGG_Video_806eb200
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806ab5ec(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806ab5ec(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806ab5ec(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806ab5ec(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb348 (0x806eb348) ===
undefined4
gfx_EGG_Video_806eb348
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806ab77c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806ab77c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806ab77c(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806ab77c(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb490 (0x806eb490) ===
undefined4
gfx_EGG_Video_806eb490
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aab5c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aab5c(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aab5c
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aab5c
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb614 (0x806eb614) ===
undefined4
gfx_EGG_Video_806eb614
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aad38(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aad38(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aad38
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aad38
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eb798 (0x806eb798) ===
undefined4
gfx_EGG_Video_806eb798
          (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  iVar3 = gfx_EGG_Video_806fa2c0(param_2,*(int *)(iRam00000000 + 0x20) - param_8);
  (**(code **)(*param_2 + 0x158))(param_2,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aaf14(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aaf14(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_2[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aaf14
                            (param_1,param_2[0x5b],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_2[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aaf14
                            (param_1,param_2[0x5c],param_3,param_4,param_5,param_6,param_7),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806eba74 (0x806eba74) ===
undefined4
gfx_EGG_Video_806eba74
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aa6ac(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aa6ac(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aa6ac(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aa6ac(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806ebbbc (0x806ebbbc) ===
undefined4
gfx_EGG_Video_806ebbbc
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aa86c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aa86c(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aa86c(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aa86c(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806ebd04 (0x806ebd04) ===
undefined4
gfx_EGG_Video_806ebd04
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = gfx_EGG_Video_806fa2c0(param_1,*(undefined4 *)(iRam00000000 + 0x20));
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if (iVar3 == 0) {
    uVar4 = FUN_segment_0__806aa9e4(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = 1;
    bVar2 = true;
    iVar3 = FUN_segment_0__806aa9e4(param_1[0x2b],param_2,param_3,param_4,param_5,param_6);
    if (iVar3 == 0) {
      bVar1 = false;
      if ((param_1[0x5b] != 0) &&
         (iVar3 = FUN_segment_0__806aa9e4(param_1[0x5b],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        bVar2 = false;
      }
    }
    if (!bVar2) {
      bVar2 = false;
      if ((param_1[0x5c] != 0) &&
         (iVar3 = FUN_segment_0__806aa9e4(param_1[0x5c],param_2,param_3,param_4,param_5,param_6),
         iVar3 != 0)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// === gfx_EGG_Video_806ebea4 (0x806ebea4) ===
void gfx_EGG_Video_806ebea4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x90) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),param_1 + 0x3c);
  }
  piVar1 = *(int **)(param_1 + 0x178);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
  }
  return;
}

// === EGG_Video_validate_806ebf34 (0x806ebf34) ===
int EGG_Video_validate_806ebf34(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ebf74 (0x806ebf74) ===
void EGG_Video_validate_806ebf74(undefined4 *param_1,int *param_2)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(*param_2 + 0x2a);
  param_1[0x42] = param_1[0xc];
  param_1[0x43] = param_1[0xd];
  param_1[0x44] = param_1[0xe];
  param_1[0x45] = param_1[0xf];
  param_1[0x46] = param_1[0x10];
  param_1[0x47] = param_1[0x11];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_38,param_1 + 0x16);
    param_1[0x12] = local_38;
    param_1[0x13] = local_34;
    param_1[0x14] = local_30;
  }
  uVar4 = uRam0000000c;
  uVar3 = uRam00000004;
  iVar5 = param_1[0x29] * param_1[0x29];
  uStack_24 = 0x80000006;
  local_28 = 0x43300000;
  local_20 = 0x43300000;
  uStack_1c = 0x80000028;
  fVar2 = (float)(4.50360177485415e+15 - dRam00000010) * fRam00000008;
  dVar1 = 4503601774854184.0 - dRam00000010;
  param_1[0x48] = param_1[0x12];
  param_1[0x49] = param_1[0x13];
  param_1[0x4a] = param_1[0x14];
  *(undefined2 *)((int)param_1 + 0x132) = 0;
  *(undefined2 *)(param_1 + 0x52) = 6;
  *(undefined2 *)(param_1 + 0x4d) = 0x28;
  *(undefined2 *)((int)param_1 + 0x136) = 10;
  *(short *)(param_1 + 0x4c) = (short)iVar5 + (short)(iVar5 / 0x28) * -0x28;
  param_1[0x4e] = uVar3;
  param_1[0x51] = fVar2 / (float)dVar1;
  param_1[0x50] = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xb4);
}

// === gfx_EGG_Video_806ec144 (0x806ec144) ===
void gfx_EGG_Video_806ec144(int *param_1)

{
  undefined2 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x24))();
  FUN_segment_0__80609c4c(uRam00000000,uVar1);
  return;
}

// === EGG_Video_validate_806ec184 (0x806ec184) ===
void EGG_Video_validate_806ec184(int param_1)

{
  double dVar1;
  
  if (*(short *)(param_1 + 0x132) == 0) {
    *(short *)(param_1 + 0x130) = *(short *)(param_1 + 0x130) + 1;
  }
  if (*(short *)(param_1 + 0x130) == *(short *)(param_1 + 0x134)) {
    *(short *)(param_1 + 0x132) = *(short *)(param_1 + 0x132) + 1;
  }
  if (*(short *)(param_1 + 0x136) < *(short *)(param_1 + 0x132)) {
    *(undefined2 *)(param_1 + 0x132) = 0;
  }
  if (*(short *)(param_1 + 0x134) < *(short *)(param_1 + 0x130)) {
    *(undefined2 *)(param_1 + 0x130) = 0;
  }
  dVar1 = (double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x130) ^ 0x80000000) - dRam00000000;
  *(float *)(param_1 + 0x138) =
       *(float *)(param_1 + 0x140) *
       (float)((double)CONCAT44(0x43300000,
                                (int)*(short *)(param_1 + 0x134) - (int)*(short *)(param_1 + 0x130)
                                ^ 0x80000000) - dRam00000000);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(*(float *)(param_1 + 0x144) * (float)dVar1));
}

// === gfx_EGG_Video_806ec2a8 (0x806ec2a8) ===
undefined4 * gfx_EGG_Video_806ec2a8(undefined4 *param_1,int *param_2)

{
  short sVar1;
  
  EGG_Video_validate_806ebf74();
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 0x14a) = *(undefined2 *)(*param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x53) = 0;
  sVar1 = *(short *)(*param_2 + 0x2e);
  *(short *)((int)param_1 + 0x14e) = sVar1;
  *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(*param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x152) = *(undefined2 *)(*param_2 + 0x2c);
  if (sVar1 < 2) {
    *(undefined2 *)((int)param_1 + 0x14e) = 2;
  }
  param_1[0x56] =
       g_Ram_float /
       (float)((double)CONCAT44(0x43300000,(int)*(short *)((int)param_1 + 0x14e) ^ 0x80000000) -
              (double)CONCAT44(g_Ram_float,uRam00000004));
  return param_1;
}

// === EGG_Video_validate_806ec36c (0x806ec36c) ===
int EGG_Video_validate_806ec36c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ec3ac (0x806ec3ac) ===
void EGG_Video_validate_806ec3ac(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(*(float *)(param_1 + 0x158) *
                     (float)((double)CONCAT44(0x43300000,
                                              (int)*(short *)(param_1 + 0x14a) ^ 0x80000000) -
                            dRam00000000)));
}

// === gfx_EGG_Video_806ec4d4 (0x806ec4d4) ===
undefined4 * gfx_EGG_Video_806ec4d4(undefined4 *param_1,int *param_2)

{
  short sVar1;
  float fVar2;
  double dVar3;
  
  EGG_Video_validate_806ebf74();
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(*param_2 + 0x30);
  fVar2 = g_Ram_float;
  dVar3 = (double)CONCAT44(g_Ram_float,uRam00000004);
  sVar1 = *(short *)(*param_2 + 0x2e);
  *(short *)((int)param_1 + 0x15a) = sVar1;
  param_1[0x57] =
       (float)((double)CONCAT44(0x43300000,(int)*(short *)(*param_2 + 0x2c) ^ 0x80000000) - dVar3) *
       fVar2;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(*param_2 + 0x32);
  if (sVar1 < 2) {
    *(undefined2 *)((int)param_1 + 0x15a) = 2;
  }
  dVar3 = (double)CONCAT44(g_Ram_float,uRam00000004);
  fVar2 = g_Ram_float /
          (float)((double)CONCAT44(0x43300000,(int)*(short *)((int)param_1 + 0x15a) ^ 0x80000000) -
                 dVar3);
  param_1[0x53] = param_1[0x42];
  param_1[0x55] = param_1[0x44];
  param_1[0x59] = fVar2;
  param_1[0x54] =
       (float)param_1[0x43] -
       (float)((double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x58) ^ 0x80000000) - dVar3);
  return param_1;
}

// === EGG_Video_validate_806ec5f0 (0x806ec5f0) ===
void EGG_Video_validate_806ec5f0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(*(float *)(param_1 + 0x164) *
                     (float)((double)CONCAT44(0x43300000,
                                              (int)*(short *)(param_1 + 0x158) ^ 0x80000000) -
                            dRam00000000)));
}

// === EGG_Video_validate_806ec70c (0x806ec70c) ===
int EGG_Video_validate_806ec70c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ec774 (0x806ec774) ===
int EGG_Video_validate_806ec774(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806ec7e8 (0x806ec7e8) ===
int EGG_Video_validate_806ec7e8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806ec828 (0x806ec828) ===
undefined4 * gfx_EGG_Video_806ec828(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar4 = uRam00000010;
  uVar3 = uRam0000000c;
  uVar2 = uRam00000008;
  uVar1 = uRam00000004;
  *param_1 = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar4;
  return param_1;
}

// === EGG_Video_assertFail_806ec898 (0x806ec898) ===
void EGG_Video_assertFail_806ec898(void)

{
  undefined auStack_34 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_34,10,0,1);
}

// === gfx_EGG_Video_806ec94c (0x806ec94c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ec94c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ecb78 (0x806ecb78) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ecb78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ecc60 (0x806ecc60) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ecc60(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806eced0 (0x806eced0) ===
void EGG_Video_validate_806eced0(double param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(g_Ram_float * (float)(param_1 * (double)g_Ram_float)));
}

// === gfx_EGG_Video_806ecf14 (0x806ecf14) ===
void gfx_EGG_Video_806ecf14(int param_1,uint *param_2,undefined4 param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  FUN_segment_0__80404498(&local_18,param_3,param_1 + 0x30);
  param_2[2] = local_18;
  param_2[3] = local_14;
  param_2[4] = local_10;
  *param_2 = *param_2 | 0x40;
  return;
}

// === gfx_EGG_Video_806ecf74 (0x806ecf74) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ecf74(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806ed1b8 (0x806ed1b8) ===
int EGG_Video_validate_806ed1b8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806ed1f8 (0x806ed1f8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ed1f8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ed3e4 (0x806ed3e4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ed3e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ed600 (0x806ed600) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ed600(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ed9b8 (0x806ed9b8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ed9b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806edda0 (0x806edda0) ===
void EGG_Video_validate_806edda0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EGG_Video_validate_806ffdb4(param_1,param_2,0);
  *param_1 = 0;
  FUN_segment_0__805fa188(param_1 + 0x2b);
  uVar1 = uRam00000000;
  param_1[0x5e] = 0;
  param_1[0x5f] = uVar1;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar1;
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  param_1[100] = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x65,0,0,0xc,2);
}

// === EGG_Video_validate_806ee158 (0x806ee158) ===
void EGG_Video_validate_806ee158(undefined4 *param_1,undefined4 param_2)

{
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  param_1[0x3775] = 0;
  *param_1 = 0;
  param_1[0x3c98] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x68);
}

// === EGG_Video_assertFail_806ee2c4 (0x806ee2c4) ===
void EGG_Video_assertFail_806ee2c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x1b4);
}

// === EGG_Video_assertFail_806ee398 (0x806ee398) ===
void EGG_Video_assertFail_806ee398(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x100);
}

// === EGG_Video_assertFail_806ee5f8 (0x806ee5f8) ===
void EGG_Video_assertFail_806ee5f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806eeba8 (0x806eeba8) ===
void EGG_Video_assertFail_806eeba8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806eece4 (0x806eece4) ===
void gfx_EGG_Video_806eece4(int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined auStack_30 [16];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  
  local_20 = 0x43300000;
  local_18 = 0x43300000;
  if (*(int *)(param_1 + 0x170) == 1) {
    uStack_1c = *(uint *)(param_1 + 0x178) ^ 0x80000000;
    FUN_segment_0__8040443c
              ((double)(dRam00000000._0_4_ *
                       (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000000)),auStack_30,
               param_1 + 0x17c);
    FUN_segment_0__80404464(&local_3c,param_1 + 0x164,auStack_30);
    dVar3 = (double)CONCAT44(dRam00000000._0_4_,dRam00000000._4_4_);
    uStack_14 = *(uint *)(param_1 + 0x178) ^ 0x80000000;
    *(undefined4 *)(param_1 + 0x30) = local_3c;
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
    *(undefined4 *)(param_1 + 0x34) = local_38;
    *(undefined4 *)(param_1 + 0x38) = local_34;
    FUN_segment_0__8040443c
              ((double)(float)((double)(CONCAT44(local_18,*(uint *)(param_1 + 0x178)) ^ 0x80000000)
                              - dVar3),&local_48,param_1 + 0x188);
    iVar4 = *(int *)(param_1 + 0x178);
    fVar1 = dRam00000000._0_4_ *
            (float)((double)(CONCAT44(local_20,iVar4) ^ 0x80000000) -
                   (double)CONCAT44(dRam00000000._0_4_,dRam00000000._4_4_));
    fVar2 = dRam00000000._0_4_ *
            (float)((double)(CONCAT44(local_18,iVar4) ^ 0x80000000) -
                   (double)CONCAT44(dRam00000000._0_4_,dRam00000000._4_4_));
    *(undefined *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x48) = local_48;
    *(undefined4 *)(param_1 + 0x4c) = local_44;
    *(undefined4 *)(param_1 + 0x50) = local_40;
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 3;
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x168) - fVar1 * fVar2;
    *(int *)(param_1 + 0x178) = iVar4 + 1;
    if (0xff < iVar4) {
      *(undefined4 *)(param_1 + 0x170) = 2;
    }
  }
  return;
}

// === EGG_Video_validate_806eef24 (0x806eef24) ===
int EGG_Video_validate_806eef24(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806eef64 (0x806eef64) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806eef64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806ef49c (0x806ef49c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806ef49c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806efa00 (0x806efa00) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806efa00(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f01ac (0x806f01ac) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f01ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f097c (0x806f097c) ===
undefined4 EGG_Video_validate_806f097c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x194,0,0xc,2);
  }
  return 0;
}

// === gfx_EGG_Video_806f0a28 (0x806f0a28) ===
void gfx_EGG_Video_806f0a28(undefined4 param_1)

{
  uRam00000000 = param_1;
  return;
}

// === gfx_EGG_Video_806f0a34 (0x806f0a34) ===
undefined4 gfx_EGG_Video_806f0a34(void)

{
  return uRam00000000;
}

// === gfx_EGG_Video_806f0a40 (0x806f0a40) ===
void gfx_EGG_Video_806f0a40(undefined4 param_1)

{
  uRam00000000 = param_1;
  return;
}

// === gfx_EGG_Video_806f0b14 (0x806f0b14) ===
void gfx_EGG_Video_806f0b14(int param_1)

{
  *(int *)(param_1 + 0xb8) = (int)sRam00000002;
  *(undefined4 *)(param_1 + 0x34) = uRam00000018;
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
  *(undefined4 *)(param_1 + 0xc0) = 10000;
  FUN_segment_0__80645ffc();
  *(int *)(param_1 + 0x10c) = (int)fRam0000003c;
  return;
}

// === gfx_EGG_Video_806f0b88 (0x806f0b88) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gfx_EGG_Video_806f0b88(int param_1)

{
  bool bVar1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = FUN_segment_0__80425788(g_Ram_float,2);
  if (iVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((int)g_Ram_float + 0x20);
  }
  cVar3 = g_Ram_float._0_1_;
  bVar1 = g_Ram_float._0_1_ == 0;
  dVar2 = (double)CONCAT44(0x43300000,uVar4) - dRam00000050;
  iVar6 = iRam00000040;
  if (bVar1) {
    iVar5 = (int)dVar2;
    iVar8 = (int)g_Ram_float._0_2_ + (int)g_Ram_float._2_2_;
    iVar6 = iRam00000004 + iVar8;
    iVar5 = iVar5 - (iVar5 / iVar6) * iVar6;
    if (iVar5 < g_Ram_float._0_2_) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
      if (iVar5 < iVar8) {
        iVar6 = 2;
      }
    }
  }
  fVar7 = g_Ram_float;
  if (cVar3 == 0) {
    iVar5 = (int)dVar2;
    iVar9 = (int)g_Ram_float._0_2_;
    iVar8 = iVar9 + g_Ram_float._2_2_;
    fVar7 = (float)(iVar5 - (iVar5 / (iRam00000004 + iVar8)) * (iRam00000004 + iVar8));
    if (iVar9 <= (int)fVar7) {
      if ((int)fVar7 < iVar8) {
        iVar8 = iVar9;
      }
      fVar7 = (float)((int)fVar7 - iVar8);
    }
  }
  if (iVar6 == 1) {
    iVar6 = (int)g_Ram_float._0_2_ - ((int)fVar7 + _DAT_00000034 + *(int *)(param_1 + 0xe4) + 10);
    *(int *)(param_1 + 0xc0) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
  }
  else if (iVar6 == 2) {
    if (fVar7 == 0.0) {
      FUN_segment_0__80700ac8((double)g_Ram_float,param_1,0x312);
    }
    else if ((float)((double)CONCAT44(0x43300000,-fVar7) - dRam00000058) <= fRam00000038) {
      FUN_segment_0__8049231c((double)fRam00000044,g_Ram_float,2,0x2c);
    }
    *(int *)(param_1 + 0xc0) =
         (int)(fRam00000048 *
              (float)((double)CONCAT44(0x43300000,(int)g_Ram_float._2_2_ ^ 0x80000000) -
                     dRam00000058));
  }
  else if (iVar6 == 0) {
    *(int *)(param_1 + 0xc0) =
         (int)(fRam00000048 *
              (float)((double)CONCAT44(0x43300000,(int)g_Ram_float._2_2_ ^ 0x80000000) -
                     dRam00000058));
  }
  FUN_segment_0__80647434(param_1);
  return;
}

// === gfx_EGG_Video_806f0df4 (0x806f0df4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f0df4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f0f50 (0x806f0f50) ===
void EGG_Video_validate_806f0f50(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar3 = uRam00000070;
  uVar2 = uRam0000006c;
  uVar1 = uRam00000068;
  *param_1 = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar3;
  uRam00000040 = 1;
  iVar4 = *param_2;
  iRam00000000 = CONCAT13(*(short *)(iVar4 + 0x2a) == 1,iRam00000000._1_3_);
  if (*(short *)(iVar4 + 0x2a) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x128);
  }
  fRam00000008 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(iVar4 + 0x2c) ^ 0x80000000) -
                        dRam00000058);
  fRam0000000c = (float)((double)CONCAT44(0x43300000,(int)*(short *)(iVar4 + 0x2e) ^ 0x80000000) -
                        dRam00000058);
  fRam00000028 = (float)((double)CONCAT44(0x43300000,(int)*(short *)(iVar4 + 0x30) ^ 0x80000000) -
                        dRam00000058);
  if (1 < *(byte *)(iRam00000000 + 0x25)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7c);
}

// === gfx_EGG_Video_806f1168 (0x806f1168) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f1168(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f16cc (0x806f16cc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f16cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f1e2c (0x806f1e2c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f1e2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f20cc (0x806f20cc) ===
void EGG_Video_validate_806f20cc(undefined4 param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  cVar4 = g_Ram_float._0_1_;
  bVar1 = g_Ram_float._0_1_ == 0;
  iVar6 = iRam00000040;
  if (bVar1) {
    iVar9 = (int)g_Ram_float._0_2_ + (int)g_Ram_float._2_2_;
    iVar6 = iRam00000004 + iVar9;
    iVar8 = param_2 - (param_2 / iVar6) * iVar6;
    if (iVar8 < g_Ram_float._0_2_) {
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
      if (iVar8 < iVar9) {
        iVar6 = 2;
      }
    }
  }
  fVar7 = g_Ram_float;
  if (cVar4 == 0) {
    iVar9 = (int)g_Ram_float._0_2_;
    iVar8 = iVar9 + g_Ram_float._2_2_;
    fVar7 = (float)(param_2 - (param_2 / (iRam00000004 + iVar8)) * (iRam00000004 + iVar8));
    if (iVar9 <= (int)fVar7) {
      if ((int)fVar7 < iVar8) {
        iVar8 = iVar9;
      }
      fVar7 = (float)((int)fVar7 - iVar8);
    }
  }
  fVar2 = g_Ram_float;
  if ((g_Ram_float <= fRam00000020) && (fVar2 = fRam00000020, fRam00000078 < fRam00000020)) {
    fVar2 = fRam00000078;
  }
  fRam00000020 = fVar2;
  fVar3 = fRam00000078 - fVar2;
  if (iVar6 != 2) {
    return;
  }
  fVar5 = -fVar7;
  if ((float)((double)CONCAT44(0x43300000,fVar5) - dRam00000058) < fVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              ((double)(fRam00000080 *
                       ((fVar3 * (float)((double)CONCAT44(0x43300000,fVar5) - dRam00000058)) / fVar3
                       )));
  }
  if ((float)((double)CONCAT44(0x43300000,(int)g_Ram_float._2_2_ ^ 0x80000000) - dRam00000058) -
      fRam0000007c * fVar2 <= (float)((double)CONCAT44(0x43300000,fVar5) - dRam00000058)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              ((double)(fRam00000080 *
                       ((fVar2 * (float)((double)CONCAT44(0x43300000,
                                                          (int)g_Ram_float._2_2_ - (int)fVar7 ^
                                                          0x80000000) - dRam00000058)) /
                       (fRam0000007c * fVar2))));
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(fRam00000080 * fVar2));
}

// === gfx_EGG_Video_806f22bc (0x806f22bc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f22bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f28c0 (0x806f28c0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f28c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f2ec4 (0x806f2ec4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f2ec4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f31f0 (0x806f31f0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f31f0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f36a8 (0x806f36a8) ===
void gfx_EGG_Video_806f36a8(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14 [4];
  
  local_14[0] = (**(code **)(*param_1 + 0x38))();
  local_18 = uRam00000000;
  FUN_segment_0__80701444(param_1,local_14,&local_18,1,0);
  FUN_segment_0__8044ef04(param_1[2]);
  return;
}

// === EGG_Video_validate_806f373c (0x806f373c) ===
int EGG_Video_validate_806f373c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806f37a4 (0x806f37a4) ===
int EGG_Video_validate_806f37a4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != 0) {
      FUN_segment_0__80645fbc(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806f3800 (0x806f3800) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f3800(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f3c3c (0x806f3c3c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f3c3c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f40a4 (0x806f40a4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f40a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f47a0 (0x806f47a0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f47a0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f4ec8 (0x806f4ec8) ===
undefined4 * gfx_EGG_Video_806f4ec8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gfx_EGG_Video_806fb9c4(param_1,param_2,0);
  uVar3 = uRam0000000c;
  uVar2 = uRam00000008;
  uVar1 = uRam00000004;
  *param_1 = 0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  return param_1;
}

// === EGG_Video_assertFail_806f4f34 (0x806f4f34) ===
void EGG_Video_assertFail_806f4f34(void)

{
  undefined auStack_34 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_34,10,0,2);
}

// === gfx_EGG_Video_806f4ff0 (0x806f4ff0) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f4ff0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f5234 (0x806f5234) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5234(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f5314 (0x806f5314) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5314(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f5424 (0x806f5424) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5424(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f5564 (0x806f5564) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5564(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f571c (0x806f571c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f571c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f58cc (0x806f58cc) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f58cc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f5a9c (0x806f5a9c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5a9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f5c0c (0x806f5c0c) ===
int EGG_Video_validate_806f5c0c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806f5c4c (0x806f5c4c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f5c4c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f619c (0x806f619c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f619c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f6738 (0x806f6738) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f6738(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f7058 (0x806f7058) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f7058(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f79c4 (0x806f79c4) ===
undefined4 * EGG_Video_validate_806f79c4(undefined4 *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  uint uStack_14;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  iVar2 = *param_2;
  local_18 = 0x43300000;
  uStack_14 = (int)*(short *)(iVar2 + 0x2c) ^ 0x80000000;
  g_Ram_float = (float)((double)CONCAT44(0x43300000,uStack_14) -
                        (double)CONCAT44(CONCAT22(*(undefined2 *)(iVar2 + 0x2a),g_Ram_float._2_2_),
                                         uRam00000004));
  param_1[0x50] = (int)*(short *)(iVar2 + 0x2e);
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
  param_1[0x4d] = param_1[0x12];
  param_1[0x4e] = param_1[0x13];
  param_1[0x4f] = param_1[0x14];
  *(undefined *)(param_1 + 0x53) = 1;
  *(undefined *)((int)param_1 + 0x14d) = 0;
  if (*(char *)((int)g_Ram_float + 0x25) != '\x01') {
    param_1[0x54] = 0;
    iVar2 = *(int *)((int)g_Ram_float + 0xb70);
    fVar1 = g_Ram_float;
    if (iVar2 == 3) {
      if (*(int *)((int)g_Ram_float + 0xb78) == 0) {
        *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) =
             *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) & 0xfffffffb;
        fVar1 = g_Ram_float;
      }
      else if (*(int *)((int)g_Ram_float + 0xb78) == 1) {
        *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) =
             *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) & 0xfffffffb;
        fVar1 = g_Ram_float;
      }
    }
    else if ((iVar2 == 9) || (iVar2 == 10)) {
      if (*(int *)((int)g_Ram_float + 0xb78) == 0) {
        *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) =
             *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) & 0xfffffffb;
        fVar1 = g_Ram_float;
      }
      else if (*(int *)((int)g_Ram_float + 0xb78) == 1) {
        *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) =
             *(uint *)(*(int *)((int)g_Ram_float + 0x10) + 8) & 0xfffffffb;
        fVar1 = g_Ram_float;
      }
    }
    g_Ram_float._0_2_ = (undefined2)((uint)fVar1 >> 0x10);
    g_Ram_float._2_2_ = SUB42(fVar1,0);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7c);
}

// === gfx_EGG_Video_806f7ba0 (0x806f7ba0) ===
void gfx_EGG_Video_806f7ba0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
  (**(code **)(*piVar1 + 0x1c))((double)g_Ram_float);
  piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
  (**(code **)(*piVar1 + 0x10))((double)g_Ram_float);
  piVar1 = (int *)(**(code **)(*param_1 + 300))(param_1,0);
  *(undefined *)(param_1 + 0x15) = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 4;
  param_1[0x16] = *piVar1;
  param_1[0x17] = piVar1[1];
  param_1[0x18] = piVar1[2];
  param_1[0x19] = piVar1[3];
  param_1[0x1a] = piVar1[4];
  param_1[0x1b] = piVar1[5];
  param_1[0x1c] = piVar1[6];
  param_1[0x1d] = piVar1[7];
  param_1[0x1e] = piVar1[8];
  param_1[0x1f] = piVar1[9];
  param_1[0x20] = piVar1[10];
  param_1[0x21] = piVar1[0xb];
  param_1[0xc] = piVar1[3];
  param_1[0xd] = piVar1[7];
  param_1[0xe] = piVar1[0xb];
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}

// === EGG_Video_validate_806f7cd4 (0x806f7cd4) ===
void EGG_Video_validate_806f7cd4(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_98 [136];
  
  EGG_Video_validate_806fbd4c();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_98,0x80,0xf,uVar1);
}

// === gfx_EGG_Video_806f7dd8 (0x806f7dd8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f7dd8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806f822c (0x806f822c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806f822c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806f8490 (0x806f8490) ===
void EGG_Video_validate_806f8490(int *param_1)

{
  undefined4 *puVar1;
  undefined auStack_68 [48];
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
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 300))(param_1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_38,auStack_68);
}

// === EGG_Video_validate_806f86c0 (0x806f86c0) ===
void EGG_Video_validate_806f86c0(int param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  longlong local_18;
  
  local_28 = 0x43300000;
  local_20 = 0x43300000;
  iVar4 = FUN_segment_0__80425788(CONCAT22(sRam00000000,uRam00000002),1);
  if (iVar4 == 0) {
    fVar2 = (float)CONCAT22(sRam00000000,uRam00000002);
  }
  else {
    fVar2 = (float)((double)CONCAT44(local_28,*(undefined4 *)
                                               (CONCAT22(sRam00000000,uRam00000002) + 0x20)) -
                   (double)CONCAT44(CONCAT22(sRam00000000,uRam00000002),fRam00000004));
  }
  uStack_1c = param_2 ^ 0x80000000;
  dVar3 = (double)CONCAT44(CONCAT22(sRam00000000,uRam00000002),fRam00000004);
  uStack_24 = uRam00000008 ^ 0x80000000;
  local_34 = *(undefined4 *)(param_1 + 0x138);
  uVar1 = (uint)(fVar2 - (float)((double)(CONCAT44(local_20,param_2) ^ 0x80000000) - dVar3));
  local_18 = (longlong)(int)uVar1;
  local_30 = *(undefined4 *)(param_1 + 0x13c);
  fVar2 = (float)((double)(CONCAT44(local_28,uRam00000008) ^ 0x80000000) - dVar3) * fRam00000004;
  uVar5 = (uint)sRam00000000;
  if ((int)uVar5 < (int)uVar1) {
    if ((int)uVar5 <= (int)uVar1) {
      uStack_24 = uVar5 ^ 0x80000000;
      uStack_1c = uVar1 ^ 0x80000000;
      if ((float)((double)(CONCAT44(local_20,uVar1) ^ 0x80000000) - dVar3) <
          (float)((double)(CONCAT44(local_28,uVar5) ^ 0x80000000) - dVar3) + fVar2) {
        uStack_1c = uVar1 - uVar5 ^ 0x80000000;
        local_38 = *(float *)(param_1 + 0x134) *
                   ((float)CONCAT22(sRam00000000,uRam00000002) -
                   (float)((double)(CONCAT44(local_20,uVar1 - uVar5) ^ 0x80000000) - dVar3) / fVar2)
        ;
        goto LAB_segment_0__806f8814;
      }
    }
    local_38 = (float)CONCAT22(sRam00000000,uRam00000002);
  }
  else {
    local_38 = *(float *)(param_1 + 0x134);
  }
LAB_segment_0__806f8814:
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x104,&local_38,param_1 + 0x30);
}

// === EGG_Video_validate_806f886c (0x806f886c) ===
void EGG_Video_validate_806f886c(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_50 [48];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  
  local_8c = (float)((ulonglong)_uRam00000000 >> 0x20);
  uStack_1c = uRam00000008 ^ 0x80000000;
  uVar3 = *(uint *)((int)local_8c + 0x20);
  local_20 = 0x43300000;
  local_88 = *(undefined4 *)(param_1 + 0x138);
  uVar2 = (uint)uRam00000000._0_2_;
  fVar1 = (float)((double)CONCAT44(0x43300000,uStack_1c) - _uRam00000000) * fRam00000004;
  local_84 = *(undefined4 *)(param_1 + 0x13c);
  local_18 = 0x43300000;
  if ((int)uVar2 < (int)uVar3) {
    if ((int)uVar2 <= (int)uVar3) {
      uStack_1c = uVar2 ^ 0x80000000;
      uStack_14 = uVar3 ^ 0x80000000;
      if ((float)((double)CONCAT44(0x43300000,uStack_14) - _uRam00000000) <
          (float)((double)CONCAT44(0x43300000,uStack_1c) - _uRam00000000) + fVar1) {
        uStack_14 = uVar3 - uVar2 ^ 0x80000000;
        local_8c = *(float *)(param_1 + 0x134) *
                   (local_8c -
                   (float)((double)CONCAT44(0x43300000,uStack_14) - _uRam00000000) / fVar1);
      }
    }
  }
  else {
    local_8c = *(float *)(param_1 + 0x134);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,&local_8c,param_1 + 0x30);
}

// === EGG_Video_validate_806f89d4 (0x806f89d4) ===
void EGG_Video_validate_806f89d4(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined auStack_58 [48];
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  
  local_94 = (float)((ulonglong)_uRam00000000 >> 0x20);
  uStack_24 = uRam00000008 ^ 0x80000000;
  uVar3 = *(uint *)((int)local_94 + 0x20);
  local_28 = 0x43300000;
  local_90 = *(undefined4 *)(param_1 + 0x138);
  uVar2 = (uint)uRam00000000._0_2_;
  fVar1 = (float)((double)CONCAT44(0x43300000,uStack_24) - _uRam00000000) * fRam00000004;
  local_8c = *(undefined4 *)(param_1 + 0x13c);
  local_20 = 0x43300000;
  if ((int)uVar2 < (int)uVar3) {
    if ((int)uVar2 <= (int)uVar3) {
      uStack_24 = uVar2 ^ 0x80000000;
      uStack_1c = uVar3 ^ 0x80000000;
      if ((float)((double)CONCAT44(0x43300000,uStack_1c) - _uRam00000000) <
          (float)((double)CONCAT44(0x43300000,uStack_24) - _uRam00000000) + fVar1) {
        uStack_1c = uVar3 - uVar2 ^ 0x80000000;
        local_94 = *(float *)(param_1 + 0x134) *
                   (local_94 -
                   (float)((double)CONCAT44(0x43300000,uStack_1c) - _uRam00000000) / fVar1);
      }
    }
  }
  else {
    local_94 = *(float *)(param_1 + 0x134);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,&local_94,param_1 + 0x30);
}

// === EGG_Video_validate_806f8bd8 (0x806f8bd8) ===
int EGG_Video_validate_806f8bd8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806f8c18 (0x806f8c18) ===
undefined4 * gfx_EGG_Video_806f8c18(undefined4 *param_1,int *param_2)

{
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  g_Ram_float = (float)((double)CONCAT44(0x43300000,(int)*(short *)(*param_2 + 0x2c) ^ 0x80000000)
                        - (double)CONCAT44(CONCAT22(g_Ram_float._0_2_,g_Ram_float._2_2_),
                                           uRam00000004));
  param_1[0x42] = (int)*(short *)(*param_2 + 0x2e);
  param_1[0x41] = param_1[0xd];
  *(undefined *)(param_1 + 0x43) = 1;
  *(undefined *)((int)param_1 + 0x10d) = 0;
  return param_1;
}

// === EGG_Video_validate_806f8cc0 (0x806f8cc0) ===
void EGG_Video_validate_806f8cc0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  
  iVar14 = *(int *)((int)g_Ram_float + 0x20);
  if (iVar14 < (int)g_Ram_float._0_2_ + (int)g_Ram_float._2_2_ / 2) {
    if (*(char *)(param_1 + 0x10c) != 0) {
      *(undefined *)(param_1 + 0x10c) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x10c) == 0) {
    *(undefined *)(param_1 + 0x10c) = 1;
  }
  FUN_segment_0__80701bcc(param_1);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  uVar8 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  uVar9 = *(undefined4 *)(param_1 + 0x68);
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  uVar10 = *(undefined4 *)(param_1 + 0x70);
  uVar11 = *(undefined4 *)(param_1 + 0x78);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  uVar12 = *(undefined4 *)(param_1 + 0x80);
  uVar6 = *(undefined4 *)(param_1 + 0x84);
  if (g_Ram_float._0_2_ < iVar14) {
    if (iVar14 < (int)g_Ram_float._0_2_ + (int)g_Ram_float._2_2_) {
      FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x307);
      uVar13 = (uint)g_Ram_float._2_2_;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430
                ((double)(fRam00000018 *
                         ((fRam00000010 *
                          ((float)((double)CONCAT44(0x43300000,
                                                    (iVar14 - g_Ram_float._0_2_) -
                                                    ((iVar14 - g_Ram_float._0_2_) / (int)uVar13) *
                                                    uVar13 ^ 0x80000000) - dRam00000008) -
                          fRam00000014)) /
                         (float)((double)CONCAT44(0x43300000,uVar13 ^ 0x80000000) - dRam00000008))))
      ;
    }
    if (*(char *)(param_1 + 0x10d) == 0) {
      FUN_segment_0__80700ac8((double)g_Ram_float,param_1,0x308);
      *(undefined *)(param_1 + 0x10d) = 1;
    }
    fVar1 = *(float *)(param_1 + 0x104) + fRam00000004;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x104);
  }
  *(undefined *)(param_1 + 0x54) = 0;
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 4;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar8;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar9;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar10;
  *(float *)(param_1 + 0x74) = fVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar11;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar12;
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(float *)(param_1 + 0x34) = fVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  return;
}

// === EGG_Video_validate_806f8f54 (0x806f8f54) ===
double EGG_Video_validate_806f8f54(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  
  if (g_Ram_float._0_2_ < param_2) {
    if (param_2 < (int)g_Ram_float._0_2_ + (int)g_Ram_float._2_2_) {
      FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x307);
      uVar2 = (uint)g_Ram_float._2_2_;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430
                ((double)(fRam00000018 *
                         ((fRam00000010 *
                          ((float)((double)CONCAT44(0x43300000,
                                                    (param_2 - g_Ram_float._0_2_) -
                                                    ((param_2 - g_Ram_float._0_2_) / (int)uVar2) *
                                                    uVar2 ^ 0x80000000) - dRam00000008) -
                          fRam00000014)) /
                         (float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dRam00000008))));
    }
    if (*(char *)(param_1 + 0x10d) == 0) {
      FUN_segment_0__80700ac8((double)g_Ram_float,param_1,0x308);
      *(undefined *)(param_1 + 0x10d) = 1;
    }
    fVar1 = *(float *)(param_1 + 0x104) + fRam00000004;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x104);
  }
  return (double)fVar1;
}

// === EGG_Video_validate_806f909c (0x806f909c) ===
int EGG_Video_validate_806f909c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Video_validate_806f90dc (0x806f90dc) ===
void EGG_Video_validate_806f90dc(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x45] = param_1[0xc];
  param_1[0x46] = param_1[0xd];
  param_1[0x47] = param_1[0xe];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_18,param_1 + 0x16);
    param_1[0x12] = local_18;
    param_1[0x13] = local_14;
    param_1[0x14] = local_10;
  }
  uVar1 = uRam00000000;
  param_1[0x48] = param_1[0x12];
  param_1[0x49] = param_1[0x13];
  param_1[0x4a] = param_1[0x14];
  param_1[0x4b] = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x41,0x10,0,(int)*(short *)(*param_2 + 0x2a));
}

// === EGG_Video_validate_806f9260 (0x806f9260) ===
void EGG_Video_validate_806f9260(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_88 [128];
  
  EGG_Video_validate_806fbd4c();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,0x80,0xf,uVar1);
}

// === EGG_Video_validate_806f9628 (0x806f9628) ===
void EGG_Video_validate_806f9628(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined auStack_98 [16];
  undefined auStack_88 [48];
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
  int iStack_24;
  longlong local_20;
  
  local_28 = 0x43300000;
  iStack_24 = *(int *)(dRam00000000._0_4_ + 0x20) - param_2;
  iVar1 = (int)((double)CONCAT44(0x43300000,iStack_24) - dRam00000000);
  local_20 = (longlong)iVar1;
  if (iVar1 < param_1[0x4c]) {
    iVar3 = 0;
  }
  else if (iVar1 < param_1[0x4d]) {
    iVar3 = 1;
  }
  else if (iVar1 < param_1[0x4e]) {
    iVar3 = 2;
  }
  else {
    iVar3 = 4;
    if (iVar1 < param_1[0x4e] + dRam00000000._0_4_) {
      iVar3 = 3;
    }
  }
  (**(code **)(*param_1 + 0x158))(param_1,iVar3);
  if ((iVar3 != 0) && (iVar3 != 4)) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x150))(param_1,auStack_98,param_2);
    local_58 = *puVar2;
    local_54 = puVar2[1];
    local_50 = puVar2[2];
    local_4c = puVar2[3];
    local_48 = puVar2[4];
    local_44 = puVar2[5];
    local_40 = puVar2[6];
    local_3c = puVar2[7];
    local_38 = puVar2[8];
    local_34 = puVar2[9];
    local_30 = puVar2[10];
    local_2c = puVar2[0xb];
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(&local_58,auStack_88);
  }
  return;
}

// === gfx_EGG_Video_806f9968 (0x806f9968) ===
void gfx_EGG_Video_806f9968(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = (int)((double)CONCAT44(0x43300000,*(int *)(dRam00000000._0_4_ + 0x20) - param_2) -
               dRam00000000);
  if (iVar1 < param_1[0x4c]) {
    iVar2 = 0;
  }
  else if (iVar1 < param_1[0x4d]) {
    iVar2 = 1;
  }
  else if (iVar1 < param_1[0x4e]) {
    iVar2 = 2;
  }
  else {
    iVar2 = 4;
    if (iVar1 < param_1[0x4e] + dRam00000000._0_4_) {
      iVar2 = 3;
    }
  }
  (**(code **)(*param_1 + 0x158))(param_1,iVar2);
  if ((iVar2 != 0) && (iVar2 != 4)) {
    dVar3 = (double)(**(code **)(*param_1 + 0x130))(param_1,param_2);
    *(float *)(param_1[0x2b] + 100) = (float)dVar3;
    if (param_1[0x5b] != 0) {
      *(float *)(param_1[0x5b] + 100) = (float)dVar3;
    }
  }
  return;
}

// === EGG_Video_validate_806f9aa8 (0x806f9aa8) ===
void EGG_Video_validate_806f9aa8(int param_1,float *param_2,int param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float fStack_2c;
  undefined4 local_28;
  float fStack_24;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  fVar5 = dRam00000000._0_4_;
  local_30 = 0x43300000;
  fStack_2c = (float)(*(int *)((int)dRam00000000._0_4_ + 0x20) - param_3);
  iVar6 = *(int *)(param_1 + 0x130);
  local_28 = 0x43300000;
  dVar1 = (double)CONCAT44(0x43300000,fStack_2c) - dRam00000000;
  fVar2 = (float)dVar1;
  local_38 = *(float *)(param_1 + 0x118);
  iVar8 = (int)dVar1;
  local_20 = (longlong)iVar8;
  if (iVar8 < iVar6) {
    iVar7 = 0;
  }
  else if (iVar8 < *(int *)(param_1 + 0x134)) {
    iVar7 = 1;
  }
  else if (iVar8 < *(int *)(param_1 + 0x138)) {
    iVar7 = 2;
  }
  else {
    iVar7 = 4;
    if (iVar8 < *(int *)(param_1 + 0x138) + (int)dRam00000000._0_4_) {
      iVar7 = 3;
    }
  }
  if (iVar7 == 1) {
    fVar4 = (float)(int)dVar1;
    local_20 = (longlong)(int)fVar4;
    if ((int)fVar4 < iVar6) {
      fStack_24 = -fVar4;
      fVar4 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
    }
    else if ((int)fVar4 < *(int *)(param_1 + 0x134)) {
      fVar4 = (float)((double)CONCAT44(0x43300000,(int)fVar4 - iVar6 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x138);
      if ((int)fVar4 < iVar8) {
        fStack_24 = -(float)((int)fVar4 - *(int *)(param_1 + 0x134));
        fVar4 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
      }
      else if ((int)fVar4 < iVar8 + (int)dRam00000000._0_4_) {
        fVar4 = (float)((double)CONCAT44(0x43300000,(int)fVar4 - iVar8 ^ 0x80000000) - dRam00000000)
        ;
        local_18 = local_20;
      }
      else {
        fStack_24 = -(float)(((int)fVar4 - iVar8) - (int)dRam00000000._0_4_);
        fVar4 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
      }
    }
    iVar8 = (int)fVar4;
    local_10 = (longlong)iVar8;
    iVar7 = iVar8 >> 0x1f;
    iVar8 = ((iVar7 * 8 | (uint)(iVar8 * 0x20000000 + iVar7) >> 0x1d) - iVar7) + 1;
    if (4 < iVar8) {
      iVar8 = 4 - iVar8;
    }
    fStack_2c = -(float)(iVar8 * 5);
    local_38 = local_38 + (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
  }
  else if (iVar7 == 3) {
    fVar4 = (float)(int)dVar1;
    if ((int)fVar4 < iVar6) {
      fStack_24 = -fVar4;
      fVar3 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
    }
    else if ((int)fVar4 < *(int *)(param_1 + 0x134)) {
      fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar4 - iVar6 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x138);
      if ((int)fVar4 < iVar8) {
        fStack_24 = -(float)((int)fVar4 - *(int *)(param_1 + 0x134));
        fVar3 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
      }
      else if ((int)fVar4 < iVar8 + (int)dRam00000000._0_4_) {
        fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar4 - iVar8 ^ 0x80000000) - dRam00000000)
        ;
        local_18 = (longlong)(int)fVar4;
      }
      else {
        fStack_24 = -(float)(((int)fVar4 - iVar8) - (int)dRam00000000._0_4_);
        fVar3 = (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
        local_20 = (longlong)(int)fVar4;
      }
    }
    local_10 = (longlong)(int)fVar3;
    fStack_2c = -(float)(int)fVar3;
    local_38 = local_38 -
               *(float *)(param_1 + 300) *
               (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
  }
  else if (iVar7 == 4) {
    fStack_24 = -dRam00000000._0_4_;
    local_38 = local_38 -
               *(float *)(param_1 + 300) *
               (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
  }
  if (param_2 != (float *)0x0) {
    fVar4 = *(float *)(param_1 + 0x118);
    iVar8 = (int)(fVar2 - dRam00000000._0_4_);
    local_10 = (longlong)iVar8;
    if (iVar8 < iVar6) {
      iVar7 = 0;
    }
    else if (iVar8 < *(int *)(param_1 + 0x134)) {
      iVar7 = 1;
    }
    else if (iVar8 < *(int *)(param_1 + 0x138)) {
      iVar7 = 2;
    }
    else {
      iVar7 = 4;
      if (iVar8 < *(int *)(param_1 + 0x138) + (int)dRam00000000._0_4_) {
        iVar7 = 3;
      }
    }
    if (iVar7 == 1) {
      fVar2 = (float)(int)(fVar2 - dRam00000000._0_4_);
      if ((int)fVar2 < iVar6) {
        fStack_2c = -fVar2;
        fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
      }
      else if ((int)fVar2 < *(int *)(param_1 + 0x134)) {
        fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar2 - iVar6 ^ 0x80000000) - dRam00000000)
        ;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x138);
        if ((int)fVar2 < iVar8) {
          fStack_2c = -(float)((int)fVar2 - *(int *)(param_1 + 0x134));
          fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
        }
        else if ((int)fVar2 < iVar8 + (int)dRam00000000._0_4_) {
          fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar2 - iVar8 ^ 0x80000000) -
                         dRam00000000);
          local_18 = (longlong)(int)fVar2;
        }
        else {
          fStack_2c = -(float)(((int)fVar2 - iVar8) - (int)dRam00000000._0_4_);
          fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
          local_20 = (longlong)(int)fVar2;
        }
      }
      iVar8 = (int)fVar3;
      local_10 = (longlong)iVar8;
      iVar6 = iVar8 >> 0x1f;
      iVar8 = ((iVar6 * 8 | (uint)(iVar8 * 0x20000000 + iVar6) >> 0x1d) - iVar6) + 1;
      if (4 < iVar8) {
        iVar8 = 4 - iVar8;
      }
      fStack_24 = -(float)(iVar8 * 5);
      fVar4 = fVar4 + (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
    }
    else if (iVar7 == 3) {
      fVar2 = (float)(int)(fVar2 - dRam00000000._0_4_);
      if ((int)fVar2 < iVar6) {
        fStack_2c = -fVar2;
        fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
      }
      else if ((int)fVar2 < *(int *)(param_1 + 0x134)) {
        fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar2 - iVar6 ^ 0x80000000) - dRam00000000)
        ;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x138);
        if ((int)fVar2 < iVar8) {
          fStack_2c = -(float)((int)fVar2 - *(int *)(param_1 + 0x134));
          fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
        }
        else if ((int)fVar2 < iVar8 + (int)dRam00000000._0_4_) {
          fVar3 = (float)((double)CONCAT44(0x43300000,(int)fVar2 - iVar8 ^ 0x80000000) -
                         dRam00000000);
          local_18 = (longlong)(int)fVar2;
        }
        else {
          fStack_2c = -(float)(((int)fVar2 - iVar8) - (int)dRam00000000._0_4_);
          fVar3 = (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
          local_20 = (longlong)(int)fVar2;
        }
      }
      local_10 = (longlong)(int)fVar3;
      fStack_24 = -(float)(int)fVar3;
      fVar4 = fVar4 - *(float *)(param_1 + 300) *
                      (float)((double)CONCAT44(0x43300000,fStack_24) - dRam00000000);
    }
    else if (iVar7 == 4) {
      fStack_2c = -dRam00000000._0_4_;
      fVar4 = fVar4 - *(float *)(param_1 + 300) *
                      (float)((double)CONCAT44(0x43300000,fStack_2c) - dRam00000000);
    }
    *param_2 = dRam00000000._0_4_;
    param_2[1] = local_38 - fVar4;
    param_2[2] = fVar5;
  }
  local_34 = *(undefined4 *)(param_1 + 0x11c);
  local_3c = *(undefined4 *)(param_1 + 0x114);
  if (*(char *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0x54) = 1;
    FUN_segment_0__8056e704(&local_48,param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = local_48;
    *(undefined4 *)(param_1 + 0x4c) = local_44;
    *(undefined4 *)(param_1 + 0x50) = local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x13c,param_1 + 0x48,&local_3c);
}

// === gfx_EGG_Video_806fa2c0 (0x806fa2c0) ===
undefined4 gfx_EGG_Video_806fa2c0(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x130)) {
    return 0;
  }
  if (param_2 < *(int *)(param_1 + 0x134)) {
    return 1;
  }
  if (param_2 < *(int *)(param_1 + 0x138)) {
    return 2;
  }
  if (*(int *)(param_1 + 0x138) + iRam00000000 <= param_2) {
    return 4;
  }
  return 3;
}

// === gfx_EGG_Video_806fa31c (0x806fa31c) ===
double gfx_EGG_Video_806fa31c(int param_1,uint param_2)

{
  int iVar1;
  double dVar2;
  
  if ((int)param_2 < *(int *)(param_1 + 0x130)) {
    dVar2 = (double)(float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000000);
  }
  else if ((int)param_2 < *(int *)(param_1 + 0x134)) {
    dVar2 = (double)(float)((double)CONCAT44(0x43300000,
                                             param_2 - *(int *)(param_1 + 0x130) ^ 0x80000000) -
                           dRam00000000);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x138);
    if ((int)param_2 < iVar1) {
      dVar2 = (double)(float)((double)CONCAT44(0x43300000,
                                               param_2 - *(int *)(param_1 + 0x134) ^ 0x80000000) -
                             dRam00000000);
    }
    else if ((int)param_2 < iVar1 + dRam00000000._0_4_) {
      dVar2 = (double)(float)((double)CONCAT44(0x43300000,param_2 - iVar1 ^ 0x80000000) -
                             dRam00000000);
    }
    else {
      dVar2 = (double)(float)((double)CONCAT44(0x43300000,
                                               (param_2 - iVar1) - dRam00000000._0_4_ ^ 0x80000000)
                             - dRam00000000);
    }
  }
  return dVar2;
}

// === gfx_EGG_Video_806fa408 (0x806fa408) ===
double gfx_EGG_Video_806fa408(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = *(int *)(param_1 + 0x130);
  dVar4 = (double)*(float *)(param_1 + 0x118);
  if ((int)param_2 < iVar3) {
    iVar2 = 0;
  }
  else if ((int)param_2 < *(int *)(param_1 + 0x134)) {
    iVar2 = 1;
  }
  else if ((int)param_2 < *(int *)(param_1 + 0x138)) {
    iVar2 = 2;
  }
  else {
    iVar2 = 4;
    if ((int)param_2 < (int)(*(int *)(param_1 + 0x138) + dRam00000000._0_4_)) {
      iVar2 = 3;
    }
  }
  if (iVar2 == 1) {
    if ((int)param_2 < iVar3) {
      fVar1 = (float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000000);
    }
    else if ((int)param_2 < *(int *)(param_1 + 0x134)) {
      fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - iVar3 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x138);
      if ((int)param_2 < iVar3) {
        fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - *(int *)(param_1 + 0x134) ^ 0x80000000
                                        ) - dRam00000000);
      }
      else if ((int)param_2 < (int)(iVar3 + dRam00000000._0_4_)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - iVar3 ^ 0x80000000) - dRam00000000);
      }
      else {
        fVar1 = (float)((double)CONCAT44(0x43300000,
                                         (param_2 - iVar3) - dRam00000000._0_4_ ^ 0x80000000) -
                       dRam00000000);
      }
    }
    iVar3 = (int)fVar1 >> 0x1f;
    iVar3 = ((iVar3 * 8 | (uint)((int)fVar1 * 0x20000000 + iVar3) >> 0x1d) - iVar3) + 1;
    if (4 < iVar3) {
      iVar3 = 4 - iVar3;
    }
    dVar4 = (double)(float)(dVar4 + (double)(float)((double)CONCAT44(0x43300000,
                                                                     iVar3 * 5 ^ 0x80000000) -
                                                   dRam00000000));
  }
  else if (iVar2 == 3) {
    if ((int)param_2 < iVar3) {
      fVar1 = (float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000000);
    }
    else if ((int)param_2 < *(int *)(param_1 + 0x134)) {
      fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - iVar3 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x138);
      if ((int)param_2 < iVar3) {
        fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - *(int *)(param_1 + 0x134) ^ 0x80000000
                                        ) - dRam00000000);
      }
      else if ((int)param_2 < (int)(iVar3 + dRam00000000._0_4_)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,param_2 - iVar3 ^ 0x80000000) - dRam00000000);
      }
      else {
        fVar1 = (float)((double)CONCAT44(0x43300000,
                                         (param_2 - iVar3) - dRam00000000._0_4_ ^ 0x80000000) -
                       dRam00000000);
      }
    }
    dVar4 = (double)(float)(dVar4 - (double)(*(float *)(param_1 + 300) *
                                            (float)((double)CONCAT44(0x43300000,
                                                                     (int)fVar1 ^ 0x80000000) -
                                                   dRam00000000)));
  }
  else if (iVar2 == 4) {
    dVar4 = (double)(float)(dVar4 - (double)(*(float *)(param_1 + 300) *
                                            (float)((double)CONCAT44(0x43300000,
                                                                     dRam00000000._0_4_ ^ 0x80000000
                                                                    ) - dRam00000000)));
  }
  return dVar4;
}

// === gfx_EGG_Video_806fa6f4 (0x806fa6f4) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fa6f4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fac9c (0x806fac9c) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fac9c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fb094 (0x806fb094) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fb094(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fb48c (0x806fb48c) ===
undefined4 * gfx_EGG_Video_806fb48c(undefined4 *param_1,int *param_2)

{
  short sVar1;
  double dVar2;
  float fVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  
  gfx_EGG_Video_806fbc74(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x41] = param_1[0xc];
  param_1[0x42] = param_1[0xd];
  param_1[0x43] = param_1[0xe];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    FUN_segment_0__8056e704(&local_38,param_1 + 0x16);
    param_1[0x12] = local_38;
    param_1[0x13] = local_34;
    param_1[0x14] = local_30;
  }
  param_1[0x44] = param_1[0x12];
  param_1[0x45] = param_1[0x13];
  param_1[0x46] = param_1[0x14];
  param_1[0x47] = param_1[0xf];
  param_1[0x48] = param_1[0x10];
  param_1[0x49] = param_1[0x11];
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(*param_2 + 0x30);
  sVar1 = *(short *)(*param_2 + 0x2c);
  *(short *)((int)param_1 + 0x12a) = sVar1;
  *(undefined2 *)(param_1 + 0x4b) = *(undefined2 *)(*param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x12e) = *(undefined2 *)(*param_2 + 0x2e);
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(*param_2 + 0x34);
  *(bool *)(param_1 + 0x4f) = *(short *)(*param_2 + 0x2a) == 1;
  if (sVar1 < 2) {
    *(undefined2 *)((int)param_1 + 0x12a) = 2;
  }
  if (*(short *)(param_1 + 0x4b) < 2) {
    *(undefined2 *)(param_1 + 0x4b) = 2;
  }
  fVar3 = g_Ram_float;
  uStack_1c = (int)*(short *)((int)param_1 + 0x12a) ^ 0x80000000;
  uStack_14 = (int)*(short *)(param_1 + 0x4b) ^ 0x80000000;
  dVar2 = (double)CONCAT44(g_Ram_float,uRam00000004);
  local_20 = 0x43300000;
  local_18 = 0x43300000;
  param_1[0x4d] = g_Ram_float / (float)((double)CONCAT44(0x43300000,uStack_1c) - dVar2);
  param_1[0x4e] = fVar3 / (float)((double)CONCAT44(0x43300000,uStack_14) - dVar2);
  gfx_EGG_Video_806fb708(&local_2c,param_1,0);
  param_1[0xc] = local_2c;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  param_1[0xd] = local_28;
  param_1[0xe] = local_24;
  return param_1;
}

// === gfx_EGG_Video_806fb664 (0x806fb664) ===
void gfx_EGG_Video_806fb664(int *param_1)

{
  undefined auStack_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = param_1[0xc];
  local_1c = param_1[0xd];
  local_18 = param_1[0xe];
  gfx_EGG_Video_806fb708(&local_2c,param_1,*(undefined4 *)(iRam00000000 + 0x20));
  param_1[0xc] = local_2c;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
  param_1[0xd] = local_28;
  param_1[0xe] = local_24;
  FUN_segment_0__80404498(auStack_38,param_1 + 0xc,&local_20);
  (**(code **)(*param_1 + 0x128))(param_1,auStack_38);
  return;
}

// === gfx_EGG_Video_806fb708 (0x806fb708) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fb708(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fb8c4 (0x806fb8c4) ===
double gfx_EGG_Video_806fb8c4(int param_1)

{
  return (double)(dRam00000000._0_4_ +
                 (float)((double)CONCAT44(0x43300000,(int)*(short *)(param_1 + 0x12e) ^ 0x80000000)
                        - dRam00000000));
}

// === EGG_Video_validate_806fb900 (0x806fb900) ===
void EGG_Video_validate_806fb900(int param_1,int param_2)

{
  undefined auStack_18 [20];
  
  gfx_EGG_Video_806fb708(auStack_18,param_1,*(int *)(iRam00000000 + 0x20) - param_2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x140,param_1 + 0x110,auStack_18);
}

// === EGG_Video_validate_806fb984 (0x806fb984) ===
int EGG_Video_validate_806fb984(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === gfx_EGG_Video_806fb9c4 (0x806fb9c4) ===
undefined4 * gfx_EGG_Video_806fb9c4(undefined4 *param_1)

{
  EGG_Video_validate_806ffdb4();
  *param_1 = 0;
  param_1[1] = 2;
  return param_1;
}

// === gfx_EGG_Video_806fba08 (0x806fba08) ===
undefined4 * gfx_EGG_Video_806fba08(undefined4 *param_1)

{
  EGG_Video_assertFail_806fff48();
  *param_1 = 0;
  param_1[1] = 2;
  return param_1;
}

// === gfx_EGG_Video_806fba4c (0x806fba4c) ===
undefined4 * gfx_EGG_Video_806fba4c(undefined4 *param_1)

{
  FUN_segment_0__80700090();
  *param_1 = 0;
  param_1[1] = 2;
  return param_1;
}

// === gfx_EGG_Video_806fba90 (0x806fba90) ===
void gfx_EGG_Video_806fba90(int *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  (**(code **)(*param_1 + 0x44))(param_1);
  (**(code **)(*param_1 + 0x5c))(param_1);
  (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*param_1 + 0xb8))(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1);
  (**(code **)(*param_1 + 0xbc))(param_1);
  gfx_EGG_Video_806fc9bc(uRam00000000,param_1);
  return;
}

// === gfx_EGG_Video_806fbb50 (0x806fbb50) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fbb50(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fbbc4 (0x806fbbc4) ===
void gfx_EGG_Video_806fbbc4(int *param_1)

{
  if ((*(ushort *)(param_1 + 0xb) & 3) != 0) {
    FUN_segment_0__80701bcc();
  }
  if ((*(ushort *)(param_1 + 0xb) & 4) != 0) {
    *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xfffb;
    (**(code **)(*param_1 + 0x6c))(param_1);
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  if ((*(ushort *)(param_1 + 0xb) & 8) != 0) {
    *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xfff7;
    (**(code **)(*param_1 + 0x78))(param_1);
    (**(code **)(*param_1 + 0x7c))(param_1);
  }
  return;
}

// === gfx_EGG_Video_806fbc74 (0x806fbc74) ===
undefined4 * gfx_EGG_Video_806fbc74(undefined4 *param_1)

{
  gfx_EGG_Video_806fb9c4();
  *param_1 = 0;
  param_1[0x3f] = 0xfffff830;
  param_1[0x40] = 0xfffff830;
  return param_1;
}

// === gfx_EGG_Video_806fbcbc (0x806fbcbc) ===
undefined4 * gfx_EGG_Video_806fbcbc(undefined4 *param_1)

{
  gfx_EGG_Video_806fba08();
  *param_1 = 0;
  param_1[0x3f] = 0xfffff830;
  param_1[0x40] = 0xfffff830;
  return param_1;
}

// === gfx_EGG_Video_806fbd04 (0x806fbd04) ===
undefined4 * gfx_EGG_Video_806fbd04(undefined4 *param_1)

{
  gfx_EGG_Video_806fba4c();
  *param_1 = 0;
  param_1[0x3f] = 0xfffff830;
  param_1[0x40] = 0xfffff830;
  return param_1;
}

// === EGG_Video_validate_806fbd4c (0x806fbd4c) ===
void EGG_Video_validate_806fbd4c(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_98 [136];
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_98,0x80,0,uVar1);
}

// === EGG_Video_validate_806fbe40 (0x806fbe40) ===
void EGG_Video_validate_806fbe40(int *param_1)

{
  undefined4 *puVar1;
  undefined auStack_68 [48];
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
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 300))(param_1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_38,auStack_68);
}

// === EGG_Video_validate_806fc060 (0x806fc060) ===
void EGG_Video_validate_806fc060(int *param_1,int param_2)

{
  undefined auStack_68 [48];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1[0x3f] != *(int *)(iRam00000000 + 0x20) - param_2) {
    if (param_2 == 0) {
      FUN_segment_0__80701bcc();
      param_1 = param_1 + 0x16;
    }
    else {
      param_1 = (int *)(**(code **)(*param_1 + 300))();
    }
    local_38 = *param_1;
    local_34 = param_1[1];
    local_30 = param_1[2];
    local_2c = param_1[3];
    local_28 = param_1[4];
    local_24 = param_1[5];
    local_20 = param_1[6];
    local_1c = param_1[7];
    local_18 = param_1[8];
    local_14 = param_1[9];
    local_10 = param_1[10];
    local_c = param_1[0xb];
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(&local_38,auStack_68);
  }
  param_1[0x3f] = *(int *)(iRam00000000 + 0x20) - param_2;
  return;
}

// === gfx_EGG_Video_806fc21c (0x806fc21c) ===
void gfx_EGG_Video_806fc21c(int *param_1,int param_2)

{
  double dVar1;
  
  if (param_1[0x40] != *(int *)(iRam00000000 + 0x20) - param_2) {
    if (param_2 == 0) {
      dVar1 = (double)(float)param_1[0x10];
    }
    else {
      dVar1 = (double)(**(code **)(*param_1 + 0x130))();
    }
    *(float *)(param_1[0x2b] + 100) = (float)dVar1;
  }
  param_1[0x40] = *(int *)(iRam00000000 + 0x20) - param_2;
  return;
}

// === gfx_EGG_Video_806fc2a8 (0x806fc2a8) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fc2a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === gfx_EGG_Video_806fc460 (0x806fc460) ===
/* WARNING: Control flow encountered bad instruction data */

void gfx_EGG_Video_806fc460(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Video_validate_806fc618 (0x806fc618) ===
void EGG_Video_validate_806fc618(undefined4 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(400);
}

// === EGG_Video_validate_806fc674 (0x806fc674) ===
undefined4 * EGG_Video_validate_806fc674(undefined4 *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  
  if (param_1 != (void *)0) {
    *param_1 = 0;
    for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 1); uVar2 = uVar2 + 1) {
      piVar1 = *(int **)(param_1[2] + (uint)uVar2 * 4);
      if (piVar1 != (int *)0) {
        if (piVar1 != (int *)0) {
          (**(code **)(*piVar1 + 8))(piVar1,1);
        }
        *(undefined4 *)(param_1[2] + (uint)uVar2 * 4) = 0;
      }
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Video_validate_806fc71c (0x806fc71c) ===
int EGG_Video_validate_806fc71c(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x20);
  }
  return iRam00000000;
}

// === gfx_EGG_Video_806fc7a4 (0x806fc7a4) ===
void gfx_EGG_Video_806fc7a4(void)

{
  if (g_Ram_ptr != (int *)0) {
    if (g_Ram_ptr != (int *)0) {
      (**(code **)(*g_Ram_ptr + 8))(g_Ram_ptr,1);
    }
    g_Ram_ptr = (int *)0;
  }
  return;
}

// === gfx_EGG_Video_806fc7f4 (0x806fc7f4) ===
void gfx_EGG_Video_806fc7f4(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  
  for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 4); uVar2 = uVar2 + 1) {
    iVar3 = (uint)uVar2 * 4;
    piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar3);
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 100))();
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar3) + 0xc))();
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar3) + 0x1c))();
    }
  }
  return;
}

// === gfx_EGG_Video_806fc89c (0x806fc89c) ===
void gfx_EGG_Video_806fc89c(int param_1)

{
  int *piVar1;
  ushort uVar2;
  
  for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 0x14); uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x18) + (uint)uVar2 * 4);
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 0x10))();
    }
  }
  return;
}

// === gfx_EGG_Video_806fc90c (0x806fc90c) ===
void gfx_EGG_Video_806fc90c(int param_1)

{
  int *piVar1;
  ushort uVar2;
  
  for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 0xc); uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + (uint)uVar2 * 4);
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 0x14))();
    }
  }
  for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 0xc); uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + (uint)uVar2 * 4);
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 0x1c))();
    }
  }
  return;
}

// === gfx_EGG_Video_806fc9bc (0x806fc9bc) ===
int gfx_EGG_Video_806fc9bc(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 4) <= uVar1) {
      uVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(ushort *)(param_1 + 0xc);
        *(int **)(*(int *)(param_1 + 0x10) + (uint)uVar1 * 4) = param_2;
        *(ushort *)(param_1 + 0xc) = uVar1 + 1;
      }
      uVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
      if ((uVar2 & 2) != 0) {
        uVar1 = *(ushort *)(param_1 + 0x14);
        *(int **)(*(int *)(param_1 + 0x18) + (uint)uVar1 * 4) = param_2;
        *(ushort *)(param_1 + 0x14) = uVar1 + 1;
      }
      *(int **)(*(int *)(param_1 + 8) + (uint)*(ushort *)(param_1 + 4) * 4) = param_2;
      param_2[0x29] = *(ushort *)(param_1 + 4) + 1000;
      uVar1 = *(short *)(param_1 + 4) + 1;
      *(ushort *)(param_1 + 4) = uVar1;
      return uVar1 - 1;
    }
    if (*(int **)(*(int *)(param_1 + 8) + (uint)uVar1 * 4) == param_2) break;
    uVar1 = uVar1 + 1;
  }
  return -1;
}

// === gfx_EGG_Video_806fcac0 (0x806fcac0) ===
void gfx_EGG_Video_806fcac0
               (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  
  if (*(short *)(param_2 + 4) != 0) {
    FUN_segment_0__80676784(uRam00000000,param_3,0x10);
    while (piVar1 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 0xe0))(param_1,piVar1,param_3,param_4,param_5);
    }
  }
  return;
}

// === EGG_Video_assertFail_806fcb64 (0x806fcb64) ===
void EGG_Video_assertFail_806fcb64(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fcc34 (0x806fcc34) ===
void EGG_Video_assertFail_806fcc34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fcd04 (0x806fcd04) ===
void EGG_Video_assertFail_806fcd04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fce48 (0x806fce48) ===
void EGG_Video_assertFail_806fce48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806fcf8c (0x806fcf8c) ===
int gfx_EGG_Video_806fcf8c
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_segment_0__80676784(uRam00000000,param_3,0x10);
    iVar2 = 0;
    while (piVar4 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        iVar3 = (**(code **)(*piVar4 + 0xd0))
                          (param_1,piVar4,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fd064 (0x806fd064) ===
int gfx_EGG_Video_806fd064
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_segment_0__80676784(uRam00000000,param_3,0x10);
    iVar2 = 0;
    while (piVar4 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        iVar3 = (**(code **)(*piVar4 + 0xd4))
                          (param_1,piVar4,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fd13c (0x806fd13c) ===
int gfx_EGG_Video_806fd13c
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar6 = (int *)0;
    if ((param_6 != 0) && (puVar3 = *(uint **)(param_6 + 0x58), puVar3 != (uint *)0x0)) {
      if ((*puVar3 & 0x100) == 0) {
        piVar6 = (int *)0;
      }
      else {
        piVar6 = (int *)puVar3[1];
      }
      if (piVar6 != (int *)0) {
        iVar2 = 1;
        iVar4 = (**(code **)(*piVar6 + 0xd8))
                          (param_1,piVar6,param_3,param_4,param_5,param_6,param_7,param_8);
        if (iVar4 == 0) {
          iVar2 = 0;
        }
      }
    }
    FUN_segment_0__80676784(param_1,uRam00000000,param_3,0x10);
    while (piVar5 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar5 != (int *)0) {
      if (piVar5 != piVar6) {
        iVar4 = (**(code **)(*piVar5 + 0xd8))
                          (param_1,piVar5,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((iVar4 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fd294 (0x806fd294) ===
int gfx_EGG_Video_806fd294
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar6 = (int *)0;
    if ((param_6 != 0) && (puVar3 = *(uint **)(param_6 + 0x58), puVar3 != (uint *)0x0)) {
      if ((*puVar3 & 0x100) == 0) {
        piVar6 = (int *)0;
      }
      else {
        piVar6 = (int *)puVar3[1];
      }
      if (piVar6 != (int *)0) {
        iVar2 = 1;
        iVar4 = (**(code **)(*piVar6 + 0xdc))
                          (param_1,piVar6,param_3,param_4,param_5,param_6,param_7,param_8);
        if (iVar4 == 0) {
          iVar2 = 0;
        }
      }
    }
    FUN_segment_0__80676784(param_1,uRam00000000,param_3,0x10);
    while (piVar5 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar5 != (int *)0) {
      if (piVar5 != piVar6) {
        iVar4 = (**(code **)(*piVar5 + 0xdc))
                          (param_1,piVar5,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((iVar4 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
          iVar2 = 1;
        }
      }
    }
  }
  return iVar2;
}

// === EGG_Video_assertFail_806fd3ec (0x806fd3ec) ===
void EGG_Video_assertFail_806fd3ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fd4dc (0x806fd4dc) ===
void EGG_Video_assertFail_806fd4dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fd5cc (0x806fd5cc) ===
void EGG_Video_assertFail_806fd5cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Video_assertFail_806fd730 (0x806fd730) ===
void EGG_Video_assertFail_806fd730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806fd894 (0x806fd894) ===
int gfx_EGG_Video_806fd894
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_segment_0__80676ad0(uRam00000000,param_3,0x10);
    if (iVar2 == 0) {
      iVar2 = gfx_EGG_Video_806fcf8c
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_segment_0__80675b9c(uRam00000000);
      iVar2 = 0;
      while (piVar4 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          iVar3 = (**(code **)(*piVar4 + 0xf4))
                            (param_1,piVar4,param_3,param_4,param_5,param_6,param_7,param_8);
          if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
            iVar2 = 1;
          }
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fd9a8 (0x806fd9a8) ===
int gfx_EGG_Video_806fd9a8
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_segment_0__80676ad0(uRam00000000,param_3,0x10);
    if (iVar2 == 0) {
      iVar2 = gfx_EGG_Video_806fd064
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_segment_0__80675b9c(uRam00000000);
      iVar2 = 0;
      while (piVar4 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          iVar3 = (**(code **)(*piVar4 + 0xf8))
                            (param_1,piVar4,param_3,param_4,param_5,param_6,param_7,param_8);
          if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
            iVar2 = 1;
          }
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fdabc (0x806fdabc) ===
int gfx_EGG_Video_806fdabc
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = FUN_segment_0__80676ad0(uRam00000000,param_3,0x10);
    if (iVar3 == 0) {
      iVar2 = gfx_EGG_Video_806fd13c
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      piVar6 = (int *)0;
      if ((param_6 != 0) && (puVar4 = *(uint **)(param_6 + 0x58), puVar4 != (uint *)0x0)) {
        if ((*puVar4 & 0x100) == 0) {
          piVar6 = (int *)0;
        }
        else {
          piVar6 = (int *)puVar4[1];
        }
        if (piVar6 != (int *)0) {
          iVar2 = 1;
          iVar3 = (**(code **)(*piVar6 + 0xfc))
                            (param_1,piVar6,param_3,param_4,param_5,param_6,param_7,param_8);
          if (iVar3 == 0) {
            iVar2 = 0;
          }
        }
      }
      FUN_segment_0__80675b9c(uRam00000000);
      while (piVar5 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar5 != (int *)0) {
        if (piVar5 != piVar6) {
          iVar3 = (**(code **)(*piVar5 + 0xfc))
                            (param_1,piVar5,param_3,param_4,param_5,param_6,param_7,param_8);
          if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
            iVar2 = 1;
          }
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fdc4c (0x806fdc4c) ===
int gfx_EGG_Video_806fdc4c
              (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(short *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = FUN_segment_0__80676ad0(uRam00000000,param_3,0x10);
    if (iVar3 == 0) {
      iVar2 = gfx_EGG_Video_806fd294
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      piVar6 = (int *)0;
      if ((param_6 != 0) && (puVar4 = *(uint **)(param_6 + 0x58), puVar4 != (uint *)0x0)) {
        if ((*puVar4 & 0x100) == 0) {
          piVar6 = (int *)0;
        }
        else {
          piVar6 = (int *)puVar4[1];
        }
        if (piVar6 != (int *)0) {
          iVar2 = 1;
          iVar3 = (**(code **)(*piVar6 + 0x100))
                            (param_1,piVar6,param_3,param_4,param_5,param_6,param_7,param_8);
          if (iVar3 == 0) {
            iVar2 = 0;
          }
        }
      }
      FUN_segment_0__80675b9c(uRam00000000);
      while (piVar5 = (int *)FUN_segment_0__80675b34(uRam00000000), piVar5 != (int *)0) {
        if (piVar5 != piVar6) {
          iVar3 = (**(code **)(*piVar5 + 0x100))
                            (param_1,piVar5,param_3,param_4,param_5,param_6,param_7,param_8);
          if ((iVar3 != 0) || (bVar1 = iVar2 != 0, iVar2 = 0, bVar1)) {
            iVar2 = 1;
          }
        }
      }
    }
  }
  return iVar2;
}

// === gfx_EGG_Video_806fdddc (0x806fdddc) ===
undefined4 gfx_EGG_Video_806fdddc(int param_1)

{
  if (param_1 == 0) {
    return 0xc;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    return 0xc;
  }
  return 0xc;
}

// === gfx_EGG_Video_806fde64 (0x806fde64) ===
undefined4 gfx_EGG_Video_806fde64(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)0x210;
  iVar2 = 2;
  do {
    if (param_1 == *piVar1) {
      return 0;
    }
    if (param_1 == piVar1[1]) {
      return 0;
    }
    if (param_1 == piVar1[2]) {
      return 0;
    }
    if (param_1 == piVar1[3]) {
      return 0;
    }
    if (param_1 == piVar1[4]) {
      return 0;
    }
    if (param_1 == piVar1[5]) {
      return 0;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)0x240;
  iVar2 = 2;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    if (param_1 == piVar1[1]) {
      return 1;
    }
    if (param_1 == piVar1[2]) {
      return 1;
    }
    if (param_1 == piVar1[3]) {
      return 1;
    }
    if (param_1 == piVar1[4]) {
      return 1;
    }
    if (param_1 == piVar1[5]) {
      return 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)0x270;
  iVar2 = 2;
  while( true ) {
    if (param_1 == *piVar1) {
      return 2;
    }
    if (param_1 == piVar1[1]) {
      return 2;
    }
    if (param_1 == piVar1[2]) {
      return 2;
    }
    if (param_1 == piVar1[3]) break;
    if (param_1 == piVar1[4]) {
      return 2;
    }
    if (param_1 == piVar1[5]) {
      return 2;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  return 2;
}

// === gfx_EGG_Video_806fe030 (0x806fe030) ===
undefined4 gfx_EGG_Video_806fe030(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)0x2a0;
  iVar2 = 3;
  do {
    if (param_1 == *piVar1) {
      return 0;
    }
    if (param_1 == piVar1[1]) {
      return 0;
    }
    if (param_1 == piVar1[2]) {
      return 0;
    }
    if (param_1 == piVar1[3]) {
      return 0;
    }
    if (param_1 == piVar1[4]) {
      return 0;
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)0x2dc;
  iVar2 = 0x11;
  do {
    if (param_1 == *piVar1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)0x320;
  iVar2 = 2;
  while( true ) {
    if (param_1 == *piVar1) {
      return 2;
    }
    if (param_1 == piVar1[1]) {
      return 2;
    }
    if (param_1 == piVar1[2]) {
      return 2;
    }
    if (param_1 == piVar1[3]) {
      return 2;
    }
    if (param_1 == piVar1[4]) {
      return 2;
    }
    if (param_1 == piVar1[5]) {
      return 2;
    }
    if (param_1 == piVar1[6]) {
      return 2;
    }
    if (param_1 == piVar1[7]) break;
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0xffffffff;
    }
  }
  return 2;
}

// === gfx_EGG_Video_806fe1a4 (0x806fe1a4) ===
undefined4 gfx_EGG_Video_806fe1a4(int param_1)

{
  if (param_1 == 0) {
    return 0x210;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    return 0x270;
  }
  return 0x240;
}

// === gfx_EGG_Video_806fe1e8 (0x806fe1e8) ===
undefined4 gfx_EGG_Video_806fe1e8(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = gfx_EGG_Video_806fe030();
  if (iVar1 == 0) {
    iVar1 = 0x210;
  }
  else if (iVar1 == 1) {
    iVar1 = 0x240;
  }
  else if (iVar1 == 2) {
    iVar1 = 0x270;
  }
  else {
    iVar1 = 0;
  }
  return *(undefined4 *)(iVar1 + (param_2 & 0xff) * 4);
}

// === gfx_EGG_Video_806fe2a8 (0x806fe2a8) ===
undefined4 gfx_EGG_Video_806fe2a8(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 1) {
    if (param_1 < 9) {
      return 1;
    }
    if (param_1 - 9 < 9) {
      uVar1 = FUN_segment_0__80444f08(param_1,0);
      return uVar1;
    }
  }
  if (param_2 != 0) {
    if (param_1 - 0x12 < 9) {
      return 1;
    }
    if (param_1 - 0x1b < 9) {
      uVar1 = FUN_segment_0__80444f08(param_1,0);
      return uVar1;
    }
  }
  return 0;
}

// === gfx_EGG_Video_806fe314 (0x806fe314) ===
void gfx_EGG_Video_806fe314(undefined4 param_1)

{
  FUN_segment_0__80444d14(param_1,0);
  return;
}

// === gfx_EGG_Video_806fe31c (0x806fe31c) ===
undefined4 gfx_EGG_Video_806fe31c(int param_1)

{
  if (((1 < param_1 - 0x18U) && (1 < param_1 - 0x1eU)) && (1 < param_1 - 0x24U)) {
    return 0;
  }
  return 1;
}

// === gfx_EGG_Video_806fe350 (0x806fe350) ===
undefined4 gfx_EGG_Video_806fe350(int param_1)

{
  if (((1 < param_1 - 0x1aU) && (1 < param_1 - 0x20U)) && (1 < param_1 - 0x26U)) {
    return 0;
  }
  return 1;
}

// === EGG_Video_validate_806fe384 (0x806fe384) ===
void EGG_Video_validate_806fe384(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  uVar1 = FUN_segment_0__8047d97c(uRam00000000);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar2 = FUN_segment_0__8047e2f8();
  if (uVar2 < 0x24) {
                    /* WARNING: Could not emulate address calculation at 0x806fe3e4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 << 2))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x44);
}

// === EGG_Video_validate_806ff3d8 (0x806ff3d8) ===
undefined4 * EGG_Video_validate_806ff3d8(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (void *)0) {
    piVar1 = (int *)param_1[1];
    *param_1 = 0;
    if (piVar1 != (int *)0) {
      if (piVar1 != (int *)0) {
        (**(code **)(*piVar1 + 8))(piVar1,1);
      }
      param_1[1] = 0;
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === gfx_EGG_Video_806ff464 (0x806ff464) ===
undefined4 gfx_EGG_Video_806ff464(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  double dVar3;
  float local_28;
  float local_24;
  float local_20;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_segment_0__8047d97c(uRam00000000,*(undefined4 *)(param_1 + 0xc));
    pfVar2 = (float *)FUN_segment_0__8047ed38();
    local_28 = *pfVar2;
    local_24 = pfVar2[1];
    local_20 = pfVar2[2];
    (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),param_2,&local_28,param_3);
    dVar3 = (double)(**(code **)(**(int **)(param_1 + 4) + 0x24))();
    (**(code **)(**(int **)(param_1 + 4) + 0x20))((double)(float)((double)local_28 * dVar3));
    uVar1 = FUN_segment_0__8070b090
                      (uRam00000000,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  }
  return uVar1;
}

// === gfx_EGG_Video_806ff550 (0x806ff550) ===
void gfx_EGG_Video_806ff550(int param_1,undefined4 param_2)

{
  undefined auStack_18 [24];
  
  FUN_segment_0__807104f0(*(undefined4 *)(param_1 + 4),param_2,auStack_18);
  return;
}

// === gfx_EGG_Video_806ff578 (0x806ff578) ===
undefined4 * gfx_EGG_Video_806ff578(undefined4 *param_1)

{
  EGG_Video_validate_806ffdb4();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Video_806ff5b4 (0x806ff5b4) ===
undefined4 * gfx_EGG_Video_806ff5b4(undefined4 *param_1)

{
  EGG_Video_assertFail_806fff48();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Video_806ff5f0 (0x806ff5f0) ===
undefined4 * gfx_EGG_Video_806ff5f0(undefined4 *param_1)

{
  FUN_segment_0__80700090();
  *param_1 = 0;
  return param_1;
}

// === gfx_EGG_Video_806ff62c (0x806ff62c) ===
void gfx_EGG_Video_806ff62c(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x58))();
  (**(code **)(*param_1 + 0x44))(param_1);
  (**(code **)(*param_1 + 0x5c))(param_1);
  (**(code **)(*param_1 + 0x60))(param_1);
  iVar1 = (**(code **)(*param_1 + 0xb4))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xe0))((double)g_Ram_float,param_1);
  }
  (**(code **)(*param_1 + 100))(param_1);
  FUN_segment_0__8070b674(g_Ram_float,param_1);
  return;
}

// === gfx_EGG_Video_806ff70c (0x806ff70c) ===
void gfx_EGG_Video_806ff70c(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*param_3 + 0x2c))();
  uVar2 = (**(code **)(*param_3 + 0x9c))(param_3);
  iVar3 = FUN_segment_0__80675ce8(param_1,param_2,uRam00000000,uVar2,-(uVar1 & 5) >> 0x1f,param_3);
  param_3[9] = iVar3;
  return;
}

// === EGG_Video_assertFail_806ff7b0 (0x806ff7b0) ===
void EGG_Video_assertFail_806ff7b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === gfx_EGG_Video_806ffad4 (0x806ffad4) ===
void gfx_EGG_Video_806ffad4(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x2a) != 0) {
    iVar1 = (**(code **)(*param_1 + 0xb4))();
    uVar2 = FUN_segment_0__8047e2d8(param_2);
    FUN_segment_0__80595ef0
              (*(undefined4 *)(*(int *)(iRam00000000 + 0x68) + (uVar2 & 0xff) * 4),iVar1 + 4);
    uVar3 = FUN_segment_0__8047e010(param_2);
    FUN_segment_0__805f7204(uVar3,param_1);
  }
  return;
}

// === gfx_EGG_Video_806ffb64 (0x806ffb64) ===
void gfx_EGG_Video_806ffb64(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  uVar2 = FUN_segment_0__8047e2d8(param_2);
  FUN_segment_0__80595f4c
            (*(undefined4 *)(*(int *)(iRam00000000 + 0x68) + (uVar2 & 0xff) * 4),iVar1 + 4,param_3);
  uVar3 = FUN_segment_0__8047e010(param_2);
  FUN_segment_0__805f73a0(uVar3,param_1);
  return;
}

// === gfx_EGG_Video_806ffbf8 (0x806ffbf8) ===
void gfx_EGG_Video_806ffbf8(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  double dVar1;
  
  dVar1 = (double)FUN_segment_0__8047e63c(param_2);
  if ((double)g_Ram_float <= dVar1) {
    if (*param_3 == 0x16) {
      *param_3 = 10;
    }
  }
  else if (*param_3 == 10) {
    *param_3 = 8;
  }
  else if (*param_3 == 0x16) {
    *param_3 = 0;
  }
  if ((*(char *)((int)g_Ram_float + 0x54) == 0) && (*(char *)((int)g_Ram_float + 0x55) == 0)
     ) {
    if (*param_4 == 5) {
      *param_4 = 3;
    }
    else if (*param_4 == 6) {
      *param_4 = 4;
    }
  }
  else if (*param_4 == 3) {
    *param_4 = 0;
  }
  else if (*param_4 == 4) {
    *param_4 = 0;
  }
  return;
}

// === gfx_EGG_Video_806ffd54 (0x806ffd54) ===
void gfx_EGG_Video_806ffd54(int *param_1)

{
  undefined4 uVar1;
  
  FUN_segment_0__80701bcc();
  uVar1 = (**(code **)(*param_1 + 0xd4))(param_1);
  (**(code **)(*(int *)param_1[0x2b] + 0x10))
            ((int *)param_1[0x2b],param_1 + 0x16,param_1 + 0xf,uVar1);
  return;
}

// === EGG_Video_validate_806ffdb4 (0x806ffdb4) ===
void EGG_Video_validate_806ffdb4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)*param_2;
  *(undefined *)((int)param_1 + 0x99) = 0;
  *(undefined *)((int)param_1 + 0x9a) = 0;
  *(undefined *)((int)param_1 + 0x9b) = 0;
  *(undefined *)(param_1 + 0x27) = 0;
  *(undefined *)((int)param_1 + 0x9d) = 1;
  param_1[0x28] = param_2;
  param_1[0x29] = 0xffffffff;
  *(undefined *)(param_1 + 0x2a) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x16);
}

// === EGG_Video_assertFail_806fff48 (0x806fff48) ===
void EGG_Video_assertFail_806fff48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}
