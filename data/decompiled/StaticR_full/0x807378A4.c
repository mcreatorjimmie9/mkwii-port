/* Function at 0x807378A4, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807378A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807378B4
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x807378BC
    if (!=) goto 0x0x80737930;
    /* lis r4, 0 */ // 0x807378C8
    r4 = *(0 + r4); // lwz @ 0x807378CC
    r0 = *(0x10 + r4); // lbz @ 0x807378D0
    if (!=) goto 0x0x80737930;
    r0 = *(0x129 + r3); // lbz @ 0x807378DC
    if (!=) goto 0x0x807378ec;
    /* b 0x80737930 */ // 0x807378E8
    r31 = *(0x280 + r3); // lwz @ 0x807378EC
    if (==) goto 0x0x80737930;
    r12 = *(0 + r31); // lwz @ 0x807378F8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80737900
    /* mtctr r12 */ // 0x80737904
    /* bctrl  */ // 0x80737908
    r0 = *(0xb0 + r30); // lbz @ 0x8073790C
    if (==) goto 0x0x80737930;
    r12 = *(0 + r31); // lwz @ 0x80737918
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80737920
    r12 = *(0x70 + r12); // lwz @ 0x80737924
    /* mtctr r12 */ // 0x80737928
    /* bctrl  */ // 0x8073792C
    r0 = *(0x14 + r1); // lwz @ 0x80737930
    r31 = *(0xc + r1); // lwz @ 0x80737934
    r30 = *(8 + r1); // lwz @ 0x80737938
    return;
}