/* Function at 0x806B152C, size=840 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806B152C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806B1540
    *(0x14 + r1) = r29; // stw @ 0x806B1544
    r0 = *(0x68 + r3); // lwz @ 0x806B1548
    if (==) goto 0x0x806b1570;
    if (==) goto 0x0x806b1700;
    if (==) goto 0x0x806b1764;
    if (==) goto 0x0x806b1794;
    /* b 0x806b1864 */ // 0x806B156C
    /* lis r3, 0 */ // 0x806B1570
    r3 = *(0 + r3); // lwz @ 0x806B1574
    r3 = *(0 + r3); // lwz @ 0x806B1578
    r29 = *(0x204 + r3); // lwz @ 0x806B157C
    if (!=) goto 0x0x806b1590;
    /* li r29, 0 */ // 0x806B1588
    /* b 0x806b15e4 */ // 0x806B158C
    /* lis r30, 0 */ // 0x806B1590
    r30 = r30 + 0; // 0x806B1594
    if (==) goto 0x0x806b15e0;
    r12 = *(0 + r29); // lwz @ 0x806B159C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B15A4
    /* mtctr r12 */ // 0x806B15A8
    /* bctrl  */ // 0x806B15AC
    /* b 0x806b15c8 */ // 0x806B15B0
    if (!=) goto 0x0x806b15c4;
    /* li r0, 1 */ // 0x806B15BC
    /* b 0x806b15d4 */ // 0x806B15C0
    r3 = *(0 + r3); // lwz @ 0x806B15C4
    if (!=) goto 0x0x806b15b4;
    /* li r0, 0 */ // 0x806B15D0
    if (==) goto 0x0x806b15e0;
    /* b 0x806b15e4 */ // 0x806B15DC
    /* li r29, 0 */ // 0x806B15E0
    r3 = r29;
    FUN_806CC974(r3); // bl 0x806CC974
    /* lis r3, 0 */ // 0x806B15EC
    r5 = *(0 + r3); // lwz @ 0x806B15F0
    r3 = *(0 + r5); // lwz @ 0x806B15F4
    r4 = *(0 + r3); // lwz @ 0x806B15F8
    /* cmpwi cr1, r4, 0x60 */
    if (<) goto 0x0x806b160c;
    if (<=) goto 0x0x806b1654;
    if (<) goto 0x0x806b161c;
    if (<=) goto 0x0x806b162c;
    if (<) goto 0x0x806b16e4;
    if (>) goto 0x0x806b16e4;
    r12 = *(0 + r31); // lwz @ 0x806B162C
    r3 = r31;
    /* li r4, 0x91 */ // 0x806B1634
    /* li r5, 0 */ // 0x806B1638
    r12 = *(0x24 + r12); // lwz @ 0x806B163C
    /* mtctr r12 */ // 0x806B1640
    /* bctrl  */ // 0x806B1644
    /* li r0, 3 */ // 0x806B1648
    *(0x68 + r31) = r0; // stw @ 0x806B164C
    /* b 0x806b16e4 */ // 0x806B1650
    r3 = *(0x98 + r5); // lwz @ 0x806B1654
    r0 = *(0x2d0 + r3); // lwz @ 0x806B1658
    if (!=) goto 0x0x806b168c;
    r12 = *(0 + r31); // lwz @ 0x806B1664
    r3 = r31;
    /* li r4, 0x91 */ // 0x806B166C
    /* li r5, 0 */ // 0x806B1670
    r12 = *(0x24 + r12); // lwz @ 0x806B1674
    /* mtctr r12 */ // 0x806B1678
    /* bctrl  */ // 0x806B167C
    /* li r0, 3 */ // 0x806B1680
    *(0x68 + r31) = r0; // stw @ 0x806B1684
    /* b 0x806b16e4 */ // 0x806B1688
    if (>=) goto 0x0x806b16a4;
    if (>=) goto 0x0x806b16bc;
    if (>=) goto 0x0x806b16b4;
    /* b 0x806b16c0 */ // 0x806B16A0
    if (>=) goto 0x0x806b16c0;
    if (>=) goto 0x0x806b16bc;
    /* li r30, 0x6e */ // 0x806B16B4
    /* b 0x806b16c0 */ // 0x806B16B8
    /* li r30, 0x78 */ // 0x806B16BC
    r12 = *(0 + r31); // lwz @ 0x806B16C0
    r3 = r31;
    r4 = r30;
    /* li r5, 0 */ // 0x806B16CC
    r12 = *(0x24 + r12); // lwz @ 0x806B16D0
    /* mtctr r12 */ // 0x806B16D4
    /* bctrl  */ // 0x806B16D8
    /* li r0, 4 */ // 0x806B16DC
    *(0x68 + r31) = r0; // stw @ 0x806B16E0
    /* lis r4, 0 */ // 0x806B16E4
    r3 = r31 + 0x6c; // 0x806B16E8
    /* lfs f1, 0(r4) */ // 0x806B16EC
    FUN_8064ED64(r4, r3); // bl 0x8064ED64
    /* li r0, 1 */ // 0x806B16F4
    *(0x70 + r31) = r0; // stb @ 0x806B16F8
    /* b 0x806b1864 */ // 0x806B16FC
    /* li r0, 4 */ // 0x806B1700
    *(0x68 + r3) = r0; // stw @ 0x806B1704
    /* lis r3, 0 */ // 0x806B1708
    r3 = *(0 + r3); // lwz @ 0x806B170C
    r3 = *(0 + r3); // lwz @ 0x806B1710
    r3 = *(0 + r3); // lwz @ 0x806B1714
    r0 = r3 + -0x58; // 0x806B1718
    if (>) goto 0x0x806b1748;
    /* lis r3, 0 */ // 0x806B1724
    /* slwi r0, r0, 2 */ // 0x806B1728
    r3 = r3 + 0; // 0x806B172C
    /* lwzx r3, r3, r0 */ // 0x806B1730
    /* mtctr r3 */ // 0x806B1734
    /* bctr  */ // 0x806B1738
    /* li r4, 0x6e */ // 0x806B173C
    /* b 0x806b1748 */ // 0x806B1740
    /* li r4, 0x78 */ // 0x806B1744
    r12 = *(0 + r31); // lwz @ 0x806B1748
    r3 = r31;
    /* li r5, 0 */ // 0x806B1750
    r12 = *(0x24 + r12); // lwz @ 0x806B1754
    /* mtctr r12 */ // 0x806B1758
    /* bctrl  */ // 0x806B175C
    /* b 0x806b1864 */ // 0x806B1760
    r3 = r3 + 0x78; // 0x806B1764
    FUN_8064F568(r3); // bl 0x8064F568
    /* li r0, 5 */ // 0x806B176C
    *(0x68 + r31) = r0; // stw @ 0x806B1770
    r3 = r31;
    /* li r4, 0x92 */ // 0x806B1778
    r12 = *(0 + r31); // lwz @ 0x806B177C
    /* li r5, 0 */ // 0x806B1780
    r12 = *(0x24 + r12); // lwz @ 0x806B1784
    /* mtctr r12 */ // 0x806B1788
    /* bctrl  */ // 0x806B178C
    /* b 0x806b1864 */ // 0x806B1790
    /* lis r3, 0 */ // 0x806B1794
    r3 = *(0 + r3); // lwz @ 0x806B1798
    r3 = *(0 + r3); // lwz @ 0x806B179C
    r29 = *(0x14c + r3); // lwz @ 0x806B17A0
    if (!=) goto 0x0x806b17b4;
    /* li r29, 0 */ // 0x806B17AC
    /* b 0x806b1808 */ // 0x806B17B0
    /* lis r30, 0 */ // 0x806B17B4
    r30 = r30 + 0; // 0x806B17B8
    if (==) goto 0x0x806b1804;
    r12 = *(0 + r29); // lwz @ 0x806B17C0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B17C8
    /* mtctr r12 */ // 0x806B17CC
    /* bctrl  */ // 0x806B17D0
    /* b 0x806b17ec */ // 0x806B17D4
    if (!=) goto 0x0x806b17e8;
    /* li r0, 1 */ // 0x806B17E0
    /* b 0x806b17f8 */ // 0x806B17E4
    r3 = *(0 + r3); // lwz @ 0x806B17E8
    if (!=) goto 0x0x806b17d8;
    /* li r0, 0 */ // 0x806B17F4
    if (==) goto 0x0x806b1804;
    /* b 0x806b1808 */ // 0x806B1800
    /* li r29, 0 */ // 0x806B1804
    r12 = *(0 + r29); // lwz @ 0x806B1808
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B1810
    /* mtctr r12 */ // 0x806B1814
    /* bctrl  */ // 0x806B1818
    r12 = *(0 + r29); // lwz @ 0x806B181C
    r3 = r29;
    /* li r4, 0xfb2 */ // 0x806B1824
    /* li r5, 0 */ // 0x806B1828
    r12 = *(0x68 + r12); // lwz @ 0x806B182C
    /* mtctr r12 */ // 0x806B1830
    /* bctrl  */ // 0x806B1834
    r0 = r31 + 0x44; // 0x806B1838
    *(0x188 + r29) = r0; // stw @ 0x806B183C
    r3 = r31;
    /* li r4, 0x51 */ // 0x806B1844
    r12 = *(0 + r31); // lwz @ 0x806B1848
    /* li r5, 0 */ // 0x806B184C
    r12 = *(0x24 + r12); // lwz @ 0x806B1850
    /* mtctr r12 */ // 0x806B1854
    /* bctrl  */ // 0x806B1858
    /* li r0, 8 */ // 0x806B185C
    *(0x68 + r31) = r0; // stw @ 0x806B1860
    r0 = *(0x24 + r1); // lwz @ 0x806B1864
    r31 = *(0x1c + r1); // lwz @ 0x806B1868
    r30 = *(0x18 + r1); // lwz @ 0x806B186C
    r29 = *(0x14 + r1); // lwz @ 0x806B1870
}