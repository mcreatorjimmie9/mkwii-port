// sub_805a5390
// Address: 0x805a5390
// Size: 64 bytes (16 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a5390 */ stwu r1, -0x10(r1)
    /* 0x805a5394 */ mflr r0
    /* 0x805a5398 */ cmpwi r3, 0
    /* 0x805a539c */ stw r0, 0x14(r1)
    /* 0x805a53a0 */ stw r31, 0xc(r1)
    /* 0x805a53a4 */ mr r31, r3
    /* 0x805a53a8 */ beq 0x805a53b8
    /* 0x805a53ac */ cmpwi r4, 0
    /* 0x805a53b0 */ ble 0x805a53b8
    /* 0x805a53b4 */ bl 0x80555bf4
    /* 0x805a53b8 */ mr r3, r31
    /* 0x805a53bc */ lwz r31, 0xc(r1)
    /* 0x805a53c0 */ lwz r0, 0x14(r1)
    /* 0x805a53c4 */ mtlr r0
    /* 0x805a53c8 */ addi r1, r1, 0x10
    /* 0x805a53cc */ blr
