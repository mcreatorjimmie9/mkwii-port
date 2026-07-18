// sub_805a2484
// Address: 0x805a2484
// Total size: 604 bytes (code: 604, data: 0)
// Instructions: 151
// Stack frame: 0xb0

#include "types.h"

// Pseudocode:
void func_805a2484(void) {
    // stack: 0xb0
    // 1 calls, 96 FP ops, 3 branches, 5 returns

    // prologue: sp -= 0xb0
    // save lr
    /* lis r7, 0 */
    /* lis r6, 0 */
    *(u32*)(0xb4(r1)) = r0
    r7 = r7 + 0
    f3 = *(f32*)(0(r7))
    r6 = r6 + 0
    *(u32*)(0xac(r1)) = r31
    cmp(r5, 0)
    f2 = *(f32*)(0xf4(r7))
    r31 = r4
    f0 = *(f32*)(0xf8(r7))
    *(u32*)(0x18(r1)) = r6
    *(f32*)(0x7c(r1)) = f3
    *(f32*)(0x80(r1)) = f2
    *(f32*)(0x84(r1)) = f3
    *(f32*)(0x88(r1)) = f3
    *(f32*)(0x8c(r1)) = f3
    *(f32*)(0x90(r1)) = f3
    *(f32*)(0x94(r1)) = f3
    *(f32*)(0x98(r1)) = f0
    *(f32*)(0x9c(r1)) = f3
    f2 = *(f32*)(0x70(r3))
    f7 = *(f32*)(0x64(r3))
    f0 = *(f32*)(0x74(r3))
    f3 = f2 - f7
    f6 = *(f32*)(0x68(r3))
    f2 = *(f32*)(0x78(r3))
    f4 = f0 - f6
    f5 = *(f32*)(0x6c(r3))
    f0 = f3 * f1
    f3 = f2 - f5
    f4 = f4 * f1
    *(f32*)(8(r1)) = f0
    f2 = f7 + f0
    f3 = f3 * f1
    *(f32*)(0xc(r1)) = f4
    f1 = f6 + f4
    *(f32*)(0x10(r1)) = f3
    f0 = f5 + f3
    *(f32*)(0x7c(r1)) = f2
    *(f32*)(0x80(r1)) = f1
    *(f32*)(0x84(r1)) = f0
    if (==) goto LOC_805A2550
    *(f32*)(0(r5)) = f2
    f0 = *(f32*)(0x80(r1))
    *(f32*)(4(r5)) = f0
    f0 = *(f32*)(0x84(r1))
    *(f32*)(8(r5)) = f0
    f0 = *(f32*)(0x70(r3))
LOC_805A2550:
    *(f32*)(0x88(r1)) = f0
    f0 = *(f32*)(0x74(r3))
    *(f32*)(0x8c(r1)) = f0
    f0 = *(f32*)(0x78(r3))
    *(f32*)(0x90(r1)) = f0
    f0 = *(f32*)(0x7c(r3))
    *(f32*)(0x94(r1)) = f0
    f0 = *(f32*)(0x80(r3))
    *(f32*)(0x98(r1)) = f0
    f0 = *(f32*)(0x84(r3))
    r3 = r1 + 24
    *(f32*)(0x9c(r1)) = f0
    sub_80555bf8()
    f0 = *(f32*)(0x1c(r1))
    *(f32*)(0(r31)) = f0
    f0 = *(f32*)(0x20(r1))
    *(f32*)(4(r31)) = f0
    f0 = *(f32*)(0x24(r1))
    *(f32*)(8(r31)) = f0
    f0 = *(f32*)(0x28(r1))
    *(f32*)(0xc(r31)) = f0
    f0 = *(f32*)(0x2c(r1))
    *(f32*)(0x10(r31)) = f0
    f0 = *(f32*)(0x30(r1))
    *(f32*)(0x14(r31)) = f0
    f0 = *(f32*)(0x34(r1))
    *(f32*)(0x18(r31)) = f0
    f0 = *(f32*)(0x38(r1))
    *(f32*)(0x1c(r31)) = f0
    f0 = *(f32*)(0x3c(r1))
    *(f32*)(0x20(r31)) = f0
    f0 = *(f32*)(0x40(r1))
    *(f32*)(0x24(r31)) = f0
    f0 = *(f32*)(0x44(r1))
    *(f32*)(0x28(r31)) = f0
    f0 = *(f32*)(0x48(r1))
    *(f32*)(0x2c(r31)) = f0
    r31 = saved_r31
    r0 = *(u32*)(0xb4(r1))
    lr = r0
    // epilogue: restore sp
    return
    r4 = *(u16*)(0x334(r3))
    /* li r0, 0x3c */
    *(u16*)(0x33c(r3)) = (u16)r0
    r0 = r4 | 0x200
    *(u16*)(0x334(r3)) = (u16)r0
    return
    r0 = *(u16*)(0x334(r3))
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */
    if (cond) goto 
    r4 = *(s16*)(0x33c(r3))
    r0 = r4 + -1
    *(u16*)(0x33c(r3)) = (u16)r0
    r0 = (s16)r0
    if (>=) goto LOC_805A2644
    /* li r0, 0 */
    *(u16*)(0x33c(r3)) = (u16)r0
    /* li r0, 1 */
    goto LOC_805A2648
    /* li r0, 0 */
LOC_805A2644:
    cmp(r0, 0)
LOC_805A2648:
    if (cond) goto 
    r0 = *(u16*)(0x334(r3))
    r0 = rlwinm(r0, 0)
    *(u16*)(0x334(r3)) = (u16)r0
    return
    /* lis r4, 0 */
    f0 = *(f32*)(0(r4))
    *(f32*)(0x344(r3)) = f0
    return
    r0 = *(u32*)(0(r4))
    r5 = r4 + 48
    *(u32*)(0(r3)) = r0
    r0 = r4 + 240
    r6 = *(u16*)(4(r4))
    *(u16*)(4(r3)) = (u16)r6
    f0 = *(f32*)(8(r4))
    *(f32*)(8(r3)) = f0
    f0 = *(f32*)(0xc(r4))
    *(f32*)(0xc(r3)) = f0
    f0 = *(f32*)(0x10(r4))
    *(f32*)(0x10(r3)) = f0
    f0 = *(f32*)(0x14(r4))
    *(f32*)(0x14(r3)) = f0
    f0 = *(f32*)(0x18(r4))
    *(f32*)(0x18(r3)) = f0
    f0 = *(f32*)(0x1c(r4))
    *(f32*)(0x1c(r3)) = f0
    f0 = *(f32*)(0x20(r4))
    *(f32*)(0x20(r3)) = f0
    f0 = *(f32*)(0x24(r4))
    *(f32*)(0x24(r3)) = f0
    f0 = *(f32*)(0x28(r4))
    *(f32*)(0x28(r3)) = f0
    f0 = *(f32*)(0x2c(r4))
    *(f32*)(0x2c(r3)) = f0
    *(u32*)(0x30(r3)) = r5
    *(u32*)(0x34(r3)) = r0
    return
}

// === Raw Disassembly ===
    /* 0x805a2484 */ stwu r1, -0xb0(r1)
    /* 0x805a2488 */ mflr r0
    /* 0x805a248c */ lis r7, 0
    /* 0x805a2490 */ lis r6, 0
    /* 0x805a2494 */ stw r0, 0xb4(r1)
    /* 0x805a2498 */ addi r7, r7, 0
    /* 0x805a249c */ lfs f3, 0(r7)
    /* 0x805a24a0 */ addi r6, r6, 0
    /* 0x805a24a4 */ stw r31, 0xac(r1)
    /* 0x805a24a8 */ cmpwi r5, 0
    /* 0x805a24ac */ lfs f2, 0xf4(r7)
    /* 0x805a24b0 */ mr r31, r4
    /* 0x805a24b4 */ lfs f0, 0xf8(r7)
    /* 0x805a24b8 */ stw r6, 0x18(r1)
    /* 0x805a24bc */ stfs f3, 0x7c(r1)
    /* 0x805a24c0 */ stfs f2, 0x80(r1)
    /* 0x805a24c4 */ stfs f3, 0x84(r1)
    /* 0x805a24c8 */ stfs f3, 0x88(r1)
    /* 0x805a24cc */ stfs f3, 0x8c(r1)
    /* 0x805a24d0 */ stfs f3, 0x90(r1)
    /* 0x805a24d4 */ stfs f3, 0x94(r1)
    /* 0x805a24d8 */ stfs f0, 0x98(r1)
    /* 0x805a24dc */ stfs f3, 0x9c(r1)
    /* 0x805a24e0 */ lfs f2, 0x70(r3)
    /* 0x805a24e4 */ lfs f7, 0x64(r3)
    /* 0x805a24e8 */ lfs f0, 0x74(r3)
    /* 0x805a24ec */ fsubs f3, f2, f7
    /* 0x805a24f0 */ lfs f6, 0x68(r3)
    /* 0x805a24f4 */ lfs f2, 0x78(r3)
    /* 0x805a24f8 */ fsubs f4, f0, f6
    /* 0x805a24fc */ lfs f5, 0x6c(r3)
    /* 0x805a2500 */ fmuls f0, f3, f1
    /* 0x805a2504 */ fsubs f3, f2, f5
    /* 0x805a2508 */ fmuls f4, f4, f1
    /* 0x805a250c */ stfs f0, 8(r1)
    /* 0x805a2510 */ fadds f2, f7, f0
    /* 0x805a2514 */ fmuls f3, f3, f1
    /* 0x805a2518 */ stfs f4, 0xc(r1)
    /* 0x805a251c */ fadds f1, f6, f4
    /* 0x805a2520 */ stfs f3, 0x10(r1)
    /* 0x805a2524 */ fadds f0, f5, f3
    /* 0x805a2528 */ stfs f2, 0x7c(r1)
    /* 0x805a252c */ stfs f1, 0x80(r1)
    /* 0x805a2530 */ stfs f0, 0x84(r1)
    /* 0x805a2534 */ beq 0x805a254c
    /* 0x805a2538 */ stfs f2, 0(r5)
    /* 0x805a253c */ lfs f0, 0x80(r1)
    /* 0x805a2540 */ stfs f0, 4(r5)
    /* 0x805a2544 */ lfs f0, 0x84(r1)
    /* 0x805a2548 */ stfs f0, 8(r5)
    /* 0x805a254c */ lfs f0, 0x70(r3)
    /* 0x805a2550 */ stfs f0, 0x88(r1)
    /* 0x805a2554 */ lfs f0, 0x74(r3)
    /* 0x805a2558 */ stfs f0, 0x8c(r1)
    /* 0x805a255c */ lfs f0, 0x78(r3)
    /* 0x805a2560 */ stfs f0, 0x90(r1)
    /* 0x805a2564 */ lfs f0, 0x7c(r3)
    /* 0x805a2568 */ stfs f0, 0x94(r1)
    /* 0x805a256c */ lfs f0, 0x80(r3)
    /* 0x805a2570 */ stfs f0, 0x98(r1)
    /* 0x805a2574 */ lfs f0, 0x84(r3)
    /* 0x805a2578 */ addi r3, r1, 0x18
    /* 0x805a257c */ stfs f0, 0x9c(r1)
    /* 0x805a2580 */ bl 0x80555bf4
    /* 0x805a2584 */ lfs f0, 0x1c(r1)
    /* 0x805a2588 */ stfs f0, 0(r31)
    /* 0x805a258c */ lfs f0, 0x20(r1)
    /* 0x805a2590 */ stfs f0, 4(r31)
    /* 0x805a2594 */ lfs f0, 0x24(r1)
    /* 0x805a2598 */ stfs f0, 8(r31)
    /* 0x805a259c */ lfs f0, 0x28(r1)
    /* 0x805a25a0 */ stfs f0, 0xc(r31)
    /* 0x805a25a4 */ lfs f0, 0x2c(r1)
    /* 0x805a25a8 */ stfs f0, 0x10(r31)
    /* 0x805a25ac */ lfs f0, 0x30(r1)
    /* 0x805a25b0 */ stfs f0, 0x14(r31)
    /* 0x805a25b4 */ lfs f0, 0x34(r1)
    /* 0x805a25b8 */ stfs f0, 0x18(r31)
    /* 0x805a25bc */ lfs f0, 0x38(r1)
    /* 0x805a25c0 */ stfs f0, 0x1c(r31)
    /* 0x805a25c4 */ lfs f0, 0x3c(r1)
    /* 0x805a25c8 */ stfs f0, 0x20(r31)
    /* 0x805a25cc */ lfs f0, 0x40(r1)
    /* 0x805a25d0 */ stfs f0, 0x24(r31)
    /* 0x805a25d4 */ lfs f0, 0x44(r1)
    /* 0x805a25d8 */ stfs f0, 0x28(r31)
    /* 0x805a25dc */ lfs f0, 0x48(r1)
    /* 0x805a25e0 */ stfs f0, 0x2c(r31)
    /* 0x805a25e4 */ lwz r31, 0xac(r1)
    /* 0x805a25e8 */ lwz r0, 0xb4(r1)
    /* 0x805a25ec */ mtlr r0
    /* 0x805a25f0 */ addi r1, r1, 0xb0
    /* 0x805a25f4 */ blr
    /* 0x805a25f8 */ lhz r4, 0x334(r3)
    /* 0x805a25fc */ li r0, 0x3c
    /* 0x805a2600 */ sth r0, 0x33c(r3)
    /* 0x805a2604 */ ori r0, r4, 0x200
    /* 0x805a2608 */ sth r0, 0x334(r3)
    /* 0x805a260c */ blr
    /* 0x805a2610 */ lhz r0, 0x334(r3)
    /* 0x805a2614 */ rlwinm. r0, r0, 0, 0x16, 0x16
    /* 0x805a2618 */ beqlr
    /* 0x805a261c */ lha r4, 0x33c(r3)
    /* 0x805a2620 */ addi r0, r4, -1
    /* 0x805a2624 */ sth r0, 0x33c(r3)
    /* 0x805a2628 */ extsh. r0, r0
    /* 0x805a262c */ bge 0x805a2640
    /* 0x805a2630 */ li r0, 0
    /* 0x805a2634 */ sth r0, 0x33c(r3)
    /* 0x805a2638 */ li r0, 1
    /* 0x805a263c */ b 0x805a2644
    /* 0x805a2640 */ li r0, 0
    /* 0x805a2644 */ cmpwi r0, 0
    /* 0x805a2648 */ beqlr
    /* 0x805a264c */ lhz r0, 0x334(r3)
    /* 0x805a2650 */ rlwinm r0, r0, 0, 0x17, 0x15
    /* 0x805a2654 */ sth r0, 0x334(r3)
    /* 0x805a2658 */ blr
    /* 0x805a265c */ lis r4, 0
    /* 0x805a2660 */ lfs f0, 0(r4)
    /* 0x805a2664 */ stfs f0, 0x344(r3)
    /* 0x805a2668 */ blr
    /* 0x805a266c */ lwz r0, 0(r4)
    /* 0x805a2670 */ addi r5, r4, 0x30
    /* 0x805a2674 */ stw r0, 0(r3)
    /* 0x805a2678 */ addi r0, r4, 0xf0
    /* 0x805a267c */ lhz r6, 4(r4)
    /* 0x805a2680 */ sth r6, 4(r3)
    /* 0x805a2684 */ lfs f0, 8(r4)
    /* 0x805a2688 */ stfs f0, 8(r3)
    /* 0x805a268c */ lfs f0, 0xc(r4)
    /* 0x805a2690 */ stfs f0, 0xc(r3)
    /* 0x805a2694 */ lfs f0, 0x10(r4)
    /* 0x805a2698 */ stfs f0, 0x10(r3)
    /* 0x805a269c */ lfs f0, 0x14(r4)
    /* 0x805a26a0 */ stfs f0, 0x14(r3)
    /* 0x805a26a4 */ lfs f0, 0x18(r4)
    /* 0x805a26a8 */ stfs f0, 0x18(r3)
    /* 0x805a26ac */ lfs f0, 0x1c(r4)
    /* 0x805a26b0 */ stfs f0, 0x1c(r3)
    /* 0x805a26b4 */ lfs f0, 0x20(r4)
    /* 0x805a26b8 */ stfs f0, 0x20(r3)
    /* 0x805a26bc */ lfs f0, 0x24(r4)
    /* 0x805a26c0 */ stfs f0, 0x24(r3)
    /* 0x805a26c4 */ lfs f0, 0x28(r4)
    /* 0x805a26c8 */ stfs f0, 0x28(r3)
    /* 0x805a26cc */ lfs f0, 0x2c(r4)
    /* 0x805a26d0 */ stfs f0, 0x2c(r3)
    /* 0x805a26d4 */ stw r5, 0x30(r3)
    /* 0x805a26d8 */ stw r0, 0x34(r3)
    /* 0x805a26dc */ blr
