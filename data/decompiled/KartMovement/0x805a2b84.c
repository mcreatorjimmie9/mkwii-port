// sub_805a2b84
// Address: 0x805a2b84
// Size: 628 bytes (157 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2b84 */ stwu r1, -0x20(r1)
    /* 0x805a2b88 */ mflr r0
    /* 0x805a2b8c */ stw r0, 0x24(r1)
    /* 0x805a2b90 */ stw r31, 0x1c(r1)
    /* 0x805a2b94 */ lis r31, 0
    /* 0x805a2b98 */ addi r31, r31, 0
    /* 0x805a2b9c */ stw r30, 0x18(r1)
    /* 0x805a2ba0 */ mr r30, r4
    /* 0x805a2ba4 */ stw r29, 0x14(r1)
    /* 0x805a2ba8 */ mr r29, r3
    /* 0x805a2bac */ lhz r5, 0x6c(r3)
    /* 0x805a2bb0 */ clrlwi. r0, r5, 0x1f
    /* 0x805a2bb4 */ beq 0x805a2c5c
    /* 0x805a2bb8 */ rlwinm. r0, r5, 0, 0x1d, 0x1d
    /* 0x805a2bbc */ li r0, 0
    /* 0x805a2bc0 */ bne 0x805a2c20
    /* 0x805a2bc4 */ lwz r5, 0x70(r3)
    /* 0x805a2bc8 */ lwz r6, 0xb0(r3)
    /* 0x805a2bcc */ lha r4, 0x46(r5)
    /* 0x805a2bd0 */ mr r3, r5
    /* 0x805a2bd4 */ lha r0, 0x48(r5)
    /* 0x805a2bd8 */ slwi r4, r4, 2
    /* 0x805a2bdc */ lwz r12, 0(r5)
    /* 0x805a2be0 */ slwi r0, r0, 2
    /* 0x805a2be4 */ lfsx f1, r6, r4
    /* 0x805a2be8 */ lfsx f0, r6, r0
    /* 0x805a2bec */ lfs f2, 0x40(r5)
    /* 0x805a2bf0 */ fsubs f0, f0, f1
    /* 0x805a2bf4 */ lwz r12, 0x18(r12)
    /* 0x805a2bf8 */ fmuls f0, f0, f2
    /* 0x805a2bfc */ fadds f1, f1, f0
    /* 0x805a2c00 */ mtctr r12
    /* 0x805a2c04 */ bctrl
    /* 0x805a2c08 */ lwz r3, 0x70(r29)
    /* 0x805a2c0c */ lwz r12, 0(r3)
    /* 0x805a2c10 */ lwz r12, 0x14(r12)
    /* 0x805a2c14 */ mtctr r12
    /* 0x805a2c18 */ bctrl
    /* 0x805a2c1c */ mr r0, r3
    /* 0x805a2c20 */ cmpwi r0, 2
    /* 0x805a2c24 */ bne 0x805a2c34
    /* 0x805a2c28 */ lhz r0, 0x6c(r29)
    /* 0x805a2c2c */ ori r0, r0, 4
    /* 0x805a2c30 */ sth r0, 0x6c(r29)
    /* 0x805a2c34 */ lwz r3, 0x78(r29)
    /* 0x805a2c38 */ cmplwi r3, 0xaa
    /* 0x805a2c3c */ blt 0x805a2c54
    /* 0x805a2c40 */ lhz r0, 0x6c(r29)
    /* 0x805a2c44 */ ori r0, r0, 8
    /* 0x805a2c48 */ rlwinm r0, r0, 0, 0x10, 0x1d
    /* 0x805a2c4c */ sth r0, 0x6c(r29)
    /* 0x805a2c50 */ b 0x805a2c5c
    /* 0x805a2c54 */ addi r0, r3, 1
    /* 0x805a2c58 */ stw r0, 0x78(r29)
    /* 0x805a2c5c */ lis r3, 0
    /* 0x805a2c60 */ li r4, 2
    /* 0x805a2c64 */ lwz r3, 0(r3)
    /* 0x805a2c68 */ bl 0x80537f4c
    /* 0x805a2c6c */ cmpwi r3, 0
    /* 0x805a2c70 */ bne 0x805a2cbc
    /* 0x805a2c74 */ lhz r4, 0x80(r29)
    /* 0x805a2c78 */ lis r3, 0
    /* 0x805a2c7c */ lwz r5, 4(r29)
    /* 0x805a2c80 */ addi r0, r4, -1
    /* 0x805a2c84 */ lwz r4, 8(r29)
    /* 0x805a2c88 */ mulli r0, r0, 0xc
    /* 0x805a2c8c */ lfs f0, 0xa0(r5)
    /* 0x805a2c90 */ stfsux f0, r4, r0
    /* 0x805a2c94 */ lfs f0, 0xa4(r5)
    /* 0x805a2c98 */ stfs f0, 4(r4)
    /* 0x805a2c9c */ lfs f0, 0xa8(r5)
    /* 0x805a2ca0 */ stfs f0, 8(r4)
    /* 0x805a2ca4 */ lwz r3, 0(r3)
    /* 0x805a2ca8 */ lha r4, 0x74(r29)
    /* 0x805a2cac */ lwz r5, 8(r29)
    /* 0x805a2cb0 */ lhz r6, 0x80(r29)
    /* 0x805a2cb4 */ lfs f1, 0x84(r29)
    /* 0x805a2cb8 */ bl 0x806e35d8
    /* 0x805a2cbc */ cmpwi r30, 0
    /* 0x805a2cc0 */ bne 0x805a2d78
    /* 0x805a2cc4 */ lhz r0, 0x6c(r29)
    /* 0x805a2cc8 */ rlwinm. r0, r0, 0, 0x1e, 0x1e
    /* 0x805a2ccc */ beq 0x805a2d78
    /* 0x805a2cd0 */ lwz r3, 4(r29)
    /* 0x805a2cd4 */ lwz r4, 0x70(r29)
    /* 0x805a2cd8 */ lwz r3, 0x90(r3)
    /* 0x805a2cdc */ lfs f0, 0x18(r4)
    /* 0x805a2ce0 */ stfs f0, 0x64(r3)
    /* 0x805a2ce4 */ lfs f0, 0x130(r31)
    /* 0x805a2ce8 */ lfs f1, 0x1c(r4)
    /* 0x805a2cec */ stfs f1, 0x68(r3)
    /* 0x805a2cf0 */ lfs f1, 0x20(r4)
    /* 0x805a2cf4 */ stfs f1, 0x6c(r3)
    /* 0x805a2cf8 */ lwz r4, 4(r29)
    /* 0x805a2cfc */ lwz r3, 0x90(r4)
    /* 0x805a2d00 */ lfs f1, 0xac(r4)
    /* 0x805a2d04 */ stfs f1, 0x70(r3)
    /* 0x805a2d08 */ lfs f1, 0xb0(r4)
    /* 0x805a2d0c */ stfs f1, 0x74(r3)
    /* 0x805a2d10 */ lfs f1, 0xb4(r4)
    /* 0x805a2d14 */ stfs f1, 0x78(r3)
    /* 0x805a2d18 */ lwz r4, 4(r29)
    /* 0x805a2d1c */ lfs f2, 0xb4(r29)
    /* 0x805a2d20 */ lwz r3, 0x188(r4)
    /* 0x805a2d24 */ lfs f1, 0(r3)
    /* 0x805a2d28 */ fsubs f1, f1, f2
    /* 0x805a2d2c */ fmuls f0, f0, f1
    /* 0x805a2d30 */ fadds f2, f2, f0
    /* 0x805a2d34 */ stfs f2, 0xb4(r29)
    /* 0x805a2d38 */ lwz r29, 0x8c(r4)
    /* 0x805a2d3c */ lfs f0, 0x10(r29)
    /* 0x805a2d40 */ fcmpu cr0, f0, f2
    /* 0x805a2d44 */ beq 0x805a2d78
    /* 0x805a2d48 */ lfs f1, 0x10c(r31)
    /* 0x805a2d4c */ addi r3, r1, 0xc
    /* 0x805a2d50 */ lfs f0, 0x110(r31)
    /* 0x805a2d54 */ addi r4, r1, 8
    /* 0x805a2d58 */ fmuls f1, f2, f1
    /* 0x805a2d5c */ stfs f2, 0x10(r29)
    /* 0x805a2d60 */ fmuls f1, f0, f1
    /* 0x805a2d64 */ bl 0x80555bf4
    /* 0x805a2d68 */ lfs f1, 8(r1)
    /* 0x805a2d6c */ lfs f0, 0xc(r1)
    /* 0x805a2d70 */ fdivs f0, f1, f0
    /* 0x805a2d74 */ stfs f0, 0x14(r29)
    /* 0x805a2d78 */ lwz r0, 0x24(r1)
    /* 0x805a2d7c */ lwz r31, 0x1c(r1)
    /* 0x805a2d80 */ lwz r30, 0x18(r1)
    /* 0x805a2d84 */ lwz r29, 0x14(r1)
    /* 0x805a2d88 */ mtlr r0
    /* 0x805a2d8c */ addi r1, r1, 0x20
    /* 0x805a2d90 */ blr
    /* 0x805a2d94 */ mulli r0, r4, 0xc
    /* 0x805a2d98 */ lwz r3, 0xac(r3)
    /* 0x805a2d9c */ lfs f2, 0(r5)
    /* 0x805a2da0 */ lfs f1, 4(r5)
    /* 0x805a2da4 */ stfsux f2, r3, r0
    /* 0x805a2da8 */ lfs f0, 8(r5)
    /* 0x805a2dac */ stfs f1, 4(r3)
    /* 0x805a2db0 */ stfs f0, 8(r3)
    /* 0x805a2db4 */ blr
    /* 0x805a2db8 */ lwz r3, 0xb0(r3)
    /* 0x805a2dbc */ slwi r0, r4, 2
    /* 0x805a2dc0 */ stfsx f1, r3, r0
    /* 0x805a2dc4 */ blr
    /* 0x805a2dc8 */ mulli r0, r4, 0xc
    /* 0x805a2dcc */ lwz r3, 0xac(r3)
    /* 0x805a2dd0 */ add r3, r3, r0
    /* 0x805a2dd4 */ blr
    /* 0x805a2dd8 */ mulli r0, r4, 0xc
    /* 0x805a2ddc */ lwz r3, 8(r3)
    /* 0x805a2de0 */ add r3, r3, r0
    /* 0x805a2de4 */ blr
    /* 0x805a2de8 */ lwz r3, 0xb0(r3)
    /* 0x805a2dec */ slwi r0, r4, 2
    /* 0x805a2df0 */ lfsx f1, r3, r0
    /* 0x805a2df4 */ blr
