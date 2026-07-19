// sub_805a47a8
// Address: 0x805a47a8
// Total size: 144 bytes (code: 144, data: 0)
// Instructions: 36
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a47a8(void) {
    // stack: 0x10
    // 1 calls, 5 branches, 2 returns

    // prologue: sp -= 0x10
    // save lr
    cmp(r3, 0)
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    if (==) goto LOC_805A47D4
    cmp(r4, 0)
    if (<=) goto LOC_805A47D4
    sub_80555bf8()
    r3 = r31
LOC_805A47D4:
    r31 = saved_r31
    r0 = *(u32*)(0x14(r1))
    lr = r0
    // epilogue: restore sp
    return
    r0 = *(u32*)(0x20(r3))
    /* li r6, 0 */
    /* li r5, 0 */
    ctr = r0
    cmp(r0, 0)
    if (<=) goto LOC_805A4828
    r4 = *(u32*)(0x18(r3))
LOC_805A4804:
    r4 = *(u32*)(r4)
    r4 = *(u32*)(0x198(r4))
    r0 = *(u16*)(0x6c(r4))
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    if (==) goto LOC_805A4820
    r6 = r6 + 1
    r5 = r5 + 4
LOC_805A4820:
    if (ctr-- != 0) goto LOC_805A4804
    r0 = *(u32*)(0x20(r3))
LOC_805A4828:
    r0 = r0 - r6
    r0 = __builtin_clz(r0)
    r3 = srwi(r0, 5)
    return
}

// === Raw Disassembly ===
    /* 0x805a47a8 */ stwu r1, -0x10(r1)
    /* 0x805a47ac */ mflr r0
    /* 0x805a47b0 */ cmpwi r3, 0
    /* 0x805a47b4 */ stw r0, 0x14(r1)
    /* 0x805a47b8 */ stw r31, 0xc(r1)
    /* 0x805a47bc */ mr r31, r3
    /* 0x805a47c0 */ beq 0x805a47d0
    /* 0x805a47c4 */ cmpwi r4, 0
    /* 0x805a47c8 */ ble 0x805a47d0
    /* 0x805a47cc */ bl 0x80555bf4
    /* 0x805a47d0 */ mr r3, r31
    /* 0x805a47d4 */ lwz r31, 0xc(r1)
    /* 0x805a47d8 */ lwz r0, 0x14(r1)
    /* 0x805a47dc */ mtlr r0
    /* 0x805a47e0 */ addi r1, r1, 0x10
    /* 0x805a47e4 */ blr
    /* 0x805a47e8 */ lwz r0, 0x20(r3)
    /* 0x805a47ec */ li r6, 0
    /* 0x805a47f0 */ li r5, 0
    /* 0x805a47f4 */ mtctr r0
    /* 0x805a47f8 */ cmpwi r0, 0
    /* 0x805a47fc */ ble 0x805a4824
    /* 0x805a4800 */ lwz r4, 0x18(r3)
    /* 0x805a4804 */ lwzx r4, r4, r5
    /* 0x805a4808 */ lwz r4, 0x198(r4)
    /* 0x805a480c */ lhz r0, 0x6c(r4)
    /* 0x805a4810 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
    /* 0x805a4814 */ beq 0x805a481c
    /* 0x805a4818 */ addi r6, r6, 1
    /* 0x805a481c */ addi r5, r5, 4
    /* 0x805a4820 */ bdnz 0x805a4800
    /* 0x805a4824 */ lwz r0, 0x20(r3)
    /* 0x805a4828 */ subf r0, r6, r0
    /* 0x805a482c */ cntlzw r0, r0
    /* 0x805a4830 */ srwi r3, r0, 5
    /* 0x805a4834 */ blr
