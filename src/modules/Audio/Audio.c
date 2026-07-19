// Audio module - Mario Kart Wii PC Port
// Phase 6: Reconstructed from 942 decompiled functions
// Address range: 0x805100ac - 0x8073ffd4

#include "Audio.h"
#include "../types.h"

// Global Ram base pointers (defined in stubs.c)
extern void *g_Ram_ptr;
extern float g_Ram_float;
extern unsigned char g_Ram_byte;
extern unsigned int g_Ram_uint;

// === snd_EGG_Sound_805100ac (0x805100ac) ===
void snd_EGG_Sound_805100ac(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if ((0x6f < *(int *)*g_Ram_uint) && (*(int *)*g_Ram_uint < 0x78)) {
    snd_EGG_Sound_805103e8();
    FUN_segment_0__8042123c(g_Ram_uint);
  }
  return;
}

// === snd_EGG_Sound_80510100 (0x80510100) ===
void snd_EGG_Sound_80510100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    if (*(int *)(param_1 + 0x1c8) != 1) {
      return;
    }
    if (*(int *)(param_1 + 8) != 4) {
      return;
    }
    if (*(int *)(param_1 + 0x1c) < 0x1f) {
      return;
    }
    FUN_segment_0__804d1c48((double)(float)g_Ram_uint,param_1,0);
    FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
    return;
  }
  iVar3 = *(int *)*g_Ram_uint;
  if ((0x67 < iVar3) && (iVar3 < 0x70)) {
    if ((1 < (uint)g_Ram_uint[g_Ram_uint[0xa47] * 0x16 + 0x10]) &&
       (*(char *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x8b) == 0)) {
      return;
    }
    if (7 < iVar3 - 0x68U) {
      FUN_segment_0__804f8c44(g_Ram_uint,0xffffffff,0);
      *(undefined4 *)(param_1 + 0x1c8) = 1;
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x805101a8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((iVar3 - 0x68U) * 4))();
    return;
  }
  if (iVar3 < 0x70) {
    return;
  }
  if (0x77 < iVar3) {
    return;
  }
  iVar1 = g_Ram_uint[0xa47];
  if ((((uint)g_Ram_uint[iVar1 * 0x16 + 0x10] < 2) ||
      ((g_Ram_uint[iVar1 * 0x16 + 0x12] & 1) == 0)) ||
     (*(char *)((int)g_Ram_uint + iVar1 * 0x58 + 0x5a) != 0)) {
    if ((iVar3 < 0x70) || (0x73 < iVar3)) {
      if ((0x73 < iVar3) && (iVar3 < 0x78)) {
        FUN_segment_0__804f8c44(g_Ram_uint,0x5c,0);
      }
    }
    else {
      FUN_segment_0__804f8c44(g_Ram_uint,0x56,0);
    }
    *(undefined4 *)(param_1 + 0x1c8) = 1;
    return;
  }
  if (*(char *)((int)g_Ram_uint + iVar1 * 0x58 + 0x8b) == 0) {
    return;
  }
  uVar2 = 0xffffffff;
  iVar1 = 0;
  if (iVar3 < 0x74) {
    if (0x71 < iVar3) {
LAB_segment_0__805102c4:
      iVar1 = 1;
      if ((*(int *)(g_Ram_uint[0x26] + 0x68) < 2) && (*(int *)(g_Ram_uint[0x26] + 0x6c) < 2))
      {
        iVar1 = 0;
      }
      goto LAB_segment_0__805102e8;
    }
    if (iVar3 < 0x70) goto LAB_segment_0__805102e8;
  }
  else {
    if (0x77 < iVar3) goto LAB_segment_0__805102e8;
    if (0x75 < iVar3) goto LAB_segment_0__805102c4;
  }
  iVar1 = ((int)*(uint *)(g_Ram_uint[0x26] + 0x2d0) >> 0x1f) +
          (uint)(2 < *(uint *)(g_Ram_uint[0x26] + 0x2d0));
LAB_segment_0__805102e8:
  if (iVar1 == 0) {
    if (iVar3 - 0x70U < 8) {
                    /* WARNING: Could not emulate address calculation at 0x8051033c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((iVar3 - 0x70U) * 4))(g_Ram_uint,0xffffffff);
      return;
    }
  }
  else if ((iVar3 < 0x70) || (0x73 < iVar3)) {
    if ((0x73 < iVar3) && (iVar3 < 0x78)) {
      uVar2 = 0x5c;
    }
  }
  else {
    uVar2 = 0x56;
  }
  FUN_segment_0__804f8c44(g_Ram_uint,uVar2,0);
  *(undefined4 *)(param_1 + 0x1c8) = 1;
  return;
}

// === snd_EGG_Sound_805103e8 (0x805103e8) ===
void snd_EGG_Sound_805103e8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  ushort local_24;
  ushort local_1c;
  
  uVar2 = snd_EGG_Sound_80549970(g_Ram_ptr,0);
  iVar1 = *(int *)*g_Ram_ptr;
  if ((iVar1 < 0x68) || (0x69 < iVar1)) {
    if ((0x6b < iVar1) && (iVar1 < 0x6e)) {
      local_24 = *(ushort *)(g_Ram_ptr + (uVar2 & 0xff) * 0x3c + 0x340);
      if (9999 < local_24) {
        local_24 = 9999;
      }
      if (local_24 == 0) {
        local_24 = 1;
      }
      if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
        piVar4 = (int *)0;
      }
      else {
        piVar4 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      *(ushort *)(piVar4 + 0x2408) = local_24;
    }
  }
  else {
    local_1c = *(ushort *)(g_Ram_ptr + (uVar2 & 0xff) * 0x3c + 0x340);
    if (9999 < local_1c) {
      local_1c = 9999;
    }
    if (local_1c == 0) {
      local_1c = 1;
    }
    if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
      piVar4 = (int *)0;
    }
    else {
      piVar4 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    *(ushort *)(piVar4 + 0x2406) = local_1c;
  }
  bVar6 = false;
  uVar7 = 0;
  do {
    if (((uVar7 & 0xff) != uVar2) && (-1 < *(char *)(g_Ram_ptr[0x26] + (uVar7 & 0xff) + 0x2d8)))
    {
      iVar3 = FUN_segment_0__804b9814(*(undefined4 *)(*g_Ram_ptr + 0x404));
      iVar1 = *(int *)*g_Ram_ptr;
      if ((iVar1 < 0x68) || (0x69 < iVar1)) {
        if ((0x6b < iVar1) && (iVar1 < 0x6e)) {
          uVar5 = *(ushort *)(g_Ram_ptr + (uVar7 & 0xff) * 0x3c + 0x340);
          if (9999 < uVar5) {
            uVar5 = 9999;
          }
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          *(ushort *)(iVar3 + 0x20) = uVar5;
        }
      }
      else {
        uVar5 = *(ushort *)(g_Ram_ptr + (uVar7 & 0xff) * 0x3c + 0x340);
        if (9999 < uVar5) {
          uVar5 = 9999;
        }
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        *(ushort *)(iVar3 + 0x1e) = uVar5;
      }
      if (*(int *)*g_Ram_ptr - 0x68U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80510664 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((*(int *)*g_Ram_ptr - 0x68U) * 4))();
        return;
      }
      bVar6 = true;
    }
    uVar7 = uVar7 + 1;
    if (0xb < uVar7) {
      if (bVar6) {
        FUN_segment_0__804b9138(*(undefined4 *)(*g_Ram_ptr + 0x404));
      }
      FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
      return;
    }
  } while( true );
}

// === snd_EGG_Sound_80510764 (0x80510764) ===
undefined4 * snd_EGG_Sound_80510764(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  return param_1;
}

// === EGG_Sound_validate_805107a8 (0x805107a8) ===
int EGG_Sound_validate_805107a8(int param_1,int param_2)

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

// === snd_EGG_Sound_80510810 (0x80510810) ===
void snd_EGG_Sound_80510810(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  return;
}

// === EGG_Sound_validate_805108d4 (0x805108d4) ===
void EGG_Sound_validate_805108d4(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80510904 (0x80510904) ===
void EGG_Sound_validate_80510904(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === snd_EGG_Sound_80510968 (0x80510968) ===
undefined4 * snd_EGG_Sound_80510968(undefined4 *param_1)

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
  FUN_segment_0__804aed04(param_1 + 0x1b);
  FUN_segment_0__804aee0c(param_1 + 0x1e);
  FUN_segment_0__804cd634(param_1 + 0xa4);
  return param_1;
}

// === EGG_Sound_validate_805109fc (0x805109fc) ===
int EGG_Sound_validate_805109fc(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x290,0xffffffff);
    FUN_segment_0__804aee50(param_1 + 0x78,0xffffffff);
    FUN_segment_0__804aed24(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80510a88 (0x80510a88) ===
void snd_EGG_Sound_80510a88(int param_1)

{
  *(int *)(g_Ram_uint[0x26] + 0x2d0) = *(int *)(g_Ram_uint[0x26] + 0x2d0) + 1;
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80510ad8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return;
  }
  EGG_Sound_validate_8054c108(g_Ram_uint);
  FUN_segment_0__804e5ea4(*g_Ram_uint);
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x78,0);
  FUN_segment_0__804aeea8(param_1 + 0x78,param_1 + 0x6c);
  FUN_segment_0__804cd808(param_1 + 0x290,0xc,4,0);
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 2;
  return;
}

// === snd_EGG_Sound_80510bc0 (0x80510bc0) ===
void snd_EGG_Sound_80510bc0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80510c40;
        }
      }
      bVar1 = false;
LAB_segment_0__80510c40:
      if (bVar1) goto LAB_segment_0__80510c50;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80510c50:
  (**(code **)(*piVar3 + 100))(piVar3);
  if (*(int *)*g_Ram_ptr - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80510c8c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_ptr - 0x58U) * 4))();
    return;
  }
  (**(code **)(*param_1 + 0x24))(param_1,0x50,0);
  param_1[0x1a] = 0;
  piVar3 = *(int **)(*g_Ram_ptr + 0x24c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80510d5c;
        }
      }
      bVar1 = false;
LAB_segment_0__80510d5c:
      if (bVar1) goto LAB_segment_0__80510d6c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80510d6c:
  piVar3[0x64a] = (int)(param_1 + 0x1b);
  if (0xf < *(int *)*g_Ram_ptr - 0x58U) {
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x80510d9c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(int *)*g_Ram_ptr - 0x58U) * 4))();
  return;
}

// === snd_EGG_Sound_80510fa4 (0x80510fa4) ===
void snd_EGG_Sound_80510fa4(int param_1)

{
  if (*(int *)(param_1 + 0x68) - 3U < 2) {
    FUN_segment_0__804aed7c(param_1 + 0x6c);
    if (*(float *)(param_1 + 0x6c) < g_Ram_float) {
      FUN_segment_0__804af4b8(param_1 + 0x78);
    }
  }
  return;
}

// === snd_EGG_Sound_80511000 (0x80511000) ===
void snd_EGG_Sound_80511000(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *piVar8;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 != 0) {
    if (iVar3 != 1) {
      if (iVar3 != 7) {
        return;
      }
      iVar3 = EGG_Sound_assertFail_80546a88(g_Ram_ptr);
      if (iVar3 != 1) {
        return;
      }
      piVar8 = *(int **)(*g_Ram_ptr + 0x148);
      if (piVar8 != (int *)0) {
        if (piVar8 != (int *)0) {
          for (puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8);
              puVar6 != (void *)0; puVar6 = (undefined4 *)*puVar6) {
            if (puVar6 == (void *)0) {
              bVar7 = true;
              goto LAB_segment_0__805114f0;
            }
          }
          bVar7 = false;
LAB_segment_0__805114f0:
          if (bVar7) goto LAB_segment_0__80511500;
        }
        piVar8 = (int *)0;
      }
      else {
        piVar8 = (int *)0;
      }
LAB_segment_0__80511500:
      FUN_segment_0__804a9164(piVar8);
      *(undefined4 *)(param_1 + 0x68) = 6;
      return;
    }
    if (*(int *)(param_1 + 0x20) == 600) {
      piVar8 = *(int **)(*g_Ram_ptr + 0x148);
      if (piVar8 != (int *)0) {
        if (piVar8 != (int *)0) {
          for (puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8);
              puVar6 != (void *)0; puVar6 = (undefined4 *)*puVar6) {
            if (puVar6 == (void *)0) {
              bVar7 = true;
              goto LAB_segment_0__8051137c;
            }
          }
          bVar7 = false;
LAB_segment_0__8051137c:
          if (bVar7) goto LAB_segment_0__8051138c;
        }
        piVar8 = (int *)0;
      }
      else {
        piVar8 = (int *)0;
      }
LAB_segment_0__8051138c:
      (**(code **)(*piVar8 + 0x68))(piVar8,0x106c,0);
    }
    bVar7 = true;
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x284); iVar3 = iVar3 + 1) {
      uVar5 = FUN_segment_0__804ce0ec(param_1 + 0x290,iVar3);
      if (-1 < (int)(-uVar5 | uVar5)) {
        bVar7 = false;
        break;
      }
    }
    if (!bVar7) {
      return;
    }
    piVar8 = *(int **)(*g_Ram_ptr + 0x148);
    if (piVar8 != (int *)0) {
      if (piVar8 != (int *)0) {
        for (puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8);
            puVar6 != (void *)0; puVar6 = (undefined4 *)*puVar6) {
          if (puVar6 == (void *)0) {
            bVar7 = true;
            goto LAB_segment_0__80511454;
          }
        }
        bVar7 = false;
LAB_segment_0__80511454:
        if (bVar7) goto LAB_segment_0__80511464;
      }
      piVar8 = (int *)0;
    }
    else {
      piVar8 = (int *)0;
    }
LAB_segment_0__80511464:
    FUN_segment_0__804a9164(piVar8);
    *(undefined4 *)(param_1 + 0x68) = 2;
    return;
  }
  if (*(int *)(param_1 + 0x20) != 600) goto LAB_segment_0__805110d8;
  piVar8 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar6 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar6 != (void *)0
          ; puVar6 = (undefined4 *)*puVar6) {
        if (puVar6 == (void *)0) {
          bVar7 = true;
          goto LAB_segment_0__805110ac;
        }
      }
      bVar7 = false;
LAB_segment_0__805110ac:
      if (bVar7) goto LAB_segment_0__805110bc;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__805110bc:
  (**(code **)(*piVar8 + 0x68))(piVar8,0x106c,0);
LAB_segment_0__805110d8:
  uVar5 = 0;
  iVar3 = *(int *)*g_Ram_ptr;
  if ((iVar3 < 0x60) || (0x67 < iVar3)) {
    if (((0x57 < iVar3) && (iVar3 < 0x5a)) || ((0x5d < iVar3 && (iVar3 < 0x60)))) {
      uVar5 = (~g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x10] | 1U) -
              (1U - g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x10] >> 1) >> 0x1f;
    }
  }
  else {
    uVar5 = 1;
    bVar7 = true;
    iVar3 = g_Ram_ptr[0xa47];
    if ((1 < (uint)g_Ram_ptr[iVar3 * 0x16 + 0x10]) &&
       ((g_Ram_ptr[iVar3 * 0x16 + 0x12] & 1U) != 0)) {
      bVar7 = false;
    }
    if ((!bVar7) && (*(char *)((int)g_Ram_ptr + iVar3 * 0x58 + 0x5a) == 0)) {
      uVar5 = 0;
    }
  }
  if ((uVar5 == 0) &&
     (((int)*(uint *)(param_1 + 0x20) >> 0x1f) + (uint)(0x2a2f < *(uint *)(param_1 + 0x20)) == 0)) {
    iVar3 = snd_EGG_Sound_8054c7f0(g_Ram_ptr);
    if (((iVar3 != 0) && (iVar3 = FUN_segment_0__80554c44(g_Ram_ptr), iVar3 != 0)) &&
       (iVar3 = snd_EGG_Sound_8054c874(g_Ram_ptr), iVar3 != 0)) {
      snd_EGG_Sound_805125e0(param_1);
      bVar7 = false;
      iVar3 = *(int *)*g_Ram_ptr;
      if (((0x60 < iVar3) && (iVar3 < 100)) || ((100 < iVar3 && (iVar3 < 0x68)))) {
        iVar4 = *(int *)(param_1 + 0x284);
        bVar1 = false;
        bVar2 = false;
        iVar3 = param_1;
        if (0 < iVar4) {
          do {
            if ((1 << (*(byte *)(iVar3 + 500) & 0x3f) &
                g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0) {
              if (*(int *)(iVar3 + 0x1f8) == 0) {
                bVar1 = true;
              }
              else if (*(int *)(iVar3 + 0x1f8) == 1) {
                bVar2 = true;
              }
            }
            iVar3 = iVar3 + 0xc;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        bVar7 = false;
        if ((!bVar1) || (!bVar2)) {
          bVar7 = true;
        }
      }
      if (bVar7) {
        *(undefined4 *)(param_1 + 0x68) = 7;
        snd_EGG_Sound_805464b0(g_Ram_ptr);
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 7;
    snd_EGG_Sound_805464b0(g_Ram_ptr);
  }
  return;
}

// === snd_EGG_Sound_8051152c (0x8051152c) ===
void snd_EGG_Sound_8051152c(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 unaff_r30;
  
  iVar2 = param_1[0x1a];
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      param_1[0x1a] = 4;
      if (0xf < *(int *)*g_Ram_ptr - 0x58U) {
        (**(code **)(*param_1 + 0x24))(param_1,param_2,0);
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x80511730 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((*(int *)*g_Ram_ptr - 0x58U) * 4))();
      return;
    }
    if (iVar2 == 4) {
      FUN_segment_0__804af568(param_1 + 0x1e);
      param_1[0x1a] = 5;
      (**(code **)(*param_1 + 0x24))(param_1,0x92,0);
      return;
    }
    if (iVar2 != 6) {
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__805117f8;
          }
        }
        bVar1 = false;
LAB_segment_0__805117f8:
        if (bVar1) goto LAB_segment_0__80511808;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80511808:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0xfb2,0);
    piVar4[0x62] = (int)(param_1 + 0x11);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0x1a] = 8;
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x204);
  if (piVar4 != (int *)0) {
    unaff_r30 = 0;
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805115d4;
        }
      }
      bVar1 = false;
LAB_segment_0__805115d4:
      if (bVar1) goto LAB_segment_0__805115e4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805115e4:
  FUN_segment_0__8052c974(piVar4);
  iVar2 = *(int *)*g_Ram_ptr;
  if ((iVar2 < 0x60) || (0x67 < iVar2)) {
    if (((0x57 < iVar2) && (iVar2 < 0x5a)) || ((0x5d < iVar2 && (iVar2 < 0x60)))) {
      (**(code **)(*param_1 + 0x24))(param_1,0x91,0);
      param_1[0x1a] = 3;
    }
    goto LAB_segment_0__805116e4;
  }
  if (*(int *)(g_Ram_ptr[0x26] + 0x2d0) == 0) {
    (**(code **)(*param_1 + 0x24))(param_1,0x91,0);
    param_1[0x1a] = 3;
    goto LAB_segment_0__805116e4;
  }
  if (iVar2 < 100) {
    if (iVar2 < 0x62) {
      if (iVar2 >= 0x60) {
LAB_segment_0__805116b4:
        unaff_r30 = 0x6e;
      }
    }
    else {
LAB_segment_0__805116bc:
      unaff_r30 = 0x78;
    }
  }
  else if (iVar2 < 0x68) {
    if (iVar2 < 0x66) goto LAB_segment_0__805116b4;
    goto LAB_segment_0__805116bc;
  }
  (**(code **)(*param_1 + 0x24))(param_1,unaff_r30,0);
  param_1[0x1a] = 4;
LAB_segment_0__805116e4:
  FUN_segment_0__804aed64((double)(float)g_Ram_ptr,param_1 + 0x1b);
  *(undefined *)(param_1 + 0x1c) = 1;
  return;
}

// === snd_EGG_Sound_80511880 (0x80511880) ===
undefined4 snd_EGG_Sound_80511880(void)

{
  undefined4 uVar1;
  
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x805118a8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return uVar1;
  }
  return 0;
}

// === snd_EGG_Sound_805118cc (0x805118cc) ===
undefined4 snd_EGG_Sound_805118cc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if ((((iVar1 < 0x60) || (0x61 < iVar1)) && ((iVar1 < 100 || (0x65 < iVar1)))) &&
     ((iVar1 != 0x58 && (iVar1 != 0x5e)))) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x288);
}

// === snd_EGG_Sound_8051196c (0x8051196c) ===
undefined4 snd_EGG_Sound_8051196c(void)

{
  undefined4 uVar1;
  
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80511994 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return uVar1;
  }
  return 0;
}

// === snd_EGG_Sound_80511b68 (0x80511b68) ===
int snd_EGG_Sound_80511b68(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x284);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((param_2 == *(byte *)(param_1 + 500)) && (param_3 == *(byte *)(param_1 + 0x1f5))) {
        return iVar2;
      }
      param_1 = param_1 + 0xc;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

// === snd_EGG_Sound_80511bb0 (0x80511bb0) ===
void snd_EGG_Sound_80511bb0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined auStack_68 [32];
  
  FUN_segment_0__804434e4(auStack_68);
  snd_EGG_Sound_805497d8(g_Ram_uint);
  if (*(int *)(g_Ram_uint[0x26] + 0x2d0) < 1) {
    FUN_segment_0__8041d9ac(g_Ram_uint);
  }
  else {
    FUN_segment_0__8042123c(g_Ram_uint);
  }
  uVar4 = snd_EGG_Sound_8054c5d4(g_Ram_uint);
  g_Ram_uint[0x5e1] = uVar4;
  g_Ram_uint[0x5d9] = 0;
  uVar4 = snd_EGG_Sound_8054c5b4(g_Ram_uint);
  g_Ram_uint[0x5d6] = uVar4;
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80511c68 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return;
  }
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80511d38 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return;
  }
  uVar10 = 0;
  iVar12 = 0;
  do {
    if (uVar10 < 0xc) {
      uVar14 = (uint)*(byte *)((int)g_Ram_uint + uVar10 + 0x2920);
    }
    else {
      uVar14 = 0xff;
    }
    if (uVar14 < 0xc) {
      uVar5 = snd_EGG_Sound_8054c638(g_Ram_uint,uVar14,0);
      uVar6 = snd_EGG_Sound_8054c688(g_Ram_uint,uVar14,0);
      bVar1 = false;
      if ((uVar5 < 0x30) && (uVar6 < 0x24)) {
        bVar1 = true;
      }
      if ((int)uVar10 < 1) {
LAB_segment_0__80511fc8:
        cVar9 = 0;
      }
      else {
        if (((int)(uVar10 - 1) < 0) || (0xb < (int)(uVar10 - 1))) {
          uVar5 = 0xff;
        }
        else {
          uVar5 = (uint)*(byte *)((int)g_Ram_uint + uVar10 + 0x291f);
        }
        if (uVar14 != uVar5) goto LAB_segment_0__80511fc8;
        cVar9 = '\x01';
      }
      iVar3 = *(int *)(param_1 + 0x284);
      iVar13 = 0;
      iVar11 = param_1;
      if (0 < iVar3) {
        do {
          if ((uVar14 == *(byte *)(iVar11 + 500)) && (cVar9 == *(char *)(iVar11 + 0x1f5)))
          goto LAB_segment_0__80512010;
          iVar11 = iVar11 + 0xc;
          iVar13 = iVar13 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar13 = -1;
LAB_segment_0__80512010:
      if (bVar1) {
        if (uVar14 == *(byte *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x59)) {
          g_Ram_uint[(uVar10 & 0xff) * 0x3c + 0x30a] = 0;
          FUN_segment_0__804ce6f0
                    (g_Ram_uint[0x26] + 0x188,g_Ram_uint[0x26] + 0x238,cVar9,uVar10);
        }
        else {
          g_Ram_uint[(uVar10 & 0xff) * 0x3c + 0x30a] = 4;
          FUN_segment_0__804ce074(g_Ram_uint[0x26] + 0x188,uVar10,uVar14,cVar9);
        }
        uVar5 = uVar10 & 0xff;
        iVar11 = uVar5 * 0xf0;
        uVar6 = snd_EGG_Sound_8054c638(g_Ram_uint,uVar14,cVar9);
        if (0x2f < uVar6) {
          uVar6 = 0;
        }
        g_Ram_uint[uVar5 * 0x3c + 0x309] = uVar6;
        uVar6 = snd_EGG_Sound_8054c688(g_Ram_uint,uVar14,cVar9);
        if (0x23 < uVar6) {
          uVar6 = 1;
        }
        g_Ram_uint[uVar5 * 0x3c + 0x308] = uVar6;
        puVar7 = (undefined2 *)snd_EGG_Sound_8054c728(g_Ram_uint,uVar14,cVar9);
        puVar2 = g_Ram_uint;
        *(char *)((int)g_Ram_uint + iVar11 + 0xcf9) = (char)*puVar7;
        *(undefined2 *)(puVar2 + uVar5 * 0x3c + 0x33c) = puVar7[1];
        uVar8 = snd_EGG_Sound_8054c770(g_Ram_uint,uVar14,cVar9);
        FUN_segment_0__804c200c(g_Ram_uint[0x26] + 0x2d0,uVar10 & 0xff,uVar8);
        if (uVar14 == *(byte *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x59)) {
          uVar14 = g_Ram_uint[0x21];
        }
        else {
          uVar14 = (uint)*(byte *)((int)g_Ram_uint + uVar14 * 0xc0 + 0x185);
        }
        if (uVar14 < 7) {
          *(uint *)(g_Ram_uint[0x26] + iVar12 + 0x38c) = uVar14;
        }
        else {
          *(undefined4 *)(g_Ram_uint[0x26] + iVar12 + 0x38c) = 0xf;
        }
      }
      else {
        uVar14 = uVar10 & 0xff;
        iVar11 = uVar14 * 0xf0;
        g_Ram_uint[uVar14 * 0x3c + 0x30a] = 4;
        uVar8 = FUN_segment_0__8044364c(auStack_68,6);
        FUN_segment_0__804cdf04(g_Ram_uint[0x26] + 0x188,uVar10,uVar8);
        g_Ram_uint[uVar14 * 0x3c + 0x309] = 0;
        g_Ram_uint[uVar14 * 0x3c + 0x308] = 1;
        puVar2 = g_Ram_uint;
        *(undefined *)((int)g_Ram_uint + iVar11 + 0xcf9) = 0;
        *(undefined2 *)(puVar2 + uVar14 * 0x3c + 0x33c) = 0;
        FUN_segment_0__804c200c(g_Ram_uint[0x26] + 0x2d0,uVar10 & 0xff,0);
        *(undefined4 *)(g_Ram_uint[0x26] + iVar12 + 0x38c) = 0xf;
      }
      if (cVar9 == 0) {
        iVar3 = *(int *)*g_Ram_uint;
        if ((iVar3 == 0x58) || (iVar3 == 0x5e)) {
          *(undefined2 *)((int)g_Ram_uint + iVar11 + 0xd00) =
               *(undefined2 *)(param_1 + iVar13 * 0xc + 0x1fc);
        }
        else if ((iVar3 == 0x59) || (iVar3 == 0x5f)) {
          *(undefined2 *)((int)g_Ram_uint + iVar11 + 0xd00) =
               *(undefined2 *)(param_1 + iVar13 * 0xc + 0x1fe);
        }
      }
      else {
        *(undefined2 *)((int)g_Ram_uint + iVar11 + 0xd00) = 5000;
      }
      if ((g_Ram_uint[0x5e0] & 2) == 0) {
        *(undefined4 *)((int)g_Ram_uint + iVar11 + 0xce4) = 2;
      }
      else {
        *(undefined4 *)((int)g_Ram_uint + iVar11 + 0xce4) =
             *(undefined4 *)(param_1 + iVar13 * 0xc + 0x1f8);
      }
    }
    else {
      g_Ram_uint[(uVar10 & 0xff) * 0x3c + 0x30a] = 5;
      FUN_segment_0__804ce240(g_Ram_uint[0x26] + 0x188,uVar10);
      *(undefined4 *)(g_Ram_uint[0x26] + iVar12 + 0x38c) = 0xf;
    }
    uVar10 = uVar10 + 1;
    iVar12 = iVar12 + 4;
    if (0xb < (int)uVar10) {
      FUN_segment_0__804c1c9c(g_Ram_uint[0x26]);
      FUN_segment_0__804435b8(auStack_68,0xffffffff);
      return;
    }
  } while( true );
}

// === snd_EGG_Sound_80512358 (0x80512358) ===
void snd_EGG_Sound_80512358(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_28;
  int local_24;
  
  uVar5 = 0;
  uVar6 = *(undefined4 *)(*g_Ram_ptr + 0x404);
  *(undefined *)(g_Ram_ptr[0x26] + 0x2d8) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2d9) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2da) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2db) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2dc) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2dd) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2de) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2df) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2e0) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2e1) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2e2) = 0xff;
  *(undefined *)(g_Ram_ptr[0x26] + 0x2e3) = 0xff;
  do {
    if (uVar5 < 0xc) {
      uVar4 = (uint)*(byte *)((int)g_Ram_ptr + uVar5 + 0x2920);
    }
    else {
      uVar4 = 0xff;
    }
    if (uVar4 < 0xc) {
      if (((1 << (uVar4 & 0x3f) & g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0) &&
         (uVar4 != *(byte *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59))) {
        if (0 < (int)uVar5) {
          if (((int)(uVar5 - 1) < 0) || (0xb < (int)(uVar5 - 1))) {
            uVar1 = 0xff;
          }
          else {
            uVar1 = (uint)*(byte *)((int)g_Ram_ptr + uVar5 + 0x291f);
          }
          if (uVar4 == uVar1) goto LAB_segment_0__80512514;
        }
        FUN_segment_0__804b9cc8(uVar6,uVar4);
        local_28 = g_Ram_ptr[uVar4 * 0x30 + 0x5c];
        local_24 = g_Ram_ptr[uVar4 * 0x30 + 0x5d];
        iVar2 = FUN_segment_0__804b96fc(uVar6,&local_28);
        if (((-1 < iVar2) && (iVar3 = FUN_segment_0__804b9884(uVar6,iVar2), iVar3 != 0)) &&
           (iVar3 = EGG_Sound_validate_8054eea4(g_Ram_ptr,iVar2), iVar3 != 0)) {
          *(char *)(g_Ram_ptr[0x26] + uVar5 + 0x2d8) = (char)iVar2;
        }
      }
    }
LAB_segment_0__80512514:
    uVar5 = uVar5 + 1;
    if (0xb < (int)uVar5) {
      FUN_segment_0__804b9138(uVar6);
      return;
    }
  } while( true );
}

// === snd_EGG_Sound_8051253c (0x8051253c) ===
void snd_EGG_Sound_8051253c(void)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 < 0x60) {
    if (0x59 < iVar1) {
      if (iVar1 < 0x5e) goto LAB_segment_0__805125bc;
LAB_segment_0__805125a8:
      FUN_segment_0__804f8c44(g_Ram_uint,0x5b,0);
      goto LAB_segment_0__805125bc;
    }
    if (iVar1 < 0x58) goto LAB_segment_0__805125bc;
  }
  else {
    if (0x67 < iVar1) goto LAB_segment_0__805125bc;
    if (99 < iVar1) goto LAB_segment_0__805125a8;
  }
  FUN_segment_0__804f8c44(g_Ram_uint,0x55,0);
LAB_segment_0__805125bc:
  FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  return;
}

// === snd_EGG_Sound_805125e0 (0x805125e0) ===
void snd_EGG_Sound_805125e0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x8051261c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
    return;
  }
  iVar7 = 0;
  uVar6 = 0;
  iVar8 = param_1;
  do {
    iVar3 = g_Ram_uint[0xa47];
    if ((uVar6 & 0xff) == (uint)*(byte *)((int)g_Ram_uint + iVar3 * 0x58 + 0x59)) {
      bVar1 = *(byte *)(g_Ram_uint + iVar3 * 0x16 + 0x16);
    }
    else {
      bVar1 = *(byte *)((int)g_Ram_uint + (uVar6 & 0xff) * 4 + iVar3 * 0x58 + 0x5b);
    }
    uVar2 = uVar6 & 0xff;
    bVar5 = 0;
    while( true ) {
      if (bVar1 <= bVar5) break;
      *(char *)(iVar8 + 500) = (char)uVar6;
      *(byte *)(iVar8 + 0x1f5) = bVar5;
      if (bVar5 == 0) {
        if ((uVar6 & 0xff) ==
            (uint)*(byte *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x59)) {
          if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
            puVar4 = (void *)0;
          }
          else {
            puVar4 = g_Ram_uint +
                     ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
          }
          *(undefined2 *)(iVar8 + 0x1fc) = *(undefined2 *)(puVar4 + 0x2406);
          if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
            puVar4 = (void *)0;
          }
          else {
            puVar4 = g_Ram_uint +
                     ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
          }
          *(undefined2 *)(iVar8 + 0x1fe) = *(undefined2 *)(puVar4 + 0x2408);
        }
        else {
          *(undefined2 *)(iVar8 + 0x1fc) = *(undefined2 *)(g_Ram_uint + uVar2 * 0x30 + 0x60);
          *(undefined2 *)(iVar8 + 0x1fe) =
               *(undefined2 *)((int)g_Ram_uint + uVar2 * 0xc0 + 0x182);
        }
      }
      else {
        *(undefined2 *)(iVar8 + 0x1fc) = 0xffff;
        *(undefined2 *)(iVar8 + 0x1fe) = 0xffff;
      }
      if (*(int *)*g_Ram_uint - 0x58U < 0x10) {
                    /* WARNING: Could not emulate address calculation at 0x80512804 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((*(int *)*g_Ram_uint - 0x58U) * 4))();
        return;
      }
      if (uVar2 == *(byte *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x59)) {
        FUN_segment_0__804ce6f0(param_1 + 0x290,g_Ram_uint[0x26] + 0x238,bVar5,iVar7);
      }
      else {
        FUN_segment_0__804ce074(param_1 + 0x290,iVar7,uVar2,bVar5);
      }
      iVar8 = iVar8 + 0xc;
      iVar7 = iVar7 + 1;
      bVar5 = bVar5 + 1;
    }
    uVar6 = uVar6 + 1;
    if (0xb < uVar6) {
      *(int *)(param_1 + 0x284) = iVar7;
      return;
    }
  } while( true );
}

// === EGG_Sound_validate_80512948 (0x80512948) ===
void EGG_Sound_validate_80512948(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_8051298c (0x8051298c) ===
void EGG_Sound_validate_8051298c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c9f74(param_1 + 0x13);
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0xa0] = 0;
  param_1[0xa1] = param_1;
  param_1[0xa2] = uVar1;
  param_1[0xa3] = uVar2;
  param_1[0xa4] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xa5,0,0,0x254,2);
}

// === EGG_Sound_validate_80512a30 (0x80512a30) ===
undefined4 EGG_Sound_validate_80512a30(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804ccef8(param_1 + 0x73c,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x294,0,0x254,2);
  }
  return 0;
}

// === snd_EGG_Sound_80512abc (0x80512abc) ===
void snd_EGG_Sound_80512abc(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined *)(param_1 + 0x8b4) = 0;
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))((int *)(param_1 + 0x4c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x4c);
  FUN_segment_0__804ca380(param_1 + 0x4c,2);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === snd_EGG_Sound_80512b50 (0x80512b50) ===
void snd_EGG_Sound_80512b50(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined *)(param_1 + 0x8b4) = 0;
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x1c))
            ((int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x8b0),
             *(undefined4 *)(param_1 + 0x8b0),0);
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x8b0) & 1 << (uVar1 & 0x3f)) != 0) {
      FUN_segment_0__804a9eec(param_1 + *(int *)(param_1 + 0x27c) * 0x254 + 0x294,uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 5);
  return;
}

// === snd_EGG_Sound_80512c2c (0x80512c2c) ===
void snd_EGG_Sound_80512c2c(int param_1)

{
  FUN_segment_0__80500a34(param_1 + 0x73c,0,0);
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  return;
}

// === snd_EGG_Sound_80512c88 (0x80512c88) ===
void snd_EGG_Sound_80512c88(int param_1)

{
  FUN_segment_0__80500a34(param_1 + 0x73c);
  return;
}

// === snd_EGG_Sound_80512c90 (0x80512c90) ===
void snd_EGG_Sound_80512c90
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  FUN_segment_0__80500a34(param_1 + param_2 * 0x254 + 0x294,param_3,param_4);
  param_1 = param_1 + param_2 * 4;
  *(undefined4 *)(param_1 + 0x274) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  return;
}

// === snd_EGG_Sound_80512d04 (0x80512d04) ===
void snd_EGG_Sound_80512d04(int param_1,int param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x240);
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x270) * 4 + 0x274));
  piVar1 = *(int **)(param_1 + *(int *)(param_1 + 0x270) * 4 + 0x44);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 8))(piVar1,*(int *)(param_1 + 0x270),param_2);
  }
  return;
}

// === snd_EGG_Sound_80512d8c (0x80512d8c) ===
void snd_EGG_Sound_80512d8c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x8b0) & 1 << (uVar1 & 0x3f)) != 0) {
      FUN_segment_0__804a9eec(param_1 + *(int *)(param_1 + 0x27c) * 0x254 + 0x294,uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 5);
  return;
}

// === EGG_Sound_validate_80512e00 (0x80512e00) ===
void EGG_Sound_validate_80512e00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c9f74(param_1 + 0x13);
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0xa0] = 0;
  param_1[0xa1] = param_1;
  param_1[0xa2] = uVar1;
  param_1[0xa3] = uVar2;
  param_1[0xa4] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xa5,0,0,0x254,2);
}

// === EGG_Sound_validate_80512ed8 (0x80512ed8) ===
int EGG_Sound_validate_80512ed8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xa2c != 0) {
      FUN_segment_0__80500540(param_1 + 0xa2c,0);
    }
    FUN_segment_0__804cd2b4(param_1 + 0x8b8,0xffffffff);
    if (param_1 != 0) {
      FUN_segment_0__804ccef8(param_1 + 0x73c,0xffffffff);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x294,0,0x254,2);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === EGG_Sound_assertFail_80512f88 (0x80512f88) ===
void EGG_Sound_assertFail_80512f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805131d4 (0x805131d4) ===
void snd_EGG_Sound_805131d4(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,3,0x1e);
  return;
}

// === snd_EGG_Sound_80513218 (0x80513218) ===
void snd_EGG_Sound_80513218(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,3,10);
  return;
}

// === snd_EGG_Sound_8051326c (0x8051326c) ===
undefined4 * snd_EGG_Sound_8051326c(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_805132a8 (0x805132a8) ===
int EGG_Sound_validate_805132a8(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_80513300 (0x80513300) ===
void snd_EGG_Sound_80513300
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auStack_38 [44];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  FUN_segment_0__804ae36c(auStack_38,param_2,param_3,param_4,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_80513374 (0x80513374) ===
void snd_EGG_Sound_80513374(int param_1)

{
  FUN_segment_0__80500a34(param_1 + 0x73c,0,0);
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  return;
}

// === EGG_Sound_validate_80513408 (0x80513408) ===
void EGG_Sound_validate_80513408(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c9f74(param_1 + 0x13);
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0xa0] = 0;
  param_1[0xa1] = param_1;
  param_1[0xa2] = uVar1;
  param_1[0xa3] = uVar2;
  param_1[0xa4] = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xa5,0,0,0x254,2);
}

// === EGG_Sound_validate_805134d8 (0x805134d8) ===
int EGG_Sound_validate_805134d8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x8b8 != 0) {
      FUN_segment_0__80500540(param_1 + 0x8b8,0);
    }
    if (param_1 != 0) {
      FUN_segment_0__804ccef8(param_1 + 0x73c,0xffffffff);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x294,0,0x254,2);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_8051357c (0x8051357c) ===
void snd_EGG_Sound_8051357c(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined *)(param_1 + 0x8b4) = 0;
  (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))((int *)(param_1 + 0x4c),1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x4c);
  FUN_segment_0__804ca380(param_1 + 0x4c,2);
  FUN_segment_0__804d24e0(param_1,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x8b8,0);
  FUN_segment_0__80735444(param_1 + 0x8b8,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x294,0);
  FUN_segment_0__804a9914(param_1 + 0x294,0x11c,299,0x137,0x1f,0,0);
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  FUN_segment_0__804a9ec4(param_1 + 0x294,param_1 + 0x280,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x4e8,0);
  FUN_segment_0__804a9914(param_1 + 0x4e8,0x13f,0x14e,0x15a,0x1f,0,0);
  *(undefined4 *)(param_1 + 0x728) = 1;
  FUN_segment_0__804a9ec4(param_1 + 0x4e8,param_1 + 0x280,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x73c,0);
  FUN_segment_0__804ccf50(param_1 + 0x73c,0x162,0x171,0x183);
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x8b0) & 1 << (uVar1 & 0x3f)) != 0) {
      FUN_segment_0__804a9eec(param_1 + *(int *)(param_1 + 0x27c) * 0x254 + 0x294,uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 5);
  FUN_segment_0__804d24e0(param_1,5,0);
  return;
}

// === snd_EGG_Sound_8051375c (0x8051375c) ===
void snd_EGG_Sound_8051375c(int param_1)

{
  FUN_segment_0__80500a34(param_1 + 0x73c,0,0);
  *(undefined4 *)(param_1 + 0x8b0) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  FUN_segment_0__80735844(param_1 + 0x8b8,0,0);
  return;
}

// === EGG_Sound_validate_80513838 (0x80513838) ===
void EGG_Sound_validate_80513838(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80513898 (0x80513898) ===
int EGG_Sound_validate_80513898(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_805138d8 (0x805138d8) ===
/* WARNING: Removing unreachable block (ram,0x80514530) */
/* WARNING: Removing unreachable block (ram,0x80514578) */
/* WARNING: Removing unreachable block (ram,0x8051453c) */
/* WARNING: Removing unreachable block (ram,0x80514570) */
/* WARNING: Removing unreachable block (ram,0x8051456c) */
/* WARNING: Removing unreachable block (ram,0x80514398) */
/* WARNING: Removing unreachable block (ram,0x805143a8) */
/* WARNING: Removing unreachable block (ram,0x80513b08) */
/* WARNING: Removing unreachable block (ram,0x80513b20) */
/* WARNING: Removing unreachable block (ram,0x805139b4) */
/* WARNING: Removing unreachable block (ram,0x80513a00) */
/* WARNING: Removing unreachable block (ram,0x80513a20) */
/* WARNING: Removing unreachable block (ram,0x80513a28) */
/* WARNING: Removing unreachable block (ram,0x80513a2c) */
/* WARNING: Removing unreachable block (ram,0x80513a34) */
/* WARNING: Removing unreachable block (ram,0x80513a08) */
/* WARNING: Removing unreachable block (ram,0x80513a10) */
/* WARNING: Removing unreachable block (ram,0x80513a14) */
/* WARNING: Removing unreachable block (ram,0x80513a1c) */
/* WARNING: Removing unreachable block (ram,0x805139c0) */
/* WARNING: Removing unreachable block (ram,0x805139e8) */
/* WARNING: Removing unreachable block (ram,0x805139f0) */
/* WARNING: Removing unreachable block (ram,0x805139f4) */
/* WARNING: Removing unreachable block (ram,0x805139fc) */
/* WARNING: Removing unreachable block (ram,0x805139c8) */
/* WARNING: Removing unreachable block (ram,0x805139d0) */
/* WARNING: Removing unreachable block (ram,0x805139d4) */
/* WARNING: Removing unreachable block (ram,0x805139dc) */
/* WARNING: Removing unreachable block (ram,0x805139e4) */
/* WARNING: Removing unreachable block (ram,0x80513a38) */
/* WARNING: Removing unreachable block (ram,0x80514010) */
/* WARNING: Removing unreachable block (ram,0x80514020) */
/* WARNING: Removing unreachable block (ram,0x80514464) */
/* WARNING: Removing unreachable block (ram,0x80514474) */
/* WARNING: Removing unreachable block (ram,0x80513c54) */
/* WARNING: Removing unreachable block (ram,0x80513c64) */
/* WARNING: Removing unreachable block (ram,0x8051402c) */
/* WARNING: Removing unreachable block (ram,0x8051405c) */
/* WARNING: Removing unreachable block (ram,0x80514088) */
/* WARNING: Removing unreachable block (ram,0x80514070) */
/* WARNING: Removing unreachable block (ram,0x8051408c) */
/* WARNING: Removing unreachable block (ram,0x805140b8) */
/* WARNING: Removing unreachable block (ram,0x805140c4) */
/* WARNING: Removing unreachable block (ram,0x805140c8) */
/* WARNING: Removing unreachable block (ram,0x805140d0) */
/* WARNING: Removing unreachable block (ram,0x805140e4) */
/* WARNING: Removing unreachable block (ram,0x805140ec) */
/* WARNING: Removing unreachable block (ram,0x80514144) */
/* WARNING: Removing unreachable block (ram,0x80514128) */
/* WARNING: Removing unreachable block (ram,0x80514148) */
/* WARNING: Removing unreachable block (ram,0x80514164) */
/* WARNING: Removing unreachable block (ram,0x80514174) */
/* WARNING: Removing unreachable block (ram,0x80514184) */
/* WARNING: Removing unreachable block (ram,0x805141ac) */
/* WARNING: Removing unreachable block (ram,0x8051418c) */
/* WARNING: Removing unreachable block (ram,0x805141b0) */
/* WARNING: Removing unreachable block (ram,0x80514204) */
/* WARNING: Removing unreachable block (ram,0x805141e8) */
/* WARNING: Removing unreachable block (ram,0x80514208) */
/* WARNING: Removing unreachable block (ram,0x8051420c) */
/* WARNING: Removing unreachable block (ram,0x80514218) */
/* WARNING: Removing unreachable block (ram,0x805142e0) */
/* WARNING: Removing unreachable block (ram,0x805142fc) */
/* WARNING: Removing unreachable block (ram,0x805142f4) */
/* WARNING: Removing unreachable block (ram,0x805143c8) */
/* WARNING: Removing unreachable block (ram,0x805143c0) */
/* WARNING: Removing unreachable block (ram,0x80514494) */
/* WARNING: Removing unreachable block (ram,0x8051448c) */
/* WARNING: Removing unreachable block (ram,0x80514584) */
/* WARNING: Removing unreachable block (ram,0x8051458c) */
/* WARNING: Removing unreachable block (ram,0x80514594) */
/* WARNING: Removing unreachable block (ram,0x805145c4) */
/* WARNING: Removing unreachable block (ram,0x80514224) */
/* WARNING: Removing unreachable block (ram,0x805145f4) */
/* WARNING: Removing unreachable block (ram,0x8051422c) */
/* WARNING: Removing unreachable block (ram,0x80514240) */
/* WARNING: Removing unreachable block (ram,0x805142ac) */
/* WARNING: Removing unreachable block (ram,0x805142bc) */
/* WARNING: Removing unreachable block (ram,0x805142c0) */
/* WARNING: Removing unreachable block (ram,0x805142c8) */
/* WARNING: Removing unreachable block (ram,0x80513b5c) */
/* WARNING: Removing unreachable block (ram,0x80513b64) */
/* WARNING: Removing unreachable block (ram,0x80513b68) */
/* WARNING: Removing unreachable block (ram,0x80513b7c) */
/* WARNING: Removing unreachable block (ram,0x80513b84) */
/* WARNING: Removing unreachable block (ram,0x80513b70) */
/* WARNING: Removing unreachable block (ram,0x80513b78) */
/* WARNING: Removing unreachable block (ram,0x80513f58) */
/* WARNING: Removing unreachable block (ram,0x80513f74) */
/* WARNING: Removing unreachable block (ram,0x80513f6c) */
/* WARNING: Removing unreachable block (ram,0x80513b48) */
/* WARNING: Removing unreachable block (ram,0x80513b50) */
/* WARNING: Removing unreachable block (ram,0x80513b58) */
/* WARNING: Removing unreachable block (ram,0x80513cd4) */
/* WARNING: Removing unreachable block (ram,0x80513ccc) */
/* WARNING: Removing unreachable block (ram,0x80513d68) */
/* WARNING: Removing unreachable block (ram,0x80513d70) */
/* WARNING: Removing unreachable block (ram,0x80513d80) */
/* WARNING: Removing unreachable block (ram,0x80513d84) */
/* WARNING: Removing unreachable block (ram,0x80513d8c) */
/* WARNING: Removing unreachable block (ram,0x80513dbc) */
/* WARNING: Removing unreachable block (ram,0x80513df0) */
/* WARNING: Removing unreachable block (ram,0x80513dd8) */
/* WARNING: Removing unreachable block (ram,0x80513df4) */
/* WARNING: Removing unreachable block (ram,0x80513e14) */
/* WARNING: Removing unreachable block (ram,0x80513e20) */
/* WARNING: Removing unreachable block (ram,0x80513e24) */
/* WARNING: Removing unreachable block (ram,0x80513e2c) */
/* WARNING: Removing unreachable block (ram,0x80513e40) */
/* WARNING: Removing unreachable block (ram,0x80513e48) */
/* WARNING: Removing unreachable block (ram,0x80513e88) */
/* WARNING: Removing unreachable block (ram,0x80513e6c) */
/* WARNING: Removing unreachable block (ram,0x80513e8c) */
/* WARNING: Removing unreachable block (ram,0x80513ea8) */
/* WARNING: Removing unreachable block (ram,0x80513eb8) */
/* WARNING: Removing unreachable block (ram,0x80513ec8) */
/* WARNING: Removing unreachable block (ram,0x80513ef0) */
/* WARNING: Removing unreachable block (ram,0x80513ed0) */
/* WARNING: Removing unreachable block (ram,0x80513ef4) */
/* WARNING: Removing unreachable block (ram,0x80513f48) */
/* WARNING: Removing unreachable block (ram,0x80513f2c) */
/* WARNING: Removing unreachable block (ram,0x80513f4c) */
/* WARNING: Removing unreachable block (ram,0x80513f50) */
/* WARNING: Removing unreachable block (ram,0x80513c70) */
/* WARNING: Removing unreachable block (ram,0x80513ca0) */
/* WARNING: Removing unreachable block (ram,0x80513b9c) */
/* WARNING: Removing unreachable block (ram,0x80513bb8) */
/* WARNING: Removing unreachable block (ram,0x80513bb0) */
/* WARNING: Removing unreachable block (ram,0x80513b94) */
/* WARNING: Removing unreachable block (ram,0x80513b88) */
/* WARNING: Removing unreachable block (ram,0x80513b90) */

undefined4 EGG_Sound_validate_805138d8(void)

{
  int iVar1;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  
  iVar1 = *(int *)(_uRam00000000 + 0x98);
  if (iVar1 != 0) {
    if (iVar1 != 0) {
      local_14 = uRam00000000._0_1_;
      local_12 = (undefined)uRam00000000;
      local_13 = 0x70;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar1,&local_14);
    }
    FUN_segment_0__804df4f4(_uRam00000000 + 0x34,0,0);
    if (*(int *)(_uRam00000000 + 0x98) != 0) {
      local_1c = uRam00000000._0_1_;
      local_1a = (undefined)uRam00000000;
      local_1b = 0x73;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_1c);
    }
  }
  return 0xffffffff;
}

// === EGG_Sound_validate_80514620 (0x80514620) ===
/* WARNING: Removing unreachable block (ram,0x805146e8) */
/* WARNING: Removing unreachable block (ram,0x80514700) */

undefined4 EGG_Sound_validate_80514620(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x73;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0xffffffff;
}

// === EGG_Sound_validate_80514718 (0x80514718) ===
/* WARNING: Removing unreachable block (ram,0x805147e0) */
/* WARNING: Removing unreachable block (ram,0x805147f0) */

undefined4 EGG_Sound_validate_80514718(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x6c;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0xffffffff;
}

// === EGG_Sound_validate_80514808 (0x80514808) ===
/* WARNING: Removing unreachable block (ram,0x805148d0) */
/* WARNING: Removing unreachable block (ram,0x8051491c) */
/* WARNING: Removing unreachable block (ram,0x8051493c) */
/* WARNING: Removing unreachable block (ram,0x80514944) */
/* WARNING: Removing unreachable block (ram,0x80514948) */
/* WARNING: Removing unreachable block (ram,0x80514950) */
/* WARNING: Removing unreachable block (ram,0x80514924) */
/* WARNING: Removing unreachable block (ram,0x8051492c) */
/* WARNING: Removing unreachable block (ram,0x80514930) */
/* WARNING: Removing unreachable block (ram,0x80514938) */
/* WARNING: Removing unreachable block (ram,0x805148dc) */
/* WARNING: Removing unreachable block (ram,0x80514904) */
/* WARNING: Removing unreachable block (ram,0x8051490c) */
/* WARNING: Removing unreachable block (ram,0x80514910) */
/* WARNING: Removing unreachable block (ram,0x80514918) */
/* WARNING: Removing unreachable block (ram,0x805148e4) */
/* WARNING: Removing unreachable block (ram,0x805148ec) */
/* WARNING: Removing unreachable block (ram,0x805148f0) */
/* WARNING: Removing unreachable block (ram,0x805148f8) */
/* WARNING: Removing unreachable block (ram,0x80514900) */
/* WARNING: Removing unreachable block (ram,0x80514954) */

undefined4 EGG_Sound_validate_80514808(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) == 0) {
    return 0;
  }
  local_18 = uRam00000000._0_1_;
  local_16 = (undefined)uRam00000000;
  local_17 = 0x70;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
}

// === EGG_Sound_validate_8051496c (0x8051496c) ===
/* WARNING: Removing unreachable block (ram,0x80514a34) */
/* WARNING: Removing unreachable block (ram,0x80514a44) */

undefined4 EGG_Sound_validate_8051496c(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x74;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0;
}

// === EGG_Sound_validate_80514a5c (0x80514a5c) ===
/* WARNING: Removing unreachable block (ram,0x80514b24) */
/* WARNING: Removing unreachable block (ram,0x80514b34) */

undefined4 EGG_Sound_validate_80514a5c(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 99;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0xffffffff;
}

// === EGG_Sound_validate_80514b4c (0x80514b4c) ===
/* WARNING: Removing unreachable block (ram,0x80514c14) */
/* WARNING: Removing unreachable block (ram,0x80514c5c) */
/* WARNING: Removing unreachable block (ram,0x80514c20) */
/* WARNING: Removing unreachable block (ram,0x80514c54) */

undefined4 EGG_Sound_validate_80514b4c(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x66;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0xffffffff;
}

// === EGG_Sound_validate_80514c74 (0x80514c74) ===
uint EGG_Sound_validate_80514c74(void)

{
  uint uVar1;
  undefined local_18;
  undefined local_17;
  undefined local_16;
  uint local_14;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x72;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  uVar1 = 0xffffffff;
  if (local_14 < 0x1e) {
    uVar1 = local_14;
  }
  return uVar1;
}

// === EGG_Sound_validate_80514d2c (0x80514d2c) ===
/* WARNING: Removing unreachable block (ram,0x80514e04) */

undefined8 EGG_Sound_validate_80514d2c(void)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_18 = uRam00000000._0_1_;
    local_16 = (undefined)uRam00000000;
    local_17 = 0x77;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
  }
  return 0;
}

// === EGG_Sound_validate_80514e20 (0x80514e20) ===
/* WARNING: Removing unreachable block (ram,0x80514f04) */

undefined8 EGG_Sound_validate_80514e20(void)

{
  undefined local_28;
  undefined local_27;
  undefined local_26;
  
  if (*(int *)(_uRam00000000 + 0x98) != 0) {
    local_28 = uRam00000000._0_1_;
    local_26 = (undefined)uRam00000000;
    local_27 = 100;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_28);
  }
  return 0;
}

// === EGG_Sound_validate_80514f20 (0x80514f20) ===
undefined4 EGG_Sound_validate_80514f20(undefined4 param_1,undefined param_2)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) == 0) {
    return 0;
  }
  local_18 = uRam00000000._0_1_;
  local_16 = (undefined)uRam00000000;
  local_17 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
}

// === EGG_Sound_validate_80514ff4 (0x80514ff4) ===
undefined4 EGG_Sound_validate_80514ff4(undefined4 param_1,undefined param_2)

{
  undefined local_18;
  undefined local_17;
  undefined local_16;
  
  if (*(int *)(_uRam00000000 + 0x98) == 0) {
    return 0;
  }
  local_18 = uRam00000000._0_1_;
  local_16 = (undefined)uRam00000000;
  local_17 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(int *)(_uRam00000000 + 0x98),&local_18);
}

// === snd_EGG_Sound_805150e0 (0x805150e0) ===
undefined4 * snd_EGG_Sound_805150e0(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x16);
  FUN_segment_0__80500418(param_1 + 0x68);
  return param_1;
}

// === EGG_Sound_validate_80515164 (0x80515164) ===
int EGG_Sound_validate_80515164(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__80500540(param_1 + 0x1a0,0xffffffff);
    FUN_segment_0__804c88c8(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805151d8 (0x805151d8) ===
void snd_EGG_Sound_805151d8(int param_1)

{
  undefined4 uVar1;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [44];
  
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804c8d34(param_1 + 0x58,0,param_1 + 0x44,0);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x1a0,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x1a0);
  local_58 = g_Ram_float;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0,0xc,0x1b,&local_58);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_805152f8 (0x805152f8) ===
void snd_EGG_Sound_805152f8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,*(undefined4 *)(param_1 + 0x19c));
  return;
}

// === snd_EGG_Sound_8051534c (0x8051534c) ===
void snd_EGG_Sound_8051534c(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 8) == 4) {
    if (*(int *)((int)g_Ram_float + 0xb74) == 0xc) {
      FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0);
    }
    else {
      iVar2 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
      iVar2 = *(int *)(iVar2 + 0x38);
      if (iVar2 == 0) {
        if (0 < *(int *)((int)g_Ram_float + 0x28)) {
          FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0);
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
        fVar1 = g_Ram_float;
        if (*(char *)(iVar2 + 0x35) == 0) {
          *(undefined4 *)((int)g_Ram_float + 0x28) = 1;
          *(int *)((int)fVar1 + 0x1c) = (int)fVar1 + 0x14;
          *(float *)((int)fVar1 + 0x20) = fVar1;
          *(undefined *)((int)fVar1 + 0x24) = 0;
          FUN_segment_0__804a889c();
          uVar3 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
          FUN_segment_0__804ff59c((double)g_Ram_float,uVar3,2);
          FUN_segment_0__805e7c60(g_Ram_float,0xcc,0);
        }
      }
      else if (iVar2 == 3) {
        FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0);
      }
    }
  }
  return;
}

// === snd_EGG_Sound_80515494 (0x80515494) ===
void snd_EGG_Sound_80515494(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((0x45 < *(int *)(param_1 + 0x20)) &&
      (iVar1 = FUN_segment_0__804a8900(g_Ram_float), iVar1 == 1)) &&
     (iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x238,0), *(int *)(iVar1 + 0x38) == 0)) {
    uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x238,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,1);
    FUN_segment_0__805e81a8(g_Ram_float,0x1e);
    FUN_segment_0__805e7eb0(g_Ram_float,0xcc,0);
    FUN_segment_0__8060af14(g_Ram_float,1);
  }
  return;
}

// === snd_EGG_Sound_80515550 (0x80515550) ===
undefined4 * snd_EGG_Sound_80515550(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_8051558c (0x8051558c) ===
int EGG_Sound_validate_8051558c(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_805155e4 (0x805155e4) ===
void snd_EGG_Sound_805155e4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
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
  if (param_2 == 0) {
    uVar1 = 0x6a;
    if (param_3 != 0) {
      uVar1 = 0x51;
    }
  }
  else {
    uVar1 = 0x39;
  }
  FUN_segment_0__804ae36c(auStack_38,0x83,uVar1,0x89,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_805156bc (0x805156bc) ===
void snd_EGG_Sound_805156bc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_805156f4 (0x805156f4) ===
void snd_EGG_Sound_805156f4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === snd_EGG_Sound_8051572c (0x8051572c) ===
void snd_EGG_Sound_8051572c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,3);
  return;
}

// === snd_EGG_Sound_80515774 (0x80515774) ===
undefined4 * snd_EGG_Sound_80515774(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_805157b0 (0x805157b0) ===
int EGG_Sound_validate_805157b0(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Sound_validate_80515808 (0x80515808) ===
void EGG_Sound_validate_80515808(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined auStack_c8 [16];
  undefined auStack_b8 [168];
  
  FUN_segment_0__804ae324(auStack_b8,param_1);
  bVar1 = false;
  if ((param_4 != 0) && (param_2 < 4)) {
    bVar1 = true;
  }
  uVar2 = 0xd2;
  if (bVar1) {
    uVar2 = 0xd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0xf,200,param_2,uVar2);
}

// === snd_EGG_Sound_805159b4 (0x805159b4) ===
void snd_EGG_Sound_805159b4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === EGG_Sound_assertFail_805159ec (0x805159ec) ===
void EGG_Sound_assertFail_805159ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80515e58 (0x80515e58) ===
void EGG_Sound_validate_80515e58(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x17);
  FUN_segment_0__80500418(param_1 + 0x68);
  FUN_segment_0__80500418(param_1 + 0xc5);
  FUN_segment_0__80500418(param_1 + 0x122);
  param_1[0x122] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x17f,0,0,0x174,0xc);
}

// === EGG_Sound_validate_80515f24 (0x80515f24) ===
undefined4 EGG_Sound_validate_80515f24(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x5fc,0,0x174,0xc);
  }
  return 0;
}

// === EGG_Sound_assertFail_80515fcc (0x80515fcc) ===
void EGG_Sound_assertFail_80515fcc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8051647c (0x8051647c) ===
void snd_EGG_Sound_8051647c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 10) {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x520,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x58) + 0x10) + 0x10))();
  }
  if (*(int *)(param_1 + 0x20) == 0xb4) {
    iVar2 = FUN_segment_0__8041d048((int)g_Ram_float + 0x1808);
    if (iVar2 == 0) {
      FUN_segment_0__804d24b8(param_1,0x219,0xffffffff);
    }
    else if (iVar2 == 1) {
      FUN_segment_0__804d24b8(param_1,0x218,0xffffffff);
    }
    else if (iVar2 == 2) {
      FUN_segment_0__804d24b8(param_1,0x217,0xffffffff);
    }
  }
  return;
}

// === snd_EGG_Sound_80516558 (0x80516558) ===
void snd_EGG_Sound_80516558(int *param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = 0;
  if (*(int *)*g_Ram_uint == 0x35) {
    iVar1 = FUN_segment_0__80445000
                      (g_Ram_uint[0x8da],g_Ram_uint[0x8d3],g_Ram_uint[0x8dc] & 1,
                       *(undefined *)((int)param_1 + 0x176d));
  }
  if (iVar1 == 0) {
    if (*(int *)*g_Ram_uint == 0x35) {
      iVar1 = FUN_segment_0__8074db94();
      if (iVar1 == -1) {
        (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,0x41,0);
      }
      else {
        (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,iVar1,0);
      }
    }
    else {
      (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,0x41,0);
    }
  }
  else if (iVar1 == 1) {
    dVar2 = (double)(float)g_Ram_uint;
    g_Ram_uint[0x5d8] = 0xc;
    g_Ram_uint[0x5d6] = 0x3a;
    (**(code **)(*param_1 + 0x1c))(dVar2,param_1,0x39,0);
  }
  else if (iVar1 == 2) {
    dVar2 = (double)(float)g_Ram_uint;
    g_Ram_uint[0x5d8] = 0xc;
    g_Ram_uint[0x5d6] = 0x3a;
    (**(code **)(*param_1 + 0x1c))(dVar2,param_1,0x3a,0);
  }
  return;
}

// === snd_EGG_Sound_805167f8 (0x805167f8) ===
void snd_EGG_Sound_805167f8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auStack_e8 [36];
  undefined4 local_c4;
  undefined4 local_c0;
  
  puVar1 = g_Ram_uint;
  uVar5 = 0;
  FUN_segment_0__804b4ecc(auStack_e8);
  uVar4 = 0;
  iVar2 = *(int *)*g_Ram_uint;
  if ((iVar2 < 0x36) || (0x37 < iVar2)) {
    if (iVar2 == 0x35) {
      uVar3 = puVar1[0x8da];
      uVar4 = FUN_segment_0__8072ffa8(uVar3);
      iVar2 = puVar1[0x8d3];
      uVar5 = 0x58d;
      if (iVar2 == 0) {
        local_c4 = 0x589;
      }
      else if (iVar2 == 1) {
        local_c4 = 0x58a;
      }
      else if (iVar2 == 2) {
        if ((puVar1[0x8dc] & 1) == 0) {
          local_c4 = 0x58b;
        }
        else {
          local_c4 = 0x58c;
        }
      }
      local_c0 = FUN_segment_0__8070f7d8(uVar3);
    }
    else if (iVar2 == 0x38) {
      if (puVar1[0x8d6] == 0) {
        uVar5 = 0x587;
        uVar4 = 0x225;
      }
      else if (puVar1[0x8d6] == 1) {
        uVar5 = 0x588;
        uVar4 = 0x235;
      }
    }
  }
  else {
    iVar2 = puVar1[0x8d3];
    uVar5 = 0x58e;
    uVar4 = 0x218;
    if (iVar2 == 0) {
      local_c4 = 0x589;
    }
    else if (iVar2 == 1) {
      local_c4 = 0x58a;
    }
    else if (iVar2 == 2) {
      if ((puVar1[0x8dc] & 1) == 0) {
        local_c4 = 0x58b;
      }
      else {
        local_c4 = 0x58c;
      }
    }
  }
  FUN_segment_0__80500d70(param_1 + 0x1a0,0x242,uVar4);
  FUN_segment_0__8050093c(param_1 + 0x1a0,0x24b,uVar5,auStack_e8);
  return;
}

// === snd_EGG_Sound_805169bc (0x805169bc) ===
void snd_EGG_Sound_805169bc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*g_Ram_uint == 0x35) {
    FUN_segment_0__8041d048(g_Ram_uint + 0x602);
    uVar1 = FUN_segment_0__8070f9d8();
    FUN_segment_0__8050093c(param_1 + 0x314,0x254,uVar1,0);
    *(undefined *)(param_1 + 0x394) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x394) = 1;
  }
  return;
}

// === snd_EGG_Sound_80516a40 (0x80516a40) ===
void snd_EGG_Sound_80516a40(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auStack_d8 [36];
  undefined4 local_b4;
  
  iVar2 = *(int *)*g_Ram_uint;
  if ((iVar2 < 0x35) || (0x36 < iVar2)) {
    if ((0x36 < iVar2) && (iVar2 < 0x39)) {
      uVar4 = 0;
      uVar3 = 0;
      if (*(int *)(g_Ram_uint[0x26] + 0x70) == 0) {
        iVar2 = g_Ram_uint[0x2dd];
        if ((iVar2 < 9) || (10 < iVar2)) {
          if (iVar2 == 0xc) {
            uVar4 = 0x4c8;
            uVar3 = 0x535;
          }
        }
        else {
          uVar4 = 0x4c0;
          uVar3 = 0x534;
        }
      }
      else if (*(int *)(g_Ram_uint[0x26] + 0x70) == 1) {
        iVar2 = g_Ram_uint[0x2dd];
        if ((iVar2 < 9) || (10 < iVar2)) {
          if (iVar2 == 0xc) {
            uVar4 = 0x4c7;
            uVar3 = 0x534;
          }
        }
        else {
          uVar4 = 0x4c1;
          uVar3 = 0x535;
        }
      }
      else {
        uVar3 = 0x4c2;
        uVar4 = 0;
      }
      FUN_segment_0__804b4ecc(auStack_d8);
      local_b4 = uVar4;
      FUN_segment_0__8050093c(param_1 + 0x488,0x259,uVar3,auStack_d8);
      FUN_segment_0__8050093c(param_1 + 0x488,0x261,uVar4,0);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x176d);
    if (cVar1 == '\x01') {
      uVar3 = 0x4c3;
    }
    else if (cVar1 == '\x02') {
      uVar3 = 0x4c4;
    }
    else if (cVar1 == '\x03') {
      uVar3 = 0x4c5;
    }
    else {
      uVar3 = 0x4c6;
    }
    FUN_segment_0__80500a34(param_1 + 0x488,uVar3,0);
  }
  return;
}

// === snd_EGG_Sound_80516be0 (0x80516be0) ===
void snd_EGG_Sound_80516be0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  iVar6 = iRam00000000 + 0x1800;
  uVar1 = (*(byte *)(param_1 + 0x176e) | 0xfffffffd) - (*(byte *)(param_1 + 0x176e) - 2 >> 1) >>
          0x1f;
  if (*(char *)(param_1 + 0x176c) == 0) {
    for (bVar5 = 0; bVar3 = *(byte *)(param_1 + 5999), bVar5 < bVar3; bVar5 = bVar5 + 1) {
      EGG_Sound_assertFail_805159ec
                (param_1 + (*(byte *)(iVar6 + (uint)bVar5 * 0xf0 + 0xe8) - 1) * 0x174 + 0x5fc,
                 (uint)bVar5,*(undefined *)(param_1 + 0x176c),uVar1);
    }
    for (; bVar3 < 0xc; bVar3 = bVar3 + 1) {
      EGG_Sound_assertFail_805159ec
                (param_1 + (uint)bVar3 * 0x174 + 0x5fc,(uint)bVar3,*(undefined *)(param_1 + 0x176c),
                 uVar1);
    }
  }
  else {
    uVar4 = 0;
    do {
      EGG_Sound_assertFail_805159ec
                (param_1 + (uVar4 & 0xff) * 0x174 + 0x5fc,0xb,*(undefined *)(param_1 + 0x176c),uVar1
                );
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xc);
    for (bVar5 = 0; bVar5 < *(byte *)(param_1 + 5999); bVar5 = bVar5 + 1) {
      iVar2 = iVar6 + (uint)bVar5 * 0xf0;
      uVar4 = *(byte *)(iVar2 + 0xe8) - 1 & 0xff;
      if (*(int *)(iVar2 + 0xd4) == 1) {
        uVar4 = uVar4 + 6 & 0xff;
      }
      EGG_Sound_assertFail_805159ec
                (param_1 + uVar4 * 0x174 + 0x5fc,bVar5,*(undefined *)(param_1 + 0x176c),uVar1);
    }
  }
  return;
}

// === snd_EGG_Sound_80516e6c (0x80516e6c) ===
void snd_EGG_Sound_80516e6c(void)

{
  undefined *puVar1;
  char cVar2;
  undefined uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int unaff_r29;
  int iVar12;
  undefined uStack_89;
  undefined local_88 [76];
  undefined4 local_3c;
  undefined2 local_38;
  undefined local_36;
  undefined2 local_34;
  undefined local_32;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined local_20;
  undefined4 local_1c;
  
  puVar11 = g_Ram_uint;
  if (*(int *)*g_Ram_uint == 0x35) {
    cVar2 = *(char *)(g_Ram_uint + 0x63a);
    if (cVar2 == '\x01') {
      iVar12 = 0;
    }
    else if (cVar2 == '\x02') {
      iVar12 = 1;
    }
    else if (cVar2 == '\x03') {
      iVar12 = 2;
    }
    else {
      iVar12 = 3;
    }
    local_28 = FUN_segment_0__8041d048(g_Ram_uint + 0x602);
    iVar5 = puVar11[0x8d3];
    if (iVar5 == 0) {
      unaff_r29 = 0;
    }
    else if (iVar5 == 1) {
      unaff_r29 = 1;
    }
    else if ((iVar5 == 2) && (unaff_r29 = 2, (puVar11[0x8dc] & 1) != 0)) {
      unaff_r29 = 3;
    }
    iVar5 = puVar11[0x8da];
    if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
      puVar11 = (void *)0;
    }
    else {
      puVar11 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar7 = unaff_r29 * 0x380;
    iVar6 = iVar5 * 0x70;
    local_3c = 0;
    if (*(char *)((int)puVar11 + iVar6 + iVar7 + 0x76) == 0) {
      bVar4 = true;
      local_24 = iVar12;
    }
    else {
      iVar8 = puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x21];
      if (iVar8 <= iVar12) {
        local_24 = iVar8;
      }
      else {
        local_24 = iVar12;
      }
      bVar4 = iVar8 > iVar12;
      if (local_28 < (int)puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x20]) {
        bVar4 = true;
      }
      else {
        local_28 = puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x20];
      }
    }
    if (bVar4) {
      local_32 = 1;
      local_38 = 0;
      local_36 = 0;
      local_34 = 0;
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar11 = (void *)0;
      }
      else {
        puVar11 = g_Ram_uint +
                  ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
      }
      puVar9 = &uStack_89;
      puVar10 = (undefined *)((int)puVar11 + iVar6 + iVar7 + 0x1f);
      iVar12 = 0x26;
      do {
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 2;
        uVar3 = *puVar9;
        puVar10[1] = *puVar1;
        puVar10 = puVar10 + 2;
        *puVar10 = uVar3;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      *(undefined2 *)(puVar11 + unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x1c) = 0;
      *(undefined *)((int)puVar11 + iVar6 + iVar7 + 0x72) = 0;
      *(undefined2 *)(puVar11 + unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x1d) = 0;
      *(undefined *)((int)puVar11 + iVar6 + iVar7 + 0x76) = 1;
      puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x1e] = local_30;
      puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x1f] = local_2c;
      puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x20] = local_28;
      puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x21] = local_24;
      *(undefined *)(puVar11 + unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x22) = local_20;
      puVar11[unaff_r29 * 0xe0 + iVar5 * 0x1c + 0x23] = local_1c;
      FUN_segment_0__804e45fc(g_Ram_uint[0x24]);
    }
  }
  return;
}

// === EGG_Sound_validate_80517120 (0x80517120) ===
void EGG_Sound_validate_80517120(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80517150 (0x80517150) ===
void EGG_Sound_validate_80517150(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_assertFail_805171ac (0x805171ac) ===
void EGG_Sound_assertFail_805171ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80517334 (0x80517334) ===
int EGG_Sound_validate_80517334(int param_1,int param_2)

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

// === snd_EGG_Sound_805173e0 (0x805173e0) ===
void snd_EGG_Sound_805173e0(int param_1)

{
  int iVar1;
  undefined2 local_d8;
  ushort local_d6;
  uint local_d4 [51];
  
  (**(code **)(*(int *)(param_1 + 0x94) + 0x10))(param_1 + 0x94,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x94);
  FUN_segment_0__804ca350(param_1 + 0x94,1,param_1 + 0x80,0,0);
  FUN_segment_0__804ca380(param_1 + 0x94,2);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2b8,0);
  FUN_segment_0__80735444(param_1 + 0x2b8,1);
  FUN_segment_0__80735844(param_1 + 0x2b8,0xa2f,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x42c,0);
  FUN_segment_0__804ccf50(param_1 + 0x42c,0,0xf,0x27);
  iVar1 = FUN_segment_0__80400390(uRam00000000,0,&local_d6,&local_d8);
  if (iVar1 == 0) {
    local_d6 = 0;
    local_d8 = 0;
  }
  FUN_segment_0__804b4ecc(local_d4);
  local_d4[0] = (uint)local_d6;
  FUN_segment_0__80500a34(param_1 + 0x42c,0xa28,local_d4);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x5a0,0);
  FUN_segment_0__804a9914(param_1 + 0x5a0,0x39,0x40,0x53,1,0,0);
  FUN_segment_0__80500a34(param_1 + 0x5a0,0xa29,0);
  FUN_segment_0__804a9ec4(param_1 + 0x5a0,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7f4,0);
  FUN_segment_0__804a9914(param_1 + 0x7f4,0x5d,100,0x77,1,0,0);
  FUN_segment_0__80500a34(param_1 + 0x7f4,0xa2a,0);
  FUN_segment_0__804a9ec4(param_1 + 0x7f4,param_1 + 0x58,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xa48,0);
  FUN_segment_0__804a9914(param_1 + 0xa48,0x81,0x88,0x8d,1,0,1);
  FUN_segment_0__804a9ec4(param_1 + 0xa48,param_1 + 0x6c,0);
  FUN_segment_0__804a9eec(param_1 + 0x7f4,0);
  return;
}

// === snd_EGG_Sound_80517634 (0x80517634) ===
void snd_EGG_Sound_80517634(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 local_e8;
  ushort local_e6;
  uint local_e4 [52];
  
  iVar4 = g_Ram_ptr[0x1a];
  if (iVar4 == 1) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,2,0);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805176ec;
        }
      }
      bVar1 = false;
LAB_segment_0__805176ec:
      if (bVar1) goto LAB_segment_0__805176fc;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__805176fc:
  (**(code **)(*piVar5 + 100))(piVar5);
  iVar3 = FUN_segment_0__80400390(g_Ram_ptr,0,&local_e6,&local_e8);
  if (iVar3 == 0) {
    local_e6 = 0;
    local_e8 = 0;
  }
  FUN_segment_0__804b4ecc(local_e4);
  local_e4[0] = (uint)local_e6;
  if (iVar4 == 0) {
    (**(code **)(*piVar5 + 0x68))(piVar5,0xa31,0);
  }
  else if (iVar4 == 2) {
    (**(code **)(*piVar5 + 0x68))(piVar5,0xa32,local_e4);
  }
  else if (iVar4 == 3) {
    (**(code **)(*piVar5 + 0x68))(piVar5,0xa33,0);
  }
  else if (iVar4 == 4) {
    (**(code **)(*piVar5 + 0x68))(piVar5,0xa34,0);
  }
  else if (iVar4 == 5) {
    (**(code **)(*piVar5 + 0x68))(piVar5,0xa35,0);
  }
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
  FUN_segment_0__804aa82c(param_2,0);
  return;
}

// === snd_EGG_Sound_80517850 (0x80517850) ===
void snd_EGG_Sound_80517850(int *param_1,undefined4 param_2)

{
  if (*(int *)*g_Ram_uint == 0x8c) {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x8c,0);
  }
  else {
    FUN_segment_0__804aa384(param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,0x7a,0);
  }
  return;
}

// === snd_EGG_Sound_805178dc (0x805178dc) ===
void snd_EGG_Sound_805178dc(undefined4 param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === snd_EGG_Sound_80517928 (0x80517928) ===
undefined4 * snd_EGG_Sound_80517928(undefined4 *param_1)

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

// === EGG_Sound_validate_80517a40 (0x80517a40) ===
int EGG_Sound_validate_80517a40(int param_1,int param_2)

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

// === snd_EGG_Sound_80517ae0 (0x80517ae0) ===
void snd_EGG_Sound_80517ae0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804ca380(param_1 + 0x6c,1);
  FUN_segment_0__804ca350(param_1 + 0x6c,1,param_1 + 0x58,0,0);
  FUN_segment_0__804d1c1c(param_1,4);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x290,0);
  FUN_segment_0__80735444(param_1 + 0x290,1);
  FUN_segment_0__80735844(param_1 + 0x290,0xa2f,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x404,0);
  FUN_segment_0__804ccf50(param_1 + 0x404,0x98,0xa7,0xb5);
  FUN_segment_0__80500a34(param_1 + 0x404,0xa30,0);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x578,0);
  FUN_segment_0__804a9914(param_1 + 0x578,0xc3,0xca,0xe2,1,0,0);
  *(undefined4 *)(param_1 + 0x7b8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x578,param_1 + 0x44,0);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x7cc,0);
  FUN_segment_0__804a9914(param_1 + 0x7cc,0xe7,0xee,0xf3,1,0,1);
  *(undefined4 *)(param_1 + 0xa0c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x7cc,param_1 + 0x44,0);
  FUN_segment_0__804a9eec(param_1 + 0x578,0);
  return;
}

// === snd_EGG_Sound_80517cc0 (0x80517cc0) ===
void snd_EGG_Sound_80517cc0(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == 2) {
    FUN_segment_0__804aa384(param_2);
    FUN_segment_0__804d1c48(param_1,0);
  }
  else if (*(int *)(param_2 + 0x240) == 3) {
    if (*(int *)*g_Ram_uint == 0x8c) {
      FUN_segment_0__804aa384(param_2);
      FUN_segment_0__804d1c48(param_1,1);
    }
    else {
      FUN_segment_0__804aa384(param_2);
      (**(code **)(*param_1 + 0x1c))(param_1,0x7a,1);
    }
  }
  return;
}

// === EGG_Sound_validate_80517dcc (0x80517dcc) ===
void EGG_Sound_validate_80517dcc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80517dfc (0x80517dfc) ===
void EGG_Sound_validate_80517dfc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80517e2c (0x80517e2c) ===
void EGG_Sound_validate_80517e2c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80517e5c (0x80517e5c) ===
void EGG_Sound_validate_80517e5c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_80517ea8 (0x80517ea8) ===
undefined4 * snd_EGG_Sound_80517ea8(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  return param_1;
}

// === EGG_Sound_validate_80517eec (0x80517eec) ===
int EGG_Sound_validate_80517eec(int param_1,int param_2)

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

// === snd_EGG_Sound_80517f54 (0x80517f54) ===
void snd_EGG_Sound_80517f54(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  return;
}

// === snd_EGG_Sound_80517fb0 (0x80517fb0) ===
void snd_EGG_Sound_80517fb0(int param_1)

{
  (**(code **)(**(int **)(iRam00000000 + 8) + 0x30))();
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}

// === snd_EGG_Sound_80518090 (0x80518090) ===
undefined4 * snd_EGG_Sound_80518090(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x16);
  FUN_segment_0__804d0a7c(param_1 + 0x67);
  FUN_segment_0__804d0fa4(param_1 + 200);
  FUN_segment_0__804cd278(param_1 + 0x125);
  return param_1;
}

// === EGG_Sound_validate_80518124 (0x80518124) ===
int EGG_Sound_validate_80518124(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd2b4(param_1 + 0x494,0xffffffff);
    FUN_segment_0__804d0fe0(param_1 + 800,0xffffffff);
    FUN_segment_0__804d0ab8(param_1 + 0x19c,0xffffffff);
    FUN_segment_0__804c88c8(param_1 + 0x58,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805181b0 (0x805181b0) ===
void snd_EGG_Sound_805181b0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804c8d34(param_1 + 0x58,0,param_1 + 0x44,0);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 800,0);
  FUN_segment_0__804d1038(param_1 + 800,0,0xe,0x26);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x494,0);
  FUN_segment_0__804cd30c(param_1 + 0x494,0x3e,0x4d,0x57);
  *(undefined4 *)(param_1 + 0x510) = uRam00000000;
  FUN_segment_0__804ffee8(param_1 + 800,1);
  FUN_segment_0__804ffef8(param_1 + 800,0,param_1 + 0x19c);
  FUN_segment_0__804d0b10(param_1 + 0x19c,0x61,0x6f,0x7c,0,0,0,0);
  FUN_segment_0__80500680(param_1 + 0x19c,0x89);
  return;
}

// === snd_EGG_Sound_805182d8 (0x805182d8) ===
void snd_EGG_Sound_805182d8(int param_1)

{
  undefined4 uVar1;
  
  FUN_segment_0__804d0d14(param_1 + 0x19c,0,0,0);
  uVar1 = FUN_segment_0__804df3bc(iRam00000000 + 0x34,0);
  FUN_segment_0__804d0d24(param_1 + 0x19c,uVar1);
  *(undefined *)(param_1 + 0x608) = 0;
  return;
}

// === snd_EGG_Sound_80518388 (0x80518388) ===
void snd_EGG_Sound_80518388(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1e,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,0,0x1e);
  return;
}

// === snd_EGG_Sound_805183cc (0x805183cc) ===
void snd_EGG_Sound_805183cc(undefined4 param_1)

{
  FUN_segment_0__804d24b8(param_1,0x1f,0xffffffff);
  FUN_segment_0__805e8f5c((double)g_Ram_float,g_Ram_float,0,10);
  return;
}

// === EGG_Sound_validate_80518430 (0x80518430) ===
void EGG_Sound_validate_80518430(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_8051847c (0x8051847c) ===
undefined4 * snd_EGG_Sound_8051847c(undefined4 *param_1)

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
  return param_1;
}

// === EGG_Sound_validate_80518530 (0x80518530) ===
int EGG_Sound_validate_80518530(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x6c,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80518598 (0x80518598) ===
void snd_EGG_Sound_80518598(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x10))(param_1 + 0x6c,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x6c);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__804d24e0(param_1,0,0);
  return;
}

// === snd_EGG_Sound_80518604 (0x80518604) ===
void snd_EGG_Sound_80518604(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined local_f8 [4];
  undefined4 local_f4;
  char local_e0;
  undefined4 local_dc [52];
  
  param_1[0x21] = -1;
  iVar2 = FUN_segment_0__805586f0(g_Ram_ptr);
  if (iVar2 != 0) {
    iVar2 = EGG_Sound_assertFail_805469b4(g_Ram_ptr);
    if (iVar2 != 0) {
      iVar2 = snd_EGG_Sound_80560e54(g_Ram_ptr,param_1 + 0x20);
      if (iVar2 == 0) {
        piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
        if (piVar4 != (int *)0) {
          if (piVar4 != (int *)0) {
            for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
                puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
              if (puVar3 == (void *)0) {
                bVar1 = true;
                goto LAB_segment_0__80518794;
              }
            }
            bVar1 = false;
LAB_segment_0__80518794:
            if (bVar1) goto LAB_segment_0__805187a4;
          }
          piVar4 = (int *)0;
        }
        else {
          piVar4 = (int *)0;
        }
LAB_segment_0__805187a4:
        (**(code **)(*piVar4 + 100))(piVar4);
        FUN_segment_0__804b4ecc(local_dc);
        local_dc[0] = FUN_segment_0__8055590c(g_Ram_ptr);
        (**(code **)(*piVar4 + 0x68))(piVar4,0x1998,local_dc);
        piVar4[0x62] = (int)(param_1 + 0x11);
        (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
        param_1[0x1f] = 6;
        return;
      }
      piVar4 = *(int **)(*g_Ram_ptr + 0x144);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__805186c8;
            }
          }
          bVar1 = false;
LAB_segment_0__805186c8:
          if (bVar1) goto LAB_segment_0__805186d8;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__805186d8:
      (**(code **)(*piVar4 + 100))(piVar4);
      (**(code **)(*piVar4 + 0x68))(piVar4,0x1997,0);
      (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
      param_1[0x1f] = 3;
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x150);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80518880;
          }
        }
        bVar1 = false;
LAB_segment_0__80518880:
        if (bVar1) goto LAB_segment_0__80518890;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80518890:
    (**(code **)(*piVar4 + 100))(piVar4);
    FUN_segment_0__804ad8bc(piVar4,0x17ea,0);
    FUN_segment_0__804ad8c4(piVar4,0x17e9,0);
    piVar4[0x209] = (int)(param_1 + 0x16);
    (**(code **)(*param_1 + 0x24))(param_1,0x52,0);
    param_1[0x1f] = 1;
    return;
  }
  local_f8[0] = 0;
  local_f4 = 0;
  FUN_segment_0__80559214(g_Ram_ptr,local_f8);
  if (local_e0 == 0) {
    param_1[0x21] = 0xa9;
    goto LAB_segment_0__805189d8;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051897c;
        }
      }
      bVar1 = false;
LAB_segment_0__8051897c:
      if (bVar1) goto LAB_segment_0__8051898c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051898c:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x199c,0);
  piVar4[0x181] = 0xa9;
  param_1[0x21] = 0x51;
LAB_segment_0__805189d8:
  param_1[0x1f] = 0;
  return;
}

// === snd_EGG_Sound_80518a24 (0x80518a24) ===
void snd_EGG_Sound_80518a24(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined auStack_18 [16];
  
  if (*(int *)(param_1 + 0x7c) != 3) {
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
  if (iVar2 == 1) {
    FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
    *(undefined4 *)(param_1 + 0x7c) = 4;
  }
  else if (iVar2 == 3) {
    iVar2 = FUN_segment_0__80558718(g_Ram_ptr,auStack_18);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 5;
    }
    else {
      FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
      *(undefined4 *)(param_1 + 0x7c) = 4;
    }
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(param_1 + 0x7c) = 5;
  }
  else if (iVar2 == 5) {
    *(undefined4 *)(param_1 + 0x7c) = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 5;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80518b64;
        }
      }
      bVar1 = false;
LAB_segment_0__80518b64:
      if (bVar1) goto LAB_segment_0__80518b74;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80518b74:
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === snd_EGG_Sound_80518b94 (0x80518b94) ===
void snd_EGG_Sound_80518b94(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined local_1b8 [4];
  undefined4 local_1b4;
  char local_1a0;
  undefined4 local_19c [49];
  undefined4 local_d8 [51];
  
  iVar2 = param_1[0x1f];
  if (iVar2 == 1) {
    piVar4 = *(int **)(*g_Ram_ptr + 0x150);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80518c3c;
          }
        }
        bVar1 = false;
LAB_segment_0__80518c3c:
        if (bVar1) goto LAB_segment_0__80518c4c;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80518c4c:
    if (piVar4[0x294] == 0) {
      (**(code **)(*param_1 + 0x24))(param_1,0x84,0);
      param_1[0x1f] = 2;
    }
    else if (piVar4[0x294] == 1) {
      FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
    }
    return;
  }
  if (iVar2 == 2) {
    iVar2 = EGG_Sound_assertFail_805469b4(g_Ram_ptr);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = snd_EGG_Sound_80560e54(g_Ram_ptr,param_1 + 0x20);
    if (iVar2 == 0) {
      piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__80518e00;
            }
          }
          bVar1 = false;
LAB_segment_0__80518e00:
          if (bVar1) goto LAB_segment_0__80518e10;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__80518e10:
      (**(code **)(*piVar4 + 100))(piVar4);
      FUN_segment_0__804b4ecc(local_d8);
      local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
      (**(code **)(*piVar4 + 0x68))(piVar4,0x1998,local_d8);
      piVar4[0x62] = (int)(param_1 + 0x11);
      (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
      param_1[0x1f] = 6;
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x144);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80518d34;
          }
        }
        bVar1 = false;
LAB_segment_0__80518d34:
        if (bVar1) goto LAB_segment_0__80518d44;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80518d44:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x1997,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
    param_1[0x1f] = 3;
    return;
  }
  if (iVar2 != 4) {
    if (iVar2 != 5) {
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80518ffc;
          }
        }
        bVar1 = false;
LAB_segment_0__80518ffc:
        if (bVar1) goto LAB_segment_0__8051900c;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__8051900c:
    (**(code **)(*piVar4 + 100))(piVar4);
    FUN_segment_0__804b4ecc(local_19c);
    local_19c[0] = FUN_segment_0__8055590c(g_Ram_ptr);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x1998,local_19c);
    piVar4[0x62] = (int)(param_1 + 0x11);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0x1f] = 6;
    return;
  }
  local_1b8[0] = 0;
  local_1b4 = 0;
  FUN_segment_0__80559214(g_Ram_ptr,local_1b8);
  if (local_1a0 == 0) {
    param_1[0x21] = 0xa9;
    goto LAB_segment_0__80518f70;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80518f14;
        }
      }
      bVar1 = false;
LAB_segment_0__80518f14:
      if (bVar1) goto LAB_segment_0__80518f24;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80518f24:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x199c,0);
  piVar4[0x181] = 0xa9;
  param_1[0x21] = 0x51;
LAB_segment_0__80518f70:
  FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,0);
  FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051909c (0x8051909c) ===
void snd_EGG_Sound_8051909c(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_d8 [51];
  
  iVar2 = snd_EGG_Sound_80560e54(g_Ram_ptr,param_1 + 0x20);
  if (iVar2 == 0) {
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80519200;
          }
        }
        bVar1 = false;
LAB_segment_0__80519200:
        if (bVar1) goto LAB_segment_0__80519210;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80519210:
    (**(code **)(*piVar4 + 100))(piVar4);
    FUN_segment_0__804b4ecc(local_d8);
    local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x1998,local_d8);
    piVar4[0x62] = (int)(param_1 + 0x11);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0x1f] = 6;
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80519134;
        }
      }
      bVar1 = false;
LAB_segment_0__80519134:
      if (bVar1) goto LAB_segment_0__80519144;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80519144:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x1997,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  param_1[0x1f] = 3;
  return;
}

// === snd_EGG_Sound_805192a0 (0x805192a0) ===
void snd_EGG_Sound_805192a0(int *param_1)

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
          goto LAB_segment_0__80519320;
        }
      }
      bVar1 = false;
LAB_segment_0__80519320:
      if (bVar1) goto LAB_segment_0__80519330;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80519330:
  (**(code **)(*piVar3 + 100))(piVar3);
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = FUN_segment_0__8055590c(g_Ram_ptr);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x1998,local_d8);
  piVar3[0x62] = (int)(param_1 + 0x11);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  param_1[0x1f] = 6;
  return;
}

// === EGG_Sound_validate_80519450 (0x80519450) ===
void EGG_Sound_validate_80519450(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80519480 (0x80519480) ===
void EGG_Sound_validate_80519480(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_805194d0 (0x805194d0) ===
undefined4 * snd_EGG_Sound_805194d0(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_8051950c (0x8051950c) ===
int EGG_Sound_validate_8051950c(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_80519564 (0x80519564) ===
void snd_EGG_Sound_80519564(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [44];
  
  FUN_segment_0__804ae324(auStack_38,param_1);
  local_58 = uRam00000000;
  local_54 = uRam00000004;
  local_50 = uRam00000008;
  local_4c = uRam0000000c;
  local_48 = uRam00000010;
  local_44 = uRam00000014;
  local_40 = uRam00000018;
  FUN_segment_0__804ae36c(auStack_38,0x11,param_2,param_3,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_80519618 (0x80519618) ===
void snd_EGG_Sound_80519618(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_80519650 (0x80519650) ===
void snd_EGG_Sound_80519650(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === snd_EGG_Sound_80519688 (0x80519688) ===
void snd_EGG_Sound_80519688(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,3);
  return;
}

// === EGG_Sound_validate_805196c0 (0x805196c0) ===
void EGG_Sound_validate_805196c0(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x16);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x67,0,0,0x2e8,3);
}

// === snd_EGG_Sound_8051975c (0x8051975c) ===
undefined4 * snd_EGG_Sound_8051975c(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  FUN_segment_0__80500418(param_1 + 0x5d);
  param_1[0x5d] = 0;
  return param_1;
}

// === EGG_Sound_validate_805197b8 (0x805197b8) ===
int EGG_Sound_validate_805197b8(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x174 != 0) {
      FUN_segment_0__80500540(param_1 + 0x174,0);
    }
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

// === EGG_Sound_validate_8051982c (0x8051982c) ===
undefined4 EGG_Sound_validate_8051982c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x19c,0,0x2e8,3);
  }
  return 0;
}

// === snd_EGG_Sound_805198ac (0x805198ac) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void snd_EGG_Sound_805198ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_r28;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined auStack_110 [40];
  undefined auStack_e8 [40];
  undefined auStack_c0 [40];
  undefined auStack_98 [40];
  undefined auStack_70 [40];
  undefined auStack_48 [44];
  
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804c821c(param_1 + 0x58,0);
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 == 0x39) || (iVar1 == 0x3b)) {
    if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
      puVar2 = (void *)0;
    }
    else {
      puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar1 = FUN_segment_0__804384b0(puVar2 + 0x23fe,0x39);
    if (iVar1 != 0) {
      FUN_segment_0__804c8d34(param_1 + 0x58,2,param_1 + 0x44,0);
    }
  }
  else if ((iVar1 == 0x3a) || (iVar1 == 0x3c)) {
    if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
      puVar2 = (void *)0;
    }
    else {
      puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar1 = FUN_segment_0__804384b0(puVar2 + 0x23fe,0x38);
    if (iVar1 != 0) {
      FUN_segment_0__804c8d34(param_1 + 0x58,2,param_1 + 0x44,0);
    }
  }
  FUN_segment_0__804d1c1c(param_1,6);
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x39) || (0x3a < iVar1)) {
    if ((0x3a < iVar1) && (iVar1 < 0x3d)) {
      unaff_r28 = 0x2c;
    }
  }
  else {
    unaff_r28 = 0x18;
  }
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x19c,0);
  FUN_segment_0__804ae324(auStack_48,param_1 + 0x19c);
  local_12c = uRam00000028;
  local_128 = uRam0000002c;
  local_124 = _DAT_00000030;
  local_120 = _DAT_00000034;
  local_11c = uRam00000038;
  local_118 = uRam0000003c;
  local_114 = uRam00000040;
  FUN_segment_0__804ae36c(auStack_48,0x56,0x41,unaff_r28,&local_12c);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x310,0);
  FUN_segment_0__804ae324(auStack_70,param_1 + 0x310);
  local_148 = uRam00000028;
  local_144 = uRam0000002c;
  local_140 = _DAT_00000030;
  local_13c = _DAT_00000034;
  local_138 = uRam00000038;
  local_134 = uRam0000003c;
  local_130 = uRam00000040;
  FUN_segment_0__804ae36c(auStack_70,0x71,0x5d,unaff_r28,&local_148);
  FUN_segment_0__804ae32c(auStack_70,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x484,0);
  FUN_segment_0__804ae324(auStack_98,param_1 + 0x484);
  local_164 = uRam00000028;
  local_160 = uRam0000002c;
  local_15c = _DAT_00000030;
  local_158 = _DAT_00000034;
  local_154 = uRam00000038;
  local_150 = uRam0000003c;
  local_14c = uRam00000040;
  FUN_segment_0__804ae36c(auStack_98,0x8a,0x78,unaff_r28,&local_164);
  FUN_segment_0__804ae32c(auStack_98,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x5f8,0);
  FUN_segment_0__804ae324(auStack_c0,param_1 + 0x5f8);
  local_180 = uRam00000028;
  local_17c = uRam0000002c;
  local_178 = _DAT_00000030;
  local_174 = _DAT_00000034;
  local_170 = uRam00000038;
  local_16c = uRam0000003c;
  local_168 = uRam00000040;
  FUN_segment_0__804ae36c(auStack_c0,0xa2,0x91,unaff_r28,&local_180);
  FUN_segment_0__804ae32c(auStack_c0,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0x76c,0);
  FUN_segment_0__804ae324(auStack_e8,param_1 + 0x76c);
  local_19c = uRam00000028;
  local_198 = uRam0000002c;
  local_194 = _DAT_00000030;
  local_190 = _DAT_00000034;
  local_18c = uRam00000038;
  local_188 = uRam0000003c;
  local_184 = uRam00000040;
  FUN_segment_0__804ae36c(auStack_e8,0xbe,0xa9,unaff_r28,&local_19c);
  FUN_segment_0__804ae32c(auStack_e8,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,5,param_1 + 0x8e0,0);
  FUN_segment_0__804ae324(auStack_110,param_1 + 0x8e0);
  local_1b8 = uRam00000028;
  local_1b4 = uRam0000002c;
  local_1b0 = _DAT_00000030;
  local_1ac = _DAT_00000034;
  local_1a8 = uRam00000038;
  local_1a4 = uRam0000003c;
  local_1a0 = uRam00000040;
  FUN_segment_0__804ae36c(auStack_110,0xd9,0xc5,unaff_r28,&local_1b8);
  FUN_segment_0__804ae32c(auStack_110,0xffffffff);
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x39) || (0x3a < iVar1)) {
    if ((0x3a < iVar1) && (iVar1 < 0x3d)) {
      *(undefined4 *)(param_1 + 0xa54) = 0xf8;
      *(undefined4 *)(param_1 + 0xa58) = 0x12;
      *(undefined4 *)(param_1 + 0xa5c) = 0x1f7c;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa54) = 0x48;
    *(undefined4 *)(param_1 + 0xa58) = 0xb;
    *(undefined4 *)(param_1 + 0xa5c) = 0x1892;
  }
  *(undefined4 *)(param_1 + 0xa60) = 0;
  *(undefined *)(param_1 + 0xa64) = 1;
  *(undefined *)(param_1 + 0xa66) = 1;
  return;
}

// === EGG_Sound_assertFail_80519e44 (0x80519e44) ===
void EGG_Sound_assertFail_80519e44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8051a1f4 (0x8051a1f4) ===
undefined4 * snd_EGG_Sound_8051a1f4(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_8051a230 (0x8051a230) ===
int EGG_Sound_validate_8051a230(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_8051a288 (0x8051a288) ===
void snd_EGG_Sound_8051a288(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined auStack_40 [48];
  
  FUN_segment_0__804ae324(auStack_40,param_1);
  local_60 = uRam00000250;
  local_5c = uRam00000254;
  local_58 = uRam00000258;
  local_54 = uRam0000025c;
  local_50 = uRam00000260;
  local_4c = uRam00000264;
  local_48 = uRam00000268;
  FUN_segment_0__804ae36c(auStack_40,0xf3,0xfa,param_2,&local_60);
  iVar1 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0x106);
  if ((*(uint *)(iRam00000000 + 0xb90) & 1) != 0) {
    *(undefined4 *)(iVar1 + 0x44) = uRam0000026c;
    *(undefined4 *)(iVar1 + 0x48) = uRam00000270;
  }
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051a380 (0x8051a380) ===
void snd_EGG_Sound_8051a380(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_8051a3b8 (0x8051a3b8) ===
void snd_EGG_Sound_8051a3b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === snd_EGG_Sound_8051a3f0 (0x8051a3f0) ===
void snd_EGG_Sound_8051a3f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,3);
  return;
}

// === snd_EGG_Sound_8051a428 (0x8051a428) ===
uint snd_EGG_Sound_8051a428(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
  uVar2 = *(int *)(iVar1 + 0x38) - 1;
  return (~uVar2 | 1) - (1 - uVar2 >> 1) >> 0x1f;
}

// === EGG_Sound_validate_8051a470 (0x8051a470) ===
void EGG_Sound_validate_8051a470(undefined4 *param_1)

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
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1a,0,0,0x174,2);
}

// === EGG_Sound_validate_8051a50c (0x8051a50c) ===
undefined4 EGG_Sound_validate_8051a50c(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x68,0,0x174,2);
  }
  return 0;
}

// === EGG_Sound_assertFail_8051a58c (0x8051a58c) ===
void EGG_Sound_assertFail_8051a58c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8051a800 (0x8051a800) ===
void snd_EGG_Sound_8051a800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < *(int *)(param_1 + 0x350)) {
    iVar4 = -1;
    iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x350);
    if (iVar3 - 0x3cU < 0x708) {
      iVar4 = 0;
    }
    else if (iVar3 - 0x744U < 0x708) {
      iVar4 = 1;
    }
    else if (iVar3 - 0xe4cU < 0x690) {
      iVar4 = 0;
    }
    else if (iVar3 - 0x14dcU < 0x780) {
      iVar4 = 1;
    }
    param_1 = param_1 + 0x68;
    iVar3 = 0;
    do {
      if (iVar3 == iVar4) {
        iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
        if (1 < *(int *)(iVar1 + 0x38) - 1U) {
          uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
          FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,1);
        }
      }
      else {
        iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
        if (*(int *)(iVar1 + 0x38) - 1U < 2) {
          uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
          FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,3);
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x174;
    } while (iVar3 < 2);
  }
  return;
}

// === snd_EGG_Sound_8051a930 (0x8051a930) ===
void snd_EGG_Sound_8051a930(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  piVar3 = *(int **)(*g_Ram_ptr + 0xfc);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051a9c0;
        }
      }
      bVar1 = false;
LAB_segment_0__8051a9c0:
      if (bVar1) goto LAB_segment_0__8051a9d0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051a9d0:
  *(byte *)((int)piVar3 + 0xa66) =
       (byte)((byte)((uint)-piVar3[8] >> 0x18) | (byte)((uint)piVar3[8] >> 0x18)) >> 7;
  return;
}

// === snd_EGG_Sound_8051a9fc (0x8051a9fc) ===
undefined4 * snd_EGG_Sound_8051a9fc(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x16);
  FUN_segment_0__80500418(param_1 + 0x67);
  FUN_segment_0__8052a404(param_1 + 0xcb);
  FUN_segment_0__80529c48(param_1 + 0x12e);
  return param_1;
}

// === EGG_Sound_validate_8051aa90 (0x8051aa90) ===
undefined4 EGG_Sound_validate_8051aa90(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0xc6]);
  }
  return 0;
}

// === EGG_Sound_validate_8051ab40 (0x8051ab40) ===
void EGG_Sound_validate_8051ab40(int param_1)

{
  int iVar1;
  undefined auStack_38 [48];
  
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x58);
  FUN_segment_0__804c8d34(param_1 + 0x58,0,param_1 + 0x44,0);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x19c,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x19c);
  if (*(int *)*g_Ram_uint == 0x3d) {
    FUN_segment_0__804ae36c(auStack_38,0x168,0x16f,0x17d,0);
  }
  else if (*(int *)*g_Ram_uint == 0x3e) {
    FUN_segment_0__804ae36c(auStack_38,0x18c,0x193,0x1a1,0);
  }
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x32c,0);
  if (*(int *)*g_Ram_uint == 0x3d) {
    FUN_segment_0__8052a498(param_1 + 0x32c,0x1ae,0);
  }
  else if (*(int *)*g_Ram_uint == 0x3e) {
    FUN_segment_0__8052a498(param_1 + 0x32c,0x1bd,0);
  }
  iVar1 = FUN_segment_0__8040bafc();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xab000,*(undefined4 *)(iVar1 + 0xc98),0x20);
}

// === snd_EGG_Sound_8051ad2c (0x8051ad2c) ===
void snd_EGG_Sound_8051ad2c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (void *)0;
  *(undefined *)(param_1 + 0x314) = 0;
  if (*(int *)*g_Ram_uint == 0x3d) {
    if (-1 < *(short *)((int)g_Ram_uint + 0x36)) {
      puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar1 = FUN_segment_0__804384b0(puVar2 + 0x23fe,0x39);
    if (iVar1 == 0) {
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar2 = (void *)0;
      }
      else {
        puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      FUN_segment_0__80438460(puVar2 + 0x23fe,0x39);
      FUN_segment_0__804e45fc(g_Ram_uint[0x24]);
    }
  }
  else if (*(int *)*g_Ram_uint == 0x3e) {
    if (-1 < *(short *)((int)g_Ram_uint + 0x36)) {
      puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar1 = FUN_segment_0__804384b0(puVar2 + 0x23fe,0x38);
    if (iVar1 == 0) {
      if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
        puVar2 = (void *)0;
      }
      else {
        puVar2 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe
        ;
      }
      FUN_segment_0__80438460(puVar2 + 0x23fe,0x38);
      FUN_segment_0__804e45fc(g_Ram_uint[0x24]);
    }
  }
  return;
}

// === EGG_Sound_validate_8051aea8 (0x8051aea8) ===
void EGG_Sound_validate_8051aea8(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if ((param_1[0xc4] == 0) && (param_1[8] == 0)) {
    g_Ram_ptr = (int *)((uint)g_Ram_ptr | 0x10);
  }
  if (param_1[2] != 4) {
    return;
  }
  iVar2 = param_1[0xc4];
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(g_Ram_ptr[0x15] + 0x24) + 0xc))();
    if ((int)(1U - iVar2 | iVar2 - 1U) < 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              (param_1[200],*(undefined4 *)(g_Ram_ptr[1] + 0xc),0x200,0x1c8,100,param_1[0xc6]);
  }
  if (iVar2 == 1) {
    if (*(char *)(param_1 + 0xc5) == 0) {
      return;
    }
    if (*(char *)(g_Ram_ptr[0x24] + 0x14) != 0) {
      if (*(int *)*g_Ram_ptr == 0x3d) {
        iVar2 = FUN_segment_0__8074db94();
        if (iVar2 == -1) {
          FUN_segment_0__804f8c44(g_Ram_ptr,0x41,0);
          FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
        }
        else {
          FUN_segment_0__804f8c44(g_Ram_ptr,iVar2,0);
          FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
        }
      }
      else if (*(int *)*g_Ram_ptr == 0x3e) {
        FUN_segment_0__804f8c44(g_Ram_ptr,0x3f,0);
        FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
      }
      param_1[0xc4] = 8;
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x154);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8051b0e8;
          }
        }
        bVar1 = false;
LAB_segment_0__8051b0e8:
        if (bVar1) goto LAB_segment_0__8051b0f8;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__8051b0f8:
    FUN_segment_0__804d24b8(param_1,0x39,0xffffffff);
    FUN_segment_0__804d24e0(piVar4,0,0);
    (**(code **)(*piVar4 + 100))(piVar4);
    snd_EGG_Sound_80512c88(piVar4,0x1e17,0);
    snd_EGG_Sound_80512c90(piVar4,0,0x7d2,0,0xffffffff,0);
    snd_EGG_Sound_80512c90(piVar4,1,0x7d3,0,0xffffffff,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x53,0);
    param_1[0xc4] = 2;
    return;
  }
  if (iVar2 != 3) {
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051b214;
        }
      }
      bVar1 = false;
LAB_segment_0__8051b214:
      if (bVar1) goto LAB_segment_0__8051b224;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051b224:
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === snd_EGG_Sound_8051b248 (0x8051b248) ===
void snd_EGG_Sound_8051b248(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[0xc4];
  if (iVar3 - 6U < 2) {
    if (*(int *)*g_Ram_ptr == 0x3d) {
      iVar3 = FUN_segment_0__8074db94();
      if (iVar3 == -1) {
        FUN_segment_0__804f8c44(g_Ram_ptr,0x41,0);
        FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
      }
      else {
        FUN_segment_0__804f8c44(g_Ram_ptr,iVar3,0);
        FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
      }
    }
    else if (*(int *)*g_Ram_ptr == 0x3e) {
      FUN_segment_0__804f8c44(g_Ram_ptr,0x3f,0);
      FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
    }
    param_1[0xc4] = 8;
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      if (iVar3 != 4) {
        if (iVar3 != 5) {
          return;
        }
        piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
        if (piVar4 != (int *)0) {
          if (piVar4 != (int *)0) {
            for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
                puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
              if (puVar2 == (void *)0) {
                bVar1 = true;
                goto LAB_segment_0__8051b6d0;
              }
            }
            bVar1 = false;
LAB_segment_0__8051b6d0:
            if (bVar1) goto LAB_segment_0__8051b6e0;
          }
          piVar4 = (int *)0;
        }
        else {
          piVar4 = (int *)0;
        }
LAB_segment_0__8051b6e0:
        (**(code **)(*piVar4 + 100))(piVar4);
        (**(code **)(*piVar4 + 0x68))(piVar4,0x1e1b,0);
        (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
        param_1[0xc4] = 6;
        return;
      }
      piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
              puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
            if (puVar2 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__8051b604;
            }
          }
          bVar1 = false;
LAB_segment_0__8051b604:
          if (bVar1) goto LAB_segment_0__8051b614;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__8051b614:
      (**(code **)(*piVar4 + 100))(piVar4);
      (**(code **)(*piVar4 + 0x68))(piVar4,0x1e1a,0);
      (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
      param_1[0xc4] = 5;
      return;
    }
    iVar3 = FUN_segment_0__805558e8(g_Ram_ptr);
    if (iVar3 != 1) {
      snd_EGG_Sound_8051bc2c(param_1);
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8051b52c;
          }
        }
        bVar1 = false;
LAB_segment_0__8051b52c:
        if (bVar1) goto LAB_segment_0__8051b53c;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__8051b53c:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x1e19,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0xc4] = 4;
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x154);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051b2fc;
        }
      }
      bVar1 = false;
LAB_segment_0__8051b2fc:
      if (bVar1) goto LAB_segment_0__8051b30c;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051b30c:
  if (piVar4[0x9c] != 0) {
    if (*(int *)*g_Ram_ptr == 0x3d) {
      iVar3 = FUN_segment_0__8074db94();
      if (iVar3 == -1) {
        FUN_segment_0__804f8c44(g_Ram_ptr,0x41,0);
        FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
      }
      else {
        FUN_segment_0__804f8c44(g_Ram_ptr,iVar3,0);
        FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
      }
    }
    else if (*(int *)*g_Ram_ptr == 0x3e) {
      FUN_segment_0__804f8c44(g_Ram_ptr,0x3f,0);
      FUN_segment_0__804f8cd0(g_Ram_ptr,0,0xff);
    }
    param_1[0xc4] = 8;
    return;
  }
  iVar3 = FUN_segment_0__8055ec8c(g_Ram_ptr,param_1 + 0x13c,3,param_1[199],param_1 + 0xc9);
  if (iVar3 == 0) {
    snd_EGG_Sound_8051bc2c(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051b3a0;
        }
      }
      bVar1 = false;
LAB_segment_0__8051b3a0:
      if (bVar1) goto LAB_segment_0__8051b3b0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051b3b0:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x1e18,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  param_1[0xc4] = 3;
  return;
}

// === snd_EGG_Sound_8051b7fc (0x8051b7fc) ===
void snd_EGG_Sound_8051b7fc(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = FUN_segment_0__8055ec8c(g_Ram_ptr,param_1 + 0x13c,3,param_1[199],param_1 + 0xc9);
  if (iVar2 == 0) {
    snd_EGG_Sound_8051bc2c(param_1);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051b8a0;
        }
      }
      bVar1 = false;
LAB_segment_0__8051b8a0:
      if (bVar1) goto LAB_segment_0__8051b8b0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051b8b0:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x1e18,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  param_1[0xc4] = 3;
  return;
}

// === snd_EGG_Sound_8051b92c (0x8051b92c) ===
void snd_EGG_Sound_8051b92c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051b9ac;
        }
      }
      bVar1 = false;
LAB_segment_0__8051b9ac:
      if (bVar1) goto LAB_segment_0__8051b9bc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051b9bc:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x1e19,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  param_1[0xc4] = 4;
  return;
}

// === snd_EGG_Sound_8051ba2c (0x8051ba2c) ===
void snd_EGG_Sound_8051ba2c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051baac;
        }
      }
      bVar1 = false;
LAB_segment_0__8051baac:
      if (bVar1) goto LAB_segment_0__8051babc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051babc:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x1e1a,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  param_1[0xc4] = 5;
  return;
}

// === snd_EGG_Sound_8051bb2c (0x8051bb2c) ===
void snd_EGG_Sound_8051bb2c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051bbac;
        }
      }
      bVar1 = false;
LAB_segment_0__8051bbac:
      if (bVar1) goto LAB_segment_0__8051bbbc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051bbbc:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x1e1b,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
  param_1[0xc4] = 6;
  return;
}

// === snd_EGG_Sound_8051bc2c (0x8051bc2c) ===
void snd_EGG_Sound_8051bc2c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_d8 [51];
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x14c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051bcac;
        }
      }
      bVar1 = false;
LAB_segment_0__8051bcac:
      if (bVar1) goto LAB_segment_0__8051bcbc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051bcbc:
  (**(code **)(*piVar4 + 100))(piVar4);
  uVar3 = FUN_segment_0__80555918(g_Ram_ptr);
  if (9 < uVar3) {
    FUN_segment_0__804b4ecc(local_d8);
    local_d8[0] = FUN_segment_0__805558f0(g_Ram_ptr);
    (**(code **)(*piVar4 + 0x68))(piVar4,0,local_d8);
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    param_1[0xc4] = 7;
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x8051bcf4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar3 << 2))();
  return;
}

// === snd_EGG_Sound_8051bdc8 (0x8051bdc8) ===
void snd_EGG_Sound_8051bdc8(int param_1)

{
  int iVar1;
  
  if (*(int *)*g_Ram_uint == 0x3d) {
    iVar1 = FUN_segment_0__8074db94();
    if (iVar1 == -1) {
      FUN_segment_0__804f8c44(g_Ram_uint,0x41,0);
      FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
    }
    else {
      FUN_segment_0__804f8c44(g_Ram_uint,iVar1,0);
      FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
    }
  }
  else if (*(int *)*g_Ram_uint == 0x3e) {
    FUN_segment_0__804f8c44(g_Ram_uint,0x3f,0);
    FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  }
  *(undefined4 *)(param_1 + 0x310) = 8;
  return;
}

// === EGG_Sound_validate_8051bed0 (0x8051bed0) ===
void EGG_Sound_validate_8051bed0(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_8051bf00 (0x8051bf00) ===
void EGG_Sound_validate_8051bf00(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_8051bf30 (0x8051bf30) ===
void EGG_Sound_validate_8051bf30(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_8051bf9c (0x8051bf9c) ===
undefined4 * snd_EGG_Sound_8051bf9c(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_8051bfd8 (0x8051bfd8) ===
int EGG_Sound_validate_8051bfd8(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_8051c030 (0x8051c030) ===
void snd_EGG_Sound_8051c030(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack_78 [36];
  undefined4 uStack_54;
  undefined4 local_50 [20];
  
  FUN_segment_0__804ae324(auStack_78,param_1);
  puVar4 = &uStack_54;
  puVar3 = (undefined4 *)0xfffffffc;
  iVar5 = 9;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_segment_0__804ae36c(auStack_78,0x15,0x23,0x2f,local_50);
  FUN_segment_0__804ae32c(auStack_78,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051c0b0 (0x8051c0b0) ===
void snd_EGG_Sound_8051c0b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_8051c114 (0x8051c114) ===
void snd_EGG_Sound_8051c114(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,1);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,2);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === snd_EGG_Sound_8051c1c0 (0x8051c1c0) ===
undefined4 * snd_EGG_Sound_8051c1c0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80500418(param_1 + 0x15);
  FUN_segment_0__80500418(param_1 + 0x72);
  param_1[0x72] = 0;
  return param_1;
}

// === EGG_Sound_validate_8051c22c (0x8051c22c) ===
int EGG_Sound_validate_8051c22c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x1c8 != 0) {
      FUN_segment_0__80500540(param_1 + 0x1c8,0);
    }
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

// === snd_EGG_Sound_8051c2b0 (0x8051c2b0) ===
void snd_EGG_Sound_8051c2b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined auStack_a8 [40];
  undefined auStack_80 [36];
  undefined4 uStack_5c;
  undefined4 local_58 [21];
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804ae324(auStack_80,param_1 + 0x54);
  FUN_segment_0__804ae36c(auStack_80,0x3d,0x4b,0x5d,0);
  FUN_segment_0__804ae32c(auStack_80,0xffffffff);
  FUN_segment_0__804ffee8(param_1 + 0x54,1);
  FUN_segment_0__804ffef8(param_1 + 0x54,0,param_1 + 0x1c8);
  FUN_segment_0__804ae324(auStack_a8,param_1 + 0x1c8);
  puVar4 = &uStack_5c;
  puVar3 = (undefined4 *)0xfffffffc;
  iVar5 = 9;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_segment_0__804ae36c(auStack_a8,0x6f,0x7d,0x89,local_58);
  FUN_segment_0__804ae32c(auStack_a8,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051c400 (0x8051c400) ===
void snd_EGG_Sound_8051c400(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1[2] == 4) && (uVar1 = FUN_segment_0__804df3bc(g_Ram_uint + 0xd,0), uVar1 != 0)) {
    if ((uVar1 & 0xf) == 1) {
      uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
      FUN_segment_0__804ff59c((double)(float)g_Ram_uint,uVar2,0);
      uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
      FUN_segment_0__804ff59c((double)(float)g_Ram_uint,uVar2,0);
      if (*(int *)*g_Ram_uint == 0x88) {
        (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,0x2d,0);
      }
      else if (*(int *)*g_Ram_uint == 0x89) {
        (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_uint,param_1,0x1d,0);
      }
      FUN_segment_0__804d24b8(param_1,0x20,0);
    }
    else {
      FUN_segment_0__804d24b8(param_1,0xf3,0xffffffff);
      FUN_segment_0__804df828(g_Ram_uint + 0xd,0);
      FUN_segment_0__804df750(g_Ram_uint + 0xd,0);
    }
  }
  return;
}

// === EGG_Sound_assertFail_8051c58c (0x8051c58c) ===
void EGG_Sound_assertFail_8051c58c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8051c774 (0x8051c774) ===
int EGG_Sound_validate_8051c774(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xc40 != 0) {
      FUN_segment_0__80500540(param_1 + 0xc40,0);
    }
    if (param_1 + 0x9dc != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x9dc,0);
    }
    FUN_segment_0__804a98ac(param_1 + 0x788,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x534,0xffffffff);
    FUN_segment_0__804a98ac(param_1 + 0x2e0,0xffffffff);
    FUN_segment_0__804ca1a0(param_1 + 0xbc,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_8051c820 (0x8051c820) ===
void snd_EGG_Sound_8051c820(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xbc) + 0x10))(param_1 + 0xbc,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0xbc);
  FUN_segment_0__804ca380(param_1 + 0xbc,2);
  FUN_segment_0__804d1c1c(param_1,5);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2e0,0);
  FUN_segment_0__804a9914(param_1 + 0x2e0,0,7,0x12,1,0,0);
  *(undefined4 *)(param_1 + 0x520) = 0;
  FUN_segment_0__804a9ec4(param_1 + 0x2e0,param_1 + 0x44,0);
  FUN_segment_0__804a9edc(param_1 + 0x2e0,param_1 + 0x94);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x534,0);
  FUN_segment_0__804a9914(param_1 + 0x534,0x1a,0x21,0x2c,1,0,0);
  *(undefined4 *)(param_1 + 0x774) = 1;
  FUN_segment_0__804a9ec4(param_1 + 0x534,param_1 + 0x58,0);
  FUN_segment_0__804a9edc(param_1 + 0x534,param_1 + 0x94);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x788,0);
  FUN_segment_0__804a9914(param_1 + 0x788,0x32,0x39,0x44,1,0,0);
  *(undefined4 *)(param_1 + 0x9c8) = 2;
  FUN_segment_0__804a9ec4(param_1 + 0x788,param_1 + 0x6c,0);
  FUN_segment_0__804a9edc(param_1 + 0x788,param_1 + 0x94);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x9dc,0);
  FUN_segment_0__804a9914(param_1 + 0x9dc,0x4d,0x54,0x59,1,0,1);
  *(undefined4 *)(param_1 + 0xc1c) = 3;
  FUN_segment_0__804a9ec4(param_1 + 0x9dc,param_1 + 0x80,0);
  FUN_segment_0__804a9edc(param_1 + 0x9dc,param_1 + 0x94);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0xc40,0);
  FUN_segment_0__807358cc(param_1 + 0xc40);
  FUN_segment_0__804ca350(param_1 + 0xbc,1,param_1 + 0xa8,0,0);
  FUN_segment_0__804a9eec(param_1 + 0x2e0,0);
  FUN_segment_0__80735a00(param_1 + 0xc40,0x1112,0);
  FUN_segment_0__804e5ea4(*g_Ram_uint);
  return;
}

// === snd_EGG_Sound_8051ca58 (0x8051ca58) ===
void snd_EGG_Sound_8051ca58(int param_1)

{
  *(undefined4 *)(param_1 + 0xdb8) = 0;
  *(undefined4 *)(param_1 + 0xdbc) = 0xffffffff;
  *(undefined *)(param_1 + 0xdc0) = 0;
  *(undefined *)(param_1 + 0xdc1) = 0;
  FUN_segment_0__804a9eec(param_1 + 0x2e0,0);
  FUN_segment_0__80735a00(param_1 + 0xc40,0x1112,0);
  if (*(int *)(param_1 + 0xdb4) == 0) {
    FUN_segment_0__804a9fd0(param_1 + 0x534,1);
    *(undefined *)(param_1 + 0x5b4) = 0;
  }
  else if (*(int *)(param_1 + 0xdb4) == 1) {
    FUN_segment_0__804a9fd0(param_1 + 0x534,0);
    *(undefined *)(param_1 + 0x5b4) = 1;
  }
  FUN_segment_0__804a9fd0(param_1 + 0x788,0);
  *(undefined *)(param_1 + 0x808) = 1;
  return;
}

// === EGG_Sound_assertFail_8051cb1c (0x8051cb1c) ===
void EGG_Sound_assertFail_8051cb1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8051d2ac (0x8051d2ac) ===
void snd_EGG_Sound_8051d2ac(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  iVar3 = *(int *)(param_1 + 0xdb8);
  if (iVar3 - 1U < 3) {
    iVar3 = FUN_segment_0__804aa340(param_1 + 0x2e0);
    if (iVar3 == 0) {
      iVar3 = FUN_segment_0__804aa340(param_1 + 0x534);
      if (iVar3 == 0) {
        iVar3 = FUN_segment_0__804aa340(param_1 + 0x788);
        if (iVar3 == 0) {
          FUN_segment_0__80735a00(param_1 + 0xc40,0,0);
        }
        else {
          FUN_segment_0__80735a00(param_1 + 0xc40,0x1116,0);
        }
      }
      else {
        FUN_segment_0__80735a00(param_1 + 0xc40,0x1114,0);
      }
    }
    else {
      FUN_segment_0__80735a00(param_1 + 0xc40,0x1112,0);
    }
    goto LAB_segment_0__8051d530;
  }
  if (iVar3 != 4) {
    if (iVar3 != 5) goto LAB_segment_0__8051d530;
    *(undefined4 *)(param_1 + 0xdbc) = 2;
    FUN_segment_0__804d1c48((double)(float)g_Ram_ptr,param_1,1);
    piVar4 = *(int **)(*g_Ram_ptr + 0x278);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8051d514;
          }
        }
        bVar1 = false;
LAB_segment_0__8051d514:
        if (bVar1) goto LAB_segment_0__8051d524;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__8051d524:
    *(undefined *)(piVar4 + 0xa90) = 1;
    piVar4[0xa8f] = 1;
    goto LAB_segment_0__8051d530;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x140);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051d3d0;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d3d0:
      if (bVar1) goto LAB_segment_0__8051d3e0;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051d3e0:
  if ((piVar4[0x9c] != 0) || (*(char *)(param_1 + 0xdc0) != 0)) goto LAB_segment_0__8051d530;
  dVar5 = (double)(float)g_Ram_ptr;
  *(undefined4 *)(param_1 + 0xdbc) = 1;
  FUN_segment_0__804d1c48(dVar5,param_1,1);
  piVar4 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051d478;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d478:
      if (bVar1) goto LAB_segment_0__8051d488;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051d488:
  *(undefined *)(piVar4 + 0xa90) = 1;
  piVar4[0xa8f] = 1;
LAB_segment_0__8051d530:
  *(undefined4 *)(param_1 + 0xdb8) = 0;
  return;
}

// === snd_EGG_Sound_8051d55c (0x8051d55c) ===
void snd_EGG_Sound_8051d55c(int param_1)

{
  snd_EGG_Sound_80546508(uRam00000000);
  *(undefined *)(param_1 + 0xdc0) = 1;
  return;
}

// === snd_EGG_Sound_8051d598 (0x8051d598) ===
void snd_EGG_Sound_8051d598(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x280);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051d618;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d618:
      if (bVar1) goto LAB_segment_0__8051d628;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051d628:
  piVar3[0x91f] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,0x9e,0);
  FUN_segment_0__80735a00(param_1 + 0x310,0x1113,0);
  param_1[0x36e] = 1;
  return;
}

// === snd_EGG_Sound_8051d680 (0x8051d680) ===
void snd_EGG_Sound_8051d680(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x280);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051d700;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d700:
      if (bVar1) goto LAB_segment_0__8051d710;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051d710:
  piVar3[0x91f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x9e,0);
  FUN_segment_0__80735a00(param_1 + 0x310,0x1115,0);
  param_1[0x36e] = 3;
  return;
}

// === snd_EGG_Sound_8051d774 (0x8051d774) ===
void snd_EGG_Sound_8051d774(int *param_1)

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
          goto LAB_segment_0__8051d7f4;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d7f4:
      if (bVar1) goto LAB_segment_0__8051d804;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051d804:
  (**(code **)(*piVar3 + 100))(piVar3);
  snd_EGG_Sound_80512c88(piVar3,(param_1[0x36d] == 0) + 0xfb3,0);
  snd_EGG_Sound_80512c90(piVar3,0,0xfac,0,0xffffffff,0);
  snd_EGG_Sound_80512c90(piVar3,1,0xfad,0,0xffffffff,0);
  piVar3[0x9f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x4e,0);
  param_1[0x36e] = 4;
  return;
}

// === snd_EGG_Sound_8051d920 (0x8051d920) ===
void snd_EGG_Sound_8051d920(int *param_1)

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
          goto LAB_segment_0__8051d9a0;
        }
      }
      bVar1 = false;
LAB_segment_0__8051d9a0:
      if (bVar1) goto LAB_segment_0__8051d9b0;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051d9b0:
  (**(code **)(*piVar3 + 100))(piVar3);
  snd_EGG_Sound_80512c88(piVar3,(param_1[0x36d] == 0) + 0xfb3,0);
  snd_EGG_Sound_80512c90(piVar3,0,0xfac,0,0xffffffff,0);
  snd_EGG_Sound_80512c90(piVar3,1,0xfad,0,0xffffffff,0);
  piVar3[0x9f] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x4e,0);
  param_1[0x36e] = 4;
  return;
}

// === snd_EGG_Sound_8051da70 (0x8051da70) ===
undefined4 * snd_EGG_Sound_8051da70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_segment_0__80500418();
  *param_1 = 0;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x61] = uRam00000008;
  param_1[0x5d] = 0;
  param_1[0x5e] = param_1;
  param_1[0x5f] = uVar1;
  param_1[0x60] = uVar2;
  return param_1;
}

// === EGG_Sound_validate_8051dae4 (0x8051dae4) ===
int EGG_Sound_validate_8051dae4(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_8051db3c (0x8051db3c) ===
void snd_EGG_Sound_8051db3c(int param_1,undefined4 param_2,byte param_3,byte param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined auStack_90 [36];
  undefined4 uStack_6c;
  undefined4 local_68 [24];
  
  *(undefined4 *)(param_1 + 0x188) = param_2;
  *(byte *)(param_1 + 0x18c) = param_3;
  *(byte *)(param_1 + 0x18d) = param_4;
  *(uint *)(param_1 + 400) = (uint)param_4 + (uint)param_3 * 2;
  FUN_segment_0__804ae324(auStack_90,param_1);
  puVar5 = &uStack_6c;
  puVar4 = (undefined4 *)0xfffffffc;
  iVar6 = 0xc;
  do {
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar2 = *puVar4;
    puVar5[1] = *puVar1;
    puVar5 = puVar5 + 2;
    *puVar5 = uVar2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_segment_0__804ae36c(auStack_90,0x79,0x7f,0x94,local_68);
  iVar3 = FUN_segment_0__804c5d1c(param_1 + 0xa8,0xa9);
  *(int *)(param_1 + 0x194) = iVar3;
  iVar6 = iRam00000000;
  if (*(int *)(iRam00000000 + 0x58) == 1) {
    *(int *)(iVar3 + 0x44) = iRam00000000;
    *(int *)(iVar3 + 0x48) = iVar6;
  }
  FUN_segment_0__804ae32c(auStack_90,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051dc28 (0x8051dc28) ===
void snd_EGG_Sound_8051dc28(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff7a0((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,1);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,2);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  FUN_segment_0__80500d70(param_1,0xb2,0xb8);
  FUN_segment_0__80500d70(param_1,0xc3,0xd2);
  FUN_segment_0__80500d70(param_1,0xdd,0xec);
  *(undefined *)(param_1 + 0x19c) = 0;
  return;
}

// === snd_EGG_Sound_8051dd14 (0x8051dd14) ===
void snd_EGG_Sound_8051dd14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  uVar5 = uRam00000124;
  fVar3 = g_Ram_float;
  if (*(int *)(iVar4 + 0x38) - 1U < 2) {
    iVar4 = *(int *)(param_1 + 0x194);
    fVar1 = *(float *)(param_1 + 0x198);
    fVar2 = *(float *)(iVar4 + 0x2c);
    if (fVar2 - fVar1 <= fRam0000011c) {
      if (fVar2 - fVar1 < fRam00000120) {
        fVar1 = fVar2 + fRam0000011c;
      }
    }
    else {
      fVar1 = fVar2 - fRam0000011c;
    }
    *(float *)(iVar4 + 0x2c) = fVar1;
    *(undefined4 *)(iVar4 + 0x30) = uVar5;
    *(float *)(iVar4 + 0x34) = fVar3;
    iVar4 = FUN_segment_0__804ce138(*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400))
    ;
    if ((iVar4 == 1) && (*(char *)(param_1 + 0x19c) == 0)) {
      FUN_segment_0__8050105c
                (param_1,0xf7,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400),2);
      FUN_segment_0__8050105c
                (param_1,0xfd,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400),2);
      FUN_segment_0__8050105c
                (param_1,0x10c,*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400),2);
      uVar5 = FUN_segment_0__804ff4a0(param_1 + 0x98,2);
      FUN_segment_0__804ff59c((double)g_Ram_float,uVar5,0);
      uVar5 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
      FUN_segment_0__804ff59c((double)g_Ram_float,uVar5,0);
      *(undefined *)(param_1 + 0x19c) = 1;
      FUN_segment_0__805003cc(param_1,0x3b,0xffffffff);
    }
  }
  return;
}

// === snd_EGG_Sound_8051de90 (0x8051de90) ===
void snd_EGG_Sound_8051de90(int param_1,uint param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = uRam00000124;
  fVar2 = g_Ram_float;
  iVar4 = *(int *)(param_1 + 0x194);
  fVar1 = fRam0000012c *
          ((float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000130) -
          fRam00000128 *
          (float)((double)CONCAT44(0x43300000,param_3 - 1U ^ 0x80000000) - dRam00000130));
  *(float *)(param_1 + 0x198) = fVar1;
  *(float *)(iVar4 + 0x2c) = fVar1;
  *(undefined4 *)(iVar4 + 0x30) = uVar3;
  *(float *)(iVar4 + 0x34) = fVar2;
  uVar3 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar3,1);
  FUN_segment_0__80500d70(param_1,0x11b,0x121);
  FUN_segment_0__80500d70(param_1,300,0x13b);
  FUN_segment_0__80500d70(param_1,0x146,0x155);
  *(undefined *)(param_1 + 0x19c) = 0;
  FUN_segment_0__805003cc(param_1,0x3a,0xffffffff);
  return;
}

// === snd_EGG_Sound_8051dfa8 (0x8051dfa8) ===
void snd_EGG_Sound_8051dfa8(int param_1,uint param_2,int param_3)

{
  *(float *)(param_1 + 0x198) =
       dRam00000000._0_4_ *
       ((float)((double)CONCAT44(0x43300000,param_2 ^ 0x80000000) - dRam00000000) -
       dRam00000000._0_4_ *
       (float)((double)CONCAT44(0x43300000,param_3 - 1U ^ 0x80000000) - dRam00000000));
  return;
}

// === EGG_Sound_validate_8051e00c (0x8051e00c) ===
void EGG_Sound_validate_8051e00c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  if (piVar1[0xe] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
  }
  if (piVar1[0xe] == 2) {
    FUN_segment_0__804ff59c((double)g_Ram_float,piVar1,3);
  }
  return;
}

// === snd_EGG_Sound_8051e0bc (0x8051e0bc) ===
void snd_EGG_Sound_8051e0bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,4);
  if ((*(int *)(iVar1 + 0x38) == 2) &&
     (iVar1 = FUN_segment_0__804ce138
                        (*(undefined4 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400)),
     iVar1 != 0)) {
    uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,2);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,0);
    uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,3);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,0);
  }
  return;
}

// === EGG_Sound_validate_8051e14c (0x8051e14c) ===
void EGG_Sound_validate_8051e14c(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80500418(param_1 + 0x15);
  param_1[0x15] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x72,0,0,0x1a0,0x18);
}

// === EGG_Sound_validate_8051e1e0 (0x8051e1e0) ===
undefined4 EGG_Sound_validate_8051e1e0(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x2a44,0xffffffff);
    FUN_segment_0__804cd42c(param_1 + 0x28c8,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x1c8,0,0x1a0,0x18);
  }
  return 0;
}

// === snd_EGG_Sound_8051e288 (0x8051e288) ===
void snd_EGG_Sound_8051e288(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  iVar2 = FUN_segment_0__8040bafc();
  FUN_segment_0__804cd808(param_1 + 0x2a44,0x18,4,*(undefined4 *)(iVar2 + 0xc98));
  FUN_segment_0__804d1c1c(param_1,0x1a);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__80735444(param_1 + 0x54,0);
  FUN_segment_0__80735844(param_1 + 0x54,0x1004,0);
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      uVar1 = (uVar3 & 0xff) + (uVar4 & 0xff) * 2 & 0xff;
      iVar2 = param_1 + uVar1 * 0x1a0 + 0x1c8;
      FUN_segment_0__804d1c2c(param_1,uVar1 + 1,iVar2,0);
      snd_EGG_Sound_8051db3c(iVar2,param_1 + 0x2a44,uVar4 & 0xff,uVar3 & 0xff);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  FUN_segment_0__804d1c2c(param_1,0x19,param_1 + 0x28c8,0);
  FUN_segment_0__804cd484(param_1 + 0x28c8,0x160,0x16f,0x184);
  return;
}

// === snd_EGG_Sound_8051e3c4 (0x8051e3c4) ===
void snd_EGG_Sound_8051e3c4(int *param_1)

{
  *(undefined *)(param_1 + 0xa90) = 0;
  param_1[0xa8f] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,0x9d,0);
  *(undefined *)(param_1 + 0xab7) = 0xff;
  *(undefined *)((int)param_1 + 0x2add) = 0xff;
  *(undefined *)((int)param_1 + 0x2ade) = 0xff;
  *(undefined *)((int)param_1 + 0x2adf) = 0xff;
  *(undefined *)(param_1 + 0xab8) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae1) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae2) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae3) = 0xff;
  *(undefined *)(param_1 + 0xab9) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae5) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae6) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae7) = 0xff;
  *(undefined *)(param_1 + 0xaba) = 0xff;
  *(undefined *)((int)param_1 + 0x2ae9) = 0xff;
  *(undefined *)((int)param_1 + 0x2aea) = 0xff;
  *(undefined *)((int)param_1 + 0x2aeb) = 0xff;
  *(undefined *)(param_1 + 0xabb) = 0xff;
  *(undefined *)((int)param_1 + 0x2aed) = 0xff;
  *(undefined *)((int)param_1 + 0x2aee) = 0xff;
  *(undefined *)((int)param_1 + 0x2aef) = 0xff;
  *(undefined *)((int)param_1 + 0x2af1) = 0xff;
  *(undefined *)((int)param_1 + 0x2af2) = 0xff;
  *(undefined *)((int)param_1 + 0x2af3) = 0xff;
  param_1[0xaba] = 0;
  param_1[0xafe] = 0;
  param_1[0xaff] = 0;
  param_1[0xb00] = 0;
  param_1[0xb01] = 0;
  param_1[0xb02] = 0;
  param_1[0xb03] = 0;
  param_1[0xb04] = 0;
  param_1[0xb05] = 0;
  param_1[0xb06] = 0;
  param_1[0xb07] = 0;
  param_1[0xb08] = 0;
  param_1[0xb09] = 0;
  param_1[0xb0a] = 0;
  param_1[0xb0b] = 0;
  param_1[0xb0c] = 0;
  param_1[0xb0d] = 0;
  param_1[0xb0e] = 0;
  param_1[0xb0f] = 0;
  param_1[0xb10] = 0;
  param_1[0xb11] = 0;
  param_1[0xb12] = 0;
  param_1[0xb13] = 0;
  param_1[0xb14] = 0;
  param_1[0xb15] = 0;
  param_1[0xb16] = 0;
  *(undefined *)(param_1 + 0xb17) = 0xff;
  param_1[0xabb] = -1;
  param_1[0xabd] = -1;
  param_1[0xb18] = 0;
  *(undefined *)(param_1 + 0xabc) = 0;
  *(undefined *)(param_1 + 0xabe) = 0;
  *(undefined *)((int)param_1 + 0x2af9) = 0;
  *(undefined *)((int)param_1 + 0x2afa) = 0;
  *(undefined *)((int)param_1 + 0x2afb) = 0;
  *(undefined *)(param_1 + 0xabf) = 0;
  *(undefined *)((int)param_1 + 0x2afd) = 0;
  *(undefined *)((int)param_1 + 0x2afe) = 0;
  *(undefined *)((int)param_1 + 0x2aff) = 0;
  *(undefined *)(param_1 + 0xac0) = 0;
  *(undefined *)((int)param_1 + 0x2b01) = 0;
  *(undefined *)((int)param_1 + 0x2b02) = 0;
  *(undefined *)((int)param_1 + 0x2b03) = 0;
  *(undefined *)(param_1 + 0xac1) = 0;
  FUN_segment_0__804cdb2c(param_1 + 0xa91);
  return;
}

// === snd_EGG_Sound_8051e534 (0x8051e534) ===
void snd_EGG_Sound_8051e534(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x274);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051e5b4;
        }
      }
      bVar1 = false;
LAB_segment_0__8051e5b4:
      if (bVar1) goto LAB_segment_0__8051e5c4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8051e5c4:
  if (piVar4[0xd4] == 1) {
    bVar2 = *(char *)(param_1 + 11000) + 1;
    *(byte *)(param_1 + 11000) = bVar2;
    uVar5 = bVar2 | 0x3000000;
    snd_EGG_Sound_8054aa88(g_Ram_ptr,uVar5);
    *(uint *)(param_1 + 0x2c60) = uVar5;
    *(undefined *)(param_1 + 0x2c64) =
         *(undefined *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59);
  }
  return;
}

// === snd_EGG_Sound_8051e63c (0x8051e63c) ===
void snd_EGG_Sound_8051e63c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x25c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051e6bc;
        }
      }
      bVar1 = false;
LAB_segment_0__8051e6bc:
      if (bVar1) goto LAB_segment_0__8051e6cc;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8051e6cc:
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_segment_0__804c40a4(piVar3);
  }
  else {
    FUN_segment_0__804c41a8(piVar3);
  }
  return;
}

// === snd_EGG_Sound_8051e708 (0x8051e708) ===
void snd_EGG_Sound_8051e708(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*g_Ram_ptr + 0x404);
  iVar1 = FUN_segment_0__804b98d0(uVar2);
  if (iVar1 != 0) {
    FUN_segment_0__804b9914(uVar2);
  }
  return;
}

// === snd_EGG_Sound_8051e754 (0x8051e754) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8051e754(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8051f2c4 (0x8051f2c4) ===
undefined4 snd_EGG_Sound_8051f2c4(uint *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_198 [4];
  undefined4 local_188 [98];
  
  uVar2 = *param_1;
  uVar4 = uVar2 >> 0x18;
  if (uVar4 == 1) {
    uVar4 = uVar2 >> 8 & 0xffff;
    local_198[0] = uRam00000000;
    local_198[1] = uRam00000004;
    local_198[2] = uRam00000008;
    local_198[3] = uRam0000000c;
    if (uVar4 < 4) {
      return local_198[uVar4];
    }
  }
  else if (uVar4 == 2) {
    if ((uVar2 >> 8 & 0xffff) == 0) {
      if (param_2 == 0) {
        return 0x1037;
      }
      return 0x103a;
    }
  }
  else if (uVar4 == 3) {
    if ((uVar2 >> 8 & 0xffff) == 0) {
      return 0x1193;
    }
  }
  else if (uVar4 == 4) {
    puVar6 = local_198 + 3;
    puVar5 = (undefined4 *)0xfffffffc;
    iVar7 = 0x30;
    do {
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      uVar3 = *puVar5;
      puVar6[1] = *puVar1;
      puVar6 = puVar6 + 2;
      *puVar6 = uVar3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar4 = *param_1 >> 8 & 0xffff;
    if (uVar4 < 0x60) {
      return local_188[uVar4];
    }
  }
  return 0;
}

// === EGG_Sound_validate_8051f494 (0x8051f494) ===
int EGG_Sound_validate_8051f494(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_8051f54c (0x8051f54c) ===
void snd_EGG_Sound_8051f54c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint local_28;
  uint local_24;
  
  piVar9 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar9 != (int *)0) {
    if (piVar9 != (int *)0) {
      for (puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x60))(piVar9); puVar7 != (void *)0
          ; puVar7 = (undefined4 *)*puVar7) {
        if (puVar7 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051f5c4;
        }
      }
      bVar1 = false;
LAB_segment_0__8051f5c4:
      if (bVar1) goto LAB_segment_0__8051f5d4;
    }
    piVar9 = (int *)0;
  }
  else {
    piVar9 = (int *)0;
  }
LAB_segment_0__8051f5d4:
  uVar8 = 0;
  do {
    if (((1 << (uVar8 & 0x3f) & g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0) &&
       (uVar2 = FUN_segment_0__804ce0ec(piVar9 + 0xa91,(uVar8 & 0x7f) << 1),
       (int)(-uVar2 | uVar2) < 0)) {
      if ((uVar8 & 0xff) == (uint)*(byte *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59)
         ) {
        uVar2 = param_1[0x56];
        if ((uVar2 != param_1[(uVar8 & 0xff) + 0x3d]) ||
           (*(char *)(param_1 + 0x57) != *(char *)(param_1 + 0x55))) {
          if (uVar2 >> 0x18 == 1) {
            iVar5 = 0;
            iVar3 = 0;
            puVar6 = param_1;
            while (iVar5 < (int)param_1[0x3c]) {
              if ((*puVar6 >> 0x18) - 3 < 2) {
                puVar7 = (undefined4 *)((int)param_1 + iVar3);
                for (iVar4 = iVar5; iVar4 < (int)(param_1[0x3c] - 1); iVar4 = iVar4 + 1) {
                  *puVar7 = puVar7[2];
                  *(undefined *)(puVar7 + 1) = *(undefined *)(puVar7 + 3);
                  *(undefined *)((int)puVar7 + 5) = *(undefined *)((int)puVar7 + 0xd);
                  puVar7 = puVar7 + 2;
                }
                param_1[0x3c] = param_1[0x3c] - 1;
              }
              else {
                puVar6 = puVar6 + 2;
                iVar5 = iVar5 + 1;
                iVar3 = iVar3 + 8;
              }
            }
          }
          local_24 = uVar2;
          snd_EGG_Sound_8051f96c(param_1,uVar8 & 0xff,*(undefined *)(param_1 + 0x57),&local_24);
          param_1[(uVar8 & 0xff) + 0x3d] = uVar2;
          *(undefined *)(param_1 + 0x55) = *(undefined *)(param_1 + 0x57);
        }
      }
      else {
        uVar2 = snd_EGG_Sound_8054ab7c(g_Ram_ptr);
        if (uVar2 != param_1[(uVar8 & 0xff) + 0x3d]) {
          if (uVar2 >> 0x18 == 1) {
            iVar5 = 0;
            iVar3 = 0;
            puVar6 = param_1;
            while (iVar5 < (int)param_1[0x3c]) {
              if ((*puVar6 >> 0x18) - 3 < 2) {
                puVar7 = (undefined4 *)((int)param_1 + iVar3);
                for (iVar4 = iVar5; iVar4 < (int)(param_1[0x3c] - 1); iVar4 = iVar4 + 1) {
                  *puVar7 = puVar7[2];
                  *(undefined *)(puVar7 + 1) = *(undefined *)(puVar7 + 3);
                  *(undefined *)((int)puVar7 + 5) = *(undefined *)((int)puVar7 + 0xd);
                  puVar7 = puVar7 + 2;
                }
                param_1[0x3c] = param_1[0x3c] - 1;
              }
              else {
                puVar6 = puVar6 + 2;
                iVar5 = iVar5 + 1;
                iVar3 = iVar3 + 8;
              }
            }
          }
          local_28 = uVar2;
          snd_EGG_Sound_8051f96c
                    (param_1,uVar8 & 0xff,
                     *(undefined *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59),
                     &local_28);
          param_1[(uVar8 & 0xff) + 0x3d] = uVar2;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x18);
  return;
}

// === snd_EGG_Sound_8051f96c (0x8051f96c) ===
void snd_EGG_Sound_8051f96c(uint *param_1,undefined param_2,undefined param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  uVar2 = *param_4;
  uVar3 = uVar2 >> 0x18;
  if (uVar3 == 1) {
    uVar3 = (uint)(4 << LZCOUNT(uVar2 >> 8 & 0xffff ^ 4)) >> 0x1f;
  }
  else if (uVar3 == 2) {
    uVar3 = (uint)((uVar2 >> 8 & 0xffff) == 0);
  }
  else if (uVar3 == 3) {
    uVar3 = (uint)((uVar2 >> 8 & 0xffff) == 0);
  }
  else if (uVar3 == 4) {
    uVar3 = (uint)(0x60 << LZCOUNT(uVar2 >> 8 & 0xffff ^ 0x60)) >> 0x1f;
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    return;
  }
  uVar3 = param_1[0x3c];
  if ((int)uVar3 < 0x1e) {
    uVar2 = *param_4;
    *(undefined *)(param_1 + uVar3 * 2 + 1) = param_2;
    *(undefined *)((int)param_1 + param_1[0x3c] * 8 + 5) = param_3;
    param_1[param_1[0x3c] * 2] = uVar2;
    param_1[0x3c] = param_1[0x3c] + 1;
  }
  else {
    uVar2 = *param_4;
    iVar6 = -1;
    iVar7 = 0;
    puVar5 = param_1;
    if (0 < (int)uVar3) {
      do {
        if (uVar2 < *puVar5) {
          iVar6 = iVar7;
          uVar2 = *puVar5;
        }
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (-1 < iVar6) {
      puVar5 = param_1 + uVar2 * 2;
      for (; (int)uVar2 < (int)(param_1[0x3c] - 1); uVar2 = uVar2 + 1) {
        *puVar5 = puVar5[2];
        *(undefined *)(puVar5 + 1) = *(undefined *)(puVar5 + 3);
        *(undefined *)((int)puVar5 + 5) = *(undefined *)((int)puVar5 + 0xd);
        puVar5 = puVar5 + 2;
      }
      uVar3 = *param_4;
      *(undefined *)(param_1 + (param_1[0x3c] - 1) * 2 + 1) = param_2;
      *(undefined *)((int)param_1 + (param_1[0x3c] - 1) * 8 + 5) = param_3;
      param_1[(param_1[0x3c] - 1) * 2] = uVar3;
    }
  }
  if (*param_4 >> 0x18 != 1) {
    return;
  }
  piVar8 = *(int **)(*g_Ram_ptr + 0x27c);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051fb88;
        }
      }
      bVar1 = false;
LAB_segment_0__8051fb88:
      if (bVar1) goto LAB_segment_0__8051fb98;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__8051fb98:
  snd_EGG_Sound_80546508(g_Ram_ptr);
  *(undefined *)(piVar8 + 0x370) = 1;
  piVar8 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar8 != (int *)0) {
    if (piVar8 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x60))(piVar8); puVar4 != (void *)0
          ; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8051fc10;
        }
      }
      bVar1 = false;
LAB_segment_0__8051fc10:
      if (bVar1) goto LAB_segment_0__8051fc20;
    }
    piVar8 = (int *)0;
  }
  else {
    piVar8 = (int *)0;
  }
LAB_segment_0__8051fc20:
  piVar8[0xabd] = *param_4 >> 8 & 0xffff;
  return;
}

// === EGG_Sound_validate_8051fcdc (0x8051fcdc) ===
void EGG_Sound_validate_8051fcdc(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5d,0,0,0x254,4);
}

// === EGG_Sound_validate_8051fd38 (0x8051fd38) ===
undefined4 EGG_Sound_validate_8051fd38(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x174,0,0x254,4);
  }
  return 0;
}

// === EGG_Sound_assertFail_8051fdac (0x8051fdac) ===
void EGG_Sound_assertFail_8051fdac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8051ff04 (0x8051ff04) ===
void snd_EGG_Sound_8051ff04(int param_1)

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
    } while (iVar3 < 4);
    uVar2 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,3);
  }
  iVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  *(bool *)(param_1 + 0x80) = *(int *)(iVar1 + 0x38) == 0;
  return;
}

// === snd_EGG_Sound_80520034 (0x80520034) ===
void snd_EGG_Sound_80520034(int param_1)

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
  } while (iVar2 < 4);
  return;
}

// === snd_EGG_Sound_805200cc (0x805200cc) ===
void snd_EGG_Sound_805200cc(int param_1)

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
  } while (iVar2 < 4);
  return;
}

// === snd_EGG_Sound_8052013c (0x8052013c) ===
void snd_EGG_Sound_8052013c(int param_1,int param_2)

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

// === snd_EGG_Sound_8052019c (0x8052019c) ===
void snd_EGG_Sound_8052019c(int param_1,int param_2)

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
  } while (iVar2 < 4);
  return;
}

// === snd_EGG_Sound_80520234 (0x80520234) ===
bool snd_EGG_Sound_80520234(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 3;
}

// === snd_EGG_Sound_8052026c (0x8052026c) ===
bool snd_EGG_Sound_8052026c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804ff4b0(param_1 + 0x98,0);
  return *(int *)(iVar1 + 0x38) == 0;
}

// === snd_EGG_Sound_805202d8 (0x805202d8) ===
void snd_EGG_Sound_805202d8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x174;
  iVar1 = 0;
  do {
    FUN_segment_0__804a9ec4(param_1,param_2,0);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x254;
  } while (iVar1 < 4);
  return;
}

// === snd_EGG_Sound_80520348 (0x80520348) ===
int snd_EGG_Sound_80520348(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 0x174;
  iVar2 = 0;
  do {
    iVar1 = FUN_segment_0__804aa340(param_1);
    if (iVar1 != 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x254;
  } while (iVar2 < 4);
  return -1;
}

// === EGG_Sound_assertFail_805203a8 (0x805203a8) ===
void EGG_Sound_assertFail_805203a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_805205f0 (0x805205f0) ===
undefined4 EGG_Sound_validate_805205f0(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x2494,0xffffffff);
    if (param_1 + 0x2210 != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x2210,0);
    }
    FUN_segment_0__80500540(param_1 + 0x209c,0xffffffff);
    FUN_segment_0__80501428(param_1 + 0x1f28,0xffffffff);
    if (param_1 + 0x19f0 != 0) {
      FUN_segment_0__804f9284(param_1 + 0x19f0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x468,0,0xac4,2);
  }
  return 0;
}

// === snd_EGG_Sound_805206c0 (0x805206c0) ===
void snd_EGG_Sound_805206c0(int param_1)

{
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [52];
  
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x10))(param_1 + 0xd0,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0xd0);
  FUN_segment_0__804ca380(param_1 + 0xd0,1);
  FUN_segment_0__804d1c1c(param_1,7);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2f4,0);
  FUN_segment_0__804ae324(auStack_40,param_1 + 0x2f4);
  FUN_segment_0__804ae36c(auStack_40,0x23a,0x242,0x252,0);
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x468,0);
  EGG_Sound_assertFail_8051fdac(param_1 + 0x468);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0xf2c,0);
  EGG_Sound_assertFail_8051fdac(param_1 + 0xf2c);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x19f0,0);
  FUN_segment_0__804f9328(param_1 + 0x19f0,0x262,0x269,0x281,0x292,0x2a9,1,0,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0x1f28,0);
  FUN_segment_0__804ae324(auStack_68,param_1 + 0x1f28);
  FUN_segment_0__804ae36c(auStack_68,0x2b9,0x2c1,0x2d6,0);
  FUN_segment_0__804ae32c(auStack_68,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,5,param_1 + 0x209c,0);
  FUN_segment_0__804ae324(auStack_90,param_1 + 0x209c);
  FUN_segment_0__804ae36c(auStack_90,0x2eb,0x2ee,0x30f,0);
  FUN_segment_0__804ae32c(auStack_90,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,6,param_1 + 0x2210,0);
  FUN_segment_0__804a9914(param_1 + 0x2210,0x31d,0x324,0x340,1,0,1);
  FUN_segment_0__804f93f0(param_1 + 0x19f0,param_1 + 0x80);
  FUN_segment_0__804f93f8(param_1 + 0x19f0,param_1 + 0x94);
  FUN_segment_0__804a9ec4(param_1 + 0x2210,param_1 + 0xa8,0);
  FUN_segment_0__804ca350(param_1 + 0xd0,1,param_1 + 0xbc,0,0);
  FUN_segment_0__804a9eec(param_1 + 0x2210,0);
  *(undefined4 *)(param_1 + 0x2674) = 0;
  *(undefined4 *)(param_1 + 0x2678) = 0;
  FUN_segment_0__804e5ea4(*g_Ram_uint);
  FUN_segment_0__804cd808(param_1 + 0x2494,10,0,0);
  *(undefined4 *)(param_1 + 0x2670) = 0;
  return;
}

// === snd_EGG_Sound_80520934 (0x80520934) ===
void snd_EGG_Sound_80520934(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = g_Ram_float;
  *(undefined *)(param_1 + 0x248c) = 0;
  *(float *)(param_1 + 0x2490) = fVar1;
  FUN_segment_0__804a9eec(param_1 + 0x2210,0);
  iVar4 = *(int *)(param_1 + 0x247c);
  *(int *)(param_1 + 0x2474) = param_1 + 0x468;
  *(int *)(param_1 + 0x2478) = param_1 + 0xf2c;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2480) = 0x60;
    iVar4 = param_1 + 0x5dc;
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x44,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    iVar4 = param_1 + 0x10a0;
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x44,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x34b,1);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x355,0);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x361,0);
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0x2480) = 4;
    iVar4 = param_1 + 0x5dc;
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x58,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    iVar4 = param_1 + 0x10a0;
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x58,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x36b,0);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x375,0);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x381,1);
  }
  else if (iVar4 == 2) {
    iVar4 = param_1 + 0x5dc;
    *(undefined4 *)(param_1 + 0x2480) = *(undefined4 *)(param_1 + 0x2670);
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x6c,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    iVar4 = param_1 + 0x10a0;
    iVar5 = 0;
    do {
      FUN_segment_0__804a9ec4(iVar4,param_1 + 0x6c,0);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x254;
    } while (iVar5 < 4);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x38b,0);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x395,1);
    FUN_segment_0__805011cc(param_1 + 0x2f4,0x3a1,0);
  }
  uVar2 = *(int *)(param_1 + 0x2480) - 1;
  *(uint *)(param_1 + 0x2484) = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0) + 1;
  if (*(int *)(param_1 + 0x247c) == 0) {
    *(undefined4 *)(param_1 + 0x2488) = *(undefined4 *)(param_1 + 0x2674);
  }
  else {
    *(undefined4 *)(param_1 + 0x2488) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x2484) ^ 1;
  iVar4 = (int)uVar2 >> 1;
  uVar2 = uVar2 & *(uint *)(param_1 + 0x2484);
  FUN_segment_0__804f946c(param_1 + 0x19f0,iVar4 - uVar2 >> 0x1f,iVar4 - uVar2 >> 0x1f);
  snd_EGG_Sound_80521070(param_1);
  iVar5 = *(int *)(param_1 + 0x2474);
  uVar3 = FUN_segment_0__804ff4a0(iVar5 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar3,3);
  iVar4 = iVar5 + 0x174;
  iVar6 = 0;
  do {
    if (*(int *)(iVar5 + 0x3b4) < 0) {
      FUN_segment_0__804a9fd0(iVar4,0);
    }
    else {
      FUN_segment_0__804a9fd0(iVar4,1);
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x254;
    iVar5 = iVar5 + 0x254;
  } while (iVar6 < 4);
  iVar4 = *(int *)(param_1 + 0x2478);
  uVar3 = FUN_segment_0__804ff4a0(iVar4 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar3,0);
  iVar4 = iVar4 + 0x174;
  iVar5 = 0;
  do {
    FUN_segment_0__804a9fd0(iVar4,0);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x254;
  } while (iVar5 < 4);
  if (0 < *(int *)(param_1 + 0x2480)) {
    if (*(int *)(param_1 + 0x247c) == 0) {
      FUN_segment_0__804a9eec
                (*(int *)(param_1 + 0x2474) + *(int *)(param_1 + 0x2678) * 0x254 + 0x174,0);
    }
    else {
      FUN_segment_0__804a9eec(*(int *)(param_1 + 0x2474) + 0x174,0);
    }
  }
  return;
}

// === snd_EGG_Sound_80520cd8 (0x80520cd8) ===
void snd_EGG_Sound_80520cd8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x247c) == 0) {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x2674) = *(undefined4 *)(param_1 + 0x2488);
    iVar2 = *(int *)(param_1 + 0x2474) + 0x174;
    do {
      iVar1 = FUN_segment_0__804aa340(iVar2);
      if (iVar1 != 0) goto LAB_segment_0__80520d3c;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x254;
    } while (iVar3 < 4);
    iVar3 = -1;
LAB_segment_0__80520d3c:
    *(int *)(param_1 + 0x2678) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x2678) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x247c) = 0xffffffff;
  return;
}

// === snd_EGG_Sound_80520d74 (0x80520d74) ===
void snd_EGG_Sound_80520d74(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 8) == 4) && (*(char *)(param_1 + 0x248c) != 0)) &&
      (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2474) + 0x98,0),
      *(int *)(iVar1 + 0x38) == 3)) &&
     (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2478) + 0x98,0),
     *(int *)(iVar1 + 0x38) == 0)) {
    FUN_segment_0__804d1c48((double)*(float *)(param_1 + 0x2490),param_1,1);
  }
  return;
}

// === snd_EGG_Sound_80520dfc (0x80520dfc) ===
undefined4 snd_EGG_Sound_80520dfc(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_38;
  int local_34;
  
  piVar9 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar9 != (int *)0) {
    if (piVar9 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar9 + 0x60))(piVar9); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80520e74;
        }
      }
      bVar1 = false;
LAB_segment_0__80520e74:
      if (bVar1) goto LAB_segment_0__80520e84;
    }
    piVar9 = (int *)0;
  }
  else {
    piVar9 = (int *)0;
  }
LAB_segment_0__80520e84:
  FUN_segment_0__804cdb2c(param_1 + 0x2494);
  *(undefined4 *)(param_1 + 0x2670) = 0;
  iVar8 = 0;
  do {
    uVar7 = 0;
    do {
      uVar2 = uVar7 & 0xff;
      if ((((uVar2 != *(byte *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59)) &&
           (uVar4 = 1 << (uVar7 & 0x3f),
           (uVar4 & g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) != 0)) &&
          ((uVar4 & g_Ram_ptr[0x278]) != 0)) &&
         ((iVar8 == 0) == (bool)*(char *)((int)piVar9 + uVar2 + 0x2af9))) {
        local_38 = g_Ram_ptr[uVar2 * 0x30 + 0x5c];
        local_34 = g_Ram_ptr[uVar2 * 0x30 + 0x5d];
        iVar5 = FUN_segment_0__804b935c(*(undefined4 *)(*g_Ram_ptr + 0x404),&local_38);
        if (iVar5 == 0) {
          iVar5 = param_1 + *(int *)(param_1 + 0x2670) * 0x20;
          *(int *)(iVar5 + 0x2534) = local_34;
          *(int *)(iVar5 + 0x2530) = local_38;
          *(int *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x2538) =
               g_Ram_ptr[uVar2 * 0x30 + 0x5e];
          *(undefined2 *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x253c) =
               *(undefined2 *)(g_Ram_ptr + uVar2 * 0x30 + 0x5f);
          *(undefined2 *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x253e) =
               *(undefined2 *)((int)g_Ram_ptr + uVar2 * 0xc0 + 0x17e);
          iVar6 = g_Ram_ptr[uVar2 * 0x30 + 0x5a];
          iVar5 = param_1 + *(int *)(param_1 + 0x2670) * 0x20;
          *(int *)(iVar5 + 0x2544) = g_Ram_ptr[uVar2 * 0x30 + 0x5b];
          *(int *)(iVar5 + 0x2540) = iVar6;
          *(char *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x2548) = (char)uVar7;
          *(undefined *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x2549) =
               *(undefined *)(g_Ram_ptr + uVar2 * 0x30 + 0x61);
          *(bool *)(param_1 + *(int *)(param_1 + 0x2670) * 0x20 + 0x254a) = iVar8 == 0;
          FUN_segment_0__804ce074(param_1 + 0x2494,*(undefined4 *)(param_1 + 0x2670),uVar7 & 0xff,0)
          ;
          *(int *)(param_1 + 0x2670) = *(int *)(param_1 + 0x2670) + 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xc);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  return *(undefined4 *)(param_1 + 0x2670);
}

// === snd_EGG_Sound_80521070 (0x80521070) ===
void snd_EGG_Sound_80521070(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r20;
  int unaff_r21;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  int local_1d0;
  undefined4 local_1cc;
  undefined auStack_10c [72];
  undefined4 local_c4;
  
  iVar3 = 0;
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x2488);
  uVar6 = local_1d4;
  uVar7 = local_1d8;
  uVar8 = local_1dc;
  do {
    iVar4 = iVar3 + iVar1 * 4;
    if (iVar4 < *(int *)(param_1 + 0x2480)) {
      FUN_segment_0__804b4ecc(auStack_10c);
      iVar2 = *(int *)(param_1 + 0x247c);
      if (iVar2 == 0) {
        uVar6 = iVar4 * 0x100 & 0xffff00U | uVar6 & 0xff | 0x4000000;
        local_1e0 = uVar6;
        local_1d4 = uVar6;
        unaff_r20 = snd_EGG_Sound_8051f2c4(&local_1e0,0);
        unaff_r21 = iVar4;
      }
      else if (iVar2 == 1) {
        uVar7 = iVar4 * 0x100 & 0xffff00U | uVar7 & 0xff | 0x1000000;
        local_1e4 = uVar7;
        local_1d8 = uVar7;
        unaff_r20 = snd_EGG_Sound_8051f2c4(&local_1e4,0);
        unaff_r21 = iVar4;
      }
      else if (iVar2 == 2) {
        uVar8 = uVar8 & 0xff | 0x2000000;
        local_1e8 = uVar8;
        local_1dc = uVar8;
        unaff_r20 = snd_EGG_Sound_8051f2c4
                              (&local_1e8,*(undefined *)(param_1 + iVar4 * 0x20 + 0x254a));
        local_c4 = FUN_segment_0__804ce0ec(param_1 + 0x2494,iVar4);
        unaff_r21 = iVar4;
      }
      iVar4 = *(int *)(param_1 + 0x2474) + iVar5;
      *(int *)(iVar4 + 0x3b4) = unaff_r21;
      if (unaff_r21 < 0) {
        *(undefined *)(iVar4 + 500) = 1;
      }
      else {
        *(undefined *)(iVar4 + 500) = 0;
        FUN_segment_0__80500a34(iVar4 + 0x174,unaff_r20,auStack_10c);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2474) + iVar5;
      *(undefined4 *)(iVar4 + 0x3b4) = 0xffffffff;
      *(undefined *)(iVar4 + 500) = 1;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x254;
  } while (iVar3 < 4);
  if (*(int *)(param_1 + 0x247c) == 0) {
    FUN_segment_0__804b4ecc(&local_1d0);
    local_1d0 = *(int *)(param_1 + 0x2488) + 1;
    local_1cc = *(undefined4 *)(param_1 + 0x2484);
    FUN_segment_0__80500a34(param_1 + 0x1f28,0x7d9,&local_1d0);
  }
  else {
    FUN_segment_0__80500a34(param_1 + 0x1f28,0,0);
  }
  return;
}

// === snd_EGG_Sound_8052122c (0x8052122c) ===
void snd_EGG_Sound_8052122c(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0x240);
  piVar4 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__805212ac;
        }
      }
      bVar2 = false;
LAB_segment_0__805212ac:
      if (bVar2) goto LAB_segment_0__805212bc;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805212bc:
  cVar1 = *(char *)(piVar4 + 0xabe);
  *(byte *)(piVar4 + 0xabe) = cVar1 + 1U;
  uVar5 = (uint)(byte)(cVar1 + 1U) | (uVar5 & 0xffff) << 8 | 0x4000000;
  snd_EGG_Sound_8054aa88(g_Ram_ptr,uVar5);
  piVar4[0xb18] = uVar5;
  *(undefined *)(piVar4 + 0xb19) =
       *(undefined *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59);
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === snd_EGG_Sound_80521334 (0x80521334) ===
void snd_EGG_Sound_80521334(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0x240);
  piVar4 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__805213b4;
        }
      }
      bVar2 = false;
LAB_segment_0__805213b4:
      if (bVar2) goto LAB_segment_0__805213c4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__805213c4:
  cVar1 = *(char *)(piVar4 + 0xabe);
  *(byte *)(piVar4 + 0xabe) = cVar1 + 1U;
  uVar5 = (uint)(byte)(cVar1 + 1U) | (uVar5 & 0xffff) << 8 | 0x1000000;
  snd_EGG_Sound_8054aa88(g_Ram_ptr,uVar5);
  piVar4[0xb18] = uVar5;
  *(undefined *)(piVar4 + 0xb19) =
       *(undefined *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59);
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === snd_EGG_Sound_8052143c (0x8052143c) ===
void snd_EGG_Sound_8052143c(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  undefined auStack_6c [76];
  
  iVar9 = *(int *)(param_2 + 0x240) * 0x20;
  iVar8 = param_1 + iVar9;
  bVar1 = *(byte *)(iVar8 + 0x2548);
  uVar11 = (uint)bVar1;
  uVar7 = 1 << (uVar11 & 0x3f);
  if ((((uVar7 & g_Ram_ptr[g_Ram_ptr[0xa47] * 0x16 + 0x12]) == 0) ||
      ((uVar7 & g_Ram_ptr[0x278]) == 0)) ||
     (*(int *)(iVar8 + 0x2534) != g_Ram_ptr[uVar11 * 0x30 + 0x5d] ||
      *(int *)(iVar8 + 0x2530) != g_Ram_ptr[uVar11 * 0x30 + 0x5c]))
  goto LAB_segment_0__8052165c;
  piVar12 = *(int **)(*g_Ram_ptr + 0x278);
  if (piVar12 != (int *)0) {
    if (piVar12 != (int *)0) {
      for (puVar4 = (undefined4 *)(**(code **)(*piVar12 + 0x60))(piVar12);
          puVar4 != (void *)0; puVar4 = (undefined4 *)*puVar4) {
        if (puVar4 == (void *)0) {
          bVar3 = true;
          goto LAB_segment_0__8052152c;
        }
      }
      bVar3 = false;
LAB_segment_0__8052152c:
      if (bVar3) goto LAB_segment_0__8052153c;
    }
    piVar12 = (int *)0;
  }
  else {
    piVar12 = (int *)0;
  }
LAB_segment_0__8052153c:
  cVar2 = *(char *)(piVar12 + 0xabe);
  *(byte *)(piVar12 + 0xabe) = cVar2 + 1U;
  uVar7 = (byte)(cVar2 + 1U) | 0x2000000;
  snd_EGG_Sound_8054ab8c(g_Ram_ptr,uVar11,uVar7);
  uVar10 = *(undefined4 *)(*g_Ram_ptr + 0x404);
  iVar8 = FUN_segment_0__804b98d0(uVar10);
  if (iVar8 != 0) {
    FUN_segment_0__804b9914(uVar10);
  }
  uVar5 = FUN_segment_0__804b94e0(uVar10,param_1 + iVar9 + 0x2530);
  FUN_segment_0__804193c4(g_Ram_ptr,auStack_6c,g_Ram_ptr + 0x272,uVar11,0);
  uVar5 = FUN_segment_0__804b9814(uVar10,uVar5);
  iVar9 = param_1 + iVar9;
  FUN_segment_0__804095ac
            (uVar5,auStack_6c,*(undefined4 *)(iVar9 + 0x2538),*(undefined2 *)(iVar9 + 0x253c),
             *(undefined2 *)(iVar9 + 0x253e),iVar9,*(undefined4 *)(iVar9 + 0x2540),
             *(undefined4 *)(iVar9 + 0x2544),*(undefined *)(iVar9 + 0x2549));
  FUN_segment_0__804b9138(uVar10);
  FUN_segment_0__804b98ec(uVar10);
  if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
    piVar6 = (int *)0;
  }
  else {
    piVar6 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
  }
  *(undefined *)((int)piVar6 + 0x9399) = 1;
  piVar12[0xb18] = uVar7;
  *(byte *)(piVar12 + 0xb19) = bVar1;
LAB_segment_0__8052165c:
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === snd_EGG_Sound_80521684 (0x80521684) ===
void snd_EGG_Sound_80521684(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2474) + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 3) &&
     (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2478) + 0x98,0),
     *(int *)(iVar1 + 0x38) == 0)) {
    iVar1 = *(int *)(param_1 + 0x2474);
    uVar2 = FUN_segment_0__804ff4a0(iVar1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,4);
    iVar1 = iVar1 + 0x174;
    iVar3 = 0;
    do {
      FUN_segment_0__804a9fd0(iVar1,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x254;
    } while (iVar3 < 4);
    iVar1 = *(int *)(param_1 + 0x2488) + 1;
    *(int *)(param_1 + 0x2488) = iVar1;
    if (*(int *)(param_1 + 0x2484) <= iVar1) {
      *(undefined4 *)(param_1 + 0x2488) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x2474);
    *(undefined4 *)(param_1 + 0x2474) = *(undefined4 *)(param_1 + 0x2478);
    *(undefined4 *)(param_1 + 0x2478) = uVar2;
    snd_EGG_Sound_80521070(param_1);
    uVar2 = FUN_segment_0__804ff4a0(*(int *)(param_1 + 0x2474) + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,2);
  }
  return;
}

// === snd_EGG_Sound_80521790 (0x80521790) ===
void snd_EGG_Sound_80521790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2474) + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 3) &&
     (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x2478) + 0x98,0),
     *(int *)(iVar1 + 0x38) == 0)) {
    iVar1 = *(int *)(param_1 + 0x2474);
    uVar2 = FUN_segment_0__804ff4a0(iVar1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,5);
    iVar1 = iVar1 + 0x174;
    iVar3 = 0;
    do {
      FUN_segment_0__804a9fd0(iVar1,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x254;
    } while (iVar3 < 4);
    iVar1 = *(int *)(param_1 + 0x2488) + -1;
    *(int *)(param_1 + 0x2488) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x2488) = *(int *)(param_1 + 0x2484) + -1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x2474);
    *(undefined4 *)(param_1 + 0x2474) = *(undefined4 *)(param_1 + 0x2478);
    *(undefined4 *)(param_1 + 0x2478) = uVar2;
    snd_EGG_Sound_80521070(param_1);
    uVar2 = FUN_segment_0__804ff4a0(*(int *)(param_1 + 0x2474) + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,1);
  }
  return;
}

// === snd_EGG_Sound_80521898 (0x80521898) ===
void snd_EGG_Sound_80521898(int param_1,undefined4 param_2)

{
  double dVar1;
  
  *(undefined *)(param_1 + 0x248c) = 1;
  dVar1 = (double)FUN_segment_0__804aa384(param_2);
  *(float *)(param_1 + 0x2490) = (float)dVar1;
  return;
}

// === snd_EGG_Sound_805218ec (0x805218ec) ===
undefined4 * snd_EGG_Sound_805218ec(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__804d7558(param_1 + 0x15);
  FUN_segment_0__804aee0c(param_1 + 0x72);
  FUN_segment_0__804aed04(param_1 + 0xd1);
  return param_1;
}

// === EGG_Sound_validate_80521948 (0x80521948) ===
int EGG_Sound_validate_80521948(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804aed24(param_1 + 0x344,0xffffffff);
    FUN_segment_0__804aee50(param_1 + 0x1c8,0xffffffff);
    FUN_segment_0__804d7594(param_1 + 0x54,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805219d4 (0x805219d4) ===
void snd_EGG_Sound_805219d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 == 0x5b) goto LAB_segment_0__80521a48;
  if (iVar1 < 0x5b) {
    if (iVar1 == 0x56) {
LAB_segment_0__80521a54:
      if (*(char *)((int)g_Ram_uint + g_Ram_uint[0xa47] * 0x58 + 0x59) == 0) {
        *(undefined4 *)(param_1 + 0x350) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x350) = 3;
      }
    }
    else if (iVar1 < 0x56) {
      if (0x54 < iVar1) goto LAB_segment_0__80521a48;
    }
    else if (iVar1 < 0x58) goto LAB_segment_0__80521a48;
  }
  else if (iVar1 < 0x83) {
    if (iVar1 == 0x5d) {
LAB_segment_0__80521a48:
      *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
    }
    else if (iVar1 < 0x5d) goto LAB_segment_0__80521a54;
  }
  else if (iVar1 < 0x85) goto LAB_segment_0__80521a48;
  iVar1 = *(int *)*g_Ram_uint;
  if ((iVar1 < 0x55) || (0x57 < iVar1)) {
    if ((0x5a < iVar1) && (iVar1 < 0x5e)) {
      *(undefined *)(param_1 + 0x358) = 2;
      goto LAB_segment_0__80521adc;
    }
    if ((iVar1 < 0x83) || (0x84 < iVar1)) goto LAB_segment_0__80521adc;
  }
  *(undefined *)(param_1 + 0x358) = 1;
LAB_segment_0__80521adc:
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))((int *)(param_1 + 0x44),0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,2);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804d75ec(param_1 + 0x54,0x3ab);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x1c8,0);
  FUN_segment_0__804aeea8(param_1 + 0x1c8,param_1 + 0x344);
  return;
}

// === snd_EGG_Sound_80521b68 (0x80521b68) ===
void snd_EGG_Sound_80521b68(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0x360) = 0xffffffff;
  piVar4 = *(int **)(*g_Ram_ptr + 0x27c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80521bf0;
        }
      }
      bVar1 = false;
LAB_segment_0__80521bf0:
      if (bVar1) goto LAB_segment_0__80521c00;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80521c00:
  iVar2 = *(int *)(param_1 + 0x350);
  if ((iVar2 == 1) || (iVar2 == 3)) {
    piVar4[0x36d] = 1;
  }
  else if ((iVar2 == 0) || (iVar2 == 2)) {
    piVar4[0x36d] = 0;
  }
  iVar2 = *(int *)(param_1 + 0x350);
  if (iVar2 == 1) {
    EGG_Sound_assertFail_8054631c
              (g_Ram_ptr,*(undefined4 *)(param_1 + 0x354),*(undefined *)(param_1 + 0x358));
    *(undefined4 *)(param_1 + 0x35c) = 1;
  }
  else if (iVar2 == 0) {
    EGG_Sound_assertFail_805463f0(g_Ram_ptr,*(undefined *)(param_1 + 0x358));
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x35c) = 2;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x35c) = 2;
  }
  FUN_segment_0__804aed64((double)(float)g_Ram_ptr,param_1 + 0x344);
  return;
}

// === snd_EGG_Sound_80521cf0 (0x80521cf0) ===
void snd_EGG_Sound_80521cf0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x350);
  if (iVar1 - 2U < 2) {
    FUN_segment_0__804d76b8(param_1 + 0x54,0x10cd,0);
  }
  else if (iVar1 == 1) {
    FUN_segment_0__804d76b8(param_1 + 0x54,0x1006,0);
  }
  else if (iVar1 == 0) {
    FUN_segment_0__804d76b8(param_1 + 0x54,0x100c,0);
  }
  FUN_segment_0__804d1c3c(param_1);
  return;
}

// === EGG_Sound_assertFail_80521d80 (0x80521d80) ===
void EGG_Sound_assertFail_80521d80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80522284 (0x80522284) ===
void snd_EGG_Sound_80522284(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[0xd7];
  if (iVar3 - 7U < 3) {
    iVar3 = param_1[0xd4];
    if ((iVar3 == 0) || (iVar3 == 2)) {
      param_1[0xd8] = 0x8d;
    }
    else if ((iVar3 == 1) || (iVar3 == 3)) {
      param_1[0xd8] = 0x96;
    }
    param_1[0xd7] = 10;
    return;
  }
  if (iVar3 != 3) {
    if (iVar3 != 6) {
      return;
    }
    iVar3 = param_1[0xd4];
    if ((iVar3 == 0) || (iVar3 == 2)) {
      param_1[0xd8] = 0x8d;
    }
    else if ((iVar3 == 1) || (iVar3 == 3)) {
      param_1[0xd8] = 0x96;
    }
    snd_EGG_Sound_805464b0(g_Ram_ptr);
    param_1[0xd7] = 10;
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x27c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80522328;
        }
      }
      bVar1 = false;
LAB_segment_0__80522328:
      if (bVar1) goto LAB_segment_0__80522338;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80522338:
  iVar3 = piVar4[0x36f];
  if ((0 < iVar3) && (iVar3 < 3)) {
    iVar3 = param_1[0xd4];
    if ((iVar3 == 0) || (iVar3 == 2)) {
      param_1[0xd8] = 0x8d;
    }
    else if ((iVar3 == 1) || (iVar3 == 3)) {
      param_1[0xd8] = 0x96;
    }
    snd_EGG_Sound_805464b0(g_Ram_ptr);
    param_1[0xd7] = 10;
    return;
  }
  if (iVar3 == 0) {
    EGG_Sound_assertFail_8052264c(param_1);
    param_1[0xd7] = 4;
    return;
  }
  if (iVar3 != 3) {
    if (iVar3 != 4) {
      return;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x13c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80522514;
          }
        }
        bVar1 = false;
LAB_segment_0__80522514:
        if (bVar1) goto LAB_segment_0__80522524;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80522524:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0xfb2,0);
    piVar4[0x62] = 0;
    (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
    param_1[0xd7] = 8;
    snd_EGG_Sound_805464b0(g_Ram_ptr);
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80522434;
        }
      }
      bVar1 = false;
LAB_segment_0__80522434:
      if (bVar1) goto LAB_segment_0__80522444;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80522444:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0xfb5,0);
  piVar4[0x62] = 0;
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
  param_1[0xd7] = 7;
  snd_EGG_Sound_805464b0(g_Ram_ptr);
  return;
}

// === snd_EGG_Sound_80522644 (0x80522644) ===
void snd_EGG_Sound_80522644(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x350) = param_2;
  return;
}

// === EGG_Sound_assertFail_8052264c (0x8052264c) ===
void EGG_Sound_assertFail_8052264c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80522e4c (0x80522e4c) ===
void EGG_Sound_validate_80522e4c(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80522e7c (0x80522e7c) ===
void EGG_Sound_validate_80522e7c(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80522eac (0x80522eac) ===
void EGG_Sound_validate_80522eac(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80522edc (0x80522edc) ===
void EGG_Sound_validate_80522edc(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80522f0c (0x80522f0c) ===
void EGG_Sound_validate_80522f0c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80522f3c (0x80522f3c) ===
void EGG_Sound_validate_80522f3c(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_80522fa0 (0x80522fa0) ===
undefined4 * snd_EGG_Sound_80522fa0(undefined4 *param_1)

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

// === snd_EGG_Sound_805401ac (0x805401ac) ===
void snd_EGG_Sound_805401ac(int param_1)

{
  if (*(int *)(param_1 + 0x68) - 7U < 2) {
    FUN_segment_0__804f8c44(iRam00000000,0x41,0);
    FUN_segment_0__804f8cd0(iRam00000000,0,0xff);
  }
  else if (*(int *)(param_1 + 0x68) == 6) {
    *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x3bc) =
         *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x3c8);
    *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x3c0) = 0;
    FUN_segment_0__804f8c44(iRam00000000,0x7d,0);
    FUN_segment_0__804f8cd0(iRam00000000,0,0xff);
  }
  return;
}

// === EGG_Sound_validate_80540260 (0x80540260) ===
void EGG_Sound_validate_80540260(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_805402a4 (0x805402a4) ===
undefined4 * snd_EGG_Sound_805402a4(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80500418(param_1 + 0x15);
  return param_1;
}

// === EGG_Sound_validate_805402f0 (0x805402f0) ===
int EGG_Sound_validate_805402f0(int param_1,int param_2)

{
  if (param_1 != 0) {
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

// === snd_EGG_Sound_80540364 (0x80540364) ===
void snd_EGG_Sound_80540364(int param_1)

{
  undefined auStack_38 [52];
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x54);
  FUN_segment_0__804ae36c(auStack_38,0,5,10,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_80540408 (0x80540408) ===
void snd_EGG_Sound_80540408(int param_1)

{
  if (((*(int *)(param_1 + 8) == 4) && (*(int *)(iRam00000000 + 0x30) == 0)) &&
     (0x5a < *(int *)(param_1 + 0x20))) {
    FUN_segment_0__804f8c44(iRam00000000,*(undefined4 *)(iRam00000000 + 4),0);
    FUN_segment_0__804f8cd0(iRam00000000,0,0xff);
  }
  return;
}

// === snd_EGG_Sound_80540478 (0x80540478) ===
undefined4 * snd_EGG_Sound_80540478(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80500418(param_1 + 0x15);
  return param_1;
}

// === EGG_Sound_validate_805404c4 (0x805404c4) ===
int EGG_Sound_validate_805404c4(int param_1,int param_2)

{
  if (param_1 != 0) {
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

// === snd_EGG_Sound_80540538 (0x80540538) ===
void snd_EGG_Sound_80540538(int param_1)

{
  undefined auStack_38 [52];
  
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,1);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x54,0);
  FUN_segment_0__804ae324(auStack_38,param_1 + 0x54);
  FUN_segment_0__804ae36c(auStack_38,0xf,0x15,0x1b,0);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_805405e0 (0x805405e0) ===
void snd_EGG_Sound_805405e0(int param_1)

{
  *(undefined *)(param_1 + 0x1c8) = 0;
  FUN_segment_0__804dfd2c(iRam00000000 + 0x34);
  FUN_segment_0__804df750(iRam00000000 + 0x34,0);
  return;
}

// === snd_EGG_Sound_8054062c (0x8054062c) ===
void snd_EGG_Sound_8054062c(int param_1)

{
  undefined uVar1;
  
  if (*(char *)(param_1 + 0x1c8) == 0) {
    uVar1 = FUN_segment_0__804df430(g_Ram_uint + 0xd,0);
    *(undefined *)(param_1 + 0x1c8) = uVar1;
  }
  if ((g_Ram_uint[0xc] == 0) && (*(char *)(param_1 + 0x1c8) != 0)) {
    if (*(int *)*g_Ram_uint == 0x17) {
      FUN_segment_0__804f8c44(g_Ram_uint,0x10,0);
    }
    else if (*(int *)*g_Ram_uint == 0x18) {
      FUN_segment_0__804f8c44(g_Ram_uint,0x13,0);
    }
    FUN_segment_0__804f8cd0(g_Ram_uint,0,0xff);
  }
  return;
}

// === snd_EGG_Sound_80540728 (0x80540728) ===
undefined4 snd_EGG_Sound_80540728(undefined4 param_1)

{
  FUN_segment_0__804cc2f0();
  return param_1;
}

// === EGG_Sound_validate_80540758 (0x80540758) ===
int EGG_Sound_validate_80540758(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__804cc30c(param_1,0xffffffff), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_805407f4 (0x805407f4) ===
void snd_EGG_Sound_805407f4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804cc444();
  FUN_segment_0__804cc4ac(param_1,uVar1);
  return;
}

// === snd_EGG_Sound_80540838 (0x80540838) ===
undefined4 * snd_EGG_Sound_80540838(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_80540874 (0x80540874) ===
int EGG_Sound_validate_80540874(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === snd_EGG_Sound_805408cc (0x805408cc) ===
void snd_EGG_Sound_805408cc(undefined4 param_1)

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
  FUN_segment_0__804ae36c(auStack_38,0x19,0x24,0x3d,&local_58);
  FUN_segment_0__804ae32c(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_8054096c (0x8054096c) ===
void snd_EGG_Sound_8054096c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_805409a4 (0x805409a4) ===
void snd_EGG_Sound_805409a4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  return;
}

// === snd_EGG_Sound_805409dc (0x805409dc) ===
void snd_EGG_Sound_805409dc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,3);
  return;
}

// === snd_EGG_Sound_80540a24 (0x80540a24) ===
undefined4 * snd_EGG_Sound_80540a24(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_80540a60 (0x80540a60) ===
int EGG_Sound_validate_80540a60(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Sound_validate_80540ab8 (0x80540ab8) ===
void EGG_Sound_validate_80540ab8(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined auStack_c8 [16];
  undefined auStack_b8 [172];
  
  FUN_segment_0__804ae324(auStack_b8,param_1);
  bVar1 = false;
  if ((param_3 != 0) && (param_2 < 6)) {
    bVar1 = true;
  }
  uVar2 = 0x6b;
  if (bVar1) {
    uVar2 = 0x69;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_c8,0xf,0x61,param_2,uVar2);
}

// === snd_EGG_Sound_80540c30 (0x80540c30) ===
void snd_EGG_Sound_80540c30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,0);
  return;
}

// === EGG_Sound_assertFail_80540c68 (0x80540c68) ===
void EGG_Sound_assertFail_80540c68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80541010 (0x80541010) ===
void EGG_Sound_validate_80541010(undefined4 *param_1)

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
  FUN_segment_0__804c880c(param_1 + 0x16);
  FUN_segment_0__80500418(param_1 + 0x67);
  FUN_segment_0__80500418(param_1 + 0xc4);
  param_1[0xc4] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x121,0,0,0x174,0xc);
}

// === EGG_Sound_validate_805410d4 (0x805410d4) ===
undefined4 EGG_Sound_validate_805410d4(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x484,0,0x174,0xc);
  }
  return 0;
}

// === EGG_Sound_assertFail_80541170 (0x80541170) ===
void EGG_Sound_assertFail_80541170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805414a4 (0x805414a4) ===
void snd_EGG_Sound_805414a4(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  *(undefined *)(param_1 + 0x15f8) = 0;
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 < 0x74) {
    if (0x71 < iVar1) {
LAB_segment_0__80541528:
      uVar2 = 1;
      if ((*(int *)(g_Ram_uint[0x26] + 0x68) < 2) && (*(int *)(g_Ram_uint[0x26] + 0x6c) < 2))
      {
        uVar2 = 0;
      }
      *(undefined *)(param_1 + 0x15f7) = uVar2;
      goto LAB_segment_0__80541558;
    }
    if (iVar1 < 0x70) goto LAB_segment_0__80541558;
  }
  else {
    if (0x77 < iVar1) goto LAB_segment_0__80541558;
    if (0x75 < iVar1) goto LAB_segment_0__80541528;
  }
  *(char *)(param_1 + 0x15f7) =
       (char)((int)*(uint *)(g_Ram_uint[0x26] + 0x2d0) >> 0x1f) +
       (2 < *(uint *)(g_Ram_uint[0x26] + 0x2d0));
LAB_segment_0__80541558:
  if (*(char *)(param_1 + 0x15f7) != 0) {
    snd_EGG_Sound_805416c0(param_1);
    snd_EGG_Sound_805417e8(param_1);
    snd_EGG_Sound_80541a28(param_1);
  }
  return;
}

// === snd_EGG_Sound_805415a4 (0x805415a4) ===
void snd_EGG_Sound_805415a4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x15f7) == 0) {
    FUN_segment_0__804d1c48((double)g_Ram_float,param_1,0);
  }
  else {
    uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x3a8,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar1,1);
  }
  return;
}

// === snd_EGG_Sound_805416c0 (0x805416c0) ===
void snd_EGG_Sound_805416c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_d8 [36];
  undefined4 local_b4;
  
  iVar2 = 0;
  FUN_segment_0__804b4ecc(auStack_d8);
  uVar1 = 0;
  if (*(int *)(iRam00000000 + 0xb70) == 7) {
    uVar1 = 300;
    iVar2 = (*(uint *)(iRam00000000 + 0xb90) >> 1 & 1) + 0x599;
    if (*(int *)(iRam00000000 + 0xb6c) == 1) {
      local_b4 = 0x58a;
    }
    else if (*(int *)(iRam00000000 + 0xb6c) == 2) {
      if ((*(uint *)(iRam00000000 + 0xb90) & 1) == 0) {
        local_b4 = 0x58b;
      }
      else {
        local_b4 = 0x58c;
      }
    }
  }
  else if (*(int *)(iRam00000000 + 0xb70) == 10) {
    if (*(int *)(iRam00000000 + 0xb78) == 0) {
      iVar2 = 0x587;
      uVar1 = 0x139;
    }
    else if (*(int *)(iRam00000000 + 0xb78) == 1) {
      iVar2 = 0x588;
      uVar1 = 0x149;
    }
  }
  FUN_segment_0__80500d70(param_1 + 0x19c,0x156,uVar1);
  FUN_segment_0__8050093c(param_1 + 0x19c,0x15f,iVar2,auStack_d8);
  return;
}

// === snd_EGG_Sound_805417e8 (0x805417e8) ===
void snd_EGG_Sound_805417e8(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auStack_e8 [36];
  undefined4 local_c4;
  
  if (*(char *)(param_1 + 0x15f4) == 0) {
    bVar4 = 0xc;
    for (bVar5 = 0; bVar5 < *(byte *)(param_1 + 0x15f5); bVar5 = bVar5 + 1) {
      uVar3 = snd_EGG_Sound_80549970(iRam00000000,bVar5);
      bVar1 = *(byte *)(iRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xcf8);
      if (bVar1 < bVar4) {
        bVar4 = bVar1;
      }
    }
    uVar7 = 0xee;
    if (bVar4 == 1) {
      uVar8 = 0x4c3;
      uVar7 = 0xef;
    }
    else if (bVar4 == 2) {
      uVar8 = 0x4c4;
    }
    else if (bVar4 == 3) {
      uVar8 = 0x4c5;
    }
    else {
      uVar8 = 0x4c6;
      uVar7 = 0xf0;
    }
    FUN_segment_0__80500a34(param_1 + 0x310,uVar8,0);
    FUN_segment_0__80600ca4(uVar7,0,0);
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    iVar6 = *(int *)(*(int *)(iRam00000000 + 0x98) + 0x70);
    if (iVar6 == 2) {
      uVar7 = 0x4c2;
      uVar8 = 0;
      FUN_segment_0__80600ca4(0xf0,0,0);
    }
    else {
      bVar2 = false;
      for (bVar4 = 0; bVar4 < *(byte *)(param_1 + 0x15f5); bVar4 = bVar4 + 1) {
        uVar3 = snd_EGG_Sound_80549970(iRam00000000,bVar4);
        if (iVar6 == *(int *)(iRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xf4)) {
          bVar2 = true;
          break;
        }
      }
      if (bVar2) {
        if (iVar6 == 0) {
          uVar8 = 0x4c0;
          uVar7 = 0x534;
        }
        else if (iVar6 == 1) {
          uVar8 = 0x4c1;
          uVar7 = 0x535;
        }
        FUN_segment_0__80600ca4(0xef,0,0);
      }
      else {
        if (iVar6 == 0) {
          uVar8 = 0x4ca;
          uVar7 = 0x535;
        }
        else if (iVar6 == 1) {
          uVar8 = 0x4c9;
          uVar7 = 0x534;
        }
        FUN_segment_0__80600ca4(0xf0,0,0);
      }
    }
    FUN_segment_0__804b4ecc(auStack_e8);
    local_c4 = uVar8;
    FUN_segment_0__8050093c(param_1 + 0x310,0x168,uVar7,auStack_e8);
    FUN_segment_0__8050093c(param_1 + 0x310,0x170,uVar8,0);
  }
  return;
}

// === snd_EGG_Sound_80541a28 (0x80541a28) ===
void snd_EGG_Sound_80541a28(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  uVar1 = (*(byte *)(param_1 + 0x15f5) | 0xfffffffd) - (*(byte *)(param_1 + 0x15f5) - 2 >> 1) >>
          0x1f;
  if (*(char *)(param_1 + 0x15f4) == 0) {
    for (bVar4 = 0; bVar3 = *(byte *)(param_1 + 0x15f6), bVar4 < bVar3; bVar4 = bVar4 + 1) {
      EGG_Sound_assertFail_80540c68
                (param_1 + (*(byte *)(iRam00000000 + (uint)bVar4 * 0xf0 + 0xcf8) - 1) * 0x174 +
                 0x484,(uint)bVar4,*(undefined *)(param_1 + 0x15f4),uVar1);
    }
    for (; bVar3 < 0xc; bVar3 = bVar3 + 1) {
      EGG_Sound_assertFail_80540c68
                (param_1 + (uint)bVar3 * 0x174 + 0x484,(uint)bVar3,*(undefined *)(param_1 + 0x15f4),
                 uVar1);
    }
  }
  else {
    uVar5 = 0;
    do {
      EGG_Sound_assertFail_80540c68
                (param_1 + (uVar5 & 0xff) * 0x174 + 0x484,0xb,*(undefined *)(param_1 + 0x15f4),uVar1
                );
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
    for (bVar4 = 0; bVar4 < *(byte *)(param_1 + 0x15f6); bVar4 = bVar4 + 1) {
      iVar2 = iRam00000000 + (uint)bVar4 * 0xf0;
      uVar5 = *(byte *)(iVar2 + 0xcf8) - 1 & 0xff;
      if (*(int *)(iVar2 + 0xf4) == 1) {
        uVar5 = uVar5 + 6 & 0xff;
      }
      EGG_Sound_assertFail_80540c68
                (param_1 + uVar5 * 0x174 + 0x484,bVar4,*(undefined *)(param_1 + 0x15f4),uVar1);
    }
  }
  return;
}

// === EGG_Sound_validate_80541bc4 (0x80541bc4) ===
void EGG_Sound_validate_80541bc4(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_80541c1c (0x80541c1c) ===
void EGG_Sound_validate_80541c1c(undefined4 *param_1)

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
  FUN_segment_0__80500418(param_1 + 0x9f);
  param_1[0x9f] = 0;
  FUN_segment_0__80500418(param_1 + 0xfc);
  param_1[0xfc] = 0;
  FUN_segment_0__804a97a4(param_1 + 0x159);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1ee,0,0,0x174,0xc);
}

// === EGG_Sound_validate_80541d08 (0x80541d08) ===
undefined4 EGG_Sound_validate_80541d08(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x7b8,0,0x174,0xc);
  }
  return 0;
}

// === EGG_Sound_assertFail_80541db4 (0x80541db4) ===
void EGG_Sound_assertFail_80541db4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80542074 (0x80542074) ===
void snd_EGG_Sound_80542074(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int unaff_r25;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)(*g_Ram_ptr + 0x248);
  if (piVar9 != (int *)0) {
    if (piVar9 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar9 + 0x60))(piVar9); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__805420ec;
        }
      }
      bVar1 = false;
LAB_segment_0__805420ec:
      if (bVar1) goto LAB_segment_0__805420fc;
    }
    piVar9 = (int *)0;
  }
  else {
    piVar9 = (int *)0;
  }
LAB_segment_0__805420fc:
  if (0xf < *(int *)*g_Ram_ptr - 0x58U) {
    iVar3 = snd_EGG_Sound_80511880(piVar9);
    if (iVar3 == 0) {
      iVar8 = 0;
      piVar6 = piVar9;
      iVar3 = param_1;
      do {
        bVar1 = false;
        if ((-1 < iVar8) && (iVar8 < piVar9[0xa1])) {
          bVar1 = true;
        }
        if (bVar1) {
          EGG_Sound_assertFail_80542330
                    (param_1,iVar8,iVar8,2,0,
                     *(char *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59) ==
                     *(char *)(piVar6 + 0x7d));
        }
        else {
          *(undefined *)(iVar3 + 0x838) = 1;
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 0x174;
        piVar6 = piVar6 + 3;
      } while (iVar8 < 0xc);
    }
    else {
      iVar3 = 1;
      *(undefined *)(param_1 + 0x838) = 1;
      iVar8 = 0;
      *(undefined *)(param_1 + 0x9ac) = 1;
      iVar7 = 0;
      *(undefined *)(param_1 + 0xb20) = 1;
      *(undefined *)(param_1 + 0xc94) = 1;
      *(undefined *)(param_1 + 0xe08) = 1;
      *(undefined *)(param_1 + 0xf7c) = 1;
      *(undefined *)(param_1 + 0x10f0) = 1;
      *(undefined *)(param_1 + 0x1264) = 1;
      *(undefined *)(param_1 + 0x13d8) = 1;
      *(undefined *)(param_1 + 0x154c) = 1;
      *(undefined *)(param_1 + 0x16c0) = 1;
      *(undefined *)(param_1 + 0x1834) = 1;
      piVar6 = piVar9;
      do {
        bVar1 = false;
        if ((-1 < iVar7) && (iVar7 < piVar9[0xa1])) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar5 = piVar6[0x7e];
          if (iVar5 == 0) {
            unaff_r25 = iVar8;
            iVar8 = iVar8 + 2;
          }
          else if (iVar5 == 1) {
            unaff_r25 = iVar3;
            iVar3 = iVar3 + 2;
          }
          EGG_Sound_assertFail_80542330
                    (param_1,unaff_r25,iVar7,iVar5,0,
                     *(char *)((int)g_Ram_ptr + g_Ram_ptr[0xa47] * 0x58 + 0x59) ==
                     *(char *)(piVar6 + 0x7d));
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar7 < 0xc);
    }
    uVar4 = snd_EGG_Sound_8051196c(piVar9);
    FUN_segment_0__80735a00(param_1 + 0x3f0,uVar4,0);
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x80542128 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(int *)*g_Ram_ptr - 0x58U) * 4))();
  return;
}

// === EGG_Sound_assertFail_80542330 (0x80542330) ===
void EGG_Sound_assertFail_80542330(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80542694 (0x80542694) ===
void snd_EGG_Sound_80542694(undefined4 param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === EGG_Sound_validate_805426dc (0x805426dc) ===
void EGG_Sound_validate_805426dc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === snd_EGG_Sound_8054272c (0x8054272c) ===
undefined4 * snd_EGG_Sound_8054272c(undefined4 *param_1)

{
  FUN_segment_0__80500418();
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_80542768 (0x80542768) ===
int EGG_Sound_validate_80542768(int param_1,int param_2)

{
  if ((param_1 != 0) && (FUN_segment_0__80500540(param_1,0), 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1);
  }
  return param_1;
}

// === EGG_Sound_validate_805427c0 (0x805427c0) ===
void EGG_Sound_validate_805427c0(int param_1,int param_2,undefined4 param_3)

{
  undefined auStack_58 [80];
  
  *(int *)(param_1 + 0x174) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,0xf,0xc,param_2 + 1,param_3);
}

// === snd_EGG_Sound_80542874 (0x80542874) ===
void snd_EGG_Sound_80542874(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__804ff4a0(param_1 + 0x98,0);
  FUN_segment_0__804ff7a0((double)g_Ram_float,uVar1,0);
  return;
}

// === snd_EGG_Sound_805428ac (0x805428ac) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805428ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805429a0 (0x805429a0) ===
void EGG_Sound_validate_805429a0(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x11,0,0,0x178,4);
}

// === EGG_Sound_validate_80542a0c (0x80542a0c) ===
undefined4 EGG_Sound_validate_80542a0c(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x798,0xffffffff);
    FUN_segment_0__80500540(param_1 + 0x624,0xffffffff);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x44,0,0x178,4);
  }
  return 0;
}

// === EGG_Sound_validate_80542a98 (0x80542a98) ===
/* WARNING: Removing unreachable block (ram,0x80542d8c) */
/* WARNING: Removing unreachable block (ram,0x80542db0) */
/* WARNING: Removing unreachable block (ram,0x80542d68) */

void EGG_Sound_validate_80542a98(int param_1)

{
  int iVar1;
  undefined4 unaff_r25;
  int iVar2;
  undefined auStack_98 [80];
  undefined auStack_48 [40];
  
  (**(code **)(*(int *)(param_1 + 0x798) + 0x10))(param_1 + 0x798,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x798);
  iVar2 = 1;
  iVar1 = *(int *)*g_Ram_uint;
  if (iVar1 == 0x2b) {
LAB_segment_0__80542bb8:
    iVar2 = 4;
    goto LAB_segment_0__80542bfc;
  }
  if (iVar1 < 0x2b) {
    if (iVar1 != 0x25) {
      if (iVar1 < 0x25) {
        if (iVar1 == 0x22) {
LAB_segment_0__80542bb0:
          iVar2 = 3;
          goto LAB_segment_0__80542bfc;
        }
        if (iVar1 < 0x22) {
          if (0x20 < iVar1) goto LAB_segment_0__80542ba8;
          if (iVar1 < 0x1e) goto LAB_segment_0__80542bfc;
        }
        else if (iVar1 < 0x24) goto LAB_segment_0__80542bb8;
      }
      else if (iVar1 != 0x28) {
        if (iVar1 < 0x28) {
          if (0x26 < iVar1) goto LAB_segment_0__80542bb8;
        }
        else if (iVar1 < 0x2a) goto LAB_segment_0__80542ba8;
        goto LAB_segment_0__80542bb0;
      }
LAB_segment_0__80542ba0:
      iVar2 = 1;
      goto LAB_segment_0__80542bfc;
    }
  }
  else if (iVar1 != 0x69) {
    if (iVar1 < 0x69) {
      if (iVar1 == 0x44) {
        iVar1 = g_Ram_uint[0x2dd];
        if (iVar1 == 2) {
          iVar2 = 1;
        }
        else if (iVar1 == 3) {
          iVar2 = 2;
        }
        else if (iVar1 == 4) {
          iVar2 = 4;
        }
        goto LAB_segment_0__80542bfc;
      }
      if (iVar1 < 0x44) {
        if (0x34 < iVar1) goto LAB_segment_0__80542bfc;
      }
      else if (iVar1 < 0x68) goto LAB_segment_0__80542bfc;
      goto LAB_segment_0__80542ba0;
    }
    if (iVar1 < 0x74) {
      if (iVar1 != 0x6d) goto LAB_segment_0__80542ba0;
    }
    else if (0x77 < iVar1) goto LAB_segment_0__80542bfc;
  }
LAB_segment_0__80542ba8:
  iVar2 = 2;
LAB_segment_0__80542bfc:
  if (iVar2 - 3U < 2) {
    unaff_r25 = 4;
  }
  else if (iVar2 == 1) {
    unaff_r25 = 1;
  }
  else if (iVar2 == 2) {
    unaff_r25 = 2;
  }
  FUN_segment_0__804d1c1c(param_1,iVar2 + 1);
  if (iVar2 != 0) {
    FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_98,0xf,0x29,1,unaff_r25);
  }
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x624,0);
  FUN_segment_0__804ae324(auStack_48,param_1 + 0x624);
  FUN_segment_0__804ae36c(auStack_48,0x46,0x51,0x60,0);
  FUN_segment_0__804ae32c(auStack_48,0xffffffff);
  return;
}

// === EGG_Sound_assertFail_80542e20 (0x80542e20) ===
void EGG_Sound_assertFail_80542e20(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x1c8);
  }
  return;
}

// === EGG_Sound_assertFail_80542e9c (0x80542e9c) ===
void EGG_Sound_assertFail_80542e9c(void)

{
  int iVar1;
  
  iVar1 = iRam00000000;
  if (iRam00000000 != 0) {
    if (iRam00000000 != 0) {
      EGG_Sound_assertFail_8054b084();
      FUN_segment_0__80551090();
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iVar1);
    }
    iRam00000000 = 0;
  }
  return;
}

// === EGG_Sound_validate_80542ef0 (0x80542ef0) ===
void EGG_Sound_validate_80542ef0(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
    bVar1 = true;
  }
  if (bVar1) {
    EGG_Sound_validate_80546b58(iRam00000000);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x14,0,0x80);
  }
  return;
}

// === EGG_Sound_validate_80543340 (0x80543340) ===
void EGG_Sound_validate_80543340(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(iRam00000000 + 0xb70) == 5) &&
     (iVar1 = EGG_Sound_assertFail_805469b4(iRam00000000), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  if (*param_1 != 0) {
    if (*(int *)(iRam00000000 + 0xb74) == 0) {
      EGG_Sound_assertFail_80543d68(param_1);
    }
    else if (*(int *)(iRam00000000 + 0xb74) == 6) {
      snd_EGG_Sound_80544d7c(param_1);
      snd_EGG_Sound_80545364(param_1);
      if (*(char *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x8b) == 0) {
        snd_EGG_Sound_80546508();
      }
      snd_EGG_Sound_8054b1b4(iRam00000000);
      FUN_segment_0__80551310(iRam00000000);
      for (uVar3 = 0; uVar3 < *(byte *)(iRam00000000 + 0x24); uVar3 = uVar3 + 1) {
        if (((int)uVar3 < 0) || (0xb < (int)uVar3)) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = (uint)*(byte *)(iRam00000000 + uVar3 + 0x2920);
        }
        if (((((1 << (uVar3 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) != 0) ||
             (iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58,
             uVar2 == *(byte *)(iVar1 + 0x59))) ||
            (uVar2 = 1 << (uVar2 & 0x3f), (uVar2 & *(uint *)(iVar1 + 0x48)) == 0)) ||
           ((*(uint *)(param_1 + 0xc) & uVar2) != 0)) {
          FUN_segment_0__804232dc(iRam00000000,uVar3 & 0xff);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === EGG_Sound_validate_80543578 (0x80543578) ===
void EGG_Sound_validate_80543578(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar3 == 0) {
    return;
  }
  iVar5 = -1;
  iVar3 = 0;
  cVar1 = *(char *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59);
  iVar6 = 3;
  do {
    if ((iVar3 < 0) || (0xb < iVar3)) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)(iRam00000000 + iVar3 + 0x2920);
    }
    if (cVar1 == cVar2) {
      iVar5 = iVar5 + 1;
      if (iVar3 == param_4) break;
    }
    iVar4 = iVar3 + 1;
    if ((iVar4 < 0) || (0xb < iVar4)) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)(iRam00000000 + iVar4 + 0x2920);
    }
    if (cVar1 == cVar2) {
      iVar5 = iVar5 + 1;
      if (iVar4 == param_4) break;
    }
    iVar4 = iVar3 + 2;
    if ((iVar4 < 0) || (0xb < iVar4)) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)(iRam00000000 + iVar4 + 0x2920);
    }
    if (cVar1 == cVar2) {
      iVar5 = iVar5 + 1;
      if (iVar4 == param_4) break;
    }
    iVar4 = iVar3 + 3;
    if ((iVar4 < 0) || (0xb < iVar4)) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)(iRam00000000 + iVar4 + 0x2920);
    }
    if ((cVar1 == cVar2) && (iVar5 = iVar5 + 1, iVar4 == param_4)) break;
    iVar3 = iVar3 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + iVar5 * param_3 + 0x14,param_2,param_3);
}

// === snd_EGG_Sound_80543820 (0x80543820) ===
void snd_EGG_Sound_80543820(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((1 << (uVar2 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) &&
       ((uVar2 & 0xff) != (uint)*(byte *)(iVar1 + 0x59))) {
      iVar1 = iRam00000000 + (uVar2 & 0xff) * 4;
      EGG_Sound_validate_80549f64
                (*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0) + 8),
                 param_2,0x28);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return;
}

// === snd_EGG_Sound_805438d0 (0x805438d0) ===
undefined4 snd_EGG_Sound_805438d0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (uint)*(byte *)(iRam00000000 + param_2 + 0x2920);
  }
  return **(undefined4 **)
           (*(int *)(iRam00000000 + *(int *)(iRam00000000 + uVar1 * 0x20 + 0x27a4) * 0x30 +
                     uVar1 * 4 + 0x150) + 8);
}

// === snd_EGG_Sound_8054392c (0x8054392c) ===
void snd_EGG_Sound_8054392c(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = iRam00000000 + (uVar2 & 0xff) * 4;
    EGG_Sound_validate_80549f24
              (*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0) + 0x10));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return;
}

// === snd_EGG_Sound_80543990 (0x80543990) ===
void snd_EGG_Sound_80543990(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = iRam00000000 + (uVar2 & 0xff) * 4;
    EGG_Sound_validate_80549f24
              (*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x276c) * 0x30 + iVar1 + 0xf0) + 8));
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return;
}

// === snd_EGG_Sound_80543a0c (0x80543a0c) ===
undefined * snd_EGG_Sound_80543a0c(undefined *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 3000;
  EGG_Sound_assertFail_8054af6c();
  FUN_segment_0__80550e14();
  return param_1;
}

// === EGG_Sound_validate_80543a64 (0x80543a64) ===
int EGG_Sound_validate_80543a64(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_80543aa4 (0x80543aa4) ===
int EGG_Sound_validate_80543aa4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_80543ae4 (0x80543ae4) ===
int EGG_Sound_validate_80543ae4(int param_1,int param_2)

{
  if (param_1 != 0) {
    EGG_Sound_assertFail_8054b084();
    FUN_segment_0__80551090();
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80543b3c (0x80543b3c) ===
void snd_EGG_Sound_80543b3c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  snd_EGG_Sound_80544d7c();
  snd_EGG_Sound_80545364(param_1);
  if (*(char *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x8b) == 0) {
    snd_EGG_Sound_80546508();
  }
  snd_EGG_Sound_8054b1b4(iRam00000000);
  FUN_segment_0__80551310(iRam00000000);
  uVar3 = 0;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar3) {
      return;
    }
    if (((int)uVar3 < 0) || (0xb < (int)uVar3)) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = (uint)*(byte *)(iRam00000000 + uVar3 + 0x2920);
    }
    if ((1 << (uVar3 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) == 0) {
      iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      if (uVar2 == *(byte *)(iVar1 + 0x59)) goto LAB_segment_0__80543c1c;
      uVar2 = 1 << (uVar2 & 0x3f);
      if (((uVar2 & *(uint *)(iVar1 + 0x48)) == 0) || ((*(uint *)(param_1 + 0xc) & uVar2) != 0))
      goto LAB_segment_0__80543c1c;
    }
    else {
LAB_segment_0__80543c1c:
      FUN_segment_0__804232dc(iRam00000000,uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

// === snd_EGG_Sound_80543c50 (0x80543c50) ===
bool snd_EGG_Sound_80543c50(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    for (uVar5 = (uint)*(byte *)(iRam00000000 + 0x24); uVar5 != 0; uVar5 = uVar5 - 1) {
      if (((1 << (uVar6 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) == 0) &&
         ((*(uint *)(*(int *)(*(int *)(iRam00000000 + 0xc) + (uVar6 & 0xff) * 4) + 0x38) & 0x10) ==
          0)) {
        if (((int)uVar6 < 0) || (0xb < (int)uVar6)) {
          uVar3 = 0xff;
        }
        else {
          uVar3 = (uint)*(byte *)(iRam00000000 + uVar6 + 0x2920);
        }
        uVar3 = 1 << (uVar3 & 0x3f);
        if ((uVar3 & *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) != 0)
        {
          uVar4 = uVar4 | uVar3;
        }
      }
      uVar6 = uVar6 + 1;
    }
    bVar2 = (uVar4 & (*(uint *)(param_1 + 4) |
                     1 << (*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59) &
                          0x3f))) == uVar4;
  }
  return bVar2;
}

// === EGG_Sound_assertFail_80543d68 (0x80543d68) ===
void EGG_Sound_assertFail_80543d68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805440c0 (0x805440c0) ===
int snd_EGG_Sound_805440c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = (uint)*(byte *)(iRam00000000 + param_2 + 0x2920);
  }
  if ((1 << (uVar2 & 0x3f) & *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)
      ) != 0) {
    puVar3 = *(undefined4 **)
              (*(int *)(iRam00000000 + 0x150 + *(int *)(iRam00000000 + uVar2 * 0x20 + 0x27a0) * 0x30
                       + uVar2 * 4) + 4);
    if (puVar3[2] != 0) {
      piVar4 = (int *)*puVar3;
      if ((*(int *)(iRam00000000 + 0xb74) != 6) &&
         (iVar1 = *(int *)(param_1 + uVar2 * 4 + 0x198), 599 < (uint)(*piVar4 - iVar1))) {
        return iVar1;
      }
      return *piVar4;
    }
  }
  return 0;
}

// === snd_EGG_Sound_80544364 (0x80544364) ===
void snd_EGG_Sound_80544364(void)

{
  EGG_Sound_validate_8054b204(uRam00000000);
  return;
}

// === snd_EGG_Sound_80544370 (0x80544370) ===
void snd_EGG_Sound_80544370(void)

{
  snd_EGG_Sound_8054b358(uRam00000000);
  return;
}

// === snd_EGG_Sound_80544428 (0x80544428) ===
undefined4 snd_EGG_Sound_80544428(void)

{
  return *(undefined4 *)(iRam00000000 + 0x2b84);
}

// === snd_EGG_Sound_80544438 (0x80544438) ===
undefined4 snd_EGG_Sound_80544438(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  if (*(byte *)(iRam00000000 + 0x24) <= param_2) {
    return 0;
  }
  if (((int)param_2 < 0) || (0xb < (int)param_2)) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (uint)*(byte *)(iRam00000000 + param_2 + 0x2920);
  }
  if ((1 << (uVar1 & 0x3f) & *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)
      ) == 0) {
    return 0;
  }
  if ((1 << (param_2 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) != 0) {
    return 0;
  }
  return 1;
}

// === snd_EGG_Sound_805444c0 (0x805444c0) ===
undefined4 snd_EGG_Sound_805444c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = snd_EGG_Sound_80549970(uRam00000000,0);
  if ((param_2 == iVar1) || (iVar1 = snd_EGG_Sound_80549970(uRam00000000,1), param_2 == iVar1)) {
    uVar2 = 1;
  }
  return uVar2;
}

// === snd_EGG_Sound_80544530 (0x80544530) ===
uint snd_EGG_Sound_80544530(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = snd_EGG_Sound_80549970(uRam00000000,uVar2);
    if (param_2 == iVar1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 0xffffffff;
}

// === snd_EGG_Sound_8054459c (0x8054459c) ===
void snd_EGG_Sound_8054459c(void)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < *(byte *)(iRam00000000 + 0x24); uVar2 = uVar2 + 1) {
    if (((int)uVar2 < 0) || (0xb < (int)uVar2)) {
      uVar1 = 0xff;
    }
    else {
      uVar1 = (uint)*(byte *)(iRam00000000 + uVar2 + 0x2920);
    }
    if (((1 << (uVar2 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) != 0) ||
       ((1 << (uVar1 & 0x3f) &
        *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) == 0)) {
      FUN_segment_0__804232dc(iRam00000000,uVar2 & 0xff);
    }
  }
  return;
}

// === snd_EGG_Sound_8054464c (0x8054464c) ===
void snd_EGG_Sound_8054464c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar3) {
      return;
    }
    if (((int)uVar3 < 0) || (0xb < (int)uVar3)) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = (uint)*(byte *)(iRam00000000 + uVar3 + 0x2920);
    }
    if ((1 << (uVar3 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) == 0) {
      iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      if (uVar2 == *(byte *)(iVar1 + 0x59)) goto LAB_segment_0__805446e4;
      uVar2 = 1 << (uVar2 & 0x3f);
      if (((uVar2 & *(uint *)(iVar1 + 0x48)) == 0) || ((*(uint *)(param_1 + 0xc) & uVar2) != 0))
      goto LAB_segment_0__805446e4;
    }
    else {
LAB_segment_0__805446e4:
      FUN_segment_0__804232dc(iRam00000000,uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

// === EGG_Sound_assertFail_80544718 (0x80544718) ===
void EGG_Sound_assertFail_80544718(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (uVar2 != *(byte *)(iVar1 + 0x59)) {
      if ((1 << (uVar2 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430();
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  iVar1 = FUN_segment_0__8040bafc();
  if (*(char *)(iVar1 + 0x2538) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === snd_EGG_Sound_80544920 (0x80544920) ===
void snd_EGG_Sound_80544920(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined2 local_6c;
  ushort local_6a [3];
  undefined local_64 [16];
  undefined local_54;
  
  uVar5 = 0;
  do {
    uVar6 = 1 << (uVar5 & 0x3f);
    if ((uVar6 & *(uint *)(pcRam00000000 + *(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x48)) != 0) {
      if (uVar5 != (byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x59]) {
        local_78 = *(undefined4 *)(pcRam00000000 + 0x20);
        local_74 = *(undefined4 *)(pcRam00000000 + 0xb94);
        if ((1 << ((byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x59] & 0x3f) &
            *(uint *)(pcRam00000000 + *(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x48)) == 0) {
          local_6c = 0;
        }
        else {
          local_6c = *(undefined2 *)(param_1 + 0x10);
        }
        local_70 = 0;
        if (*(int *)(pcRam00000000 + 0xb78) == 1) {
          local_70 = 0x80000000;
        }
        uVar3 = 0;
        iVar8 = 2;
        do {
          if (*(int *)(pcRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 & 0x3f);
          }
          if (*(int *)(pcRam00000000 + (uVar3 + 1 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 + 1 & 0x3f);
          }
          if (*(int *)(pcRam00000000 + (uVar3 + 2 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 + 2 & 0x3f);
          }
          if (*(int *)(pcRam00000000 + (uVar3 + 3 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 + 3 & 0x3f);
          }
          if (*(int *)(pcRam00000000 + (uVar3 + 4 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 + 4 & 0x3f);
          }
          if (*(int *)(pcRam00000000 + (uVar3 + 5 & 0xff) * 0xf0 + 0xf4) == 0) {
            local_70 = local_70 | 1 << (uVar3 + 5 & 0x3f);
          }
          uVar3 = uVar3 + 6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        local_64[2] = (undefined)*(undefined4 *)(pcRam00000000 + 0xb68);
        local_64[3] = 0;
        if ((*(uint *)(pcRam00000000 + 0xb90) & 1) == 0) {
          local_54 = 1;
          if (*(int *)(pcRam00000000 + 0xb6c) == 2) {
            local_54 = 2;
          }
        }
        else {
          local_54 = 3;
        }
        puVar4 = &local_78;
        iVar8 = 0;
        local_6a[2] = *(short *)(param_1 + 0x12) -
                      (short)*(undefined4 *)(pcRam00000000 + (uVar5 & 0xff) * 8 + 0x2964);
        iVar9 = 2;
        do {
          if ((iVar8 < 0) || (0xb < iVar8)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2920];
          }
          *(char *)(puVar4 + 6) = cVar1;
          if ((iVar8 + 1 < 0) || (0xb < iVar8 + 1)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2921];
          }
          *(char *)((int)puVar4 + 0x19) = cVar1;
          if ((iVar8 + 2 < 0) || (0xb < iVar8 + 2)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2922];
          }
          *(char *)((int)puVar4 + 0x1a) = cVar1;
          if ((iVar8 + 3 < 0) || (0xb < iVar8 + 3)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2923];
          }
          *(char *)((int)puVar4 + 0x1b) = cVar1;
          if ((iVar8 + 4 < 0) || (0xb < iVar8 + 4)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2924];
          }
          *(char *)(puVar4 + 7) = cVar1;
          if ((iVar8 + 5 < 0) || (0xb < iVar8 + 5)) {
            cVar1 = -1;
          }
          else {
            cVar1 = pcRam00000000[iVar8 + 0x2925];
          }
          *(char *)((int)puVar4 + 0x1d) = cVar1;
          puVar4 = (undefined4 *)((int)puVar4 + 6);
          iVar8 = iVar8 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        puVar7 = &local_78;
        uVar3 = 0;
        iVar8 = 0;
        puVar4 = puVar7;
        while( true ) {
          if ((byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x58] <= uVar3) break;
          uVar2 = snd_EGG_Sound_80549970(pcRam00000000,uVar3);
          iVar9 = *(int *)(pcRam00000000 + (uVar2 & 0xff) * 0xf0 + 0x30);
          uVar2 = snd_EGG_Sound_80549970(pcRam00000000,uVar3);
          uVar3 = uVar3 + 1;
          *(ushort *)((int)puVar4 + 0xe) =
               (ushort)*(undefined4 *)(pcRam00000000 + (uVar2 & 0xff) * 0xf0 + 0x34) & 0xff |
               (ushort)(iVar9 << 8);
          puVar4 = (undefined4 *)((int)puVar4 + 2);
          iVar9 = *(int *)(pcRam00000000 + 0x98) + iVar8;
          iVar8 = iVar8 + 0xc;
          *(undefined *)(puVar7 + 5) = *(undefined *)(iVar9 + 0x228);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        if ((byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x58] == 1) {
          local_6a[1] = 0xffff;
          local_64[1] = 0;
        }
        iVar8 = (uVar5 & 0xff) * 4;
        EGG_Sound_validate_80549f64
                  (*(undefined4 *)
                    (*(int *)(pcRam00000000 +
                             *(int *)(pcRam00000000 + iVar8 + 0x276c) * 0x30 + iVar8 + 0xf0) + 4),
                   &local_78,0x28);
        EGG_Sound_validate_80549f64
                  (*(undefined4 *)
                    (*(int *)(pcRam00000000 +
                             *(int *)(pcRam00000000 + iVar8 + 0x276c) * 0x30 + iVar8 + 0xf0) + 0x10)
                   ,param_1 + 0x14,
                   (uint)(byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x58] << 6);
        if ((*pcRam00000000 != 0) && ((*(uint *)(param_1 + 4) & uVar6) == 0)) {
          FUN_segment_0__80554a78(pcRam00000000,uVar5 & 0xff);
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  return;
}

// === snd_EGG_Sound_80544d7c (0x80544d7c) ===
void snd_EGG_Sound_80544d7c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_34;
  
  uVar4 = 0;
  do {
    uVar5 = 1 << (uVar4 & 0x3f);
    if (((uVar5 & *(uint *)(pcRam00000000 + *(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x48)) != 0)
       && (uVar4 != (byte)pcRam00000000[*(int *)(pcRam00000000 + 0x291c) * 0x58 + 0x59])) {
      local_50 = 0;
      local_58 = *(undefined4 *)(pcRam00000000 + 0x20);
      local_54 = *(undefined4 *)(pcRam00000000 + 0xb94);
      local_4c = 0;
      if (*(int *)(pcRam00000000 + 0xb78) == 1) {
        local_50 = 0x80000000;
      }
      uVar3 = 0;
      iVar6 = 2;
      do {
        if (*(int *)(pcRam00000000 + (uVar3 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 & 0x3f);
        }
        if (*(int *)(pcRam00000000 + (uVar3 + 1 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 + 1 & 0x3f);
        }
        if (*(int *)(pcRam00000000 + (uVar3 + 2 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 + 2 & 0x3f);
        }
        if (*(int *)(pcRam00000000 + (uVar3 + 3 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 + 3 & 0x3f);
        }
        if (*(int *)(pcRam00000000 + (uVar3 + 4 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 + 4 & 0x3f);
        }
        if (*(int *)(pcRam00000000 + (uVar3 + 5 & 0xff) * 0xf0 + 0xf4) == 0) {
          local_50 = local_50 | 1 << (uVar3 + 5 & 0x3f);
        }
        uVar3 = uVar3 + 6;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      local_42 = (undefined)*(undefined4 *)(pcRam00000000 + 0xb68);
      local_41 = 2;
      if ((*(uint *)(pcRam00000000 + 0xb90) & 1) == 0) {
        local_34 = 1;
        if (*(int *)(pcRam00000000 + 0xb6c) == 2) {
          local_34 = 2;
        }
      }
      else {
        local_34 = 3;
      }
      puVar2 = &local_58;
      iVar6 = 0;
      local_46 = 0;
      iVar7 = 2;
      do {
        if ((iVar6 < 0) || (0xb < iVar6)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2920];
        }
        *(char *)(puVar2 + 6) = cVar1;
        if ((iVar6 + 1 < 0) || (0xb < iVar6 + 1)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2921];
        }
        *(char *)((int)puVar2 + 0x19) = cVar1;
        if ((iVar6 + 2 < 0) || (0xb < iVar6 + 2)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2922];
        }
        *(char *)((int)puVar2 + 0x1a) = cVar1;
        if ((iVar6 + 3 < 0) || (0xb < iVar6 + 3)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2923];
        }
        *(char *)((int)puVar2 + 0x1b) = cVar1;
        if ((iVar6 + 4 < 0) || (0xb < iVar6 + 4)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2924];
        }
        *(char *)(puVar2 + 7) = cVar1;
        if ((iVar6 + 5 < 0) || (0xb < iVar6 + 5)) {
          cVar1 = -1;
        }
        else {
          cVar1 = pcRam00000000[iVar6 + 0x2925];
        }
        *(char *)((int)puVar2 + 0x1d) = cVar1;
        puVar2 = (undefined4 *)((int)puVar2 + 6);
        iVar6 = iVar6 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_4a = 0xffff;
      local_44 = 0;
      local_48 = 0xffff;
      local_43 = 0;
      EGG_Sound_validate_80549f64
                (*(undefined4 *)
                  (*(int *)(pcRam00000000 +
                           *(int *)(pcRam00000000 + (uVar4 & 0xff) * 4 + 0x276c) * 0x30 +
                           (uVar4 & 0xff) * 4 + 0xf0) + 4),&local_58,0x28);
      if ((*pcRam00000000 != 0) && ((*(uint *)(param_1 + 4) & uVar5) == 0)) {
        FUN_segment_0__80554a78(pcRam00000000,uVar4 & 0xff);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  return;
}

// === snd_EGG_Sound_805450b8 (0x805450b8) ===
void snd_EGG_Sound_805450b8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar9 = 0;
  iVar12 = param_1;
  do {
    uVar10 = 1 << (uVar9 & 0x3f);
    iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((uVar10 & *(uint *)(iVar3 + 0x48)) != 0) && (uVar9 != *(byte *)(iVar3 + 0x59))) {
      iVar11 = (uVar9 & 0xff) * 0x20;
      iVar3 = (uVar9 & 0xff) * 4;
      puVar4 = *(undefined4 **)
                (*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar11 + 0x27a0) * 0x30 + iVar3 +
                         0x150) + 4);
      if (puVar4[2] != 0) {
        piVar8 = (int *)*puVar4;
        if (piVar8[1] != 0) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar10;
        }
        if (*(int *)(iRam00000000 + 0xb74) == 6) {
          *(int *)(iVar12 + 0x198) = *piVar8;
        }
        else if ((uint)(*piVar8 - *(int *)(iVar12 + 0x198)) < 600) {
          iVar5 = FUN_segment_0__80425788(iRam00000000,2);
          if (iVar5 != 0) {
            *(int *)(iVar12 + 0x198) = *piVar8;
          }
        }
        else {
          uVar2 = uVar9 & 0xff;
          iVar5 = -1;
          uVar6 = 0;
          iVar13 = 2;
          do {
            if ((((((uVar2 == *(byte *)(iRam00000000 + uVar6 + 0x2920)) &&
                   (iVar5 = iVar5 + 1, uVar7 = uVar6, iVar5 == 0)) ||
                  ((uVar7 = uVar6 + 1, uVar2 == *(byte *)(iRam00000000 + uVar7 + 0x2920) &&
                   (iVar5 = iVar5 + 1, iVar5 == 0)))) ||
                 ((uVar7 = uVar6 + 2, uVar2 == *(byte *)(iRam00000000 + uVar7 + 0x2920) &&
                  (iVar5 = iVar5 + 1, iVar5 == 0)))) ||
                ((uVar7 = uVar6 + 3, uVar2 == *(byte *)(iRam00000000 + uVar7 + 0x2920) &&
                 (iVar5 = iVar5 + 1, iVar5 == 0)))) ||
               (((uVar7 = uVar6 + 4, uVar2 == *(byte *)(iRam00000000 + uVar7 + 0x2920) &&
                 (iVar5 = iVar5 + 1, iVar5 == 0)) ||
                ((uVar2 == *(byte *)(iRam00000000 + uVar6 + 5 + 0x2920) &&
                 (iVar5 = iVar5 + 1, uVar7 = uVar6 + 5, iVar5 == 0))))))
            goto LAB_segment_0__80545290;
            uVar6 = uVar6 + 6;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          uVar7 = 0xffffffff;
LAB_segment_0__80545290:
          if (uVar7 < *(byte *)(iRam00000000 + 0x24)) {
            if (((int)uVar7 < 0) || (0xb < (int)uVar7)) {
              uVar2 = 0xff;
            }
            else {
              uVar2 = (uint)*(byte *)(iRam00000000 + uVar7 + 0x2920);
            }
            bVar1 = false;
            if (((1 << (uVar2 & 0x3f) &
                 *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) != 0) &&
               ((1 << (uVar7 & 0x3f) & *(uint *)(iRam00000000 + 0x2930)) == 0)) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            *(undefined *)(param_1 + 1) = 1;
          }
        }
      }
      if (*(int *)(*(int *)(*(int *)(*(int *)(iRam00000000 + iVar11 + 0x27a8) * 0x30 +
                                     iVar3 + iRam00000000 + 0x150) + 0xc) + 8) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar10;
      }
    }
    uVar9 = uVar9 + 1;
    iVar12 = iVar12 + 4;
    if (0xb < uVar9) {
      return;
    }
  } while( true );
}

// === snd_EGG_Sound_80545364 (0x80545364) ===
void snd_EGG_Sound_80545364(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = 0;
  iVar7 = 0xc;
  do {
    uVar1 = 1 << (uVar2 & 0x3f);
    iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((uVar1 & *(uint *)(iVar3 + 0x48)) != 0) {
      if (uVar2 != *(byte *)(iVar3 + 0x59)) {
        iVar3 = (uVar2 & 0xff) * 0x20;
        iVar4 = (uVar2 & 0xff) * 4;
        piVar5 = *(int **)(*(int *)(iRam00000000 + *(int *)(iRam00000000 + iVar3 + 0x27a0) * 0x30 +
                                    iVar4 + 0x150) + 4);
        if (piVar5[2] != 0) {
          iVar6 = *piVar5;
          if (*(int *)(iVar6 + 4) != 0) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | uVar1;
          }
          if (*(char *)(iVar6 + 0x17) != 0) {
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar1;
          }
        }
        if (*(int *)(*(int *)(*(int *)(*(int *)(iRam00000000 + iVar3 + 0x27a8) * 0x30 +
                                       iVar4 + iRam00000000 + 0x150) + 0xc) + 8) != 0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar1;
        }
      }
    }
    uVar2 = uVar2 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

// === snd_EGG_Sound_80545470 (0x80545470) ===
void snd_EGG_Sound_80545470(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 < 1) {
    *(undefined *)(iRam00000000 + 0x2e) = 1;
  }
  if (0 < *param_1) {
    *param_1 = (short)(int)((float)((double)CONCAT44(0x43300000,(int)*param_1 ^ 0x80000000) -
                                   (double)CONCAT44(iRam00000000,uRam00000004)) -
                           *(float *)(iRam00000000 + 0x7c));
  }
  uVar4 = 0;
  iVar6 = 6;
  do {
    iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((1 << (uVar4 & 0x3f) & *(uint *)(iVar3 + 0x48)) != 0) {
      if (uVar4 != *(byte *)(iVar3 + 0x59)) {
        piVar2 = *(int **)(*(int *)(iRam00000000 +
                                    *(int *)(iRam00000000 + (uVar4 & 0xff) * 0x20 + 0x27a0) * 0x30 +
                                    (uVar4 & 0xff) * 4 + 0x150) + 4);
        if (piVar2[2] != 0) {
          if (0 < *param_1) {
            sVar1 = *(short *)(*piVar2 + 0x12);
            if (sVar1 < *param_1) {
              *param_1 = sVar1;
            }
          }
        }
      }
    }
    uVar5 = uVar4 + 1;
    iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((1 << (uVar5 & 0x3f) & *(uint *)(iVar3 + 0x48)) != 0) {
      if (uVar5 != *(byte *)(iVar3 + 0x59)) {
        piVar2 = *(int **)(*(int *)(iRam00000000 +
                                    *(int *)(iRam00000000 + (uVar5 * 0x20 & 0x1fe0) + 0x27a0) * 0x30
                                    + (uVar5 * 4 & 0x3fc) + 0x150) + 4);
        if (piVar2[2] != 0) {
          if (0 < *param_1) {
            sVar1 = *(short *)(*piVar2 + 0x12);
            if (sVar1 < *param_1) {
              *param_1 = sVar1;
            }
          }
        }
      }
    }
    uVar4 = uVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

// === EGG_Sound_validate_8054573c (0x8054573c) ===
void EGG_Sound_validate_8054573c(undefined4 param_1)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x29c8,param_1,4);
  }
  return;
}

// === EGG_Sound_assertFail_805457c4 (0x805457c4) ===
void EGG_Sound_assertFail_805457c4(void)

{
  if (iRam00000000 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === EGG_Sound_assertFail_80545828 (0x80545828) ===
void EGG_Sound_assertFail_80545828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80545dc0 (0x80545dc0) ===
void snd_EGG_Sound_80545dc0(int param_1)

{
  *(undefined *)(param_1 + 0x2755) = 1;
  return;
}

// === EGG_Sound_assertFail_80545dcc (0x80545dcc) ===
void EGG_Sound_assertFail_80545dcc(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_80545e88 (0x80545e88) ===
void EGG_Sound_assertFail_80545e88(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_80545f44 (0x80545f44) ===
void EGG_Sound_assertFail_80545f44(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_80546000 (0x80546000) ===
void EGG_Sound_assertFail_80546000(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_805460bc (0x805460bc) ===
void EGG_Sound_assertFail_805460bc(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [8];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_805461ec (0x805461ec) ===
void EGG_Sound_assertFail_805461ec(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [8];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_8054631c (0x8054631c) ===
void EGG_Sound_assertFail_8054631c(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [8];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_assertFail_805463f0 (0x805463f0) ===
void EGG_Sound_assertFail_805463f0(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === snd_EGG_Sound_805464b0 (0x805464b0) ===
void snd_EGG_Sound_805464b0(int param_1)

{
  if (iRam00000000 != 0) {
    snd_EGG_Sound_8054f3d0();
  }
  if (iRam00000000 != 0) {
    snd_EGG_Sound_8054a8ac();
  }
  *(undefined4 *)(param_1 + 0xec) = 1;
  return;
}

// === snd_EGG_Sound_80546508 (0x80546508) ===
void snd_EGG_Sound_80546508(int param_1)

{
  if (*(int *)(param_1 + 0xec) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xec) = 2;
  return;
}

// === snd_EGG_Sound_80546520 (0x80546520) ===
void snd_EGG_Sound_80546520(int param_1)

{
  if (*(int *)(param_1 + 0xec) == 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0xec) = 3;
  return;
}

// === EGG_Sound_validate_80546538 (0x80546538) ===
void EGG_Sound_validate_80546538(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8);
}

// === EGG_Sound_validate_805465cc (0x805465cc) ===
void EGG_Sound_validate_805465cc(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8);
}

// === EGG_Sound_validate_80546648 (0x80546648) ===
void EGG_Sound_validate_80546648(int param_1)

{
  *(undefined *)(param_1 + 0x2757) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8);
}

// === EGG_Sound_validate_805466a4 (0x805466a4) ===
undefined4 EGG_Sound_validate_805466a4(int param_1)

{
  param_1 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
  if (*(int *)(param_1 + 0x3c) == 0 && *(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80546704 (0x80546704) ===
void EGG_Sound_validate_80546704(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0,param_1,0,param_1,0,0);
}

// === EGG_Sound_validate_8054675c (0x8054675c) ===
void EGG_Sound_validate_8054675c(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0,param_1,0,param_1,0,0);
}

// === EGG_Sound_assertFail_80546784 (0x80546784) ===
void EGG_Sound_assertFail_80546784(void)

{
  int iVar1;
  
  iVar1 = iRam00000000;
  *(undefined4 *)(iRam00000000 + 0x36c) = 0;
  *(undefined4 *)(iVar1 + 0x370) = 0;
  *(undefined4 *)(iVar1 + 0x374) = 0;
  *(undefined4 *)(iVar1 + 0x378) = 0;
  *(undefined4 *)(iVar1 + 0x37c) = 0;
  *(undefined4 *)(iVar1 + 0x380) = 0;
  *(undefined4 *)(iVar1 + 900) = 0;
  *(undefined4 *)(iVar1 + 0x388) = 0;
  *(undefined4 *)(iVar1 + 0x38c) = 0;
  *(undefined4 *)(iVar1 + 0x390) = 0;
  *(undefined4 *)(iVar1 + 0x394) = 0;
  *(undefined4 *)(iVar1 + 0x398) = 0;
  *(undefined4 *)(iVar1 + 0x39c) = 0;
  *(undefined4 *)(iVar1 + 0x3a0) = 0;
  *(undefined4 *)(iVar1 + 0x3a4) = 0;
  *(undefined4 *)(iVar1 + 0x3a8) = 0;
  *(undefined4 *)(iVar1 + 0x3ac) = 0;
  *(undefined4 *)(iVar1 + 0x3b0) = 0;
  *(undefined4 *)(iVar1 + 0x3b4) = 0;
  *(undefined4 *)(iVar1 + 0x3b8) = 0;
  *(undefined4 *)(iVar1 + 0x3bc) = 0;
  *(undefined4 *)(iVar1 + 0x3c0) = 0;
  *(undefined4 *)(iVar1 + 0x3c4) = 0;
  *(undefined4 *)(iVar1 + 0x3c8) = 0;
  *(undefined4 *)(iVar1 + 0x3cc) = 0;
  *(undefined4 *)(iVar1 + 0x3d0) = 0;
  *(undefined4 *)(iVar1 + 0x3d4) = 0;
  *(undefined4 *)(iVar1 + 0x3d8) = 0;
  *(undefined4 *)(iVar1 + 0x3dc) = 0;
  *(undefined4 *)(iVar1 + 0x3e0) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iVar1 + 0x1c,iVar1 + 0x9c);
}

// === EGG_Sound_validate_805468b8 (0x805468b8) ===
/* WARNING: Removing unreachable block (ram,0x8054695c) */
/* WARNING: Removing unreachable block (ram,0x80546970) */

void EGG_Sound_validate_805468b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 0x1c,iRam00000000 + 0x9c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iRam00000000 + 0x1c,iRam00000000 + 0x9c);
}

// === EGG_Sound_assertFail_805469b4 (0x805469b4) ===
void EGG_Sound_assertFail_805469b4(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === EGG_Sound_validate_80546a5c (0x80546a5c) ===
void EGG_Sound_validate_80546a5c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x24));
}

// === EGG_Sound_assertFail_80546a88 (0x80546a88) ===
void EGG_Sound_assertFail_80546a88(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,auStack_14);
}

// === snd_EGG_Sound_80546b18 (0x80546b18) ===
undefined4 snd_EGG_Sound_80546b18(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  param_1 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
  if (((1 << (*(byte *)(param_1 + 0x59) & 0x3f) & *(uint *)(param_1 + 0x48)) != 0) &&
     (1 < *(uint *)(param_1 + 0x40))) {
    uVar1 = 1;
  }
  return uVar1;
}

// === EGG_Sound_validate_80546b58 (0x80546b58) ===
void EGG_Sound_validate_80546b58(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (*(undefined4 *)**(undefined4 **)(param_1 + 0xf0),0,
             ((undefined4 *)**(undefined4 **)(param_1 + 0xf0))[1]);
}

// === EGG_Sound_validate_80546c1c (0x80546c1c) ===
void EGG_Sound_validate_80546c1c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 2);
}

// === EGG_Sound_validate_80546ff4 (0x80546ff4) ===
int EGG_Sound_validate_80546ff4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_80547034 (0x80547034) ===
undefined4 EGG_Sound_validate_80547034(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  uVar1 = 0;
  puVar2 = param_1;
  do {
    if ((undefined4 *)puVar2[0x6c] != (void *)0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)puVar2[0x6c]);
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x3c);
}

// === EGG_Sound_validate_8054711c (0x8054711c) ===
void EGG_Sound_validate_8054711c(int param_1)

{
  undefined auStack_60 [4];
  undefined auStack_5c [20];
  
  EGG_Sound_assertFail_80562a18(pcRam00000000);
  EGG_Sound_assertFail_805487b4(param_1);
  if (*(char *)(param_1 + 0x2755) != 0) {
    if (*pcRam00000000 != 0) {
      FUN_segment_0__80554900();
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  if (pcRam00000000[0x51] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_60,auStack_5c);
}

// === snd_EGG_Sound_80547688 (0x80547688) ===
void snd_EGG_Sound_80547688(undefined4 param_1)

{
  EGG_Sound_validate_805476c8();
  EGG_Sound_validate_80547a48(param_1);
  FUN_segment_0__8055497c(uRam00000000);
  return;
}

// === EGG_Sound_validate_805476c8 (0x805476c8) ===
void EGG_Sound_validate_805476c8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = false;
  iVar4 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
  if (((1 << (*(byte *)(iVar4 + 0x59) & 0x3f) & *(uint *)(iVar4 + 0x48)) != 0) &&
     (1 < *(uint *)(iVar4 + 0x40))) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar6 = 0;
    do {
      iVar4 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
      if (((1 << (uVar6 & 0x3f) & *(uint *)(iVar4 + 0x48)) != 0) &&
         (uVar6 != *(byte *)(iVar4 + 0x59))) {
        iVar7 = (uVar6 & 0xff) * 4;
        iVar4 = param_1 + iVar7;
        piVar2 = *(int **)(*(int *)(iVar4 + 0x276c) * 0x30 + iVar4 + 0xf0);
        if ((*(int *)(*piVar2 + 8) + *(int *)(piVar2[1] + 8) + *(int *)(piVar2[2] + 8) +
             *(int *)(piVar2[3] + 8) + *(int *)(piVar2[4] + 8) + *(int *)(piVar2[5] + 8) +
             *(int *)(piVar2[6] + 8) + *(int *)(piVar2[7] + 8) == 0) &&
           (iVar3 = param_1 + (uVar6 & 0xff) * 8,
           *(int *)(iVar3 + 0x1e4) != 0 || *(int *)(iVar3 + 0x1e0) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430();
        }
        *(uint *)(iVar4 + 0x276c) = *(uint *)(iVar4 + 0x276c) ^ 1;
        puVar5 = *(undefined4 **)(param_1 + iVar7 + 0x1b0);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*puVar5,0,puVar5[1]);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xc);
  }
  return;
}

// === EGG_Sound_validate_80547a48 (0x80547a48) ===
void EGG_Sound_validate_80547a48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x360) != 0xff) &&
     (iVar1 = param_1 + (uint)*(byte *)(param_1 + 0x360) * 8,
     *(int *)(iVar1 + 0x1e4) != 0 || *(int *)(iVar1 + 0x1e0) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  uVar3 = 0;
  uVar4 = *(byte *)(param_1 + 0x360) + 1 & 0xff;
  while( true ) {
    if (0xb < (uVar4 & 0xff)) {
      uVar4 = 0;
    }
    iVar1 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
    if ((((1 << (uVar4 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) &&
        ((uVar4 & 0xff) != (uint)*(byte *)(iVar1 + 0x59))) &&
       (puVar2 = *(undefined4 **)(param_1 + (uVar4 & 0xff) * 4 + 0x1b0), puVar2[2] != 0)) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 + 1;
    if (0xb < uVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*puVar2);
}

// === EGG_Sound_validate_80547bfc (0x80547bfc) ===
undefined4 EGG_Sound_validate_80547bfc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + (param_2 & 0xff) * 4 + 0x1b0);
  if (puVar1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*puVar1);
  }
  return 0;
}

// === EGG_Sound_assertFail_80547d60 (0x80547d60) ===
void EGG_Sound_assertFail_80547d60(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_14,auStack_18);
}

// === EGG_Sound_assertFail_80547de4 (0x80547de4) ===
void EGG_Sound_assertFail_80547de4(void)

{
  undefined auStack_18 [4];
  undefined auStack_14 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_14,auStack_18);
}

// === EGG_Sound_validate_80547f44 (0x80547f44) ===
undefined4 EGG_Sound_validate_80547f44(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 8);
  }
  return 0;
}

// === EGG_Sound_validate_80547fcc (0x80547fcc) ===
void EGG_Sound_validate_80547fcc(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 8);
  }
  return;
}

// === EGG_Sound_validate_80548030 (0x80548030) ===
undefined4 EGG_Sound_validate_80548030(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  return 0;
}

// === EGG_Sound_validate_805480b0 (0x805480b0) ===
void EGG_Sound_validate_805480b0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  return;
}

// === EGG_Sound_validate_80548118 (0x80548118) ===
undefined4 EGG_Sound_validate_80548118(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  return 0;
}

// === EGG_Sound_validate_805481a4 (0x805481a4) ===
void EGG_Sound_validate_805481a4(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  return;
}

// === EGG_Sound_validate_8054822c (0x8054822c) ===
void EGG_Sound_validate_8054822c(int param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === EGG_Sound_assertFail_80548330 (0x80548330) ===
void EGG_Sound_assertFail_80548330(void)

{
  undefined4 local_18 [4];
  
  local_18[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,local_18);
}

// === EGG_Sound_assertFail_80548380 (0x80548380) ===
void EGG_Sound_assertFail_80548380(void)

{
  undefined4 local_14;
  
  local_14 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,&local_14);
}

// === EGG_Sound_assertFail_8054843c (0x8054843c) ===
void EGG_Sound_assertFail_8054843c(void)

{
  undefined4 local_18 [2];
  
  local_18[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,local_18);
}

// === EGG_Sound_validate_80548540 (0x80548540) ===
void EGG_Sound_validate_80548540(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x361,0,0x2280);
}

// === EGG_Sound_validate_805485a8 (0x805485a8) ===
void EGG_Sound_validate_805485a8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1 + (param_2 & 0xff) * 8;
  *(undefined4 *)(iVar1 + 0x1e4) = 0;
  *(undefined4 *)(iVar1 + 0x1e0) = 0;
  *(undefined4 *)(iVar1 + 0x2a4) = 0;
  *(undefined4 *)(iVar1 + 0x2a0) = 0;
  *(undefined4 *)(iVar1 + 0x244) = 0;
  *(undefined4 *)(iVar1 + 0x240) = 0;
  *(undefined4 *)(iVar1 + 0x304) = 0;
  *(undefined4 *)(iVar1 + 0x300) = 0;
  puVar2 = *(undefined4 **)(param_1 + (param_2 & 0xff) * 4 + 0x1b0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*puVar2,0,puVar2[1]);
}

// === EGG_Sound_assertFail_805487b4 (0x805487b4) ===
void EGG_Sound_assertFail_805487b4(void)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_20);
}

// === EGG_Sound_validate_80548954 (0x80548954) ===
void EGG_Sound_validate_80548954(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined *)(param_1 + 0x59) = 0xff;
  *(undefined *)(param_1 + 0x5a) = 0xff;
  *(undefined *)(param_1 + 0x8b) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5b,0,4);
}

// === EGG_Sound_validate_805489f8 (0x805489f8) ===
void EGG_Sound_validate_805489f8(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x291c);
  *(uint *)(param_1 + 0x291c) = uVar1 ^ 1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + uVar1 * 0x58);
}

// === EGG_Sound_validate_80548c5c (0x80548c5c) ===
void EGG_Sound_validate_80548c5c(int param_1)

{
  *(undefined *)(param_1 + 0x360) = 0xff;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_assertFail_80548d88 (0x80548d88) ===
void EGG_Sound_assertFail_80548d88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0,0x7f);
}

// === EGG_Sound_validate_805491d0 (0x805491d0) ===
void EGG_Sound_validate_805491d0(int param_1)

{
  int local_8 [2];
  
  local_8[0] = (uint)*(byte *)(param_1 + *(int *)(param_1 + 0x291c) * 0x58 + 0x58) << 0x18;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xc,0,param_1,0,0,0,local_8,param_1);
}

// === EGG_Sound_validate_80549234 (0x80549234) ===
void EGG_Sound_validate_80549234(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  iVar1 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
  local_8[0] = (uint)*(byte *)(iVar1 + 0x58) << 0x18;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(iVar1 + 0x54),0,param_1,0,0,0,local_8,param_1);
}

// === EGG_Sound_assertFail_80549298 (0x80549298) ===
void EGG_Sound_assertFail_80549298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0,0x7f);
}

// === EGG_Sound_assertFail_805494dc (0x805494dc) ===
void EGG_Sound_assertFail_805494dc(void)

{
  undefined auStack_18 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,0,0x10);
}

// === EGG_Sound_validate_80549654 (0x80549654) ===
void EGG_Sound_validate_80549654(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + (param_2 & 0xff) * 4 + 0x1b0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*puVar1,puVar1[2]);
}

// === EGG_Sound_validate_8054969c (0x8054969c) ===
void EGG_Sound_validate_8054969c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_3,param_4);
}

// === snd_EGG_Sound_805497d8 (0x805497d8) ===
/* WARNING: Removing unreachable block (ram,0x80549884) */

void snd_EGG_Sound_805497d8(int param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 0x2930) = 0;
  *(undefined4 *)(param_1 + 0x292c) = 0;
  if (iRam00000000 == 0) {
    *(undefined *)(param_1 + 0x2920) = 0xff;
    *(undefined *)(param_1 + 0x2921) = 0xff;
    *(undefined *)(param_1 + 0x2922) = 0xff;
    *(undefined *)(param_1 + 0x2923) = 0xff;
    *(undefined *)(param_1 + 0x2924) = 0xff;
    *(undefined *)(param_1 + 0x2925) = 0xff;
    *(undefined *)(param_1 + 0x2926) = 0xff;
    *(undefined *)(param_1 + 0x2927) = 0xff;
    *(undefined *)(param_1 + 0x2928) = 0xff;
    *(undefined *)(param_1 + 0x2929) = 0xff;
    *(undefined *)(param_1 + 0x292a) = 0xff;
    *(undefined *)(param_1 + 0x292b) = 0xff;
  }
  else {
    puVar1 = (undefined *)FUN_segment_0__8055027c(iRam00000000);
    *(undefined *)(param_1 + 0x2920) = *puVar1;
    *(undefined *)(param_1 + 0x2921) = puVar1[1];
    *(undefined *)(param_1 + 0x2922) = puVar1[2];
    *(undefined *)(param_1 + 0x2923) = puVar1[3];
    *(undefined *)(param_1 + 0x2924) = puVar1[4];
    *(undefined *)(param_1 + 0x2925) = puVar1[5];
    *(undefined *)(param_1 + 0x2926) = puVar1[6];
    *(undefined *)(param_1 + 0x2927) = puVar1[7];
    *(undefined *)(param_1 + 0x2928) = puVar1[8];
    *(undefined *)(param_1 + 0x2929) = puVar1[9];
    *(undefined *)(param_1 + 0x292a) = puVar1[10];
    *(undefined *)(param_1 + 0x292b) = puVar1[0xb];
  }
  return;
}

// === snd_EGG_Sound_80549938 (0x80549938) ===
void snd_EGG_Sound_80549938(int param_1)

{
  *(undefined *)(param_1 + 0x2920) = 0xff;
  *(undefined *)(param_1 + 0x2921) = 0xff;
  *(undefined *)(param_1 + 0x2922) = 0xff;
  *(undefined *)(param_1 + 0x2923) = 0xff;
  *(undefined *)(param_1 + 0x2924) = 0xff;
  *(undefined *)(param_1 + 0x2925) = 0xff;
  *(undefined *)(param_1 + 0x2926) = 0xff;
  *(undefined *)(param_1 + 0x2927) = 0xff;
  *(undefined *)(param_1 + 0x2928) = 0xff;
  *(undefined *)(param_1 + 0x2929) = 0xff;
  *(undefined *)(param_1 + 0x292a) = 0xff;
  *(undefined *)(param_1 + 0x292b) = 0xff;
  return;
}

// === snd_EGG_Sound_80549970 (0x80549970) ===
uint snd_EGG_Sound_80549970(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (iRam00000000 != 0) {
    iVar4 = 0;
    uVar1 = 0;
    iVar2 = iRam00000000 + 0x28;
    iVar5 = 2;
    do {
      if (*(int *)(iVar2 + (uVar1 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1;
        }
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(iVar2 + (uVar1 + 1 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1 + 1;
        }
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(iVar2 + (uVar1 + 2 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1 + 2;
        }
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(iVar2 + (uVar1 + 3 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1 + 3;
        }
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(iVar2 + (uVar1 + 4 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1 + 4;
        }
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(iVar2 + (uVar1 + 5 & 0xff) * 0xf0 + 0x10) == 0) {
        if (iVar4 == param_2) {
          return uVar1 + 5;
        }
        iVar4 = iVar4 + 1;
      }
      uVar1 = uVar1 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return 0xffffffff;
  }
  iVar2 = param_1 + *(int *)(param_1 + 0x291c) * 0x58;
  uVar1 = (uint)*(byte *)(iVar2 + 0x59);
  if ((1 << (uVar1 & 0x3f) & *(uint *)(iVar2 + 0x48)) == 0) {
    return 0xffffffff;
  }
  iVar2 = -1;
  uVar3 = 0;
  iVar4 = 2;
  while( true ) {
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2)) {
      return uVar3;
    }
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 1 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2))
    {
      return uVar3 + 1;
    }
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 2 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2))
    {
      return uVar3 + 2;
    }
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 3 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2))
    break;
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 4 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2))
    {
      return uVar3 + 4;
    }
    if ((uVar1 == *(byte *)(param_1 + uVar3 + 5 + 0x2920)) && (iVar2 = iVar2 + 1, iVar2 == param_2))
    {
      return uVar3 + 5;
    }
    uVar3 = uVar3 + 6;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0xffffffff;
    }
  }
  return uVar3 + 3;
}

// === snd_EGG_Sound_80549bbc (0x80549bbc) ===
uint snd_EGG_Sound_80549bbc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + param_2 * 0xc;
  if ((*(char *)(iVar1 + 0x25f5) == 0) || (*(char *)(iVar1 + 0x25f4) == 0)) {
    return 1;
  }
  uVar2 = (uint)*(byte *)(iVar1 + 0x25f1);
  if (uVar2 == 0) {
    return 2;
  }
  if ((uVar2 - 0xb < 4) || (uVar2 - 2 < 3)) {
    return uVar2;
  }
  if (uVar2 == 5) {
    if (*(int *)(param_1 + 0x2760) != 0) {
      return 2;
    }
    if (*(char *)(iVar1 + 0x25f0) != -1) {
      if ((int)*(char *)(iVar1 + 0x25f0) != *(int *)(iRam00000000 + 0x84)) {
        return 7;
      }
      return 6;
    }
    return 5;
  }
  if (uVar2 != 8) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x2760) != 0) {
    return 2;
  }
  if (*(char *)(iVar1 + 0x25f0) == -1) {
    return 8;
  }
  if ((int)*(char *)(iVar1 + 0x25f0) != *(int *)(iRam00000000 + 0x84)) {
    return 10;
  }
  return 9;
}

// === EGG_Sound_validate_80549ccc (0x80549ccc) ===
void EGG_Sound_validate_80549ccc(int param_1)

{
  undefined auStack_38 [4];
  undefined auStack_34 [28];
  
  if (*(char *)(param_1 + 0x25e9) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_34,auStack_38);
}

// === EGG_Sound_validate_80549e64 (0x80549e64) ===
void EGG_Sound_validate_80549e64(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2);
}

// === EGG_Sound_validate_80549ec4 (0x80549ec4) ===
undefined4 EGG_Sound_validate_80549ec4(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*param_1);
  }
  return 0;
}

// === EGG_Sound_validate_80549f24 (0x80549f24) ===
void EGG_Sound_validate_80549f24(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*param_1,0,param_1[1]);
}

// === EGG_Sound_validate_80549f64 (0x80549f64) ===
void EGG_Sound_validate_80549f64(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*param_1);
}

// === EGG_Sound_validate_80549fa4 (0x80549fa4) ===
void EGG_Sound_validate_80549fa4(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*param_1 + param_1[2]);
}

// === EGG_Sound_assertFail_80549ff4 (0x80549ff4) ===
void EGG_Sound_assertFail_80549ff4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xc);
}

// === EGG_Sound_validate_8054a08c (0x8054a08c) ===
undefined4 * EGG_Sound_validate_8054a08c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (void *)0) {
    uVar1 = 0;
    puVar2 = param_1;
    do {
      if ((undefined4 *)*puVar2 != (void *)0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(*(undefined4 *)*puVar2);
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < 8);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_8054a110 (0x8054a110) ===
void snd_EGG_Sound_8054a110(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int iVar11;
  
  iVar11 = snd_EGG_Sound_805631a8(uRam00000000,param_1);
  uVar10 = uRam00000012;
  uVar9 = uRam00000010;
  uVar8 = uRam0000000e;
  uVar7 = uRam0000000c;
  uVar6 = uRam0000000a;
  uVar5 = uRam00000008;
  uVar4 = uRam00000006;
  uVar3 = uRam00000004;
  if (iVar11 == 0) {
    uVar2 = uRam00000000._2_2_;
    uVar1 = uRam00000000._0_2_;
    *param_1 = uRam00000000._0_2_;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    param_1[8] = uVar9;
    param_1[9] = uVar10;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar6;
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar8;
    param_1[0x12] = uVar9;
    param_1[0x13] = uVar10;
  }
  return;
}

// === snd_EGG_Sound_8054a1f8 (0x8054a1f8) ===
uint snd_EGG_Sound_8054a1f8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = snd_EGG_Sound_8054a380();
  uVar1 = param_2 - (uint)*(ushort *)(param_1 + param_3 * 0x14 + iVar2 * 4 + 2);
  if ((int)uVar1 < 1) {
    uVar1 = 1;
  }
  return uVar1 & 0xffff;
}

// === snd_EGG_Sound_8054a264 (0x8054a264) ===
uint snd_EGG_Sound_8054a264(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = snd_EGG_Sound_8054a380();
  uVar1 = param_2 + (uint)*(ushort *)(iVar2 * 4 + param_1 + param_3 * 0x14);
  if (9999 < uVar1) {
    uVar1 = 9999;
  }
  return uVar1 & 0xffff;
}

// === snd_EGG_Sound_8054a380 (0x8054a380) ===
undefined4 snd_EGG_Sound_8054a380(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  ushort local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  
  puVar2 = &local_58;
  local_44 = uRam00000000;
  local_42 = uRam00000002;
  local_40 = uRam00000004;
  local_3e = uRam00000006;
  local_3c = uRam00000008;
  local_3a = uRam0000000a;
  local_38 = uRam0000000c;
  local_36 = uRam0000000e;
  local_34 = uRam00000010;
  local_32 = uRam00000012;
  local_58 = uRam00000000;
  local_56 = uRam00000002;
  local_54 = uRam00000004;
  local_52 = uRam00000006;
  local_50 = uRam00000008;
  local_4e = uRam0000000a;
  local_4c = uRam0000000c;
  local_4a = uRam0000000e;
  local_48 = uRam00000010;
  local_46 = uRam00000012;
  if (param_3 == 0) {
    puVar2 = &local_44;
  }
  uVar1 = 5;
  if ((param_2 < *puVar2) || (puVar2[1] <= param_2)) {
    if ((param_2 < puVar2[2]) || (puVar2[3] <= param_2)) {
      if ((param_2 < puVar2[4]) || (puVar2[5] <= param_2)) {
        if ((param_2 < puVar2[6]) || (puVar2[7] <= param_2)) {
          if ((puVar2[8] <= param_2) && (param_2 < puVar2[9])) {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// === snd_EGG_Sound_8054a4ec (0x8054a4ec) ===
void snd_EGG_Sound_8054a4ec(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_8c;
  undefined4 local_88 [33];
  
  if (*param_2 == 0) {
    puVar2 = &uStack_8c;
    iVar4 = 0xf;
    do {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = local_88;
    iVar4 = 0;
    for (uVar3 = 0; uVar3 < (uint)param_2[1]; uVar3 = uVar3 + 1) {
      puVar1 = (undefined4 *)(param_2[2] + iVar4);
      iVar4 = iVar4 + 0x1c;
      *puVar2 = *puVar1;
      puVar2 = puVar2 + 1;
    }
    EGG_Sound_validate_805468b8(param_3,local_88);
    *(undefined4 *)(param_3 + 0x28) = 5;
  }
  else {
    EGG_Sound_validate_8054a58c();
  }
  return;
}

// === EGG_Sound_validate_8054a58c (0x8054a58c) ===
void EGG_Sound_validate_8054a58c(int param_1)

{
  int in_LR;
  
  if (param_1 == 1) {
    in_LR = 9;
  }
  else if (param_1 == 2) {
    in_LR = 9;
  }
  else if (param_1 == 3) {
    in_LR = 6;
  }
  else if (param_1 == 4) {
    in_LR = 6;
  }
  if (in_LR == 6) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  if (in_LR == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(iRam00000000 + 8);
  }
  return;
}

// === EGG_Sound_assertFail_8054a6a0 (0x8054a6a0) ===
void EGG_Sound_assertFail_8054a6a0(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x80);
  }
  return;
}

// === EGG_Sound_assertFail_8054a764 (0x8054a764) ===
void EGG_Sound_assertFail_8054a764(void)

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

// === snd_EGG_Sound_8054a8ac (0x8054a8ac) ===
void snd_EGG_Sound_8054a8ac(undefined *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x68] = 0xff;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

// === EGG_Sound_validate_8054a930 (0x8054a930) ===
void EGG_Sound_validate_8054a930(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    iVar1 = snd_EGG_Sound_80546b18(iRam00000000);
    if (iVar1 != 0) {
      EGG_Sound_assertFail_8054ac60(param_1);
      param_1 = param_1 + 0x38;
      uVar3 = 0;
      do {
        iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
        if ((((1 << (uVar3 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) &&
            (uVar3 != *(byte *)(iVar1 + 0x59))) &&
           (puVar2 = *(undefined4 **)
                      (*(int *)((uVar3 & 0xff) * 4 +
                                iRam00000000 +
                                *(int *)(iRam00000000 + (uVar3 & 0xff) * 0x20 + 0x27a8) * 0x30 +
                               0x150) + 0xc), puVar2[2] == 4)) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(param_1,*puVar2,4);
        }
        uVar3 = uVar3 + 1;
        param_1 = param_1 + 4;
      } while (uVar3 < 0xc);
      iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      uVar3 = *(uint *)(iVar1 + 0x48) & ~(1 << (*(byte *)(iVar1 + 0x59) & 0x3f));
      if (((uVar3 != (uVar3 & *(uint *)(iRam00000000 + 0x9e0))) &&
          (iVar1 = FUN_segment_0__80554cdc(), iVar1 != 0)) &&
         (iVar1 = FUN_segment_0__80554c14(iRam00000000), iVar1 != 0)) {
        FUN_segment_0__80554ba8(iRam00000000);
      }
    }
  }
  return;
}

// === snd_EGG_Sound_8054aa88 (0x8054aa88) ===
void snd_EGG_Sound_8054aa88(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 2;
  do {
    if (uVar1 != *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
      *(undefined4 *)(param_1 + 8) = param_2;
    }
    if (uVar1 + 1 != (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59))
    {
      *(undefined4 *)(param_1 + 0xc) = param_2;
    }
    if (uVar1 + 2 != (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59))
    {
      *(undefined4 *)(param_1 + 0x10) = param_2;
    }
    if (uVar1 + 3 != (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59))
    {
      *(undefined4 *)(param_1 + 0x14) = param_2;
    }
    if (uVar1 + 4 != (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59))
    {
      *(undefined4 *)(param_1 + 0x18) = param_2;
    }
    if (uVar1 + 5 != (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59))
    {
      *(undefined4 *)(param_1 + 0x1c) = param_2;
    }
    param_1 = param_1 + 0x18;
    uVar1 = uVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// === snd_EGG_Sound_8054ab7c (0x8054ab7c) ===
undefined4 snd_EGG_Sound_8054ab7c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4 + 0x38);
}

// === snd_EGG_Sound_8054ab8c (0x8054ab8c) ===
void snd_EGG_Sound_8054ab8c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 8) = param_3;
  return;
}

// === EGG_Sound_validate_8054ac20 (0x8054ac20) ===
int EGG_Sound_validate_8054ac20(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_assertFail_8054ac60 (0x8054ac60) ===
void EGG_Sound_assertFail_8054ac60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8054adac (0x8054adac) ===
void EGG_Sound_validate_8054adac(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  param_1 = param_1 + 0x38;
  uVar3 = 0;
  while( true ) {
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((((1 << (uVar3 & 0x3f) & *(uint *)(iVar2 + 0x48)) != 0) &&
        (uVar3 != *(byte *)(iVar2 + 0x59))) &&
       (puVar1 = *(undefined4 **)
                  (*(int *)((uVar3 & 0xff) * 4 +
                            iRam00000000 +
                            *(int *)(iRam00000000 + (uVar3 & 0xff) * 0x20 + 0x27a8) * 0x30 + 0x150)
                  + 0xc), puVar1[2] == 4)) break;
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 4;
    if (0xb < uVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,*puVar1,4);
}

// === EGG_Sound_assertFail_8054af6c (0x8054af6c) ===
void EGG_Sound_assertFail_8054af6c(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x2b88);
  }
  return;
}

// === EGG_Sound_assertFail_8054b084 (0x8054b084) ===
void EGG_Sound_assertFail_8054b084(void)

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

// === EGG_Sound_validate_8054b0c4 (0x8054b0c4) ===
void EGG_Sound_validate_8054b0c4(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0x1d) = 0;
  *(undefined *)(param_1 + 0x1e) = 0x10;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined *)(param_1 + 0x20) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8,0,0x15);
}

// === snd_EGG_Sound_8054b1b4 (0x8054b1b4) ===
void snd_EGG_Sound_8054b1b4(char *param_1)

{
  if (*param_1 != 0) {
    EGG_Sound_validate_8054b550();
    EGG_Sound_assertFail_8054b618(param_1);
    EGG_Sound_validate_8054b768(param_1);
    snd_EGG_Sound_8054b8c4(param_1);
  }
  return;
}

// === EGG_Sound_validate_8054b204 (0x8054b204) ===
void EGG_Sound_validate_8054b204(int param_1,undefined param_2,undefined param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 4);
  iVar3 = 3;
  do {
    piVar2 = piVar1;
    if (((((*(char *)((int)piVar1 + 0x19) == 0) ||
          (piVar2 = piVar1 + 8, *(char *)((int)piVar1 + 0x39) == 0)) ||
         (piVar2 = piVar1 + 0x10, *(char *)((int)piVar1 + 0x59) == 0)) ||
        ((piVar2 = piVar1 + 0x18, *(char *)((int)piVar1 + 0x79) == 0 ||
         (piVar2 = piVar1 + 0x20, *(char *)((int)piVar1 + 0x99) == 0)))) ||
       ((piVar2 = piVar1 + 0x28, *(char *)((int)piVar1 + 0xb9) == 0 ||
        ((piVar2 = piVar1 + 0x30, *(char *)((int)piVar1 + 0xd9) == 0 ||
         (piVar2 = piVar1 + 0x38, *(char *)((int)piVar1 + 0xf9) == 0))))))
    goto LAB_segment_0__8054b2e0;
    piVar1 = piVar1 + 0x40;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar2 = (int *)0;
LAB_segment_0__8054b2e0:
  *piVar2 = *(int *)(iRam00000000 + 0x20) + 200;
  *(undefined *)((int)piVar2 + 0x19) = 1;
  *(undefined *)((int)piVar2 + 0x1a) = param_2;
  *(undefined *)((int)piVar2 + 0x1b) = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(piVar2 + 1,0,0x15);
}

// === snd_EGG_Sound_8054b358 (0x8054b358) ===
ulonglong snd_EGG_Sound_8054b358(int param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1 = param_1 + 4;
  uVar1 = 0;
  iVar2 = 3;
  while( true ) {
    if (*(char *)(param_1 + 0x19) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0x39) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0x59) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0x79) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0x99) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0xb9) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0xd9) == 0) {
      return CONCAT44(1,uVar1);
    }
    if (*(char *)(param_1 + 0xf9) == 0) break;
    param_1 = param_1 + 0x100;
    uVar1 = uVar1 + 7;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return (ulonglong)uVar1;
    }
  }
  return CONCAT44(1,uVar1);
}

// === EGG_Sound_validate_8054b41c (0x8054b41c) ===
void EGG_Sound_validate_8054b41c(undefined *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x10;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 8,0,0x15);
}

// === EGG_Sound_validate_8054b510 (0x8054b510) ===
int EGG_Sound_validate_8054b510(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8054b550 (0x8054b550) ===
void EGG_Sound_validate_8054b550(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_1 + 4);
  uVar1 = 0;
  do {
    if (*(char *)((int)puVar2 + 0x1a) != '\x10') {
      if (*(char *)((int)puVar2 + 0x19) == '\x01') {
        if (*puVar2 < *(uint *)(iRam00000000 + 0x20)) {
          *(undefined *)((int)puVar2 + 0x19) = 2;
        }
      }
      else if ((*(char *)((int)puVar2 + 0x19) == '\x02') &&
              (*puVar2 + 200 < *(uint *)(iRam00000000 + 0x20))) {
        *puVar2 = 0;
        *(undefined *)((int)puVar2 + 0x19) = 0;
        *(undefined *)((int)puVar2 + 0x1a) = 0x10;
        *(undefined *)((int)puVar2 + 0x1b) = 0;
        *(undefined *)(puVar2 + 7) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(puVar2 + 1,0,0x15);
      }
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 8;
    if (0x17 < uVar1) {
      return;
    }
  } while( true );
}

// === EGG_Sound_assertFail_8054b618 (0x8054b618) ===
void EGG_Sound_assertFail_8054b618(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(iRam00000000 + 0x94,0,0xf8);
}

// === EGG_Sound_validate_8054b768 (0x8054b768) ===
void EGG_Sound_validate_8054b768(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  
  param_1 = param_1 + 0x304;
  uVar9 = 0;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar9) {
      return;
    }
    if (((int)uVar9 < 0) || (0xb < (int)uVar9)) {
      uVar5 = 0xff;
    }
    else {
      uVar5 = (uint)*(byte *)(iRam00000000 + uVar9 + 0x2920);
    }
    iVar6 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((((1 << (uVar5 & 0x3f) & *(uint *)(iVar6 + 0x48)) != 0) &&
        (uVar5 != *(byte *)(iVar6 + 0x59))) &&
       (puVar2 = *(undefined4 **)
                  (*(int *)(uVar5 * 4 +
                            iRam00000000 + *(int *)(iRam00000000 + uVar5 * 0x20 + 0x27b8) * 0x30 +
                           0x150) + 0x1c), puVar2[2] != 0)) {
      pbVar8 = (byte *)*puVar2;
      uVar5 = 0;
      pbVar7 = pbVar8 + 0x18;
      iVar6 = param_1;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar3 = bVar1 & 0x1f;
        *(byte *)(iVar6 + 0x1a) = bVar3;
        *(byte *)(iVar6 + 0x1b) = bVar1 >> 5;
        if (bVar3 == 0x10) {
          *(undefined *)(iVar6 + 0x1c) = 0;
        }
        else if (*(char *)(iVar6 + 0x1b) == 0) {
          *(undefined *)(iVar6 + 0x1c) = 0;
        }
        else {
          uVar4 = FUN_segment_0__80688800();
          *(undefined *)(iVar6 + 0x1c) = uVar4;
        }
        if (*(char *)(iVar6 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(iVar6 + 4,pbVar7);
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 0x20;
      } while (uVar5 < 0x18);
    }
    param_1 = param_1 + 0x300;
    uVar9 = uVar9 + 1;
  } while( true );
}

// === snd_EGG_Sound_8054b8c4 (0x8054b8c4) ===
void snd_EGG_Sound_8054b8c4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1 + 0x304;
  piVar8 = (int *)(param_1 + 0x2704);
  uVar7 = 0;
  do {
    if (*(byte *)(iRam00000000 + 0x24) <= uVar7) {
      return;
    }
    if (((int)uVar7 < 0) || (0xb < (int)uVar7)) {
      uVar3 = 0xff;
    }
    else {
      uVar3 = (uint)*(byte *)(iRam00000000 + uVar7 + 0x2920);
    }
    iVar4 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((1 << (uVar3 & 0x3f) & *(uint *)(iVar4 + 0x48)) != 0) && (uVar3 != *(byte *)(iVar4 + 0x59))
       ) {
      iVar4 = -1;
      uVar5 = 0;
      iVar10 = 3;
      do {
        if (((int)uVar5 < 0) || (0xb < (int)uVar5)) {
          uVar1 = 0xff;
        }
        else {
          uVar1 = (uint)*(byte *)(iRam00000000 + uVar5 + 0x2920);
        }
        if (uVar3 == uVar1) {
          iVar4 = iVar4 + 1;
          if (uVar5 == uVar7) break;
        }
        uVar1 = uVar5 + 1;
        if (((int)uVar1 < 0) || (0xb < (int)uVar1)) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = (uint)*(byte *)(iRam00000000 + uVar1 + 0x2920);
        }
        if (uVar3 == uVar2) {
          iVar4 = iVar4 + 1;
          if (uVar1 == uVar7) break;
        }
        uVar1 = uVar5 + 2;
        if (((int)uVar1 < 0) || (0xb < (int)uVar1)) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = (uint)*(byte *)(iRam00000000 + uVar1 + 0x2920);
        }
        if (uVar3 == uVar2) {
          iVar4 = iVar4 + 1;
          if (uVar1 == uVar7) break;
        }
        uVar1 = uVar5 + 3;
        if (((int)uVar1 < 0) || (0xb < (int)uVar1)) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = (uint)*(byte *)(iRam00000000 + uVar1 + 0x2920);
        }
        if ((uVar3 == uVar2) && (iVar4 = iVar4 + 1, uVar1 == uVar7)) break;
        uVar5 = uVar5 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (iVar4 == 0) {
        uVar3 = 0;
        piVar6 = piVar8;
        iVar4 = iVar9;
        do {
          if (*(char *)(iVar4 + 0x1a) == '\x10') {
            *piVar6 = 0;
          }
          else if ((*piVar6 == 0) && (*(char *)(iVar4 + 0x1b) != 0)) {
            iVar10 = 0;
            if (*(char *)(iVar4 + 0x1c) != 0) {
              iVar10 = iVar4 + 4;
            }
            FUN_segment_0__80687980
                      (*(char *)(iVar4 + 0x1a),*(char *)(iVar4 + 0x1b),iVar10,uVar7 & 0xff);
            *piVar6 = 1;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + 0x20;
        } while (uVar3 < 0x18);
      }
    }
    iVar9 = iVar9 + 0x300;
    piVar8 = piVar8 + 0x18;
    uVar7 = uVar7 + 1;
  } while( true );
}

// === snd_EGG_Sound_8054bb70 (0x8054bb70) ===
void snd_EGG_Sound_8054bb70(int param_1,uint param_2)

{
  undefined uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined auStack_28 [28];
  
  FUN_segment_0__804434e4(auStack_28);
  uVar5 = 0;
  if (param_2 != 0) {
    if ((8 < param_2) && (uVar7 = param_2 - 1 >> 3, param_2 != 8)) {
      do {
        cVar6 = (char)uVar5;
        *(char *)(param_1 + uVar5) = cVar6;
        iVar4 = param_1 + uVar5;
        *(char *)(iVar4 + 1) = cVar6 + '\x01';
        *(char *)(iVar4 + 2) = cVar6 + '\x02';
        uVar5 = uVar5 + 8;
        *(char *)(iVar4 + 3) = cVar6 + '\x03';
        *(char *)(iVar4 + 4) = cVar6 + '\x04';
        *(char *)(iVar4 + 5) = cVar6 + '\x05';
        *(char *)(iVar4 + 6) = cVar6 + '\x06';
        *(char *)(iVar4 + 7) = cVar6 + '\a';
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar4 = param_2 - uVar5;
    puVar2 = (undefined *)(param_1 + uVar5);
    if (uVar5 < param_2) {
      do {
        *puVar2 = (char)uVar5;
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = param_2 - 1;
  puVar2 = (undefined *)(param_1 + iVar4);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar3 = FUN_segment_0__8044364c(auStack_28,iVar4 + 1);
    uVar1 = *puVar2;
    *puVar2 = *(undefined *)(param_1 + iVar3);
    puVar2 = puVar2 + -1;
    *(undefined *)(param_1 + iVar3) = uVar1;
  }
  FUN_segment_0__804435b8(auStack_28,0xffffffff);
  return;
}

// === EGG_Sound_assertFail_8054bc90 (0x8054bc90) ===
void EGG_Sound_assertFail_8054bc90(void)

{
  undefined auStack_d0 [12];
  undefined4 local_c4;
  undefined4 **local_c0;
  undefined4 **local_b4 [3];
  undefined4 **local_a8 [3];
  undefined4 **local_9c [3];
  undefined4 **local_90 [3];
  undefined4 **local_84 [3];
  undefined4 **local_78 [3];
  undefined4 **local_6c [3];
  undefined4 **local_60 [3];
  undefined4 **local_54 [3];
  undefined4 *local_48 [3];
  undefined4 local_3c [6];
  
  local_c0 = local_b4;
  local_b4[0] = local_a8;
  local_a8[0] = local_9c;
  local_9c[0] = local_90;
  local_90[0] = local_84;
  local_48[0] = local_3c;
  local_84[0] = local_78;
  local_78[0] = local_6c;
  local_6c[0] = local_60;
  local_60[0] = local_54;
  local_54[0] = local_48;
  local_c4 = 0;
  local_3c[0] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_d0,4);
}

// === EGG_Sound_validate_8054bf70 (0x8054bf70) ===
int EGG_Sound_validate_8054bf70(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8054bfb0 (0x8054bfb0) ===
int EGG_Sound_validate_8054bfb0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_assertFail_8054bff0 (0x8054bff0) ===
void EGG_Sound_assertFail_8054bff0(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x3f8);
  }
  return;
}

// === snd_EGG_Sound_8054c0c4 (0x8054c0c4) ===
void snd_EGG_Sound_8054c0c4(void)

{
  if (iRam00000000 != 0) {
    EGG_Sound_validate_8054c958(iRam00000000,1);
    iRam00000000 = 0;
  }
  return;
}

// === EGG_Sound_validate_8054c108 (0x8054c108) ===
void EGG_Sound_validate_8054c108(int param_1)

{
  EGG_Sound_validate_80546b58(uRam00000000);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x18,0,4);
}

// === snd_EGG_Sound_8054c460 (0x8054c460) ===
void snd_EGG_Sound_8054c460(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar2 != 0) {
    iVar2 = snd_EGG_Sound_80546b18(iRam00000000);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      uVar3 = *(uint *)(iVar2 + 0x48);
      bVar1 = (uVar3 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar2 + 0x59) & 0x3f))) ==
              uVar3;
    }
    if (!bVar1) {
      uVar3 = 0;
      do {
        EGG_Sound_validate_80549f24
                  (*(undefined4 *)
                    (*(int *)((uVar3 & 0xff) * 4 +
                              iRam00000000 +
                              *(int *)(iRam00000000 + (uVar3 & 0xff) * 0x20 + 0x27a0) * 0x30 + 0x150
                             ) + 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0xc);
    }
    EGG_Sound_assertFail_8054d080(param_1);
    EGG_Sound_validate_8054d1dc(param_1);
    EGG_Sound_validate_8054d614(param_1);
    iVar2 = FUN_segment_0__80554c44(iRam00000000);
    if (((iVar2 == 0) && (iVar2 = FUN_segment_0__80554cdc(iRam00000000), iVar2 != 0)) &&
       (iVar2 = FUN_segment_0__80554c14(iRam00000000), iVar2 != 0)) {
      FUN_segment_0__80554ba8(iRam00000000);
    }
  }
  return;
}

// === snd_EGG_Sound_8054c5b4 (0x8054c5b4) ===
int snd_EGG_Sound_8054c5b4(int param_1)

{
  if (*(char *)(param_1 + 0x3d) == '\x02') {
    return (int)*(char *)(param_1 + 0x3c);
  }
  return -1;
}

// === snd_EGG_Sound_8054c5d4 (0x8054c5d4) ===
undefined4 snd_EGG_Sound_8054c5d4(int param_1)

{
  if (*(char *)(param_1 + 0x3d) != 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0;
}

// === snd_EGG_Sound_8054c630 (0x8054c630) ===
int snd_EGG_Sound_8054c630(int param_1)

{
  return param_1 + 0x30;
}

// === snd_EGG_Sound_8054c638 (0x8054c638) ===
int snd_EGG_Sound_8054c638(int param_1,uint param_2,int param_3)

{
  if (param_2 == *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
    return (int)*(char *)(param_1 + param_3 * 8 + 0x1c);
  }
  return (int)*(char *)(param_1 + param_2 * 0x38 + param_3 * 8 + 0x54);
}

// === snd_EGG_Sound_8054c688 (0x8054c688) ===
int snd_EGG_Sound_8054c688(int param_1,uint param_2,int param_3)

{
  if (param_2 == *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
    return (int)*(char *)(param_1 + param_3 * 8 + 0x1d);
  }
  return (int)*(char *)(param_1 + param_2 * 0x38 + param_3 * 8 + 0x55);
}

// === snd_EGG_Sound_8054c6d8 (0x8054c6d8) ===
int snd_EGG_Sound_8054c6d8(int param_1,uint param_2,int param_3)

{
  if (param_2 == *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
    return (int)*(char *)(param_1 + param_3 * 8 + 0x1e);
  }
  return (int)*(char *)(param_1 + param_2 * 0x38 + param_3 * 8 + 0x56);
}

// === snd_EGG_Sound_8054c728 (0x8054c728) ===
int snd_EGG_Sound_8054c728(int param_1,uint param_2,int param_3)

{
  if (param_2 == *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
    return param_1 + param_3 * 8 + 0x18;
  }
  return param_1 + param_2 * 0x38 + param_3 * 8 + 0x50;
}

// === snd_EGG_Sound_8054c770 (0x8054c770) ===
undefined snd_EGG_Sound_8054c770(int param_1,uint param_2,int param_3)

{
  if (param_2 == *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59)) {
    return *(undefined *)(param_1 + param_3 * 8 + 0x1f);
  }
  return *(undefined *)(param_1 + param_2 * 0x38 + param_3 * 8 + 0x57);
}

// === snd_EGG_Sound_8054c7f0 (0x8054c7f0) ===
bool snd_EGG_Sound_8054c7f0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar1 == 0) {
    bVar3 = true;
  }
  else {
    iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    uVar2 = *(uint *)(iVar1 + 0x48);
    bVar3 = (uVar2 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar1 + 0x59) & 0x3f))) == uVar2;
  }
  return bVar3;
}

// === snd_EGG_Sound_8054c874 (0x8054c874) ===
uint snd_EGG_Sound_8054c874(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3d) == 0) {
    iVar1 = 2;
  }
  else if ((*(uint *)(param_1 + 0x2c) & 0x80000000) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return (2U - iVar1 | iVar1 - 2U) >> 0x1f;
}

// === EGG_Sound_validate_8054c958 (0x8054c958) ===
int EGG_Sound_validate_8054c958(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      iVar1 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      if (((1 << (uVar2 & 0x3f) & *(uint *)(iVar1 + 0x48)) != 0) &&
         (uVar2 != *(byte *)(iVar1 + 0x59))) {
        iVar1 = param_1 + (uVar2 & 0xff) * 8;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430
                  (*(undefined4 *)(iVar1 + 0x350),*(undefined4 *)(iVar1 + 0x354),0,
                   *(undefined4 *)(param_1 + (uVar2 & 0xff) * 4 + 0x3b0));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xc);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_8054ca18 (0x8054ca18) ===
void EGG_Sound_validate_8054ca18(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x18,0,4);
}

// === EGG_Sound_validate_8054cb64 (0x8054cb64) ===
void EGG_Sound_validate_8054cb64(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x50,0,4);
}

// === EGG_Sound_validate_8054cc58 (0x8054cc58) ===
void EGG_Sound_validate_8054cc58(undefined4 param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2 + 0x10,0,4);
}

// === EGG_Sound_validate_8054cd34 (0x8054cd34) ===
void EGG_Sound_validate_8054cd34(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0,4);
}

// === EGG_Sound_assertFail_8054cda0 (0x8054cda0) ===
void EGG_Sound_assertFail_8054cda0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8054d014 (0x8054d014) ===
void snd_EGG_Sound_8054d014(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    EGG_Sound_validate_80549f24
              (*(undefined4 *)
                (*(int *)((uVar1 & 0xff) * 4 +
                          iRam00000000 +
                          *(int *)(iRam00000000 + (uVar1 & 0xff) * 0x20 + 0x27a0) * 0x30 + 0x150) +
                4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xc);
  return;
}

// === EGG_Sound_assertFail_8054d080 (0x8054d080) ===
void EGG_Sound_assertFail_8054d080(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8054d1dc (0x8054d1dc) ===
void EGG_Sound_validate_8054d1dc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = 0;
  do {
    uVar7 = 1 << (uVar5 & 0x3f);
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((uVar7 & *(uint *)(iVar2 + 0x48)) != 0) && (uVar5 != *(byte *)(iVar2 + 0x59))) {
      iVar6 = (uVar5 & 0xff) * 0x20;
      iVar2 = (uVar5 & 0xff) * 4;
      if (*(int *)(*(int *)(*(int *)(*(int *)(iRam00000000 + iVar6 + 0x27a8) * 0x30 +
                                     iVar2 + iRam00000000 + 0x150) + 0xc) + 8) == 0x38) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430();
      }
      iVar3 = snd_EGG_Sound_80546b18(iRam00000000);
      if (iVar3 == 0) {
        bVar1 = true;
      }
      else {
        iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
        uVar4 = *(uint *)(iVar3 + 0x48);
        bVar1 = (uVar4 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar3 + 0x59) & 0x3f))) ==
                uVar4;
      }
      if ((bVar1) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(iRam00000000 + iVar6 + 0x27a0) * 0x30 +
                                     iVar2 + iRam00000000 + 0x150) + 4) + 8) != 0)) {
        *(uint *)(param_1 + 0x3e4) = *(uint *)(param_1 + 0x3e4) | uVar7;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  return;
}

// === EGG_Sound_validate_8054d3ec (0x8054d3ec) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EGG_Sound_validate_8054d3ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    uVar3 = *(uint *)(iVar2 + 0x48);
    bVar1 = (uVar3 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar2 + 0x59) & 0x3f))) == uVar3;
  }
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_3,param_4,0,_DAT_800000f8 / 4000);
  }
  return;
}

// === EGG_Sound_validate_8054d614 (0x8054d614) ===
void EGG_Sound_validate_8054d614(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar4 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar4 == 0) {
    bVar3 = true;
  }
  else {
    iVar4 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    uVar11 = *(uint *)(iVar4 + 0x48);
    bVar3 = (uVar11 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar4 + 0x59) & 0x3f))) ==
            uVar11;
  }
  if (bVar3) {
    iVar13 = param_1 + 0x40;
    uVar11 = 0;
    iVar4 = param_1;
    do {
      uVar12 = 1 << (uVar11 & 0x3f);
      iVar5 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      uVar10 = *(uint *)(iVar5 + 0x48);
      if (((uVar12 & uVar10) != 0) && (uVar8 = (uint)*(byte *)(iVar5 + 0x59), uVar11 != uVar8)) {
        if (uVar8 == *(byte *)(iVar5 + 0x5a)) {
          if (*(char *)(param_1 + 0x3d) == 0) {
            if ((((*(int *)(param_1 + 0x2c) != 0) &&
                 (*(int *)(param_1 + 0x2c) == *(int *)(iVar4 + 100))) &&
                (*(int *)(param_1 + 0x28) == *(int *)(iVar4 + 0x60))) &&
               (*(char *)(param_1 + 0x3f) == *(char *)(iVar4 + 0x77))) {
              *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 1000) | uVar12;
            }
            uVar10 = *(uint *)(param_1 + 1000);
            if (uVar10 == 0) {
              bVar3 = false;
            }
            else {
              if (*(int *)(param_1 + 0x2c) != 0) {
                uVar10 = uVar10 | 1 << (*(byte *)(iRam00000000 +
                                                  *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59) &
                                       0x3f);
              }
              uVar8 = *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48);
              bVar3 = (uVar8 & uVar10) == uVar8;
            }
            if (bVar3) {
              *(undefined *)(param_1 + 0x3d) = 1;
            }
          }
          else if (*(char *)(param_1 + 0x3d) == '\x01') {
            if (((*(char *)(param_1 + 0x3c) != -1) &&
                (*(char *)(param_1 + 0x3c) == *(char *)(iVar4 + 0x74))) &&
               (*(char *)(param_1 + 0x3e) == *(char *)(iVar4 + 0x76))) {
              pcVar9 = (char *)(param_1 + 0x30);
              pcVar6 = (char *)(iVar13 + 0x28);
              iVar5 = 2;
              do {
                if (*pcVar9 != *pcVar6) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                if (pcVar9[1] != pcVar6[1]) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                if (pcVar9[2] != pcVar6[2]) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                if (pcVar9[3] != pcVar6[3]) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                if (pcVar9[4] != pcVar6[4]) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                if (pcVar9[5] != pcVar6[5]) {
                  bVar3 = false;
                  goto LAB_segment_0__8054d88c;
                }
                pcVar6 = pcVar6 + 6;
                pcVar9 = pcVar9 + 6;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              bVar3 = true;
LAB_segment_0__8054d88c:
              if (bVar3) {
                *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | uVar12;
              }
            }
            uVar10 = *(uint *)(param_1 + 0x3ec);
            if (uVar10 == 0) {
              bVar3 = false;
            }
            else {
              if (*(char *)(param_1 + 0x3c) != -1) {
                uVar10 = uVar10 | 1 << (*(byte *)(iRam00000000 +
                                                  *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59) &
                                       0x3f);
              }
              uVar8 = *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48);
              bVar3 = (uVar8 & uVar10) == uVar8;
            }
            if (bVar3) {
              *(undefined *)(param_1 + 0x3d) = 2;
            }
          }
        }
        else if (uVar11 == *(byte *)(iVar5 + 0x5a)) {
          if (*(char *)(param_1 + 0x3d) == 0) {
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + 100);
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x60);
            *(undefined *)(param_1 + 0x3f) = *(undefined *)(iVar4 + 0x77);
            if (*(char *)(iVar4 + 0x75) != 0) {
              *(undefined *)(param_1 + 0x3d) = 1;
            }
          }
          else if (*(char *)(param_1 + 0x3d) == '\x01') {
            uVar7 = *(uint *)(param_1 + 0x3f0);
            if (uVar7 == 0) {
              bVar3 = false;
            }
            else {
              if (*(char *)(param_1 + 0x1e) != 'C') {
                uVar7 = uVar7 | 1 << (uVar8 & 0x3f);
              }
              bVar3 = (uVar10 & uVar7) == uVar10;
            }
            if (bVar3) {
              bVar1 = *(byte *)(iVar4 + 0x76);
              cVar2 = *(char *)(iVar4 + 0x74);
              if (((1 << (bVar1 & 0x3f) & uVar10) == 0) && (cVar2 != -1)) {
                *(char *)(param_1 + (uint)bVar1 * 0x38 + 0x56) = cVar2;
              }
              *(byte *)(param_1 + 0x3e) = bVar1;
              *(char *)(param_1 + 0x3c) = cVar2;
                    /* WARNING: Subroutine does not return */
              FUN_segment_0__80443430(param_1 + 0x30,iVar13 + 0x28,0xc);
            }
            if (1 < *(byte *)(iVar4 + 0x75)) {
              *(undefined *)(param_1 + 0x3d) = 2;
            }
          }
        }
        iVar5 = snd_EGG_Sound_80546b18(iRam00000000);
        if (iVar5 == 0) {
          bVar3 = true;
        }
        else {
          iVar5 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
          uVar10 = *(uint *)(iVar5 + 0x48);
          bVar3 = (uVar10 & (*(uint *)(param_1 + 0x3e0) | 1 << (*(byte *)(iVar5 + 0x59) & 0x3f))) ==
                  uVar10;
        }
        if ((bVar3) && (*(char *)(iVar4 + 0x56) != 'C')) {
          *(uint *)(param_1 + 0x3f0) = *(uint *)(param_1 + 0x3f0) | uVar12;
        }
        if (*(int *)(param_1 + 0x3e4) != 0) {
          *(undefined *)(param_1 + 0x3d) = 2;
        }
      }
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + 0x38;
      iVar4 = iVar4 + 0x38;
    } while (uVar11 < 0xc);
  }
  return;
}

// === snd_EGG_Sound_8054da98 (0x8054da98) ===
void snd_EGG_Sound_8054da98(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_28 [2];
  undefined auStack_20 [28];
  
  FUN_segment_0__804434e4(auStack_20);
  local_28[0] = 0;
  uVar1 = snd_EGG_Sound_80549970(iRam00000000,0);
  if (uVar1 < 0xc) {
    uVar1 = (-*(uint *)(iRam00000000 + 0xb78) | *(uint *)(iRam00000000 + 0xb78)) >> 0x1f;
  }
  else {
    uVar1 = FUN_segment_0__8044364c(auStack_20,2);
  }
  if (uVar1 != 0) {
    local_28[0] = local_28[0] | 0x80000000;
  }
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    snd_EGG_Sound_8054e6ec(param_1,local_28);
  }
  else if ((0 < iVar2) && (iVar2 < 3)) {
    snd_EGG_Sound_8054e3f4(param_1,local_28);
  }
  param_1[0xb] = local_28[0];
  FUN_segment_0__804435b8(auStack_20,0xffffffff);
  return;
}

// === snd_EGG_Sound_8054db78 (0x8054db78) ===
void snd_EGG_Sound_8054db78(int param_1)

{
  undefined4 uVar1;
  undefined auStack_28 [36];
  
  FUN_segment_0__804434e4(auStack_28);
  uVar1 = FUN_segment_0__804435f8(auStack_28);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_segment_0__804435b8(auStack_28,0xffffffff);
  return;
}

// === snd_EGG_Sound_8054dbc0 (0x8054dbc0) ===
void snd_EGG_Sound_8054dbc0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined auStack_28 [24];
  
  FUN_segment_0__804434e4(auStack_28);
  uVar11 = 0xffffffff;
  uVar10 = 0;
  iVar6 = *(int *)(iRam00000000 + 0x291c) * 0x58;
  uVar7 = 0;
  uVar8 = 0;
  uVar5 = *(uint *)(iRam00000000 + iVar6 + 0x48);
  iVar12 = 6;
  iVar4 = iRam00000000;
  do {
    if ((1 << (uVar8 & 0x3f) & uVar5) != 0) {
      uVar7 = uVar7 + 1;
      if (uVar8 == *(byte *)(iRam00000000 + iVar6 + 0x59)) {
        if (*(short *)(iRam00000000 + 0x36) < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
        }
        uVar1 = *(ushort *)(iVar3 + 0x9018);
      }
      else {
        uVar1 = *(ushort *)(iVar4 + 0x180);
      }
      uVar2 = (uint)uVar1;
      uVar10 = uVar10 + uVar2;
      if (uVar2 < uVar11) {
        uVar11 = uVar2;
      }
    }
    if ((1 << (uVar8 + 1 & 0x3f) & uVar5) != 0) {
      uVar7 = uVar7 + 1;
      if (uVar8 + 1 == (uint)*(byte *)(iRam00000000 + iVar6 + 0x59)) {
        if (*(short *)(iRam00000000 + 0x36) < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
        }
        uVar1 = *(ushort *)(iVar3 + 0x9018);
      }
      else {
        uVar1 = *(ushort *)(iVar4 + 0x240);
      }
      uVar2 = (uint)uVar1;
      uVar10 = uVar10 + uVar2;
      if (uVar2 < uVar11) {
        uVar11 = uVar2;
      }
    }
    iVar4 = iVar4 + 0x180;
    uVar8 = uVar8 + 2;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  uVar10 = uVar10 / (uVar7 & 0xffff);
  uVar9 = 1;
  uVar5 = FUN_segment_0__8044364c(auStack_28,100);
  if (*(int *)(iRam00000000 + 0xb70) == 8) {
    if ((uVar11 < 0x14b4) || (uVar10 < 0x1644)) {
      if ((0x12bf < uVar11) && (0x144f < uVar10)) {
        if (uVar5 < 0x3c) {
          uVar9 = 1;
        }
        else if (uVar5 < 100) {
          uVar9 = 2;
        }
        else {
          uVar9 = 3;
        }
      }
    }
    else if (uVar5 < 0x14) {
      uVar9 = 1;
    }
    else if (uVar5 < 0x46) {
      uVar9 = 2;
    }
    else {
      uVar9 = 3;
    }
  }
  else if ((uVar11 < 5000) || (uVar10 < 0x1644)) {
    if ((0x1193 < uVar11) && (0x144f < uVar10)) {
      if (uVar5 < 0x3c) {
        uVar9 = 1;
      }
      else {
        uVar9 = 3;
        if (uVar5 < 100) {
          uVar9 = 2;
        }
      }
    }
  }
  else if (uVar5 < 0x14) {
    uVar9 = 1;
  }
  else if (uVar5 < 0x46) {
    uVar9 = 2;
  }
  else {
    uVar9 = 3;
  }
  *(undefined *)(param_1 + 0x3f) = uVar9;
  FUN_segment_0__804435b8(auStack_28,0xffffffff);
  return;
}

// === snd_EGG_Sound_8054de4c (0x8054de4c) ===
void snd_EGG_Sound_8054de4c(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined auStack_28 [32];
  
  uVar4 = 0;
  uVar6 = 0;
  uVar3 = *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48);
  iVar7 = 2;
  do {
    if ((1 << (uVar4 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((1 << (uVar4 + 1 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((1 << (uVar4 + 2 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((1 << (uVar4 + 3 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((1 << (uVar4 + 4 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    if ((1 << (uVar4 + 5 & 0x3f) & uVar3) != 0) {
      uVar6 = uVar6 + 1;
    }
    uVar4 = uVar4 + 6;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (uVar6 < 2) {
    return;
  }
  FUN_segment_0__804434e4(auStack_28);
  iVar7 = FUN_segment_0__8044364c(auStack_28,uVar6);
  iVar5 = 0;
  uVar3 = 0;
  iVar8 = 0xc;
  do {
    if ((1 << (uVar3 & 0x3f) &
        *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) != 0) {
      if (iVar5 == iVar7) {
        *(char *)((int)param_1 + 0x3e) = (char)uVar3;
        uVar4 = (uint)*(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x59);
        if (uVar3 == uVar4) {
          uVar6 = 0;
          while( true ) {
            if ((uVar3 & 0xff) == uVar4) {
              bVar1 = *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
            }
            else {
              bVar1 = *(byte *)(*(int *)(iRam00000000 + 0x291c) * 0x58 +
                                (uVar3 & 0xff) * 4 + iRam00000000 + 0x5b);
            }
            if (bVar1 <= uVar6) break;
            uVar6 = uVar6 + 1;
          }
          *(undefined *)(param_1 + 0xf) = *(undefined *)((int)param_1 + 0x1e);
        }
        else {
          uVar6 = 0;
          while( true ) {
            if ((uVar3 & 0xff) == uVar4) {
              bVar1 = *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
            }
            else {
              bVar1 = *(byte *)(*(int *)(iRam00000000 + 0x291c) * 0x58 +
                                (uVar3 & 0xff) * 4 + iRam00000000 + 0x5b);
            }
            if (bVar1 <= uVar6) break;
            uVar6 = uVar6 + 1;
          }
          *(undefined *)(param_1 + 0xf) = *(undefined *)((int)param_1 + uVar3 * 0x38 + 0x56);
        }
LAB_segment_0__8054e06c:
        if (*(char *)(param_1 + 0xf) == -1) {
          if ((*param_1 == 1) || (*param_1 == 3)) {
            uVar3 = FUN_segment_0__8044364c(auStack_28,0x20);
            if (uVar3 == *(uint *)(iRam00000000 + 0xb68)) {
              bVar2 = false;
              if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
                bVar2 = true;
              }
              if (bVar2) {
                iVar7 = FUN_segment_0__8044364c(auStack_28,0x1f);
                iVar7 = iVar7 + uVar3;
                uVar3 = iVar7 + 1;
                if (0x1f < uVar3) {
                  uVar3 = iVar7 - 0x1e;
                }
              }
            }
            *(char *)(param_1 + 0xf) = (char)uVar3;
          }
          else {
            uVar3 = FUN_segment_0__8044364c(auStack_28,10);
            if (uVar3 + 0x20 == *(int *)(iRam00000000 + 0xb68)) {
              bVar2 = false;
              if ((6 < *(int *)(iRam00000000 + 0xb70)) && (*(int *)(iRam00000000 + 0xb70) < 0xb)) {
                bVar2 = true;
              }
              if (bVar2) {
                iVar7 = FUN_segment_0__8044364c(auStack_28,9);
                iVar7 = iVar7 + uVar3;
                uVar3 = iVar7 + 1;
                if (9 < uVar3) {
                  uVar3 = iVar7 - 8;
                }
              }
            }
            *(char *)(param_1 + 0xf) = (char)uVar3 + ' ';
          }
        }
        FUN_segment_0__804435b8(auStack_28,0xffffffff);
        return;
      }
      iVar5 = iVar5 + 1;
    }
    uVar3 = uVar3 + 1;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) goto LAB_segment_0__8054e06c;
  } while( true );
}

// === snd_EGG_Sound_8054e198 (0x8054e198) ===
void snd_EGG_Sound_8054e198(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = 0;
  uVar5 = 0;
  iVar8 = 6;
  do {
    if ((1 << (uVar5 & 0x3f) &
        *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) != 0) {
      uVar6 = 0;
      while( true ) {
        iVar4 = *(int *)(iRam00000000 + 0x291c) * 0x58;
        iVar3 = iRam00000000 + iVar4;
        if ((uVar5 & 0xff) == (uint)*(byte *)(iVar3 + 0x59)) {
          bVar1 = *(byte *)(iVar3 + 0x58);
        }
        else {
          bVar1 = *(byte *)(iVar4 + (uVar5 & 0xff) * 4 + iRam00000000 + 0x5b);
        }
        if (bVar1 <= uVar6) break;
        iVar3 = param_1 + uVar2;
        uVar2 = uVar2 + 1;
        *(char *)(iVar3 + 0x30) = (char)uVar5;
        uVar6 = uVar6 + 1;
      }
    }
    uVar6 = uVar5 + 1;
    if ((1 << (uVar6 & 0x3f) &
        *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x48)) != 0) {
      uVar7 = 0;
      while( true ) {
        iVar4 = *(int *)(iRam00000000 + 0x291c) * 0x58;
        iVar3 = iRam00000000 + iVar4;
        if ((uVar6 & 0xff) == (uint)*(byte *)(iVar3 + 0x59)) {
          bVar1 = *(byte *)(iVar3 + 0x58);
        }
        else {
          bVar1 = *(byte *)(iVar4 + (uVar6 * 4 & 0x3fc) + iRam00000000 + 0x5b);
        }
        if (bVar1 <= uVar7) break;
        iVar3 = param_1 + uVar2;
        uVar2 = uVar2 + 1;
        *(char *)(iVar3 + 0x30) = (char)uVar6;
        uVar7 = uVar7 + 1;
      }
    }
    uVar5 = uVar5 + 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (uVar2 < 0xc) {
    if (((8 < 0xc - uVar2) && (uVar2 < 0xd)) && (uVar5 = 0xb - uVar2 >> 3, uVar2 < 4)) {
      do {
        iVar8 = param_1 + uVar2;
        uVar2 = uVar2 + 8;
        *(undefined *)(iVar8 + 0x30) = 0xff;
        *(undefined *)(iVar8 + 0x31) = 0xff;
        *(undefined *)(iVar8 + 0x32) = 0xff;
        *(undefined *)(iVar8 + 0x33) = 0xff;
        *(undefined *)(iVar8 + 0x34) = 0xff;
        *(undefined *)(iVar8 + 0x35) = 0xff;
        *(undefined *)(iVar8 + 0x36) = 0xff;
        *(undefined *)(iVar8 + 0x37) = 0xff;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar8 = 0xc - uVar2;
    if (uVar2 < 0xc) {
      do {
        iVar3 = param_1 + uVar2;
        uVar2 = uVar2 + 1;
        *(undefined *)(iVar3 + 0x30) = 0xff;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

// === snd_EGG_Sound_8054e3f4 (0x8054e3f4) ===
void snd_EGG_Sound_8054e3f4(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte local_28 [20];
  
  local_28[0] = 0xff;
  local_28[1] = 0xff;
  local_28[2] = 0xff;
  local_28[3] = 0xff;
  local_28[4] = 0xff;
  local_28[5] = 0xff;
  local_28[6] = 0xff;
  local_28[7] = 0xff;
  local_28[8] = 0xff;
  local_28[9] = 0xff;
  local_28[10] = 0xff;
  local_28[0xb] = 0xff;
  EGG_Sound_assertFail_8054bc90(*param_1 == 1,local_28);
  pbVar4 = local_28;
  uVar5 = 0;
  uVar6 = 0;
  iVar7 = 0;
  bVar3 = false;
  iVar13 = 0xc;
  do {
    uVar8 = (uint)*pbVar4;
    iVar9 = *(int *)(iRam00000000 + 0x291c) * 0x58;
    iVar12 = iRam00000000 + iVar9;
    if ((1 << (uVar8 & 0x3f) & *(uint *)(iVar12 + 0x48)) != 0) {
      iVar7 = iVar7 + 1;
      if (iVar7 == *(int *)(iVar12 + 0x40)) {
        uVar11 = uVar8 << 1;
        uVar10 = 0;
        while( true ) {
          iVar12 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar9 = iRam00000000 + iVar12;
          if (uVar8 == *(byte *)(iVar9 + 0x59)) {
            bVar1 = *(byte *)(iVar9 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar12 + uVar8 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar10) break;
          if (uVar6 < uVar5) {
            bVar3 = false;
            uVar6 = uVar6 + 1;
            *param_2 = *param_2 | 1 << (uVar11 & 0x3f);
          }
          else if (uVar5 < uVar6) {
            bVar3 = true;
            uVar5 = uVar5 + 1;
          }
          else if (bVar3) {
            bVar3 = true;
            uVar5 = uVar5 + 1;
          }
          else {
            bVar3 = false;
            uVar6 = uVar6 + 1;
            *param_2 = *param_2 | 1 << (uVar11 & 0x3f);
          }
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 + 1;
        }
      }
      else if (uVar6 < uVar5) {
        uVar11 = uVar8 << 1;
        uVar10 = 0;
        while( true ) {
          iVar12 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar9 = iRam00000000 + iVar12;
          if (uVar8 == *(byte *)(iVar9 + 0x59)) {
            bVar1 = *(byte *)(iVar9 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar12 + uVar8 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar10) break;
          uVar2 = uVar11 & 0x3f;
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 + 1;
          *param_2 = *param_2 | 1 << uVar2;
          bVar3 = false;
          uVar6 = uVar6 + 1;
        }
      }
      else if (uVar5 < uVar6) {
        uVar11 = 0;
        while( true ) {
          if (uVar8 == *(byte *)(iVar12 + 0x59)) {
            bVar1 = *(byte *)(iVar12 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar9 + uVar8 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar11) break;
          bVar3 = true;
          uVar11 = uVar11 + 1;
          uVar5 = uVar5 + 1;
        }
      }
      else if (bVar3) {
        uVar11 = 0;
        while( true ) {
          if (uVar8 == *(byte *)(iVar12 + 0x59)) {
            bVar1 = *(byte *)(iVar12 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar9 + uVar8 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar11) break;
          bVar3 = true;
          uVar11 = uVar11 + 1;
          uVar5 = uVar5 + 1;
        }
      }
      else {
        uVar11 = uVar8 << 1;
        uVar10 = 0;
        while( true ) {
          iVar12 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar9 = iRam00000000 + iVar12;
          if (uVar8 == *(byte *)(iVar9 + 0x59)) {
            bVar1 = *(byte *)(iVar9 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar12 + uVar8 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar10) break;
          uVar2 = uVar11 & 0x3f;
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 + 1;
          *param_2 = *param_2 | 1 << uVar2;
          bVar3 = false;
          uVar6 = uVar6 + 1;
        }
      }
    }
    pbVar4 = pbVar4 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  return;
}

// === snd_EGG_Sound_8054e6ec (0x8054e6ec) ===
void snd_EGG_Sound_8054e6ec(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte local_28 [24];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  snd_EGG_Sound_8054bb70(local_28,0xc);
  pbVar3 = local_28;
  uVar4 = 0;
  uVar5 = 0;
  iVar6 = 0;
  iVar11 = 0xc;
  do {
    uVar2 = (uint)*pbVar3;
    iVar7 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if ((1 << (uVar2 & 0x3f) & *(uint *)(iVar7 + 0x48)) != 0) {
      iVar6 = iVar6 + 1;
      if (iVar6 == *(int *)(iVar7 + 0x40)) {
        uVar9 = uVar2 << 1;
        uVar10 = 0;
        while( true ) {
          iVar8 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar7 = iRam00000000 + iVar8;
          if (uVar2 == *(byte *)(iVar7 + 0x59)) {
            bVar1 = *(byte *)(iVar7 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar8 + uVar2 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar10) break;
          if (uVar4 < uVar5) {
            uVar4 = uVar4 + 1;
          }
          else {
            uVar5 = uVar5 + 1;
            *param_2 = *param_2 | 1 << (uVar9 & 0x3f);
          }
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
        }
      }
      else if (uVar4 < uVar5) {
        uVar9 = 0;
        while( true ) {
          if (uVar2 == *(byte *)(iVar7 + 0x59)) {
            bVar1 = *(byte *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x58);
          }
          else {
            bVar1 = *(byte *)(*(int *)(iRam00000000 + 0x291c) * 0x58 + uVar2 * 4 + iRam00000000 +
                             0x5b);
          }
          if (bVar1 <= uVar9) break;
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 + 1;
        }
      }
      else {
        uVar9 = uVar2 << 1;
        uVar10 = 0;
        while( true ) {
          iVar8 = *(int *)(iRam00000000 + 0x291c) * 0x58;
          iVar7 = iRam00000000 + iVar8;
          if (uVar2 == *(byte *)(iVar7 + 0x59)) {
            bVar1 = *(byte *)(iVar7 + 0x58);
          }
          else {
            bVar1 = *(byte *)(iVar8 + uVar2 * 4 + iRam00000000 + 0x5b);
          }
          if (bVar1 <= uVar10) break;
          uVar10 = uVar10 + 1;
          uVar5 = uVar5 + 1;
          *param_2 = *param_2 | 1 << (uVar9 & 0x3f);
          uVar9 = uVar9 + 1;
        }
      }
    }
    pbVar3 = pbVar3 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}

// === EGG_Sound_assertFail_8054e8dc (0x8054e8dc) ===
void EGG_Sound_assertFail_8054e8dc(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(1000);
  }
  return;
}

// === EGG_Sound_assertFail_8054ea04 (0x8054ea04) ===
void EGG_Sound_assertFail_8054ea04(void)

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

// === EGG_Sound_validate_8054ea44 (0x8054ea44) ===
void EGG_Sound_validate_8054ea44(int param_1)

{
  int iVar1;
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1c,iVar1 + 0x8fb8,0x40);
}

// === EGG_Sound_validate_8054eb8c (0x8054eb8c) ===
void EGG_Sound_validate_8054eb8c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 4);
}

// === EGG_Sound_validate_8054ecf8 (0x8054ecf8) ===
void EGG_Sound_validate_8054ecf8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1c);
}

// === EGG_Sound_validate_8054ed28 (0x8054ed28) ===
void EGG_Sound_validate_8054ed28(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5c);
}

// === EGG_Sound_validate_8054ed58 (0x8054ed58) ===
void EGG_Sound_validate_8054ed58(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5c);
}

// === EGG_Sound_assertFail_8054ed60 (0x8054ed60) ===
void EGG_Sound_assertFail_8054ed60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x8ff0);
}

// === EGG_Sound_validate_8054ed8c (0x8054ed8c) ===
void EGG_Sound_validate_8054ed8c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  else {
    *(int *)(param_1 + 0x3e4) = param_2;
    iVar1 = EGG_Sound_validate_80546a5c(uRam00000000);
    if (iVar1 != 0) {
      if ((*(int **)(param_1 + 0x3e4))[1] != 0 || **(int **)(param_1 + 0x3e4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(param_1 + 0x9c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 0x9c);
    }
  }
  return;
}

// === snd_EGG_Sound_8054ee94 (0x8054ee94) ===
bool snd_EGG_Sound_8054ee94(int param_1)

{
  return *(int *)(param_1 + 0x3e4) == 0;
}

// === EGG_Sound_validate_8054eea4 (0x8054eea4) ===
void EGG_Sound_validate_8054eea4(int param_1,int param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + param_2 * 0xc + 0x204);
}

// === EGG_Sound_validate_8054eedc (0x8054eedc) ===
void EGG_Sound_validate_8054eedc(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2);
}

// === EGG_Sound_validate_8054ef0c (0x8054ef0c) ===
void EGG_Sound_validate_8054ef0c(int param_1,undefined4 *param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x5c,param_2,*param_2,param_2[1]);
}

// === EGG_Sound_validate_8054ef44 (0x8054ef44) ===
void EGG_Sound_validate_8054ef44(undefined4 param_1,undefined4 *param_2)

{
  undefined auStack_18 [16];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18,param_2,*param_2,param_2[1]);
}

// === EGG_Sound_validate_8054efbc (0x8054efbc) ===
undefined4 EGG_Sound_validate_8054efbc(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(*(int *)(iRam00000000 + 0x14) + (uVar1 & 0xff) * 0x8cc0 + 8) == 0x524b5044) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(iRam00000000 + (uVar1 & 0xff) * 0x93f0 + 0x8ff0);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0xffffffff;
}

// === EGG_Sound_validate_8054f088 (0x8054f088) ===
void EGG_Sound_validate_8054f088(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x9c);
}

// === EGG_Sound_validate_8054f0e8 (0x8054f0e8) ===
void EGG_Sound_validate_8054f0e8(undefined4 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 1);
}

// === EGG_Sound_assertFail_8054f1ec (0x8054f1ec) ===
void EGG_Sound_assertFail_8054f1ec(void)

{
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x260);
  }
  return;
}

// === snd_EGG_Sound_8054f380 (0x8054f380) ===
void snd_EGG_Sound_8054f380(void)

{
  if (iRam00000000 != 0) {
    FUN_segment_0__805504e4(iRam00000000,1);
    iRam00000000 = 0;
  }
  return;
}

// === snd_EGG_Sound_8054f3d0 (0x8054f3d0) ===
void snd_EGG_Sound_8054f3d0(undefined *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = 0;
  EGG_Sound_validate_80546b58(uRam00000000);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0xff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar4 = 6;
  do {
    uVar1 = uVar3 & 0xff;
    uVar2 = uVar3 + 1 & 0xff;
    uVar3 = uVar3 + 2;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x20) = 0;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x38) = 0;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x3c) = 0;
    param_1[uVar1 * 0x30 + 0x4c] = 0;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x2c) = 0xffffffff;
    param_1[uVar1 * 0x30 + 0x4d] = 0;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar1 * 0x30 + 0x30) = 0xffffffff;
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
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x20) = 0;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x38) = 0;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x3c) = 0;
    param_1[uVar2 * 0x30 + 0x4c] = 0;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x2c) = 0xffffffff;
    param_1[uVar2 * 0x30 + 0x4d] = 0;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + uVar2 * 0x30 + 0x30) = 0xffffffff;
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
  return;
}

// === snd_EGG_Sound_8054f51c (0x8054f51c) ===
void snd_EGG_Sound_8054f51c(char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*param_1 != 0) {
    FUN_segment_0__805507b4();
    FUN_segment_0__805508fc(param_1);
    iVar3 = snd_EGG_Sound_80546b18(iRam00000000);
    if ((iVar3 != 0) &&
       (((uVar4 = EGG_Sound_validate_805466a4(iRam00000000), 0x27 < uVar4 ||
         (5 < *(uint *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x44))) &&
        (*(char *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x8b) == 0)))) {
      snd_EGG_Sound_80546508();
    }
    iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    if (((*(int *)(iVar3 + 0x40) == 1) && (param_1[1] == 0)) && (*(char *)(iVar3 + 0x8b) != 0)
       ) {
      snd_EGG_Sound_80546520();
    }
    iVar3 = snd_EGG_Sound_80546b18(iRam00000000);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else if (*(uint *)(param_1 + 8) == 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
      uVar4 = *(uint *)(iVar3 + 0x48);
      uVar4 = (uint)((uVar4 & (*(uint *)(param_1 + 8) | 1 << (*(byte *)(iVar3 + 0x59) & 0x3f))) ==
                    uVar4);
    }
    if (uVar4 != 0) {
      uVar4 = 0;
      iVar3 = 3;
      do {
        uVar1 = uVar4 & 0xff;
        uVar5 = *(uint *)(param_1 + uVar1 * 0x30 + 0x34);
        uVar2 = uVar5;
        if (0x42 < uVar5) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 != 0xffffffff) && (*(int *)(param_1 + uVar1 * 0x30 + 0x20) != 0)) {
          if (uVar5 < 0x43) {
            iVar3 = *(int *)(param_1 + uVar1 * 0x30 + 0x34);
          }
          else {
            iVar3 = -1;
          }
          goto LAB_segment_0__8054f7bc;
        }
        uVar1 = uVar4 + 1 & 0xff;
        uVar5 = *(uint *)(param_1 + uVar1 * 0x30 + 0x34);
        uVar2 = uVar5;
        if (0x42 < uVar5) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 != 0xffffffff) && (*(int *)(param_1 + uVar1 * 0x30 + 0x20) != 0)) {
          if (uVar5 < 0x43) {
            iVar3 = *(int *)(param_1 + uVar1 * 0x30 + 0x34);
          }
          else {
            iVar3 = -1;
          }
          goto LAB_segment_0__8054f7bc;
        }
        uVar1 = uVar4 + 2 & 0xff;
        uVar5 = *(uint *)(param_1 + uVar1 * 0x30 + 0x34);
        uVar2 = uVar5;
        if (0x42 < uVar5) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 != 0xffffffff) && (*(int *)(param_1 + uVar1 * 0x30 + 0x20) != 0)) {
          if (uVar5 < 0x43) {
            iVar3 = *(int *)(param_1 + uVar1 * 0x30 + 0x34);
          }
          else {
            iVar3 = -1;
          }
          goto LAB_segment_0__8054f7bc;
        }
        uVar1 = uVar4 + 3 & 0xff;
        uVar5 = *(uint *)(param_1 + uVar1 * 0x30 + 0x34);
        uVar2 = uVar5;
        if (0x42 < uVar5) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 != 0xffffffff) && (*(int *)(param_1 + uVar1 * 0x30 + 0x20) != 0)) {
          if (uVar5 < 0x43) {
            iVar3 = *(int *)(param_1 + uVar1 * 0x30 + 0x34);
          }
          else {
            iVar3 = -1;
          }
          goto LAB_segment_0__8054f7bc;
        }
        uVar4 = uVar4 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = -1;
LAB_segment_0__8054f7bc:
      uVar4 = (-iVar3 - 1U | iVar3 + 1U) >> 0x1f;
    }
    if ((((uVar4 != 0) ||
         ((*(char *)(iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58 + 0x8b) != 0 &&
          (iVar3 = snd_EGG_Sound_80546b18(), iVar3 != 0)))) &&
        (iVar3 = FUN_segment_0__80554c44(iRam00000000), iVar3 == 0)) &&
       ((iVar3 = FUN_segment_0__80554cdc(iRam00000000), iVar3 != 0 &&
        (iVar3 = FUN_segment_0__80554c14(iRam00000000), iVar3 != 0)))) {
      FUN_segment_0__80554ba8(iRam00000000);
    }
  }
  return;
}

// === snd_EGG_Sound_8054f8f8 (0x8054f8f8) ===
uint snd_EGG_Sound_8054f8f8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = snd_EGG_Sound_80546b18(iRam00000000);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (*(uint *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = iRam00000000 + *(int *)(iRam00000000 + 0x291c) * 0x58;
    uVar3 = *(uint *)(iVar2 + 0x48);
    uVar3 = (uint)((uVar3 & (*(uint *)(param_1 + 8) | 1 << (*(byte *)(iVar2 + 0x59) & 0x3f))) ==
                  uVar3);
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    iVar2 = 3;
    do {
      iVar4 = param_1 + (uVar3 & 0xff) * 0x30;
      uVar5 = *(uint *)(iVar4 + 0x34);
      uVar1 = uVar5;
      if (0x42 < uVar5) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 != 0xffffffff) && (*(int *)(iVar4 + 0x20) != 0)) {
        if (uVar5 < 0x43) {
          iVar2 = *(int *)(iVar4 + 0x34);
        }
        else {
          iVar2 = -1;
        }
        goto LAB_segment_0__8054fae0;
      }
      iVar4 = param_1 + (uVar3 + 1 & 0xff) * 0x30;
      uVar5 = *(uint *)(iVar4 + 0x34);
      uVar1 = uVar5;
      if (0x42 < uVar5) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 != 0xffffffff) && (*(int *)(iVar4 + 0x20) != 0)) {
        if (uVar5 < 0x43) {
          iVar2 = *(int *)(iVar4 + 0x34);
        }
        else {
          iVar2 = -1;
        }
        goto LAB_segment_0__8054fae0;
      }
      iVar4 = param_1 + (uVar3 + 2 & 0xff) * 0x30;
      uVar5 = *(uint *)(iVar4 + 0x34);
      uVar1 = uVar5;
      if (0x42 < uVar5) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 != 0xffffffff) && (*(int *)(iVar4 + 0x20) != 0)) {
        if (uVar5 < 0x43) {
          iVar2 = *(int *)(iVar4 + 0x34);
        }
        else {
          iVar2 = -1;
        }
        goto LAB_segment_0__8054fae0;
      }
      iVar4 = param_1 + (uVar3 + 3 & 0xff) * 0x30;
      uVar5 = *(uint *)(iVar4 + 0x34);
      uVar1 = uVar5;
      if (0x42 < uVar5) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 != 0xffffffff) && (*(int *)(iVar4 + 0x20) != 0)) {
        if (uVar5 < 0x43) {
          iVar2 = *(int *)(iVar4 + 0x34);
        }
        else {
          iVar2 = -1;
        }
        goto LAB_segment_0__8054fae0;
      }
      uVar3 = uVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = -1;
LAB_segment_0__8054fae0:
    uVar3 = (-iVar2 - 1U | iVar2 + 1U) >> 0x1f;
  }
  return uVar3;
}

// === snd_EGG_Sound_8054fb08 (0x8054fb08) ===
undefined4 snd_EGG_Sound_8054fb08(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(param_1 + param_2 * 0x30 + param_3 * 4 + 0x24);
}

// === snd_EGG_Sound_8054fb20 (0x8054fb20) ===
undefined4 snd_EGG_Sound_8054fb20(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)(param_1 + param_2 * 0x30 + param_3 * 4 + 0x2c);
}

// === snd_EGG_Sound_8054fb38 (0x8054fb38) ===
bool snd_EGG_Sound_8054fb38(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  uVar2 = 0;
  iVar5 = 2;
  do {
    if ((((param_2 == *(byte *)(iRam00000000 + uVar2 + 0x2920)) &&
         (iVar4 = iVar4 + 1, uVar3 = uVar2, iVar4 == param_3)) ||
        ((uVar3 = uVar2 + 1, param_2 == *(byte *)(iRam00000000 + uVar3 + 0x2920) &&
         (iVar4 = iVar4 + 1, iVar4 == param_3)))) ||
       ((((uVar3 = uVar2 + 2, param_2 == *(byte *)(iRam00000000 + uVar3 + 0x2920) &&
          (iVar4 = iVar4 + 1, iVar4 == param_3)) ||
         ((uVar3 = uVar2 + 3, param_2 == *(byte *)(iRam00000000 + uVar3 + 0x2920) &&
          (iVar4 = iVar4 + 1, iVar4 == param_3)))) ||
        (((uVar3 = uVar2 + 4, param_2 == *(byte *)(iRam00000000 + uVar3 + 0x2920) &&
          (iVar4 = iVar4 + 1, iVar4 == param_3)) ||
         ((param_2 == *(byte *)(iRam00000000 + uVar2 + 5 + 0x2920) &&
          (iVar4 = iVar4 + 1, uVar3 = uVar2 + 5, iVar4 == param_3))))))))
    goto LAB_segment_0__8054fc30;
    uVar2 = uVar2 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = 0xffffffff;
LAB_segment_0__8054fc30:
  uVar2 = 0;
  iVar4 = 0xc;
  while( true ) {
    iVar5 = (uVar2 & 0xff) * 0x30;
    uVar1 = *(uint *)(param_1 + iVar5 + 0x34);
    if (0x42 < uVar1) {
      uVar1 = 0xffffffff;
    }
    if (uVar1 != 0xffffffff) break;
    uVar2 = uVar2 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return (bool)2;
    }
  }
  return (1 << (uVar3 & 0x3f) & *(uint *)(param_1 + iVar5 + 0x38)) == 0;
}

// === snd_EGG_Sound_8054fc94 (0x8054fc94) ===
undefined snd_EGG_Sound_8054fc94(int param_1,int param_2,int param_3)

{
  return *(undefined *)(param_1 + param_2 * 0x30 + param_3 + 0x4d);
}

// === snd_EGG_Sound_8054fca8 (0x8054fca8) ===
undefined4 snd_EGG_Sound_8054fca8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = 3;
  while( true ) {
    iVar2 = param_1 + (uVar4 & 0xff) * 0x30;
    uVar3 = *(uint *)(iVar2 + 0x34);
    uVar1 = uVar3;
    if (0x42 < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((uVar1 != 0xffffffff) && (*(int *)(iVar2 + 0x20) != 0)) {
      if (0x42 < uVar3) {
        return 0xffffffff;
      }
      return *(undefined4 *)(iVar2 + 0x34);
    }
    iVar2 = param_1 + (uVar4 + 1 & 0xff) * 0x30;
    uVar3 = *(uint *)(iVar2 + 0x34);
    uVar1 = uVar3;
    if (0x42 < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((uVar1 != 0xffffffff) && (*(int *)(iVar2 + 0x20) != 0)) break;
    iVar2 = param_1 + (uVar4 + 2 & 0xff) * 0x30;
    uVar3 = *(uint *)(iVar2 + 0x34);
    uVar1 = uVar3;
    if (0x42 < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((uVar1 != 0xffffffff) && (*(int *)(iVar2 + 0x20) != 0)) {
      if (0x42 < uVar3) {
        return 0xffffffff;
      }
      return *(undefined4 *)(iVar2 + 0x34);
    }
    iVar2 = param_1 + (uVar4 + 3 & 0xff) * 0x30;
    uVar3 = *(uint *)(iVar2 + 0x34);
    uVar1 = uVar3;
    if (0x42 < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((uVar1 != 0xffffffff) && (*(int *)(iVar2 + 0x20) != 0)) {
      if (0x42 < uVar3) {
        return 0xffffffff;
      }
      return *(undefined4 *)(iVar2 + 0x34);
    }
    uVar4 = uVar4 + 4;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      return 0xffffffff;
    }
  }
  if (0x42 < uVar3) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar2 + 0x34);
}

// === snd_EGG_Sound_8054fe10 (0x8054fe10) ===
uint snd_EGG_Sound_8054fe10(int param_1)

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
      return *(uint *)(param_1 + iVar1 + 0x38) >> 0x1f;
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
      return *(uint *)(param_1 + iVar1 + 0x38) >> 0x1f;
    }
    iVar1 = (uVar3 + 3 & 0xff) * 0x30;
    uVar2 = *(uint *)(param_1 + iVar1 + 0x34);
    if (0x42 < uVar2) {
      uVar2 = 0xffffffff;
    }
    if (uVar2 != 0xffffffff) {
      return *(uint *)(param_1 + iVar1 + 0x38) >> 0x1f;
    }
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 2;
    }
  }
  return *(uint *)(param_1 + iVar1 + 0x38) >> 0x1f;
}

// === EGG_Sound_validate_8056020c (0x8056020c) ===
void EGG_Sound_validate_8056020c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x4200) = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x4208,0,0x2a00);
}

// === snd_EGG_Sound_8056037c (0x8056037c) ===
void snd_EGG_Sound_8056037c(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    EGG_Sound_validate_80563b58(uRam00000000);
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x7578) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// === snd_EGG_Sound_805603d8 (0x805603d8) ===
bool snd_EGG_Sound_805603d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x4200) = param_4;
  *(undefined4 *)(param_1 + 0x4550) = param_3;
  *(undefined4 *)(param_1 + 0x4554) = param_2;
  iVar1 = *(int *)(iRam00000000 + 0x84);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 3;
  }
  else if (iVar1 == 3) {
    uVar2 = 4;
  }
  else if (iVar1 == 4) {
    uVar2 = 5;
  }
  else if (iVar1 == 5) {
    uVar2 = 6;
  }
  else if (iVar1 == 6) {
    uVar2 = 7;
  }
  else {
    uVar2 = 1;
  }
  EGG_Sound_validate_80563d04(iRam00000000,iRam00000000 + 0x5c,uVar2,1);
  iVar1 = EGG_Sound_validate_80563fec(iRam00000000,param_2,0,param_3,param_1 + 0x4204);
  if (iVar1 == 0) {
    snd_EGG_Sound_80561e68(param_1);
    EGG_Sound_validate_80563b58(iRam00000000);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x7578) = 3;
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return iVar1 != 0;
}

// === snd_EGG_Sound_80560528 (0x80560528) ===
bool snd_EGG_Sound_80560528(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x4200) = param_4;
  *(undefined4 *)(param_1 + 0x4550) = param_3;
  *(int *)(param_1 + 0x4554) = param_2 + 0x3f;
  iVar1 = *(int *)(iRam00000000 + 0x84);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 3;
  }
  else if (iVar1 == 3) {
    uVar2 = 4;
  }
  else if (iVar1 == 4) {
    uVar2 = 5;
  }
  else if (iVar1 == 5) {
    uVar2 = 6;
  }
  else if (iVar1 == 6) {
    uVar2 = 7;
  }
  else {
    uVar2 = 1;
  }
  EGG_Sound_validate_80563d04(iRam00000000,iRam00000000 + 0x5c,uVar2,1);
  iVar1 = EGG_Sound_validate_80563fec(iRam00000000,param_2 + 0x3f,0,param_3,param_1 + 0x4204);
  if (iVar1 == 0) {
    snd_EGG_Sound_80561e68(param_1);
    EGG_Sound_validate_80563b58(iRam00000000);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x7578) = 3;
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return iVar1 != 0;
}

// === snd_EGG_Sound_80560678 (0x80560678) ===
bool snd_EGG_Sound_80560678(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x4200) = param_4;
  *(undefined4 *)(param_1 + 0x4550) = param_3;
  *(undefined4 *)(param_1 + 0x4554) = param_2;
  iVar1 = *(int *)(iRam00000000 + 0x84);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 3;
  }
  else if (iVar1 == 3) {
    uVar2 = 4;
  }
  else if (iVar1 == 4) {
    uVar2 = 5;
  }
  else if (iVar1 == 5) {
    uVar2 = 6;
  }
  else if (iVar1 == 6) {
    uVar2 = 7;
  }
  else {
    uVar2 = 1;
  }
  EGG_Sound_validate_80563d04(iRam00000000,iRam00000000 + 0x5c,uVar2,1);
  iVar1 = EGG_Sound_validate_80563fec(iRam00000000,param_2,0,param_3,param_1 + 0x4204);
  if (iVar1 == 0) {
    snd_EGG_Sound_80561e68(param_1);
    EGG_Sound_validate_80563b58(iRam00000000);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x7578) = 3;
    *(undefined *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return iVar1 != 0;
}

// === EGG_Sound_validate_805607c8 (0x805607c8) ===
void EGG_Sound_validate_805607c8(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  *(undefined4 *)(param_1 + 0x4204) = param_4;
  if (param_3 == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x4200) = uVar1;
  *(undefined4 *)(param_1 + 0x420c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x4210,0,0x2800);
}

// === EGG_Sound_validate_8056093c (0x8056093c) ===
void EGG_Sound_validate_8056093c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x4204) = param_3;
  *(undefined4 *)(param_1 + 0x4200) = 5;
  *(undefined4 *)(param_1 + 0x420c) = *(undefined4 *)(param_1 + param_2 * 0x70 + 0x75a4);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x4210,0,0x2800);
}

// === EGG_Sound_validate_80560a90 (0x80560a90) ===
void EGG_Sound_validate_80560a90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x4204) = param_4;
  *(undefined4 *)(param_1 + 0x4200) = 4;
  *(undefined4 *)(param_1 + 0x420c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x4210,0,0x2800);
}

// === EGG_Sound_assertFail_80560c10 (0x80560c10) ===
void EGG_Sound_assertFail_80560c10(void)

{
  undefined auStack_1d8 [448];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1d8,0,0x1c0);
}

// === snd_EGG_Sound_80560e54 (0x80560e54) ===
undefined4 snd_EGG_Sound_80560e54(int param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  iVar1 = FUN_segment_0__80558ac4(param_1,param_1 + 0x43c0,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    uVar2 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x43c4) = 0;
    *(undefined **)(param_1 + 0x43c8) = param_2;
    iVar1 = *(int *)(iRam00000000 + 0x84);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else if (iVar1 == 1) {
      uVar2 = 2;
    }
    else if (iVar1 == 2) {
      uVar2 = 3;
    }
    else if (iVar1 == 3) {
      uVar2 = 4;
    }
    else if (iVar1 == 4) {
      uVar2 = 5;
    }
    else if (iVar1 == 5) {
      uVar2 = 6;
    }
    else if (iVar1 == 6) {
      uVar2 = 7;
    }
    else {
      uVar2 = 1;
    }
    EGG_Sound_validate_80563d04(iRam00000000,iRam00000000 + 0x5c,uVar2,1);
    iVar1 = snd_EGG_Sound_80560f94(param_1,*(undefined4 *)(param_1 + 0x43c0),0,param_1 + 0x42e0);
    if (iVar1 == 0) {
      EGG_Sound_validate_80563b58(iRam00000000);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// === snd_EGG_Sound_80560f94 (0x80560f94) ===
undefined4 snd_EGG_Sound_80560f94(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_2 = *(int *)(param_1 + 0x58) - param_2;
  if ((*(int *)(param_1 + 0x41f4) == 2) && (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58)))
  {
    if (*(char *)(param_1 + 0x55) == '\x01') {
      iVar1 = 1;
      goto LAB_segment_0__80560ff8;
    }
    if (*(char *)(param_1 + 0x55) == '\x02') {
      iVar1 = 2;
      goto LAB_segment_0__80560ff8;
    }
  }
  iVar1 = 3;
LAB_segment_0__80560ff8:
  if (iVar1 != 3) {
    param_2 = param_2 + -1;
  }
  if ((param_2 < 0) || (9 < param_2)) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffd7ab;
    *(undefined4 *)(param_1 + 0x14) = 3;
    uVar2 = 0;
  }
  else {
    if (param_3 == 0) {
      iVar1 = *(int *)(param_1 + param_2 * 4 + 0x68);
    }
    else {
      iVar1 = *(int *)(param_1 + param_2 * 4 + 0x90);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0xffffd7ad;
      *(undefined4 *)(param_1 + 0x14) = 3;
      uVar2 = 0;
    }
    else {
      iVar1 = EGG_Sound_validate_80564248(uRam00000000,iVar1,param_4);
      if (iVar1 == 0) {
        snd_EGG_Sound_80561e68(param_1);
        uVar2 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
        uVar2 = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        *(undefined4 *)(param_1 + 0x7578) = 0x16;
        *(undefined *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
  }
  return uVar2;
}

// === EGG_Sound_assertFail_805610d0 (0x805610d0) ===
void EGG_Sound_assertFail_805610d0(void)

{
  undefined auStack_1d0 [452];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1d0,0,0x1c0);
}

// === EGG_Sound_assertFail_80561168 (0x80561168) ===
void EGG_Sound_assertFail_80561168(void)

{
  undefined auStack_1d8 [460];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_1d8,0,0x1c0);
}

// === EGG_Sound_validate_80561298 (0x80561298) ===
undefined4 EGG_Sound_validate_80561298(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auStack_18 [8];
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_segment_0__804092dc(param_3,iVar3 + (uVar2 & 0xffff) * 0x1c0 + 0x59d0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_18,param_3 + 8,8);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x1e);
  return 0;
}

// === EGG_Sound_validate_80561374 (0x80561374) ===
undefined4 EGG_Sound_validate_80561374(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined auStack_18 [8];
  
  uVar2 = 0;
  do {
    iVar1 = FUN_segment_0__804092dc(param_4,param_2 + (uVar2 & 0xffff) * 0x1c0 + 0x59d0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_18,param_4 + 8,8);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x1e);
  return 0;
}

// === EGG_Sound_validate_80561420 (0x80561420) ===
undefined4 EGG_Sound_validate_80561420(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(undefined *)(param_1 + 0x20) = 1;
  }
  return 0;
}

// === EGG_Sound_validate_8056149c (0x8056149c) ===
undefined4 EGG_Sound_validate_8056149c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x758c));
    }
    *(undefined *)(param_1 + 0x20) = 0;
  }
  return 0;
}

// === EGG_Sound_validate_80561508 (0x80561508) ===
void EGG_Sound_validate_80561508(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2);
}

// === EGG_Sound_assertFail_80561574 (0x80561574) ===
void EGG_Sound_assertFail_80561574(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0);
}

// === EGG_Sound_validate_805615c4 (0x805615c4) ===
/* WARNING: Removing unreachable block (ram,0x805616ec) */

void EGG_Sound_validate_805615c4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0xc))();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x758c) + 4);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430();
    }
    *(undefined *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2);
}

// === EGG_Sound_validate_8056170c (0x8056170c) ===
/* WARNING: Removing unreachable block (ram,0x80561778) */

void EGG_Sound_validate_8056170c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x758c) + 0x18) + 0x10))();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x758c));
    }
    *(undefined *)(param_1 + 0x20) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2,param_2,0);
}

// === EGG_Sound_validate_80561844 (0x80561844) ===
undefined4 EGG_Sound_validate_80561844(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined auStack_218 [8];
  undefined auStack_210 [516];
  
  iVar1 = EGG_Sound_validate_80565908(param_1 + 0x24,auStack_210,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_210,auStack_218);
  }
  return 1;
}

// === EGG_Sound_validate_80561a68 (0x80561a68) ===
undefined4 EGG_Sound_validate_80561a68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  char local_e8 [104];
  undefined auStack_80 [92];
  undefined4 local_24;
  int local_14;
  
  iVar2 = FUN_segment_0__8040bd4c(param_2);
  if ((iVar2 != 0) && (iVar2 = FUN_segment_0__8040cde0(param_2,param_1), iVar2 != 0)) {
    FUN_segment_0__8040bfc4(local_e8,param_1);
    iVar2 = EGG_Sound_validate_80561b6c(local_e8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(auStack_80,0,0xc,5);
    }
    bVar1 = false;
    if ((local_e8[0] != 0) && (local_14 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      local_24 = param_3;
    }
    FUN_segment_0__8040c638(local_e8,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_80,0,0xc,5);
  }
  return 0;
}

// === EGG_Sound_validate_80561b6c (0x80561b6c) ===
undefined4 EGG_Sound_validate_80561b6c(int param_1)

{
  if ((((*(char *)(param_1 + 0xae) != 0) && (*(char *)(param_1 + 100) == '\x03')) &&
      (*(char *)(param_1 + 0x72) != 0)) &&
     (((*(char *)(param_1 + 0x7e) != 0 && (*(char *)(param_1 + 0x8a) != 0)) &&
      ((-1 < *(int *)(param_1 + 0xb8) && (*(int *)(param_1 + 0xb8) < 0x20)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x18);
  }
  return 0;
}

// === EGG_Sound_assertFail_80561d90 (0x80561d90) ===
void EGG_Sound_assertFail_80561d90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80561e68 (0x80561e68) ===
void snd_EGG_Sound_80561e68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = snd_EGG_Sound_80563b6c(uRam00000000);
  if (iVar1 - 2U < 2) {
    uVar2 = snd_EGG_Sound_80563b74(uRam00000000);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 3;
  }
  else if (iVar1 == 4) {
    uVar2 = snd_EGG_Sound_80563b74(uRam00000000);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 5;
    EGG_Sound_validate_80546538(uRam00000000,5,uVar2);
    iVar1 = EGG_Sound_assertFail_805469b4(uRam00000000);
    if (iVar1 != 0) {
      snd_EGG_Sound_80545dc0(uRam00000000);
    }
  }
  else if (iVar1 == 5) {
    uVar2 = snd_EGG_Sound_80563b74(uRam00000000);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 4;
    EGG_Sound_validate_80546538(uRam00000000,1,uVar2);
    iVar1 = EGG_Sound_assertFail_805469b4(uRam00000000);
    if (iVar1 != 0) {
      snd_EGG_Sound_80545dc0(uRam00000000);
    }
  }
  return;
}

// === EGG_Sound_validate_8056200c (0x8056200c) ===
void EGG_Sound_validate_8056200c(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_18 [20];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,auStack_18);
}

// === EGG_Sound_validate_80562060 (0x80562060) ===
void EGG_Sound_validate_80562060(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(iRam00000000 + 0x84);
  if (iVar1 == 0) {
    uVar3 = 0xeb;
  }
  else if (iVar1 == 1) {
    uVar3 = 0xee;
  }
  else if (iVar1 == 2) {
    uVar3 = 0xf1;
  }
  else if (iVar1 == 3) {
    uVar3 = 0xf4;
  }
  else if (iVar1 == 4) {
    uVar3 = 0xf7;
  }
  else if (iVar1 == 5) {
    uVar3 = 0xfa;
  }
  else if (iVar1 == 6) {
    uVar3 = 0xfd;
  }
  else {
    uVar3 = 0x100;
  }
  uVar2 = EGG_Sound_assertFail_80561d90();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,param_2,iRam00000000,uVar3,uVar2);
}

// === snd_EGG_Sound_80562184 (0x80562184) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_80562184(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_80562410 (0x80562410) ===
undefined4 snd_EGG_Sound_80562410(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_segment_0__804c22bc();
  uVar3 = 0;
  iVar2 = FUN_segment_0__80444a80(uVar1,0,0,0);
  if ((((iVar2 != 0) || (iVar2 = FUN_segment_0__80444a80(uVar1,1,0,0), iVar2 != 0)) ||
      (iVar2 = FUN_segment_0__80444a80(uVar1,2,0,0), iVar2 != 0)) ||
     (iVar2 = FUN_segment_0__80444a80(uVar1,2,1,0), iVar2 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

// === snd_EGG_Sound_805624bc (0x805624bc) ===
undefined4 snd_EGG_Sound_805624bc(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_segment_0__804c22bc(param_2);
  if (iVar3 == 3) {
    bVar2 = true;
    bVar1 = true;
    iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x12);
    if ((iVar3 == 0) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x13), iVar3 == 0)) {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x14), iVar3 == 0)) {
      bVar2 = false;
    }
    if (!bVar2) {
      iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x15);
      if (iVar3 == 0) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  if (iVar3 < 3) {
    if (1 < iVar3) {
      bVar2 = true;
      bVar1 = true;
      iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0xe);
      if ((iVar3 == 0) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0xf), iVar3 == 0)) {
        bVar1 = false;
      }
      if ((!bVar1) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x10), iVar3 == 0)) {
        bVar2 = false;
      }
      if (!bVar2) {
        iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x11);
        if (iVar3 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (-1 < iVar3) {
      return 1;
    }
  }
  else {
    if (iVar3 == 7) {
      bVar2 = true;
      bVar1 = true;
      iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x1a);
      if ((iVar3 == 0) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x1b), iVar3 == 0)) {
        bVar1 = false;
      }
      if ((!bVar1) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x1c), iVar3 == 0)) {
        bVar2 = false;
      }
      if (!bVar2) {
        iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x1d);
        if (iVar3 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (iVar3 < 7) {
      if (iVar3 < 6) {
        return 1;
      }
      bVar2 = true;
      bVar1 = true;
      iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x16);
      if ((iVar3 == 0) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x17), iVar3 == 0)) {
        bVar1 = false;
      }
      if ((!bVar1) && (iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x18), iVar3 == 0)) {
        bVar2 = false;
      }
      if (!bVar2) {
        iVar3 = FUN_segment_0__804384b0(param_1 + 0x8ff8,0x19);
        if (iVar3 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

// === EGG_Sound_validate_80562784 (0x80562784) ===
void EGG_Sound_validate_80562784(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(iRam00000000 + 0x84);
  if (iVar1 == 0) {
    uVar3 = 0x103;
  }
  else if (iVar1 == 1) {
    uVar3 = 0x106;
  }
  else if (iVar1 == 2) {
    uVar3 = 0x109;
  }
  else if (iVar1 == 3) {
    uVar3 = 0x10c;
  }
  else if (iVar1 == 4) {
    uVar3 = 0x10f;
  }
  else if (iVar1 == 5) {
    uVar3 = 0x112;
  }
  else if (iVar1 == 6) {
    uVar3 = 0x115;
  }
  else {
    uVar3 = 0x118;
  }
  uVar2 = EGG_Sound_assertFail_80561d90();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1,param_2,iRam00000000,uVar3,uVar2);
}

// === EGG_Sound_validate_805628a8 (0x805628a8) ===
void EGG_Sound_validate_805628a8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_2 + 0x7f0);
  if (((iVar1 == 0) || (*(int *)(param_2 + 0x7f4) == 0)) ||
     (0xbbff < (uint)(iVar1 + *(int *)(param_2 + 0x7f4)))) {
    *param_1 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + iVar1);
    piVar3 = (int *)(param_2 + iVar1 + 4);
    *param_1 = iVar2;
    if (0 < *param_1) {
      param_1[1] = (uint)*(byte *)((int)piVar3 + iVar2 * 4 + 0x53);
      param_1[5] = *piVar3;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 6,piVar3 + iVar2 + 1,0x4c,0x45e80000);
    }
  }
  return;
}

// === EGG_Sound_assertFail_80562a18 (0x80562a18) ===
void EGG_Sound_assertFail_80562a18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_assertFail_80562a6c (0x80562a6c) ===
void EGG_Sound_assertFail_80562a6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80562b84 (0x80562b84) ===
undefined4 snd_EGG_Sound_80562b84(void)

{
  int iVar1;
  undefined4 local_8 [2];
  
  iVar1 = FUN_segment_0__8043951c(uRam00000000,local_8);
  if (iVar1 == 0) {
    local_8[0] = 0;
  }
  return local_8[0];
}

// === EGG_Sound_assertFail_80562bc4 (0x80562bc4) ===
void EGG_Sound_assertFail_80562bc4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80562c10 (0x80562c10) ===
/* WARNING: Removing unreachable block (ram,0x80562c9c) */
/* WARNING: Removing unreachable block (ram,0x80562cac) */
/* WARNING: Removing unreachable block (ram,0x80562cb8) */
/* WARNING: Removing unreachable block (ram,0x80562ccc) */
/* WARNING: Removing unreachable block (ram,0x80562cd4) */

undefined4 EGG_Sound_validate_80562c10(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_1dc;
  undefined4 local_1d8 [57];
  int local_f4;
  int local_f0;
  undefined auStack_ec [220];
  
  puVar3 = (undefined4 *)(param_2 + -4);
  puVar4 = &uStack_1dc;
  iVar5 = 0x38;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((local_f4 != 0) && (local_f0 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_ec);
  }
  return 0;
}

// === EGG_Sound_validate_80562d20 (0x80562d20) ===
undefined4 EGG_Sound_validate_80562d20(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0xc);
  }
  return 0;
}

// === snd_EGG_Sound_80562e84 (0x80562e84) ===
int snd_EGG_Sound_80562e84(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x41f4) == 2) && (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58)))
  {
    if (*(char *)(param_1 + 0x55) == '\x01') {
      iVar2 = 1;
      goto LAB_segment_0__80562ed0;
    }
    if (*(char *)(param_1 + 0x55) == '\x02') {
      iVar2 = 2;
      goto LAB_segment_0__80562ed0;
    }
  }
  iVar2 = 3;
LAB_segment_0__80562ed0:
  if (iVar2 != 3) {
    if (*(short *)(iRam00000000 + 0x36) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
    }
    iVar2 = iVar2 + 0x5920;
    iVar3 = 0;
    iVar4 = 5;
    do {
      bVar1 = false;
      if ((*(int *)(iVar2 + 0x18) == *(int *)(param_1 + 0x58)) && (*(char *)(iVar2 + 10) != 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        return iVar3;
      }
      if (*(char *)(param_2 + 10) == 0) {
        bVar1 = false;
      }
      else if (*(char *)(iVar2 + 10) == 0) {
        bVar1 = true;
      }
      else if (*(ushort *)(param_2 + 4) < *(ushort *)(iVar2 + 4)) {
        bVar1 = true;
      }
      else if (*(ushort *)(param_2 + 4) == *(ushort *)(iVar2 + 4)) {
        if (*(byte *)(param_2 + 6) < *(byte *)(iVar2 + 6)) {
          bVar1 = true;
        }
        else {
          if ((*(byte *)(param_2 + 6) != *(byte *)(iVar2 + 6)) ||
             (*(ushort *)(iVar2 + 8) <= *(ushort *)(param_2 + 8))) goto LAB_segment_0__80562fc8;
          bVar1 = true;
        }
      }
      else {
LAB_segment_0__80562fc8:
        bVar1 = false;
      }
      if (bVar1) {
        return iVar3;
      }
      iVar2 = iVar2 + 0x1c;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

// === EGG_Sound_validate_80562ff0 (0x80562ff0) ===
void EGG_Sound_validate_80562ff0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined auStack_18 [16];
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  if ((*(int *)(param_1 + 0x41f4) == 2) && (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58)))
  {
    if (*(char *)(param_1 + 0x55) == '\x01') {
      iVar2 = 1;
      goto LAB_segment_0__80563088;
    }
    if (*(char *)(param_1 + 0x55) == '\x02') {
      iVar2 = 2;
      goto LAB_segment_0__80563088;
    }
  }
  iVar2 = 3;
LAB_segment_0__80563088:
  if (iVar2 == 3) {
    *(undefined *)(param_3 + 0x56) = 0;
  }
  else {
    bVar1 = false;
    iVar3 = iVar3 + param_2 * 0x1c;
    if ((*(int *)(iVar3 + 0x5938) == *(int *)(param_1 + 0x58)) &&
       (*(char *)(iVar3 + 0x592a) != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined2 *)(param_3 + 0x50) = *(undefined2 *)(iVar3 + 0x5924);
      *(undefined *)(param_3 + 0x52) = *(undefined *)(iVar3 + 0x5926);
      *(undefined2 *)(param_3 + 0x54) = *(undefined2 *)(iVar3 + 0x5928);
      *(undefined *)(param_3 + 0x56) = *(undefined *)(iVar3 + 0x592a);
      *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(iVar3 + 0x592c);
      *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(iVar3 + 0x5930);
      *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(iVar3 + 0x5934);
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430
                (iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x4e,
                 auStack_18);
    }
    *(undefined *)(param_3 + 0x56) = 0;
  }
  return;
}

// === snd_EGG_Sound_8056319c (0x8056319c) ===
undefined4 snd_EGG_Sound_8056319c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x89b4);
}

// === snd_EGG_Sound_805631a8 (0x805631a8) ===
undefined4 snd_EGG_Sound_805631a8(int param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x41f4) != 2) {
    return 0;
  }
  puVar1 = (ushort *)(param_1 + 400);
  iVar4 = 0;
  do {
    iVar5 = 5;
    puVar2 = puVar1;
    puVar3 = param_2;
    do {
      if ((((puVar2[1] == 0) || (9999 < puVar2[1])) || (*puVar2 == 0)) || (9999 < *puVar2)) {
        return 0;
      }
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + 1;
    param_2 = param_2 + 10;
    puVar1 = puVar1 + 10;
    if (1 < iVar4) {
      return 1;
    }
  } while( true );
}

// === EGG_Sound_assertFail_80563240 (0x80563240) ===
void EGG_Sound_assertFail_80563240(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === snd_EGG_Sound_805632ac (0x805632ac) ===
undefined4 snd_EGG_Sound_805632ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8b00);
}

// === snd_EGG_Sound_805632b8 (0x805632b8) ===
undefined4 snd_EGG_Sound_805632b8(int param_1)

{
  return *(undefined4 *)(param_1 << 2);
}

// === EGG_Sound_validate_805632cc (0x805632cc) ===
void EGG_Sound_validate_805632cc(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar11;
  undefined4 uVar9;
  int iVar10;
  uint uVar12;
  int iVar13;
  bool bVar15;
  uint uVar14;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined auStack_b8 [128];
  undefined4 local_38;
  undefined2 local_34;
  undefined local_32;
  undefined2 local_30;
  undefined local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x41f4) == 2) && (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58)))
  {
    if (*(char *)(param_1 + 0x55) == '\x01') {
      iVar7 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x55) != '\x02') goto LAB_segment_0__80563330;
      iVar7 = 2;
    }
  }
  else {
LAB_segment_0__80563330:
    iVar7 = 3;
  }
  if (iVar7 == 3) {
    return;
  }
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  if (param_3 == 0) {
    local_38 = 0;
    if (*(short *)(iRam00000000 + 0x36) < 0) {
      iVar18 = 0;
    }
    else {
      iVar18 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
    }
    if ((*(int *)(param_1 + 0x41f4) == 2) &&
       (*(int *)(param_1 + 0x8b00) <= *(int *)(param_1 + 0x58))) {
      if (*(char *)(param_1 + 0x55) == '\x01') {
        iVar8 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x55) != '\x02') goto LAB_segment_0__8056340c;
        iVar8 = 2;
      }
    }
    else {
LAB_segment_0__8056340c:
      iVar8 = 3;
    }
    if (iVar8 != 3) {
      bVar15 = false;
      if ((*(int *)(iVar18 + 0x5938) == *(int *)(param_1 + 0x58)) &&
         (*(char *)(iVar18 + 0x592a) != 0)) {
        bVar15 = true;
      }
      if (bVar15) {
        local_34 = *(undefined2 *)(iVar18 + 0x5924);
        local_32 = *(undefined *)(iVar18 + 0x5926);
        local_30 = *(undefined2 *)(iVar18 + 0x5928);
        local_2e = *(undefined *)(iVar18 + 0x592a);
        local_2c = *(undefined4 *)(iVar18 + 0x592c);
        local_28 = *(undefined4 *)(iVar18 + 0x5930);
        local_24 = *(undefined4 *)(iVar18 + 0x5934);
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430
                  (iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x4e,
                   auStack_b8);
      }
    }
    uVar11 = 0xffff;
    if (*(ushort *)(iVar7 + 0x92c8) != 0xffff) {
      uVar11 = *(ushort *)(iVar7 + 0x92c8);
    }
    uVar12 = 0xffff;
    if (uVar11 + 1 < 0xffff) {
      uVar12 = uVar11 + 1;
    }
    *(short *)(iVar7 + 0x92c8) = (short)uVar12;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x50);
  uVar20 = *(undefined4 *)(param_2 + 0x58);
  uVar19 = *(undefined4 *)(param_2 + 0x5c);
  uVar16 = *(undefined4 *)(param_2 + 0x60);
  iVar18 = iVar7 + 0x5974;
  uVar9 = *(undefined4 *)(param_1 + 0x58);
  uVar14 = 4 - param_3;
  uVar12 = 3;
  uVar2 = *(undefined *)(param_2 + 0x52);
  uVar5 = *(undefined2 *)(param_2 + 0x54);
  uVar3 = *(undefined *)(param_2 + 0x56);
  if ((int)param_3 < 4) {
    uVar21 = uVar14 >> 1;
    if (uVar21 != 0) {
      do {
        uVar17 = uVar12 + 1;
        uVar6 = uVar12 & 0xff;
        uVar12 = uVar12 - 2;
        iVar8 = iVar7 + (uVar17 & 0xff) * 0x1c;
        *(undefined2 *)(iVar8 + 0x5924) = *(undefined2 *)(iVar18 + 4);
        *(undefined *)(iVar8 + 0x5926) = *(undefined *)(iVar18 + 6);
        *(undefined2 *)(iVar8 + 0x5928) = *(undefined2 *)(iVar18 + 8);
        *(undefined *)(iVar8 + 0x592a) = *(undefined *)(iVar18 + 10);
        *(undefined4 *)(iVar8 + 0x592c) = *(undefined4 *)(iVar18 + 0xc);
        *(undefined4 *)(iVar8 + 0x5930) = *(undefined4 *)(iVar18 + 0x10);
        *(undefined4 *)(iVar8 + 0x5934) = *(undefined4 *)(iVar18 + 0x14);
        *(undefined4 *)(iVar8 + 0x5938) = *(undefined4 *)(iVar18 + 0x18);
        iVar8 = iVar7 + uVar6 * 0x1c;
        *(undefined2 *)(iVar8 + 0x5924) = *(undefined2 *)(iVar18 + -0x18);
        *(undefined *)(iVar8 + 0x5926) = *(undefined *)(iVar18 + -0x16);
        *(undefined2 *)(iVar8 + 0x5928) = *(undefined2 *)(iVar18 + -0x14);
        *(undefined *)(iVar8 + 0x592a) = *(undefined *)(iVar18 + -0x12);
        *(undefined4 *)(iVar8 + 0x592c) = *(undefined4 *)(iVar18 + -0x10);
        *(undefined4 *)(iVar8 + 0x5930) = *(undefined4 *)(iVar18 + -0xc);
        *(undefined4 *)(iVar8 + 0x5934) = *(undefined4 *)(iVar18 + -8);
        puVar1 = (undefined4 *)(iVar18 + -4);
        iVar18 = iVar18 + -0x38;
        *(undefined4 *)(iVar8 + 0x5938) = *puVar1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      uVar14 = uVar14 & 1;
      if (uVar14 == 0) goto LAB_segment_0__805636d8;
    }
    do {
      uVar21 = uVar12 + 1;
      uVar12 = uVar12 - 1;
      iVar8 = iVar7 + (uVar21 & 0xff) * 0x1c;
      *(undefined2 *)(iVar8 + 0x5924) = *(undefined2 *)(iVar18 + 4);
      *(undefined *)(iVar8 + 0x5926) = *(undefined *)(iVar18 + 6);
      *(undefined2 *)(iVar8 + 0x5928) = *(undefined2 *)(iVar18 + 8);
      *(undefined *)(iVar8 + 0x592a) = *(undefined *)(iVar18 + 10);
      *(undefined4 *)(iVar8 + 0x592c) = *(undefined4 *)(iVar18 + 0xc);
      *(undefined4 *)(iVar8 + 0x5930) = *(undefined4 *)(iVar18 + 0x10);
      *(undefined4 *)(iVar8 + 0x5934) = *(undefined4 *)(iVar18 + 0x14);
      puVar1 = (undefined4 *)(iVar18 + 0x18);
      iVar18 = iVar18 + -0x1c;
      *(undefined4 *)(iVar8 + 0x5938) = *puVar1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
LAB_segment_0__805636d8:
  iVar18 = iVar7 + (param_3 & 0xff) * 0x1c;
  *(undefined2 *)(iVar18 + 0x5924) = uVar4;
  *(undefined *)(iVar18 + 0x5926) = uVar2;
  *(undefined2 *)(iVar18 + 0x5928) = uVar5;
  *(undefined *)(iVar18 + 0x592a) = uVar3;
  *(undefined4 *)(iVar18 + 0x592c) = uVar20;
  *(undefined4 *)(iVar18 + 0x5930) = uVar19;
  *(undefined4 *)(iVar18 + 0x5934) = uVar16;
  *(undefined4 *)(iVar18 + 0x5938) = uVar9;
  if (param_3 == 0) {
    iVar18 = iVar7 + 0x10000;
    *(undefined *)(iVar7 + 0x9398) = 1;
    uVar12 = 0;
    *(undefined *)(iVar7 + 0x9399) = 1;
    iVar8 = 2;
    do {
      iVar13 = iVar18 + (uVar12 & 0xffff) * 0x14;
      if ((*(char *)(iVar13 + -0x6e6e) != 0) &&
         (uVar14 = uVar12, *(int *)(param_1 + 0x58) == *(int *)(iVar13 + -0x6e6c))) break;
      uVar14 = uVar12 + 1;
      iVar13 = iVar18 + (uVar14 & 0xffff) * 0x14;
      if ((*(char *)(iVar13 + -0x6e6e) != 0) &&
         (*(int *)(param_1 + 0x58) == *(int *)(iVar13 + -0x6e6c))) break;
      uVar14 = uVar12 + 2;
      iVar13 = iVar18 + (uVar14 & 0xffff) * 0x14;
      if ((*(char *)(iVar13 + -0x6e6e) != 0) &&
         (*(int *)(param_1 + 0x58) == *(int *)(iVar13 + -0x6e6c))) break;
      uVar14 = uVar12 + 3;
      iVar13 = iVar18 + (uVar14 & 0xffff) * 0x14;
      if ((*(char *)(iVar13 + -0x6e6e) != 0) &&
         (*(int *)(param_1 + 0x58) == *(int *)(iVar13 + -0x6e6c))) break;
      uVar14 = uVar12 + 4;
      iVar13 = iVar18 + (uVar14 & 0xffff) * 0x14;
      if ((*(char *)(iVar13 + -0x6e6e) != 0) &&
         (*(int *)(param_1 + 0x58) == *(int *)(iVar13 + -0x6e6c))) break;
      uVar12 = uVar12 + 5;
      iVar8 = iVar8 + -1;
      uVar14 = 0xffffffff;
    } while (iVar8 != 0);
    if (uVar14 == 0xffffffff) {
      if (*(char *)(iVar7 + 0x9192) == 0) {
        uVar14 = 0;
      }
      else if (*(char *)(iVar7 + 0x91a6) == 0) {
        uVar14 = 1;
      }
      else if (*(char *)(iVar7 + 0x91ba) == 0) {
        uVar14 = 2;
      }
      else if (*(char *)(iVar7 + 0x91ce) == 0) {
        uVar14 = 3;
      }
      else if (*(char *)(iVar7 + 0x91e2) == 0) {
        uVar14 = 4;
      }
      else if (*(char *)(iVar7 + 0x91f6) == 0) {
        uVar14 = 5;
      }
      else if (*(char *)(iVar7 + 0x920a) == 0) {
        uVar14 = 6;
      }
      else if (*(char *)(iVar7 + 0x921e) == 0) {
        uVar14 = 7;
      }
      else if (*(char *)(iVar7 + 0x9232) == 0) {
        uVar14 = 8;
      }
      else if (*(char *)(iVar7 + 0x9246) == 0) {
        uVar14 = 9;
      }
      if (uVar14 == 0xffffffff) {
        iVar18 = 0x7fffffff;
        iVar8 = iVar7 + 0x10000;
        uVar12 = 0;
        iVar13 = 2;
        do {
          iVar10 = *(int *)(iVar8 + (uVar12 & 0xffff) * 0x14 + -0x6e6c);
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
            uVar14 = uVar12;
          }
          iVar10 = *(int *)(iVar8 + (uVar12 + 1 & 0xffff) * 0x14 + -0x6e6c);
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
            uVar14 = uVar12 + 1;
          }
          iVar10 = *(int *)(iVar8 + (uVar12 + 2 & 0xffff) * 0x14 + -0x6e6c);
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
            uVar14 = uVar12 + 2;
          }
          iVar10 = *(int *)(iVar8 + (uVar12 + 3 & 0xffff) * 0x14 + -0x6e6c);
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
            uVar14 = uVar12 + 3;
          }
          iVar10 = *(int *)(iVar8 + (uVar12 + 4 & 0xffff) * 0x14 + -0x6e6c);
          if (iVar10 < iVar18) {
            iVar18 = iVar10;
            uVar14 = uVar12 + 4;
          }
          uVar12 = uVar12 + 5;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        if (uVar14 == 0xffffffff) {
          return;
        }
      }
    }
    uVar16 = *(undefined4 *)(param_1 + 0x58);
    uVar9 = *(undefined4 *)(param_2 + 0x60);
    iVar7 = iVar7 + 0x10000 + (uVar14 & 0xffff) * 0x14;
    uVar2 = *(undefined *)(param_2 + 0x52);
    *(undefined2 *)(iVar7 + -0x6e74) = *(undefined2 *)(param_2 + 0x50);
    uVar4 = *(undefined2 *)(param_2 + 0x54);
    *(undefined *)(iVar7 + -0x6e72) = uVar2;
    uVar2 = *(undefined *)(param_2 + 0x56);
    *(undefined2 *)(iVar7 + -0x6e70) = uVar4;
    *(undefined *)(iVar7 + -0x6e6e) = uVar2;
    *(undefined4 *)(iVar7 + -0x6e6c) = uVar16;
    *(undefined4 *)(iVar7 + -0x6e68) = uVar9;
  }
  return;
}

// === EGG_Sound_validate_80563b58 (0x80563b58) ===
void EGG_Sound_validate_80563b58(undefined4 *param_1)

{
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80563b64 (0x80563b64) ===
undefined4 snd_EGG_Sound_80563b64(undefined4 *param_1)

{
  return *param_1;
}

// === snd_EGG_Sound_80563b6c (0x80563b6c) ===
undefined4 snd_EGG_Sound_80563b6c(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// === snd_EGG_Sound_80563b74 (0x80563b74) ===
undefined4 snd_EGG_Sound_80563b74(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// === EGG_Sound_validate_80563b7c (0x80563b7c) ===
void EGG_Sound_validate_80563b7c(int *param_1)

{
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return;
}

// === EGG_Sound_validate_80563cbc (0x80563cbc) ===
void EGG_Sound_validate_80563cbc(undefined4 *param_1,undefined4 param_2)

{
  param_1[4] = param_2;
  *param_1 = 2;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80563d04 (0x80563d04) ===
void EGG_Sound_validate_80563d04(undefined4 *param_1,int param_2,undefined param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined *)(param_1 + 3) = param_3;
  param_1[2] = 0;
  param_1[0x26] = uVar1;
  *param_1 = 1;
  *(char *)(param_1 + 0x2a) = (char)param_4;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x697,param_2,param_4);
}

// === EGG_Sound_assertFail_80563d80 (0x80563d80) ===
void EGG_Sound_assertFail_80563d80(void)

{
  undefined auStack_2a8 [648];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_2a8,0,0x80);
}

// === EGG_Sound_validate_80563f20 (0x80563f20) ===
undefined4 EGG_Sound_validate_80563f20(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_2 + 0x41;
  piVar2 = param_1 + 6;
  for (iVar3 = 0; iVar3 < *param_2; iVar3 = iVar3 + 1) {
    *piVar2 = (int)piVar1;
    piVar1 = piVar1 + 0x14;
    piVar2 = piVar2 + 1;
  }
  iVar3 = EGG_Sound_validate_80566ee4
                    (0x697,*(undefined *)(param_1 + 3),param_1[0x26],param_1 + 6,param_2 + 1,
                     param_2 + 0x21,*param_2,param_3,0,param_1);
  if (iVar3 != 0) {
    snd_EGG_Sound_80564d38(param_1,7);
    return 0;
  }
  param_1[4] = 7;
  *param_1 = 2;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2,7,0);
}

// === EGG_Sound_validate_80563fec (0x80563fec) ===
undefined4
EGG_Sound_validate_80563fec
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined uVar2;
  
  param_1[6] = param_5;
  if (param_4 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined *)(param_1 + 3);
  }
  iVar1 = EGG_Sound_validate_8056651c(0x697,uVar2,param_2,param_3,0,param_1);
  if (iVar1 != 0) {
    snd_EGG_Sound_80564d38(param_1,1);
    return 0;
  }
  param_1[4] = 1;
  *param_1 = 2;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(2,1,0);
}

// === EGG_Sound_validate_80564094 (0x80564094) ===
void EGG_Sound_validate_80564094
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x20,0x40,0x161,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x20,0x40,0x17f,param_2,*(undefined *)(param_1 + 0xc));
}

// === EGG_Sound_validate_805641bc (0x805641bc) ===
void EGG_Sound_validate_805641bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0x2800,1,0,param_1);
}

// === EGG_Sound_validate_80564248 (0x80564248) ===
void EGG_Sound_validate_80564248(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0xe0,1,0,param_1);
}

// === EGG_Sound_validate_805642cc (0x805642cc) ===
void EGG_Sound_validate_805642cc
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x20,0x40,0x1b2,param_2,param_3);
}

// === EGG_Sound_validate_805643c8 (0x805643c8) ===
void EGG_Sound_validate_805643c8
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined auStack_208 [516];
  
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  uVar1 = 0x262;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  if (*(char *)(param_1 + 0xa8) != 0) {
    uVar1 = 0x25c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            (auStack_208,0x200,0x1e8,uVar1,*(undefined4 *)(param_1 + 0x98),param_2,param_3);
}

// === EGG_Sound_validate_805644a0 (0x805644a0) ===
void EGG_Sound_validate_805644a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000,0,2,0,param_1);
}

// === EGG_Sound_validate_80564530 (0x80564530) ===
void EGG_Sound_validate_80564530(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x1c,0x40,0x267,param_2);
}

// === EGG_Sound_validate_80564624 (0x80564624) ===
void EGG_Sound_validate_80564624(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 != 0) {
    EGG_Sound_validate_80564de0(param_4,*(undefined4 *)(param_4 + 0x10),10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_4 + 0x1c));
}

// === EGG_Sound_validate_805646bc (0x805646bc) ===
void EGG_Sound_validate_805646bc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 != 0) {
    EGG_Sound_validate_80564de0(param_4,*(undefined4 *)(param_4 + 0x10),10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_4 + 0x18));
}

// === EGG_Sound_validate_805647a0 (0x805647a0) ===
void EGG_Sound_validate_805647a0(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_3 == 2) {
    if (param_1 == 0) {
      if (*param_2 == 0) {
        if (param_3[4] == 1) {
          iVar2 = param_2[2];
          if (10 < iVar2) {
            iVar2 = 10;
          }
          if (0 < iVar2) {
            iVar2 = param_3[6];
            *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2[3] + 8);
                    /* WARNING: Subroutine does not return */
            FUN_segment_0__80443430(iVar2 + 8,param_2[3] + 0x14,0x50);
          }
          *(int *)param_3[6] = iVar2;
        }
        param_3[1] = 1;
      }
      else {
        snd_EGG_Sound_80564d38(param_3,param_3[4],*param_2);
      }
    }
    else {
      uVar1 = 2;
      if (param_1 == 1) {
        uVar1 = 6;
      }
      EGG_Sound_validate_80564de0(param_3,param_3[4],uVar1);
    }
  }
  return;
}

// === EGG_Sound_validate_805648ec (0x805648ec) ===
void EGG_Sound_validate_805648ec(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    EGG_Sound_validate_80564de0(param_3,*(undefined4 *)(param_3 + 0x10),1);
    return;
  }
  if (*(int *)(param_3 + 0x10) == 3) {
    if (*(int *)(*param_2 + 8) == -1) {
      EGG_Sound_validate_80564de0(param_3,3,1);
      return;
    }
    uVar1 = *(undefined4 *)(*param_2 + 0x18);
  }
  else {
    uVar1 = *(undefined4 *)(*param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar1,0x2800,1,0,param_3);
}

// === EGG_Sound_validate_80564998 (0x80564998) ===
void EGG_Sound_validate_80564998(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_28 [20];
  
  if (param_1 < 1) {
    *(undefined4 *)(param_3 + 0x20) = 0x282;
    *(undefined4 *)(param_3 + 0x24) = 8;
    *(undefined4 *)(param_3 + 0x2c) = 0x60;
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(uRam00000000,param_3 + 0x20,1,param_3 + 0x30);
  }
  iVar1 = *param_2;
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  if (*(int *)(iVar1 + 0xc) == 0x60) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              (0x79b,auStack_28,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_3 + 0x18));
  }
  *(undefined4 *)(param_3 + 0x20) = 0x27d;
  *(undefined4 *)(param_3 + 0x24) = 8;
  *(undefined4 *)(param_3 + 0x2c) = 0x60;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x18);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000,uVar2,param_3 + 0x20,1);
}

// === EGG_Sound_validate_80564b18 (0x80564b18) ===
void EGG_Sound_validate_80564b18(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_18 [12];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x79b,auStack_18,param_1,param_2);
}

// === EGG_Sound_validate_80564bd4 (0x80564bd4) ===
void EGG_Sound_validate_80564bd4(int param_1,int *param_2,int param_3)

{
  if (param_1 < 1) {
    EGG_Sound_validate_80564de0(param_3,*(undefined4 *)(param_3 + 0x10),1);
  }
  else {
    if (*(int *)(*param_2 + 0xc) == 0x60) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(*param_2 + 8),0x60);
    }
    EGG_Sound_validate_80564de0(param_3,*(undefined4 *)(param_3 + 0x10),8);
  }
  return;
}

// === EGG_Sound_validate_80564c54 (0x80564c54) ===
void EGG_Sound_validate_80564c54(undefined4 param_1,int param_2,int param_3)

{
  **(int **)(param_3 + 0x1c) = param_2;
  if (0x2800 < param_2) {
    EGG_Sound_validate_80564de0(param_3,*(undefined4 *)(param_3 + 0x10),8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_3 + 0x18),param_1,param_2);
}

// === EGG_Sound_validate_80564cc0 (0x80564cc0) ===
void EGG_Sound_validate_80564cc0(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != 0xe0) {
    EGG_Sound_validate_80564de0(param_3,*(undefined4 *)(param_3 + 0x10),8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_3 + 0x18),param_1,0xe0);
}

// === snd_EGG_Sound_80564d38 (0x80564d38) ===
void snd_EGG_Sound_80564d38(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0x68) {
    param_3 = 4;
  }
  else if (param_3 < 0x68) {
    if (param_3 == 100) {
      param_3 = 2;
    }
    else if (param_3 < 100) {
      if (param_3 == 7) {
        param_3 = 1;
      }
      else if ((param_3 < 7) && (5 < param_3)) {
        param_3 = 9;
      }
    }
    else if (param_3 < 0x66) {
      param_3 = 3;
    }
  }
  else if (param_3 == 0x6b) {
    param_3 = 7;
  }
  else if (param_3 < 0x6b) {
    if (param_3 < 0x6a) {
      param_3 = 5;
    }
    else {
      param_3 = 6;
    }
  }
  else if (param_3 < 0x6d) {
    param_3 = 8;
  }
  EGG_Sound_validate_80564de0(param_1,param_2,param_3);
  return;
}

// === EGG_Sound_validate_80564de0 (0x80564de0) ===
void EGG_Sound_validate_80564de0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined auStack_18 [20];
  
  if (param_3 != 0) {
    if (param_3 == 10) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1 + 8,auStack_18);
    }
    iVar1 = param_2 * 10 + 0x283c;
    if (((param_3 - 1U < 3) || (param_3 - 7U < 3)) || (param_3 == 5)) {
      *(undefined4 *)(param_1 + 4) = 2;
      iVar1 = iVar1 + param_3;
    }
    else if ((param_3 == 4) || (param_3 == 6)) {
      *(undefined4 *)(param_1 + 4) = 4;
      iVar1 = iVar1 + param_3;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 4;
      iVar1 = param_2 * 10 + 0x2844;
    }
    *(int *)(param_1 + 8) = -iVar1;
  }
  return;
}

// === EGG_Sound_assertFail_80564ec8 (0x80564ec8) ===
void EGG_Sound_assertFail_80564ec8(void)

{
  undefined auStack_18 [20];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_18);
}

// === snd_EGG_Sound_80564fb4 (0x80564fb4) ===
undefined4 snd_EGG_Sound_80564fb4(undefined4 *param_1)

{
  return *param_1;
}

// === EGG_Sound_assertFail_80564fbc (0x80564fbc) ===
void EGG_Sound_assertFail_80564fbc(void)

{
  undefined auStack_218 [520];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_218);
}

// === EGG_Sound_validate_8056507c (0x8056507c) ===
void EGG_Sound_validate_8056507c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined auStack_218 [512];
  
  if (param_4 != (void *)0) {
    param_4[1] = 0;
    *param_4 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_218,param_3);
}

// === EGG_Sound_assertFail_8056518c (0x8056518c) ===
void EGG_Sound_assertFail_8056518c(void)

{
  undefined auStack_58 [64];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,0x40);
}

// === EGG_Sound_assertFail_805652f0 (0x805652f0) ===
void EGG_Sound_assertFail_805652f0(void)

{
  undefined auStack_208 [516];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_208);
}

// === EGG_Sound_assertFail_80565364 (0x80565364) ===
void EGG_Sound_assertFail_80565364(void)

{
  undefined auStack_208 [516];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_208);
}

// === EGG_Sound_assertFail_805653e8 (0x805653e8) ===
void EGG_Sound_assertFail_805653e8(void)

{
  undefined auStack_48 [64];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_48,0x40);
}

// === EGG_Sound_validate_805654b4 (0x805654b4) ===
void EGG_Sound_validate_805654b4
               (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined auStack_60 [72];
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(2,0x129,0x15);
  }
  if (param_5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_3,param_2[1]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_60,0x40);
}

// === EGG_Sound_assertFail_805657d0 (0x805657d0) ===
void EGG_Sound_assertFail_805657d0(void)

{
  undefined auStack_210 [520];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_210,3);
}

// === EGG_Sound_assertFail_80565888 (0x80565888) ===
void EGG_Sound_assertFail_80565888(void)

{
  undefined auStack_50 [72];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,0x40);
}

// === EGG_Sound_validate_80565908 (0x80565908) ===
void EGG_Sound_validate_80565908(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,param_3);
}

// === EGG_Sound_assertFail_80565960 (0x80565960) ===
void EGG_Sound_assertFail_80565960(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_assertFail_805659b8 (0x805659b8) ===
void EGG_Sound_assertFail_805659b8(void)

{
  undefined auStack_34 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_34,0,0x14);
}

// === EGG_Sound_validate_80565b90 (0x80565b90) ===
/* WARNING: Removing unreachable block (ram,0x80565bfc) */
/* WARNING: Removing unreachable block (ram,0x80565c18) */

undefined4 EGG_Sound_validate_80565b90(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x5e,0);
}

// === EGG_Sound_assertFail_80565d48 (0x80565d48) ===
void EGG_Sound_assertFail_80565d48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x400);
}

// === EGG_Sound_validate_805660d0 (0x805660d0) ===
/* WARNING: Removing unreachable block (ram,0x80566138) */
/* WARNING: Removing unreachable block (ram,0x80566154) */

undefined4 EGG_Sound_validate_805660d0(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x1c7,0);
}

// === EGG_Sound_assertFail_80566294 (0x80566294) ===
void EGG_Sound_assertFail_80566294(void)

{
  undefined auStack_38 [28];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,0,0x14);
}

// === EGG_Sound_validate_8056651c (0x8056651c) ===
/* WARNING: Removing unreachable block (ram,0x80566584) */
/* WARNING: Removing unreachable block (ram,0x805665a0) */

undefined4 EGG_Sound_validate_8056651c(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x2f5,0);
}

// === EGG_Sound_validate_805666e0 (0x805666e0) ===
/* WARNING: Removing unreachable block (ram,0x8056674c) */
/* WARNING: Removing unreachable block (ram,0x80566768) */

undefined4 EGG_Sound_validate_805666e0(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x3d6,0);
}

// === EGG_Sound_validate_805668c4 (0x805668c4) ===
/* WARNING: Removing unreachable block (ram,0x80566930) */
/* WARNING: Removing unreachable block (ram,0x8056694c) */

undefined4 EGG_Sound_validate_805668c4(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x4cb,0);
}

// === EGG_Sound_assertFail_80566aa8 (0x80566aa8) ===
void EGG_Sound_assertFail_80566aa8(void)

{
  undefined auStack_28 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_28,0,0xc);
}

// === EGG_Sound_validate_80566bb4 (0x80566bb4) ===
/* WARNING: Removing unreachable block (ram,0x80566c28) */
/* WARNING: Removing unreachable block (ram,0x80566c44) */

undefined4 EGG_Sound_validate_80566bb4(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x5e0,0);
}

// === EGG_Sound_assertFail_80566dd8 (0x80566dd8) ===
void EGG_Sound_assertFail_80566dd8(void)

{
  undefined auStack_28 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_28,0,0xc);
}

// === EGG_Sound_validate_80566ee4 (0x80566ee4) ===
/* WARNING: Removing unreachable block (ram,0x80566f60) */
/* WARNING: Removing unreachable block (ram,0x80566f7c) */

undefined4 EGG_Sound_validate_80566ee4(void)

{
  if (iRam00000000 != 1) {
    return 0x6a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0,0x80,0x6f2,0);
}

// === snd_EGG_Sound_80567228 (0x80567228) ===
undefined4 * snd_EGG_Sound_80567228(undefined4 *param_1)

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
  FUN_segment_0__804b4ecc(param_1 + 0x28c);
  FUN_segment_0__804b4ecc(param_1 + 0x2bd);
  return param_1;
}

// === EGG_Sound_validate_805691a4 (0x805691a4) ===
undefined4 EGG_Sound_validate_805691a4(int param_1)

{
  if (param_1 != 0) {
    FUN_segment_0__804cd714(param_1 + 0x29a4,0xffffffff);
    FUN_segment_0__804cd714(param_1 + 0x290c,0xffffffff);
    if (param_1 + 0x2780 != 0) {
      FUN_segment_0__80500540(param_1 + 0x2780,0);
    }
    if (param_1 + 0x251c != 0) {
      FUN_segment_0__804a98ac(param_1 + 0x251c,0);
    }
    FUN_segment_0__80501428(param_1 + 0x23a8,0xffffffff);
    if (param_1 + 0x1e70 != 0) {
      FUN_segment_0__804f9284(param_1 + 0x1e70,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x440,0,0xd18,2);
  }
  return 0;
}

// === snd_EGG_Sound_80569288 (0x80569288) ===
void snd_EGG_Sound_80569288(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_40 [48];
  
  piVar1 = (int *)FUN_segment_0__80555a3c(iRam00000000);
  iVar3 = *piVar1;
  *(int *)(param_1 + 0x28fc) = iVar3;
  iVar3 = iVar3 + -1;
  *(undefined4 *)(param_1 + 0x2904) = 0;
  iVar3 = iVar3 / 5 + (iVar3 >> 0x1f);
  *(int *)(param_1 + 0x2900) = (iVar3 - (iVar3 >> 0x1f)) + 1;
  iVar3 = FUN_segment_0__8040bafc();
  FUN_segment_0__804cd808
            (param_1 + 0x290c,*(undefined4 *)(param_1 + 0x28fc),1,*(undefined4 *)(iVar3 + 0xc94));
  if ((*(uint *)(*(int *)(iRam00000000 + 0x24ffc) + 0x2330c) & 0x20) != 0) {
    iVar4 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x28fc); iVar3 = iVar3 + 1) {
      iVar2 = FUN_segment_0__80555a3c(iRam00000000);
      FUN_segment_0__804cde9c(param_1 + 0x290c,iVar3,iVar2 + iVar4 + 0x10);
      iVar4 = iVar4 + 0x28;
    }
  }
  (**(code **)(*(int *)(param_1 + 0xa8) + 0x10))(param_1 + 0xa8,1,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0xa8);
  FUN_segment_0__804ca380(param_1 + 0xa8,1);
  FUN_segment_0__804d1c1c(param_1,7);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x2cc,0);
  FUN_segment_0__80735444(param_1 + 0x2cc,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x440,0);
  FUN_segment_0__80568984(param_1 + 0x440);
  FUN_segment_0__804d1c2c(param_1,2,param_1 + 0x1158,0);
  FUN_segment_0__80568984(param_1 + 0x1158);
  FUN_segment_0__804d1c2c(param_1,3,param_1 + 0x1e70,0);
  FUN_segment_0__804f9328(param_1 + 0x1e70,0xe2,0xe9,0x103,0x114,0x12d,1,0,0);
  FUN_segment_0__804d1c2c(param_1,4,param_1 + 0x23a8,0);
  FUN_segment_0__804ae324(auStack_40,param_1 + 0x23a8);
  FUN_segment_0__804ae36c(auStack_40,0x13d,0x145,0x15c,0);
  FUN_segment_0__804ae32c(auStack_40,0xffffffff);
  FUN_segment_0__804d1c2c(param_1,5,param_1 + 0x251c,0);
  FUN_segment_0__804a9914(param_1 + 0x251c,0x171,0x178,0x17d,1,0,1);
  FUN_segment_0__804f93f0(param_1 + 0x1e70,param_1 + 0x58);
  FUN_segment_0__804f93f8(param_1 + 0x1e70,param_1 + 0x6c);
  FUN_segment_0__804a9ec4(param_1 + 0x251c,param_1 + 0x80,0);
  FUN_segment_0__804ca350(param_1 + 0xa8,1,param_1 + 0x94,0,0);
  FUN_segment_0__804a9eec(param_1 + 0x251c,0);
  FUN_segment_0__804cd808(param_1 + 0x29a4,10,0,0);
  FUN_segment_0__804d1c2c(param_1,6,param_1 + 0x2780,0);
  FUN_segment_0__807358cc(param_1 + 0x2780);
  FUN_segment_0__80735a00(param_1 + 0x2780,0x1a2e,0);
  return;
}

// === snd_EGG_Sound_80569560 (0x80569560) ===
void snd_EGG_Sound_80569560(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x2904) = 0;
    *(undefined4 *)(param_1 + 0x2908) = 0;
  }
  FUN_segment_0__80500a34(param_1 + 0x2cc,0x1a2c,0);
  FUN_segment_0__804a9eec(param_1 + 0x251c,0);
  *(int *)(param_1 + 0x28f4) = param_1 + 0x440;
  iVar3 = param_1 + 0x5b4;
  iVar4 = 0;
  *(int *)(param_1 + 0x28f8) = param_1 + 0x1158;
  do {
    FUN_segment_0__804a9ec4(iVar3,param_1 + 0x44,0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x254;
  } while (iVar4 < 5);
  iVar3 = param_1 + 0x12cc;
  iVar4 = 0;
  do {
    FUN_segment_0__804a9ec4(iVar3,param_1 + 0x44,0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x254;
  } while (iVar4 < 5);
  uVar1 = *(uint *)(param_1 + 0x2900) ^ 1;
  iVar3 = (int)uVar1 >> 1;
  uVar1 = uVar1 & *(uint *)(param_1 + 0x2900);
  FUN_segment_0__804f946c(param_1 + 0x1e70,iVar3 - uVar1 >> 0x1f,iVar3 - uVar1 >> 0x1f);
  snd_EGG_Sound_80569740(param_1);
  iVar4 = *(int *)(param_1 + 0x28f4);
  uVar2 = FUN_segment_0__804ff4a0(iVar4 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,3);
  iVar3 = iVar4 + 0x174;
  iVar5 = 0;
  do {
    if (*(int *)(iVar4 + 0x3b4) < 0) {
      FUN_segment_0__804a9fd0(iVar3,0);
    }
    else {
      FUN_segment_0__804a9fd0(iVar3,1);
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x254;
    iVar4 = iVar4 + 0x254;
  } while (iVar5 < 5);
  iVar3 = *(int *)(param_1 + 0x28f8);
  uVar2 = FUN_segment_0__804ff4a0(iVar3 + 0x98,0);
  FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,0);
  iVar3 = iVar3 + 0x174;
  iVar4 = 0;
  do {
    FUN_segment_0__804a9fd0(iVar3,0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x254;
  } while (iVar4 < 5);
  if (0 < *(int *)(param_1 + 0x28fc)) {
    FUN_segment_0__804a9eec
              (*(int *)(param_1 + 0x28f4) + *(int *)(param_1 + 0x2908) * 0x254 + 0x174,0);
  }
  return;
}

// === snd_EGG_Sound_80569740 (0x80569740) ===
void snd_EGG_Sound_80569740(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1b8;
  undefined4 local_1b4;
  undefined auStack_f4 [156];
  int local_58;
  
  iVar5 = 0;
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x2904);
  do {
    iVar6 = iVar5 + iVar3 * 5;
    if (iVar6 < *(int *)(param_1 + 0x28fc)) {
      FUN_segment_0__804b4ecc(auStack_f4);
      iVar1 = FUN_segment_0__80555a3c(uRam00000000);
      local_58 = iVar1 + iVar6 * 0x28 + 0x18;
      iVar1 = *(int *)(param_1 + 0x28f4) + iVar7;
      *(int *)(iVar1 + 0x3b4) = iVar6;
      if (iVar6 < 0) {
        *(undefined *)(iVar1 + 500) = 1;
      }
      else {
        iVar4 = iVar1 + 0x174;
        *(undefined *)(iVar1 + 500) = 0;
        FUN_segment_0__80500a34(iVar4,0x19ca,auStack_f4);
        if ((param_1 + 0x290c == 0) ||
           (uVar2 = FUN_segment_0__804ce0ec(param_1 + 0x290c,iVar6), -1 < (int)(-uVar2 | uVar2))) {
          FUN_segment_0__805011cc(iVar4,400,0);
        }
        else {
          FUN_segment_0__8050105c(iVar4,0x188,param_1 + 0x290c,iVar6,0);
          FUN_segment_0__805011cc(iVar4,0x18c,1);
        }
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x28f4) + iVar7;
      *(undefined4 *)(iVar6 + 0x3b4) = 0xffffffff;
      *(undefined *)(iVar6 + 500) = 1;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x254;
  } while (iVar5 < 5);
  FUN_segment_0__804b4ecc(&local_1b8);
  local_1b8 = *(int *)(param_1 + 0x2904) + 1;
  local_1b4 = *(undefined4 *)(param_1 + 0x2900);
  FUN_segment_0__80500a34(param_1 + 0x23a8,0x7d9,&local_1b8);
  return;
}

// === snd_EGG_Sound_805698a4 (0x805698a4) ===
void snd_EGG_Sound_805698a4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(*g_Ram_ptr + 0x304);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056992c;
        }
      }
      bVar1 = false;
LAB_segment_0__8056992c:
      if (bVar1) goto LAB_segment_0__8056993c;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8056993c:
  iVar4 = *(int *)(param_2 + 0x240);
  piVar5[0x16] = iVar4;
  iVar2 = iVar4 / 5 + (iVar4 >> 0x1f);
  *(int *)(param_1 + 0x2908) = iVar4 + (iVar2 - (iVar2 >> 0x1f)) * -5;
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,0);
  return;
}

// === snd_EGG_Sound_8056999c (0x8056999c) ===
void snd_EGG_Sound_8056999c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x28f4) + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 3) &&
     (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x28f8) + 0x98,0),
     *(int *)(iVar1 + 0x38) == 0)) {
    iVar1 = *(int *)(param_1 + 0x28f4);
    uVar2 = FUN_segment_0__804ff4a0(iVar1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,4);
    iVar1 = iVar1 + 0x174;
    iVar3 = 0;
    do {
      FUN_segment_0__804a9fd0(iVar1,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x254;
    } while (iVar3 < 5);
    iVar1 = *(int *)(param_1 + 0x2904) + 1;
    *(int *)(param_1 + 0x2904) = iVar1;
    if (*(int *)(param_1 + 0x2900) <= iVar1) {
      *(undefined4 *)(param_1 + 0x2904) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28f4);
    *(undefined4 *)(param_1 + 0x28f4) = *(undefined4 *)(param_1 + 0x28f8);
    *(undefined4 *)(param_1 + 0x28f8) = uVar2;
    snd_EGG_Sound_80569740(param_1);
    uVar2 = FUN_segment_0__804ff4a0(*(int *)(param_1 + 0x28f4) + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,2);
  }
  return;
}

// === snd_EGG_Sound_80569aa8 (0x80569aa8) ===
void snd_EGG_Sound_80569aa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x28f4) + 0x98,0);
  if ((*(int *)(iVar1 + 0x38) == 3) &&
     (iVar1 = FUN_segment_0__804ff4b0(*(int *)(param_1 + 0x28f8) + 0x98,0),
     *(int *)(iVar1 + 0x38) == 0)) {
    iVar1 = *(int *)(param_1 + 0x28f4);
    uVar2 = FUN_segment_0__804ff4a0(iVar1 + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,5);
    iVar1 = iVar1 + 0x174;
    iVar3 = 0;
    do {
      FUN_segment_0__804a9fd0(iVar1,0);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x254;
    } while (iVar3 < 5);
    iVar1 = *(int *)(param_1 + 0x2904) + -1;
    *(int *)(param_1 + 0x2904) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x2904) = *(int *)(param_1 + 0x2900) + -1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28f4);
    *(undefined4 *)(param_1 + 0x28f4) = *(undefined4 *)(param_1 + 0x28f8);
    *(undefined4 *)(param_1 + 0x28f8) = uVar2;
    snd_EGG_Sound_80569740(param_1);
    uVar2 = FUN_segment_0__804ff4a0(*(int *)(param_1 + 0x28f4) + 0x98,0);
    FUN_segment_0__804ff59c((double)g_Ram_float,uVar2,1);
  }
  return;
}

// === snd_EGG_Sound_80569bb0 (0x80569bb0) ===
void snd_EGG_Sound_80569bb0(undefined4 param_1,undefined4 param_2)

{
  FUN_segment_0__804aa384(param_2);
  FUN_segment_0__804d1c48(param_1,1);
  return;
}

// === snd_EGG_Sound_80569c14 (0x80569c14) ===
undefined4 * snd_EGG_Sound_80569c14(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  FUN_segment_0__80529c48(param_1 + 0x1a);
  return param_1;
}

// === EGG_Sound_validate_80569c60 (0x80569c60) ===
int EGG_Sound_validate_80569c60(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__80529c78(param_1 + 0x68,0xffffffff);
    FUN_segment_0__804c8158(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_80569cd4 (0x80569cd4) ===
void EGG_Sound_validate_80569cd4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
  FUN_segment_0__80529cd0(param_1 + 0x68);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x2c4b8,0x20);
}

// === snd_EGG_Sound_80569d70 (0x80569d70) ===
void snd_EGG_Sound_80569d70(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined auStack_d8 [156];
  int local_3c;
  
  piVar4 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80569df0;
        }
      }
      bVar1 = false;
LAB_segment_0__80569df0:
      if (bVar1) goto LAB_segment_0__80569e00;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80569e00:
  (**(code **)(*piVar4 + 100))(piVar4);
  FUN_segment_0__804ad8b4(piVar4,0x1a2c,0);
  FUN_segment_0__804b4ecc(auStack_d8);
  iVar3 = FUN_segment_0__80555a3c(g_Ram_ptr);
  local_3c = iVar3 + param_1[0x16] * 0x28 + 0x18;
  FUN_segment_0__804ad8bc(piVar4,0x1a2f,auStack_d8);
  param_1[0x15] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x52,0);
  param_1[0x17] = -1;
  return;
}

// === snd_EGG_Sound_80569eac (0x80569eac) ===
void snd_EGG_Sound_80569eac(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  double dVar6;
  undefined4 local_198 [49];
  undefined auStack_d4 [156];
  int local_38;
  
  iVar2 = param_1[0x15];
  if (iVar2 != 1) {
    if (iVar2 != 3) {
      if (iVar2 != 4) {
        return;
      }
      (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x7a,0);
      return;
    }
    piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8056a110;
          }
        }
        bVar1 = false;
LAB_segment_0__8056a110:
        if (bVar1) goto LAB_segment_0__8056a120;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__8056a120:
    (**(code **)(*piVar5 + 100))(piVar5);
    FUN_segment_0__804ccddc(piVar5,0x1a2c,0);
    iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
    if (iVar2 == 1) {
      FUN_segment_0__804b4ecc(auStack_d4);
      iVar2 = FUN_segment_0__80555a3c(g_Ram_ptr);
      local_38 = iVar2 + param_1[0x16] * 0x28 + 0x18;
      (**(code **)(*piVar5 + 0x68))(piVar5,0x1a31,auStack_d4);
      FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
    }
    else {
      FUN_segment_0__804b4ecc(local_198);
      local_198[0] = FUN_segment_0__805558f0(g_Ram_ptr);
      uVar4 = FUN_segment_0__80555918(g_Ram_ptr);
      if (uVar4 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x8056a1dc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar4 << 2))();
        return;
      }
      (**(code **)(*piVar5 + 0x68))(piVar5,0x18a6,local_198);
    }
    param_1[0x15] = 4;
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80569f4c;
        }
      }
      bVar1 = false;
LAB_segment_0__80569f4c:
      if (bVar1) goto LAB_segment_0__80569f5c;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80569f5c:
  if (piVar5[0x294] != 0) {
    param_1[0x17] = 0xbe;
    dVar6 = (double)(float)g_Ram_ptr;
    param_1[0x15] = 0;
    FUN_segment_0__804d1c48(dVar6,param_1,1);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80569fcc;
        }
      }
      bVar1 = false;
LAB_segment_0__80569fcc:
      if (bVar1) goto LAB_segment_0__80569fdc;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__80569fdc:
  (**(code **)(*piVar5 + 100))(piVar5);
  FUN_segment_0__804a96f0(piVar5,0x1a2c,0);
  (**(code **)(*piVar5 + 0x68))(piVar5,0x1a30,0);
  FUN_segment_0__80529df0(param_1 + 0x1a,0x212c);
  piVar5 = g_Ram_ptr;
  iVar2 = FUN_segment_0__80555a3c(g_Ram_ptr);
  iVar2 = iVar2 + param_1[0x16] * 0x28;
  FUN_segment_0__8055e488
            (piVar5,iVar2,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),param_1 + 0x28,
             param_1[0x18]);
  param_1[0x15] = 2;
  (**(code **)(*param_1 + 0x24))(param_1,0x4f,0);
  return;
}

// === snd_EGG_Sound_8056a2c8 (0x8056a2c8) ===
void snd_EGG_Sound_8056a2c8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
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
  piVar4 = *(int **)(*g_Ram_ptr + 0x144);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056a374;
        }
      }
      bVar1 = false;
LAB_segment_0__8056a374:
      if (bVar1) goto LAB_segment_0__8056a384;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8056a384:
  *(undefined4 *)(param_1 + 0x54) = 3;
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === EGG_Sound_validate_8056a3e8 (0x8056a3e8) ===
void EGG_Sound_validate_8056a3e8(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_8056a418 (0x8056a418) ===
void EGG_Sound_validate_8056a418(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_8056a448 (0x8056a448) ===
void EGG_Sound_validate_8056a448(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_8056a478 (0x8056a478) ===
void EGG_Sound_validate_8056a478(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === EGG_Sound_validate_8056a4a8 (0x8056a4a8) ===
void EGG_Sound_validate_8056a4a8(int param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_1);
}

// === snd_EGG_Sound_8056a504 (0x8056a504) ===
void snd_EGG_Sound_8056a504(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// === snd_EGG_Sound_8056a510 (0x8056a510) ===
undefined4 snd_EGG_Sound_8056a510(undefined4 *param_1)

{
  return *param_1;
}

// === EGG_Sound_assertFail_8056a520 (0x8056a520) ===
void EGG_Sound_assertFail_8056a520(void)

{
  undefined auStack_68 [76];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_68,0x40,0,0,1);
}

// === EGG_Sound_validate_8056a714 (0x8056a714) ===
void EGG_Sound_validate_8056a714(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,0);
}

// === snd_EGG_Sound_8056a818 (0x8056a818) ===
undefined4 * snd_EGG_Sound_8056a818(undefined4 *param_1)

{
  FUN_segment_0__804d113c();
  *param_1 = 0;
  FUN_segment_0__804c8134(param_1 + 0x11);
  return param_1;
}

// === EGG_Sound_validate_8056a85c (0x8056a85c) ===
int EGG_Sound_validate_8056a85c(int param_1,int param_2)

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

// === EGG_Sound_validate_8056a8c4 (0x8056a8c4) ===
void EGG_Sound_validate_8056a8c4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x44) + 0x10))(param_1 + 0x44,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x44);
  FUN_segment_0__804d1c1c(param_1,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xbc00,0x20);
}

// === snd_EGG_Sound_8056a954 (0x8056a954) ===
void snd_EGG_Sound_8056a954(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  param_1[0x15] = 0;
  piVar3 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056a9dc;
        }
      }
      bVar1 = false;
LAB_segment_0__8056a9dc:
      if (bVar1) goto LAB_segment_0__8056a9ec;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__8056a9ec:
  (**(code **)(*piVar3 + 100))(piVar3);
  FUN_segment_0__804ad8b4(piVar3,0x1af4,0);
  FUN_segment_0__804ad8bc(piVar3,0x1af5,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x52,0);
  return;
}

// === snd_EGG_Sound_8056aa60 (0x8056aa60) ===
void snd_EGG_Sound_8056aa60(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_d8 [51];
  
  iVar2 = param_1[0x15];
  if (iVar2 != 0) {
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return;
      }
      (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x7a,0);
      return;
    }
    piVar5 = *(int **)(*g_Ram_ptr + 0x14c);
    if (piVar5 != (int *)0) {
      if (piVar5 != (int *)0) {
        for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5);
            puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
          if (puVar3 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__8056ac94;
          }
        }
        bVar1 = false;
LAB_segment_0__8056ac94:
        if (bVar1) goto LAB_segment_0__8056aca4;
      }
      piVar5 = (int *)0;
    }
    else {
      piVar5 = (int *)0;
    }
LAB_segment_0__8056aca4:
    (**(code **)(*piVar5 + 100))(piVar5);
    FUN_segment_0__804ccddc(piVar5,0x1af4,0);
    iVar2 = FUN_segment_0__805558e8(g_Ram_ptr);
    if (iVar2 == 1) {
      (**(code **)(*piVar5 + 0x68))(piVar5,0x1af7,0);
      FUN_segment_0__804d24b8(param_1,0x50,0xffffffff);
    }
    else {
      FUN_segment_0__804b4ecc(local_d8);
      local_d8[0] = FUN_segment_0__805558f0(g_Ram_ptr);
      uVar4 = FUN_segment_0__80555918(g_Ram_ptr);
      if (uVar4 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x8056ad3c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar4 << 2))();
        return;
      }
      (**(code **)(*piVar5 + 0x68))(piVar5,0x18a6,local_d8);
    }
    param_1[0x15] = 3;
    (**(code **)(*param_1 + 0x24))(param_1,0x51,0);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x150);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056ab00;
        }
      }
      bVar1 = false;
LAB_segment_0__8056ab00:
      if (bVar1) goto LAB_segment_0__8056ab10;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8056ab10:
  if (piVar5[0x294] != 0) {
    (**(code **)(*param_1 + 0x1c))((double)(float)g_Ram_ptr,param_1,0x7a,1);
    return;
  }
  piVar5 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar5 != (int *)0) {
    if (piVar5 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056ab80;
        }
      }
      bVar1 = false;
LAB_segment_0__8056ab80:
      if (bVar1) goto LAB_segment_0__8056ab90;
    }
    piVar5 = (int *)0;
  }
  else {
    piVar5 = (int *)0;
  }
LAB_segment_0__8056ab90:
  (**(code **)(*piVar5 + 100))(piVar5);
  FUN_segment_0__804a96f0(piVar5,0x1af4,0);
  (**(code **)(*piVar5 + 0x68))(piVar5,0x1af6,0);
  FUN_segment_0__8055a070(g_Ram_ptr,param_1[0x16]);
  param_1[0x15] = 1;
  (**(code **)(*param_1 + 0x24))(param_1,0x50,0);
  return;
}

// === snd_EGG_Sound_8056ae28 (0x8056ae28) ===
void snd_EGG_Sound_8056ae28(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 8) != 4) {
    return;
  }
  if (*(int *)(param_1 + 0x54) != 1) {
    return;
  }
  iVar2 = FUN_segment_0__805558e0(g_Ram_ptr);
  if (iVar2 == 1) {
    return;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x148);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar3 != (void *)0
          ; puVar3 = (undefined4 *)*puVar3) {
        if (puVar3 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__8056aed4;
        }
      }
      bVar1 = false;
LAB_segment_0__8056aed4:
      if (bVar1) goto LAB_segment_0__8056aee4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__8056aee4:
  *(undefined4 *)(param_1 + 0x54) = 2;
  FUN_segment_0__804a9164(piVar4);
  return;
}

// === EGG_Sound_validate_8056af30 (0x8056af30) ===
undefined4 * EGG_Sound_validate_8056af30(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(int *)(iRam00000000 + 0xb68) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
  return param_1;
}

// === EGG_Sound_validate_8056afa0 (0x8056afa0) ===
int EGG_Sound_validate_8056afa0(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_8056afe0 (0x8056afe0) ===
void snd_EGG_Sound_8056afe0(int param_1)

{
  if (*(int *)(iRam00000000 + 0xb68) == 2) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    (**(code **)(**(int **)(param_1 + 4) + 0x74))(*(int **)(param_1 + 4),0);
    (**(code **)(**(int **)(param_1 + 4) + 0x80))();
  }
  return;
}

// === snd_EGG_Sound_8056b060 (0x8056b060) ===
void snd_EGG_Sound_8056b060(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  (**(code **)(**(int **)(param_1 + 4) + 0x74))(*(int **)(param_1 + 4),0);
  (**(code **)(**(int **)(param_1 + 4) + 0x80))();
  return;
}

// === EGG_Sound_assertFail_8056b198 (0x8056b198) ===
void EGG_Sound_assertFail_8056b198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_assertFail_8056b508 (0x8056b508) ===
void EGG_Sound_assertFail_8056b508(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000);
}

// === EGG_Sound_validate_8056b70c (0x8056b70c) ===
int EGG_Sound_validate_8056b70c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_assertFail_8056b74c (0x8056b74c) ===
void EGG_Sound_assertFail_8056b74c(void)

{
  FUN_segment_0__8042fd60(uRam00000000,0,0x30,0);
  FUN_segment_0__8042fd60(uRam00000000,0,0x44,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x20);
}

// === EGG_Sound_assertFail_8056c10c (0x8056c10c) ===
void EGG_Sound_assertFail_8056c10c(void)

{
  if (*(char *)(iRam00000000 + 0x24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0xae8);
}

// === EGG_Sound_assertFail_8056c198 (0x8056c198) ===
void EGG_Sound_assertFail_8056c198(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x44);
}

// === EGG_Sound_assertFail_8056c1d8 (0x8056c1d8) ===
void EGG_Sound_assertFail_8056c1d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8056c664 (0x8056c664) ===
void snd_EGG_Sound_8056c664(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  for (iVar5 = 0; iVar5 < *param_1; iVar5 = iVar5 + 1) {
    FUN_segment_0__8057e5c0(*(undefined4 *)(param_1[0x1a] + iVar4));
    iVar4 = iVar4 + 4;
  }
  FUN_segment_0__8057ce8c(param_1[0x1d]);
  iVar4 = 0;
  for (uVar3 = 0; (int)uVar3 < *param_1; uVar3 = uVar3 + 1) {
    cVar1 = FUN_segment_0__80421470(uRam00000000,uVar3 & 0xff);
    if (cVar1 == -1) {
      FUN_segment_0__80583970(*(undefined4 *)(param_1[0x1a] + iVar4),1);
    }
    iVar4 = iVar4 + 4;
  }
  piVar2 = param_1;
  for (iVar4 = 0; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < (int)(uint)*(ushort *)(param_1 + 2); iVar5 = iVar5 + 1) {
      *(undefined *)((int)piVar2 + iVar5 + 0x6b8) = 1;
    }
    piVar2 = piVar2 + 0x32;
  }
  piVar2 = param_1;
  for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(param_1 + 2); iVar4 = iVar4 + 1) {
    (**(code **)(*(int *)piVar2[0xe6] + 0x20))((int *)piVar2[0xe6],1);
    piVar2 = piVar2 + 1;
  }
  return;
}

// === snd_EGG_Sound_8056c7a0 (0x8056c7a0) ===
void snd_EGG_Sound_8056c7a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 4) == 0) {
    if (param_1[3] == 2) {
      snd_EGG_Sound_8056afe0(param_1[0x1c]);
      FUN_segment_0__8057ce98(param_1[0x1d]);
      snd_EGG_Sound_8056ca5c(param_1);
      iVar1 = 0;
      for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
        FUN_segment_0__8058399c(*(undefined4 *)(param_1[0x1a] + iVar1));
        iVar1 = iVar1 + 4;
      }
    }
    EGG_Sound_assertFail_8056c8b8(param_1);
  }
  return;
}

// === snd_EGG_Sound_8056c83c (0x8056c83c) ===
void snd_EGG_Sound_8056c83c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  snd_EGG_Sound_8056afe0(param_1[0x1c]);
  FUN_segment_0__8057ce98(param_1[0x1d]);
  snd_EGG_Sound_8056ca5c(param_1);
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
    FUN_segment_0__8058399c(*(undefined4 *)(param_1[0x1a] + iVar2));
    iVar2 = iVar2 + 4;
  }
  return;
}

// === EGG_Sound_assertFail_8056c8b8 (0x8056c8b8) ===
void EGG_Sound_assertFail_8056c8b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000,0);
}

// === snd_EGG_Sound_8056ca5c (0x8056ca5c) ===
void snd_EGG_Sound_8056ca5c(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < param_1[1]; iVar6 = iVar6 + 1) {
    snd_EGG_Sound_8056da2c(*(undefined4 *)(param_1[0x276] + iVar4),iVar6);
    iVar4 = iVar4 + 4;
  }
  iVar4 = 0;
  for (uVar3 = 0; (int)uVar3 < *param_1; uVar3 = uVar3 + 1) {
    cVar1 = FUN_segment_0__80421470(uRam00000000,uVar3 & 0xff);
    if (cVar1 == -1) {
      FUN_segment_0__80583970(*(undefined4 *)(param_1[0x1a] + iVar4),1);
    }
    iVar4 = iVar4 + 4;
  }
  if (*(short *)(param_1 + 0x27b) == 0) {
    iVar6 = 0;
    for (iVar4 = 0; iVar4 < param_1[1]; iVar4 = iVar4 + 1) {
      iVar5 = 0;
      for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
        if (((int)(uint)*(byte *)(**(int **)(iVar6 + param_1[0x276]) + (int)(char)iVar2) <=
             param_1[0xf]) && (*(int *)((*(int **)(iVar6 + param_1[0x276]))[3] + iVar5) < 2)) {
          FUN_segment_0__80583970(*(undefined4 *)(param_1[0x1a] + iVar5),0);
        }
        iVar5 = iVar5 + 4;
      }
      iVar6 = iVar6 + 4;
    }
  }
  return;
}

// === EGG_Sound_assertFail_8056cb8c (0x8056cb8c) ===
void EGG_Sound_assertFail_8056cb8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_assertFail_8056d30c (0x8056d30c) ===
void EGG_Sound_assertFail_8056d30c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8056d524 (0x8056d524) ===
void EGG_Sound_validate_8056d524(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 4) != 1) && (*(short *)(param_1 + 8) != 0)) &&
      (iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x30))(), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x20) & 0x20202020) == 0)) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x30))();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(*(int *)(param_1 + 0x398) + 0x74);
  }
  return;
}

// === EGG_Sound_validate_8056d6c8 (0x8056d6c8) ===
void EGG_Sound_validate_8056d6c8(int param_1)

{
  if (*(char *)(param_1 + 0x10) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uRam00000000,1);
}

// === EGG_Sound_assertFail_8056d70c (0x8056d70c) ===
void EGG_Sound_assertFail_8056d70c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_8056d8d8 (0x8056d8d8) ===
void snd_EGG_Sound_8056d8d8(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1;
  uVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 4) <= (int)(uVar2 & 0xffff)) {
      return;
    }
    uVar1 = -((int)-(uVar1 & (*(ushort *)
                               (*(int *)(*(int *)(iRam00000000 + 0x18) + (uVar2 & 0xffff) * 4) +
                               0x334) & 0x20) == 0) >> 0x1f);
    if (uVar1 == 0) break;
    uVar2 = uVar2 + 1;
  }
  return;
}

// === snd_EGG_Sound_8056d934 (0x8056d934) ===
undefined snd_EGG_Sound_8056d934(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x41) != 0) {
    return 1;
  }
  if (param_2 == -1) {
    return 0;
  }
  return *(undefined *)(*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) + 0xf4);
}

// === EGG_Sound_validate_8056d970 (0x8056d970) ===
void EGG_Sound_validate_8056d970(int param_1)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  bVar1 = *(byte *)(iRam00000000 + 0x24);
  *(uint *)(param_1 + 0x14) = (uint)bVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uint)bVar1);
}

// === snd_EGG_Sound_8056da2c (0x8056da2c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8056da2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_8056de48 (0x8056de48) ===
int EGG_Sound_validate_8056de48(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8056de98 (0x8056de98) ===
void EGG_Sound_validate_8056de98
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_segment_0__806ff5f0(param_1,0,param_2,param_3,param_4,0xd);
  iVar1 = iRam00000000;
  *param_1 = 0;
  param_1[0x2d] = iVar1;
  param_1[0x2e] = iVar1;
  if (*(char *)(iRam00000000 + 0x25) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x7c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x7c);
}

// === EGG_Sound_validate_8056df9c (0x8056df9c) ===
int EGG_Sound_validate_8056df9c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8056dfdc (0x8056dfdc) ===
int EGG_Sound_validate_8056dfdc(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_8056e028 (0x8056e028) ===
void snd_EGG_Sound_8056e028(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x2f) == 0) {
    (**(code **)(*(int *)param_1[0x2c] + 0x10))();
  }
  else {
    (**(code **)(*param_1 + 0x88))
              ((double)((float)param_1[0x2e] * (float)param_1[0x10]),(double)g_Ram_float);
    if (*(char *)((int)param_1 + 0xbd) == 0) {
      (**(code **)(*(int *)param_1[0x2c] + 0xc))();
      (**(code **)(*(int *)param_1[0x2c] + 0x74))((int *)param_1[0x2c],param_1 + 0xc);
      (**(code **)(*(int *)param_1[0x2c] + 0x6c))((double)(float)param_1[0x10]);
      (**(code **)(*(int *)param_1[0x2c] + 0x80))();
    }
  }
  if (*(char *)((int)param_1 + 0xbd) != 0) {
    (**(code **)(*(int *)param_1[0x2c] + 0x14))();
    (**(code **)(*(int *)param_1[0x2c] + 0x74))((int *)param_1[0x2c],param_1 + 0xc);
    (**(code **)(*(int *)param_1[0x2c] + 0x6c))((double)(float)param_1[0x10]);
    (**(code **)(*(int *)param_1[0x2c] + 0x80))();
    iVar1 = FUN_segment_0__80447080(*(undefined4 *)(param_1[2] + 0x28),2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),2);
      (**(code **)(*piVar2 + 0x10))((double)g_Ram_float);
    }
    iVar1 = FUN_segment_0__80447080(*(undefined4 *)(param_1[2] + 0x28),0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
      (**(code **)(*piVar2 + 0x10))((double)g_Ram_float);
    }
  }
  return;
}

// === snd_EGG_Sound_8056e1e0 (0x8056e1e0) ===
void snd_EGG_Sound_8056e1e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_segment_0__80447080(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
    (**(code **)(*piVar2 + 0x10))((double)g_Ram_float);
  }
  iVar1 = FUN_segment_0__80447080(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
    (**(code **)(*piVar2 + 0x10))((double)g_Ram_float);
  }
  return;
}

// === snd_EGG_Sound_8056e288 (0x8056e288) ===
void snd_EGG_Sound_8056e288(int *param_1,int param_2)

{
  *(char *)(param_1 + 0x2f) = (char)param_2;
  (**(code **)(*param_1 + 0x68))();
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x94))(param_1);
  }
  return;
}

// === EGG_Sound_assertFail_8056e30c (0x8056e30c) ===
void EGG_Sound_assertFail_8056e30c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8056e704 (0x8056e704) ===
void EGG_Sound_validate_8056e704(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_2,param_1);
}

// === EGG_Sound_validate_8056e714 (0x8056e714) ===
int EGG_Sound_validate_8056e714(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8056e754 (0x8056e754) ===
int EGG_Sound_validate_8056e754(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8056e794 (0x8056e794) ===
undefined4 EGG_Sound_validate_8056e794(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === EGG_Sound_validate_8056e7f8 (0x8056e7f8) ===
int EGG_Sound_validate_8056e7f8(int param_1,int param_2)

{
  if (param_1 != 0) {
    uRam00000000 = uRam00000068;
    uRam00000004 = uRam0000006c;
    uRam00000008 = 0x21c;
    uRam0000000c = uRam0000004c;
    uRam00000010 = 200;
    uRam00000014 = uRam0000004c;
    if (param_1 != -0x104) {
      *(undefined4 *)(param_1 + 0x104) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x118));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffefc);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_8056e8ac (0x8056e8ac) ===
void snd_EGG_Sound_8056e8ac(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  double dVar13;
  double dVar14;
  
  fVar4 = fRam00000070;
  dVar13 = dRam00000060;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  fVar5 = fRam00000074;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  fVar6 = fRam00000078;
  *(undefined *)(param_1 + 0x1c5) = 0;
  fVar8 = fRam00000080;
  fVar7 = fRam0000007c;
  fVar3 = fVar4 - fRam0000000c;
  uVar1 = (uint)((fVar5 * (float)((double)CONCAT44(0x43300000,uRam00000008 ^ 0x80000000) - dVar13) *
                          fVar3) / fVar4);
  *(uint *)(param_1 + 0x170) = uVar1;
  iVar9 = (int)((fVar6 * (float)((double)CONCAT44(0x43300000,uRam00000008 ^ 0x80000000) - dVar13) *
                         fVar3) / fVar4);
  *(int *)(param_1 + 0x174) = iVar9;
  iVar9 = uVar1 + iVar9;
  iVar10 = (int)(((float)((double)CONCAT44(0x43300000,uRam00000008 ^ 0x80000000) - dVar13) *
                 fRam0000000c) / fVar4);
  *(int *)(param_1 + 0x178) = iVar10;
  iVar10 = iVar9 + iVar10;
  uVar2 = (uint)((fVar7 * (float)((double)CONCAT44(0x43300000,uRam00000008 ^ 0x80000000) - dVar13) *
                          fVar3) / fVar4);
  *(uint *)(param_1 + 0x17c) = uVar2;
  uVar11 = uRam00000008 ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(uint *)(param_1 + 0x18c) = uVar1;
  *(int *)(param_1 + 400) = iVar9;
  *(int *)(param_1 + 0x194) = iVar10;
  iVar9 = (int)((fVar8 * (float)((double)CONCAT44(0x43300000,uVar11) - dVar13) * fVar3) / fVar4);
  *(int *)(param_1 + 0x180) = iVar9;
  iVar10 = iVar10 + uVar2;
  fVar3 = *(float *)(param_1 + 0x168) - fRam0000004c;
  *(int *)(param_1 + 0x198) = iVar10;
  fRam00000014 = fRam00000084;
  *(int *)(param_1 + 0x19c) = iVar10 + iVar9;
  fVar4 = fRam00000088;
  *(float *)(param_1 + 0x1a0) =
       fVar3 / (float)((double)CONCAT44(0x43300000,uVar1 ^ 0x80000000) - dVar13);
  fRam00000014 = fRam00000014 /
                 (float)((double)CONCAT44(0x43300000,uRam00000010 ^ 0x80000000) - dVar13);
  piVar12 = *(int **)(param_1 + 0x15c);
  fVar3 = (float)piVar12[0x2d] * *(float *)(param_1 + 0x168);
  *(float *)(param_1 + 0x1a8) = fVar3;
  *(float *)(param_1 + 0x1b8) =
       (fVar4 + fVar3) / (float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dVar13);
  *(undefined *)(piVar12 + 0x2f) = 0;
  (**(code **)(*piVar12 + 0x68))(piVar12,0);
  (**(code **)(*piVar12 + 0x90))(piVar12);
  iVar9 = *(int *)(param_1 + 0x15c);
  fVar3 = *(float *)(param_1 + 0x168);
  fVar4 = *(float *)(param_1 + 0x34);
  dVar13 = (double)g_Ram_float;
  *(ushort *)(iVar9 + 0x2c) = *(ushort *)(iVar9 + 0x2c) | 1;
  dVar14 = (double)fRam0000004c;
  *(float *)(iVar9 + 0x34) = fVar4 - *(float *)(iVar9 + 0xb4) * fVar3;
  FUN_segment_0__804470ec(dVar13,dVar14,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  piVar12 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
  dVar13 = (double)(**(code **)(*piVar12 + 8))();
  *(float *)(param_1 + 0x1c8) = (float)dVar13;
  piVar12 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
  (**(code **)(*piVar12 + 0x14))((double)g_Ram_float);
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === snd_EGG_Sound_8056eb88 (0x8056eb88) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8056eb88(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_assertFail_8056ee58 (0x8056ee58) ===
void EGG_Sound_assertFail_8056ee58(void)

{
  undefined auStack_38 [48];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38);
}

// === EGG_Sound_validate_8056ef0c (0x8056ef0c) ===
void EGG_Sound_validate_8056ef0c(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  
  iVar3 = *(int *)(param_1 + 0x15c);
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam0000004c,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x28),0
            );
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)fRam0000004c,*(undefined4 *)(*(int *)(iVar3 + 8) + 0x28),1
            );
  piVar4 = *(int **)(param_1 + 0x15c);
  *(undefined *)(piVar4 + 0x2f) = 1;
  (**(code **)(*piVar4 + 0x68))(piVar4,1);
  (**(code **)(*piVar4 + 0x94))(piVar4);
  *(float *)(param_1 + 0x1b0) = g_Ram_float;
  local_28 = uRam00000090;
  local_24 = uRam00000090;
  uVar2 = *(uint *)(param_1 + 0x174);
  fVar1 = *(float *)(param_1 + 0x1a8);
  uStack_14 = uVar2 ^ 0x80000000;
  local_18 = 0x43300000;
  uStack_1c = uVar2 * uVar2 ^ 0x80000000;
  local_20 = 0x43300000;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000060),
             (double)(fRam00000094 * fVar1 *
                     (float)((double)CONCAT44(0x43300000,uStack_14) - dRam00000060)),
             (double)(fRam00000098 * fVar1 * fVar1),&local_28);
}

// === snd_EGG_Sound_8056f09c (0x8056f09c) ===
void snd_EGG_Sound_8056f09c(int param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x1ac) - *(int *)(param_1 + 0x18c) ^ 0x80000000;
  fVar1 = *(float *)(param_1 + 0x1c0) * (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000) -
          (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000) *
          dRam00000000._0_4_ * *(float *)(param_1 + 0x1bc) *
          (float)((double)CONCAT44(0x43300000,uVar2) - dRam00000000);
  *(float *)(param_1 + 0x1b0) = fVar1;
  if (*(float *)(param_1 + 0x1a8) < fVar1) {
    *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x1a8);
  }
  FUN_segment_0__80700aa8
            ((double)(*(float *)(param_1 + 0x1b0) / *(float *)(param_1 + 0x1a8)),param_1,0x1db);
  return;
}

// === EGG_Sound_validate_8056f15c (0x8056f15c) ===
void EGG_Sound_validate_8056f15c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430
            ((double)(dRam00000000._0_4_ *
                     ((dRam00000000._0_4_ *
                      (float)((double)CONCAT44(0x43300000,
                                               *(int *)(param_1 + 0x1ac) - *(int *)(param_1 + 400) ^
                                               0x80000000) - dRam00000000)) / dRam00000000._0_4_)));
}

// === snd_EGG_Sound_8056f268 (0x8056f268) ===
void snd_EGG_Sound_8056f268(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x15c);
  *(undefined *)(piVar1 + 0x2f) = 0;
  (**(code **)(*piVar1 + 0x68))(piVar1,0);
  (**(code **)(*piVar1 + 0x90))(piVar1);
  return;
}

// === snd_EGG_Sound_8056f3e0 (0x8056f3e0) ===
void snd_EGG_Sound_8056f3e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  dVar6 = (double)(**(code **)(*param_1 + 0x130))(param_1,0);
  fVar1 = (float)param_1[0xd];
  fVar2 = (float)param_1[0x6a];
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 8;
  fVar3 = (float)param_1[0x6c];
  iVar4 = param_1[0x57];
  param_1[0xf] = (int)(float)dVar6;
  param_1[0x10] = (int)(float)dVar6;
  param_1[0x11] = (int)(float)dVar6;
  *(ushort *)(iVar4 + 0x2c) = *(ushort *)(iVar4 + 0x2c) | 1;
  *(float *)(iVar4 + 0x34) = fVar3 + (fVar1 - fVar2);
  iVar5 = param_1[0x57];
  iVar4 = param_1[0x5a];
  *(ushort *)(iVar5 + 0x2c) = *(ushort *)(iVar5 + 0x2c) | 8;
  *(int *)(iVar5 + 0x3c) = iVar4;
  *(int *)(iVar5 + 0x40) = iVar4;
  *(int *)(iVar5 + 0x44) = iVar4;
  return;
}

// === snd_EGG_Sound_8056f480 (0x8056f480) ===
void snd_EGG_Sound_8056f480(int *param_1)

{
  int iVar1;
  undefined uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (((~*(uint *)(iVar1 + 0x20) & 0x1010101) == 0) &&
     (iVar1 = snd_EGG_Sound_8056d8d8(uRam00000000), iVar1 != 0)) {
    uVar2 = 1;
  }
  *(undefined *)((int)param_1 + 0x1c5) = uVar2;
  *(undefined *)(param_1[0x57] + 0xbd) = uVar2;
  return;
}

// === EGG_Sound_validate_8056f4fc (0x8056f4fc) ===
void EGG_Sound_validate_8056f4fc(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  
  bVar1 = false;
  iVar3 = (**(code **)(*param_1 + 0x30))();
  if (((~*(uint *)(iVar3 + 0x20) & 0x1010101) == 0) &&
     (iVar3 = snd_EGG_Sound_8056d8d8(uRam00000000), iVar3 != 0)) {
    bVar1 = true;
  }
  bVar4 = false;
  if ((*(short *)(param_1 + 0x42) == 0) && (param_1[99] + -0x1e < param_1[0x6b])) {
    bVar4 = true;
  }
  bVar2 = false;
  if ((bVar4) || ((ushort)(*(short *)(param_1 + 0x42) - 1U) < 3)) {
    bVar2 = true;
  }
  if ((bVar2) && (!bVar1)) {
    (**(code **)(*(int *)param_1[0x56] + 0xc))();
    (**(code **)(*(int *)param_1[0x56] + 0x74))((int *)param_1[0x56],param_1 + 0xc);
    (**(code **)(*(int *)param_1[0x56] + 0x6c))((double)(float)param_1[0x10]);
  }
  if ((!bVar2) || (bVar1)) {
    (**(code **)(*(int *)param_1[0x56] + 0x10))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1[0x56] + 0x74);
}

// === snd_EGG_Sound_8056f6a4 (0x8056f6a4) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8056f6a4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8056f7d0 (0x8056f7d0) ===
int snd_EGG_Sound_8056f7d0(int param_1)

{
  FUN_segment_0__80701bcc();
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x84);
  FUN_segment_0__80701bcc(param_1);
  return param_1 + 0x58;
}

// === snd_EGG_Sound_8056f868 (0x8056f868) ===
double snd_EGG_Sound_8056f868(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  param_2 = *(int *)((int)dRam00000000._0_4_ + 0x20) - param_2;
  dVar4 = (double)dRam00000000._0_4_;
  if ((*(int *)(param_1 + 0x164) <= param_2) &&
     (param_2 = param_2 - *(int *)(param_1 + 0x164),
     iVar1 = *(int *)(param_1 + 0x160) + (int)dRam00000000._0_4_,
     uVar3 = param_2 - (param_2 / iVar1) * iVar1, (int)uVar3 < *(int *)(param_1 + 0x19c))) {
    if ((int)uVar3 < *(int *)(param_1 + 0x198)) {
      if ((int)uVar3 < *(int *)(param_1 + 0x194)) {
        if ((int)uVar3 < *(int *)(param_1 + 400)) {
          if ((int)uVar3 < *(int *)(param_1 + 0x18c)) {
            if (-1 < (int)uVar3) {
              dVar4 = (double)(float)(dVar4 + (double)(*(float *)(param_1 + 0x1a0) *
                                                      (float)((double)CONCAT44(0x43300000,
                                                                               uVar3 ^ 0x80000000) -
                                                             dRam00000000)));
              if ((double)*(float *)(param_1 + 0x168) < dVar4) {
                dVar4 = (double)*(float *)(param_1 + 0x168);
              }
            }
          }
          else {
            dVar4 = (double)*(float *)(param_1 + 0x168);
          }
        }
        else {
          dVar4 = (double)*(float *)(param_1 + 0x168);
        }
      }
      else {
        iVar2 = uVar3 - *(int *)(param_1 + 0x194);
        iVar1 = *(int *)(param_1 + 0x17c) / 2;
        if (iVar1 < iVar2) {
          dVar4 = (double)(*(float *)(param_1 + 0x168) -
                          *(float *)(param_1 + 0x1a0) *
                          (float)((double)CONCAT44(0x43300000,iVar2 - iVar1 ^ 0x80000000) -
                                 dRam00000000));
        }
        else {
          dVar4 = (double)*(float *)(param_1 + 0x168);
        }
      }
    }
    else {
      dVar4 = (double)((*(float *)(param_1 + 0x168) -
                       *(float *)(param_1 + 0x1a0) *
                       (float)((double)CONCAT44(0x43300000,
                                                *(int *)(param_1 + 0x17c) / 2 ^ 0x80000000) -
                              dRam00000000)) -
                      *(float *)(param_1 + 0x1a0) *
                      (float)((double)CONCAT44(0x43300000,
                                               uVar3 - *(int *)(param_1 + 0x198) ^ 0x80000000) -
                             dRam00000000));
      if (dVar4 < (double)dRam00000000._0_4_) {
        dVar4 = (double)dRam00000000._0_4_;
      }
    }
  }
  return dVar4;
}

// === snd_EGG_Sound_8056faa0 (0x8056faa0) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8056faa0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8056fe30 (0x8056fe30) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8056fe30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8057738c (0x8057738c) ===
void snd_EGG_Sound_8057738c(int param_1)

{
  if (*(float *)(param_1 + 300) <=
      *(float *)(param_1 + 0x128) *
      (float)((double)CONCAT44(0x43300000,*(undefined4 *)(param_1 + 0x110)) - dRam00000000)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}

// === snd_EGG_Sound_80577418 (0x80577418) ===
int snd_EGG_Sound_80577418(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined auStack_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined auStack_34 [12];
  undefined auStack_28 [12];
  undefined auStack_1c [12];
  undefined4 local_10;
  uint uStack_c;
  
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
  uStack_c = (uint)*(ushort *)(param_1 + 0x134);
  uVar1 = (uint)*(ushort *)(param_1 + 0x130);
  param_2 = *(int *)(iRam00000000 + 0x20) - param_2;
  if ((int)(uVar1 + uStack_c) < param_2) {
    local_10 = 0x43300000;
    FUN_segment_0__804086e4
              ((double)((float)((double)CONCAT44(0x43300000,uStack_c) -
                               (double)CONCAT44(iRam00000000,uRam00000004)) *
                       *(float *)(param_1 + 0x128)),auStack_1c,0);
    FUN_segment_0__804270d8(auStack_34,param_1 + 0x138,3);
    FUN_segment_0__80404464(&local_40,auStack_34,auStack_1c);
    *(undefined4 *)(param_1 + 0x174) = local_40;
    *(undefined4 *)(param_1 + 0x184) = local_3c;
    *(undefined4 *)(param_1 + 0x194) = local_38;
    *(undefined *)(param_1 + 0x1a4) = 1;
  }
  else if ((int)uVar1 < param_2) {
    uStack_c = param_2 - uVar1 ^ 0x80000000;
    local_10 = 0x43300000;
    FUN_segment_0__804086e4
              ((double)((float)((double)CONCAT44(0x43300000,uStack_c) -
                               (double)CONCAT44(iRam00000000,uRam00000004)) *
                       *(float *)(param_1 + 0x128)),auStack_28,0);
    FUN_segment_0__804270d8(auStack_4c,param_1 + 0x138,3);
    FUN_segment_0__80404464(&local_58,auStack_4c,auStack_28);
    *(undefined4 *)(param_1 + 0x174) = local_58;
    *(undefined4 *)(param_1 + 0x184) = local_54;
    *(undefined4 *)(param_1 + 0x194) = local_50;
  }
  return param_1 + 0x168;
}

// === snd_EGG_Sound_80577644 (0x80577644) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_80577644(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805778d8 (0x805778d8) ===
void snd_EGG_Sound_805778d8
               (undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  (**(code **)(*param_2 + 0x120))(param_2,param_8);
  (**(code **)(*param_2 + 0x124))(param_2,param_8);
  FUN_segment_0__806abea0(param_1,param_2[0x2b],param_3,param_4,param_5,param_6,param_7);
  return;
}

// === snd_EGG_Sound_80577988 (0x80577988) ===
double snd_EGG_Sound_80577988(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(*param_1 + 0x134))();
  return (double)(float)((double)(float)param_1[0x3e] + dVar1);
}

// === snd_EGG_Sound_805779d8 (0x805779d8) ===
void snd_EGG_Sound_805779d8(undefined4 param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = uRam00000000;
  local_8 = uRam00000000;
  FUN_segment_0__80701444(param_1,&local_4,&local_8,1,0);
  return;
}

// === EGG_Sound_validate_80577a3c (0x80577a3c) ===
void EGG_Sound_validate_80577a3c(undefined4 *param_1,undefined4 param_2)

{
  double dVar1;
  float fVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  float fVar6;
  undefined4 uVar7;
  
  FUN_segment_0__806fb9c4(param_1,param_2,0);
  fVar2 = fRam0000000c;
  dVar1 = 4503601774854624.0 - dRam00000018;
  *param_1 = 0;
  uVar7 = uRam00000010;
  fVar6 = fRam00000008;
  uVar5 = uRam00000007;
  uVar4 = uRam00000006;
  uVar3 = uRam00000005;
  fVar2 = (float)dVar1 * fVar2 * fRam00000008;
  *(undefined *)(param_1 + 0x3d) = uRam00000004;
  *(undefined *)((int)param_1 + 0xf5) = uVar3;
  *(undefined *)((int)param_1 + 0xf6) = uVar4;
  *(undefined *)((int)param_1 + 0xf7) = uVar5;
  param_1[0x30] = 0x1e0;
  param_1[0x31] = 0x1e0;
  param_1[0x33] = fVar6;
  param_1[0x32] = fVar2;
  param_1[0x34] = uVar7;
  param_1[0x36] = 8;
  param_1[0x37] = 8;
  param_1[0x3a] = 0x80;
  param_1[0x3b] = 0x51;
  param_1[0x38] = 0x3c;
  param_1[0x39] = 0x3c;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x3dc);
}

// === EGG_Sound_validate_80577c1c (0x80577c1c) ===
undefined4 EGG_Sound_validate_80577c1c(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x2b],0);
  }
  return 0;
}

// === snd_EGG_Sound_80577cc0 (0x80577cc0) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_80577cc0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_assertFail_80577eb8 (0x80577eb8) ===
void EGG_Sound_assertFail_80577eb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805a70dc (0x805a70dc) ===
void snd_EGG_Sound_805a70dc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)g_Ram_float + 0xb74) == 5) {
    if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0xbc)) {
      return;
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  }
  else if (*(uint *)((int)g_Ram_float + 0x20) <= *(uint *)(param_1 + 0xbc)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 200) ==
      *(int *)(param_1 + 0xb4) +
      *(int *)(param_1 + 0xc4) *
      (iVar2 - (iVar2 / *(int *)(param_1 + 0xb8)) * *(int *)(param_1 + 0xb8))) {
    piVar3 = *(int **)(*(int *)(param_1 + 0xb0) + iVar2 * 4);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    *(undefined *)(piVar3 + 0x3c) = 1;
    (**(code **)(*piVar3 + 0x68))(piVar3,1);
    (**(code **)(*piVar3 + 0xe0))((double)g_Ram_float,piVar3);
    iVar1 = *(int *)(param_1 + 0xb8);
    iVar2 = *(int *)(param_1 + 0xd0) + 1;
    *(int *)(param_1 + 0xd0) = iVar2;
    if (iVar2 == (iVar2 / iVar1) * iVar1) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 0xc4) * iVar1;
    }
  }
  if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xc0)) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}

// === EGG_Sound_validate_805a7248 (0x805a7248) ===
int EGG_Sound_validate_805a7248(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xb0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0xc4));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffff50);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805a72bc (0x805a72bc) ===
void snd_EGG_Sound_805a72bc(undefined4 param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = uRam00000000;
  FUN_segment_0__80701444(param_1,&local_4,&local_8,1,0);
  return;
}

// === EGG_Sound_assertFail_805a7328 (0x805a7328) ===
void EGG_Sound_assertFail_805a7328(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_805a7480 (0x805a7480) ===
undefined4 EGG_Sound_validate_805a7480(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === EGG_Sound_validate_805a74e4 (0x805a74e4) ===
int EGG_Sound_validate_805a74e4(int param_1,int param_2)

{
  if (param_1 != 0) {
    uRam00000000 = 0;
    if (param_1 != -0xb0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0xc4));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffff50);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_805a755c (0x805a755c) ===
void EGG_Sound_validate_805a755c(int param_1)

{
  int iVar1;
  
  FUN_segment_0__80700278();
  if (cRam00000000 == 0) {
    iVar1 = FUN_segment_0__8040bafc();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x8000,*(undefined4 *)(iVar1 + 0xc98),0x20);
  }
  FUN_segment_0__8044f108(*(undefined4 *)(param_1 + 8),0xb,0);
  return;
}

// === EGG_Sound_assertFail_805a775c (0x805a775c) ===
void EGG_Sound_assertFail_805a775c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x6c);
}

// === snd_EGG_Sound_805a77dc (0x805a77dc) ===
void snd_EGG_Sound_805a77dc(int *param_1)

{
  int iVar1;
  undefined auStack_98 [12];
  undefined auStack_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined auStack_74 [12];
  undefined auStack_68 [12];
  undefined auStack_5c [12];
  undefined auStack_50 [16];
  undefined auStack_40 [12];
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_14;
  
  iVar1 = (**(code **)(*param_1 + 0xb4))();
  if (iVar1 != 0) {
    FUN_segment_0__80701bcc(param_1);
    FUN_segment_0__804270d8(auStack_5c,param_1 + 0x16,2);
    FUN_segment_0__805a3df8(auStack_5c,0,auStack_40);
    FUN_segment_0__80701bcc(param_1);
    FUN_segment_0__804270d8(auStack_68,param_1 + 0x16,1);
    FUN_segment_0__8040443c((double)g_Ram_float,auStack_50,auStack_68);
    FUN_segment_0__80701bcc(param_1);
    FUN_segment_0__804270d8(auStack_74,param_1 + 0x16,3);
    FUN_segment_0__80404464(&local_80,auStack_74,auStack_50);
    local_34 = local_80;
    local_24 = local_7c;
    local_14 = local_78;
    FUN_segment_0__80404400(auStack_8c,param_1[8] + 0x24);
    FUN_segment_0__8040443c((double)*(float *)(param_1[8] + 0x30),auStack_98,auStack_8c);
    (**(code **)(*(int *)param_1[0x2b] + 0x10))
              ((int *)param_1[0x2b],auStack_40,param_1 + 0xf,auStack_98);
  }
  return;
}

// === EGG_Sound_validate_805a78f8 (0x805a78f8) ===
void EGG_Sound_validate_805a78f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))((double)g_Ram_float,*(int **)(param_1 + 0x20),0)
  ;
  dVar6 = (double)FUN_segment_0__805cd150(*(undefined4 *)(param_1 + 0x20));
  fVar4 = *(float *)(param_1 + 0xd0) / *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xdc) =
       (float)(dVar6 - (double)(fVar4 * *(float *)(param_1 + 0xd4) * fVar4)) /
       *(float *)(param_1 + 0xd0);
  FUN_segment_0__80701e3c(param_1,*(int *)(param_1 + 0x20) + 0x24);
  fVar4 = g_Ram_float;
  iVar5 = *(int *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(iVar5 + 0x20);
  uVar2 = *(undefined4 *)(iVar5 + 0x1c);
  uVar3 = *(undefined4 *)(iVar5 + 0x18);
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(float *)(param_1 + 0x104) = fVar4;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(float *)(param_1 + 0xf8) = g_Ram_float;
  *(undefined4 *)(param_1 + 0xfc) = uRam00000004;
  *(undefined4 *)(param_1 + 0x100) = uRam00000008;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar5 + 0x28);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(iVar5 + 0x2c);
  FUN_segment_0__80426d88(&local_28,0,param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xec) = local_28;
  *(undefined4 *)(param_1 + 0xf0) = local_24;
  *(undefined4 *)(param_1 + 0xf4) = local_20;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xec);
}

// === snd_EGG_Sound_805a7a78 (0x805a7a78) ===
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 snd_EGG_Sound_805a7a78(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  if (param_4 == 0) {
    dVar4 = (double)FUN_segment_0__8047e63c(param_2);
    if (dVar4 < (double)fRam0000002c) {
      param_3 = 8;
    }
  }
  else if (param_4 == 3) {
    if (*(int *)(param_1 + 0x110) == -1) {
      FUN_segment_0__8047dcf4(param_2,1);
      fVar1 = g_Ram_float;
      *(undefined4 *)(param_1 + 0x110) = 0;
      fVar2 = _DAT_00000030;
      *(float *)(param_1 + 300) = fVar1;
      fVar3 = _DAT_00000034;
      fVar1 = (fVar2 * g_Ram_float) / g_Ram_float;
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xfc);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x34);
      *(float *)(param_1 + 0x118) = fVar1;
      *(undefined *)(param_1 + 0x128) = 0;
      *(float *)(param_1 + 0x130) = fVar3 / fVar1;
      *(float *)(param_1 + 0xf8) = g_Ram_float;
      *(undefined4 *)(param_1 + 0xfc) = uRam00000004;
      *(undefined4 *)(param_1 + 0x100) = uRam00000008;
      *(undefined *)(param_1 + 0x134) = 1;
    }
  }
  else if ((param_4 == 5) && (*(int *)(param_1 + 0x110) == -1)) {
    FUN_segment_0__8047dcf4(param_2,1);
    fVar1 = g_Ram_float;
    *(undefined4 *)(param_1 + 0x110) = 0;
    fVar2 = _DAT_00000030;
    *(float *)(param_1 + 300) = fVar1;
    fVar3 = _DAT_00000034;
    fVar1 = (fVar2 * g_Ram_float) / g_Ram_float;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x34);
    *(float *)(param_1 + 0x118) = fVar1;
    *(undefined *)(param_1 + 0x128) = 0;
    *(float *)(param_1 + 0x130) = fVar3 / fVar1;
    *(float *)(param_1 + 0xf8) = g_Ram_float;
    *(undefined4 *)(param_1 + 0xfc) = uRam00000004;
    *(undefined4 *)(param_1 + 0x100) = uRam00000008;
    *(undefined *)(param_1 + 0x134) = 1;
  }
  return param_3;
}

// === snd_EGG_Sound_805a7ee4 (0x805a7ee4) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a7ee4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805a8114 (0x805a8114) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a8114(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805a81c4 (0x805a81c4) ===
void snd_EGG_Sound_805a81c4(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x44) == 0) {
      piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      FUN_segment_0__804470ec
                (uVar2,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
      piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
      dVar3 = (double)(**(code **)(*piVar1 + 0x18))();
      (**(code **)(*piVar1 + 0x1c))(-ABS(dVar3),piVar1);
    }
    else {
      piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
      uVar2 = (**(code **)(*piVar1 + 0xc))();
      FUN_segment_0__804470ec
                (uVar2,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
      piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
      dVar3 = (double)(**(code **)(*piVar1 + 0x18))();
      (**(code **)(*piVar1 + 0x1c))(ABS(dVar3),piVar1);
    }
  }
  *(undefined *)(param_1 + 0x134) = 0;
  return;
}

// === snd_EGG_Sound_805a8308 (0x805a8308) ===
void snd_EGG_Sound_805a8308(int param_1)

{
  float fVar1;
  double dVar2;
  int *piVar3;
  
  dVar2 = dRam00000040;
  if (*(int *)(param_1 + 0x108) == 0) {
    fVar1 = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0x104) = fVar1;
    if (*(float *)(param_1 + 0xd0) < fVar1) {
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(undefined4 *)(param_1 + 0xb8) = 2;
    }
  }
  else if (*(int *)(param_1 + 0x108) == 2) {
    fVar1 = *(float *)(param_1 + 0x104) - *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0x104) = fVar1;
    if ((double)fVar1 < dVar2) {
      *(undefined4 *)(param_1 + 0x104) = uRam00000048;
    }
    if (*(char *)(param_1 + 0x10c) != 0) {
      *(float *)(param_1 + 0x104) = g_Ram_float;
      piVar3 = *(int **)(param_1 + 0x20);
      if (*(char *)(piVar3 + 0x11) != 0) {
        (**(code **)(*piVar3 + 0x10))(piVar3,0);
      }
      *(undefined4 *)(param_1 + 0x108) = 1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x44) == 0) {
    if (*(char *)(param_1 + 0x134) == 0) {
      FUN_segment_0__80700aa8((double)*(float *)(param_1 + 0x104),param_1,0x2ac);
      FUN_segment_0__80700aa8((double)g_Ram_float,param_1,0x2b1);
    }
  }
  else if (*(char *)(param_1 + 0x134) == 0) {
    FUN_segment_0__80700aa8((double)*(float *)(param_1 + 0x104),param_1,0x2ab);
  }
  return;
}

// === snd_EGG_Sound_805a845c (0x805a845c) ===
void snd_EGG_Sound_805a845c(int param_1)

{
  if (*(float *)(param_1 + 0xdc) - dRam00000000._0_4_ <
      (float)((double)CONCAT44(0x43300000,*(undefined4 *)(param_1 + 0xbc)) - dRam00000000)) {
    *(undefined4 *)(param_1 + 0x108) = 2;
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x44) == 0) {
    if (*(char *)(param_1 + 0x134) == 0) {
      FUN_segment_0__80700aa8((double)*(float *)(param_1 + 0x104),param_1,0x2ac);
      FUN_segment_0__80700aa8((double)dRam00000000._0_4_,param_1,0x2b1);
    }
  }
  else if (*(char *)(param_1 + 0x134) == 0) {
    FUN_segment_0__80700aa8((double)*(float *)(param_1 + 0x104),param_1,0x2ab);
  }
  return;
}

// === snd_EGG_Sound_805a85c0 (0x805a85c0) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a85c0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805a88e4 (0x805a88e4) ===
void snd_EGG_Sound_805a88e4(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x18))((double)*(float *)(param_1 + 0x104));
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
  if (iVar1 == 2) {
    *(undefined *)(param_1 + 0x10c) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x10c) = 0;
  }
  return;
}

// === snd_EGG_Sound_805a8954 (0x805a8954) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a8954(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805a8a6c (0x805a8a6c) ===
void snd_EGG_Sound_805a8a6c
               (undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_2c [12];
  undefined auStack_20 [16];
  
  FUN_segment_0__80404498(auStack_20,param_4,param_3);
  FUN_segment_0__8040443c(param_1,auStack_2c,auStack_20);
  FUN_segment_0__80404464(&local_38,param_3,auStack_2c);
  param_2[1] = local_34;
  *param_2 = local_38;
  param_2[2] = local_30;
  return;
}

// === snd_EGG_Sound_805a8afc (0x805a8afc) ===
void snd_EGG_Sound_805a8afc(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14 [4];
  
  local_14[0] = (**(code **)(*param_1 + 0x38))();
  local_18 = uRam00000000;
  FUN_segment_0__80701444(param_1,local_14,&local_18,1,0);
  return;
}

// === EGG_Sound_validate_805a8b64 (0x805a8b64) ===
int EGG_Sound_validate_805a8b64(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_805a8bac (0x805a8bac) ===
void EGG_Sound_validate_805a8bac
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  FUN_segment_0__806ff5f0(param_1,0,param_2,param_3,param_4,0);
  *param_1 = 0;
  uVar1 = FUN_segment_0__8070c704(*(undefined4 *)((int)g_Ram_float + 4),0xf);
  param_1[0x2c] =
       g_Ram_float *
       (float)((double)CONCAT44(0x43300000,
                                (int)*(short *)(*(int *)(*(int *)((int)g_Ram_float + 4) + 8) +
                                                *(short *)(*(int *)(*(int *)((int)g_Ram_float + 4)
                                                                   + 0xc) + (uVar1 & 0xffff) * 2) *
                                                0x74 + 0x6e) ^ 0x80000000) -
              (double)CONCAT44(g_Ram_float,uRam00000004));
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined *)((int)g_Ram_float + 0x24));
}

// === EGG_Sound_validate_805a8c8c (0x805a8c8c) ===
int EGG_Sound_validate_805a8c8c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805a8cfc (0x805a8cfc) ===
void snd_EGG_Sound_805a8cfc(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < (int)(uint)*(byte *)(iRam00000000 + 0x24); uVar1 = uVar1 + 1) {
    if (*(char *)(*(int *)(param_1 + 0xb4) + uVar1) == 0) {
      FUN_segment_0__8059dfbc(*(undefined4 *)(*(int *)(iRam00000000 + 0x68) + (uVar1 & 0xff) * 4),0)
      ;
    }
    *(undefined *)(*(int *)(param_1 + 0xb4) + uVar1) = 0;
  }
  return;
}

// === EGG_Sound_assertFail_805a8d7c (0x805a8d7c) ===
void EGG_Sound_assertFail_805a8d7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805a8e8c (0x805a8e8c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a8e8c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805a8fe4 (0x805a8fe4) ===
void EGG_Sound_validate_805a8fe4(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0x1e);
  *param_1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined *)(iRam00000000 + 0x24));
}

// === EGG_Sound_assertFail_805a9040 (0x805a9040) ===
void EGG_Sound_assertFail_805a9040(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x58);
}

// === snd_EGG_Sound_805a90b8 (0x805a90b8) ===
void snd_EGG_Sound_805a90b8(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x88))((double)g_Ram_float,(double)g_Ram_float);
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)((int)g_Ram_float + 0x24); iVar1 = iVar1 + 1) {
    *(undefined *)(param_1[0x2c] + iVar1) = 0;
  }
  return;
}

// === snd_EGG_Sound_805a912c (0x805a912c) ===
void snd_EGG_Sound_805a912c(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; (int)uVar1 < (int)(uint)*(byte *)(iRam00000000 + 0x24); uVar1 = uVar1 + 1) {
    if (*(char *)(*(int *)(param_1 + 0xb0) + uVar1) == 0) {
      FUN_segment_0__8059dfbc(*(undefined4 *)(*(int *)(iRam00000000 + 0x68) + (uVar1 & 0xff) * 4),0)
      ;
    }
    *(undefined *)(*(int *)(param_1 + 0xb0) + uVar1) = 0;
  }
  return;
}

// === EGG_Sound_assertFail_805a91ac (0x805a91ac) ===
void EGG_Sound_assertFail_805a91ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_805a92b8 (0x805a92b8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a92b8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805a9740 (0x805a9740) ===
undefined4 EGG_Sound_validate_805a9740(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === EGG_Sound_validate_805a97a4 (0x805a97a4) ===
int EGG_Sound_validate_805a97a4(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0xb0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0xc4));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xffffff50);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805a9810 (0x805a9810) ===
void snd_EGG_Sound_805a9810(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x3e] == 0) {
    if (*(short *)(*(int *)param_1[0x28] + 0x28) == -1) {
      return;
    }
    (**(code **)(*(int *)param_1[8] + 0x10))((double)g_Ram_float,(int *)param_1[8],0);
    *(undefined *)(param_1[8] + 0x17) = 1;
    FUN_segment_0__805a42bc(param_1[8],param_1 + 0x4b);
    FUN_segment_0__804270d8(&local_1c,param_1 + 0x4b,3);
    param_1[0xc] = local_1c;
    *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 1;
    param_1[0xd] = local_18;
    param_1[0xe] = local_14;
    (**(code **)(*param_1 + 0x68))(param_1,0);
    *(undefined *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*(int *)param_1[0x37] + 0x68))((int *)param_1[0x37],0);
    (**(code **)(*(int *)param_1[0x37] + 0x90))();
    iVar3 = iRam0000003c;
    iVar2 = iRam00000024;
    fVar1 = g_Ram_float;
    param_1[0x2e] = 0;
    param_1[0x39] = iVar3;
    param_1[0x3a] = iVar2;
    *(undefined *)(param_1 + 0x57) = 0;
    param_1[0x59] = (int)fVar1;
    param_1[0x5a] = 0;
    FUN_segment_0__804270d8(&local_28,param_1 + 0x4b,3);
    param_1[0x5b] = local_28;
    param_1[0x5c] = local_24;
    param_1[0x5d] = local_20;
    *(undefined *)(param_1 + 0x5e) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1,0);
    *(undefined *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x90))(param_1);
    iVar3 = iRam0000003c;
    fVar1 = g_Ram_float;
    iVar4 = param_1[0x37];
    *(ushort *)(iVar4 + 0x2c) = *(ushort *)(iVar4 + 0x2c) | 8;
    iVar2 = iRam00000024;
    *(float *)(iVar4 + 0x3c) = fVar1;
    iVar4 = param_1[0x37];
    *(ushort *)(iVar4 + 0x2c) = *(ushort *)(iVar4 + 0x2c) | 8;
    *(float *)(iVar4 + 0x44) = fVar1;
    param_1[0x2e] = 0;
    param_1[0x39] = iVar3;
    param_1[0x3a] = iVar2;
    *(undefined *)(param_1 + 0x57) = 0;
    FUN_segment_0__80701bcc(param_1);
    param_1[0x3f] = param_1[0x16];
    param_1[0x40] = param_1[0x17];
    param_1[0x41] = param_1[0x18];
    param_1[0x42] = param_1[0x19];
    param_1[0x43] = param_1[0x1a];
    param_1[0x44] = param_1[0x1b];
    param_1[0x45] = param_1[0x1c];
    param_1[0x46] = param_1[0x1d];
    param_1[0x47] = param_1[0x1e];
    param_1[0x48] = param_1[0x1f];
    param_1[0x49] = param_1[0x20];
    param_1[0x4a] = param_1[0x21];
  }
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === snd_EGG_Sound_805a9a78 (0x805a9a78) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805a9a78(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805a9d5c (0x805a9d5c) ===
undefined4 snd_EGG_Sound_805a9d5c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  
  iVar1 = FUN_segment_0__8070ba6c(param_2);
  if ((*(short *)(param_1 + 0x2d) == 1) && (iVar1 == 0)) {
    param_3 = 0x12;
  }
  else if (param_4 == 3) {
    if ((*(char *)(param_1 + 0x57) == 0) &&
       (iVar1 = FUN_segment_0__8047def4(param_2), iVar1 == 0)) {
      sVar2 = (**(code **)(*param_1 + 0x24))(param_1);
      if (((*(int *)((int)g_Ram_float + 0xb70) == 4) &&
          (*(short *)((int)g_Ram_float + 0xb9e) == 5)) &&
         ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
          (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
        piVar3[2] = piVar3[2] + 1;
      }
      *(undefined *)(param_1 + 0x57) = 1;
      FUN_segment_0__8047dcf4(param_2,0);
      if (*(short *)(param_1 + 0x2d) == 1) {
        FUN_segment_0__804470ec
                  ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
      }
    }
  }
  else if (((param_4 == 5) && (*(char *)(param_1 + 0x57) == 0)) &&
          (iVar1 = FUN_segment_0__8047def4(param_2), iVar1 == 0)) {
    sVar2 = (**(code **)(*param_1 + 0x24))(param_1);
    if (((*(int *)((int)g_Ram_float + 0xb70) == 4) && (*(short *)((int)g_Ram_float + 0xb9e) == 5))
       && ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
           (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
      piVar3[2] = piVar3[2] + 1;
    }
    *(undefined *)(param_1 + 0x57) = 1;
    FUN_segment_0__8047dcf4(param_2,0);
    if (*(short *)(param_1 + 0x2d) == 1) {
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
    }
  }
  return param_3;
}

// === snd_EGG_Sound_805a9f90 (0x805a9f90) ===
undefined4 snd_EGG_Sound_805a9f90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar2;
  int iVar1;
  int *piVar3;
  
  if (param_4 == 3) {
    if ((*(char *)(param_1 + 0x57) == 0) && (*(char *)(param_1 + 0x60) != 0)) {
      sVar2 = (**(code **)(*param_1 + 0x24))();
      if (((*(int *)((int)g_Ram_float + 0xb70) == 4) &&
          (*(short *)((int)g_Ram_float + 0xb9e) == 5)) &&
         ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
          (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
        piVar3[2] = piVar3[2] + 1;
      }
      *(undefined *)(param_1 + 0x57) = 1;
      if (*(short *)(param_1 + 0x2d) == 1) {
        FUN_segment_0__804470ec
                  ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
      }
    }
  }
  else if (param_4 == 4) {
    if ((*(char *)(param_1 + 0x57) == 0) && (*(char *)(param_1 + 0x60) != 0)) {
      sVar2 = (**(code **)(*param_1 + 0x24))();
      if (((*(int *)((int)g_Ram_float + 0xb70) == 4) &&
          (*(short *)((int)g_Ram_float + 0xb9e) == 5)) &&
         ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
          (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
        piVar3[2] = piVar3[2] + 1;
      }
      *(undefined *)(param_1 + 0x57) = 1;
      if (*(short *)(param_1 + 0x2d) == 1) {
        FUN_segment_0__804470ec
                  ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
      }
    }
  }
  else if (param_4 == 5) {
    if ((*(char *)(param_1 + 0x57) == 0) && (*(char *)(param_1 + 0x60) != 0)) {
      sVar2 = (**(code **)(*param_1 + 0x24))();
      if (((*(int *)((int)g_Ram_float + 0xb70) == 4) &&
          (*(short *)((int)g_Ram_float + 0xb9e) == 5)) &&
         ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
          (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
        piVar3[2] = piVar3[2] + 1;
      }
      *(undefined *)(param_1 + 0x57) = 1;
      if (*(short *)(param_1 + 0x2d) == 1) {
        FUN_segment_0__804470ec
                  ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
      }
    }
  }
  else if (((param_4 == 6) && (*(char *)(param_1 + 0x57) == 0)) &&
          (*(char *)(param_1 + 0x60) != 0)) {
    sVar2 = (**(code **)(*param_1 + 0x24))();
    if (((*(int *)((int)g_Ram_float + 0xb70) == 4) && (*(short *)((int)g_Ram_float + 0xb9e) == 5))
       && ((piVar3 = *(int **)((int)g_Ram_float + 0x10), sVar2 == 0 ||
           (iVar1 = (**(code **)(*piVar3 + 0x38))(piVar3), iVar1 != 0)))) {
      piVar3[2] = piVar3[2] + 1;
    }
    *(undefined *)(param_1 + 0x57) = 1;
    if (*(short *)(param_1 + 0x2d) == 1) {
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),1);
    }
  }
  return param_3;
}

// === snd_EGG_Sound_805aa2f0 (0x805aa2f0) ===
void snd_EGG_Sound_805aa2f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x3e] == 0) {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < param_1[0x3b]; iVar1 = iVar1 + 1) {
      (**(code **)(**(int **)(param_1[0x36] + iVar2) + 0x94))();
      iVar2 = iVar2 + 4;
    }
    (**(code **)(*param_1 + 0x68))(param_1,0);
    *(undefined *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*(int *)param_1[0x37] + 0x68))((int *)param_1[0x37],0);
    (**(code **)(*(int *)param_1[0x37] + 0x90))();
    *(undefined *)(param_1 + 0x57) = 0;
    param_1[0x59] = iRam00000000;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1,0);
    *(undefined *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x90))(param_1);
    *(undefined *)(param_1 + 0x57) = 0;
  }
  return;
}

// === snd_EGG_Sound_805aa414 (0x805aa414) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805aa414(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805aa804 (0x805aa804) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805aa804(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805aad5c (0x805aad5c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805aad5c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805aafb4 (0x805aafb4) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805aafb4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ab208 (0x805ab208) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ab208(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ab458 (0x805ab458) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ab458(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ab694 (0x805ab694) ===
void snd_EGG_Sound_805ab694(int param_1)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)(**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  fVar1 = (float)((double)*(float *)(param_1 + 0x164) + dVar2);
  *(float *)(param_1 + 0x164) = fVar1;
  if (*(float *)(param_1 + 0xf4) < fVar1) {
    *(float *)(param_1 + 0x164) = *(float *)(param_1 + 0xf4) - g_Ram_float;
  }
  snd_EGG_Sound_805ab458(param_1);
  return;
}

// === snd_EGG_Sound_805ab798 (0x805ab798) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ab798(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ab8b4 (0x805ab8b4) ===
void snd_EGG_Sound_805ab8b4(int param_1)

{
  double dVar1;
  
  (**(code **)(**(int **)(param_1 + 0xd0) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x78))(*(int **)(param_1 + 0xd0),param_1 + 300);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x80))();
  dVar1 = (double)(**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  if (dVar1 < (double)g_Ram_float) {
    dVar1 = (double)*(float *)(*(int *)(param_1 + 0x20) + 0x30);
  }
  *(short *)(param_1 + 0x182) = (short)(int)((double)g_Ram_float / dVar1);
  (**(code **)(**(int **)(param_1 + 0xd4) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x78))(*(int **)(param_1 + 0xd4),param_1 + 300);
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x28))
            (*(int **)(param_1 + 0xd4),
             (int)(g_Ram_float *
                  (float)((double)CONCAT44(0x43300000,(uint)*(ushort *)(param_1 + 0x182)) -
                         (double)CONCAT44(g_Ram_float,uRam00000004))) & 0xffff);
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x80))();
  return;
}

// === snd_EGG_Sound_805ab9fc (0x805ab9fc) ===
void snd_EGG_Sound_805ab9fc(undefined4 param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = uRam00000000;
  local_18 = 0;
  local_c = uRam00000004;
  local_14 = 0;
  FUN_segment_0__80701444(param_1,&local_10,&local_18,2,0);
  return;
}

// === EGG_Sound_validate_805aba84 (0x805aba84) ===
int EGG_Sound_validate_805aba84(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805abad8 (0x805abad8) ===
undefined4 * snd_EGG_Sound_805abad8(undefined4 *param_1,int *param_2)

{
  short sVar1;
  
  FUN_segment_0__806ff578();
  *param_1 = 0;
  sVar1 = *(short *)(*param_2 + 0x2e);
  param_1[0x2c] = (int)sVar1;
  if (sVar1 == 0) {
    param_1[0x2c] = 600;
  }
  return param_1;
}

// === EGG_Sound_validate_805abb3c (0x805abb3c) ===
int EGG_Sound_validate_805abb3c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805abb7c (0x805abb7c) ===
void snd_EGG_Sound_805abb7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  iVar9 = **(int **)(param_1 + 0xa0);
  fVar6 = *(float *)(iVar9 + 0x18) * fRam00000058;
  uVar1 = *(undefined4 *)(iVar9 + 0xc);
  fVar7 = *(float *)(iVar9 + 0x14) * fRam00000058;
  uVar2 = *(undefined4 *)(iVar9 + 8);
  fVar8 = *(float *)(iVar9 + 0x10) * fRam00000058;
  uVar3 = *(undefined4 *)(iVar9 + 4);
  uVar4 = *(undefined4 *)(iVar9 + 0x24);
  uVar5 = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar9 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined *)(param_1 + 0x54) = 1;
  *(float *)(param_1 + 0x48) = fVar8;
  *(float *)(param_1 + 0x4c) = fVar7;
  *(float *)(param_1 + 0x50) = fVar6;
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 0xb;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(float *)(param_1 + 0xb4) = g_Ram_float;
  *(undefined4 *)(param_1 + 0xb8) = uRam00000004;
  *(undefined4 *)(param_1 + 0xbc) = uRam00000008;
  *(float *)(param_1 + 0xc0) = g_Ram_float;
  *(undefined4 *)(param_1 + 0xc4) = uRam00000004;
  *(undefined4 *)(param_1 + 200) = uRam00000008;
  *(float *)(param_1 + 0xcc) = g_Ram_float;
  *(undefined4 *)(param_1 + 0xd0) = uRam00000004;
  fVar6 = g_Ram_float;
  dVar10 = (double)g_Ram_float;
  *(undefined4 *)(param_1 + 0xd4) = uRam00000008;
  uVar4 = uRam0000005c;
  *(float *)(param_1 + 0xe0) = fVar6;
  *(float *)(param_1 + 0xdc) = fVar6;
  dVar11 = (double)fRam00000060;
  *(float *)(param_1 + 0xd8) = fVar6;
  *(float *)(param_1 + 0xe4) = fVar6;
  *(float *)(param_1 + 0xe8) = fVar6;
  *(float *)(param_1 + 0xec) = g_Ram_float;
  *(undefined4 *)(param_1 + 0xf0) = uRam00000004;
  *(undefined4 *)(param_1 + 0xf4) = uRam00000008;
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(float *)(param_1 + 0x104) = g_Ram_float;
  *(undefined4 *)(param_1 + 0x108) = uRam00000004;
  *(undefined4 *)(param_1 + 0x10c) = uRam00000008;
  *(float *)(param_1 + 0x118) = fVar6;
  *(float *)(param_1 + 0x114) = fVar6;
  *(float *)(param_1 + 0x110) = fVar6;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(float *)(param_1 + 0x124) = fVar6;
  FUN_segment_0__804470ec(dVar10,dVar11,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),1);
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === EGG_Sound_validate_805abd3c (0x805abd3c) ===
void EGG_Sound_validate_805abd3c(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  EGG_Sound_validate_805ac2f0();
  (**(code **)(*param_1 + 0xf0))(param_1);
  param_1[0x30] = param_1[0x2d];
  param_1[0x31] = param_1[0x2e];
  param_1[0x32] = param_1[0x2f];
  snd_EGG_Sound_805acb64((double)(float)param_1[0x47],&local_28,param_1 + 0x2d,param_1 + 0x41);
  param_1[0x2d] = (int)local_28;
  fVar3 = fRam00000064;
  param_1[0x2e] = (int)local_24;
  param_1[0x2f] = (int)local_20;
  iVar2 = iRam00000060;
  fVar1 = g_Ram_float;
  if (fVar3 < local_20 * local_20 + local_28 * local_28 + local_24 * local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x2d);
  }
  param_1[0x2d] = (int)g_Ram_float;
  param_1[0x2e] = (int)fVar1;
  param_1[0x2f] = iVar2;
  snd_EGG_Sound_805acb64((double)g_Ram_float,&local_1c,param_1 + 0x33,param_1 + 0x3b);
  param_1[0x33] = (int)local_1c;
  fVar3 = fRam00000064;
  param_1[0x34] = (int)local_18;
  param_1[0x35] = (int)local_14;
  iVar2 = iRam00000060;
  fVar1 = g_Ram_float;
  if (local_14 * local_14 + local_1c * local_1c + local_18 * local_18 <= fVar3) {
    param_1[0x33] = (int)g_Ram_float;
    param_1[0x34] = iVar2;
    param_1[0x35] = (int)fVar1;
    FUN_segment_0__80701e9c(param_1,param_1 + 0x33,param_1 + 0x2d);
    if (param_1[0x48] != -1) {
      param_1[0x48] = param_1[0x48] + 1;
      snd_EGG_Sound_805ac7bc(param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x33);
}

// === snd_EGG_Sound_805abec4 (0x805abec4) ===
undefined4 snd_EGG_Sound_805abec4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  double dVar2;
  
  if (param_4 == 0) {
    dVar2 = (double)FUN_segment_0__8047e63c(param_2);
    if (dVar2 < (double)fRam00000068) {
      param_3 = 8;
    }
  }
  else if (param_4 == 3) {
    if (param_1[0x48] == -1) {
      FUN_segment_0__8047dcf4(param_2,0);
      fVar1 = g_Ram_float;
      param_1[0x48] = 0;
      param_1[0x49] = (int)fVar1;
      (**(code **)(*param_1 + 0x90))(param_1);
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),5);
      FUN_segment_0__80700ae8(param_1,0x293);
    }
  }
  else if ((param_4 == 5) && (param_1[0x48] == -1)) {
    FUN_segment_0__8047dcf4(param_2,0);
    fVar1 = g_Ram_float;
    param_1[0x48] = 0;
    param_1[0x49] = (int)fVar1;
    (**(code **)(*param_1 + 0x90))(param_1);
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),5);
    FUN_segment_0__80700ae8(param_1,0x293);
  }
  return param_3;
}

// === snd_EGG_Sound_805ac008 (0x805ac008) ===
undefined4 snd_EGG_Sound_805ac008(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  
  fVar1 = g_Ram_float;
  if (param_4 == 3) {
    if (param_1[0x48] == -1) {
      param_1[0x48] = 0;
      param_1[0x49] = (int)fVar1;
      (**(code **)(*param_1 + 0x90))();
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),5);
      FUN_segment_0__80700ae8(param_1,0x293);
    }
  }
  else if (param_4 == 4) {
    if (param_1[0x48] == -1) {
      param_1[0x48] = 0;
      param_1[0x49] = (int)fVar1;
      (**(code **)(*param_1 + 0x90))();
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),5);
      FUN_segment_0__80700ae8(param_1,0x293);
    }
  }
  else if (param_4 == 5) {
    if (param_1[0x48] == -1) {
      param_1[0x48] = 0;
      param_1[0x49] = (int)fVar1;
      (**(code **)(*param_1 + 0x90))();
      FUN_segment_0__804470ec
                ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),5);
      FUN_segment_0__80700ae8(param_1,0x293);
    }
  }
  else if ((param_4 == 6) && (param_1[0x48] == -1)) {
    param_1[0x48] = 0;
    param_1[0x49] = (int)fVar1;
    (**(code **)(*param_1 + 0x90))();
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),5);
    FUN_segment_0__80700ae8(param_1,0x293);
  }
  return param_3;
}

// === EGG_Sound_validate_805ac1d8 (0x805ac1d8) ===
void EGG_Sound_validate_805ac1d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined auStack_58 [12];
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
  
  if (*(int *)(param_1 + 0x120) == -1) {
    FUN_segment_0__80702028();
  }
  else {
    FUN_segment_0__80701bcc();
    local_40 = *(undefined4 *)(param_1 + 0x58);
    local_3c = *(undefined4 *)(param_1 + 0x5c);
    local_38 = *(undefined4 *)(param_1 + 0x60);
    local_34 = *(undefined4 *)(param_1 + 100);
    local_30 = *(undefined4 *)(param_1 + 0x68);
    local_2c = *(undefined4 *)(param_1 + 0x6c);
    local_28 = *(undefined4 *)(param_1 + 0x70);
    local_24 = *(undefined4 *)(param_1 + 0x74);
    local_20 = *(undefined4 *)(param_1 + 0x78);
    local_1c = *(undefined4 *)(param_1 + 0x7c);
    local_18 = *(undefined4 *)(param_1 + 0x80);
    local_14 = *(undefined4 *)(param_1 + 0x84);
    FUN_segment_0__8040443c((double)*(float *)(param_1 + 0x124),auStack_58,0);
    FUN_segment_0__80404464(&local_4c,param_1 + 0x30,auStack_58);
    iVar2 = 0;
    local_34 = local_4c;
    local_24 = local_48;
    local_14 = local_44;
    iVar1 = *(int *)(param_1 + 8);
    do {
      if (**(int **)(iVar1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(**(int **)(iVar1 + 0x14),0,&local_40);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 2);
  }
  return;
}

// === EGG_Sound_validate_805ac2f0 (0x805ac2f0) ===
void EGG_Sound_validate_805ac2f0(int param_1)

{
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined auStack_64 [12];
  undefined auStack_58 [12];
  undefined auStack_4c [36];
  undefined auStack_28 [12];
  undefined auStack_1c [20];
  
  FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xe8),auStack_1c,param_1 + 0xb4);
  FUN_segment_0__80404498(auStack_4c,param_1 + 0xb4,param_1 + 0xc0);
  FUN_segment_0__8040443c((double)*(float *)(param_1 + 0xe4),auStack_28,auStack_4c);
  FUN_segment_0__80404464(auStack_58,auStack_1c,auStack_28);
  FUN_segment_0__80404464(auStack_64,auStack_58,param_1 + 0x110);
  local_70 = uRam00000000;
  local_6c = uRam00000000;
  local_68 = uRam00000000;
  FUN_segment_0__80404498(&local_7c,auStack_64,&local_70);
  local_7c = *(float *)(param_1 + 0xd8) + local_7c;
  *(float *)(param_1 + 0xd8) = local_7c;
  *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + local_78;
  local_74 = *(float *)(param_1 + 0xe0) + local_74;
  *(float *)(param_1 + 0xe0) = local_74;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((double)(local_7c * local_7c + local_74 * local_74));
}

// === snd_EGG_Sound_805ac494 (0x805ac494) ===
void snd_EGG_Sound_805ac494(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [12];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined auStack_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_20;
  undefined4 local_10;
  
  local_74 = uRam00000000;
  local_70 = fRam0000006c;
  local_6c = uRam00000000;
  local_68 = uRam00000000;
  local_64 = uRam00000000;
  local_60 = uRam00000000;
  local_5c = uRam00000000;
  local_58 = uRam00000000;
  local_54 = uRam00000000;
  local_10 = 0;
  FUN_segment_0__80404464(auStack_80,param_1 + 0x30,&local_74);
  iVar4 = FUN_segment_0__8067a594
                    ((double)fRam0000006c,uRam00000000,auStack_80,0,0x64ebdfff,&local_68,
                     uRam00000000,0);
  uVar1 = uRam00000000;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x118) = uRam00000000;
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    *(undefined4 *)(param_1 + 0x110) = uVar1;
  }
  else {
    FUN_segment_0__80404464(&local_8c,param_1 + 0x30,auStack_50);
    *(undefined4 *)(param_1 + 0x30) = local_8c;
    fVar3 = fRam00000070;
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
    *(undefined4 *)(param_1 + 0x34) = local_88;
    *(undefined4 *)(param_1 + 0x38) = local_84;
    if (fVar3 < local_20) {
      *(undefined4 *)(param_1 + 0xec) = local_44;
      *(undefined4 *)(param_1 + 0xf0) = local_40;
      *(undefined4 *)(param_1 + 0xf4) = local_3c;
    }
    uVar1 = uRam00000000;
    *(undefined4 *)(param_1 + 0xdc) = uRam00000000;
    uVar2 = uRam00000000;
    *(undefined4 *)(param_1 + 0x110) = uVar1;
    *(undefined4 *)(param_1 + 0x114) = uVar2;
    *(undefined4 *)(param_1 + 0x118) = uVar1;
  }
  return;
}

// === EGG_Sound_validate_805ac5ec (0x805ac5ec) ===
void EGG_Sound_validate_805ac5ec(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xbc);
  snd_EGG_Sound_805acb64
            ((double)*(float *)(param_1 + 0x11c),&local_1c,param_1 + 0xb4,param_1 + 0x104);
  *(float *)(param_1 + 0xb4) = local_1c;
  fVar3 = fRam00000064;
  *(float *)(param_1 + 0xb8) = local_18;
  *(float *)(param_1 + 0xbc) = local_14;
  uVar2 = uRam00000060;
  fVar1 = g_Ram_float;
  if (fVar3 < local_14 * local_14 + local_1c * local_1c + local_18 * local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0xb4);
  }
  *(float *)(param_1 + 0xb4) = g_Ram_float;
  *(float *)(param_1 + 0xb8) = fVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  snd_EGG_Sound_805acb64((double)g_Ram_float,&local_28,param_1 + 0xcc,param_1 + 0xec);
  *(float *)(param_1 + 0xcc) = local_28;
  fVar3 = fRam00000064;
  *(float *)(param_1 + 0xd0) = local_24;
  *(float *)(param_1 + 0xd4) = local_20;
  uVar2 = uRam00000060;
  fVar1 = g_Ram_float;
  if (local_20 * local_20 + local_28 * local_28 + local_24 * local_24 <= fVar3) {
    *(float *)(param_1 + 0xcc) = g_Ram_float;
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(float *)(param_1 + 0xd4) = fVar1;
    FUN_segment_0__80701e9c(param_1,param_1 + 0xcc,param_1 + 0xb4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xcc);
}

// === snd_EGG_Sound_805ac740 (0x805ac740) ===
void snd_EGG_Sound_805ac740(int *param_1)

{
  float fVar1;
  
  fVar1 = g_Ram_float;
  param_1[0x48] = 0;
  param_1[0x49] = (int)fVar1;
  (**(code **)(*param_1 + 0x90))();
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(param_1[2] + 0x28),5);
  FUN_segment_0__80700ae8(param_1,0x293);
  return;
}

// === snd_EGG_Sound_805ac7bc (0x805ac7bc) ===
void snd_EGG_Sound_805ac7bc(int *param_1)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  undefined auStack_48 [12];
  undefined auStack_3c [12];
  undefined auStack_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  
  dVar3 = (double)FUN_segment_0__805a55c0((double)g_Ram_float,(double)g_Ram_float,param_1[0x48]);
  param_1[0x49] = (int)(float)dVar3;
  local_24 = g_Ram_float;
  local_20 = g_Ram_float;
  local_1c = g_Ram_float;
  FUN_segment_0__8040443c((double)(float)dVar3,auStack_3c,0);
  FUN_segment_0__80404464(auStack_30,param_1 + 0xc,auStack_3c);
  bVar1 = false;
  if (5 < param_1[0x48]) {
    FUN_segment_0__80404464(auStack_48,auStack_30,&local_24);
    iVar2 = FUN_segment_0__8067a1d4
                      ((double)g_Ram_float,g_Ram_float,auStack_48,0,0x64ebdfff,g_Ram_float,
                       g_Ram_float,0);
    if (iVar2 != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    param_1[0x48] = -1;
    (**(code **)(*param_1 + 0x94))(param_1);
  }
  return;
}

// === EGG_Sound_validate_805ac8d8 (0x805ac8d8) ===
void EGG_Sound_validate_805ac8d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
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
  
  FUN_segment_0__80701bcc();
  local_40 = *(undefined4 *)(param_1 + 0x58);
  local_3c = *(undefined4 *)(param_1 + 0x5c);
  local_38 = *(undefined4 *)(param_1 + 0x60);
  local_34 = *(undefined4 *)(param_1 + 100);
  local_30 = *(undefined4 *)(param_1 + 0x68);
  local_2c = *(undefined4 *)(param_1 + 0x6c);
  local_28 = *(undefined4 *)(param_1 + 0x70);
  local_24 = *(undefined4 *)(param_1 + 0x74);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  local_1c = *(undefined4 *)(param_1 + 0x7c);
  local_18 = *(undefined4 *)(param_1 + 0x80);
  local_14 = *(undefined4 *)(param_1 + 0x84);
  FUN_segment_0__8040443c((double)*(float *)(param_1 + 0x124),auStack_4c,0);
  FUN_segment_0__80404464(&local_58,param_1 + 0x30,auStack_4c);
  iVar2 = 0;
  local_34 = local_58;
  local_24 = local_54;
  local_14 = local_50;
  iVar1 = *(int *)(param_1 + 8);
  do {
    if (**(int **)(iVar1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(**(int **)(iVar1 + 0x14),0,&local_40);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  return;
}

// === snd_EGG_Sound_805ac9dc (0x805ac9dc) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ac9dc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805acaa0 (0x805acaa0) ===
void EGG_Sound_validate_805acaa0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xbc);
  snd_EGG_Sound_805acb64(&local_18,param_1 + 0xb4,param_1 + 0x104);
  *(float *)(param_1 + 0xb4) = local_18;
  fVar3 = fRam00000064;
  *(float *)(param_1 + 0xb8) = local_14;
  *(float *)(param_1 + 0xbc) = local_10;
  uVar2 = uRam00000060;
  uVar1 = uRam00000000;
  if (local_10 * local_10 + local_18 * local_18 + local_14 * local_14 <= fVar3) {
    *(undefined4 *)(param_1 + 0xb4) = uRam00000000;
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xb4);
}

// === snd_EGG_Sound_805acb64 (0x805acb64) ===
void snd_EGG_Sound_805acb64
               (undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined auStack_2c [12];
  undefined auStack_20 [16];
  
  FUN_segment_0__80404498(auStack_20,param_4,param_3);
  FUN_segment_0__8040443c(param_1,auStack_2c,auStack_20);
  FUN_segment_0__80404464(&local_38,param_3,auStack_2c);
  param_2[1] = local_34;
  *param_2 = local_38;
  param_2[2] = local_30;
  return;
}

// === EGG_Sound_validate_805acbec (0x805acbec) ===
void EGG_Sound_validate_805acbec(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  snd_EGG_Sound_805acb64(&local_18,param_1 + 0xcc,param_1 + 0xec);
  *(float *)(param_1 + 0xcc) = local_18;
  fVar3 = fRam00000064;
  *(float *)(param_1 + 0xd0) = local_14;
  *(float *)(param_1 + 0xd4) = local_10;
  uVar2 = uRam00000060;
  uVar1 = uRam00000000;
  if (local_10 * local_10 + local_18 * local_18 + local_14 * local_14 <= fVar3) {
    *(undefined4 *)(param_1 + 0xcc) = uRam00000000;
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0xcc);
}

// === EGG_Sound_validate_805acc98 (0x805acc98) ===
void EGG_Sound_validate_805acc98(undefined4 *param_1,int *param_2)

{
  short sVar1;
  
  FUN_segment_0__806ff578();
  *param_1 = 0;
  sVar1 = *(short *)(*param_2 + 0x2e);
  param_1[0x2c] = (int)sVar1;
  if (sVar1 == 0) {
    param_1[0x2c] = 600;
  }
  *(undefined2 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4d] = 0;
  *param_1 = 0;
  param_1[0x4a] = 0xf4;
  param_1[0x51] = param_1;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 3;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(6);
}

// === EGG_Sound_validate_805acdac (0x805acdac) ===
undefined4 EGG_Sound_validate_805acdac(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === EGG_Sound_validate_805ace10 (0x805ace10) ===
int EGG_Sound_validate_805ace10(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x128) {
      *(undefined4 *)(param_1 + 0x128) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x13c));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffed8);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_805ace7c (0x805ace7c) ===
void snd_EGG_Sound_805ace7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  undefined auStack_28 [12];
  undefined auStack_1c [12];
  undefined4 local_10;
  uint uStack_c;
  
  snd_EGG_Sound_805abb7c();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x10))((double)g_Ram_float,*(int **)(param_1 + 0x20),0)
  ;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(iVar3 + 0x20);
  uVar2 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x18);
  dVar4 = (double)fRam00000078;
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_segment_0__8040443c(dVar4,auStack_1c,iVar3 + 0x24);
  FUN_segment_0__80404464(auStack_28,*(int *)(param_1 + 0x20) + 0x18,auStack_1c);
  snd_EGG_Sound_805ac9dc(param_1,auStack_28);
  local_10 = 0x43300000;
  uStack_c = (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x2c) ^ 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x18))
            ((double)(float)((double)CONCAT44(0x43300000,uStack_c) - dRam00000080));
  uVar1 = uRam00000060;
  *(float *)(param_1 + 0x148) = g_Ram_float;
  *(undefined *)(param_1 + 0x14c) = 0;
  *(undefined *)(param_1 + 0x14d) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = 2;
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === EGG_Sound_validate_805acfa0 (0x805acfa0) ===
void EGG_Sound_validate_805acfa0(int *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  uVar5 = *(uint *)((int)g_Ram_float + 0x20);
  bVar1 = uVar5 < param_1[0x2c] - 0x3cU;
  if (bVar1) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),3,1);
    iVar6 = FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
    if ((*(short *)(iVar6 + 8) != 3) && (param_1[0x48] == -1)) {
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),3,1);
    }
  }
  else {
    if ((bVar1) || ((uint)param_1[0x2c] <= uVar5)) {
      uVar5 = param_1[0x4c];
      if (-1 < (int)uVar5) {
        *(short *)(param_1 + 0x4b) = (short)uVar5;
        param_1[0x4c] = -1;
        param_1[0x4d] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430
                  (param_1[0x50] + (uint)*(ushort *)(param_1[0x4f] + (uVar5 & 0xffff) * 2) * 0x1c +
                   4);
      }
      param_1[0x4d] = param_1[0x4d] + 1;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430
                (param_1[0x50] +
                 (uint)*(ushort *)(param_1[0x4f] + (uint)*(ushort *)(param_1 + 0x4b) * 2) * 0x1c +
                 0x10);
    }
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),4,1);
    iVar6 = FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
    if ((*(short *)(iVar6 + 8) != 4) && (param_1[0x48] == -1)) {
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),4,1);
    }
  }
  EGG_Sound_validate_805ac2f0(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  param_1[0x30] = param_1[0x2d];
  param_1[0x31] = param_1[0x2e];
  param_1[0x32] = param_1[0x2f];
  snd_EGG_Sound_805acb64((double)(float)param_1[0x47],&local_1c,param_1 + 0x2d,param_1 + 0x41);
  param_1[0x2d] = (int)local_1c;
  fVar4 = fRam00000064;
  param_1[0x2e] = (int)local_18;
  param_1[0x2f] = (int)local_14;
  fVar3 = fRam00000060;
  fVar2 = g_Ram_float;
  if (fVar4 < local_14 * local_14 + local_1c * local_1c + local_18 * local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x2d);
  }
  param_1[0x2d] = (int)g_Ram_float;
  param_1[0x2e] = (int)fVar2;
  param_1[0x2f] = (int)fVar3;
  snd_EGG_Sound_805acb64((double)g_Ram_float,&local_28,param_1 + 0x33,param_1 + 0x3b);
  param_1[0x33] = (int)local_28;
  fVar4 = fRam00000064;
  param_1[0x34] = (int)local_24;
  param_1[0x35] = (int)local_20;
  fVar3 = fRam00000060;
  fVar2 = g_Ram_float;
  if (local_20 * local_20 + local_28 * local_28 + local_24 * local_24 <= fVar4) {
    param_1[0x33] = (int)g_Ram_float;
    param_1[0x34] = (int)fVar3;
    param_1[0x35] = (int)fVar2;
    FUN_segment_0__80701e9c(param_1,param_1 + 0x33,param_1 + 0x2d);
    if (param_1[0x48] != -1) {
      param_1[0x48] = param_1[0x48] + 1;
      snd_EGG_Sound_805ac7bc(param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x33);
}

// === snd_EGG_Sound_805ad2c8 (0x805ad2c8) ===
void snd_EGG_Sound_805ad2c8(int param_1)

{
  undefined auStack_28 [12];
  undefined auStack_1c [20];
  
  FUN_segment_0__8040443c((double)fRam00000078,auStack_1c,*(int *)(param_1 + 0x20) + 0x24);
  FUN_segment_0__80404464(auStack_28,*(int *)(param_1 + 0x20) + 0x18,auStack_1c);
  snd_EGG_Sound_805ac9dc(param_1,auStack_28);
  FUN_segment_0__804473a4
            ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0,1);
  return;
}

// === snd_EGG_Sound_805ad350 (0x805ad350) ===
void snd_EGG_Sound_805ad350(int param_1)

{
  int iVar1;
  
  if ((uint)*(ushort *)
             (*(int *)(*(int *)(param_1 + 0x20) + 8) +
              *(short *)(*(int *)(param_1 + 0x20) + 0x46) * 0x10 + 0xc) < *(uint *)(param_1 + 0x134)
     ) {
    *(undefined4 *)(param_1 + 0x130) = 2;
  }
  iVar1 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  if ((*(short *)(iVar1 + 8) != 0) && (*(int *)(param_1 + 0x120) == -1)) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0,1);
  }
  return;
}

// === snd_EGG_Sound_805ad3f0 (0x805ad3f0) ===
void snd_EGG_Sound_805ad3f0(int param_1)

{
  short sVar1;
  
  *(undefined *)(param_1 + 0x14d) = 0;
  sVar1 = FUN_segment_0__8044364c(*(undefined4 *)((int)g_Ram_float + 4),0x78);
  *(short *)(param_1 + 0x14e) = sVar1 + 0x78;
  FUN_segment_0__804473a4
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,2,1);
  return;
}

// === snd_EGG_Sound_805ad464 (0x805ad464) ===
void snd_EGG_Sound_805ad464(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x14d);
  if (cVar1 == 0) {
    iVar2 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
    if ((*(short *)(iVar2 + 8) != 2) && (*(int *)(param_1 + 0x120) == -1)) {
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)g_Ram_float,
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2,1);
    }
    if (*(int *)(param_1 + 0x134) == 0x28) {
      *(undefined2 *)(param_1 + 0x150) = 0x28;
      *(undefined *)(param_1 + 0x14d) = 1;
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)g_Ram_float,
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),3,1);
    }
  }
  else if (cVar1 == '\x01') {
    iVar2 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
    if ((*(short *)(iVar2 + 8) != 3) && (*(int *)(param_1 + 0x120) == -1)) {
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)g_Ram_float,
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),3,1);
    }
    if ((uint)*(ushort *)(param_1 + 0x14e) + (uint)*(ushort *)(param_1 + 0x150) <
        *(uint *)(param_1 + 0x134)) {
      *(undefined *)(param_1 + 0x14d) = 2;
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)g_Ram_float,
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),4,1);
    }
  }
  else if (cVar1 == '\x02') {
    iVar2 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
    if ((*(short *)(iVar2 + 8) != 4) && (*(int *)(param_1 + 0x120) == -1)) {
      FUN_segment_0__804473a4
                ((double)g_Ram_float,(double)g_Ram_float,
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),4,1);
    }
    if (*(ushort *)(param_1 + 0x14e) + 100 == *(int *)(param_1 + 0x134)) {
      *(undefined4 *)(param_1 + 0x130) = 2;
    }
  }
  return;
}

// === snd_EGG_Sound_805ad634 (0x805ad634) ===
void snd_EGG_Sound_805ad634(int param_1)

{
  FUN_segment_0__804473a4
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,1,1);
  *(undefined *)(param_1 + 0x14c) = 0;
  return;
}

// === snd_EGG_Sound_805ad688 (0x805ad688) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ad688(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ad8f0 (0x805ad8f0) ===
void snd_EGG_Sound_805ad8f0(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0xdc) = uRam00000000;
  *(undefined4 *)(param_1 + 0x114) = uRam00000000;
  FUN_segment_0__805cd090
            (*(int *)(param_1 + 0x20),(int)*(short *)(*(int *)(param_1 + 0x20) + 0x48),&local_18);
  *(undefined4 *)(param_1 + 0xec) = local_18;
  *(undefined4 *)(param_1 + 0xf0) = local_14;
  *(undefined4 *)(param_1 + 0xf4) = local_10;
  return;
}

// === snd_EGG_Sound_805ad960 (0x805ad960) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ad960(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805adba8 (0x805adba8) ===
undefined4 EGG_Sound_validate_805adba8(undefined4 *param_1)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[5]);
  }
  return 0;
}

// === EGG_Sound_validate_805adc0c (0x805adc0c) ===
int EGG_Sound_validate_805adc0c(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x128) {
      *(undefined4 *)(param_1 + 0x128) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(*(undefined4 *)(param_1 + 0x13c));
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0xfffffed8);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_805adc78 (0x805adc78) ===
void EGG_Sound_validate_805adc78(int param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  snd_EGG_Sound_805abb7c();
  FUN_segment_0__80404464(&local_28,param_1 + 0x30,param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x30) = local_28;
  local_1c = *(undefined4 *)(param_1 + 0x148);
  *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
  local_18 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x34) = local_24;
  *(undefined4 *)(param_1 + 0x38) = local_20;
  local_14 = *(undefined4 *)(param_1 + 0x150);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(&local_1c);
}

// === EGG_Sound_validate_805addc0 (0x805addc0) ===
void EGG_Sound_validate_805addc0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined auStack_30 [12];
  undefined auStack_24 [24];
  
  if ((uint)param_1[0x2c] <= *(uint *)((int)g_Ram_float + 0x20)) {
    uVar4 = param_1[0x4c];
    if (-1 < (int)uVar4) {
      *(short *)(param_1 + 0x4b) = (short)uVar4;
      param_1[0x4c] = -1;
      param_1[0x4d] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430
                (param_1[0x50] + (uint)*(ushort *)(param_1[0x4f] + (uVar4 & 0xffff) * 2) * 0x1c + 4)
      ;
    }
    param_1[0x4d] = param_1[0x4d] + 1;
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430
              (param_1[0x50] +
               (uint)*(ushort *)(param_1[0x4f] + (uint)*(ushort *)(param_1 + 0x4b) * 2) * 0x1c +
               0x10);
  }
  if ((uint)*(ushort *)(param_1 + 0x56) < (uint)param_1[0x4d]) {
    param_1[0x4c] = 1;
    *(undefined *)(param_1 + 0x58) = 1;
  }
  iVar5 = FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
  if ((*(short *)(iVar5 + 8) != 0) && (param_1[0x48] == -1)) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),0,1);
  }
  if ((float)param_1[0x60] < *(float *)(param_1[0x55] + 0x40)) {
    param_1[0x4c] = 2;
  }
  iVar5 = FUN_segment_0__80447060(*(undefined4 *)(param_1[2] + 0x28),0);
  if ((*(short *)(iVar5 + 8) != 0) && (param_1[0x48] == -1)) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(param_1[2] + 0x28),0,1);
  }
  FUN_segment_0__8040443c((double)fRam00000094,auStack_24,param_1 + 0x52);
  FUN_segment_0__80404464(auStack_30,param_1 + 0xc,auStack_24);
  snd_EGG_Sound_805ac9dc(param_1,auStack_30);
  EGG_Sound_validate_805ac2f0(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1);
  param_1[0x30] = param_1[0x2d];
  param_1[0x31] = param_1[0x2e];
  param_1[0x32] = param_1[0x2f];
  snd_EGG_Sound_805acb64((double)(float)param_1[0x47],&local_3c,param_1 + 0x2d,param_1 + 0x41);
  param_1[0x2d] = (int)local_3c;
  fVar3 = fRam00000064;
  param_1[0x2e] = (int)local_38;
  param_1[0x2f] = (int)local_34;
  fVar2 = fRam00000060;
  fVar1 = g_Ram_float;
  if (local_34 * local_34 + local_3c * local_3c + local_38 * local_38 <= fVar3) {
    param_1[0x2d] = (int)g_Ram_float;
    param_1[0x2e] = (int)fVar1;
    param_1[0x2f] = (int)fVar2;
    snd_EGG_Sound_805acb64((double)g_Ram_float,&local_48,param_1 + 0x33,param_1 + 0x3b);
    param_1[0x33] = (int)local_48;
    fVar3 = fRam00000064;
    param_1[0x34] = (int)local_44;
    param_1[0x35] = (int)local_40;
    fVar2 = fRam00000060;
    fVar1 = g_Ram_float;
    if (local_40 * local_40 + local_48 * local_48 + local_44 * local_44 <= fVar3) {
      param_1[0x33] = (int)g_Ram_float;
      param_1[0x34] = (int)fVar2;
      param_1[0x35] = (int)fVar1;
      FUN_segment_0__80701e9c(param_1,param_1 + 0x33,param_1 + 0x2d);
      if (param_1[0x48] != -1) {
        param_1[0x48] = param_1[0x48] + 1;
        snd_EGG_Sound_805ac7bc(param_1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x33);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x2d);
}

// === snd_EGG_Sound_805ae100 (0x805ae100) ===
void snd_EGG_Sound_805ae100(int param_1)

{
  short sVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  sVar1 = FUN_segment_0__8044364c(*(undefined4 *)((int)g_Ram_float + 4),0x3c);
  dVar2 = (double)fRam0000008c;
  *(short *)(param_1 + 0x158) = sVar1 + 100;
  dVar2 = (double)FUN_segment_0__80443728(dVar2,*(undefined4 *)((int)g_Ram_float + 4));
  dVar3 = (double)g_Ram_float;
  dVar4 = (double)fRam00000060;
  *(float *)(param_1 + 0x180) = (float)((double)fRam00000090 + dVar2);
  FUN_segment_0__804473a4(dVar3,dVar4,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0,1);
  return;
}

// === snd_EGG_Sound_805ae198 (0x805ae198) ===
void snd_EGG_Sound_805ae198(int param_1)

{
  int iVar1;
  
  if ((uint)*(ushort *)(param_1 + 0x158) < *(uint *)(param_1 + 0x134)) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    *(undefined *)(param_1 + 0x160) = 1;
  }
  iVar1 = FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  if ((*(short *)(iVar1 + 8) != 0) && (*(int *)(param_1 + 0x120) == -1)) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0,1);
  }
  if (*(float *)(param_1 + 0x180) < *(float *)(*(int *)(param_1 + 0x154) + 0x40)) {
    *(undefined4 *)(param_1 + 0x130) = 2;
  }
  return;
}

// === snd_EGG_Sound_805ae244 (0x805ae244) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ae244(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ae3ac (0x805ae3ac) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ae3ac(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ae548 (0x805ae548) ===
void snd_EGG_Sound_805ae548(int param_1)

{
  double dVar1;
  double dVar2;
  
  *(undefined *)(param_1 + 0x17c) = 0;
  dVar1 = (double)FUN_segment_0__80443728
                            ((double)(g_Ram_float - g_Ram_float),
                             *(undefined4 *)((int)g_Ram_float + 4));
  dVar2 = (double)g_Ram_float;
  *(undefined4 *)(param_1 + 0x11c) = uRam000000a4;
  *(float *)(param_1 + 0x15c) = (float)(dVar2 + dVar1);
  FUN_segment_0__804473a4
            ((double)g_Ram_float,(double)fRam00000060,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,1,1);
  return;
}

// === snd_EGG_Sound_805ae5e4 (0x805ae5e4) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ae5e4(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805ae76c (0x805ae76c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805ae76c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_805aec04 (0x805aec04) ===
int EGG_Sound_validate_805aec04(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805aec7c (0x805aec7c) ===
void snd_EGG_Sound_805aec7c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  snd_EGG_Sound_805aed2c();
  fVar4 = g_Ram_float;
  for (bVar7 = 0; bVar7 < *(byte *)(param_1 + 0xb8); bVar7 = bVar7 + 1) {
    iVar6 = *(int *)(param_1 + 0xb0);
    iVar5 = *(int *)(*(int *)(param_1 + 0xb4) + (uint)bVar7 * 4);
    fVar1 = *(float *)(iVar5 + 0x30) - *(float *)(iVar6 + 0x30);
    fVar2 = *(float *)(iVar5 + 0x34) - *(float *)(iVar6 + 0x34);
    fVar3 = *(float *)(iVar5 + 0x38) - *(float *)(iVar6 + 0x38);
    if (fVar4 < fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) {
      *(undefined4 *)(iVar5 + 0x130) = 2;
    }
  }
  return;
}

// === snd_EGG_Sound_805aed2c (0x805aed2c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805aed2c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805aef7c (0x805aef7c) ===
void snd_EGG_Sound_805aef7c(undefined4 param_1)

{
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
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
  
  local_38 = _uRam00000000;
  local_34 = _uRam00000004;
  local_30 = uRam00000008;
  local_2c = uRam0000000c;
  local_28 = uRam00000010;
  local_24 = uRam00000014;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_58 = uRam00000000._0_1_;
  local_57 = (undefined)uRam00000000;
  local_56 = uRam00000002;
  local_55 = uRam00000003;
  local_54 = uRam00000004._0_1_;
  local_53 = (undefined)uRam00000004;
  FUN_segment_0__80701444(param_1,&local_38,&local_50,6,&local_58);
  return;
}

// === snd_EGG_Sound_805af060 (0x805af060) ===
void snd_EGG_Sound_805af060(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x20) != (int *)0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    iVar3 = *(int *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x18);
    *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) | 1;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
  }
  return;
}

// === EGG_Sound_validate_805af0e0 (0x805af0e0) ===
void EGG_Sound_validate_805af0e0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(uVar1,0);
}

// === snd_EGG_Sound_805af214 (0x805af214) ===
void snd_EGG_Sound_805af214(int param_1)

{
  int iVar1;
  undefined local_48;
  undefined local_47;
  undefined local_46;
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
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 == 0) {
    local_30 = uRam00000018;
    local_34 = 0;
    FUN_segment_0__80701444(param_1,&local_30,&local_34,1,0);
  }
  else if (iVar1 == 1) {
    local_38 = uRam0000002c;
    local_3c = 0;
    FUN_segment_0__80701444(param_1,&local_38,&local_3c,1,0);
  }
  else if (iVar1 == 2) {
    local_40 = uRam0000003c;
    local_44 = 0;
    FUN_segment_0__80701444(param_1,&local_40,&local_44,1,0);
  }
  else if (iVar1 == 3) {
    local_20 = uRam0000006c;
    local_1c = uRam00000070;
    local_18 = uRam00000074;
    local_2c = uRam00000078;
    local_28 = uRam0000007c;
    local_24 = uRam00000080;
    local_48 = uRam00000084;
    local_47 = uRam00000085;
    local_46 = uRam00000086;
    FUN_segment_0__80701444(param_1,&local_20,&local_2c,3,&local_48);
  }
  return;
}

// === EGG_Sound_validate_805af35c (0x805af35c) ===
int EGG_Sound_validate_805af35c(int param_1,int param_2)

{
  if ((param_1 != 0) && (uRam00000000 = 0, 0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805af3a8 (0x805af3a8) ===
void snd_EGG_Sound_805af3a8(int param_1)

{
  int *piVar1;
  double dVar2;
  
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0);
  piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  dVar2 = (double)(**(code **)(*piVar1 + 8))();
  *(float *)(param_1 + 0xe4) = (float)dVar2;
  piVar1 = (int *)FUN_segment_0__80447060(*(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  (**(code **)(*piVar1 + 0x14))((double)g_Ram_float);
  if (*(int *)(param_1 + 0xe0) == 3) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),1,1);
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),2);
  }
  *(undefined *)(param_1 + 0xe9) = 0;
  FUN_segment_0__80700a44(param_1,0);
  return;
}

// === snd_EGG_Sound_805af49c (0x805af49c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_805af49c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_805af9d8 (0x805af9d8) ===
void snd_EGG_Sound_805af9d8(int param_1)

{
  if (*(int *)(param_1 + 0xe0) == 3) {
    FUN_segment_0__804473a4
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0,1);
    if (2 < *(int *)((int)g_Ram_float + 0x10) - 0x32U) {
      if (*(char *)(param_1 + 0xee) == 0) {
        FUN_segment_0__80700a88
                  ((double)(float)((double)CONCAT44(0x43300000,(uint)*(ushort *)(param_1 + 0xec)) -
                                  (double)CONCAT44(g_Ram_float,uRam00000004)),param_1,0x2f9);
      }
      if (*(ushort *)(param_1 + 0xec) < 3) {
        *(ushort *)(param_1 + 0xec) = *(ushort *)(param_1 + 0xec) + 1;
      }
      *(undefined2 *)(param_1 + 0xea) = 0x50;
    }
  }
  else {
    FUN_segment_0__804470ec
              ((double)g_Ram_float,(double)g_Ram_float,
               *(undefined4 *)(*(int *)(param_1 + 8) + 0x28),0);
  }
  return;
}

// === EGG_Sound_validate_805afad8 (0x805afad8) ===
void EGG_Sound_validate_805afad8(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  param_1[0x2d] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x5c);
}

// === EGG_Sound_validate_805afbcc (0x805afbcc) ===
int EGG_Sound_validate_805afbcc(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805afc0c (0x805afc0c) ===
void snd_EGG_Sound_805afc0c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  **(undefined4 **)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 8);
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + iVar3);
    (**(code **)(*piVar1 + 0xc))(piVar1,0);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x17);
  return;
}

// === EGG_Sound_validate_805afc8c (0x805afc8c) ===
void EGG_Sound_validate_805afc8c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0xb0) + iVar3) != 0) {
      FUN_segment_0__80701bcc(param_1);
      iVar4 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + iVar3);
      do {
        if (**(int **)(iVar2 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_segment_0__80443430(**(int **)(iVar2 + 0x14),0,param_1 + 0x58);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < 2);
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 0x17);
  return;
}

// === snd_EGG_Sound_805afd20 (0x805afd20) ===
void snd_EGG_Sound_805afd20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0xb0) + iVar3);
    if (piVar1 != (int *)0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x17);
  return;
}

// === snd_EGG_Sound_805afd98 (0x805afd98) ===
void snd_EGG_Sound_805afd98(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xb4) == 0) {
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xb0) + 0xc))
              ((int *)**(undefined4 **)(param_1 + 0xb0),1);
    piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + 0x58);
    (**(code **)(*piVar2 + 0xc))(piVar2,0);
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xb4) * 4);
    (**(code **)(*piVar2 + 0xc))(piVar2,1);
    piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + (*(int *)(param_1 + 0xb4) + -1) * 4);
    (**(code **)(*piVar2 + 0xc))(piVar2,0);
  }
  iVar1 = *(int *)(param_1 + 0xb4) + 1;
  *(int *)(param_1 + 0xb4) = iVar1;
  if (iVar1 == 0x17) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}

// === snd_EGG_Sound_805afe74 (0x805afe74) ===
undefined4 * snd_EGG_Sound_805afe74(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  return param_1;
}

// === EGG_Sound_validate_805afeb8 (0x805afeb8) ===
int EGG_Sound_validate_805afeb8(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_805afef8 (0x805afef8) ===
void snd_EGG_Sound_805afef8(int param_1)

{
  FUN_segment_0__804470ec
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0);
  FUN_segment_0__804473a4
            ((double)g_Ram_float,(double)g_Ram_float,*(undefined4 *)(*(int *)(param_1 + 8) + 0x28)
             ,0,1);
  return;
}

// === snd_EGG_Sound_805aff7c (0x805aff7c) ===
void snd_EGG_Sound_805aff7c(undefined4 param_1)

{
  undefined local_18 [4];
  undefined4 local_14;
  undefined4 local_10 [4];
  
  local_10[0] = uRam00000010;
  local_14 = uRam00000014;
  local_18[0] = uRam00000018;
  FUN_segment_0__80701444(param_1,local_10,&local_14,1,local_18);
  return;
}

// === snd_EGG_Sound_805afff0 (0x805afff0) ===
void snd_EGG_Sound_805afff0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_segment_0__80455350();
  FUN_segment_0__8070028c(param_1,uVar1);
  return;
}

// === snd_EGG_Sound_8072000c (0x8072000c) ===
void snd_EGG_Sound_8072000c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar3;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)(param_1 + 0xd98) = 0;
  *(undefined4 *)(param_1 + 0xd9c) = param_4;
  snd_EGG_Sound_8072015c(param_1,0);
  iVar1 = *(int *)(param_1 + 0xd9c);
  if (iVar1 == 0) {
    cVar3 = *(char *)(iRam00000000 + 0x2d4);
  }
  else if (iVar1 == 1) {
    cVar3 = '\x06';
  }
  else if (iVar1 == 2) {
    cVar3 = *(char *)(iRam00000000 + 0x2e8);
  }
  else {
    cVar3 = 0;
  }
  if (cVar3 != 0) {
    uVar5 = 0;
    do {
      if ((*(uint *)(param_1 + 0x6bc) & 1 << (uVar5 & 0x3f)) != 0) {
        FUN_segment_0__804a9f40(**(undefined4 **)(param_1 + 0x48),uVar5);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 5);
  }
  iVar1 = *(int *)(param_1 + 0xd9c);
  if (iVar1 == 0) {
    uVar5 = (uint)*(byte *)(iRam00000000 + 0x2d4);
  }
  else if (iVar1 == 1) {
    uVar5 = 6;
  }
  else if (iVar1 == 2) {
    uVar5 = (uint)*(byte *)(iRam00000000 + 0x2e8);
  }
  else {
    uVar5 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0xd98);
  uVar2 = uVar5 ^ uVar4 + 10;
  FUN_segment_0__804f946c
            (param_1 + 0x6c4,(-uVar4 & ~uVar4) >> 0x1f,((int)uVar2 >> 1) - (uVar2 & uVar5) >> 0x1f);
  return;
}

// === snd_EGG_Sound_8072015c (0x8072015c) ===
void snd_EGG_Sound_8072015c(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  do {
    piVar4 = (int *)FUN_segment_0__804ae1cc(param_1 + 0x24,uVar8 & 0xff);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))(); puVar5 != (void *)0;
            puVar5 = (undefined4 *)*puVar5) {
          if (puVar5 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__807201f4;
          }
        }
        bVar1 = false;
LAB_segment_0__807201f4:
        if (bVar1) goto LAB_segment_0__80720204;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80720204:
    iVar6 = *(int *)(param_1 + 0xd9c);
    if (iVar6 == 0) {
      uVar3 = (uint)*(byte *)(iRam00000000 + 0x2d4);
    }
    else if (iVar6 == 1) {
      uVar3 = 6;
    }
    else if (iVar6 == 2) {
      uVar3 = (uint)*(byte *)(iRam00000000 + 0x2e8);
    }
    else {
      uVar3 = 0;
    }
    uVar2 = uVar8 & 0xff;
    uVar7 = param_2 + uVar2;
    if ((int)uVar7 < (int)uVar3) {
      if (iVar6 == 0) {
        FUN_segment_0__804cde34(*(undefined4 *)(param_1 + 0x44),uVar2,uVar7 & 0xff);
      }
      else if (iVar6 == 1) {
        FUN_segment_0__804cdf04(*(undefined4 *)(param_1 + 0x44),uVar2,uVar7 & 0xff);
      }
      FUN_segment_0__8050105c(piVar4,0x14f,*(undefined4 *)(param_1 + 0x44),uVar8 & 0xff,0);
      FUN_segment_0__8050105c(piVar4,0x155,*(undefined4 *)(param_1 + 0x44),uVar8 & 0xff,0);
      FUN_segment_0__8050105c(piVar4,0x162,*(undefined4 *)(param_1 + 0x44),uVar8 & 0xff,0);
      FUN_segment_0__8050105c(piVar4,0x16f,*(undefined4 *)(param_1 + 0x44),uVar8 & 0xff,0);
      FUN_segment_0__8050105c(piVar4,0x17e,*(undefined4 *)(param_1 + 0x44),uVar8 & 0xff,0);
      *(undefined *)(piVar4 + 0x20) = 0;
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))(piVar4);
              puVar5 != (void *)0; puVar5 = (undefined4 *)*puVar5) {
            if (puVar5 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__80720350;
            }
          }
          bVar1 = false;
LAB_segment_0__80720350:
          if (bVar1) goto LAB_segment_0__80720360;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__80720360:
      FUN_segment_0__804a9fd0(piVar4,*(undefined4 *)(param_1 + 0x6bc));
    }
    else {
      *(undefined *)(piVar4 + 0x20) = 1;
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))(piVar4);
              puVar5 != (void *)0; puVar5 = (undefined4 *)*puVar5) {
            if (puVar5 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__807203c0;
            }
          }
          bVar1 = false;
LAB_segment_0__807203c0:
          if (bVar1) goto LAB_segment_0__807203d0;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__807203d0:
      FUN_segment_0__804a9fd0(piVar4,0);
    }
    uVar8 = uVar8 + 1;
    if (9 < uVar8) {
      return;
    }
  } while( true );
}

// === EGG_Sound_assertFail_8072044c (0x8072044c) ===
void EGG_Sound_assertFail_8072044c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_80720618 (0x80720618) ===
int EGG_Sound_validate_80720618(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0xda8 != 0) {
      FUN_segment_0__80500540(param_1 + 0xda8,0);
    }
    FUN_segment_0__804fa82c(param_1 + 0xbfc,0xffffffff);
    FUN_segment_0__804f9284(param_1 + 0x6c4,0xffffffff);
    FUN_segment_0__804ca1a0(param_1 + 0x430,0xffffffff);
    if (param_1 != 0) {
      if (param_1 + 0x54 != 0) {
        FUN_segment_0__804a98ac(param_1 + 0x54,0);
      }
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_807206d8 (0x807206d8) ===
void EGG_Sound_validate_807206d8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4));
}

// === EGG_Sound_validate_80720708 (0x80720708) ===
void EGG_Sound_validate_80720708(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === snd_EGG_Sound_8072075c (0x8072075c) ===
int * snd_EGG_Sound_8072075c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__807207dc;
        }
      }
      bVar1 = false;
LAB_segment_0__807207dc:
      if (bVar1) goto LAB_segment_0__807207ec;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__807207ec:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80720840;
      }
    }
    bVar1 = false;
LAB_segment_0__80720840:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Sound_validate_8072086c (0x8072086c) ===
void EGG_Sound_validate_8072086c(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0x798) = 2;
  uVar1 = FUN_segment_0__8072fa50();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uVar1 & 0xff) * 0x184 + 0x10);
}

// === EGG_Sound_validate_80720b10 (0x80720b10) ===
int EGG_Sound_validate_80720b10(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_58 [60];
  
  uVar1 = FUN_segment_0__8072fa50();
  uVar1 = uVar1 & 0xff;
  if (param_2 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 0x654);
    *(int *)(param_1 + 0x654) = iVar2 + 1;
    FUN_segment_0__804d1c2c(param_1,iVar2,param_1 + param_2 * 0x174 + 0x7c0,0);
    iVar2 = param_2 + 2;
    if (uVar1 < 3) {
      iVar2 = param_2;
    }
    if (iVar2 < 2) {
      iVar2 = param_2 + 2;
      if (uVar1 < 3) {
        iVar2 = param_2;
      }
    }
    else {
      iVar2 = param_2 + 2;
      if (uVar1 < 3) {
        iVar2 = param_2;
      }
      iVar2 = iVar2 + -2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_58,4,0,iVar2 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x654);
  iVar3 = (param_2 - uVar1) * 0x184;
  *(int *)(param_1 + 0x654) = iVar2 + 1;
  FUN_segment_0__804d1c2c(param_1,iVar2,*(int *)(param_1 + 0x3f74) + iVar3,0);
  FUN_segment_0__8052ac0c(*(int *)(param_1 + 0x3f74) + iVar3,0xe5,param_2 - uVar1);
  return *(int *)(param_1 + 0x3f74) + iVar3;
}

// === snd_EGG_Sound_80720dec (0x80720dec) ===
void snd_EGG_Sound_80720dec(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  FUN_segment_0__80713318();
  uVar1 = FUN_segment_0__8072fa50();
  uVar1 = uVar1 & 0xff;
  iVar7 = param_1 + 0xd90;
  iVar8 = 0;
  iVar9 = param_1;
  for (uVar6 = 0; (int)uVar6 < (int)uVar1; uVar6 = uVar6 + 1) {
    iVar2 = snd_EGG_Sound_807215c0(param_1,uVar6);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar2) {
      iVar3 = param_1 + iVar8;
      iVar10 = iVar2;
      if (0 < iVar2) {
        do {
          if (*(int *)(iVar3 + 0x6d8) == *(int *)(*(int *)(iRam00000000 + 0x98) + iVar8 + 0x13c)) {
            iVar5 = iVar4;
          }
          iVar3 = iVar3 + 0x10;
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    FUN_segment_0__80501de0(iVar7,1 << (uVar6 & 0x3f));
    FUN_segment_0__80501cc0(iVar7,uVar6);
    FUN_segment_0__80501d40(iVar7,iVar2,iVar5);
    *(uint *)(iVar9 + 0xf9c) = uVar6;
    iVar8 = iVar8 + 4;
    iVar7 = iVar7 + 0x5c8;
    *(undefined *)(iVar9 + 0xfa1) = 1;
    iVar9 = iVar9 + 0x5c8;
  }
  iVar7 = param_1 + uVar1 * 0x174;
  iVar9 = param_1 + uVar1 * 0x5c8 + 0xd90;
  for (; (int)uVar1 < 4; uVar1 = uVar1 + 1) {
    *(undefined *)(iVar7 + 0x840) = 1;
    FUN_segment_0__80501de0(iVar9,0);
    iVar7 = iVar7 + 0x174;
    iVar9 = iVar9 + 0x5c8;
  }
  if ((iRam00000000 != 0) && (*(int *)(iRam00000000 + 0x18) != 0)) {
    FUN_segment_0__80743d10();
  }
  FUN_segment_0__804a9fd0(param_1 + 0x54,1);
  return;
}

// === EGG_Sound_assertFail_80720f48 (0x80720f48) ===
void EGG_Sound_assertFail_80720f48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80721034 (0x80721034) ===
void snd_EGG_Sound_80721034(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  if ((*(int *)(param_2 + 0x240) == -100) && (param_3 == 0)) {
    uVar2 = FUN_segment_0__8072fa50();
    for (uVar4 = 0; (int)uVar4 < (int)(uVar2 & 0xff); uVar4 = uVar4 + 1) {
      piVar5 = *(int **)(*g_Ram_ptr + 0x204);
      if (piVar5 != (int *)0) {
        if (piVar5 != (int *)0) {
          for (puVar3 = (undefined4 *)(**(code **)(*piVar5 + 0x60))(piVar5);
              puVar3 != (void *)0; puVar3 = (undefined4 *)*puVar3) {
            if (puVar3 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__807210d4;
            }
          }
          bVar1 = false;
LAB_segment_0__807210d4:
          if (bVar1) goto LAB_segment_0__807210e4;
        }
        piVar5 = (int *)0;
      }
      else {
        piVar5 = (int *)0;
      }
LAB_segment_0__807210e4:
      if (*(char *)(piVar5 + (uVar4 & 0xff) * 3 + 0x17) != 0) {
        FUN_segment_0__80713cf4(param_1,param_2);
      }
    }
  }
  return;
}

// === EGG_Sound_assertFail_80721130 (0x80721130) ===
void EGG_Sound_assertFail_80721130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_807212c8 (0x807212c8) ===
void snd_EGG_Sound_807212c8(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_1[*(int *)(param_2 + 0x204) * 4 + param_3 + 0x1b6];
  *(int *)(g_Ram_uint[0x26] + param_3 * 4 + 0x13c) = iVar3;
  uVar1 = (**(code **)(*param_1 + 0x70))();
  FUN_segment_0__804cb6cc(uVar1,param_3,0);
  *(undefined *)(param_2 + 0x211) = 0;
  iVar2 = FUN_segment_0__8072f8d8(*(undefined4 *)*g_Ram_uint);
  if (iVar2 == 0) {
    g_Ram_uint[(param_3 & 0xff) * 0x3c + 0x308] = iVar3;
  }
  else {
    *(int *)(g_Ram_uint[0x26] + param_3 * 0xc + 0x224) = iVar3;
  }
  FUN_segment_0__80757ff8(g_Ram_uint,param_3);
  iVar2 = FUN_segment_0__80714a98(param_1);
  if (iVar2 != 0) {
    uVar4 = (**(code **)(param_1[0x92c] + 0x88))(param_1 + 0x92c);
    iVar2 = FUN_segment_0__8072f8d8(*(undefined4 *)*g_Ram_uint);
    if (iVar2 == 0) {
      if (g_Ram_uint[0x5d8] == 3) {
        FUN_segment_0__8074614c();
      }
      else {
        FUN_segment_0__8071e624();
      }
      FUN_segment_0__807137c4(uVar4,param_1,0x82);
    }
    else {
      FUN_segment_0__807137c4(uVar4,param_1,0x82);
    }
  }
  if ((g_Ram_uint != (void *)0) && (g_Ram_uint[5] != 0)) {
    iVar2 = *(int *)(g_Ram_uint[5] + (param_3 & 0xff) * 0xc + 0x18);
    if (iVar2 != 0) {
      FUN_segment_0__807408f0(iVar2,param_3 & 0xff,3);
    }
  }
  return;
}

// === snd_EGG_Sound_80721470 (0x80721470) ===
void snd_EGG_Sound_80721470(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1 + 0x24b0;
  uVar4 = 0;
  iVar6 = -1;
  uVar5 = 0xffffffff;
  iVar7 = 4;
  do {
    if (iVar3 == *(int *)(*(int *)(param_2 + 100) + 8)) {
      iVar6 = *(int *)(param_1 + param_3 * 0x10 + uVar4 * 4 + 0x6d8);
      uVar5 = uVar4;
      break;
    }
    iVar3 = iVar3 + 0x474;
    uVar4 = uVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar3 = FUN_segment_0__806fde64(iVar6);
  iVar7 = FUN_segment_0__806fe030(*(undefined4 *)(param_1 + uVar5 * 4 + 0x6c8));
  if (iVar7 == iVar3) {
    uVar1 = FUN_segment_0__8070f680(iVar6);
    FUN_segment_0__80500a34(param_2,uVar1,0);
    FUN_segment_0__8052ad80(*(int *)(param_1 + 0x3f74) + uVar5 * 0x184,iVar6);
    if ((iRam00000000 != 0) && (*(int *)(iRam00000000 + 0x14) != 0)) {
      iVar3 = *(int *)(iRam00000000 + 0x14) + (uVar5 & 0xff) * 0xc;
      iVar7 = *(int *)(iVar3 + 0x18);
      if (iVar7 != 0) {
        if (iVar6 != -1) {
          *(int *)(iVar7 + 0x14) = iVar6;
        }
        FUN_segment_0__807408f0(*(undefined4 *)(iVar3 + 0x18),uVar5 & 0xff,2);
      }
    }
    cVar2 = FUN_segment_0__8072fa50();
    if (cVar2 == '\x02') {
      FUN_segment_0__80733de8
                (param_1 + uVar5 * 0x184 + 0x3f78,
                 *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + uVar5 * 4 + 300),iVar6);
    }
  }
  return;
}

// === snd_EGG_Sound_807215c0 (0x807215c0) ===
int snd_EGG_Sound_807215c0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_2 * 4;
  *(undefined4 *)(param_1 + iVar5 + 0x6c8) =
       *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar5 + 300);
  iVar3 = FUN_segment_0__806fe030();
  iVar8 = 0;
  iVar7 = 0;
  uVar6 = 0;
  do {
    iVar4 = FUN_segment_0__806fde64(uVar6);
    if (((iVar3 == iVar4) &&
        (iVar4 = FUN_segment_0__806fe2a8(uVar6,*(undefined4 *)(param_1 + 0x798)), iVar4 != 0)) &&
       ((iVar4 = FUN_segment_0__8072fee0(), iVar4 == 0 || ((uVar6 - 0x12 < 3 || (uVar6 < 3)))))) {
      iVar4 = param_1 + iVar7;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x10;
      *(uint *)(iVar4 + iVar5 + 0x6d8) = uVar6;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x24);
  if (iVar8 < 0xc) {
    iVar5 = iVar8;
    if (8 < (int)(0xcU - iVar8)) {
      bVar2 = false;
      bVar1 = false;
      if ((iVar8 < 0xd) && (iVar8 != -0x80000000)) {
        bVar1 = true;
      }
      if (bVar1) {
        bVar1 = true;
        if (((-iVar8 & 0x80000000U) == 0) && ((0xcU - iVar8 & 0x80000000) != 0)) {
          bVar1 = false;
        }
        if (bVar1) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        uVar6 = 0xbU - iVar8 >> 3;
        iVar3 = iVar8 * 0x10 + param_1 + param_2 * 4;
        if (iVar8 < 4) {
          do {
            *(undefined4 *)(iVar3 + 0x6d8) = 0xffffffff;
            iVar5 = iVar5 + 8;
            *(undefined4 *)(iVar3 + 0x6e8) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x6f8) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x708) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x718) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x728) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x738) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x748) = 0xffffffff;
            iVar3 = iVar3 + 0x80;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
    }
    iVar7 = iVar5 * 0x10 + param_1 + param_2 * 4;
    iVar3 = 0xc - iVar5;
    if (iVar5 < 0xc) {
      do {
        *(undefined4 *)(iVar7 + 0x6d8) = 0xffffffff;
        iVar7 = iVar7 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return iVar8;
}

// === snd_EGG_Sound_8072178c (0x8072178c) ===
int snd_EGG_Sound_8072178c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = FUN_segment_0__806fde64(uVar2);
    if (((param_2 == iVar1) && (iVar1 = FUN_segment_0__806fe2a8(uVar2,param_3), iVar1 != 0)) &&
       ((iVar1 = FUN_segment_0__8072fee0(), iVar1 == 0 || ((uVar2 - 0x12 < 3 || (uVar2 < 3)))))) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x24);
  return iVar3;
}

// === snd_EGG_Sound_80721830 (0x80721830) ===
void snd_EGG_Sound_80721830(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_segment_0__8072fa50();
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)(uVar1 & 0xff); iVar3 = iVar3 + 1) {
    if (param_1[4] == 0) {
      FUN_segment_0__8052ad54(param_1[0xfdd] + iVar4,param_1[0xfb]);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_segment_0__8052ad54(param_1[0xfdd] + iVar4,uVar2);
    }
    iVar4 = iVar4 + 0x184;
  }
  return;
}

// === snd_EGG_Sound_807218d8 (0x807218d8) ===
void snd_EGG_Sound_807218d8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_segment_0__8072fa50();
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)(uVar1 & 0xff); iVar3 = iVar3 + 1) {
    if (param_1[4] == 0) {
      uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_segment_0__8052ad54(param_1[0xfdd] + iVar4,uVar2);
    }
    else {
      FUN_segment_0__8052ad54(param_1[0xfdd] + iVar4,param_1[0xfb]);
    }
    iVar4 = iVar4 + 0x184;
  }
  return;
}

// === snd_EGG_Sound_80721990 (0x80721990) ===
void snd_EGG_Sound_80721990(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_807219ec (0x807219ec) ===
undefined4 EGG_Sound_validate_807219ec(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x3f78,0,0x184,2);
  }
  return 0;
}

// === EGG_Sound_validate_80721ad8 (0x80721ad8) ===
void EGG_Sound_validate_80721ad8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4));
}

// === EGG_Sound_validate_80721b08 (0x80721b08) ===
void EGG_Sound_validate_80721b08(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80721b38 (0x80721b38) ===
void EGG_Sound_validate_80721b38(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === snd_EGG_Sound_80721b7c (0x80721b7c) ===
int * snd_EGG_Sound_80721b7c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80721bfc;
        }
      }
      bVar1 = false;
LAB_segment_0__80721bfc:
      if (bVar1) goto LAB_segment_0__80721c0c;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80721c0c:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80721c60;
      }
    }
    bVar1 = false;
LAB_segment_0__80721c60:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === snd_EGG_Sound_80721c8c (0x80721c8c) ===
void snd_EGG_Sound_80721c8c(int param_1)

{
  uint uVar1;
  
  *(undefined *)(param_1 + 0x3dc) = 1;
  *(undefined4 *)(param_1 + 0x6bc) = 1;
  *(undefined4 *)(param_1 + 0x6c0) = 1;
  uVar1 = FUN_segment_0__8072fa50();
  *(uint *)(param_1 + 0x3e4) = (uVar1 & 0xff) + 0x7ec;
  FUN_segment_0__804e5e54(*g_Ram_uint);
  FUN_segment_0__80712d44(param_1);
  return;
}

// === EGG_Sound_assertFail_80721cec (0x80721cec) ===
void EGG_Sound_assertFail_80721cec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80721e3c (0x80721e3c) ===
void snd_EGG_Sound_80721e3c(undefined4 param_1)

{
  int local_18 [4];
  
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x74) = 2;
  FUN_segment_0__80713318();
  local_18[0] = iRam00000000;
  FUN_segment_0__80714a2c(param_1,local_18,1);
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
  *(undefined4 *)(iRam00000000 + 0xce4) = 2;
  *(undefined4 *)(iRam00000000 + 0xdd4) = 2;
  *(undefined4 *)(iRam00000000 + 0xec4) = 2;
  *(undefined4 *)(iRam00000000 + 0xfb4) = 2;
  *(undefined4 *)(iRam00000000 + 0x10a4) = 2;
  *(undefined4 *)(iRam00000000 + 0x1194) = 2;
  *(undefined4 *)(iRam00000000 + 0x1284) = 2;
  *(undefined4 *)(iRam00000000 + 0x1374) = 2;
  *(undefined4 *)(iRam00000000 + 0x1464) = 2;
  *(undefined4 *)(iRam00000000 + 0x1554) = 2;
  *(undefined4 *)(iRam00000000 + 0x1644) = 2;
  *(undefined4 *)(iRam00000000 + 0x1734) = 2;
  return;
}

// === snd_EGG_Sound_80721f68 (0x80721f68) ===
void snd_EGG_Sound_80721f68(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_2 + 0x240);
  if (iVar2 == -100) {
    FUN_segment_0__80713adc(param_1,0x61,param_2);
    iVar2 = iRam00000000;
    uVar3 = FUN_segment_0__804f4e54(0x41);
    FUN_segment_0__805e7eb0(iVar2,uVar3,0);
  }
  else if (iVar2 == 0) {
    uVar5 = 0;
    do {
      uVar4 = FUN_segment_0__8072fa50();
      uVar1 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      *(uint *)(iRam00000000 + uVar1 * 0xf0 + 0xc28) =
           (uVar1 | ~(uVar4 & 0xff)) - (uVar1 - (uVar4 & 0xff) >> 1) >> 0x1f;
    } while (uVar5 < 0xc);
    *(undefined4 *)(iRam00000000 + 0x1760) = 1;
    *(undefined4 *)(iRam00000000 + 0x175c) = 2;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
    *(undefined4 *)(iRam00000000 + 0x1764) = 5;
    FUN_segment_0__807138c8(param_1,0x72,param_2);
  }
  else if (iVar2 == 1) {
    uVar5 = 0;
    do {
      uVar4 = FUN_segment_0__8072fa50();
      uVar1 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      *(uint *)(iRam00000000 + uVar1 * 0xf0 + 0xc28) =
           (uVar1 | ~(uVar4 & 0xff)) - (uVar1 - (uVar4 & 0xff) >> 1) >> 0x1f;
    } while (uVar5 < 0xc);
    *(undefined4 *)(iRam00000000 + 0x1760) = 3;
    *(undefined4 *)(iRam00000000 + 0x175c) = 0;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
    *(undefined4 *)(iRam00000000 + 0x1764) = 5;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
    FUN_segment_0__807138c8(param_1,0x75,param_2);
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(iRam00000000 + 0x1760) = 4;
    *(undefined4 *)(iRam00000000 + 0x175c) = 1;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
    *(undefined4 *)(iRam00000000 + 0x1764) = 5;
    *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
    FUN_segment_0__807138c8(param_1,0x61,param_2);
  }
  return;
}

// === snd_EGG_Sound_80722188 (0x80722188) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_80722188(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8072260c (0x8072260c) ===
void snd_EGG_Sound_8072260c(undefined4 param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  FUN_segment_0__807139d8((double)g_Ram_float,param_1,0x61);
  fVar1 = g_Ram_float;
  uVar2 = FUN_segment_0__804f4e54(0x41);
  FUN_segment_0__805e7eb0(fVar1,uVar2,0);
  return;
}

// === snd_EGG_Sound_80722674 (0x80722674) ===
void snd_EGG_Sound_80722674(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_807226d8 (0x807226d8) ===
int EGG_Sound_validate_807226d8(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0x430,0xffffffff);
    if (param_1 != 0) {
      if (param_1 + 0x54 != 0) {
        FUN_segment_0__804a98ac(param_1 + 0x54,0);
      }
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80722778 (0x80722778) ===
int * snd_EGG_Sound_80722778(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__807227f8;
        }
      }
      bVar1 = false;
LAB_segment_0__807227f8:
      if (bVar1) goto LAB_segment_0__80722808;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80722808:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__8072285c;
      }
    }
    bVar1 = false;
LAB_segment_0__8072285c:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === snd_EGG_Sound_80722888 (0x80722888) ===
void snd_EGG_Sound_80722888(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x1b1] = 0;
  param_1[0x1af] = 1;
  param_1[0x1b0] = 1;
  *(undefined *)((int)param_1 + 0x3dd) = 1;
  param_1[0x1b2] = -1;
  iVar1 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_uint);
  if (iVar1 != 4) {
    FUN_segment_0__804e5e54(*g_Ram_uint);
  }
  iVar1 = FUN_segment_0__8072f8d8(*(undefined4 *)*g_Ram_uint);
  if (iVar1 != 0) {
    param_1[0x13] = param_1[0x13] + -1;
  }
  if (*(int *)*g_Ram_uint == 0x4a) {
    param_1[0xfb] = 0x6c;
  }
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_segment_0__804ca380(uVar2,2);
  FUN_segment_0__80712d44(param_1);
  return;
}

// === EGG_Sound_assertFail_80722974 (0x80722974) ===
void EGG_Sound_assertFail_80722974(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80722bc8 (0x80722bc8) ===
void snd_EGG_Sound_80722bc8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *local_18 [2];
  
  FUN_segment_0__80713318();
  iVar1 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_uint);
  if (iVar1 != 4) {
    local_18[0] = g_Ram_uint;
    FUN_segment_0__80714a2c(param_1,local_18,1);
  }
  if (*(short *)((int)g_Ram_uint + 0x36) < 0) {
    puVar3 = (void *)0;
  }
  else {
    puVar3 = g_Ram_uint + ((int)*(short *)((int)g_Ram_uint + 0x36) & 0xffU) * 0x24fc + 0xe;
  }
  uVar2 = 0;
  do {
    if ((param_1[0x1af] & 1 << (uVar2 & 0x3f)) != 0) {
      if (puVar3[0x2449] == 1) {
        (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)param_1[0x12]);
      }
      else {
        (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)(param_1[0x12] + 4));
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return;
}

// === snd_EGG_Sound_80722ce8 (0x80722ce8) ===
void snd_EGG_Sound_80722ce8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[2] == 4) && ((float *)param_1[0x1b1] != (float *)0x0)) {
    if (*(float *)param_1[0x1b1] <= g_Ram_float) {
      iVar1 = FUN_segment_0__804aa340(*(undefined4 *)param_1[0x12]);
      if (iVar1 == 0) {
        iVar1 = FUN_segment_0__804aa340(*(undefined4 *)(param_1[0x12] + 4));
        if (iVar1 == 0) {
          if (*(short *)((int)g_Ram_float + 0x36) < 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (int)g_Ram_float + ((int)*(short *)((int)g_Ram_float + 0x36) & 0xffU) * 0x93f0
                    + 0x38;
          }
          uVar2 = *(undefined4 *)
                   (param_1[0x12] + ((uint)LZCOUNT(*(int *)(iVar1 + 0x9124) + -2) >> 3 & 0x1ffffffc)
                   );
        }
        else {
          uVar2 = *(undefined4 *)(param_1[0x12] + 4);
        }
      }
      else {
        uVar2 = *(undefined4 *)param_1[0x12];
      }
      (**(code **)(*param_1 + 100))(param_1,uVar2,0);
      FUN_segment_0__804a9f54(uVar2);
      snd_EGG_Sound_80722e14(param_1,uVar2,0);
    }
  }
  return;
}

// === snd_EGG_Sound_80722e14 (0x80722e14) ===
void snd_EGG_Sound_80722e14(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_segment_0__804df484(g_Ram_ptr + 0xd,0,*(int *)(param_2 + 0x240) == 1);
  uVar2 = *(uint *)(param_2 + 0x240);
  if (uVar2 < 2) {
    if (*(short *)((int)g_Ram_ptr + 0x36) < 0) {
      piVar3 = (int *)0;
    }
    else {
      piVar3 = g_Ram_ptr + ((int)*(short *)((int)g_Ram_ptr + 0x36) & 0xffU) * 0x24fc + 0xe;
    }
    iVar1 = 1;
    if (uVar2 == 1) {
      iVar1 = 2;
    }
    piVar3[0x2449] = iVar1;
    FUN_segment_0__804e45fc(g_Ram_ptr[0x24]);
    iVar1 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_ptr);
    if (iVar1 == 4) {
      if (*(int *)(param_1 + 0x6c8) == -1) {
        *(undefined4 *)(param_1 + 1000) = 0xffffffff;
        FUN_segment_0__804aa384(param_2);
        FUN_segment_0__804d1c48(param_1,0);
      }
      else {
        FUN_segment_0__80713fe8(param_1,*(int *)(param_1 + 0x6c8),param_2);
      }
    }
    else {
      iVar1 = *(int *)*g_Ram_ptr;
      if ((iVar1 < 0x4e) || (0x50 < iVar1)) {
        if ((iVar1 < 0x85) || (0x86 < iVar1)) {
          if (((g_Ram_ptr[0x5d8] == 1) || (g_Ram_ptr[0x5d8] == 3)) &&
             (iVar1 = FUN_segment_0__8072fe7c(), piVar3[iVar1 + 0x2456] == 1)) {
            if (g_Ram_ptr[0x5d8] == 3) {
              FUN_segment_0__804c1b1c(g_Ram_ptr[0x26]);
              g_Ram_ptr[0x5d6] = *(int *)(g_Ram_ptr[0x26] + 0xfc);
              FUN_segment_0__80713fe8(param_1,0x1b,param_2);
              return;
            }
            if (g_Ram_ptr[0x5d8] == 1) {
              FUN_segment_0__804c15b0(g_Ram_ptr[0x26]);
              g_Ram_ptr[0x5d6] = *(int *)(g_Ram_ptr[0x26] + 0x78);
              FUN_segment_0__80713fe8(param_1,0x1a,param_2);
              return;
            }
          }
          if (g_Ram_ptr[0x5d8] == 4) {
            iVar1 = 0;
            if (*(int *)(*g_Ram_ptr + 0x1f8) != 0) {
              iVar1 = FUN_segment_0__807474e4(0x7c);
              iVar1 = *(int *)(iVar1 + 0x83c);
            }
            if (iVar1 == 7) {
              g_Ram_ptr[0x5d9] = 5;
              FUN_segment_0__80713fe8(param_1,0x1c,param_2);
            }
            else {
              FUN_segment_0__80713e04((double)(float)g_Ram_ptr,param_1,0x2c);
            }
          }
          else if (g_Ram_ptr[0x5d8] == 3) {
            FUN_segment_0__807138c8(param_1,0x78,param_2);
          }
          else {
            FUN_segment_0__807138c8(param_1,0x6e,param_2);
          }
        }
        else {
          FUN_segment_0__80713fe8(param_1,0x2d,param_2);
        }
      }
      else {
        FUN_segment_0__80713fe8(param_1,0x1f,param_2);
      }
    }
  }
  else if (uVar2 == 0xffffff9c) {
    FUN_segment_0__80713cf4(param_1,param_2);
  }
  else if (uVar2 == 2) {
    FUN_segment_0__80714848(param_1,0xced,0);
    FUN_segment_0__804aa82c(param_2,0);
  }
  return;
}

// === snd_EGG_Sound_80723190 (0x80723190) ===
void snd_EGG_Sound_80723190(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__804f4774(*(undefined4 *)*g_Ram_uint);
  if (iVar1 != 4) {
    FUN_segment_0__80714a48(param_1);
  }
  return;
}

// === snd_EGG_Sound_807231ec (0x807231ec) ===
void snd_EGG_Sound_807231ec(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_80723248 (0x80723248) ===
int EGG_Sound_validate_80723248(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0x430,0xffffffff);
    if (param_1 != 0) {
      if (param_1 + 0x54 != 0) {
        FUN_segment_0__804a98ac(param_1 + 0x54,0);
      }
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_807232e8 (0x807232e8) ===
int * snd_EGG_Sound_807232e8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80723368;
        }
      }
      bVar1 = false;
LAB_segment_0__80723368:
      if (bVar1) goto LAB_segment_0__80723378;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80723378:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__807233cc;
      }
    }
    bVar1 = false;
LAB_segment_0__807233cc:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Sound_validate_807233f8 (0x807233f8) ===
undefined4 EGG_Sound_validate_807233f8(undefined4 param_1,int param_2)

{
  FUN_segment_0__804d24e0(param_1,0,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x174);
  }
  if (param_2 != 1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x174);
}

// === EGG_Sound_validate_807237f8 (0x807237f8) ===
int EGG_Sound_validate_807237f8(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x434,0xffffffff);
    if (param_1 != 0) {
      if (param_1 + 0x54 != 0) {
        FUN_segment_0__804a98ac(param_1 + 0x54,0);
      }
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80723898 (0x80723898) ===
int * snd_EGG_Sound_80723898(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80723918;
        }
      }
      bVar1 = false;
LAB_segment_0__80723918:
      if (bVar1) goto LAB_segment_0__80723928;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80723928:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__8072397c;
      }
    }
    bVar1 = false;
LAB_segment_0__8072397c:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === snd_EGG_Sound_807239a8 (0x807239a8) ===
void snd_EGG_Sound_807239a8(int *param_1)

{
  undefined4 uVar1;
  
  *(undefined *)(param_1 + 0xf7) = 1;
  FUN_segment_0__80712d44();
  FUN_segment_0__804e5e54(*g_Ram_uint);
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  FUN_segment_0__804ca380(uVar1,1);
  if ((*(int *)*g_Ram_uint == 0x49) || (*(int *)*g_Ram_uint == 0x4a)) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined4 *)(param_1[0x12] + 4));
  }
  return;
}

// === EGG_Sound_assertFail_80723a50 (0x80723a50) ===
void EGG_Sound_assertFail_80723a50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_80723b9c (0x80723b9c) ===
void snd_EGG_Sound_80723b9c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18 [2];
  
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x74) = 2;
  FUN_segment_0__80713318();
  local_18[0] = iRam00000000;
  FUN_segment_0__80714a2c(param_1,local_18,1);
  iVar2 = 0;
  iVar3 = 0;
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
  *(undefined4 *)(iRam00000000 + 0xce4) = 2;
  *(undefined4 *)(iRam00000000 + 0xdd4) = 2;
  *(undefined4 *)(iRam00000000 + 0xec4) = 2;
  *(undefined4 *)(iRam00000000 + 0xfb4) = 2;
  *(undefined4 *)(iRam00000000 + 0x10a4) = 2;
  *(undefined4 *)(iRam00000000 + 0x1194) = 2;
  *(undefined4 *)(iRam00000000 + 0x1284) = 2;
  *(undefined4 *)(iRam00000000 + 0x1374) = 2;
  *(undefined4 *)(iRam00000000 + 0x1464) = 2;
  *(undefined4 *)(iRam00000000 + 0x1554) = 2;
  *(undefined4 *)(iRam00000000 + 0x1644) = 2;
  *(undefined4 *)(iRam00000000 + 0x1734) = 2;
  do {
    iVar1 = FUN_segment_0__804aa340(*(undefined4 *)(param_1[0x12] + iVar3));
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 100))(param_1,*(undefined4 *)(param_1[0x12] + iVar3),0);
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 4);
  return;
}

// === snd_EGG_Sound_80723d24 (0x80723d24) ===
void snd_EGG_Sound_80723d24(int *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  int *piVar10;
  uint uVar11;
  byte local_88 [4];
  undefined local_84;
  undefined4 local_80 [4];
  undefined4 local_70;
  int local_6c [4];
  undefined4 local_5c;
  int local_58 [4];
  undefined4 local_48;
  
  *(undefined4 *)(g_Ram_ptr[0x26] + 0x74) = 2;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffd;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffe;
  g_Ram_ptr[0x5e0] = g_Ram_ptr[0x5e0] & 0xfffffffd;
  g_Ram_ptr[0x5dc] = 0;
  local_58[0] = iRam00000088;
  iVar7 = *(int *)(param_2 + 0x240);
  local_58[1] = uRam0000008c;
  local_58[2] = uRam00000090;
  local_58[3] = uRam00000094;
  local_48 = uRam00000098;
  local_6c[0] = iRam0000009c;
  local_6c[1] = uRam000000a0;
  local_6c[2] = uRam000000a4;
  local_6c[3] = uRam000000a8;
  local_5c = uRam000000ac;
  local_88[0] = bRam000000b0;
  local_88[1] = uRam000000b1;
  local_88[2] = uRam000000b2;
  local_88[3] = uRam000000b3;
  local_84 = uRam000000b4;
  local_80[0] = uRam000000b8;
  local_80[1] = uRam000000bc;
  local_80[2] = uRam000000c0;
  local_80[3] = uRam000000c4;
  local_70 = uRam000000c8;
  if ((*(char *)(g_Ram_ptr[0x24] + 0x14) == 0) || (iVar7 != 1)) {
    if (iVar7 != -100) {
      if ((iVar7 == 1) || (iVar7 == 3)) {
        iVar4 = 0;
        if (iVar7 == 1) {
          iVar4 = 2;
        }
        g_Ram_ptr[0x5d7] = iVar4;
      }
      bVar1 = local_88[iVar7];
      for (bVar9 = 0; bVar9 < bVar1; bVar9 = bVar9 + 1) {
        g_Ram_ptr[(uint)bVar9 * 0x3c + 0x30a] = -(uint)bVar9 >> 0x1f;
      }
      uVar6 = (uint)local_88[iVar7];
      if (uVar6 < 0xc) {
        if (((8 < (0xc - uVar6 & 0xff)) && (uVar6 < 0xd)) && (uVar11 = 0xb - uVar6 >> 3, uVar6 < 4))
        {
          do {
            uVar3 = uVar6 & 0xff;
            uVar6 = uVar6 + 8;
            g_Ram_ptr[uVar3 * 0x3c + 0x30a] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x346] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x382] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x3be] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x3fa] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x436] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x472] = 5;
            g_Ram_ptr[uVar3 * 0x3c + 0x4ae] = 5;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar4 = 0xc - (uVar6 & 0xff);
        if ((uVar6 & 0xff) < 0xc) {
          do {
            uVar11 = uVar6 & 0xff;
            uVar6 = uVar6 + 1;
            g_Ram_ptr[uVar11 * 0x3c + 0x30a] = 5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      g_Ram_ptr[0x5d8] = local_58[iVar7];
      uVar8 = local_80[iVar7];
      g_Ram_ptr[0x5d9] = local_6c[iVar7];
      FUN_segment_0__807138c8(param_1,uVar8,param_2);
      return;
    }
    FUN_segment_0__807140c8(param_1,0x41,param_2);
    piVar10 = g_Ram_ptr;
    uVar8 = FUN_segment_0__804f4e54(0x41);
    FUN_segment_0__805e7eb0(piVar10,uVar8,0);
    return;
  }
  piVar10 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar10 != (int *)0) {
    if (piVar10 != (int *)0) {
      for (puVar5 = (undefined4 *)(**(code **)(*piVar10 + 0x60))(piVar10);
          puVar5 != (void *)0; puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 == (void *)0) {
          bVar2 = true;
          goto LAB_segment_0__80723ec4;
        }
      }
      bVar2 = false;
LAB_segment_0__80723ec4:
      if (bVar2) goto LAB_segment_0__80723ed4;
    }
    piVar10 = (int *)0;
  }
  else {
    piVar10 = (int *)0;
  }
LAB_segment_0__80723ed4:
  (**(code **)(*piVar10 + 100))(piVar10);
  (**(code **)(*piVar10 + 0x68))(piVar10,0x816,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
  FUN_segment_0__804aa82c(param_2,0);
  return;
}

// === snd_EGG_Sound_80724114 (0x80724114) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_80724114(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_807245c4 (0x807245c4) ===
void snd_EGG_Sound_807245c4(undefined4 param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  FUN_segment_0__807140ac((double)g_Ram_float,param_1,0x41);
  fVar1 = g_Ram_float;
  uVar2 = FUN_segment_0__804f4e54(0x41);
  FUN_segment_0__805e7eb0(fVar1,uVar2,0);
  return;
}

// === snd_EGG_Sound_8072462c (0x8072462c) ===
void snd_EGG_Sound_8072462c(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_80724688 (0x80724688) ===
int EGG_Sound_validate_80724688(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804ca1a0(param_1 + 0x430,0xffffffff);
    if (param_1 != 0) {
      if (param_1 + 0x54 != 0) {
        FUN_segment_0__804a98ac(param_1 + 0x54,0);
      }
      FUN_segment_0__804d11c4(param_1,0);
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === snd_EGG_Sound_80724728 (0x80724728) ===
int * snd_EGG_Sound_80724728(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__807247a8;
        }
      }
      bVar1 = false;
LAB_segment_0__807247a8:
      if (bVar1) goto LAB_segment_0__807247b8;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__807247b8:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__8072480c;
      }
    }
    bVar1 = false;
LAB_segment_0__8072480c:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Sound_assertFail_8072483c (0x8072483c) ===
void EGG_Sound_assertFail_8072483c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x254);
}

// === snd_EGG_Sound_807248cc (0x807248cc) ===
int snd_EGG_Sound_807248cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x654);
  iVar2 = param_1 + param_2 * 0xa30 + 0x6cc;
  *(int *)(param_1 + 0x654) = iVar1 + 1;
  FUN_segment_0__804d1c2c(param_1,iVar1,iVar2,0);
  FUN_segment_0__806d45b4(iVar2,param_2);
  return iVar2;
}

// === snd_EGG_Sound_8072493c (0x8072493c) ===
void snd_EGG_Sound_8072493c(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  if (*(int *)(param_2 + 0x240) == -100) {
    FUN_segment_0__80713cf4();
  }
  else if ((*(int *)(iRam00000000 + 0x1760) == 3) || (*(int *)(iRam00000000 + 0x1760) == 9)) {
    bVar1 = FUN_segment_0__8072fa50();
    if (bVar1 < 2) {
      FUN_segment_0__807138c8(param_1,0x76,param_2);
    }
    else {
      FUN_segment_0__807138c8(param_1,0x81,param_2);
    }
  }
  else {
    bVar1 = FUN_segment_0__8072fa50();
    if (bVar1 < 2) {
      FUN_segment_0__807138c8(param_1,0x6c,param_2);
    }
    else {
      FUN_segment_0__807138c8(param_1,0x81,param_2);
    }
  }
  return;
}

// === snd_EGG_Sound_80724a54 (0x80724a54) ===
void snd_EGG_Sound_80724a54(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar5;
  uint uVar4;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined auStack_38 [36];
  
  FUN_segment_0__804434e4(auStack_38);
  uVar1 = FUN_segment_0__8072fa50();
  uVar2 = FUN_segment_0__8072f954();
  FUN_segment_0__80718268();
  FUN_segment_0__8071e624();
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  iVar3 = FUN_segment_0__8072f8a4(*(undefined4 *)*g_Ram_uint);
  if (iVar3 == 0) {
    for (bVar8 = 0; bVar5 = FUN_segment_0__8072fa50(), bVar8 < bVar5; bVar8 = bVar8 + 1) {
      iVar3 = param_1 + g_Ram_uint[(uint)bVar8 * 0x3c + 0x339] * 4;
      *(int *)(iVar3 + 0x6c4) = *(int *)(iVar3 + 0x6c4) + 1;
    }
  }
  else {
    iVar3 = FUN_segment_0__8044364c(auStack_38,2);
    iVar6 = param_1 + iVar3 * 4;
    g_Ram_uint[0x339] = iVar3;
    *(int *)(iVar6 + 0x6c4) = *(int *)(iVar6 + 0x6c4) + 1;
    if ((g_Ram_uint != (void *)0) && (g_Ram_uint[6] != 0)) {
      *(int *)(g_Ram_uint[6] + 0x14) = iVar3;
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x6c4)) {
    iVar3 = *(int *)(param_1 + 0x6c4);
  }
  uVar4 = (uVar2 & 0xff) - 1;
  uVar7 = (iVar3 < *(int *)(param_1 + 0x6c8)) + 1 & 1;
  iVar3 = (uVar2 & 0xff) - (uVar1 & 0xff);
  if ((int)(uVar1 & 0xff) <= (int)uVar4) {
    do {
      iVar6 = param_1 + uVar7 * 4;
      g_Ram_uint[(uVar4 & 0xff) * 0x3c + 0x339] = uVar7;
      *(int *)(iVar6 + 0x6c4) = *(int *)(iVar6 + 0x6c4) + 1;
      do {
        uVar7 = uVar7 + 1 & 1;
      } while ((int)(uVar2 >> 1 & 0x7f) < *(int *)(param_1 + uVar7 * 4 + 0x6c4));
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_segment_0__804435b8(auStack_38,0xffffffff);
  return;
}

// === snd_EGG_Sound_80724c3c (0x80724c3c) ===
void snd_EGG_Sound_80724c3c(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_80724ca0 (0x80724ca0) ===
undefined4 EGG_Sound_validate_80724ca0(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x6cc,0,0xa30,2);
  }
  return 0;
}

// === snd_EGG_Sound_80724d58 (0x80724d58) ===
int * snd_EGG_Sound_80724d58(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80724dd8;
        }
      }
      bVar1 = false;
LAB_segment_0__80724dd8:
      if (bVar1) goto LAB_segment_0__80724de8;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80724de8:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__80724e3c;
      }
    }
    bVar1 = false;
LAB_segment_0__80724e3c:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Sound_validate_80724e68 (0x80724e68) ===
void EGG_Sound_validate_80724e68(int param_1)

{
  *(undefined4 *)(param_1 + 0x6bc) = 1;
  *(undefined4 *)(param_1 + 0x6c0) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x98);
}

// === EGG_Sound_assertFail_80724f70 (0x80724f70) ===
void EGG_Sound_assertFail_80724f70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x254);
}

// === EGG_Sound_assertFail_8072500c (0x8072500c) ===
void EGG_Sound_assertFail_8072500c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === snd_EGG_Sound_807257e0 (0x807257e0) ===
void snd_EGG_Sound_807257e0(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === snd_EGG_Sound_8072583c (0x8072583c) ===
void snd_EGG_Sound_8072583c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_18 [4];
  
  param_1[0xf9] = 0x7e2;
  FUN_segment_0__8041d9ac(iRam00000000);
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffe;
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x124) = 1;
  FUN_segment_0__80713318(param_1);
  *(undefined4 *)(*(int *)param_1[0x12] + 0x240) = 7;
  local_18[0] = iRam00000000;
  FUN_segment_0__80714a2c(param_1,local_18,1);
  uVar2 = 0;
  *(uint *)(iRam00000000 + 0x1780) = *(uint *)(iRam00000000 + 0x1780) & 0xfffffffd;
  iVar3 = 2;
  do {
    iVar1 = (uVar2 & 0xff) * 0xf0;
    uVar2 = uVar2 + 6;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xc28) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xc24) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xc20) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xce4) = 2;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xd18) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xd14) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xd10) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xdd4) = 2;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xe08) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xe04) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xe00) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xec4) = 2;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xef8) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xef4) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xef0) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xfb4) = 2;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xfe8) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xfe4) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0xfe0) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0x10a4) = 2;
    *(undefined4 *)(iRam00000000 + iVar1 + 0x10d8) = 5;
    *(undefined4 *)(iRam00000000 + iVar1 + 0x10d4) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0x10d0) = 0xffffffff;
    *(undefined4 *)(iRam00000000 + iVar1 + 0x1194) = 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_segment_0__8050105c
            (param_1[0x32d],0x8c,param_1[0x11],*(undefined *)(*(int *)(iRam00000000 + 0x98) + 0x4e8)
             ,2);
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x60) = 0;
  FUN_segment_0__804c1570(*(undefined4 *)(iRam00000000 + 0x98));
  *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + 0x74) = 2;
  if (param_1[4] == 0) {
    (**(code **)(*param_1 + 0x24))(param_1,0x55,0);
  }
  iVar3 = *(int *)(*(int *)(iRam00000000 + 0x98) + 0x128);
  if ((iVar3 < 0) || (7 < iVar3)) {
    iVar3 = *(int *)(iRam00000000 + 0x10);
    if ((iVar3 < 0x55) || (0x57 < iVar3)) {
      if ((iVar3 < 0x5b) || (0x5d < iVar3)) {
        if ((iVar3 < 0x7a) || (0x7c < iVar3)) {
          (**(code **)(*param_1 + 0x78))(param_1,param_1[0x325]);
        }
        else {
          (**(code **)(*param_1 + 0x78))(param_1,param_1[0x32b]);
        }
      }
      else {
        (**(code **)(*param_1 + 0x78))(param_1,param_1[0x32a]);
      }
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,param_1[0x329]);
    }
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,param_1[iVar3 + 0x325]);
  }
  return;
}

// === snd_EGG_Sound_80725b98 (0x80725b98) ===
void snd_EGG_Sound_80725b98(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)(param_2 + 0x240) != -100) {
    *(int *)(g_Ram_ptr[0x26] + 0x128) = *(int *)(param_2 + 0x240);
  }
  iVar3 = *(int *)(param_2 + 0x240);
  if (iVar3 != 4) {
    if (iVar3 < 4) {
      if (iVar3 == 0) {
        snd_EGG_Sound_80726148(param_1,1);
        FUN_segment_0__80713fe8(param_1,0x48,param_2);
      }
      else if (iVar3 < 0) {
        if (iVar3 == -100) {
          FUN_segment_0__80713adc(param_1,0x65,param_2);
        }
      }
      else {
        snd_EGG_Sound_80726148(param_1,iVar3 + 1);
        FUN_segment_0__80713fe8(param_1,0x54,param_2);
      }
      goto LAB_segment_0__80725f68;
    }
    if (iVar3 == 7) {
      snd_EGG_Sound_80726148(param_1,1);
      FUN_segment_0__80713e04((double)(float)g_Ram_ptr,param_1,0x47);
      goto LAB_segment_0__80725f68;
    }
    if (6 < iVar3) goto LAB_segment_0__80725f68;
    if (5 < iVar3) {
      if (*(char *)(g_Ram_ptr[0x24] + 0x14) == 0) {
        snd_EGG_Sound_80726148(param_1,1);
        FUN_segment_0__80713fe8(param_1,0x7a,param_2);
        goto LAB_segment_0__80725f68;
      }
      piVar4 = *(int **)(*g_Ram_ptr + 0x13c);
      if (piVar4 != (int *)0) {
        if (piVar4 != (int *)0) {
          for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
              puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
            if (puVar2 == (void *)0) {
              bVar1 = true;
              goto LAB_segment_0__80725ce0;
            }
          }
          bVar1 = false;
LAB_segment_0__80725ce0:
          if (bVar1) goto LAB_segment_0__80725cf0;
        }
        piVar4 = (int *)0;
      }
      else {
        piVar4 = (int *)0;
      }
LAB_segment_0__80725cf0:
      (**(code **)(*piVar4 + 100))(piVar4);
      (**(code **)(*piVar4 + 0x68))(piVar4,0x816,0);
      (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
      goto LAB_segment_0__80725f68;
    }
    if (*(char *)(g_Ram_ptr[0x24] + 0x14) == 0) {
      snd_EGG_Sound_80726148(param_1,2);
      FUN_segment_0__80713fe8(param_1,0x5a,param_2);
      goto LAB_segment_0__80725f68;
    }
    piVar4 = *(int **)(*g_Ram_ptr + 0x13c);
    if (piVar4 != (int *)0) {
      if (piVar4 != (int *)0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4);
            puVar2 != (void *)0; puVar2 = (undefined4 *)*puVar2) {
          if (puVar2 == (void *)0) {
            bVar1 = true;
            goto LAB_segment_0__80725ec8;
          }
        }
        bVar1 = false;
LAB_segment_0__80725ec8:
        if (bVar1) goto LAB_segment_0__80725ed8;
      }
      piVar4 = (int *)0;
    }
    else {
      piVar4 = (int *)0;
    }
LAB_segment_0__80725ed8:
    (**(code **)(*piVar4 + 100))(piVar4);
    (**(code **)(*piVar4 + 0x68))(piVar4,0x816,0);
    (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
    goto LAB_segment_0__80725f68;
  }
  if (*(char *)(g_Ram_ptr[0x24] + 0x14) == 0) {
    snd_EGG_Sound_80726148(param_1,1);
    FUN_segment_0__80713fe8(param_1,0x55,param_2);
    goto LAB_segment_0__80725f68;
  }
  piVar4 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar4 != (int *)0) {
    if (piVar4 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar4 + 0x60))(piVar4); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80725dd4;
        }
      }
      bVar1 = false;
LAB_segment_0__80725dd4:
      if (bVar1) goto LAB_segment_0__80725de4;
    }
    piVar4 = (int *)0;
  }
  else {
    piVar4 = (int *)0;
  }
LAB_segment_0__80725de4:
  (**(code **)(*piVar4 + 100))(piVar4);
  (**(code **)(*piVar4 + 0x68))(piVar4,0x816,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
LAB_segment_0__80725f68:
  if ((*(int *)(param_2 + 0x240) != -100) && (*(int *)(param_2 + 0x240) != 7)) {
    FUN_segment_0__804aa82c(param_2,0xd0);
  }
  return;
}

// === snd_EGG_Sound_80725fa8 (0x80725fa8) ===
void snd_EGG_Sound_80725fa8(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x240) == -100) {
    FUN_segment_0__80735a00(*(undefined4 *)(param_1 + 700),0,0);
  }
  else {
    FUN_segment_0__80735a00
              (*(undefined4 *)(param_1 + 700),*(undefined4 *)(*(int *)(param_2 + 0x240) << 2),0);
  }
  return;
}

// === EGG_Sound_validate_8072602c (0x8072602c) ===
void EGG_Sound_validate_8072602c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x240);
  if (iVar2 - 1U < 3) {
    iVar2 = 1;
  }
  else if (iVar2 - 4U < 2) {
    iVar2 = 2;
  }
  else if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (iVar2 != 6) {
      return;
    }
    iVar2 = 3;
  }
  piVar1 = (int *)FUN_segment_0__804ff4a0(param_1 + iVar2 * 0x174 + 0x75c,0);
  if (piVar1[0xe] != 1) {
    if (piVar1[0xe] == 2) {
      FUN_segment_0__804ff59c((double)g_Ram_float,piVar1,3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(*piVar1 + 0x10));
}

// === snd_EGG_Sound_80726148 (0x80726148) ===
void snd_EGG_Sound_80726148(undefined4 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_28 [5];
  
  *(int *)(*(int *)(iRam00000000 + 0x98) + 0x124) = param_2;
  uVar6 = 0;
  iVar9 = 4;
  do {
    uVar3 = uVar6 & 0xff;
    if ((int)uVar3 < param_2) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 0;
    }
    else if (uVar3 < 0xc) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 1;
    }
    else {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 5;
    }
    uVar3 = uVar6 + 1 & 0xff;
    if ((int)uVar3 < param_2) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 0;
    }
    else if (uVar3 < 0xc) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 1;
    }
    else {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 5;
    }
    uVar3 = uVar6 + 2 & 0xff;
    if ((int)uVar3 < param_2) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 0;
    }
    else if (uVar3 < 0xc) {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 1;
    }
    else {
      *(undefined4 *)(iRam00000000 + uVar3 * 0xf0 + 0xc28) = 5;
    }
    uVar6 = uVar6 + 3;
    iVar9 = iVar9 + -1;
    iVar8 = param_2;
  } while (iVar9 != 0);
  for (; iVar8 < 4; iVar8 = iVar8 + 1) {
    FUN_segment_0__804df828(iRam00000000 + 0x34,iVar8);
  }
  local_28[0] = iRam00000000;
  iVar8 = 0;
  local_28[1] = iRam00000004;
  local_28[2] = iRam00000008;
  local_28[3] = iRam0000000c;
  for (iVar9 = 0; iVar9 < param_2; iVar9 = iVar9 + 1) {
    if ((*(int *)(*(int *)(iRam00000000 + 0x98) + iVar8 + 300) != -1) &&
       (iVar4 = FUN_segment_0__806fe314(), iVar4 == 0)) {
      *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar8 + 300) = 0xffffffff;
    }
    iVar4 = *(int *)(iRam00000000 + 0x98) + iVar8;
    if (local_28[0] == *(int *)(iVar4 + 300)) {
      local_28[0] = -1;
    }
    if (local_28[1] == *(int *)(iVar4 + 300)) {
      local_28[1] = -1;
    }
    if (local_28[2] == *(int *)(iVar4 + 300)) {
      local_28[2] = -1;
    }
    if (local_28[3] == *(int *)(iVar4 + 300)) {
      local_28[3] = -1;
    }
    iVar8 = iVar8 + 4;
  }
  iVar8 = 0;
  iVar9 = 0;
  do {
    if (param_2 <= iVar8) {
      if (param_2 < 4) {
        if (8 < (int)(4U - param_2)) {
          bVar2 = false;
          bVar1 = false;
          if ((param_2 < 5) && (param_2 != -0x80000000)) {
            bVar1 = true;
          }
          if (bVar1) {
            bVar1 = true;
            if (((-param_2 & 0x80000000U) == 0) && ((4U - param_2 & 0x80000000) != 0)) {
              bVar1 = false;
            }
            if (bVar1) {
              bVar2 = true;
            }
          }
          if (bVar2) {
            iVar9 = param_2 << 2;
            uVar6 = 3U - param_2 >> 3;
            if (param_2 < -4) {
              do {
                param_2 = param_2 + 8;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 300) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x13c) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x130) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x140) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x134) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x144) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x138) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x148) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x13c) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x14c) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x140) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x150) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x144) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x154) = 0xffffffff;
                *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 0x148) = 0xffffffff;
                iVar8 = *(int *)(iRam00000000 + 0x98) + iVar9;
                iVar9 = iVar9 + 0x20;
                *(undefined4 *)(iVar8 + 0x158) = 0xffffffff;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
          }
        }
        iVar8 = 4 - param_2;
        iVar9 = param_2 << 2;
        if (param_2 < 4) {
          do {
            *(undefined4 *)(*(int *)(iRam00000000 + 0x98) + iVar9 + 300) = 0xffffffff;
            iVar4 = *(int *)(iRam00000000 + 0x98) + iVar9;
            iVar9 = iVar9 + 4;
            *(undefined4 *)(iVar4 + 0x13c) = 0xffffffff;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      return;
    }
    iVar4 = *(int *)(iRam00000000 + 0x98) + iVar9;
    if (*(int *)(iVar4 + 300) == -1) {
      piVar5 = local_28;
      iVar7 = 0;
      iVar10 = 4;
      do {
        if (*piVar5 != -1) {
          *(int *)(iVar4 + 300) = local_28[iVar7];
          local_28[iVar7] = -1;
          break;
        }
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar9 = iVar9 + 4;
    iVar8 = iVar8 + 1;
  } while( true );
}

// === snd_EGG_Sound_80726618 (0x80726618) ===
void snd_EGG_Sound_80726618(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + 0x13c);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80726698;
        }
      }
      bVar1 = false;
LAB_segment_0__80726698:
      if (bVar1) goto LAB_segment_0__807266a8;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__807266a8:
  (**(code **)(*piVar3 + 100))(piVar3);
  (**(code **)(*piVar3 + 0x68))(piVar3,0x816,0);
  (**(code **)(*param_1 + 0x24))(param_1,0x4d,0);
  return;
}

// === EGG_Sound_validate_80726720 (0x80726720) ===
undefined4 EGG_Sound_validate_80726720(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x6c4,0,0x174,4);
  }
  return 0;
}

// === snd_EGG_Sound_807267d8 (0x807267d8) ===
int * snd_EGG_Sound_807267d8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*g_Ram_ptr + param_1 * 4 + 8);
  if (piVar3 != (int *)0) {
    if (piVar3 != (int *)0) {
      for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 == (void *)0) {
          bVar1 = true;
          goto LAB_segment_0__80726858;
        }
      }
      bVar1 = false;
LAB_segment_0__80726858:
      if (bVar1) goto LAB_segment_0__80726868;
    }
    piVar3 = (int *)0;
  }
  else {
    piVar3 = (int *)0;
  }
LAB_segment_0__80726868:
  if ((piVar3 != (int *)0) && (piVar3 != (int *)0)) {
    for (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 0x60))(piVar3); puVar2 != (void *)0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (void *)0) {
        bVar1 = true;
        goto LAB_segment_0__807268bc;
      }
    }
    bVar1 = false;
LAB_segment_0__807268bc:
    if (bVar1) {
      return piVar3;
    }
  }
  return (int *)0;
}

// === EGG_Sound_assertFail_807268e8 (0x807268e8) ===
void EGG_Sound_assertFail_807268e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x14);
}

// === EGG_Sound_assertFail_80726b80 (0x80726b80) ===
void EGG_Sound_assertFail_80726b80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(0x254);
}

// === EGG_Sound_validate_80726c10 (0x80726c10) ===
undefined4 EGG_Sound_validate_80726c10(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_118 [32];
  undefined auStack_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4 [4];
  undefined4 local_c4;
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  uVar1 = *(undefined4 *)(iRam00000000 + 0x1760);
  *(undefined4 *)(iRam00000000 + 0x1760) = 1;
  FUN_segment_0__8072fe7c();
  *(undefined4 *)(iRam00000000 + 0x1760) = uVar1;
  uVar1 = uRam00000080;
  if (4 < param_2) {
    if (5 < param_2) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x654);
    *(int *)(param_1 + 0x654) = iVar2 + 1;
    FUN_segment_0__804d1c2c(param_1,iVar2,param_1 + (param_2 + -5) * 0x5c8 + 0x13bc,0);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_118,0x10,0x5d,uVar1);
  }
  local_e8 = uRam00000064;
  local_e4 = uRam00000068;
  local_e0 = uRam0000006c;
  local_dc = uRam00000070;
  local_d8 = uRam00000074;
  local_d4[0] = uRam00000050;
  local_d4[1] = uRam00000054;
  local_d4[2] = uRam00000058;
  local_d4[3] = uRam0000005c;
  local_c4 = uRam00000060;
  if (param_2 == 0) {
    FUN_segment_0__804384b0(iVar2 + 0x8ff8,0x34);
  }
  else if (param_2 == 1) {
    FUN_segment_0__8072fa50();
  }
  iVar2 = *(int *)(param_1 + 0x654);
  *(int *)(param_1 + 0x654) = iVar2 + 1;
  FUN_segment_0__804d1c2c(param_1,iVar2,param_1 + param_2 * 0x298 + 0x6c4,0);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_f8,0x10,0x1a,local_d4[param_2]);
}

// === snd_EGG_Sound_807270a4 (0x807270a4) ===
void snd_EGG_Sound_807270a4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_7c;
  undefined4 local_78 [23];
  
  FUN_segment_0__80713318();
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  iVar3 = FUN_segment_0__8072fe7c();
  iVar7 = *(int *)(iVar7 + iVar3 * 4 + 0x9128);
  uVar6 = 0;
  do {
    if ((*(uint *)(param_1 + 0x6bc) & 1 << (uVar6 & 0x3f)) != 0) {
      FUN_segment_0__804d5534(param_1 + 0x6c4,uVar6);
    }
    puVar5 = &uStack_7c;
    puVar4 = (undefined4 *)0xfffffffc;
    iVar3 = 10;
    do {
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 2;
      uVar2 = *puVar4;
      puVar5[1] = *puVar1;
      puVar5 = puVar5 + 2;
      *puVar5 = uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((-1 < *(int *)(param_1 + 0x8d0)) && (-1 < iVar7)) {
      FUN_segment_0__80735a00
                (*(undefined4 *)(param_1 + 700),local_78[iVar7 + *(int *)(param_1 + 0x8d0) * 4],0);
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 5);
  return;
}

// === snd_EGG_Sound_807271ac (0x807271ac) ===
void snd_EGG_Sound_807271ac(void)

{
  FUN_segment_0__80713cf4();
  FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
  return;
}

// === snd_EGG_Sound_8072720c (0x8072720c) ===
void snd_EGG_Sound_8072720c(int param_1)

{
  FUN_segment_0__804a9f54(**(undefined4 **)(param_1 + 0x48));
  FUN_segment_0__80713cf4(param_1,**(undefined4 **)(param_1 + 0x48));
  FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
  FUN_segment_0__804e45fc(*(undefined4 *)(iRam00000000 + 0x90));
  return;
}

// === snd_EGG_Sound_8072726c (0x8072726c) ===
void snd_EGG_Sound_8072726c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x20c);
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  iVar1 = FUN_segment_0__8072fe7c();
  if (iVar4 == 0) {
    *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9128) = param_4;
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9138) = param_4;
  }
  else if (iVar4 == 2) {
    *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9148) = param_4;
  }
  else if (iVar4 == 3) {
    *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9158) = param_4;
  }
  else if (iVar4 == 4) {
    *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9168) = param_4;
  }
  if (iVar4 < 4) {
    uVar3 = 0;
    do {
      if ((*(uint *)(param_1 + 0x6bc) & 1 << (uVar3 & 0x3f)) != 0) {
        FUN_segment_0__804d55bc(param_1 + (iVar4 + 1) * 0x298 + 0x6c4,uVar3);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 5);
  }
  else {
    uVar3 = 0;
    do {
      if ((*(uint *)(param_1 + 0x6bc) & 1 << (uVar3 & 0x3f)) != 0) {
        FUN_segment_0__80501d2c(param_1 + 0x13bc,uVar3);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 5);
  }
  return;
}

// === snd_EGG_Sound_807273f4 (0x807273f4) ===
void snd_EGG_Sound_807273f4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_5c;
  undefined4 local_58 [22];
  
  puVar4 = &uStack_5c;
  puVar3 = (undefined4 *)0xfffffffc;
  iVar5 = 10;
  do {
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar3;
    puVar4[1] = *puVar1;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((-1 < *(int *)(param_2 + 0x20c)) && (-1 < param_4)) {
    FUN_segment_0__80735a00
              (*(undefined4 *)(param_1 + 700),local_58[*(int *)(param_2 + 0x20c) * 4 + param_4],0);
  }
  return;
}

// === snd_EGG_Sound_80727474 (0x80727474) ===
void snd_EGG_Sound_80727474(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x6bc) & 1 << (uVar1 & 0x3f)) != 0) {
      FUN_segment_0__804a9f40(**(undefined4 **)(param_1 + 0x48),uVar1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 5);
  return;
}

// === snd_EGG_Sound_807274f0 (0x807274f0) ===
void snd_EGG_Sound_807274f0(void)

{
  int iVar1;
  undefined4 in_r6;
  int iVar2;
  
  if (*(short *)(iRam00000000 + 0x36) < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iRam00000000 + ((int)*(short *)(iRam00000000 + 0x36) & 0xffU) * 0x93f0 + 0x38;
  }
  iVar1 = FUN_segment_0__8072fe7c();
  *(undefined4 *)(iVar2 + iVar1 * 4 + 0x9178) = in_r6;
  return;
}

// === snd_EGG_Sound_80727568 (0x80727568) ===
void snd_EGG_Sound_80727568(undefined4 param_1,undefined4 param_2,int param_3)

{
  int local_d8 [52];
  
  FUN_segment_0__804b4ecc(local_d8);
  local_d8[0] = *(int *)(param_3 << 2);
  if (local_d8[0] == -1) {
    FUN_segment_0__80500a34(param_2,0xd88,0);
  }
  else {
    FUN_segment_0__80500a34(param_2,0xd7b,local_d8);
  }
  return;
}

// === snd_EGG_Sound_80727604 (0x80727604) ===
void snd_EGG_Sound_80727604(int param_1,undefined4 param_2)

{
  FUN_segment_0__804a9ec4(param_2,param_1 + 0x658,0);
  FUN_segment_0__804a9edc(param_2,param_1 + 0x66c);
  FUN_segment_0__804a9ee4(param_2,param_1 + 0x680);
  return;
}

// === EGG_Sound_validate_80727668 (0x80727668) ===
undefined4 EGG_Sound_validate_80727668(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 0x1984,0,0x474,1);
  }
  return 0;
}

// === EGG_Sound_validate_8072773c (0x8072773c) ===
void EGG_Sound_validate_8072773c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4));
}

// === EGG_Sound_validate_8072776c (0x8072776c) ===
void EGG_Sound_validate_8072776c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4));
}

// === EGG_Sound_validate_8072779c (0x8072779c) ===
void EGG_Sound_validate_8072779c(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_807277cc (0x807277cc) ===
void EGG_Sound_validate_807277cc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(*(undefined4 *)(param_1 + 4),param_2,param_3,param_1);
}

// === EGG_Sound_validate_80727810 (0x80727810) ===
void EGG_Sound_validate_80727810(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined auStack_138 [40];
  undefined auStack_110 [40];
  undefined4 local_e8;
  undefined4 local_e4;
  int local_c4;
  undefined4 local_c0;
  
  (**(code **)(*(int *)(param_1 + 0x32c) + 0x10))(param_1 + 0x32c,0,0);
  FUN_segment_0__804d1c34(param_1,param_1 + 0x32c);
  iVar3 = 2;
  if (*(int *)*g_Ram_uint == 0x1b) {
    iVar3 = *(int *)(g_Ram_uint[0x26] + 100) * 2 + 2;
  }
  FUN_segment_0__804d1c1c(param_1,iVar3);
  FUN_segment_0__804d1c2c(param_1,0,param_1 + 0x44,0);
  FUN_segment_0__804ae324(auStack_110,param_1 + 0x44);
  FUN_segment_0__804ae36c(auStack_110,0,5,0x11,0);
  uVar4 = g_Ram_uint[0x5d6];
  uVar2 = FUN_segment_0__8070f808(uVar4);
  FUN_segment_0__80500a34(param_1 + 0x44,uVar2,0);
  FUN_segment_0__804d1c2c(param_1,1,param_1 + 0x1b8,0);
  FUN_segment_0__804ae324(auStack_138,param_1 + 0x1b8);
  FUN_segment_0__804ae36c(auStack_138,0x1d,0x22,0x2b,0);
  bVar1 = *(byte *)(g_Ram_uint + 0x2e3);
  FUN_segment_0__804b4ecc(&local_e8);
  iVar3 = *(int *)*g_Ram_uint;
  if (iVar3 == 0x19) {
    uVar2 = FUN_segment_0__8072f808(uVar4);
    uVar4 = FUN_segment_0__8072ffa8();
    FUN_segment_0__80500d70(param_1 + 0x1b8,0x34,uVar4);
    if ((g_Ram_uint[0x2e4] & 1) == 0) {
      local_c4 = g_Ram_uint[0x2db] + 0x589;
    }
    else {
      local_c4 = 0x58c;
    }
    local_c0 = FUN_segment_0__8070f7d8(uVar2);
    FUN_segment_0__80500a34(param_1 + 0x1b8,bVar1 + 0x582,&local_e8);
  }
  else if (iVar3 == 0x1a) {
    FUN_segment_0__80500d70(param_1 + 0x1b8,0x3d,0x46);
    if ((g_Ram_uint[0x2e4] & 1) == 0) {
      local_c4 = g_Ram_uint[0x2db] + 0x589;
    }
    else {
      local_c4 = 0x58c;
    }
    uVar2 = 0x586;
    *(int *)(g_Ram_uint[0x26] + 0x60) = *(int *)(g_Ram_uint[0x26] + 0x60) + 1;
    local_e8 = *(undefined4 *)(g_Ram_uint[0x26] + 0x60);
    local_e4 = *(undefined4 *)(g_Ram_uint[0x26] + 100);
    if ((g_Ram_uint[0x5e0] & 2) != 0) {
      uVar2 = 0x581;
    }
    FUN_segment_0__80500a34(param_1 + 0x1b8,uVar2,&local_e8);
  }
  else if (iVar3 == 0x1b) {
    *(int *)(g_Ram_uint[0x26] + 0x60) = *(int *)(g_Ram_uint[0x26] + 0x60) + 1;
    if (g_Ram_uint[0x2de] == 0) {
      FUN_segment_0__80500d70(param_1 + 0x1b8,0x53,0x5c);
      FUN_segment_0__80500a34(param_1 + 0x1b8,0x587,0);
    }
    else if (g_Ram_uint[0x2de] == 1) {
      FUN_segment_0__80500d70(param_1 + 0x1b8,0x6c,0x75);
      FUN_segment_0__80500a34(param_1 + 0x1b8,0x588,0);
    }
    else {
      FUN_segment_0__80500d70(param_1 + 0x1b8,0x82,0x8b);
      FUN_segment_0__80500a34(param_1 + 0x1b8,9999,0);
    }
  }
  else if (iVar3 == 0x1d) {
    *(undefined *)(param_1 + 0x238) = 1;
  }
  else {
    uVar2 = FUN_segment_0__8070f7d8(0xffffffff);
    FUN_segment_0__80500a34(param_1 + 0x1b8,uVar2,0);
    uVar2 = FUN_segment_0__8072ffa8(0xffffffff);
    FUN_segment_0__80500d70(param_1 + 0x1b8,0x9a,uVar2);
  }
  if (*(int *)*g_Ram_uint == 0x1b) {
    if (0 < *(int *)(g_Ram_uint[0x26] + 100)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x180);
    }
    if (0 < *(int *)(g_Ram_uint[0x26] + 100)) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0x180);
    }
  }
  FUN_segment_0__804ae32c(auStack_138,0xffffffff);
  FUN_segment_0__804ae32c(auStack_110,0xffffffff);
  return;
}

// === EGG_Sound_validate_80727c54 (0x80727c54) ===
int EGG_Sound_validate_80727c54(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_segment_0__804c8158(param_1 + 0x32c,0xffffffff);
    FUN_segment_0__80500540(param_1 + 0x1b8,0xffffffff);
    FUN_segment_0__80500540(param_1 + 0x44,0xffffffff);
    FUN_segment_0__804d11c4(param_1,0);
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_80727cf4 (0x80727cf4) ===
void EGG_Sound_validate_80727cf4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_segment_0__804d113c();
  *param_1 = 0;
  param_1[0x13] = 600;
  uVar3 = uRam00000008;
  uVar2 = uRam00000004;
  uVar1 = uRam00000000;
  param_1[0x14] = 0;
  param_1[0x15] = param_1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  FUN_segment_0__804c880c(param_1 + 0x19);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x6a,0,0,0xc,4);
}

// === EGG_Sound_validate_80727e74 (0x80727e74) ===
undefined4 EGG_Sound_validate_80727e74(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (void *)0) {
    return 0;
  }
  *param_1 = 0;
  if (param_1[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1[0x11]);
  }
  FUN_segment_0__80500540(param_1 + 0xdc,0xffffffff);
  puVar1 = param_1 + 0x76;
  if ((puVar1 != (void *)0) && (puVar1 != (void *)0)) {
    FUN_segment_0__80500540(puVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x6a,0,0xc,4);
}

// === EGG_Sound_validate_80727f34 (0x80727f34) ===
void EGG_Sound_validate_80727f34(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_segment_0__80422bfc(uRam00000000);
  *(byte *)(param_1 + 0x48) = cVar1 + 1U;
  FUN_segment_0__804d1c1c(param_1,(byte)(cVar1 + 1U) + 2);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430((uint)*(byte *)(param_1 + 0x48) << 2);
}

// === snd_EGG_Sound_8073a0a8 (0x8073a0a8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a0a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073a2e8 (0x8073a2e8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a2e8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073a3c8 (0x8073a3c8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a3c8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073a558 (0x8073a558) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a558(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073a6ec (0x8073a6ec) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a6ec(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === EGG_Sound_validate_8073a998 (0x8073a998) ===
int EGG_Sound_validate_8073a998(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_8073a9d8 (0x8073a9d8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073a9d8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073ad24 (0x8073ad24) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073ad24(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073b0a8 (0x8073b0a8) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073b0a8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073b594 (0x8073b594) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073b594(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073baa0 (0x8073baa0) ===
undefined4 * snd_EGG_Sound_8073baa0(undefined4 *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_segment_0__806fbc74(param_1,param_2,0);
  *param_1 = 0;
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    EGG_Sound_validate_8056e704(&local_1c,param_1 + 0x16);
    param_1[0x12] = local_1c;
    param_1[0x13] = local_18;
    param_1[0x14] = local_14;
  }
  param_1[0x41] = param_1[0x12];
  param_1[0x42] = param_1[0x13];
  param_1[0x43] = param_1[0x14];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    EGG_Sound_validate_8056e704(&local_28,param_1 + 0x16);
    param_1[0x12] = local_28;
    param_1[0x13] = local_24;
    param_1[0x14] = local_20;
  }
  *(bool *)(param_1 + 0x44) = (float)param_1[0x13] < g_Ram_float;
  param_1[0x45] =
       (float)((double)CONCAT44(0x43300000,(int)*(short *)(*param_2 + 0x2a) ^ 0x80000000) -
              (double)CONCAT44(g_Ram_float,uRam00000004));
  sVar1 = *(short *)(*param_2 + 0x2c);
  param_1[0x46] = (int)sVar1;
  sVar2 = *(short *)(*param_2 + 0x2e);
  param_1[0x47] = (int)sVar2;
  sVar3 = *(short *)(*param_2 + 0x30);
  param_1[0x48] = (int)sVar3;
  param_1[0x49] = sVar1 * 2 + (int)sVar3 + (int)sVar2;
  param_1[0x4a] = 0;
  return param_1;
}

// === EGG_Sound_validate_8073bc10 (0x8073bc10) ===
void EGG_Sound_validate_8073bc10(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_98 [136];
  
  FUN_segment_0__806fbd4c();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_98,0x80,0,uVar1);
}

// === snd_EGG_Sound_8073bdcc (0x8073bdcc) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073bdcc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073c334 (0x8073c334) ===
double snd_EGG_Sound_8073c334(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  uVar2 = *(uint *)(param_1 + 0x118);
  uVar4 = param_2 - (param_2 / *(int *)(param_1 + 0x124)) * *(int *)(param_1 + 0x124);
  if ((int)uVar4 < (int)uVar2) {
    iVar3 = 0;
  }
  else if ((int)uVar4 < (int)(uVar2 + *(int *)(param_1 + 0x11c))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 3;
    if ((int)uVar4 < (int)(uVar2 * 2 + *(int *)(param_1 + 0x11c))) {
      iVar3 = 2;
    }
  }
  if (iVar3 == 1) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      uVar2 = 0xffffffff;
    }
    dVar5 = (double)(*(float *)(param_1 + 0x114) *
                    (float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dRam00000000));
  }
  else if (iVar3 == 3) {
    dVar5 = (double)dRam00000000._0_4_;
  }
  else if (iVar3 == 0) {
    if ((int)uVar4 < (int)uVar2) {
      fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x11c);
      if ((int)uVar4 < (int)(uVar2 + iVar3)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 - uVar2 ^ 0x80000000) - dRam00000000);
      }
      else if ((int)uVar4 < (int)(uVar2 * 2 + iVar3)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 - (uVar2 + iVar3) ^ 0x80000000) -
                       dRam00000000);
      }
      else {
        fVar1 = (float)((double)CONCAT44(0x43300000,(uVar2 * -2 - iVar3) + uVar4 ^ 0x80000000) -
                       dRam00000000);
      }
    }
    iVar3 = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      iVar3 = -1;
    }
    dVar5 = (double)((*(float *)(param_1 + 0x114) *
                     (float)((double)CONCAT44(0x43300000,(int)fVar1 * iVar3 ^ 0x80000000) -
                            dRam00000000)) /
                    (float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dRam00000000));
  }
  else if (iVar3 == 2) {
    if ((int)uVar4 < (int)uVar2) {
      fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 ^ 0x80000000) - dRam00000000);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x11c);
      if ((int)uVar4 < (int)(uVar2 + iVar3)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 - uVar2 ^ 0x80000000) - dRam00000000);
      }
      else if ((int)uVar4 < (int)(uVar2 * 2 + iVar3)) {
        fVar1 = (float)((double)CONCAT44(0x43300000,uVar4 - (uVar2 + iVar3) ^ 0x80000000) -
                       dRam00000000);
      }
      else {
        fVar1 = (float)((double)CONCAT44(0x43300000,(uVar2 * -2 - iVar3) + uVar4 ^ 0x80000000) -
                       dRam00000000);
      }
    }
    iVar3 = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      iVar3 = -1;
    }
    dVar5 = (double)((*(float *)(param_1 + 0x114) *
                     (float)((double)CONCAT44(0x43300000,iVar3 * (uVar2 - (int)fVar1) ^ 0x80000000)
                            - dRam00000000)) /
                    (float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dRam00000000));
  }
  else {
    dVar5 = (double)dRam00000000._0_4_;
  }
  return dVar5;
}

// === snd_EGG_Sound_8073c674 (0x8073c674) ===
double snd_EGG_Sound_8073c674(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = *(int *)(param_1 + 0x118);
  uVar2 = param_2 - (param_2 / *(int *)(param_1 + 0x124)) * *(int *)(param_1 + 0x124);
  if ((int)uVar2 < iVar3) {
    dVar4 = (double)(float)((double)CONCAT44(0x43300000,uVar2 ^ 0x80000000) - dRam00000000);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x11c);
    if ((int)uVar2 < iVar3 + iVar1) {
      dVar4 = (double)(float)((double)CONCAT44(0x43300000,uVar2 - iVar3 ^ 0x80000000) - dRam00000000
                             );
    }
    else if ((int)uVar2 < iVar3 * 2 + iVar1) {
      dVar4 = (double)(float)((double)CONCAT44(0x43300000,uVar2 - (iVar3 + iVar1) ^ 0x80000000) -
                             dRam00000000);
    }
    else {
      dVar4 = (double)(float)((double)CONCAT44(0x43300000,(iVar3 * -2 - iVar1) + uVar2 ^ 0x80000000)
                             - dRam00000000);
    }
  }
  return dVar4;
}

// === EGG_Sound_validate_8073c748 (0x8073c748) ===
void EGG_Sound_validate_8073c748(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  undefined auStack_50 [48];
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  longlong local_10;
  
  local_8c = *(undefined4 *)(param_1 + 0x104);
  local_88 = *(undefined4 *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x118);
  local_20 = 0x43300000;
  local_18 = 0x43300000;
  uVar5 = *(int *)((int)g_Ram_float + 0x20) -
          (*(int *)((int)g_Ram_float + 0x20) / *(int *)(param_1 + 0x124)) *
          *(int *)(param_1 + 0x124);
  if ((int)uVar5 < (int)uVar3) {
    iVar4 = 0;
  }
  else if ((int)uVar5 < (int)(uVar3 + *(int *)(param_1 + 0x11c))) {
    iVar4 = 1;
  }
  else {
    iVar4 = 3;
    if ((int)uVar5 < (int)(uVar3 * 2 + *(int *)(param_1 + 0x11c))) {
      iVar4 = 2;
    }
  }
  if (iVar4 == 1) {
    uStack_1c = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      uStack_1c = 0xffffffff;
    }
    uStack_1c = uStack_1c ^ 0x80000000;
    fVar1 = *(float *)(param_1 + 0x114) *
            (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010);
  }
  else {
    fVar1 = g_Ram_float;
    if (iVar4 != 3) {
      if (iVar4 == 0) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_10 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_1c = uVar3 ^ 0x80000000;
        uStack_14 = (int)fVar1 * iVar4 ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_14) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010);
      }
      else if (iVar4 == 2) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_10 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_1c = uVar3 ^ 0x80000000;
        uStack_14 = iVar4 * (uVar3 - (int)fVar1) ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_14) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010);
      }
    }
  }
  fVar2 = fRam00000018;
  if ((fRam00000018 <= fVar1) && (fVar2 = fVar1, fRam0000001c < fVar1)) {
    fVar2 = fRam0000001c;
  }
  local_84 = (fRam00000024 * fVar2) / fRam00000028;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_50,&local_8c,param_1 + 0x30);
}

// === EGG_Sound_validate_8073cb04 (0x8073cb04) ===
void EGG_Sound_validate_8073cb04(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined auStack_58 [48];
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  longlong local_18;
  
  local_94 = *(undefined4 *)(param_1 + 0x104);
  local_90 = *(undefined4 *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x118);
  local_28 = 0x43300000;
  local_20 = 0x43300000;
  uVar5 = *(int *)((int)g_Ram_float + 0x20) -
          (*(int *)((int)g_Ram_float + 0x20) / *(int *)(param_1 + 0x124)) *
          *(int *)(param_1 + 0x124);
  if ((int)uVar5 < (int)uVar3) {
    iVar4 = 0;
  }
  else if ((int)uVar5 < (int)(uVar3 + *(int *)(param_1 + 0x11c))) {
    iVar4 = 1;
  }
  else {
    iVar4 = 3;
    if ((int)uVar5 < (int)(uVar3 * 2 + *(int *)(param_1 + 0x11c))) {
      iVar4 = 2;
    }
  }
  if (iVar4 == 1) {
    uStack_24 = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      uStack_24 = 0xffffffff;
    }
    uStack_24 = uStack_24 ^ 0x80000000;
    fVar1 = *(float *)(param_1 + 0x114) *
            (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
  }
  else {
    fVar1 = g_Ram_float;
    if (iVar4 != 3) {
      if (iVar4 == 0) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_18 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_24 = uVar3 ^ 0x80000000;
        uStack_1c = (int)fVar1 * iVar4 ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
      }
      else if (iVar4 == 2) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_18 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_24 = uVar3 ^ 0x80000000;
        uStack_1c = iVar4 * (uVar3 - (int)fVar1) ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
      }
    }
  }
  fVar2 = fRam00000018;
  if ((fRam00000018 <= fVar1) && (fVar2 = fVar1, fRam0000001c < fVar1)) {
    fVar2 = fRam0000001c;
  }
  local_8c = (fRam00000024 * fVar2) / fRam00000028;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_58,&local_94,param_1 + 0x30);
}

// === snd_EGG_Sound_8073cf34 (0x8073cf34) ===
void snd_EGG_Sound_8073cf34(int *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = (**(code **)(*param_1 + 0x38))();
  local_c = (**(code **)(*param_1 + 0x38))(param_1);
  local_18 = uRam00000000;
  local_14 = uRam00000004;
  FUN_segment_0__80701444(param_1,&local_10,&local_18,2,0);
  FUN_segment_0__8044ef04(param_1[2]);
  return;
}

// === EGG_Sound_validate_8073cfbc (0x8073cfbc) ===
void EGG_Sound_validate_8073cfbc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  longlong local_18;
  
  local_38 = *(undefined4 *)(param_1 + 0x104);
  local_34 = *(undefined4 *)(param_1 + 0x108);
  param_2 = *(int *)((int)g_Ram_float + 0x20) - param_2;
  uVar3 = *(uint *)(param_1 + 0x118);
  local_28 = 0x43300000;
  local_20 = 0x43300000;
  uVar5 = param_2 - (param_2 / *(int *)(param_1 + 0x124)) * *(int *)(param_1 + 0x124);
  if ((int)uVar5 < (int)uVar3) {
    iVar4 = 0;
  }
  else if ((int)uVar5 < (int)(uVar3 + *(int *)(param_1 + 0x11c))) {
    iVar4 = 1;
  }
  else {
    iVar4 = 3;
    if ((int)uVar5 < (int)(uVar3 * 2 + *(int *)(param_1 + 0x11c))) {
      iVar4 = 2;
    }
  }
  if (iVar4 == 1) {
    uStack_24 = 1;
    if (*(char *)(param_1 + 0x110) != 0) {
      uStack_24 = 0xffffffff;
    }
    uStack_24 = uStack_24 ^ 0x80000000;
    fVar1 = *(float *)(param_1 + 0x114) *
            (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
  }
  else {
    fVar1 = g_Ram_float;
    if (iVar4 != 3) {
      if (iVar4 == 0) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_18 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_24 = uVar3 ^ 0x80000000;
        uStack_1c = (int)fVar1 * iVar4 ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
      }
      else if (iVar4 == 2) {
        if ((int)uVar5 < (int)uVar3) {
          fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 ^ 0x80000000) - dRam00000010);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x11c);
          if ((int)uVar5 < (int)(uVar3 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - uVar3 ^ 0x80000000) - dRam00000010);
          }
          else if ((int)uVar5 < (int)(uVar3 * 2 + iVar4)) {
            fVar1 = (float)((double)CONCAT44(0x43300000,uVar5 - (uVar3 + iVar4) ^ 0x80000000) -
                           dRam00000010);
          }
          else {
            fVar1 = (float)((double)CONCAT44(0x43300000,(uVar3 * -2 - iVar4) + uVar5 ^ 0x80000000) -
                           dRam00000010);
          }
        }
        local_18 = (longlong)(int)fVar1;
        iVar4 = 1;
        if (*(char *)(param_1 + 0x110) != 0) {
          iVar4 = -1;
        }
        uStack_24 = uVar3 ^ 0x80000000;
        uStack_1c = iVar4 * (uVar3 - (int)fVar1) ^ 0x80000000;
        fVar1 = (*(float *)(param_1 + 0x114) *
                (float)((double)CONCAT44(0x43300000,uStack_1c) - dRam00000010)) /
                (float)((double)CONCAT44(0x43300000,uStack_24) - dRam00000010);
      }
    }
  }
  fVar2 = fRam00000018;
  if ((fRam00000018 <= fVar1) && (fVar2 = fVar1, fRam0000001c < fVar1)) {
    fVar2 = fRam0000001c;
  }
  local_30 = (fRam00000024 * fVar2) / fRam00000028;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 300,&local_38,param_1 + 0x30);
}

// === EGG_Sound_validate_8073d338 (0x8073d338) ===
int EGG_Sound_validate_8073d338(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8073d378 (0x8073d378) ===
void EGG_Sound_validate_8073d378(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_segment_0__806fbc74(param_1,param_2,0);
  uVar1 = uRam00000000;
  *param_1 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = uVar1;
  param_1[0x43] = param_1[0xc];
  param_1[0x44] = param_1[0xd];
  param_1[0x45] = param_1[0xe];
  if (*(char *)(param_1 + 0x15) == 0) {
    *(undefined *)(param_1 + 0x15) = 1;
    EGG_Sound_validate_8056e704(&local_18,param_1 + 0x16);
    param_1[0x12] = local_18;
    param_1[0x13] = local_14;
    param_1[0x14] = local_10;
  }
  param_1[0x46] = param_1[0x12];
  param_1[0x47] = param_1[0x13];
  param_1[0x48] = param_1[0x14];
  param_1[0x50] = 0;
  param_1[0x51] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x4c,0x10,0,(int)*(short *)(*param_2 + 0x2a));
}

// === EGG_Sound_validate_8073d4b8 (0x8073d4b8) ===
void EGG_Sound_validate_8073d4b8(int param_1)

{
  undefined auStack_24 [24];
  
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_24,0x14,10,param_1 + 0x130);
}

// === EGG_Sound_validate_8073d6b8 (0x8073d6b8) ===
void EGG_Sound_validate_8073d6b8(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_38 [44];
  
  FUN_segment_0__80700278();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_38,0x20,0x2d,uVar1);
}

// === EGG_Sound_validate_8073d82c (0x8073d82c) ===
void EGG_Sound_validate_8073d82c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_segment_0__80702028();
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_segment_0__80701bcc(param_1);
    iVar1 = *(int *)(param_1 + 0x148);
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

// === snd_EGG_Sound_8073d8b4 (0x8073d8b4) ===
void snd_EGG_Sound_8073d8b4(int param_1)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = true;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  iVar5 = (int)*(short *)(**(int **)(param_1 + 0xa0) + 0x2a);
  for (iVar4 = 0; iVar4 < (int)(uint)*(ushort *)(iRam00000000 + 4); iVar4 = iVar4 + 1) {
    piVar3 = *(int **)(*(int *)(iRam00000000 + 8) + iVar6);
    sVar2 = (**(code **)(*piVar3 + 0x24))(piVar3);
    if ((sVar2 == 0x211) && (iVar5 + 1 == (int)*(short *)(*(int *)piVar3[0x28] + 0x2a))) {
      *(int **)(param_1 + 0x14c) = piVar3;
    }
    sVar2 = (**(code **)(*piVar3 + 0x24))(piVar3);
    if ((sVar2 == 0x211) && (iVar5 + -1 == (int)*(short *)(*(int *)piVar3[0x28] + 0x2a))) {
      bVar1 = false;
    }
    iVar6 = iVar6 + 4;
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x104) = 1;
  }
  return;
}

// === EGG_Sound_validate_8073d9ac (0x8073d9ac) ===
void EGG_Sound_validate_8073d9ac(int *param_1)

{
  undefined4 uVar1;
  undefined auStack_88 [128];
  
  FUN_segment_0__806fbd4c();
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(auStack_88,0x80,0x32,uVar1);
}

// === EGG_Sound_validate_8073dd80 (0x8073dd80) ===
void EGG_Sound_validate_8073dd80(int *param_1,int param_2)

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
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x74))();
    return;
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 300))();
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

// === EGG_Sound_validate_8073e0b0 (0x8073e0b0) ===
void EGG_Sound_validate_8073e0b0(int param_1)

{
  FUN_segment_0__80701bcc();
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 0x58,param_1 + 0xbc);
}

// === snd_EGG_Sound_8073e378 (0x8073e378) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073e378(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073e728 (0x8073e728) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073e728(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073eb24 (0x8073eb24) ===
void snd_EGG_Sound_8073eb24
               (undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x104);
  if (iVar1 == 0) {
    FUN_segment_0__806aa408(*(undefined4 *)(param_2 + 0xac));
  }
  else if (iVar1 == 1) {
    FUN_segment_0__806aa408(*(undefined4 *)(param_2 + 0xac));
    if (*(int *)(param_2 + 0x150) != 0) {
      FUN_segment_0__806aa408(param_1,*(int *)(param_2 + 0x150),param_3,param_4,param_5);
    }
  }
  else if (iVar1 == 2) {
    FUN_segment_0__806aa408(*(undefined4 *)(param_2 + 0xac));
    if (*(int *)(param_2 + 0x150) != 0) {
      FUN_segment_0__806aa408(param_1,*(int *)(param_2 + 0x150),param_3,param_4,param_5);
    }
    if (*(int *)(param_2 + 0x154) != 0) {
      FUN_segment_0__806aa408(param_1,*(int *)(param_2 + 0x154),param_3,param_4,param_5);
    }
  }
  return;
}

// === snd_EGG_Sound_8073ec1c (0x8073ec1c) ===
/* WARNING: Control flow encountered bad instruction data */

void snd_EGG_Sound_8073ec1c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// === snd_EGG_Sound_8073f020 (0x8073f020) ===
void snd_EGG_Sound_8073f020(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
  }
  if (*(char *)(param_1 + 0x90) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(*(int **)(param_1 + 0xc),param_1 + 0x3c);
  }
  piVar1 = *(int **)(param_1 + 0x148);
  if (piVar1 != (int *)0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,param_1 + 0x3c);
  }
  return;
}

// === EGG_Sound_validate_8073f0c4 (0x8073f0c4) ===
int EGG_Sound_validate_8073f0c4(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === snd_EGG_Sound_8073f104 (0x8073f104) ===
void snd_EGG_Sound_8073f104(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// === EGG_Sound_validate_8073f11c (0x8073f11c) ===
int EGG_Sound_validate_8073f11c(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_validate_8073f15c (0x8073f15c) ===
void EGG_Sound_validate_8073f15c(int param_1,uint *param_2,undefined4 param_3)

{
  if ((*param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0,0x3c,0);
  }
  *(uint *)(param_1 + 4) = *param_2;
  FUN_segment_0__8044b518(param_1 + 4,param_3,0,0);
  return;
}

// === EGG_Sound_validate_8073f1d8 (0x8073f1d8) ===
undefined4 EGG_Sound_validate_8073f1d8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (param_2 == 0x10) {
    iVar2 = 0x2d;
  }
  else if (param_2 == 0xf) {
    iVar2 = 0x2e;
  }
  else {
    iVar2 = param_2;
    if (param_2 == 0x17) {
      iVar2 = 0x2f;
    }
  }
  if (((*(int *)*g_Ram_uint == 0x3d) || (*(int *)*g_Ram_uint == 0x3e)) && (0x17 < param_2)) {
    bVar1 = false;
    iVar2 = FUN_segment_0__804ce0ec(g_Ram_uint[0x26] + 0x238,0);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_segment_0__804ce0ec(g_Ram_uint[0x26] + 0x238,0), -1 < *(int *)(iVar2 + 0x9c))
       ) {
      bVar1 = true;
    }
    uVar4 = 0xf;
    if (bVar1) {
      uVar4 = 0;
    }
    uVar3 = FUN_segment_0__8042fd60(g_Ram_uint,2,uVar4,0);
    if (uVar3 != 0) {
      if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0,0x3c,0);
      }
      *(uint *)(param_1 + 4) = uVar3;
      FUN_segment_0__8044b518(param_1 + 4,uVar4,0,0);
      uVar5 = 1;
    }
  }
  else {
    uVar4 = FUN_segment_0__8043052c(iVar2);
    uVar4 = FUN_segment_0__8049803c(0x1e,uVar4);
    uVar3 = FUN_segment_0__8042fd60(g_Ram_uint,6,uVar4,0);
    if (uVar3 != 0) {
      if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_segment_0__80443430(0,0x3c,0);
      }
      *(uint *)(param_1 + 4) = uVar3;
      FUN_segment_0__8044b518(param_1 + 4,uVar4,0,0);
      uVar5 = 1;
    }
  }
  return uVar5;
}

// === EGG_Sound_validate_8073f3c8 (0x8073f3c8) ===
undefined4 EGG_Sound_validate_8073f3c8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_segment_0__80430550(param_3);
  uVar1 = FUN_segment_0__8049803c(0x27,uVar1);
  iVar2 = FUN_segment_0__8072fee0();
  if (iVar2 != 0) {
    if (param_4 == 1) {
      uVar1 = FUN_segment_0__80430550(param_3);
      uVar1 = FUN_segment_0__8049803c(0x30,uVar1);
    }
    else {
      uVar1 = FUN_segment_0__80430550(param_3);
      uVar1 = FUN_segment_0__8049803c(0x3e,uVar1);
    }
  }
  uVar3 = FUN_segment_0__8042ff2c(uRam00000000,param_2,uVar1,0);
  if (uVar3 != 0) {
    if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0,0x3c,0);
    }
    *(uint *)(param_1 + 4) = uVar3;
    FUN_segment_0__8044b518(param_1 + 4,uVar1,0,0);
    uVar4 = 1;
  }
  return uVar4;
}

// === EGG_Sound_validate_8073f4d8 (0x8073f4d8) ===
undefined4 EGG_Sound_validate_8073f4d8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_28 [6];
  
  uVar3 = 0;
  local_28[0] = uRam00000000;
  local_28[1] = uRam00000004;
  local_28[2] = uRam00000008;
  local_28[3] = uRam0000000c;
  uVar1 = FUN_segment_0__8049803c(0x4b,local_28[param_2 & 0xff]);
  uVar2 = FUN_segment_0__8042fd60(uRam00000000,8,uVar1,0);
  if (uVar2 != 0) {
    if ((uVar2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(0,0x3c,0);
    }
    *(uint *)(param_1 + 4) = uVar2;
    FUN_segment_0__8044b518(param_1 + 4,uVar1,0,0);
    uVar3 = 1;
  }
  return uVar3;
}

// === EGG_Sound_validate_8073f5cc (0x8073f5cc) ===
int EGG_Sound_validate_8073f5cc(int param_1,int param_2)

{
  if ((param_1 != 0) && (0 < param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430();
  }
  return param_1;
}

// === EGG_Sound_assertFail_8073f60c (0x8073f60c) ===
void EGG_Sound_assertFail_8073f60c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8073f944 (0x8073f944) ===
void EGG_Sound_validate_8073f944(int param_1,undefined param_2)

{
  uint uVar1;
  undefined auStack_20 [16];
  
  uVar1 = FUN_segment_0__8042ff2c(uRam00000000,param_2,0x5a,0);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(auStack_20,0,0x10);
  }
  if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0,0x3c,0);
  }
  *(uint *)(param_1 + 4) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430(param_1 + 4);
}

// === EGG_Sound_assertFail_8073fc40 (0x8073fc40) ===
void EGG_Sound_assertFail_8073fc40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_segment_0__80443430();
}

// === EGG_Sound_validate_8073fd94 (0x8073fd94) ===
undefined4 EGG_Sound_validate_8073fd94(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_segment_0__8044b784(0x7a,param_1 + 4);
  if (iVar1 != 0) {
    FUN_segment_0__8044be08(param_2,0x7a,param_1 + 4,0);
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(param_1 + 4,0x80);
  }
  return 0;
}

// === EGG_Sound_validate_8073fe6c (0x8073fe6c) ===
undefined4 * EGG_Sound_validate_8073fe6c(undefined4 *param_1,undefined4 param_2)

{
  FUN_segment_0__806ff578(param_1,param_2,0);
  *param_1 = 0;
  if (iRam00000000 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(0x28);
  }
  iRam00000000 = iRam00000000 + 1;
  return param_1;
}

// === EGG_Sound_validate_8073ff34 (0x8073ff34) ===
/* WARNING: Removing unreachable block (ram,0x8073ff88) */

undefined4 * EGG_Sound_validate_8073ff34(undefined4 *param_1,int param_2)

{
  if (param_1 != (void *)0) {
    *param_1 = 0;
    iRam00000000 = iRam00000000 + -1;
    if (iRam00000000 == 0) {
      iRam00000000 = 0;
    }
    if (0 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_segment_0__80443430(param_1);
    }
  }
  return param_1;
}

// === EGG_Sound_validate_8073ffd4 (0x8073ffd4) ===
void EGG_Sound_validate_8073ffd4(int *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(iRam00000000 + 0x25) == '\x01') {
    uVar1 = (**(code **)(*param_1 + 0x34))();
                    /* WARNING: Subroutine does not return */
    FUN_segment_0__80443430(uVar1,0);
  }
  FUN_segment_0__80700278();
  return;
}
