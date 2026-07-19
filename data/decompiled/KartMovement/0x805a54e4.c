// sub_805a54e4
// Address: 0x805a54e4
// Total size: 152 bytes (code: 152, data: 0)
// Instructions: 38
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a54e4(void) {
    // stack: 0x10
    // 2 calls, 4 FP ops, 3 returns

    // prologue: sp -= 0x10
    // save lr
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x14(r12))
    ctr = r12
    call_indirect(ctr)
    cmp(r3, 0)
    if (==) goto LOC_805A5520
    r3 = *(u32*)(0(r3))
    f0 = *(f32*)(0x24(r3))
    *(f32*)(0x34(r31)) = f0
    /* lis r3, 0 */
LOC_805A5520:
    /* li r0, 1 */
    f0 = *(f32*)(0(r3))
    /* lis r3, 0 */
    *(f32*)(0x14(r31)) = f0
    *(u8*)(0x51(r31)) = (u8)r0
    r3 = *(u32*)(0(r3))
    sub_807100c0()
    r3 = r31
    /* li r4, 0 */
    sub_805a578c()
    r0 = *(u32*)(0x14(r1))
    r31 = saved_r31
    lr = r0
    // epilogue: restore sp
    return
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    r3 = *(u32*)(0x44(r3))
    return
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    r3 = *(u32*)(0x4c(r3))
    return
}

// === Raw Disassembly ===
    /* 0x805a54e4 */ stwu r1, -0x10(r1)
    /* 0x805a54e8 */ mflr r0
    /* 0x805a54ec */ stw r0, 0x14(r1)
    /* 0x805a54f0 */ stw r31, 0xc(r1)
    /* 0x805a54f4 */ mr r31, r3
    /* 0x805a54f8 */ lwz r12, 0(r3)
    /* 0x805a54fc */ lwz r12, 0x14(r12)
    /* 0x805a5500 */ mtctr r12
    /* 0x805a5504 */ bctrl
    /* 0x805a5508 */ cmpwi r3, 0
    /* 0x805a550c */ beq 0x805a551c
    /* 0x805a5510 */ lwz r3, 0(r3)
    /* 0x805a5514 */ lfs f0, 0x24(r3)
    /* 0x805a5518 */ stfs f0, 0x34(r31)
    /* 0x805a551c */ lis r3, 0
    /* 0x805a5520 */ li r0, 1
    /* 0x805a5524 */ lfs f0, 0(r3)
    /* 0x805a5528 */ lis r3, 0
    /* 0x805a552c */ stfs f0, 0x14(r31)
    /* 0x805a5530 */ stb r0, 0x51(r31)
    /* 0x805a5534 */ lwz r3, 0(r3)
    /* 0x805a5538 */ bl 0x807100bc
    /* 0x805a553c */ mr r3, r31
    /* 0x805a5540 */ li r4, 0
    /* 0x805a5544 */ bl 0x805a5788
    /* 0x805a5548 */ lwz r0, 0x14(r1)
    /* 0x805a554c */ lwz r31, 0xc(r1)
    /* 0x805a5550 */ mtlr r0
    /* 0x805a5554 */ addi r1, r1, 0x10
    /* 0x805a5558 */ blr
    /* 0x805a555c */ lis r3, 0
    /* 0x805a5560 */ lwz r3, 0(r3)
    /* 0x805a5564 */ lwz r3, 0x44(r3)
    /* 0x805a5568 */ blr
    /* 0x805a556c */ lis r3, 0
    /* 0x805a5570 */ lwz r3, 0(r3)
    /* 0x805a5574 */ lwz r3, 0x4c(r3)
    /* 0x805a5578 */ blr
