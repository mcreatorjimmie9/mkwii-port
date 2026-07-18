// sub_805a4838
// Address: 0x805a4838
// Total size: 96 bytes (code: 96, data: 0)
// Instructions: 24
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a4838(void) {
    // stack: 0x10
    // 3 calls

    // prologue: sp -= 0x10
    // save lr
    /* lis r4, 0 */
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    r3 = *(u32*)(0(r4))
    cmp(r3, 0)
    if (==) goto LOC_805A486C
    /* lis r4, 0 */
    r4 = *(u8*)(0(r4))
    sub_805bac44()
    /* lis r3, 0 */
LOC_805A486C:
    r0 = *(u32*)(0(r3))
    /* clrlwi. r0, r0, 0x1f */
    if (!=) goto LOC_805A4884
    r3 = *(u32*)(0x30(r31))
    sub_805504dc()
    sub_8083d8bc()
LOC_805A4884:
    r0 = *(u32*)(0x14(r1))
    r31 = saved_r31
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a4838 */ stwu r1, -0x10(r1)
    /* 0x805a483c */ mflr r0
    /* 0x805a4840 */ lis r4, 0
    /* 0x805a4844 */ stw r0, 0x14(r1)
    /* 0x805a4848 */ stw r31, 0xc(r1)
    /* 0x805a484c */ mr r31, r3
    /* 0x805a4850 */ lwz r3, 0(r4)
    /* 0x805a4854 */ cmpwi r3, 0
    /* 0x805a4858 */ beq 0x805a4868
    /* 0x805a485c */ lis r4, 0
    /* 0x805a4860 */ lbz r4, 0(r4)
    /* 0x805a4864 */ bl 0x805bac40
    /* 0x805a4868 */ lis r3, 0
    /* 0x805a486c */ lwz r0, 0(r3)
    /* 0x805a4870 */ clrlwi. r0, r0, 0x1f
    /* 0x805a4874 */ bne 0x805a4880
    /* 0x805a4878 */ lwz r3, 0x30(r31)
    /* 0x805a487c */ bl 0x805504d8
    /* 0x805a4880 */ bl 0x8083d8b8
    /* 0x805a4884 */ lwz r0, 0x14(r1)
    /* 0x805a4888 */ lwz r31, 0xc(r1)
    /* 0x805a488c */ mtlr r0
    /* 0x805a4890 */ addi r1, r1, 0x10
    /* 0x805a4894 */ blr
