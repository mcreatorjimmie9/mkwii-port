/**
 * copyPrevPositions__System10RaceConfig8ScenarioFv
 * @addr 0x805316c8
 * @size 776 bytes
 * @frame 32 bytes
 * @calls 6 function(s)
 */
void System10RaceConfig8Scenario(void* self) {
    /* if (cr0 ==) goto 0x80531718 */
    /* cmpwi r4, 7 */
    /* li r0, 0 */
    /* if (cr0 <) goto 0x805316e4 */
    /* cmpwi r4, 0xa */
    /* if (cr0 >) goto 0x805316e4 */
    /* li r0, 1 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80531718 */
    /* 0x80555bf8() */
    /* srwi r0, r3, 0x14 */
    /* rlwinm r5, r3, 0x19, 7, 7 */
    /* rlwinm r4, r3, 0xc, 0x18, 0x1f */
    /* rotlwi r6, r3, 0x18 */
    /* rlwinm r0, r0, 0, 8, 0xf */
    /* rlwimi r5, r3, 0x19, 0x10, 0x17 */
    /* or r0, r4, r0 */
    /* r31+0xb74 = r6 */
    /* or r0, r5, r0 */
    /* r31+0xb78 = r0 */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x805316c8: 41 82 00 50              beq      0x80531718 */
/* 0x805316cc: 2c 04 00 07              cmpwi    r4, 7 */
/* 0x805316d0: 38 00 00 00              li       r0, 0 */
/* 0x805316d4: 41 80 00 10              blt      0x805316e4 */
/* 0x805316d8: 2c 04 00 0a              cmpwi    r4, 0xa */
/* 0x805316dc: 41 81 00 08              bgt      0x805316e4 */
/* 0x805316e0: 38 00 00 01              li       r0, 1 */
/* 0x805316e4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805316e8: 40 82 00 30              bne      0x80531718 */
/* 0x805316ec: 48 02 45 0d              bl       0x80555bf8 */
/* 0x805316f0: 54 60 65 3e              srwi     r0, r3, 0x14 */
/* 0x805316f4: 54 65 c9 ce              rlwinm   r5, r3, 0x19, 7, 7 */
/* 0x805316f8: 54 64 66 3e              rlwinm   r4, r3, 0xc, 0x18, 0x1f */
/* 0x805316fc: 54 66 c0 3e              rotlwi   r6, r3, 0x18 */
/* 0x80531700: 54 00 02 1e              rlwinm   r0, r0, 0, 8, 0xf */
/* 0x80531704: 50 65 cc 2e              rlwimi   r5, r3, 0x19, 0x10, 0x17 */
/* 0x80531708: 7c 80 03 78              or       r0, r4, r0 */
/* 0x8053170c: 90 df 0b 74              stw      r6, 0xb74(r31) */
/* 0x80531710: 7c a0 03 78              or       r0, r5, r0 */
/* 0x80531714: 90 1f 0b 78              stw      r0, 0xb78(r31) */
/* 0x80531718: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x8053171c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80531720: 7c 08 03 a6              mtlr     r0 */
/* 0x80531724: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80531728: 4e 80 00 20              blr       */
/* 0x8053172c: 94 21 ff 60              stwu     r1, -0xa0(r1) */
/* 0x80531730: 7c 08 02 a6              mflr     r0 */
/* 0x80531734: 38 80 00 00              li       r4, 0 */
/* 0x80531738: 38 a0 00 70              li       r5, 0x70 */
/* 0x8053173c: 90 01 00 a4              stw      r0, 0xa4(r1) */
/* 0x80531740: 93 e1 00 9c              stw      r31, 0x9c(r1) */
/* 0x80531744: 7c 7f 1b 78              mr       r31, r3 */
/* 0x80531748: 38 61 00 28              addi     r3, r1, 0x28 */
/* 0x8053174c: 48 02 44 ad              bl       0x80555bf8 */
/* 0x80531750: 3c 60 00 00              lis      r3, 0 */
/* 0x80531754: 38 00 00 00              li       r0, 0 */
/* 0x80531758: 98 01 00 08              stb      r0, 8(r1) */
/* 0x8053175c: 38 81 00 08              addi     r4, r1, 8 */
/* 0x80531760: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80531764: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x80531768: 48 13 a2 75              bl       0x8066b9dc */
/* 0x8053176c: 80 a1 00 0c              lwz      r5, 0xc(r1) */
/* 0x80531770: a0 05 00 14              lhz      r0, 0x14(r5) */
/* 0x80531774: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80531778: 41 82 01 24              beq      0x8053189c */
/* 0x8053177c: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x80531780: 40 82 00 08              bne      0x80531788 */
/* 0x80531784: 48 00 01 18              b        0x8053189c */
/* 0x80531788: 3c 60 00 00              lis      r3, 0 */
/* 0x8053178c: 54 04 13 ba              rlwinm   r4, r0, 2, 0xe, 0x1d */
/* 0x80531790: 38 63 00 00              addi     r3, r3, 0 */
/* 0x80531794: 38 00 00 0b              li       r0, 0xb */
/* 0x80531798: 7c 63 20 2e              lwzx     r3, r3, r4 */
/* 0x8053179c: b0 61 00 2a              sth      r3, 0x2a(r1) */
/* 0x805317a0: 88 65 00 16              lbz      r3, 0x16(r5) */
/* 0x805317a4: 98 61 00 2c              stb      r3, 0x2c(r1) */
/* 0x805317a8: 88 65 00 17              lbz      r3, 0x17(r5) */
/* 0x805317ac: 98 61 00 2f              stb      r3, 0x2f(r1) */
/* 0x805317b0: 88 65 00 3e              lbz      r3, 0x3e(r5) */
/* 0x805317b4: 98 61 00 57              stb      r3, 0x57(r1) */
/* 0x805317b8: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317bc: 90 61 00 58              stw      r3, 0x58(r1) */
/* 0x805317c0: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317c4: 90 61 00 5c              stw      r3, 0x5c(r1) */
/* 0x805317c8: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317cc: 90 61 00 60              stw      r3, 0x60(r1) */
/* 0x805317d0: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317d4: 90 61 00 64              stw      r3, 0x64(r1) */
/* 0x805317d8: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317dc: 90 61 00 68              stw      r3, 0x68(r1) */
/* 0x805317e0: a0 65 00 42              lhz      r3, 0x42(r5) */
/* 0x805317e4: 90 61 00 6c              stw      r3, 0x6c(r1) */
/* 0x805317e8: a0 65 00 1c              lhz      r3, 0x1c(r5) */
/* 0x805317ec: b0 61 00 70              sth      r3, 0x70(r1) */
/* 0x805317f0: a0 65 00 1e              lhz      r3, 0x1e(r5) */
/* 0x805317f4: b0 61 00 72              sth      r3, 0x72(r1) */
/* 0x805317f8: a0 65 00 20              lhz      r3, 0x20(r5) */
/* 0x805317fc: b0 61 00 74              sth      r3, 0x74(r1) */
/* 0x80531800: a0 65 00 22              lhz      r3, 0x22(r5) */
/* 0x80531804: b0 61 00 76              sth      r3, 0x76(r1) */
/* 0x80531808: a0 65 00 24              lhz      r3, 0x24(r5) */
/* 0x8053180c: b0 61 00 78              sth      r3, 0x78(r1) */
/* 0x80531810: a0 65 00 26              lhz      r3, 0x26(r5) */
/* 0x80531814: 28 03 00 0b              cmplwi   r3, 0xb */
/* 0x80531818: 40 80 00 08              bge      0x80531820 */
/* 0x8053181c: 7c 60 1b 78              mr       r0, r3 */
/* 0x80531820: b0 01 00 80              sth      r0, 0x80(r1) */
/* 0x80531824: 38 c0 00 00              li       r6, 0 */
/* 0x80531828: 80 81 00 0c              lwz      r4, 0xc(r1) */
/* 0x8053182c: 48 00 00 28              b        0x80531854 */
/* 0x80531830: 54 c0 0d fc              rlwinm   r0, r6, 1, 0x17, 0x1e */
/* 0x80531834: 38 a1 00 28              addi     r5, r1, 0x28 */
/* 0x80531838: 7c 64 02 14              add      r3, r4, r0 */
/* 0x8053183c: 38 c6 00 01              addi     r6, r6, 1 */
/* 0x80531840: 7c a5 02 14              add      r5, r5, r0 */
/* 0x80531844: 88 03 00 28              lbz      r0, 0x28(r3) */
/* 0x80531848: 98 05 00 5a              stb      r0, 0x5a(r5) */
/* 0x8053184c: 88 03 00 29              lbz      r0, 0x29(r3) */
/* 0x80531850: 98 05 00 5b              stb      r0, 0x5b(r5) */
/* 0x80531854: a0 a4 00 26              lhz      r5, 0x26(r4) */
/* 0x80531858: 54 c3 06 3e              clrlwi   r3, r6, 0x18 */
/* 0x8053185c: 38 00 00 0b              li       r0, 0xb */
/* 0x80531860: 28 05 00 0b              cmplwi   r5, 0xb */
/* 0x80531864: 40 80 00 08              bge      0x8053186c */
/* 0x80531868: 7c a0 2b 78              mr       r0, r5 */
/* 0x8053186c: 54 00 04 3e              clrlwi   r0, r0, 0x10 */
/* 0x80531870: 7c 03 00 00              cmpw     r3, r0 */
/* 0x80531874: 41 80 ff bc              blt      0x80531830 */
/* 0x80531878: 38 00 00 0e              li       r0, 0xe */
/* 0x8053187c: 38 bf 0b 78              addi     r5, r31, 0xb78 */
/* 0x80531880: 38 81 00 24              addi     r4, r1, 0x24 */
/* 0x80531884: 7c 09 03 a6              mtctr    r0 */
/* 0x80531888: 80 64 00 04              lwz      r3, 4(r4) */
/* 0x8053188c: 84 04 00 08              lwzu     r0, 8(r4) */
/* 0x80531890: 90 65 00 04              stw      r3, 4(r5) */
/* 0x80531894: 94 05 00 08              stwu     r0, 8(r5) */
/* 0x80531898: 42 00 ff f0              bdnz     0x80531888 */
/* 0x8053189c: 80 01 00 a4              lwz      r0, 0xa4(r1) */
/* 0x805318a0: 83 e1 00 9c              lwz      r31, 0x9c(r1) */
/* 0x805318a4: 7c 08 03 a6              mtlr     r0 */
/* 0x805318a8: 38 21 00 a0              addi     r1, r1, 0xa0 */
/* 0x805318ac: 4e 80 00 20              blr       */
/* 0x805318b0: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x805318b4: 7c 08 02 a6              mflr     r0 */
/* 0x805318b8: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x805318bc: 38 00 00 00              li       r0, 0 */
/* 0x805318c0: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x805318c4: 93 c1 00 18              stw      r30, 0x18(r1) */
/* 0x805318c8: 7c 9e 23 78              mr       r30, r4 */
/* 0x805318cc: 93 a1 00 14              stw      r29, 0x14(r1) */
/* 0x805318d0: 7c 7d 1b 78              mr       r29, r3 */
/* 0x805318d4: 93 81 00 10              stw      r28, 0x10(r1) */
/* 0x805318d8: 98 01 00 0a              stb      r0, 0xa(r1) */
/* 0x805318dc: 98 01 00 09              stb      r0, 9(r1) */
/* 0x805318e0: 98 01 00 08              stb      r0, 8(r1) */
/* 0x805318e4: 80 03 0b 70              lwz      r0, 0xb70(r3) */
/* 0x805318e8: 54 00 07 7b              rlwinm.  r0, r0, 0, 0x1d, 0x1d */
/* 0x805318ec: 41 82 00 08              beq      0x805318f4 */
/* 0x805318f0: 4b ff fe 3d              bl       0x8053172c */
/* 0x805318f4: 7f a3 eb 78              mr       r3, r29 */
/* 0x805318f8: 4b ff f6 09              bl       0x80530f00 */
/* 0x805318fc: 38 a0 00 00              li       r5, 0 */
/* 0x80531900: 38 00 ff ff              li       r0, -1 */
/* 0x80531904: 1d 05 00 f0              mulli    r8, r5, 0xf0 */
/* 0x80531908: 7f a3 eb 78              mr       r3, r29 */
/* 0x8053190c: 38 a0 00 06              li       r5, 6 */
/* 0x80531910: 38 81 00 0a              addi     r4, r1, 0xa */
/* 0x80531914: 7c fd 42 14              add      r7, r29, r8 */
/* 0x80531918: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x8053191c: 98 07 00 0d              stb      r0, 0xd(r7) */
/* 0x80531920: 1d 05 00 f0              mulli    r8, r5, 0xf0 */
/* 0x80531924: 38 a1 00 09              addi     r5, r1, 9 */
/* 0x80531928: 98 07 00 0e              stb      r0, 0xe(r7) */
/* 0x8053192c: 98 07 00 fd              stb      r0, 0xfd(r7) */
/* 0x80531930: 98 07 00 fe              stb      r0, 0xfe(r7) */
/* 0x80531934: 98 07 01 ed              stb      r0, 0x1ed(r7) */
/* 0x80531938: 98 07 01 ee              stb      r0, 0x1ee(r7) */
/* 0x8053193c: 98 07 02 dd              stb      r0, 0x2dd(r7) */
/* 0x80531940: 98 07 02 de              stb      r0, 0x2de(r7) */
/* 0x80531944: 98 07 03 cd              stb      r0, 0x3cd(r7) */
/* 0x80531948: 98 07 03 ce              stb      r0, 0x3ce(r7) */
/* 0x8053194c: 98 07 04 bd              stb      r0, 0x4bd(r7) */
/* 0x80531950: 98 07 04 be              stb      r0, 0x4be(r7) */
/* 0x80531954: 7c fd 42 14              add      r7, r29, r8 */
/* 0x80531958: 98 07 00 0d              stb      r0, 0xd(r7) */
/* 0x8053195c: 98 07 00 0e              stb      r0, 0xe(r7) */
/* 0x80531960: 98 07 00 fd              stb      r0, 0xfd(r7) */
/* 0x80531964: 98 07 00 fe              stb      r0, 0xfe(r7) */
/* 0x80531968: 98 07 01 ed              stb      r0, 0x1ed(r7) */
/* 0x8053196c: 98 07 01 ee              stb      r0, 0x1ee(r7) */
/* 0x80531970: 98 07 02 dd              stb      r0, 0x2dd(r7) */
/* 0x80531974: 98 07 02 de              stb      r0, 0x2de(r7) */
/* 0x80531978: 98 07 03 cd              stb      r0, 0x3cd(r7) */
/* 0x8053197c: 98 07 03 ce              stb      r0, 0x3ce(r7) */
/* 0x80531980: 98 07 04 bd              stb      r0, 0x4bd(r7) */
/* 0x80531984: 98 07 04 be              stb      r0, 0x4be(r7) */
/* 0x80531988: 98 1d 0b 64              stb      r0, 0xb64(r29) */
/* 0x8053198c: 98 1d 0b 65              stb      r0, 0xb65(r29) */
/* 0x80531990: 98 1d 0b 66              stb      r0, 0xb66(r29) */
/* 0x80531994: 98 1d 0b 67              stb      r0, 0xb67(r29) */
/* 0x80531998: 4b ff fb 11              bl       0x805314a8 */
/* 0x8053199c: 80 1d 0b 54              lwz      r0, 0xb54(r29) */
/* 0x805319a0: 8b e1 00 09              lbz      r31, 9(r1) */
/* 0x805319a4: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x805319a8: 40 82 00 0c              bne      0x805319b4 */
/* 0x805319ac: 38 00 00 01              li       r0, 1 */
/* 0x805319b0: 98 01 00 09              stb      r0, 9(r1) */
/* 0x805319b4: 88 1d 0b 6c              lbz      r0, 0xb6c(r29) */
/* 0x805319b8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805319bc: 40 82 01 60              bne      0x80531b1c */
/* 0x805319c0: 80 9d 0b 50              lwz      r4, 0xb50(r29) */
/* 0x805319c4: 38 00 00 00              li       r0, 0 */
/* 0x805319c8: 88 61 00 0a              lbz      r3, 0xa(r1) */
/* 0x805319cc: 2c 04 00 07              cmpwi    r4, 7 */
#endif


/* === DISASSEMBLY === */

; Function: copyPrevPositions__Q36System10RaceConfig8ScenarioFv
; Demangled: copyPrevPositions__System10RaceConfig8ScenarioFv
; Address: 0x805316c8  (.text+0x1ee2c)
; Size: 776 bytes

  0x805316c8:  beq      0x80531718
  0x805316cc:  cmpwi    r4, 7
  0x805316d0:  li       r0, 0
  0x805316d4:  blt      0x805316e4
  0x805316d8:  cmpwi    r4, 0xa
  0x805316dc:  bgt      0x805316e4
  0x805316e0:  li       r0, 1
  0x805316e4:  cmpwi    r0, 0
  0x805316e8:  bne      0x80531718
  0x805316ec:  bl       0x80555bf8
  0x805316f0:  srwi     r0, r3, 0x14
  0x805316f4:  rlwinm   r5, r3, 0x19, 7, 7
  0x805316f8:  rlwinm   r4, r3, 0xc, 0x18, 0x1f
  0x805316fc:  rotlwi   r6, r3, 0x18
  0x80531700:  rlwinm   r0, r0, 0, 8, 0xf
  0x80531704:  rlwimi   r5, r3, 0x19, 0x10, 0x17
  0x80531708:  or       r0, r4, r0
  0x8053170c:  stw      r6, 0xb74(r31)
  0x80531710:  or       r0, r5, r0
  0x80531714:  stw      r0, 0xb78(r31)
  0x80531718:  lwz      r0, 0x14(r1)
  0x8053171c:  lwz      r31, 0xc(r1)
  0x80531720:  mtlr     r0
  0x80531724:  addi     r1, r1, 0x10
  0x80531728:  blr      
  0x8053172c:  stwu     r1, -0xa0(r1)
  0x80531730:  mflr     r0
  0x80531734:  li       r4, 0
  0x80531738:  li       r5, 0x70
  0x8053173c:  stw      r0, 0xa4(r1)
  0x80531740:  stw      r31, 0x9c(r1)
  0x80531744:  mr       r31, r3
  0x80531748:  addi     r3, r1, 0x28
  0x8053174c:  bl       0x80555bf8
  0x80531750:  lis      r3, 0
  0x80531754:  li       r0, 0
  0x80531758:  stb      r0, 8(r1)
  0x8053175c:  addi     r4, r1, 8
  0x80531760:  lwz      r3, 0(r3)
  0x80531764:  stw      r0, 0xc(r1)
  0x80531768:  bl       0x8066b9dc
  0x8053176c:  lwz      r5, 0xc(r1)
  0x80531770:  lhz      r0, 0x14(r5)
  0x80531774:  cmpwi    r0, 0
  0x80531778:  beq      0x8053189c
  0x8053177c:  cmpwi    r0, 1
  0x80531780:  bne      0x80531788
  0x80531784:  b        0x8053189c
  0x80531788:  lis      r3, 0
  0x8053178c:  rlwinm   r4, r0, 2, 0xe, 0x1d
  0x80531790:  addi     r3, r3, 0
  0x80531794:  li       r0, 0xb
  0x80531798:  lwzx     r3, r3, r4
  0x8053179c:  sth      r3, 0x2a(r1)
  0x805317a0:  lbz      r3, 0x16(r5)
  0x805317a4:  stb      r3, 0x2c(r1)
  0x805317a8:  lbz      r3, 0x17(r5)
  0x805317ac:  stb      r3, 0x2f(r1)
  0x805317b0:  lbz      r3, 0x3e(r5)
  0x805317b4:  stb      r3, 0x57(r1)
  0x805317b8:  lhz      r3, 0x42(r5)
  0x805317bc:  stw      r3, 0x58(r1)
  0x805317c0:  lhz      r3, 0x42(r5)
  0x805317c4:  stw      r3, 0x5c(r1)
  0x805317c8:  lhz      r3, 0x42(r5)
  0x805317cc:  stw      r3, 0x60(r1)
  0x805317d0:  lhz      r3, 0x42(r5)
  0x805317d4:  stw      r3, 0x64(r1)
  0x805317d8:  lhz      r3, 0x42(r5)
  0x805317dc:  stw      r3, 0x68(r1)
  0x805317e0:  lhz      r3, 0x42(r5)
  0x805317e4:  stw      r3, 0x6c(r1)
  0x805317e8:  lhz      r3, 0x1c(r5)
  0x805317ec:  sth      r3, 0x70(r1)
  0x805317f0:  lhz      r3, 0x1e(r5)
  0x805317f4:  sth      r3, 0x72(r1)
  0x805317f8:  lhz      r3, 0x20(r5)
  0x805317fc:  sth      r3, 0x74(r1)
  0x80531800:  lhz      r3, 0x22(r5)
  0x80531804:  sth      r3, 0x76(r1)
  0x80531808:  lhz      r3, 0x24(r5)
  0x8053180c:  sth      r3, 0x78(r1)
  0x80531810:  lhz      r3, 0x26(r5)
  0x80531814:  cmplwi   r3, 0xb
  0x80531818:  bge      0x80531820
  0x8053181c:  mr       r0, r3
  0x80531820:  sth      r0, 0x80(r1)
  0x80531824:  li       r6, 0
  0x80531828:  lwz      r4, 0xc(r1)
  0x8053182c:  b        0x80531854
  0x80531830:  rlwinm   r0, r6, 1, 0x17, 0x1e
  0x80531834:  addi     r5, r1, 0x28
  0x80531838:  add      r3, r4, r0
  0x8053183c:  addi     r6, r6, 1
  0x80531840:  add      r5, r5, r0
  0x80531844:  lbz      r0, 0x28(r3)
  0x80531848:  stb      r0, 0x5a(r5)
  0x8053184c:  lbz      r0, 0x29(r3)
  0x80531850:  stb      r0, 0x5b(r5)
  0x80531854:  lhz      r5, 0x26(r4)
  0x80531858:  clrlwi   r3, r6, 0x18
  0x8053185c:  li       r0, 0xb
  0x80531860:  cmplwi   r5, 0xb
  0x80531864:  bge      0x8053186c
  0x80531868:  mr       r0, r5
  0x8053186c:  clrlwi   r0, r0, 0x10
  0x80531870:  cmpw     r3, r0
  0x80531874:  blt      0x80531830
  0x80531878:  li       r0, 0xe
  0x8053187c:  addi     r5, r31, 0xb78
  0x80531880:  addi     r4, r1, 0x24
  0x80531884:  mtctr    r0
  0x80531888:  lwz      r3, 4(r4)
  0x8053188c:  lwzu     r0, 8(r4)
  0x80531890:  stw      r3, 4(r5)
  0x80531894:  stwu     r0, 8(r5)
  0x80531898:  bdnz     0x80531888
  0x8053189c:  lwz      r0, 0xa4(r1)
  0x805318a0:  lwz      r31, 0x9c(r1)
  0x805318a4:  mtlr     r0
  0x805318a8:  addi     r1, r1, 0xa0
  0x805318ac:  blr      
  0x805318b0:  stwu     r1, -0x20(r1)
  0x805318b4:  mflr     r0
  0x805318b8:  stw      r0, 0x24(r1)
  0x805318bc:  li       r0, 0
  0x805318c0:  stw      r31, 0x1c(r1)
  0x805318c4:  stw      r30, 0x18(r1)
  0x805318c8:  mr       r30, r4
  0x805318cc:  stw      r29, 0x14(r1)
  0x805318d0:  mr       r29, r3
  0x805318d4:  stw      r28, 0x10(r1)
  0x805318d8:  stb      r0, 0xa(r1)
  0x805318dc:  stb      r0, 9(r1)
  0x805318e0:  stb      r0, 8(r1)
  0x805318e4:  lwz      r0, 0xb70(r3)
  0x805318e8:  rlwinm.  r0, r0, 0, 0x1d, 0x1d
  0x805318ec:  beq      0x805318f4
  0x805318f0:  bl       0x8053172c
  0x805318f4:  mr       r3, r29
  0x805318f8:  bl       0x80530f00
  0x805318fc:  li       r5, 0
  0x80531900:  li       r0, -1
  0x80531904:  mulli    r8, r5, 0xf0
  0x80531908:  mr       r3, r29
  0x8053190c:  li       r5, 6
  0x80531910:  addi     r4, r1, 0xa
  0x80531914:  add      r7, r29, r8
  0x80531918:  addi     r6, r1, 8
  0x8053191c:  stb      r0, 0xd(r7)
  0x80531920:  mulli    r8, r5, 0xf0
  0x80531924:  addi     r5, r1, 9
  0x80531928:  stb      r0, 0xe(r7)
  0x8053192c:  stb      r0, 0xfd(r7)
  0x80531930:  stb      r0, 0xfe(r7)
  0x80531934:  stb      r0, 0x1ed(r7)
  0x80531938:  stb      r0, 0x1ee(r7)
  0x8053193c:  stb      r0, 0x2dd(r7)
  0x80531940:  stb      r0, 0x2de(r7)
  0x80531944:  stb      r0, 0x3cd(r7)
  0x80531948:  stb      r0, 0x3ce(r7)
  0x8053194c:  stb      r0, 0x4bd(r7)
  0x80531950:  stb      r0, 0x4be(r7)
  0x80531954:  add      r7, r29, r8
  0x80531958:  stb      r0, 0xd(r7)
  0x8053195c:  stb      r0, 0xe(r7)
  0x80531960:  stb      r0, 0xfd(r7)
  0x80531964:  stb      r0, 0xfe(r7)
  0x80531968:  stb      r0, 0x1ed(r7)
  0x8053196c:  stb      r0, 0x1ee(r7)
  0x80531970:  stb      r0, 0x2dd(r7)
  0x80531974:  stb      r0, 0x2de(r7)
  0x80531978:  stb      r0, 0x3cd(r7)
  0x8053197c:  stb      r0, 0x3ce(r7)
  0x80531980:  stb      r0, 0x4bd(r7)
  0x80531984:  stb      r0, 0x4be(r7)
  0x80531988:  stb      r0, 0xb64(r29)
  0x8053198c:  stb      r0, 0xb65(r29)
  0x80531990:  stb      r0, 0xb66(r29)
  0x80531994:  stb      r0, 0xb67(r29)
  0x80531998:  bl       0x805314a8
  0x8053199c:  lwz      r0, 0xb54(r29)
  0x805319a0:  lbz      r31, 9(r1)
  0x805319a4:  cmpwi    r0, 5
  0x805319a8:  bne      0x805319b4
  0x805319ac:  li       r0, 1
  0x805319b0:  stb      r0, 9(r1)
  0x805319b4:  lbz      r0, 0xb6c(r29)
  0x805319b8:  cmpwi    r0, 0
  0x805319bc:  bne      0x80531b1c
  0x805319c0:  lwz      r4, 0xb50(r29)
  0x805319c4:  li       r0, 0
  0x805319c8:  lbz      r3, 0xa(r1)
  0x805319cc:  cmpwi    r4, 7
