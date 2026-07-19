/* Function at 0x807C25C8, size=216 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C25C8(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807C25D0
    *(0x4c + r1) = r31; // stw @ 0x807C25D8
    r31 = *(0x28 + r4); // lbz @ 0x807C25DC
    *(0x48 + r1) = r30; // stw @ 0x807C25E0
    r30 = r3;
    r4 = *(0 + r5); // lwz @ 0x807C25E8
    r3 = *(0x10 + r4); // lwz @ 0x807C25EC
    if (==) goto 0x0x807c2600;
    r0 = *(4 + r3); // lhz @ 0x807C25F8
    /* b 0x807c2604 */ // 0x807C25FC
    /* li r0, 0 */ // 0x807C2600
    if (>=) goto 0x0x807c2688;
    r3 = r4;
    r4 = r31;
    FUN_805A47A8(r3, r4); // bl 0x805A47A8
    r4 = *(4 + r3); // lwz @ 0x807C2618
    /* lis r3, 0 */ // 0x807C261C
    /* lfs f0, 0(r3) */ // 0x807C2620
    /* li r5, 0 */ // 0x807C2624
    /* lfs f3, 8(r4) */ // 0x807C2628
    /* li r0, 1 */ // 0x807C262C
    /* lfs f2, 4(r4) */ // 0x807C2630
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x807C2638
    /* stfs f1, 8(r1) */ // 0x807C2640
    /* stfs f2, 0xc(r1) */ // 0x807C2644
    /* stfs f3, 0x10(r1) */ // 0x807C2648
    *(0x25 + r1) = r5; // stb @ 0x807C264C
    *(0x28 + r1) = r5; // stw @ 0x807C2650
    *(0x2c + r1) = r5; // stw @ 0x807C2654
    *(0x30 + r1) = r5; // stb @ 0x807C2658
    *(0x31 + r1) = r5; // stb @ 0x807C265C
    *(0x32 + r1) = r5; // stb @ 0x807C2660
    *(0x34 + r1) = r5; // stw @ 0x807C2664
    *(0x38 + r1) = r5; // stb @ 0x807C2668
    /* stfs f1, 0x18(r1) */ // 0x807C266C
    /* stfs f2, 0x1c(r1) */ // 0x807C2670
    /* stfs f3, 0x20(r1) */ // 0x807C2674
    *(0x14 + r1) = r0; // stb @ 0x807C2678
    *(0x24 + r1) = r31; // stb @ 0x807C267C
    /* stfs f0, 0x3c(r1) */ // 0x807C2680
    FUN_807C2B88(); // bl 0x807C2B88
    r0 = *(0x54 + r1); // lwz @ 0x807C2688
    r31 = *(0x4c + r1); // lwz @ 0x807C268C
    r30 = *(0x48 + r1); // lwz @ 0x807C2690
    return;
}