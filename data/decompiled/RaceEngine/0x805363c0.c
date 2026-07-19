/**
 * RaceinfoPlayer_construct
 * @addr 0x805363c0
 * @size 700 bytes
 * @frame 0 bytes
 * @calls 5 function(s)
 */
void RaceinfoPlayer_construct(void) {
    /* r1+0x2c = r31 */
    /* mulli r0, r0, 0x3c */
    /* r5 = r4+0x6 */
    /* r1+0x28 = r30 */
    /* r30 = r3 */
    /* r3 = r4+0x8 */
    /* add r0, r5, r0 */
    /* mulli r0, r0, 0x3e8 */
    /* r1+0x24 = r29 */
    /* r1+0x20 = r28 */
    /* add r4, r3, r0 */
    /* srawi r3, r4, 0x1f */
    /* 0x80555bf8() */
    /* fmuls f1, f31, f1 */
    /* 0x80555bf8() */
    /* r5, 0x393  (load upper immediate) */
    /* li r6, 0 */
    /* addi r0, r5, -0x6360 */
    /* r31 = r4 */
    /* subfc r0, r0, r4 */
    /* r29 = r3 */
    /* subfe r0, r6, r3 */
    /* subfe r0, r4, r4 */
    /* neg. r0, r0 */
    /* if (cr0 !=) goto 0x80536450 */
    /* r5, 0  (load upper immediate) */
    /* r3, 1  (load upper immediate) */
    /* addi r5, r5, 0 */
    /* li r4, 1 */
    /* addi r0, r3, -1 */
    /* r30+0x0 = r5 */
    /* stb r4, 0xa(r30) */
    /* sth r0, 4(r30) */
    /* stb r6, 6(r30) */
    /* sth r6, 8(r30) */
    /* goto 0x805364ec */
    /* 0x80555bf8() */
    /* r4, 0  (load upper immediate) */
    /* r3, 1  (load upper immediate) */
    /* f0 = *(f32*)(r4+0x0) */
    /* addi r0, r3, -0x15a0 */
    /* fmuls f0, f0, f1 */
    /* fctiwz f0, f0 */
    /* *(f32*)(r1+0x8) = f0 */
    /* r28 = stack[0xc] */
    /* clrlwi r3, r28, 0x10 */
    /* mullw r3, r3, r0 */
    /* srawi r0, r3, 0x1f */
    /* subfc r31, r3, r31 */
    /* subfe r29, r0, r29 */
    /* r3 = r29 */
    /* r4 = r31 */
    /* 0x80555bf8() */
    /* r4, 0  (load upper immediate) */
    /* li r0, 1 */
    /* f0 = *(f32*)(r4+0x0) */
    /* r3, 0  (load upper immediate) */
    /* addi r3, r3, 0 */
    /* stb r0, 0xa(r30) */
    /* fmuls f0, f0, f1 */
    /* li r6, 0x3e8 */
    /* r30+0x0 = r3 */
    /* li r5, 0 */
    /* fctiwz f0, f0 */
    /* sth r28, 4(r30) */
    /* *(f32*)(r1+0x10) = f0 */
    /* r0 = stack[0x14] */
    /* stb r0, 6(r30) */
    /* clrlwi r0, r0, 0x18 */
    /* mulli r3, r0, 0x3e8 */
    /* srawi r0, r3, 0x1f */
    /* subfc r4, r3, r31 */
    /* subfe r3, r0, r29 */
    /* 0x80555bf8() */
    /* sth r4, 8(r30) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805363c0: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x805363c4: 1c 00 00 3c              mulli    r0, r0, 0x3c */
/* 0x805363c8: 88 a4 00 06              lbz      r5, 6(r4) */
/* 0x805363cc: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x805363d0: 7c 7e 1b 78              mr       r30, r3 */
/* 0x805363d4: a0 64 00 08              lhz      r3, 8(r4) */
/* 0x805363d8: 7c 05 02 14              add      r0, r5, r0 */
/* 0x805363dc: 1c 00 03 e8              mulli    r0, r0, 0x3e8 */
/* 0x805363e0: 93 a1 00 24              stw      r29, 0x24(r1) */
/* 0x805363e4: 93 81 00 20              stw      r28, 0x20(r1) */
/* 0x805363e8: 7c 83 02 14              add      r4, r3, r0 */
/* 0x805363ec: 7c 83 fe 70              srawi    r3, r4, 0x1f */
/* 0x805363f0: 48 01 f8 09              bl       0x80555bf8 */
/* 0x805363f4: ec 3f 00 72              fmuls    f1, f31, f1 */
/* 0x805363f8: 48 01 f8 01              bl       0x80555bf8 */
/* 0x805363fc: 3c a0 03 93              lis      r5, 0x393 */
/* 0x80536400: 38 c0 00 00              li       r6, 0 */
/* 0x80536404: 38 05 9c a0              addi     r0, r5, -0x6360 */
/* 0x80536408: 7c 9f 23 78              mr       r31, r4 */
/* 0x8053640c: 7c 00 20 10              subfc    r0, r0, r4 */
/* 0x80536410: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80536414: 7c 06 19 10              subfe    r0, r6, r3 */
/* 0x80536418: 7c 04 21 10              subfe    r0, r4, r4 */
/* 0x8053641c: 7c 00 00 d1              neg.     r0, r0 */
/* 0x80536420: 40 82 00 30              bne      0x80536450 */
/* 0x80536424: 3c a0 00 00              lis      r5, 0 */
/* 0x80536428: 3c 60 00 01              lis      r3, 1 */
/* 0x8053642c: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x80536430: 38 80 00 01              li       r4, 1 */
/* 0x80536434: 38 03 ff ff              addi     r0, r3, -1 */
/* 0x80536438: 90 be 00 00              stw      r5, 0(r30) */
/* 0x8053643c: 98 9e 00 0a              stb      r4, 0xa(r30) */
/* 0x80536440: b0 1e 00 04              sth      r0, 4(r30) */
/* 0x80536444: 98 de 00 06              stb      r6, 6(r30) */
/* 0x80536448: b0 de 00 08              sth      r6, 8(r30) */
/* 0x8053644c: 48 00 00 a0              b        0x805364ec */
/* 0x80536450: 48 01 f7 a9              bl       0x80555bf8 */
/* 0x80536454: 3c 80 00 00              lis      r4, 0 */
/* 0x80536458: 3c 60 00 01              lis      r3, 1 */
/* 0x8053645c: c0 04 00 00              lfs      f0, 0(r4) */
/* 0x80536460: 38 03 ea 60              addi     r0, r3, -0x15a0 */
/* 0x80536464: ec 00 00 72              fmuls    f0, f0, f1 */
/* 0x80536468: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x8053646c: d8 01 00 08              stfd     f0, 8(r1) */
/* 0x80536470: 83 81 00 0c              lwz      r28, 0xc(r1) */
/* 0x80536474: 57 83 04 3e              clrlwi   r3, r28, 0x10 */
/* 0x80536478: 7c 63 01 d6              mullw    r3, r3, r0 */
/* 0x8053647c: 7c 60 fe 70              srawi    r0, r3, 0x1f */
/* 0x80536480: 7f e3 f8 10              subfc    r31, r3, r31 */
/* 0x80536484: 7f a0 e9 10              subfe    r29, r0, r29 */
/* 0x80536488: 7f a3 eb 78              mr       r3, r29 */
/* 0x8053648c: 7f e4 fb 78              mr       r4, r31 */
/* 0x80536490: 48 01 f7 69              bl       0x80555bf8 */
/* 0x80536494: 3c 80 00 00              lis      r4, 0 */
/* 0x80536498: 38 00 00 01              li       r0, 1 */
/* 0x8053649c: c0 04 00 00              lfs      f0, 0(r4) */
/* 0x805364a0: 3c 60 00 00              lis      r3, 0 */
/* 0x805364a4: 38 63 00 00              addi     r3, r3, 0 */
/* 0x805364a8: 98 1e 00 0a              stb      r0, 0xa(r30) */
/* 0x805364ac: ec 00 00 72              fmuls    f0, f0, f1 */
/* 0x805364b0: 38 c0 03 e8              li       r6, 0x3e8 */
/* 0x805364b4: 90 7e 00 00              stw      r3, 0(r30) */
/* 0x805364b8: 38 a0 00 00              li       r5, 0 */
/* 0x805364bc: fc 00 00 1e              fctiwz   f0, f0 */
/* 0x805364c0: b3 9e 00 04              sth      r28, 4(r30) */
/* 0x805364c4: d8 01 00 10              stfd     f0, 0x10(r1) */
/* 0x805364c8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x805364cc: 98 1e 00 06              stb      r0, 6(r30) */
/* 0x805364d0: 54 00 06 3e              clrlwi   r0, r0, 0x18 */
/* 0x805364d4: 1c 60 03 e8              mulli    r3, r0, 0x3e8 */
/* 0x805364d8: 7c 60 fe 70              srawi    r0, r3, 0x1f */
/* 0x805364dc: 7c 83 f8 10              subfc    r4, r3, r31 */
/* 0x805364e0: 7c 60 e9 10              subfe    r3, r0, r29 */
/* 0x805364e4: 48 01 f7 15              bl       0x80555bf8 */
/* 0x805364e8: b0 9e 00 08              sth      r4, 8(r30) */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_construct
; Demangled: RaceinfoPlayer_construct
; Address: 0x805363c0  (.text+0x23b24)
; Size: 700 bytes

  0x805363c0:  stw      r31, 0x2c(r1)
  0x805363c4:  mulli    r0, r0, 0x3c
  0x805363c8:  lbz      r5, 6(r4)
  0x805363cc:  stw      r30, 0x28(r1)
  0x805363d0:  mr       r30, r3
  0x805363d4:  lhz      r3, 8(r4)
  0x805363d8:  add      r0, r5, r0
  0x805363dc:  mulli    r0, r0, 0x3e8
  0x805363e0:  stw      r29, 0x24(r1)
  0x805363e4:  stw      r28, 0x20(r1)
  0x805363e8:  add      r4, r3, r0
  0x805363ec:  srawi    r3, r4, 0x1f
  0x805363f0:  bl       0x80555bf8
  0x805363f4:  fmuls    f1, f31, f1
  0x805363f8:  bl       0x80555bf8
  0x805363fc:  lis      r5, 0x393
  0x80536400:  li       r6, 0
  0x80536404:  addi     r0, r5, -0x6360
  0x80536408:  mr       r31, r4
  0x8053640c:  subfc    r0, r0, r4
  0x80536410:  mr       r29, r3
  0x80536414:  subfe    r0, r6, r3
  0x80536418:  subfe    r0, r4, r4
  0x8053641c:  neg.     r0, r0
  0x80536420:  bne      0x80536450
  0x80536424:  lis      r5, 0
  0x80536428:  lis      r3, 1
  0x8053642c:  addi     r5, r5, 0
  0x80536430:  li       r4, 1
  0x80536434:  addi     r0, r3, -1
  0x80536438:  stw      r5, 0(r30)
  0x8053643c:  stb      r4, 0xa(r30)
  0x80536440:  sth      r0, 4(r30)
  0x80536444:  stb      r6, 6(r30)
  0x80536448:  sth      r6, 8(r30)
  0x8053644c:  b        0x805364ec
  0x80536450:  bl       0x80555bf8
  0x80536454:  lis      r4, 0
  0x80536458:  lis      r3, 1
  0x8053645c:  lfs      f0, 0(r4)
  0x80536460:  addi     r0, r3, -0x15a0
  0x80536464:  fmuls    f0, f0, f1
  0x80536468:  fctiwz   f0, f0
  0x8053646c:  stfd     f0, 8(r1)
  0x80536470:  lwz      r28, 0xc(r1)
  0x80536474:  clrlwi   r3, r28, 0x10
  0x80536478:  mullw    r3, r3, r0
  0x8053647c:  srawi    r0, r3, 0x1f
  0x80536480:  subfc    r31, r3, r31
  0x80536484:  subfe    r29, r0, r29
  0x80536488:  mr       r3, r29
  0x8053648c:  mr       r4, r31
  0x80536490:  bl       0x80555bf8
  0x80536494:  lis      r4, 0
  0x80536498:  li       r0, 1
  0x8053649c:  lfs      f0, 0(r4)
  0x805364a0:  lis      r3, 0
  0x805364a4:  addi     r3, r3, 0
  0x805364a8:  stb      r0, 0xa(r30)
  0x805364ac:  fmuls    f0, f0, f1
  0x805364b0:  li       r6, 0x3e8
  0x805364b4:  stw      r3, 0(r30)
  0x805364b8:  li       r5, 0
  0x805364bc:  fctiwz   f0, f0
  0x805364c0:  sth      r28, 4(r30)
  0x805364c4:  stfd     f0, 0x10(r1)
  0x805364c8:  lwz      r0, 0x14(r1)
  0x805364cc:  stb      r0, 6(r30)
  0x805364d0:  clrlwi   r0, r0, 0x18
  0x805364d4:  mulli    r3, r0, 0x3e8
  0x805364d8:  srawi    r0, r3, 0x1f
  0x805364dc:  subfc    r4, r3, r31
  0x805364e0:  subfe    r3, r0, r29
  0x805364e4:  bl       0x80555bf8
  0x805364e8:  sth      r4, 8(r30)
