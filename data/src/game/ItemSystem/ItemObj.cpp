// ItemObj implementation — 5 functions
#include "ItemObj.hpp"

// Address: 0x807a14d4 — ItemObj_update (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 2248 bytes
/**
 * ItemObj_update
 * @addr 0x807a14d4
 * @size 2248 bytes
 * @frame 64 bytes
 */
void ItemObj_update(void) {
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a14d4: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a14d8: 4e 80 00 20              blr       */
/* 0x807a14dc: 94 21 ff c0              stwu     r1, -0x40(r1) */
/* 0x807a14e0: 7c 08 02 a6              mflr     r0 */
/* 0x807a14e4: 90 01 00 44              stw      r0, 0x44(r1) */
/* 0x807a14e8: db e1 00 30              stfd     f31, 0x30(r1) */
/* 0x807a14ec: f3 e1 00 38              xxsel    vs31, vs1, vs0, v0 */
/* 0x807a14f0: 93 e1 00 2c              stw      r31, 0x2c(r1) */
/* 0x807a14f4: 3f e0 00 00              lis      r31, 0 */
/* 0x807a14f8: 3b ff 00 00              addi     r31, r31, 0 */
/* 0x807a14fc: 93 c1 00 28              stw      r30, 0x28(r1) */
/* 0x807a1500: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807a1504: c0 1f 00 c0              lfs      f0, 0xc0(r31) */
/* 0x807a1508: c0 23 00 54              lfs      f1, 0x54(r3) */
/* 0x807a150c: 88 03 01 98              lbz      r0, 0x198(r3) */
/* 0x807a1510: ec 01 00 28              fsubs    f0, f1, f0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_update
; Demangled: ItemObj_update
; Address: 0x807a14d4  (.text+0x28ec38)
; Size: 2248 bytes

  0x807a14d4:  addi     r1, r1, 0x10
  0x807a14d8:  blr      
  0x807a14dc:  stwu     r1, -0x40(r1)
  0x807a14e0:  mflr     r0
  0x807a14e4:  stw      r0, 0x44(r1)
  0x807a14e8:  stfd     f31, 0x30(r1)
  0x807a14ec:  xxsel    vs31, vs1, vs0, v0
  0x807a14f0:  stw      r31, 0x2c(r1)
  0x807a14f4:  lis      r31, 0
  0x807a14f8:  addi     r31, r31, 0
  0x807a14fc:  stw      r30, 0x28(r1)
  0x807a1500:  mr       r30, r3
  0x807a1504:  lfs      f0, 0xc0(r31)
  0x807a1508:  lfs      f1, 0x54(r3)
  0x807a150c:  lbz      r0, 0x198(r3)
  0x807a1510:  fsubs    f0, f1, f0

// Address: 0x807a2868 — ItemObj_loadTeamsModel (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 592 bytes
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

// Address: 0x807a39bc — ItemObj_checkPlayerCollision (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 428 bytes
/**
 * ItemObj_checkPlayerCollision
 * @addr 0x807a39bc
 * @size 428 bytes
 * @frame 32 bytes
 * @calls 5 function(s)
 */
void ItemObj_checkPlayerCollision(void) {
    /* li r4, 0x10e */
    /* r3+0x1ac = r6 */
    /* r5, 0  (load upper immediate) */
    /* r6 = r3+0x9c */
    /* r3+0x1ec = r4 */
    /* li r4, 4 */
    /* f2 = *(f32*)(r5+0x0) */
    /* r3+0x78 = r0 */
    /* *(f32*)(r3+0x1a0) = f1 */
    /* r3 = r6+0x28 */
    /* 0x805598b4() */
    /* r0 = stack[0x24] */
    /* mtlr r0 */
    /* addi r1, r1, 0x20 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a39bc: 38 80 01 0e              li       r4, 0x10e */
/* 0x807a39c0: 90 c3 01 ac              stw      r6, 0x1ac(r3) */
/* 0x807a39c4: 3c a0 00 00              lis      r5, 0 */
/* 0x807a39c8: 80 c3 00 9c              lwz      r6, 0x9c(r3) */
/* 0x807a39cc: 90 83 01 ec              stw      r4, 0x1ec(r3) */
/* 0x807a39d0: 38 80 00 04              li       r4, 4 */
/* 0x807a39d4: c0 45 00 00              lfs      f2, 0(r5) */
/* 0x807a39d8: 90 03 00 78              stw      r0, 0x78(r3) */
/* 0x807a39dc: d0 23 01 a0              stfs     f1, 0x1a0(r3) */
/* 0x807a39e0: 80 66 00 28              lwz      r3, 0x28(r6) */
/* 0x807a39e4: 4b db 5e d1              bl       0x805598b4 */
/* 0x807a39e8: 80 01 00 24              lwz      r0, 0x24(r1) */
/* 0x807a39ec: 7c 08 03 a6              mtlr     r0 */
/* 0x807a39f0: 38 21 00 20              addi     r1, r1, 0x20 */
/* 0x807a39f4: 4e 80 00 20              blr       */
/* 0x807a39f8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a39fc: 7c 08 02 a6              mflr     r0 */
/* 0x807a3a00: 3c 80 00 00              lis      r4, 0 */
/* 0x807a3a04: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a3a08: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a3a0c: 7c 7f 1b 78              mr       r31, r3 */
/* 0x807a3a10: 80 64 00 00              lwz      r3, 0(r4) */
/* 0x807a3a14: a8 9f 00 0a              lha      r4, 0xa(r31) */
/* 0x807a3a18: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a3a1c: 4b ee c1 e1              bl       0x8068fbfc */
/* 0x807a3a20: 80 7f 01 d4              lwz      r3, 0x1d4(r31) */
/* 0x807a3a24: 38 80 00 00              li       r4, 0 */
/* 0x807a3a28: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a3a2c: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x807a3a30: 7d 89 03 a6              mtctr    r12 */
/* 0x807a3a34: 4e 80 04 21              bctrl     */
/* 0x807a3a38: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a3a3c: 4b ff 7b 91              bl       0x8079b5cc */
/* 0x807a3a40: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a3a44: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a3a48: 7c 08 03 a6              mtlr     r0 */
/* 0x807a3a4c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a3a50: 4e 80 00 20              blr       */
/* 0x807a3a54: 3c a0 00 00              lis      r5, 0 */
/* 0x807a3a58: 3c c0 00 00              lis      r6, 0 */
/* 0x807a3a5c: 7c 64 1b 78              mr       r4, r3 */
/* 0x807a3a60: 80 66 00 00              lwz      r3, 0(r6) */
/* 0x807a3a64: c0 25 00 00              lfs      f1, 0(r5) */
/* 0x807a3a68: 7c 85 23 78              mr       r5, r4 */
/* 0x807a3a6c: 38 c0 00 28              li       r6, 0x28 */
/* 0x807a3a70: 38 e0 00 0a              li       r7, 0xa */
/* 0x807a3a74: 39 00 00 00              li       r8, 0 */
/* 0x807a3a78: 39 20 00 1e              li       r9, 0x1e */
/* 0x807a3a7c: 4b fe 78 f0              b        0x8078b36c */
/* 0x807a3a80: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a3a84: 54 00 06 73              rlwinm.  r0, r0, 0, 0x19, 0x19 */
/* 0x807a3a88: 41 82 00 10              beq      0x807a3a98 */
/* 0x807a3a8c: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3a90: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3a94: 4e 80 00 20              blr       */
/* 0x807a3a98: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3a9c: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3aa0: 4e 80 00 20              blr       */
/* 0x807a3aa4: 80 03 00 7c              lwz      r0, 0x7c(r3) */
/* 0x807a3aa8: 54 00 06 73              rlwinm.  r0, r0, 0, 0x19, 0x19 */
/* 0x807a3aac: 41 82 00 10              beq      0x807a3abc */
/* 0x807a3ab0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3ab4: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3ab8: 4e 80 00 20              blr       */
/* 0x807a3abc: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3ac0: c0 23 00 00              lfs      f1, 0(r3) */
/* 0x807a3ac4: 4e 80 00 20              blr       */
/* 0x807a3ac8: 94 21 ff f0              stwu     r1, -0x10(r1) */
/* 0x807a3acc: 7c 08 02 a6              mflr     r0 */
/* 0x807a3ad0: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807a3ad4: 90 01 00 14              stw      r0, 0x14(r1) */
/* 0x807a3ad8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x807a3adc: 7c 9f 23 78              mr       r31, r4 */
/* 0x807a3ae0: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x807a3ae4: 7c 7e 1b 78              mr       r30, r3 */
/* 0x807a3ae8: 41 82 00 30              beq      0x807a3b18 */
/* 0x807a3aec: 34 03 01 a4              addic.   r0, r3, 0x1a4 */
/* 0x807a3af0: 41 82 00 18              beq      0x807a3b08 */
/* 0x807a3af4: 3c 80 00 00              lis      r4, 0 */
/* 0x807a3af8: 38 84 00 00              addi     r4, r4, 0 */
/* 0x807a3afc: 90 83 01 a4              stw      r4, 0x1a4(r3) */
/* 0x807a3b00: 80 63 01 b8              lwz      r3, 0x1b8(r3) */
/* 0x807a3b04: 4b db 20 f5              bl       0x80555bf8 */
/* 0x807a3b08: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807a3b0c: 40 81 00 0c              ble      0x807a3b18 */
/* 0x807a3b10: 7f c3 f3 78              mr       r3, r30 */
/* 0x807a3b14: 4b db 20 e5              bl       0x80555bf8 */
/* 0x807a3b18: 7f c3 f3 78              mr       r3, r30 */
/* 0x807a3b1c: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x807a3b20: 83 c1 00 08              lwz      r30, 8(r1) */
/* 0x807a3b24: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a3b28: 7c 08 03 a6              mtlr     r0 */
/* 0x807a3b2c: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a3b30: 4e 80 00 20              blr       */
/* 0x807a3b34: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x807a3b38: 3c c0 00 00              lis      r6, 0 */
/* 0x807a3b3c: 3c 60 00 00              lis      r3, 0 */
/* 0x807a3b40: 84 a6 00 00              lwzu     r5, 0(r6) */
/* 0x807a3b44: 38 63 00 00              addi     r3, r3, 0 */
/* 0x807a3b48: 90 a1 00 08              stw      r5, 8(r1) */
/* 0x807a3b4c: 80 86 00 04              lwz      r4, 4(r6) */
/* 0x807a3b50: 80 06 00 08              lwz      r0, 8(r6) */
/* 0x807a3b54: 90 81 00 0c              stw      r4, 0xc(r1) */
/* 0x807a3b58: 90 01 00 10              stw      r0, 0x10(r1) */
/* 0x807a3b5c: 90 a3 00 04              stw      r5, 4(r3) */
/* 0x807a3b60: 90 83 00 08              stw      r4, 8(r3) */
/* 0x807a3b64: 90 03 00 0c              stw      r0, 0xc(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_checkPlayerCollision
; Demangled: ItemObj_checkPlayerCollision
; Address: 0x807a39bc  (.text+0x291120)
; Size: 428 bytes

  0x807a39bc:  li       r4, 0x10e
  0x807a39c0:  stw      r6, 0x1ac(r3)
  0x807a39c4:  lis      r5, 0
  0x807a39c8:  lwz      r6, 0x9c(r3)
  0x807a39cc:  stw      r4, 0x1ec(r3)
  0x807a39d0:  li       r4, 4
  0x807a39d4:  lfs      f2, 0(r5)
  0x807a39d8:  stw      r0, 0x78(r3)
  0x807a39dc:  stfs     f1, 0x1a0(r3)
  0x807a39e0:  lwz      r3, 0x28(r6)
  0x807a39e4:  bl       0x805598b4
  0x807a39e8:  lwz      r0, 0x24(r1)
  0x807a39ec:  mtlr     r0
  0x807a39f0:  addi     r1, r1, 0x20
  0x807a39f4:  blr      
  0x807a39f8:  stwu     r1, -0x10(r1)
  0x807a39fc:  mflr     r0
  0x807a3a00:  lis      r4, 0
  0x807a3a04:  stw      r0, 0x14(r1)
  0x807a3a08:  stw      r31, 0xc(r1)
  0x807a3a0c:  mr       r31, r3
  0x807a3a10:  lwz      r3, 0(r4)
  0x807a3a14:  lha      r4, 0xa(r31)
  0x807a3a18:  lwz      r3, 0x74(r3)
  0x807a3a1c:  bl       0x8068fbfc
  0x807a3a20:  lwz      r3, 0x1d4(r31)
  0x807a3a24:  li       r4, 0
  0x807a3a28:  lwz      r12, 0(r3)
  0x807a3a2c:  lwz      r12, 0xc(r12)
  0x807a3a30:  mtctr    r12
  0x807a3a34:  bctrl    
  0x807a3a38:  mr       r3, r31
  0x807a3a3c:  bl       0x8079b5cc
  0x807a3a40:  lwz      r0, 0x14(r1)
  0x807a3a44:  lwz      r31, 0xc(r1)
  0x807a3a48:  mtlr     r0
  0x807a3a4c:  addi     r1, r1, 0x10
  0x807a3a50:  blr      
  0x807a3a54:  lis      r5, 0
  0x807a3a58:  lis      r6, 0
  0x807a3a5c:  mr       r4, r3
  0x807a3a60:  lwz      r3, 0(r6)
  0x807a3a64:  lfs      f1, 0(r5)
  0x807a3a68:  mr       r5, r4
  0x807a3a6c:  li       r6, 0x28
  0x807a3a70:  li       r7, 0xa
  0x807a3a74:  li       r8, 0
  0x807a3a78:  li       r9, 0x1e
  0x807a3a7c:  b        0x8078b36c
  0x807a3a80:  lwz      r0, 0x7c(r3)
  0x807a3a84:  rlwinm.  r0, r0, 0, 0x19, 0x19
  0x807a3a88:  beq      0x807a3a98
  0x807a3a8c:  lis      r3, 0
  0x807a3a90:  lfs      f1, 0(r3)
  0x807a3a94:  blr      
  0x807a3a98:  lis      r3, 0
  0x807a3a9c:  lfs      f1, 0(r3)
  0x807a3aa0:  blr      
  0x807a3aa4:  lwz      r0, 0x7c(r3)
  0x807a3aa8:  rlwinm.  r0, r0, 0, 0x19, 0x19
  0x807a3aac:  beq      0x807a3abc
  0x807a3ab0:  lis      r3, 0
  0x807a3ab4:  lfs      f1, 0(r3)
  0x807a3ab8:  blr      
  0x807a3abc:  lis      r3, 0
  0x807a3ac0:  lfs      f1, 0(r3)
  0x807a3ac4:  blr      
  0x807a3ac8:  stwu     r1, -0x10(r1)
  0x807a3acc:  mflr     r0
  0x807a3ad0:  cmpwi    r3, 0
  0x807a3ad4:  stw      r0, 0x14(r1)
  0x807a3ad8:  stw      r31, 0xc(r1)
  0x807a3adc:  mr       r31, r4
  0x807a3ae0:  stw      r30, 8(r1)
  0x807a3ae4:  mr       r30, r3
  0x807a3ae8:  beq      0x807a3b18
  0x807a3aec:  addic.   r0, r3, 0x1a4
  0x807a3af0:  beq      0x807a3b08
  0x807a3af4:  lis      r4, 0
  0x807a3af8:  addi     r4, r4, 0
  0x807a3afc:  stw      r4, 0x1a4(r3)
  0x807a3b00:  lwz      r3, 0x1b8(r3)
  0x807a3b04:  bl       0x80555bf8
  0x807a3b08:  cmpwi    r31, 0
  0x807a3b0c:  ble      0x807a3b18
  0x807a3b10:  mr       r3, r30
  0x807a3b14:  bl       0x80555bf8
  0x807a3b18:  mr       r3, r30
  0x807a3b1c:  lwz      r31, 0xc(r1)
  0x807a3b20:  lwz      r30, 8(r1)
  0x807a3b24:  lwz      r0, 0x14(r1)
  0x807a3b28:  mtlr     r0
  0x807a3b2c:  addi     r1, r1, 0x10
  0x807a3b30:  blr      
  0x807a3b34:  stwu     r1, -0x20(r1)
  0x807a3b38:  lis      r6, 0
  0x807a3b3c:  lis      r3, 0
  0x807a3b40:  lwzu     r5, 0(r6)
  0x807a3b44:  addi     r3, r3, 0
  0x807a3b48:  stw      r5, 8(r1)
  0x807a3b4c:  lwz      r4, 4(r6)
  0x807a3b50:  lwz      r0, 8(r6)
  0x807a3b54:  stw      r4, 0xc(r1)
  0x807a3b58:  stw      r0, 0x10(r1)
  0x807a3b5c:  stw      r5, 4(r3)
  0x807a3b60:  stw      r4, 8(r3)
  0x807a3b64:  stw      r0, 0xc(r3)

// Address: 0x807a070c — ItemObj_init (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 220 bytes
/**
 * ItemObj_init
 * @addr 0x807a070c
 * @size 220 bytes
 * @frame 0 bytes
 * @calls 1 function(s)
 */
void ItemObj_init(void) {
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    /* if (cr0 !=) goto 0x807a0724 */
    /* li r4, 1 */
    /* 0x807a3dbc() */
    /* li r3, 1 */
    /* goto 0x807a0728 */
    /* li r3, 0 */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a070c: 54 00 07 39              rlwinm.  r0, r0, 0, 0x1c, 0x1c */
/* 0x807a0710: 40 82 00 14              bne      0x807a0724 */
/* 0x807a0714: 38 80 00 01              li       r4, 1 */
/* 0x807a0718: 48 00 36 a5              bl       0x807a3dbc */
/* 0x807a071c: 38 60 00 01              li       r3, 1 */
/* 0x807a0720: 48 00 00 08              b        0x807a0728 */
/* 0x807a0724: 38 60 00 00              li       r3, 0 */
/* 0x807a0728: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a072c: 7c 08 03 a6              mtlr     r0 */
/* 0x807a0730: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a0734: 4e 80 00 20              blr       */
/* 0x807a0738: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x807a073c: 3c 80 00 00              lis      r4, 0 */
/* 0x807a0740: 38 84 00 00              addi     r4, r4, 0 */
/* 0x807a0744: c0 03 00 b8              lfs      f0, 0xb8(r3) */
/* 0x807a0748: 1c 00 00 74              mulli    r0, r0, 0x74 */
/* 0x807a074c: 7c 64 02 14              add      r3, r4, r0 */
/* 0x807a0750: c0 23 00 34              lfs      f1, 0x34(r3) */
/* 0x807a0754: ec 20 00 72              fmuls    f1, f0, f1 */
/* 0x807a0758: 4e 80 00 20              blr       */
/* 0x807a075c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0760: 4d 82 00 20              beqlr     */
/* 0x807a0764: 3c 60 00 00              lis      r3, 0 */
/* 0x807a0768: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a076c: 4b f5 dd 34              b        0x806fe4a0 */
/* 0x807a0770: 4e 80 00 20              blr       */
/* 0x807a0774: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0778: 4d 82 00 20              beqlr     */
/* 0x807a077c: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a0780: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a0784: 81 8c 00 e0              lwz      r12, 0xe0(r12) */
/* 0x807a0788: 7d 89 03 a6              mtctr    r12 */
/* 0x807a078c: 4e 80 04 20              bctr      */
/* 0x807a0790: 4e 80 00 20              blr       */
/* 0x807a0794: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0798: 4d 82 00 20              beqlr     */
/* 0x807a079c: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a07a0: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a07a4: 81 8c 00 e8              lwz      r12, 0xe8(r12) */
/* 0x807a07a8: 7d 89 03 a6              mtctr    r12 */
/* 0x807a07ac: 4e 80 04 20              bctr      */
/* 0x807a07b0: 4e 80 00 20              blr       */
/* 0x807a07b4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a07b8: 4d 82 00 20              beqlr     */
/* 0x807a07bc: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a07c0: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a07c4: 81 8c 00 e4              lwz      r12, 0xe4(r12) */
/* 0x807a07c8: 7d 89 03 a6              mtctr    r12 */
/* 0x807a07cc: 4e 80 04 20              bctr      */
/* 0x807a07d0: 4e 80 00 20              blr       */
/* 0x807a07d4: 48 00 37 c0              b        0x807a3f94 */
/* 0x807a07d8: 38 03 00 80              addi     r0, r3, 0x80 */
/* 0x807a07dc: 90 03 00 98              stw      r0, 0x98(r3) */
/* 0x807a07e0: 4e 80 00 20              blr       */
/* 0x807a07e4: 80 83 00 98              lwz      r4, 0x98(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_init
; Demangled: ItemObj_init
; Address: 0x807a070c  (.text+0x28de70)
; Size: 220 bytes

  0x807a070c:  rlwinm.  r0, r0, 0, 0x1c, 0x1c
  0x807a0710:  bne      0x807a0724
  0x807a0714:  li       r4, 1
  0x807a0718:  bl       0x807a3dbc
  0x807a071c:  li       r3, 1
  0x807a0720:  b        0x807a0728
  0x807a0724:  li       r3, 0
  0x807a0728:  lwz      r0, 0x14(r1)
  0x807a072c:  mtlr     r0
  0x807a0730:  addi     r1, r1, 0x10
  0x807a0734:  blr      
  0x807a0738:  lwz      r0, 4(r3)
  0x807a073c:  lis      r4, 0
  0x807a0740:  addi     r4, r4, 0
  0x807a0744:  lfs      f0, 0xb8(r3)
  0x807a0748:  mulli    r0, r0, 0x74
  0x807a074c:  add      r3, r4, r0
  0x807a0750:  lfs      f1, 0x34(r3)
  0x807a0754:  fmuls    f1, f0, f1
  0x807a0758:  blr      
  0x807a075c:  cmpwi    r4, 0
  0x807a0760:  beqlr    
  0x807a0764:  lis      r3, 0
  0x807a0768:  lwz      r3, 0(r3)
  0x807a076c:  b        0x806fe4a0
  0x807a0770:  blr      
  0x807a0774:  cmpwi    r4, 0
  0x807a0778:  beqlr    
  0x807a077c:  lwz      r3, 0x180(r3)
  0x807a0780:  lwz      r12, 0(r3)
  0x807a0784:  lwz      r12, 0xe0(r12)
  0x807a0788:  mtctr    r12
  0x807a078c:  bctr     
  0x807a0790:  blr      
  0x807a0794:  cmpwi    r4, 0
  0x807a0798:  beqlr    
  0x807a079c:  lwz      r3, 0x180(r3)
  0x807a07a0:  lwz      r12, 0(r3)
  0x807a07a4:  lwz      r12, 0xe8(r12)
  0x807a07a8:  mtctr    r12
  0x807a07ac:  bctr     
  0x807a07b0:  blr      
  0x807a07b4:  cmpwi    r4, 0
  0x807a07b8:  beqlr    
  0x807a07bc:  lwz      r3, 0x180(r3)
  0x807a07c0:  lwz      r12, 0(r3)
  0x807a07c4:  lwz      r12, 0xe4(r12)
  0x807a07c8:  mtctr    r12
  0x807a07cc:  bctr     
  0x807a07d0:  blr      
  0x807a07d4:  b        0x807a3f94
  0x807a07d8:  addi     r0, r3, 0x80
  0x807a07dc:  stw      r0, 0x98(r3)
  0x807a07e0:  blr      
  0x807a07e4:  lwz      r4, 0x98(r3)

// Address: 0x807a0a38 — ItemObj_spawn (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 164 bytes
/**
 * ItemObj_spawn
 * @addr 0x807a0a38
 * @size 164 bytes
 * @frame 0 bytes
 * @calls 7 function(s)
 */
void ItemObj_spawn(void) {
    /* r4 = r3+0x78 */
    /* rlwinm. r0, r4, 0, 8, 0xa */
    /* if (cr0 ==) goto 0x807a0ab4 */
    /* r4 = r31 */
    /* li r3, 0 */
    /* li r5, 1 */
    /* 0x8079a1bc() */
    /* r4 = r31 */
    /* li r5, 0 */
    /* 0x8079a1bc() */
    /* r0 = r31+0x7c */
    /* r3 = r31 */
    /* ori r0, r0, 0x80 */
    /* r31+0x7c = r0 */
    /* 0x8079ab3c() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 0xa, 0xa */
    /* if (cr0 ==) goto 0x807a0a88 */
    /* r3 = r31 */
    /* 0x807a41d4() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 9, 9 */
    /* if (cr0 ==) goto 0x807a0a9c */
    /* r3 = r31 */
    /* 0x807a47c0() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 8, 8 */
    /* if (cr0 ==) goto 0x807a0ba4 */
    /* r3 = r31 */
    /* 0x807a47c8() */
    /* goto 0x807a0ba4 */
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */
    /* if (cr0 ==) goto 0x807a0b2c */
    /* r4 = r31 */
    /* li r3, 0 */
    /* li r5, 1 */
    /* 0x80798d08() */
    /* cmpwi r31, 0 */
    /* if (cr0 ==) goto 0x807a0afc */
    /* r0 = r31+0x78 */
    /* r12, 0  (load upper immediate) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a0a38: 80 83 00 78              lwz      r4, 0x78(r3) */
/* 0x807a0a3c: 54 80 02 15              rlwinm.  r0, r4, 0, 8, 0xa */
/* 0x807a0a40: 41 82 00 74              beq      0x807a0ab4 */
/* 0x807a0a44: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0a48: 38 60 00 00              li       r3, 0 */
/* 0x807a0a4c: 38 a0 00 01              li       r5, 1 */
/* 0x807a0a50: 4b ff 97 6d              bl       0x8079a1bc */
/* 0x807a0a54: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0a58: 38 a0 00 00              li       r5, 0 */
/* 0x807a0a5c: 4b ff 97 61              bl       0x8079a1bc */
/* 0x807a0a60: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a0a64: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a68: 60 00 00 80              ori      r0, r0, 0x80 */
/* 0x807a0a6c: 90 1f 00 7c              stw      r0, 0x7c(r31) */
/* 0x807a0a70: 4b ff a0 cd              bl       0x8079ab3c */
/* 0x807a0a74: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0a78: 54 00 02 95              rlwinm.  r0, r0, 0, 0xa, 0xa */
/* 0x807a0a7c: 41 82 00 0c              beq      0x807a0a88 */
/* 0x807a0a80: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a84: 48 00 37 51              bl       0x807a41d4 */
/* 0x807a0a88: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0a8c: 54 00 02 53              rlwinm.  r0, r0, 0, 9, 9 */
/* 0x807a0a90: 41 82 00 0c              beq      0x807a0a9c */
/* 0x807a0a94: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a98: 48 00 3d 29              bl       0x807a47c0 */
/* 0x807a0a9c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0aa0: 54 00 02 11              rlwinm.  r0, r0, 0, 8, 8 */
/* 0x807a0aa4: 41 82 01 00              beq      0x807a0ba4 */
/* 0x807a0aa8: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0aac: 48 00 3d 1d              bl       0x807a47c8 */
/* 0x807a0ab0: 48 00 00 f4              b        0x807a0ba4 */
/* 0x807a0ab4: 54 80 04 21              rlwinm.  r0, r4, 0, 0x10, 0x10 */
/* 0x807a0ab8: 41 82 00 74              beq      0x807a0b2c */
/* 0x807a0abc: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0ac0: 38 60 00 00              li       r3, 0 */
/* 0x807a0ac4: 38 a0 00 01              li       r5, 1 */
/* 0x807a0ac8: 4b ff 82 41              bl       0x80798d08 */
/* 0x807a0acc: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807a0ad0: 41 82 00 2c              beq      0x807a0afc */
/* 0x807a0ad4: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0ad8: 3d 80 00 00              lis      r12, 0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_spawn
; Demangled: ItemObj_spawn
; Address: 0x807a0a38  (.text+0x28e19c)
; Size: 164 bytes

  0x807a0a38:  lwz      r4, 0x78(r3)
  0x807a0a3c:  rlwinm.  r0, r4, 0, 8, 0xa
  0x807a0a40:  beq      0x807a0ab4
  0x807a0a44:  mr       r4, r31
  0x807a0a48:  li       r3, 0
  0x807a0a4c:  li       r5, 1
  0x807a0a50:  bl       0x8079a1bc
  0x807a0a54:  mr       r4, r31
  0x807a0a58:  li       r5, 0
  0x807a0a5c:  bl       0x8079a1bc
  0x807a0a60:  lwz      r0, 0x7c(r31)
  0x807a0a64:  mr       r3, r31
  0x807a0a68:  ori      r0, r0, 0x80
  0x807a0a6c:  stw      r0, 0x7c(r31)
  0x807a0a70:  bl       0x8079ab3c
  0x807a0a74:  lwz      r0, 0x78(r31)
  0x807a0a78:  rlwinm.  r0, r0, 0, 0xa, 0xa
  0x807a0a7c:  beq      0x807a0a88
  0x807a0a80:  mr       r3, r31
  0x807a0a84:  bl       0x807a41d4
  0x807a0a88:  lwz      r0, 0x78(r31)
  0x807a0a8c:  rlwinm.  r0, r0, 0, 9, 9
  0x807a0a90:  beq      0x807a0a9c
  0x807a0a94:  mr       r3, r31
  0x807a0a98:  bl       0x807a47c0
  0x807a0a9c:  lwz      r0, 0x78(r31)
  0x807a0aa0:  rlwinm.  r0, r0, 0, 8, 8
  0x807a0aa4:  beq      0x807a0ba4
  0x807a0aa8:  mr       r3, r31
  0x807a0aac:  bl       0x807a47c8
  0x807a0ab0:  b        0x807a0ba4
  0x807a0ab4:  rlwinm.  r0, r4, 0, 0x10, 0x10
  0x807a0ab8:  beq      0x807a0b2c
  0x807a0abc:  mr       r4, r31
  0x807a0ac0:  li       r3, 0
  0x807a0ac4:  li       r5, 1
  0x807a0ac8:  bl       0x80798d08
  0x807a0acc:  cmpwi    r31, 0
  0x807a0ad0:  beq      0x807a0afc
  0x807a0ad4:  lwz      r0, 0x78(r31)
  0x807a0ad8:  lis      r12, 0
