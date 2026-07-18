/**
 * TimeAttackBackPage_afterCalc
 * @addr 0x8063b634
 * @size 276 bytes
 * @frame 16 bytes
 * @calls 14 function(s)
 */
void TimeAttackBackPage_afterCalc(void) {
    /* 0x805bc6a4() */
    /* r3 = r31 */
    /* addi r5, r31, 0xa70 */
    /* li r4, 4 */
    /* li r6, 0 */
    /* 0x805e43f4() */
    /* addi r3, r31, 0xa70 */
    /* addi r4, r30, 0x233 */
    /* addi r5, r30, 0x23a */
    /* addi r6, r30, 0x252 */
    /* li r7, 1 */
    /* li r8, 0 */
    /* li r9, 0 */
    /* 0x805bc0dc() */
    /* li r0, 4 */
    /* r31+0xcb0 = r0 */
    /* addi r3, r31, 0xa70 */
    /* addi r4, r31, 0x6c */
    /* li r5, 0 */
    /* 0x805bc68c() */
    /* addi r3, r31, 0xa70 */
    /* addi r4, r31, 0x94 */
    /* 0x805bc6a4() */
    /* r3 = r31 */
    /* addi r5, r31, 0xcc4 */
    /* li r4, 5 */
    /* li r6, 0 */
    /* 0x805e43f4() */
    /* addi r3, r31, 0xcc4 */
    /* addi r4, r30, 0x259 */
    /* addi r5, r30, 0x260 */
    /* addi r6, r30, 0x265 */
    /* li r7, 1 */
    /* li r8, 0 */
    /* li r9, 1 */
    /* 0x805bc0dc() */
    /* li r0, 5 */
    /* r31+0xf04 = r0 */
    /* addi r3, r31, 0xcc4 */
    /* addi r4, r31, 0x80 */
    /* li r5, 0 */
    /* 0x805bc68c() */
    /* addi r3, r31, 0xcc4 */
    /* addi r4, r31, 0x94 */
    /* 0x805bc6a4() */
    /* r3 = r31 */
    /* addi r5, r31, 0xf28 */
    /* li r4, 6 */
    /* li r6, 0 */
    /* 0x805e43f4() */
    /* addi r3, r31, 0xf28 */
    /* 0x80848094() */
    /* addi r3, r31, 0x5c8 */
    /* li r4, 0 */
    /* 0x805bc6b4() */
    /* addi r3, r31, 0xf28 */
    /* li r4, 0x849 */
    /* li r5, 0 */
    /* 0x808481c8() */
    /* addi r11, r1, 0x90 */
    /* 0x80555bf8() */
    /* r0 = stack[0x94] */
    /* mtlr r0 */
    /* addi r1, r1, 0x90 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8063b634: 4b f8 10 71              bl       0x805bc6a4 */
/* 0x8063b638: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b63c: 38 bf 0a 70              addi     r5, r31, 0xa70 */
/* 0x8063b640: 38 80 00 04              li       r4, 4 */
/* 0x8063b644: 38 c0 00 00              li       r6, 0 */
/* 0x8063b648: 4b fa 8d ad              bl       0x805e43f4 */
/* 0x8063b64c: 38 7f 0a 70              addi     r3, r31, 0xa70 */
/* 0x8063b650: 38 9e 02 33              addi     r4, r30, 0x233 */
/* 0x8063b654: 38 be 02 3a              addi     r5, r30, 0x23a */
/* 0x8063b658: 38 de 02 52              addi     r6, r30, 0x252 */
/* 0x8063b65c: 38 e0 00 01              li       r7, 1 */
/* 0x8063b660: 39 00 00 00              li       r8, 0 */
/* 0x8063b664: 39 20 00 00              li       r9, 0 */
/* 0x8063b668: 4b f8 0a 75              bl       0x805bc0dc */
/* 0x8063b66c: 38 00 00 04              li       r0, 4 */
/* 0x8063b670: 90 1f 0c b0              stw      r0, 0xcb0(r31) */
/* 0x8063b674: 38 7f 0a 70              addi     r3, r31, 0xa70 */
/* 0x8063b678: 38 9f 00 6c              addi     r4, r31, 0x6c */
/* 0x8063b67c: 38 a0 00 00              li       r5, 0 */
/* 0x8063b680: 4b f8 10 0d              bl       0x805bc68c */
/* 0x8063b684: 38 7f 0a 70              addi     r3, r31, 0xa70 */
/* 0x8063b688: 38 9f 00 94              addi     r4, r31, 0x94 */
/* 0x8063b68c: 4b f8 10 19              bl       0x805bc6a4 */
/* 0x8063b690: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b694: 38 bf 0c c4              addi     r5, r31, 0xcc4 */
/* 0x8063b698: 38 80 00 05              li       r4, 5 */
/* 0x8063b69c: 38 c0 00 00              li       r6, 0 */
/* 0x8063b6a0: 4b fa 8d 55              bl       0x805e43f4 */
/* 0x8063b6a4: 38 7f 0c c4              addi     r3, r31, 0xcc4 */
/* 0x8063b6a8: 38 9e 02 59              addi     r4, r30, 0x259 */
/* 0x8063b6ac: 38 be 02 60              addi     r5, r30, 0x260 */
/* 0x8063b6b0: 38 de 02 65              addi     r6, r30, 0x265 */
/* 0x8063b6b4: 38 e0 00 01              li       r7, 1 */
/* 0x8063b6b8: 39 00 00 00              li       r8, 0 */
/* 0x8063b6bc: 39 20 00 01              li       r9, 1 */
/* 0x8063b6c0: 4b f8 0a 1d              bl       0x805bc0dc */
/* 0x8063b6c4: 38 00 00 05              li       r0, 5 */
/* 0x8063b6c8: 90 1f 0f 04              stw      r0, 0xf04(r31) */
/* 0x8063b6cc: 38 7f 0c c4              addi     r3, r31, 0xcc4 */
/* 0x8063b6d0: 38 9f 00 80              addi     r4, r31, 0x80 */
/* 0x8063b6d4: 38 a0 00 00              li       r5, 0 */
/* 0x8063b6d8: 4b f8 0f b5              bl       0x805bc68c */
/* 0x8063b6dc: 38 7f 0c c4              addi     r3, r31, 0xcc4 */
/* 0x8063b6e0: 38 9f 00 94              addi     r4, r31, 0x94 */
/* 0x8063b6e4: 4b f8 0f c1              bl       0x805bc6a4 */
/* 0x8063b6e8: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b6ec: 38 bf 0f 28              addi     r5, r31, 0xf28 */
/* 0x8063b6f0: 38 80 00 06              li       r4, 6 */
/* 0x8063b6f4: 38 c0 00 00              li       r6, 0 */
/* 0x8063b6f8: 4b fa 8c fd              bl       0x805e43f4 */
/* 0x8063b6fc: 38 7f 0f 28              addi     r3, r31, 0xf28 */
/* 0x8063b700: 48 20 c9 95              bl       0x80848094 */
/* 0x8063b704: 38 7f 05 c8              addi     r3, r31, 0x5c8 */
/* 0x8063b708: 38 80 00 00              li       r4, 0 */
/* 0x8063b70c: 4b f8 0f a9              bl       0x805bc6b4 */
/* 0x8063b710: 38 7f 0f 28              addi     r3, r31, 0xf28 */
/* 0x8063b714: 38 80 08 49              li       r4, 0x849 */
/* 0x8063b718: 38 a0 00 00              li       r5, 0 */
/* 0x8063b71c: 48 20 ca ad              bl       0x808481c8 */
/* 0x8063b720: 39 61 00 90              addi     r11, r1, 0x90 */
/* 0x8063b724: 4b f1 a4 d5              bl       0x80555bf8 */
/* 0x8063b728: 80 01 00 94              lwz      r0, 0x94(r1) */
/* 0x8063b72c: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b730: 38 21 00 90              addi     r1, r1, 0x90 */
/* 0x8063b734: 4e 80 00 20              blr       */
/* 0x8063b738: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063b73c: 7c 08 02 a6              mflr     r0 */
/* 0x8063b740: 38 80 ff ff              li       r4, -1 */
/* 0x8063b744: 90 01 00 14              stw      r0, 0x14(r1) */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackBackPage_afterCalc
; Demangled: TimeAttackBackPage_afterCalc
; Address: 0x8063b634  (.text+0x128d98)
; Size: 276 bytes

  0x8063b634:  bl       0x805bc6a4
  0x8063b638:  mr       r3, r31
  0x8063b63c:  addi     r5, r31, 0xa70
  0x8063b640:  li       r4, 4
  0x8063b644:  li       r6, 0
  0x8063b648:  bl       0x805e43f4
  0x8063b64c:  addi     r3, r31, 0xa70
  0x8063b650:  addi     r4, r30, 0x233
  0x8063b654:  addi     r5, r30, 0x23a
  0x8063b658:  addi     r6, r30, 0x252
  0x8063b65c:  li       r7, 1
  0x8063b660:  li       r8, 0
  0x8063b664:  li       r9, 0
  0x8063b668:  bl       0x805bc0dc
  0x8063b66c:  li       r0, 4
  0x8063b670:  stw      r0, 0xcb0(r31)
  0x8063b674:  addi     r3, r31, 0xa70
  0x8063b678:  addi     r4, r31, 0x6c
  0x8063b67c:  li       r5, 0
  0x8063b680:  bl       0x805bc68c
  0x8063b684:  addi     r3, r31, 0xa70
  0x8063b688:  addi     r4, r31, 0x94
  0x8063b68c:  bl       0x805bc6a4
  0x8063b690:  mr       r3, r31
  0x8063b694:  addi     r5, r31, 0xcc4
  0x8063b698:  li       r4, 5
  0x8063b69c:  li       r6, 0
  0x8063b6a0:  bl       0x805e43f4
  0x8063b6a4:  addi     r3, r31, 0xcc4
  0x8063b6a8:  addi     r4, r30, 0x259
  0x8063b6ac:  addi     r5, r30, 0x260
  0x8063b6b0:  addi     r6, r30, 0x265
  0x8063b6b4:  li       r7, 1
  0x8063b6b8:  li       r8, 0
  0x8063b6bc:  li       r9, 1
  0x8063b6c0:  bl       0x805bc0dc
  0x8063b6c4:  li       r0, 5
  0x8063b6c8:  stw      r0, 0xf04(r31)
  0x8063b6cc:  addi     r3, r31, 0xcc4
  0x8063b6d0:  addi     r4, r31, 0x80
  0x8063b6d4:  li       r5, 0
  0x8063b6d8:  bl       0x805bc68c
  0x8063b6dc:  addi     r3, r31, 0xcc4
  0x8063b6e0:  addi     r4, r31, 0x94
  0x8063b6e4:  bl       0x805bc6a4
  0x8063b6e8:  mr       r3, r31
  0x8063b6ec:  addi     r5, r31, 0xf28
  0x8063b6f0:  li       r4, 6
  0x8063b6f4:  li       r6, 0
  0x8063b6f8:  bl       0x805e43f4
  0x8063b6fc:  addi     r3, r31, 0xf28
  0x8063b700:  bl       0x80848094
  0x8063b704:  addi     r3, r31, 0x5c8
  0x8063b708:  li       r4, 0
  0x8063b70c:  bl       0x805bc6b4
  0x8063b710:  addi     r3, r31, 0xf28
  0x8063b714:  li       r4, 0x849
  0x8063b718:  li       r5, 0
  0x8063b71c:  bl       0x808481c8
  0x8063b720:  addi     r11, r1, 0x90
  0x8063b724:  bl       0x80555bf8
  0x8063b728:  lwz      r0, 0x94(r1)
  0x8063b72c:  mtlr     r0
  0x8063b730:  addi     r1, r1, 0x90
  0x8063b734:  blr      
  0x8063b738:  stwu     r1, -0x10(r1)
  0x8063b73c:  mflr     r0
  0x8063b740:  li       r4, -1
  0x8063b744:  stw      r0, 0x14(r1)
