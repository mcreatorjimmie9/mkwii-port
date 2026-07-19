/* Function at 0x808E1528, size=684 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_808E1528(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* stfd f31, 0x18(r1) */ // 0x808E1534
    r30 = r3;
    *(0xc + r1) = r29; // stw @ 0x808E1544
    *(8 + r1) = r28; // stw @ 0x808E1548
    /* li r28, 0 */ // 0x808E154C
    /* b 0x808e1580 */ // 0x808E1550
    r3 = *(0x48 + r30); // lwz @ 0x808E1554
    r0 = r28 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x808E155C
    if (==) goto 0x0x808e157c;
    r12 = *(0 + r3); // lwz @ 0x808E1568
    /* li r4, 0 */ // 0x808E156C
    r12 = *(0xc + r12); // lwz @ 0x808E1570
    /* mtctr r12 */ // 0x808E1574
    /* bctrl  */ // 0x808E1578
    r28 = r28 + 1; // 0x808E157C
    r0 = *(8 + r30); // lbz @ 0x808E1580
    /* clrlwi r3, r28, 0x18 */ // 0x808E1584
    if (<) goto 0x0x808e1554;
    r3 = *(0x4c + r30); // lwz @ 0x808E1590
    if (==) goto 0x0x808e15b0;
    r12 = *(0 + r3); // lwz @ 0x808E159C
    /* li r4, 0 */ // 0x808E15A0
    r12 = *(0xc + r12); // lwz @ 0x808E15A4
    /* mtctr r12 */ // 0x808E15A8
    /* bctrl  */ // 0x808E15AC
    r3 = *(0x50 + r30); // lwz @ 0x808E15B0
    if (==) goto 0x0x808e15d0;
    r12 = *(0 + r3); // lwz @ 0x808E15BC
    /* li r4, 0 */ // 0x808E15C0
    r12 = *(0xc + r12); // lwz @ 0x808E15C4
    /* mtctr r12 */ // 0x808E15C8
    /* bctrl  */ // 0x808E15CC
    /* li r29, 0 */ // 0x808E15D0
    /* b 0x808e1624 */ // 0x808E15D4
    /* clrlwi r3, r29, 0x18 */ // 0x808E15D8
    r0 = *(4 + r30); // lwz @ 0x808E15DC
    /* mulli r28, r3, 0x28 */ // 0x808E15E0
    r3 = r0 + r28; // 0x808E15E4
    r0 = *(4 + r3); // lwz @ 0x808E15E8
    if (==) goto 0x0x808e1620;
    r12 = *(0 + r3); // lwz @ 0x808E15F4
    r12 = *(0x10 + r12); // lwz @ 0x808E15F8
    /* mtctr r12 */ // 0x808E15FC
    /* bctrl  */ // 0x808E1600
    r0 = *(4 + r30); // lwz @ 0x808E1604
    /* li r4, 0 */ // 0x808E1608
    /* lwzx r12, r28, r0 */ // 0x808E160C
    r3 = r0 + r28; // 0x808E1610
    r12 = *(0x14 + r12); // lwz @ 0x808E1614
    /* mtctr r12 */ // 0x808E1618
    /* bctrl  */ // 0x808E161C
    r29 = r29 + 1; // 0x808E1620
    r0 = *(9 + r30); // lbz @ 0x808E1624
    /* clrlwi r3, r29, 0x18 */ // 0x808E1628
    if (<) goto 0x0x808e15d8;
    /* li r31, 0 */ // 0x808E1634
    /* b 0x808e17a0 */ // 0x808E1638
    /* clrlwi r0, r31, 0x18 */ // 0x808E163C
    /* mulli r0, r0, 0xc */ // 0x808E1640
    r29 = r30 + r0; // 0x808E1644
    r3 = *(0x18 + r29); // lwz @ 0x808E1648
    r0 = *(4 + r3); // lwz @ 0x808E164C
    if (==) goto 0x0x808e166c;
    r12 = *(0 + r3); // lwz @ 0x808E1658
    /* li r4, 1 */ // 0x808E165C
    r12 = *(0x14 + r12); // lwz @ 0x808E1660
    /* mtctr r12 */ // 0x808E1664
    /* bctrl  */ // 0x808E1668
    /* clrlwi r0, r31, 0x18 */ // 0x808E166C
    /* mulli r0, r0, 0xc */ // 0x808E1670
    r28 = r30 + r0; // 0x808E1674
    r3 = *(0x10 + r28); // lwz @ 0x808E1678
    FUN_805B7218(); // bl 0x805B7218
    if (==) goto 0x0x808e16b0;
    r3 = *(0x48 + r30); // lwz @ 0x808E1688
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x808E1690
    if (==) goto 0x0x808e16b0;
    r12 = *(0 + r3); // lwz @ 0x808E169C
    /* li r4, 1 */ // 0x808E16A0
    r12 = *(0xc + r12); // lwz @ 0x808E16A4
    /* mtctr r12 */ // 0x808E16A8
    /* bctrl  */ // 0x808E16AC
    r5 = *(0x10 + r28); // lwz @ 0x808E16B0
    if (!=) goto 0x0x808e1774;
    r4 = *(0x18 + r29); // lwz @ 0x808E16BC
    r3 = *(4 + r30); // lwz @ 0x808E16C0
    r4 = *(4 + r4); // lwz @ 0x808E16C4
    r0 = *(0x20c + r3); // lwz @ 0x808E16C8
    if (!=) goto 0x0x808e1774;
    r3 = *(0x4c + r30); // lwz @ 0x808E16D4
    if (==) goto 0x0x808e16f4;
    r12 = *(0 + r3); // lwz @ 0x808E16E0
    /* li r4, 1 */ // 0x808E16E4
    r12 = *(0xc + r12); // lwz @ 0x808E16E8
    /* mtctr r12 */ // 0x808E16EC
    /* bctrl  */ // 0x808E16F0
    r3 = *(0x18 + r29); // lwz @ 0x808E16F4
    r0 = *(8 + r3); // lwz @ 0x808E16F8
    if (!=) goto 0x0x808e1764;
    r3 = *(4 + r3); // lwz @ 0x808E1704
    /* li r4, 0 */ // 0x808E1708
    r3 = *(0x28 + r3); // lwz @ 0x808E170C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808E1714
    r29 = r3;
    r12 = *(8 + r12); // lwz @ 0x808E171C
    /* mtctr r12 */ // 0x808E1720
    /* bctrl  */ // 0x808E1724
    r12 = *(0 + r29); // lwz @ 0x808E1728
    /* fmr f31, f1 */ // 0x808E172C
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x808E1734
    /* mtctr r12 */ // 0x808E1738
    /* bctrl  */ // 0x808E173C
    /* .byte 0xfc, 0x01, 0xf8, 0x40 */ // 0x808E1740
    /* cror cr0eq, cr0gt, cr0eq */ // 0x808E1744
    /* mfcr r0 */ // 0x808E1748
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808E174C
    if (==) goto 0x0x808e1764;
    r3 = *(0x4c + r30); // lwz @ 0x808E1754
    /* li r4, 1 */ // 0x808E1758
    FUN_8086F880(r4); // bl 0x8086F880
    /* b 0x808e179c */ // 0x808E1760
    r3 = *(0x4c + r30); // lwz @ 0x808E1764
    /* li r4, 0 */ // 0x808E1768
    FUN_8086F880(r4, r4); // bl 0x8086F880
    /* b 0x808e179c */ // 0x808E1770
    if (!=) goto 0x0x808e179c;
    r3 = *(0x50 + r30); // lwz @ 0x808E177C
    if (==) goto 0x0x808e179c;
    r12 = *(0 + r3); // lwz @ 0x808E1788
    /* li r4, 1 */ // 0x808E178C
    r12 = *(0xc + r12); // lwz @ 0x808E1790
    /* mtctr r12 */ // 0x808E1794
    /* bctrl  */ // 0x808E1798
    r31 = r31 + 1; // 0x808E179C
    r0 = *(8 + r30); // lbz @ 0x808E17A0
    /* clrlwi r3, r31, 0x18 */ // 0x808E17A4
    if (<) goto 0x0x808e163c;
    r0 = *(0x24 + r1); // lwz @ 0x808E17B0
    /* lfd f31, 0x18(r1) */ // 0x808E17B4
    r31 = *(0x14 + r1); // lwz @ 0x808E17B8
    r30 = *(0x10 + r1); // lwz @ 0x808E17BC
    r29 = *(0xc + r1); // lwz @ 0x808E17C0
    r28 = *(8 + r1); // lwz @ 0x808E17C4
    return;
}