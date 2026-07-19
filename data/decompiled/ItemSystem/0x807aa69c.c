/**
 * ItemHolderPlayer_useBlooper
 * @addr 0x807aa69c
 * @size 452 bytes
 * @frame 32 bytes
 * @calls 5 function(s)
 */
void ItemHolderPlayer_useBlooper(void) {
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807aa69c: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807aa6a0: 4e 80 00 20              blr       */
/* 0x807aa6a4: 38 63 fd 44              addi     r3, r3, -0x2bc */
/* 0x807aa6a8: 4b ff fe d4              b        0x807aa57c */
/* 0x807aa6ac: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x807aa6b0: 7c 08 02 a6              mflr     r0 */
/* 0x807aa6b4: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807aa6b8: bf 41 00 08              stmw     r26, 8(r1) */
/* 0x807aa6bc: 7c 7a 1b 78              mr       r26, r3 */
/* 0x807aa6c0: 54 63 10 3a              slwi     r3, r3, 2 */
/* 0x807aa6c4: 4b da b5 35              bl       0x80555bf8 */
/* 0x807aa6c8: 7c 7c 1b 78              mr       r28, r3 */
/* 0x807aa6cc: 3f e0 00 00              lis      r31, 0 */
/* 0x807aa6d0: 7f 9d e3 78              mr       r29, r28 */
/* 0x807aa6d4: 3b 60 00 00              li       r27, 0 */
/* 0x807aa6d8: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x807aa6dc: 48 00 00 2c              b        0x807aa708 */
/* 0x807aa6e0: 38 60 01 ec              li       r3, 0x1ec */
/* 0x807aa6e4: 4b da b5 15              bl       0x80555bf8 */
/* 0x807aa6e8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807aa6ec: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807aa6f0: 41 82 00 0c              beq      0x807aa6fc */
/* 0x807aa6f4: 4b ff 9a 91              bl       0x807a4184 */
/* 0x807aa6f8: 93 fe 00 00              stw      r31, 0(r30) */
/* 0x807aa6fc: 93 dd 00 00              stw      r30, 0(r29) */
/* 0x807aa700: 3b bd 00 04              addi     r29, r29, 4 */
/* 0x807aa704: 3b 7b 00 01              addi     r27, r27, 1 */
/* 0x807aa708: 7c 1b d0 00              cmpw     r27, r26 */
/* 0x807aa70c: 41 80 ff d4              blt      0x807aa6e0 */
/* 0x807aa710: 7f 83 e3 78              mr       r3, r28 */
/* 0x807aa714: bb 41 00 08              lmw      r26, 8(r1) */
/* 0x807aa718: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x807aa71c: 7c 08 03 a6              mtlr     r0 */
/* 0x807aa720: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807aa724: 4e 80 00 20              blr       */
/* 0x807aa728: 3c 60 00 00              lis      r3, 0 */
/* 0x807aa72c: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807aa730: 4e 80 00 20              blr       */
/* 0x807aa734: 3c 60 00 00              lis      r3, 0 */
/* 0x807aa738: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807aa73c: 4e 80 00 20              blr       */
/* 0x807aa740: 3c 60 00 00              lis      r3, 0 */
/* 0x807aa744: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807aa748: 4e 80 00 20              blr       */
/* 0x807aa74c: 3c 60 00 00              lis      r3, 0 */
/* 0x807aa750: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807aa754: 4e 80 00 20              blr       */
/* 0x807aa758: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807aa75c: 7c 08 02 a6              mflr     r0 */
/* 0x807aa760: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807aa764: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807aa768: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807aa76c: 80 a4 00 0c              lwz      r5, 0xc(r4) */
/* 0x807aa770: a0 05 00 0c              lhz      r0, 0xc(r5) */
/* 0x807aa774: 54 00 06 b5              rlwinm.  r0, r0, 0, 0x1a, 0x1a */
/* 0x807aa778: 41 82 00 50              beq      0x807aa7c8 */
/* 0x807aa77c: 3c c0 00 00              lis      r6, 0 */
/* 0x807aa780: 3c a0 00 00              lis      r5, 0 */
/* 0x807aa784: 89 06 00 00              lbz      r8, 0(r6) */
/* 0x807aa788: 38 c0 00 00              li       r6, 0 */
/* 0x807aa78c: c0 25 00 00              lfs      f1, 0(r5) */
/* 0x807aa790: 38 e0 00 00              li       r7, 0 */
/* 0x807aa794: 7c 08 00 d0              neg      r0, r8 */
/* 0x807aa798: 7c 00 43 78              or       r0, r0, r8 */
/* 0x807aa79c: 7c 05 fe 70              srawi    r5, r0, 0x1f */
/* 0x807aa7a0: 38 a5 00 04              addi     r5, r5, 4 */
/* 0x807aa7a4: 48 00 27 dd              bl       0x807acf80 */
/* 0x807aa7a8: c0 5f 00 50              lfs      f2, 0x50(r31) */
/* 0x807aa7ac: 38 60 00 00              li       r3, 0 */
/* 0x807aa7b0: c0 3f 00 54              lfs      f1, 0x54(r31) */
/* 0x807aa7b4: c0 1f 00 58              lfs      f0, 0x58(r31) */
/* 0x807aa7b8: d0 5f 01 e0              stfs     f2, 0x1e0(r31) */
/* 0x807aa7bc: d0 3f 01 e4              stfs     f1, 0x1e4(r31) */
/* 0x807aa7c0: d0 1f 01 e8              stfs     f0, 0x1e8(r31) */
/* 0x807aa7c4: 48 00 00 4c              b        0x807aa810 */
/* 0x807aa7c8: 3c c0 00 00              lis      r6, 0 */
/* 0x807aa7cc: 38 a0 00 09              li       r5, 9 */
/* 0x807aa7d0: 88 06 00 00              lbz      r0, 0(r6) */
/* 0x807aa7d4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807aa7d8: 41 82 00 08              beq      0x807aa7e0 */
/* 0x807aa7dc: 38 a0 00 07              li       r5, 7 */
/* 0x807aa7e0: 3c c0 00 00              lis      r6, 0 */
/* 0x807aa7e4: 38 e0 00 00              li       r7, 0 */
/* 0x807aa7e8: c0 26 00 00              lfs      f1, 0(r6) */
/* 0x807aa7ec: 38 c0 00 01              li       r6, 1 */
/* 0x807aa7f0: 48 00 27 91              bl       0x807acf80 */
/* 0x807aa7f4: c0 5f 00 50              lfs      f2, 0x50(r31) */
/* 0x807aa7f8: 38 60 00 01              li       r3, 1 */
/* 0x807aa7fc: c0 3f 00 54              lfs      f1, 0x54(r31) */
/* 0x807aa800: c0 1f 00 58              lfs      f0, 0x58(r31) */
/* 0x807aa804: d0 5f 01 e0              stfs     f2, 0x1e0(r31) */
/* 0x807aa808: d0 3f 01 e4              stfs     f1, 0x1e4(r31) */
/* 0x807aa80c: d0 1f 01 e8              stfs     f0, 0x1e8(r31) */
/* 0x807aa810: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807aa814: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807aa818: 7c 08 03 a6              mtlr     r0 */
/* 0x807aa81c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807aa820: 4e 80 00 20              blr       */
/* 0x807aa824: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x807aa828: 7c 08 02 a6              mflr     r0 */
/* 0x807aa82c: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807aa830: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x807aa834: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807aa838: 80 c3 00 98              lwz      r6, 0x98(r3) */
/* 0x807aa83c: 80 03 01 60              lwz      r0, 0x160(r3) */
/* 0x807aa840: 80 a6 00 00              lwz      r5, 0(r6) */
/* 0x807aa844: 80 86 00 04              lwz      r4, 4(r6) */
/* 0x807aa848: 2c 00 03 84              cmpwi    r0, 0x384 */
/* 0x807aa84c: 80 06 00 08              lwz      r0, 8(r6) */
/* 0x807aa850: 90 a1 00 08              stw      r5, 8(r1) */
/* 0x807aa854: 90 81 00 0c              stw      r4, 0xc(r1) */
/* 0x807aa858: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807aa85c: 40 81 00 0c              ble      0x807aa868 */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderPlayer_useBlooper
; Demangled: ItemHolderPlayer_useBlooper
; Address: 0x807aa69c  (.text+0x297e00)
; Size: 452 bytes

  0x807aa69c:  addi     r1, r1, 0x20
  0x807aa6a0:  blr      
  0x807aa6a4:  addi     r3, r3, -0x2bc
  0x807aa6a8:  b        0x807aa57c
  0x807aa6ac:  stwu     r1, -0x20(r1)
  0x807aa6b0:  mflr     r0
  0x807aa6b4:  stw      r0, 0x24(r1)
  0x807aa6b8:  stmw     r26, 8(r1)
  0x807aa6bc:  mr       r26, r3
  0x807aa6c0:  slwi     r3, r3, 2
  0x807aa6c4:  bl       0x80555bf8
  0x807aa6c8:  mr       r28, r3
  0x807aa6cc:  lis      r31, 0
  0x807aa6d0:  mr       r29, r28
  0x807aa6d4:  li       r27, 0
  0x807aa6d8:  addi     r31, r31, 0
  0x807aa6dc:  b        0x807aa708
  0x807aa6e0:  li       r3, 0x1ec
  0x807aa6e4:  bl       0x80555bf8
  0x807aa6e8:  cmpwi    r3, 0
  0x807aa6ec:  mr       r30, r3
  0x807aa6f0:  beq      0x807aa6fc
  0x807aa6f4:  bl       0x807a4184
  0x807aa6f8:  stw      r31, 0(r30)
  0x807aa6fc:  stw      r30, 0(r29)
  0x807aa700:  addi     r29, r29, 4
  0x807aa704:  addi     r27, r27, 1
  0x807aa708:  cmpw     r27, r26
  0x807aa70c:  blt      0x807aa6e0
  0x807aa710:  mr       r3, r28
  0x807aa714:  lmw      r26, 8(r1)
  0x807aa718:  lwz      r0, 0x24(r1)
  0x807aa71c:  mtlr     r0
  0x807aa720:  addi     r1, r1, 0x20
  0x807aa724:  blr      
  0x807aa728:  lis      r3, 0
  0x807aa72c:  lfs      f1, 0(r3)
  0x807aa730:  blr      
  0x807aa734:  lis      r3, 0
  0x807aa738:  lfs      f1, 0(r3)
  0x807aa73c:  blr      
  0x807aa740:  lis      r3, 0
  0x807aa744:  lfs      f1, 0(r3)
  0x807aa748:  blr      
  0x807aa74c:  lis      r3, 0
  0x807aa750:  lfs      f1, 0(r3)
  0x807aa754:  blr      
  0x807aa758:  stwu     r1, -0x10(r1)
  0x807aa75c:  mflr     r0
  0x807aa760:  stw      r0, 0x14(r1)
  0x807aa764:  stw      r31, 0xc(r1)
  0x807aa768:  mr       r31, r3
  0x807aa76c:  lwz      r5, 0xc(r4)
  0x807aa770:  lhz      r0, 0xc(r5)
  0x807aa774:  rlwinm.  r0, r0, 0, 0x1a, 0x1a
  0x807aa778:  beq      0x807aa7c8
  0x807aa77c:  lis      r6, 0
  0x807aa780:  lis      r5, 0
  0x807aa784:  lbz      r8, 0(r6)
  0x807aa788:  li       r6, 0
  0x807aa78c:  lfs      f1, 0(r5)
  0x807aa790:  li       r7, 0
  0x807aa794:  neg      r0, r8
  0x807aa798:  or       r0, r0, r8
  0x807aa79c:  srawi    r5, r0, 0x1f
  0x807aa7a0:  addi     r5, r5, 4
  0x807aa7a4:  bl       0x807acf80
  0x807aa7a8:  lfs      f2, 0x50(r31)
  0x807aa7ac:  li       r3, 0
  0x807aa7b0:  lfs      f1, 0x54(r31)
  0x807aa7b4:  lfs      f0, 0x58(r31)
  0x807aa7b8:  stfs     f2, 0x1e0(r31)
  0x807aa7bc:  stfs     f1, 0x1e4(r31)
  0x807aa7c0:  stfs     f0, 0x1e8(r31)
  0x807aa7c4:  b        0x807aa810
  0x807aa7c8:  lis      r6, 0
  0x807aa7cc:  li       r5, 9
  0x807aa7d0:  lbz      r0, 0(r6)
  0x807aa7d4:  cmpwi    r0, 0
  0x807aa7d8:  beq      0x807aa7e0
  0x807aa7dc:  li       r5, 7
  0x807aa7e0:  lis      r6, 0
  0x807aa7e4:  li       r7, 0
  0x807aa7e8:  lfs      f1, 0(r6)
  0x807aa7ec:  li       r6, 1
  0x807aa7f0:  bl       0x807acf80
  0x807aa7f4:  lfs      f2, 0x50(r31)
  0x807aa7f8:  li       r3, 1
  0x807aa7fc:  lfs      f1, 0x54(r31)
  0x807aa800:  lfs      f0, 0x58(r31)
  0x807aa804:  stfs     f2, 0x1e0(r31)
  0x807aa808:  stfs     f1, 0x1e4(r31)
  0x807aa80c:  stfs     f0, 0x1e8(r31)
  0x807aa810:  lwz      r0, 0x14(r1)
  0x807aa814:  lwz      r31, 0xc(r1)
  0x807aa818:  mtlr     r0
  0x807aa81c:  addi     r1, r1, 0x10
  0x807aa820:  blr      
  0x807aa824:  stwu     r1, -0x20(r1)
  0x807aa828:  mflr     r0
  0x807aa82c:  stw      r0, 0x24(r1)
  0x807aa830:  stw      r31, 0x1c(r1)
  0x807aa834:  mr       r31, r3
  0x807aa838:  lwz      r6, 0x98(r3)
  0x807aa83c:  lwz      r0, 0x160(r3)
  0x807aa840:  lwz      r5, 0(r6)
  0x807aa844:  lwz      r4, 4(r6)
  0x807aa848:  cmpwi    r0, 0x384
  0x807aa84c:  lwz      r0, 8(r6)
  0x807aa850:  stw      r5, 8(r1)
  0x807aa854:  stw      r4, 0xc(r1)
  0x807aa858:  stw      r0, 0x10(r1)
  0x807aa85c:  ble      0x807aa868
