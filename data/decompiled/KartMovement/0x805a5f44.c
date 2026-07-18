// sub_805a5f44
// Address: 0x805a5f44
// Size: 216 bytes (54 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a5f44 */ stwu r1, -0x10(r1)
    /* 0x805a5f48 */ mflr r0
    /* 0x805a5f4c */ stw r0, 0x14(r1)
    /* 0x805a5f50 */ stw r31, 0xc(r1)
    /* 0x805a5f54 */ stw r30, 8(r1)
    /* 0x805a5f58 */ mr r30, r3
    /* 0x805a5f5c */ lwz r12, 0(r3)
    /* 0x805a5f60 */ lwz r12, 0x14(r12)
    /* 0x805a5f64 */ mtctr r12
    /* 0x805a5f68 */ bctrl
    /* 0x805a5f6c */ lis r4, 0
    /* 0x805a5f70 */ mr r31, r3
    /* 0x805a5f74 */ lwz r3, 0(r4)
    /* 0x805a5f78 */ lbz r0, 0x25(r3)
    /* 0x805a5f7c */ cmpwi r0, 0
    /* 0x805a5f80 */ beq 0x805a5f94
    /* 0x805a5f84 */ lwz r3, 0x2c(r30)
    /* 0x805a5f88 */ bl 0x80590a9c
    /* 0x805a5f8c */ clrlwi r0, r3, 0x18
    /* 0x805a5f90 */ b 0x805a5fa0
    /* 0x805a5f94 */ lwz r3, 4(r30)
    /* 0x805a5f98 */ lwz r3, 0x8c(r3)
    /* 0x805a5f9c */ lwz r0, 0x68(r3)
    /* 0x805a5fa0 */ lwz r4, 0(r31)
    /* 0x805a5fa4 */ lis r3, 0
    /* 0x805a5fa8 */ lwz r3, 0(r3)
    /* 0x805a5fac */ clrlwi r5, r0, 0x18
    /* 0x805a5fb0 */ lbz r4, 3(r4)
    /* 0x805a5fb4 */ extsb r4, r4
    /* 0x805a5fb8 */ bl 0x806e371c
    /* 0x805a5fbc */ stw r3, 0x48(r30)
    /* 0x805a5fc0 */ lis r4, 0
    /* 0x805a5fc4 */ lfs f1, 0(r4)
    /* 0x805a5fc8 */ li r4, 0
    /* 0x805a5fcc */ lwz r12, 0(r3)
    /* 0x805a5fd0 */ lwz r12, 0x10(r12)
    /* 0x805a5fd4 */ mtctr r12
    /* 0x805a5fd8 */ bctrl
    /* 0x805a5fdc */ lwz r3, 0x48(r30)
    /* 0x805a5fe0 */ lis r4, 0
    /* 0x805a5fe4 */ lfs f1, 0(r4)
    /* 0x805a5fe8 */ lwz r12, 0(r3)
    /* 0x805a5fec */ lwz r12, 0x18(r12)
    /* 0x805a5ff0 */ mtctr r12
    /* 0x805a5ff4 */ bctrl
    /* 0x805a5ff8 */ lwz r3, 0x48(r30)
    /* 0x805a5ffc */ li r0, 1
    /* 0x805a6000 */ stb r0, 0x16(r3)
    /* 0x805a6004 */ lwz r31, 0xc(r1)
    /* 0x805a6008 */ lwz r30, 8(r1)
    /* 0x805a600c */ lwz r0, 0x14(r1)
    /* 0x805a6010 */ mtlr r0
    /* 0x805a6014 */ addi r1, r1, 0x10
    /* 0x805a6018 */ blr
