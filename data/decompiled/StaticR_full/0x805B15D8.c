/* Function at 0x805B15D8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B15D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lfs f0, 8(r4) */ // 0x805B15E0
    *(0x14 + r1) = r0; // stw @ 0x805B15E4
    r0 = *(4 + r4); // lhz @ 0x805B15E8
    *(0xc + r1) = r31; // stw @ 0x805B15EC
    r31 = r3;
    r5 = *(4 + r3); // lwz @ 0x805B15F4
    *(0x94 + r5) = r0; // sth @ 0x805B15F8
    r3 = r5;
    r0 = *(6 + r4); // lhz @ 0x805B1600
    *(0x96 + r5) = r0; // sth @ 0x805B1604
    r0 = *(0x10 + r4); // lbz @ 0x805B1608
    /* stfs f0, 0x98(r5) */ // 0x805B160C
    /* lfs f0, 0xc(r4) */ // 0x805B1610
    /* stfs f0, 0x9c(r5) */ // 0x805B1614
    *(0xa0 + r5) = r0; // stb @ 0x805B1618
    r0 = *(0x11 + r4); // lbz @ 0x805B161C
    *(0xa1 + r5) = r0; // stb @ 0x805B1620
    r0 = *(0x12 + r4); // lbz @ 0x805B1624
    *(0xa2 + r5) = r0; // stb @ 0x805B1628
    r0 = *(0x13 + r4); // lbz @ 0x805B162C
    *(0xa3 + r5) = r0; // stb @ 0x805B1630
    r0 = *(0x14 + r4); // lbz @ 0x805B1634
    *(0xa4 + r5) = r0; // stb @ 0x805B1638
    FUN_805AE940(); // bl 0x805AE940
    r3 = r31;
    /* li r4, 0 */ // 0x805B1644
    FUN_805B0DC4(r3, r4); // bl 0x805B0DC4
    r0 = *(0x14 + r1); // lwz @ 0x805B164C
    r31 = *(0xc + r1); // lwz @ 0x805B1650
    return;
}