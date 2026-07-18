// sub_805a60cc
// Address: 0x805a60cc
// Total size: 76 bytes (code: 76, data: 0)
// Instructions: 19
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a60cc(void) {
    // stack: 0x10
    // 2 FP ops

    // prologue: sp -= 0x10
    // save lr
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    cmp(r3, 0)
    if (==) goto LOC_805A6108
    r3 = *(u32*)(0(r3))
    f0 = *(f32*)(0x24(r3))
    *(f32*)(0x34(r31)) = f0
    r0 = *(u32*)(0x14(r1))
LOC_805A6108:
    r31 = saved_r31
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a60cc */ stwu r1, -0x10(r1)
    /* 0x805a60d0 */ mflr r0
    /* 0x805a60d4 */ stw r0, 0x14(r1)
    /* 0x805a60d8 */ stw r31, 0xc(r1)
    /* 0x805a60dc */ mr r31, r3
    /* 0x805a60e0 */ lwz r12, 0(r3)
    /* 0x805a60e4 */ lwz r12, 0x14(r12)
    /* 0x805a60e8 */ mtctr r12
    /* 0x805a60ec */ bctrl
    /* 0x805a60f0 */ cmpwi r3, 0
    /* 0x805a60f4 */ beq 0x805a6104
    /* 0x805a60f8 */ lwz r3, 0(r3)
    /* 0x805a60fc */ lfs f0, 0x24(r3)
    /* 0x805a6100 */ stfs f0, 0x34(r31)
    /* 0x805a6104 */ lwz r0, 0x14(r1)
    /* 0x805a6108 */ lwz r31, 0xc(r1)
    /* 0x805a610c */ mtlr r0
    /* 0x805a6110 */ addi r1, r1, 0x10
    /* 0x805a6114 */ blr
