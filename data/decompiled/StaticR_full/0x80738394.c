/* Function at 0x80738394, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80738394(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807383A4
    r30 = r3;
    r31 = *(0x1fc + r3); // lwz @ 0x807383AC
    if (==) goto 0x0x8073841c;
    r12 = *(0 + r31); // lwz @ 0x807383B8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807383C0
    /* mtctr r12 */ // 0x807383C4
    /* bctrl  */ // 0x807383C8
    r12 = *(0 + r31); // lwz @ 0x807383CC
    r3 = r31;
    r4 = r30 + 0xc4; // 0x807383D4
    r12 = *(0x78 + r12); // lwz @ 0x807383D8
    /* mtctr r12 */ // 0x807383DC
    /* bctrl  */ // 0x807383E0
    r0 = *(0xb0 + r30); // lbz @ 0x807383E4
    if (==) goto 0x0x80738408;
    r12 = *(0 + r31); // lwz @ 0x807383F0
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807383F8
    r12 = *(0x70 + r12); // lwz @ 0x807383FC
    /* mtctr r12 */ // 0x80738400
    /* bctrl  */ // 0x80738404
    r12 = *(0 + r31); // lwz @ 0x80738408
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x80738410
    /* mtctr r12 */ // 0x80738414
    /* bctrl  */ // 0x80738418
    r0 = *(0x14 + r1); // lwz @ 0x8073841C
    r31 = *(0xc + r1); // lwz @ 0x80738420
    r30 = *(8 + r1); // lwz @ 0x80738424
    return;
}