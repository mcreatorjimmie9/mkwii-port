// sub_805a2f58
// Address: 0x805a2f58
// Size: 244 bytes (61 instructions)
// Stack frame: 0x60
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2f58 */ stwu r1, -0x60(r1)
    /* 0x805a2f5c */ mflr r0
    /* 0x805a2f60 */ stw r0, 0x64(r1)
    /* 0x805a2f64 */ addi r5, r1, 0x18
    /* 0x805a2f68 */ stw r31, 0x5c(r1)
    /* 0x805a2f6c */ stw r30, 0x58(r1)
    /* 0x805a2f70 */ stw r29, 0x54(r1)
    /* 0x805a2f74 */ mr r29, r3
    /* 0x805a2f78 */ addi r3, r3, 0x3c
    /* 0x805a2f7c */ addi r4, r29, 0xc
    /* 0x805a2f80 */ bl 0x80555bf4
    /* 0x805a2f84 */ li r30, 0
    /* 0x805a2f88 */ li r31, 0
    /* 0x805a2f8c */ b 0x805a2fcc
    /* 0x805a2f90 */ lwz r0, 0xac(r29)
    /* 0x805a2f94 */ addi r3, r1, 8
    /* 0x805a2f98 */ addi r4, r1, 0x18
    /* 0x805a2f9c */ add r5, r0, r31
    /* 0x805a2fa0 */ bl 0x80555bf4
    /* 0x805a2fa4 */ lwz r0, 8(r29)
    /* 0x805a2fa8 */ addi r30, r30, 1
    /* 0x805a2fac */ lfs f0, 8(r1)
    /* 0x805a2fb0 */ add r3, r0, r31
    /* 0x805a2fb4 */ addi r31, r31, 0xc
    /* 0x805a2fb8 */ stfs f0, 0(r3)
    /* 0x805a2fbc */ lfs f0, 0xc(r1)
    /* 0x805a2fc0 */ stfs f0, 4(r3)
    /* 0x805a2fc4 */ lfs f0, 0x10(r1)
    /* 0x805a2fc8 */ stfs f0, 8(r3)
    /* 0x805a2fcc */ lhz r3, 0x80(r29)
    /* 0x805a2fd0 */ cmplw r30, r3
    /* 0x805a2fd4 */ blt 0x805a2f90
    /* 0x805a2fd8 */ addi r0, r3, -1
    /* 0x805a2fdc */ lwz r4, 4(r29)
    /* 0x805a2fe0 */ mulli r0, r0, 0xc
    /* 0x805a2fe4 */ lwz r3, 8(r29)
    /* 0x805a2fe8 */ lfs f0, 0xa0(r4)
    /* 0x805a2fec */ stfsux f0, r3, r0
    /* 0x805a2ff0 */ lfs f0, 0xa4(r4)
    /* 0x805a2ff4 */ stfs f0, 4(r3)
    /* 0x805a2ff8 */ lfs f0, 0xa8(r4)
    /* 0x805a2ffc */ stfs f0, 8(r3)
    /* 0x805a3000 */ lwz r31, 0x5c(r1)
    /* 0x805a3004 */ lwz r30, 0x58(r1)
    /* 0x805a3008 */ lwz r29, 0x54(r1)
    /* 0x805a300c */ lwz r0, 0x64(r1)
    /* 0x805a3010 */ mtlr r0
    /* 0x805a3014 */ addi r1, r1, 0x60
    /* 0x805a3018 */ blr
    /* 0x805a301c */ lhz r4, 0x80(r3)
    /* 0x805a3020 */ lwz r5, 4(r3)
    /* 0x805a3024 */ addi r0, r4, -1
    /* 0x805a3028 */ lwz r3, 8(r3)
    /* 0x805a302c */ mulli r0, r0, 0xc
    /* 0x805a3030 */ lfs f0, 0xa0(r5)
    /* 0x805a3034 */ stfsux f0, r3, r0
    /* 0x805a3038 */ lfs f0, 0xa4(r5)
    /* 0x805a303c */ stfs f0, 4(r3)
    /* 0x805a3040 */ lfs f0, 0xa8(r5)
    /* 0x805a3044 */ stfs f0, 8(r3)
    /* 0x805a3048 */ blr
