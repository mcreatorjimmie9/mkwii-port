// sub_805a3c94
// Address: 0x805a3c94
// Total size: 2164 bytes (code: 2164, data: 0)
// Instructions: 541
// Stack frame: 0x30

#include "types.h"

// Pseudocode:
void func_805a3c94(void) {
    // stack: 0x30
    // 30 calls, 78 branches

    // prologue: sp -= 0x30
    // save lr
    *(u32*)(0x34(r1)) = r0
    r31 = r3
    sub_8059d264()
    /* lis r3, 0 */
    r23 = r31 + 4
    r3 = r3 + 0
    *(u32*)(0(r31)) = r3
    r3 = r23
    sub_80555bf8()
    /* lis r3, 0 */
    /* li r0, 0 */
    r3 = r3 + 0
    *(u32*)(0(r23)) = r3
    /* lis r4, 0 */
    /* li r5, 0 */
    *(u8*)(0x24(r31)) = (u8)r0
    /* li r6, 0 */
    *(u8*)(0x27(r31)) = (u8)r0
    *(u16*)(0x2a(r31)) = (u16)r0
    *(u16*)(0x2c(r31)) = (u16)r0
    r3 = *(u32*)(0(r4))
    r3 = *(u32*)(0xb74(r3))
    r0 = r3 + -6
    r0 = __builtin_clz(r0)
    r0 = srwi(r0, 5)
    *(u8*)(0x25(r31)) = (u8)r0
    r4 = *(u32*)(0(r4))
    r0 = *(u8*)(0x27(r4))
    cmp(r0, 4)
    if (!=) goto LOC_805A3D30
    /* lis r3, 0 */
    r0 = *(u32*)(0(r3))
    cmp(r0, 4)
    if (!=) goto LOC_805A3D30
    /* li r6, 1 */
    cmp(r6, 0)
LOC_805A3D30:
    if (==) goto LOC_805A3D48
    r0 = *(u8*)(0x26(r4))
    cmp(r0, 3)
    if (!=) goto LOC_805A3D48
    /* li r5, 1 */
    *(u8*)(0x26(r31)) = (u8)r5
LOC_805A3D48:
    r3 = r31
    sub_8059d294()
    r0 = *(u8*)(0x25(r31))
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    cmp(r0, 0)
    *(u32*)(0x1c(r31)) = r3
    *(u32*)(0x20(r31)) = r3
    if (==) goto LOC_805A3D84
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    r0 = *(u8*)(0x24(r3))
    *(u32*)(0x1c(r31)) = r0
    goto LOC_805A3DA0
    r0 = *(u8*)(0x26(r31))
LOC_805A3D84:
    cmp(r0, 0)
    if (==) goto LOC_805A3DA0
    /* li r3, 3 */
    /* li r0, 6 */
    *(u32*)(0x20(r31)) = r3
    *(u32*)(0x1c(r31)) = r0
    r0 = *(u32*)(0x1c(r31))
LOC_805A3DA0:
    r3 = slwi(r0, 2)
    sub_80555bf8()
    r0 = *(u32*)(0x1c(r31))
    *(u32*)(0x14(r31)) = r3
    r3 = slwi(r0, 2)
    sub_80555bf8()
    *(u32*)(0x18(r31)) = r3
    /* lis r3, 0 */
    /* lis r5, 0 */
    /* li r4, 0 */
    r7 = *(u32*)(0(r3))
    r5 = r5 + 0
    r6 = *(u32*)(0xb70(r7))
    r3 = r6 + -3
    cmp(r3, 7)
    if (>) goto LOC_805A3DF8
    /* li r0, 1 */
    r0 = slw(r0, r3)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A3DF8
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A3DF8:
    if (==) goto LOC_805A3E10
    /* lis r3, 0 */
    r3 = r3 + 0
    r5 = r3 + 16
    goto LOC_805A3E30
    cmp(r6, 4)
LOC_805A3E10:
    if (!=) goto LOC_805A3E30
    r0 = *(u16*)(0xbe4(r7))
    cmp(r0, 7)
    if (!=) goto LOC_805A3E30
    /* lis r3, 0 */
    r3 = r3 + 0
    r5 = r3 + 34
    /* lis r23, 0 */
LOC_805A3E30:
    /* li r4, 0 */
    r3 = *(u32*)(0(r23))
    /* li r6, 0 */
    sub_80542528()
    cmp(r3, 0)
    *(u32*)(0x34(r31)) = r3
    if (!=) goto LOC_805A3E70
    /* lis r5, 0 */
    r3 = *(u32*)(0(r23))
    r5 = r5 + 0
    /* li r4, 0 */
    r5 = r5 + 53
    /* li r6, 0 */
    sub_80542528()
    *(u32*)(0x34(r31)) = r3
    r0 = *(u8*)(0x25(r31))
LOC_805A3E70:
    cmp(r0, 0)
    if (==) goto LOC_805A3FF8
    /* lis r27, 0 */
    /* lis r26, 0 */
    r27 = r27 + 0
    /* li r24, 0 */
    r26 = r26 + 0
    /* li r28, 1 */
    /* lis r29, 0 */
    /* li r23, 0 */
    goto LOC_805A3FE4
    r3 = *(u32*)(0(r29))
LOC_805A3EA0:
    /* li r4, 0 */
    r3 = *(u32*)(0xb70(r3))
    r0 = r3 + -3
    cmp(r0, 7)
    if (>) goto LOC_805A3EC8
    r0 = slw(r28, r0)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A3EC8
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A3EC8:
    if (==) goto LOC_805A3F44
    /* li r3, 0x360 */
    sub_80555bf8()
    cmp(r3, 0)
    r30 = r3
    if (==) goto LOC_805A3FAC
    /* clrlwi. r0, r24, 0x18 */
    if (!=) goto LOC_805A3EF4
    r25 = *(u32*)(0x34(r31))
    goto LOC_805A3EF8
    /* li r25, 0 */
LOC_805A3EF4:
    r0 = *(u32*)(4(r27))
LOC_805A3EF8:
    cmp(r0, 0)
    if (>) goto LOC_805A3F18
    r12 = *(u32*)(0(r27))
    r3 = r27
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r5 = *(u32*)(8(r27))
LOC_805A3F18:
    r3 = r30
    r6 = r25
    r4 = (s8)r24
    r5 = *(u32*)(0(r5))
    /* li r7, 0 */
    sub_8059d540()
    *(u32*)(0(r30)) = r26
    r0 = r26 + 48
    *(u32*)(0x88(r30)) = r0
    goto LOC_805A3FAC
    /* li r3, 0x348 */
LOC_805A3F44:
    sub_80555bf8()
    cmp(r3, 0)
    r30 = r3
    if (==) goto LOC_805A3FAC
    /* clrlwi. r0, r24, 0x18 */
    if (!=) goto LOC_805A3F68
    r25 = *(u32*)(0x34(r31))
    goto LOC_805A3F6C
    /* li r25, 0 */
LOC_805A3F68:
    r0 = *(u32*)(4(r27))
LOC_805A3F6C:
    cmp(r0, 0)
    if (>) goto LOC_805A3F8C
    r12 = *(u32*)(0(r27))
    r3 = r27
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r5 = *(u32*)(8(r27))
LOC_805A3F8C:
    r3 = r30
    r6 = r25
    r4 = (s8)r24
    r5 = *(u32*)(0(r5))
    /* li r7, 0 */
    sub_8059d540()
    r30 = r3
    /* clrlwi. r0, r24, 0x18 */
LOC_805A3FAC:
    if (!=) goto LOC_805A3FC0
    r3 = *(u32*)(0x8c(r30))
    r0 = *(u32*)(0x90(r30))
    *(u32*)(0x6c(r3)) = r0
    /* clrlwi. r0, r24, 0x18 */
LOC_805A3FC0:
    if (==) goto LOC_805A3FCC
    *(u8*)(0x33e(r30)) = (u8)r23
    r3 = *(u32*)(0x14(r31))
LOC_805A3FCC:
    r0 = rlwinm(r24, 2)
    r24 = r24 + 1
    /* stwx r30, r3, r0 */
    r3 = *(u32*)(0x18(r31))
    /* stwx r30, r3, r0 */
    r0 = *(u32*)(0x1c(r31))
LOC_805A3FE4:
    /* clrlwi r3, r24, 0x18 */
    cmp(r3, r0)
    if (<) goto LOC_805A3EA0
    goto LOC_805A448C
    r0 = *(u8*)(0x26(r31))
LOC_805A3FF8:
    cmp(r0, 0)
    if (==) goto LOC_805A4304
    /* lis r28, 0 */
    /* lis r26, 0 */
    /* li r23, 0 */
    /* lis r30, 0 */
    r27 = r28 + 0
    r26 = r26 + 0
    /* li r29, 1 */
    r3 = *(u32*)(0(r30))
LOC_805A4020:
    /* clrlwi r4, r23, 0x18 */
    sub_80533c90()
    r5 = *(u32*)(0(r30))
    /* clrlwi r25, r3, 0x18 */
    /* li r4, 0 */
    r3 = *(u32*)(0xb70(r5))
    r0 = r3 + -3
    cmp(r0, 7)
    if (>) goto LOC_805A4058
    r0 = slw(r29, r0)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A4058
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4058:
    if (==) goto LOC_805A40E0
    /* li r3, 0x360 */
    sub_80555bf8()
    cmp(r3, 0)
    r24 = r3
    if (==) goto LOC_805A4154
    /* clrlwi. r3, r23, 0x18 */
    r22 = *(u32*)(0x34(r31))
    /* li r4, 0 */
    if (<) goto LOC_805A4094
    r0 = *(u32*)(4(r27))
    cmp(r3, r0)
    if (>=) goto LOC_805A4094
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4094:
    if (!=) goto LOC_805A40B0
    r3 = r28 + 0
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r4 = *(u32*)(8(r27))
LOC_805A40B0:
    r0 = rlwinm(r23, 2)
    r3 = r24
    r6 = r22
    r5 = *(u32*)(r4)
    r4 = (s8)r25
    /* li r7, 0 */
    sub_8059d540()
    *(u32*)(0(r24)) = r26
    r0 = r26 + 48
    *(u32*)(0x88(r24)) = r0
    goto LOC_805A4154
    /* li r3, 0x348 */
LOC_805A40E0:
    sub_80555bf8()
    cmp(r3, 0)
    r24 = r3
    if (==) goto LOC_805A4154
    /* clrlwi. r3, r23, 0x18 */
    r22 = *(u32*)(0x34(r31))
    /* li r4, 0 */
    if (<) goto LOC_805A4114
    r0 = *(u32*)(4(r27))
    cmp(r3, r0)
    if (>=) goto LOC_805A4114
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4114:
    if (!=) goto LOC_805A4130
    r3 = r28 + 0
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r4 = *(u32*)(8(r27))
LOC_805A4130:
    r0 = rlwinm(r23, 2)
    r3 = r24
    r6 = r22
    r5 = *(u32*)(r4)
    r4 = (s8)r25
    /* li r7, 0 */
    sub_8059d540()
    r24 = r3
    r3 = *(u32*)(0x8c(r24))
LOC_805A4154:
    r4 = rlwinm(r23, 2)
    r0 = *(u32*)(0x90(r24))
    r23 = r23 + 1
    *(u32*)(0x6c(r3)) = r0
    cmp(r23, 3)
    r3 = *(u32*)(0x14(r31))
    /* stwx r24, r3, r4 */
    r3 = *(u32*)(0x18(r31))
    /* stwx r24, r3, r4 */
    if (<) goto LOC_805A4020
    /* lis r27, 0 */
    /* lis r26, 0 */
    r27 = r27 + 0
    /* li r23, 0 */
    r26 = r26 + 0
    /* lis r29, 0 */
    /* li r28, 1 */
    /* li r30, 0 */
    r3 = *(u32*)(0(r29))
LOC_805A41A0:
    /* clrlwi r4, r23, 0x18 */
    sub_80533c90()
    r5 = *(u32*)(0(r29))
    /* clrlwi r24, r3, 0x18 */
    /* li r4, 0 */
    r3 = *(u32*)(0xb70(r5))
    r0 = r3 + -3
    cmp(r0, 7)
    if (>) goto LOC_805A41D8
    r0 = slw(r28, r0)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A41D8
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A41D8:
    if (==) goto LOC_805A4254
    /* li r3, 0x360 */
    sub_80555bf8()
    cmp(r3, 0)
    r25 = r3
    if (==) goto LOC_805A42BC
    /* clrlwi. r0, r23, 0x18 */
    if (!=) goto LOC_805A4204
    r22 = *(u32*)(0x34(r31))
    goto LOC_805A4208
    /* li r22, 0 */
LOC_805A4204:
    r0 = *(u32*)(4(r27))
LOC_805A4208:
    cmp(r0, 3)
    if (>) goto LOC_805A4228
    r12 = *(u32*)(0(r27))
    r3 = r27
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r5 = *(u32*)(8(r27))
LOC_805A4228:
    r3 = r25
    r6 = r22
    r4 = (s8)r24
    r5 = *(u32*)(0xc(r5))
    /* li r7, 1 */
    sub_8059d540()
    *(u32*)(0(r25)) = r26
    r0 = r26 + 48
    *(u32*)(0x88(r25)) = r0
    goto LOC_805A42BC
    /* li r3, 0x348 */
LOC_805A4254:
    sub_80555bf8()
    cmp(r3, 0)
    r25 = r3
    if (==) goto LOC_805A42BC
    /* clrlwi. r0, r23, 0x18 */
    if (!=) goto LOC_805A4278
    r22 = *(u32*)(0x34(r31))
    goto LOC_805A427C
    /* li r22, 0 */
LOC_805A4278:
    r0 = *(u32*)(4(r27))
LOC_805A427C:
    cmp(r0, 3)
    if (>) goto LOC_805A429C
    r12 = *(u32*)(0(r27))
    r3 = r27
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r5 = *(u32*)(8(r27))
LOC_805A429C:
    r3 = r25
    r6 = r22
    r4 = (s8)r24
    r5 = *(u32*)(0xc(r5))
    /* li r7, 1 */
    sub_8059d540()
    r25 = r3
    /* clrlwi. r0, r23, 0x18 */
LOC_805A42BC:
    if (!=) goto LOC_805A42D0
    r3 = *(u32*)(0x8c(r25))
    r0 = *(u32*)(0x90(r25))
    *(u32*)(0x6c(r3)) = r0
    /* clrlwi. r0, r23, 0x18 */
LOC_805A42D0:
    if (==) goto LOC_805A42DC
    *(u8*)(0x33e(r25)) = (u8)r30
    r0 = r23 + 3
LOC_805A42DC:
    r3 = *(u32*)(0x14(r31))
    r0 = rlwinm(r0, 2)
    r23 = r23 + 1
    /* stwx r25, r3, r0 */
    cmp(r23, 3)
    r3 = *(u32*)(0x18(r31))
    /* stwx r25, r3, r0 */
    if (<) goto LOC_805A41A0
    goto LOC_805A448C
    /* lis r28, 0 */
LOC_805A4304:
    /* lis r30, 0 */
    /* li r23, 0 */
    /* lis r26, 0 */
    r29 = r28 + 0
    r30 = r30 + 0
    /* li r27, 1 */
    goto LOC_805A447C
    r3 = *(u32*)(0(r26))
LOC_805A4324:
    /* clrlwi r4, r23, 0x18 */
    sub_80533c90()
    r5 = *(u32*)(0(r26))
    /* clrlwi r24, r3, 0x18 */
    /* li r4, 0 */
    r3 = *(u32*)(0xb70(r5))
    r0 = r3 + -3
    cmp(r0, 7)
    if (>) goto LOC_805A435C
    r0 = slw(r27, r0)
    /* andi. r0, r0, 0xc1 */
    if (==) goto LOC_805A435C
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A435C:
    if (==) goto LOC_805A43E4
    /* li r3, 0x360 */
    sub_80555bf8()
    cmp(r3, 0)
    r25 = r3
    if (==) goto LOC_805A4458
    /* clrlwi. r3, r23, 0x18 */
    r22 = *(u32*)(0x34(r31))
    /* li r4, 0 */
    if (<) goto LOC_805A4398
    r0 = *(u32*)(4(r29))
    cmp(r3, r0)
    if (>=) goto LOC_805A4398
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4398:
    if (!=) goto LOC_805A43B4
    r3 = r28 + 0
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r4 = *(u32*)(8(r29))
LOC_805A43B4:
    r0 = rlwinm(r23, 2)
    r3 = r25
    r6 = r22
    r5 = *(u32*)(r4)
    r4 = (s8)r24
    /* li r7, 0 */
    sub_8059d540()
    *(u32*)(0(r25)) = r30
    r0 = r30 + 48
    *(u32*)(0x88(r25)) = r0
    goto LOC_805A4458
    /* li r3, 0x348 */
LOC_805A43E4:
    sub_80555bf8()
    cmp(r3, 0)
    r25 = r3
    if (==) goto LOC_805A4458
    /* clrlwi. r3, r23, 0x18 */
    r22 = *(u32*)(0x34(r31))
    /* li r4, 0 */
    if (<) goto LOC_805A4418
    r0 = *(u32*)(4(r29))
    cmp(r3, r0)
    if (>=) goto LOC_805A4418
    /* li r4, 1 */
    cmp(r4, 0)
LOC_805A4418:
    if (!=) goto LOC_805A4434
    r3 = r28 + 0
    r12 = *(u32*)(0(r3))
    r12 = *(u32*)(0x18(r12))
    ctr = r12
    call_indirect(ctr)
    r4 = *(u32*)(8(r29))
LOC_805A4434:
    r0 = rlwinm(r23, 2)
    r3 = r25
    r6 = r22
    r5 = *(u32*)(r4)
    r4 = (s8)r24
    /* li r7, 0 */
    sub_8059d540()
    r25 = r3
    r3 = *(u32*)(0x8c(r25))
LOC_805A4458:
    r4 = rlwinm(r23, 2)
    r0 = *(u32*)(0x90(r25))
    r23 = r23 + 1
    *(u32*)(0x6c(r3)) = r0
    r3 = *(u32*)(0x14(r31))
    /* stwx r25, r3, r4 */
    r3 = *(u32*)(0x18(r31))
    /* stwx r25, r3, r4 */
    r0 = *(u32*)(0x1c(r31))
LOC_805A447C:
    /* clrlwi r3, r23, 0x18 */
    cmp(r3, r0)
    if (<) goto LOC_805A4324
    /* li r0, 0 */
LOC_805A448C:
    *(u8*)(0x28(r31)) = (u8)r0
    /* lis r3, 0 */
    r3 = *(u32*)(0(r3))
    r0 = *(u32*)(0xb70(r3))
    cmp(r0, 0xb)
    if (!=) goto LOC_805A44D4
    r4 = *(u32*)(0xb74(r3))
    /* subfic r3, r4, 0xc */
    r0 = r4 + -0xc
    r0 = r3 | r0
    r0 = srwi(r0, 0x1f)
    *(u8*)(0x28(r31)) = (u8)r0
    sub_805ba6c0()
    /* lis r3, 0 */
    r4 = *(u8*)(0x28(r31))
    r3 = *(u32*)(0(r3))
    sub_805ba92c()
    /* li r3, 0x1c */
LOC_805A44D4:
    sub_80555bf8()
    cmp(r3, 0)
    if (==) goto LOC_805A44F0
    /* lis r4, 0 */
    r4 = *(u32*)(0(r4))
    sub_8054fe80()
    *(u32*)(0x30(r31)) = r3
LOC_805A44F0:
    r3 = r31
    // restore saved regs
    r0 = *(u32*)(0x34(r1))
    lr = r0
    // epilogue: restore sp
    return
}

// === Raw Disassembly ===
    /* 0x805a3c94 */ stwu r1, -0x30(r1)
    /* 0x805a3c98 */ mflr r0
    /* 0x805a3c9c */ stw r0, 0x34(r1)
    /* 0x805a3ca0 */ stmw r22, 8(r1)
    /* 0x805a3ca4 */ mr r31, r3
    /* 0x805a3ca8 */ bl 0x8059d260
    /* 0x805a3cac */ lis r3, 0
    /* 0x805a3cb0 */ addi r23, r31, 4
    /* 0x805a3cb4 */ addi r3, r3, 0
    /* 0x805a3cb8 */ stw r3, 0(r31)
    /* 0x805a3cbc */ mr r3, r23
    /* 0x805a3cc0 */ bl 0x80555bf4
    /* 0x805a3cc4 */ lis r3, 0
    /* 0x805a3cc8 */ li r0, 0
    /* 0x805a3ccc */ addi r3, r3, 0
    /* 0x805a3cd0 */ stw r3, 0(r23)
    /* 0x805a3cd4 */ lis r4, 0
    /* 0x805a3cd8 */ li r5, 0
    /* 0x805a3cdc */ stb r0, 0x24(r31)
    /* 0x805a3ce0 */ li r6, 0
    /* 0x805a3ce4 */ stb r0, 0x27(r31)
    /* 0x805a3ce8 */ sth r0, 0x2a(r31)
    /* 0x805a3cec */ sth r0, 0x2c(r31)
    /* 0x805a3cf0 */ lwz r3, 0(r4)
    /* 0x805a3cf4 */ lwz r3, 0xb74(r3)
    /* 0x805a3cf8 */ addi r0, r3, -6
    /* 0x805a3cfc */ cntlzw r0, r0
    /* 0x805a3d00 */ srwi r0, r0, 5
    /* 0x805a3d04 */ stb r0, 0x25(r31)
    /* 0x805a3d08 */ lwz r4, 0(r4)
    /* 0x805a3d0c */ lbz r0, 0x27(r4)
    /* 0x805a3d10 */ cmplwi r0, 4
    /* 0x805a3d14 */ bne 0x805a3d2c
    /* 0x805a3d18 */ lis r3, 0
    /* 0x805a3d1c */ lwz r0, 0(r3)
    /* 0x805a3d20 */ cmpwi r0, 4
    /* 0x805a3d24 */ bne 0x805a3d2c
    /* 0x805a3d28 */ li r6, 1
    /* 0x805a3d2c */ cmpwi r6, 0
    /* 0x805a3d30 */ beq 0x805a3d44
    /* 0x805a3d34 */ lbz r0, 0x26(r4)
    /* 0x805a3d38 */ cmplwi r0, 3
    /* 0x805a3d3c */ bne 0x805a3d44
    /* 0x805a3d40 */ li r5, 1
    /* 0x805a3d44 */ stb r5, 0x26(r31)
    /* 0x805a3d48 */ mr r3, r31
    /* 0x805a3d4c */ bl 0x8059d290
    /* 0x805a3d50 */ lbz r0, 0x25(r31)
    /* 0x805a3d54 */ lis r3, 0
    /* 0x805a3d58 */ lwz r3, 0(r3)
    /* 0x805a3d5c */ cmpwi r0, 0
    /* 0x805a3d60 */ stw r3, 0x1c(r31)
    /* 0x805a3d64 */ stw r3, 0x20(r31)
    /* 0x805a3d68 */ beq 0x805a3d80
    /* 0x805a3d6c */ lis r3, 0
    /* 0x805a3d70 */ lwz r3, 0(r3)
    /* 0x805a3d74 */ lbz r0, 0x24(r3)
    /* 0x805a3d78 */ stw r0, 0x1c(r31)
    /* 0x805a3d7c */ b 0x805a3d9c
    /* 0x805a3d80 */ lbz r0, 0x26(r31)
    /* 0x805a3d84 */ cmpwi r0, 0
    /* 0x805a3d88 */ beq 0x805a3d9c
    /* 0x805a3d8c */ li r3, 3
    /* 0x805a3d90 */ li r0, 6
    /* 0x805a3d94 */ stw r3, 0x20(r31)
    /* 0x805a3d98 */ stw r0, 0x1c(r31)
    /* 0x805a3d9c */ lwz r0, 0x1c(r31)
    /* 0x805a3da0 */ slwi r3, r0, 2
    /* 0x805a3da4 */ bl 0x80555bf4
    /* 0x805a3da8 */ lwz r0, 0x1c(r31)
    /* 0x805a3dac */ stw r3, 0x14(r31)
    /* 0x805a3db0 */ slwi r3, r0, 2
    /* 0x805a3db4 */ bl 0x80555bf4
    /* 0x805a3db8 */ stw r3, 0x18(r31)
    /* 0x805a3dbc */ lis r3, 0
    /* 0x805a3dc0 */ lis r5, 0
    /* 0x805a3dc4 */ li r4, 0
    /* 0x805a3dc8 */ lwz r7, 0(r3)
    /* 0x805a3dcc */ addi r5, r5, 0
    /* 0x805a3dd0 */ lwz r6, 0xb70(r7)
    /* 0x805a3dd4 */ addi r3, r6, -3
    /* 0x805a3dd8 */ cmplwi r3, 7
    /* 0x805a3ddc */ bgt 0x805a3df4
    /* 0x805a3de0 */ li r0, 1
    /* 0x805a3de4 */ slw r0, r0, r3
    /* 0x805a3de8 */ andi. r0, r0, 0xc1
    /* 0x805a3dec */ beq 0x805a3df4
    /* 0x805a3df0 */ li r4, 1
    /* 0x805a3df4 */ cmpwi r4, 0
    /* 0x805a3df8 */ beq 0x805a3e0c
    /* 0x805a3dfc */ lis r3, 0
    /* 0x805a3e00 */ addi r3, r3, 0
    /* 0x805a3e04 */ addi r5, r3, 0x10
    /* 0x805a3e08 */ b 0x805a3e2c
    /* 0x805a3e0c */ cmpwi r6, 4
    /* 0x805a3e10 */ bne 0x805a3e2c
    /* 0x805a3e14 */ lhz r0, 0xbe4(r7)
    /* 0x805a3e18 */ cmpwi r0, 7
    /* 0x805a3e1c */ bne 0x805a3e2c
    /* 0x805a3e20 */ lis r3, 0
    /* 0x805a3e24 */ addi r3, r3, 0
    /* 0x805a3e28 */ addi r5, r3, 0x22
    /* 0x805a3e2c */ lis r23, 0
    /* 0x805a3e30 */ li r4, 0
    /* 0x805a3e34 */ lwz r3, 0(r23)
    /* 0x805a3e38 */ li r6, 0
    /* 0x805a3e3c */ bl 0x80542524
    /* 0x805a3e40 */ cmpwi r3, 0
    /* 0x805a3e44 */ stw r3, 0x34(r31)
    /* 0x805a3e48 */ bne 0x805a3e6c
    /* 0x805a3e4c */ lis r5, 0
    /* 0x805a3e50 */ lwz r3, 0(r23)
    /* 0x805a3e54 */ addi r5, r5, 0
    /* 0x805a3e58 */ li r4, 0
    /* 0x805a3e5c */ addi r5, r5, 0x35
    /* 0x805a3e60 */ li r6, 0
    /* 0x805a3e64 */ bl 0x80542524
    /* 0x805a3e68 */ stw r3, 0x34(r31)
    /* 0x805a3e6c */ lbz r0, 0x25(r31)
    /* 0x805a3e70 */ cmpwi r0, 0
    /* 0x805a3e74 */ beq 0x805a3ff4
    /* 0x805a3e78 */ lis r27, 0
    /* 0x805a3e7c */ lis r26, 0
    /* 0x805a3e80 */ addi r27, r27, 0
    /* 0x805a3e84 */ li r24, 0
    /* 0x805a3e88 */ addi r26, r26, 0
    /* 0x805a3e8c */ li r28, 1
    /* 0x805a3e90 */ lis r29, 0
    /* 0x805a3e94 */ li r23, 0
    /* 0x805a3e98 */ b 0x805a3fe0
    /* 0x805a3e9c */ lwz r3, 0(r29)
    /* 0x805a3ea0 */ li r4, 0
    /* 0x805a3ea4 */ lwz r3, 0xb70(r3)
    /* 0x805a3ea8 */ addi r0, r3, -3
    /* 0x805a3eac */ cmplwi r0, 7
    /* 0x805a3eb0 */ bgt 0x805a3ec4
    /* 0x805a3eb4 */ slw r0, r28, r0
    /* 0x805a3eb8 */ andi. r0, r0, 0xc1
    /* 0x805a3ebc */ beq 0x805a3ec4
    /* 0x805a3ec0 */ li r4, 1
    /* 0x805a3ec4 */ cmpwi r4, 0
    /* 0x805a3ec8 */ beq 0x805a3f40
    /* 0x805a3ecc */ li r3, 0x360
    /* 0x805a3ed0 */ bl 0x80555bf4
    /* 0x805a3ed4 */ cmpwi r3, 0
    /* 0x805a3ed8 */ mr r30, r3
    /* 0x805a3edc */ beq 0x805a3fa8
    /* 0x805a3ee0 */ clrlwi. r0, r24, 0x18
    /* 0x805a3ee4 */ bne 0x805a3ef0
    /* 0x805a3ee8 */ lwz r25, 0x34(r31)
    /* 0x805a3eec */ b 0x805a3ef4
    /* 0x805a3ef0 */ li r25, 0
    /* 0x805a3ef4 */ lwz r0, 4(r27)
    /* 0x805a3ef8 */ cmpwi r0, 0
    /* 0x805a3efc */ bgt 0x805a3f14
    /* 0x805a3f00 */ lwz r12, 0(r27)
    /* 0x805a3f04 */ mr r3, r27
    /* 0x805a3f08 */ lwz r12, 0x18(r12)
    /* 0x805a3f0c */ mtctr r12
    /* 0x805a3f10 */ bctrl
    /* 0x805a3f14 */ lwz r5, 8(r27)
    /* 0x805a3f18 */ mr r3, r30
    /* 0x805a3f1c */ mr r6, r25
    /* 0x805a3f20 */ extsb r4, r24
    /* 0x805a3f24 */ lwz r5, 0(r5)
    /* 0x805a3f28 */ li r7, 0
    /* 0x805a3f2c */ bl 0x8059d53c
    /* 0x805a3f30 */ stw r26, 0(r30)
    /* 0x805a3f34 */ addi r0, r26, 0x30
    /* 0x805a3f38 */ stw r0, 0x88(r30)
    /* 0x805a3f3c */ b 0x805a3fa8
    /* 0x805a3f40 */ li r3, 0x348
    /* 0x805a3f44 */ bl 0x80555bf4
    /* 0x805a3f48 */ cmpwi r3, 0
    /* 0x805a3f4c */ mr r30, r3
    /* 0x805a3f50 */ beq 0x805a3fa8
    /* 0x805a3f54 */ clrlwi. r0, r24, 0x18
    /* 0x805a3f58 */ bne 0x805a3f64
    /* 0x805a3f5c */ lwz r25, 0x34(r31)
    /* 0x805a3f60 */ b 0x805a3f68
    /* 0x805a3f64 */ li r25, 0
    /* 0x805a3f68 */ lwz r0, 4(r27)
    /* 0x805a3f6c */ cmpwi r0, 0
    /* 0x805a3f70 */ bgt 0x805a3f88
    /* 0x805a3f74 */ lwz r12, 0(r27)
    /* 0x805a3f78 */ mr r3, r27
    /* 0x805a3f7c */ lwz r12, 0x18(r12)
    /* 0x805a3f80 */ mtctr r12
    /* 0x805a3f84 */ bctrl
    /* 0x805a3f88 */ lwz r5, 8(r27)
    /* 0x805a3f8c */ mr r3, r30
    /* 0x805a3f90 */ mr r6, r25
    /* 0x805a3f94 */ extsb r4, r24
    /* 0x805a3f98 */ lwz r5, 0(r5)
    /* 0x805a3f9c */ li r7, 0
    /* 0x805a3fa0 */ bl 0x8059d53c
    /* 0x805a3fa4 */ mr r30, r3
    /* 0x805a3fa8 */ clrlwi. r0, r24, 0x18
    /* 0x805a3fac */ bne 0x805a3fbc
    /* 0x805a3fb0 */ lwz r3, 0x8c(r30)
    /* 0x805a3fb4 */ lwz r0, 0x90(r30)
    /* 0x805a3fb8 */ stw r0, 0x6c(r3)
    /* 0x805a3fbc */ clrlwi. r0, r24, 0x18
    /* 0x805a3fc0 */ beq 0x805a3fc8
    /* 0x805a3fc4 */ stb r23, 0x33e(r30)
    /* 0x805a3fc8 */ lwz r3, 0x14(r31)
    /* 0x805a3fcc */ rlwinm r0, r24, 2, 0x16, 0x1d
    /* 0x805a3fd0 */ addi r24, r24, 1
    /* 0x805a3fd4 */ stwx r30, r3, r0
    /* 0x805a3fd8 */ lwz r3, 0x18(r31)
    /* 0x805a3fdc */ stwx r30, r3, r0
    /* 0x805a3fe0 */ lwz r0, 0x1c(r31)
    /* 0x805a3fe4 */ clrlwi r3, r24, 0x18
    /* 0x805a3fe8 */ cmpw r3, r0
    /* 0x805a3fec */ blt 0x805a3e9c
    /* 0x805a3ff0 */ b 0x805a4488
    /* 0x805a3ff4 */ lbz r0, 0x26(r31)
    /* 0x805a3ff8 */ cmpwi r0, 0
    /* 0x805a3ffc */ beq 0x805a4300
    /* 0x805a4000 */ lis r28, 0
    /* 0x805a4004 */ lis r26, 0
    /* 0x805a4008 */ li r23, 0
    /* 0x805a400c */ lis r30, 0
    /* 0x805a4010 */ addi r27, r28, 0
    /* 0x805a4014 */ addi r26, r26, 0
    /* 0x805a4018 */ li r29, 1
    /* 0x805a401c */ lwz r3, 0(r30)
    /* 0x805a4020 */ clrlwi r4, r23, 0x18
    /* 0x805a4024 */ bl 0x80533c8c
    /* 0x805a4028 */ lwz r5, 0(r30)
    /* 0x805a402c */ clrlwi r25, r3, 0x18
    /* 0x805a4030 */ li r4, 0
    /* 0x805a4034 */ lwz r3, 0xb70(r5)
    /* 0x805a4038 */ addi r0, r3, -3
    /* 0x805a403c */ cmplwi r0, 7
    /* 0x805a4040 */ bgt 0x805a4054
    /* 0x805a4044 */ slw r0, r29, r0
    /* 0x805a4048 */ andi. r0, r0, 0xc1
    /* 0x805a404c */ beq 0x805a4054
    /* 0x805a4050 */ li r4, 1
    /* 0x805a4054 */ cmpwi r4, 0
    /* 0x805a4058 */ beq 0x805a40dc
    /* 0x805a405c */ li r3, 0x360
    /* 0x805a4060 */ bl 0x80555bf4
    /* 0x805a4064 */ cmpwi r3, 0
    /* 0x805a4068 */ mr r24, r3
    /* 0x805a406c */ beq 0x805a4150
    /* 0x805a4070 */ clrlwi. r3, r23, 0x18
    /* 0x805a4074 */ lwz r22, 0x34(r31)
    /* 0x805a4078 */ li r4, 0
    /* 0x805a407c */ blt 0x805a4090
    /* 0x805a4080 */ lwz r0, 4(r27)
    /* 0x805a4084 */ cmpw r3, r0
    /* 0x805a4088 */ bge 0x805a4090
    /* 0x805a408c */ li r4, 1
    /* 0x805a4090 */ cmpwi r4, 0
    /* 0x805a4094 */ bne 0x805a40ac
    /* 0x805a4098 */ addi r3, r28, 0
    /* 0x805a409c */ lwz r12, 0(r3)
    /* 0x805a40a0 */ lwz r12, 0x18(r12)
    /* 0x805a40a4 */ mtctr r12
    /* 0x805a40a8 */ bctrl
    /* 0x805a40ac */ lwz r4, 8(r27)
    /* 0x805a40b0 */ rlwinm r0, r23, 2, 0x16, 0x1d
    /* 0x805a40b4 */ mr r3, r24
    /* 0x805a40b8 */ mr r6, r22
    /* 0x805a40bc */ lwzx r5, r4, r0
    /* 0x805a40c0 */ extsb r4, r25
    /* 0x805a40c4 */ li r7, 0
    /* 0x805a40c8 */ bl 0x8059d53c
    /* 0x805a40cc */ stw r26, 0(r24)
    /* 0x805a40d0 */ addi r0, r26, 0x30
    /* 0x805a40d4 */ stw r0, 0x88(r24)
    /* 0x805a40d8 */ b 0x805a4150
    /* 0x805a40dc */ li r3, 0x348
    /* 0x805a40e0 */ bl 0x80555bf4
    /* 0x805a40e4 */ cmpwi r3, 0
    /* 0x805a40e8 */ mr r24, r3
    /* 0x805a40ec */ beq 0x805a4150
    /* 0x805a40f0 */ clrlwi. r3, r23, 0x18
    /* 0x805a40f4 */ lwz r22, 0x34(r31)
    /* 0x805a40f8 */ li r4, 0
    /* 0x805a40fc */ blt 0x805a4110
    /* 0x805a4100 */ lwz r0, 4(r27)
    /* 0x805a4104 */ cmpw r3, r0
    /* 0x805a4108 */ bge 0x805a4110
    /* 0x805a410c */ li r4, 1
    /* 0x805a4110 */ cmpwi r4, 0
    /* 0x805a4114 */ bne 0x805a412c
    /* 0x805a4118 */ addi r3, r28, 0
    /* 0x805a411c */ lwz r12, 0(r3)
    /* 0x805a4120 */ lwz r12, 0x18(r12)
    /* 0x805a4124 */ mtctr r12
    /* 0x805a4128 */ bctrl
    /* 0x805a412c */ lwz r4, 8(r27)
    /* 0x805a4130 */ rlwinm r0, r23, 2, 0x16, 0x1d
    /* 0x805a4134 */ mr r3, r24
    /* 0x805a4138 */ mr r6, r22
    /* 0x805a413c */ lwzx r5, r4, r0
    /* 0x805a4140 */ extsb r4, r25
    /* 0x805a4144 */ li r7, 0
    /* 0x805a4148 */ bl 0x8059d53c
    /* 0x805a414c */ mr r24, r3
    /* 0x805a4150 */ lwz r3, 0x8c(r24)
    /* 0x805a4154 */ rlwinm r4, r23, 2, 0x16, 0x1d
    /* 0x805a4158 */ lwz r0, 0x90(r24)
    /* 0x805a415c */ addi r23, r23, 1
    /* 0x805a4160 */ stw r0, 0x6c(r3)
    /* 0x805a4164 */ cmplwi r23, 3
    /* 0x805a4168 */ lwz r3, 0x14(r31)
    /* 0x805a416c */ stwx r24, r3, r4
    /* 0x805a4170 */ lwz r3, 0x18(r31)
    /* 0x805a4174 */ stwx r24, r3, r4
    /* 0x805a4178 */ blt 0x805a401c
    /* 0x805a417c */ lis r27, 0
    /* 0x805a4180 */ lis r26, 0
    /* 0x805a4184 */ addi r27, r27, 0
    /* 0x805a4188 */ li r23, 0
    /* 0x805a418c */ addi r26, r26, 0
    /* 0x805a4190 */ lis r29, 0
    /* 0x805a4194 */ li r28, 1
    /* 0x805a4198 */ li r30, 0
    /* 0x805a419c */ lwz r3, 0(r29)
    /* 0x805a41a0 */ clrlwi r4, r23, 0x18
    /* 0x805a41a4 */ bl 0x80533c8c
    /* 0x805a41a8 */ lwz r5, 0(r29)
    /* 0x805a41ac */ clrlwi r24, r3, 0x18
    /* 0x805a41b0 */ li r4, 0
    /* 0x805a41b4 */ lwz r3, 0xb70(r5)
    /* 0x805a41b8 */ addi r0, r3, -3
    /* 0x805a41bc */ cmplwi r0, 7
    /* 0x805a41c0 */ bgt 0x805a41d4
    /* 0x805a41c4 */ slw r0, r28, r0
    /* 0x805a41c8 */ andi. r0, r0, 0xc1
    /* 0x805a41cc */ beq 0x805a41d4
    /* 0x805a41d0 */ li r4, 1
    /* 0x805a41d4 */ cmpwi r4, 0
    /* 0x805a41d8 */ beq 0x805a4250
    /* 0x805a41dc */ li r3, 0x360
    /* 0x805a41e0 */ bl 0x80555bf4
    /* 0x805a41e4 */ cmpwi r3, 0
    /* 0x805a41e8 */ mr r25, r3
    /* 0x805a41ec */ beq 0x805a42b8
    /* 0x805a41f0 */ clrlwi. r0, r23, 0x18
    /* 0x805a41f4 */ bne 0x805a4200
    /* 0x805a41f8 */ lwz r22, 0x34(r31)
    /* 0x805a41fc */ b 0x805a4204
    /* 0x805a4200 */ li r22, 0
    /* 0x805a4204 */ lwz r0, 4(r27)
    /* 0x805a4208 */ cmpwi r0, 3
    /* 0x805a420c */ bgt 0x805a4224
    /* 0x805a4210 */ lwz r12, 0(r27)
    /* 0x805a4214 */ mr r3, r27
    /* 0x805a4218 */ lwz r12, 0x18(r12)
    /* 0x805a421c */ mtctr r12
    /* 0x805a4220 */ bctrl
    /* 0x805a4224 */ lwz r5, 8(r27)
    /* 0x805a4228 */ mr r3, r25
    /* 0x805a422c */ mr r6, r22
    /* 0x805a4230 */ extsb r4, r24
    /* 0x805a4234 */ lwz r5, 0xc(r5)
    /* 0x805a4238 */ li r7, 1
    /* 0x805a423c */ bl 0x8059d53c
    /* 0x805a4240 */ stw r26, 0(r25)
    /* 0x805a4244 */ addi r0, r26, 0x30
    /* 0x805a4248 */ stw r0, 0x88(r25)
    /* 0x805a424c */ b 0x805a42b8
    /* 0x805a4250 */ li r3, 0x348
    /* 0x805a4254 */ bl 0x80555bf4
    /* 0x805a4258 */ cmpwi r3, 0
    /* 0x805a425c */ mr r25, r3
    /* 0x805a4260 */ beq 0x805a42b8
    /* 0x805a4264 */ clrlwi. r0, r23, 0x18
    /* 0x805a4268 */ bne 0x805a4274
    /* 0x805a426c */ lwz r22, 0x34(r31)
    /* 0x805a4270 */ b 0x805a4278
    /* 0x805a4274 */ li r22, 0
    /* 0x805a4278 */ lwz r0, 4(r27)
    /* 0x805a427c */ cmpwi r0, 3
    /* 0x805a4280 */ bgt 0x805a4298
    /* 0x805a4284 */ lwz r12, 0(r27)
    /* 0x805a4288 */ mr r3, r27
    /* 0x805a428c */ lwz r12, 0x18(r12)
    /* 0x805a4290 */ mtctr r12
    /* 0x805a4294 */ bctrl
    /* 0x805a4298 */ lwz r5, 8(r27)
    /* 0x805a429c */ mr r3, r25
    /* 0x805a42a0 */ mr r6, r22
    /* 0x805a42a4 */ extsb r4, r24
    /* 0x805a42a8 */ lwz r5, 0xc(r5)
    /* 0x805a42ac */ li r7, 1
    /* 0x805a42b0 */ bl 0x8059d53c
    /* 0x805a42b4 */ mr r25, r3
    /* 0x805a42b8 */ clrlwi. r0, r23, 0x18
    /* 0x805a42bc */ bne 0x805a42cc
    /* 0x805a42c0 */ lwz r3, 0x8c(r25)
    /* 0x805a42c4 */ lwz r0, 0x90(r25)
    /* 0x805a42c8 */ stw r0, 0x6c(r3)
    /* 0x805a42cc */ clrlwi. r0, r23, 0x18
    /* 0x805a42d0 */ beq 0x805a42d8
    /* 0x805a42d4 */ stb r30, 0x33e(r25)
    /* 0x805a42d8 */ addi r0, r23, 3
    /* 0x805a42dc */ lwz r3, 0x14(r31)
    /* 0x805a42e0 */ rlwinm r0, r0, 2, 0x16, 0x1d
    /* 0x805a42e4 */ addi r23, r23, 1
    /* 0x805a42e8 */ stwx r25, r3, r0
    /* 0x805a42ec */ cmplwi r23, 3
    /* 0x805a42f0 */ lwz r3, 0x18(r31)
    /* 0x805a42f4 */ stwx r25, r3, r0
    /* 0x805a42f8 */ blt 0x805a419c
    /* 0x805a42fc */ b 0x805a4488
    /* 0x805a4300 */ lis r28, 0
    /* 0x805a4304 */ lis r30, 0
    /* 0x805a4308 */ li r23, 0
    /* 0x805a430c */ lis r26, 0
    /* 0x805a4310 */ addi r29, r28, 0
    /* 0x805a4314 */ addi r30, r30, 0
    /* 0x805a4318 */ li r27, 1
    /* 0x805a431c */ b 0x805a4478
    /* 0x805a4320 */ lwz r3, 0(r26)
    /* 0x805a4324 */ clrlwi r4, r23, 0x18
    /* 0x805a4328 */ bl 0x80533c8c
    /* 0x805a432c */ lwz r5, 0(r26)
    /* 0x805a4330 */ clrlwi r24, r3, 0x18
    /* 0x805a4334 */ li r4, 0
    /* 0x805a4338 */ lwz r3, 0xb70(r5)
    /* 0x805a433c */ addi r0, r3, -3
    /* 0x805a4340 */ cmplwi r0, 7
    /* 0x805a4344 */ bgt 0x805a4358
    /* 0x805a4348 */ slw r0, r27, r0
    /* 0x805a434c */ andi. r0, r0, 0xc1
    /* 0x805a4350 */ beq 0x805a4358
    /* 0x805a4354 */ li r4, 1
    /* 0x805a4358 */ cmpwi r4, 0
    /* 0x805a435c */ beq 0x805a43e0
    /* 0x805a4360 */ li r3, 0x360
    /* 0x805a4364 */ bl 0x80555bf4
    /* 0x805a4368 */ cmpwi r3, 0
    /* 0x805a436c */ mr r25, r3
    /* 0x805a4370 */ beq 0x805a4454
    /* 0x805a4374 */ clrlwi. r3, r23, 0x18
    /* 0x805a4378 */ lwz r22, 0x34(r31)
    /* 0x805a437c */ li r4, 0
    /* 0x805a4380 */ blt 0x805a4394
    /* 0x805a4384 */ lwz r0, 4(r29)
    /* 0x805a4388 */ cmpw r3, r0
    /* 0x805a438c */ bge 0x805a4394
    /* 0x805a4390 */ li r4, 1
    /* 0x805a4394 */ cmpwi r4, 0
    /* 0x805a4398 */ bne 0x805a43b0
    /* 0x805a439c */ addi r3, r28, 0
    /* 0x805a43a0 */ lwz r12, 0(r3)
    /* 0x805a43a4 */ lwz r12, 0x18(r12)
    /* 0x805a43a8 */ mtctr r12
    /* 0x805a43ac */ bctrl
    /* 0x805a43b0 */ lwz r4, 8(r29)
    /* 0x805a43b4 */ rlwinm r0, r23, 2, 0x16, 0x1d
    /* 0x805a43b8 */ mr r3, r25
    /* 0x805a43bc */ mr r6, r22
    /* 0x805a43c0 */ lwzx r5, r4, r0
    /* 0x805a43c4 */ extsb r4, r24
    /* 0x805a43c8 */ li r7, 0
    /* 0x805a43cc */ bl 0x8059d53c
    /* 0x805a43d0 */ stw r30, 0(r25)
    /* 0x805a43d4 */ addi r0, r30, 0x30
    /* 0x805a43d8 */ stw r0, 0x88(r25)
    /* 0x805a43dc */ b 0x805a4454
    /* 0x805a43e0 */ li r3, 0x348
    /* 0x805a43e4 */ bl 0x80555bf4
    /* 0x805a43e8 */ cmpwi r3, 0
    /* 0x805a43ec */ mr r25, r3
    /* 0x805a43f0 */ beq 0x805a4454
    /* 0x805a43f4 */ clrlwi. r3, r23, 0x18
    /* 0x805a43f8 */ lwz r22, 0x34(r31)
    /* 0x805a43fc */ li r4, 0
    /* 0x805a4400 */ blt 0x805a4414
    /* 0x805a4404 */ lwz r0, 4(r29)
    /* 0x805a4408 */ cmpw r3, r0
    /* 0x805a440c */ bge 0x805a4414
    /* 0x805a4410 */ li r4, 1
    /* 0x805a4414 */ cmpwi r4, 0
    /* 0x805a4418 */ bne 0x805a4430
    /* 0x805a441c */ addi r3, r28, 0
    /* 0x805a4420 */ lwz r12, 0(r3)
    /* 0x805a4424 */ lwz r12, 0x18(r12)
    /* 0x805a4428 */ mtctr r12
    /* 0x805a442c */ bctrl
    /* 0x805a4430 */ lwz r4, 8(r29)
    /* 0x805a4434 */ rlwinm r0, r23, 2, 0x16, 0x1d
    /* 0x805a4438 */ mr r3, r25
    /* 0x805a443c */ mr r6, r22
    /* 0x805a4440 */ lwzx r5, r4, r0
    /* 0x805a4444 */ extsb r4, r24
    /* 0x805a4448 */ li r7, 0
    /* 0x805a444c */ bl 0x8059d53c
    /* 0x805a4450 */ mr r25, r3
    /* 0x805a4454 */ lwz r3, 0x8c(r25)
    /* 0x805a4458 */ rlwinm r4, r23, 2, 0x16, 0x1d
    /* 0x805a445c */ lwz r0, 0x90(r25)
    /* 0x805a4460 */ addi r23, r23, 1
    /* 0x805a4464 */ stw r0, 0x6c(r3)
    /* 0x805a4468 */ lwz r3, 0x14(r31)
    /* 0x805a446c */ stwx r25, r3, r4
    /* 0x805a4470 */ lwz r3, 0x18(r31)
    /* 0x805a4474 */ stwx r25, r3, r4
    /* 0x805a4478 */ lwz r0, 0x1c(r31)
    /* 0x805a447c */ clrlwi r3, r23, 0x18
    /* 0x805a4480 */ cmpw r3, r0
    /* 0x805a4484 */ blt 0x805a4320
    /* 0x805a4488 */ li r0, 0
    /* 0x805a448c */ stb r0, 0x28(r31)
    /* 0x805a4490 */ lis r3, 0
    /* 0x805a4494 */ lwz r3, 0(r3)
    /* 0x805a4498 */ lwz r0, 0xb70(r3)
    /* 0x805a449c */ cmpwi r0, 0xb
    /* 0x805a44a0 */ bne 0x805a44d0
    /* 0x805a44a4 */ lwz r4, 0xb74(r3)
    /* 0x805a44a8 */ subfic r3, r4, 0xc
    /* 0x805a44ac */ addi r0, r4, -0xc
    /* 0x805a44b0 */ or r0, r3, r0
    /* 0x805a44b4 */ srwi r0, r0, 0x1f
    /* 0x805a44b8 */ stb r0, 0x28(r31)
    /* 0x805a44bc */ bl 0x805ba6bc
    /* 0x805a44c0 */ lis r3, 0
    /* 0x805a44c4 */ lbz r4, 0x28(r31)
    /* 0x805a44c8 */ lwz r3, 0(r3)
    /* 0x805a44cc */ bl 0x805ba928
    /* 0x805a44d0 */ li r3, 0x1c
    /* 0x805a44d4 */ bl 0x80555bf4
    /* 0x805a44d8 */ cmpwi r3, 0
    /* 0x805a44dc */ beq 0x805a44ec
    /* 0x805a44e0 */ lis r4, 0
    /* 0x805a44e4 */ lwz r4, 0(r4)
    /* 0x805a44e8 */ bl 0x8054fe7c
    /* 0x805a44ec */ stw r3, 0x30(r31)
    /* 0x805a44f0 */ mr r3, r31
    /* 0x805a44f4 */ lmw r22, 8(r1)
    /* 0x805a44f8 */ lwz r0, 0x34(r1)
    /* 0x805a44fc */ mtlr r0
    /* 0x805a4500 */ addi r1, r1, 0x30
    /* 0x805a4504 */ blr
