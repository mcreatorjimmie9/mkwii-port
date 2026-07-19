// sub_805a2730
// Address: 0x805a2730
// Total size: 64 bytes (code: 64, data: 0)
// Instructions: 16
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a2730(void) {
    // stack: 0x10
    // 1 calls

    // prologue: sp -= 0x10
    // save lr
    cmp(r3, 0)
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    if (==) goto LOC_805A275C
    cmp(r4, 0)
    if (<=) goto LOC_805A275C
    sub_80555bf8()
    r3 = r31
LOC_805A275C:
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a2730 */ stwu r1, -0x10(r1)
    /* 0x805a2734 */ mflr r0
    /* 0x805a2738 */ cmpwi r3, 0
    /* 0x805a273c */ stw r0, 0x14(r1)
    /* 0x805a2740 */ stw r31, 0xc(r1)
    /* 0x805a2744 */ mr r31, r3
    /* 0x805a2748 */ beq 0x805a2758
    /* 0x805a274c */ cmpwi r4, 0
    /* 0x805a2750 */ ble 0x805a2758
    /* 0x805a2754 */ bl 0x80555bf4
    /* 0x805a2758 */ mr r3, r31
    /* 0x805a275c */ lwz r31, 0xc(r1)
    /* 0x805a2760 */ lwz r0, 0x14(r1)
    /* 0x805a2764 */ mtlr r0
    /* 0x805a2768 */ addi r1, r1, 0x10
    /* 0x805a276c */ blr
