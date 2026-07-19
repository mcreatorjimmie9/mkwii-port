/* Function at 0x807D16BC, size=264 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807D16BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807D16D0
    /* lis r30, 0 */ // 0x807D16D4
    r30 = r30 + 0; // 0x807D16D8
    r5 = *(0x150 + r3); // lwz @ 0x807D16DC
    r4 = *(0x14c + r3); // lwz @ 0x807D16E0
    r0 = r4 + -1; // 0x807D16E8
    *(0x14c + r3) = r0; // stw @ 0x807D16EC
    if (==) goto 0x0x807d1700;
    if (==) goto 0x0x807d1750;
    /* b 0x807d1784 */ // 0x807D16FC
    /* li r0, 0 */ // 0x807D1704
    *(0x158 + r3) = r0; // stb @ 0x807D1708
    if (>=) goto 0x0x807d1784;
    /* lis r3, 0 */ // 0x807D1710
    r4 = *(0x2a + r30); // lha @ 0x807D1714
    r3 = *(0 + r3); // lwz @ 0x807D1718
    FUN_807C03BC(r3); // bl 0x807C03BC
    /* lis r4, 0 */ // 0x807D1720
    r0 = *(0x28 + r30); // lha @ 0x807D1724
    /* lfs f1, 0x15c(r31) */ // 0x807D1728
    /* lfs f0, 0(r4) */ // 0x807D172C
    r0 = r0 + r3; // 0x807D1730
    r3 = *(0x150 + r31); // lwz @ 0x807D1734
    /* fmuls f0, f1, f0 */ // 0x807D1738
    *(0x14c + r31) = r0; // stw @ 0x807D173C
    r0 = r3 + 1; // 0x807D1740
    /* stfs f0, 0x15c(r31) */ // 0x807D1744
    *(0x150 + r31) = r0; // stw @ 0x807D1748
    /* b 0x807d1784 */ // 0x807D174C
    /* li r0, 1 */ // 0x807D1754
    *(0x158 + r3) = r0; // stb @ 0x807D1758
    if (>=) goto 0x0x807d1784;
    /* lis r3, 0 */ // 0x807D1760
    r4 = *(0x26 + r30); // lha @ 0x807D1764
    r3 = *(0 + r3); // lwz @ 0x807D1768
    FUN_807C03BC(r3); // bl 0x807C03BC
    r4 = *(0x24 + r30); // lha @ 0x807D1770
    /* li r0, 0 */ // 0x807D1774
    r3 = r4 + r3; // 0x807D1778
    *(0x14c + r31) = r3; // stw @ 0x807D177C
    *(0x150 + r31) = r0; // stw @ 0x807D1780
    r3 = *(0x114 + r31); // lwz @ 0x807D1784
    r3 = *(0 + r3); // lwz @ 0x807D1788
    r3 = *(0 + r3); // lwz @ 0x807D178C
    r3 = *(4 + r3); // lwz @ 0x807D1790
    r0 = *(0xc + r3); // lwz @ 0x807D1794
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x807D1798
    if (!=) goto 0x0x807d17ac;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807D17A4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D17AC
    r31 = *(0xc + r1); // lwz @ 0x807D17B0
    r30 = *(8 + r1); // lwz @ 0x807D17B4
    return;
}