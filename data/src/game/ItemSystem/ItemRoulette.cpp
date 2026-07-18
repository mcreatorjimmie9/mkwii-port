// ItemRoulette implementation — 1 functions
#include "ItemRoulette.hpp"

// Address: 0x807bc864 — ItemRoulette_update (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 496 bytes
/**
 * ItemRoulette_update
 * @addr 0x807bc864
 * @size 496 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void ItemRoulette_update(void) {
    /* r8 = r5+0x4 */
    /* r4 = r30 */
    /* r0 = r5+0x8 */
    /* r6 = r27 */
    /* r1+0x20 = r8 */
    /* r7 = r31 */
    /* addi r5, r1, 0x1c */
    /* r1+0x24 = r0 */
    /* 0x807bb060() */
    /* goto 0x807bc920 */
    /* r5, 0  (load upper immediate) */
    /* r4 = r5+0x0 */
    /* r1+0x10 = r4 */
    /* li r27, 0 */
    /* r3 = r5+0x4 */
    /* li r28, 1 */
    /* r0 = r5+0x8 */
    /* r1+0x14 = r3 */
    /* r1+0x18 = r0 */
    /* goto 0x807bc8f8 */
    /* r0 = r29+0x8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x807bc8d4 */
    /* r0 = stack[0x8] */
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */
    /* if (cr0 ==) goto 0x807bc8d4 */
    /* li r27, 1 */
    /* goto 0x807bc8f8 */
    /* r0 = stack[0x8] */
    /* cmpwi r31, 0 */
    /* clrlwi r0, r0, 0x1b */
    /* slw r3, r28, r0 */
    /* if (cr0 ==) goto 0x807bc8f4 */
    /* r0 = r31+0x0 */
    /* r31+0x0 = r0 */
    /* li r27, 1 */
    /* r3 = r30 */
    /* addi r4, r1, 0xc */
    /* addi r6, r1, 8 */
    /* addi r12, r1, 0x10 */
    /* li r5, 0 */
    /* 0x80555bf8() */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x807bc8b4 */
    /* r3 = r27 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807bc864: 81 05 00 04              lwz      r8, 4(r5) */
/* 0x807bc868: 7f c4 f3 78              mr       r4, r30 */
/* 0x807bc86c: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x807bc870: 7f 66 db 78              mr       r6, r27 */
/* 0x807bc874: 91 01 00 20              stw      r8, 0x20(r1) */
/* 0x807bc878: 7f e7 fb 78              mr       r7, r31 */
/* 0x807bc87c: 38 a1 00 1c              addi     r5, r1, 0x1c */
/* 0x807bc880: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807bc884: 4b ff e7 dd              bl       0x807bb060 */
/* 0x807bc888: 48 00 00 98              b        0x807bc920 */
/* 0x807bc88c: 3c a0 00 00              lis      r5, 0 */
/* 0x807bc890: 84 85 00 00              lwzu     r4, 0(r5) */
/* 0x807bc894: 90 81 00 10              stw      r4, 0x10(r1) */
/* 0x807bc898: 3b 60 00 00              li       r27, 0 */
/* 0x807bc89c: 80 65 00 04              lwz      r3, 4(r5) */
/* 0x807bc8a0: 3b 80 00 01              li       r28, 1 */
/* 0x807bc8a4: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x807bc8a8: 90 61 00 14              stw      r3, 0x14(r1) */
/* 0x807bc8ac: 90 01 00 18              stw      r0, 0x18(r1) */
/* 0x807bc8b0: 48 00 00 48              b        0x807bc8f8 */
/* 0x807bc8b4: 80 1d 00 08              lwz      r0, 8(r29) */
/* 0x807bc8b8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807bc8bc: 41 82 00 18              beq      0x807bc8d4 */
/* 0x807bc8c0: a0 01 00 08              lhz      r0, 8(r1) */
/* 0x807bc8c4: 54 00 04 21              rlwinm.  r0, r0, 0, 0x10, 0x10 */
/* 0x807bc8c8: 41 82 00 0c              beq      0x807bc8d4 */
/* 0x807bc8cc: 3b 60 00 01              li       r27, 1 */
/* 0x807bc8d0: 48 00 00 28              b        0x807bc8f8 */
/* 0x807bc8d4: a0 01 00 08              lhz      r0, 8(r1) */
/* 0x807bc8d8: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807bc8dc: 54 00 06 fe              clrlwi   r0, r0, 0x1b */
/* 0x807bc8e0: 7f 83 00 30              slw      r3, r28, r0 */
/* 0x807bc8e4: 41 82 00 10              beq      0x807bc8f4 */
/* 0x807bc8e8: 80 1f 00 00              lwz      r0, 0(r31) */
/* 0x807bc8ec: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x807bc8f0: 90 1f 00 00              stw      r0, 0(r31) */
/* 0x807bc8f4: 3b 60 00 01              li       r27, 1 */
/* 0x807bc8f8: 7f c3 f3 78              mr       r3, r30 */
/* 0x807bc8fc: 38 81 00 0c              addi     r4, r1, 0xc */
/* 0x807bc900: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bc904: 39 81 00 10              addi     r12, r1, 0x10 */
/* 0x807bc908: 38 a0 00 00              li       r5, 0 */
/* 0x807bc90c: 4b d9 92 ed              bl       0x80555bf8 */
/* 0x807bc910: 60 00 00 00              nop       */
/* 0x807bc914: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807bc918: 40 82 ff 9c              bne      0x807bc8b4 */
/* 0x807bc91c: 7f 63 db 78              mr       r3, r27 */
#endif


/* === DISASSEMBLY === */

; Function: ItemRoulette_update
; Demangled: ItemRoulette_update
; Address: 0x807bc864  (.text+0x2a9fc8)
; Size: 496 bytes

  0x807bc864:  lwz      r8, 4(r5)
  0x807bc868:  mr       r4, r30
  0x807bc86c:  lwz      r0, 8(r5)
  0x807bc870:  mr       r6, r27
  0x807bc874:  stw      r8, 0x20(r1)
  0x807bc878:  mr       r7, r31
  0x807bc87c:  addi     r5, r1, 0x1c
  0x807bc880:  stw      r0, 0x24(r1)
  0x807bc884:  bl       0x807bb060
  0x807bc888:  b        0x807bc920
  0x807bc88c:  lis      r5, 0
  0x807bc890:  lwzu     r4, 0(r5)
  0x807bc894:  stw      r4, 0x10(r1)
  0x807bc898:  li       r27, 0
  0x807bc89c:  lwz      r3, 4(r5)
  0x807bc8a0:  li       r28, 1
  0x807bc8a4:  lwz      r0, 8(r5)
  0x807bc8a8:  stw      r3, 0x14(r1)
  0x807bc8ac:  stw      r0, 0x18(r1)
  0x807bc8b0:  b        0x807bc8f8
  0x807bc8b4:  lwz      r0, 8(r29)
  0x807bc8b8:  cmpwi    r0, 0
  0x807bc8bc:  beq      0x807bc8d4
  0x807bc8c0:  lhz      r0, 8(r1)
  0x807bc8c4:  rlwinm.  r0, r0, 0, 0x10, 0x10
  0x807bc8c8:  beq      0x807bc8d4
  0x807bc8cc:  li       r27, 1
  0x807bc8d0:  b        0x807bc8f8
  0x807bc8d4:  lhz      r0, 8(r1)
  0x807bc8d8:  cmpwi    r31, 0
  0x807bc8dc:  clrlwi   r0, r0, 0x1b
  0x807bc8e0:  slw      r3, r28, r0
  0x807bc8e4:  beq      0x807bc8f4
  0x807bc8e8:  lwz      r0, 0(r31)
  0x807bc8ec:  or       r0, r0, r3
  0x807bc8f0:  stw      r0, 0(r31)
  0x807bc8f4:  li       r27, 1
  0x807bc8f8:  mr       r3, r30
  0x807bc8fc:  addi     r4, r1, 0xc
  0x807bc900:  addi     r6, r1, 8
  0x807bc904:  addi     r12, r1, 0x10
  0x807bc908:  li       r5, 0
  0x807bc90c:  bl       0x80555bf8
  0x807bc910:  nop      
  0x807bc914:  cmpwi    r3, 0
  0x807bc918:  bne      0x807bc8b4
  0x807bc91c:  mr       r3, r27
