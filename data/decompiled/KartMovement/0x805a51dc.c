// sub_805a51dc
// Address: 0x805a51dc
// Size: 436 bytes (19 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a51dc */ stwu r1, -0x10(r1)
    /* 0x805a51e0 */ mflr r0
    /* 0x805a51e4 */ stw r0, 0x14(r1)
    /* 0x805a51e8 */ stw r31, 0xc(r1)
    /* 0x805a51ec */ mr r31, r3
    /* 0x805a51f0 */ bl 0x805a526c
    /* 0x805a51f4 */ addi r3, r31, 0x1c
    /* 0x805a51f8 */ bl 0x805a526c
    /* 0x805a51fc */ lwz r0, 0x14(r1)
    /* 0x805a5200 */ lwz r31, 0xc(r1)
    /* 0x805a5204 */ mtlr r0
    /* 0x805a5208 */ addi r1, r1, 0x10
    /* 0x805a520c */ blr
    /* 0x805a5210 */ lfs f2, 0(r4)
    /* 0x805a5214 */ lfs f0, 8(r3)
    /* 0x805a5218 */ fmuls f1, f2, f1
    /* 0x805a521c */ stw r4, 0x14(r3)
    /* 0x805a5220 */ fadds f0, f0, f1
    /* 0x805a5224 */ stfs f0, 8(r3)
