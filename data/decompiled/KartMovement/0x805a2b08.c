// sub_805a2b08
// Address: 0x805a2b08
// Size: 124 bytes (31 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2b08 */ stwu r1, -0x10(r1)
    /* 0x805a2b0c */ mflr r0
    /* 0x805a2b10 */ li r4, 0
    /* 0x805a2b14 */ stw r0, 0x14(r1)
    /* 0x805a2b18 */ stw r31, 0xc(r1)
    /* 0x805a2b1c */ lis r31, 0
    /* 0x805a2b20 */ addi r31, r31, 0
    /* 0x805a2b24 */ stw r30, 8(r1)
    /* 0x805a2b28 */ mr r30, r3
    /* 0x805a2b2c */ lfs f1, 0(r31)
    /* 0x805a2b30 */ lwz r3, 0x70(r3)
    /* 0x805a2b34 */ lwz r12, 0(r3)
    /* 0x805a2b38 */ lwz r12, 0x10(r12)
    /* 0x805a2b3c */ mtctr r12
    /* 0x805a2b40 */ bctrl
    /* 0x805a2b44 */ lwz r3, 0x70(r30)
    /* 0x805a2b48 */ li r4, 1
    /* 0x805a2b4c */ lfs f1, 0x1fc(r31)
    /* 0x805a2b50 */ li r0, 0
    /* 0x805a2b54 */ stb r4, 0x16(r3)
    /* 0x805a2b58 */ lfs f0, 0x114(r31)
    /* 0x805a2b5c */ stw r0, 0x78(r30)
    /* 0x805a2b60 */ lwz r3, 4(r30)
    /* 0x805a2b64 */ stfs f1, 0xb4(r30)
    /* 0x805a2b68 */ stfs f0, 0x344(r3)
    /* 0x805a2b6c */ lwz r31, 0xc(r1)
    /* 0x805a2b70 */ lwz r30, 8(r1)
    /* 0x805a2b74 */ lwz r0, 0x14(r1)
    /* 0x805a2b78 */ mtlr r0
    /* 0x805a2b7c */ addi r1, r1, 0x10
    /* 0x805a2b80 */ blr
