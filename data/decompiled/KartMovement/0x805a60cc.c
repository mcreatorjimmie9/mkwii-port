// sub_805a60cc
// Address: 0x805a60cc
// Size: 76 bytes (19 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a60cc */ stwu r1, -0x10(r1)
    /* 0x805a60d0 */ mflr r0
    /* 0x805a60d4 */ stw r0, 0x14(r1)
    /* 0x805a60d8 */ stw r31, 0xc(r1)
    /* 0x805a60dc */ mr r31, r3
    /* 0x805a60e0 */ lwz r12, 0(r3)
    /* 0x805a60e4 */ lwz r12, 0x14(r12)
    /* 0x805a60e8 */ mtctr r12
    /* 0x805a60ec */ bctrl
    /* 0x805a60f0 */ cmpwi r3, 0
    /* 0x805a60f4 */ beq 0x805a6104
    /* 0x805a60f8 */ lwz r3, 0(r3)
    /* 0x805a60fc */ lfs f0, 0x24(r3)
    /* 0x805a6100 */ stfs f0, 0x34(r31)
    /* 0x805a6104 */ lwz r0, 0x14(r1)
    /* 0x805a6108 */ lwz r31, 0xc(r1)
    /* 0x805a610c */ mtlr r0
    /* 0x805a6110 */ addi r1, r1, 0x10
    /* 0x805a6114 */ blr
