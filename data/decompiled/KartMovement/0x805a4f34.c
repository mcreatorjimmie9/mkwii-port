// sub_805a4f34
// Address: 0x805a4f34
// Size: 680 bytes (8 instructions)
// Stack frame: 0x50
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a4f34 */ stwu r1, -0x50(r1)
    /* 0x805a4f38 */ mflr r0
    /* 0x805a4f3c */ stw r0, 0x54(r1)
    /* 0x805a4f40 */ stfd f31, 0x40(r1)
    /* 0x805a4f44 */ xsmaddmsp f31, f1, f0
    /* 0x805a4f48 */ stfd f30, 0x30(r1)
    /* 0x805a4f4c */ xxsel vs30, vs1, vs0, v0
    /* 0x805a4f50 */ stfd f29, 0x20(r1)
