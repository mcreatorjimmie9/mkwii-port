/* Function at 0x8091A514, size=212 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8091A514(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x8091A520
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8091A528
    /* lfs f1, 0xb8(r31) */ // 0x8091A52C
    r12 = *(0 + r3); // lwz @ 0x8091A530
    r12 = *(0x18 + r12); // lwz @ 0x8091A534
    /* mtctr r12 */ // 0x8091A538
    /* bctrl  */ // 0x8091A53C
    r0 = *(0x194 + r31); // lbz @ 0x8091A540
    if (==) goto 0x0x8091a590;
    /* lis r4, 0 */ // 0x8091A54C
    /* lfs f1, 0xb4(r31) */ // 0x8091A550
    r4 = r4 + 0; // 0x8091A558
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r4 = *(0x20 + r31); // lwz @ 0x8091A560
    r4 = r4 + 0x18; // 0x8091A56C
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    /* lfs f0, 0x20(r1) */ // 0x8091A574
    /* stfs f0, 0x178(r31) */ // 0x8091A578
    /* lfs f0, 0x24(r1) */ // 0x8091A57C
    /* stfs f0, 0x17c(r31) */ // 0x8091A580
    /* lfs f0, 0x28(r1) */ // 0x8091A584
    /* stfs f0, 0x180(r31) */ // 0x8091A588
    /* b 0x8091a5d4 */ // 0x8091A58C
    /* lis r3, 0 */ // 0x8091A590
    /* lis r4, 0 */ // 0x8091A594
    /* lfs f1, 0(r3) */ // 0x8091A598
    r4 = r4 + 0; // 0x8091A5A0
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    r4 = *(0x20 + r31); // lwz @ 0x8091A5A8
    r4 = r4 + 0x18; // 0x8091A5B4
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x8091A5BC
    /* stfs f0, 0x178(r31) */ // 0x8091A5C0
    /* lfs f0, 0xc(r1) */ // 0x8091A5C4
    /* stfs f0, 0x17c(r31) */ // 0x8091A5C8
    /* lfs f0, 0x10(r1) */ // 0x8091A5CC
    /* stfs f0, 0x180(r31) */ // 0x8091A5D0
    r0 = *(0x44 + r1); // lwz @ 0x8091A5D4
    r31 = *(0x3c + r1); // lwz @ 0x8091A5D8
    return;
}