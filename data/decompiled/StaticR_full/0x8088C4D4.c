/* Function at 0x8088C4D4, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8088C4D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8088C4E8
    r30 = r4;
    FUN_8088BF74(); // bl 0x8088BF74
    /* lis r3, 0 */ // 0x8088C4F4
    /* lis r0, 0x4330 */ // 0x8088C4F8
    r3 = r3 + 0; // 0x8088C4FC
    *(0 + r31) = r3; // stw @ 0x8088C500
    /* lis r4, 0 */ // 0x8088C504
    r5 = *(0 + r30); // lwz @ 0x8088C508
    /* lis r3, 0 */ // 0x8088C50C
    *(8 + r1) = r0; // stw @ 0x8088C510
    r0 = *(0x30 + r5); // lha @ 0x8088C514
    *(0x158 + r31) = r0; // sth @ 0x8088C518
    /* lfd f2, 0(r4) */ // 0x8088C51C
    r4 = *(0 + r30); // lwz @ 0x8088C520
    /* lfs f0, 0(r3) */ // 0x8088C524
    r0 = *(0x2e + r4); // lha @ 0x8088C528
    *(0x15a + r31) = r0; // sth @ 0x8088C52C
    r3 = *(0 + r30); // lwz @ 0x8088C534
    r0 = *(0x2c + r3); // lha @ 0x8088C538
    /* xoris r0, r0, 0x8000 */ // 0x8088C53C
    *(0xc + r1) = r0; // stw @ 0x8088C540
    /* lfd f1, 8(r1) */ // 0x8088C544
    /* fsubs f1, f1, f2 */ // 0x8088C548
    /* fmuls f0, f1, f0 */ // 0x8088C54C
    /* stfs f0, 0x15c(r31) */ // 0x8088C550
    r3 = *(0 + r30); // lwz @ 0x8088C554
    r0 = *(0x32 + r3); // lha @ 0x8088C558
    *(0x160 + r31) = r0; // sth @ 0x8088C55C
    if (>=) goto 0x0x8088c56c;
    /* li r0, 2 */ // 0x8088C564
    *(0x15a + r31) = r0; // sth @ 0x8088C568
    r0 = *(0x15a + r31); // lha @ 0x8088C56C
    /* lis r5, 0x4330 */ // 0x8088C570
    /* lis r6, 0 */ // 0x8088C574
    /* lis r4, 0 */ // 0x8088C578
    /* xoris r0, r0, 0x8000 */ // 0x8088C57C
    *(0xc + r1) = r0; // stw @ 0x8088C580
    r0 = *(0x160 + r31); // lha @ 0x8088C584
    r3 = r31;
    *(8 + r1) = r5; // stw @ 0x8088C58C
    /* lfd f5, 0(r6) */ // 0x8088C590
    /* xoris r0, r0, 0x8000 */ // 0x8088C594
    /* lfd f1, 8(r1) */ // 0x8088C598
    /* lfs f0, 0(r4) */ // 0x8088C59C
    /* fsubs f4, f1, f5 */ // 0x8088C5A0
    /* lfs f3, 0x108(r31) */ // 0x8088C5A4
    /* lfs f1, 0x110(r31) */ // 0x8088C5A8
    *(0x14 + r1) = r0; // stw @ 0x8088C5AC
    /* fdivs f4, f0, f4 */ // 0x8088C5B0
    /* lfs f2, 0x10c(r31) */ // 0x8088C5B4
    *(0x10 + r1) = r5; // stw @ 0x8088C5B8
    /* lfd f0, 0x10(r1) */ // 0x8088C5BC
    /* stfs f3, 0x14c(r31) */ // 0x8088C5C0
    /* stfs f1, 0x154(r31) */ // 0x8088C5C4
    /* fsubs f0, f0, f5 */ // 0x8088C5C8
    /* stfs f4, 0x164(r31) */ // 0x8088C5CC
    /* fsubs f0, f2, f0 */ // 0x8088C5D0
    /* stfs f0, 0x150(r31) */ // 0x8088C5D4
    r31 = *(0x1c + r1); // lwz @ 0x8088C5D8
    r30 = *(0x18 + r1); // lwz @ 0x8088C5DC
    r0 = *(0x24 + r1); // lwz @ 0x8088C5E0
    return;
}