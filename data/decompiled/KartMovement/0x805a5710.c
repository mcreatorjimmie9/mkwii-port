// sub_805a5710
// Address: 0x805a5710
// Total size: 120 bytes (code: 120, data: 0)
// Instructions: 30
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a5710(void) {
    // stack: 0x10
    // 2 calls, 11 FP ops

    // prologue: sp -= 0x10
    // save lr
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    r3 = *(u32*)(0x2c(r3))
    sub_80590250()
    r4 = *(u32*)(4(r31))
    f0 = *(f32*)(0(r3))
    r4 = *(u32*)(0x90(r4))
    *(f32*)(0x70(r4)) = f0
    f0 = *(f32*)(4(r3))
    *(f32*)(0x74(r4)) = f0
    f0 = *(f32*)(8(r3))
    *(f32*)(0x78(r4)) = f0
    r4 = *(u32*)(4(r31))
    r3 = *(u32*)(0x2c(r31))
    r31 = *(u32*)(0x90(r4))
    sub_80590a0c()
    /* lis r3, 0 */
    f0 = *(f32*)(0x74(r31))
    f2 = *(f32*)(0(r3))
    f1 = f2 - f1
    f0 = f0 + f1
    *(f32*)(0x74(r31)) = f0
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a5710 */ stwu r1, -0x10(r1)
    /* 0x805a5714 */ mflr r0
    /* 0x805a5718 */ stw r0, 0x14(r1)
    /* 0x805a571c */ stw r31, 0xc(r1)
    /* 0x805a5720 */ mr r31, r3
    /* 0x805a5724 */ lwz r3, 0x2c(r3)
    /* 0x805a5728 */ bl 0x8059024c
    /* 0x805a572c */ lwz r4, 4(r31)
    /* 0x805a5730 */ lfs f0, 0(r3)
    /* 0x805a5734 */ lwz r4, 0x90(r4)
    /* 0x805a5738 */ stfs f0, 0x70(r4)
    /* 0x805a573c */ lfs f0, 4(r3)
    /* 0x805a5740 */ stfs f0, 0x74(r4)
    /* 0x805a5744 */ lfs f0, 8(r3)
    /* 0x805a5748 */ stfs f0, 0x78(r4)
    /* 0x805a574c */ lwz r4, 4(r31)
    /* 0x805a5750 */ lwz r3, 0x2c(r31)
    /* 0x805a5754 */ lwz r31, 0x90(r4)
    /* 0x805a5758 */ bl 0x80590a08
    /* 0x805a575c */ lis r3, 0
    /* 0x805a5760 */ lfs f0, 0x74(r31)
    /* 0x805a5764 */ lfs f2, 0(r3)
    /* 0x805a5768 */ fsubs f1, f2, f1
    /* 0x805a576c */ fadds f0, f0, f1
    /* 0x805a5770 */ stfs f0, 0x74(r31)
    /* 0x805a5774 */ lwz r31, 0xc(r1)
    /* 0x805a5778 */ lwz r0, 0x14(r1)
    /* 0x805a577c */ mtlr r0
    /* 0x805a5780 */ addi r1, r1, 0x10
    /* 0x805a5784 */ blr
