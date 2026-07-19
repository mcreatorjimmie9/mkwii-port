/* Function at 0x80738510, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80738510(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80738520
    r30 = r3;
    r31 = *(0x200 + r3); // lwz @ 0x80738528
    if (==) goto 0x0x80738598;
    r12 = *(0 + r31); // lwz @ 0x80738534
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073853C
    /* mtctr r12 */ // 0x80738540
    /* bctrl  */ // 0x80738544
    r12 = *(0 + r31); // lwz @ 0x80738548
    r3 = r31;
    r4 = r30 + 0xc4; // 0x80738550
    r12 = *(0x78 + r12); // lwz @ 0x80738554
    /* mtctr r12 */ // 0x80738558
    /* bctrl  */ // 0x8073855C
    r0 = *(0xb0 + r30); // lbz @ 0x80738560
    if (==) goto 0x0x80738584;
    r12 = *(0 + r31); // lwz @ 0x8073856C
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80738574
    r12 = *(0x70 + r12); // lwz @ 0x80738578
    /* mtctr r12 */ // 0x8073857C
    /* bctrl  */ // 0x80738580
    r12 = *(0 + r31); // lwz @ 0x80738584
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x8073858C
    /* mtctr r12 */ // 0x80738590
    /* bctrl  */ // 0x80738594
    r0 = *(0x14 + r1); // lwz @ 0x80738598
    r31 = *(0xc + r1); // lwz @ 0x8073859C
    r30 = *(8 + r1); // lwz @ 0x807385A0
    return;
}