// sub_805a4ae0
// Address: 0x805a4ae0
// Size: 636 bytes (8 instructions)
// Stack frame: 0x90
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4ae0 */ stwu r1, -0x90(r1)
    /* 0x805a4ae4 */ mflr r0
    /* 0x805a4ae8 */ stw r0, 0x94(r1)
    /* 0x805a4aec */ stfd f31, 0x80(r1)
    /* 0x805a4af0 */ xsmsubasp f31, f1, f0
    /* 0x805a4af4 */ stfd f30, 0x70(r1)
    /* 0x805a4af8 */ xxsel vs30, vs1, vs0, v1
    /* 0x805a4afc */ stfd f29, 0x60(r1)
