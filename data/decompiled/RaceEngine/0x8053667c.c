/**
 * RaceinfoPlayer_init
 * @addr 0x8053667c
 * @size 340 bytes
 * @frame 80 bytes
 * @calls 6 function(s)
 */
void RaceinfoPlayer_init(void) {
    /* r4 = r31+0x4c */
    /* addi r0, r4, -1 */
    /* cntlzw r3, r4 */
    /* andc r0, r0, r4 */
    /* cntlzw r0, r0 */
    /* subfic r0, r0, 0x20 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x805366a4 */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x805366ac */
    /* li r3, 0 */
    /* goto 0x805366c4 */
    /* add r0, r3, r0 */
    /* subfic r0, r0, 0x1f */
    /* extsh r3, r0 */
    /* cmpwi r3, 9 */
    /* if (cr0 <=) goto 0x805366c4 */
    /* li r3, 0 */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8053667c: 80 9f 00 4c              lwz      r4, 0x4c(r31) */
/* 0x80536680: 38 04 ff ff              addi     r0, r4, -1 */
/* 0x80536684: 7c 83 00 34              cntlzw   r3, r4 */
/* 0x80536688: 7c 00 20 78              andc     r0, r0, r4 */
/* 0x8053668c: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x80536690: 20 00 00 20              subfic   r0, r0, 0x20 */
/* 0x80536694: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80536698: 41 82 00 0c              beq      0x805366a4 */
/* 0x8053669c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x805366a0: 40 82 00 0c              bne      0x805366ac */
/* 0x805366a4: 38 60 00 00              li       r3, 0 */
/* 0x805366a8: 48 00 00 1c              b        0x805366c4 */
/* 0x805366ac: 7c 03 02 14              add      r0, r3, r0 */
/* 0x805366b0: 20 00 00 1f              subfic   r0, r0, 0x1f */
/* 0x805366b4: 7c 03 07 34              extsh    r3, r0 */
/* 0x805366b8: 2c 03 00 09              cmpwi    r3, 9 */
/* 0x805366bc: 40 81 00 08              ble      0x805366c4 */
/* 0x805366c0: 38 60 00 00              li       r3, 0 */
/* 0x805366c4: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x805366c8: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x805366cc: 7c 08 03 a6              mtlr     r0 */
/* 0x805366d0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x805366d4: 4e 80 00 20              blr       */
/* 0x805366d8: 94 21 ff b0              stwu     r1, -0x50(r1) */
/* 0x805366dc: 7c 08 02 a6              mflr     r0 */
/* 0x805366e0: 90 01 00 54              stw      r0, 0x54(r1) */
/* 0x805366e4: 39 61 00 50              addi     r11, r1, 0x50 */
/* 0x805366e8: 48 01 f5 11              bl       0x80555bf8 */
/* 0x805366ec: 3b e0 00 00              li       r31, 0 */
/* 0x805366f0: 9b e3 00 28              stb      r31, 0x28(r3) */
/* 0x805366f4: 80 a3 00 38              lwz      r5, 0x38(r3) */
/* 0x805366f8: 3c c0 00 00              lis      r6, 0 */
/* 0x805366fc: 80 86 00 00              lwz      r4, 0(r6) */
/* 0x80536700: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80536704: 54 a0 07 bd              rlwinm.  r0, r5, 0, 0x1e, 0x1e */
/* 0x80536708: 83 c4 00 14              lwz      r30, 0x14(r4) */
/* 0x8053670c: 40 82 02 74              bne      0x80536980 */
/* 0x80536710: 54 a0 07 39              rlwinm.  r0, r5, 0, 0x1c, 0x1c */
/* 0x80536714: 40 82 02 6c              bne      0x80536980 */
/* 0x80536718: a8 83 00 24              lha      r4, 0x24(r3) */
/* 0x8053671c: 38 a4 00 01              addi     r5, r4, 1 */
/* 0x80536720: b0 a3 00 24              sth      r5, 0x24(r3) */
/* 0x80536724: 80 86 00 00              lwz      r4, 0(r6) */
/* 0x80536728: 88 04 00 30              lbz      r0, 0x30(r4) */
/* 0x8053672c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80536730: 41 82 02 50              beq      0x80536980 */
/* 0x80536734: 88 03 00 26              lbz      r0, 0x26(r3) */
/* 0x80536738: 7c a3 07 34              extsh    r3, r5 */
/* 0x8053673c: 7c 03 00 00              cmpw     r3, r0 */
/* 0x80536740: 40 81 02 40              ble      0x80536980 */
/* 0x80536744: 3f 80 00 00              lis      r28, 0 */
/* 0x80536748: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x8053674c: 80 7c 00 00              lwz      r3, 0(r28) */
/* 0x80536750: 48 05 99 f5              bl       0x80590144 */
/* 0x80536754: 48 05 9b 15              bl       0x80590268 */
/* 0x80536758: 7c 7b 1b 78              mr       r27, r3 */
/* 0x8053675c: 80 7c 00 00              lwz      r3, 0(r28) */
/* 0x80536760: 88 9d 00 08              lbz      r4, 8(r29) */
/* 0x80536764: 48 05 99 e1              bl       0x80590144 */
/* 0x80536768: 48 05 9a e9              bl       0x80590250 */
/* 0x8053676c: 3c 80 00 00              lis      r4, 0 */
/* 0x80536770: 7c 65 1b 78              mr       r5, r3 */
/* 0x80536774: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x80536778: 7f 66 db 78              mr       r6, r27 */
/* 0x8053677c: a0 9d 00 0a              lhz      r4, 0xa(r29) */
/* 0x80536780: 4b fd da f1              bl       0x80514270 */
/* 0x80536784: 3c a0 00 00              lis      r5, 0 */
/* 0x80536788: 3c 80 43 30              lis      r4, 0x4330 */
/* 0x8053678c: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x80536790: 90 a1 00 08              stw      r5, 8(r1) */
/* 0x80536794: 54 65 04 3e              clrlwi   r5, r3, 0x10 */
/* 0x80536798: 3c 60 00 00              lis      r3, 0 */
/* 0x8053679c: 9b e1 00 12              stb      r31, 0x12(r1) */
/* 0x805367a0: 38 c0 00 00              li       r6, 0 */
/* 0x805367a4: c8 43 00 00              lfd      f2, 0(r3) */
/* 0x805367a8: b3 e1 00 0c              sth      r31, 0xc(r1) */
/* 0x805367ac: 9b e1 00 0e              stb      r31, 0xe(r1) */
/* 0x805367b0: b3 e1 00 10              sth      r31, 0x10(r1) */
/* 0x805367b4: a0 1e 00 0c              lhz      r0, 0xc(r30) */
/* 0x805367b8: 90 a1 00 1c              stw      r5, 0x1c(r1) */
/* 0x805367bc: 90 81 00 18              stw      r4, 0x18(r1) */
/* 0x805367c0: c8 01 00 18              lfd      f0, 0x18(r1) */
/* 0x805367c4: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x805367c8: ec 20 10 28              fsubs    f1, f0, f2 */
/* 0x805367cc: 90 81 00 20              stw      r4, 0x20(r1) */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_init
; Demangled: RaceinfoPlayer_init
; Address: 0x8053667c  (.text+0x23de0)
; Size: 340 bytes

  0x8053667c:  lwz      r4, 0x4c(r31)
  0x80536680:  addi     r0, r4, -1
  0x80536684:  cntlzw   r3, r4
  0x80536688:  andc     r0, r0, r4
  0x8053668c:  cntlzw   r0, r0
  0x80536690:  subfic   r0, r0, 0x20
  0x80536694:  cmpwi    r0, 0
  0x80536698:  beq      0x805366a4
  0x8053669c:  cmpwi    r3, 0
  0x805366a0:  bne      0x805366ac
  0x805366a4:  li       r3, 0
  0x805366a8:  b        0x805366c4
  0x805366ac:  add      r0, r3, r0
  0x805366b0:  subfic   r0, r0, 0x1f
  0x805366b4:  extsh    r3, r0
  0x805366b8:  cmpwi    r3, 9
  0x805366bc:  ble      0x805366c4
  0x805366c0:  li       r3, 0
  0x805366c4:  lwz      r0, 0x14(r1)
  0x805366c8:  lwz      r31, 0xc(r1)
  0x805366cc:  mtlr     r0
  0x805366d0:  addi     r1, r1, 0x10
  0x805366d4:  blr      
  0x805366d8:  stwu     r1, -0x50(r1)
  0x805366dc:  mflr     r0
  0x805366e0:  stw      r0, 0x54(r1)
  0x805366e4:  addi     r11, r1, 0x50
  0x805366e8:  bl       0x80555bf8
  0x805366ec:  li       r31, 0
  0x805366f0:  stb      r31, 0x28(r3)
  0x805366f4:  lwz      r5, 0x38(r3)
  0x805366f8:  lis      r6, 0
  0x805366fc:  lwz      r4, 0(r6)
  0x80536700:  mr       r29, r3
  0x80536704:  rlwinm.  r0, r5, 0, 0x1e, 0x1e
  0x80536708:  lwz      r30, 0x14(r4)
  0x8053670c:  bne      0x80536980
  0x80536710:  rlwinm.  r0, r5, 0, 0x1c, 0x1c
  0x80536714:  bne      0x80536980
  0x80536718:  lha      r4, 0x24(r3)
  0x8053671c:  addi     r5, r4, 1
  0x80536720:  sth      r5, 0x24(r3)
  0x80536724:  lwz      r4, 0(r6)
  0x80536728:  lbz      r0, 0x30(r4)
  0x8053672c:  cmpwi    r0, 0
  0x80536730:  beq      0x80536980
  0x80536734:  lbz      r0, 0x26(r3)
  0x80536738:  extsh    r3, r5
  0x8053673c:  cmpw     r3, r0
  0x80536740:  ble      0x80536980
  0x80536744:  lis      r28, 0
  0x80536748:  lbz      r4, 8(r29)
  0x8053674c:  lwz      r3, 0(r28)
  0x80536750:  bl       0x80590144
  0x80536754:  bl       0x80590268
  0x80536758:  mr       r27, r3
  0x8053675c:  lwz      r3, 0(r28)
  0x80536760:  lbz      r4, 8(r29)
  0x80536764:  bl       0x80590144
  0x80536768:  bl       0x80590250
  0x8053676c:  lis      r4, 0
  0x80536770:  mr       r5, r3
  0x80536774:  lwz      r3, 0(r4)
  0x80536778:  mr       r6, r27
  0x8053677c:  lhz      r4, 0xa(r29)
  0x80536780:  bl       0x80514270
  0x80536784:  lis      r5, 0
  0x80536788:  lis      r4, 0x4330
  0x8053678c:  addi     r5, r5, 0
  0x80536790:  stw      r5, 8(r1)
  0x80536794:  clrlwi   r5, r3, 0x10
  0x80536798:  lis      r3, 0
  0x8053679c:  stb      r31, 0x12(r1)
  0x805367a0:  li       r6, 0
  0x805367a4:  lfd      f2, 0(r3)
  0x805367a8:  sth      r31, 0xc(r1)
  0x805367ac:  stb      r31, 0xe(r1)
  0x805367b0:  sth      r31, 0x10(r1)
  0x805367b4:  lhz      r0, 0xc(r30)
  0x805367b8:  stw      r5, 0x1c(r1)
  0x805367bc:  stw      r4, 0x18(r1)
  0x805367c0:  lfd      f0, 0x18(r1)
  0x805367c4:  stw      r0, 0x24(r1)
  0x805367c8:  fsubs    f1, f0, f2
  0x805367cc:  stw      r4, 0x20(r1)
