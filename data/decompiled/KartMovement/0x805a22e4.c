// sub_805a22e4
// Address: 0x805a22e4
// Size: 416 bytes (18 instructions)
// Stack frame: 0x20
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a22e4 */ stwu r1, -0x20(r1)
    /* 0x805a22e8 */ mflr r0
    /* 0x805a22ec */ stw r0, 0x24(r1)
    /* 0x805a22f0 */ stfd f31, 0x10(r1)
    /* 0x805a22f4 */ xscmpeqdp vs31, f1, f0
    /* 0x805a22f8 */ mulli r0, r4, 0x18
    /* 0x805a22fc */ lis r4, 0
    /* 0x805a2300 */ fmr f31, f1
    /* 0x805a2304 */ stw r31, 0xc(r1)
    /* 0x805a2308 */ mr r31, r5
    /* 0x805a230c */ addi r4, r4, 0
    /* 0x805a2310 */ lfsux f3, r4, r0
    /* 0x805a2314 */ lwz r6, 0x338(r3)
    /* 0x805a2318 */ fmuls f2, f3, f1
    /* 0x805a231c */ stw r4, 0x14(r6)
    /* 0x805a2320 */ lfs f0, 8(r6)
    /* 0x805a2324 */ fadds f0, f0, f2
    /* 0x805a2328 */ stfs f0, 8(r6)
