/* Function at 0x807C26A0, size=224 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807C26A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, -1 */ // 0x807C26A8
    /* li r6, 4 */ // 0x807C26AC
    *(0x54 + r1) = r0; // stw @ 0x807C26B0
    *(0x4c + r1) = r31; // stw @ 0x807C26B4
    /* lis r31, 0 */ // 0x807C26B8
    *(0x48 + r1) = r30; // stw @ 0x807C26BC
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x807C26C4
    FUN_805A6434(); // bl 0x805A6434
    /* extsh. r0, r3 */ // 0x807C26CC
    r4 = r3;
    if (<) goto 0x0x807c2768;
    r3 = *(0 + r31); // lwz @ 0x807C26D8
    /* clrlwi r4, r4, 0x10 */ // 0x807C26DC
    FUN_805A6394(r4); // bl 0x805A6394
    r4 = *(4 + r3); // lwz @ 0x807C26E4
    r3 = *(0 + r31); // lwz @ 0x807C26E8
    r31 = *(0x2d + r4); // lbz @ 0x807C26EC
    r4 = r31;
    FUN_805A47A8(r4); // bl 0x805A47A8
    r4 = *(4 + r3); // lwz @ 0x807C26F8
    /* lis r3, 0 */ // 0x807C26FC
    /* lfs f0, 0(r3) */ // 0x807C2700
    /* li r5, 0 */ // 0x807C2704
    /* lfs f3, 8(r4) */ // 0x807C2708
    /* li r0, 1 */ // 0x807C270C
    /* lfs f2, 4(r4) */ // 0x807C2710
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x807C2718
    /* stfs f1, 8(r1) */ // 0x807C2720
    /* stfs f2, 0xc(r1) */ // 0x807C2724
    /* stfs f3, 0x10(r1) */ // 0x807C2728
    *(0x25 + r1) = r5; // stb @ 0x807C272C
    *(0x28 + r1) = r5; // stw @ 0x807C2730
    *(0x2c + r1) = r5; // stw @ 0x807C2734
    *(0x30 + r1) = r5; // stb @ 0x807C2738
    *(0x31 + r1) = r5; // stb @ 0x807C273C
    *(0x32 + r1) = r5; // stb @ 0x807C2740
    *(0x34 + r1) = r5; // stw @ 0x807C2744
    *(0x38 + r1) = r5; // stb @ 0x807C2748
    /* stfs f1, 0x18(r1) */ // 0x807C274C
    /* stfs f2, 0x1c(r1) */ // 0x807C2750
    /* stfs f3, 0x20(r1) */ // 0x807C2754
    *(0x14 + r1) = r0; // stb @ 0x807C2758
    *(0x24 + r1) = r31; // stb @ 0x807C275C
    /* stfs f0, 0x3c(r1) */ // 0x807C2760
    FUN_807C2B88(); // bl 0x807C2B88
    r0 = *(0x54 + r1); // lwz @ 0x807C2768
    r31 = *(0x4c + r1); // lwz @ 0x807C276C
    r30 = *(0x48 + r1); // lwz @ 0x807C2770
    return;
}