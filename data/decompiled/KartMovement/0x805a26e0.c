// sub_805a26e0
// Address: 0x805a26e0
// Size: 80 bytes (20 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a26e0 */ stwu r1, -0x10(r1)
    /* 0x805a26e4 */ mflr r0
    /* 0x805a26e8 */ lis r6, 0
    /* 0x805a26ec */ mr r7, r4
    /* 0x805a26f0 */ stw r0, 0x14(r1)
    /* 0x805a26f4 */ addi r6, r6, 0
    /* 0x805a26f8 */ li r0, 0
    /* 0x805a26fc */ mr r4, r5
    /* 0x805a2700 */ stw r31, 0xc(r1)
    /* 0x805a2704 */ mr r31, r3
    /* 0x805a2708 */ stw r6, 0(r3)
    /* 0x805a270c */ stw r7, 4(r3)
    /* 0x805a2710 */ stw r0, 0x70(r3)
    /* 0x805a2714 */ bl 0x805a2770
    /* 0x805a2718 */ mr r3, r31
    /* 0x805a271c */ lwz r31, 0xc(r1)
    /* 0x805a2720 */ lwz r0, 0x14(r1)
    /* 0x805a2724 */ mtlr r0
    /* 0x805a2728 */ addi r1, r1, 0x10
    /* 0x805a272c */ blr
