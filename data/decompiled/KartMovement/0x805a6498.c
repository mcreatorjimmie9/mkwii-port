// sub_805a6498
// Address: 0x805a6498
// Total size: 164 bytes (code: 164, data: 0)
// Instructions: 41
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a6498(void) {
    // stack: 0x10
    // 2 calls, 6 branches

    // prologue: sp -= 0x10
    // save lr
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    *(u32*)(8(r1)) = r30
    r30 = r3
    r0 = *(u32*)(0x4c(r3))
    cmp(r0, 1)
    if (!=) goto LOC_805A6500
    r0 = *(u8*)(0x50(r3))
    cmp(r0, 0)
    if (!=) goto LOC_805A6528
    /* li r31, 1 */
    *(u32*)(0x4c(r3)) = r31
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    sub_805190c8()
    cmp(r3, 0)
    if (==) goto LOC_805A64F8
    *(u32*)(8(r30)) = r3
    goto LOC_805A6528
    *(u8*)(0x50(r30)) = (u8)r31
LOC_805A64F8:
    goto LOC_805A6528
    cmp(r4, -1)
LOC_805A6500:
    *(u16*)(0x30(r3)) = (u16)r4
    if (==) goto LOC_805A6520
    /* lis r3, 0 */
    /* clrlwi r4, r4, 0x10 */
    r3 = *(u32*)(0(r3))
    sub_80518ff0()
    *(u32*)(8(r30)) = r3
    /* li r0, 0 */
LOC_805A6520:
    *(u32*)(0x4c(r30)) = r0
    r0 = *(u32*)(0x14(r1))
LOC_805A6528:
    r31 = saved_r31
    r30 = *(u32*)(8(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a6498 */ stwu r1, -0x10(r1)
    /* 0x805a649c */ mflr r0
    /* 0x805a64a0 */ stw r0, 0x14(r1)
    /* 0x805a64a4 */ stw r31, 0xc(r1)
    /* 0x805a64a8 */ stw r30, 8(r1)
    /* 0x805a64ac */ mr r30, r3
    /* 0x805a64b0 */ lwz r0, 0x4c(r3)
    /* 0x805a64b4 */ cmpwi r0, 1
    /* 0x805a64b8 */ bne 0x805a64fc
    /* 0x805a64bc */ lbz r0, 0x50(r3)
    /* 0x805a64c0 */ cmpwi r0, 0
    /* 0x805a64c4 */ bne 0x805a6524
    /* 0x805a64c8 */ li r31, 1
    /* 0x805a64cc */ stw r31, 0x4c(r3)
    /* 0x805a64d0 */ lwz r12, 0(r3)
    /* 0x805a64d4 */ lwz r12, 0x14(r12)
    /* 0x805a64d8 */ mtctr r12
    /* 0x805a64dc */ bctrl
    /* 0x805a64e0 */ bl 0x805190c4
    /* 0x805a64e4 */ cmpwi r3, 0
    /* 0x805a64e8 */ beq 0x805a64f4
    /* 0x805a64ec */ stw r3, 8(r30)
    /* 0x805a64f0 */ b 0x805a6524
    /* 0x805a64f4 */ stb r31, 0x50(r30)
    /* 0x805a64f8 */ b 0x805a6524
    /* 0x805a64fc */ cmpwi r4, -1
    /* 0x805a6500 */ sth r4, 0x30(r3)
    /* 0x805a6504 */ beq 0x805a651c
    /* 0x805a6508 */ lis r3, 0
    /* 0x805a650c */ clrlwi r4, r4, 0x10
    /* 0x805a6510 */ lwz r3, 0(r3)
    /* 0x805a6514 */ bl 0x80518fec
    /* 0x805a6518 */ stw r3, 8(r30)
    /* 0x805a651c */ li r0, 0
    /* 0x805a6520 */ stw r0, 0x4c(r30)
    /* 0x805a6524 */ lwz r0, 0x14(r1)
    /* 0x805a6528 */ lwz r31, 0xc(r1)
    /* 0x805a652c */ lwz r30, 8(r1)
    /* 0x805a6530 */ mtlr r0
    /* 0x805a6534 */ addi r1, r1, 0x10
    /* 0x805a6538 */ blr
