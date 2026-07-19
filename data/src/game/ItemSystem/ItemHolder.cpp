// ItemHolder implementation — 8 functions
#include "ItemHolder.hpp"

// Address: 0x8079b7c0 — ItemHolder_construct (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 516 bytes
/**
 * ItemHolder_construct
 * @addr 0x8079b7c0
 * @size 516 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
void ItemHolder_construct(void) {
    /* r4 = r3+0xa4 */
    /* *(f32*)(r3+0x60) = f3 */
    /* f1 = *(f32*)(r31+0x0) */
    /* *(f32*)(r3+0x5c) = f3 */
    /* add r5, r5, r0 */
    /* f0 = *(f32*)(r31+0x4) */
    /* f2 = *(f32*)(r6+0x40) */
    /* f4 = *(f32*)(r6+0x38) */
    /* fmuls f2, f3, f2 */
    /* fmuls f3, f3, f4 */
    /* *(f32*)(r3+0xb8) = f2 */
    /* *(f32*)(r3+0xb4) = f3 */
    /* f3 = *(f32*)(r5+0x34) */
    /* fmuls f2, f2, f3 */
    /* *(f32*)(r4+0x4) = f2 */
    /* *(f32*)(r3+0xc8) = f1 */
    /* *(f32*)(r3+0xcc) = f0 */
    /* *(f32*)(r3+0xd0) = f1 */
    /* addi r3, r3, 0xd4 */
    /* 0x807b5884() */
    /* f1 = *(f32*)(r31+0x0) */
    /* li r0, 0 */
    /* f0 = *(f32*)(r31+0xc) */
    /* r3, 0  (load upper immediate) */
    /* *(f32*)(r30+0xe0) = f1 */
    /* r4 = r30+0x6c */
    /* *(f32*)(r30+0xdc) = f1 */
    /* *(f32*)(r30+0xd8) = f1 */
    /* *(f32*)(r30+0xec) = f1 */
    /* *(f32*)(r30+0xe8) = f1 */
    /* *(f32*)(r30+0xe4) = f1 */
    /* *(f32*)(r30+0x128) = f0 */
    /* *(f32*)(r30+0x124) = f0 */
    /* *(f32*)(r30+0x120) = f0 */
    /* *(f32*)(r30+0x12c) = f1 */
    /* r30+0x138 = r0 */
    /* r3 = r3+0x0 */
    /* 0x80590144() */
    /* addi r4, r1, 0x20 */
    /* 0x80590cd8() */
    /* f0 = *(f32*)(r1+0x20) */
    /* li r3, 1 */
    /* *(f32*)(r30+0x38) = f0 */
    /* r0 = r30+0x4 */
    /* f0 = *(f32*)(r1+0x24) */
    /* *(f32*)(r30+0x3c) = f0 */
    /* slw r0, r3, r0 */
    /* andi. r0, r0, 0x23 */
    /* f1 = *(f32*)(r31+0x0) */
    /* f2 = *(f32*)(r1+0x28) */
    /* f0 = *(f32*)(r31+0x4) */
    /* *(f32*)(r30+0x40) = f2 */
    /* *(f32*)(r30+0x2c) = f1 */
    /* *(f32*)(r30+0x30) = f0 */
    /* *(f32*)(r30+0x34) = f1 */
    /* if (cr0 !=) goto 0x8079b8bc */
    /* f2 = *(f32*)(r31+0x10) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079b7c0: 80 83 00 a4              lwz      r4, 0xa4(r3) */
/* 0x8079b7c4: d0 63 00 60              stfs     f3, 0x60(r3) */
/* 0x8079b7c8: c0 3f 00 00              lfs      f1, 0(r31) */
/* 0x8079b7cc: d0 63 00 5c              stfs     f3, 0x5c(r3) */
/* 0x8079b7d0: 7c a5 02 14              add      r5, r5, r0 */
/* 0x8079b7d4: c0 1f 00 04              lfs      f0, 4(r31) */
/* 0x8079b7d8: c0 46 00 40              lfs      f2, 0x40(r6) */
/* 0x8079b7dc: c0 86 00 38              lfs      f4, 0x38(r6) */
/* 0x8079b7e0: ec 43 00 b2              fmuls    f2, f3, f2 */
/* 0x8079b7e4: ec 63 01 32              fmuls    f3, f3, f4 */
/* 0x8079b7e8: d0 43 00 b8              stfs     f2, 0xb8(r3) */
/* 0x8079b7ec: d0 63 00 b4              stfs     f3, 0xb4(r3) */
/* 0x8079b7f0: c0 65 00 34              lfs      f3, 0x34(r5) */
/* 0x8079b7f4: ec 42 00 f2              fmuls    f2, f2, f3 */
/* 0x8079b7f8: d0 44 00 04              stfs     f2, 4(r4) */
/* 0x8079b7fc: d0 23 00 c8              stfs     f1, 0xc8(r3) */
/* 0x8079b800: d0 03 00 cc              stfs     f0, 0xcc(r3) */
/* 0x8079b804: d0 23 00 d0              stfs     f1, 0xd0(r3) */
/* 0x8079b808: 38 63 00 d4              addi     r3, r3, 0xd4 */
/* 0x8079b80c: 48 01 a0 79              bl       0x807b5884 */
/* 0x8079b810: c0 3f 00 00              lfs      f1, 0(r31) */
/* 0x8079b814: 38 00 00 00              li       r0, 0 */
/* 0x8079b818: c0 1f 00 0c              lfs      f0, 0xc(r31) */
/* 0x8079b81c: 3c 60 00 00              lis      r3, 0 */
/* 0x8079b820: d0 3e 00 e0              stfs     f1, 0xe0(r30) */
/* 0x8079b824: 88 9e 00 6c              lbz      r4, 0x6c(r30) */
/* 0x8079b828: d0 3e 00 dc              stfs     f1, 0xdc(r30) */
/* 0x8079b82c: d0 3e 00 d8              stfs     f1, 0xd8(r30) */
/* 0x8079b830: d0 3e 00 ec              stfs     f1, 0xec(r30) */
/* 0x8079b834: d0 3e 00 e8              stfs     f1, 0xe8(r30) */
/* 0x8079b838: d0 3e 00 e4              stfs     f1, 0xe4(r30) */
/* 0x8079b83c: d0 1e 01 28              stfs     f0, 0x128(r30) */
/* 0x8079b840: d0 1e 01 24              stfs     f0, 0x124(r30) */
/* 0x8079b844: d0 1e 01 20              stfs     f0, 0x120(r30) */
/* 0x8079b848: d0 3e 01 2c              stfs     f1, 0x12c(r30) */
/* 0x8079b84c: 90 1e 01 38              stw      r0, 0x138(r30) */
/* 0x8079b850: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079b854: 4b df 48 f1              bl       0x80590144 */
/* 0x8079b858: 38 81 00 20              addi     r4, r1, 0x20 */
/* 0x8079b85c: 4b df 54 7d              bl       0x80590cd8 */
/* 0x8079b860: c0 01 00 20              lfs      f0, 0x20(r1) */
/* 0x8079b864: 38 60 00 01              li       r3, 1 */
/* 0x8079b868: d0 1e 00 38              stfs     f0, 0x38(r30) */
/* 0x8079b86c: 80 1e 00 04              lwz      r0, 4(r30) */
/* 0x8079b870: c0 01 00 24              lfs      f0, 0x24(r1) */
/* 0x8079b874: d0 1e 00 3c              stfs     f0, 0x3c(r30) */
/* 0x8079b878: 7c 60 00 30              slw      r0, r3, r0 */
/* 0x8079b87c: 70 00 00 23              andi.    r0, r0, 0x23 */
/* 0x8079b880: c0 3f 00 00              lfs      f1, 0(r31) */
/* 0x8079b884: c0 41 00 28              lfs      f2, 0x28(r1) */
/* 0x8079b888: c0 1f 00 04              lfs      f0, 4(r31) */
/* 0x8079b88c: d0 5e 00 40              stfs     f2, 0x40(r30) */
/* 0x8079b890: d0 3e 00 2c              stfs     f1, 0x2c(r30) */
/* 0x8079b894: d0 1e 00 30              stfs     f0, 0x30(r30) */
/* 0x8079b898: d0 3e 00 34              stfs     f1, 0x34(r30) */
/* 0x8079b89c: 40 82 00 20              bne      0x8079b8bc */
/* 0x8079b8a0: c0 5f 00 10              lfs      f2, 0x10(r31) */
#endif


/* === DISASSEMBLY === */


//   0x8079b7c0:  lwz      r4, 0xa4(r3)
//   0x8079b7c4:  stfs     f3, 0x60(r3)
//   0x8079b7c8:  lfs      f1, 0(r31)
//   0x8079b7cc:  stfs     f3, 0x5c(r3)
//   0x8079b7d0:  add      r5, r5, r0
//   0x8079b7d4:  lfs      f0, 4(r31)
//   0x8079b7d8:  lfs      f2, 0x40(r6)
//   0x8079b7dc:  lfs      f4, 0x38(r6)
//   0x8079b7e0:  fmuls    f2, f3, f2
//   0x8079b7e4:  fmuls    f3, f3, f4
//   0x8079b7e8:  stfs     f2, 0xb8(r3)
//   0x8079b7ec:  stfs     f3, 0xb4(r3)
//   0x8079b7f0:  lfs      f3, 0x34(r5)
//   0x8079b7f4:  fmuls    f2, f2, f3
//   0x8079b7f8:  stfs     f2, 4(r4)
//   0x8079b7fc:  stfs     f1, 0xc8(r3)
//   0x8079b800:  stfs     f0, 0xcc(r3)
//   0x8079b804:  stfs     f1, 0xd0(r3)
//   0x8079b808:  addi     r3, r3, 0xd4
//   0x8079b80c:  bl       0x807b5884
//   0x8079b810:  lfs      f1, 0(r31)
//   0x8079b814:  li       r0, 0
//   0x8079b818:  lfs      f0, 0xc(r31)
//   0x8079b81c:  lis      r3, 0
//   0x8079b820:  stfs     f1, 0xe0(r30)
//   0x8079b824:  lbz      r4, 0x6c(r30)
//   0x8079b828:  stfs     f1, 0xdc(r30)
//   0x8079b82c:  stfs     f1, 0xd8(r30)
//   0x8079b830:  stfs     f1, 0xec(r30)
//   0x8079b834:  stfs     f1, 0xe8(r30)
//   0x8079b838:  stfs     f1, 0xe4(r30)
//   0x8079b83c:  stfs     f0, 0x128(r30)
//   0x8079b840:  stfs     f0, 0x124(r30)
//   0x8079b844:  stfs     f0, 0x120(r30)
//   0x8079b848:  stfs     f1, 0x12c(r30)
//   0x8079b84c:  stw      r0, 0x138(r30)
//   0x8079b850:  lwz      r3, 0(r3)
//   0x8079b854:  bl       0x80590144
//   0x8079b858:  addi     r4, r1, 0x20
//   0x8079b85c:  bl       0x80590cd8
//   0x8079b860:  lfs      f0, 0x20(r1)
//   0x8079b864:  li       r3, 1
//   0x8079b868:  stfs     f0, 0x38(r30)
//   0x8079b86c:  lwz      r0, 4(r30)
//   0x8079b870:  lfs      f0, 0x24(r1)
//   0x8079b874:  stfs     f0, 0x3c(r30)
//   0x8079b878:  slw      r0, r3, r0
//   0x8079b87c:  andi.    r0, r0, 0x23
//   0x8079b880:  lfs      f1, 0(r31)
//   0x8079b884:  lfs      f2, 0x28(r1)
//   0x8079b888:  lfs      f0, 4(r31)
//   0x8079b88c:  stfs     f2, 0x40(r30)
//   0x8079b890:  stfs     f1, 0x2c(r30)
//   0x8079b894:  stfs     f0, 0x30(r30)
//   0x8079b898:  stfs     f1, 0x34(r30)
//   0x8079b89c:  bne      0x8079b8bc
//   0x8079b8a0:  lfs      f2, 0x10(r31)

// Address: 0x8079c194 — ItemHolder_checkPlayerCollision (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 420 bytes
/**
 * ItemHolder_checkPlayerCollision
 * @addr 0x8079c194
 * @size 420 bytes
 * @frame 16 bytes
 * @calls 2 function(s)
 */
void ItemHolder_checkPlayerCollision(void) {
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c1b0 */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c1b0 */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c1c0 */
    /* r3 = r3+0x0 */
    /* goto 0x8079c1c4 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* r0 = r29+0xa8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c218 */
    /* add r3, r0, r31 */
    /* li r0, 1 */
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c1fc */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c1fc */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c20c */
    /* r3 = r3+0x0 */
    /* goto 0x8079c210 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* addi r30, r30, 1 */
    /* addi r31, r31, 4 */
    /* cmpwi r30, 2 */
    /* if (cr0 <) goto 0x8079c180 */
    /* r0 = stack[0x24] */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079c194: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c198: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c19c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c1a0: 41 82 00 10              beq      0x8079c1b0 */
/* 0x8079c1a4: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c1a8: 41 82 00 08              beq      0x8079c1b0 */
/* 0x8079c1ac: 38 00 00 00              li       r0, 0 */
/* 0x8079c1b0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c1b4: 41 82 00 0c              beq      0x8079c1c0 */
/* 0x8079c1b8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c1bc: 48 00 00 08              b        0x8079c1c4 */
/* 0x8079c1c0: 38 60 00 00              li       r3, 0 */
/* 0x8079c1c4: 38 80 00 02              li       r4, 2 */
/* 0x8079c1c8: 4b db 9a 31              bl       0x80555bf8 */
/* 0x8079c1cc: 80 1d 00 a8              lwz      r0, 0xa8(r29) */
/* 0x8079c1d0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c1d4: 41 82 00 44              beq      0x8079c218 */
/* 0x8079c1d8: 7c 60 fa 14              add      r3, r0, r31 */
/* 0x8079c1dc: 38 00 00 01              li       r0, 1 */
/* 0x8079c1e0: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c1e4: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c1e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c1ec: 41 82 00 10              beq      0x8079c1fc */
/* 0x8079c1f0: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c1f4: 41 82 00 08              beq      0x8079c1fc */
/* 0x8079c1f8: 38 00 00 00              li       r0, 0 */
/* 0x8079c1fc: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c200: 41 82 00 0c              beq      0x8079c20c */
/* 0x8079c204: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c208: 48 00 00 08              b        0x8079c210 */
/* 0x8079c20c: 38 60 00 00              li       r3, 0 */
/* 0x8079c210: 38 80 00 02              li       r4, 2 */
/* 0x8079c214: 4b db 99 e5              bl       0x80555bf8 */
/* 0x8079c218: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8079c21c: 3b ff 00 04              addi     r31, r31, 4 */
/* 0x8079c220: 2c 1e 00 02              cmpwi    r30, 2 */
/* 0x8079c224: 41 80 ff 5c              blt      0x8079c180 */
/* 0x8079c228: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8079c22c: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x8079c230: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x8079c234: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x8079c238: 7c 08 03 a6              mtlr     r0 */
/* 0x8079c23c: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8079c240: 4e 80 00 20              blr       */
/* 0x8079c244: 80 e3 00 a8              lwz      r7, 0xa8(r3) */
/* 0x8079c248: 3c c0 00 00              lis      r6, 0 */
/* 0x8079c24c: 80 03 00 78              lwz      r0, 0x78(r3) */
/* 0x8079c250: 3c a0 00 00              lis      r5, 0 */
/* 0x8079c254: c0 26 00 00              lfs      f1, 0(r6) */
/* 0x8079c258: 2c 07 00 00              cmpwi    r7, 0 */
/* 0x8079c25c: c0 84 00 00              lfs      f4, 0(r4) */
/* 0x8079c260: 64 00 02 00              oris     r0, r0, 0x200 */
/* 0x8079c264: c0 64 00 04              lfs      f3, 4(r4) */
/* 0x8079c268: c0 44 00 08              lfs      f2, 8(r4) */
/* 0x8079c26c: c0 05 00 00              lfs      f0, 0(r5) */
/* 0x8079c270: d0 83 00 bc              stfs     f4, 0xbc(r3) */
/* 0x8079c274: d0 63 00 c0              stfs     f3, 0xc0(r3) */
/* 0x8079c278: d0 43 00 c4              stfs     f2, 0xc4(r3) */
/* 0x8079c27c: d0 23 00 c8              stfs     f1, 0xc8(r3) */
/* 0x8079c280: d0 03 00 cc              stfs     f0, 0xcc(r3) */
/* 0x8079c284: d0 23 00 d0              stfs     f1, 0xd0(r3) */
/* 0x8079c288: 90 03 00 78              stw      r0, 0x78(r3) */
/* 0x8079c28c: 4d 82 00 20              beqlr     */
/* 0x8079c290: 81 87 00 00              lwz      r12, 0(r7) */
/* 0x8079c294: 54 00 03 de              rlwinm   r0, r0, 0, 0xf, 0xf */
/* 0x8079c298: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x8079c29c: 7c e3 3b 78              mr       r3, r7 */
/* 0x8079c2a0: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079c2a4: 54 04 d9 7e              srwi     r4, r0, 5 */
/* 0x8079c2a8: 7d 89 03 a6              mtctr    r12 */
/* 0x8079c2ac: 4e 80 04 20              bctr      */
/* 0x8079c2b0: 4e 80 00 20              blr       */
/* 0x8079c2b4: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079c2b8: 7c 08 02 a6              mflr     r0 */
/* 0x8079c2bc: 3c c0 00 00              lis      r6, 0 */
/* 0x8079c2c0: 39 20 00 00              li       r9, 0 */
/* 0x8079c2c4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079c2c8: 38 c6 00 00              addi     r6, r6, 0 */
/* 0x8079c2cc: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079c2d0: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079c2d4: c0 43 00 44              lfs      f2, 0x44(r3) */
/* 0x8079c2d8: c0 23 00 48              lfs      f1, 0x48(r3) */
/* 0x8079c2dc: c0 03 00 4c              lfs      f0, 0x4c(r3) */
/* 0x8079c2e0: d0 43 00 bc              stfs     f2, 0xbc(r3) */
/* 0x8079c2e4: 80 a3 00 74              lwz      r5, 0x74(r3) */
/* 0x8079c2e8: 91 23 01 64              stw      r9, 0x164(r3) */
/* 0x8079c2ec: 60 a8 00 40              ori      r8, r5, 0x40 */
/* 0x8079c2f0: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079c2f4: d0 23 00 c0              stfs     f1, 0xc0(r3) */
/* 0x8079c2f8: 1c a0 00 74              mulli    r5, r0, 0x74 */
/* 0x8079c2fc: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079c300: d0 03 00 c4              stfs     f0, 0xc4(r3) */
/* 0x8079c304: c0 43 00 68              lfs      f2, 0x68(r3) */
/* 0x8079c308: c0 04 00 88              lfs      f0, 0x88(r4) */
/* 0x8079c30c: 7c e6 2a 14              add      r7, r6, r5 */
/* 0x8079c310: d0 03 00 50              stfs     f0, 0x50(r3) */
/* 0x8079c314: 1c 00 00 74              mulli    r0, r0, 0x74 */
/* 0x8079c318: 80 a3 00 a4              lwz      r5, 0xa4(r3) */
/* 0x8079c31c: c0 04 00 8c              lfs      f0, 0x8c(r4) */
/* 0x8079c320: d0 03 00 54              stfs     f0, 0x54(r3) */
/* 0x8079c324: 7c c6 02 14              add      r6, r6, r0 */
/* 0x8079c328: c0 04 00 90              lfs      f0, 0x90(r4) */
/* 0x8079c32c: d0 03 00 58              stfs     f0, 0x58(r3) */
/* 0x8079c330: 91 03 00 74              stw      r8, 0x74(r3) */
#endif


/* === DISASSEMBLY === */


//   0x8079c194:  lwz      r3, 0x14(r3)
//   0x8079c198:  lwz      r4, 4(r3)
//   0x8079c19c:  cmpwi    r4, 0
//   0x8079c1a0:  beq      0x8079c1b0
//   0x8079c1a4:  cmpwi    r4, 1
//   0x8079c1a8:  beq      0x8079c1b0
//   0x8079c1ac:  li       r0, 0
//   0x8079c1b0:  cmpwi    r0, 0
//   0x8079c1b4:  beq      0x8079c1c0
//   0x8079c1b8:  lwz      r3, 0(r3)
//   0x8079c1bc:  b        0x8079c1c4
//   0x8079c1c0:  li       r3, 0
//   0x8079c1c4:  li       r4, 2
//   0x8079c1c8:  bl       0x80555bf8
//   0x8079c1cc:  lwz      r0, 0xa8(r29)
//   0x8079c1d0:  cmpwi    r0, 0
//   0x8079c1d4:  beq      0x8079c218
//   0x8079c1d8:  add      r3, r0, r31
//   0x8079c1dc:  li       r0, 1
//   0x8079c1e0:  lwz      r3, 0x14(r3)
//   0x8079c1e4:  lwz      r4, 4(r3)
//   0x8079c1e8:  cmpwi    r4, 0
//   0x8079c1ec:  beq      0x8079c1fc
//   0x8079c1f0:  cmpwi    r4, 1
//   0x8079c1f4:  beq      0x8079c1fc
//   0x8079c1f8:  li       r0, 0
//   0x8079c1fc:  cmpwi    r0, 0
//   0x8079c200:  beq      0x8079c20c
//   0x8079c204:  lwz      r3, 0(r3)
//   0x8079c208:  b        0x8079c210
//   0x8079c20c:  li       r3, 0
//   0x8079c210:  li       r4, 2
//   0x8079c214:  bl       0x80555bf8
//   0x8079c218:  addi     r30, r30, 1
//   0x8079c21c:  addi     r31, r31, 4
//   0x8079c220:  cmpwi    r30, 2
//   0x8079c224:  blt      0x8079c180
//   0x8079c228:  lwz      r0, 0x24(r1)
//   0x8079c22c:  lwz      r31, 0x1c(r1)
//   0x8079c230:  lwz      r30, 0x18(r1)
//   0x8079c234:  lwz      r29, 0x14(r1)
//   0x8079c238:  mtlr     r0
//   0x8079c23c:  addi     r1, r1, 0x20
//   0x8079c240:  blr      
//   0x8079c244:  lwz      r7, 0xa8(r3)
//   0x8079c248:  lis      r6, 0
//   0x8079c24c:  lwz      r0, 0x78(r3)
//   0x8079c250:  lis      r5, 0
//   0x8079c254:  lfs      f1, 0(r6)
//   0x8079c258:  cmpwi    r7, 0
//   0x8079c25c:  lfs      f4, 0(r4)
//   0x8079c260:  oris     r0, r0, 0x200
//   0x8079c264:  lfs      f3, 4(r4)
//   0x8079c268:  lfs      f2, 8(r4)
//   0x8079c26c:  lfs      f0, 0(r5)
//   0x8079c270:  stfs     f4, 0xbc(r3)
//   0x8079c274:  stfs     f3, 0xc0(r3)
//   0x8079c278:  stfs     f2, 0xc4(r3)
//   0x8079c27c:  stfs     f1, 0xc8(r3)
//   0x8079c280:  stfs     f0, 0xcc(r3)
//   0x8079c284:  stfs     f1, 0xd0(r3)
//   0x8079c288:  stw      r0, 0x78(r3)
//   0x8079c28c:  beqlr    
//   0x8079c290:  lwz      r12, 0(r7)
//   0x8079c294:  rlwinm   r0, r0, 0, 0xf, 0xf
//   0x8079c298:  cntlzw   r0, r0
//   0x8079c29c:  mr       r3, r7
//   0x8079c2a0:  lwz      r12, 0xc(r12)
//   0x8079c2a4:  srwi     r4, r0, 5
//   0x8079c2a8:  mtctr    r12
//   0x8079c2ac:  bctr     
//   0x8079c2b0:  blr      
//   0x8079c2b4:  stwu     r1, -0x10(r1)
//   0x8079c2b8:  mflr     r0
//   0x8079c2bc:  lis      r6, 0
//   0x8079c2c0:  li       r9, 0
//   0x8079c2c4:  stw      r0, 0x14(r1)
//   0x8079c2c8:  addi     r6, r6, 0
//   0x8079c2cc:  stw      r31, 0xc(r1)
//   0x8079c2d0:  mr       r31, r3
//   0x8079c2d4:  lfs      f2, 0x44(r3)
//   0x8079c2d8:  lfs      f1, 0x48(r3)
//   0x8079c2dc:  lfs      f0, 0x4c(r3)
//   0x8079c2e0:  stfs     f2, 0xbc(r3)
//   0x8079c2e4:  lwz      r5, 0x74(r3)
//   0x8079c2e8:  stw      r9, 0x164(r3)
//   0x8079c2ec:  ori      r8, r5, 0x40
//   0x8079c2f0:  lwz      r0, 4(r3)
//   0x8079c2f4:  stfs     f1, 0xc0(r3)
//   0x8079c2f8:  mulli    r5, r0, 0x74
//   0x8079c2fc:  lwz      r0, 4(r3)
//   0x8079c300:  stfs     f0, 0xc4(r3)
//   0x8079c304:  lfs      f2, 0x68(r3)
//   0x8079c308:  lfs      f0, 0x88(r4)
//   0x8079c30c:  add      r7, r6, r5
//   0x8079c310:  stfs     f0, 0x50(r3)
//   0x8079c314:  mulli    r0, r0, 0x74
//   0x8079c318:  lwz      r5, 0xa4(r3)
//   0x8079c31c:  lfs      f0, 0x8c(r4)
//   0x8079c320:  stfs     f0, 0x54(r3)
//   0x8079c324:  add      r6, r6, r0
//   0x8079c328:  lfs      f0, 0x90(r4)
//   0x8079c32c:  stfs     f0, 0x58(r3)
//   0x8079c330:  stw      r8, 0x74(r3)

// Address: 0x8079b484 — ItemHolder_destroy (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 412 bytes
/**
 * ItemHolder_destroy
 * @addr 0x8079b484
 * @size 412 bytes
 * @frame 16 bytes
 * @calls 1 function(s)
 */
void ItemHolder_destroy(void) {
    /* 0x8055fe08() */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* r30 = stack[0x8] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079b484: 4b dc 49 85              bl       0x8055fe08 */
/* 0x8079b488: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079b48c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079b490: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x8079b494: 7c 08 03 a6              mtlr     r0 */
/* 0x8079b498: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079b49c: 4e 80 00 20              blr       */
/* 0x8079b4a0: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b4a4: 90 83 00 ac              stw      r4, 0xac(r3) */
/* 0x8079b4a8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b4ac: 4d 82 00 20              beqlr     */
/* 0x8079b4b0: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b4b4: 4b dc 62 e8              b        0x8056179c */
/* 0x8079b4b8: 4e 80 00 20              blr       */
/* 0x8079b4bc: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079b4c0: 38 c0 00 00              li       r6, 0 */
/* 0x8079b4c4: 2c 00 00 02              cmpwi    r0, 2 */
/* 0x8079b4c8: 40 82 00 18              bne      0x8079b4e0 */
/* 0x8079b4cc: 3c a0 00 00              lis      r5, 0 */
/* 0x8079b4d0: 88 05 00 00              lbz      r0, 0(r5) */
/* 0x8079b4d4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b4d8: 41 82 00 08              beq      0x8079b4e0 */
/* 0x8079b4dc: 38 c0 00 01              li       r6, 1 */
/* 0x8079b4e0: 2c 06 00 00              cmpwi    r6, 0 */
/* 0x8079b4e4: 4c 82 00 20              bnelr     */
/* 0x8079b4e8: 80 a3 00 ac              lwz      r5, 0xac(r3) */
/* 0x8079b4ec: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x8079b4f0: 41 82 00 0c              beq      0x8079b4fc */
/* 0x8079b4f4: 98 85 00 21              stb      r4, 0x21(r5) */
/* 0x8079b4f8: 4e 80 00 20              blr       */
/* 0x8079b4fc: 80 63 00 9c              lwz      r3, 0x9c(r3) */
/* 0x8079b500: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b504: 4d 82 00 20              beqlr     */
/* 0x8079b508: 4b dc 49 00              b        0x8055fe08 */
/* 0x8079b50c: 4e 80 00 20              blr       */
/* 0x8079b510: 38 60 00 01              li       r3, 1 */
/* 0x8079b514: 4e 80 00 20              blr       */
/* 0x8079b518: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079b51c: 7c 08 02 a6              mflr     r0 */
/* 0x8079b520: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079b524: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079b528: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079b52c: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b530: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b534: 41 82 00 1c              beq      0x8079b550 */
/* 0x8079b538: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b53c: 38 80 00 00              li       r4, 0 */
/* 0x8079b540: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b544: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b548: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b54c: 4e 80 04 21              bctrl     */
/* 0x8079b550: 80 7f 00 a0              lwz      r3, 0xa0(r31) */
/* 0x8079b554: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b558: 41 82 00 18              beq      0x8079b570 */
/* 0x8079b55c: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b560: 38 80 00 00              li       r4, 0 */
/* 0x8079b564: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b568: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b56c: 4e 80 04 21              bctrl     */
/* 0x8079b570: 80 7f 00 a8              lwz      r3, 0xa8(r31) */
/* 0x8079b574: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b578: 41 82 00 24              beq      0x8079b59c */
/* 0x8079b57c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x8079b580: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b584: 54 00 03 de              rlwinm   r0, r0, 0, 0xf, 0xf */
/* 0x8079b588: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x8079b58c: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b590: 54 04 d9 7e              srwi     r4, r0, 5 */
/* 0x8079b594: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b598: 4e 80 04 21              bctrl     */
/* 0x8079b59c: 80 9f 00 a4              lwz      r4, 0xa4(r31) */
/* 0x8079b5a0: 38 60 00 02              li       r3, 2 */
/* 0x8079b5a4: 80 04 00 20              lwz      r0, 0x20(r4) */
/* 0x8079b5a8: 64 00 21 21              oris     r0, r0, 0x2121 */
/* 0x8079b5ac: 60 00 21 21              ori      r0, r0, 0x2121 */
/* 0x8079b5b0: 90 04 00 20              stw      r0, 0x20(r4) */
/* 0x8079b5b4: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079b5b8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079b5bc: 7c 08 03 a6              mtlr     r0 */
/* 0x8079b5c0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079b5c4: 4e 80 00 20              blr       */
/* 0x8079b5c8: 4e 80 00 20              blr       */
/* 0x8079b5cc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079b5d0: 7c 08 02 a6              mflr     r0 */
/* 0x8079b5d4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079b5d8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079b5dc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079b5e0: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b5e4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b5e8: 41 82 00 1c              beq      0x8079b604 */
/* 0x8079b5ec: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b5f0: 38 80 00 00              li       r4, 0 */
/* 0x8079b5f4: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b5f8: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b5fc: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b600: 4e 80 04 21              bctrl     */
/* 0x8079b604: 80 7f 00 a0              lwz      r3, 0xa0(r31) */
/* 0x8079b608: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b60c: 41 82 00 18              beq      0x8079b624 */
/* 0x8079b610: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b614: 38 80 00 00              li       r4, 0 */
/* 0x8079b618: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b61c: 7d 89 03 a6              mtctr    r12 */
#endif


/* === DISASSEMBLY === */


//   0x8079b484:  bl       0x8055fe08
//   0x8079b488:  lwz      r0, 0x14(r1)
//   0x8079b48c:  lwz      r31, 0xc(r1)
//   0x8079b490:  lwz      r30, 8(r1)
//   0x8079b494:  mtlr     r0
//   0x8079b498:  addi     r1, r1, 0x10
//   0x8079b49c:  blr      
//   0x8079b4a0:  lwz      r0, 0x9c(r3)
//   0x8079b4a4:  stw      r4, 0xac(r3)
//   0x8079b4a8:  cmpwi    r0, 0
//   0x8079b4ac:  beqlr    
//   0x8079b4b0:  mr       r3, r0
//   0x8079b4b4:  b        0x8056179c
//   0x8079b4b8:  blr      
//   0x8079b4bc:  lwz      r0, 4(r3)
//   0x8079b4c0:  li       r6, 0
//   0x8079b4c4:  cmpwi    r0, 2
//   0x8079b4c8:  bne      0x8079b4e0
//   0x8079b4cc:  lis      r5, 0
//   0x8079b4d0:  lbz      r0, 0(r5)
//   0x8079b4d4:  cmpwi    r0, 0
//   0x8079b4d8:  beq      0x8079b4e0
//   0x8079b4dc:  li       r6, 1
//   0x8079b4e0:  cmpwi    r6, 0
//   0x8079b4e4:  bnelr    
//   0x8079b4e8:  lwz      r5, 0xac(r3)
//   0x8079b4ec:  cmpwi    r5, 0
//   0x8079b4f0:  beq      0x8079b4fc
//   0x8079b4f4:  stb      r4, 0x21(r5)
//   0x8079b4f8:  blr      
//   0x8079b4fc:  lwz      r3, 0x9c(r3)
//   0x8079b500:  cmpwi    r3, 0
//   0x8079b504:  beqlr    
//   0x8079b508:  b        0x8055fe08
//   0x8079b50c:  blr      
//   0x8079b510:  li       r3, 1
//   0x8079b514:  blr      
//   0x8079b518:  stwu     r1, -0x10(r1)
//   0x8079b51c:  mflr     r0
//   0x8079b520:  stw      r0, 0x14(r1)
//   0x8079b524:  stw      r31, 0xc(r1)
//   0x8079b528:  mr       r31, r3
//   0x8079b52c:  lwz      r0, 0x9c(r3)
//   0x8079b530:  cmpwi    r0, 0
//   0x8079b534:  beq      0x8079b550
//   0x8079b538:  mr       r3, r0
//   0x8079b53c:  li       r4, 0
//   0x8079b540:  lwz      r12, 0(r3)
//   0x8079b544:  lwz      r12, 0xc(r12)
//   0x8079b548:  mtctr    r12
//   0x8079b54c:  bctrl    
//   0x8079b550:  lwz      r3, 0xa0(r31)
//   0x8079b554:  cmpwi    r3, 0
//   0x8079b558:  beq      0x8079b570
//   0x8079b55c:  lwz      r12, 0(r3)
//   0x8079b560:  li       r4, 0
//   0x8079b564:  lwz      r12, 0xc(r12)
//   0x8079b568:  mtctr    r12
//   0x8079b56c:  bctrl    
//   0x8079b570:  lwz      r3, 0xa8(r31)
//   0x8079b574:  cmpwi    r3, 0
//   0x8079b578:  beq      0x8079b59c
//   0x8079b57c:  lwz      r0, 0x78(r31)
//   0x8079b580:  lwz      r12, 0(r3)
//   0x8079b584:  rlwinm   r0, r0, 0, 0xf, 0xf
//   0x8079b588:  cntlzw   r0, r0
//   0x8079b58c:  lwz      r12, 0xc(r12)
//   0x8079b590:  srwi     r4, r0, 5
//   0x8079b594:  mtctr    r12
//   0x8079b598:  bctrl    
//   0x8079b59c:  lwz      r4, 0xa4(r31)
//   0x8079b5a0:  li       r3, 2
//   0x8079b5a4:  lwz      r0, 0x20(r4)
//   0x8079b5a8:  oris     r0, r0, 0x2121
//   0x8079b5ac:  ori      r0, r0, 0x2121
//   0x8079b5b0:  stw      r0, 0x20(r4)
//   0x8079b5b4:  lwz      r31, 0xc(r1)
//   0x8079b5b8:  lwz      r0, 0x14(r1)
//   0x8079b5bc:  mtlr     r0
//   0x8079b5c0:  addi     r1, r1, 0x10
//   0x8079b5c4:  blr      
//   0x8079b5c8:  blr      
//   0x8079b5cc:  stwu     r1, -0x10(r1)
//   0x8079b5d0:  mflr     r0
//   0x8079b5d4:  stw      r0, 0x14(r1)
//   0x8079b5d8:  stw      r31, 0xc(r1)
//   0x8079b5dc:  mr       r31, r3
//   0x8079b5e0:  lwz      r0, 0x9c(r3)
//   0x8079b5e4:  cmpwi    r0, 0
//   0x8079b5e8:  beq      0x8079b604
//   0x8079b5ec:  mr       r3, r0
//   0x8079b5f0:  li       r4, 0
//   0x8079b5f4:  lwz      r12, 0(r3)
//   0x8079b5f8:  lwz      r12, 0xc(r12)
//   0x8079b5fc:  mtctr    r12
//   0x8079b600:  bctrl    
//   0x8079b604:  lwz      r3, 0xa0(r31)
//   0x8079b608:  cmpwi    r3, 0
//   0x8079b60c:  beq      0x8079b624
//   0x8079b610:  lwz      r12, 0(r3)
//   0x8079b614:  li       r4, 0
//   0x8079b618:  lwz      r12, 0xc(r12)
//   0x8079b61c:  mtctr    r12

// Address: 0x8079c338 — ItemHolder_initItemDirect (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 364 bytes
/* Empty function: ItemHolder_initItemDirect */


/* === DISASSEMBLY === */


// Address: 0x8079c614 — ItemHolder_spawnDirect (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 364 bytes
/**
 * ItemHolder_spawnDirect
 * @addr 0x8079c614
 * @size 364 bytes
 * @frame 0 bytes
 */
void ItemHolder_spawnDirect(void) {
    /* r5, 0  (load upper immediate) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079c614: 3c a0 00 00              lis      r5, 0 */
#endif


/* === DISASSEMBLY === */


//   0x8079c614:  lis      r5, 0

// Address: 0x8079bd38 — ItemHolder_update (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 336 bytes
/**
 * ItemHolder_update
 * @addr 0x8079bd38
 * @size 336 bytes
 * @frame 32 bytes
 * @calls 8 function(s)
 */
void ItemHolder_update(void) {
    /* if (cr0 >) goto 0x8079bd50 */
    /* li r0, 1 */
    /* slw r0, r0, r3 */
    /* andi. r0, r0, 0x19 */
    /* if (cr0 ==) goto 0x8079bd50 */
    /* li r4, 0 */
    /* cmpwi r4, 0 */
    /* if (cr0 !=) goto 0x8079bd94 */
    /* r3 = r29+0xa8 */
    /* li r4, 3 */
    /* 0x8055f1e0() */
    /* goto 0x8079bd94 */
    /* r3, 0  (load upper immediate) */
    /* li r25, 0 */
    /* r3 = r3+0x0 */
    /* r26 = r3+0x25 */
    /* goto 0x8079bd8c */
    /* r3 = r29+0xa8 */
    /* r4 = r25 */
    /* 0x8055f1e0() */
    /* addi r25, r25, 1 */
    /* cmpw r25, r26 */
    /* if (cr0 <) goto 0x8079bd7c */
    /* addi r11, r1, 0x30 */
    /* 0x80555bf8() */
    /* r0 = stack[0x34] */
    /* mtlr r0 */
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079bd38: 41 81 00 18              bgt      0x8079bd50 */
/* 0x8079bd3c: 38 00 00 01              li       r0, 1 */
/* 0x8079bd40: 7c 00 18 30              slw      r0, r0, r3 */
/* 0x8079bd44: 70 00 00 19              andi.    r0, r0, 0x19 */
/* 0x8079bd48: 41 82 00 08              beq      0x8079bd50 */
/* 0x8079bd4c: 38 80 00 00              li       r4, 0 */
/* 0x8079bd50: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079bd54: 40 82 00 40              bne      0x8079bd94 */
/* 0x8079bd58: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bd5c: 38 80 00 03              li       r4, 3 */
/* 0x8079bd60: 4b dc 34 81              bl       0x8055f1e0 */
/* 0x8079bd64: 48 00 00 30              b        0x8079bd94 */
/* 0x8079bd68: 3c 60 00 00              lis      r3, 0 */
/* 0x8079bd6c: 3b 20 00 00              li       r25, 0 */
/* 0x8079bd70: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079bd74: 8b 43 00 25              lbz      r26, 0x25(r3) */
/* 0x8079bd78: 48 00 00 14              b        0x8079bd8c */
/* 0x8079bd7c: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bd80: 7f 24 cb 78              mr       r4, r25 */
/* 0x8079bd84: 4b dc 34 5d              bl       0x8055f1e0 */
/* 0x8079bd88: 3b 39 00 01              addi     r25, r25, 1 */
/* 0x8079bd8c: 7c 19 d0 00              cmpw     r25, r26 */
/* 0x8079bd90: 41 80 ff ec              blt      0x8079bd7c */
/* 0x8079bd94: 39 61 00 30              addi     r11, r1, 0x30 */
/* 0x8079bd98: 4b db 9e 61              bl       0x80555bf8 */
/* 0x8079bd9c: 80 01 00 34              lwz      r0, 0x34(r1) */
/* 0x8079bda0: 7c 08 03 a6              mtlr     r0 */
/* 0x8079bda4: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x8079bda8: 4e 80 00 20              blr       */
/* 0x8079bdac: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079bdb0: 7c 08 02 a6              mflr     r0 */
/* 0x8079bdb4: c0 46 00 00              lfs      f2, 0(r6) */
/* 0x8079bdb8: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079bdbc: 38 00 00 0c              li       r0, 0xc */
/* 0x8079bdc0: c0 26 00 04              lfs      f1, 4(r6) */
/* 0x8079bdc4: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079bdc8: 7c ff 3b 78              mr       r31, r7 */
/* 0x8079bdcc: c0 06 00 08              lfs      f0, 8(r6) */
/* 0x8079bdd0: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x8079bdd4: 7c 7e 1b 78              mr       r30, r3 */
/* 0x8079bdd8: d0 43 00 44              stfs     f2, 0x44(r3) */
/* 0x8079bddc: d0 23 00 48              stfs     f1, 0x48(r3) */
/* 0x8079bde0: d0 03 00 4c              stfs     f0, 0x4c(r3) */
/* 0x8079bde4: 98 a3 00 6c              stb      r5, 0x6c(r3) */
/* 0x8079bde8: 98 03 00 6d              stb      r0, 0x6d(r3) */
/* 0x8079bdec: 48 00 00 65              bl       0x8079be50 */
/* 0x8079bdf0: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079bdf4: 4b ff fd f5              bl       0x8079bbe8 */
/* 0x8079bdf8: 80 1e 00 78              lwz      r0, 0x78(r30) */
/* 0x8079bdfc: 54 00 01 cf              rlwinm.  r0, r0, 0, 7, 7 */
/* 0x8079be00: 41 82 00 14              beq      0x8079be14 */
/* 0x8079be04: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be08: 38 80 00 00              li       r4, 0 */
/* 0x8079be0c: 48 00 27 25              bl       0x8079e530 */
/* 0x8079be10: 48 00 00 18              b        0x8079be28 */
/* 0x8079be14: 3c 80 00 00              lis      r4, 0 */
/* 0x8079be18: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be1c: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x8079be20: 38 80 00 00              li       r4, 0 */
/* 0x8079be24: 48 00 21 f1              bl       0x8079e014 */
/* 0x8079be28: 7f c3 f3 78              mr       r3, r30 */
/* 0x8079be2c: 7f e4 fb 78              mr       r4, r31 */
/* 0x8079be30: 4b ff c6 ed              bl       0x8079851c */
/* 0x8079be34: b0 7e 00 0c              sth      r3, 0xc(r30) */
/* 0x8079be38: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079be3c: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x8079be40: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079be44: 7c 08 03 a6              mtlr     r0 */
/* 0x8079be48: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079be4c: 4e 80 00 20              blr       */
/* 0x8079be50: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x8079be54: 7c 08 02 a6              mflr     r0 */
/* 0x8079be58: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x8079be5c: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x8079be60: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079be64: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x8079be68: 3b c0 00 00              li       r30, 0 */
/* 0x8079be6c: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x8079be70: 3f a0 00 00              lis      r29, 0 */
/* 0x8079be74: 3b bd 00 00              addi     r29, r29, 0 */
/* 0x8079be78: c0 5d 00 1c              lfs      f2, 0x1c(r29) */
/* 0x8079be7c: c0 1d 00 20              lfs      f0, 0x20(r29) */
/* 0x8079be80: c0 3d 00 00              lfs      f1, 0(r29) */
/* 0x8079be84: 90 83 00 04              stw      r4, 4(r3) */
#endif


/* === DISASSEMBLY === */


//   0x8079bd38:  bgt      0x8079bd50
//   0x8079bd3c:  li       r0, 1
//   0x8079bd40:  slw      r0, r0, r3
//   0x8079bd44:  andi.    r0, r0, 0x19
//   0x8079bd48:  beq      0x8079bd50
//   0x8079bd4c:  li       r4, 0
//   0x8079bd50:  cmpwi    r4, 0
//   0x8079bd54:  bne      0x8079bd94
//   0x8079bd58:  lwz      r3, 0xa8(r29)
//   0x8079bd5c:  li       r4, 3
//   0x8079bd60:  bl       0x8055f1e0
//   0x8079bd64:  b        0x8079bd94
//   0x8079bd68:  lis      r3, 0
//   0x8079bd6c:  li       r25, 0
//   0x8079bd70:  lwz      r3, 0(r3)
//   0x8079bd74:  lbz      r26, 0x25(r3)
//   0x8079bd78:  b        0x8079bd8c
//   0x8079bd7c:  lwz      r3, 0xa8(r29)
//   0x8079bd80:  mr       r4, r25
//   0x8079bd84:  bl       0x8055f1e0
//   0x8079bd88:  addi     r25, r25, 1
//   0x8079bd8c:  cmpw     r25, r26
//   0x8079bd90:  blt      0x8079bd7c
//   0x8079bd94:  addi     r11, r1, 0x30
//   0x8079bd98:  bl       0x80555bf8
//   0x8079bd9c:  lwz      r0, 0x34(r1)
//   0x8079bda0:  mtlr     r0
//   0x8079bda4:  addi     r1, r1, 0x30
//   0x8079bda8:  blr      
//   0x8079bdac:  stwu     r1, -0x10(r1)
//   0x8079bdb0:  mflr     r0
//   0x8079bdb4:  lfs      f2, 0(r6)
//   0x8079bdb8:  stw      r0, 0x14(r1)
//   0x8079bdbc:  li       r0, 0xc
//   0x8079bdc0:  lfs      f1, 4(r6)
//   0x8079bdc4:  stw      r31, 0xc(r1)
//   0x8079bdc8:  mr       r31, r7
//   0x8079bdcc:  lfs      f0, 8(r6)
//   0x8079bdd0:  stw      r30, 8(r1)
//   0x8079bdd4:  mr       r30, r3
//   0x8079bdd8:  stfs     f2, 0x44(r3)
//   0x8079bddc:  stfs     f1, 0x48(r3)
//   0x8079bde0:  stfs     f0, 0x4c(r3)
//   0x8079bde4:  stb      r5, 0x6c(r3)
//   0x8079bde8:  stb      r0, 0x6d(r3)
//   0x8079bdec:  bl       0x8079be50
//   0x8079bdf0:  mr       r3, r30
//   0x8079bdf4:  bl       0x8079bbe8
//   0x8079bdf8:  lwz      r0, 0x78(r30)
//   0x8079bdfc:  rlwinm.  r0, r0, 0, 7, 7
//   0x8079be00:  beq      0x8079be14
//   0x8079be04:  mr       r3, r30
//   0x8079be08:  li       r4, 0
//   0x8079be0c:  bl       0x8079e530
//   0x8079be10:  b        0x8079be28
//   0x8079be14:  lis      r4, 0
//   0x8079be18:  mr       r3, r30
//   0x8079be1c:  lfs      f1, 0(r4)
//   0x8079be20:  li       r4, 0
//   0x8079be24:  bl       0x8079e014
//   0x8079be28:  mr       r3, r30
//   0x8079be2c:  mr       r4, r31
//   0x8079be30:  bl       0x8079851c
//   0x8079be34:  sth      r3, 0xc(r30)
//   0x8079be38:  lwz      r31, 0xc(r1)
//   0x8079be3c:  lwz      r30, 8(r1)
//   0x8079be40:  lwz      r0, 0x14(r1)
//   0x8079be44:  mtlr     r0
//   0x8079be48:  addi     r1, r1, 0x10
//   0x8079be4c:  blr      
//   0x8079be50:  stwu     r1, -0x20(r1)
//   0x8079be54:  mflr     r0
//   0x8079be58:  stw      r0, 0x24(r1)
//   0x8079be5c:  stw      r31, 0x1c(r1)
//   0x8079be60:  mr       r31, r3
//   0x8079be64:  stw      r30, 0x18(r1)
//   0x8079be68:  li       r30, 0
//   0x8079be6c:  stw      r29, 0x14(r1)
//   0x8079be70:  lis      r29, 0
//   0x8079be74:  addi     r29, r29, 0
//   0x8079be78:  lfs      f2, 0x1c(r29)
//   0x8079be7c:  lfs      f0, 0x20(r29)
//   0x8079be80:  lfs      f1, 0(r29)
//   0x8079be84:  stw      r4, 4(r3)

// Address: 0x8079c780 — ItemHolder_spawnTc (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 288 bytes
/**
 * ItemHolder_spawnTc
 * @addr 0x8079c780
 * @size 288 bytes
 * @frame 48 bytes
 * @calls 2 function(s)
 */
void ItemHolder_spawnTc(void) {
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c79c */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c79c */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c7ac */
    /* r3 = r3+0x0 */
    /* goto 0x8079c7b0 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* r0 = r29+0xa8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c804 */
    /* add r3, r0, r31 */
    /* li r0, 1 */
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c7e8 */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c7e8 */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c7f8 */
    /* r3 = r3+0x0 */
    /* goto 0x8079c7fc */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* addi r30, r30, 1 */
    /* addi r31, r31, 4 */
    /* cmpwi r30, 2 */
    /* if (cr0 <) goto 0x8079c76c */
    /* f2 = *(f32*)(r29+0x44) */
    /* f1 = *(f32*)(r29+0x48) */
    /* f0 = *(f32*)(r29+0x4c) */
    /* *(f32*)(r29+0x8c) = f2 */
    /* *(f32*)(r29+0x90) = f1 */
    /* *(f32*)(r29+0x94) = f0 */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079c780: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c784: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c788: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c78c: 41 82 00 10              beq      0x8079c79c */
/* 0x8079c790: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c794: 41 82 00 08              beq      0x8079c79c */
/* 0x8079c798: 38 00 00 00              li       r0, 0 */
/* 0x8079c79c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7a0: 41 82 00 0c              beq      0x8079c7ac */
/* 0x8079c7a4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c7a8: 48 00 00 08              b        0x8079c7b0 */
/* 0x8079c7ac: 38 60 00 00              li       r3, 0 */
/* 0x8079c7b0: 38 80 00 02              li       r4, 2 */
/* 0x8079c7b4: 4b db 94 45              bl       0x80555bf8 */
/* 0x8079c7b8: 80 1d 00 a8              lwz      r0, 0xa8(r29) */
/* 0x8079c7bc: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7c0: 41 82 00 44              beq      0x8079c804 */
/* 0x8079c7c4: 7c 60 fa 14              add      r3, r0, r31 */
/* 0x8079c7c8: 38 00 00 01              li       r0, 1 */
/* 0x8079c7cc: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c7d0: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c7d4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c7d8: 41 82 00 10              beq      0x8079c7e8 */
/* 0x8079c7dc: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c7e0: 41 82 00 08              beq      0x8079c7e8 */
/* 0x8079c7e4: 38 00 00 00              li       r0, 0 */
/* 0x8079c7e8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7ec: 41 82 00 0c              beq      0x8079c7f8 */
/* 0x8079c7f0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c7f4: 48 00 00 08              b        0x8079c7fc */
/* 0x8079c7f8: 38 60 00 00              li       r3, 0 */
/* 0x8079c7fc: 38 80 00 02              li       r4, 2 */
/* 0x8079c800: 4b db 93 f9              bl       0x80555bf8 */
/* 0x8079c804: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8079c808: 3b ff 00 04              addi     r31, r31, 4 */
/* 0x8079c80c: 2c 1e 00 02              cmpwi    r30, 2 */
/* 0x8079c810: 41 80 ff 5c              blt      0x8079c76c */
/* 0x8079c814: c0 5d 00 44              lfs      f2, 0x44(r29) */
/* 0x8079c818: c0 3d 00 48              lfs      f1, 0x48(r29) */
/* 0x8079c81c: c0 1d 00 4c              lfs      f0, 0x4c(r29) */
/* 0x8079c820: d0 5d 00 8c              stfs     f2, 0x8c(r29) */
/* 0x8079c824: d0 3d 00 90              stfs     f1, 0x90(r29) */
/* 0x8079c828: d0 1d 00 94              stfs     f0, 0x94(r29) */
/* 0x8079c82c: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x8079c830: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x8079c834: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x8079c838: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8079c83c: 7c 08 03 a6              mtlr     r0 */
/* 0x8079c840: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8079c844: 4e 80 00 20              blr       */
/* 0x8079c848: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x8079c84c: 7c 08 02 a6              mflr     r0 */
/* 0x8079c850: 38 a0 00 00              li       r5, 0 */
/* 0x8079c854: 38 c0 00 00              li       r6, 0 */
/* 0x8079c858: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x8079c85c: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x8079c860: 3f e0 00 00              lis      r31, 0 */
/* 0x8079c864: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x8079c868: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x8079c86c: 7c 9e 23 78              mr       r30, r4 */
/* 0x8079c870: 38 80 00 00              li       r4, 0 */
/* 0x8079c874: 93 a1 00 24              stw      r29, 0x24(r1) */
/* 0x8079c878: 7c 7d 1b 78              mr       r29, r3 */
/* 0x8079c87c: 80 e3 00 7c              lwz      r7, 0x7c(r3) */
/* 0x8079c880: 90 a3 00 74              stw      r5, 0x74(r3) */
/* 0x8079c884: 54 e0 06 b5              rlwinm.  r0, r7, 0, 0x1a, 0x1a */
/* 0x8079c888: 41 82 00 28              beq      0x8079c8b0 */
/* 0x8079c88c: 54 e0 07 ff              clrlwi.  r0, r7, 0x1f */
/* 0x8079c890: 41 82 00 10              beq      0x8079c8a0 */
/* 0x8079c894: 80 03 00 78              lwz      r0, 0x78(r3) */
/* 0x8079c898: 54 00 00 89              rlwinm.  r0, r0, 0, 2, 4 */
/* 0x8079c89c: 41 82 00 08              beq      0x8079c8a4 */
#endif


/* === DISASSEMBLY === */


//   0x8079c780:  lwz      r3, 0x14(r3)
//   0x8079c784:  lwz      r4, 4(r3)
//   0x8079c788:  cmpwi    r4, 0
//   0x8079c78c:  beq      0x8079c79c
//   0x8079c790:  cmpwi    r4, 1
//   0x8079c794:  beq      0x8079c79c
//   0x8079c798:  li       r0, 0
//   0x8079c79c:  cmpwi    r0, 0
//   0x8079c7a0:  beq      0x8079c7ac
//   0x8079c7a4:  lwz      r3, 0(r3)
//   0x8079c7a8:  b        0x8079c7b0
//   0x8079c7ac:  li       r3, 0
//   0x8079c7b0:  li       r4, 2
//   0x8079c7b4:  bl       0x80555bf8
//   0x8079c7b8:  lwz      r0, 0xa8(r29)
//   0x8079c7bc:  cmpwi    r0, 0
//   0x8079c7c0:  beq      0x8079c804
//   0x8079c7c4:  add      r3, r0, r31
//   0x8079c7c8:  li       r0, 1
//   0x8079c7cc:  lwz      r3, 0x14(r3)
//   0x8079c7d0:  lwz      r4, 4(r3)
//   0x8079c7d4:  cmpwi    r4, 0
//   0x8079c7d8:  beq      0x8079c7e8
//   0x8079c7dc:  cmpwi    r4, 1
//   0x8079c7e0:  beq      0x8079c7e8
//   0x8079c7e4:  li       r0, 0
//   0x8079c7e8:  cmpwi    r0, 0
//   0x8079c7ec:  beq      0x8079c7f8
//   0x8079c7f0:  lwz      r3, 0(r3)
//   0x8079c7f4:  b        0x8079c7fc
//   0x8079c7f8:  li       r3, 0
//   0x8079c7fc:  li       r4, 2
//   0x8079c800:  bl       0x80555bf8
//   0x8079c804:  addi     r30, r30, 1
//   0x8079c808:  addi     r31, r31, 4
//   0x8079c80c:  cmpwi    r30, 2
//   0x8079c810:  blt      0x8079c76c
//   0x8079c814:  lfs      f2, 0x44(r29)
//   0x8079c818:  lfs      f1, 0x48(r29)
//   0x8079c81c:  lfs      f0, 0x4c(r29)
//   0x8079c820:  stfs     f2, 0x8c(r29)
//   0x8079c824:  stfs     f1, 0x90(r29)
//   0x8079c828:  stfs     f0, 0x94(r29)
//   0x8079c82c:  lwz      r31, 0x1c(r1)
//   0x8079c830:  lwz      r30, 0x18(r1)
//   0x8079c834:  lwz      r29, 0x14(r1)
//   0x8079c838:  lwz      r0, 0x24(r1)
//   0x8079c83c:  mtlr     r0
//   0x8079c840:  addi     r1, r1, 0x20
//   0x8079c844:  blr      
//   0x8079c848:  stwu     r1, -0x30(r1)
//   0x8079c84c:  mflr     r0
//   0x8079c850:  li       r5, 0
//   0x8079c854:  li       r6, 0
//   0x8079c858:  stw      r0, 0x34(r1)
//   0x8079c85c:  stw      r31, 0x2c(r1)
//   0x8079c860:  lis      r31, 0
//   0x8079c864:  addi     r31, r31, 0
//   0x8079c868:  stw      r30, 0x28(r1)
//   0x8079c86c:  mr       r30, r4
//   0x8079c870:  li       r4, 0
//   0x8079c874:  stw      r29, 0x24(r1)
//   0x8079c878:  mr       r29, r3
//   0x8079c87c:  lwz      r7, 0x7c(r3)
//   0x8079c880:  stw      r5, 0x74(r3)
//   0x8079c884:  rlwinm.  r0, r7, 0, 0x1a, 0x1a
//   0x8079c888:  beq      0x8079c8b0
//   0x8079c88c:  clrlwi.  r0, r7, 0x1f
//   0x8079c890:  beq      0x8079c8a0
//   0x8079c894:  lwz      r0, 0x78(r3)
//   0x8079c898:  rlwinm.  r0, r0, 0, 2, 4
//   0x8079c89c:  beq      0x8079c8a4

// Address: 0x8079bc7c — ItemHolder_init (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 188 bytes
/**
 * ItemHolder_init
 * @addr 0x8079bc7c
 * @size 188 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void ItemHolder_init(void) {
    /* r25 = r3+0x25 */
    /* li r26, 0 */
    /* li r27, 0 */
    /* r28, 0  (load upper immediate) */
    /* goto 0x8079bcdc */
    /* r3 = r28+0x0 */
    /* r4 = r31+0x0 */
    /* r3 = r3+0x18 */
    /* lwzx r3, r3, r27 */
    /* r0 = r3+0x9c */
    /* mulli r0, r0, 0xf0 */
    /* add r3, r4, r0 */
    /* r0 = r3+0xf4 */
    /* cmpw r30, r0 */
    /* if (cr0 !=) goto 0x8079bcc8 */
    /* r3 = r29+0xa8 */
    /* r4 = r26 */
    /* 0x8055f1c8() */
    /* goto 0x8079bcd4 */
    /* r3 = r29+0xa8 */
    /* r4 = r26 */
    /* 0x8055f1e0() */
    /* addi r27, r27, 4 */
    /* addi r26, r26, 1 */
    /* cmpw r26, r25 */
    /* if (cr0 <) goto 0x8079bc90 */
    /* r3, 0  (load upper immediate) */
    /* r5 = r3+0x0 */
    /* r0 = r5+0x25 */
    /* cmplwi r0, 4 */
    /* if (cr0 !=) goto 0x8079bd94 */
    /* r3 = r5+0x218 */
    /* li r4, 1 */
    /* addi r3, r3, -1 */
    /* cmplwi r3, 4 */
    /* if (cr0 >) goto 0x8079bd20 */
    /* li r0, 1 */
    /* slw r0, r0, r3 */
    /* andi. r0, r0, 0x19 */
    /* if (cr0 ==) goto 0x8079bd20 */
    /* li r4, 0 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079bd94 */
    /* r3 = r5+0x308 */
    /* li r4, 1 */
    /* addi r3, r3, -1 */
    /* cmplwi r3, 4 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079bc7c: 8b 23 00 25              lbz      r25, 0x25(r3) */
/* 0x8079bc80: 3b 40 00 00              li       r26, 0 */
/* 0x8079bc84: 3b 60 00 00              li       r27, 0 */
/* 0x8079bc88: 3f 80 00 00              lis      r28, 0 */
/* 0x8079bc8c: 48 00 00 50              b        0x8079bcdc */
/* 0x8079bc90: 80 7c 00 00              lwz      r3, 0(r28) */
/* 0x8079bc94: 80 9f 00 00              lwz      r4, 0(r31) */
/* 0x8079bc98: 80 63 00 18              lwz      r3, 0x18(r3) */
/* 0x8079bc9c: 7c 63 d8 2e              lwzx     r3, r3, r27 */
/* 0x8079bca0: 88 03 00 9c              lbz      r0, 0x9c(r3) */
/* 0x8079bca4: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x8079bca8: 7c 64 02 14              add      r3, r4, r0 */
/* 0x8079bcac: 80 03 00 f4              lwz      r0, 0xf4(r3) */
/* 0x8079bcb0: 7c 1e 00 00              cmpw     r30, r0 */
/* 0x8079bcb4: 40 82 00 14              bne      0x8079bcc8 */
/* 0x8079bcb8: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bcbc: 7f 44 d3 78              mr       r4, r26 */
/* 0x8079bcc0: 4b dc 35 09              bl       0x8055f1c8 */
/* 0x8079bcc4: 48 00 00 10              b        0x8079bcd4 */
/* 0x8079bcc8: 80 7d 00 a8              lwz      r3, 0xa8(r29) */
/* 0x8079bccc: 7f 44 d3 78              mr       r4, r26 */
/* 0x8079bcd0: 4b dc 35 11              bl       0x8055f1e0 */
/* 0x8079bcd4: 3b 7b 00 04              addi     r27, r27, 4 */
/* 0x8079bcd8: 3b 5a 00 01              addi     r26, r26, 1 */
/* 0x8079bcdc: 7c 1a c8 00              cmpw     r26, r25 */
/* 0x8079bce0: 41 80 ff b0              blt      0x8079bc90 */
/* 0x8079bce4: 3c 60 00 00              lis      r3, 0 */
/* 0x8079bce8: 80 a3 00 00              lwz      r5, 0(r3) */
/* 0x8079bcec: 88 05 00 25              lbz      r0, 0x25(r5) */
/* 0x8079bcf0: 28 00 00 04              cmplwi   r0, 4 */
/* 0x8079bcf4: 40 82 00 a0              bne      0x8079bd94 */
/* 0x8079bcf8: 80 65 02 18              lwz      r3, 0x218(r5) */
/* 0x8079bcfc: 38 80 00 01              li       r4, 1 */
/* 0x8079bd00: 38 63 ff ff              addi     r3, r3, -1 */
/* 0x8079bd04: 28 03 00 04              cmplwi   r3, 4 */
/* 0x8079bd08: 41 81 00 18              bgt      0x8079bd20 */
/* 0x8079bd0c: 38 00 00 01              li       r0, 1 */
/* 0x8079bd10: 7c 00 18 30              slw      r0, r0, r3 */
/* 0x8079bd14: 70 00 00 19              andi.    r0, r0, 0x19 */
/* 0x8079bd18: 41 82 00 08              beq      0x8079bd20 */
/* 0x8079bd1c: 38 80 00 00              li       r4, 0 */
/* 0x8079bd20: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079bd24: 41 82 00 70              beq      0x8079bd94 */
/* 0x8079bd28: 80 65 03 08              lwz      r3, 0x308(r5) */
/* 0x8079bd2c: 38 80 00 01              li       r4, 1 */
/* 0x8079bd30: 38 63 ff ff              addi     r3, r3, -1 */
/* 0x8079bd34: 28 03 00 04              cmplwi   r3, 4 */
#endif


/* === DISASSEMBLY === */


//   0x8079bc7c:  lbz      r25, 0x25(r3)
//   0x8079bc80:  li       r26, 0
//   0x8079bc84:  li       r27, 0
//   0x8079bc88:  lis      r28, 0
//   0x8079bc8c:  b        0x8079bcdc
//   0x8079bc90:  lwz      r3, 0(r28)
//   0x8079bc94:  lwz      r4, 0(r31)
//   0x8079bc98:  lwz      r3, 0x18(r3)
//   0x8079bc9c:  lwzx     r3, r3, r27
//   0x8079bca0:  lbz      r0, 0x9c(r3)
//   0x8079bca4:  mulli    r0, r0, 0xf0
//   0x8079bca8:  add      r3, r4, r0
//   0x8079bcac:  lwz      r0, 0xf4(r3)
//   0x8079bcb0:  cmpw     r30, r0
//   0x8079bcb4:  bne      0x8079bcc8
//   0x8079bcb8:  lwz      r3, 0xa8(r29)
//   0x8079bcbc:  mr       r4, r26
//   0x8079bcc0:  bl       0x8055f1c8
//   0x8079bcc4:  b        0x8079bcd4
//   0x8079bcc8:  lwz      r3, 0xa8(r29)
//   0x8079bccc:  mr       r4, r26
//   0x8079bcd0:  bl       0x8055f1e0
//   0x8079bcd4:  addi     r27, r27, 4
//   0x8079bcd8:  addi     r26, r26, 1
//   0x8079bcdc:  cmpw     r26, r25
//   0x8079bce0:  blt      0x8079bc90
//   0x8079bce4:  lis      r3, 0
//   0x8079bce8:  lwz      r5, 0(r3)
//   0x8079bcec:  lbz      r0, 0x25(r5)
//   0x8079bcf0:  cmplwi   r0, 4
//   0x8079bcf4:  bne      0x8079bd94
//   0x8079bcf8:  lwz      r3, 0x218(r5)
//   0x8079bcfc:  li       r4, 1
//   0x8079bd00:  addi     r3, r3, -1
//   0x8079bd04:  cmplwi   r3, 4
//   0x8079bd08:  bgt      0x8079bd20
//   0x8079bd0c:  li       r0, 1
//   0x8079bd10:  slw      r0, r0, r3
//   0x8079bd14:  andi.    r0, r0, 0x19
//   0x8079bd18:  beq      0x8079bd20
//   0x8079bd1c:  li       r4, 0
//   0x8079bd20:  cmpwi    r4, 0
//   0x8079bd24:  beq      0x8079bd94
//   0x8079bd28:  lwz      r3, 0x308(r5)
//   0x8079bd2c:  li       r4, 1
//   0x8079bd30:  addi     r3, r3, -1
//   0x8079bd34:  cmplwi   r3, 4
