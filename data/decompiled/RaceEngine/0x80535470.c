/**
 * Raceinfo_init
 * @addr 0x80535470
 * @size 260 bytes
 * @frame 0 bytes
 */
void Raceinfo_init(void) {
    /* extsb r8, r8 */
    /* addi r20, r8, -1 */
    /* if (cr0 ==) goto 0x80535514 */
    /* r8 = r11+0x40 */
    /* li r0, 0x63 */
    /* r11 = r8+0x4 */
    /* r12 = r8+0x6 */
    /* cmplwi r11, 0x63 */
    /* r19 = r8+0x8 */
    /* if (cr0 >) goto 0x8053549c */
    /* r0 = r11 */
    /* cmplwi r11, 0x63 */
    /* clrlwi r9, r0, 0x18 */
    /* li r8, 0x3b */
    /* if (cr0 >) goto 0x805354b0 */
    /* r8 = r12 */
    /* clrlwi r0, r5, 0x18 */
    /* r1+0x7c = r0 */
    /* cmplwi r11, 0x63 */
    /* clrlwi r11, r8, 0x18 */
    /* r1+0x78 = r10 */
    /* li r0, 0x3e7 */
    /* f0 = *(f32*)(r1+0x78) */
    /* fsub f0, f0, f4 */
    /* fmul f2, f3, f0 */
    /* if (cr0 >) goto 0x805354dc */
    /* r0 = r19 */
    /* mulli r8, r9, 0x3c */
    /* clrlwi r9, r0, 0x10 */
    /* r1+0x80 = r10 */
    /* slwi r0, r20, 3 */
    /* add r8, r11, r8 */
    /* mulli r8, r8, 0x3e8 */
    /* add r8, r9, r8 */
    /* r1+0x84 = r8 */
    /* f0 = *(f32*)(r1+0x80) */
    /* fsub f0, f0, f4 */
    /* fsub f0, f1, f0 */
    /* fadd f0, f2, f0 */
    /* stfdx f0, r7, r0 */
    /* goto 0x80535520 */
    /* slwi r0, r20, 3 */
    /* f0 = *(f32*)(r9+0xc) */
    /* stfdx f0, r7, r0 */
    /* stbx r5, r6, r20 */
    /* addi r5, r5, 1 */
    /* clrlwi r0, r5, 0x18 */
    /* cmpw r0, r31 */
    /* if (cr0 <) goto 0x8053544c */
    /* addi r0, r31, -1 */
    /* addi r7, r1, 0x20 */
    /* addi r8, r1, 9 */
    /* addi r6, r1, 0x18 */
    /* addi r5, r1, 8 */
    /* li r11, 1 */
    /* li r4, 8 */
    /* mtctr r0 */
    /* cmpwi r31, 1 */
    /* if (cr0 <=) goto 0x805355cc */
    /* addi r9, r1, 0x18 */
    /* addi r10, r1, 8 */
    /* f1 = *(f32*)(r7+0x0) */
    /* r12 = r11 */
    /* r19 = r8+0x0 */
    /* add r9, r9, r4 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80535470: 7d 08 07 74              extsb    r8, r8 */
/* 0x80535474: 3a 88 ff ff              addi     r20, r8, -1 */
/* 0x80535478: 41 82 00 9c              beq      0x80535514 */
/* 0x8053547c: 81 0b 00 40              lwz      r8, 0x40(r11) */
/* 0x80535480: 38 00 00 63              li       r0, 0x63 */
/* 0x80535484: a1 68 00 04              lhz      r11, 4(r8) */
/* 0x80535488: 89 88 00 06              lbz      r12, 6(r8) */
/* 0x8053548c: 28 0b 00 63              cmplwi   r11, 0x63 */
/* 0x80535490: a2 68 00 08              lhz      r19, 8(r8) */
/* 0x80535494: 41 81 00 08              bgt      0x8053549c */
/* 0x80535498: 7d 60 5b 78              mr       r0, r11 */
/* 0x8053549c: 28 0b 00 63              cmplwi   r11, 0x63 */
/* 0x805354a0: 54 09 06 3e              clrlwi   r9, r0, 0x18 */
/* 0x805354a4: 39 00 00 3b              li       r8, 0x3b */
/* 0x805354a8: 41 81 00 08              bgt      0x805354b0 */
/* 0x805354ac: 7d 88 63 78              mr       r8, r12 */
/* 0x805354b0: 54 a0 06 3e              clrlwi   r0, r5, 0x18 */
/* 0x805354b4: 90 01 00 7c              stw      r0, 0x7c(r1) */
/* 0x805354b8: 28 0b 00 63              cmplwi   r11, 0x63 */
/* 0x805354bc: 55 0b 06 3e              clrlwi   r11, r8, 0x18 */
/* 0x805354c0: 91 41 00 78              stw      r10, 0x78(r1) */
/* 0x805354c4: 38 00 03 e7              li       r0, 0x3e7 */
/* 0x805354c8: c8 01 00 78              lfd      f0, 0x78(r1) */
/* 0x805354cc: fc 00 20 28              fsub     f0, f0, f4 */
/* 0x805354d0: fc 43 00 32              fmul     f2, f3, f0 */
/* 0x805354d4: 41 81 00 08              bgt      0x805354dc */
/* 0x805354d8: 7e 60 9b 78              mr       r0, r19 */
/* 0x805354dc: 1d 09 00 3c              mulli    r8, r9, 0x3c */
/* 0x805354e0: 54 09 04 3e              clrlwi   r9, r0, 0x10 */
/* 0x805354e4: 91 41 00 80              stw      r10, 0x80(r1) */
/* 0x805354e8: 56 80 18 38              slwi     r0, r20, 3 */
/* 0x805354ec: 7d 0b 42 14              add      r8, r11, r8 */
/* 0x805354f0: 1d 08 03 e8              mulli    r8, r8, 0x3e8 */
/* 0x805354f4: 7d 09 42 14              add      r8, r9, r8 */
/* 0x805354f8: 91 01 00 84              stw      r8, 0x84(r1) */
/* 0x805354fc: c8 01 00 80              lfd      f0, 0x80(r1) */
/* 0x80535500: fc 00 20 28              fsub     f0, f0, f4 */
/* 0x80535504: fc 01 00 28              fsub     f0, f1, f0 */
/* 0x80535508: fc 02 00 2a              fadd     f0, f2, f0 */
/* 0x8053550c: 7c 07 05 ae              stfdx    f0, r7, r0 */
/* 0x80535510: 48 00 00 10              b        0x80535520 */
/* 0x80535514: 56 80 18 38              slwi     r0, r20, 3 */
/* 0x80535518: c0 09 00 0c              lfs      f0, 0xc(r9) */
/* 0x8053551c: 7c 07 05 ae              stfdx    f0, r7, r0 */
/* 0x80535520: 7c a6 a1 ae              stbx     r5, r6, r20 */
/* 0x80535524: 38 a5 00 01              addi     r5, r5, 1 */
/* 0x80535528: 54 a0 06 3e              clrlwi   r0, r5, 0x18 */
/* 0x8053552c: 7c 00 f8 00              cmpw     r0, r31 */
/* 0x80535530: 41 80 ff 1c              blt      0x8053544c */
/* 0x80535534: 38 1f ff ff              addi     r0, r31, -1 */
/* 0x80535538: 38 e1 00 20              addi     r7, r1, 0x20 */
/* 0x8053553c: 39 01 00 09              addi     r8, r1, 9 */
/* 0x80535540: 38 c1 00 18              addi     r6, r1, 0x18 */
/* 0x80535544: 38 a1 00 08              addi     r5, r1, 8 */
/* 0x80535548: 39 60 00 01              li       r11, 1 */
/* 0x8053554c: 38 80 00 08              li       r4, 8 */
/* 0x80535550: 7c 09 03 a6              mtctr    r0 */
/* 0x80535554: 2c 1f 00 01              cmpwi    r31, 1 */
/* 0x80535558: 40 81 00 74              ble      0x805355cc */
/* 0x8053555c: 39 21 00 18              addi     r9, r1, 0x18 */
/* 0x80535560: 39 41 00 08              addi     r10, r1, 8 */
/* 0x80535564: c8 27 00 00              lfd      f1, 0(r7) */
/* 0x80535568: 7d 6c 5b 78              mr       r12, r11 */
/* 0x8053556c: 8a 68 00 00              lbz      r19, 0(r8) */
/* 0x80535570: 7d 29 22 14              add      r9, r9, r4 */
#endif


/* === DISASSEMBLY === */

; Function: Raceinfo_init
; Demangled: Raceinfo_init
; Address: 0x80535470  (.text+0x22bd4)
; Size: 260 bytes

  0x80535470:  extsb    r8, r8
  0x80535474:  addi     r20, r8, -1
  0x80535478:  beq      0x80535514
  0x8053547c:  lwz      r8, 0x40(r11)
  0x80535480:  li       r0, 0x63
  0x80535484:  lhz      r11, 4(r8)
  0x80535488:  lbz      r12, 6(r8)
  0x8053548c:  cmplwi   r11, 0x63
  0x80535490:  lhz      r19, 8(r8)
  0x80535494:  bgt      0x8053549c
  0x80535498:  mr       r0, r11
  0x8053549c:  cmplwi   r11, 0x63
  0x805354a0:  clrlwi   r9, r0, 0x18
  0x805354a4:  li       r8, 0x3b
  0x805354a8:  bgt      0x805354b0
  0x805354ac:  mr       r8, r12
  0x805354b0:  clrlwi   r0, r5, 0x18
  0x805354b4:  stw      r0, 0x7c(r1)
  0x805354b8:  cmplwi   r11, 0x63
  0x805354bc:  clrlwi   r11, r8, 0x18
  0x805354c0:  stw      r10, 0x78(r1)
  0x805354c4:  li       r0, 0x3e7
  0x805354c8:  lfd      f0, 0x78(r1)
  0x805354cc:  fsub     f0, f0, f4
  0x805354d0:  fmul     f2, f3, f0
  0x805354d4:  bgt      0x805354dc
  0x805354d8:  mr       r0, r19
  0x805354dc:  mulli    r8, r9, 0x3c
  0x805354e0:  clrlwi   r9, r0, 0x10
  0x805354e4:  stw      r10, 0x80(r1)
  0x805354e8:  slwi     r0, r20, 3
  0x805354ec:  add      r8, r11, r8
  0x805354f0:  mulli    r8, r8, 0x3e8
  0x805354f4:  add      r8, r9, r8
  0x805354f8:  stw      r8, 0x84(r1)
  0x805354fc:  lfd      f0, 0x80(r1)
  0x80535500:  fsub     f0, f0, f4
  0x80535504:  fsub     f0, f1, f0
  0x80535508:  fadd     f0, f2, f0
  0x8053550c:  stfdx    f0, r7, r0
  0x80535510:  b        0x80535520
  0x80535514:  slwi     r0, r20, 3
  0x80535518:  lfs      f0, 0xc(r9)
  0x8053551c:  stfdx    f0, r7, r0
  0x80535520:  stbx     r5, r6, r20
  0x80535524:  addi     r5, r5, 1
  0x80535528:  clrlwi   r0, r5, 0x18
  0x8053552c:  cmpw     r0, r31
  0x80535530:  blt      0x8053544c
  0x80535534:  addi     r0, r31, -1
  0x80535538:  addi     r7, r1, 0x20
  0x8053553c:  addi     r8, r1, 9
  0x80535540:  addi     r6, r1, 0x18
  0x80535544:  addi     r5, r1, 8
  0x80535548:  li       r11, 1
  0x8053554c:  li       r4, 8
  0x80535550:  mtctr    r0
  0x80535554:  cmpwi    r31, 1
  0x80535558:  ble      0x805355cc
  0x8053555c:  addi     r9, r1, 0x18
  0x80535560:  addi     r10, r1, 8
  0x80535564:  lfd      f1, 0(r7)
  0x80535568:  mr       r12, r11
  0x8053556c:  lbz      r19, 0(r8)
  0x80535570:  add      r9, r9, r4
