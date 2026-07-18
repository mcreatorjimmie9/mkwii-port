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
