// sub_805a5788
// Address: 0x805a5788
// Total size: 492 bytes (code: 448, data: 44)
// Instructions: 112
// Stack frame: 0x60

#include "types.h"

// Pseudocode:
void func_805a5788(void) {
    // stack: 0x60
    // 3 calls, 49 FP ops, 8 branches

    // prologue: sp -= 0x60
    // save lr
    *(u32*)(0x64(r1)) = r0
    // SIMD: xscmpgtdp vs31, f1, f0
    *(u32*)(0x4c(r1)) = r31
    /* lis r31, 0 */
    r31 = r31 + 0
    *(u32*)(0x48(r1)) = r30
    r30 = r4
    *(u32*)(0x44(r1)) = r29
    r29 = r3
    r0 = *(u32*)(0x2c(r3))
    cmp(r0, 0)
    if (==) goto LOC_805A594C
    cmp(r4, 0)
    if (!=) goto LOC_805A5848
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    cmp(r3, 0)
    if (==) goto LOC_805A5848
    r12 = *(u32*)(0(r29))
    r3 = r29
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    cmp(r3, 0)
    if (!=) goto LOC_805A5848
    r12 = *(u32*)(0(r29))
    r3 = r29
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    cmp(r3, 0)
    if (==) goto LOC_805A594C
    r12 = *(u32*)(0(r29))
    r3 = r29
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    r3 = *(u32*)(0(r3))
    r0 = *(u32*)(0x24(r29))
    r3 = *(u8*)(0(r3))
    cmp(r0, r3)
    if (==) goto LOC_805A594C
    r3 = *(u32*)(0x2c(r29))
LOC_805A5848:
    sub_805907c0()
    f0 = *(f32*)(0x80(r3))
    cmp(r30, 0)
    *(f32*)(0x54(r29)) = f0
    f0 = *(f32*)(0x84(r3))
    *(f32*)(0x58(r29)) = f0
    f0 = *(f32*)(0x88(r3))
    *(f32*)(0x5c(r29)) = f0
    if (==) goto LOC_805A5924
    /* lis r3, 0 */
    f31 = *(f32*)(0x20(r31))
    r3 = *(u32*)(0(r3))
    r0 = *(u32*)(0xb68(r3))
    cmp(r0, 0x22)
    if (!=) goto LOC_805A588C
    f31 = *(f32*)(0x24(r31))
    r3 = *(u32*)(0x2c(r29))
LOC_805A588C:
    sub_805907c0()
    f0 = *(f32*)(0x28(r31))
    r4 = r3
    r3 = r1 + 8
    f1 = f0 * f31
    r4 = r4 + 56
    sub_80555bf8()
    f3 = *(f32*)(0x28(r1))
    f2 = *(f32*)(0x54(r29))
    f1 = *(f32*)(0x18(r1))
    f7 = f3 * f2
    f0 = *(f32*)(8(r1))
    f4 = f1 * f2
    f3 = *(f32*)(0x2c(r1))
    f1 = f0 * f2
    f5 = *(f32*)(0x58(r29))
    f0 = *(f32*)(0xc(r1))
    f6 = f3 * f5
    f2 = *(f32*)(0x1c(r1))
    f0 = f0 * f5
    f8 = *(f32*)(0x30(r1))
    f3 = f2 * f5
    f9 = *(f32*)(0x5c(r29))
    f5 = *(f32*)(0x20(r1))
    f6 = f7 + f6
    f2 = *(f32*)(0x10(r1))
    f8 = f8 * f9
    f3 = f4 + f3
    f5 = f5 * f9
    f0 = f1 + f0
    f2 = f2 * f9
    f4 = f8 + f6
    f1 = f5 + f3
    f0 = f2 + f0
    *(f32*)(0x5c(r29)) = f4
    *(f32*)(0x58(r29)) = f1
    *(f32*)(0x54(r29)) = f0
    r3 = *(u32*)(4(r29))
LOC_805A5924:
    f0 = *(f32*)(0(r31))
    r3 = *(u32*)(0x90(r3))
    f1 = *(f32*)(0x64(r3))
    *(f32*)(0x60(r29)) = f1
    f1 = *(f32*)(0x68(r3))
    *(f32*)(0x64(r29)) = f1
    f1 = *(f32*)(0x6c(r3))
    *(f32*)(0x68(r29)) = f1
    *(f32*)(0x6c(r29)) = f0
}

// === Raw Disassembly ===
    /* 0x805a5788 */ stwu r1, -0x60(r1)
    /* 0x805a578c */ mflr r0
    /* 0x805a5790 */ stw r0, 0x64(r1)
    /* 0x805a5794 */ stfd f31, 0x50(r1)
    /* 0x805a5798 */ xscmpgtdp vs31, f1, f0
    /* 0x805a579c */ stw r31, 0x4c(r1)
    /* 0x805a57a0 */ lis r31, 0
    /* 0x805a57a4 */ addi r31, r31, 0
    /* 0x805a57a8 */ stw r30, 0x48(r1)
    /* 0x805a57ac */ mr r30, r4
    /* 0x805a57b0 */ stw r29, 0x44(r1)
    /* 0x805a57b4 */ mr r29, r3
    /* 0x805a57b8 */ lwz r0, 0x2c(r3)
    /* 0x805a57bc */ cmpwi r0, 0
    /* 0x805a57c0 */ beq 0x805a5948
    /* 0x805a57c4 */ cmpwi r4, 0
    /* 0x805a57c8 */ bne 0x805a5844
    /* 0x805a57cc */ lwz r12, 0(r3)
    /* 0x805a57d0 */ lwz r12, 0x14(r12)
    /* 0x805a57d4 */ mtctr r12
    /* 0x805a57d8 */ bctrl
    /* 0x805a57dc */ cmpwi r3, 0
    /* 0x805a57e0 */ beq 0x805a5844
    /* 0x805a57e4 */ lwz r12, 0(r29)
    /* 0x805a57e8 */ mr r3, r29
    /* 0x805a57ec */ lwz r12, 0x18(r12)
    /* 0x805a57f0 */ mtctr r12
    /* 0x805a57f4 */ bctrl
    /* 0x805a57f8 */ cmpwi r3, 0
    /* 0x805a57fc */ bne 0x805a5844
    /* 0x805a5800 */ lwz r12, 0(r29)
    /* 0x805a5804 */ mr r3, r29
    /* 0x805a5808 */ lwz r12, 0x14(r12)
    /* 0x805a580c */ mtctr r12
    /* 0x805a5810 */ bctrl
    /* 0x805a5814 */ cmpwi r3, 0
    /* 0x805a5818 */ beq 0x805a5948
    /* 0x805a581c */ lwz r12, 0(r29)
    /* 0x805a5820 */ mr r3, r29
    /* 0x805a5824 */ lwz r12, 0x14(r12)
    /* 0x805a5828 */ mtctr r12
    /* 0x805a582c */ bctrl
    /* 0x805a5830 */ lwz r3, 0(r3)
    /* 0x805a5834 */ lwz r0, 0x24(r29)
    /* 0x805a5838 */ lbz r3, 0(r3)
    /* 0x805a583c */ cmpw r0, r3
    /* 0x805a5840 */ beq 0x805a5948
    /* 0x805a5844 */ lwz r3, 0x2c(r29)
    /* 0x805a5848 */ bl 0x805907bc
    /* 0x805a584c */ lfs f0, 0x80(r3)
    /* 0x805a5850 */ cmpwi r30, 0
    /* 0x805a5854 */ stfs f0, 0x54(r29)
    /* 0x805a5858 */ lfs f0, 0x84(r3)
    /* 0x805a585c */ stfs f0, 0x58(r29)
    /* 0x805a5860 */ lfs f0, 0x88(r3)
    /* 0x805a5864 */ stfs f0, 0x5c(r29)
    /* 0x805a5868 */ beq 0x805a5920
    /* 0x805a586c */ lis r3, 0
    /* 0x805a5870 */ lfs f31, 0x20(r31)
    /* 0x805a5874 */ lwz r3, 0(r3)
    /* 0x805a5878 */ lwz r0, 0xb68(r3)
    /* 0x805a587c */ cmpwi r0, 0x22
    /* 0x805a5880 */ bne 0x805a5888
    /* 0x805a5884 */ lfs f31, 0x24(r31)
    /* 0x805a5888 */ lwz r3, 0x2c(r29)
    /* 0x805a588c */ bl 0x805907bc
    /* 0x805a5890 */ lfs f0, 0x28(r31)
    /* 0x805a5894 */ mr r4, r3
    /* 0x805a5898 */ addi r3, r1, 8
    /* 0x805a589c */ fmuls f1, f0, f31
    /* 0x805a58a0 */ addi r4, r4, 0x38
    /* 0x805a58a4 */ bl 0x80555bf4
    /* 0x805a58a8 */ lfs f3, 0x28(r1)
    /* 0x805a58ac */ lfs f2, 0x54(r29)
    /* 0x805a58b0 */ lfs f1, 0x18(r1)
    /* 0x805a58b4 */ fmuls f7, f3, f2
    /* 0x805a58b8 */ lfs f0, 8(r1)
    /* 0x805a58bc */ fmuls f4, f1, f2
    /* 0x805a58c0 */ lfs f3, 0x2c(r1)
    /* 0x805a58c4 */ fmuls f1, f0, f2
    /* 0x805a58c8 */ lfs f5, 0x58(r29)
    /* 0x805a58cc */ lfs f0, 0xc(r1)
    /* 0x805a58d0 */ fmuls f6, f3, f5
    /* 0x805a58d4 */ lfs f2, 0x1c(r1)
    /* 0x805a58d8 */ fmuls f0, f0, f5
    /* 0x805a58dc */ lfs f8, 0x30(r1)
    /* 0x805a58e0 */ fmuls f3, f2, f5
    /* 0x805a58e4 */ lfs f9, 0x5c(r29)
    /* 0x805a58e8 */ lfs f5, 0x20(r1)
    /* 0x805a58ec */ fadds f6, f7, f6
    /* 0x805a58f0 */ lfs f2, 0x10(r1)
    /* 0x805a58f4 */ fmuls f8, f8, f9
    /* 0x805a58f8 */ fadds f3, f4, f3
    /* 0x805a58fc */ fmuls f5, f5, f9
    /* 0x805a5900 */ fadds f0, f1, f0
    /* 0x805a5904 */ fmuls f2, f2, f9
    /* 0x805a5908 */ fadds f4, f8, f6
    /* 0x805a590c */ fadds f1, f5, f3
    /* 0x805a5910 */ fadds f0, f2, f0
    /* 0x805a5914 */ stfs f4, 0x5c(r29)
    /* 0x805a5918 */ stfs f1, 0x58(r29)
    /* 0x805a591c */ stfs f0, 0x54(r29)
    /* 0x805a5920 */ lwz r3, 4(r29)
    /* 0x805a5924 */ lfs f0, 0(r31)
    /* 0x805a5928 */ lwz r3, 0x90(r3)
    /* 0x805a592c */ lfs f1, 0x64(r3)
    /* 0x805a5930 */ stfs f1, 0x60(r29)
    /* 0x805a5934 */ lfs f1, 0x68(r3)
    /* 0x805a5938 */ stfs f1, 0x64(r29)
    /* 0x805a593c */ lfs f1, 0x6c(r3)
    /* 0x805a5940 */ stfs f1, 0x68(r29)
    /* 0x805a5944 */ stfs f0, 0x6c(r29)

// === Embedded Data (44 bytes at 0x805a5948) ===
    /* 0x805a5948 */ 0xe3e10058  // -8.30108e+21f
    /* 0x805a594c */ 0x80010064  // -9.19756e-41f
    /* 0x805a5950 */ 0xcbe10050  // -2.94914e+07f
    /* 0x805a5954 */ 0x83e1004c  // -1.32244e-36f
    /* 0x805a5958 */ 0x83c10048  // -1.13436e-36f
    /* 0x805a595c */ 0x83a10044  // -9.46279e-37f
    /* 0x805a5960 */ 0x7c0803a6  // 2.82491e+36f
    /* 0x805a5964 */ 0x38210060  // 3.83857e-05f
    /* 0x805a5968 */ 0x4e800020  // 1.07375e+09f
    /* 0x805a596c */ 0x38600000  // 5.34058e-05f
    /* 0x805a5970 */ 0x4e800020  // 1.07375e+09f
