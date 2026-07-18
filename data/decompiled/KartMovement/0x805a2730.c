// sub_805a2730
// Address: 0x805a2730
// Size: 64 bytes (16 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2730 */ stwu r1, -0x10(r1)
    /* 0x805a2734 */ mflr r0
    /* 0x805a2738 */ cmpwi r3, 0
    /* 0x805a273c */ stw r0, 0x14(r1)
    /* 0x805a2740 */ stw r31, 0xc(r1)
    /* 0x805a2744 */ mr r31, r3
    /* 0x805a2748 */ beq 0x805a2758
    /* 0x805a274c */ cmpwi r4, 0
    /* 0x805a2750 */ ble 0x805a2758
    /* 0x805a2754 */ bl 0x80555bf4
    /* 0x805a2758 */ mr r3, r31
    /* 0x805a275c */ lwz r31, 0xc(r1)
    /* 0x805a2760 */ lwz r0, 0x14(r1)
    /* 0x805a2764 */ mtlr r0
    /* 0x805a2768 */ addi r1, r1, 0x10
    /* 0x805a276c */ blr
