/**
 * ~~System10RaceConfigFv
 * @addr 0x80532520
 * @size 188 bytes
 * @frame 48 bytes
 * @calls 6 function(s)
 */
void System10RaceConfig(void) {
    /* r5 = r4+0xb66 */
    /* stb r5, 0xb66(r3) */
    /* r5 = r4+0xb67 */
    /* stb r5, 0xb67(r3) */
    /* r5 = r4+0xb68 */
    /* r3+0xb68 = r5 */
    /* r5 = r4+0xb6c */
    /* stb r5, 0xb6c(r3) */
    /* r5 = r4+0xb6d */
    /* stb r5, 0xb6d(r3) */
    /* r5 = r4+0xb70 */
    /* r3+0xb70 = r5 */
    /* r5 = r4+0xb74 */
    /* r3+0xb74 = r5 */
    /* r5 = r4+0xb78 */
    /* r3+0xb78 = r5 */
    /* mtctr r0 */
    /* r5 = r6+0x4 */
    /* r0 = r6+0x8 */
    /* r7+0x4 = r5 */
    /* r7+0x8 = r0 */
    /* bdnz 0x80532564 */
    /* r0 = r4+0xbec */
    /* r3+0xbec = r0 */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80532520: 88 a4 0b 66              lbz      r5, 0xb66(r4) */
/* 0x80532524: 98 a3 0b 66              stb      r5, 0xb66(r3) */
/* 0x80532528: 88 a4 0b 67              lbz      r5, 0xb67(r4) */
/* 0x8053252c: 98 a3 0b 67              stb      r5, 0xb67(r3) */
/* 0x80532530: 80 a4 0b 68              lwz      r5, 0xb68(r4) */
/* 0x80532534: 90 a3 0b 68              stw      r5, 0xb68(r3) */
/* 0x80532538: 88 a4 0b 6c              lbz      r5, 0xb6c(r4) */
/* 0x8053253c: 98 a3 0b 6c              stb      r5, 0xb6c(r3) */
/* 0x80532540: 88 a4 0b 6d              lbz      r5, 0xb6d(r4) */
/* 0x80532544: 98 a3 0b 6d              stb      r5, 0xb6d(r3) */
/* 0x80532548: 80 a4 0b 70              lwz      r5, 0xb70(r4) */
/* 0x8053254c: 90 a3 0b 70              stw      r5, 0xb70(r3) */
/* 0x80532550: 80 a4 0b 74              lwz      r5, 0xb74(r4) */
/* 0x80532554: 90 a3 0b 74              stw      r5, 0xb74(r3) */
/* 0x80532558: 80 a4 0b 78              lwz      r5, 0xb78(r4) */
/* 0x8053255c: 90 a3 0b 78              stw      r5, 0xb78(r3) */
/* 0x80532560: 7c 09 03 a6              mtctr    r0 */
/* 0x80532564: 80 a6 00 04              lwz      r5, 4(r6) */
/* 0x80532568: 84 06 00 08              lwzu     r0, 8(r6) */
/* 0x8053256c: 90 a7 00 04              stw      r5, 4(r7) */
/* 0x80532570: 94 07 00 08              stwu     r0, 8(r7) */
/* 0x80532574: 42 00 ff f0              bdnz     0x80532564 */
/* 0x80532578: 80 04 0b ec              lwz      r0, 0xbec(r4) */
/* 0x8053257c: 90 03 0b ec              stw      r0, 0xbec(r3) */
/* 0x80532580: 4e 80 00 20              blr       */
/* 0x80532584: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x80532588: 7c 08 02 a6              mflr     r0 */
/* 0x8053258c: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x80532590: bf 21 00 14              stmw     r25, 0x14(r1) */
/* 0x80532594: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80532598: 4b ff fa 4d              bl       0x80531fe4 */
/* 0x8053259c: 38 7f 18 00              addi     r3, r31, 0x1800 */
/* 0x805325a0: 38 9f 00 20              addi     r4, r31, 0x20 */
/* 0x805325a4: 4b ff fd 29              bl       0x805322cc */
/* 0x805325a8: 3b c0 00 00              li       r30, 0 */
/* 0x805325ac: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805325b0: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x805325b4: 4b ff db a1              bl       0x80530154 */
/* 0x805325b8: 38 80 00 05              li       r4, 5 */
/* 0x805325bc: 4b ff db b1              bl       0x8053016c */
/* 0x805325c0: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x805325c4: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805325c8: 3b a4 00 01              addi     r29, r4, 1 */
/* 0x805325cc: 4b ff db 89              bl       0x80530154 */
/* 0x805325d0: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x805325d4: 4b ff dd a5              bl       0x80530378 */
/* 0x805325d8: 38 7f 0c 10              addi     r3, r31, 0xc10 */
#endif


/* === DISASSEMBLY === */

; Function: __dt__Q26System10RaceConfigFv
; Demangled: ~~System10RaceConfigFv
; Address: 0x80532520  (.text+0x1fc84)
; Size: 188 bytes

  0x80532520:  lbz      r5, 0xb66(r4)
  0x80532524:  stb      r5, 0xb66(r3)
  0x80532528:  lbz      r5, 0xb67(r4)
  0x8053252c:  stb      r5, 0xb67(r3)
  0x80532530:  lwz      r5, 0xb68(r4)
  0x80532534:  stw      r5, 0xb68(r3)
  0x80532538:  lbz      r5, 0xb6c(r4)
  0x8053253c:  stb      r5, 0xb6c(r3)
  0x80532540:  lbz      r5, 0xb6d(r4)
  0x80532544:  stb      r5, 0xb6d(r3)
  0x80532548:  lwz      r5, 0xb70(r4)
  0x8053254c:  stw      r5, 0xb70(r3)
  0x80532550:  lwz      r5, 0xb74(r4)
  0x80532554:  stw      r5, 0xb74(r3)
  0x80532558:  lwz      r5, 0xb78(r4)
  0x8053255c:  stw      r5, 0xb78(r3)
  0x80532560:  mtctr    r0
  0x80532564:  lwz      r5, 4(r6)
  0x80532568:  lwzu     r0, 8(r6)
  0x8053256c:  stw      r5, 4(r7)
  0x80532570:  stwu     r0, 8(r7)
  0x80532574:  bdnz     0x80532564
  0x80532578:  lwz      r0, 0xbec(r4)
  0x8053257c:  stw      r0, 0xbec(r3)
  0x80532580:  blr      
  0x80532584:  stwu     r1, -0x30(r1)
  0x80532588:  mflr     r0
  0x8053258c:  stw      r0, 0x34(r1)
  0x80532590:  stmw     r25, 0x14(r1)
  0x80532594:  mr       r31, r3
  0x80532598:  bl       0x80531fe4
  0x8053259c:  addi     r3, r31, 0x1800
  0x805325a0:  addi     r4, r31, 0x20
  0x805325a4:  bl       0x805322cc
  0x805325a8:  li       r30, 0
  0x805325ac:  addi     r3, r31, 0xc10
  0x805325b0:  clrlwi   r4, r30, 0x18
  0x805325b4:  bl       0x80530154
  0x805325b8:  li       r4, 5
  0x805325bc:  bl       0x8053016c
  0x805325c0:  clrlwi   r4, r30, 0x18
  0x805325c4:  addi     r3, r31, 0xc10
  0x805325c8:  addi     r29, r4, 1
  0x805325cc:  bl       0x80530154
  0x805325d0:  clrlwi   r4, r29, 0x18
  0x805325d4:  bl       0x80530378
  0x805325d8:  addi     r3, r31, 0xc10
