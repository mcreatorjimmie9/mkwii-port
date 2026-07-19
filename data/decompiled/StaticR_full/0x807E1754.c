/* Function at 0x807E1754, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E1754(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807E1768
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807E1770
    if (!=) goto 0x0x807e17cc;
    r0 = *(0x178 + r3); // lbz @ 0x807E177C
    if (==) goto 0x0x807e17cc;
    r3 = *(0x158 + r3); // lwz @ 0x807E1788
    r12 = *(0 + r3); // lwz @ 0x807E178C
    r12 = *(0xc + r12); // lwz @ 0x807E1790
    /* mtctr r12 */ // 0x807E1794
    /* bctrl  */ // 0x807E1798
    r3 = *(0x158 + r30); // lwz @ 0x807E179C
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807E17A4
    r12 = *(0x78 + r12); // lwz @ 0x807E17A8
    /* mtctr r12 */ // 0x807E17AC
    /* bctrl  */ // 0x807E17B0
    r3 = *(0x158 + r30); // lwz @ 0x807E17B4
    r12 = *(0 + r3); // lwz @ 0x807E17B8
    r12 = *(0x80 + r12); // lwz @ 0x807E17BC
    /* mtctr r12 */ // 0x807E17C0
    /* bctrl  */ // 0x807E17C4
    /* b 0x807e17e0 */ // 0x807E17C8
    r3 = *(0x158 + r3); // lwz @ 0x807E17CC
    r12 = *(0 + r3); // lwz @ 0x807E17D0
    r12 = *(0x10 + r12); // lwz @ 0x807E17D4
    /* mtctr r12 */ // 0x807E17D8
    /* bctrl  */ // 0x807E17DC
    r0 = *(0x14 + r1); // lwz @ 0x807E17E0
    r31 = *(0xc + r1); // lwz @ 0x807E17E4
    r30 = *(8 + r1); // lwz @ 0x807E17E8
    return;
}