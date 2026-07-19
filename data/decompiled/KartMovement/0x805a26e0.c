// sub_805a26e0
// Address: 0x805a26e0
// Total size: 80 bytes (code: 80, data: 0)
// Instructions: 20
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a26e0(void) {
    // stack: 0x10
    // 1 calls

    // prologue: sp -= 0x10
    // save lr
    /* lis r6, 0 */
    r7 = r4
    *(u32*)(0x14(r1)) = r0
    r6 = r6 + 0
    /* li r0, 0 */
    r4 = r5
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    *(u32*)(0(r3)) = r6
    *(u32*)(4(r3)) = r7
    *(u32*)(0x70(r3)) = r0
    sub_805a2774()
    r3 = r31
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a26e0 */ stwu r1, -0x10(r1)
    /* 0x805a26e4 */ mflr r0
    /* 0x805a26e8 */ lis r6, 0
    /* 0x805a26ec */ mr r7, r4
    /* 0x805a26f0 */ stw r0, 0x14(r1)
    /* 0x805a26f4 */ addi r6, r6, 0
    /* 0x805a26f8 */ li r0, 0
    /* 0x805a26fc */ mr r4, r5
    /* 0x805a2700 */ stw r31, 0xc(r1)
    /* 0x805a2704 */ mr r31, r3
    /* 0x805a2708 */ stw r6, 0(r3)
    /* 0x805a270c */ stw r7, 4(r3)
    /* 0x805a2710 */ stw r0, 0x70(r3)
    /* 0x805a2714 */ bl 0x805a2770
    /* 0x805a2718 */ mr r3, r31
    /* 0x805a271c */ lwz r31, 0xc(r1)
    /* 0x805a2720 */ lwz r0, 0x14(r1)
    /* 0x805a2724 */ mtlr r0
    /* 0x805a2728 */ addi r1, r1, 0x10
    /* 0x805a272c */ blr
