// sub_805a2df8
// Address: 0x805a2df8
// Total size: 260 bytes (code: 260, data: 0)
// Instructions: 65
// Stack frame: 0x60

#include "types.h"

// Pseudocode:
void func_805a2df8(void) {
    // stack: 0x60
    // 3 calls, 22 FP ops

    // prologue: sp -= 0x60
    // save lr
    /* lis r4, 0 */
    *(u32*)(0x64(r1)) = r0
    r5 = r1 + 20
    f3 = *(f32*)(0(r4))
    *(u32*)(0x5c(r1)) = r31
    *(u32*)(0x58(r1)) = r30
    *(u32*)(0x54(r1)) = r29
    r29 = r3
    r4 = r29 + 136
    f2 = *(f32*)(0x9c(r3))
    r6 = r29 + 160
    f1 = *(f32*)(0x98(r3))
    f0 = *(f32*)(0x94(r3))
    f2 = f3 * f2
    f1 = f3 * f1
    r3 = r3 + 12
    f0 = f3 * f0
    *(f32*)(0x1c(r1)) = f2
    *(f32*)(0x14(r1)) = f0
    *(f32*)(0x18(r1)) = f1
    sub_80555bf8()
    r3 = r29 + 60
    r4 = r29 + 12
    r5 = r1 + 32
    sub_80555bf8()
    /* li r31, 0 */
    /* li r30, 0 */
    goto LOC_805A2EB0
    r0 = *(u32*)(0xac(r29))
LOC_805A2E74:
    r3 = r1 + 8
    r4 = r1 + 32
    r5 = r0 + r30
    sub_80555bf8()
    r0 = *(u32*)(8(r29))
    r31 = r31 + 1
    f0 = *(f32*)(8(r1))
    /* stfsx f0, r30, r0 */
    r3 = r0 + r30
    r30 = r30 + 12
    f0 = *(f32*)(0xc(r1))
    *(f32*)(4(r3)) = f0
    f0 = *(f32*)(0x10(r1))
    *(f32*)(8(r3)) = f0
    r3 = *(u16*)(0x80(r29))
LOC_805A2EB0:
    cmp(r31, r3)
    if (<) goto LOC_805A2E74
    r0 = r3 + -1
    r4 = *(u32*)(4(r29))
    r0 = r0 * 0xc
    r3 = *(u32*)(8(r29))
    f0 = *(f32*)(0xa0(r4))
    /* stfsux f0, r3, r0 */
    f0 = *(f32*)(0xa4(r4))
    *(f32*)(4(r3)) = f0
    f0 = *(f32*)(0xa8(r4))
    *(f32*)(8(r3)) = f0
    r31 = saved_r31
    r30 = *(u32*)(0x58(r1))
    r29 = *(u32*)(0x54(r1))
    r0 = *(u32*)(0x64(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a2df8 */ stwu r1, -0x60(r1)
    /* 0x805a2dfc */ mflr r0
    /* 0x805a2e00 */ lis r4, 0
    /* 0x805a2e04 */ stw r0, 0x64(r1)
    /* 0x805a2e08 */ addi r5, r1, 0x14
    /* 0x805a2e0c */ lfs f3, 0(r4)
    /* 0x805a2e10 */ stw r31, 0x5c(r1)
    /* 0x805a2e14 */ stw r30, 0x58(r1)
    /* 0x805a2e18 */ stw r29, 0x54(r1)
    /* 0x805a2e1c */ mr r29, r3
    /* 0x805a2e20 */ addi r4, r29, 0x88
    /* 0x805a2e24 */ lfs f2, 0x9c(r3)
    /* 0x805a2e28 */ addi r6, r29, 0xa0
    /* 0x805a2e2c */ lfs f1, 0x98(r3)
    /* 0x805a2e30 */ lfs f0, 0x94(r3)
    /* 0x805a2e34 */ fmuls f2, f3, f2
    /* 0x805a2e38 */ fmuls f1, f3, f1
    /* 0x805a2e3c */ addi r3, r3, 0xc
    /* 0x805a2e40 */ fmuls f0, f3, f0
    /* 0x805a2e44 */ stfs f2, 0x1c(r1)
    /* 0x805a2e48 */ stfs f0, 0x14(r1)
    /* 0x805a2e4c */ stfs f1, 0x18(r1)
    /* 0x805a2e50 */ bl 0x80555bf4
    /* 0x805a2e54 */ addi r3, r29, 0x3c
    /* 0x805a2e58 */ addi r4, r29, 0xc
    /* 0x805a2e5c */ addi r5, r1, 0x20
    /* 0x805a2e60 */ bl 0x80555bf4
    /* 0x805a2e64 */ li r31, 0
    /* 0x805a2e68 */ li r30, 0
    /* 0x805a2e6c */ b 0x805a2eac
    /* 0x805a2e70 */ lwz r0, 0xac(r29)
    /* 0x805a2e74 */ addi r3, r1, 8
    /* 0x805a2e78 */ addi r4, r1, 0x20
    /* 0x805a2e7c */ add r5, r0, r30
    /* 0x805a2e80 */ bl 0x80555bf4
    /* 0x805a2e84 */ lwz r0, 8(r29)
    /* 0x805a2e88 */ addi r31, r31, 1
    /* 0x805a2e8c */ lfs f0, 8(r1)
    /* 0x805a2e90 */ stfsx f0, r30, r0
    /* 0x805a2e94 */ add r3, r0, r30
    /* 0x805a2e98 */ addi r30, r30, 0xc
    /* 0x805a2e9c */ lfs f0, 0xc(r1)
    /* 0x805a2ea0 */ stfs f0, 4(r3)
    /* 0x805a2ea4 */ lfs f0, 0x10(r1)
    /* 0x805a2ea8 */ stfs f0, 8(r3)
    /* 0x805a2eac */ lhz r3, 0x80(r29)
    /* 0x805a2eb0 */ cmplw r31, r3
    /* 0x805a2eb4 */ blt 0x805a2e70
    /* 0x805a2eb8 */ addi r0, r3, -1
    /* 0x805a2ebc */ lwz r4, 4(r29)
    /* 0x805a2ec0 */ mulli r0, r0, 0xc
    /* 0x805a2ec4 */ lwz r3, 8(r29)
    /* 0x805a2ec8 */ lfs f0, 0xa0(r4)
    /* 0x805a2ecc */ stfsux f0, r3, r0
    /* 0x805a2ed0 */ lfs f0, 0xa4(r4)
    /* 0x805a2ed4 */ stfs f0, 4(r3)
    /* 0x805a2ed8 */ lfs f0, 0xa8(r4)
    /* 0x805a2edc */ stfs f0, 8(r3)
    /* 0x805a2ee0 */ lwz r31, 0x5c(r1)
    /* 0x805a2ee4 */ lwz r30, 0x58(r1)
    /* 0x805a2ee8 */ lwz r29, 0x54(r1)
    /* 0x805a2eec */ lwz r0, 0x64(r1)
    /* 0x805a2ef0 */ mtlr r0
    /* 0x805a2ef4 */ addi r1, r1, 0x60
    /* 0x805a2ef8 */ blr
