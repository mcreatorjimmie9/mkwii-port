// sub_805a6118
// Address: 0x805a6118
// Size: 92 bytes (23 instructions)
// Stack frame: 0x10
// Symbol: N/A

#include "types.h"

// Disassembly:
    /* 0x805a6118 */ stwu r1, -0x10(r1)
    /* 0x805a611c */ mflr r0
    /* 0x805a6120 */ stw r0, 0x14(r1)
    /* 0x805a6124 */ stw r31, 0xc(r1)
    /* 0x805a6128 */ mr r31, r3
    /* 0x805a612c */ lwz r12, 0(r3)
    /* 0x805a6130 */ lwz r12, 0x14(r12)
    /* 0x805a6134 */ mtctr r12
    /* 0x805a6138 */ bctrl
    /* 0x805a613c */ lwz r4, 0(r3)
    /* 0x805a6140 */ lwz r3, 4(r31)
    /* 0x805a6144 */ lfs f0, 0x14(r4)
    /* 0x805a6148 */ lwz r3, 0x90(r3)
    /* 0x805a614c */ lfs f1, 0x10(r4)
    /* 0x805a6150 */ lfs f2, 0xc(r4)
    /* 0x805a6154 */ stfs f2, 0x64(r3)
    /* 0x805a6158 */ stfs f1, 0x68(r3)
    /* 0x805a615c */ stfs f0, 0x6c(r3)
    /* 0x805a6160 */ lwz r31, 0xc(r1)
    /* 0x805a6164 */ lwz r0, 0x14(r1)
    /* 0x805a6168 */ mtlr r0
    /* 0x805a616c */ addi r1, r1, 0x10
    /* 0x805a6170 */ blr
