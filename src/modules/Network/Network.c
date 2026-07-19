// Network module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 171 decompiled functions
// Address range: 0x8055008c - 0x8055fea4

#include "Network.h"
#include "../types.h"
#include "../stubs.h"


// === net_RKNet_8055008c (0x8055008c) ===
u32 net_RKNet_8055008c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 3;
  while( true ) {
    iVar1 = (uVar3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x3c);
    }
    iVar1 = (uVar3 + 1 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) break;
    iVar1 = (uVar3 + 2 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x3c);
    }
    iVar1 = (uVar3 + 3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x3c);
    }
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
  }
  return *(u32 *)(param_1 + iVar1 + 0x3c);
}

// === net_RKNet_80550184 (0x80550184) ===
u32 net_RKNet_80550184(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 3;
  while( true ) {
    iVar1 = (uVar3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x4c);
    }
    iVar1 = (uVar3 + 1 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) break;
    iVar1 = (uVar3 + 2 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x4c);
    }
    iVar1 = (uVar3 + 3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(u32 *)(param_1 + iVar1 + 0x4c);
    }
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
  }
  return *(u32 *)(param_1 + iVar1 + 0x4c);
}

// === net_RKNet_8055027c (0x8055027c) ===
int net_RKNet_8055027c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 3;
  while( true ) {
    iVar1 = (uVar3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return param_1 + iVar1 + 0x40;
    }
    iVar1 = (uVar3 + 1 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) break;
    iVar1 = (uVar3 + 2 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return param_1 + iVar1 + 0x40;
    }
    iVar1 = (uVar3 + 3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return param_1 + iVar1 + 0x40;
    }
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
  }
  return param_1 + iVar1 + 0x40;
}

// === net_RKNet_80550374 (0x80550374) ===
u32 * net_RKNet_80550374(u32 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = 0;
  *(u32 *)(param_1 + 4) = 0;
  *(u32 *)(param_1 + 8) = 0;
  *(u32 *)(param_1 + 0xc) = 0;
  param_1[1] = 0;
  FUN_segment_0__80546b58(iRam00000000);
  *(u32 *)(param_1 + 4) = 0;
  uVar3 = 0;
  *(u32 *)(param_1 + 8) = 0;
  *(u32 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0xff;
  *(u32 *)(param_1 + 0x1c) = 0;
  *(u32 *)(param_1 + 0x18) = 0;
  iVar4 = 6;
  do {
    uVar1 = uVar3 & 0xff;
    uVar2 = uVar3 + 1 & 0xff;
    uVar3 = uVar3 + 2;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x20) = 0;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x34) = 0xffffffff;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x38) = 0;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x3c) = 0;
    param_1[uVar1 * 0x30 + 0x4c] = 0;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x24) = 0xffffffff;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x2c) = 0xffffffff;
    param_1[uVar1 * 0x30 + 0x4d] = 0;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x28) = 0xffffffff;
    *(u32 *)(param_1 + uVar1 * 0x30 + 0x30) = 0xffffffff;
    param_1[uVar1 * 0x30 + 0x4e] = 0;
    param_1[uVar1 * 0x30 + 0x40] = 0xff;
    param_1[uVar1 * 0x30 + 0x41] = 0xff;
    param_1[uVar1 * 0x30 + 0x42] = 0xff;
    param_1[uVar1 * 0x30 + 0x43] = 0xff;
    param_1[uVar1 * 0x30 + 0x44] = 0xff;
    param_1[uVar1 * 0x30 + 0x45] = 0xff;
    param_1[uVar1 * 0x30 + 0x46] = 0xff;
    param_1[uVar1 * 0x30 + 0x47] = 0xff;
    param_1[uVar1 * 0x30 + 0x48] = 0xff;
    param_1[uVar1 * 0x30 + 0x49] = 0xff;
    param_1[uVar1 * 0x30 + 0x4a] = 0xff;
    param_1[uVar1 * 0x30 + 0x4b] = 0xff;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x20) = 0;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x34) = 0xffffffff;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x38) = 0;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x3c) = 0;
    param_1[uVar2 * 0x30 + 0x4c] = 0;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x24) = 0xffffffff;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x2c) = 0xffffffff;
    param_1[uVar2 * 0x30 + 0x4d] = 0;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x28) = 0xffffffff;
    *(u32 *)(param_1 + uVar2 * 0x30 + 0x30) = 0xffffffff;
    param_1[uVar2 * 0x30 + 0x4e] = 0;
    param_1[uVar2 * 0x30 + 0x40] = 0xff;
    param_1[uVar2 * 0x30 + 0x41] = 0xff;
    param_1[uVar2 * 0x30 + 0x42] = 0xff;
    param_1[uVar2 * 0x30 + 0x43] = 0xff;
    param_1[uVar2 * 0x30 + 0x44] = 0xff;
    param_1[uVar2 * 0x30 + 0x45] = 0xff;
    param_1[uVar2 * 0x30 + 0x46] = 0xff;
    param_1[uVar2 * 0x30 + 0x47] = 0xff;
    param_1[uVar2 * 0x30 + 0x48] = 0xff;
    param_1[uVar2 * 0x30 + 0x49] = 0xff;
    param_1[uVar2 * 0x30 + 0x4a] = 0xff;
    param_1[uVar2 * 0x30 + 0x4b] = 0xff;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(u32 *)(iRam00000000 + 0x29c0) = 0;
  return param_1;
}

// === RKNet_validate_805504e4 (0x805504e4) ===
int RKNet_validate_805504e4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = (unsigned int)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59);
    iVar5 = 2;
    do {
      if (uVar4 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      if (uVar4 + 1 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 + 1 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      if (uVar4 + 2 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 + 2 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      if (uVar4 + 3 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 + 3 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      if (uVar4 + 4 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 + 4 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      if (uVar4 + 5 != uVar2) {
        uVar1 = *(uint *)(param_1 + (uVar4 + 5 & 0xff) * 0x30 + 0x20);
        if (uVar3 < uVar1) {
          uVar3 = uVar1;
        }
      }
      uVar4 = uVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(uint *)(iRam00000000 + 0x29c0) = uVar3;
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === RKNet_assertFail_805507b4 (0x805507b4) ===
void RKNet_assertFail_805507b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RKNet_validate_805508fc (0x805508fc) ===
void RKNet_validate_805508fc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u32 *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  do {
    uVar1 = 1 << (uVar6 & 0x3f);
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((uVar1 & *(uint *)(iVar2 + 0x48)) != 0) && (uVar6 != *(byte *)(iVar2 + 0x59))) {
      iVar3 = (uVar6 & 0xff) * 0x20;
      iVar4 = (uVar6 & 0xff) * 4;
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iRam00000000 + iVar3 + 0x27a0) * 0x30 +
                                         iVar4 + iRam00000000 + 0x150) + 4) + 8);
      if ((iVar2 != 0) && (*(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar1, iVar2 == 0x28))
      {
        puVar5 = (u32 *)
                 **(u32 **)
                   (*(int *)(*(int *)(iRam00000000 + iVar3 + 0x27a0) * 0x30 + iVar4 + iRam00000000 +
                            0x150) + 4);
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar1;
        if (*(char *)((int)puVar5 + 0x17) == '\x01') {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar1;
        }
        param_1 = param_1 + (uVar6 & 0xff) * 0x30;
        *(u32 *)(param_1 + 0x20) = *puVar5;
        *(uint *)(param_1 + 0x34) = (unsigned int)*(byte *)((int)puVar5 + 0x16);
        *(u32 *)(param_1 + 0x38) = puVar5[2];
        *(u32 *)(param_1 + 0x3c) = puVar5[1];
        *(u32 *)(param_1 + 0x4c) = *(u32 *)(puVar5 + 9);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1 + 0x40,puVar5 + 6,0xc);
      }
    }
    uVar6 = uVar6 + 1;
    if (0xb < uVar6) {
      return;
    }
  } while( true );
}

// === net_RKNet_80550a7c (0x80550a7c) ===
bool net_RKNet_80550a7c(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_segment_0__80546b18(iRam00000000);
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else if (*(uint *)(param_1 + 8) == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    uVar2 = *(uint *)(iVar1 + 0x48);
    bVar3 = (uVar2 & (*(uint *)(param_1 + 8) | 1 << (*(byte *)(iVar1 + 0x59) & 0x3f))) == uVar2;
  }
  return bVar3;
}

// === net_RKNet_80550b10 (0x80550b10) ===
void net_RKNet_80550b10(u32 param_1,uint param_2)

{
  int iVar1;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u16 local_1c;
  u16 local_1a;
  u16 local_18;
  u32 local_12;
  u32 local_11;
  u32 local_10;
  u32 local_f;
  u32 local_e;
  u32 local_d;
  u32 local_c;
  u32 local_b;
  u32 local_a;
  u32 local_9;
  u32 local_8;
  u32 local_7;
  u32 local_6;
  u32 local_5;
  u32 local_4;
  
  iVar1 = (param_2 & 0xff) * 4;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_1a = 0xffff;
  local_18 = 0xffff;
  local_20 = 0;
  local_12 = 0xff;
  local_11 = 1;
  local_4 = 0;
  local_10 = 0xff;
  local_f = 0xff;
  local_e = 0xff;
  local_d = 0xff;
  local_c = 0xff;
  local_b = 0xff;
  local_a = 0xff;
  local_9 = 0xff;
  local_8 = 0xff;
  local_7 = 0xff;
  local_6 = 0xff;
  local_5 = 0xff;
  FUN_segment_0__80549f64
            (*(u32 *)
              (*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0
                       ) + 4),&local_28,0x28);
  return;
}

// === net_RKNet_80550bc8 (0x80550bc8) ===
void net_RKNet_80550bc8(u32 param_1,uint param_2)

{
  int iVar1;
  u32 local_28;
  u32 local_24;
  u32 local_20;
  u16 local_1c;
  u16 local_1a;
  u16 local_18;
  u32 local_12;
  u32 local_11;
  u32 local_10;
  u32 local_f;
  u32 local_e;
  u32 local_d;
  u32 local_c;
  u32 local_b;
  u32 local_a;
  u32 local_9;
  u32 local_8;
  u32 local_7;
  u32 local_6;
  u32 local_5;
  u32 local_4;
  
  iVar1 = (param_2 & 0xff) * 4;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_1a = 0xffff;
  local_18 = 0xffff;
  local_20 = 0;
  local_12 = 0xff;
  local_11 = 2;
  local_4 = 0;
  local_10 = 0xff;
  local_f = 0xff;
  local_e = 0xff;
  local_d = 0xff;
  local_c = 0xff;
  local_b = 0xff;
  local_a = 0xff;
  local_9 = 0xff;
  local_8 = 0xff;
  local_7 = 0xff;
  local_6 = 0xff;
  local_5 = 0xff;
  FUN_segment_0__80549f64
            (*(u32 *)
              (*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0
                       ) + 4),&local_28,0x28);
  return;
}

// === RKNet_assertFail_80550c80 (0x80550c80) ===
void RKNet_assertFail_80550c80(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(1);
  }
  return;
}

// === RKNet_assertFail_80550ce4 (0x80550ce4) ===
void RKNet_assertFail_80550ce4(void)

{
  int iVar1;
  
  iVar1 = iRam00000000;
  if (iRam00000000 != 0) {
    if (iRam00000000 != 0) {
      FUN_segment_0__8054f380();
      FUN_segment_0__8054a764();
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar1);
    }
    iRam00000000 = 0;
  }
  return;
}

// === net_RKNet_80550d38 (0x80550d38) ===
void net_RKNet_80550d38(void)

{
  FUN_segment_0__8054f51c(iRam00000000);
  FUN_segment_0__8054a930(iRam00000000);
  *(u32 *)(iRam00000000 + 0x2756) = 1;
  return;
}

// === net_RKNet_80550d7c (0x80550d7c) ===
u32 net_RKNet_80550d7c(u32 param_1)

{
  FUN_segment_0__8054f1ec();
  FUN_segment_0__8054a6a0();
  FUN_segment_0__80549938(uRam00000000);
  return param_1;
}

// === RKNet_validate_80550dbc (0x80550dbc) ===
int RKNet_validate_80550dbc(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__8054f380();
    FUN_segment_0__8054a764();
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === RKNet_assertFail_80550e14 (0x80550e14) ===
void RKNet_assertFail_80550e14(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x184);
  }
  return;
}

// === RKNet_assertFail_80551090 (0x80551090) ===
void RKNet_assertFail_80551090(void)

{
  if (iRam00000000 != 0) {
    if (iRam00000000 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    iRam00000000 = 0;
  }
  return;
}

// === net_RKNet_80551310 (0x80551310) ===
void net_RKNet_80551310(u32 param_1)

{
  u32 uVar1;
  uint uVar2;
  
  if (*(int *)(iRam00000000 + 0xb74) == 0) {
    for (uVar2 = 0; uVar2 < *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
        uVar2 = uVar2 + 1) {
      uVar1 = FUN_segment_0__80549970(iRam00000000,uVar2);
      net_RKNet_80553660(param_1,uVar1);
      net_RKNet_80553a9c(param_1,uVar1);
    }
    net_RKNet_80552dc8(param_1);
    net_RKNet_80552994(param_1);
    RKNet_validate_80552a64(param_1);
    net_RKNet_80553d90(param_1);
  }
  else if (*(int *)(iRam00000000 + 0xb74) == 6) {
    RKNet_validate_80552a64();
  }
  return;
}

// === net_RKNet_805513e8 (0x805513e8) ===
void net_RKNet_805513e8(int param_1,int param_2,u32 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_segment_0__80544530(iRam00000000);
  iVar2 = param_1 + iVar1 * 8;
  *(char *)(param_1 + iVar1 * 8) = (char)(*(uint *)(iRam00000000 + 0x20) >> 3);
  *(u32 *)(iVar2 + 1) = param_3;
  *(u32 *)(iVar2 + 3) = 1;
  *(uint *)(param_1 + param_2 * 4 + 0xa0) = *(uint *)(iRam00000000 + 0x20) & 0xfffffff8;
  return;
}

// === net_RKNet_80551474 (0x80551474) ===
void net_RKNet_80551474(int param_1,u32 param_2)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    FUN_segment_0__80544438(uRam00000000,param_2);
  }
  else {
    FUN_segment_0__80544530(uRam00000000,param_2);
  }
  iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 1) = 0x14;
  *(u32 *)(param_1 + 3) = 0;
  return;
}

// === net_RKNet_80551508 (0x80551508) ===
void net_RKNet_80551508(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    FUN_segment_0__80544438(uRam00000000,param_2);
  }
  else {
    FUN_segment_0__80544530(uRam00000000,param_2);
  }
  iVar1 = FUN_segment_0__805444c0(uRam00000000,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
    }
  }
  else {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 1);
  }
  iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 1) = uVar2;
  *(u32 *)(param_1 + 3) = 3;
  return;
}

// === net_RKNet_805515f4 (0x805515f4) ===
u32 net_RKNet_805515f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  u32 uVar2;
  uint uVar3;
  char cVar4;
  
  iVar1 = FUN_segment_0__80544438(uRam00000000,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_segment_0__805444c0(uRam00000000,param_3);
    if (iVar1 == 0) {
      uVar3 = FUN_segment_0__80544530(uRam00000000,param_2);
      iVar1 = FUN_segment_0__80549970(uRam00000000,0);
      if ((param_2 == iVar1) || (iVar1 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar1))
      {
        iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
        cVar4 = *(char *)(param_1 + iVar1 * 8);
      }
      else {
        iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
        if (iVar1 == 0) {
          cVar4 = 0;
        }
        else {
          cVar4 = *(char *)(param_1 + param_2 * 8 + 0x10);
        }
      }
      if (cVar4 == *(char *)(param_1 + param_3 * 8 + uVar3 + 0x16)) {
        iVar1 = FUN_segment_0__805444c0(uRam00000000,param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
          if (iVar1 == 0) {
            cVar4 = 0;
          }
          else {
            cVar4 = *(char *)(param_1 + param_2 * 8 + 0x13);
          }
        }
        else {
          iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
          cVar4 = *(char *)(param_1 + iVar1 * 8 + 3);
        }
        if (cVar4 == '\x01') {
          if ((1 << (uVar3 & 0x3f) & (unsigned int)*(byte *)(param_1 + param_3 * 8 + 0x15)) == 0) {
            return 2;
          }
          return 1;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 4 + 0x70);
    }
  }
  return uVar2;
}

// === net_RKNet_8055178c (0x8055178c) ===
u32 net_RKNet_8055178c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 + param_2 * 8;
  uVar4 = 0;
  iVar6 = param_1;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar4) {
      return 1;
    }
    iVar1 = FUN_segment_0__80544438(iRam00000000,uVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_segment_0__80544438(iRam00000000,uVar4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_segment_0__805444c0(iRam00000000,uVar4);
        if (iVar1 == 0) {
          uVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
          iVar1 = FUN_segment_0__80549970(iRam00000000,0);
          if ((param_2 == iVar1) ||
             (iVar1 = FUN_segment_0__80549970(iRam00000000,1), param_2 == iVar1)) {
            iVar1 = FUN_segment_0__80544530(iRam00000000,param_2);
            cVar3 = *(char *)(param_1 + iVar1 * 8);
          }
          else {
            iVar1 = FUN_segment_0__80544438(iRam00000000,param_2);
            if (iVar1 == 0) {
              cVar3 = 0;
            }
            else {
              cVar3 = *(char *)(iVar5 + 0x10);
            }
          }
          if (cVar3 == *(char *)(iVar6 + uVar2 + 0x16)) {
            iVar1 = FUN_segment_0__805444c0(iRam00000000,param_2);
            if (iVar1 == 0) {
              iVar1 = FUN_segment_0__80544438(iRam00000000,param_2);
              if (iVar1 == 0) {
                cVar3 = 0;
              }
              else {
                cVar3 = *(char *)(iVar5 + 0x13);
              }
            }
            else {
              iVar1 = FUN_segment_0__80544530(iRam00000000,param_2);
              cVar3 = *(char *)(param_1 + iVar1 * 8 + 3);
            }
            if (cVar3 == '\x01') {
              iVar1 = 2;
              if ((1 << (uVar2 & 0x3f) & (unsigned int)*(byte *)(iVar6 + 0x15)) != 0) {
                iVar1 = 1;
              }
              goto LAB_segment_0__80551914;
            }
          }
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + param_2 * 4 + 0x70);
        }
      }
LAB_segment_0__80551914:
      if (iVar1 != 1) {
        return 0;
      }
    }
    iVar6 = iVar6 + 8;
    uVar4 = uVar4 + 1;
  } while( true );
}

// === net_RKNet_80551954 (0x80551954) ===
u32 net_RKNet_80551954(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 + param_2 * 8;
  uVar4 = 0;
  iVar6 = param_1;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar4) {
      return 0;
    }
    iVar1 = FUN_segment_0__80544438(iRam00000000,uVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_segment_0__80544438(iRam00000000,uVar4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_segment_0__805444c0(iRam00000000,uVar4);
        if (iVar1 == 0) {
          uVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
          iVar1 = FUN_segment_0__80549970(iRam00000000,0);
          if ((param_2 == iVar1) ||
             (iVar1 = FUN_segment_0__80549970(iRam00000000,1), param_2 == iVar1)) {
            iVar1 = FUN_segment_0__80544530(iRam00000000,param_2);
            cVar3 = *(char *)(param_1 + iVar1 * 8);
          }
          else {
            iVar1 = FUN_segment_0__80544438(iRam00000000,param_2);
            if (iVar1 == 0) {
              cVar3 = 0;
            }
            else {
              cVar3 = *(char *)(iVar5 + 0x10);
            }
          }
          if (cVar3 == *(char *)(iVar6 + uVar2 + 0x16)) {
            iVar1 = FUN_segment_0__805444c0(iRam00000000,param_2);
            if (iVar1 == 0) {
              iVar1 = FUN_segment_0__80544438(iRam00000000,param_2);
              if (iVar1 == 0) {
                cVar3 = 0;
              }
              else {
                cVar3 = *(char *)(iVar5 + 0x13);
              }
            }
            else {
              iVar1 = FUN_segment_0__80544530(iRam00000000,param_2);
              cVar3 = *(char *)(param_1 + iVar1 * 8 + 3);
            }
            if (cVar3 == '\x01') {
              iVar1 = 2;
              if ((1 << (uVar2 & 0x3f) & (unsigned int)*(byte *)(iVar6 + 0x15)) != 0) {
                iVar1 = 1;
              }
              goto LAB_segment_0__80551adc;
            }
          }
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + param_2 * 4 + 0x70);
        }
      }
LAB_segment_0__80551adc:
      if (iVar1 == 2) {
        return 1;
      }
    }
    iVar6 = iVar6 + 8;
    uVar4 = uVar4 + 1;
  } while( true );
}

// === net_RKNet_80551b1c (0x80551b1c) ===
u32 net_RKNet_80551b1c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  u32 uVar3;
  
  iVar2 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar2 == 0) {
    iVar2 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar2 == 0) {
      cVar1 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + param_2 * 8 + 0x13);
    }
  }
  else {
    iVar2 = FUN_segment_0__80544530(uRam00000000,param_2);
    cVar1 = *(char *)(param_1 + iVar2 * 8 + 3);
  }
  if (cVar1 == '\x06') {
    uVar3 = 1;
  }
  else if (cVar1 == '\x05') {
    uVar3 = 2;
  }
  else if (cVar1 == '\x04') {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// === net_RKNet_80551be8 (0x80551be8) ===
u32 net_RKNet_80551be8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  u32 uVar3;
  
  iVar2 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar2) || (iVar2 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar2)) {
    iVar2 = FUN_segment_0__80544530(uRam00000000,param_2);
    cVar1 = *(char *)(param_1 + iVar2 * 8 + 4);
  }
  else {
    iVar2 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar2 == 0) {
      cVar1 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + param_2 * 8 + 0x14);
    }
  }
  if ((cVar1 == '\x03') || (cVar1 == '\a')) {
    uVar3 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x06')) {
    uVar3 = 2;
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x05')) {
    uVar3 = 3;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// === net_RKNet_80551cec (0x80551cec) ===
void net_RKNet_80551cec(int param_1,u32 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__80544530(uRam00000000);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 1) = param_4;
  *(u32 *)(param_1 + 3) = param_3;
  return;
}

// === net_RKNet_80551d48 (0x80551d48) ===
void net_RKNet_80551d48(int param_1,int param_2,u32 param_3)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
    }
  }
  else {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 1);
  }
  iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 1) = uVar2;
  *(u32 *)(param_1 + 3) = param_3;
  return;
}

// === net_RKNet_80551e08 (0x80551e08) ===
void net_RKNet_80551e08(int param_1,u32 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__80544530(uRam00000000);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 2) = param_4;
  *(u32 *)(param_1 + 4) = param_3;
  return;
}

// === net_RKNet_80551e64 (0x80551e64) ===
void net_RKNet_80551e64(int param_1,int param_2,u32 param_3)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar1) || (iVar1 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar1)) {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 2);
  }
  else {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x12);
    }
  }
  iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
  param_1 = param_1 + iVar1 * 8;
  *(u32 *)(param_1 + 2) = uVar2;
  *(u32 *)(param_1 + 4) = param_3;
  return;
}

// === net_RKNet_80551f44 (0x80551f44) ===
u32 net_RKNet_80551f44(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
    }
  }
  else {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 1);
  }
  return uVar2;
}

// === net_RKNet_80551fd8 (0x80551fd8) ===
u32 net_RKNet_80551fd8(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar1) || (iVar1 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar1)) {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 2);
  }
  else {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x12);
    }
  }
  return uVar2;
}

// === net_RKNet_8055208c (0x8055208c) ===
u32 net_RKNet_8055208c(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x13);
    }
  }
  else {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 3);
  }
  return uVar2;
}

// === net_RKNet_80552120 (0x80552120) ===
u32 net_RKNet_80552120(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar1) || (iVar1 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar1)) {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8 + 4);
  }
  else {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x14);
    }
  }
  return uVar2;
}

// === net_RKNet_805521d4 (0x805521d4) ===
u32 net_RKNet_805521d4(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  
  iVar1 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar1) || (iVar1 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar1)) {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    uVar2 = *(u32 *)(param_1 + iVar1 * 8);
  }
  else {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(u32 *)(param_1 + param_2 * 8 + 0x10);
    }
  }
  return uVar2;
}

// === net_RKNet_80552290 (0x80552290) ===
bool net_RKNet_80552290(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_segment_0__805444c0(uRam00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar1 == 0) {
      cVar2 = 0;
    }
    else {
      cVar2 = *(char *)(param_1 + param_2 * 8 + 0x13);
    }
  }
  else {
    iVar1 = FUN_segment_0__80544530(uRam00000000,param_2);
    cVar2 = *(char *)(param_1 + iVar1 * 8 + 3);
  }
  return cVar2 == '\x01';
}

// === net_RKNet_80552330 (0x80552330) ===
u32 net_RKNet_80552330(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  u32 uVar3;
  
  iVar2 = FUN_segment_0__80549970(uRam00000000,0);
  if ((param_2 == iVar2) || (iVar2 = FUN_segment_0__80549970(uRam00000000,1), param_2 == iVar2)) {
    iVar2 = FUN_segment_0__80544530(uRam00000000,param_2);
    bVar1 = *(byte *)(param_1 + iVar2 * 8 + 4);
  }
  else {
    iVar2 = FUN_segment_0__80544438(uRam00000000,param_2);
    if (iVar2 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + param_2 * 8 + 0x14);
    }
  }
  uVar3 = 0;
  if (((bVar1 != 0) && (bVar1 < 4)) || ((4 < bVar1 && (bVar1 < 8)))) {
    uVar3 = 1;
  }
  return uVar3;
}

// === net_RKNet_8055240c (0x8055240c) ===
uint net_RKNet_8055240c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  uVar1 = FUN_segment_0__80549970(iRam00000000,0);
  if ((param_2 == uVar1) || (uVar1 = FUN_segment_0__80549970(iRam00000000,1), param_2 == uVar1)) {
    iVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
    bVar4 = *(byte *)(param_1 + iVar2 * 8 + 4);
  }
  else {
    iVar2 = FUN_segment_0__80544438(iRam00000000,param_2);
    if (iVar2 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = *(byte *)(param_1 + param_2 * 8 + 0x14);
    }
  }
  if (param_3 - 1U < 3) {
    if ((4 < bVar4) && (bVar4 < 8)) {
      return 1;
    }
    if ((bVar4 != 0) && (bVar4 < 4)) {
      iVar2 = *(int *)(iRam00000000 + 0x14) + (param_2 & 0xff) * 0x248;
      uVar1 = -((int)(0x10U - *(int *)(iVar2 + 200) | *(int *)(iVar2 + 200) - 0x10U) >> 0x1f);
      if (uVar1 != 0) {
        uVar1 = (unsigned int)(*(char *)(iVar2 + 0x208) == 0);
      }
      if (uVar1 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 0xcc);
      uVar1 = FUN_segment_0__80549970(iRam00000000,0);
      if ((param_2 == uVar1) || (uVar1 = FUN_segment_0__80549970(iRam00000000,1), param_2 == uVar1))
      {
        iVar3 = FUN_segment_0__80544530(iRam00000000,param_2);
        uVar1 = (unsigned int)*(byte *)(param_1 + iVar3 * 8 + 2);
      }
      else {
        iVar3 = FUN_segment_0__80544438(iRam00000000,param_2);
        if (iVar3 == 0) {
          uVar1 = 0x14;
        }
        else {
          uVar1 = (unsigned int)*(byte *)(param_1 + param_2 * 8 + 0x12);
        }
      }
      return (uVar1 - iVar2 | iVar2 - uVar1) >> 0x1f;
    }
  }
  else if (2 < param_3 - 5U) {
    if (((param_3 != 0) && (param_3 != 4)) && (param_3 != 8)) {
      return 1;
    }
    goto LAB_segment_0__805526d8;
  }
  if ((bVar4 != 0) && (bVar4 < 4)) {
    return 1;
  }
  if ((4 < bVar4) && (bVar4 < 8)) {
    iVar2 = *(int *)(iRam00000000 + 0x14) + (param_2 & 0xff) * 0x248;
    uVar1 = -((int)(0x10U - *(int *)(iVar2 + 200) | *(int *)(iVar2 + 200) - 0x10U) >> 0x1f);
    if (uVar1 != 0) {
      uVar1 = (unsigned int)(*(char *)(iVar2 + 0x208) == 0);
    }
    if (uVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 0xcc);
    uVar1 = FUN_segment_0__80549970(iRam00000000,0);
    if ((param_2 == uVar1) || (uVar1 = FUN_segment_0__80549970(iRam00000000,1), param_2 == uVar1)) {
      iVar3 = FUN_segment_0__80544530(iRam00000000,param_2);
      uVar1 = (unsigned int)*(byte *)(param_1 + iVar3 * 8 + 2);
    }
    else {
      iVar3 = FUN_segment_0__80544438(iRam00000000,param_2);
      if (iVar3 == 0) {
        uVar1 = 0x14;
      }
      else {
        uVar1 = (unsigned int)*(byte *)(param_1 + param_2 * 8 + 0x12);
      }
    }
    return (uVar1 - iVar2 | iVar2 - uVar1) >> 0x1f;
  }
LAB_segment_0__805526d8:
  uVar1 = 0;
  if ((bVar4 != 0) && (bVar4 != 4)) {
    uVar1 = 1;
  }
  return uVar1;
}

// === RKNet_validate_80552954 (0x80552954) ===
int RKNet_validate_80552954(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === net_RKNet_80552994 (0x80552994) ===
void net_RKNet_80552994(u32 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((1 << (uVar4 & 0x3f) & *(uint *)(iVar2 + 0x48)) != 0) && (uVar4 != *(byte *)(iVar2 + 0x59))
       ) {
      uVar3 = 0;
      while( true ) {
        uVar1 = (unsigned int)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
        if (uVar1 <= uVar3) break;
        net_RKNet_8055336c(param_1,uVar3,uVar4 & 0xff);
        uVar3 = uVar3 + 1;
      }
      iVar2 = iRam00000000 + (uVar4 & 0xff) * 4;
      FUN_segment_0__80549f64
                (*(u32 *)(*(int *)(*(int *)(iVar2 + 0x276c) * 0x30 + iVar2 + 0xf0) + 0x18),
                 param_1,uVar1 << 3);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  return;
}

// === RKNet_validate_80552a64 (0x80552a64) ===
void RKNet_validate_80552a64(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  uVar8 = 0;
  do {
    uVar2 = uVar8 & 0xff;
    iVar4 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((1 << (uVar8 & 0x3f) & *(uint *)(iVar4 + 0x48)) != 0) && (uVar8 != *(byte *)(iVar4 + 0x59))
       ) {
      iVar4 = (uVar8 & 0xff) * 4;
      piVar10 = *(int **)(*(int *)(*(int *)(iRam00000000 + (uVar8 & 0xff) * 0x20 + 0x27b4) * 0x30 +
                                   iVar4 + iRam00000000 + 0x150) + 0x18);
      if (piVar10[2] != 0) {
        uVar7 = 0;
        iVar9 = 0;
        while( true ) {
          iVar6 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar3 = iRam00000000 + iVar6;
          if (uVar2 == *(byte *)(iVar3 + 0x59)) {
            bVar1 = *(byte *)(iVar3 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar6 + iVar4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar7) break;
          uVar5 = 0xffffffff;
          iVar3 = 0;
          iVar6 = 2;
          do {
            if ((((uVar2 == *(byte *)(iRam00000000 + iVar3 + 0x2920)) &&
                 (uVar5 = uVar5 + 1, iVar11 = iVar3, uVar5 == uVar7)) ||
                ((iVar11 = iVar3 + 1, uVar2 == *(byte *)(iRam00000000 + iVar11 + 0x2920) &&
                 (uVar5 = uVar5 + 1, uVar5 == uVar7)))) ||
               ((((iVar11 = iVar3 + 2, uVar2 == *(byte *)(iRam00000000 + iVar11 + 0x2920) &&
                  (uVar5 = uVar5 + 1, uVar5 == uVar7)) ||
                 ((iVar11 = iVar3 + 3, uVar2 == *(byte *)(iRam00000000 + iVar11 + 0x2920) &&
                  (uVar5 = uVar5 + 1, uVar5 == uVar7)))) ||
                (((iVar11 = iVar3 + 4, uVar2 == *(byte *)(iRam00000000 + iVar11 + 0x2920) &&
                  (uVar5 = uVar5 + 1, uVar5 == uVar7)) ||
                 ((uVar2 == *(byte *)(iRam00000000 + iVar3 + 5 + 0x2920) &&
                  (uVar5 = uVar5 + 1, iVar11 = iVar3 + 5, uVar5 == uVar7))))))))
            goto LAB_segment_0__80552be8;
            iVar3 = iVar3 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar11 = -1;
LAB_segment_0__80552be8:
          iVar3 = FUN_segment_0__80544438(iRam00000000,iVar11);
          if (iVar3 != 0) {
            iVar4 = FUN_segment_0__805444c0(iRam00000000,iVar11);
            if (iVar4 == 0) {
              FUN_segment_0__80544438(iRam00000000,iVar11);
            }
            else {
              FUN_segment_0__80544530(iRam00000000,iVar11);
            }
                    /* WARNING: Subroutine does not return */
            FUN_segment_0__80443430(param_1 + iVar11 * 8 + 0x10,*piVar10 + iVar9,8);
          }
          iVar9 = iVar9 + 8;
          uVar7 = uVar7 + 1;
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (0xb < uVar8) {
      return;
    }
  } while( true );
}

// === net_RKNet_80552dc8 (0x80552dc8) ===
void net_RKNet_80552dc8(int param_1)

{
  char cVar2;
  uint uVar1;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_88 [16];
  
  iVar16 = 0;
  local_88[0xc] = 0;
  uVar11 = 0;
  local_88[0xd] = 0;
  *(u32 *)(param_1 + 0x70) = 0;
  *(u32 *)(param_1 + 0x74) = 0;
  *(u32 *)(param_1 + 0x78) = 0;
  *(u32 *)(param_1 + 0x7c) = 0;
  *(u32 *)(param_1 + 0x80) = 0;
  *(u32 *)(param_1 + 0x84) = 0;
  *(u32 *)(param_1 + 0x88) = 0;
  *(u32 *)(param_1 + 0x8c) = 0;
  *(u32 *)(param_1 + 0x90) = 0;
  *(u32 *)(param_1 + 0x94) = 0;
  *(u32 *)(param_1 + 0x98) = 0;
  *(u32 *)(param_1 + 0x9c) = 0;
  iVar15 = param_1;
  do {
    iVar9 = 0;
    iVar12 = 0;
    iVar7 = *(int *)(iRam00000000 + iVar16 + 0x5c);
    iVar3 = FUN_segment_0__806a09c0(iRam00000000,uVar11,0);
    iVar10 = param_1;
    for (uVar13 = 0; uVar13 < *(byte *)(iRam00000000 + 0x24); uVar13 = uVar13 + 1) {
      iVar14 = FUN_segment_0__805444c0(iRam00000000,uVar13);
      if (iVar14 == 0) {
        iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
        if (iVar14 == 0) {
          cVar2 = '\x14';
        }
        else {
          cVar2 = *(char *)(iVar10 + 0x11);
        }
      }
      else {
        iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
        cVar2 = *(char *)(param_1 + iVar14 * 8 + 1);
      }
      if (cVar2 != '\x14') {
        iVar14 = FUN_segment_0__805444c0(iRam00000000,uVar13);
        if (iVar14 == 0) {
          iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
          if (iVar14 == 0) {
            uVar8 = 0x14;
          }
          else {
            uVar8 = (unsigned int)*(byte *)(iVar10 + 0x11);
          }
        }
        else {
          iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
          uVar8 = (unsigned int)*(byte *)(param_1 + iVar14 * 8 + 1);
        }
        if (uVar11 == *(uint *)(uVar8 * 0x1c + 4)) {
          iVar14 = FUN_segment_0__805444c0(iRam00000000,uVar13);
          if (iVar14 == 0) {
            iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
            if (iVar14 == 0) {
              cVar2 = 0;
            }
            else {
              cVar2 = *(char *)(iVar10 + 0x13);
            }
          }
          else {
            iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
            cVar2 = *(char *)(param_1 + iVar14 * 8 + 3);
          }
          if (cVar2 == '\x02') {
            iVar14 = FUN_segment_0__805444c0(iRam00000000,uVar13);
            if (iVar14 == 0) {
              iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
              if (iVar14 == 0) {
                uVar8 = 0x14;
              }
              else {
                uVar8 = (unsigned int)*(byte *)(iVar10 + 0x11);
              }
            }
            else {
              iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
              uVar8 = (unsigned int)*(byte *)(param_1 + iVar14 * 8 + 1);
            }
            iVar9 = iVar9 + *(int *)(uVar8 * 0x1c + 8);
          }
          else if (cVar2 == '\x04') {
            iVar9 = iVar9 + 3;
          }
          else if (cVar2 == '\x05') {
            iVar9 = iVar9 + 2;
          }
          else if (cVar2 == '\x06') {
            iVar9 = iVar9 + 1;
          }
        }
      }
      uVar8 = FUN_segment_0__80549970(iRam00000000,0);
      if ((uVar13 == uVar8) || (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar13 == uVar8)) {
        iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
        cVar2 = *(char *)(param_1 + iVar14 * 8 + 2);
      }
      else {
        iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
        if (iVar14 == 0) {
          cVar2 = '\x14';
        }
        else {
          cVar2 = *(char *)(iVar10 + 0x12);
        }
      }
      if (cVar2 != '\x14') {
        uVar8 = FUN_segment_0__80549970(iRam00000000,0);
        if ((uVar13 == uVar8) || (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar13 == uVar8))
        {
          iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
          uVar8 = (unsigned int)*(byte *)(param_1 + iVar14 * 8 + 2);
        }
        else {
          iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
          if (iVar14 == 0) {
            uVar8 = 0x14;
          }
          else {
            uVar8 = (unsigned int)*(byte *)(iVar10 + 0x12);
          }
        }
        if (uVar11 == *(uint *)(uVar8 * 0x1c + 4)) {
          uVar8 = FUN_segment_0__80549970(iRam00000000,0);
          if ((uVar13 == uVar8) ||
             (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar13 == uVar8)) {
            iVar14 = FUN_segment_0__80544530(iRam00000000,uVar13);
            cVar2 = *(char *)(param_1 + iVar14 * 8 + 4);
          }
          else {
            iVar14 = FUN_segment_0__80544438(iRam00000000,uVar13);
            if (iVar14 == 0) {
              cVar2 = 0;
            }
            else {
              cVar2 = *(char *)(iVar10 + 0x14);
            }
          }
          if ((cVar2 == '\x01') || (cVar2 == '\x05')) {
            iVar12 = iVar12 + 3;
          }
          else if ((cVar2 == '\x02') || (cVar2 == '\x06')) {
            iVar12 = iVar12 + 2;
          }
          else if ((cVar2 == '\x03') || (cVar2 == '\a')) {
            iVar12 = iVar12 + 1;
          }
        }
      }
      if ((uVar11 == 0xd) &&
         (piVar4 = (int *)FUN_segment_0__8047d97c(iRam00000000,uVar13),
         (*(uint *)(*(int *)(*piVar4 + 4) + 0xc) & 0x8000000) != 0)) {
        iVar3 = 1;
      }
      iVar10 = iVar10 + 8;
    }
    *(int *)(iVar15 + 0xd0) = iVar9;
    *(int *)(iVar15 + 0xd4) = iVar12;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    uVar13 = RKNet_assertFail_80554404(param_1,uVar11,local_88);
    piVar4 = local_88;
    iVar14 = local_88[0xc] + local_88[0xd];
    iVar10 = 0;
    for (uVar8 = 0; uVar8 < uVar13; uVar8 = uVar8 + 1) {
      iVar6 = *piVar4;
      iVar5 = FUN_segment_0__805444c0(iRam00000000,iVar6);
      if (iVar5 == 0) {
        iVar5 = FUN_segment_0__80544438(iRam00000000,iVar6);
        if (iVar5 == 0) {
          uVar1 = 0x14;
        }
        else {
          uVar1 = (unsigned int)*(byte *)(param_1 + iVar6 * 8 + 0x11);
        }
      }
      else {
        iVar5 = FUN_segment_0__80544530(iRam00000000,iVar6);
        uVar1 = (unsigned int)*(byte *)(param_1 + iVar5 * 8 + 1);
      }
      iVar5 = *(int *)(uVar1 * 0x1c + 8);
      if ((iVar3 == 0) && ((unsigned int)(iVar9 + iVar12 + iVar7 + iVar5 + iVar10) <= *(uint *)(iVar14 + 4))
         ) {
        iVar10 = iVar10 + iVar5;
        *(u32 *)(param_1 + iVar6 * 4 + 0x70) = 1;
      }
      else {
        *(u32 *)(param_1 + iVar6 * 4 + 0x70) = 2;
      }
      piVar4 = piVar4 + 1;
    }
    uVar11 = uVar11 + 1;
    *(int *)(iVar15 + 0xd8) = iVar10;
    local_88[0xd] = local_88[0xd] + 0x74;
    iVar15 = iVar15 + 0xc;
    iVar16 = iVar16 + 0x24;
  } while (uVar11 < 0xf);
  return;
}

// === net_RKNet_8055336c (0x8055336c) ===
void net_RKNet_8055336c(int param_1,int param_2,uint param_3)

{
  u32 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = param_1 + param_2 * 8;
  uVar4 = 0;
  iVar6 = iVar5;
  do {
    uVar3 = 0xffffffff;
    iVar7 = 0;
    iVar9 = 2;
    do {
      if ((((((param_3 == *(byte *)(iRam00000000 + iVar7 + 0x2920)) &&
             (uVar3 = uVar3 + 1, iVar8 = iVar7, uVar3 == uVar4)) ||
            ((iVar8 = iVar7 + 1, param_3 == *(byte *)(iRam00000000 + iVar8 + 0x2920) &&
             (uVar3 = uVar3 + 1, uVar3 == uVar4)))) ||
           ((iVar8 = iVar7 + 2, param_3 == *(byte *)(iRam00000000 + iVar8 + 0x2920) &&
            (uVar3 = uVar3 + 1, uVar3 == uVar4)))) ||
          ((iVar8 = iVar7 + 3, param_3 == *(byte *)(iRam00000000 + iVar8 + 0x2920) &&
           (uVar3 = uVar3 + 1, uVar3 == uVar4)))) ||
         (((iVar8 = iVar7 + 4, param_3 == *(byte *)(iRam00000000 + iVar8 + 0x2920) &&
           (uVar3 = uVar3 + 1, uVar3 == uVar4)) ||
          ((param_3 == *(byte *)(iRam00000000 + iVar7 + 5 + 0x2920) &&
           (uVar3 = uVar3 + 1, iVar8 = iVar7 + 5, uVar3 == uVar4)))))) goto LAB_segment_0__80553494;
      iVar7 = iVar7 + 6;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar8 = -1;
LAB_segment_0__80553494:
    iVar7 = FUN_segment_0__80544438(iRam00000000,iVar8);
    if (iVar7 != 0) {
      iVar7 = FUN_segment_0__80549970(iRam00000000,0);
      if ((iVar8 == iVar7) || (iVar7 = FUN_segment_0__80549970(iRam00000000,1), iVar8 == iVar7)) {
        iVar7 = FUN_segment_0__80544530(iRam00000000,iVar8);
        uVar1 = *(u32 *)(param_1 + iVar7 * 8);
      }
      else {
        iVar7 = FUN_segment_0__80544438(iRam00000000,iVar8);
        if (iVar7 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(u32 *)(param_1 + iVar8 * 8 + 0x10);
        }
      }
      *(u32 *)(iVar6 + 6) = uVar1;
      iVar7 = FUN_segment_0__805444c0(iRam00000000,iVar8);
      if (iVar7 == 0) {
        iVar7 = FUN_segment_0__80544438(iRam00000000,iVar8);
        if (iVar7 == 0) {
          cVar2 = 0;
        }
        else {
          cVar2 = *(char *)(param_1 + iVar8 * 8 + 0x13);
        }
      }
      else {
        iVar7 = FUN_segment_0__80544530(iRam00000000,iVar8);
        cVar2 = *(char *)(param_1 + iVar7 * 8 + 3);
      }
      if ((cVar2 == '\x01') && (*(int *)(param_1 + iVar8 * 4 + 0x70) == 1)) {
        *(byte *)(iVar5 + 5) = *(byte *)(iVar5 + 5) | (u8)(1 << (uVar4 & 0x3f));
      }
      else {
        *(byte *)(iVar5 + 5) = *(byte *)(iVar5 + 5) & ~(u8)(1 << (uVar4 & 0x3f));
      }
    }
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 1;
    if (1 < uVar4) {
      return;
    }
  } while( true );
}

// === net_RKNet_805535d0 (0x805535d0) ===
void net_RKNet_805535d0(u32 param_1)

{
  u32 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
      uVar2 = uVar2 + 1) {
    uVar1 = FUN_segment_0__80549970(iRam00000000,uVar2);
    net_RKNet_80553660(param_1,uVar1);
    net_RKNet_80553a9c(param_1,uVar1);
  }
  return;
}

// === net_RKNet_80553660 (0x80553660) ===
void net_RKNet_80553660(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  u32 uVar3;
  int iVar4;
  
  iVar4 = (param_2 & 0xff) * 0x248;
  if (*(int *)(*(int *)(iRam00000000 + 0x14) + iVar4 + 0x8c) == 0x14) {
    iVar2 = FUN_segment_0__805444c0(iRam00000000);
    if (iVar2 == 0) {
      iVar2 = FUN_segment_0__80544438(iRam00000000,param_2);
      if (iVar2 == 0) {
        cVar1 = 0;
      }
      else {
        cVar1 = *(char *)(param_1 + param_2 * 8 + 0x13);
      }
    }
    else {
      iVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
      cVar1 = *(char *)(param_1 + iVar2 * 8 + 3);
    }
    if (cVar1 != '\x01') {
      iVar2 = FUN_segment_0__805444c0(iRam00000000,param_2);
      if (iVar2 == 0) {
        iVar2 = FUN_segment_0__80544438(iRam00000000,param_2);
        if (iVar2 == 0) {
          cVar1 = 0;
        }
        else {
          cVar1 = *(char *)(param_1 + param_2 * 8 + 0x13);
        }
      }
      else {
        iVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
        cVar1 = *(char *)(param_1 + iVar2 * 8 + 3);
      }
      if (cVar1 != '\x02') {
        iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
        param_1 = param_1 + iVar4 * 8;
        *(u32 *)(param_1 + 1) = 0x14;
        *(u32 *)(param_1 + 3) = 0;
        return;
      }
    }
    if (*(int *)(*(int *)(iRam00000000 + 0x14) + iVar4 + 0x58) == 0) {
      iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
      param_1 = param_1 + iVar4 * 8;
      *(u32 *)(param_1 + 1) = 0x14;
      *(u32 *)(param_1 + 3) = 0;
    }
  }
  else {
    iVar2 = FUN_segment_0__805444c0(iRam00000000);
    if (iVar2 == 0) {
      iVar2 = FUN_segment_0__80544438(iRam00000000,param_2);
      if (iVar2 == 0) {
        cVar1 = '\x14';
      }
      else {
        cVar1 = *(char *)(param_1 + param_2 * 8 + 0x11);
      }
    }
    else {
      iVar2 = FUN_segment_0__80544530(iRam00000000,param_2);
      cVar1 = *(char *)(param_1 + iVar2 * 8 + 1);
    }
    if (cVar1 == '\x14') {
      iVar4 = FUN_segment_0__805444c0(iRam00000000,param_2);
      if (iVar4 == 0) {
        iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
        if (iVar4 == 0) {
          uVar3 = 0x14;
        }
        else {
          uVar3 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
        }
      }
      else {
        iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
        uVar3 = *(u32 *)(param_1 + iVar4 * 8 + 1);
      }
      iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
      param_1 = param_1 + iVar4 * 8;
      *(u32 *)(param_1 + 1) = uVar3;
      *(u32 *)(param_1 + 3) = 7;
    }
    else {
      iVar4 = *(int *)(*(int *)(iRam00000000 + 0x14) + iVar4 + 0x90);
      if (iVar4 == 1) {
        iVar4 = FUN_segment_0__805444c0(iRam00000000,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
          if (iVar4 == 0) {
            uVar3 = 0x14;
          }
          else {
            uVar3 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
          }
        }
        else {
          iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
          uVar3 = *(u32 *)(param_1 + iVar4 * 8 + 1);
        }
        iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
        param_1 = param_1 + iVar4 * 8;
        *(u32 *)(param_1 + 1) = uVar3;
        *(u32 *)(param_1 + 3) = 6;
      }
      else if (iVar4 == 2) {
        iVar4 = FUN_segment_0__805444c0(iRam00000000,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
          if (iVar4 == 0) {
            uVar3 = 0x14;
          }
          else {
            uVar3 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
          }
        }
        else {
          iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
          uVar3 = *(u32 *)(param_1 + iVar4 * 8 + 1);
        }
        iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
        param_1 = param_1 + iVar4 * 8;
        *(u32 *)(param_1 + 1) = uVar3;
        *(u32 *)(param_1 + 3) = 5;
      }
      else if (iVar4 == 3) {
        iVar4 = FUN_segment_0__805444c0(iRam00000000,param_2);
        if (iVar4 == 0) {
          iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
          if (iVar4 == 0) {
            uVar3 = 0x14;
          }
          else {
            uVar3 = *(u32 *)(param_1 + param_2 * 8 + 0x11);
          }
        }
        else {
          iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
          uVar3 = *(u32 *)(param_1 + iVar4 * 8 + 1);
        }
        iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
        param_1 = param_1 + iVar4 * 8;
        *(u32 *)(param_1 + 1) = uVar3;
        *(u32 *)(param_1 + 3) = 4;
      }
    }
  }
  return;
}

// === net_RKNet_80553a9c (0x80553a9c) ===
void net_RKNet_80553a9c(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  u32 uVar11;
  char cVar12;
  
  uVar3 = FUN_segment_0__80549970(iRam00000000,0);
  if ((param_2 == uVar3) || (uVar3 = FUN_segment_0__80549970(iRam00000000,1), param_2 == uVar3)) {
    iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
    bVar10 = *(byte *)(param_1 + iVar4 * 8 + 4);
  }
  else {
    iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
    if (iVar4 == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)(param_1 + param_2 * 8 + 0x14);
    }
  }
  uVar3 = FUN_segment_0__80549970(iRam00000000,0);
  if ((param_2 == uVar3) || (uVar3 = FUN_segment_0__80549970(iRam00000000,1), param_2 == uVar3)) {
    iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
    uVar3 = (unsigned int)*(byte *)(param_1 + iVar4 * 8 + 2);
  }
  else {
    iVar4 = FUN_segment_0__80544438(iRam00000000,param_2);
    if (iVar4 == 0) {
      uVar3 = 0x14;
    }
    else {
      uVar3 = (unsigned int)*(byte *)(param_1 + param_2 * 8 + 0x12);
    }
  }
  cVar12 = '\b';
  bVar5 = false;
  if ((bVar10 != 0) && (bVar10 < 4)) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((4 < bVar10) && (bVar10 < 8)) {
    bVar6 = true;
  }
  bVar7 = true;
  if ((!bVar5) && (!bVar6)) {
    bVar7 = false;
  }
  bVar8 = true;
  if ((bVar10 != 0) && (!bVar5)) {
    bVar8 = false;
  }
  bVar9 = false;
  bVar1 = false;
  iVar4 = *(int *)(iRam00000000 + 0x14) + (param_2 & 0xff) * 0x248;
  if ((*(int *)(iVar4 + 200) != 0x10) && (*(char *)(iVar4 + 0x208) == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    if ((bVar7) && (uVar3 != *(uint *)(iVar4 + 0xcc))) {
      bVar9 = true;
    }
    iVar2 = *(int *)(iVar4 + 0x104);
    if (iVar2 == 1) {
      if (bVar9) {
        cVar12 = '\x03';
        if (bVar8) {
          cVar12 = '\a';
        }
      }
      else {
        cVar12 = '\a';
        if (bVar8) {
          cVar12 = '\x03';
        }
      }
    }
    else if (iVar2 == 2) {
      if (bVar9) {
        cVar12 = '\x02';
        if (bVar8) {
          cVar12 = '\x06';
        }
      }
      else {
        cVar12 = '\x06';
        if (bVar8) {
          cVar12 = '\x02';
        }
      }
    }
    else if (iVar2 == 3) {
      if (bVar9) {
        cVar12 = '\x01';
        if (bVar8) {
          cVar12 = '\x05';
        }
      }
      else {
        cVar12 = '\x05';
        if (bVar8) {
          cVar12 = '\x01';
        }
      }
    }
    uVar11 = (u32)*(u32 *)(iVar4 + 0xcc);
  }
  else {
    if (bVar5) {
      cVar12 = '\x04';
    }
    if (bVar6) {
      cVar12 = 0;
    }
    uVar11 = 0x14;
  }
  if (cVar12 != '\b') {
    iVar4 = FUN_segment_0__80544530(iRam00000000,param_2);
    param_1 = param_1 + iVar4 * 8;
    *(u32 *)(param_1 + 2) = uVar11;
    *(char *)(param_1 + 4) = cVar12;
  }
  return;
}

// === net_RKNet_80553d90 (0x80553d90) ===
void net_RKNet_80553d90(int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  u32 uVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = 0;
  do {
    if (*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58) <= uVar11) {
      return;
    }
    uVar4 = FUN_segment_0__80549970(iRam00000000,uVar11);
    uVar2 = uVar4 & 0xff;
    iVar5 = FUN_segment_0__805444c0(iRam00000000,uVar2);
    if (iVar5 == 0) {
      iVar5 = FUN_segment_0__80544438(iRam00000000,uVar2);
      if (iVar5 == 0) {
        cVar3 = 0;
      }
      else {
        cVar3 = *(char *)(param_1 + (uVar4 & 0xff) * 8 + 0x13);
      }
    }
    else {
      iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
      cVar3 = *(char *)(param_1 + iVar5 * 8 + 3);
    }
    if (cVar3 == '\x01') {
      iVar5 = FUN_segment_0__80544438(iRam00000000,uVar2);
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      else {
        iVar5 = FUN_segment_0__805444c0(iRam00000000,uVar2);
        if (iVar5 == 0) {
          uVar7 = FUN_segment_0__80544530(iRam00000000,uVar2);
          uVar8 = FUN_segment_0__80549970(iRam00000000,0);
          if ((uVar2 == uVar8) || (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar2 == uVar8))
          {
            iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
            cVar3 = *(char *)(param_1 + iVar5 * 8);
          }
          else {
            iVar5 = FUN_segment_0__80544438(iRam00000000,uVar2);
            if (iVar5 == 0) {
              cVar3 = 0;
            }
            else {
              cVar3 = *(char *)(param_1 + (uVar4 & 0xff) * 8 + 0x10);
            }
          }
          iVar5 = param_1 + (uVar4 & 0xff) * 8;
          if (cVar3 == *(char *)(iVar5 + uVar7 + 0x16)) {
            iVar9 = FUN_segment_0__805444c0(iRam00000000,uVar2);
            if (iVar9 == 0) {
              iVar9 = FUN_segment_0__80544438(iRam00000000,uVar2);
              if (iVar9 == 0) {
                cVar3 = 0;
              }
              else {
                cVar3 = *(char *)(iVar5 + 0x13);
              }
            }
            else {
              iVar9 = FUN_segment_0__80544530(iRam00000000,uVar2);
              cVar3 = *(char *)(param_1 + iVar9 * 8 + 3);
            }
            if (cVar3 == '\x01') {
              iVar9 = 2;
              if ((1 << (uVar7 & 0x3f) & (unsigned int)*(byte *)(iVar5 + 0x15)) != 0) {
                iVar9 = 1;
              }
              goto LAB_segment_0__80553f7c;
            }
          }
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_1 + (uVar4 & 0xff) * 4 + 0x70);
        }
      }
LAB_segment_0__80553f7c:
      if (iVar9 == 2) {
        iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
        iVar5 = param_1 + iVar5 * 8;
        *(u32 *)(iVar5 + 1) = 0x14;
        *(u32 *)(iVar5 + 3) = 2;
      }
      else {
        iVar9 = param_1 + (uVar4 & 0xff) * 4;
        iVar12 = param_1 + (uVar4 & 0xff) * 8;
        iVar5 = param_1;
        for (uVar4 = 0; uVar4 < *(byte *)(iRam00000000 + 0x24); uVar4 = uVar4 + 1) {
          iVar6 = FUN_segment_0__80544438(iRam00000000,uVar4);
          if (iVar6 != 0) {
            iVar6 = FUN_segment_0__80544438(iRam00000000,uVar4);
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = FUN_segment_0__805444c0(iRam00000000,uVar4);
              if (iVar6 == 0) {
                uVar7 = FUN_segment_0__80544530(iRam00000000,uVar2);
                uVar8 = FUN_segment_0__80549970(iRam00000000,0);
                if ((uVar2 == uVar8) ||
                   (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar2 == uVar8)) {
                  iVar6 = FUN_segment_0__80544530(iRam00000000,uVar2);
                  cVar3 = *(char *)(param_1 + iVar6 * 8);
                }
                else {
                  iVar6 = FUN_segment_0__80544438(iRam00000000,uVar2);
                  if (iVar6 == 0) {
                    cVar3 = 0;
                  }
                  else {
                    cVar3 = *(char *)(iVar12 + 0x10);
                  }
                }
                if (cVar3 == *(char *)(iVar5 + uVar7 + 0x16)) {
                  iVar6 = FUN_segment_0__805444c0(iRam00000000,uVar2);
                  if (iVar6 == 0) {
                    iVar6 = FUN_segment_0__80544438(iRam00000000,uVar2);
                    if (iVar6 == 0) {
                      cVar3 = 0;
                    }
                    else {
                      cVar3 = *(char *)(iVar12 + 0x13);
                    }
                  }
                  else {
                    iVar6 = FUN_segment_0__80544530(iRam00000000,uVar2);
                    cVar3 = *(char *)(param_1 + iVar6 * 8 + 3);
                  }
                  if (cVar3 == '\x01') {
                    iVar6 = 2;
                    if ((1 << (uVar7 & 0x3f) & (unsigned int)*(byte *)(iVar5 + 0x15)) != 0) {
                      iVar6 = 1;
                    }
                    goto LAB_segment_0__80554104;
                  }
                }
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(iVar9 + 0x70);
              }
            }
LAB_segment_0__80554104:
            if (iVar6 != 1) {
              bVar1 = false;
              goto LAB_segment_0__80554130;
            }
          }
          iVar5 = iVar5 + 8;
        }
        bVar1 = true;
LAB_segment_0__80554130:
        if (bVar1) {
          iVar5 = FUN_segment_0__805444c0(iRam00000000,uVar2);
          if (iVar5 == 0) {
            iVar5 = FUN_segment_0__80544438(iRam00000000,uVar2);
            if (iVar5 == 0) {
              uVar10 = 0x14;
            }
            else {
              uVar10 = *(u32 *)(iVar12 + 0x11);
            }
          }
          else {
            iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
            uVar10 = *(u32 *)(param_1 + iVar5 * 8 + 1);
          }
          iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
          iVar5 = param_1 + iVar5 * 8;
          *(u32 *)(iVar5 + 1) = uVar10;
          *(u32 *)(iVar5 + 3) = 2;
        }
        else if (0x78 < (unsigned int)(*(int *)(iRam00000000 + 0x20) - *(int *)(iVar9 + 0xa0))) {
          iVar5 = param_1;
          for (uVar4 = 0; uVar4 < *(byte *)(iRam00000000 + 0x24); uVar4 = uVar4 + 1) {
            iVar6 = FUN_segment_0__80544438(iRam00000000,uVar4);
            if (iVar6 != 0) {
              iVar6 = FUN_segment_0__80544438(iRam00000000,uVar4);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_segment_0__805444c0(iRam00000000,uVar4);
                if (iVar6 == 0) {
                  uVar7 = FUN_segment_0__80544530(iRam00000000,uVar2);
                  uVar8 = FUN_segment_0__80549970(iRam00000000,0);
                  if ((uVar2 == uVar8) ||
                     (uVar8 = FUN_segment_0__80549970(iRam00000000,1), uVar2 == uVar8)) {
                    iVar6 = FUN_segment_0__80544530(iRam00000000,uVar2);
                    cVar3 = *(char *)(param_1 + iVar6 * 8);
                  }
                  else {
                    iVar6 = FUN_segment_0__80544438(iRam00000000,uVar2);
                    if (iVar6 == 0) {
                      cVar3 = 0;
                    }
                    else {
                      cVar3 = *(char *)(iVar12 + 0x10);
                    }
                  }
                  if (cVar3 == *(char *)(iVar5 + uVar7 + 0x16)) {
                    iVar6 = FUN_segment_0__805444c0(iRam00000000,uVar2);
                    if (iVar6 == 0) {
                      iVar6 = FUN_segment_0__80544438(iRam00000000,uVar2);
                      if (iVar6 == 0) {
                        cVar3 = 0;
                      }
                      else {
                        cVar3 = *(char *)(iVar12 + 0x13);
                      }
                    }
                    else {
                      iVar6 = FUN_segment_0__80544530(iRam00000000,uVar2);
                      cVar3 = *(char *)(param_1 + iVar6 * 8 + 3);
                    }
                    if (cVar3 == '\x01') {
                      iVar6 = 2;
                      if ((1 << (uVar7 & 0x3f) & (unsigned int)*(byte *)(iVar5 + 0x15)) != 0) {
                        iVar6 = 1;
                      }
                      goto LAB_segment_0__80554310;
                    }
                  }
                  iVar6 = 0;
                }
                else {
                  iVar6 = *(int *)(iVar9 + 0x70);
                }
              }
LAB_segment_0__80554310:
              if (iVar6 == 2) {
                bVar1 = true;
                goto LAB_segment_0__8055433c;
              }
            }
            iVar5 = iVar5 + 8;
          }
          bVar1 = false;
LAB_segment_0__8055433c:
          if (bVar1) {
            iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
            iVar5 = param_1 + iVar5 * 8;
            *(u32 *)(iVar5 + 1) = 0x14;
            *(u32 *)(iVar5 + 3) = 2;
          }
          else {
            iVar5 = FUN_segment_0__805444c0(iRam00000000,uVar2);
            if (iVar5 == 0) {
              iVar5 = FUN_segment_0__80544438(iRam00000000,uVar2);
              if (iVar5 == 0) {
                uVar10 = 0x14;
              }
              else {
                uVar10 = *(u32 *)(iVar12 + 0x11);
              }
            }
            else {
              iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
              uVar10 = *(u32 *)(param_1 + iVar5 * 8 + 1);
            }
            iVar5 = FUN_segment_0__80544530(iRam00000000,uVar2);
            iVar5 = param_1 + iVar5 * 8;
            *(u32 *)(iVar5 + 1) = uVar10;
            *(u32 *)(iVar5 + 3) = 2;
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

// === RKNet_assertFail_80554404 (0x80554404) ===
void RKNet_assertFail_80554404(void)

{
  u32 auStack_100 [12];
  u32 local_f4;
  u32 **local_f0;
  u32 **local_e0 [4];
  u32 **local_d0 [4];
  u32 **local_c0 [4];
  u32 **local_b0 [4];
  u32 **local_a0 [4];
  u32 **local_90 [4];
  u32 **local_80 [4];
  u32 **local_70 [4];
  u32 **local_60 [4];
  u32 *local_50 [4];
  u32 local_40 [6];
  
  local_f0 = local_e0;
  local_e0[0] = local_d0;
  local_d0[0] = local_c0;
  local_c0[0] = local_b0;
  local_b0[0] = local_a0;
  local_50[0] = local_40;
  local_a0[0] = local_90;
  local_90[0] = local_80;
  local_80[0] = local_70;
  local_70[0] = local_60;
  local_60[0] = local_50;
  local_f4 = 0;
  local_40[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_100,8);
}

// === RKNet_validate_805546f4 (0x805546f4) ===
int RKNet_validate_805546f4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === RKNet_assertFail_80554734 (0x80554734) ===
void RKNet_assertFail_80554734(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x9f0);
  }
  return;
}

// === RKNet_assertFail_805547b4 (0x805547b4) ===
void RKNet_assertFail_805547b4(void)

{
  if (iRam00000000 != 0) {
    if (iRam00000000 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(iRam00000000 + 0x9d8));
    }
    iRam00000000 = 0;
  }
  return;
}

// === RKNet_validate_80554808 (0x80554808) ===
void RKNet_validate_80554808(char *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 8,0,0xc0);
  }
  return;
}

// === RKNet_validate_80554900 (0x80554900) ===
void RKNet_validate_80554900(u32 *param_1)

{
  *param_1 = 0;
  *(u32 *)(param_1 + 0x9e0) = 0;
  *(u32 *)(param_1 + 0x9e4) = 0;
  *(u32 *)(param_1 + 0x9e8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8,0,0xc0);
}

// === RKNet_validate_8055497c (0x8055497c) ===
void RKNet_validate_8055497c(char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__80546b18(uRam00000000);
  if (iVar1 == 0) {
    if (*param_1 != 0) {
      *param_1 = 0;
      param_1[0x9e0] = 0;
      param_1[0x9e1] = 0;
      param_1[0x9e2] = 0;
      param_1[0x9e3] = 0;
      param_1[0x9e4] = 0;
      param_1[0x9e5] = 0;
      param_1[0x9e6] = 0;
      param_1[0x9e7] = 0;
      param_1[0x9e8] = 0;
      param_1[0x9e9] = 0;
      param_1[0x9ea] = 0;
      param_1[0x9eb] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 8,0,0xc0);
    }
  }
  else if (*param_1 == 0) {
    RKNet_validate_80554808(param_1);
  }
  if ((*param_1 != 0) && (RKNet_validate_80554e78(param_1), *(int *)(param_1 + 0x9dc) == 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === net_RKNet_80554a78 (0x80554a78) ===
void net_RKNet_80554a78(char *param_1,uint param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return;
  }
  iVar1 = (param_2 & 0xff) * 4;
  FUN_segment_0__80549f64
            (*(u32 *)
              (*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0
                       ) + 0x14),param_1 + 8,0xc0);
  return;
}

// === RKNet_validate_80554abc (0x80554abc) ===
void RKNet_validate_80554abc(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    uVar1 = ~(1 << (param_2 & 0x3f));
    *(uint *)(param_1 + 0x9e0) = *(uint *)(param_1 + 0x9e0) & uVar1;
    *(uint *)(param_1 + 0x9e4) = *(uint *)(param_1 + 0x9e4) & uVar1;
    iVar2 = (param_2 & 0xff) * 4;
    *(uint *)(param_1 + 0x9e8) = *(uint *)(param_1 + 0x9e8) & uVar1;
    FUN_segment_0__80549f24
              (*(u32 *)
                (*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar2 + 0x276c) * 0x30 + iVar2 +
                         0xf0) + 0x14));
    FUN_segment_0__80549f24
              (*(u32 *)
                (*(int *)(iRam00000000 +
                          *(int *)(iRam00000000 + (param_2 & 0xff) * 0x20 + 0x27b0) * 0x30 + iVar2 +
                         0x150) + 0x14));
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + param_2 * 0xc0 + 200,0,0xc0);
  }
  return;
}

// === RKNet_validate_80554ba8 (0x80554ba8) ===
void RKNet_validate_80554ba8(int param_1)

{
  if ((*(uint *)(*(int *)(iRam00000000 + 0x24ffc) + 0x2330c) & 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x9c8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x9c8);
}

// === net_RKNet_80554c14 (0x80554c14) ===
bool net_RKNet_80554c14(int param_1)

{
  return *(int *)(param_1 + 0x9dc) == 0;
}

// === net_RKNet_80554c24 (0x80554c24) ===
uint net_RKNet_80554c24(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x9e0) & 1 << (param_2 & 0x3f);
  return (-uVar1 | uVar1) >> 0x1f;
}

// === net_RKNet_80554c44 (0x80554c44) ===
bool net_RKNet_80554c44(char *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return false;
  }
  iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
  uVar3 = *(uint *)(iVar2 + 0x48) & ~(1 << (*(byte *)(iVar2 + 0x59) & 0x3f));
  if (uVar3 != 0) {
    bVar1 = (uVar3 & *(uint *)(param_1 + 0x9e0)) == uVar3;
    if (bVar1) {
      if (*param_1 != 0) {
        if (uVar3 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = (uVar3 & *(uint *)(param_1 + 0x9e4)) == uVar3;
        }
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
  return false;
}

// === net_RKNet_80554cdc (0x80554cdc) ===
bool net_RKNet_80554cdc(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    return false;
  }
  iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
  uVar2 = *(uint *)(iVar1 + 0x48) & ~(1 << (*(byte *)(iVar1 + 0x59) & 0x3f));
  if (uVar2 != 0) {
    return (uVar2 & *(uint *)(param_1 + 0x9e4)) == uVar2;
  }
  return false;
}

// === RKNet_validate_80554dc4 (0x80554dc4) ===
void RKNet_validate_80554dc4(u32 *param_1)

{
  *param_1 = 0;
  *(u32 *)(param_1 + 0x9e0) = 0;
  *(u32 *)(param_1 + 0x9e4) = 0;
  *(u32 *)(param_1 + 0x9e8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2,0xc);
}

// === RKNet_validate_80554e20 (0x80554e20) ===
u32 RKNet_validate_80554e20(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(u32 *)(param_1 + 0x9d8));
  }
  return 0;
}

// === RKNet_validate_80554e78 (0x80554e78) ===
void RKNet_validate_80554e78(int param_1)

{
  int iVar1;
  u32 *puVar2;
  uint uVar3;
  
  param_1 = param_1 + 200;
  uVar3 = 0;
  do {
    iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((1 << (uVar3 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) && (uVar3 != *(byte *)(iVar1 + 0x59))
       ) {
      puVar2 = *(u32 **)
                (*(int *)((uVar3 & 0xff) * 4 +
                          iRam00000000 +
                          *(int *)(iRam00000000 + (uVar3 & 0xff) * 0x20 + 0x27b0) * 0x30 + 0x150) +
                0x14);
      if (puVar2[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1,*puVar2);
      }
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0xc0;
  } while (uVar3 < 0xc);
  return;
}

// === RKNet_validate_80554f74 (0x80554f74) ===
void RKNet_validate_80554f74(int param_1)

{
  if (*(int *)(param_1 + 0x9dc) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === RKNet_validate_80554fc8 (0x80554fc8) ===
void RKNet_validate_80554fc8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8,2);
}

// === RKNet_validate_80555150 (0x80555150) ===
u32 RKNet_validate_80555150(u32 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == (u32 *)0) {
    return 0;
  }
  *param_1 = 0;
  iVar2 = iRam00000000;
  bVar1 = iRam00000000 != 0;
  if ((bVar1) && (iRam00000000 = 0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(u32 *)(iVar2 + 0x2c));
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,0);
}

// === RKNet_validate_80555298 (0x80555298) ===
int RKNet_validate_80555298(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0xa008);
  }
  return iRam00000000;
}

// === RKNet_assertFail_805552f4 (0x805552f4) ===
void RKNet_assertFail_805552f4(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = iRam00000000;
  bVar1 = iRam00000000 != 0;
  if ((bVar1) && (iRam00000000 = 0, bVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(u32 *)(iVar2 + 0x2c));
  }
  return;
}

// === RKNet_validate_805553f0 (0x805553f0) ===
int RKNet_validate_805553f0(u32 param_1)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0xa008,param_1,4);
  }
  return iRam00000000;
}

// === RKNet_assertFail_80555454 (0x80555454) ===
void RKNet_assertFail_80555454(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RKNet_validate_80555610 (0x80555610) ===
int RKNet_validate_80555610(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === RKNet_validate_80555650 (0x80555650) ===
u32 RKNet_validate_80555650(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 4,0,0x70,10);
  }
  return 0;
}

// === RKNet_validate_805556b8 (0x805556b8) ===
u32 RKNet_validate_805556b8(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(u32 *)(param_1 + 0x2c));
  }
  return 0;
}

// === net_RKNet_8055589c (0x8055589c) ===
void net_RKNet_8055589c(int param_1)

{
  FUN_segment_0__80563b58(uRam00000000);
  *(u32 *)(param_1 + 0x28) = 0;
  *(u32 *)(param_1 + 0x7578) = 0;
  *(u32 *)(param_1 + 0x10) = 0;
  return;
}

// === net_RKNet_805558e0 (0x805558e0) ===
u32 net_RKNet_805558e0(int param_1)

{
  return *(u32 *)(param_1 + 0x10);
}

// === net_RKNet_805558e8 (0x805558e8) ===
u32 net_RKNet_805558e8(int param_1)

{
  return *(u32 *)(param_1 + 0x14);
}

// === net_RKNet_805558f0 (0x805558f0) ===
int net_RKNet_805558f0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 109999;
  }
  return -*(int *)(param_1 + 0x1c);
}

// === net_RKNet_8055590c (0x8055590c) ===
int net_RKNet_8055590c(int param_1)

{
  return -*(int *)(param_1 + 0x18);
}

// === net_RKNet_80555918 (0x80555918) ===
u32 net_RKNet_80555918(int param_1)

{
  return *(u32 *)(param_1 + 0x757c);
}

// === RKNet_validate_80555920 (0x80555920) ===
/* WARNING: Removing unreachable block (ram,0x805559c0) */

u32 RKNet_validate_80555920(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  uVar1 = *(uint *)(param_1 + 0x89b8) ^ 3;
  uVar1 = -((int)(((int)uVar1 >> 1) - (uVar1 & 3)) >> 0x1f);
  if (uVar1 != 0) {
    uVar1 = (-*(uint *)(param_1 + 0x7a08) & ~*(uint *)(param_1 + 0x7a08)) >> 0x1f;
  }
  if (uVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar2 + 0x8fb8);
}

// === net_RKNet_80555a34 (0x80555a34) ===
u32 net_RKNet_80555a34(int param_1)

{
  return *(u32 *)(param_1 + 0x41f4);
}

// === net_RKNet_80555a3c (0x80555a3c) ===
int net_RKNet_80555a3c(int param_1)

{
  return param_1 + 0x7a08;
}

// === RKNet_assertFail_80555a44 (0x80555a44) ===
void RKNet_assertFail_80555a44(void)

{
  u32 auStack_1e0 [460];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1e0,0,0x1c0);
}

// === net_RKNet_80555ba0 (0x80555ba0) ===
void net_RKNet_80555ba0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) == 1) && (*(uint *)(param_1 + 0x7578) < 0x19)) {
                    /* WARNING: Could not emulate address calculation at 0x80555bd8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(uint *)(param_1 + 0x7578) << 2))();
    return;
  }
  return;
}

// === RKNet_validate_80556070 (0x80556070) ===
void RKNet_validate_80556070(int param_1)

{
  int iVar1;
  u32 auStack_e8 [24];
  u32 auStack_d0 [80];
  u32 auStack_80 [64];
  u16 local_40;
  byte local_3e;
  u16 local_3c;
  int local_30;
  int local_24;
  
  FUN_segment_0__8040bfc4(auStack_e8);
  if ((-1 < local_30) && (local_30 < 0x20)) {
    if (local_24 == 2) {
      *(uint *)(param_1 + 0x10000 + local_30 * 0xa8 + -0x74fc) =
           (unsigned int)local_3c + ((unsigned int)local_3e + (unsigned int)local_40 * 0x3c) * 1000;
      iVar1 = param_1 + 0x10000 + local_30 * 0xa8 + -0x74f8;
    }
    else {
      if (local_24 != 3) goto LAB_segment_0__80556168;
      *(uint *)(param_1 + 0x10000 + local_30 * 0xa8 + -0x74a8) =
           (unsigned int)local_3c + ((unsigned int)local_3e + (unsigned int)local_40 * 0x3c) * 1000;
      iVar1 = param_1 + 0x10000 + local_30 * 0xa8 + -0x74a4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iVar1,auStack_d0,0x4c);
  }
LAB_segment_0__80556168:
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_80,0,0xc,5);
}

// === RKNet_assertFail_80556194 (0x80556194) ===
void RKNet_assertFail_80556194(void)

{
  u32 auStack_480 [12];
  u32 local_474;
  u32 **local_470;
  u32 **local_414 [23];
  u32 **local_3b8 [23];
  u32 **local_35c [23];
  u32 **local_300 [23];
  u32 **local_2a4 [23];
  u32 **local_248 [23];
  u32 **local_1ec [23];
  u32 **local_190 [23];
  u32 **local_134 [23];
  u32 *apuStack_d8 [23];
  u32 local_7c [24];
  
  local_470 = local_414;
  local_414[0] = local_3b8;
  local_3b8[0] = local_35c;
  local_35c[0] = local_300;
  local_300[0] = local_2a4;
  apuStack_d8[0] = local_7c;
  local_2a4[0] = local_248;
  local_248[0] = local_1ec;
  local_1ec[0] = local_190;
  local_190[0] = local_134;
  local_134[0] = apuStack_d8;
  local_474 = 0;
  local_7c[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_480,0x54);
}

// === RKNet_validate_805565b0 (0x805565b0) ===
int RKNet_validate_805565b0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === RKNet_validate_805565f0 (0x805565f0) ===
int RKNet_validate_805565f0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === net_RKNet_80556648 (0x80556648) ===
void net_RKNet_80556648(int param_1)

{
  int iVar1;
  
  FUN_segment_0__80563b7c(uRam00000000);
  iVar1 = FUN_segment_0__80563b64(uRam00000000);
  if ((iVar1 == 2) ||
     (((iVar1 = FUN_segment_0__80563b6c(uRam00000000), iVar1 != 4 &&
       (iVar1 = FUN_segment_0__80563b6c(uRam00000000), iVar1 != 5)) &&
      (iVar1 = FUN_segment_0__80563b6c(uRam00000000), iVar1 != 3)))) {
    if (*(uint *)(param_1 + 0x4200) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x8055671c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(uint *)(param_1 + 0x4200) << 2))();
      return;
    }
  }
  else {
    FUN_segment_0__80561e68(param_1);
    FUN_segment_0__80563b58(uRam00000000);
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x7578) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
  }
  return;
}

// === RKNet_assertFail_805576d8 (0x805576d8) ===
void RKNet_assertFail_805576d8(void)

{
  u32 in_r6;
  u32 auStack_2938 [10536];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_2938,in_r6,0x4c);
}

// === RKNet_validate_805578e8 (0x805578e8) ===
/* WARNING: Removing unreachable block (ram,0x80557a9c) */
/* WARNING: Removing unreachable block (ram,0x80557aac) */
/* WARNING: Removing unreachable block (ram,0x80557ab8) */
/* WARNING: Removing unreachable block (ram,0x80557acc) */
/* WARNING: Removing unreachable block (ram,0x805579dc) */
/* WARNING: Removing unreachable block (ram,0x805579e8) */
/* WARNING: Removing unreachable block (ram,0x80557a10) */
/* WARNING: Removing unreachable block (ram,0x80557a04) */
/* WARNING: Removing unreachable block (ram,0x80557a30) */
/* WARNING: Removing unreachable block (ram,0x80557a44) */
/* WARNING: Removing unreachable block (ram,0x80557a58) */
/* WARNING: Removing unreachable block (ram,0x80557a74) */
/* WARNING: Removing unreachable block (ram,0x80557a80) */
/* WARNING: Removing unreachable block (ram,0x80557a94) */
/* WARNING: Removing unreachable block (ram,0x80557b00) */
/* WARNING: Removing unreachable block (ram,0x80557ad4) */
/* WARNING: Removing unreachable block (ram,0x80557b04) */
/* WARNING: Removing unreachable block (ram,0x80557b9c) */
/* WARNING: Removing unreachable block (ram,0x80557b0c) */
/* WARNING: Removing unreachable block (ram,0x80557b78) */
/* WARNING: Removing unreachable block (ram,0x80557b30) */
/* WARNING: Removing unreachable block (ram,0x80557b58) */
/* WARNING: Removing unreachable block (ram,0x80557b4c) */

void RKNet_validate_805578e8(int param_1)

{
  int iVar1;
  
  FUN_segment_0__80563b7c(uRam00000000);
  iVar1 = FUN_segment_0__80563b64(uRam00000000);
  if ((iVar1 == 2) || (iVar1 = FUN_segment_0__80563b6c(uRam00000000), iVar1 == 1)) {
    iVar1 = FUN_segment_0__80563b64(uRam00000000);
    if (iVar1 != 2) {
      if (*(int *)(param_1 + 0x43c4) == 0) {
        if ((*(int *)(param_1 + 0x42e4) != 0) && (*(int *)(param_1 + 0x42e8) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(param_1 + 0x42ec);
        }
      }
      else if ((*(int *)(param_1 + 0x4204) != 0) && (*(int *)(param_1 + 0x4208) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1 + 0x420c);
      }
      *(u32 *)(param_1 + 0x18) = 0xffffd7a7;
      *(u32 *)(param_1 + 0x14) = 3;
      FUN_segment_0__80563b58(uRam00000000);
      *(u32 *)(param_1 + 0x28) = 0;
      *(u32 *)(param_1 + 0x7578) = 0;
      *(u32 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    FUN_segment_0__80561e68(param_1);
    FUN_segment_0__80563b58(uRam00000000);
    *(u32 *)(param_1 + 0x28) = 0;
    *(u32 *)(param_1 + 0x7578) = 0;
    *(u32 *)(param_1 + 0x10) = 0;
  }
  return;
}

// === net_RKNet_80557d54 (0x80557d54) ===
u32 net_RKNet_80557d54(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x7578);
  if (2 < iVar1 - 0xdU) {
    if (iVar1 - 8U < 2) {
      *(u32 *)(param_1 + 0x14) = 0;
      FUN_segment_0__80563b58(uRam00000000);
      *(u32 *)(param_1 + 0x28) = 0;
      *(u32 *)(param_1 + 0x7578) = 0;
      *(u32 *)(param_1 + 0x10) = 0;
      return 1;
    }
    if (iVar1 != 0x11) {
      return 0;
    }
  }
  *(u32 *)(param_1 + 0x28) = 1;
  return 1;
}

// === RKNet_validate_80557df8 (0x80557df8) ===
u32 RKNet_validate_80557df8(int param_1,u32 param_2,int param_3)

{
  if ((*(char *)(*(int *)(param_1 + 0x41f0) + 2) == '\x01') &&
     (*(int *)(*(int *)(iRam00000000 + 0x14) + param_3 * 0x8cc0 + 8) == 0x524b5044)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + param_3 * 0x93f0 + 0x8ff0);
  }
  return 0;
}

// === RKNet_validate_80557f2c (0x80557f2c) ===
/* WARNING: Removing unreachable block (ram,0x80557ff8) */

u32 RKNet_validate_80557f2c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x41f4) == 2) {
    if (param_3 == 0) {
      piVar4 = (int *)(param_1 + param_2 * 0x1c0 + 0x910);
    }
    else {
      piVar4 = (int *)(param_1 + param_2 * 0x1c0 + 0x830);
    }
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if ((piVar4[1] != 0) && (piVar4[2] != 0)) {
      bVar3 = true;
    }
    if ((bVar3) && (-1 < *piVar4)) {
      bVar2 = true;
    }
    if ((bVar2) && (*piVar4 < 0x65)) {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(piVar4 + 3);
    }
  }
  return 0;
}

// === RKNet_validate_80558188 (0x80558188) ===
u32 RKNet_validate_80558188(int *param_1)

{
  if ((((param_1[1] != 0) && (param_1[2] != 0)) && (-1 < *param_1)) && (*param_1 < 0x65)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 3);
  }
  return 0;
}

// === RKNet_assertFail_805581f4 (0x805581f4) ===
void RKNet_assertFail_805581f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === net_RKNet_805585fc (0x805585fc) ===
int net_RKNet_805585fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = iRam00000000;
  if (*(int *)(param_1 + 0x41f4) == 2) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x58) - iVar5 < 1) {
        return iVar6;
      }
      uVar2 = FUN_segment_0__804376f0(*(int *)(iVar1 + 0x24ffc) + 0x23308);
      if ((short)uVar2 == -1) {
        return iVar6;
      }
      iVar3 = *(int *)(iVar1 + 0x24ffc) + 0x23308 + (uVar2 & 0xff) * 900;
      if (*(int *)(iVar3 + 8) < 0) {
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)(iVar3 + 0xc);
      }
      if (param_2 == 0) {
        if (iVar6 < piVar4[0x38]) {
          iVar6 = piVar4[0x38];
        }
      }
      else if ((param_2 == 1) && (iVar6 < *piVar4)) {
        iVar6 = *piVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}

// === net_RKNet_805586f0 (0x805586f0) ===
void net_RKNet_805586f0(u32 param_1)

{
  u32 auStack_8 [8];
  
  net_RKNet_80558ac4(param_1,auStack_8,1);
  return;
}

// === net_RKNet_80558718 (0x80558718) ===
u32 net_RKNet_80558718(int param_1,int *param_2)

{
  short sVar4;
  int iVar1;
  int iVar2;
  u32 uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u32 auStack_38 [4];
  int local_34;
  u32 auStack_30 [4];
  int local_2c;
  int local_28 [4];
  
  if (*(int *)(param_1 + 0x41f4) == 2) {
    sVar4 = FUN_segment_0__804376f0
                      (*(int *)(iRam00000000 + 0x24ffc) + 0x23308,*(u32 *)(param_1 + 0x58));
    iVar1 = net_RKNet_80558ac4(param_1,local_28,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      iVar5 = *(int *)(param_1 + 0x8b00);
      iVar6 = iVar1 + -9;
      if (iVar1 + -9 < iVar5) {
        iVar6 = iVar5;
      }
      if (iVar5 < iVar1) {
        do {
          iVar7 = iVar1 + -1;
          iVar5 = iVar6;
          if ((iVar7 < iVar6) ||
             (iVar2 = net_RKNet_80558c24(param_1,iVar7,auStack_38), iVar5 = iVar1, iVar2 == 0))
          break;
          if ((*(int *)(param_1 + 0x41f4) == 2) &&
             (iVar1 = net_RKNet_80558d5c(param_1,iVar7,&local_34), iVar1 != 0)) {
            iVar1 = 0;
            iVar2 = param_1 + local_34 * 2;
            iVar8 = 0x3f;
            do {
              if (*(short *)(iVar2 + 0x310) == 0x20) {
                iVar2 = param_1 + (local_34 + iVar1 + 1) * 2 + 0x310;
                goto LAB_segment_0__8055894c;
              }
              iVar2 = iVar2 + 2;
              iVar1 = iVar1 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar2 = 0;
LAB_segment_0__8055894c:
          iVar1 = iVar7;
        } while (iVar2 != 0);
      }
      *param_2 = iVar5;
      uVar3 = 0;
      if ((iVar5 < *(int *)(param_1 + 0x58)) || (sVar4 != -1)) {
        uVar3 = 1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x58);
      if (local_28[0] < iVar1) {
        iVar5 = *(int *)(param_1 + 0x8b00);
        iVar6 = local_28[0] + 1;
        if (local_28[0] + 1 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar5 < iVar1) {
          do {
            iVar7 = iVar1 + -1;
            iVar5 = iVar6;
            if ((iVar7 < iVar6) ||
               (iVar2 = net_RKNet_80558c24(param_1,iVar7,auStack_30), iVar5 = iVar1, iVar2 == 0
               )) break;
            if ((*(int *)(param_1 + 0x41f4) == 2) &&
               (iVar1 = net_RKNet_80558d5c(param_1,iVar7,&local_2c), iVar1 != 0)) {
              iVar1 = 0;
              iVar2 = param_1 + local_2c * 2;
              iVar8 = 0x3f;
              do {
                if (*(short *)(iVar2 + 0x310) == 0x20) {
                  iVar2 = param_1 + (local_2c + iVar1 + 1) * 2 + 0x310;
                  goto LAB_segment_0__80558848;
                }
                iVar2 = iVar2 + 2;
                iVar1 = iVar1 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            iVar2 = 0;
LAB_segment_0__80558848:
            iVar1 = iVar7;
          } while (iVar2 != 0);
        }
        *param_2 = iVar5;
        uVar3 = 0;
        if ((iVar5 < *(int *)(param_1 + 0x58)) || (sVar4 != -1)) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// === net_RKNet_805589a8 (0x805589a8) ===
int net_RKNet_805589a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  u32 auStack_14 [4];
  
  iVar1 = *(int *)(param_1 + 0x8b00);
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar1 < *(int *)(param_1 + 0x58)) {
    do {
      iVar1 = iVar4;
      iVar4 = iVar1 + -1;
      if (iVar4 < param_2) {
        return param_2;
      }
      iVar2 = net_RKNet_80558c24(param_1,iVar4,auStack_14);
      if (iVar2 == 0) {
        return iVar1;
      }
      if ((*(int *)(param_1 + 0x41f4) == 2) &&
         (iVar2 = net_RKNet_80558d5c(param_1,iVar4,&local_18), iVar2 != 0)) {
        iVar2 = 0;
        iVar3 = param_1 + local_18 * 2;
        iVar5 = 0x3f;
        do {
          if (*(short *)(iVar3 + 0x310) == 0x20) {
            iVar2 = param_1 + (local_18 + iVar2 + 1) * 2 + 0x310;
            goto LAB_segment_0__80558a78;
          }
          iVar3 = iVar3 + 2;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = 0;
LAB_segment_0__80558a78:
    } while (iVar2 != 0);
  }
  return iVar1;
}

// === net_RKNet_80558ab8 (0x80558ab8) ===
u32 net_RKNet_80558ab8(int param_1)

{
  return *(u32 *)(param_1 + 0x89b0);
}

// === net_RKNet_80558ac4 (0x80558ac4) ===
u32 net_RKNet_80558ac4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = iRam00000000;
  if (*(int *)(param_1 + 0x41f4) == 2) {
    iVar5 = 0;
    do {
      if ((*(int *)(param_1 + 0x41f4) == 2) &&
         (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58))) {
        if (*(char *)(param_1 + 0x55) == '\x01') {
          iVar2 = 1;
        }
        else {
          if (*(char *)(param_1 + 0x55) != '\x02') goto LAB_segment_0__80558b44;
          iVar2 = 2;
        }
      }
      else {
LAB_segment_0__80558b44:
        iVar2 = 3;
      }
      if ((iVar2 == 3) || (iVar5 != 0)) {
        iVar2 = *(int *)(param_1 + 0x58) - iVar5;
        if (iVar2 < *(int *)(param_1 + 0x8b00)) {
          return 0;
        }
        uVar3 = FUN_segment_0__804376f0(*(int *)(iVar1 + 0x24ffc) + 0x23308,iVar2);
        if ((short)uVar3 == -1) {
          *param_2 = iVar2;
          return 1;
        }
        if (param_3 != 0) {
          iVar4 = *(int *)(iVar1 + 0x24ffc) + 0x23308 + (uVar3 & 0xff) * 900;
          if (*(int *)(iVar4 + 8) < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + 0xc;
          }
          if ((*(char *)(iVar4 + 0x1a4) != -1) || (*(char *)(iVar4 + 0xc4) != -1)) {
            *param_2 = iVar2;
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
  }
  return 0;
}

// === net_RKNet_80558c24 (0x80558c24) ===
u32 net_RKNet_80558c24(int param_1,u32 param_2,uint *param_3)

{
  int iVar1;
  u32 uVar2;
  int local_18;
  uint local_14 [3];
  
  local_14[0] = 0;
  *param_3 = 0;
  if ((*(int *)(param_1 + 0x41f4) == 2) &&
     (iVar1 = net_RKNet_80558d5c(param_1,param_2,&local_18), iVar1 != 0)) {
    iVar1 = RKNet_assertFail_80559fa4(param_1 + local_18 * 2 + 0x310,local_14);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (local_14[0] < 0x43) {
      *param_3 = local_14[0];
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// === net_RKNet_80558ccc (0x80558ccc) ===
int net_RKNet_80558ccc(int param_1,u32 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18 [5];
  
  if ((*(int *)(param_1 + 0x41f4) == 2) &&
     (iVar1 = net_RKNet_80558d5c(param_1,param_2,local_18), iVar1 != 0)) {
    iVar2 = 0;
    iVar1 = param_1 + local_18[0] * 2;
    iVar3 = 0x3f;
    do {
      if (*(short *)(iVar1 + 0x310) == 0x20) {
        return param_1 + (local_18[0] + iVar2 + 1) * 2 + 0x310;
      }
      iVar1 = iVar1 + 2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

// === net_RKNet_80558d5c (0x80558d5c) ===
u32 net_RKNet_80558d5c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0x58);
  while( true ) {
    if (0x27b < *param_3) {
      return 0;
    }
    iVar1 = param_1 + *param_3 * 2;
    if ((*(short *)(iVar1 + 0x310) == 0) && (*(short *)(iVar1 + 0x312) == 0)) {
      if ((*(short *)(iVar1 + 0x314) == 0xd) && (*(short *)(iVar1 + 0x316) == 10)) {
        return 0;
      }
      iVar2 = iVar2 + -1;
      *param_3 = *param_3 + 2;
    }
    if (iVar2 == param_2) {
      return 1;
    }
    if (iVar2 < param_2) break;
    *param_3 = *param_3 + 1;
  }
  return 0;
}

// === net_RKNet_80558e64 (0x80558e64) ===
u32 net_RKNet_80558e64(int param_1,uint param_2)

{
  bool bVar1;
  u32 uVar2;
  int iVar3;
  u32 uVar4;
  
  uVar4 = 0;
  if ((1 << (param_2 & 0x3f) & *(uint *)(param_1 + *(short *)(iRam00000000 + 0x36) * 4 + 0x79f4)) !=
      0) {
    uVar2 = FUN_segment_0__804c22bc(param_2);
    bVar1 = false;
    iVar3 = FUN_segment_0__80444a80(uVar2,0,0,0);
    if ((((iVar3 != 0) || (iVar3 = FUN_segment_0__80444a80(uVar2,1,0,0), iVar3 != 0)) ||
        (iVar3 = FUN_segment_0__80444a80(uVar2,2,0,0), iVar3 != 0)) ||
       (iVar3 = FUN_segment_0__80444a80(uVar2,2,1,0), iVar3 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

// === RKNet_validate_80558fa8 (0x80558fa8) ===
void RKNet_validate_80558fa8(u32 *param_1,u32 *param_2)

{
  double dVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = iVar3 / 60000 + (iVar3 >> 0x1f);
  *param_1 = *param_2;
  *(short *)(param_1 + 3) = (short)iVar5 - (short)(iVar5 >> 0x1f);
  fVar2 = g_Ram_float;
  iVar5 = iVar3 + (iVar5 - (iVar5 >> 0x1f)) * -60000;
  dVar1 = (double)CONCAT44(g_Ram_float,uRam00000004);
  iVar5 = iVar5 / 1000 + (iVar5 >> 0x1f);
  *(u32 *)((int)param_1 + 0x12) = 1;
  *(u32 *)((int)param_1 + 0x1e) = 1;
  iVar6 = iVar3 / 1000 + (iVar3 >> 0x1f);
  *(char *)((int)param_1 + 0xe) = (char)iVar5 - (char)(iVar5 >> 0x1f);
  iVar5 = iVar4 / 60000 + (iVar4 >> 0x1f);
  param_1[1] = (float)((double)CONCAT44(0x43300000,iVar3 - iVar4 ^ 0x80000000) - dVar1) / fVar2;
  *(short *)(param_1 + 6) = (short)iVar5 - (short)(iVar5 >> 0x1f);
  iVar5 = iVar4 + (iVar5 - (iVar5 >> 0x1f)) * -60000;
  iVar5 = iVar5 / 1000 + (iVar5 >> 0x1f);
  *(char *)((int)param_1 + 0x1a) = (char)iVar5 - (char)(iVar5 >> 0x1f);
  iVar5 = iVar4 / 1000 + (iVar4 >> 0x1f);
  *(short *)(param_1 + 4) = (short)iVar3 + ((short)iVar6 - (short)(iVar6 >> 0x1f)) * -1000;
  *(short *)(param_1 + 7) = (short)iVar4 + ((short)iVar5 - (short)(iVar5 >> 0x1f)) * -1000;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8,param_2 + 3,100);
}

// === RKNet_validate_805591b0 (0x805591b0) ===
void RKNet_validate_805591b0(u32 param_1,u32 param_2,u32 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,param_3,0x4c);
}

// === RKNet_validate_80559214 (0x80559214) ===
u32 RKNet_validate_80559214(int param_1,int param_2)

{
  int iVar1;
  u32 uVar2;
  short sVar3;
  
  if (*(int *)(param_1 + 0x41f4) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58)) {
    if (*(char *)(param_1 + 0x55) == '\x01') {
      iVar1 = 1;
      goto LAB_segment_0__8055927c;
    }
    if (*(char *)(param_1 + 0x55) == '\x02') {
      iVar1 = 2;
      goto LAB_segment_0__8055927c;
    }
  }
  iVar1 = 3;
LAB_segment_0__8055927c:
  *(int *)(param_2 + 0xc) = iVar1;
  uVar2 = *(u32 *)(param_1 + 0x58);
  *(u32 *)(param_2 + 8) = uVar2;
  if (iVar1 == 3) {
    *(u32 *)(param_2 + 0x18) = 1;
  }
  else {
    sVar3 = FUN_segment_0__804376f0(*(int *)(iRam00000000 + 0x24ffc) + 0x23308,uVar2);
    *(bool *)(param_2 + 0x18) = sVar3 == -1;
  }
  if (*(int *)(param_2 + 0xc) == 3) {
    *(u32 *)(param_2 + 0x10) = 0;
    *(u32 *)(param_2 + 0x14) = 0;
    return 1;
  }
  FUN_segment_0__804437ac(param_2,*(u32 *)(param_1 + 0x7588));
  *(int *)(param_2 + 0x10) = param_1 + 0x290;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === RKNet_validate_805593a0 (0x805593a0) ===
u32 RKNet_validate_805593a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x41f4) == 2) {
    iVar2 = 0;
    iVar3 = 0x27c;
    iVar1 = param_1;
    do {
      if ((((*(short *)(iVar1 + 0x310) == 0) && (*(short *)(iVar1 + 0x312) == 0)) &&
          (*(short *)(iVar1 + 0x314) == 0xd)) && (*(short *)(iVar1 + 0x316) == 10)) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1 + (iVar2 + 4) * 2 + 0x310);
      }
      iVar1 = iVar1 + 2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

// === net_RKNet_8055946c (0x8055946c) ===
int net_RKNet_8055946c(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 2) {
    return param_1 + 0x7590;
  }
  return 0;
}

// === RKNet_validate_80559488 (0x80559488) ===
void RKNet_validate_80559488(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === RKNet_validate_80559508 (0x80559508) ===
/* WARNING: Removing unreachable block (ram,0x80559584) */
/* WARNING: Removing unreachable block (ram,0x80559c24) */
/* WARNING: Removing unreachable block (ram,0x80559c4c) */
/* WARNING: Removing unreachable block (ram,0x80559c40) */
/* WARNING: Removing unreachable block (ram,0x80559c54) */

void RKNet_validate_80559508(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x7580);
}

// === RKNet_validate_80559c98 (0x80559c98) ===
void RKNet_validate_80559c98(u32 param_1,u32 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0,0xbc00);
}

// === RKNet_assertFail_80559fa4 (0x80559fa4) ===
void RKNet_assertFail_80559fa4(void)

{
  u32 auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_14,0,0xc);
}

// === Packets_validate_8055a070 (0x8055a070) ===
u32 Packets_validate_8055a070(int param_1)

{
  *(u32 *)(param_1 + 0x89b0) = 0;
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055a130 (0x8055a130) ===
/* WARNING: Removing unreachable block (ram,0x8055a1a8) */
/* WARNING: Removing unreachable block (ram,0x8055a3c0) */
/* WARNING: Removing unreachable block (ram,0x8055a3e8) */
/* WARNING: Removing unreachable block (ram,0x8055a3dc) */
/* WARNING: Removing unreachable block (ram,0x8055a3f0) */

void Packets_validate_8055a130(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2);
}

// === Packets_validate_8055a40c (0x8055a40c) ===
u32 Packets_validate_8055a40c(void)

{
  int iVar1;
  u32 uStack_440;
  u32 auStack_43c [540];
  u32 auStack_220 [536];
  
  FUN_segment_0__8056a504(auStack_43c);
  iVar1 = FUN_segment_0__8042fd60(uRam00000000,2,0x33,&uStack_440);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_220,iVar1,uStack_440);
  }
  return 0;
}

// === Packets_assertFail_8055a4f8 (0x8055a4f8) ===
void Packets_assertFail_8055a4f8(void)

{
  u32 auStack_1f0 [456];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1f0,0,0x1c0);
}

// === Packets_validate_8055a684 (0x8055a684) ===
void Packets_validate_8055a684(int param_1,u32 param_2)

{
  u32 auStack_8 [8];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,*(u32 *)(param_1 + 0x7588),0,1,0,0,auStack_8);
}

// === Packets_validate_8055a6d0 (0x8055a6d0) ===
u32 Packets_validate_8055a6d0(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055a984 (0x8055a984) ===
/* WARNING: Removing unreachable block (ram,0x8055a9f4) */

void Packets_validate_8055a984(int param_1,u32 param_2)

{
  int iVar1;
  u64 uVar2;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    param_2 = (u32)uVar2;
    if ((int)((ulonglong)uVar2 >> 0x20) != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  iVar1 = Packets_assertFail_8055aa9c
                    (param_1,param_2,*(u32 *)(param_1 + 0x4200),
                     *(u32 *)(param_1 + 0x4204),param_1 + 0x4224,param_1 + 0x4208);
  if (iVar1 == 0) {
    *(u32 *)(param_1 + 0x14) = 1;
    *(int *)(param_1 + 0x89b4) = *(int *)(param_1 + 0x89b4) + 1;
  }
  else {
    *(int *)(param_1 + 0x757c) = iVar1;
    *(u32 *)(param_1 + 0x14) = 6;
  }
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
    }
    *(u32 *)(param_1 + 0x20) = 0;
  }
  return;
}

// === Packets_assertFail_8055aa9c (0x8055aa9c) ===
void Packets_assertFail_8055aa9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(1,0);
}

// === Packets_validate_8055ac98 (0x8055ac98) ===
void Packets_validate_8055ac98
               (u32 param_1,u32 param_2,u32 param_3,u32 param_4)

{
  u32 auStack_110 [256];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_110,1,param_3,param_4,0);
}

// === Packets_validate_8055adec (0x8055adec) ===
u32 Packets_validate_8055adec(u32 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Packets_validate_8055fc04(param_1,param_2 + 0x1c);
  if (iVar1 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_assertFail_8055af90 (0x8055af90) ===
void Packets_assertFail_8055af90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(1);
}

// === Packets_validate_8055b180 (0x8055b180) ===
u32 Packets_validate_8055b180(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055b24c (0x8055b24c) ===
/* WARNING: Removing unreachable block (ram,0x8055b2c8) */

void Packets_validate_8055b24c(int param_1)

{
  bool bVar1;
  int iVar2;
  u32 uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar2 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  iVar2 = Packets_assertFail_8055c504(param_1,param_1 + 0x4200,local_18);
  uVar3 = 1;
  bVar1 = false;
  if ((*(char *)(param_1 + 0x4204) != 0) && (local_18[0] == 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    bVar1 = false;
    if ((*(char *)(param_1 + 0x4204) == 0) && (local_18[0] < 2)) {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar3 = 0;
    }
  }
  Packets_validate_8055a40c(param_1,uVar3);
  if (iVar2 == 0) {
    *(u32 *)(param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 0x757c) = iVar2;
    *(u32 *)(param_1 + 0x14) = 6;
  }
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
    }
    *(u32 *)(param_1 + 0x20) = 0;
  }
  return;
}

// === Packets_validate_8055b3bc (0x8055b3bc) ===
u32 Packets_validate_8055b3bc(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055b498 (0x8055b498) ===
u32 Packets_validate_8055b498(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055b568 (0x8055b568) ===
/* WARNING: Removing unreachable block (ram,0x8055b5dc) */

void Packets_validate_8055b568(int param_1)

{
  int iVar1;
  uint uVar2;
  u32 auStack_88 [92];
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  uVar2 = 0;
  do {
    if (*(int *)(*(int *)(iRam00000000 + 0x14) + (uVar2 & 0xff) * 0x8cc0 + 8) == 0x524b5044) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iRam00000000 + (uVar2 & 0xff) * 0x93f0 + 0x4e,auStack_88);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (*(char *)(param_1 + 0x28) != 0) {
    *(u32 *)(param_1 + 0x14) = 1;
    if (*(char *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
      }
      *(u32 *)(param_1 + 0x20) = 0;
    }
    return;
  }
  Packets_assertFail_8055c384(param_1,param_1 + 0x4200);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_validate_8055b7f0 (0x8055b7f0) ===
u32 Packets_validate_8055b7f0(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055b8a0 (0x8055b8a0) ===
/* WARNING: Removing unreachable block (ram,0x8055b91c) */

void Packets_validate_8055b8a0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  if (**(int **)(param_1 + 0x4200) == 0) {
    *(u32 *)(param_1 + 0x14) = 1;
    if (*(char *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
      }
      *(u32 *)(param_1 + 0x20) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(1,(*(int **)(param_1 + 0x4200))[1]);
}

// === Packets_validate_8055ba08 (0x8055ba08) ===
u32 Packets_validate_8055ba08(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055baa8 (0x8055baa8) ===
/* WARNING: Removing unreachable block (ram,0x8055bb18) */

void Packets_validate_8055baa8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  uVar2 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iRam00000000 + 0x14) + (uVar2 & 0xff) * 0x8cc0 + 8) == 0x524b5044) {
      Packets_assertFail_8055bc00(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    if (*(char *)(param_1 + 0x28) != 0) break;
    uVar2 = uVar2 + 1;
    if (3 < uVar2) {
      *(u32 *)(param_1 + 0x14) = 1;
LAB_segment_0__8055bbb0:
      if (*(char *)(param_1 + 0x20) != 0) {
        iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
        }
        *(u32 *)(param_1 + 0x20) = 0;
      }
      return;
    }
  }
  *(u32 *)(param_1 + 0x14) = 1;
  goto LAB_segment_0__8055bbb0;
}

// === Packets_assertFail_8055bc00 (0x8055bc00) ===
void Packets_assertFail_8055bc00(void)

{
  u32 auStack_1f8 [480];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1f8,0,0x1c0,uRam00000000);
}

// === Packets_validate_8055bde8 (0x8055bde8) ===
u32 Packets_validate_8055bde8(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_assertFail_8055c384 (0x8055c384) ===
void Packets_assertFail_8055c384(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_assertFail_8055c504 (0x8055c504) ===
void Packets_assertFail_8055c504(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_assertFail_8055c748 (0x8055c748) ===
void Packets_assertFail_8055c748(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === Packets_validate_8055c8e0 (0x8055c8e0) ===
void Packets_validate_8055c8e0(u32 param_1,u32 param_2)

{
  u32 auStack_104 [240];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0,auStack_104);
}

// === Packets_validate_8055cb84 (0x8055cb84) ===
void Packets_validate_8055cb84(u32 param_1,u32 param_2)

{
  u32 auStack_4b4 [1156];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0,auStack_4b4);
}

// === Packets_validate_8055cfe8 (0x8055cfe8) ===
void Packets_validate_8055cfe8(u32 param_1,u32 param_2)

{
  u32 auStack_4bc [1152];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,auStack_4bc);
}

// === Packets_validate_8055d544 (0x8055d544) ===
void Packets_validate_8055d544(u32 param_1,u32 param_2)

{
  u32 auStack_3b0 [908];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,auStack_3b0);
}

// === Packets_validate_8055d93c (0x8055d93c) ===
void Packets_validate_8055d93c
               (u32 param_1,u32 param_2,u32 param_3,u32 param_4,
               u32 param_5)

{
  u32 auStack_f8 [232];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,param_5,auStack_f8);
}

// === Packets_assertFail_8055db48 (0x8055db48) ===
void Packets_assertFail_8055db48(void)

{
  u32 auStack_1e0 [452];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1e0,0,0x1c0);
}

// === Packets_validate_8055dc50 (0x8055dc50) ===
u32 Packets_validate_8055dc50(u32 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(u16 *)(param_3 + 0x18) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
    if ((*(u16 *)(param_3 + 0x18) & 2) != 0) {
      iVar1 = 1;
    }
  }
  if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_2 + 0x8e50 + (unsigned int)*(byte *)(param_3 + 0x6e) * 0xc);
  }
  return 0;
}

// === Packets_validate_8055dccc (0x8055dccc) ===
u32 Packets_validate_8055dccc(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055dd7c (0x8055dd7c) ===
/* WARNING: Removing unreachable block (ram,0x8055ddec) */

void Packets_validate_8055dd7c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x4200) == 0) {
    iVar1 = FUN_segment_0__80565364(param_1 + 0x24,3);
    if (iVar1 == 4) {
      FUN_segment_0__80564fb4(param_1 + 0x24);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x14) = 1;
    if (*(char *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
      }
      *(u32 *)(param_1 + 0x20) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === Packets_validate_8055dec4 (0x8055dec4) ===
void Packets_validate_8055dec4(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055df48 (0x8055df48) ===
/* WARNING: Removing unreachable block (ram,0x8055dfe0) */

void Packets_validate_8055df48(int param_1)

{
  int iVar1;
  int iVar2;
  u32 *puVar3;
  u32 local_28 [6];
  
  local_28[0] = uRam00000000;
  local_28[1] = uRam00000004;
  local_28[2] = uRam00000008;
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  puVar3 = local_28;
  iVar1 = 0;
  do {
    iVar2 = FUN_segment_0__80565364(param_1 + 0x24,*puVar3);
    if (iVar2 == 4) {
      FUN_segment_0__80564fb4(param_1 + 0x24);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 < 3);
  *(u32 *)(param_1 + 0x14) = 1;
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
    }
    *(u32 *)(param_1 + 0x20) = 0;
  }
  return;
}

// === Packets_validate_8055e0ac (0x8055e0ac) ===
u32 Packets_validate_8055e0ac(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055e184 (0x8055e184) ===
/* WARNING: Removing unreachable block (ram,0x8055e2a4) */
/* WARNING: Removing unreachable block (ram,0x8055e2c0) */
/* WARNING: Removing unreachable block (ram,0x8055e308) */
/* WARNING: Removing unreachable block (ram,0x8055e2d4) */
/* WARNING: Removing unreachable block (ram,0x8055e318) */
/* WARNING: Removing unreachable block (ram,0x8055e2dc) */
/* WARNING: Removing unreachable block (ram,0x8055e328) */
/* WARNING: Removing unreachable block (ram,0x8055e2e4) */
/* WARNING: Removing unreachable block (ram,0x8055e338) */
/* WARNING: Removing unreachable block (ram,0x8055e2ec) */
/* WARNING: Removing unreachable block (ram,0x8055e348) */
/* WARNING: Removing unreachable block (ram,0x8055e2f4) */
/* WARNING: Removing unreachable block (ram,0x8055e358) */
/* WARNING: Removing unreachable block (ram,0x8055e2fc) */
/* WARNING: Removing unreachable block (ram,0x8055e368) */
/* WARNING: Removing unreachable block (ram,0x8055e304) */
/* WARNING: Removing unreachable block (ram,0x8055e384) */
/* WARNING: Removing unreachable block (ram,0x8055e2b0) */
/* WARNING: Removing unreachable block (ram,0x8055e43c) */
/* WARNING: Removing unreachable block (ram,0x8055e464) */
/* WARNING: Removing unreachable block (ram,0x8055e458) */
/* WARNING: Removing unreachable block (ram,0x8055e46c) */

void Packets_validate_8055e184(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2);
}

// === Packets_validate_8055e488 (0x8055e488) ===
u32 Packets_validate_8055e488(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055e5b8 (0x8055e5b8) ===
/* WARNING: Removing unreachable block (ram,0x8055e628) */

void Packets_validate_8055e5b8(int param_1)

{
  int iVar1;
  u32 extraout_r4;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  Packets_validate_8055ea0c
            (param_1,*(u32 *)(param_1 + 0x4220),*(u32 *)(param_1 + 0x420c),
             *(u32 *)(param_1 + 0x4210));
  if (*(int *)(param_1 + 0x4218) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x4218;
  }
  iVar1 = Packets_validate_8055e734
                    (param_1,extraout_r4,*(u32 *)(param_1 + 0x4200),
                     *(u32 *)(param_1 + 0x4204),*(u32 *)(param_1 + 0x4208),
                     *(u32 *)(param_1 + 0x4220),*(u32 *)(param_1 + 0x4214),iVar1,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x4210) == 2) {
      *(int *)(param_1 + 0x89b8) = *(int *)(param_1 + 0x89b8) + 1;
    }
    else if (*(int *)(param_1 + 0x4218) != 0) {
      *(int *)(param_1 + 0x8afc) = *(int *)(param_1 + 0x8afc) + 1;
    }
    *(u32 *)(param_1 + 0x14) = 1;
  }
  else {
    *(int *)(param_1 + 0x757c) = iVar1;
    *(u32 *)(param_1 + 0x14) = 6;
  }
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
    }
    *(u32 *)(param_1 + 0x20) = 0;
  }
  return;
}

// === Packets_validate_8055e734 (0x8055e734) ===
void Packets_validate_8055e734(int param_1,u32 param_2,int param_3,int param_4)

{
  u32 auStack_128 [260];
  
  if (param_4 != *(int *)(param_1 + 0x7584) || param_3 != *(int *)(param_1 + 0x7580)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_128,2);
}

// === Packets_validate_8055ea0c (0x8055ea0c) ===
void Packets_validate_8055ea0c(u32 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x2c260,0x80);
}

// === Packets_validate_8055ec8c (0x8055ec8c) ===
u32 Packets_validate_8055ec8c(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055ef5c (0x8055ef5c) ===
void Packets_validate_8055ef5c(u32 *param_1,int param_2)

{
  u32 uVar1;
  
  uVar1 = *(u32 *)(param_2 + 0x40);
  param_1[1] = *(u32 *)(param_2 + 0x44);
  *param_1 = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 4,param_2 + 8,0xc);
}

// === Packets_validate_8055efc8 (0x8055efc8) ===
u32 Packets_validate_8055efc8(int param_1)

{
  if (*(int *)(param_1 + 0x41f4) == 0) {
    *(u32 *)(param_1 + 0x14) = 2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x757c));
}

// === Packets_validate_8055f17c (0x8055f17c) ===
/* WARNING: Removing unreachable block (ram,0x8055f1f0) */
/* WARNING: Removing unreachable block (ram,0x8055f2f4) */
/* WARNING: Removing unreachable block (ram,0x8055f31c) */
/* WARNING: Removing unreachable block (ram,0x8055f310) */
/* WARNING: Removing unreachable block (ram,0x8055f324) */

void Packets_validate_8055f17c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(u32 *)(param_1 + 0x4208));
}

// === Packets_assertFail_8055f33c (0x8055f33c) ===
void Packets_assertFail_8055f33c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(1,0);
}

// === Packets_assertFail_8055f478 (0x8055f478) ===
void Packets_assertFail_8055f478(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_validate_8055f604 (0x8055f604) ===
u32 Packets_validate_8055f604(int param_1)

{
  int iVar1;
  u32 uVar2;
  u32 auStack_18 [16];
  
  FUN_segment_0__8056a504(auStack_18);
  if (*(char *)(param_1 + 0x20) == 0) {
    *(u32 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(u32 *)(param_1 + 0x1c) = *(u32 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(u32 *)(param_1 + 0x20) = 1;
  }
  iVar1 = FUN_segment_0__805657d0(param_1 + 0x24,0x16000);
  if (iVar1 == 0) {
    iVar1 = FUN_segment_0__8056a520(auStack_18);
    if (iVar1 == 3) {
      uVar2 = 3;
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_segment_0__8056a510(auStack_18);
      if (iVar1 == -4) {
        uVar2 = 7;
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 0;
    }
    if (*(char *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(u32 *)(param_1 + 0x758c));
      }
      *(u32 *)(param_1 + 0x20) = 0;
    }
    return uVar2;
  }
  FUN_segment_0__80564fb4(param_1 + 0x24);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === Packets_validate_8055f750 (0x8055f750) ===
void Packets_validate_8055f750(int param_1,u32 *param_2)

{
  u32 auStack_28 [24];
  
  *(u32 **)(param_1 + 0x4204) = param_2;
  *param_2 = 0;
  *(u32 *)(param_1 + 0x420c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x4e,
             auStack_28);
}

// === Packets_validate_8055fa20 (0x8055fa20) ===
u32 Packets_validate_8055fa20(int param_1,u32 param_2)

{
  int iVar1;
  int iVar2;
  u32 auStack_8 [8];
  
  iVar2 = param_1 + 0x10000 + *(short *)(iRam00000000 + 0x36) * 0x50;
  iVar1 = *(int *)(iVar2 + -0x7644);
  if ((iVar1 != 0) && (iVar1 == *(int *)(iRam00000000 + 0x78))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x79b,auStack_8,param_2,iVar2 + -0x7640);
  }
  return 1;
}

// === Packets_validate_8055faac (0x8055faac) ===
void Packets_validate_8055faac(u32 param_1,int param_2)

{
  u32 auStack_18 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iRam00000000 + param_2 * 0x93f0 + 0x4e,auStack_18);
}

// === Packets_assertFail_8055fb54 (0x8055fb54) ===
void Packets_assertFail_8055fb54(void)

{
  u32 auStack_18 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x4e,
             auStack_18);
}

// === Packets_validate_8055fc04 (0x8055fc04) ===
void Packets_validate_8055fc04(u32 param_1,u32 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0,0x430,iRam00000000 + param_3 * 0x93f0);
}

// === Packets_assertFail_8055fea4 (0x8055fea4) ===
void Packets_assertFail_8055fea4(void)

{
  u32 auStack_208 [452];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_208,0,0x1c0);
}