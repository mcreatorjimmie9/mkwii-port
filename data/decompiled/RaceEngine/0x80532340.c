/**
 * createInstance__System10RaceConfigFv
 * @addr 0x80532340
 * @size 400 bytes
 * @frame 0 bytes
 */
void System10RaceConfig(void* self) {
    /* stb r8, 0x1c(r5) */
    /* r8 = r6+0x1d */
    /* stb r8, 0x1d(r5) */
    /* r8 = r6+0x20 */
    /* r5+0x20 = r8 */
    /* mtctr r0 */
    /* r9 = r10+0x1 */
    /* lbzu r8, 2(r10) */
    /* stb r9, 1(r11) */
    /* stbu r8, 2(r11) */
    /* bdnz 0x80532358 */
    /* r8 = r6+0x70 */
    /* r5+0x70 = r8 */
    /* r8 = r6+0x74 */
    /* stb r8, 0x74(r5) */
    /* r8 = r6+0x75 */
    /* stb r8, 0x75(r5) */
    /* r8 = r6+0x76 */
    /* stb r8, 0x76(r5) */
    /* r8 = r6+0x77 */
    /* stb r8, 0x77(r5) */
    /* r8 = r6+0x78 */
    /* r5+0x78 = r8 */
    /* r8 = r6+0x80 */
    /* r9 = r6+0x7c */
    /* r5+0x7c = r9 */
    /* r5+0x80 = r8 */
    /* r8 = r6+0x88 */
    /* r9 = r6+0x84 */
    /* r5+0x84 = r9 */
    /* r5+0x88 = r8 */
    /* r8 = r6+0x90 */
    /* r9 = r6+0x8c */
    /* r5+0x8c = r9 */
    /* r5+0x90 = r8 */
    /* r8 = r6+0x98 */
    /* r9 = r6+0x94 */
    /* r5+0x94 = r9 */
    /* r5+0x98 = r8 */
    /* r8 = r6+0xa0 */
    /* r9 = r6+0x9c */
    /* r5+0x9c = r9 */
    /* r5+0xa0 = r8 */
    /* r8 = r6+0xa8 */
    /* r9 = r6+0xa4 */
    /* r5+0xa4 = r9 */
    /* r5+0xa8 = r8 */
    /* r8 = r6+0xb0 */
    /* r9 = r6+0xac */
    /* r5+0xac = r9 */
    /* r5+0xb0 = r8 */
    /* r8 = r6+0xb4 */
    /* r5+0xb4 = r8 */
    /* r8 = r6+0xb8 */
    /* stb r8, 0xb8(r5) */
    /* r8 = r6+0xb9 */
    /* stb r8, 0xb9(r5) */
    /* r8 = r6+0xba */
    /* stb r8, 0xba(r5) */
    /* r8 = r6+0xbc */
    /* r5+0xbc = r8 */
    /* r8 = r6+0xc0 */
    /* stb r8, 0xc0(r5) */
    /* r8 = r6+0xc1 */
    /* stb r8, 0xc1(r5) */
    /* r8 = r6+0xc2 */
    /* stb r8, 0xc2(r5) */
    /* r8 = r6+0xc4 */
    /* r5+0xc4 = r8 */
    /* r8 = r6+0xc8 */
    /* r5+0xc8 = r8 */
    /* r8 = r6+0xcc */
    /* r5+0xcc = r8 */
    /* r8 = r6+0xd0 */
    /* r5+0xd0 = r8 */
    /* r8 = r6+0xd4 */
    /* r5+0xd4 = r8 */
    /* r8 = r6+0xd8 */
    /* sth r8, 0xd8(r5) */
    /* r8 = r6+0xda */
    /* sth r8, 0xda(r5) */
    /* r8 = r6+0xdc */
    /* sth r8, 0xdc(r5) */
    /* r8 = r6+0xde */
    /* sth r8, 0xde(r5) */
    /* r8 = r6+0xe0 */
    /* stb r8, 0xe0(r5) */
    /* r8 = r6+0xe1 */
    /* stb r8, 0xe1(r5) */
    /* r8 = r6+0xe2 */
    /* stb r8, 0xe2(r5) */
    /* r8 = r6+0xe8 */
    /* sth r8, 0xe8(r5) */
    /* r8 = r6+0xec */
    /* addi r6, r6, 0xf0 */
    /* stb r8, 0xec(r5) */
    /* addi r5, r5, 0xf0 */
    /* cmplw r5, r7 */
    /* if (cr0 <) goto 0x805322fc */
    /* r5 = r4+0xb48 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80532340: 99 05 00 1c              stb      r8, 0x1c(r5) */
/* 0x80532344: 89 06 00 1d              lbz      r8, 0x1d(r6) */
/* 0x80532348: 99 05 00 1d              stb      r8, 0x1d(r5) */
/* 0x8053234c: 81 06 00 20              lwz      r8, 0x20(r6) */
/* 0x80532350: 91 05 00 20              stw      r8, 0x20(r5) */
/* 0x80532354: 7c 09 03 a6              mtctr    r0 */
/* 0x80532358: 89 2a 00 01              lbz      r9, 1(r10) */
/* 0x8053235c: 8d 0a 00 02              lbzu     r8, 2(r10) */
/* 0x80532360: 99 2b 00 01              stb      r9, 1(r11) */
/* 0x80532364: 9d 0b 00 02              stbu     r8, 2(r11) */
/* 0x80532368: 42 00 ff f0              bdnz     0x80532358 */
/* 0x8053236c: 81 06 00 70              lwz      r8, 0x70(r6) */
/* 0x80532370: 91 05 00 70              stw      r8, 0x70(r5) */
/* 0x80532374: 89 06 00 74              lbz      r8, 0x74(r6) */
/* 0x80532378: 99 05 00 74              stb      r8, 0x74(r5) */
/* 0x8053237c: 89 06 00 75              lbz      r8, 0x75(r6) */
/* 0x80532380: 99 05 00 75              stb      r8, 0x75(r5) */
/* 0x80532384: 89 06 00 76              lbz      r8, 0x76(r6) */
/* 0x80532388: 99 05 00 76              stb      r8, 0x76(r5) */
/* 0x8053238c: 89 06 00 77              lbz      r8, 0x77(r6) */
/* 0x80532390: 99 05 00 77              stb      r8, 0x77(r5) */
/* 0x80532394: 81 06 00 78              lwz      r8, 0x78(r6) */
/* 0x80532398: 91 05 00 78              stw      r8, 0x78(r5) */
/* 0x8053239c: 81 06 00 80              lwz      r8, 0x80(r6) */
/* 0x805323a0: 81 26 00 7c              lwz      r9, 0x7c(r6) */
/* 0x805323a4: 91 25 00 7c              stw      r9, 0x7c(r5) */
/* 0x805323a8: 91 05 00 80              stw      r8, 0x80(r5) */
/* 0x805323ac: 81 06 00 88              lwz      r8, 0x88(r6) */
/* 0x805323b0: 81 26 00 84              lwz      r9, 0x84(r6) */
/* 0x805323b4: 91 25 00 84              stw      r9, 0x84(r5) */
/* 0x805323b8: 91 05 00 88              stw      r8, 0x88(r5) */
/* 0x805323bc: 81 06 00 90              lwz      r8, 0x90(r6) */
/* 0x805323c0: 81 26 00 8c              lwz      r9, 0x8c(r6) */
/* 0x805323c4: 91 25 00 8c              stw      r9, 0x8c(r5) */
/* 0x805323c8: 91 05 00 90              stw      r8, 0x90(r5) */
/* 0x805323cc: 81 06 00 98              lwz      r8, 0x98(r6) */
/* 0x805323d0: 81 26 00 94              lwz      r9, 0x94(r6) */
/* 0x805323d4: 91 25 00 94              stw      r9, 0x94(r5) */
/* 0x805323d8: 91 05 00 98              stw      r8, 0x98(r5) */
/* 0x805323dc: 81 06 00 a0              lwz      r8, 0xa0(r6) */
/* 0x805323e0: 81 26 00 9c              lwz      r9, 0x9c(r6) */
/* 0x805323e4: 91 25 00 9c              stw      r9, 0x9c(r5) */
/* 0x805323e8: 91 05 00 a0              stw      r8, 0xa0(r5) */
/* 0x805323ec: 81 06 00 a8              lwz      r8, 0xa8(r6) */
/* 0x805323f0: 81 26 00 a4              lwz      r9, 0xa4(r6) */
/* 0x805323f4: 91 25 00 a4              stw      r9, 0xa4(r5) */
/* 0x805323f8: 91 05 00 a8              stw      r8, 0xa8(r5) */
/* 0x805323fc: 81 06 00 b0              lwz      r8, 0xb0(r6) */
/* 0x80532400: 81 26 00 ac              lwz      r9, 0xac(r6) */
/* 0x80532404: 91 25 00 ac              stw      r9, 0xac(r5) */
/* 0x80532408: 91 05 00 b0              stw      r8, 0xb0(r5) */
/* 0x8053240c: 81 06 00 b4              lwz      r8, 0xb4(r6) */
/* 0x80532410: 91 05 00 b4              stw      r8, 0xb4(r5) */
/* 0x80532414: 89 06 00 b8              lbz      r8, 0xb8(r6) */
/* 0x80532418: 99 05 00 b8              stb      r8, 0xb8(r5) */
/* 0x8053241c: 89 06 00 b9              lbz      r8, 0xb9(r6) */
/* 0x80532420: 99 05 00 b9              stb      r8, 0xb9(r5) */
/* 0x80532424: 89 06 00 ba              lbz      r8, 0xba(r6) */
/* 0x80532428: 99 05 00 ba              stb      r8, 0xba(r5) */
/* 0x8053242c: 81 06 00 bc              lwz      r8, 0xbc(r6) */
/* 0x80532430: 91 05 00 bc              stw      r8, 0xbc(r5) */
/* 0x80532434: 89 06 00 c0              lbz      r8, 0xc0(r6) */
/* 0x80532438: 99 05 00 c0              stb      r8, 0xc0(r5) */
/* 0x8053243c: 89 06 00 c1              lbz      r8, 0xc1(r6) */
/* 0x80532440: 99 05 00 c1              stb      r8, 0xc1(r5) */
/* 0x80532444: 89 06 00 c2              lbz      r8, 0xc2(r6) */
/* 0x80532448: 99 05 00 c2              stb      r8, 0xc2(r5) */
/* 0x8053244c: 81 06 00 c4              lwz      r8, 0xc4(r6) */
/* 0x80532450: 91 05 00 c4              stw      r8, 0xc4(r5) */
/* 0x80532454: 81 06 00 c8              lwz      r8, 0xc8(r6) */
/* 0x80532458: 91 05 00 c8              stw      r8, 0xc8(r5) */
/* 0x8053245c: 81 06 00 cc              lwz      r8, 0xcc(r6) */
/* 0x80532460: 91 05 00 cc              stw      r8, 0xcc(r5) */
/* 0x80532464: 81 06 00 d0              lwz      r8, 0xd0(r6) */
/* 0x80532468: 91 05 00 d0              stw      r8, 0xd0(r5) */
/* 0x8053246c: 81 06 00 d4              lwz      r8, 0xd4(r6) */
/* 0x80532470: 91 05 00 d4              stw      r8, 0xd4(r5) */
/* 0x80532474: a1 06 00 d8              lhz      r8, 0xd8(r6) */
/* 0x80532478: b1 05 00 d8              sth      r8, 0xd8(r5) */
/* 0x8053247c: a1 06 00 da              lhz      r8, 0xda(r6) */
/* 0x80532480: b1 05 00 da              sth      r8, 0xda(r5) */
/* 0x80532484: a1 06 00 dc              lhz      r8, 0xdc(r6) */
/* 0x80532488: b1 05 00 dc              sth      r8, 0xdc(r5) */
/* 0x8053248c: a9 06 00 de              lha      r8, 0xde(r6) */
/* 0x80532490: b1 05 00 de              sth      r8, 0xde(r5) */
/* 0x80532494: 89 06 00 e0              lbz      r8, 0xe0(r6) */
/* 0x80532498: 99 05 00 e0              stb      r8, 0xe0(r5) */
/* 0x8053249c: 89 06 00 e1              lbz      r8, 0xe1(r6) */
/* 0x805324a0: 99 05 00 e1              stb      r8, 0xe1(r5) */
/* 0x805324a4: 89 06 00 e2              lbz      r8, 0xe2(r6) */
/* 0x805324a8: 99 05 00 e2              stb      r8, 0xe2(r5) */
/* 0x805324ac: a1 06 00 e8              lhz      r8, 0xe8(r6) */
/* 0x805324b0: b1 05 00 e8              sth      r8, 0xe8(r5) */
/* 0x805324b4: 89 06 00 ec              lbz      r8, 0xec(r6) */
/* 0x805324b8: 38 c6 00 f0              addi     r6, r6, 0xf0 */
/* 0x805324bc: 99 05 00 ec              stb      r8, 0xec(r5) */
/* 0x805324c0: 38 a5 00 f0              addi     r5, r5, 0xf0 */
/* 0x805324c4: 7c 05 38 40              cmplw    r5, r7 */
/* 0x805324c8: 41 80 fe 34              blt      0x805322fc */
/* 0x805324cc: 80 a4 0b 48              lwz      r5, 0xb48(r4) */
#endif


/* === DISASSEMBLY === */

; Function: createInstance__Q26System10RaceConfigFv
; Demangled: createInstance__System10RaceConfigFv
; Address: 0x80532340  (.text+0x1faa4)
; Size: 400 bytes

  0x80532340:  stb      r8, 0x1c(r5)
  0x80532344:  lbz      r8, 0x1d(r6)
  0x80532348:  stb      r8, 0x1d(r5)
  0x8053234c:  lwz      r8, 0x20(r6)
  0x80532350:  stw      r8, 0x20(r5)
  0x80532354:  mtctr    r0
  0x80532358:  lbz      r9, 1(r10)
  0x8053235c:  lbzu     r8, 2(r10)
  0x80532360:  stb      r9, 1(r11)
  0x80532364:  stbu     r8, 2(r11)
  0x80532368:  bdnz     0x80532358
  0x8053236c:  lwz      r8, 0x70(r6)
  0x80532370:  stw      r8, 0x70(r5)
  0x80532374:  lbz      r8, 0x74(r6)
  0x80532378:  stb      r8, 0x74(r5)
  0x8053237c:  lbz      r8, 0x75(r6)
  0x80532380:  stb      r8, 0x75(r5)
  0x80532384:  lbz      r8, 0x76(r6)
  0x80532388:  stb      r8, 0x76(r5)
  0x8053238c:  lbz      r8, 0x77(r6)
  0x80532390:  stb      r8, 0x77(r5)
  0x80532394:  lwz      r8, 0x78(r6)
  0x80532398:  stw      r8, 0x78(r5)
  0x8053239c:  lwz      r8, 0x80(r6)
  0x805323a0:  lwz      r9, 0x7c(r6)
  0x805323a4:  stw      r9, 0x7c(r5)
  0x805323a8:  stw      r8, 0x80(r5)
  0x805323ac:  lwz      r8, 0x88(r6)
  0x805323b0:  lwz      r9, 0x84(r6)
  0x805323b4:  stw      r9, 0x84(r5)
  0x805323b8:  stw      r8, 0x88(r5)
  0x805323bc:  lwz      r8, 0x90(r6)
  0x805323c0:  lwz      r9, 0x8c(r6)
  0x805323c4:  stw      r9, 0x8c(r5)
  0x805323c8:  stw      r8, 0x90(r5)
  0x805323cc:  lwz      r8, 0x98(r6)
  0x805323d0:  lwz      r9, 0x94(r6)
  0x805323d4:  stw      r9, 0x94(r5)
  0x805323d8:  stw      r8, 0x98(r5)
  0x805323dc:  lwz      r8, 0xa0(r6)
  0x805323e0:  lwz      r9, 0x9c(r6)
  0x805323e4:  stw      r9, 0x9c(r5)
  0x805323e8:  stw      r8, 0xa0(r5)
  0x805323ec:  lwz      r8, 0xa8(r6)
  0x805323f0:  lwz      r9, 0xa4(r6)
  0x805323f4:  stw      r9, 0xa4(r5)
  0x805323f8:  stw      r8, 0xa8(r5)
  0x805323fc:  lwz      r8, 0xb0(r6)
  0x80532400:  lwz      r9, 0xac(r6)
  0x80532404:  stw      r9, 0xac(r5)
  0x80532408:  stw      r8, 0xb0(r5)
  0x8053240c:  lwz      r8, 0xb4(r6)
  0x80532410:  stw      r8, 0xb4(r5)
  0x80532414:  lbz      r8, 0xb8(r6)
  0x80532418:  stb      r8, 0xb8(r5)
  0x8053241c:  lbz      r8, 0xb9(r6)
  0x80532420:  stb      r8, 0xb9(r5)
  0x80532424:  lbz      r8, 0xba(r6)
  0x80532428:  stb      r8, 0xba(r5)
  0x8053242c:  lwz      r8, 0xbc(r6)
  0x80532430:  stw      r8, 0xbc(r5)
  0x80532434:  lbz      r8, 0xc0(r6)
  0x80532438:  stb      r8, 0xc0(r5)
  0x8053243c:  lbz      r8, 0xc1(r6)
  0x80532440:  stb      r8, 0xc1(r5)
  0x80532444:  lbz      r8, 0xc2(r6)
  0x80532448:  stb      r8, 0xc2(r5)
  0x8053244c:  lwz      r8, 0xc4(r6)
  0x80532450:  stw      r8, 0xc4(r5)
  0x80532454:  lwz      r8, 0xc8(r6)
  0x80532458:  stw      r8, 0xc8(r5)
  0x8053245c:  lwz      r8, 0xcc(r6)
  0x80532460:  stw      r8, 0xcc(r5)
  0x80532464:  lwz      r8, 0xd0(r6)
  0x80532468:  stw      r8, 0xd0(r5)
  0x8053246c:  lwz      r8, 0xd4(r6)
  0x80532470:  stw      r8, 0xd4(r5)
  0x80532474:  lhz      r8, 0xd8(r6)
  0x80532478:  sth      r8, 0xd8(r5)
  0x8053247c:  lhz      r8, 0xda(r6)
  0x80532480:  sth      r8, 0xda(r5)
  0x80532484:  lhz      r8, 0xdc(r6)
  0x80532488:  sth      r8, 0xdc(r5)
  0x8053248c:  lha      r8, 0xde(r6)
  0x80532490:  sth      r8, 0xde(r5)
  0x80532494:  lbz      r8, 0xe0(r6)
  0x80532498:  stb      r8, 0xe0(r5)
  0x8053249c:  lbz      r8, 0xe1(r6)
  0x805324a0:  stb      r8, 0xe1(r5)
  0x805324a4:  lbz      r8, 0xe2(r6)
  0x805324a8:  stb      r8, 0xe2(r5)
  0x805324ac:  lhz      r8, 0xe8(r6)
  0x805324b0:  sth      r8, 0xe8(r5)
  0x805324b4:  lbz      r8, 0xec(r6)
  0x805324b8:  addi     r6, r6, 0xf0
  0x805324bc:  stb      r8, 0xec(r5)
  0x805324c0:  addi     r5, r5, 0xf0
  0x805324c4:  cmplw    r5, r7
  0x805324c8:  blt      0x805322fc
  0x805324cc:  lwz      r5, 0xb48(r4)
