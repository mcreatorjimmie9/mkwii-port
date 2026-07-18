// sub_805a20ac
// Address: 0x805a20ac
// Size: 120 bytes (12 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a20ac */ stwu r1, -0x20(r1)
    /* 0x805a20b0 */ mflr r0
    /* 0x805a20b4 */ stw r0, 0x24(r1)
    /* 0x805a20b8 */ stfd f31, 0x10(r1)
    /* 0x805a20bc */ xscmpeqdp vs31, f1, f0
    /* 0x805a20c0 */ fmr f31, f1
    /* 0x805a20c4 */ cmpwi r4, 0x2c
    /* 0x805a20c8 */ stw r31, 0xc(r1)
    /* 0x805a20cc */ mr r31, r4
    /* 0x805a20d0 */ beq 0x805a2108
    /* 0x805a20d4 */ lis r4, 0
    /* 0x805a20d8 */ lfs f0, 0(r4)
