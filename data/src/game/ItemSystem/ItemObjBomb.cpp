// ItemObjBomb implementation — 2 functions
#include "ItemObjBomb.hpp"

// Address: 0x807a762c — ItemObjBomb_loadModel (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 508 bytes
/**
 * ItemObjBomb_loadModel
 * @addr 0x807a762c
 * @size 508 bytes
 * @frame 0 bytes
 * @calls 5 function(s)
 */
void ItemObjBomb_loadModel(void) {
    /* li r14, 1 */
    /* goto 0x807a77a0 */
    /* li r3, 0x338 */
    /* 0x80555bf8() */
    /* cmpwi r3, 0 */
    /* r19 = r3 */
    /* if (cr0 ==) goto 0x807a7794 */
    /* 0x807a4184() */
    /* addi r18, r19, 0x1ec */
    /* r19+0x0 = r21 */
    /* r3 = r18 */
    /* addi r4, r22, 0 */
    /* addi r5, r23, 0 */
    /* li r6, 0xc */
    /* li r7, 4 */
    /* 0x80555bf8() */
    /* addi r3, r18, 0x30 */
    /* addi r4, r22, 0 */
    /* addi r5, r23, 0 */
    /* li r6, 0xc */
    /* li r7, 4 */
    /* 0x80555bf8() */
    /* sth r24, 0x2c0(r19) */
    /* addi r0, r26, 0x38 */
    /* li r3, 0xe */
    /* r19+0x2c4 = r25 */
    /* r19+0x2c8 = r24 */
    /* sth r24, 0x2cc(r19) */
    /* r19+0x2d4 = r24 */
    /* r19+0x2d8 = r24 */
    /* r19+0x0 = r26 */
    /* r19+0x2bc = r0 */
    /* f0 = *(f32*)(r27+0x284) */
    /* *(f32*)(r20+0x0) = f30 */
    /* fmuls f0, f30, f0 */
    /* *(f32*)(r20+0x4) = f31 */
    /* fmuls f0, f0, f0 */
    /* *(f32*)(r20+0x8) = f0 */
    /* r19+0x2d8 = r19 */
    /* r19+0x2d4 = r29 */
    /* sth r30, 0x2cc(r19) */
    /* 0x80555bf8() */
    /* r19+0x2d0 = r3 */
    /* addi r0, r31, -1 */
    /* sth r0, 0(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 2(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 4(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 6(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 8(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 0xa(r3) */
    /* r3 = r19+0x2d0 */
    /* sth r0, 0xc(r3) */
    /* r0 = r28+0x0 */
    /* r3 = r19+0x2d0 */
    /* slwi r0, r0, 1 */
    /* sthx r24, r3, r0 */
    /* r0 = r29+0x1c */
    /* r3 = r19+0x2d0 */
    /* slwi r0, r0, 1 */
    /* sthx r14, r3, r0 */
    /* r0 = r29+0x38 */
    /* r4 = r19+0x2d0 */
    /* slwi r3, r0, 1 */
    /* li r0, 2 */
    /* sthx r0, r4, r3 */
    /* r0 = r29+0x54 */
    /* r4 = r19+0x2d0 */
    /* slwi r3, r0, 1 */
    /* li r0, 3 */
    /* sthx r0, r4, r3 */
    /* r0 = r29+0x70 */
    /* r4 = r19+0x2d0 */
    /* slwi r3, r0, 1 */
    /* li r0, 4 */
    /* sthx r0, r4, r3 */
    /* r0 = r29+0x8c */
    /* r4 = r19+0x2d0 */
    /* slwi r3, r0, 1 */
    /* li r0, 5 */
    /* sthx r0, r4, r3 */
    /* r0 = r29+0xa8 */
    /* r4 = r19+0x2d0 */
    /* slwi r3, r0, 1 */
    /* li r0, 6 */
    /* sthx r0, r4, r3 */
    /* r17+0x0 = r19 */
    /* addi r17, r17, 4 */
    /* addi r16, r16, 1 */
    /* cmpw r16, r15 */
    /* if (cr0 <) goto 0x807a7634 */
    /* r3 = stack[0x8] */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a762c: 39 c0 00 01              li       r14, 1 */
/* 0x807a7630: 48 00 01 70              b        0x807a77a0 */
/* 0x807a7634: 38 60 03 38              li       r3, 0x338 */
/* 0x807a7638: 4b da e5 c1              bl       0x80555bf8 */
/* 0x807a763c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a7640: 7c 73 1b 78              mr       r19, r3 */
/* 0x807a7644: 41 82 01 50              beq      0x807a7794 */
/* 0x807a7648: 4b ff cb 3d              bl       0x807a4184 */
/* 0x807a764c: 3a 53 01 ec              addi     r18, r19, 0x1ec */
/* 0x807a7650: 92 b3 00 00              stw      r21, 0(r19) */
/* 0x807a7654: 7e 43 93 78              mr       r3, r18 */
/* 0x807a7658: 38 96 00 00              addi     r4, r22, 0 */
/* 0x807a765c: 38 b7 00 00              addi     r5, r23, 0 */
/* 0x807a7660: 38 c0 00 0c              li       r6, 0xc */
/* 0x807a7664: 38 e0 00 04              li       r7, 4 */
/* 0x807a7668: 4b da e5 91              bl       0x80555bf8 */
/* 0x807a766c: 38 72 00 30              addi     r3, r18, 0x30 */
/* 0x807a7670: 38 96 00 00              addi     r4, r22, 0 */
/* 0x807a7674: 38 b7 00 00              addi     r5, r23, 0 */
/* 0x807a7678: 38 c0 00 0c              li       r6, 0xc */
/* 0x807a767c: 38 e0 00 04              li       r7, 4 */
/* 0x807a7680: 4b da e5 79              bl       0x80555bf8 */
/* 0x807a7684: b3 13 02 c0              sth      r24, 0x2c0(r19) */
/* 0x807a7688: 38 1a 00 38              addi     r0, r26, 0x38 */
/* 0x807a768c: 38 60 00 0e              li       r3, 0xe */
/* 0x807a7690: 93 33 02 c4              stw      r25, 0x2c4(r19) */
/* 0x807a7694: 93 13 02 c8              stw      r24, 0x2c8(r19) */
/* 0x807a7698: b3 13 02 cc              sth      r24, 0x2cc(r19) */
/* 0x807a769c: 93 13 02 d4              stw      r24, 0x2d4(r19) */
/* 0x807a76a0: 93 13 02 d8              stw      r24, 0x2d8(r19) */
/* 0x807a76a4: 93 53 00 00              stw      r26, 0(r19) */
/* 0x807a76a8: 90 13 02 bc              stw      r0, 0x2bc(r19) */
/* 0x807a76ac: c0 1b 02 84              lfs      f0, 0x284(r27) */
/* 0x807a76b0: d3 d4 00 00              stfs     f30, 0(r20) */
/* 0x807a76b4: ec 1e 00 32              fmuls    f0, f30, f0 */
/* 0x807a76b8: d3 f4 00 04              stfs     f31, 4(r20) */
/* 0x807a76bc: ec 00 00 32              fmuls    f0, f0, f0 */
/* 0x807a76c0: d0 14 00 08              stfs     f0, 8(r20) */
/* 0x807a76c4: 92 73 02 d8              stw      r19, 0x2d8(r19) */
/* 0x807a76c8: 93 b3 02 d4              stw      r29, 0x2d4(r19) */
/* 0x807a76cc: b3 d3 02 cc              sth      r30, 0x2cc(r19) */
/* 0x807a76d0: 4b da e5 29              bl       0x80555bf8 */
/* 0x807a76d4: 90 73 02 d0              stw      r3, 0x2d0(r19) */
/* 0x807a76d8: 38 1f ff ff              addi     r0, r31, -1 */
/* 0x807a76dc: b0 03 00 00              sth      r0, 0(r3) */
/* 0x807a76e0: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a76e4: b0 03 00 02              sth      r0, 2(r3) */
/* 0x807a76e8: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a76ec: b0 03 00 04              sth      r0, 4(r3) */
/* 0x807a76f0: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a76f4: b0 03 00 06              sth      r0, 6(r3) */
/* 0x807a76f8: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a76fc: b0 03 00 08              sth      r0, 8(r3) */
/* 0x807a7700: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a7704: b0 03 00 0a              sth      r0, 0xa(r3) */
/* 0x807a7708: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a770c: b0 03 00 0c              sth      r0, 0xc(r3) */
/* 0x807a7710: a0 1c 00 00              lhz      r0, 0(r28) */
/* 0x807a7714: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a7718: 54 00 08 3c              slwi     r0, r0, 1 */
/* 0x807a771c: 7f 03 03 2e              sthx     r24, r3, r0 */
/* 0x807a7720: a0 1d 00 1c              lhz      r0, 0x1c(r29) */
/* 0x807a7724: 80 73 02 d0              lwz      r3, 0x2d0(r19) */
/* 0x807a7728: 54 00 08 3c              slwi     r0, r0, 1 */
/* 0x807a772c: 7d c3 03 2e              sthx     r14, r3, r0 */
/* 0x807a7730: a0 1d 00 38              lhz      r0, 0x38(r29) */
/* 0x807a7734: 80 93 02 d0              lwz      r4, 0x2d0(r19) */
/* 0x807a7738: 54 03 08 3c              slwi     r3, r0, 1 */
/* 0x807a773c: 38 00 00 02              li       r0, 2 */
/* 0x807a7740: 7c 04 1b 2e              sthx     r0, r4, r3 */
/* 0x807a7744: a0 1d 00 54              lhz      r0, 0x54(r29) */
/* 0x807a7748: 80 93 02 d0              lwz      r4, 0x2d0(r19) */
/* 0x807a774c: 54 03 08 3c              slwi     r3, r0, 1 */
/* 0x807a7750: 38 00 00 03              li       r0, 3 */
/* 0x807a7754: 7c 04 1b 2e              sthx     r0, r4, r3 */
/* 0x807a7758: a0 1d 00 70              lhz      r0, 0x70(r29) */
/* 0x807a775c: 80 93 02 d0              lwz      r4, 0x2d0(r19) */
/* 0x807a7760: 54 03 08 3c              slwi     r3, r0, 1 */
/* 0x807a7764: 38 00 00 04              li       r0, 4 */
/* 0x807a7768: 7c 04 1b 2e              sthx     r0, r4, r3 */
/* 0x807a776c: a0 1d 00 8c              lhz      r0, 0x8c(r29) */
/* 0x807a7770: 80 93 02 d0              lwz      r4, 0x2d0(r19) */
/* 0x807a7774: 54 03 08 3c              slwi     r3, r0, 1 */
/* 0x807a7778: 38 00 00 05              li       r0, 5 */
/* 0x807a777c: 7c 04 1b 2e              sthx     r0, r4, r3 */
/* 0x807a7780: a0 1d 00 a8              lhz      r0, 0xa8(r29) */
/* 0x807a7784: 80 93 02 d0              lwz      r4, 0x2d0(r19) */
/* 0x807a7788: 54 03 08 3c              slwi     r3, r0, 1 */
/* 0x807a778c: 38 00 00 06              li       r0, 6 */
/* 0x807a7790: 7c 04 1b 2e              sthx     r0, r4, r3 */
/* 0x807a7794: 92 71 00 00              stw      r19, 0(r17) */
/* 0x807a7798: 3a 31 00 04              addi     r17, r17, 4 */
/* 0x807a779c: 3a 10 00 01              addi     r16, r16, 1 */
/* 0x807a77a0: 7c 10 78 00              cmpw     r16, r15 */
/* 0x807a77a4: 41 80 fe 90              blt      0x807a7634 */
/* 0x807a77a8: 80 61 00 08              lwz      r3, 8(r1) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjBomb_loadModel
; Demangled: ItemObjBomb_loadModel
; Address: 0x807a762c  (.text+0x294d90)
; Size: 508 bytes

  0x807a762c:  li       r14, 1
  0x807a7630:  b        0x807a77a0
  0x807a7634:  li       r3, 0x338
  0x807a7638:  bl       0x80555bf8
  0x807a763c:  cmpwi    r3, 0
  0x807a7640:  mr       r19, r3
  0x807a7644:  beq      0x807a7794
  0x807a7648:  bl       0x807a4184
  0x807a764c:  addi     r18, r19, 0x1ec
  0x807a7650:  stw      r21, 0(r19)
  0x807a7654:  mr       r3, r18
  0x807a7658:  addi     r4, r22, 0
  0x807a765c:  addi     r5, r23, 0
  0x807a7660:  li       r6, 0xc
  0x807a7664:  li       r7, 4
  0x807a7668:  bl       0x80555bf8
  0x807a766c:  addi     r3, r18, 0x30
  0x807a7670:  addi     r4, r22, 0
  0x807a7674:  addi     r5, r23, 0
  0x807a7678:  li       r6, 0xc
  0x807a767c:  li       r7, 4
  0x807a7680:  bl       0x80555bf8
  0x807a7684:  sth      r24, 0x2c0(r19)
  0x807a7688:  addi     r0, r26, 0x38
  0x807a768c:  li       r3, 0xe
  0x807a7690:  stw      r25, 0x2c4(r19)
  0x807a7694:  stw      r24, 0x2c8(r19)
  0x807a7698:  sth      r24, 0x2cc(r19)
  0x807a769c:  stw      r24, 0x2d4(r19)
  0x807a76a0:  stw      r24, 0x2d8(r19)
  0x807a76a4:  stw      r26, 0(r19)
  0x807a76a8:  stw      r0, 0x2bc(r19)
  0x807a76ac:  lfs      f0, 0x284(r27)
  0x807a76b0:  stfs     f30, 0(r20)
  0x807a76b4:  fmuls    f0, f30, f0
  0x807a76b8:  stfs     f31, 4(r20)
  0x807a76bc:  fmuls    f0, f0, f0
  0x807a76c0:  stfs     f0, 8(r20)
  0x807a76c4:  stw      r19, 0x2d8(r19)
  0x807a76c8:  stw      r29, 0x2d4(r19)
  0x807a76cc:  sth      r30, 0x2cc(r19)
  0x807a76d0:  bl       0x80555bf8
  0x807a76d4:  stw      r3, 0x2d0(r19)
  0x807a76d8:  addi     r0, r31, -1
  0x807a76dc:  sth      r0, 0(r3)
  0x807a76e0:  lwz      r3, 0x2d0(r19)
  0x807a76e4:  sth      r0, 2(r3)
  0x807a76e8:  lwz      r3, 0x2d0(r19)
  0x807a76ec:  sth      r0, 4(r3)
  0x807a76f0:  lwz      r3, 0x2d0(r19)
  0x807a76f4:  sth      r0, 6(r3)
  0x807a76f8:  lwz      r3, 0x2d0(r19)
  0x807a76fc:  sth      r0, 8(r3)
  0x807a7700:  lwz      r3, 0x2d0(r19)
  0x807a7704:  sth      r0, 0xa(r3)
  0x807a7708:  lwz      r3, 0x2d0(r19)
  0x807a770c:  sth      r0, 0xc(r3)
  0x807a7710:  lhz      r0, 0(r28)
  0x807a7714:  lwz      r3, 0x2d0(r19)
  0x807a7718:  slwi     r0, r0, 1
  0x807a771c:  sthx     r24, r3, r0
  0x807a7720:  lhz      r0, 0x1c(r29)
  0x807a7724:  lwz      r3, 0x2d0(r19)
  0x807a7728:  slwi     r0, r0, 1
  0x807a772c:  sthx     r14, r3, r0
  0x807a7730:  lhz      r0, 0x38(r29)
  0x807a7734:  lwz      r4, 0x2d0(r19)
  0x807a7738:  slwi     r3, r0, 1
  0x807a773c:  li       r0, 2
  0x807a7740:  sthx     r0, r4, r3
  0x807a7744:  lhz      r0, 0x54(r29)
  0x807a7748:  lwz      r4, 0x2d0(r19)
  0x807a774c:  slwi     r3, r0, 1
  0x807a7750:  li       r0, 3
  0x807a7754:  sthx     r0, r4, r3
  0x807a7758:  lhz      r0, 0x70(r29)
  0x807a775c:  lwz      r4, 0x2d0(r19)
  0x807a7760:  slwi     r3, r0, 1
  0x807a7764:  li       r0, 4
  0x807a7768:  sthx     r0, r4, r3
  0x807a776c:  lhz      r0, 0x8c(r29)
  0x807a7770:  lwz      r4, 0x2d0(r19)
  0x807a7774:  slwi     r3, r0, 1
  0x807a7778:  li       r0, 5
  0x807a777c:  sthx     r0, r4, r3
  0x807a7780:  lhz      r0, 0xa8(r29)
  0x807a7784:  lwz      r4, 0x2d0(r19)
  0x807a7788:  slwi     r3, r0, 1
  0x807a778c:  li       r0, 6
  0x807a7790:  sthx     r0, r4, r3
  0x807a7794:  stw      r19, 0(r17)
  0x807a7798:  addi     r17, r17, 4
  0x807a779c:  addi     r16, r16, 1
  0x807a77a0:  cmpw     r16, r15
  0x807a77a4:  blt      0x807a7634
  0x807a77a8:  lwz      r3, 8(r1)

// Address: 0x807a66ac — ItemObjBomb_makeArray (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 448 bytes
/**
 * ItemObjBomb_makeArray
 * @addr 0x807a66ac
 * @size 448 bytes
 * @frame 16 bytes
 * @calls 8 function(s)
 */
void ItemObjBomb_makeArray(void) {
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a66ac: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a66b0: 7c 08 03 a6              mtlr     r0 */
/* 0x807a66b4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a66b8: 4e 80 00 20              blr       */
/* 0x807a66bc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a66c0: 7c 08 02 a6              mflr     r0 */
/* 0x807a66c4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a66c8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a66cc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a66d0: 4b ff 77 81              bl       0x8079de50 */
/* 0x807a66d4: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a66d8: 38 80 00 00              li       r4, 0 */
/* 0x807a66dc: 48 00 7f 49              bl       0x807ae624 */
/* 0x807a66e0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a66e4: 41 82 00 3c              beq      0x807a6720 */
/* 0x807a66e8: 80 1f 00 74              lwz      r0, 0x74(r31) */
/* 0x807a66ec: 3c 60 00 00              lis      r3, 0 */
/* 0x807a66f0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a66f4: 38 bf 00 44              addi     r5, r31, 0x44 */
/* 0x807a66f8: 54 00 05 ee              rlwinm   r0, r0, 0, 0x17, 0x17 */
/* 0x807a66fc: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a6700: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x807a6704: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a6708: c0 3f 00 68              lfs      f1, 0x68(r31) */
/* 0x807a670c: 38 df 02 d4              addi     r6, r31, 0x2d4 */
/* 0x807a6710: 80 ff 01 60              lwz      r7, 0x160(r31) */
/* 0x807a6714: 54 08 d9 7e              srwi     r8, r0, 5 */
/* 0x807a6718: 4b ee 8f a1              bl       0x8068f6b8 */
/* 0x807a671c: 48 00 00 18              b        0x807a6734 */
/* 0x807a6720: 3c 60 00 00              lis      r3, 0 */
/* 0x807a6724: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a6728: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a672c: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a6730: 4b ee 90 cd              bl       0x8068f7fc */
/* 0x807a6734: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a6738: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a673c: 7c 08 03 a6              mtlr     r0 */
/* 0x807a6740: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a6744: 4e 80 00 20              blr       */
/* 0x807a6748: 3c 80 00 00              lis      r4, 0 */
/* 0x807a674c: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x807a6750: 48 00 6b ac              b        0x807ad2fc */
/* 0x807a6754: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a6758: 38 80 00 04              li       r4, 4 */
/* 0x807a675c: 90 83 02 b8              stw      r4, 0x2b8(r3) */
/* 0x807a6760: 7c 65 1b 78              mr       r5, r3 */
/* 0x807a6764: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a6768: 4d 82 00 20              beqlr     */
/* 0x807a676c: 80 85 02 80              lwz      r4, 0x280(r5) */
/* 0x807a6770: 38 60 00 01              li       r3, 1 */
/* 0x807a6774: a8 05 00 0c              lha      r0, 0xc(r5) */
/* 0x807a6778: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a677c: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a6780: 4b ff 36 30              b        0x80799db0 */
/* 0x807a6784: 4e 80 00 20              blr       */
/* 0x807a6788: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a678c: 7c 08 02 a6              mflr     r0 */
/* 0x807a6790: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a6794: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a6798: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a679c: 80 03 02 bc              lwz      r0, 0x2bc(r3) */
/* 0x807a67a0: 28 00 00 10              cmplwi   r0, 0x10 */
/* 0x807a67a4: 40 81 00 44              ble      0x807a67e8 */
/* 0x807a67a8: 38 a0 00 01              li       r5, 1 */
/* 0x807a67ac: 48 00 52 09              bl       0x807ab9b4 */
/* 0x807a67b0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a67b4: 41 82 00 78              beq      0x807a682c */
/* 0x807a67b8: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a67bc: 38 60 00 04              li       r3, 4 */
/* 0x807a67c0: 90 7f 02 b8              stw      r3, 0x2b8(r31) */
/* 0x807a67c4: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a67c8: 41 82 00 64              beq      0x807a682c */
/* 0x807a67cc: 80 9f 02 80              lwz      r4, 0x280(r31) */
/* 0x807a67d0: 38 60 00 01              li       r3, 1 */
/* 0x807a67d4: a8 1f 00 0c              lha      r0, 0xc(r31) */
/* 0x807a67d8: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a67dc: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a67e0: 4b ff 35 d1              bl       0x80799db0 */
/* 0x807a67e4: 48 00 00 48              b        0x807a682c */
/* 0x807a67e8: 28 00 00 04              cmplwi   r0, 4 */
/* 0x807a67ec: 40 81 00 40              ble      0x807a682c */
/* 0x807a67f0: 38 a0 00 00              li       r5, 0 */
/* 0x807a67f4: 48 00 51 c1              bl       0x807ab9b4 */
/* 0x807a67f8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a67fc: 41 82 00 30              beq      0x807a682c */
/* 0x807a6800: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a6804: 38 60 00 04              li       r3, 4 */
/* 0x807a6808: 90 7f 02 b8              stw      r3, 0x2b8(r31) */
/* 0x807a680c: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a6810: 41 82 00 1c              beq      0x807a682c */
/* 0x807a6814: 80 9f 02 80              lwz      r4, 0x280(r31) */
/* 0x807a6818: 38 60 00 01              li       r3, 1 */
/* 0x807a681c: a8 1f 00 0c              lha      r0, 0xc(r31) */
/* 0x807a6820: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a6824: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a6828: 4b ff 35 89              bl       0x80799db0 */
/* 0x807a682c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a6830: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a6834: 7c 08 03 a6              mtlr     r0 */
/* 0x807a6838: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a683c: 4e 80 00 20              blr       */
/* 0x807a6840: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a6844: 7c 08 02 a6              mflr     r0 */
/* 0x807a6848: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a684c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a6850: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a6854: 80 03 00 b0              lwz      r0, 0xb0(r3) */
/* 0x807a6858: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a685c: 41 82 00 1c              beq      0x807a6878 */
/* 0x807a6860: a0 03 02 b4              lhz      r0, 0x2b4(r3) */
/* 0x807a6864: 28 00 00 06              cmplwi   r0, 6 */
/* 0x807a6868: 41 82 00 10              beq      0x807a6878 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjBomb_makeArray
; Demangled: ItemObjBomb_makeArray
; Address: 0x807a66ac  (.text+0x293e10)
; Size: 448 bytes

  0x807a66ac:  lwz      r31, 0xc(r1)
  0x807a66b0:  mtlr     r0
  0x807a66b4:  addi     r1, r1, 0x10
  0x807a66b8:  blr      
  0x807a66bc:  stwu     r1, -0x10(r1)
  0x807a66c0:  mflr     r0
  0x807a66c4:  stw      r0, 0x14(r1)
  0x807a66c8:  stw      r31, 0xc(r1)
  0x807a66cc:  mr       r31, r3
  0x807a66d0:  bl       0x8079de50
  0x807a66d4:  mr       r3, r31
  0x807a66d8:  li       r4, 0
  0x807a66dc:  bl       0x807ae624
  0x807a66e0:  cmpwi    r3, 0
  0x807a66e4:  beq      0x807a6720
  0x807a66e8:  lwz      r0, 0x74(r31)
  0x807a66ec:  lis      r3, 0
  0x807a66f0:  lwz      r3, 0(r3)
  0x807a66f4:  addi     r5, r31, 0x44
  0x807a66f8:  rlwinm   r0, r0, 0, 0x17, 0x17
  0x807a66fc:  lha      r4, 0xa(r31)
  0x807a6700:  cntlzw   r0, r0
  0x807a6704:  lwz      r3, 0x74(r3)
  0x807a6708:  lfs      f1, 0x68(r31)
  0x807a670c:  addi     r6, r31, 0x2d4
  0x807a6710:  lwz      r7, 0x160(r31)
  0x807a6714:  srwi     r8, r0, 5
  0x807a6718:  bl       0x8068f6b8
  0x807a671c:  b        0x807a6734
  0x807a6720:  lis      r3, 0
  0x807a6724:  lha      r4, 0xa(r31)
  0x807a6728:  lwz      r3, 0(r3)
  0x807a672c:  lwz      r3, 0x74(r3)
  0x807a6730:  bl       0x8068f7fc
  0x807a6734:  lwz      r0, 0x14(r1)
  0x807a6738:  lwz      r31, 0xc(r1)
  0x807a673c:  mtlr     r0
  0x807a6740:  addi     r1, r1, 0x10
  0x807a6744:  blr      
  0x807a6748:  lis      r4, 0
  0x807a674c:  lfs      f1, 0(r4)
  0x807a6750:  b        0x807ad2fc
  0x807a6754:  lwz      r0, 0x7c(r3)
  0x807a6758:  li       r4, 4
  0x807a675c:  stw      r4, 0x2b8(r3)
  0x807a6760:  mr       r5, r3
  0x807a6764:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a6768:  beqlr    
  0x807a676c:  lwz      r4, 0x280(r5)
  0x807a6770:  li       r3, 1
  0x807a6774:  lha      r0, 0xc(r5)
  0x807a6778:  lbz      r4, 0x18(r4)
  0x807a677c:  clrlwi   r5, r0, 0x10
  0x807a6780:  b        0x80799db0
  0x807a6784:  blr      
  0x807a6788:  stwu     r1, -0x10(r1)
  0x807a678c:  mflr     r0
  0x807a6790:  stw      r0, 0x14(r1)
  0x807a6794:  stw      r31, 0xc(r1)
  0x807a6798:  mr       r31, r3
  0x807a679c:  lwz      r0, 0x2bc(r3)
  0x807a67a0:  cmplwi   r0, 0x10
  0x807a67a4:  ble      0x807a67e8
  0x807a67a8:  li       r5, 1
  0x807a67ac:  bl       0x807ab9b4
  0x807a67b0:  cmpwi    r3, 0
  0x807a67b4:  beq      0x807a682c
  0x807a67b8:  lwz      r0, 0x7c(r31)
  0x807a67bc:  li       r3, 4
  0x807a67c0:  stw      r3, 0x2b8(r31)
  0x807a67c4:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a67c8:  beq      0x807a682c
  0x807a67cc:  lwz      r4, 0x280(r31)
  0x807a67d0:  li       r3, 1
  0x807a67d4:  lha      r0, 0xc(r31)
  0x807a67d8:  lbz      r4, 0x18(r4)
  0x807a67dc:  clrlwi   r5, r0, 0x10
  0x807a67e0:  bl       0x80799db0
  0x807a67e4:  b        0x807a682c
  0x807a67e8:  cmplwi   r0, 4
  0x807a67ec:  ble      0x807a682c
  0x807a67f0:  li       r5, 0
  0x807a67f4:  bl       0x807ab9b4
  0x807a67f8:  cmpwi    r3, 0
  0x807a67fc:  beq      0x807a682c
  0x807a6800:  lwz      r0, 0x7c(r31)
  0x807a6804:  li       r3, 4
  0x807a6808:  stw      r3, 0x2b8(r31)
  0x807a680c:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a6810:  beq      0x807a682c
  0x807a6814:  lwz      r4, 0x280(r31)
  0x807a6818:  li       r3, 1
  0x807a681c:  lha      r0, 0xc(r31)
  0x807a6820:  lbz      r4, 0x18(r4)
  0x807a6824:  clrlwi   r5, r0, 0x10
  0x807a6828:  bl       0x80799db0
  0x807a682c:  lwz      r0, 0x14(r1)
  0x807a6830:  lwz      r31, 0xc(r1)
  0x807a6834:  mtlr     r0
  0x807a6838:  addi     r1, r1, 0x10
  0x807a683c:  blr      
  0x807a6840:  stwu     r1, -0x10(r1)
  0x807a6844:  mflr     r0
  0x807a6848:  stw      r0, 0x14(r1)
  0x807a684c:  stw      r31, 0xc(r1)
  0x807a6850:  mr       r31, r3
  0x807a6854:  lwz      r0, 0xb0(r3)
  0x807a6858:  cmpwi    r0, 0
  0x807a685c:  beq      0x807a6878
  0x807a6860:  lhz      r0, 0x2b4(r3)
  0x807a6864:  cmplwi   r0, 6
  0x807a6868:  beq      0x807a6878
