// sub_805a3c10
// Address: 0x805a3c10
// Total size: 132 bytes (code: 132, data: 0)
// Instructions: 33
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a3c10(void) {
    // stack: 0x10
    // 2 calls, 2 returns

    // prologue: sp -= 0x10
    // save lr
    /* lis r3, 0 */
    *(u32*)(0x14(r1)) = r0
    r0 = *(u32*)(0(r3))
    cmp(r0, 0)
    if (!=) goto LOC_805A3C4C
    /* li r3, 0x38 */
    sub_80555bf8()
    cmp(r3, 0)
    if (==) goto LOC_805A3C44
    sub_805a3c98()
    /* lis r4, 0 */
LOC_805A3C44:
    *(u32*)(0(r4)) = r3
    r0 = *(u32*)(0x14(r1))
LOC_805A3C4C:
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    lr = r0
    // epilogue: restore sp
    return
    /* lis r4, 0 */
    r3 = *(u32*)(0(r4))
    cmp(r3, 0)
    if (cond) goto 
    /* li r0, 0 */
    *(u32*)(0(r4)) = r0
    if (cond) goto 
    r12 = *(u32*)(0(r3))
    /* li r4, 1 */
    r12 = *(u32*)(8(r12))
    ctr = r12
    goto ctr
    return
}

// === Raw Disassembly ===
    /* 0x805a3c10 */ stwu r1, -0x10(r1)
    /* 0x805a3c14 */ mflr r0
    /* 0x805a3c18 */ lis r3, 0
    /* 0x805a3c1c */ stw r0, 0x14(r1)
    /* 0x805a3c20 */ lwz r0, 0(r3)
    /* 0x805a3c24 */ cmpwi r0, 0
    /* 0x805a3c28 */ bne 0x805a3c48
    /* 0x805a3c2c */ li r3, 0x38
    /* 0x805a3c30 */ bl 0x80555bf4
    /* 0x805a3c34 */ cmpwi r3, 0
    /* 0x805a3c38 */ beq 0x805a3c40
    /* 0x805a3c3c */ bl 0x805a3c94
    /* 0x805a3c40 */ lis r4, 0
    /* 0x805a3c44 */ stw r3, 0(r4)
    /* 0x805a3c48 */ lwz r0, 0x14(r1)
    /* 0x805a3c4c */ lis r3, 0
    /* 0x805a3c50 */ lwz r3, 0(r3)
    /* 0x805a3c54 */ mtlr r0
    /* 0x805a3c58 */ addi r1, r1, 0x10
    /* 0x805a3c5c */ blr
    /* 0x805a3c60 */ lis r4, 0
    /* 0x805a3c64 */ lwz r3, 0(r4)
    /* 0x805a3c68 */ cmpwi r3, 0
    /* 0x805a3c6c */ beqlr
    /* 0x805a3c70 */ li r0, 0
    /* 0x805a3c74 */ stw r0, 0(r4)
    /* 0x805a3c78 */ beqlr
    /* 0x805a3c7c */ lwz r12, 0(r3)
    /* 0x805a3c80 */ li r4, 1
    /* 0x805a3c84 */ lwz r12, 8(r12)
    /* 0x805a3c88 */ mtctr r12
    /* 0x805a3c8c */ bctr
    /* 0x805a3c90 */ blr
