// sub_805a1e54
// Address: 0x805a1e54
// Total size: 176 bytes (code: 176, data: 0)
// Instructions: 44
// Stack frame: 0x10

#include "types.h"

// Pseudocode:
void func_805a1e54(void) {
    // stack: 0x10
    // 1 calls, 7 branches

    // prologue: sp -= 0x10
    // save lr
    /* lis r4, 0 */
    *(u32*)(0x14(r1)) = r0
    *(u32*)(0xc(r1)) = r31
    r31 = r3
    r3 = *(u32*)(0(r4))
    r3 = *(u32*)(0(r3))
    r0 = *(u8*)(0x38b(r3))
    cmp(r0, 0)
    if (!=) goto LOC_805A1EF4
    /* lis r3, 0 */
    r4 = *(u32*)(0(r3))
    r3 = *(u16*)(0x60(r4))
    r0 = *(u16*)(0x94(r4))
    r3 = rlwinm(r3, 0)
    /* andc. r0, r3, r0 */
    if (==) goto LOC_805A1EF4
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    r0 = *(u32*)(0xb70(r3))
    cmp(r0, 2)
    if (==) goto LOC_805A1EBC
    cmp(r0, 0)
    if (!=) goto LOC_805A1EC8
    r0 = *(u32*)(0xb74(r3))
LOC_805A1EBC:
    cmp(r0, 1)
    if (==) goto LOC_805A1EE8
    /* lis r4, 0 */
LOC_805A1EC8:
    r4 = *(u32*)(0(r4))
    r0 = *(u8*)(0x25(r4))
    cmp(r0, 0)
    if (!=) goto LOC_805A1EE8
    sub_80533d50()
    cmp(r3, 0)
    if (==) goto LOC_805A1EF4
    r0 = *(u16*)(0x340(r31))
LOC_805A1EE8:
    r0 = ~r0
    *(u16*)(0x340(r31)) = (u16)r0
    r0 = *(u32*)(0x14(r1))
LOC_805A1EF4:
    r31 = saved_r31
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a1e54 */ stwu r1, -0x10(r1)
    /* 0x805a1e58 */ mflr r0
    /* 0x805a1e5c */ lis r4, 0
    /* 0x805a1e60 */ stw r0, 0x14(r1)
    /* 0x805a1e64 */ stw r31, 0xc(r1)
    /* 0x805a1e68 */ mr r31, r3
    /* 0x805a1e6c */ lwz r3, 0(r4)
    /* 0x805a1e70 */ lwz r3, 0(r3)
    /* 0x805a1e74 */ lbz r0, 0x38b(r3)
    /* 0x805a1e78 */ cmpwi r0, 0
    /* 0x805a1e7c */ bne 0x805a1ef0
    /* 0x805a1e80 */ lis r3, 0
    /* 0x805a1e84 */ lwz r4, 0(r3)
    /* 0x805a1e88 */ lhz r3, 0x60(r4)
    /* 0x805a1e8c */ lhz r0, 0x94(r4)
    /* 0x805a1e90 */ rlwinm r3, r3, 0, 0x17, 0x17
    /* 0x805a1e94 */ andc. r0, r3, r0
    /* 0x805a1e98 */ beq 0x805a1ef0
    /* 0x805a1e9c */ lis r3, 0
    /* 0x805a1ea0 */ lwz r3, 0(r3)
    /* 0x805a1ea4 */ lwz r0, 0xb70(r3)
    /* 0x805a1ea8 */ cmpwi r0, 2
    /* 0x805a1eac */ beq 0x805a1eb8
    /* 0x805a1eb0 */ cmpwi r0, 0
    /* 0x805a1eb4 */ bne 0x805a1ec4
    /* 0x805a1eb8 */ lwz r0, 0xb74(r3)
    /* 0x805a1ebc */ cmpwi r0, 1
    /* 0x805a1ec0 */ beq 0x805a1ee4
    /* 0x805a1ec4 */ lis r4, 0
    /* 0x805a1ec8 */ lwz r4, 0(r4)
    /* 0x805a1ecc */ lbz r0, 0x25(r4)
    /* 0x805a1ed0 */ cmpwi r0, 0
    /* 0x805a1ed4 */ bne 0x805a1ee4
    /* 0x805a1ed8 */ bl 0x80533d4c
    /* 0x805a1edc */ cmpwi r3, 0
    /* 0x805a1ee0 */ beq 0x805a1ef0
    /* 0x805a1ee4 */ lhz r0, 0x340(r31)
    /* 0x805a1ee8 */ nor r0, r0, r0
    /* 0x805a1eec */ sth r0, 0x340(r31)
    /* 0x805a1ef0 */ lwz r0, 0x14(r1)
    /* 0x805a1ef4 */ lwz r31, 0xc(r1)
    /* 0x805a1ef8 */ mtlr r0
    /* 0x805a1efc */ addi r1, r1, 0x10
    /* 0x805a1f00 */ blr
