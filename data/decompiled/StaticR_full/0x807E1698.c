/* Function at 0x807E1698, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E1698(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807E16AC
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807E16B4
    if (==) goto 0x0x807e16d8;
    if (==) goto 0x0x807e16d8;
    if (==) goto 0x0x807e16d8;
    if (!=) goto 0x0x807e1728;
    r0 = *(0x178 + r3); // lbz @ 0x807E16D8
    if (==) goto 0x0x807e1728;
    r3 = *(0x164 + r3); // lwz @ 0x807E16E4
    r12 = *(0 + r3); // lwz @ 0x807E16E8
    r12 = *(0xc + r12); // lwz @ 0x807E16EC
    /* mtctr r12 */ // 0x807E16F0
    /* bctrl  */ // 0x807E16F4
    r3 = *(0x164 + r30); // lwz @ 0x807E16F8
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807E1700
    r12 = *(0x78 + r12); // lwz @ 0x807E1704
    /* mtctr r12 */ // 0x807E1708
    /* bctrl  */ // 0x807E170C
    r3 = *(0x164 + r30); // lwz @ 0x807E1710
    r12 = *(0 + r3); // lwz @ 0x807E1714
    r12 = *(0x80 + r12); // lwz @ 0x807E1718
    /* mtctr r12 */ // 0x807E171C
    /* bctrl  */ // 0x807E1720
    /* b 0x807e173c */ // 0x807E1724
    r3 = *(0x164 + r3); // lwz @ 0x807E1728
    r12 = *(0 + r3); // lwz @ 0x807E172C
    r12 = *(0x10 + r12); // lwz @ 0x807E1730
    /* mtctr r12 */ // 0x807E1734
    /* bctrl  */ // 0x807E1738
    r0 = *(0x14 + r1); // lwz @ 0x807E173C
    r31 = *(0xc + r1); // lwz @ 0x807E1740
    r30 = *(8 + r1); // lwz @ 0x807E1744
    return;
}