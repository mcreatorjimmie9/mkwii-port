/**
 * ItemHolder_spawnTc
 * @addr 0x8079c780
 * @size 288 bytes
 * @frame 48 bytes
 * @calls 2 function(s)
 */
void ItemHolder_spawnTc(void) {
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c79c */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c79c */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c7ac */
    /* r3 = r3+0x0 */
    /* goto 0x8079c7b0 */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* r0 = r29+0xa8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c804 */
    /* add r3, r0, r31 */
    /* li r0, 1 */
    /* r3 = r3+0x14 */
    /* r4 = r3+0x4 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x8079c7e8 */
    /* cmpwi r4, 1 */
    /* if (cr0 ==) goto 0x8079c7e8 */
    /* li r0, 0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x8079c7f8 */
    /* r3 = r3+0x0 */
    /* goto 0x8079c7fc */
    /* li r3, 0 */
    /* li r4, 2 */
    /* 0x80555bf8() */
    /* addi r30, r30, 1 */
    /* addi r31, r31, 4 */
    /* cmpwi r30, 2 */
    /* if (cr0 <) goto 0x8079c76c */
    /* f2 = *(f32*)(r29+0x44) */
    /* f1 = *(f32*)(r29+0x48) */
    /* f0 = *(f32*)(r29+0x4c) */
    /* *(f32*)(r29+0x8c) = f2 */
    /* *(f32*)(r29+0x90) = f1 */
    /* *(f32*)(r29+0x94) = f0 */
    /* r31 = stack[0x1c] */
    /* r30 = stack[0x18] */
    /* r29 = stack[0x14] */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8079c780: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c784: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c788: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c78c: 41 82 00 10              beq      0x8079c79c */
/* 0x8079c790: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c794: 41 82 00 08              beq      0x8079c79c */
/* 0x8079c798: 38 00 00 00              li       r0, 0 */
/* 0x8079c79c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7a0: 41 82 00 0c              beq      0x8079c7ac */
/* 0x8079c7a4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c7a8: 48 00 00 08              b        0x8079c7b0 */
/* 0x8079c7ac: 38 60 00 00              li       r3, 0 */
/* 0x8079c7b0: 38 80 00 02              li       r4, 2 */
/* 0x8079c7b4: 4b db 94 45              bl       0x80555bf8 */
/* 0x8079c7b8: 80 1d 00 a8              lwz      r0, 0xa8(r29) */
/* 0x8079c7bc: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7c0: 41 82 00 44              beq      0x8079c804 */
/* 0x8079c7c4: 7c 60 fa 14              add      r3, r0, r31 */
/* 0x8079c7c8: 38 00 00 01              li       r0, 1 */
/* 0x8079c7cc: 80 63 00 14              lwz      r3, 0x14(r3) */
/* 0x8079c7d0: 80 83 00 04              lwz      r4, 4(r3) */
/* 0x8079c7d4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x8079c7d8: 41 82 00 10              beq      0x8079c7e8 */
/* 0x8079c7dc: 2c 04 00 01              cmpwi    r4, 1 */
/* 0x8079c7e0: 41 82 00 08              beq      0x8079c7e8 */
/* 0x8079c7e4: 38 00 00 00              li       r0, 0 */
/* 0x8079c7e8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x8079c7ec: 41 82 00 0c              beq      0x8079c7f8 */
/* 0x8079c7f0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8079c7f4: 48 00 00 08              b        0x8079c7fc */
/* 0x8079c7f8: 38 60 00 00              li       r3, 0 */
/* 0x8079c7fc: 38 80 00 02              li       r4, 2 */
/* 0x8079c800: 4b db 93 f9              bl       0x80555bf8 */
/* 0x8079c804: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8079c808: 3b ff 00 04              addi     r31, r31, 4 */
/* 0x8079c80c: 2c 1e 00 02              cmpwi    r30, 2 */
/* 0x8079c810: 41 80 ff 5c              blt      0x8079c76c */
/* 0x8079c814: c0 5d 00 44              lfs      f2, 0x44(r29) */
/* 0x8079c818: c0 3d 00 48              lfs      f1, 0x48(r29) */
/* 0x8079c81c: c0 1d 00 4c              lfs      f0, 0x4c(r29) */
/* 0x8079c820: d0 5d 00 8c              stfs     f2, 0x8c(r29) */
/* 0x8079c824: d0 3d 00 90              stfs     f1, 0x90(r29) */
/* 0x8079c828: d0 1d 00 94              stfs     f0, 0x94(r29) */
/* 0x8079c82c: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x8079c830: 83 c1 00 18              lwz      r30, 0x18(r1) */
/* 0x8079c834: 83 a1 00 14              lwz      r29, 0x14(r1) */
/* 0x8079c838: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x8079c83c: 7c 08 03 a6              mtlr     r0 */
/* 0x8079c840: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x8079c844: 4e 80 00 20              blr       */
/* 0x8079c848: 94 21 ff d0              stwu     r1, -0x30(r1) */
/* 0x8079c84c: 7c 08 02 a6              mflr     r0 */
/* 0x8079c850: 38 a0 00 00              li       r5, 0 */
/* 0x8079c854: 38 c0 00 00              li       r6, 0 */
/* 0x8079c858: 90 01 00 34              stw      r0, 0x34(r1) */
/* 0x8079c85c: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x8079c860: 3f e0 00 00              lis      r31, 0 */
/* 0x8079c864: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x8079c868: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x8079c86c: 7c 9e 23 78              mr       r30, r4 */
/* 0x8079c870: 38 80 00 00              li       r4, 0 */
/* 0x8079c874: 93 a1 00 24              stw      r29, 0x24(r1) */
/* 0x8079c878: 7c 7d 1b 78              mr       r29, r3 */
/* 0x8079c87c: 80 e3 00 7c              lwz      r7, 0x7c(r3) */
/* 0x8079c880: 90 a3 00 74              stw      r5, 0x74(r3) */
/* 0x8079c884: 54 e0 06 b5              rlwinm.  r0, r7, 0, 0x1a, 0x1a */
/* 0x8079c888: 41 82 00 28              beq      0x8079c8b0 */
/* 0x8079c88c: 54 e0 07 ff              clrlwi.  r0, r7, 0x1f */
/* 0x8079c890: 41 82 00 10              beq      0x8079c8a0 */
/* 0x8079c894: 80 03 00 78              lwz      r0, 0x78(r3) */
/* 0x8079c898: 54 00 00 89              rlwinm.  r0, r0, 0, 2, 4 */
/* 0x8079c89c: 41 82 00 08              beq      0x8079c8a4 */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolder_spawnTc
; Demangled: ItemHolder_spawnTc
; Address: 0x8079c780  (.text+0x289ee4)
; Size: 288 bytes

  0x8079c780:  lwz      r3, 0x14(r3)
  0x8079c784:  lwz      r4, 4(r3)
  0x8079c788:  cmpwi    r4, 0
  0x8079c78c:  beq      0x8079c79c
  0x8079c790:  cmpwi    r4, 1
  0x8079c794:  beq      0x8079c79c
  0x8079c798:  li       r0, 0
  0x8079c79c:  cmpwi    r0, 0
  0x8079c7a0:  beq      0x8079c7ac
  0x8079c7a4:  lwz      r3, 0(r3)
  0x8079c7a8:  b        0x8079c7b0
  0x8079c7ac:  li       r3, 0
  0x8079c7b0:  li       r4, 2
  0x8079c7b4:  bl       0x80555bf8
  0x8079c7b8:  lwz      r0, 0xa8(r29)
  0x8079c7bc:  cmpwi    r0, 0
  0x8079c7c0:  beq      0x8079c804
  0x8079c7c4:  add      r3, r0, r31
  0x8079c7c8:  li       r0, 1
  0x8079c7cc:  lwz      r3, 0x14(r3)
  0x8079c7d0:  lwz      r4, 4(r3)
  0x8079c7d4:  cmpwi    r4, 0
  0x8079c7d8:  beq      0x8079c7e8
  0x8079c7dc:  cmpwi    r4, 1
  0x8079c7e0:  beq      0x8079c7e8
  0x8079c7e4:  li       r0, 0
  0x8079c7e8:  cmpwi    r0, 0
  0x8079c7ec:  beq      0x8079c7f8
  0x8079c7f0:  lwz      r3, 0(r3)
  0x8079c7f4:  b        0x8079c7fc
  0x8079c7f8:  li       r3, 0
  0x8079c7fc:  li       r4, 2
  0x8079c800:  bl       0x80555bf8
  0x8079c804:  addi     r30, r30, 1
  0x8079c808:  addi     r31, r31, 4
  0x8079c80c:  cmpwi    r30, 2
  0x8079c810:  blt      0x8079c76c
  0x8079c814:  lfs      f2, 0x44(r29)
  0x8079c818:  lfs      f1, 0x48(r29)
  0x8079c81c:  lfs      f0, 0x4c(r29)
  0x8079c820:  stfs     f2, 0x8c(r29)
  0x8079c824:  stfs     f1, 0x90(r29)
  0x8079c828:  stfs     f0, 0x94(r29)
  0x8079c82c:  lwz      r31, 0x1c(r1)
  0x8079c830:  lwz      r30, 0x18(r1)
  0x8079c834:  lwz      r29, 0x14(r1)
  0x8079c838:  lwz      r0, 0x24(r1)
  0x8079c83c:  mtlr     r0
  0x8079c840:  addi     r1, r1, 0x20
  0x8079c844:  blr      
  0x8079c848:  stwu     r1, -0x30(r1)
  0x8079c84c:  mflr     r0
  0x8079c850:  li       r5, 0
  0x8079c854:  li       r6, 0
  0x8079c858:  stw      r0, 0x34(r1)
  0x8079c85c:  stw      r31, 0x2c(r1)
  0x8079c860:  lis      r31, 0
  0x8079c864:  addi     r31, r31, 0
  0x8079c868:  stw      r30, 0x28(r1)
  0x8079c86c:  mr       r30, r4
  0x8079c870:  li       r4, 0
  0x8079c874:  stw      r29, 0x24(r1)
  0x8079c878:  mr       r29, r3
  0x8079c87c:  lwz      r7, 0x7c(r3)
  0x8079c880:  stw      r5, 0x74(r3)
  0x8079c884:  rlwinm.  r0, r7, 0, 0x1a, 0x1a
  0x8079c888:  beq      0x8079c8b0
  0x8079c88c:  clrlwi.  r0, r7, 0x1f
  0x8079c890:  beq      0x8079c8a0
  0x8079c894:  lwz      r0, 0x78(r3)
  0x8079c898:  rlwinm.  r0, r0, 0, 2, 4
  0x8079c89c:  beq      0x8079c8a4
