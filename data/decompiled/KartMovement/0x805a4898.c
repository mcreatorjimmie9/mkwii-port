// sub_805a4898
// Address: 0x805a4898
// Size: 584 bytes (10 instructions)
// Stack frame: 0xa0
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4898 */ stwu r1, -0xa0(r1)
    /* 0x805a489c */ mflr r0
    /* 0x805a48a0 */ stw r0, 0xa4(r1)
    /* 0x805a48a4 */ stfd f31, 0x90(r1)
    /* 0x805a48a8 */ xscmpgedp vs31, f1, f0
    /* 0x805a48ac */ stfd f30, 0x80(r1)
    /* 0x805a48b0 */ xsmsubasp f30, f1, f0
    /* 0x805a48b4 */ stfd f29, 0x70(r1)
    /* 0x805a48b8 */ xxsel vs29, vs1, vs0, v1
    /* 0x805a48bc */ stfd f28, 0x60(r1)
