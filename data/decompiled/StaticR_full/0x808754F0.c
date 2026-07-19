/* Function at 0x808754F0, size=244 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808754F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f1, 4(r5) */ // 0x808754F8
    /* lis r5, 0 */ // 0x808754FC
    *(0x54 + r1) = r0; // stw @ 0x80875500
    *(0x4c + r1) = r31; // stw @ 0x80875504
    /* lis r31, 0 */ // 0x80875508
    /* lfs f0, 0(r31) */ // 0x8087550C
    *(0x48 + r1) = r30; // stw @ 0x80875510
    r30 = r6;
    *(0x44 + r1) = r29; // stw @ 0x80875518
    r29 = r3;
    r3 = *(0 + r5); // lwz @ 0x80875520
    /* stfs f0, 0x1c(r1) */ // 0x80875528
    /* stfs f0, 0x20(r1) */ // 0x8087552C
    /* stfs f1, 0x24(r1) */ // 0x80875530
    FUN_80864364(r5); // bl 0x80864364
    /* lis r3, 0 */ // 0x80875538
    /* lis r6, 0 */ // 0x8087553C
    /* lfs f1, 0(r3) */ // 0x80875540
    /* lis r4, 0 */ // 0x80875544
    /* lfs f2, 0xc(r1) */ // 0x80875548
    r5 = r30;
    /* lfs f0, 8(r1) */ // 0x80875550
    /* fsubs f4, f2, f1 */ // 0x80875558
    /* lfs f3, 0(r6) */ // 0x8087555C
    /* fsubs f2, f0, f1 */ // 0x80875560
    /* lfs f1, 0(r4) */ // 0x80875564
    /* lfs f0, 0(r31) */ // 0x80875568
    /* fmuls f3, f3, f4 */ // 0x80875570
    /* stfs f0, 0x30(r1) */ // 0x80875574
    /* fmuls f0, f1, f2 */ // 0x80875578
    /* stfs f3, 0x2c(r1) */ // 0x8087557C
    /* stfs f0, 0x28(r1) */ // 0x80875580
    FUN_805A4464(); // bl 0x805A4464
    r3 = *(0x198 + r29); // lwz @ 0x80875588
    /* lfs f0, 0x10(r1) */ // 0x8087558C
    /* stfs f0, 0x2c(r3) */ // 0x80875590
    /* lfs f3, 0x1c(r1) */ // 0x80875594
    /* lfs f0, 0x14(r1) */ // 0x80875598
    /* stfs f0, 0x30(r3) */ // 0x8087559C
    /* lfs f2, 0x20(r1) */ // 0x808755A0
    /* lfs f0, 0x18(r1) */ // 0x808755A4
    /* stfs f0, 0x34(r3) */ // 0x808755A8
    /* lfs f1, 0x24(r1) */ // 0x808755AC
    r3 = *(0x198 + r29); // lwz @ 0x808755B0
    /* lfs f0, 0(r31) */ // 0x808755B4
    /* stfs f3, 0x38(r3) */ // 0x808755B8
    /* stfs f2, 0x3c(r3) */ // 0x808755BC
    /* stfs f1, 0x40(r3) */ // 0x808755C0
    /* stfs f0, 0x7c(r29) */ // 0x808755C4
    r31 = *(0x4c + r1); // lwz @ 0x808755C8
    r30 = *(0x48 + r1); // lwz @ 0x808755CC
    r29 = *(0x44 + r1); // lwz @ 0x808755D0
    r0 = *(0x54 + r1); // lwz @ 0x808755D4
    return;
}