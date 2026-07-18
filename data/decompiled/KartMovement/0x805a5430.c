// sub_805a5430
// Address: 0x805a5430
// Total size: 180 bytes (code: 180, data: 0)
// Instructions: 45
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a5430(void) {
    // stack: 0x10
    // 2 calls, 4 FP ops

    // prologue: sp -= 0x10
    // save lr
    /* lis r5, 0 */
    /* lis r9, 0 */
    *(u32*)(0x14(r1)) = r0
    /* li r8, 0 */
    f0 = *(f32*)(0(r5))
    r9 = r9 + 0
    *(u32*)(0xc(r1)) = r31
    /* li r5, 0xff */
    /* li r7, -1 */
    /* lis r6, 0 */
    *(u32*)(0(r3)) = r9
    /* li r0, 1 */
    r31 = r3
    *(u32*)(4(r3)) = r4
    *(u32*)(8(r3)) = r8
    *(f32*)(0xc(r3)) = f0
    *(f32*)(0x14(r3)) = f0
    *(u8*)(0x20(r3)) = (u8)r8
    *(u32*)(0x24(r3)) = r5
    *(u32*)(0x2c(r3)) = r8
    *(u16*)(0x30(r3)) = (u16)r7
    r5 = *(u32*)(0(r6))
    r4 = *(u32*)(4(r6))
    *(u32*)(0x3c(r3)) = r4
    *(u32*)(0x38(r3)) = r5
    r4 = *(u32*)(8(r6))
    *(u32*)(0x40(r3)) = r4
    *(f32*)(0x44(r3)) = f0
    *(u32*)(0x4c(r3)) = r7
    *(u8*)(0x50(r3)) = (u8)r8
    *(u8*)(0x51(r3)) = (u8)r0
    /* li r3, 0x38 */
    sub_80555bf8()
    cmp(r3, 0)
    if (==) goto LOC_805A54CC
    sub_807417c8()
    *(u32*)(0x28(r31)) = r3
LOC_805A54CC:
    r3 = r31
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a5430 */ stwu r1, -0x10(r1)
    /* 0x805a5434 */ mflr r0
    /* 0x805a5438 */ lis r5, 0
    /* 0x805a543c */ lis r9, 0
    /* 0x805a5440 */ stw r0, 0x14(r1)
    /* 0x805a5444 */ li r8, 0
    /* 0x805a5448 */ lfs f0, 0(r5)
    /* 0x805a544c */ addi r9, r9, 0
    /* 0x805a5450 */ stw r31, 0xc(r1)
    /* 0x805a5454 */ li r5, 0xff
    /* 0x805a5458 */ li r7, -1
    /* 0x805a545c */ lis r6, 0
    /* 0x805a5460 */ stw r9, 0(r3)
    /* 0x805a5464 */ li r0, 1
    /* 0x805a5468 */ mr r31, r3
    /* 0x805a546c */ stw r4, 4(r3)
    /* 0x805a5470 */ stw r8, 8(r3)
    /* 0x805a5474 */ stfs f0, 0xc(r3)
    /* 0x805a5478 */ stfs f0, 0x14(r3)
    /* 0x805a547c */ stb r8, 0x20(r3)
    /* 0x805a5480 */ stw r5, 0x24(r3)
    /* 0x805a5484 */ stw r8, 0x2c(r3)
    /* 0x805a5488 */ sth r7, 0x30(r3)
    /* 0x805a548c */ lwzu r5, 0(r6)
    /* 0x805a5490 */ lwz r4, 4(r6)
    /* 0x805a5494 */ stw r4, 0x3c(r3)
    /* 0x805a5498 */ stw r5, 0x38(r3)
    /* 0x805a549c */ lwz r4, 8(r6)
    /* 0x805a54a0 */ stw r4, 0x40(r3)
    /* 0x805a54a4 */ stfs f0, 0x44(r3)
    /* 0x805a54a8 */ stw r7, 0x4c(r3)
    /* 0x805a54ac */ stb r8, 0x50(r3)
    /* 0x805a54b0 */ stb r0, 0x51(r3)
    /* 0x805a54b4 */ li r3, 0x38
    /* 0x805a54b8 */ bl 0x80555bf4
    /* 0x805a54bc */ cmpwi r3, 0
    /* 0x805a54c0 */ beq 0x805a54c8
    /* 0x805a54c4 */ bl 0x807417c4
    /* 0x805a54c8 */ stw r3, 0x28(r31)
    /* 0x805a54cc */ mr r3, r31
    /* 0x805a54d0 */ lwz r31, 0xc(r1)
    /* 0x805a54d4 */ lwz r0, 0x14(r1)
    /* 0x805a54d8 */ mtlr r0
    /* 0x805a54dc */ addi r1, r1, 0x10
    /* 0x805a54e0 */ blr
