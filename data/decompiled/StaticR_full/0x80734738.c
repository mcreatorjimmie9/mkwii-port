/* Function at 0x80734738, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80734738(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80734748
    r30 = r3;
    r31 = *(0x24c + r3); // lwz @ 0x80734750
    if (==) goto 0x0x80734794;
    r12 = *(0 + r31); // lwz @ 0x8073475C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80734764
    /* mtctr r12 */ // 0x80734768
    /* bctrl  */ // 0x8073476C
    r0 = *(0xb0 + r30); // lbz @ 0x80734770
    if (==) goto 0x0x80734794;
    r12 = *(0 + r31); // lwz @ 0x8073477C
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80734784
    r12 = *(0x70 + r12); // lwz @ 0x80734788
    /* mtctr r12 */ // 0x8073478C
    /* bctrl  */ // 0x80734790
    r0 = *(0x14 + r1); // lwz @ 0x80734794
    r31 = *(0xc + r1); // lwz @ 0x80734798
    r30 = *(8 + r1); // lwz @ 0x8073479C
    return;
}