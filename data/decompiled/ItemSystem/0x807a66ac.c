/**
 * ItemObjBomb_makeArray
 * @addr 0x807a66ac
 * @size 448 bytes
 * @frame 16 bytes
 * @calls 8 function(s)
 */
void ItemObjBomb_makeArray(void) {
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a66ac: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a66b0: 7c 08 03 a6              mtlr     r0 */
/* 0x807a66b4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a66b8: 4e 80 00 20              blr       */
/* 0x807a66bc: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a66c0: 7c 08 02 a6              mflr     r0 */
/* 0x807a66c4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a66c8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a66cc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a66d0: 4b ff 77 81              bl       0x8079de50 */
/* 0x807a66d4: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a66d8: 38 80 00 00              li       r4, 0 */
/* 0x807a66dc: 48 00 7f 49              bl       0x807ae624 */
/* 0x807a66e0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a66e4: 41 82 00 3c              beq      0x807a6720 */
/* 0x807a66e8: 80 1f 00 74              lwz      r0, 0x74(r31) */
/* 0x807a66ec: 3c 60 00 00              lis      r3, 0 */
/* 0x807a66f0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a66f4: 38 bf 00 44              addi     r5, r31, 0x44 */
/* 0x807a66f8: 54 00 05 ee              rlwinm   r0, r0, 0, 0x17, 0x17 */
/* 0x807a66fc: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a6700: 7c 00 00 34              cntlzw   r0, r0 */
/* 0x807a6704: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a6708: c0 3f 00 68              lfs      f1, 0x68(r31) */
/* 0x807a670c: 38 df 02 d4              addi     r6, r31, 0x2d4 */
/* 0x807a6710: 80 ff 01 60              lwz      r7, 0x160(r31) */
/* 0x807a6714: 54 08 d9 7e              srwi     r8, r0, 5 */
/* 0x807a6718: 4b ee 8f a1              bl       0x8068f6b8 */
/* 0x807a671c: 48 00 00 18              b        0x807a6734 */
/* 0x807a6720: 3c 60 00 00              lis      r3, 0 */
/* 0x807a6724: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a6728: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a672c: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a6730: 4b ee 90 cd              bl       0x8068f7fc */
/* 0x807a6734: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a6738: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a673c: 7c 08 03 a6              mtlr     r0 */
/* 0x807a6740: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a6744: 4e 80 00 20              blr       */
/* 0x807a6748: 3c 80 00 00              lis      r4, 0 */
/* 0x807a674c: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x807a6750: 48 00 6b ac              b        0x807ad2fc */
/* 0x807a6754: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a6758: 38 80 00 04              li       r4, 4 */
/* 0x807a675c: 90 83 02 b8              stw      r4, 0x2b8(r3) */
/* 0x807a6760: 7c 65 1b 78              mr       r5, r3 */
/* 0x807a6764: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a6768: 4d 82 00 20              beqlr     */
/* 0x807a676c: 80 85 02 80              lwz      r4, 0x280(r5) */
/* 0x807a6770: 38 60 00 01              li       r3, 1 */
/* 0x807a6774: a8 05 00 0c              lha      r0, 0xc(r5) */
/* 0x807a6778: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a677c: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a6780: 4b ff 36 30              b        0x80799db0 */
/* 0x807a6784: 4e 80 00 20              blr       */
/* 0x807a6788: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a678c: 7c 08 02 a6              mflr     r0 */
/* 0x807a6790: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a6794: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a6798: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a679c: 80 03 02 bc              lwz      r0, 0x2bc(r3) */
/* 0x807a67a0: 28 00 00 10              cmplwi   r0, 0x10 */
/* 0x807a67a4: 40 81 00 44              ble      0x807a67e8 */
/* 0x807a67a8: 38 a0 00 01              li       r5, 1 */
/* 0x807a67ac: 48 00 52 09              bl       0x807ab9b4 */
/* 0x807a67b0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a67b4: 41 82 00 78              beq      0x807a682c */
/* 0x807a67b8: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a67bc: 38 60 00 04              li       r3, 4 */
/* 0x807a67c0: 90 7f 02 b8              stw      r3, 0x2b8(r31) */
/* 0x807a67c4: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a67c8: 41 82 00 64              beq      0x807a682c */
/* 0x807a67cc: 80 9f 02 80              lwz      r4, 0x280(r31) */
/* 0x807a67d0: 38 60 00 01              li       r3, 1 */
/* 0x807a67d4: a8 1f 00 0c              lha      r0, 0xc(r31) */
/* 0x807a67d8: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a67dc: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a67e0: 4b ff 35 d1              bl       0x80799db0 */
/* 0x807a67e4: 48 00 00 48              b        0x807a682c */
/* 0x807a67e8: 28 00 00 04              cmplwi   r0, 4 */
/* 0x807a67ec: 40 81 00 40              ble      0x807a682c */
/* 0x807a67f0: 38 a0 00 00              li       r5, 0 */
/* 0x807a67f4: 48 00 51 c1              bl       0x807ab9b4 */
/* 0x807a67f8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a67fc: 41 82 00 30              beq      0x807a682c */
/* 0x807a6800: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a6804: 38 60 00 04              li       r3, 4 */
/* 0x807a6808: 90 7f 02 b8              stw      r3, 0x2b8(r31) */
/* 0x807a680c: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807a6810: 41 82 00 1c              beq      0x807a682c */
/* 0x807a6814: 80 9f 02 80              lwz      r4, 0x280(r31) */
/* 0x807a6818: 38 60 00 01              li       r3, 1 */
/* 0x807a681c: a8 1f 00 0c              lha      r0, 0xc(r31) */
/* 0x807a6820: 88 84 00 18              lbz      r4, 0x18(r4) */
/* 0x807a6824: 54 05 04 3e              clrlwi   r5, r0, 0x10 */
/* 0x807a6828: 4b ff 35 89              bl       0x80799db0 */
/* 0x807a682c: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a6830: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a6834: 7c 08 03 a6              mtlr     r0 */
/* 0x807a6838: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a683c: 4e 80 00 20              blr       */
/* 0x807a6840: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a6844: 7c 08 02 a6              mflr     r0 */
/* 0x807a6848: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a684c: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a6850: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a6854: 80 03 00 b0              lwz      r0, 0xb0(r3) */
/* 0x807a6858: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a685c: 41 82 00 1c              beq      0x807a6878 */
/* 0x807a6860: a0 03 02 b4              lhz      r0, 0x2b4(r3) */
/* 0x807a6864: 28 00 00 06              cmplwi   r0, 6 */
/* 0x807a6868: 41 82 00 10              beq      0x807a6878 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjBomb_makeArray
; Demangled: ItemObjBomb_makeArray
; Address: 0x807a66ac  (.text+0x293e10)
; Size: 448 bytes

  0x807a66ac:  lwz      r31, 0xc(r1)
  0x807a66b0:  mtlr     r0
  0x807a66b4:  addi     r1, r1, 0x10
  0x807a66b8:  blr      
  0x807a66bc:  stwu     r1, -0x10(r1)
  0x807a66c0:  mflr     r0
  0x807a66c4:  stw      r0, 0x14(r1)
  0x807a66c8:  stw      r31, 0xc(r1)
  0x807a66cc:  mr       r31, r3
  0x807a66d0:  bl       0x8079de50
  0x807a66d4:  mr       r3, r31
  0x807a66d8:  li       r4, 0
  0x807a66dc:  bl       0x807ae624
  0x807a66e0:  cmpwi    r3, 0
  0x807a66e4:  beq      0x807a6720
  0x807a66e8:  lwz      r0, 0x74(r31)
  0x807a66ec:  lis      r3, 0
  0x807a66f0:  lwz      r3, 0(r3)
  0x807a66f4:  addi     r5, r31, 0x44
  0x807a66f8:  rlwinm   r0, r0, 0, 0x17, 0x17
  0x807a66fc:  lha      r4, 0xa(r31)
  0x807a6700:  cntlzw   r0, r0
  0x807a6704:  lwz      r3, 0x74(r3)
  0x807a6708:  lfs      f1, 0x68(r31)
  0x807a670c:  addi     r6, r31, 0x2d4
  0x807a6710:  lwz      r7, 0x160(r31)
  0x807a6714:  srwi     r8, r0, 5
  0x807a6718:  bl       0x8068f6b8
  0x807a671c:  b        0x807a6734
  0x807a6720:  lis      r3, 0
  0x807a6724:  lha      r4, 0xa(r31)
  0x807a6728:  lwz      r3, 0(r3)
  0x807a672c:  lwz      r3, 0x74(r3)
  0x807a6730:  bl       0x8068f7fc
  0x807a6734:  lwz      r0, 0x14(r1)
  0x807a6738:  lwz      r31, 0xc(r1)
  0x807a673c:  mtlr     r0
  0x807a6740:  addi     r1, r1, 0x10
  0x807a6744:  blr      
  0x807a6748:  lis      r4, 0
  0x807a674c:  lfs      f1, 0(r4)
  0x807a6750:  b        0x807ad2fc
  0x807a6754:  lwz      r0, 0x7c(r3)
  0x807a6758:  li       r4, 4
  0x807a675c:  stw      r4, 0x2b8(r3)
  0x807a6760:  mr       r5, r3
  0x807a6764:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a6768:  beqlr    
  0x807a676c:  lwz      r4, 0x280(r5)
  0x807a6770:  li       r3, 1
  0x807a6774:  lha      r0, 0xc(r5)
  0x807a6778:  lbz      r4, 0x18(r4)
  0x807a677c:  clrlwi   r5, r0, 0x10
  0x807a6780:  b        0x80799db0
  0x807a6784:  blr      
  0x807a6788:  stwu     r1, -0x10(r1)
  0x807a678c:  mflr     r0
  0x807a6790:  stw      r0, 0x14(r1)
  0x807a6794:  stw      r31, 0xc(r1)
  0x807a6798:  mr       r31, r3
  0x807a679c:  lwz      r0, 0x2bc(r3)
  0x807a67a0:  cmplwi   r0, 0x10
  0x807a67a4:  ble      0x807a67e8
  0x807a67a8:  li       r5, 1
  0x807a67ac:  bl       0x807ab9b4
  0x807a67b0:  cmpwi    r3, 0
  0x807a67b4:  beq      0x807a682c
  0x807a67b8:  lwz      r0, 0x7c(r31)
  0x807a67bc:  li       r3, 4
  0x807a67c0:  stw      r3, 0x2b8(r31)
  0x807a67c4:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a67c8:  beq      0x807a682c
  0x807a67cc:  lwz      r4, 0x280(r31)
  0x807a67d0:  li       r3, 1
  0x807a67d4:  lha      r0, 0xc(r31)
  0x807a67d8:  lbz      r4, 0x18(r4)
  0x807a67dc:  clrlwi   r5, r0, 0x10
  0x807a67e0:  bl       0x80799db0
  0x807a67e4:  b        0x807a682c
  0x807a67e8:  cmplwi   r0, 4
  0x807a67ec:  ble      0x807a682c
  0x807a67f0:  li       r5, 0
  0x807a67f4:  bl       0x807ab9b4
  0x807a67f8:  cmpwi    r3, 0
  0x807a67fc:  beq      0x807a682c
  0x807a6800:  lwz      r0, 0x7c(r31)
  0x807a6804:  li       r3, 4
  0x807a6808:  stw      r3, 0x2b8(r31)
  0x807a680c:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807a6810:  beq      0x807a682c
  0x807a6814:  lwz      r4, 0x280(r31)
  0x807a6818:  li       r3, 1
  0x807a681c:  lha      r0, 0xc(r31)
  0x807a6820:  lbz      r4, 0x18(r4)
  0x807a6824:  clrlwi   r5, r0, 0x10
  0x807a6828:  bl       0x80799db0
  0x807a682c:  lwz      r0, 0x14(r1)
  0x807a6830:  lwz      r31, 0xc(r1)
  0x807a6834:  mtlr     r0
  0x807a6838:  addi     r1, r1, 0x10
  0x807a683c:  blr      
  0x807a6840:  stwu     r1, -0x10(r1)
  0x807a6844:  mflr     r0
  0x807a6848:  stw      r0, 0x14(r1)
  0x807a684c:  stw      r31, 0xc(r1)
  0x807a6850:  mr       r31, r3
  0x807a6854:  lwz      r0, 0xb0(r3)
  0x807a6858:  cmpwi    r0, 0
  0x807a685c:  beq      0x807a6878
  0x807a6860:  lhz      r0, 0x2b4(r3)
  0x807a6864:  cmplwi   r0, 6
  0x807a6868:  beq      0x807a6878
