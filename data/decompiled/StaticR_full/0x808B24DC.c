/* Function at 0x808B24DC, size=148 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808B24DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f1, 0(r6) */ // 0x808B24E4
    /* lfs f2, 4(r6) */ // 0x808B24EC
    *(0x7c + r1) = r31; // stw @ 0x808B24F0
    r31 = r5;
    /* lfs f0, 8(r6) */ // 0x808B24F8
    *(0x78 + r1) = r30; // stw @ 0x808B24FC
    r30 = r4;
    *(0x74 + r1) = r29; // stw @ 0x808B2504
    r29 = r3;
    r4 = r29 + 0x28; // 0x808B250C
    /* stfs f1, 0x10(r3) */ // 0x808B2510
    /* lfs f1, 0(r5) */ // 0x808B2514
    /* stfs f2, 0x14(r3) */ // 0x808B2518
    /* stfs f0, 0x18(r3) */ // 0x808B251C
    FUN_805A443C(r3); // bl 0x805A443C
    /* lfs f0, 0x5c(r1) */ // 0x808B2528
    r4 = r30;
    /* stfs f0, 0x3c(r29) */ // 0x808B2530
    /* lfs f1, 0x24(r29) */ // 0x808B2538
    r5 = r29 + 0x3c; // 0x808B253C
    /* lfs f0, 0x60(r1) */ // 0x808B2540
    /* stfs f0, 0x40(r29) */ // 0x808B2544
    /* lfs f0, 4(r31) */ // 0x808B2548
    /* lfs f3, 0x64(r1) */ // 0x808B254C
    /* fmuls f2, f1, f0 */ // 0x808B2550
    /* lfs f1, 0x20(r29) */ // 0x808B2554
    /* lfs f0, 0(r31) */ // 0x808B2558
    /* stfs f3, 0x44(r29) */ // 0x808B255C
    /* fmuls f0, f1, f0 */ // 0x808B2560
    /* stfs f2, 0x38(r29) */ // 0x808B2564
    /* stfs f0, 0x34(r29) */ // 0x808B2568
    FUN_805E3430(); // bl 0x805E3430
}