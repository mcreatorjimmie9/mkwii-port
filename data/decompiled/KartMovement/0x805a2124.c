// sub_805a2124
// Address: 0x805a2124
// Size: 448 bytes (8 instructions)
// Stack frame: 0x50
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a2124 */ stwu r1, -0x50(r1)
    /* 0x805a2128 */ mflr r0
    /* 0x805a212c */ stw r0, 0x54(r1)
    /* 0x805a2130 */ stfd f31, 0x40(r1)
    /* 0x805a2134 */ xsmaddmsp f31, f1, f0
    /* 0x805a2138 */ stfd f30, 0x30(r1)
    /* 0x805a213c */ xxsel vs30, vs1, vs0, v0
    /* 0x805a2140 */ stfd f29, 0x20(r1)
