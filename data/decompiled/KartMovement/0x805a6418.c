// sub_805a6418
// Address: 0x805a6418
// Size: 128 bytes (18 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a6418 */ stwu r1, -0x10(r1)
    /* 0x805a641c */ mflr r0
    /* 0x805a6420 */ stw r0, 0x14(r1)
    /* 0x805a6424 */ stw r31, 0xc(r1)
    /* 0x805a6428 */ li r31, 0
    /* 0x805a642c */ stw r30, 8(r1)
    /* 0x805a6430 */ mr r30, r3
    /* 0x805a6434 */ lwz r12, 0(r3)
    /* 0x805a6438 */ lwz r12, 0x14(r12)
    /* 0x805a643c */ mtctr r12
    /* 0x805a6440 */ bctrl
    /* 0x805a6444 */ lis r4, 0
    /* 0x805a6448 */ lwz r3, 0(r3)
    /* 0x805a644c */ lfs f1, 0xc(r30)
    /* 0x805a6450 */ lfs f0, 0(r4)
    /* 0x805a6454 */ lfs f2, 0x44(r3)
    /* 0x805a6458 */ fadds f0, f1, f0
    /* 0x805a645c */ stfs f0, 0xc(r30)
