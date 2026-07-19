// sub_805a601c
// Address: 0x805a601c
// Total size: 176 bytes (code: 176, data: 0)
// Instructions: 44
// Stack frame: 0x20

#include "types.h"

// Pseudocode:
void func_805a601c(void) {
    // stack: 0x20
    // 9 FP ops

    // prologue: sp -= 0x20
    // save lr
    /* lis r4, 0x4330 */
    /* lis r5, 0 */
    *(u32*)(0x24(r1)) = r0
    f1 = *(f64*)(0(r5))
    *(u32*)(0x1c(r1)) = r31
    r31 = r3
    r7 = *(u32*)(0x48(r3))
    *(u32*)(8(r1)) = r4
    r8 = *(u32*)(8(r7))
    r3 = r7
    r6 = *(s16*)(0x46(r7))
    r0 = *(s16*)(0x48(r7))
    r8 = r8 + 12
    r6 = slwi(r6, 4)
    r12 = *(u32*)(0(r7))
    r6 = *(u16*)(r8)
    r0 = slwi(r0, 4)
    *(u32*)(0xc(r1)) = r6
    r0 = *(u16*)(r8)
    f0 = *(f64*)(8(r1))
    *(u32*)(0x14(r1)) = r0
    f3 = f0 - f1
    f2 = *(f32*)(0x40(r7))
    *(u32*)(0x10(r1)) = r4
    r12 = *(u32*)(0x18(r12))
    f0 = *(f64*)(0x10(r1))
    f0 = f0 - f1
    f0 = f0 - f3
    f0 = f0 * f2
    f1 = f3 + f0
    ctr = r12
    call_indirect(ctr)
    r3 = *(u32*)(0x48(r31))
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    r0 = *(u32*)(0x24(r1))
    r31 = saved_r31
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a601c */ stwu r1, -0x20(r1)
    /* 0x805a6020 */ mflr r0
    /* 0x805a6024 */ lis r4, 0x4330
    /* 0x805a6028 */ lis r5, 0
    /* 0x805a602c */ stw r0, 0x24(r1)
    /* 0x805a6030 */ lfd f1, 0(r5)
    /* 0x805a6034 */ stw r31, 0x1c(r1)
    /* 0x805a6038 */ mr r31, r3
    /* 0x805a603c */ lwz r7, 0x48(r3)
    /* 0x805a6040 */ stw r4, 8(r1)
    /* 0x805a6044 */ lwz r8, 8(r7)
    /* 0x805a6048 */ mr r3, r7
    /* 0x805a604c */ lha r6, 0x46(r7)
    /* 0x805a6050 */ lha r0, 0x48(r7)
    /* 0x805a6054 */ addi r8, r8, 0xc
    /* 0x805a6058 */ slwi r6, r6, 4
    /* 0x805a605c */ lwz r12, 0(r7)
    /* 0x805a6060 */ lhzx r6, r8, r6
    /* 0x805a6064 */ slwi r0, r0, 4
    /* 0x805a6068 */ stw r6, 0xc(r1)
    /* 0x805a606c */ lhzx r0, r8, r0
    /* 0x805a6070 */ lfd f0, 8(r1)
    /* 0x805a6074 */ stw r0, 0x14(r1)
    /* 0x805a6078 */ fsubs f3, f0, f1
    /* 0x805a607c */ lfs f2, 0x40(r7)
    /* 0x805a6080 */ stw r4, 0x10(r1)
    /* 0x805a6084 */ lwz r12, 0x18(r12)
    /* 0x805a6088 */ lfd f0, 0x10(r1)
    /* 0x805a608c */ fsubs f0, f0, f1
    /* 0x805a6090 */ fsubs f0, f0, f3
    /* 0x805a6094 */ fmuls f0, f0, f2
    /* 0x805a6098 */ fadds f1, f3, f0
    /* 0x805a609c */ mtctr r12
    /* 0x805a60a0 */ bctrl
    /* 0x805a60a4 */ lwz r3, 0x48(r31)
    /* 0x805a60a8 */ lwz r12, 0(r3)
    /* 0x805a60ac */ lwz r12, 0x14(r12)
    /* 0x805a60b0 */ mtctr r12
    /* 0x805a60b4 */ bctrl
    /* 0x805a60b8 */ lwz r0, 0x24(r1)
    /* 0x805a60bc */ lwz r31, 0x1c(r1)
    /* 0x805a60c0 */ mtlr r0
    /* 0x805a60c4 */ addi r1, r1, 0x20
    /* 0x805a60c8 */ blr
