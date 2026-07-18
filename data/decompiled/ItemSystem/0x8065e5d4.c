/**
 * createStaticInstance__Net11ITEMHandlerFv
 * @addr 0x8065e5d4
 * @size 636 bytes
 * @frame 16 bytes
 * @calls 12 function(s)
 */
void Net11ITEMHandler(void* self) {
    /* add r3, r3, r27 */
    /* r5 = r3+0x182 */
    /* goto 0x8065e5e4 */
    /* li r5, 0 */
    /* r4 = stack[0x8] */
    /* cmpwi r4, 0 */
    /* if (cr0 !=) goto 0x8065e5f8 */
    /* li r4, 0 */
    /* goto 0x8065e600 */
    /* r3 = r4+0x0 */
    /* r1+0x8 = r3 */
    /* stb r0, 0(r4) */
    /* addi r3, r1, 0x10 */
    /* sth r5, 2(r4) */
    /* 0x80555bf8() */
    /* addi r26, r26, 1 */
    /* addi r27, r27, 0xc0 */
    /* cmplwi r26, 0xc */
    /* if (cr0 <) goto 0x8065e510 */
    /* addi r3, r1, 0x10 */
    /* li r4, 1 */
    /* 0x80555bf8() */
    /* r23 = r3 */
    /* goto 0x8065e6f4 */
    /* r4 = r23 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* r24 = r3 */
    /* r4 = r23 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* r4 = r3 */
    /* r0 = r23+0x2 */
    /* r3 = r3+0x2 */
    /* cmplw r3, r0 */
    /* if (cr0 !=) goto 0x8065e66c */
    /* li r0, 0 */
    /* goto 0x8065e678 */
    /* li r0, -1 */
    /* if (cr0 >=) goto 0x8065e678 */
    /* li r0, 1 */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x8065e6f0 */
    /* goto 0x8065e6b0 */
    /* r0 = r23+0x2 */
    /* r5 = r3+0x2 */
    /* cmplw r5, r0 */
    /* if (cr0 !=) goto 0x8065e69c */
    /* li r0, 0 */
    /* goto 0x8065e6a8 */
    /* li r0, -1 */
    /* if (cr0 >=) goto 0x8065e6a8 */
    /* li r0, 1 */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x8065e6c4 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* cmpwi r3, 0 */
    /* r4 = r3 */
    /* if (cr0 !=) goto 0x8065e684 */
    /* r4 = r3 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* r26 = r3 */
    /* r4 = r23 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* r4 = r26 */
    /* r5 = r23 */
    /* addi r3, r1, 0x10 */
    /* 0x80555bf8() */
    /* r23 = r24 */
    /* cmpwi r23, 0 */
    /* if (cr0 !=) goto 0x8065e634 */
    /* li r23, 0 */
    /* addi r3, r1, 0x10 */
    /* clrlwi r4, r23, 0x10 */
    /* 0x80555bf8() */
    /* addi r23, r23, 1 */
    /* r0 = r3+0x0 */
    /* cmplwi r23, 0xc */
    /* stb r0, 0(r25) */
    /* addi r25, r25, 1 */
    /* if (cr0 <) goto 0x8065e700 */
    /* lmw r23, 0xbc(r1) */
    /* r0 = stack[0xe4] */
    /* mtlr r0 */
    /* addi r1, r1, 0xe0 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8065e5d4: 7c 63 da 14              add      r3, r3, r27 */
/* 0x8065e5d8: a0 a3 01 82              lhz      r5, 0x182(r3) */
/* 0x8065e5dc: 48 00 00 08              b        0x8065e5e4 */
/* 0x8065e5e0: 38 a0 00 00              li       r5, 0 */
/* 0x8065e5e4: 80 81 00 08              lwz      r4, 8(r1) */
/* 0x8065e5e8: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8065e5ec: 40 82 00 0c              bne      0x8065e5f8 */
/* 0x8065e5f0: 38 80 00 00              li       r4, 0 */
/* 0x8065e5f4: 48 00 00 0c              b        0x8065e600 */
/* 0x8065e5f8: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x8065e5fc: 90 61 00 08              stw      r3, 8(r1) */
/* 0x8065e600: 98 04 00 00              stb      r0, 0(r4) */
/* 0x8065e604: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e608: b0 a4 00 02              sth      r5, 2(r4) */
/* 0x8065e60c: 4b ef 75 ed              bl       0x80555bf8 */
/* 0x8065e610: 3b 5a 00 01              addi     r26, r26, 1 */
/* 0x8065e614: 3b 7b 00 c0              addi     r27, r27, 0xc0 */
/* 0x8065e618: 28 1a 00 0c              cmplwi   r26, 0xc */
/* 0x8065e61c: 41 80 fe f4              blt      0x8065e510 */
/* 0x8065e620: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e624: 38 80 00 01              li       r4, 1 */
/* 0x8065e628: 4b ef 75 d1              bl       0x80555bf8 */
/* 0x8065e62c: 7c 77 1b 78              mr       r23, r3 */
/* 0x8065e630: 48 00 00 c4              b        0x8065e6f4 */
/* 0x8065e634: 7e e4 bb 78              mr       r4, r23 */
/* 0x8065e638: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e63c: 4b ef 75 bd              bl       0x80555bf8 */
/* 0x8065e640: 7c 78 1b 78              mr       r24, r3 */
/* 0x8065e644: 7e e4 bb 78              mr       r4, r23 */
/* 0x8065e648: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e64c: 4b ef 75 ad              bl       0x80555bf8 */
/* 0x8065e650: 7c 64 1b 78              mr       r4, r3 */
/* 0x8065e654: a0 17 00 02              lhz      r0, 2(r23) */
/* 0x8065e658: a0 63 00 02              lhz      r3, 2(r3) */
/* 0x8065e65c: 7c 03 00 40              cmplw    r3, r0 */
/* 0x8065e660: 40 82 00 0c              bne      0x8065e66c */
/* 0x8065e664: 38 00 00 00              li       r0, 0 */
/* 0x8065e668: 48 00 00 10              b        0x8065e678 */
/* 0x8065e66c: 38 00 ff ff              li       r0, -1 */
/* 0x8065e670: 40 80 00 08              bge      0x8065e678 */
/* 0x8065e674: 38 00 00 01              li       r0, 1 */
/* 0x8065e678: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8065e67c: 40 81 00 74              ble      0x8065e6f0 */
/* 0x8065e680: 48 00 00 30              b        0x8065e6b0 */
/* 0x8065e684: a0 17 00 02              lhz      r0, 2(r23) */
/* 0x8065e688: a0 a3 00 02              lhz      r5, 2(r3) */
/* 0x8065e68c: 7c 05 00 40              cmplw    r5, r0 */
/* 0x8065e690: 40 82 00 0c              bne      0x8065e69c */
/* 0x8065e694: 38 00 00 00              li       r0, 0 */
/* 0x8065e698: 48 00 00 10              b        0x8065e6a8 */
/* 0x8065e69c: 38 00 ff ff              li       r0, -1 */
/* 0x8065e6a0: 40 80 00 08              bge      0x8065e6a8 */
/* 0x8065e6a4: 38 00 00 01              li       r0, 1 */
/* 0x8065e6a8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8065e6ac: 40 81 00 18              ble      0x8065e6c4 */
/* 0x8065e6b0: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e6b4: 4b ef 75 45              bl       0x80555bf8 */
/* 0x8065e6b8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8065e6bc: 7c 64 1b 78              mr       r4, r3 */
/* 0x8065e6c0: 40 82 ff c4              bne      0x8065e684 */
/* 0x8065e6c4: 7c 64 1b 78              mr       r4, r3 */
/* 0x8065e6c8: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e6cc: 4b ef 75 2d              bl       0x80555bf8 */
/* 0x8065e6d0: 7c 7a 1b 78              mr       r26, r3 */
/* 0x8065e6d4: 7e e4 bb 78              mr       r4, r23 */
/* 0x8065e6d8: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e6dc: 4b ef 75 1d              bl       0x80555bf8 */
/* 0x8065e6e0: 7f 44 d3 78              mr       r4, r26 */
/* 0x8065e6e4: 7e e5 bb 78              mr       r5, r23 */
/* 0x8065e6e8: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e6ec: 4b ef 75 0d              bl       0x80555bf8 */
/* 0x8065e6f0: 7f 17 c3 78              mr       r23, r24 */
/* 0x8065e6f4: 2c 17 00 00              cmpwi    r23, 0 */
/* 0x8065e6f8: 40 82 ff 3c              bne      0x8065e634 */
/* 0x8065e6fc: 3a e0 00 00              li       r23, 0 */
/* 0x8065e700: 38 61 00 10              addi     r3, r1, 0x10 */
/* 0x8065e704: 56 e4 04 3e              clrlwi   r4, r23, 0x10 */
/* 0x8065e708: 4b ef 74 f1              bl       0x80555bf8 */
/* 0x8065e70c: 3a f7 00 01              addi     r23, r23, 1 */
/* 0x8065e710: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x8065e714: 28 17 00 0c              cmplwi   r23, 0xc */
/* 0x8065e718: 98 19 00 00              stb      r0, 0(r25) */
/* 0x8065e71c: 3b 39 00 01              addi     r25, r25, 1 */
/* 0x8065e720: 41 80 ff e0              blt      0x8065e700 */
/* 0x8065e724: ba e1 00 bc              lmw      r23, 0xbc(r1) */
/* 0x8065e728: 80 01 00 e4              lwz      r0, 0xe4(r1) */
/* 0x8065e72c: 7c 08 03 a6              mtlr     r0 */
/* 0x8065e730: 38 21 00 e0              addi     r1, r1, 0xe0 */
/* 0x8065e734: 4e 80 00 20              blr       */
/* 0x8065e738: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8065e73c: 7c 08 02 a6              mflr     r0 */
/* 0x8065e740: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8065e744: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8065e748: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8065e74c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8065e750: 41 82 00 10              beq      0x8065e760 */
/* 0x8065e754: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8065e758: 40 81 00 08              ble      0x8065e760 */
/* 0x8065e75c: 4b ef 74 9d              bl       0x80555bf8 */
/* 0x8065e760: 7f e3 fb 78              mr       r3, r31 */
/* 0x8065e764: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8065e768: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8065e76c: 7c 08 03 a6              mtlr     r0 */
/* 0x8065e770: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8065e774: 4e 80 00 20              blr       */
/* 0x8065e778: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8065e77c: 7c 08 02 a6              mflr     r0 */
/* 0x8065e780: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8065e784: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8065e788: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8065e78c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8065e790: 41 82 00 10              beq      0x8065e7a0 */
/* 0x8065e794: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8065e798: 40 81 00 08              ble      0x8065e7a0 */
/* 0x8065e79c: 4b ef 74 5d              bl       0x80555bf8 */
/* 0x8065e7a0: 7f e3 fb 78              mr       r3, r31 */
/* 0x8065e7a4: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8065e7a8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8065e7ac: 7c 08 03 a6              mtlr     r0 */
/* 0x8065e7b0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8065e7b4: 4e 80 00 20              blr       */
/* 0x8065e7b8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8065e7bc: 7c 08 02 a6              mflr     r0 */
/* 0x8065e7c0: 3c 80 00 00              lis      r4, 0 */
/* 0x8065e7c4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8065e7c8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8065e7cc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8065e7d0: 80 04 00 00              lwz      r0, 0(r4) */
/* 0x8065e7d4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8065e7d8: 40 82 00 a0              bne      0x8065e878 */
/* 0x8065e7dc: 38 60 03 f8              li       r3, 0x3f8 */
/* 0x8065e7e0: 4b ef 74 19              bl       0x80555bf8 */
/* 0x8065e7e4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8065e7e8: 41 82 00 88              beq      0x8065e870 */
/* 0x8065e7ec: 93 e3 00 00              stw      r31, 0(r3) */
/* 0x8065e7f0: 38 00 00 00              li       r0, 0 */
/* 0x8065e7f4: 3c 80 00 00              lis      r4, 0 */
/* 0x8065e7f8: 90 03 03 e0              stw      r0, 0x3e0(r3) */
/* 0x8065e7fc: 90 03 03 e4              stw      r0, 0x3e4(r3) */
/* 0x8065e800: 90 03 03 e8              stw      r0, 0x3e8(r3) */
/* 0x8065e804: 90 03 03 ec              stw      r0, 0x3ec(r3) */
/* 0x8065e808: 90 03 03 f0              stw      r0, 0x3f0(r3) */
/* 0x8065e80c: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x8065e810: 90 04 29 64              stw      r0, 0x2964(r4) */
/* 0x8065e814: 90 04 29 60              stw      r0, 0x2960(r4) */
/* 0x8065e818: 90 04 29 6c              stw      r0, 0x296c(r4) */
/* 0x8065e81c: 90 04 29 68              stw      r0, 0x2968(r4) */
/* 0x8065e820: 90 04 29 74              stw      r0, 0x2974(r4) */
/* 0x8065e824: 90 04 29 70              stw      r0, 0x2970(r4) */
/* 0x8065e828: 90 04 29 7c              stw      r0, 0x297c(r4) */
/* 0x8065e82c: 90 04 29 78              stw      r0, 0x2978(r4) */
/* 0x8065e830: 90 04 29 84              stw      r0, 0x2984(r4) */
/* 0x8065e834: 90 04 29 80              stw      r0, 0x2980(r4) */
/* 0x8065e838: 90 04 29 8c              stw      r0, 0x298c(r4) */
/* 0x8065e83c: 90 04 29 88              stw      r0, 0x2988(r4) */
/* 0x8065e840: 90 04 29 94              stw      r0, 0x2994(r4) */
/* 0x8065e844: 90 04 29 90              stw      r0, 0x2990(r4) */
/* 0x8065e848: 90 04 29 9c              stw      r0, 0x299c(r4) */
/* 0x8065e84c: 90 04 29 98              stw      r0, 0x2998(r4) */
#endif


/* === DISASSEMBLY === */

; Function: createStaticInstance__Q23Net11ITEMHandlerFv
; Demangled: createStaticInstance__Net11ITEMHandlerFv
; Address: 0x8065e5d4  (.text+0x14bd38)
; Size: 636 bytes

  0x8065e5d4:  add      r3, r3, r27
  0x8065e5d8:  lhz      r5, 0x182(r3)
  0x8065e5dc:  b        0x8065e5e4
  0x8065e5e0:  li       r5, 0
  0x8065e5e4:  lwz      r4, 8(r1)
  0x8065e5e8:  cmpwi    r4, 0
  0x8065e5ec:  bne      0x8065e5f8
  0x8065e5f0:  li       r4, 0
  0x8065e5f4:  b        0x8065e600
  0x8065e5f8:  lwz      r3, 0(r4)
  0x8065e5fc:  stw      r3, 8(r1)
  0x8065e600:  stb      r0, 0(r4)
  0x8065e604:  addi     r3, r1, 0x10
  0x8065e608:  sth      r5, 2(r4)
  0x8065e60c:  bl       0x80555bf8
  0x8065e610:  addi     r26, r26, 1
  0x8065e614:  addi     r27, r27, 0xc0
  0x8065e618:  cmplwi   r26, 0xc
  0x8065e61c:  blt      0x8065e510
  0x8065e620:  addi     r3, r1, 0x10
  0x8065e624:  li       r4, 1
  0x8065e628:  bl       0x80555bf8
  0x8065e62c:  mr       r23, r3
  0x8065e630:  b        0x8065e6f4
  0x8065e634:  mr       r4, r23
  0x8065e638:  addi     r3, r1, 0x10
  0x8065e63c:  bl       0x80555bf8
  0x8065e640:  mr       r24, r3
  0x8065e644:  mr       r4, r23
  0x8065e648:  addi     r3, r1, 0x10
  0x8065e64c:  bl       0x80555bf8
  0x8065e650:  mr       r4, r3
  0x8065e654:  lhz      r0, 2(r23)
  0x8065e658:  lhz      r3, 2(r3)
  0x8065e65c:  cmplw    r3, r0
  0x8065e660:  bne      0x8065e66c
  0x8065e664:  li       r0, 0
  0x8065e668:  b        0x8065e678
  0x8065e66c:  li       r0, -1
  0x8065e670:  bge      0x8065e678
  0x8065e674:  li       r0, 1
  0x8065e678:  cmpwi    r0, 0
  0x8065e67c:  ble      0x8065e6f0
  0x8065e680:  b        0x8065e6b0
  0x8065e684:  lhz      r0, 2(r23)
  0x8065e688:  lhz      r5, 2(r3)
  0x8065e68c:  cmplw    r5, r0
  0x8065e690:  bne      0x8065e69c
  0x8065e694:  li       r0, 0
  0x8065e698:  b        0x8065e6a8
  0x8065e69c:  li       r0, -1
  0x8065e6a0:  bge      0x8065e6a8
  0x8065e6a4:  li       r0, 1
  0x8065e6a8:  cmpwi    r0, 0
  0x8065e6ac:  ble      0x8065e6c4
  0x8065e6b0:  addi     r3, r1, 0x10
  0x8065e6b4:  bl       0x80555bf8
  0x8065e6b8:  cmpwi    r3, 0
  0x8065e6bc:  mr       r4, r3
  0x8065e6c0:  bne      0x8065e684
  0x8065e6c4:  mr       r4, r3
  0x8065e6c8:  addi     r3, r1, 0x10
  0x8065e6cc:  bl       0x80555bf8
  0x8065e6d0:  mr       r26, r3
  0x8065e6d4:  mr       r4, r23
  0x8065e6d8:  addi     r3, r1, 0x10
  0x8065e6dc:  bl       0x80555bf8
  0x8065e6e0:  mr       r4, r26
  0x8065e6e4:  mr       r5, r23
  0x8065e6e8:  addi     r3, r1, 0x10
  0x8065e6ec:  bl       0x80555bf8
  0x8065e6f0:  mr       r23, r24
  0x8065e6f4:  cmpwi    r23, 0
  0x8065e6f8:  bne      0x8065e634
  0x8065e6fc:  li       r23, 0
  0x8065e700:  addi     r3, r1, 0x10
  0x8065e704:  clrlwi   r4, r23, 0x10
  0x8065e708:  bl       0x80555bf8
  0x8065e70c:  addi     r23, r23, 1
  0x8065e710:  lbz      r0, 0(r3)
  0x8065e714:  cmplwi   r23, 0xc
  0x8065e718:  stb      r0, 0(r25)
  0x8065e71c:  addi     r25, r25, 1
  0x8065e720:  blt      0x8065e700
  0x8065e724:  lmw      r23, 0xbc(r1)
  0x8065e728:  lwz      r0, 0xe4(r1)
  0x8065e72c:  mtlr     r0
  0x8065e730:  addi     r1, r1, 0xe0
  0x8065e734:  blr      
  0x8065e738:  stwu     r1, -0x10(r1)
  0x8065e73c:  mflr     r0
  0x8065e740:  cmpwi    r3, 0
  0x8065e744:  stw      r0, 0x14(r1)
  0x8065e748:  stw      r31, 0xc(r1)
  0x8065e74c:  mr       r31, r3
  0x8065e750:  beq      0x8065e760
  0x8065e754:  cmpwi    r4, 0
  0x8065e758:  ble      0x8065e760
  0x8065e75c:  bl       0x80555bf8
  0x8065e760:  mr       r3, r31
  0x8065e764:  lwz      r31, 0xc(r1)
  0x8065e768:  lwz      r0, 0x14(r1)
  0x8065e76c:  mtlr     r0
  0x8065e770:  addi     r1, r1, 0x10
  0x8065e774:  blr      
  0x8065e778:  stwu     r1, -0x10(r1)
  0x8065e77c:  mflr     r0
  0x8065e780:  cmpwi    r3, 0
  0x8065e784:  stw      r0, 0x14(r1)
  0x8065e788:  stw      r31, 0xc(r1)
  0x8065e78c:  mr       r31, r3
  0x8065e790:  beq      0x8065e7a0
  0x8065e794:  cmpwi    r4, 0
  0x8065e798:  ble      0x8065e7a0
  0x8065e79c:  bl       0x80555bf8
  0x8065e7a0:  mr       r3, r31
  0x8065e7a4:  lwz      r31, 0xc(r1)
  0x8065e7a8:  lwz      r0, 0x14(r1)
  0x8065e7ac:  mtlr     r0
  0x8065e7b0:  addi     r1, r1, 0x10
  0x8065e7b4:  blr      
  0x8065e7b8:  stwu     r1, -0x10(r1)
  0x8065e7bc:  mflr     r0
  0x8065e7c0:  lis      r4, 0
  0x8065e7c4:  stw      r0, 0x14(r1)
  0x8065e7c8:  stw      r31, 0xc(r1)
  0x8065e7cc:  mr       r31, r3
  0x8065e7d0:  lwz      r0, 0(r4)
  0x8065e7d4:  cmpwi    r0, 0
  0x8065e7d8:  bne      0x8065e878
  0x8065e7dc:  li       r3, 0x3f8
  0x8065e7e0:  bl       0x80555bf8
  0x8065e7e4:  cmpwi    r3, 0
  0x8065e7e8:  beq      0x8065e870
  0x8065e7ec:  stw      r31, 0(r3)
  0x8065e7f0:  li       r0, 0
  0x8065e7f4:  lis      r4, 0
  0x8065e7f8:  stw      r0, 0x3e0(r3)
  0x8065e7fc:  stw      r0, 0x3e4(r3)
  0x8065e800:  stw      r0, 0x3e8(r3)
  0x8065e804:  stw      r0, 0x3ec(r3)
  0x8065e808:  stw      r0, 0x3f0(r3)
  0x8065e80c:  lwz      r4, 0(r4)
  0x8065e810:  stw      r0, 0x2964(r4)
  0x8065e814:  stw      r0, 0x2960(r4)
  0x8065e818:  stw      r0, 0x296c(r4)
  0x8065e81c:  stw      r0, 0x2968(r4)
  0x8065e820:  stw      r0, 0x2974(r4)
  0x8065e824:  stw      r0, 0x2970(r4)
  0x8065e828:  stw      r0, 0x297c(r4)
  0x8065e82c:  stw      r0, 0x2978(r4)
  0x8065e830:  stw      r0, 0x2984(r4)
  0x8065e834:  stw      r0, 0x2980(r4)
  0x8065e838:  stw      r0, 0x298c(r4)
  0x8065e83c:  stw      r0, 0x2988(r4)
  0x8065e840:  stw      r0, 0x2994(r4)
  0x8065e844:  stw      r0, 0x2990(r4)
  0x8065e848:  stw      r0, 0x299c(r4)
  0x8065e84c:  stw      r0, 0x2998(r4)
