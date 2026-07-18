// sub_805a5390
// Address: 0x805a5390
// Total size: 64 bytes (code: 64, data: 0)
// Instructions: 16
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a5390(void) {
    // stack: 0x10
    // 1 calls

    // prologue: sp -= 0x10
    // save lr
    cmp(r3, 0)
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    if (==) goto LOC_805A53BC
    cmp(r4, 0)
    if (<=) goto LOC_805A53BC
    sub_80555bf8()
    r3 = r31
LOC_805A53BC:
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a5390 */ stwu r1, -0x10(r1)
    /* 0x805a5394 */ mflr r0
    /* 0x805a5398 */ cmpwi r3, 0
    /* 0x805a539c */ stw r0, 0x14(r1)
    /* 0x805a53a0 */ stw r31, 0xc(r1)
    /* 0x805a53a4 */ mr r31, r3
    /* 0x805a53a8 */ beq 0x805a53b8
    /* 0x805a53ac */ cmpwi r4, 0
    /* 0x805a53b0 */ ble 0x805a53b8
    /* 0x805a53b4 */ bl 0x80555bf4
    /* 0x805a53b8 */ mr r3, r31
    /* 0x805a53bc */ lwz r31, 0xc(r1)
    /* 0x805a53c0 */ lwz r0, 0x14(r1)
    /* 0x805a53c4 */ mtlr r0
    /* 0x805a53c8 */ addi r1, r1, 0x10
    /* 0x805a53cc */ blr
