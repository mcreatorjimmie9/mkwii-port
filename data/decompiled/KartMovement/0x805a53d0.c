// sub_805a53d0
// Address: 0x805a53d0
// Size: 96 bytes (24 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a53d0 */ stwu r1, -0x10(r1)
    /* 0x805a53d4 */ mflr r0
    /* 0x805a53d8 */ cmpwi r3, 0
    /* 0x805a53dc */ stw r0, 0x14(r1)
    /* 0x805a53e0 */ stw r31, 0xc(r1)
    /* 0x805a53e4 */ mr r31, r3
    /* 0x805a53e8 */ beq 0x805a53f8
    /* 0x805a53ec */ cmpwi r4, 0
    /* 0x805a53f0 */ ble 0x805a53f8
    /* 0x805a53f4 */ bl 0x80555bf4
    /* 0x805a53f8 */ mr r3, r31
    /* 0x805a53fc */ lwz r31, 0xc(r1)
    /* 0x805a5400 */ lwz r0, 0x14(r1)
    /* 0x805a5404 */ mtlr r0
    /* 0x805a5408 */ addi r1, r1, 0x10
    /* 0x805a540c */ blr
    /* 0x805a5410 */ addi r3, r3, -0x88
    /* 0x805a5414 */ b 0x805a47a8
    /* 0x805a5418 */ addi r3, r3, -0x88
    /* 0x805a541c */ b 0x8059d9fc
    /* 0x805a5420 */ addi r3, r3, -0x88
    /* 0x805a5424 */ b 0x8059d860
    /* 0x805a5428 */ addi r3, r3, -0x88
    /* 0x805a542c */ b 0x805a5390
