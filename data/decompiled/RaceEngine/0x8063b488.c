/**
 * TimeAttackBackPage_onActivate
 * @addr 0x8063b488
 * @size 420 bytes
 * @frame 0 bytes
 * @calls 20 function(s)
 */
void TimeAttackBackPage_onActivate(void) {
    /* 0x805c0b34() */
    /* addi r3, r31, 0x4ec */
    /* li r4, 0 */
    /* 0x80611c68() */
    /* r30, 0  (load upper immediate) */
    /* li r4, 0 */
    /* f1 = *(f32*)(r30+0x0) */
    /* 0x80611d64() */
    /* addi r3, r31, 0x4ec */
    /* li r4, 1 */
    /* 0x80611c68() */
    /* f1 = *(f32*)(r30+0x0) */
    /* li r4, 0 */
    /* 0x80611d64() */
    /* addi r3, r31, 0x4ec */
    /* li r4, 2 */
    /* 0x80611c68() */
    /* f1 = *(f32*)(r30+0x0) */
    /* li r4, 0 */
    /* 0x80611d64() */
    /* addi r3, r31, 0x4ec */
    /* li r4, 3 */
    /* 0x80611c68() */
    /* f1 = *(f32*)(r30+0x0) */
    /* li r4, 0 */
    /* 0x80611d64() */
    /* r3, 0  (load upper immediate) */
    /* r4, 1  (load upper immediate) */
    /* r6 = r3+0x0 */
    /* addi r0, r4, -0x7340 */
    /* r5 = r6+0x36 */
    /* r3 = r6+0x14 */
    /* clrlwi r5, r5, 0x18 */
    /* mullw r0, r5, r0 */
    /* add r3, r3, r0 */
    /* r3 = r3+0x8 */
    /* addis r0, r3, -0x524b */
    /* cmplwi r0, 0x5044 */
    /* if (cr0 !=) goto 0x8063b544 */
    /* addi r0, r4, -0x6c10 */
    /* addi r3, r31, 0x109c */
    /* mullw r0, r5, r0 */
    /* li r4, 0 */
    /* add r5, r6, r0 */
    /* addi r5, r5, 0x4e */
    /* 0x805e0664() */
    /* goto 0x8063b550 */
    /* addi r3, r31, 0x109c */
    /* li r4, 0 */
    /* 0x805e0a08() */
    /* r4, 0  (load upper immediate) */
    /* addi r3, r1, 8 */
    /* r5 = r4+0x0 */
    /* addi r4, r31, 0x454 */
    /* addi r6, r31, 0x109c */
    /* li r7, 0 */
    /* r0 = r5+0x36 */
    /* clrlwi r5, r0, 0x18 */
    /* 0x8063a028() */
    /* addi r3, r1, 0x40 */
    /* li r4, -1 */
    /* 0x805c0af4() */
    /* r3 = r31 */
    /* addi r5, r31, 0x5c8 */
    /* li r4, 2 */
    /* li r6, 0 */
    /* 0x805e43f4() */
    /* r30, 0  (load upper immediate) */
    /* addi r3, r31, 0x5c8 */
    /* addi r30, r30, 0 */
    /* li r7, 1 */
    /* addi r4, r30, 0x1e4 */
    /* li r8, 0 */
    /* addi r5, r30, 0x1eb */
    /* addi r6, r30, 0x203 */
    /* li r9, 0 */
    /* 0x805bc0dc() */
    /* li r0, 2 */
    /* r31+0x808 = r0 */
    /* addi r3, r31, 0x5c8 */
    /* addi r4, r31, 0x44 */
    /* li r5, 0 */
    /* 0x805bc68c() */
    /* addi r3, r31, 0x5c8 */
    /* addi r4, r31, 0x94 */
    /* 0x805bc6a4() */
    /* r3 = r31 */
    /* addi r5, r31, 0x81c */
    /* li r4, 3 */
    /* li r6, 0 */
    /* 0x805e43f4() */
    /* addi r3, r31, 0x81c */
    /* addi r4, r30, 0x20a */
    /* addi r5, r30, 0x211 */
    /* addi r6, r30, 0x229 */
    /* li r7, 1 */
    /* li r8, 0 */
    /* li r9, 0 */
    /* 0x805bc0dc() */
    /* li r0, 3 */
    /* r31+0xa5c = r0 */
    /* addi r3, r31, 0x81c */
    /* addi r4, r31, 0x58 */
    /* li r5, 0 */
    /* 0x805bc68c() */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8063b488: 4b f8 56 ad              bl       0x805c0b34 */
/* 0x8063b48c: 38 7f 04 ec              addi     r3, r31, 0x4ec */
/* 0x8063b490: 38 80 00 00              li       r4, 0 */
/* 0x8063b494: 4b fd 67 d5              bl       0x80611c68 */
/* 0x8063b498: 3f c0 00 00              lis      r30, 0 */
/* 0x8063b49c: 38 80 00 00              li       r4, 0 */
/* 0x8063b4a0: c0 3e 00 00              lfs      f1, 0(r30) */
/* 0x8063b4a4: 4b fd 68 c1              bl       0x80611d64 */
/* 0x8063b4a8: 38 7f 04 ec              addi     r3, r31, 0x4ec */
/* 0x8063b4ac: 38 80 00 01              li       r4, 1 */
/* 0x8063b4b0: 4b fd 67 b9              bl       0x80611c68 */
/* 0x8063b4b4: c0 3e 00 00              lfs      f1, 0(r30) */
/* 0x8063b4b8: 38 80 00 00              li       r4, 0 */
/* 0x8063b4bc: 4b fd 68 a9              bl       0x80611d64 */
/* 0x8063b4c0: 38 7f 04 ec              addi     r3, r31, 0x4ec */
/* 0x8063b4c4: 38 80 00 02              li       r4, 2 */
/* 0x8063b4c8: 4b fd 67 a1              bl       0x80611c68 */
/* 0x8063b4cc: c0 3e 00 00              lfs      f1, 0(r30) */
/* 0x8063b4d0: 38 80 00 00              li       r4, 0 */
/* 0x8063b4d4: 4b fd 68 91              bl       0x80611d64 */
/* 0x8063b4d8: 38 7f 04 ec              addi     r3, r31, 0x4ec */
/* 0x8063b4dc: 38 80 00 03              li       r4, 3 */
/* 0x8063b4e0: 4b fd 67 89              bl       0x80611c68 */
/* 0x8063b4e4: c0 3e 00 00              lfs      f1, 0(r30) */
/* 0x8063b4e8: 38 80 00 00              li       r4, 0 */
/* 0x8063b4ec: 4b fd 68 79              bl       0x80611d64 */
/* 0x8063b4f0: 3c 60 00 00              lis      r3, 0 */
/* 0x8063b4f4: 3c 80 00 01              lis      r4, 1 */
/* 0x8063b4f8: 80 c3 00 00              lwz      r6, 0(r3) */
/* 0x8063b4fc: 38 04 8c c0              addi     r0, r4, -0x7340 */
/* 0x8063b500: a8 a6 00 36              lha      r5, 0x36(r6) */
/* 0x8063b504: 80 66 00 14              lwz      r3, 0x14(r6) */
/* 0x8063b508: 54 a5 06 3e              clrlwi   r5, r5, 0x18 */
/* 0x8063b50c: 7c 05 01 d6              mullw    r0, r5, r0 */
/* 0x8063b510: 7c 63 02 14              add      r3, r3, r0 */
/* 0x8063b514: 80 63 00 08              lwz      r3, 8(r3) */
/* 0x8063b518: 3c 03 ad b5              addis    r0, r3, -0x524b */
/* 0x8063b51c: 28 00 50 44              cmplwi   r0, 0x5044 */
/* 0x8063b520: 40 82 00 24              bne      0x8063b544 */
/* 0x8063b524: 38 04 93 f0              addi     r0, r4, -0x6c10 */
/* 0x8063b528: 38 7f 10 9c              addi     r3, r31, 0x109c */
/* 0x8063b52c: 7c 05 01 d6              mullw    r0, r5, r0 */
/* 0x8063b530: 38 80 00 00              li       r4, 0 */
/* 0x8063b534: 7c a6 02 14              add      r5, r6, r0 */
/* 0x8063b538: 38 a5 00 4e              addi     r5, r5, 0x4e */
/* 0x8063b53c: 4b fa 51 29              bl       0x805e0664 */
/* 0x8063b540: 48 00 00 10              b        0x8063b550 */
/* 0x8063b544: 38 7f 10 9c              addi     r3, r31, 0x109c */
/* 0x8063b548: 38 80 00 00              li       r4, 0 */
/* 0x8063b54c: 4b fa 54 bd              bl       0x805e0a08 */
/* 0x8063b550: 3c 80 00 00              lis      r4, 0 */
/* 0x8063b554: 38 61 00 08              addi     r3, r1, 8 */
/* 0x8063b558: 80 a4 00 00              lwz      r5, 0(r4) */
/* 0x8063b55c: 38 9f 04 54              addi     r4, r31, 0x454 */
/* 0x8063b560: 38 df 10 9c              addi     r6, r31, 0x109c */
/* 0x8063b564: 38 e0 00 00              li       r7, 0 */
/* 0x8063b568: a8 05 00 36              lha      r0, 0x36(r5) */
/* 0x8063b56c: 54 05 06 3e              clrlwi   r5, r0, 0x18 */
/* 0x8063b570: 4b ff ea b9              bl       0x8063a028 */
/* 0x8063b574: 38 61 00 40              addi     r3, r1, 0x40 */
/* 0x8063b578: 38 80 ff ff              li       r4, -1 */
/* 0x8063b57c: 4b f8 55 79              bl       0x805c0af4 */
/* 0x8063b580: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b584: 38 bf 05 c8              addi     r5, r31, 0x5c8 */
/* 0x8063b588: 38 80 00 02              li       r4, 2 */
/* 0x8063b58c: 38 c0 00 00              li       r6, 0 */
/* 0x8063b590: 4b fa 8e 65              bl       0x805e43f4 */
/* 0x8063b594: 3f c0 00 00              lis      r30, 0 */
/* 0x8063b598: 38 7f 05 c8              addi     r3, r31, 0x5c8 */
/* 0x8063b59c: 3b de 00 00              addi     r30, r30, 0 */
/* 0x8063b5a0: 38 e0 00 01              li       r7, 1 */
/* 0x8063b5a4: 38 9e 01 e4              addi     r4, r30, 0x1e4 */
/* 0x8063b5a8: 39 00 00 00              li       r8, 0 */
/* 0x8063b5ac: 38 be 01 eb              addi     r5, r30, 0x1eb */
/* 0x8063b5b0: 38 de 02 03              addi     r6, r30, 0x203 */
/* 0x8063b5b4: 39 20 00 00              li       r9, 0 */
/* 0x8063b5b8: 4b f8 0b 25              bl       0x805bc0dc */
/* 0x8063b5bc: 38 00 00 02              li       r0, 2 */
/* 0x8063b5c0: 90 1f 08 08              stw      r0, 0x808(r31) */
/* 0x8063b5c4: 38 7f 05 c8              addi     r3, r31, 0x5c8 */
/* 0x8063b5c8: 38 9f 00 44              addi     r4, r31, 0x44 */
/* 0x8063b5cc: 38 a0 00 00              li       r5, 0 */
/* 0x8063b5d0: 4b f8 10 bd              bl       0x805bc68c */
/* 0x8063b5d4: 38 7f 05 c8              addi     r3, r31, 0x5c8 */
/* 0x8063b5d8: 38 9f 00 94              addi     r4, r31, 0x94 */
/* 0x8063b5dc: 4b f8 10 c9              bl       0x805bc6a4 */
/* 0x8063b5e0: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b5e4: 38 bf 08 1c              addi     r5, r31, 0x81c */
/* 0x8063b5e8: 38 80 00 03              li       r4, 3 */
/* 0x8063b5ec: 38 c0 00 00              li       r6, 0 */
/* 0x8063b5f0: 4b fa 8e 05              bl       0x805e43f4 */
/* 0x8063b5f4: 38 7f 08 1c              addi     r3, r31, 0x81c */
/* 0x8063b5f8: 38 9e 02 0a              addi     r4, r30, 0x20a */
/* 0x8063b5fc: 38 be 02 11              addi     r5, r30, 0x211 */
/* 0x8063b600: 38 de 02 29              addi     r6, r30, 0x229 */
/* 0x8063b604: 38 e0 00 01              li       r7, 1 */
/* 0x8063b608: 39 00 00 00              li       r8, 0 */
/* 0x8063b60c: 39 20 00 00              li       r9, 0 */
/* 0x8063b610: 4b f8 0a cd              bl       0x805bc0dc */
/* 0x8063b614: 38 00 00 03              li       r0, 3 */
/* 0x8063b618: 90 1f 0a 5c              stw      r0, 0xa5c(r31) */
/* 0x8063b61c: 38 7f 08 1c              addi     r3, r31, 0x81c */
/* 0x8063b620: 38 9f 00 58              addi     r4, r31, 0x58 */
/* 0x8063b624: 38 a0 00 00              li       r5, 0 */
/* 0x8063b628: 4b f8 10 65              bl       0x805bc68c */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackBackPage_onActivate
; Demangled: TimeAttackBackPage_onActivate
; Address: 0x8063b488  (.text+0x128bec)
; Size: 420 bytes

  0x8063b488:  bl       0x805c0b34
  0x8063b48c:  addi     r3, r31, 0x4ec
  0x8063b490:  li       r4, 0
  0x8063b494:  bl       0x80611c68
  0x8063b498:  lis      r30, 0
  0x8063b49c:  li       r4, 0
  0x8063b4a0:  lfs      f1, 0(r30)
  0x8063b4a4:  bl       0x80611d64
  0x8063b4a8:  addi     r3, r31, 0x4ec
  0x8063b4ac:  li       r4, 1
  0x8063b4b0:  bl       0x80611c68
  0x8063b4b4:  lfs      f1, 0(r30)
  0x8063b4b8:  li       r4, 0
  0x8063b4bc:  bl       0x80611d64
  0x8063b4c0:  addi     r3, r31, 0x4ec
  0x8063b4c4:  li       r4, 2
  0x8063b4c8:  bl       0x80611c68
  0x8063b4cc:  lfs      f1, 0(r30)
  0x8063b4d0:  li       r4, 0
  0x8063b4d4:  bl       0x80611d64
  0x8063b4d8:  addi     r3, r31, 0x4ec
  0x8063b4dc:  li       r4, 3
  0x8063b4e0:  bl       0x80611c68
  0x8063b4e4:  lfs      f1, 0(r30)
  0x8063b4e8:  li       r4, 0
  0x8063b4ec:  bl       0x80611d64
  0x8063b4f0:  lis      r3, 0
  0x8063b4f4:  lis      r4, 1
  0x8063b4f8:  lwz      r6, 0(r3)
  0x8063b4fc:  addi     r0, r4, -0x7340
  0x8063b500:  lha      r5, 0x36(r6)
  0x8063b504:  lwz      r3, 0x14(r6)
  0x8063b508:  clrlwi   r5, r5, 0x18
  0x8063b50c:  mullw    r0, r5, r0
  0x8063b510:  add      r3, r3, r0
  0x8063b514:  lwz      r3, 8(r3)
  0x8063b518:  addis    r0, r3, -0x524b
  0x8063b51c:  cmplwi   r0, 0x5044
  0x8063b520:  bne      0x8063b544
  0x8063b524:  addi     r0, r4, -0x6c10
  0x8063b528:  addi     r3, r31, 0x109c
  0x8063b52c:  mullw    r0, r5, r0
  0x8063b530:  li       r4, 0
  0x8063b534:  add      r5, r6, r0
  0x8063b538:  addi     r5, r5, 0x4e
  0x8063b53c:  bl       0x805e0664
  0x8063b540:  b        0x8063b550
  0x8063b544:  addi     r3, r31, 0x109c
  0x8063b548:  li       r4, 0
  0x8063b54c:  bl       0x805e0a08
  0x8063b550:  lis      r4, 0
  0x8063b554:  addi     r3, r1, 8
  0x8063b558:  lwz      r5, 0(r4)
  0x8063b55c:  addi     r4, r31, 0x454
  0x8063b560:  addi     r6, r31, 0x109c
  0x8063b564:  li       r7, 0
  0x8063b568:  lha      r0, 0x36(r5)
  0x8063b56c:  clrlwi   r5, r0, 0x18
  0x8063b570:  bl       0x8063a028
  0x8063b574:  addi     r3, r1, 0x40
  0x8063b578:  li       r4, -1
  0x8063b57c:  bl       0x805c0af4
  0x8063b580:  mr       r3, r31
  0x8063b584:  addi     r5, r31, 0x5c8
  0x8063b588:  li       r4, 2
  0x8063b58c:  li       r6, 0
  0x8063b590:  bl       0x805e43f4
  0x8063b594:  lis      r30, 0
  0x8063b598:  addi     r3, r31, 0x5c8
  0x8063b59c:  addi     r30, r30, 0
  0x8063b5a0:  li       r7, 1
  0x8063b5a4:  addi     r4, r30, 0x1e4
  0x8063b5a8:  li       r8, 0
  0x8063b5ac:  addi     r5, r30, 0x1eb
  0x8063b5b0:  addi     r6, r30, 0x203
  0x8063b5b4:  li       r9, 0
  0x8063b5b8:  bl       0x805bc0dc
  0x8063b5bc:  li       r0, 2
  0x8063b5c0:  stw      r0, 0x808(r31)
  0x8063b5c4:  addi     r3, r31, 0x5c8
  0x8063b5c8:  addi     r4, r31, 0x44
  0x8063b5cc:  li       r5, 0
  0x8063b5d0:  bl       0x805bc68c
  0x8063b5d4:  addi     r3, r31, 0x5c8
  0x8063b5d8:  addi     r4, r31, 0x94
  0x8063b5dc:  bl       0x805bc6a4
  0x8063b5e0:  mr       r3, r31
  0x8063b5e4:  addi     r5, r31, 0x81c
  0x8063b5e8:  li       r4, 3
  0x8063b5ec:  li       r6, 0
  0x8063b5f0:  bl       0x805e43f4
  0x8063b5f4:  addi     r3, r31, 0x81c
  0x8063b5f8:  addi     r4, r30, 0x20a
  0x8063b5fc:  addi     r5, r30, 0x211
  0x8063b600:  addi     r6, r30, 0x229
  0x8063b604:  li       r7, 1
  0x8063b608:  li       r8, 0
  0x8063b60c:  li       r9, 0
  0x8063b610:  bl       0x805bc0dc
  0x8063b614:  li       r0, 3
  0x8063b618:  stw      r0, 0xa5c(r31)
  0x8063b61c:  addi     r3, r31, 0x81c
  0x8063b620:  addi     r4, r31, 0x58
  0x8063b624:  li       r5, 0
  0x8063b628:  bl       0x805bc68c
