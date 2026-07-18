// sub_805a28cc
// Address: 0x805a28cc
// Total size: 572 bytes (code: 572, data: 0)
// Instructions: 143
// Stack frame: 0x90

#include "types.h"

// Pseudocode:
void func_805a28cc(void) {
    // stack: 0x90
    // 8 calls, 39 FP ops, 3 branches

    // prologue: sp -= 0x90
    // save lr
    *(u32*)(0x94(r1)) = r0
    r5 = r1 + 44
    *(u32*)(0x8c(r1)) = r31
    r31 = r3
    *(u32*)(0x88(r1)) = r30
    *(u32*)(0x84(r1)) = r29
    /* li r29, 0 */
    *(u32*)(0x80(r1)) = r28
    /* lis r28, 0 */
    r28 = r28 + 0
    *(u16*)(0x6c(r3)) = (u16)r29
    /* lis r3, 0 */
    r4 = *(u32*)(4(r31))
    r3 = *(u32*)(0(r3))
    r6 = *(u8*)(0x9c(r4))
    r4 = r1 + 56
    sub_80537ffc()
    f3 = *(f32*)(0x168(r28))
    r3 = r31 + 60
    f2 = *(f32*)(0x2c(r1))
    r4 = r1 + 32
    f1 = *(f32*)(0x30(r1))
    r5 = r1 + 56
    f0 = *(f32*)(0x34(r1))
    f2 = f3 * f2
    r7 = *(u32*)(0x2c(r1))
    f1 = f3 * f1
    r6 = *(u32*)(0x30(r1))
    f0 = f3 * f0
    r0 = *(u32*)(0x34(r1))
    *(u32*)(0x20(r1)) = r7
    *(u32*)(0x24(r1)) = r6
    *(u32*)(0x28(r1)) = r0
    *(f32*)(0x20(r1)) = f2
    *(f32*)(0x24(r1)) = f1
    *(f32*)(0x28(r1)) = f0
    sub_80555bf8()
    /* lis r30, 0 */
    r4 = *(u32*)(8(r31))
    r3 = *(u32*)(0(r30))
    /* li r6, 1 */
    r5 = *(u16*)(0x80(r31))
    /* li r7, 1 */
    f1 = *(f32*)(0x84(r31))
    sub_806e346c()
    *(u16*)(0x74(r31)) = (u16)r3
    r4 = (s16)r3
    /* li r5, 0 */
    r3 = *(u32*)(0(r30))
    sub_806e3720()
    *(u32*)(0x70(r31)) = r3
    /* li r4, 0 */
    f1 = *(f32*)(0(r28))
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x10(r12))
    ctr = r12
    call_indirect(ctr)
    r3 = *(u32*)(0x70(r31))
    /* li r0, 1 */
    f1 = *(f32*)(0x1fc(r28))
    r4 = r31 + 136
    *(u8*)(0x16(r3)) = (u8)r0
    r3 = r31 + 12
    f0 = *(f32*)(0x114(r28))
    r5 = r1 + 8
    *(u32*)(0x78(r31)) = r29
    r6 = r31 + 160
    r7 = *(u32*)(4(r31))
    *(f32*)(0xb4(r31)) = f1
    f3 = *(f32*)(0x168(r28))
    *(f32*)(0x344(r7)) = f0
    f2 = *(f32*)(0x9c(r31))
    f1 = *(f32*)(0x98(r31))
    f0 = *(f32*)(0x94(r31))
    f2 = f3 * f2
    f1 = f3 * f1
    f0 = f3 * f0
    *(f32*)(0x10(r1)) = f2
    *(f32*)(8(r1)) = f0
    *(f32*)(0xc(r1)) = f1
    sub_80555bf8()
    r3 = r31 + 60
    r4 = r31 + 12
    r5 = r1 + 72
    sub_80555bf8()
    /* li r28, 0 */
    /* li r29, 0 */
    goto LOC_805A2A74
    r0 = *(u32*)(0xac(r31))
LOC_805A2A38:
    r3 = r1 + 20
    r4 = r1 + 72
    r5 = r0 + r29
    sub_80555bf8()
    r0 = *(u32*)(8(r31))
    r28 = r28 + 1
    f0 = *(f32*)(0x14(r1))
    /* stfsx f0, r29, r0 */
    r3 = r0 + r29
    r29 = r29 + 12
    f0 = *(f32*)(0x18(r1))
    *(f32*)(4(r3)) = f0
    f0 = *(f32*)(0x1c(r1))
    *(f32*)(8(r3)) = f0
    r3 = *(u16*)(0x80(r31))
LOC_805A2A74:
    cmp(r28, r3)
    if (<) goto LOC_805A2A38
    r0 = r3 + -1
    r5 = *(u32*)(4(r31))
    r0 = r0 * 0xc
    r4 = *(u32*)(8(r31))
    f0 = *(f32*)(0xa0(r5))
    /* lis r3, 0 */
    /* stfsux f0, r4, r0 */
    f0 = *(f32*)(0xa4(r5))
    *(f32*)(4(r4)) = f0
    f0 = *(f32*)(0xa8(r5))
    *(f32*)(8(r4)) = f0
    r3 = *(u32*)(0(r3))
    r4 = *(s16*)(0x74(r31))
    r5 = *(u32*)(8(r31))
    r6 = *(u16*)(0x80(r31))
    f1 = *(f32*)(0x84(r31))
    sub_806e35dc()
    r0 = *(u16*)(0x6c(r31))
    /* lis r3, 0 */
    r0 |= 0x1
    *(u16*)(0x6c(r31)) = (u16)r0
    r3 = *(u32*)(0(r3))
    r3 = *(u32*)(0xb74(r3))
    cmp(r3, 0)
    if (!=) goto LOC_805A2AEC
    r0 |= 0x2
    *(u16*)(0x6c(r31)) = (u16)r0
    r0 = *(u32*)(0x94(r1))
LOC_805A2AEC:
    r31 = saved_r31
    r30 = *(u32*)(0x88(r1))
    r29 = *(u32*)(0x84(r1))
    r28 = *(u32*)(0x80(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a28cc */ stwu r1, -0x90(r1)
    /* 0x805a28d0 */ mflr r0
    /* 0x805a28d4 */ stw r0, 0x94(r1)
    /* 0x805a28d8 */ addi r5, r1, 0x2c
    /* 0x805a28dc */ stw r31, 0x8c(r1)
    /* 0x805a28e0 */ mr r31, r3
    /* 0x805a28e4 */ stw r30, 0x88(r1)
    /* 0x805a28e8 */ stw r29, 0x84(r1)
    /* 0x805a28ec */ li r29, 0
    /* 0x805a28f0 */ stw r28, 0x80(r1)
    /* 0x805a28f4 */ lis r28, 0
    /* 0x805a28f8 */ addi r28, r28, 0
    /* 0x805a28fc */ sth r29, 0x6c(r3)
    /* 0x805a2900 */ lis r3, 0
    /* 0x805a2904 */ lwz r4, 4(r31)
    /* 0x805a2908 */ lwz r3, 0(r3)
    /* 0x805a290c */ lbz r6, 0x9c(r4)
    /* 0x805a2910 */ addi r4, r1, 0x38
    /* 0x805a2914 */ bl 0x80537ff8
    /* 0x805a2918 */ lfs f3, 0x168(r28)
    /* 0x805a291c */ addi r3, r31, 0x3c
    /* 0x805a2920 */ lfs f2, 0x2c(r1)
    /* 0x805a2924 */ addi r4, r1, 0x20
    /* 0x805a2928 */ lfs f1, 0x30(r1)
    /* 0x805a292c */ addi r5, r1, 0x38
    /* 0x805a2930 */ lfs f0, 0x34(r1)
    /* 0x805a2934 */ fmuls f2, f3, f2
    /* 0x805a2938 */ lwz r7, 0x2c(r1)
    /* 0x805a293c */ fmuls f1, f3, f1
    /* 0x805a2940 */ lwz r6, 0x30(r1)
    /* 0x805a2944 */ fmuls f0, f3, f0
    /* 0x805a2948 */ lwz r0, 0x34(r1)
    /* 0x805a294c */ stw r7, 0x20(r1)
    /* 0x805a2950 */ stw r6, 0x24(r1)
    /* 0x805a2954 */ stw r0, 0x28(r1)
    /* 0x805a2958 */ stfs f2, 0x20(r1)
    /* 0x805a295c */ stfs f1, 0x24(r1)
    /* 0x805a2960 */ stfs f0, 0x28(r1)
    /* 0x805a2964 */ bl 0x80555bf4
    /* 0x805a2968 */ lis r30, 0
    /* 0x805a296c */ lwz r4, 8(r31)
    /* 0x805a2970 */ lwz r3, 0(r30)
    /* 0x805a2974 */ li r6, 1
    /* 0x805a2978 */ lhz r5, 0x80(r31)
    /* 0x805a297c */ li r7, 1
    /* 0x805a2980 */ lfs f1, 0x84(r31)
    /* 0x805a2984 */ bl 0x806e3468
    /* 0x805a2988 */ sth r3, 0x74(r31)
    /* 0x805a298c */ extsh r4, r3
    /* 0x805a2990 */ li r5, 0
    /* 0x805a2994 */ lwz r3, 0(r30)
    /* 0x805a2998 */ bl 0x806e371c
    /* 0x805a299c */ stw r3, 0x70(r31)
    /* 0x805a29a0 */ li r4, 0
    /* 0x805a29a4 */ lfs f1, 0(r28)
    /* 0x805a29a8 */ lwz r12, 0(r3)
    /* 0x805a29ac */ lwz r12, 0x10(r12)
    /* 0x805a29b0 */ mtctr r12
    /* 0x805a29b4 */ bctrl
    /* 0x805a29b8 */ lwz r3, 0x70(r31)
    /* 0x805a29bc */ li r0, 1
    /* 0x805a29c0 */ lfs f1, 0x1fc(r28)
    /* 0x805a29c4 */ addi r4, r31, 0x88
    /* 0x805a29c8 */ stb r0, 0x16(r3)
    /* 0x805a29cc */ addi r3, r31, 0xc
    /* 0x805a29d0 */ lfs f0, 0x114(r28)
    /* 0x805a29d4 */ addi r5, r1, 8
    /* 0x805a29d8 */ stw r29, 0x78(r31)
    /* 0x805a29dc */ addi r6, r31, 0xa0
    /* 0x805a29e0 */ lwz r7, 4(r31)
    /* 0x805a29e4 */ stfs f1, 0xb4(r31)
    /* 0x805a29e8 */ lfs f3, 0x168(r28)
    /* 0x805a29ec */ stfs f0, 0x344(r7)
    /* 0x805a29f0 */ lfs f2, 0x9c(r31)
    /* 0x805a29f4 */ lfs f1, 0x98(r31)
    /* 0x805a29f8 */ lfs f0, 0x94(r31)
    /* 0x805a29fc */ fmuls f2, f3, f2
    /* 0x805a2a00 */ fmuls f1, f3, f1
    /* 0x805a2a04 */ fmuls f0, f3, f0
    /* 0x805a2a08 */ stfs f2, 0x10(r1)
    /* 0x805a2a0c */ stfs f0, 8(r1)
    /* 0x805a2a10 */ stfs f1, 0xc(r1)
    /* 0x805a2a14 */ bl 0x80555bf4
    /* 0x805a2a18 */ addi r3, r31, 0x3c
    /* 0x805a2a1c */ addi r4, r31, 0xc
    /* 0x805a2a20 */ addi r5, r1, 0x48
    /* 0x805a2a24 */ bl 0x80555bf4
    /* 0x805a2a28 */ li r28, 0
    /* 0x805a2a2c */ li r29, 0
    /* 0x805a2a30 */ b 0x805a2a70
    /* 0x805a2a34 */ lwz r0, 0xac(r31)
    /* 0x805a2a38 */ addi r3, r1, 0x14
    /* 0x805a2a3c */ addi r4, r1, 0x48
    /* 0x805a2a40 */ add r5, r0, r29
    /* 0x805a2a44 */ bl 0x80555bf4
    /* 0x805a2a48 */ lwz r0, 8(r31)
    /* 0x805a2a4c */ addi r28, r28, 1
    /* 0x805a2a50 */ lfs f0, 0x14(r1)
    /* 0x805a2a54 */ stfsx f0, r29, r0
    /* 0x805a2a58 */ add r3, r0, r29
    /* 0x805a2a5c */ addi r29, r29, 0xc
    /* 0x805a2a60 */ lfs f0, 0x18(r1)
    /* 0x805a2a64 */ stfs f0, 4(r3)
    /* 0x805a2a68 */ lfs f0, 0x1c(r1)
    /* 0x805a2a6c */ stfs f0, 8(r3)
    /* 0x805a2a70 */ lhz r3, 0x80(r31)
    /* 0x805a2a74 */ cmplw r28, r3
    /* 0x805a2a78 */ blt 0x805a2a34
    /* 0x805a2a7c */ addi r0, r3, -1
    /* 0x805a2a80 */ lwz r5, 4(r31)
    /* 0x805a2a84 */ mulli r0, r0, 0xc
    /* 0x805a2a88 */ lwz r4, 8(r31)
    /* 0x805a2a8c */ lfs f0, 0xa0(r5)
    /* 0x805a2a90 */ lis r3, 0
    /* 0x805a2a94 */ stfsux f0, r4, r0
    /* 0x805a2a98 */ lfs f0, 0xa4(r5)
    /* 0x805a2a9c */ stfs f0, 4(r4)
    /* 0x805a2aa0 */ lfs f0, 0xa8(r5)
    /* 0x805a2aa4 */ stfs f0, 8(r4)
    /* 0x805a2aa8 */ lwz r3, 0(r3)
    /* 0x805a2aac */ lha r4, 0x74(r31)
    /* 0x805a2ab0 */ lwz r5, 8(r31)
    /* 0x805a2ab4 */ lhz r6, 0x80(r31)
    /* 0x805a2ab8 */ lfs f1, 0x84(r31)
    /* 0x805a2abc */ bl 0x806e35d8
    /* 0x805a2ac0 */ lhz r0, 0x6c(r31)
    /* 0x805a2ac4 */ lis r3, 0
    /* 0x805a2ac8 */ ori r0, r0, 1
    /* 0x805a2acc */ sth r0, 0x6c(r31)
    /* 0x805a2ad0 */ lwz r3, 0(r3)
    /* 0x805a2ad4 */ lwz r3, 0xb74(r3)
    /* 0x805a2ad8 */ cmpwi r3, 0
    /* 0x805a2adc */ bne 0x805a2ae8
    /* 0x805a2ae0 */ ori r0, r0, 2
    /* 0x805a2ae4 */ sth r0, 0x6c(r31)
    /* 0x805a2ae8 */ lwz r0, 0x94(r1)
    /* 0x805a2aec */ lwz r31, 0x8c(r1)
    /* 0x805a2af0 */ lwz r30, 0x88(r1)
    /* 0x805a2af4 */ lwz r29, 0x84(r1)
    /* 0x805a2af8 */ lwz r28, 0x80(r1)
    /* 0x805a2afc */ mtlr r0
    /* 0x805a2b00 */ addi r1, r1, 0x90
    /* 0x805a2b04 */ blr
