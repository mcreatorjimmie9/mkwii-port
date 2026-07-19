/* Function at 0x80736644, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80736644(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736654
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x8073665C
    if (!=) goto 0x0x807366d8;
    /* lis r4, 0 */ // 0x80736668
    r4 = *(0 + r4); // lwz @ 0x8073666C
    r0 = *(0x10 + r4); // lbz @ 0x80736670
    if (!=) goto 0x0x807366d8;
    r0 = *(0x12b + r3); // lbz @ 0x8073667C
    if (==) goto 0x0x8073668c;
    /* b 0x807366d8 */ // 0x80736688
    r31 = *(0x260 + r3); // lwz @ 0x8073668C
    if (==) goto 0x0x807366d0;
    r12 = *(0 + r31); // lwz @ 0x80736698
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807366A0
    /* mtctr r12 */ // 0x807366A4
    /* bctrl  */ // 0x807366A8
    r0 = *(0xb0 + r30); // lbz @ 0x807366AC
    if (==) goto 0x0x807366d0;
    r12 = *(0 + r31); // lwz @ 0x807366B8
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807366C0
    r12 = *(0x70 + r12); // lwz @ 0x807366C4
    /* mtctr r12 */ // 0x807366C8
    /* bctrl  */ // 0x807366CC
    /* li r0, 1 */ // 0x807366D0
    *(0x94 + r30) = r0; // stb @ 0x807366D4
    r0 = *(0x14 + r1); // lwz @ 0x807366D8
    r31 = *(0xc + r1); // lwz @ 0x807366DC
    r30 = *(8 + r1); // lwz @ 0x807366E0
    return;
}