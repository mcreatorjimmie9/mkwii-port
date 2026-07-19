/**
 * TimeAttackBackPage_onRefocus
 * @addr 0x8063b748
 * @size 360 bytes
 * @frame 16 bytes
 * @calls 9 function(s)
 */
void TimeAttackBackPage_onRefocus(void) {
    /* r1+0xc = r31 */
    /* r31 = r3 */
    /* r0 = r3+0x10 */
    /* r3+0x1134 = r4 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x8063b77c */
    /* li r4, 0 */
    /* addi r3, r3, 0x5c8 */
    /* 0x805bc6b4() */
    /* addi r3, r31, 0xf28 */
    /* li r4, 0x849 */
    /* li r5, 0 */
    /* 0x808481c8() */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8063b748: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8063b74c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8063b750: 80 03 00 10              lwz      r0, 0x10(r3) */
/* 0x8063b754: 90 83 11 34              stw      r4, 0x1134(r3) */
/* 0x8063b758: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8063b75c: 40 82 00 20              bne      0x8063b77c */
/* 0x8063b760: 38 80 00 00              li       r4, 0 */
/* 0x8063b764: 38 63 05 c8              addi     r3, r3, 0x5c8 */
/* 0x8063b768: 4b f8 0f 4d              bl       0x805bc6b4 */
/* 0x8063b76c: 38 7f 0f 28              addi     r3, r31, 0xf28 */
/* 0x8063b770: 38 80 08 49              li       r4, 0x849 */
/* 0x8063b774: 38 a0 00 00              li       r5, 0 */
/* 0x8063b778: 48 20 ca 51              bl       0x808481c8 */
/* 0x8063b77c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8063b780: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8063b784: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b788: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8063b78c: 4e 80 00 20              blr       */
/* 0x8063b790: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063b794: 7c 08 02 a6              mflr     r0 */
/* 0x8063b798: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8063b79c: 38 00 00 ce              li       r0, 0xce */
/* 0x8063b7a0: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8063b7a4: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8063b7a8: 90 03 11 34              stw      r0, 0x1134(r3) */
/* 0x8063b7ac: 7c 83 23 78              mr       r3, r4 */
/* 0x8063b7b0: 4b f8 13 9d              bl       0x805bcb4c */
/* 0x8063b7b4: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b7b8: 38 80 00 00              li       r4, 0 */
/* 0x8063b7bc: 4b fa 8c 55              bl       0x805e4410 */
/* 0x8063b7c0: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8063b7c4: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8063b7c8: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b7cc: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8063b7d0: 4e 80 00 20              blr       */
/* 0x8063b7d4: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063b7d8: 7c 08 02 a6              mflr     r0 */
/* 0x8063b7dc: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8063b7e0: 38 00 00 60              li       r0, 0x60 */
/* 0x8063b7e4: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8063b7e8: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8063b7ec: 90 03 11 34              stw      r0, 0x1134(r3) */
/* 0x8063b7f0: 7c 83 23 78              mr       r3, r4 */
/* 0x8063b7f4: 4b f8 13 59              bl       0x805bcb4c */
/* 0x8063b7f8: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b7fc: 38 80 00 00              li       r4, 0 */
/* 0x8063b800: 4b fa 8c 11              bl       0x805e4410 */
/* 0x8063b804: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8063b808: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8063b80c: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b810: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8063b814: 4e 80 00 20              blr       */
/* 0x8063b818: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063b81c: 7c 08 02 a6              mflr     r0 */
/* 0x8063b820: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8063b824: 38 00 00 68              li       r0, 0x68 */
/* 0x8063b828: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8063b82c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8063b830: 90 03 11 34              stw      r0, 0x1134(r3) */
/* 0x8063b834: 7c 83 23 78              mr       r3, r4 */
/* 0x8063b838: 4b f8 13 15              bl       0x805bcb4c */
/* 0x8063b83c: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b840: 38 80 00 00              li       r4, 0 */
/* 0x8063b844: 4b fa 8b cd              bl       0x805e4410 */
/* 0x8063b848: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8063b84c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8063b850: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b854: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8063b858: 4e 80 00 20              blr       */
/* 0x8063b85c: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x8063b860: 7c 08 02 a6              mflr     r0 */
/* 0x8063b864: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x8063b868: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8063b86c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8063b870: 7c 83 23 78              mr       r3, r4 */
/* 0x8063b874: 4b f8 12 d9              bl       0x805bcb4c */
/* 0x8063b878: 81 9f 00 00              lwz      r12, 0(r31) */
/* 0x8063b87c: 7f e3 fb 78              mr       r3, r31 */
/* 0x8063b880: 38 80 00 41              li       r4, 0x41 */
/* 0x8063b884: 38 a0 00 01              li       r5, 1 */
/* 0x8063b888: 81 8c 00 1c              lwz      r12, 0x1c(r12) */
/* 0x8063b88c: 7d 89 03 a6              mtctr    r12 */
/* 0x8063b890: 4e 80 04 21              bctrl     */
/* 0x8063b894: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8063b898: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x8063b89c: 7c 08 03 a6              mtlr     r0 */
/* 0x8063b8a0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x8063b8a4: 4e 80 00 20              blr       */
/* 0x8063b8a8: 80 04 02 40              lwz      r0, 0x240(r4) */
/* 0x8063b8ac: 2c 00 00 02              cmpwi    r0, 2 */
#endif


/* === DISASSEMBLY === */

; Function: TimeAttackBackPage_onRefocus
; Demangled: TimeAttackBackPage_onRefocus
; Address: 0x8063b748  (.text+0x128eac)
; Size: 360 bytes

  0x8063b748:  stw      r31, 0xc(r1)
  0x8063b74c:  mr       r31, r3
  0x8063b750:  lwz      r0, 0x10(r3)
  0x8063b754:  stw      r4, 0x1134(r3)
  0x8063b758:  cmpwi    r0, 0
  0x8063b75c:  bne      0x8063b77c
  0x8063b760:  li       r4, 0
  0x8063b764:  addi     r3, r3, 0x5c8
  0x8063b768:  bl       0x805bc6b4
  0x8063b76c:  addi     r3, r31, 0xf28
  0x8063b770:  li       r4, 0x849
  0x8063b774:  li       r5, 0
  0x8063b778:  bl       0x808481c8
  0x8063b77c:  lwz      r0, 0x14(r1)
  0x8063b780:  lwz      r31, 0xc(r1)
  0x8063b784:  mtlr     r0
  0x8063b788:  addi     r1, r1, 0x10
  0x8063b78c:  blr      
  0x8063b790:  stwu     r1, -0x10(r1)
  0x8063b794:  mflr     r0
  0x8063b798:  stw      r0, 0x14(r1)
  0x8063b79c:  li       r0, 0xce
  0x8063b7a0:  stw      r31, 0xc(r1)
  0x8063b7a4:  mr       r31, r3
  0x8063b7a8:  stw      r0, 0x1134(r3)
  0x8063b7ac:  mr       r3, r4
  0x8063b7b0:  bl       0x805bcb4c
  0x8063b7b4:  mr       r3, r31
  0x8063b7b8:  li       r4, 0
  0x8063b7bc:  bl       0x805e4410
  0x8063b7c0:  lwz      r0, 0x14(r1)
  0x8063b7c4:  lwz      r31, 0xc(r1)
  0x8063b7c8:  mtlr     r0
  0x8063b7cc:  addi     r1, r1, 0x10
  0x8063b7d0:  blr      
  0x8063b7d4:  stwu     r1, -0x10(r1)
  0x8063b7d8:  mflr     r0
  0x8063b7dc:  stw      r0, 0x14(r1)
  0x8063b7e0:  li       r0, 0x60
  0x8063b7e4:  stw      r31, 0xc(r1)
  0x8063b7e8:  mr       r31, r3
  0x8063b7ec:  stw      r0, 0x1134(r3)
  0x8063b7f0:  mr       r3, r4
  0x8063b7f4:  bl       0x805bcb4c
  0x8063b7f8:  mr       r3, r31
  0x8063b7fc:  li       r4, 0
  0x8063b800:  bl       0x805e4410
  0x8063b804:  lwz      r0, 0x14(r1)
  0x8063b808:  lwz      r31, 0xc(r1)
  0x8063b80c:  mtlr     r0
  0x8063b810:  addi     r1, r1, 0x10
  0x8063b814:  blr      
  0x8063b818:  stwu     r1, -0x10(r1)
  0x8063b81c:  mflr     r0
  0x8063b820:  stw      r0, 0x14(r1)
  0x8063b824:  li       r0, 0x68
  0x8063b828:  stw      r31, 0xc(r1)
  0x8063b82c:  mr       r31, r3
  0x8063b830:  stw      r0, 0x1134(r3)
  0x8063b834:  mr       r3, r4
  0x8063b838:  bl       0x805bcb4c
  0x8063b83c:  mr       r3, r31
  0x8063b840:  li       r4, 0
  0x8063b844:  bl       0x805e4410
  0x8063b848:  lwz      r0, 0x14(r1)
  0x8063b84c:  lwz      r31, 0xc(r1)
  0x8063b850:  mtlr     r0
  0x8063b854:  addi     r1, r1, 0x10
  0x8063b858:  blr      
  0x8063b85c:  stwu     r1, -0x10(r1)
  0x8063b860:  mflr     r0
  0x8063b864:  stw      r0, 0x14(r1)
  0x8063b868:  stw      r31, 0xc(r1)
  0x8063b86c:  mr       r31, r3
  0x8063b870:  mr       r3, r4
  0x8063b874:  bl       0x805bcb4c
  0x8063b878:  lwz      r12, 0(r31)
  0x8063b87c:  mr       r3, r31
  0x8063b880:  li       r4, 0x41
  0x8063b884:  li       r5, 1
  0x8063b888:  lwz      r12, 0x1c(r12)
  0x8063b88c:  mtctr    r12
  0x8063b890:  bctrl    
  0x8063b894:  lwz      r0, 0x14(r1)
  0x8063b898:  lwz      r31, 0xc(r1)
  0x8063b89c:  mtlr     r0
  0x8063b8a0:  addi     r1, r1, 0x10
  0x8063b8a4:  blr      
  0x8063b8a8:  lwz      r0, 0x240(r4)
  0x8063b8ac:  cmpwi    r0, 2
