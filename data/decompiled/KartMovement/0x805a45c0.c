// sub_805a45c0
// Address: 0x805a45c0
// Total size: 488 bytes (code: 488, data: 0)
// Instructions: 122
// Stack frame: 0x30

#include "types.h"

// Pseudocode:
void func_805a45c0(void) {
    // stack: 0x30
    // 4 calls, 18 branches

    // prologue: sp -= 0x30
    // save lr
    /* lis r9, 0 */
    *(u32*)(0x34(r1)) = r0
    r25 = r3
    r26 = r4
    r27 = r5
    r28 = r6
    r29 = r7
    r30 = r8
    /* li r4, 0 */
    r3 = *(u32*)(0(r9))
    r3 = *(u32*)(0xb70(r3))
    r0 = r3 + -3
    cmp(r0, 7)
    if (>) goto LOC_805A461C
    /* li r3, 1 */
    r0 = slw(r3, r0)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A461C
    r4 = r3
    cmp(r4, 0)
LOC_805A461C:
    if (==) goto LOC_805A46CC
    /* li r3, 0x360 */
    sub_80555bf8()
    cmp(r3, 0)
    r31 = r3
    if (==) goto LOC_805A4760
    cmp(r29, 0)
    if (==) goto LOC_805A4648
    r24 = *(u32*)(0x34(r25))
    goto LOC_805A464C
    /* li r24, 0 */
LOC_805A4648:
    cmp(r28, 0)
LOC_805A464C:
    /* li r4, 0 */
    if (<) goto LOC_805A4670
    /* lis r3, 0 */
    r3 = r3 + 0
    r0 = *(u32*)(4(r3))
    cmp(r28, r0)
    if (>=) goto LOC_805A4670
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4670:
    if (!=) goto LOC_805A468C
    /* lis r3, 0 */
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    /* lis r4, 0 */
LOC_805A468C:
    r0 = rlwinm(r28, 2)
    r4 = r4 + 0
    r3 = r31
    r5 = *(u32*)(8(r4))
    r6 = r24
    r7 = r30
    r4 = (s8)r27
    r5 = *(u32*)(r5)
    sub_8059d540()
    /* lis r3, 0 */
    r3 = r3 + 0
    *(u32*)(0(r31)) = r3
    r0 = r3 + 48
    *(u32*)(0x88(r31)) = r0
    goto LOC_805A4760
    /* li r3, 0x348 */
LOC_805A46CC:
    sub_80555bf8()
    cmp(r3, 0)
    r31 = r3
    if (==) goto LOC_805A4760
    cmp(r29, 0)
    if (==) goto LOC_805A46F0
    r24 = *(u32*)(0x34(r25))
    goto LOC_805A46F4
    /* li r24, 0 */
LOC_805A46F0:
    cmp(r28, 0)
LOC_805A46F4:
    /* li r4, 0 */
    if (<) goto LOC_805A4718
    /* lis r3, 0 */
    r3 = r3 + 0
    r0 = *(u32*)(4(r3))
    cmp(r28, r0)
    if (>=) goto LOC_805A4718
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4718:
    if (!=) goto LOC_805A4734
    /* lis r3, 0 */
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    /* lis r4, 0 */
LOC_805A4734:
    r0 = rlwinm(r28, 2)
    r4 = r4 + 0
    r3 = r31
    r5 = *(u32*)(8(r4))
    r6 = r24
    r7 = r30
    r4 = (s8)r27
    r5 = *(u32*)(r5)
    sub_8059d540()
    r31 = r3
    cmp(r29, 0)
LOC_805A4760:
    if (==) goto LOC_805A4774
    r3 = *(u32*)(0x8c(r31))
    r0 = *(u32*)(0x90(r31))
    *(u32*)(0x6c(r3)) = r0
    cmp(r29, 0)
LOC_805A4774:
    if (!=) goto LOC_805A4784
    /* li r0, 0 */
    *(u8*)(0x33e(r31)) = (u8)r0
    r3 = *(u32*)(0x14(r25))
LOC_805A4784:
    r0 = rlwinm(r26, 2)
    /* stwx r31, r3, r0 */
    r3 = *(u32*)(0x18(r25))
    /* stwx r31, r3, r0 */
    // restore saved regs
    r0 = *(u32*)(0x34(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a45c0 */ stwu r1, -0x30(r1)
    /* 0x805a45c4 */ mflr r0
    /* 0x805a45c8 */ lis r9, 0
    /* 0x805a45cc */ stw r0, 0x34(r1)
    /* 0x805a45d0 */ stmw r24, 0x10(r1)
    /* 0x805a45d4 */ mr r25, r3
    /* 0x805a45d8 */ mr r26, r4
    /* 0x805a45dc */ mr r27, r5
    /* 0x805a45e0 */ mr r28, r6
    /* 0x805a45e4 */ mr r29, r7
    /* 0x805a45e8 */ mr r30, r8
    /* 0x805a45ec */ li r4, 0
    /* 0x805a45f0 */ lwz r3, 0(r9)
    /* 0x805a45f4 */ lwz r3, 0xb70(r3)
    /* 0x805a45f8 */ addi r0, r3, -3
    /* 0x805a45fc */ cmplwi r0, 7
    /* 0x805a4600 */ bgt 0x805a4618
    /* 0x805a4604 */ li r3, 1
    /* 0x805a4608 */ slw r0, r3, r0
    /* 0x805a460c */ andi. r0, r0, 0xc1
    /* 0x805a4610 */ beq 0x805a4618
    /* 0x805a4614 */ mr r4, r3
    /* 0x805a4618 */ cmpwi r4, 0
    /* 0x805a461c */ beq 0x805a46c8
    /* 0x805a4620 */ li r3, 0x360
    /* 0x805a4624 */ bl 0x80555bf4
    /* 0x805a4628 */ cmpwi r3, 0
    /* 0x805a462c */ mr r31, r3
    /* 0x805a4630 */ beq 0x805a475c
    /* 0x805a4634 */ cmpwi r29, 0
    /* 0x805a4638 */ beq 0x805a4644
    /* 0x805a463c */ lwz r24, 0x34(r25)
    /* 0x805a4640 */ b 0x805a4648
    /* 0x805a4644 */ li r24, 0
    /* 0x805a4648 */ cmpwi r28, 0
    /* 0x805a464c */ li r4, 0
    /* 0x805a4650 */ blt 0x805a466c
    /* 0x805a4654 */ lis r3, 0
    /* 0x805a4658 */ addi r3, r3, 0
    /* 0x805a465c */ lwz r0, 4(r3)
    /* 0x805a4660 */ cmpw r28, r0
    /* 0x805a4664 */ bge 0x805a466c
    /* 0x805a4668 */ li r4, 1
    /* 0x805a466c */ cmpwi r4, 0
    /* 0x805a4670 */ bne 0x805a4688
    /* 0x805a4674 */ lis r3, 0
    /* 0x805a4678 */ lwzu r12, 0(r3)
    /* 0x805a467c */ lwz r12, 0x18(r12)
    /* 0x805a4680 */ mtctr r12
    /* 0x805a4684 */ bctrl
    /* 0x805a4688 */ lis r4, 0
    /* 0x805a468c */ rlwinm r0, r28, 2, 0x16, 0x1d
    /* 0x805a4690 */ addi r4, r4, 0
    /* 0x805a4694 */ mr r3, r31
    /* 0x805a4698 */ lwz r5, 8(r4)
    /* 0x805a469c */ mr r6, r24
    /* 0x805a46a0 */ mr r7, r30
    /* 0x805a46a4 */ extsb r4, r27
    /* 0x805a46a8 */ lwzx r5, r5, r0
    /* 0x805a46ac */ bl 0x8059d53c
    /* 0x805a46b0 */ lis r3, 0
    /* 0x805a46b4 */ addi r3, r3, 0
    /* 0x805a46b8 */ stw r3, 0(r31)
    /* 0x805a46bc */ addi r0, r3, 0x30
    /* 0x805a46c0 */ stw r0, 0x88(r31)
    /* 0x805a46c4 */ b 0x805a475c
    /* 0x805a46c8 */ li r3, 0x348
    /* 0x805a46cc */ bl 0x80555bf4
    /* 0x805a46d0 */ cmpwi r3, 0
    /* 0x805a46d4 */ mr r31, r3
    /* 0x805a46d8 */ beq 0x805a475c
    /* 0x805a46dc */ cmpwi r29, 0
    /* 0x805a46e0 */ beq 0x805a46ec
    /* 0x805a46e4 */ lwz r24, 0x34(r25)
    /* 0x805a46e8 */ b 0x805a46f0
    /* 0x805a46ec */ li r24, 0
    /* 0x805a46f0 */ cmpwi r28, 0
    /* 0x805a46f4 */ li r4, 0
    /* 0x805a46f8 */ blt 0x805a4714
    /* 0x805a46fc */ lis r3, 0
    /* 0x805a4700 */ addi r3, r3, 0
    /* 0x805a4704 */ lwz r0, 4(r3)
    /* 0x805a4708 */ cmpw r28, r0
    /* 0x805a470c */ bge 0x805a4714
    /* 0x805a4710 */ li r4, 1
    /* 0x805a4714 */ cmpwi r4, 0
    /* 0x805a4718 */ bne 0x805a4730
    /* 0x805a471c */ lis r3, 0
    /* 0x805a4720 */ lwzu r12, 0(r3)
    /* 0x805a4724 */ lwz r12, 0x18(r12)
    /* 0x805a4728 */ mtctr r12
    /* 0x805a472c */ bctrl
    /* 0x805a4730 */ lis r4, 0
    /* 0x805a4734 */ rlwinm r0, r28, 2, 0x16, 0x1d
    /* 0x805a4738 */ addi r4, r4, 0
    /* 0x805a473c */ mr r3, r31
    /* 0x805a4740 */ lwz r5, 8(r4)
    /* 0x805a4744 */ mr r6, r24
    /* 0x805a4748 */ mr r7, r30
    /* 0x805a474c */ extsb r4, r27
    /* 0x805a4750 */ lwzx r5, r5, r0
    /* 0x805a4754 */ bl 0x8059d53c
    /* 0x805a4758 */ mr r31, r3
    /* 0x805a475c */ cmpwi r29, 0
    /* 0x805a4760 */ beq 0x805a4770
    /* 0x805a4764 */ lwz r3, 0x8c(r31)
    /* 0x805a4768 */ lwz r0, 0x90(r31)
    /* 0x805a476c */ stw r0, 0x6c(r3)
    /* 0x805a4770 */ cmpwi r29, 0
    /* 0x805a4774 */ bne 0x805a4780
    /* 0x805a4778 */ li r0, 0
    /* 0x805a477c */ stb r0, 0x33e(r31)
    /* 0x805a4780 */ lwz r3, 0x14(r25)
    /* 0x805a4784 */ rlwinm r0, r26, 2, 0x16, 0x1d
    /* 0x805a4788 */ stwx r31, r3, r0
    /* 0x805a478c */ lwz r3, 0x18(r25)
    /* 0x805a4790 */ stwx r31, r3, r0
    /* 0x805a4794 */ lmw r24, 0x10(r1)
    /* 0x805a4798 */ lwz r0, 0x34(r1)
    /* 0x805a479c */ mtlr r0
    /* 0x805a47a0 */ addi r1, r1, 0x30
    /* 0x805a47a4 */ blr
