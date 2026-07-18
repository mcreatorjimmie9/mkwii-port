// sub_805a47a8
// Address: 0x805a47a8
// Size: 144 bytes (36 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a47a8 */ stwu r1, -0x10(r1)
    /* 0x805a47ac */ mflr r0
    /* 0x805a47b0 */ cmpwi r3, 0
    /* 0x805a47b4 */ stw r0, 0x14(r1)
    /* 0x805a47b8 */ stw r31, 0xc(r1)
    /* 0x805a47bc */ mr r31, r3
    /* 0x805a47c0 */ beq 0x805a47d0
    /* 0x805a47c4 */ cmpwi r4, 0
    /* 0x805a47c8 */ ble 0x805a47d0
    /* 0x805a47cc */ bl 0x80555bf4
    /* 0x805a47d0 */ mr r3, r31
    /* 0x805a47d4 */ lwz r31, 0xc(r1)
    /* 0x805a47d8 */ lwz r0, 0x14(r1)
    /* 0x805a47dc */ mtlr r0
    /* 0x805a47e0 */ addi r1, r1, 0x10
    /* 0x805a47e4 */ blr
    /* 0x805a47e8 */ lwz r0, 0x20(r3)
    /* 0x805a47ec */ li r6, 0
    /* 0x805a47f0 */ li r5, 0
    /* 0x805a47f4 */ mtctr r0
    /* 0x805a47f8 */ cmpwi r0, 0
    /* 0x805a47fc */ ble 0x805a4824
    /* 0x805a4800 */ lwz r4, 0x18(r3)
    /* 0x805a4804 */ lwzx r4, r4, r5
    /* 0x805a4808 */ lwz r4, 0x198(r4)
    /* 0x805a480c */ lhz r0, 0x6c(r4)
    /* 0x805a4810 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
    /* 0x805a4814 */ beq 0x805a481c
    /* 0x805a4818 */ addi r6, r6, 1
    /* 0x805a481c */ addi r5, r5, 4
    /* 0x805a4820 */ bdnz 0x805a4800
    /* 0x805a4824 */ lwz r0, 0x20(r3)
    /* 0x805a4828 */ subf r0, r6, r0
    /* 0x805a482c */ cntlzw r0, r0
    /* 0x805a4830 */ srwi r3, r0, 5
    /* 0x805a4834 */ blr
