/**
 * cancelBullet
 * @addr 0x8059e600
 * @size 388 bytes
 * @frame 0 bytes
 * @calls 4 function(s)
 */
bool cancelBullet(void) {
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* li r4, 1 */
    /* f29 = *(f32*)(r5+0xc) */
    /* 0x80537f50() */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x8059e650 */
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* r0 = r3+0xb70 */
    /* cmpwi r0, 4 */
    /* if (cr0 !=) goto 0x8059e638 */
    /* f2 = *(f32*)(r31+0x120) */
    /* goto 0x8059e63c */
    /* f2 = *(f32*)(r31+0x12c) */
    /* f1 = *(f32*)(r28+0x344) */
    /* fsubs f0, f29, f1 */
    /* fmuls f0, f2, f0 */
    /* fadds f29, f1, f0 */
    /* *(f32*)(r28+0x344) = f29 */
    /* r3 = r30 */
    /* 0x80590a0c() */
    /* fsubs f31, f29, f1 */
    /* r3 = r30 */
    /* 0x805907c0() */
    /* r6, 0  (load upper immediate) */
    /* f30 = *(f32*)(r31+0x0) */
    /* addi r5, r6, 0 */
    /* f3 = *(f32*)(r3+0x80) */
    /* f2 = *(f32*)(r6+0x0) */
    /* fmr f29, f30 */
    /* f1 = *(f32*)(r3+0x84) */
    /* f0 = *(f32*)(r5+0x4) */
    /* fmuls f2, f3, f2 */
    /* f3 = *(f32*)(r3+0x88) */
    /* fmuls f0, f1, f0 */
    /* f1 = *(f32*)(r5+0x8) */
    /* r4 = r30+0x0 */
    /* fmuls f1, f3, f1 */
    /* fadds f0, f2, f0 */
    /* r3 = r4+0x4 */
    /* r0 = r3+0x8 */
    /* fadds f0, f1, f0 */
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */
    /* fabs f0, f0 */
    /* fmuls f27, f27, f0 */
    /* if (cr0 ==) goto 0x8059e6e4 */
    /* f30 = *(f32*)(r31+0x140) */
    /* r3 = r30 */
    /* 0x80590d4c() */
    /* fmr f0, f29 */
    /* f1 = *(f32*)(r3+0x4) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8059e600: 3c 60 00 00              lis      r3, 0 */
/* 0x8059e604: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8059e608: 38 80 00 01              li       r4, 1 */
/* 0x8059e60c: c3 a5 00 0c              lfs      f29, 0xc(r5) */
/* 0x8059e610: 4b f9 99 41              bl       0x80537f50 */
/* 0x8059e614: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8059e618: 40 82 00 38              bne      0x8059e650 */
/* 0x8059e61c: 3c 60 00 00              lis      r3, 0 */
/* 0x8059e620: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8059e624: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x8059e628: 2c 00 00 04              cmpwi    r0, 4 */
/* 0x8059e62c: 40 82 00 0c              bne      0x8059e638 */
/* 0x8059e630: c0 5f 01 20              lfs      f2, 0x120(r31) */
/* 0x8059e634: 48 00 00 08              b        0x8059e63c */
/* 0x8059e638: c0 5f 01 2c              lfs      f2, 0x12c(r31) */
/* 0x8059e63c: c0 3c 03 44              lfs      f1, 0x344(r28) */
/* 0x8059e640: ec 1d 08 28              fsubs    f0, f29, f1 */
/* 0x8059e644: ec 02 00 32              fmuls    f0, f2, f0 */
/* 0x8059e648: ef a1 00 2a              fadds    f29, f1, f0 */
/* 0x8059e64c: d3 bc 03 44              stfs     f29, 0x344(r28) */
/* 0x8059e650: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e654: 4b ff 23 b9              bl       0x80590a0c */
/* 0x8059e658: ef fd 08 28              fsubs    f31, f29, f1 */
/* 0x8059e65c: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e660: 4b ff 21 61              bl       0x805907c0 */
/* 0x8059e664: 3c c0 00 00              lis      r6, 0 */
/* 0x8059e668: c3 df 00 00              lfs      f30, 0(r31) */
/* 0x8059e66c: 38 a6 00 00              addi     r5, r6, 0 */
/* 0x8059e670: c0 63 00 80              lfs      f3, 0x80(r3) */
/* 0x8059e674: c0 46 00 00              lfs      f2, 0(r6) */
/* 0x8059e678: ff a0 f0 90              fmr      f29, f30 */
/* 0x8059e67c: c0 23 00 84              lfs      f1, 0x84(r3) */
/* 0x8059e680: c0 05 00 04              lfs      f0, 4(r5) */
/* 0x8059e684: ec 43 00 b2              fmuls    f2, f3, f2 */
/* 0x8059e688: c0 63 00 88              lfs      f3, 0x88(r3) */
/* 0x8059e68c: ec 01 00 32              fmuls    f0, f1, f0 */
/* 0x8059e690: c0 25 00 08              lfs      f1, 8(r5) */
/* 0x8059e694: 80 9e 00 00              lwz      r4, 0(r30) */
/* 0x8059e698: ec 23 00 72              fmuls    f1, f3, f1 */
/* 0x8059e69c: ec 02 00 2a              fadds    f0, f2, f0 */
/* 0x8059e6a0: 80 64 00 04              lwz      r3, 4(r4) */
/* 0x8059e6a4: 80 03 00 08              lwz      r0, 8(r3) */
/* 0x8059e6a8: ec 01 00 2a              fadds    f0, f1, f0 */
/* 0x8059e6ac: 54 00 05 6b              rlwinm.  r0, r0, 0, 0x15, 0x15 */
/* 0x8059e6b0: fc 00 02 10              fabs     f0, f0 */
/* 0x8059e6b4: ef 7b 00 32              fmuls    f27, f27, f0 */
/* 0x8059e6b8: 41 82 00 2c              beq      0x8059e6e4 */
/* 0x8059e6bc: c3 df 01 40              lfs      f30, 0x140(r31) */
/* 0x8059e6c0: 7f c3 f3 78              mr       r3, r30 */
/* 0x8059e6c4: 4b ff 26 89              bl       0x80590d4c */
/* 0x8059e6c8: fc 00 e8 90              fmr      f0, f29 */
/* 0x8059e6cc: c0 23 00 04              lfs      f1, 4(r3) */
#endif


/* === DISASSEMBLY === */

; Function: cancelBullet
; Demangled: cancelBullet
; Address: 0x8059e600  (.text+0x8bd64)
; Size: 388 bytes

  0x8059e600:  lis      r3, 0
  0x8059e604:  lwz      r3, 0(r3)
  0x8059e608:  li       r4, 1
  0x8059e60c:  lfs      f29, 0xc(r5)
  0x8059e610:  bl       0x80537f50
  0x8059e614:  cmpwi    r3, 0
  0x8059e618:  bne      0x8059e650
  0x8059e61c:  lis      r3, 0
  0x8059e620:  lwz      r3, 0(r3)
  0x8059e624:  lwz      r0, 0xb70(r3)
  0x8059e628:  cmpwi    r0, 4
  0x8059e62c:  bne      0x8059e638
  0x8059e630:  lfs      f2, 0x120(r31)
  0x8059e634:  b        0x8059e63c
  0x8059e638:  lfs      f2, 0x12c(r31)
  0x8059e63c:  lfs      f1, 0x344(r28)
  0x8059e640:  fsubs    f0, f29, f1
  0x8059e644:  fmuls    f0, f2, f0
  0x8059e648:  fadds    f29, f1, f0
  0x8059e64c:  stfs     f29, 0x344(r28)
  0x8059e650:  mr       r3, r30
  0x8059e654:  bl       0x80590a0c
  0x8059e658:  fsubs    f31, f29, f1
  0x8059e65c:  mr       r3, r30
  0x8059e660:  bl       0x805907c0
  0x8059e664:  lis      r6, 0
  0x8059e668:  lfs      f30, 0(r31)
  0x8059e66c:  addi     r5, r6, 0
  0x8059e670:  lfs      f3, 0x80(r3)
  0x8059e674:  lfs      f2, 0(r6)
  0x8059e678:  fmr      f29, f30
  0x8059e67c:  lfs      f1, 0x84(r3)
  0x8059e680:  lfs      f0, 4(r5)
  0x8059e684:  fmuls    f2, f3, f2
  0x8059e688:  lfs      f3, 0x88(r3)
  0x8059e68c:  fmuls    f0, f1, f0
  0x8059e690:  lfs      f1, 8(r5)
  0x8059e694:  lwz      r4, 0(r30)
  0x8059e698:  fmuls    f1, f3, f1
  0x8059e69c:  fadds    f0, f2, f0
  0x8059e6a0:  lwz      r3, 4(r4)
  0x8059e6a4:  lwz      r0, 8(r3)
  0x8059e6a8:  fadds    f0, f1, f0
  0x8059e6ac:  rlwinm.  r0, r0, 0, 0x15, 0x15
  0x8059e6b0:  fabs     f0, f0
  0x8059e6b4:  fmuls    f27, f27, f0
  0x8059e6b8:  beq      0x8059e6e4
  0x8059e6bc:  lfs      f30, 0x140(r31)
  0x8059e6c0:  mr       r3, r30
  0x8059e6c4:  bl       0x80590d4c
  0x8059e6c8:  fmr      f0, f29
  0x8059e6cc:  lfs      f1, 4(r3)
