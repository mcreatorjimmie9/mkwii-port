/**
 * RaceinfoPlayer_updateCheckpoint
 * @addr 0x805372e0
 * @size 1044 bytes
 * @frame 0 bytes
 * @calls 4 function(s)
 */
void RaceinfoPlayer_updateCheckpoint(void) {
    /* r3, 0  (load upper immediate) */
    /* r4 = r30+0x8 */
    /* r3 = r3+0x0 */
    /* 0x80590144() */
    /* addi r4, r1, 0x18 */
    /* 0x80590cd8() */
    /* r3, 0  (load upper immediate) */
    /* f0 = *(f32*)(r1+0x18) */
    /* f1 = *(f32*)(r3+0x0) */
    /* fcmpu cr0, f1, f0 */
    /* if (cr0 !=) goto 0x80537318 */
    /* f0 = *(f32*)(r1+0x20) */
    /* fcmpu cr0, f1, f0 */
    /* if (cr0 ==) goto 0x8053739c */
    /* f1 = *(f32*)(r1+0x20) */
    /* addi r3, r1, 0x10 */
    /* f0 = *(f32*)(r1+0x18) */
    /* *(f32*)(r1+0x10) = f0 */
    /* *(f32*)(r1+0x14) = f1 */
    /* 0x80555bf8() */
    /* r3, 0  (load upper immediate) */
    /* r3 = r3+0x0 */
    /* 0x8051af6c() */
    /* r3 = r3+0x0 */
    /* r0 = r3+0x0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8053739c */
    /* f1 = *(f32*)(r1+0x14) */
    /* r3, 0  (load upper immediate) */
    /* f0 = *(f32*)(r31+0x14) */
    /* f3 = *(f32*)(r1+0x10) */
    /* f2 = *(f32*)(r31+0x10) */
    /* fmuls f1, f0, f1 */
    /* f0 = *(f32*)(r3+0x0) */
    /* fmuls f2, f2, f3 */
    /* fadds f1, f2, f1 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805372e0: 3c 60 00 00              lis      r3, 0 */
/* 0x805372e4: 88 9e 00 08              lbz      r4, 8(r30) */
/* 0x805372e8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x805372ec: 48 05 8e 59              bl       0x80590144 */
/* 0x805372f0: 38 81 00 18              addi     r4, r1, 0x18 */
/* 0x805372f4: 48 05 99 e5              bl       0x80590cd8 */
/* 0x805372f8: 3c 60 00 00              lis      r3, 0 */
/* 0x805372fc: c0 01 00 18              lfs      f0, 0x18(r1) */
/* 0x80537300: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x80537304: fc 01 00 00              fcmpu    cr0, f1, f0 */
/* 0x80537308: 40 82 00 10              bne      0x80537318 */
/* 0x8053730c: c0 01 00 20              lfs      f0, 0x20(r1) */
/* 0x80537310: fc 01 00 00              fcmpu    cr0, f1, f0 */
/* 0x80537314: 41 82 00 88              beq      0x8053739c */
/* 0x80537318: c0 21 00 20              lfs      f1, 0x20(r1) */
/* 0x8053731c: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x80537320: c0 01 00 18              lfs      f0, 0x18(r1) */
/* 0x80537324: d0 01 00 10              stfs     f0, 0x10(r1) */
/* 0x80537328: d0 21 00 14              stfs     f1, 0x14(r1) */
/* 0x8053732c: 48 01 e8 cd              bl       0x80555bf8 */
/* 0x80537330: 3c 60 00 00              lis      r3, 0 */
/* 0x80537334: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80537338: 4b fe 3c 35              bl       0x8051af6c */
/* 0x8053733c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80537340: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x80537344: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80537348: 41 82 00 54              beq      0x8053739c */
/* 0x8053734c: c0 21 00 14              lfs      f1, 0x14(r1) */
/* 0x80537350: 3c 60 00 00              lis      r3, 0 */
/* 0x80537354: c0 1f 00 14              lfs      f0, 0x14(r31) */
/* 0x80537358: c0 61 00 10              lfs      f3, 0x10(r1) */
/* 0x8053735c: c0 5f 00 10              lfs      f2, 0x10(r31) */
/* 0x80537360: ec 20 00 72              fmuls    f1, f0, f1 */
/* 0x80537364: c0 03 00 00              lfs      f0, 0(r3) */
/* 0x80537368: ec 42 00 f2              fmuls    f2, f2, f3 */
/* 0x8053736c: ec 22 08 2a              fadds    f1, f2, f1 */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_updateCheckpoint
; Demangled: RaceinfoPlayer_updateCheckpoint
; Address: 0x805372e0  (.text+0x24a44)
; Size: 1044 bytes

  0x805372e0:  lis      r3, 0
  0x805372e4:  lbz      r4, 8(r30)
  0x805372e8:  lwz      r3, 0(r3)
  0x805372ec:  bl       0x80590144
  0x805372f0:  addi     r4, r1, 0x18
  0x805372f4:  bl       0x80590cd8
  0x805372f8:  lis      r3, 0
  0x805372fc:  lfs      f0, 0x18(r1)
  0x80537300:  lfs      f1, 0(r3)
  0x80537304:  fcmpu    cr0, f1, f0
  0x80537308:  bne      0x80537318
  0x8053730c:  lfs      f0, 0x20(r1)
  0x80537310:  fcmpu    cr0, f1, f0
  0x80537314:  beq      0x8053739c
  0x80537318:  lfs      f1, 0x20(r1)
  0x8053731c:  addi     r3, r1, 0x10
  0x80537320:  lfs      f0, 0x18(r1)
  0x80537324:  stfs     f0, 0x10(r1)
  0x80537328:  stfs     f1, 0x14(r1)
  0x8053732c:  bl       0x80555bf8
  0x80537330:  lis      r3, 0
  0x80537334:  lwz      r3, 0(r3)
  0x80537338:  bl       0x8051af6c
  0x8053733c:  lwz      r3, 0(r3)
  0x80537340:  lbz      r0, 0(r3)
  0x80537344:  cmpwi    r0, 0
  0x80537348:  beq      0x8053739c
  0x8053734c:  lfs      f1, 0x14(r1)
  0x80537350:  lis      r3, 0
  0x80537354:  lfs      f0, 0x14(r31)
  0x80537358:  lfs      f3, 0x10(r1)
  0x8053735c:  lfs      f2, 0x10(r31)
  0x80537360:  fmuls    f1, f0, f1
  0x80537364:  lfs      f0, 0(r3)
  0x80537368:  fmuls    f2, f2, f3
  0x8053736c:  fadds    f1, f2, f1
