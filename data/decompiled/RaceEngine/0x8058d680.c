/**
 * RacedataHandler_processInputs
 * @addr 0x8058d680
 * @size 764 bytes
 * @frame 16 bytes
 * @calls 11 function(s)
 */
void RacedataHandler_processInputs(void) {
    /* addi r1, r1, 0x30 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8058d680: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x8058d684: 4e 80 00 20              blr       */
/* 0x8058d688: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x8058d68c: 7c 08 02 a6              mflr     r0 */
/* 0x8058d690: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x8058d694: bf 61 00 0c              stmw     r27, 0xc(r1) */
/* 0x8058d698: 7c 7e 1b 78              mr       r30, r3 */
/* 0x8058d69c: 3b 60 00 00              li       r27, 0 */
/* 0x8058d6a0: 3b 80 00 01              li       r28, 1 */
/* 0x8058d6a4: 80 7e 00 10              lwz      r3, 0x10(r30) */
/* 0x8058d6a8: 7f 84 d8 30              slw      r4, r28, r27 */
/* 0x8058d6ac: 80 1e 00 14              lwz      r0, 0x14(r30) */
/* 0x8058d6b0: 7c 65 20 38              and      r5, r3, r4 */
/* 0x8058d6b4: 7c 03 20 38              and      r3, r0, r4 */
/* 0x8058d6b8: 7c 85 00 d0              neg      r4, r5 */
/* 0x8058d6bc: 7c 03 00 d0              neg      r0, r3 */
/* 0x8058d6c0: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x8058d6c4: 7c 84 2b 78              or       r4, r4, r5 */
/* 0x8058d6c8: 54 83 0f fe              srwi     r3, r4, 0x1f */
/* 0x8058d6cc: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x8058d6d0: 7c 03 00 40              cmplw    r3, r0 */
/* 0x8058d6d4: 41 82 00 2c              beq      0x8058d700 */
/* 0x8058d6d8: 7f c3 f3 78              mr       r3, r30 */
/* 0x8058d6dc: 48 00 30 cd              bl       0x805907a8 */
/* 0x8058d6e0: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8058d6e4: 7f 64 db 78              mr       r4, r27 */
/* 0x8058d6e8: 38 a0 00 00              li       r5, 0 */
/* 0x8058d6ec: 38 c0 00 00              li       r6, 0 */
/* 0x8058d6f0: 38 e0 00 00              li       r7, 0 */
/* 0x8058d6f4: 39 00 00 0c              li       r8, 0xc */
/* 0x8058d6f8: 39 20 00 00              li       r9, 0 */
/* 0x8058d6fc: 4b fd c3 c9              bl       0x80569ac4 */
/* 0x8058d700: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x8058d704: 28 1b 00 12              cmplwi   r27, 0x12 */
/* 0x8058d708: 41 80 ff 9c              blt      0x8058d6a4 */
/* 0x8058d70c: 3f a0 00 00              lis      r29, 0 */
/* 0x8058d710: 3b e0 00 13              li       r31, 0x13 */
/* 0x8058d714: 3b bd 00 00              addi     r29, r29, 0 */
/* 0x8058d718: 3b 80 00 01              li       r28, 1 */
/* 0x8058d71c: 80 7e 00 10              lwz      r3, 0x10(r30) */
/* 0x8058d720: 7f 86 f8 30              slw      r6, r28, r31 */
/* 0x8058d724: 80 1e 00 14              lwz      r0, 0x14(r30) */
/* 0x8058d728: 38 9f ff ed              addi     r4, r31, -0x13 */
/* 0x8058d72c: 7c 65 30 38              and      r5, r3, r6 */
/* 0x8058d730: 7c 03 30 38              and      r3, r0, r6 */
/* 0x8058d734: 7c 86 07 74              extsb    r6, r4 */
/* 0x8058d738: 7c 85 00 d0              neg      r4, r5 */
/* 0x8058d73c: 7c 03 00 d0              neg      r0, r3 */
/* 0x8058d740: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x8058d744: 7c 84 2b 78              or       r4, r4, r5 */
/* 0x8058d748: 54 83 0f fe              srwi     r3, r4, 0x1f */
/* 0x8058d74c: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x8058d750: 7c 03 00 40              cmplw    r3, r0 */
/* 0x8058d754: 41 82 00 2c              beq      0x8058d780 */
/* 0x8058d758: 1c 06 00 0c              mulli    r0, r6, 0xc */
/* 0x8058d75c: 7f 7d 02 14              add      r27, r29, r0 */
/* 0x8058d760: 7f 63 db 78              mr       r3, r27 */
/* 0x8058d764: 4b fc 84 95              bl       0x80555bf8 */
/* 0x8058d768: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8058d76c: 41 82 00 14              beq      0x8058d780 */
/* 0x8058d770: 7f c3 f3 78              mr       r3, r30 */
/* 0x8058d774: 7f 6c db 78              mr       r12, r27 */
/* 0x8058d778: 4b fc 84 81              bl       0x80555bf8 */
/* 0x8058d77c: 60 00 00 00              nop       */
/* 0x8058d780: 3b ff 00 01              addi     r31, r31, 1 */
/* 0x8058d784: 28 1f 00 1f              cmplwi   r31, 0x1f */
/* 0x8058d788: 41 80 ff 94              blt      0x8058d71c */
/* 0x8058d78c: 3f e0 00 00              lis      r31, 0 */
/* 0x8058d790: 3b 80 00 00              li       r28, 0 */
/* 0x8058d794: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x8058d798: 3b a0 00 01              li       r29, 1 */
/* 0x8058d79c: 80 7e 00 18              lwz      r3, 0x18(r30) */
/* 0x8058d7a0: 7f a4 e0 30              slw      r4, r29, r28 */
/* 0x8058d7a4: 80 1e 00 1c              lwz      r0, 0x1c(r30) */
/* 0x8058d7a8: 7f 86 07 74              extsb    r6, r28 */
/* 0x8058d7ac: 7c 65 20 38              and      r5, r3, r4 */
/* 0x8058d7b0: 7c 03 20 38              and      r3, r0, r4 */
/* 0x8058d7b4: 7c 85 00 d0              neg      r4, r5 */
/* 0x8058d7b8: 7c 03 00 d0              neg      r0, r3 */
/* 0x8058d7bc: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x8058d7c0: 7c 84 2b 78              or       r4, r4, r5 */
/* 0x8058d7c4: 54 83 0f fe              srwi     r3, r4, 0x1f */
/* 0x8058d7c8: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x8058d7cc: 7c 03 00 40              cmplw    r3, r0 */
/* 0x8058d7d0: 41 82 00 2c              beq      0x8058d7fc */
/* 0x8058d7d4: 1c 06 00 0c              mulli    r0, r6, 0xc */
/* 0x8058d7d8: 7f 7f 02 14              add      r27, r31, r0 */
/* 0x8058d7dc: 7f 63 db 78              mr       r3, r27 */
/* 0x8058d7e0: 4b fc 84 19              bl       0x80555bf8 */
/* 0x8058d7e4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8058d7e8: 41 82 00 14              beq      0x8058d7fc */
/* 0x8058d7ec: 7f c3 f3 78              mr       r3, r30 */
/* 0x8058d7f0: 7f 6c db 78              mr       r12, r27 */
/* 0x8058d7f4: 4b fc 84 05              bl       0x80555bf8 */
/* 0x8058d7f8: 60 00 00 00              nop       */
/* 0x8058d7fc: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x8058d800: 28 1c 00 07              cmplwi   r28, 7 */
/* 0x8058d804: 41 80 ff 98              blt      0x8058d79c */
/* 0x8058d808: bb 61 00 0c              lmw      r27, 0xc(r1) */
/* 0x8058d80c: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8058d810: 7c 08 03 a6              mtlr     r0 */
/* 0x8058d814: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8058d818: 4e 80 00 20              blr       */
/* 0x8058d81c: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x8058d820: 7c 08 02 a6              mflr     r0 */
/* 0x8058d824: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x8058d828: bf 21 00 14              stmw     r25, 0x14(r1) */
/* 0x8058d82c: 3f 40 00 00              lis      r26, 0 */
/* 0x8058d830: 7c 7b 1b 78              mr       r27, r3 */
/* 0x8058d834: 3b a0 00 00              li       r29, 0 */
/* 0x8058d838: 3b 5a 00 00              addi     r26, r26, 0 */
/* 0x8058d83c: 3f 20 00 00              lis      r25, 0 */
/* 0x8058d840: 3b e0 00 01              li       r31, 1 */
/* 0x8058d844: 48 00 00 80              b        0x8058d8c4 */
/* 0x8058d848: 57 be 0d fc              rlwinm   r30, r29, 1, 0x17, 0x1e */
/* 0x8058d84c: 3b 80 00 00              li       r28, 0 */
/* 0x8058d850: 7c 1c f2 14              add      r0, r28, r30 */
/* 0x8058d854: 80 7b 00 20              lwz      r3, 0x20(r27) */
/* 0x8058d858: 54 04 06 3e              clrlwi   r4, r0, 0x18 */
/* 0x8058d85c: 80 1b 00 24              lwz      r0, 0x24(r27) */
/* 0x8058d860: 7f e4 20 30              slw      r4, r31, r4 */
/* 0x8058d864: 7c 65 20 38              and      r5, r3, r4 */
/* 0x8058d868: 7c 03 20 38              and      r3, r0, r4 */
/* 0x8058d86c: 7c 85 00 d0              neg      r4, r5 */
/* 0x8058d870: 7c 03 00 d0              neg      r0, r3 */
/* 0x8058d874: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x8058d878: 7c 84 2b 78              or       r4, r4, r5 */
/* 0x8058d87c: 54 83 0f fe              srwi     r3, r4, 0x1f */
/* 0x8058d880: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x8058d884: 7c 03 00 40              cmplw    r3, r0 */
/* 0x8058d888: 41 82 00 2c              beq      0x8058d8b4 */
/* 0x8058d88c: 80 79 00 00              lwz      r3, 0(r25) */
/* 0x8058d890: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x8058d894: 48 00 28 b1              bl       0x80590144 */
/* 0x8058d898: 57 80 06 3e              clrlwi   r0, r28, 0x18 */
/* 0x8058d89c: 7c 64 1b 78              mr       r4, r3 */
/* 0x8058d8a0: 1c 00 00 0c              mulli    r0, r0, 0xc */
/* 0x8058d8a4: 7f 63 db 78              mr       r3, r27 */
/* 0x8058d8a8: 7d 9a 02 14              add      r12, r26, r0 */
/* 0x8058d8ac: 4b fc 83 4d              bl       0x80555bf8 */
/* 0x8058d8b0: 60 00 00 00              nop       */
/* 0x8058d8b4: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x8058d8b8: 28 1c 00 02              cmplwi   r28, 2 */
/* 0x8058d8bc: 41 80 ff 94              blt      0x8058d850 */
/* 0x8058d8c0: 3b bd 00 01              addi     r29, r29, 1 */
/* 0x8058d8c4: 80 79 00 00              lwz      r3, 0(r25) */
/* 0x8058d8c8: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x8058d8cc: 88 03 00 24              lbz      r0, 0x24(r3) */
/* 0x8058d8d0: 7c 04 00 40              cmplw    r4, r0 */
/* 0x8058d8d4: 41 80 ff 74              blt      0x8058d848 */
/* 0x8058d8d8: bb 21 00 14              lmw      r25, 0x14(r1) */
/* 0x8058d8dc: 80 01 00 34              lwz      r0, 0x34(r1) */
/* 0x8058d8e0: 7c 08 03 a6              mtlr     r0 */
/* 0x8058d8e4: 38 21 00 30              addi     r1, r1, 0x30 */
/* 0x8058d8e8: 4e 80 00 20              blr       */
/* 0x8058d8ec: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8058d8f0: 7c 08 02 a6              mflr     r0 */
/* 0x8058d8f4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8058d8f8: 48 00 2e c9              bl       0x805907c0 */
/* 0x8058d8fc: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058d900: 81 8c 00 18              lwz      r12, 0x18(r12) */
/* 0x8058d904: 7d 89 03 a6              mtctr    r12 */
/* 0x8058d908: 4e 80 04 21              bctrl     */
/* 0x8058d90c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8058d910: 7c 08 03 a6              mtlr     r0 */
/* 0x8058d914: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8058d918: 4e 80 00 20              blr       */
/* 0x8058d91c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8058d920: 7c 08 02 a6              mflr     r0 */
/* 0x8058d924: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8058d928: 48 00 2e 99              bl       0x805907c0 */
/* 0x8058d92c: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058d930: 81 8c 00 1c              lwz      r12, 0x1c(r12) */
/* 0x8058d934: 7d 89 03 a6              mtctr    r12 */
/* 0x8058d938: 4e 80 04 21              bctrl     */
/* 0x8058d93c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8058d940: 7c 08 03 a6              mtlr     r0 */
/* 0x8058d944: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8058d948: 4e 80 00 20              blr       */
/* 0x8058d94c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8058d950: 7c 08 02 a6              mflr     r0 */
/* 0x8058d954: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8058d958: 48 00 2e 69              bl       0x805907c0 */
/* 0x8058d95c: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058d960: 38 80 00 00              li       r4, 0 */
/* 0x8058d964: 81 8c 00 20              lwz      r12, 0x20(r12) */
/* 0x8058d968: 7d 89 03 a6              mtctr    r12 */
/* 0x8058d96c: 4e 80 04 21              bctrl     */
/* 0x8058d970: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8058d974: 7c 08 03 a6              mtlr     r0 */
/* 0x8058d978: 38 21 00 10              addi     r1, r1, 0x10 */
#endif


/* === DISASSEMBLY === */

; Function: RacedataHandler_processInputs
; Demangled: RacedataHandler_processInputs
; Address: 0x8058d680  (.text+0x7ade4)
; Size: 764 bytes

  0x8058d680:  addi     r1, r1, 0x30
  0x8058d684:  blr      
  0x8058d688:  stwu     r1, -0x20(r1)
  0x8058d68c:  mflr     r0
  0x8058d690:  stw      r0, 0x24(r1)
  0x8058d694:  stmw     r27, 0xc(r1)
  0x8058d698:  mr       r30, r3
  0x8058d69c:  li       r27, 0
  0x8058d6a0:  li       r28, 1
  0x8058d6a4:  lwz      r3, 0x10(r30)
  0x8058d6a8:  slw      r4, r28, r27
  0x8058d6ac:  lwz      r0, 0x14(r30)
  0x8058d6b0:  and      r5, r3, r4
  0x8058d6b4:  and      r3, r0, r4
  0x8058d6b8:  neg      r4, r5
  0x8058d6bc:  neg      r0, r3
  0x8058d6c0:  or       r0, r0, r3
  0x8058d6c4:  or       r4, r4, r5
  0x8058d6c8:  srwi     r3, r4, 0x1f
  0x8058d6cc:  srwi     r0, r0, 0x1f
  0x8058d6d0:  cmplw    r3, r0
  0x8058d6d4:  beq      0x8058d700
  0x8058d6d8:  mr       r3, r30
  0x8058d6dc:  bl       0x805907a8
  0x8058d6e0:  lwz      r3, 0x14(r3)
  0x8058d6e4:  mr       r4, r27
  0x8058d6e8:  li       r5, 0
  0x8058d6ec:  li       r6, 0
  0x8058d6f0:  li       r7, 0
  0x8058d6f4:  li       r8, 0xc
  0x8058d6f8:  li       r9, 0
  0x8058d6fc:  bl       0x80569ac4
  0x8058d700:  addi     r27, r27, 1
  0x8058d704:  cmplwi   r27, 0x12
  0x8058d708:  blt      0x8058d6a4
  0x8058d70c:  lis      r29, 0
  0x8058d710:  li       r31, 0x13
  0x8058d714:  addi     r29, r29, 0
  0x8058d718:  li       r28, 1
  0x8058d71c:  lwz      r3, 0x10(r30)
  0x8058d720:  slw      r6, r28, r31
  0x8058d724:  lwz      r0, 0x14(r30)
  0x8058d728:  addi     r4, r31, -0x13
  0x8058d72c:  and      r5, r3, r6
  0x8058d730:  and      r3, r0, r6
  0x8058d734:  extsb    r6, r4
  0x8058d738:  neg      r4, r5
  0x8058d73c:  neg      r0, r3
  0x8058d740:  or       r0, r0, r3
  0x8058d744:  or       r4, r4, r5
  0x8058d748:  srwi     r3, r4, 0x1f
  0x8058d74c:  srwi     r0, r0, 0x1f
  0x8058d750:  cmplw    r3, r0
  0x8058d754:  beq      0x8058d780
  0x8058d758:  mulli    r0, r6, 0xc
  0x8058d75c:  add      r27, r29, r0
  0x8058d760:  mr       r3, r27
  0x8058d764:  bl       0x80555bf8
  0x8058d768:  cmpwi    r3, 0
  0x8058d76c:  beq      0x8058d780
  0x8058d770:  mr       r3, r30
  0x8058d774:  mr       r12, r27
  0x8058d778:  bl       0x80555bf8
  0x8058d77c:  nop      
  0x8058d780:  addi     r31, r31, 1
  0x8058d784:  cmplwi   r31, 0x1f
  0x8058d788:  blt      0x8058d71c
  0x8058d78c:  lis      r31, 0
  0x8058d790:  li       r28, 0
  0x8058d794:  addi     r31, r31, 0
  0x8058d798:  li       r29, 1
  0x8058d79c:  lwz      r3, 0x18(r30)
  0x8058d7a0:  slw      r4, r29, r28
  0x8058d7a4:  lwz      r0, 0x1c(r30)
  0x8058d7a8:  extsb    r6, r28
  0x8058d7ac:  and      r5, r3, r4
  0x8058d7b0:  and      r3, r0, r4
  0x8058d7b4:  neg      r4, r5
  0x8058d7b8:  neg      r0, r3
  0x8058d7bc:  or       r0, r0, r3
  0x8058d7c0:  or       r4, r4, r5
  0x8058d7c4:  srwi     r3, r4, 0x1f
  0x8058d7c8:  srwi     r0, r0, 0x1f
  0x8058d7cc:  cmplw    r3, r0
  0x8058d7d0:  beq      0x8058d7fc
  0x8058d7d4:  mulli    r0, r6, 0xc
  0x8058d7d8:  add      r27, r31, r0
  0x8058d7dc:  mr       r3, r27
  0x8058d7e0:  bl       0x80555bf8
  0x8058d7e4:  cmpwi    r3, 0
  0x8058d7e8:  beq      0x8058d7fc
  0x8058d7ec:  mr       r3, r30
  0x8058d7f0:  mr       r12, r27
  0x8058d7f4:  bl       0x80555bf8
  0x8058d7f8:  nop      
  0x8058d7fc:  addi     r28, r28, 1
  0x8058d800:  cmplwi   r28, 7
  0x8058d804:  blt      0x8058d79c
  0x8058d808:  lmw      r27, 0xc(r1)
  0x8058d80c:  lwz      r0, 0x24(r1)
  0x8058d810:  mtlr     r0
  0x8058d814:  addi     r1, r1, 0x20
  0x8058d818:  blr      
  0x8058d81c:  stwu     r1, -0x30(r1)
  0x8058d820:  mflr     r0
  0x8058d824:  stw      r0, 0x34(r1)
  0x8058d828:  stmw     r25, 0x14(r1)
  0x8058d82c:  lis      r26, 0
  0x8058d830:  mr       r27, r3
  0x8058d834:  li       r29, 0
  0x8058d838:  addi     r26, r26, 0
  0x8058d83c:  lis      r25, 0
  0x8058d840:  li       r31, 1
  0x8058d844:  b        0x8058d8c4
  0x8058d848:  rlwinm   r30, r29, 1, 0x17, 0x1e
  0x8058d84c:  li       r28, 0
  0x8058d850:  add      r0, r28, r30
  0x8058d854:  lwz      r3, 0x20(r27)
  0x8058d858:  clrlwi   r4, r0, 0x18
  0x8058d85c:  lwz      r0, 0x24(r27)
  0x8058d860:  slw      r4, r31, r4
  0x8058d864:  and      r5, r3, r4
  0x8058d868:  and      r3, r0, r4
  0x8058d86c:  neg      r4, r5
  0x8058d870:  neg      r0, r3
  0x8058d874:  or       r0, r0, r3
  0x8058d878:  or       r4, r4, r5
  0x8058d87c:  srwi     r3, r4, 0x1f
  0x8058d880:  srwi     r0, r0, 0x1f
  0x8058d884:  cmplw    r3, r0
  0x8058d888:  beq      0x8058d8b4
  0x8058d88c:  lwz      r3, 0(r25)
  0x8058d890:  clrlwi   r4, r29, 0x18
  0x8058d894:  bl       0x80590144
  0x8058d898:  clrlwi   r0, r28, 0x18
  0x8058d89c:  mr       r4, r3
  0x8058d8a0:  mulli    r0, r0, 0xc
  0x8058d8a4:  mr       r3, r27
  0x8058d8a8:  add      r12, r26, r0
  0x8058d8ac:  bl       0x80555bf8
  0x8058d8b0:  nop      
  0x8058d8b4:  addi     r28, r28, 1
  0x8058d8b8:  cmplwi   r28, 2
  0x8058d8bc:  blt      0x8058d850
  0x8058d8c0:  addi     r29, r29, 1
  0x8058d8c4:  lwz      r3, 0(r25)
  0x8058d8c8:  clrlwi   r4, r29, 0x18
  0x8058d8cc:  lbz      r0, 0x24(r3)
  0x8058d8d0:  cmplw    r4, r0
  0x8058d8d4:  blt      0x8058d848
  0x8058d8d8:  lmw      r25, 0x14(r1)
  0x8058d8dc:  lwz      r0, 0x34(r1)
  0x8058d8e0:  mtlr     r0
  0x8058d8e4:  addi     r1, r1, 0x30
  0x8058d8e8:  blr      
  0x8058d8ec:  stwu     r1, -0x10(r1)
  0x8058d8f0:  mflr     r0
  0x8058d8f4:  stw      r0, 0x14(r1)
  0x8058d8f8:  bl       0x805907c0
  0x8058d8fc:  lwz      r12, 0xc(r3)
  0x8058d900:  lwz      r12, 0x18(r12)
  0x8058d904:  mtctr    r12
  0x8058d908:  bctrl    
  0x8058d90c:  lwz      r0, 0x14(r1)
  0x8058d910:  mtlr     r0
  0x8058d914:  addi     r1, r1, 0x10
  0x8058d918:  blr      
  0x8058d91c:  stwu     r1, -0x10(r1)
  0x8058d920:  mflr     r0
  0x8058d924:  stw      r0, 0x14(r1)
  0x8058d928:  bl       0x805907c0
  0x8058d92c:  lwz      r12, 0xc(r3)
  0x8058d930:  lwz      r12, 0x1c(r12)
  0x8058d934:  mtctr    r12
  0x8058d938:  bctrl    
  0x8058d93c:  lwz      r0, 0x14(r1)
  0x8058d940:  mtlr     r0
  0x8058d944:  addi     r1, r1, 0x10
  0x8058d948:  blr      
  0x8058d94c:  stwu     r1, -0x10(r1)
  0x8058d950:  mflr     r0
  0x8058d954:  stw      r0, 0x14(r1)
  0x8058d958:  bl       0x805907c0
  0x8058d95c:  lwz      r12, 0xc(r3)
  0x8058d960:  li       r4, 0
  0x8058d964:  lwz      r12, 0x20(r12)
  0x8058d968:  mtctr    r12
  0x8058d96c:  bctrl    
  0x8058d970:  lwz      r0, 0x14(r1)
  0x8058d974:  mtlr     r0
  0x8058d978:  addi     r1, r1, 0x10
