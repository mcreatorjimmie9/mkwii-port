// sub_805a2efc
// Address: 0x805a2efc
// Total size: 92 bytes (code: 92, data: 0)
// Instructions: 23
// Stack frame: 0x20

#include "types.h"

// Pseudocode:
void func_805a2efc(void) {
    // stack: 0x20
    // 1 calls, 10 FP ops

    // prologue: sp -= 0x20
    // save lr
    /* lis r4, 0 */
    r6 = r3 + 160
    *(u32*)(0x24(r1)) = r0
    r5 = r1 + 8
    f3 = *(f32*)(0(r4))
    r4 = r3 + 136
    f2 = *(f32*)(0x9c(r3))
    f1 = *(f32*)(0x98(r3))
    f0 = *(f32*)(0x94(r3))
    f2 = f3 * f2
    f1 = f3 * f1
    r3 = r3 + 12
    f0 = f3 * f0
    *(f32*)(0x10(r1)) = f2
    *(f32*)(8(r1)) = f0
    *(f32*)(0xc(r1)) = f1
    sub_80555bf8()
    r0 = *(u32*)(0x24(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a2efc */ stwu r1, -0x20(r1)
    /* 0x805a2f00 */ mflr r0
    /* 0x805a2f04 */ lis r4, 0
    /* 0x805a2f08 */ addi r6, r3, 0xa0
    /* 0x805a2f0c */ stw r0, 0x24(r1)
    /* 0x805a2f10 */ addi r5, r1, 8
    /* 0x805a2f14 */ lfs f3, 0(r4)
    /* 0x805a2f18 */ addi r4, r3, 0x88
    /* 0x805a2f1c */ lfs f2, 0x9c(r3)
    /* 0x805a2f20 */ lfs f1, 0x98(r3)
    /* 0x805a2f24 */ lfs f0, 0x94(r3)
    /* 0x805a2f28 */ fmuls f2, f3, f2
    /* 0x805a2f2c */ fmuls f1, f3, f1
    /* 0x805a2f30 */ addi r3, r3, 0xc
    /* 0x805a2f34 */ fmuls f0, f3, f0
    /* 0x805a2f38 */ stfs f2, 0x10(r1)
    /* 0x805a2f3c */ stfs f0, 8(r1)
    /* 0x805a2f40 */ stfs f1, 0xc(r1)
    /* 0x805a2f44 */ bl 0x80555bf4
    /* 0x805a2f48 */ lwz r0, 0x24(r1)
    /* 0x805a2f4c */ mtlr r0
    /* 0x805a2f50 */ addi r1, r1, 0x20
    /* 0x805a2f54 */ blr
