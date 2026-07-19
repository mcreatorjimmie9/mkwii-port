/* Function at 0x808784B0, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808784B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808784C0
    r4 = r31 + 0; // 0x808784C4
    *(0x18 + r1) = r30; // stw @ 0x808784C8
    /* lis r30, 0 */ // 0x808784CC
    r30 = r30 + 0; // 0x808784D0
    *(0x14 + r1) = r29; // stw @ 0x808784D4
    /* lis r29, 0 */ // 0x808784D8
    r29 = r29 + 0; // 0x808784DC
    /* lfs f2, 0x1e0(r30) */ // 0x808784E0
    r3 = r29 + 0xc; // 0x808784E4
    /* lfs f1, 0x1e4(r30) */ // 0x808784E8
    /* lfs f0, 0x1e8(r30) */ // 0x808784EC
    r5 = r29 + 0; // 0x808784F0
    /* stfs f2, 0xc(r29) */ // 0x808784F4
    /* stfs f1, 4(r3) */ // 0x808784F8
    /* stfs f0, 8(r3) */ // 0x808784FC
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x40(r30) */ // 0x80878504
    r3 = r29 + 0x24; // 0x80878508
    /* lfs f1, 0x1ec(r30) */ // 0x8087850C
    r4 = r31 + 0; // 0x80878510
    /* lfs f0, 0x1e8(r30) */ // 0x80878514
    r5 = r29 + 0x18; // 0x80878518
    /* stfs f2, 0x24(r29) */ // 0x8087851C
    /* stfs f1, 4(r3) */ // 0x80878520
    /* stfs f0, 8(r3) */ // 0x80878524
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x40(r30) */ // 0x8087852C
    r3 = r29 + 0x3c; // 0x80878530
    /* lfs f1, 0x1f0(r30) */ // 0x80878534
    r4 = r31 + 0; // 0x80878538
    /* lfs f0, 0x1e8(r30) */ // 0x8087853C
    r5 = r29 + 0x30; // 0x80878540
    /* stfs f2, 0x3c(r29) */ // 0x80878544
    /* stfs f1, 4(r3) */ // 0x80878548
    /* stfs f0, 8(r3) */ // 0x8087854C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lis r4, 0 */ // 0x80878554
    /* lis r3, 0 */ // 0x80878558
    r4 = r4 + 0; // 0x8087855C
    *(0x48 + r29) = r4; // stw @ 0x80878560
    r3 = r3 + 0; // 0x80878564
    *(0x4c + r29) = r4; // stw @ 0x80878568
    *(0x50 + r29) = r3; // stw @ 0x8087856C
    r31 = *(0x1c + r1); // lwz @ 0x80878570
    r30 = *(0x18 + r1); // lwz @ 0x80878574
    r29 = *(0x14 + r1); // lwz @ 0x80878578
    r0 = *(0x24 + r1); // lwz @ 0x8087857C
    return;
}