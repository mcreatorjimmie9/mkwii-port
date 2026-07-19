/**
 * ~System10RaceConfigFv
 * @addr 0x80532644
 * @size 360 bytes
 * @frame 0 bytes
 * @calls 27 function(s)
 */
void System10RaceConfig(void* self /* this */) {
    /* 0x8052fa40() */
    /* 0x80532c38() */
    /* clrlwi r0, r3, 0x18 */
    /* cmplw r29, r0 */
    /* if (cr0 !=) goto 0x80532730 */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r28, 0x18 */
    /* 0x8052fa40() */
    /* 0x80530a40() */
    /* cmpwi r3, 5 */
    /* if (cr0 ==) goto 0x80532730 */
    /* addi r0, r30, -1 */
    /* addi r3, r31, 0x20 */
    /* clrlwi r27, r0, 0x18 */
    /* clrlwi r4, r28, 0x18 */
    /* 0x8052fa40() */
    /* 0x80532c40() */
    /* r29 = r3 */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* r4 = r29 */
    /* 0x8053014c() */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r28, 0x18 */
    /* 0x8052fa40() */
    /* 0x80532c48() */
    /* r29 = r3 */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* r4 = r29 */
    /* 0x80530164() */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* li r4, 1 */
    /* 0x8053016c() */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* clrlwi r4, r30, 0x18 */
    /* 0x80530378() */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* clrlwi r4, r30, 0x18 */
    /* 0x80530380() */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r28, 0x18 */
    /* 0x8052fa40() */
    /* 0x80532d88() */
    /* r29 = r3 */
    /* r4 = r27 */
    /* addi r3, r31, 0xc10 */
    /* 0x80530154() */
    /* r4 = r29 */
    /* 0x80532c50() */
    /* goto 0x8053273c */
    /* addi r28, r28, 1 */
    /* cmplwi r28, 0xc */
    /* if (cr0 <) goto 0x8053263c */
    /* addi r30, r30, 1 */
    /* cmplwi r30, 3 */
    /* if (cr0 <=) goto 0x80532634 */
    /* goto 0x80532c10 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80532a38 */
    /* addi r3, r31, 0x20 */
    /* 0x8052f9c8() */
    /* cntlzw r0, r3 */
    /* r27 = r3 */
    /* srwi r28, r0, 5 */
    /* li r29, 0 */
    /* goto 0x805327ac */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r29, 0x18 */
    /* 0x8052fa40() */
    /* 0x80530a40() */
    /* cmpwi r3, 0 */
    /* if (cr0 !=) goto 0x805327a8 */
    /* addi r3, r31, 0x20 */
    /* clrlwi r4, r29, 0x18 */
    /* 0x8052fa40() */
    /* 0x8052fa38() */
    /* cmpw r27, r3 */
    /* if (cr0 !=) goto 0x805327a8 */
    /* r28 = r27 */
    /* goto 0x805327c0 */
    /* addi r29, r29, 1 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80532644: 4b ff d3 fd              bl       0x8052fa40 */
/* 0x80532648: 48 00 05 f1              bl       0x80532c38 */
/* 0x8053264c: 54 60 06 3e              clrlwi   r0, r3, 0x18 */
/* 0x80532650: 7c 1d 00 40              cmplw    r29, r0 */
/* 0x80532654: 40 82 00 dc              bne      0x80532730 */
/* 0x80532658: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x8053265c: 57 84 06 3e              clrlwi   r4, r28, 0x18 */
/* 0x80532660: 4b ff d3 e1              bl       0x8052fa40 */
/* 0x80532664: 4b ff e3 dd              bl       0x80530a40 */
/* 0x80532668: 2c 03 00 05              cmpwi    r3, 5 */
/* 0x8053266c: 41 82 00 c4              beq      0x80532730 */
/* 0x80532670: 38 1e ff ff              addi     r0, r30, -1 */
/* 0x80532674: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532678: 54 1b 06 3e              clrlwi   r27, r0, 0x18 */
/* 0x8053267c: 57 84 06 3e              clrlwi   r4, r28, 0x18 */
/* 0x80532680: 4b ff d3 c1              bl       0x8052fa40 */
/* 0x80532684: 48 00 05 bd              bl       0x80532c40 */
/* 0x80532688: 7c 7d 1b 78              mr       r29, r3 */
/* 0x8053268c: 7f 64 db 78              mr       r4, r27 */
/* 0x80532690: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532694: 4b ff da c1              bl       0x80530154 */
/* 0x80532698: 7f a4 eb 78              mr       r4, r29 */
/* 0x8053269c: 4b ff da b1              bl       0x8053014c */
/* 0x805326a0: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x805326a4: 57 84 06 3e              clrlwi   r4, r28, 0x18 */
/* 0x805326a8: 4b ff d3 99              bl       0x8052fa40 */
/* 0x805326ac: 48 00 05 9d              bl       0x80532c48 */
/* 0x805326b0: 7c 7d 1b 78              mr       r29, r3 */
/* 0x805326b4: 7f 64 db 78              mr       r4, r27 */
/* 0x805326b8: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805326bc: 4b ff da 99              bl       0x80530154 */
/* 0x805326c0: 7f a4 eb 78              mr       r4, r29 */
/* 0x805326c4: 4b ff da a1              bl       0x80530164 */
/* 0x805326c8: 7f 64 db 78              mr       r4, r27 */
/* 0x805326cc: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805326d0: 4b ff da 85              bl       0x80530154 */
/* 0x805326d4: 38 80 00 01              li       r4, 1 */
/* 0x805326d8: 4b ff da 95              bl       0x8053016c */
/* 0x805326dc: 7f 64 db 78              mr       r4, r27 */
/* 0x805326e0: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805326e4: 4b ff da 71              bl       0x80530154 */
/* 0x805326e8: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x805326ec: 4b ff dc 8d              bl       0x80530378 */
/* 0x805326f0: 7f 64 db 78              mr       r4, r27 */
/* 0x805326f4: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x805326f8: 4b ff da 5d              bl       0x80530154 */
/* 0x805326fc: 57 c4 06 3e              clrlwi   r4, r30, 0x18 */
/* 0x80532700: 4b ff dc 81              bl       0x80530380 */
/* 0x80532704: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532708: 57 84 06 3e              clrlwi   r4, r28, 0x18 */
/* 0x8053270c: 4b ff d3 35              bl       0x8052fa40 */
/* 0x80532710: 48 00 06 79              bl       0x80532d88 */
/* 0x80532714: 7c 7d 1b 78              mr       r29, r3 */
/* 0x80532718: 7f 64 db 78              mr       r4, r27 */
/* 0x8053271c: 38 7f 0c 10              addi     r3, r31, 0xc10 */
/* 0x80532720: 4b ff da 35              bl       0x80530154 */
/* 0x80532724: 7f a4 eb 78              mr       r4, r29 */
/* 0x80532728: 48 00 05 29              bl       0x80532c50 */
/* 0x8053272c: 48 00 00 10              b        0x8053273c */
/* 0x80532730: 3b 9c 00 01              addi     r28, r28, 1 */
/* 0x80532734: 28 1c 00 0c              cmplwi   r28, 0xc */
/* 0x80532738: 41 80 ff 04              blt      0x8053263c */
/* 0x8053273c: 3b de 00 01              addi     r30, r30, 1 */
/* 0x80532740: 28 1e 00 03              cmplwi   r30, 3 */
/* 0x80532744: 40 81 fe f0              ble      0x80532634 */
/* 0x80532748: 48 00 04 c8              b        0x80532c10 */
/* 0x8053274c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80532750: 41 82 02 e8              beq      0x80532a38 */
/* 0x80532754: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532758: 4b ff d2 71              bl       0x8052f9c8 */
/* 0x8053275c: 7c 60 00 34              cntlzw   r0, r3 */
/* 0x80532760: 7c 7b 1b 78              mr       r27, r3 */
/* 0x80532764: 54 1c d9 7e              srwi     r28, r0, 5 */
/* 0x80532768: 3b a0 00 00              li       r29, 0 */
/* 0x8053276c: 48 00 00 40              b        0x805327ac */
/* 0x80532770: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x80532774: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x80532778: 4b ff d2 c9              bl       0x8052fa40 */
/* 0x8053277c: 4b ff e2 c5              bl       0x80530a40 */
/* 0x80532780: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80532784: 40 82 00 24              bne      0x805327a8 */
/* 0x80532788: 38 7f 00 20              addi     r3, r31, 0x20 */
/* 0x8053278c: 57 a4 06 3e              clrlwi   r4, r29, 0x18 */
/* 0x80532790: 4b ff d2 b1              bl       0x8052fa40 */
/* 0x80532794: 4b ff d2 a5              bl       0x8052fa38 */
/* 0x80532798: 7c 1b 18 00              cmpw     r27, r3 */
/* 0x8053279c: 40 82 00 0c              bne      0x805327a8 */
/* 0x805327a0: 7f 7c db 78              mr       r28, r27 */
/* 0x805327a4: 48 00 00 1c              b        0x805327c0 */
/* 0x805327a8: 3b bd 00 01              addi     r29, r29, 1 */
#endif


/* === DISASSEMBLY === */

; Function: __ct__Q26System10RaceConfigFv
; Demangled: ~System10RaceConfigFv
; Address: 0x80532644  (.text+0x1fda8)
; Size: 360 bytes

  0x80532644:  bl       0x8052fa40
  0x80532648:  bl       0x80532c38
  0x8053264c:  clrlwi   r0, r3, 0x18
  0x80532650:  cmplw    r29, r0
  0x80532654:  bne      0x80532730
  0x80532658:  addi     r3, r31, 0x20
  0x8053265c:  clrlwi   r4, r28, 0x18
  0x80532660:  bl       0x8052fa40
  0x80532664:  bl       0x80530a40
  0x80532668:  cmpwi    r3, 5
  0x8053266c:  beq      0x80532730
  0x80532670:  addi     r0, r30, -1
  0x80532674:  addi     r3, r31, 0x20
  0x80532678:  clrlwi   r27, r0, 0x18
  0x8053267c:  clrlwi   r4, r28, 0x18
  0x80532680:  bl       0x8052fa40
  0x80532684:  bl       0x80532c40
  0x80532688:  mr       r29, r3
  0x8053268c:  mr       r4, r27
  0x80532690:  addi     r3, r31, 0xc10
  0x80532694:  bl       0x80530154
  0x80532698:  mr       r4, r29
  0x8053269c:  bl       0x8053014c
  0x805326a0:  addi     r3, r31, 0x20
  0x805326a4:  clrlwi   r4, r28, 0x18
  0x805326a8:  bl       0x8052fa40
  0x805326ac:  bl       0x80532c48
  0x805326b0:  mr       r29, r3
  0x805326b4:  mr       r4, r27
  0x805326b8:  addi     r3, r31, 0xc10
  0x805326bc:  bl       0x80530154
  0x805326c0:  mr       r4, r29
  0x805326c4:  bl       0x80530164
  0x805326c8:  mr       r4, r27
  0x805326cc:  addi     r3, r31, 0xc10
  0x805326d0:  bl       0x80530154
  0x805326d4:  li       r4, 1
  0x805326d8:  bl       0x8053016c
  0x805326dc:  mr       r4, r27
  0x805326e0:  addi     r3, r31, 0xc10
  0x805326e4:  bl       0x80530154
  0x805326e8:  clrlwi   r4, r30, 0x18
  0x805326ec:  bl       0x80530378
  0x805326f0:  mr       r4, r27
  0x805326f4:  addi     r3, r31, 0xc10
  0x805326f8:  bl       0x80530154
  0x805326fc:  clrlwi   r4, r30, 0x18
  0x80532700:  bl       0x80530380
  0x80532704:  addi     r3, r31, 0x20
  0x80532708:  clrlwi   r4, r28, 0x18
  0x8053270c:  bl       0x8052fa40
  0x80532710:  bl       0x80532d88
  0x80532714:  mr       r29, r3
  0x80532718:  mr       r4, r27
  0x8053271c:  addi     r3, r31, 0xc10
  0x80532720:  bl       0x80530154
  0x80532724:  mr       r4, r29
  0x80532728:  bl       0x80532c50
  0x8053272c:  b        0x8053273c
  0x80532730:  addi     r28, r28, 1
  0x80532734:  cmplwi   r28, 0xc
  0x80532738:  blt      0x8053263c
  0x8053273c:  addi     r30, r30, 1
  0x80532740:  cmplwi   r30, 3
  0x80532744:  ble      0x80532634
  0x80532748:  b        0x80532c10
  0x8053274c:  cmpwi    r3, 0
  0x80532750:  beq      0x80532a38
  0x80532754:  addi     r3, r31, 0x20
  0x80532758:  bl       0x8052f9c8
  0x8053275c:  cntlzw   r0, r3
  0x80532760:  mr       r27, r3
  0x80532764:  srwi     r28, r0, 5
  0x80532768:  li       r29, 0
  0x8053276c:  b        0x805327ac
  0x80532770:  addi     r3, r31, 0x20
  0x80532774:  clrlwi   r4, r29, 0x18
  0x80532778:  bl       0x8052fa40
  0x8053277c:  bl       0x80530a40
  0x80532780:  cmpwi    r3, 0
  0x80532784:  bne      0x805327a8
  0x80532788:  addi     r3, r31, 0x20
  0x8053278c:  clrlwi   r4, r29, 0x18
  0x80532790:  bl       0x8052fa40
  0x80532794:  bl       0x8052fa38
  0x80532798:  cmpw     r27, r3
  0x8053279c:  bne      0x805327a8
  0x805327a0:  mr       r28, r27
  0x805327a4:  b        0x805327c0
  0x805327a8:  addi     r29, r29, 1
