// sub_805a4d5c
// Address: 0x805a4d5c
// Size: 472 bytes (8 instructions)
// Stack frame: 0x50
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4d5c */ stwu r1, -0x50(r1)
    /* 0x805a4d60 */ mflr r0
    /* 0x805a4d64 */ stw r0, 0x54(r1)
    /* 0x805a4d68 */ stfd f31, 0x40(r1)
    /* 0x805a4d6c */ xsmaddmsp f31, f1, f0
    /* 0x805a4d70 */ stfd f30, 0x30(r1)
    /* 0x805a4d74 */ xxsel vs30, vs1, vs0, v0
    /* 0x805a4d78 */ stfd f29, 0x20(r1)
