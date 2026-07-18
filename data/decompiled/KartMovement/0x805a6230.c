// sub_805a6230
// Address: 0x805a6230
// Size: 488 bytes (24 instructions)
// Stack frame: 0x60
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a6230 */ stwu r1, -0x60(r1)
    /* 0x805a6234 */ mflr r0
    /* 0x805a6238 */ stw r0, 0x64(r1)
    /* 0x805a623c */ stw r31, 0x5c(r1)
    /* 0x805a6240 */ mr r31, r3
    /* 0x805a6244 */ stw r30, 0x58(r1)
    /* 0x805a6248 */ lwz r12, 0(r3)
    /* 0x805a624c */ lwz r12, 0x14(r12)
    /* 0x805a6250 */ mtctr r12
    /* 0x805a6254 */ bctrl
    /* 0x805a6258 */ lwz r5, 0(r3)
    /* 0x805a625c */ mr r30, r3
    /* 0x805a6260 */ lhz r0, 8(r5)
    /* 0x805a6264 */ cmpwi r0, 0
    /* 0x805a6268 */ beq 0x805a6400
    /* 0x805a626c */ lfs f2, 0x34(r5)
    /* 0x805a6270 */ lis r3, 0
    /* 0x805a6274 */ lfs f3, 0x30(r5)
    /* 0x805a6278 */ lfs f4, 0x2c(r5)
    /* 0x805a627c */ stfs f4, 0x38(r1)
    /* 0x805a6280 */ lfs f1, 0x44(r31)
    /* 0x805a6284 */ lfs f0, 0(r3)
    /* 0x805a6288 */ stfs f3, 0x3c(r1)
    /* 0x805a628c */ lwz r4, 0x38(r1)
