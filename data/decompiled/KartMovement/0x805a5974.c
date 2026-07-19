// sub_805a5974
// Address: 0x805a5974
// Total size: 236 bytes (code: 236, data: 0)
// Instructions: 59
// Stack frame: 0x30

#include "types.h"

// Pseudocode:
void func_805a5974(void) {
    // stack: 0x30
    // 3 calls, 23 FP ops

    // prologue: sp -= 0x30
    // save lr
    *(u32*)(0x34(r1)) = r0
    *(u32*)(0x2c(r1)) = r31
    *(u32*)(0x28(r1)) = r30
    r30 = r4
    *(u32*)(0x24(r1)) = r29
    r29 = r3
    r3 = *(u32*)(0x2c(r3))
    sub_80590250()
    r4 = *(u32*)(4(r29))
    f0 = *(f32*)(0(r3))
    r4 = *(u32*)(0x90(r4))
    *(f32*)(0x70(r4)) = f0
    f0 = *(f32*)(4(r3))
    *(f32*)(0x74(r4)) = f0
    f0 = *(f32*)(8(r3))
    *(f32*)(0x78(r4)) = f0
    r4 = *(u32*)(4(r29))
    r3 = *(u32*)(0x2c(r29))
    r31 = *(u32*)(0x90(r4))
    sub_80590a0c()
    /* lis r3, 0 */
    f0 = *(f32*)(0x74(r31))
    f2 = *(f32*)(0(r3))
    r3 = r29
    f1 = f2 - f1
    f0 = f0 + f1
    *(f32*)(0x74(r31)) = f0
    r12 = *(u32*)(0(r29))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    r7 = *(u32*)(0(r3))
    r6 = r30
    r4 = r1 + 20
    r5 = r1 + 8
    f0 = *(f32*)(0x34(r7))
    f1 = *(f32*)(0x30(r7))
    f2 = *(f32*)(0x2c(r7))
    *(f32*)(0x14(r1)) = f2
    *(f32*)(0x18(r1)) = f1
    *(f32*)(0x1c(r1)) = f0
    r7 = *(u32*)(0(r3))
    r3 = r29
    f0 = *(f32*)(0x40(r7))
    f1 = *(f32*)(0x3c(r7))
    f2 = *(f32*)(0x38(r7))
    *(f32*)(8(r1)) = f2
    *(f32*)(0xc(r1)) = f1
    *(f32*)(0x10(r1)) = f0
    sub_805a5a64()
    r0 = *(u32*)(0x34(r1))
    r31 = saved_r31
    r30 = *(u32*)(0x28(r1))
    r29 = *(u32*)(0x24(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a5974 */ stwu r1, -0x30(r1)
    /* 0x805a5978 */ mflr r0
    /* 0x805a597c */ stw r0, 0x34(r1)
    /* 0x805a5980 */ stw r31, 0x2c(r1)
    /* 0x805a5984 */ stw r30, 0x28(r1)
    /* 0x805a5988 */ mr r30, r4
    /* 0x805a598c */ stw r29, 0x24(r1)
    /* 0x805a5990 */ mr r29, r3
    /* 0x805a5994 */ lwz r3, 0x2c(r3)
    /* 0x805a5998 */ bl 0x8059024c
    /* 0x805a599c */ lwz r4, 4(r29)
    /* 0x805a59a0 */ lfs f0, 0(r3)
    /* 0x805a59a4 */ lwz r4, 0x90(r4)
    /* 0x805a59a8 */ stfs f0, 0x70(r4)
    /* 0x805a59ac */ lfs f0, 4(r3)
    /* 0x805a59b0 */ stfs f0, 0x74(r4)
    /* 0x805a59b4 */ lfs f0, 8(r3)
    /* 0x805a59b8 */ stfs f0, 0x78(r4)
    /* 0x805a59bc */ lwz r4, 4(r29)
    /* 0x805a59c0 */ lwz r3, 0x2c(r29)
    /* 0x805a59c4 */ lwz r31, 0x90(r4)
    /* 0x805a59c8 */ bl 0x80590a08
    /* 0x805a59cc */ lis r3, 0
    /* 0x805a59d0 */ lfs f0, 0x74(r31)
    /* 0x805a59d4 */ lfs f2, 0(r3)
    /* 0x805a59d8 */ mr r3, r29
    /* 0x805a59dc */ fsubs f1, f2, f1
    /* 0x805a59e0 */ fadds f0, f0, f1
    /* 0x805a59e4 */ stfs f0, 0x74(r31)
    /* 0x805a59e8 */ lwz r12, 0(r29)
    /* 0x805a59ec */ lwz r12, 0x14(r12)
    /* 0x805a59f0 */ mtctr r12
    /* 0x805a59f4 */ bctrl
    /* 0x805a59f8 */ lwz r7, 0(r3)
    /* 0x805a59fc */ mr r6, r30
    /* 0x805a5a00 */ addi r4, r1, 0x14
    /* 0x805a5a04 */ addi r5, r1, 8
    /* 0x805a5a08 */ lfs f0, 0x34(r7)
    /* 0x805a5a0c */ lfs f1, 0x30(r7)
    /* 0x805a5a10 */ lfs f2, 0x2c(r7)
    /* 0x805a5a14 */ stfs f2, 0x14(r1)
    /* 0x805a5a18 */ stfs f1, 0x18(r1)
    /* 0x805a5a1c */ stfs f0, 0x1c(r1)
    /* 0x805a5a20 */ lwz r7, 0(r3)
    /* 0x805a5a24 */ mr r3, r29
    /* 0x805a5a28 */ lfs f0, 0x40(r7)
    /* 0x805a5a2c */ lfs f1, 0x3c(r7)
    /* 0x805a5a30 */ lfs f2, 0x38(r7)
    /* 0x805a5a34 */ stfs f2, 8(r1)
    /* 0x805a5a38 */ stfs f1, 0xc(r1)
    /* 0x805a5a3c */ stfs f0, 0x10(r1)
    /* 0x805a5a40 */ bl 0x805a5a60
    /* 0x805a5a44 */ lwz r0, 0x34(r1)
    /* 0x805a5a48 */ lwz r31, 0x2c(r1)
    /* 0x805a5a4c */ lwz r30, 0x28(r1)
    /* 0x805a5a50 */ lwz r29, 0x24(r1)
    /* 0x805a5a54 */ mtlr r0
    /* 0x805a5a58 */ addi r1, r1, 0x30
    /* 0x805a5a5c */ blr
