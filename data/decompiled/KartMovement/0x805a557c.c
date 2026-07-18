// sub_805a557c
// Address: 0x805a557c
// Size: 404 bytes (24 instructions)
// Stack frame: 0x30
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a557c */ stwu r1, -0x30(r1)
    /* 0x805a5580 */ mflr r0
    /* 0x805a5584 */ stw r0, 0x34(r1)
    /* 0x805a5588 */ stw r31, 0x2c(r1)
    /* 0x805a558c */ lis r31, 0
    /* 0x805a5590 */ addi r31, r31, 0
    /* 0x805a5594 */ stw r30, 0x28(r1)
    /* 0x805a5598 */ stw r29, 0x24(r1)
    /* 0x805a559c */ mr r29, r3
    /* 0x805a55a0 */ lwz r12, 0(r3)
    /* 0x805a55a4 */ lwz r12, 0x14(r12)
    /* 0x805a55a8 */ mtctr r12
    /* 0x805a55ac */ bctrl
    /* 0x805a55b0 */ lbz r0, 0x51(r29)
    /* 0x805a55b4 */ cmpwi r0, 0
    /* 0x805a55b8 */ beq 0x805a5694
    /* 0x805a55bc */ lwz r5, 0(r3)
    /* 0x805a55c0 */ lhz r4, 6(r5)
    /* 0x805a55c4 */ cmpwi r4, 0
    /* 0x805a55c8 */ beq 0x805a5694
    /* 0x805a55cc */ lfs f0, 0x24(r5)
    /* 0x805a55d0 */ lfs f6, 0x28(r5)
    /* 0x805a55d4 */ fmr f5, f0
    /* 0x805a55d8 */ lfs f4, 4(r31)
