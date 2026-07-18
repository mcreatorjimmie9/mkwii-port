// sub_805a3c10
// Address: 0x805a3c10
// Size: 132 bytes (33 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a3c10 */ stwu r1, -0x10(r1)
    /* 0x805a3c14 */ mflr r0
    /* 0x805a3c18 */ lis r3, 0
    /* 0x805a3c1c */ stw r0, 0x14(r1)
    /* 0x805a3c20 */ lwz r0, 0(r3)
    /* 0x805a3c24 */ cmpwi r0, 0
    /* 0x805a3c28 */ bne 0x805a3c48
    /* 0x805a3c2c */ li r3, 0x38
    /* 0x805a3c30 */ bl 0x80555bf4
    /* 0x805a3c34 */ cmpwi r3, 0
    /* 0x805a3c38 */ beq 0x805a3c40
    /* 0x805a3c3c */ bl 0x805a3c94
    /* 0x805a3c40 */ lis r4, 0
    /* 0x805a3c44 */ stw r3, 0(r4)
    /* 0x805a3c48 */ lwz r0, 0x14(r1)
    /* 0x805a3c4c */ lis r3, 0
    /* 0x805a3c50 */ lwz r3, 0(r3)
    /* 0x805a3c54 */ mtlr r0
    /* 0x805a3c58 */ addi r1, r1, 0x10
    /* 0x805a3c5c */ blr
    /* 0x805a3c60 */ lis r4, 0
    /* 0x805a3c64 */ lwz r3, 0(r4)
    /* 0x805a3c68 */ cmpwi r3, 0
    /* 0x805a3c6c */ beqlr
    /* 0x805a3c70 */ li r0, 0
    /* 0x805a3c74 */ stw r0, 0(r4)
    /* 0x805a3c78 */ beqlr
    /* 0x805a3c7c */ lwz r12, 0(r3)
    /* 0x805a3c80 */ li r4, 1
    /* 0x805a3c84 */ lwz r12, 8(r12)
    /* 0x805a3c88 */ mtctr r12
    /* 0x805a3c8c */ bctr
    /* 0x805a3c90 */ blr
