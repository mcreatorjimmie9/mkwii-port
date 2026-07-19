/* Function at 0x806A2578, size=620 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_806A2578(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806A258C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806A2594
    r29 = r5;
    r3 = *(0x214 + r3); // lwz @ 0x806A259C
    r12 = *(0 + r3); // lwz @ 0x806A25A0
    r12 = *(0x20 + r12); // lwz @ 0x806A25A4
    /* mtctr r12 */ // 0x806A25A8
    /* bctrl  */ // 0x806A25AC
    if (==) goto 0x0x806a27c8;
    if (<) goto 0x0x806a2774;
    if (==) goto 0x0x806a25d0;
    if (==) goto 0x0x806a26a8;
    /* b 0x806a27c8 */ // 0x806A25CC
    r0 = *(0x211 + r30); // lbz @ 0x806A25D0
    if (==) goto 0x0x806a27c8;
    r0 = *(0x210 + r30); // lbz @ 0x806A25DC
    if (!=) goto 0x0x806a25fc;
    r3 = *(0x204 + r30); // lwz @ 0x806A25E8
    r0 = *(0x208 + r30); // lwz @ 0x806A25EC
    r3 = r3 + 1; // 0x806A25F0
    if (>=) goto 0x0x806a27c8;
    r3 = *(0x204 + r30); // lwz @ 0x806A25FC
    r0 = *(0x208 + r30); // lwz @ 0x806A2600
    r3 = r3 + 1; // 0x806A2604
    *(0x204 + r30) = r3; // stw @ 0x806A2608
    if (<) goto 0x0x806a261c;
    /* li r0, 0 */ // 0x806A2614
    *(0x204 + r30) = r0; // stw @ 0x806A2618
    r3 = *(0x214 + r30); // lwz @ 0x806A261C
    /* li r5, 1 */ // 0x806A2620
    r4 = *(0x204 + r30); // lwz @ 0x806A2624
    r12 = *(0 + r3); // lwz @ 0x806A2628
    r12 = *(0x18 + r12); // lwz @ 0x806A262C
    /* mtctr r12 */ // 0x806A2630
    /* bctrl  */ // 0x806A2634
    r3 = r30 + 0x34c; // 0x806A2638
    /* li r4, 2 */ // 0x806A263C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r29, 0 */ // 0x806A2644
    /* li r4, 0 */ // 0x806A2648
    /* lfs f1, 0(r29) */ // 0x806A264C
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x34c; // 0x806A2654
    /* li r4, 3 */ // 0x806A2658
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r29) */ // 0x806A2660
    /* li r4, 0 */ // 0x806A2664
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x29c + r30); // lwz @ 0x806A266C
    if (==) goto 0x0x806a2694;
    r12 = *(0 + r3); // lwz @ 0x806A2678
    r4 = r30;
    r5 = r31;
    r6 = *(0x204 + r30); // lwz @ 0x806A2684
    r12 = *(8 + r12); // lwz @ 0x806A2688
    /* mtctr r12 */ // 0x806A268C
    /* bctrl  */ // 0x806A2690
    r3 = r30;
    r5 = r31;
    /* li r4, 0x12 */ // 0x806A269C
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    /* b 0x806a27c8 */ // 0x806A26A4
    r0 = *(0x211 + r30); // lbz @ 0x806A26A8
    if (==) goto 0x0x806a27c8;
    r0 = *(0x210 + r30); // lbz @ 0x806A26B4
    if (!=) goto 0x0x806a26cc;
    r3 = *(0x204 + r30); // lwz @ 0x806A26C0
    /* addic. r0, r3, -1 */ // 0x806A26C4
    if (<) goto 0x0x806a27c8;
    r3 = *(0x204 + r30); // lwz @ 0x806A26CC
    /* addic. r0, r3, -1 */ // 0x806A26D0
    *(0x204 + r30) = r0; // stw @ 0x806A26D4
    if (>=) goto 0x0x806a26e8;
    r3 = *(0x208 + r30); // lwz @ 0x806A26DC
    r0 = r3 + -1; // 0x806A26E0
    *(0x204 + r30) = r0; // stw @ 0x806A26E4
    r3 = *(0x214 + r30); // lwz @ 0x806A26E8
    /* li r5, 0 */ // 0x806A26EC
    r4 = *(0x204 + r30); // lwz @ 0x806A26F0
    r12 = *(0 + r3); // lwz @ 0x806A26F4
    r12 = *(0x18 + r12); // lwz @ 0x806A26F8
    /* mtctr r12 */ // 0x806A26FC
    /* bctrl  */ // 0x806A2700
    r3 = r30 + 0x4d4; // 0x806A2704
    /* li r4, 2 */ // 0x806A2708
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r29, 0 */ // 0x806A2710
    /* li r4, 0 */ // 0x806A2714
    /* lfs f1, 0(r29) */ // 0x806A2718
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x4d4; // 0x806A2720
    /* li r4, 3 */ // 0x806A2724
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r29) */ // 0x806A272C
    /* li r4, 0 */ // 0x806A2730
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x29c + r30); // lwz @ 0x806A2738
    if (==) goto 0x0x806a2760;
    r12 = *(0 + r3); // lwz @ 0x806A2744
    r4 = r30;
    r5 = r31;
    r6 = *(0x204 + r30); // lwz @ 0x806A2750
    r12 = *(8 + r12); // lwz @ 0x806A2754
    /* mtctr r12 */ // 0x806A2758
    /* bctrl  */ // 0x806A275C
    r3 = r30;
    r5 = r31;
    /* li r4, 0x11 */ // 0x806A2768
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    /* b 0x806a27c8 */ // 0x806A2770
    r0 = *(0x212 + r30); // lbz @ 0x806A2774
    if (==) goto 0x0x806a27c8;
    r3 = *(0x214 + r30); // lwz @ 0x806A2780
    r12 = *(0 + r3); // lwz @ 0x806A2784
    r12 = *(0x1c + r12); // lwz @ 0x806A2788
    /* mtctr r12 */ // 0x806A278C
    /* bctrl  */ // 0x806A2790
    r3 = *(0x2a0 + r30); // lwz @ 0x806A2794
    if (==) goto 0x0x806a27b8;
    r12 = *(0 + r3); // lwz @ 0x806A27A0
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A27AC
    /* mtctr r12 */ // 0x806A27B0
    /* bctrl  */ // 0x806A27B4
    r4 = *(0x5c4 + r30); // lwz @ 0x806A27B8
    r3 = r30;
    r5 = r31;
    FUN_806A03CC(r3, r5); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x806A27C8
    r31 = *(0x1c + r1); // lwz @ 0x806A27CC
    r30 = *(0x18 + r1); // lwz @ 0x806A27D0
    r29 = *(0x14 + r1); // lwz @ 0x806A27D4
    return;
}