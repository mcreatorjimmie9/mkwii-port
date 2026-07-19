// PlayerSub18 implementation — 1 functions
#include "PlayerSub18.hpp"

// Address: 0x80574a64 — PlayerSub18_checkItemCollision (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 1560 bytes
/**
 * PlayerSub18_checkItemCollision
 * @addr 0x80574a64
 * @size 1560 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
void PlayerSub18_checkItemCollision(void) {
    /* r0 = r3+0x8 */
    /* r3 = r3+0xc */
    /* clrlwi. r0, r0, 0x1f */
    /* rlwinm r28, r3, 0xa, 0x1f, 0x1f */
    /* if (cr0 ==) goto 0x80574a80 */
    /* f31 = *(f32*)(r31+0x2c) */
    /* goto 0x80574a84 */
    /* f31 = *(f32*)(r31+0x34) */
    /* addi r3, r30, 4 */
    /* 0x805903f0() */
    /* r31 = r3 */
    /* addi r3, r30, 4 */
    /* 0x80590410() */
    /* fmr f1, f31 */
    /* cntlzw r0, r28 */
    /* fmr f2, f30 */
    /* r5 = r31+0x8 */
    /* r4 = r3 */
    /* r3 = r30 */
    /* r6 = r29 */
    /* srwi r7, r0, 5 */
    /* 0x805b2bf8() */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80574a64: 80 03 00 08              lwz      r0, 8(r3) */
/* 0x80574a68: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80574a6c: 54 00 07 ff              clrlwi.  r0, r0, 0x1f */
/* 0x80574a70: 54 7c 57 fe              rlwinm   r28, r3, 0xa, 0x1f, 0x1f */
/* 0x80574a74: 41 82 00 0c              beq      0x80574a80 */
/* 0x80574a78: c3 ff 00 2c              lfs      f31, 0x2c(r31) */
/* 0x80574a7c: 48 00 00 08              b        0x80574a84 */
/* 0x80574a80: c3 ff 00 34              lfs      f31, 0x34(r31) */
/* 0x80574a84: 38 7e 00 04              addi     r3, r30, 4 */
/* 0x80574a88: 48 01 b9 69              bl       0x805903f0 */
/* 0x80574a8c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80574a90: 38 7e 00 04              addi     r3, r30, 4 */
/* 0x80574a94: 48 01 b9 7d              bl       0x80590410 */
/* 0x80574a98: fc 20 f8 90              fmr      f1, f31 */
/* 0x80574a9c: 7f 80 00 34              cntlzw   r0, r28 */
/* 0x80574aa0: fc 40 f0 90              fmr      f2, f30 */
/* 0x80574aa4: 80 bf 00 08              lwz      r5, 8(r31) */
/* 0x80574aa8: 7c 64 1b 78              mr       r4, r3 */
/* 0x80574aac: 7f c3 f3 78              mr       r3, r30 */
/* 0x80574ab0: 7f a6 eb 78              mr       r6, r29 */
/* 0x80574ab4: 54 07 d9 7e              srwi     r7, r0, 5 */
/* 0x80574ab8: 48 03 e1 41              bl       0x805b2bf8 */
#endif


/* === DISASSEMBLY === */


  0x80574a64:  lwz      r0, 8(r3)
  0x80574a68:  lwz      r3, 0xc(r3)
  0x80574a6c:  clrlwi.  r0, r0, 0x1f
  0x80574a70:  rlwinm   r28, r3, 0xa, 0x1f, 0x1f
  0x80574a74:  beq      0x80574a80
  0x80574a78:  lfs      f31, 0x2c(r31)
  0x80574a7c:  b        0x80574a84
  0x80574a80:  lfs      f31, 0x34(r31)
  0x80574a84:  addi     r3, r30, 4
  0x80574a88:  bl       0x805903f0
  0x80574a8c:  mr       r31, r3
  0x80574a90:  addi     r3, r30, 4
  0x80574a94:  bl       0x80590410
  0x80574a98:  fmr      f1, f31
  0x80574a9c:  cntlzw   r0, r28
  0x80574aa0:  fmr      f2, f30
  0x80574aa4:  lwz      r5, 8(r31)
  0x80574aa8:  mr       r4, r3
  0x80574aac:  mr       r3, r30
  0x80574ab0:  mr       r6, r29
  0x80574ab4:  srwi     r7, r0, 5
  0x80574ab8:  bl       0x805b2bf8
