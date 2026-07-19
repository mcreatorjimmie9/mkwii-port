/**
 * ItemObj_loadTeamsModel
 * @addr 0x807a2868
 * @size 592 bytes
 * @frame 64 bytes
 * @calls 12 function(s)
 */
void ItemObj_loadTeamsModel(void) {
    /* r1+0x14 = r0 */
    /* r1+0xc = r31 */
    /* r31 = r3 */
    /* 0x8079b740() */
    /* r0 = r31+0x78 */
    /* r3 = r31 */
    /* rlwinm r4, r0, 7, 0x1f, 0x1f */
    /* addi r0, r4, 2 */
    /* clrlwi r4, r0, 0x10 */
    /* 0x807af8ac() */
    /* r0 = r31+0x7c */
    /* li r4, 0 */
    /* li r3, -1 */
    /* sth r4, 0x1a8(r31) */
    /* clrlwi. r0, r0, 0x1f */
    /* r31+0x1ac = r3 */
    /* r31+0x1b0 = r4 */
    /* if (cr0 ==) goto 0x807a28d8 */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 6, 6 */
    /* if (cr0 ==) goto 0x807a28d8 */
    /* r4, 0  (load upper immediate) */
    /* r3 = r31 */
    /* f1 = *(f32*)(r4+0x0) */
    /* li r4, 0x100 */
    /* 0x807a0774() */
    /* r0 = stack[0x14] */
    /* r31 = stack[0xc] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a2868: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a286c: 7c 08 02 a6              mflr     r0 */
/* 0x807a2870: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a2874: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a2878: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a287c: 4b ff 8e c5              bl       0x8079b740 */
/* 0x807a2880: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a2884: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a2888: 54 04 3f fe              rlwinm   r4, r0, 7, 0x1f, 0x1f */
/* 0x807a288c: 38 04 00 02              addi     r0, r4, 2 */
/* 0x807a2890: 54 04 04 3e              clrlwi   r4, r0, 0x10 */
/* 0x807a2894: 48 00 d0 19              bl       0x807af8ac */
/* 0x807a2898: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a289c: 38 80 00 00              li       r4, 0 */
/* 0x807a28a0: 38 60 ff ff              li       r3, -1 */
/* 0x807a28a4: b0 9f 01 a8              sth      r4, 0x1a8(r31) */
/* 0x807a28a8: 54 00 07 ff              clrlwi.  r0, r0, 0x1f */
/* 0x807a28ac: 90 7f 01 ac              stw      r3, 0x1ac(r31) */
/* 0x807a28b0: 90 9f 01 b0              stw      r4, 0x1b0(r31) */
/* 0x807a28b4: 41 82 00 24              beq      0x807a28d8 */
/* 0x807a28b8: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a28bc: 54 00 01 8d              rlwinm.  r0, r0, 0, 6, 6 */
/* 0x807a28c0: 41 82 00 18              beq      0x807a28d8 */
/* 0x807a28c4: 3c 80 00 00              lis      r4, 0 */
/* 0x807a28c8: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a28cc: c0 24 00 00              lfs      f1, 0(r4) */
/* 0x807a28d0: 38 80 01 00              li       r4, 0x100 */
/* 0x807a28d4: 4b ff de a1              bl       0x807a0774 */
/* 0x807a28d8: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a28dc: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a28e0: 7c 08 03 a6              mtlr     r0 */
/* 0x807a28e4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a28e8: 4e 80 00 20              blr       */
/* 0x807a28ec: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x807a28f0: 7c 08 02 a6              mflr     r0 */
/* 0x807a28f4: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807a28f8: 93 e1 00 1c              stw      r31, 0x1c(r1) */
/* 0x807a28fc: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a2900: 4b ff 91 4d              bl       0x8079ba4c */
/* 0x807a2904: 38 80 00 00              li       r4, 0 */
/* 0x807a2908: 38 60 ff ff              li       r3, -1 */
/* 0x807a290c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a2910: 3c a0 00 00              lis      r5, 0 */
/* 0x807a2914: b0 9f 01 a8              sth      r4, 0x1a8(r31) */
/* 0x807a2918: 54 00 06 33              rlwinm.  r0, r0, 0, 0x18, 0x19 */
/* 0x807a291c: 90 7f 01 ac              stw      r3, 0x1ac(r31) */
/* 0x807a2920: 90 9f 01 b0              stw      r4, 0x1b0(r31) */
/* 0x807a2924: 84 85 00 00              lwzu     r4, 0(r5) */
/* 0x807a2928: 90 81 00 08              stw      r4, 8(r1) */
/* 0x807a292c: 80 65 00 04              lwz      r3, 4(r5) */
/* 0x807a2930: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x807a2934: 90 61 00 0c              stw      r3, 0xc(r1) */
/* 0x807a2938: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807a293c: 40 82 00 10              bne      0x807a294c */
/* 0x807a2940: 90 9f 01 68              stw      r4, 0x168(r31) */
/* 0x807a2944: 90 7f 01 6c              stw      r3, 0x16c(r31) */
/* 0x807a2948: 90 1f 01 70              stw      r0, 0x170(r31) */
/* 0x807a294c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a2950: 3c 60 00 00              lis      r3, 0 */
/* 0x807a2954: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a2958: 38 a0 00 01              li       r5, 1 */
/* 0x807a295c: 54 00 01 ca              rlwinm   r0, r0, 0, 7, 5 */
/* 0x807a2960: 38 80 01 0e              li       r4, 0x10e */
/* 0x807a2964: 90 bf 01 ac              stw      r5, 0x1ac(r31) */
/* 0x807a2968: 3c 60 00 00              lis      r3, 0 */
/* 0x807a296c: 80 bf 00 9c              lwz      r5, 0x9c(r31) */
/* 0x807a2970: 90 9f 01 ec              stw      r4, 0x1ec(r31) */
/* 0x807a2974: 38 80 00 04              li       r4, 4 */
/* 0x807a2978: c0 43 00 00              lfs      f2, 0(r3) */
/* 0x807a297c: 90 1f 00 78              stw      r0, 0x78(r31) */
/* 0x807a2980: d0 3f 01 a0              stfs     f1, 0x1a0(r31) */
/* 0x807a2984: 80 65 00 28              lwz      r3, 0x28(r5) */
/* 0x807a2988: 4b db 6f 2d              bl       0x805598b4 */
/* 0x807a298c: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x807a2990: 83 e1 00 1c              lwz      r31, 0x1c(r1) */
/* 0x807a2994: 7c 08 03 a6              mtlr     r0 */
/* 0x807a2998: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807a299c: 4e 80 00 20              blr       */
/* 0x807a29a0: 94 21 ff c0              stwu     r1, -0x40(r1) */
/* 0x807a29a4: 7c 08 02 a6              mflr     r0 */
/* 0x807a29a8: 3c c0 00 00              lis      r6, 0 */
/* 0x807a29ac: 38 e0 01 0b              li       r7, 0x10b */
/* 0x807a29b0: 90 01 00 44              stw      r0, 0x44(r1) */
/* 0x807a29b4: 38 c6 00 00              addi     r6, r6, 0 */
/* 0x807a29b8: 39 00 00 00              li       r8, 0 */
/* 0x807a29bc: 93 e1 00 3c              stw      r31, 0x3c(r1) */
/* 0x807a29c0: 93 c1 00 38              stw      r30, 0x38(r1) */
/* 0x807a29c4: 3f c0 00 00              lis      r30, 0 */
/* 0x807a29c8: 38 9e 00 00              addi     r4, r30, 0 */
/* 0x807a29cc: 93 a1 00 34              stw      r29, 0x34(r1) */
/* 0x807a29d0: 7c 7d 1b 78              mr       r29, r3 */
/* 0x807a29d4: 38 a4 00 05              addi     r5, r4, 5 */
/* 0x807a29d8: 4b ff ad e1              bl       0x8079d7b8 */
/* 0x807a29dc: 80 bd 00 9c              lwz      r5, 0x9c(r29) */
/* 0x807a29e0: 38 9e 00 00              addi     r4, r30, 0 */
/* 0x807a29e4: 38 61 00 24              addi     r3, r1, 0x24 */
/* 0x807a29e8: 80 05 00 0c              lwz      r0, 0xc(r5) */
/* 0x807a29ec: 38 84 00 0d              addi     r4, r4, 0xd */
/* 0x807a29f0: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807a29f4: 4b db 32 05              bl       0x80555bf8 */
/* 0x807a29f8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a29fc: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807a2a00: 40 82 00 20              bne      0x807a2a20 */
/* 0x807a2a04: 3c 60 00 00              lis      r3, 0 */
/* 0x807a2a08: 3c a0 00 00              lis      r5, 0 */
/* 0x807a2a0c: 38 63 00 00              addi     r3, r3, 0 */
/* 0x807a2a10: 38 80 00 38              li       r4, 0x38 */
/* 0x807a2a14: 38 a5 00 00              addi     r5, r5, 0 */
/* 0x807a2a18: 4c c6 31 82              crclr    cr1eq */
/* 0x807a2a1c: 4b db 31 dd              bl       0x80555bf8 */
/* 0x807a2a20: 2c 1e 00 00              cmpwi    r30, 0 */
/* 0x807a2a24: 41 82 00 0c              beq      0x807a2a30 */
/* 0x807a2a28: 80 1e 00 0c              lwz      r0, 0xc(r30) */
/* 0x807a2a2c: 48 00 00 08              b        0x807a2a34 */
/* 0x807a2a30: 38 00 00 00              li       r0, 0 */
/* 0x807a2a34: 90 1d 01 cc              stw      r0, 0x1cc(r29) */
/* 0x807a2a38: 38 60 00 4c              li       r3, 0x4c */
/* 0x807a2a3c: 4b db 31 bd              bl       0x80555bf8 */
/* 0x807a2a40: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a2a44: 41 82 00 14              beq      0x807a2a58 */
/* 0x807a2a48: 80 bd 00 a4              lwz      r5, 0xa4(r29) */
/* 0x807a2a4c: 38 80 00 0b              li       r4, 0xb */
/* 0x807a2a50: 38 c0 00 00              li       r6, 0 */
/* 0x807a2a54: 4b db ad 2d              bl       0x8055d780 */
/* 0x807a2a58: 90 7d 01 d4              stw      r3, 0x1d4(r29) */
/* 0x807a2a5c: 3f e0 00 00              lis      r31, 0 */
/* 0x807a2a60: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x807a2a64: 3b c0 00 00              li       r30, 0 */
/* 0x807a2a68: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x807a2a6c: 38 61 00 28              addi     r3, r1, 0x28 */
/* 0x807a2a70: 38 bf 00 14              addi     r5, r31, 0x14 */
/* 0x807a2a74: 38 80 00 00              li       r4, 0 */
/* 0x807a2a78: 4b db b0 89              bl       0x8055db00 */
/* 0x807a2a7c: 80 7d 01 d4              lwz      r3, 0x1d4(r29) */
/* 0x807a2a80: 38 9f 00 23              addi     r4, r31, 0x23 */
/* 0x807a2a84: 38 a1 00 28              addi     r5, r1, 0x28 */
/* 0x807a2a88: 38 c0 00 00              li       r6, 0 */
/* 0x807a2a8c: 4b db bb 45              bl       0x8055e5d0 */
/* 0x807a2a90: 80 01 00 28              lwz      r0, 0x28(r1) */
/* 0x807a2a94: 38 a1 00 20              addi     r5, r1, 0x20 */
/* 0x807a2a98: 90 01 00 20              stw      r0, 0x20(r1) */
/* 0x807a2a9c: 38 df 00 2c              addi     r6, r31, 0x2c */
/* 0x807a2aa0: 38 80 00 00              li       r4, 0 */
/* 0x807a2aa4: 38 e0 00 00              li       r7, 0 */
/* 0x807a2aa8: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x807a2aac: 39 00 00 00              li       r8, 0 */
/* 0x807a2ab0: 39 20 00 00              li       r9, 0 */
/* 0x807a2ab4: 39 40 00 09              li       r10, 9 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_loadTeamsModel
; Demangled: ItemObj_loadTeamsModel
; Address: 0x807a2868  (.text+0x28ffcc)
; Size: 592 bytes

  0x807a2868:  stwu     r1, -0x10(r1)
  0x807a286c:  mflr     r0
  0x807a2870:  stw      r0, 0x14(r1)
  0x807a2874:  stw      r31, 0xc(r1)
  0x807a2878:  mr       r31, r3
  0x807a287c:  bl       0x8079b740
  0x807a2880:  lwz      r0, 0x78(r31)
  0x807a2884:  mr       r3, r31
  0x807a2888:  rlwinm   r4, r0, 7, 0x1f, 0x1f
  0x807a288c:  addi     r0, r4, 2
  0x807a2890:  clrlwi   r4, r0, 0x10
  0x807a2894:  bl       0x807af8ac
  0x807a2898:  lwz      r0, 0x7c(r31)
  0x807a289c:  li       r4, 0
  0x807a28a0:  li       r3, -1
  0x807a28a4:  sth      r4, 0x1a8(r31)
  0x807a28a8:  clrlwi.  r0, r0, 0x1f
  0x807a28ac:  stw      r3, 0x1ac(r31)
  0x807a28b0:  stw      r4, 0x1b0(r31)
  0x807a28b4:  beq      0x807a28d8
  0x807a28b8:  lwz      r0, 0x78(r31)
  0x807a28bc:  rlwinm.  r0, r0, 0, 6, 6
  0x807a28c0:  beq      0x807a28d8
  0x807a28c4:  lis      r4, 0
  0x807a28c8:  mr       r3, r31
  0x807a28cc:  lfs      f1, 0(r4)
  0x807a28d0:  li       r4, 0x100
  0x807a28d4:  bl       0x807a0774
  0x807a28d8:  lwz      r0, 0x14(r1)
  0x807a28dc:  lwz      r31, 0xc(r1)
  0x807a28e0:  mtlr     r0
  0x807a28e4:  addi     r1, r1, 0x10
  0x807a28e8:  blr      
  0x807a28ec:  stwu     r1, -0x20(r1)
  0x807a28f0:  mflr     r0
  0x807a28f4:  stw      r0, 0x24(r1)
  0x807a28f8:  stw      r31, 0x1c(r1)
  0x807a28fc:  mr       r31, r3
  0x807a2900:  bl       0x8079ba4c
  0x807a2904:  li       r4, 0
  0x807a2908:  li       r3, -1
  0x807a290c:  lwz      r0, 0x78(r31)
  0x807a2910:  lis      r5, 0
  0x807a2914:  sth      r4, 0x1a8(r31)
  0x807a2918:  rlwinm.  r0, r0, 0, 0x18, 0x19
  0x807a291c:  stw      r3, 0x1ac(r31)
  0x807a2920:  stw      r4, 0x1b0(r31)
  0x807a2924:  lwzu     r4, 0(r5)
  0x807a2928:  stw      r4, 8(r1)
  0x807a292c:  lwz      r3, 4(r5)
  0x807a2930:  lwz      r0, 8(r5)
  0x807a2934:  stw      r3, 0xc(r1)
  0x807a2938:  stw      r0, 0x10(r1)
  0x807a293c:  bne      0x807a294c
  0x807a2940:  stw      r4, 0x168(r31)
  0x807a2944:  stw      r3, 0x16c(r31)
  0x807a2948:  stw      r0, 0x170(r31)
  0x807a294c:  lwz      r0, 0x78(r31)
  0x807a2950:  lis      r3, 0
  0x807a2954:  lfs      f1, 0(r3)
  0x807a2958:  li       r5, 1
  0x807a295c:  rlwinm   r0, r0, 0, 7, 5
  0x807a2960:  li       r4, 0x10e
  0x807a2964:  stw      r5, 0x1ac(r31)
  0x807a2968:  lis      r3, 0
  0x807a296c:  lwz      r5, 0x9c(r31)
  0x807a2970:  stw      r4, 0x1ec(r31)
  0x807a2974:  li       r4, 4
  0x807a2978:  lfs      f2, 0(r3)
  0x807a297c:  stw      r0, 0x78(r31)
  0x807a2980:  stfs     f1, 0x1a0(r31)
  0x807a2984:  lwz      r3, 0x28(r5)
  0x807a2988:  bl       0x805598b4
  0x807a298c:  lwz      r0, 0x24(r1)
  0x807a2990:  lwz      r31, 0x1c(r1)
  0x807a2994:  mtlr     r0
  0x807a2998:  addi     r1, r1, 0x20
  0x807a299c:  blr      
  0x807a29a0:  stwu     r1, -0x40(r1)
  0x807a29a4:  mflr     r0
  0x807a29a8:  lis      r6, 0
  0x807a29ac:  li       r7, 0x10b
  0x807a29b0:  stw      r0, 0x44(r1)
  0x807a29b4:  addi     r6, r6, 0
  0x807a29b8:  li       r8, 0
  0x807a29bc:  stw      r31, 0x3c(r1)
  0x807a29c0:  stw      r30, 0x38(r1)
  0x807a29c4:  lis      r30, 0
  0x807a29c8:  addi     r4, r30, 0
  0x807a29cc:  stw      r29, 0x34(r1)
  0x807a29d0:  mr       r29, r3
  0x807a29d4:  addi     r5, r4, 5
  0x807a29d8:  bl       0x8079d7b8
  0x807a29dc:  lwz      r5, 0x9c(r29)
  0x807a29e0:  addi     r4, r30, 0
  0x807a29e4:  addi     r3, r1, 0x24
  0x807a29e8:  lwz      r0, 0xc(r5)
  0x807a29ec:  addi     r4, r4, 0xd
  0x807a29f0:  stw      r0, 0x24(r1)
  0x807a29f4:  bl       0x80555bf8
  0x807a29f8:  cmpwi    r3, 0
  0x807a29fc:  mr       r30, r3
  0x807a2a00:  bne      0x807a2a20
  0x807a2a04:  lis      r3, 0
  0x807a2a08:  lis      r5, 0
  0x807a2a0c:  addi     r3, r3, 0
  0x807a2a10:  li       r4, 0x38
  0x807a2a14:  addi     r5, r5, 0
  0x807a2a18:  crclr    cr1eq
  0x807a2a1c:  bl       0x80555bf8
  0x807a2a20:  cmpwi    r30, 0
  0x807a2a24:  beq      0x807a2a30
  0x807a2a28:  lwz      r0, 0xc(r30)
  0x807a2a2c:  b        0x807a2a34
  0x807a2a30:  li       r0, 0
  0x807a2a34:  stw      r0, 0x1cc(r29)
  0x807a2a38:  li       r3, 0x4c
  0x807a2a3c:  bl       0x80555bf8
  0x807a2a40:  cmpwi    r3, 0
  0x807a2a44:  beq      0x807a2a58
  0x807a2a48:  lwz      r5, 0xa4(r29)
  0x807a2a4c:  li       r4, 0xb
  0x807a2a50:  li       r6, 0
  0x807a2a54:  bl       0x8055d780
  0x807a2a58:  stw      r3, 0x1d4(r29)
  0x807a2a5c:  lis      r31, 0
  0x807a2a60:  addi     r31, r31, 0
  0x807a2a64:  li       r30, 0
  0x807a2a68:  stw      r30, 0x28(r1)
  0x807a2a6c:  addi     r3, r1, 0x28
  0x807a2a70:  addi     r5, r31, 0x14
  0x807a2a74:  li       r4, 0
  0x807a2a78:  bl       0x8055db00
  0x807a2a7c:  lwz      r3, 0x1d4(r29)
  0x807a2a80:  addi     r4, r31, 0x23
  0x807a2a84:  addi     r5, r1, 0x28
  0x807a2a88:  li       r6, 0
  0x807a2a8c:  bl       0x8055e5d0
  0x807a2a90:  lwz      r0, 0x28(r1)
  0x807a2a94:  addi     r5, r1, 0x20
  0x807a2a98:  stw      r0, 0x20(r1)
  0x807a2a9c:  addi     r6, r31, 0x2c
  0x807a2aa0:  li       r4, 0
  0x807a2aa4:  li       r7, 0
  0x807a2aa8:  stw      r30, 8(r1)
  0x807a2aac:  li       r8, 0
  0x807a2ab0:  li       r9, 0
  0x807a2ab4:  li       r10, 9
