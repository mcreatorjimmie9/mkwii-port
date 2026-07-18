// sub_805a6174
// Address: 0x805a6174
// Size: 188 bytes (47 instructions)
// Stack frame: 0x40
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a6174 */ stwu r1, -0x40(r1)
    /* 0x805a6178 */ mflr r0
    /* 0x805a617c */ stw r0, 0x44(r1)
    /* 0x805a6180 */ stw r31, 0x3c(r1)
    /* 0x805a6184 */ mr r31, r3
    /* 0x805a6188 */ lwz r12, 0(r3)
    /* 0x805a618c */ lwz r12, 0x14(r12)
    /* 0x805a6190 */ mtctr r12
    /* 0x805a6194 */ bctrl
    /* 0x805a6198 */ lwz r6, 0(r3)
    /* 0x805a619c */ addi r4, r1, 0x14
    /* 0x805a61a0 */ addi r5, r1, 0x20
    /* 0x805a61a4 */ lfs f0, 0x34(r6)
    /* 0x805a61a8 */ lfs f1, 0x30(r6)
    /* 0x805a61ac */ lfs f2, 0x2c(r6)
    /* 0x805a61b0 */ stfs f2, 0x20(r1)
    /* 0x805a61b4 */ stfs f1, 0x24(r1)
    /* 0x805a61b8 */ stfs f0, 0x28(r1)
    /* 0x805a61bc */ lwz r6, 0(r3)
    /* 0x805a61c0 */ addi r3, r1, 8
    /* 0x805a61c4 */ lfs f0, 0x40(r6)
    /* 0x805a61c8 */ lfs f1, 0x3c(r6)
    /* 0x805a61cc */ lfs f2, 0x38(r6)
    /* 0x805a61d0 */ stfs f2, 0x14(r1)
    /* 0x805a61d4 */ stfs f1, 0x18(r1)
    /* 0x805a61d8 */ stfs f0, 0x1c(r1)
    /* 0x805a61dc */ bl 0x80516c5c
    /* 0x805a61e0 */ lfs f1, 8(r1)
    /* 0x805a61e4 */ lfs f0, 0xc(r1)
    /* 0x805a61e8 */ fmuls f1, f1, f1
    /* 0x805a61ec */ lfs f2, 0x10(r1)
    /* 0x805a61f0 */ fmuls f0, f0, f0
    /* 0x805a61f4 */ fmuls f2, f2, f2
    /* 0x805a61f8 */ fadds f0, f1, f0
    /* 0x805a61fc */ fadds f1, f2, f0
    /* 0x805a6200 */ bl 0x80555bf4
    /* 0x805a6204 */ lis r3, 0
    /* 0x805a6208 */ stfs f1, 0x44(r31)
    /* 0x805a620c */ lfs f0, 0(r3)
    /* 0x805a6210 */ stfs f0, 0x40(r31)
    /* 0x805a6214 */ stfs f0, 0x3c(r31)
    /* 0x805a6218 */ stfs f0, 0x38(r31)
    /* 0x805a621c */ lwz r31, 0x3c(r1)
    /* 0x805a6220 */ lwz r0, 0x44(r1)
    /* 0x805a6224 */ mtlr r0
    /* 0x805a6228 */ addi r1, r1, 0x40
    /* 0x805a622c */ blr
