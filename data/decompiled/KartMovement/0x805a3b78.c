// sub_805a3b78
// Address: 0x805a3b78
// Size: 152 bytes (38 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a3b78 */ stwu r1, -0x10(r1)
    /* 0x805a3b7c */ mflr r0
    /* 0x805a3b80 */ cmpwi r3, 0
    /* 0x805a3b84 */ stw r0, 0x14(r1)
    /* 0x805a3b88 */ stw r31, 0xc(r1)
    /* 0x805a3b8c */ mr r31, r4
    /* 0x805a3b90 */ stw r30, 8(r1)
    /* 0x805a3b94 */ mr r30, r3
    /* 0x805a3b98 */ beq 0x805a3bf4
    /* 0x805a3b9c */ lis r5, 0
    /* 0x805a3ba0 */ lis r4, 0
    /* 0x805a3ba4 */ addi r5, r5, 0
    /* 0x805a3ba8 */ stw r5, 0(r3)
    /* 0x805a3bac */ lwz r3, 0(r4)
    /* 0x805a3bb0 */ cmpwi r3, 0
    /* 0x805a3bb4 */ beq 0x805a3bd8
    /* 0x805a3bb8 */ li r0, 0
    /* 0x805a3bbc */ stw r0, 0(r4)
    /* 0x805a3bc0 */ beq 0x805a3bd8
    /* 0x805a3bc4 */ lwz r12, 0(r3)
    /* 0x805a3bc8 */ li r4, 1
    /* 0x805a3bcc */ lwz r12, 8(r12)
    /* 0x805a3bd0 */ mtctr r12
    /* 0x805a3bd4 */ bctrl
    /* 0x805a3bd8 */ mr r3, r30
    /* 0x805a3bdc */ li r4, 0
    /* 0x805a3be0 */ bl 0x80555bf4
    /* 0x805a3be4 */ cmpwi r31, 0
    /* 0x805a3be8 */ ble 0x805a3bf4
    /* 0x805a3bec */ mr r3, r30
    /* 0x805a3bf0 */ bl 0x80555bf4
    /* 0x805a3bf4 */ mr r3, r30
    /* 0x805a3bf8 */ lwz r31, 0xc(r1)
    /* 0x805a3bfc */ lwz r30, 8(r1)
    /* 0x805a3c00 */ lwz r0, 0x14(r1)
    /* 0x805a3c04 */ mtlr r0
    /* 0x805a3c08 */ addi r1, r1, 0x10
    /* 0x805a3c0c */ blr
