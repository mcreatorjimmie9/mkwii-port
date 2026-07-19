/* Function at 0x807E15E8, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E15E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807E15FC
    r30 = r3;
    r5 = *(0xb0 + r3); // lwz @ 0x807E1604
    if (==) goto 0x0x807e161c;
    r0 = r5 + -7; // 0x807E1610
    if (>) goto 0x0x807e166c;
    r0 = *(0x178 + r3); // lbz @ 0x807E161C
    if (==) goto 0x0x807e166c;
    r3 = *(0x15c + r3); // lwz @ 0x807E1628
    r12 = *(0 + r3); // lwz @ 0x807E162C
    r12 = *(0xc + r12); // lwz @ 0x807E1630
    /* mtctr r12 */ // 0x807E1634
    /* bctrl  */ // 0x807E1638
    r3 = *(0x15c + r30); // lwz @ 0x807E163C
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807E1644
    r12 = *(0x78 + r12); // lwz @ 0x807E1648
    /* mtctr r12 */ // 0x807E164C
    /* bctrl  */ // 0x807E1650
    r3 = *(0x15c + r30); // lwz @ 0x807E1654
    r12 = *(0 + r3); // lwz @ 0x807E1658
    r12 = *(0x80 + r12); // lwz @ 0x807E165C
    /* mtctr r12 */ // 0x807E1660
    /* bctrl  */ // 0x807E1664
    /* b 0x807e1680 */ // 0x807E1668
    r3 = *(0x15c + r3); // lwz @ 0x807E166C
    r12 = *(0 + r3); // lwz @ 0x807E1670
    r12 = *(0x10 + r12); // lwz @ 0x807E1674
    /* mtctr r12 */ // 0x807E1678
    /* bctrl  */ // 0x807E167C
    r0 = *(0x14 + r1); // lwz @ 0x807E1680
    r31 = *(0xc + r1); // lwz @ 0x807E1684
    r30 = *(8 + r1); // lwz @ 0x807E1688
    return;
}