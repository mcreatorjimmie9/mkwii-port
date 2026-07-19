/**
 * initPlayers__System10RaceConfig8ScenarioFUc
 * @addr 0x8053154c
 * @size 380 bytes
 * @frame 16 bytes
 * @calls 2 function(s)
 */
void System10RaceConfig8Scenario(void) {
    /* if (cr0 ==) goto 0x80531570 */
    /* cmpwi r0, 0 */
    /* addi r8, r8, 1 */
    /* if (cr0 !=) goto 0x80531570 */
    /* cmplwi r9, 4 */
    /* if (cr0 >=) goto 0x8053156c */
    /* addi r0, r9, 1 */
    /* clrlwi r9, r0, 0x18 */
    /* addi r10, r10, 1 */
    /* addi r11, r11, 1 */
    /* clrlwi r0, r11, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r7, r3, r0 */
    /* r0 = r7+0x18 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x805315ac */
    /* cmpwi r0, 0 */
    /* addi r8, r8, 1 */
    /* if (cr0 !=) goto 0x805315ac */
    /* cmplwi r9, 4 */
    /* if (cr0 >=) goto 0x805315a8 */
    /* addi r0, r9, 1 */
    /* clrlwi r9, r0, 0x18 */
    /* addi r10, r10, 1 */
    /* addi r11, r11, 1 */
    /* bdnz 0x805314c0 */
    /* cmpwi r9, 0 */
    /* if (cr0 !=) goto 0x805315c0 */
    /* li r9, 1 */
    /* cmplwi r9, 3 */
    /* if (cr0 !=) goto 0x805315cc */
    /* li r9, 4 */
    /* r7 = r3+0xb54 */
    /* cmpwi r7, 2 */
    /* if (cr0 !=) goto 0x805315e0 */
    /* li r9, 1 */
    /* goto 0x805315fc */
    /* cmpwi r7, 3 */
    /* if (cr0 !=) goto 0x805315f0 */
    /* li r9, 2 */
    /* goto 0x805315fc */
    /* cmpwi r7, 4 */
    /* if (cr0 !=) goto 0x805315fc */
    /* li r9, 4 */
    /* r0 = r3+0xb50 */
    /* cmpwi r0, 0xb */
    /* if (cr0 !=) goto 0x80531634 */
    /* cmpwi r7, 7 */
    /* if (cr0 !=) goto 0x80531624 */
    /* clrlwi r0, r8, 0x18 */
    /* cmplwi r0, 3 */
    /* if (cr0 <=) goto 0x80531634 */
    /* li r8, 3 */
    /* goto 0x80531634 */
    /* clrlwi r0, r8, 0x18 */
    /* cmplwi r0, 6 */
    /* if (cr0 <=) goto 0x80531634 */
    /* li r8, 6 */
    /* stb r8, 0(r4) */
    /* stb r9, 0(r5) */
    /* stb r10, 0(r6) */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8053154c: 41 82 00 24              beq      0x80531570 */
/* 0x80531550: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80531554: 39 08 00 01              addi     r8, r8, 1 */
/* 0x80531558: 40 82 00 18              bne      0x80531570 */
/* 0x8053155c: 28 09 00 04              cmplwi   r9, 4 */
/* 0x80531560: 40 80 00 0c              bge      0x8053156c */
/* 0x80531564: 38 09 00 01              addi     r0, r9, 1 */
/* 0x80531568: 54 09 06 3e              clrlwi   r9, r0, 0x18 */
/* 0x8053156c: 39 4a 00 01              addi     r10, r10, 1 */
/* 0x80531570: 39 6b 00 01              addi     r11, r11, 1 */
/* 0x80531574: 55 60 06 3e              clrlwi   r0, r11, 0x18 */
/* 0x80531578: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x8053157c: 7c e3 02 14              add      r7, r3, r0 */
/* 0x80531580: 80 07 00 18              lwz      r0, 0x18(r7) */
/* 0x80531584: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x80531588: 41 82 00 24              beq      0x805315ac */
/* 0x8053158c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80531590: 39 08 00 01              addi     r8, r8, 1 */
/* 0x80531594: 40 82 00 18              bne      0x805315ac */
/* 0x80531598: 28 09 00 04              cmplwi   r9, 4 */
/* 0x8053159c: 40 80 00 0c              bge      0x805315a8 */
/* 0x805315a0: 38 09 00 01              addi     r0, r9, 1 */
/* 0x805315a4: 54 09 06 3e              clrlwi   r9, r0, 0x18 */
/* 0x805315a8: 39 4a 00 01              addi     r10, r10, 1 */
/* 0x805315ac: 39 6b 00 01              addi     r11, r11, 1 */
/* 0x805315b0: 42 00 ff 10              bdnz     0x805314c0 */
/* 0x805315b4: 2c 09 00 00              cmpwi    r9, 0 */
/* 0x805315b8: 40 82 00 08              bne      0x805315c0 */
/* 0x805315bc: 39 20 00 01              li       r9, 1 */
/* 0x805315c0: 28 09 00 03              cmplwi   r9, 3 */
/* 0x805315c4: 40 82 00 08              bne      0x805315cc */
/* 0x805315c8: 39 20 00 04              li       r9, 4 */
/* 0x805315cc: 80 e3 0b 54              lwz      r7, 0xb54(r3) */
/* 0x805315d0: 2c 07 00 02              cmpwi    r7, 2 */
/* 0x805315d4: 40 82 00 0c              bne      0x805315e0 */
/* 0x805315d8: 39 20 00 01              li       r9, 1 */
/* 0x805315dc: 48 00 00 20              b        0x805315fc */
/* 0x805315e0: 2c 07 00 03              cmpwi    r7, 3 */
/* 0x805315e4: 40 82 00 0c              bne      0x805315f0 */
/* 0x805315e8: 39 20 00 02              li       r9, 2 */
/* 0x805315ec: 48 00 00 10              b        0x805315fc */
/* 0x805315f0: 2c 07 00 04              cmpwi    r7, 4 */
/* 0x805315f4: 40 82 00 08              bne      0x805315fc */
/* 0x805315f8: 39 20 00 04              li       r9, 4 */
/* 0x805315fc: 80 03 0b 50              lwz      r0, 0xb50(r3) */
/* 0x80531600: 2c 00 00 0b              cmpwi    r0, 0xb */
/* 0x80531604: 40 82 00 30              bne      0x80531634 */
/* 0x80531608: 2c 07 00 07              cmpwi    r7, 7 */
/* 0x8053160c: 40 82 00 18              bne      0x80531624 */
/* 0x80531610: 55 00 06 3e              clrlwi   r0, r8, 0x18 */
/* 0x80531614: 28 00 00 03              cmplwi   r0, 3 */
/* 0x80531618: 40 81 00 1c              ble      0x80531634 */
/* 0x8053161c: 39 00 00 03              li       r8, 3 */
/* 0x80531620: 48 00 00 14              b        0x80531634 */
/* 0x80531624: 55 00 06 3e              clrlwi   r0, r8, 0x18 */
/* 0x80531628: 28 00 00 06              cmplwi   r0, 6 */
/* 0x8053162c: 40 81 00 08              ble      0x80531634 */
/* 0x80531630: 39 00 00 06              li       r8, 6 */
/* 0x80531634: 99 04 00 00              stb      r8, 0(r4) */
/* 0x80531638: 99 25 00 00              stb      r9, 0(r5) */
/* 0x8053163c: 99 46 00 00              stb      r10, 0(r6) */
/* 0x80531640: 4e 80 00 20              blr       */
/* 0x80531644: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x80531648: 7c 08 02 a6              mflr     r0 */
/* 0x8053164c: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x80531650: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x80531654: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80531658: 80 83 0b 50              lwz      r4, 0xb50(r3) */
/* 0x8053165c: 2c 04 00 04              cmpwi    r4, 4 */
/* 0x80531660: 41 80 00 0c              blt      0x8053166c */
/* 0x80531664: 2c 04 00 05              cmpwi    r4, 5 */
/* 0x80531668: 40 81 00 0c              ble      0x80531674 */
/* 0x8053166c: 2c 04 00 02              cmpwi    r4, 2 */
/* 0x80531670: 40 82 00 24              bne      0x80531694 */
/* 0x80531674: 3c 80 74 a2              lis      r4, 0x74a2 */
/* 0x80531678: 38 04 b0 95              addi     r0, r4, -0x4f6b */
/* 0x8053167c: 90 03 0b 74              stw      r0, 0xb74(r3) */
/* 0x80531680: 48 02 45 79              bl       0x80555bf8 */
/* 0x80531684: 54 60 e8 de              rlwinm   r0, r3, 0x1d, 3, 0xf */
/* 0x80531688: 50 60 2e fe              rlwimi   r0, r3, 5, 0x1b, 0x1f */
/* 0x8053168c: 90 1f 0b 78              stw      r0, 0xb78(r31) */
/* 0x80531690: 48 00 00 88              b        0x80531718 */
/* 0x80531694: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x80531698: 54 00 07 7b              rlwinm.  r0, r0, 0, 0x1d, 0x1d */
/* 0x8053169c: 41 82 00 24              beq      0x805316c0 */
/* 0x805316a0: 3c 80 92 bc              lis      r4, -0x6d44 */
/* 0x805316a4: 38 04 7d 03              addi     r0, r4, 0x7d03 */
/* 0x805316a8: 90 03 0b 74              stw      r0, 0xb74(r3) */
/* 0x805316ac: 48 02 45 4d              bl       0x80555bf8 */
/* 0x805316b0: 54 60 e8 de              rlwinm   r0, r3, 0x1d, 3, 0xf */
/* 0x805316b4: 50 60 2e fe              rlwimi   r0, r3, 5, 0x1b, 0x1f */
/* 0x805316b8: 90 1f 0b 78              stw      r0, 0xb78(r31) */
/* 0x805316bc: 48 00 00 5c              b        0x80531718 */
/* 0x805316c0: 80 03 0b 54              lwz      r0, 0xb54(r3) */
/* 0x805316c4: 2c 00 00 01              cmpwi    r0, 1 */
#endif


/* === DISASSEMBLY === */

; Function: initPlayers__Q36System10RaceConfig8ScenarioFUc
; Demangled: initPlayers__System10RaceConfig8ScenarioFUc
; Address: 0x8053154c  (.text+0x1ecb0)
; Size: 380 bytes

  0x8053154c:  beq      0x80531570
  0x80531550:  cmpwi    r0, 0
  0x80531554:  addi     r8, r8, 1
  0x80531558:  bne      0x80531570
  0x8053155c:  cmplwi   r9, 4
  0x80531560:  bge      0x8053156c
  0x80531564:  addi     r0, r9, 1
  0x80531568:  clrlwi   r9, r0, 0x18
  0x8053156c:  addi     r10, r10, 1
  0x80531570:  addi     r11, r11, 1
  0x80531574:  clrlwi   r0, r11, 0x18
  0x80531578:  mulli    r0, r0, 0xf0
  0x8053157c:  add      r7, r3, r0
  0x80531580:  lwz      r0, 0x18(r7)
  0x80531584:  cmpwi    r0, 5
  0x80531588:  beq      0x805315ac
  0x8053158c:  cmpwi    r0, 0
  0x80531590:  addi     r8, r8, 1
  0x80531594:  bne      0x805315ac
  0x80531598:  cmplwi   r9, 4
  0x8053159c:  bge      0x805315a8
  0x805315a0:  addi     r0, r9, 1
  0x805315a4:  clrlwi   r9, r0, 0x18
  0x805315a8:  addi     r10, r10, 1
  0x805315ac:  addi     r11, r11, 1
  0x805315b0:  bdnz     0x805314c0
  0x805315b4:  cmpwi    r9, 0
  0x805315b8:  bne      0x805315c0
  0x805315bc:  li       r9, 1
  0x805315c0:  cmplwi   r9, 3
  0x805315c4:  bne      0x805315cc
  0x805315c8:  li       r9, 4
  0x805315cc:  lwz      r7, 0xb54(r3)
  0x805315d0:  cmpwi    r7, 2
  0x805315d4:  bne      0x805315e0
  0x805315d8:  li       r9, 1
  0x805315dc:  b        0x805315fc
  0x805315e0:  cmpwi    r7, 3
  0x805315e4:  bne      0x805315f0
  0x805315e8:  li       r9, 2
  0x805315ec:  b        0x805315fc
  0x805315f0:  cmpwi    r7, 4
  0x805315f4:  bne      0x805315fc
  0x805315f8:  li       r9, 4
  0x805315fc:  lwz      r0, 0xb50(r3)
  0x80531600:  cmpwi    r0, 0xb
  0x80531604:  bne      0x80531634
  0x80531608:  cmpwi    r7, 7
  0x8053160c:  bne      0x80531624
  0x80531610:  clrlwi   r0, r8, 0x18
  0x80531614:  cmplwi   r0, 3
  0x80531618:  ble      0x80531634
  0x8053161c:  li       r8, 3
  0x80531620:  b        0x80531634
  0x80531624:  clrlwi   r0, r8, 0x18
  0x80531628:  cmplwi   r0, 6
  0x8053162c:  ble      0x80531634
  0x80531630:  li       r8, 6
  0x80531634:  stb      r8, 0(r4)
  0x80531638:  stb      r9, 0(r5)
  0x8053163c:  stb      r10, 0(r6)
  0x80531640:  blr      
  0x80531644:  stwu     r1, -0x10(r1)
  0x80531648:  mflr     r0
  0x8053164c:  stw      r0, 0x14(r1)
  0x80531650:  stw      r31, 0xc(r1)
  0x80531654:  mr       r31, r3
  0x80531658:  lwz      r4, 0xb50(r3)
  0x8053165c:  cmpwi    r4, 4
  0x80531660:  blt      0x8053166c
  0x80531664:  cmpwi    r4, 5
  0x80531668:  ble      0x80531674
  0x8053166c:  cmpwi    r4, 2
  0x80531670:  bne      0x80531694
  0x80531674:  lis      r4, 0x74a2
  0x80531678:  addi     r0, r4, -0x4f6b
  0x8053167c:  stw      r0, 0xb74(r3)
  0x80531680:  bl       0x80555bf8
  0x80531684:  rlwinm   r0, r3, 0x1d, 3, 0xf
  0x80531688:  rlwimi   r0, r3, 5, 0x1b, 0x1f
  0x8053168c:  stw      r0, 0xb78(r31)
  0x80531690:  b        0x80531718
  0x80531694:  lwz      r0, 0xb70(r3)
  0x80531698:  rlwinm.  r0, r0, 0, 0x1d, 0x1d
  0x8053169c:  beq      0x805316c0
  0x805316a0:  lis      r4, -0x6d44
  0x805316a4:  addi     r0, r4, 0x7d03
  0x805316a8:  stw      r0, 0xb74(r3)
  0x805316ac:  bl       0x80555bf8
  0x805316b0:  rlwinm   r0, r3, 0x1d, 3, 0xf
  0x805316b4:  rlwimi   r0, r3, 5, 0x1b, 0x1f
  0x805316b8:  stw      r0, 0xb78(r31)
  0x805316bc:  b        0x80531718
  0x805316c0:  lwz      r0, 0xb54(r3)
  0x805316c4:  cmpwi    r0, 1
