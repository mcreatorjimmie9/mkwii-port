// sub_805a2efc
// Address: 0x805a2efc
// Size: 92 bytes (23 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2efc */ stwu r1, -0x20(r1)
    /* 0x805a2f00 */ mflr r0
    /* 0x805a2f04 */ lis r4, 0
    /* 0x805a2f08 */ addi r6, r3, 0xa0
    /* 0x805a2f0c */ stw r0, 0x24(r1)
    /* 0x805a2f10 */ addi r5, r1, 8
    /* 0x805a2f14 */ lfs f3, 0(r4)
    /* 0x805a2f18 */ addi r4, r3, 0x88
    /* 0x805a2f1c */ lfs f2, 0x9c(r3)
    /* 0x805a2f20 */ lfs f1, 0x98(r3)
    /* 0x805a2f24 */ lfs f0, 0x94(r3)
    /* 0x805a2f28 */ fmuls f2, f3, f2
    /* 0x805a2f2c */ fmuls f1, f3, f1
    /* 0x805a2f30 */ addi r3, r3, 0xc
    /* 0x805a2f34 */ fmuls f0, f3, f0
    /* 0x805a2f38 */ stfs f2, 0x10(r1)
    /* 0x805a2f3c */ stfs f0, 8(r1)
    /* 0x805a2f40 */ stfs f1, 0xc(r1)
    /* 0x805a2f44 */ bl 0x80555bf4
    /* 0x805a2f48 */ lwz r0, 0x24(r1)
    /* 0x805a2f4c */ mtlr r0
    /* 0x805a2f50 */ addi r1, r1, 0x20
    /* 0x805a2f54 */ blr
