/**
 * ItemHolder_destroy
 * @addr 0x8079b484
 * @size 412 bytes
 * @frame 16 bytes
 * @calls 1 function(s)
 */
void ItemHolder_destroy(void) {
    /* 0x8055fe08() */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* r30 = stack[0x8] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079b484: 4b dc 49 85              bl       0x8055fe08 */
/* 0x8079b488: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079b48c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079b490: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x8079b494: 7c 08 03 a6              mtlr     r0 */
/* 0x8079b498: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079b49c: 4e 80 00 20              blr       */
/* 0x8079b4a0: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b4a4: 90 83 00 ac              stw      r4, 0xac(r3) */
/* 0x8079b4a8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b4ac: 4d 82 00 20              beqlr     */
/* 0x8079b4b0: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b4b4: 4b dc 62 e8              b        0x8056179c */
/* 0x8079b4b8: 4e 80 00 20              blr       */
/* 0x8079b4bc: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x8079b4c0: 38 c0 00 00              li       r6, 0 */
/* 0x8079b4c4: 2c 00 00 02              cmpwi    r0, 2 */
/* 0x8079b4c8: 40 82 00 18              bne      0x8079b4e0 */
/* 0x8079b4cc: 3c a0 00 00              lis      r5, 0 */
/* 0x8079b4d0: 88 05 00 00              lbz      r0, 0(r5) */
/* 0x8079b4d4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b4d8: 41 82 00 08              beq      0x8079b4e0 */
/* 0x8079b4dc: 38 c0 00 01              li       r6, 1 */
/* 0x8079b4e0: 2c 06 00 00              cmpwi    r6, 0 */
/* 0x8079b4e4: 4c 82 00 20              bnelr     */
/* 0x8079b4e8: 80 a3 00 ac              lwz      r5, 0xac(r3) */
/* 0x8079b4ec: 2c 05 00 00              cmpwi    r5, 0 */
/* 0x8079b4f0: 41 82 00 0c              beq      0x8079b4fc */
/* 0x8079b4f4: 98 85 00 21              stb      r4, 0x21(r5) */
/* 0x8079b4f8: 4e 80 00 20              blr       */
/* 0x8079b4fc: 80 63 00 9c              lwz      r3, 0x9c(r3) */
/* 0x8079b500: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b504: 4d 82 00 20              beqlr     */
/* 0x8079b508: 4b dc 49 00              b        0x8055fe08 */
/* 0x8079b50c: 4e 80 00 20              blr       */
/* 0x8079b510: 38 60 00 01              li       r3, 1 */
/* 0x8079b514: 4e 80 00 20              blr       */
/* 0x8079b518: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079b51c: 7c 08 02 a6              mflr     r0 */
/* 0x8079b520: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079b524: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079b528: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079b52c: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b530: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b534: 41 82 00 1c              beq      0x8079b550 */
/* 0x8079b538: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b53c: 38 80 00 00              li       r4, 0 */
/* 0x8079b540: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b544: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b548: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b54c: 4e 80 04 21              bctrl     */
/* 0x8079b550: 80 7f 00 a0              lwz      r3, 0xa0(r31) */
/* 0x8079b554: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b558: 41 82 00 18              beq      0x8079b570 */
/* 0x8079b55c: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b560: 38 80 00 00              li       r4, 0 */
/* 0x8079b564: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b568: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b56c: 4e 80 04 21              bctrl     */
/* 0x8079b570: 80 7f 00 a8              lwz      r3, 0xa8(r31) */
/* 0x8079b574: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b578: 41 82 00 24              beq      0x8079b59c */
/* 0x8079b57c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x8079b580: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b584: 54 00 03 de              rlwinm   r0, r0, 0, 0xf, 0xf */
/* 0x8079b588: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x8079b58c: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b590: 54 04 d9 7e              srwi     r4, r0, 5 */
/* 0x8079b594: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b598: 4e 80 04 21              bctrl     */
/* 0x8079b59c: 80 9f 00 a4              lwz      r4, 0xa4(r31) */
/* 0x8079b5a0: 38 60 00 02              li       r3, 2 */
/* 0x8079b5a4: 80 04 00 20              lwz      r0, 0x20(r4) */
/* 0x8079b5a8: 64 00 21 21              oris     r0, r0, 0x2121 */
/* 0x8079b5ac: 60 00 21 21              ori      r0, r0, 0x2121 */
/* 0x8079b5b0: 90 04 00 20              stw      r0, 0x20(r4) */
/* 0x8079b5b4: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8079b5b8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8079b5bc: 7c 08 03 a6              mtlr     r0 */
/* 0x8079b5c0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8079b5c4: 4e 80 00 20              blr       */
/* 0x8079b5c8: 4e 80 00 20              blr       */
/* 0x8079b5cc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8079b5d0: 7c 08 02 a6              mflr     r0 */
/* 0x8079b5d4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8079b5d8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8079b5dc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8079b5e0: 80 03 00 9c              lwz      r0, 0x9c(r3) */
/* 0x8079b5e4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079b5e8: 41 82 00 1c              beq      0x8079b604 */
/* 0x8079b5ec: 7c 03 03 78              mr       r3, r0 */
/* 0x8079b5f0: 38 80 00 00              li       r4, 0 */
/* 0x8079b5f4: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b5f8: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b5fc: 7d 89 03 a6              mtctr    r12 */
/* 0x8079b600: 4e 80 04 21              bctrl     */
/* 0x8079b604: 80 7f 00 a0              lwz      r3, 0xa0(r31) */
/* 0x8079b608: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8079b60c: 41 82 00 18              beq      0x8079b624 */
/* 0x8079b610: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x8079b614: 38 80 00 00              li       r4, 0 */
/* 0x8079b618: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x8079b61c: 7d 89 03 a6              mtctr    r12 */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolder_destroy
; Demangled: ItemHolder_destroy
; Address: 0x8079b484  (.text+0x288be8)
; Size: 412 bytes

  0x8079b484:  bl       0x8055fe08
  0x8079b488:  lwz      r0, 0x14(r1)
  0x8079b48c:  lwz      r31, 0xc(r1)
  0x8079b490:  lwz      r30, 8(r1)
  0x8079b494:  mtlr     r0
  0x8079b498:  addi     r1, r1, 0x10
  0x8079b49c:  blr      
  0x8079b4a0:  lwz      r0, 0x9c(r3)
  0x8079b4a4:  stw      r4, 0xac(r3)
  0x8079b4a8:  cmpwi    r0, 0
  0x8079b4ac:  beqlr    
  0x8079b4b0:  mr       r3, r0
  0x8079b4b4:  b        0x8056179c
  0x8079b4b8:  blr      
  0x8079b4bc:  lwz      r0, 4(r3)
  0x8079b4c0:  li       r6, 0
  0x8079b4c4:  cmpwi    r0, 2
  0x8079b4c8:  bne      0x8079b4e0
  0x8079b4cc:  lis      r5, 0
  0x8079b4d0:  lbz      r0, 0(r5)
  0x8079b4d4:  cmpwi    r0, 0
  0x8079b4d8:  beq      0x8079b4e0
  0x8079b4dc:  li       r6, 1
  0x8079b4e0:  cmpwi    r6, 0
  0x8079b4e4:  bnelr    
  0x8079b4e8:  lwz      r5, 0xac(r3)
  0x8079b4ec:  cmpwi    r5, 0
  0x8079b4f0:  beq      0x8079b4fc
  0x8079b4f4:  stb      r4, 0x21(r5)
  0x8079b4f8:  blr      
  0x8079b4fc:  lwz      r3, 0x9c(r3)
  0x8079b500:  cmpwi    r3, 0
  0x8079b504:  beqlr    
  0x8079b508:  b        0x8055fe08
  0x8079b50c:  blr      
  0x8079b510:  li       r3, 1
  0x8079b514:  blr      
  0x8079b518:  stwu     r1, -0x10(r1)
  0x8079b51c:  mflr     r0
  0x8079b520:  stw      r0, 0x14(r1)
  0x8079b524:  stw      r31, 0xc(r1)
  0x8079b528:  mr       r31, r3
  0x8079b52c:  lwz      r0, 0x9c(r3)
  0x8079b530:  cmpwi    r0, 0
  0x8079b534:  beq      0x8079b550
  0x8079b538:  mr       r3, r0
  0x8079b53c:  li       r4, 0
  0x8079b540:  lwz      r12, 0(r3)
  0x8079b544:  lwz      r12, 0xc(r12)
  0x8079b548:  mtctr    r12
  0x8079b54c:  bctrl    
  0x8079b550:  lwz      r3, 0xa0(r31)
  0x8079b554:  cmpwi    r3, 0
  0x8079b558:  beq      0x8079b570
  0x8079b55c:  lwz      r12, 0(r3)
  0x8079b560:  li       r4, 0
  0x8079b564:  lwz      r12, 0xc(r12)
  0x8079b568:  mtctr    r12
  0x8079b56c:  bctrl    
  0x8079b570:  lwz      r3, 0xa8(r31)
  0x8079b574:  cmpwi    r3, 0
  0x8079b578:  beq      0x8079b59c
  0x8079b57c:  lwz      r0, 0x78(r31)
  0x8079b580:  lwz      r12, 0(r3)
  0x8079b584:  rlwinm   r0, r0, 0, 0xf, 0xf
  0x8079b588:  cntlzw   r0, r0
  0x8079b58c:  lwz      r12, 0xc(r12)
  0x8079b590:  srwi     r4, r0, 5
  0x8079b594:  mtctr    r12
  0x8079b598:  bctrl    
  0x8079b59c:  lwz      r4, 0xa4(r31)
  0x8079b5a0:  li       r3, 2
  0x8079b5a4:  lwz      r0, 0x20(r4)
  0x8079b5a8:  oris     r0, r0, 0x2121
  0x8079b5ac:  ori      r0, r0, 0x2121
  0x8079b5b0:  stw      r0, 0x20(r4)
  0x8079b5b4:  lwz      r31, 0xc(r1)
  0x8079b5b8:  lwz      r0, 0x14(r1)
  0x8079b5bc:  mtlr     r0
  0x8079b5c0:  addi     r1, r1, 0x10
  0x8079b5c4:  blr      
  0x8079b5c8:  blr      
  0x8079b5cc:  stwu     r1, -0x10(r1)
  0x8079b5d0:  mflr     r0
  0x8079b5d4:  stw      r0, 0x14(r1)
  0x8079b5d8:  stw      r31, 0xc(r1)
  0x8079b5dc:  mr       r31, r3
  0x8079b5e0:  lwz      r0, 0x9c(r3)
  0x8079b5e4:  cmpwi    r0, 0
  0x8079b5e8:  beq      0x8079b604
  0x8079b5ec:  mr       r3, r0
  0x8079b5f0:  li       r4, 0
  0x8079b5f4:  lwz      r12, 0(r3)
  0x8079b5f8:  lwz      r12, 0xc(r12)
  0x8079b5fc:  mtctr    r12
  0x8079b600:  bctrl    
  0x8079b604:  lwz      r3, 0xa0(r31)
  0x8079b608:  cmpwi    r3, 0
  0x8079b60c:  beq      0x8079b624
  0x8079b610:  lwz      r12, 0(r3)
  0x8079b614:  li       r4, 0
  0x8079b618:  lwz      r12, 0xc(r12)
  0x8079b61c:  mtctr    r12
