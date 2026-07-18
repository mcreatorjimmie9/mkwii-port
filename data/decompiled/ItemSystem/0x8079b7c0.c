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

; Function: ItemHolder_construct
; Demangled: ItemHolder_construct
; Address: 0x8079b7c0  (.text+0x288f24)
; Size: 516 bytes

  0x8079b7c0:  lwz      r4, 0xa4(r3)
  0x8079b7c4:  stfs     f3, 0x60(r3)
  0x8079b7c8:  lfs      f1, 0(r31)
  0x8079b7cc:  stfs     f3, 0x5c(r3)
  0x8079b7d0:  add      r5, r5, r0
  0x8079b7d4:  lfs      f0, 4(r31)
  0x8079b7d8:  lfs      f2, 0x40(r6)
  0x8079b7dc:  lfs      f4, 0x38(r6)
  0x8079b7e0:  fmuls    f2, f3, f2
  0x8079b7e4:  fmuls    f3, f3, f4
  0x8079b7e8:  stfs     f2, 0xb8(r3)
  0x8079b7ec:  stfs     f3, 0xb4(r3)
  0x8079b7f0:  lfs      f3, 0x34(r5)
  0x8079b7f4:  fmuls    f2, f2, f3
  0x8079b7f8:  stfs     f2, 4(r4)
  0x8079b7fc:  stfs     f1, 0xc8(r3)
  0x8079b800:  stfs     f0, 0xcc(r3)
  0x8079b804:  stfs     f1, 0xd0(r3)
  0x8079b808:  addi     r3, r3, 0xd4
  0x8079b80c:  bl       0x807b5884
  0x8079b810:  lfs      f1, 0(r31)
  0x8079b814:  li       r0, 0
  0x8079b818:  lfs      f0, 0xc(r31)
  0x8079b81c:  lis      r3, 0
  0x8079b820:  stfs     f1, 0xe0(r30)
  0x8079b824:  lbz      r4, 0x6c(r30)
  0x8079b828:  stfs     f1, 0xdc(r30)
  0x8079b82c:  stfs     f1, 0xd8(r30)
  0x8079b830:  stfs     f1, 0xec(r30)
  0x8079b834:  stfs     f1, 0xe8(r30)
  0x8079b838:  stfs     f1, 0xe4(r30)
  0x8079b83c:  stfs     f0, 0x128(r30)
  0x8079b840:  stfs     f0, 0x124(r30)
  0x8079b844:  stfs     f0, 0x120(r30)
  0x8079b848:  stfs     f1, 0x12c(r30)
  0x8079b84c:  stw      r0, 0x138(r30)
  0x8079b850:  lwz      r3, 0(r3)
  0x8079b854:  bl       0x80590144
  0x8079b858:  addi     r4, r1, 0x20
  0x8079b85c:  bl       0x80590cd8
  0x8079b860:  lfs      f0, 0x20(r1)
  0x8079b864:  li       r3, 1
  0x8079b868:  stfs     f0, 0x38(r30)
  0x8079b86c:  lwz      r0, 4(r30)
  0x8079b870:  lfs      f0, 0x24(r1)
  0x8079b874:  stfs     f0, 0x3c(r30)
  0x8079b878:  slw      r0, r3, r0
  0x8079b87c:  andi.    r0, r0, 0x23
  0x8079b880:  lfs      f1, 0(r31)
  0x8079b884:  lfs      f2, 0x28(r1)
  0x8079b888:  lfs      f0, 4(r31)
  0x8079b88c:  stfs     f2, 0x40(r30)
  0x8079b890:  stfs     f1, 0x2c(r30)
  0x8079b894:  stfs     f0, 0x30(r30)
  0x8079b898:  stfs     f1, 0x34(r30)
  0x8079b89c:  bne      0x8079b8bc
  0x8079b8a0:  lfs      f2, 0x10(r31)
