// sub_805a5a60
// Address: 0x805a5a60
// Size: 1252 bytes (86 instructions)
// Stack frame: 0x210
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a5a60 */ stwu r1, -0x210(r1)
    /* 0x805a5a64 */ mflr r0
    /* 0x805a5a68 */ stw r0, 0x214(r1)
    /* 0x805a5a6c */ addi r11, r1, 0x210
    /* 0x805a5a70 */ bl 0x80555bf4
    /* 0x805a5a74 */ lwz r7, 4(r3)
    /* 0x805a5a78 */ lis r31, 0
    /* 0x805a5a7c */ lwz r25, 0x2c(r3)
    /* 0x805a5a80 */ mr r26, r3
    /* 0x805a5a84 */ lwz r30, 0x90(r7)
    /* 0x805a5a88 */ mr r27, r4
    /* 0x805a5a8c */ mr r28, r5
    /* 0x805a5a90 */ mr r29, r6
    /* 0x805a5a94 */ mr r3, r25
    /* 0x805a5a98 */ addi r31, r31, 0
    /* 0x805a5a9c */ bl 0x805907bc
    /* 0x805a5aa0 */ lfs f0, 0x80(r3)
    /* 0x805a5aa4 */ stfs f0, 0x80(r1)
    /* 0x805a5aa8 */ lfs f0, 0x84(r3)
    /* 0x805a5aac */ stfs f0, 0x84(r1)
    /* 0x805a5ab0 */ lfs f0, 0x88(r3)
    /* 0x805a5ab4 */ stfs f0, 0x88(r1)
    /* 0x805a5ab8 */ lwz r3, 0(r25)
    /* 0x805a5abc */ lwz r3, 4(r3)
    /* 0x805a5ac0 */ lwz r0, 0xc(r3)
    /* 0x805a5ac4 */ rlwinm. r0, r0, 0, 0x12, 0x12
    /* 0x805a5ac8 */ beq 0x805a5ad4
    /* 0x805a5acc */ lfs f8, 4(r31)
    /* 0x805a5ad0 */ b 0x805a5ad8
    /* 0x805a5ad4 */ lfs f8, 0x2c(r31)
    /* 0x805a5ad8 */ lfs f0, 0x80(r1)
    /* 0x805a5adc */ lis r8, 0
    /* 0x805a5ae0 */ lfs f7, 0x54(r26)
    /* 0x805a5ae4 */ addi r3, r1, 0x8c
    /* 0x805a5ae8 */ lfs f1, 0x84(r1)
    /* 0x805a5aec */ addi r7, r8, 0
    /* 0x805a5af0 */ fsubs f6, f0, f7
    /* 0x805a5af4 */ lfs f5, 0x58(r26)
    /* 0x805a5af8 */ lfs f0, 0x88(r1)
    /* 0x805a5afc */ mr r4, r3
    /* 0x805a5b00 */ lfs f4, 0x5c(r26)
    /* 0x805a5b04 */ fsubs f3, f1, f5
    /* 0x805a5b08 */ fsubs f2, f0, f4
    /* 0x805a5b0c */ addi r5, r26, 0x54
    /* 0x805a5b10 */ fmuls f0, f3, f8
    /* 0x805a5b14 */ li r6, 1
    /* 0x805a5b18 */ fmuls f1, f6, f8
    /* 0x805a5b1c */ fmuls f3, f2, f8
    /* 0x805a5b20 */ stfs f1, 8(r1)
    /* 0x805a5b24 */ fadds f2, f7, f1
    /* 0x805a5b28 */ fadds f1, f5, f0
    /* 0x805a5b2c */ stfs f0, 0xc(r1)
    /* 0x805a5b30 */ fadds f0, f4, f3
    /* 0x805a5b34 */ stfs f2, 0x54(r26)
    /* 0x805a5b38 */ stfs f1, 0x58(r26)
    /* 0x805a5b3c */ stfs f0, 0x5c(r26)
    /* 0x805a5b40 */ lfs f2, 0(r8)
    /* 0x805a5b44 */ lfs f1, 4(r7)
    /* 0x805a5b48 */ lfs f0, 8(r7)
    /* 0x805a5b4c */ stfs f3, 0x10(r1)
    /* 0x805a5b50 */ stfs f2, 0x8c(r1)
    /* 0x805a5b54 */ stfs f1, 0x90(r1)
    /* 0x805a5b58 */ stfs f0, 0x94(r1)
    /* 0x805a5b5c */ bl 0x805aa328
    /* 0x805a5b60 */ lfs f10, 0x54(r26)
    /* 0x805a5b64 */ lis r5, 0
    /* 0x805a5b68 */ stfs f10, 0x80(r1)
    /* 0x805a5b6c */ lwzu r4, 0(r5)
    /* 0x805a5b70 */ lfs f9, 0x58(r26)
    /* 0x805a5b74 */ stfs f9, 0x84(r1)
    /* 0x805a5b78 */ lwz r3, 4(r5)
    /* 0x805a5b7c */ lfs f8, 0x5c(r26)
    /* 0x805a5b80 */ lwz r0, 8(r5)
    /* 0x805a5b84 */ stfs f8, 0x88(r1)
    /* 0x805a5b88 */ lfs f0, 0x30(r31)
    /* 0x805a5b8c */ stw r4, 0x68(r1)
    /* 0x805a5b90 */ stw r3, 0x6c(r1)
    /* 0x805a5b94 */ stw r0, 0x70(r1)
    /* 0x805a5b98 */ lfs f2, 0(r29)
    /* 0x805a5b9c */ lfs f1, 4(r29)
    /* 0x805a5ba0 */ lfs f3, 8(r29)
    /* 0x805a5ba4 */ fmuls f2, f2, f2
    /* 0x805a5ba8 */ fmuls f1, f1, f1
    /* 0x805a5bac */ fmuls f3, f3, f3
    /* 0x805a5bb0 */ fadds f1, f2, f1
    /* 0x805a5bb4 */ fadds f1, f3, f1
