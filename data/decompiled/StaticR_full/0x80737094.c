/* Function at 0x80737094, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80737094(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807370A4
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x807370AC
    if (!=) goto 0x0x80737128;
    /* lis r4, 0 */ // 0x807370B8
    r4 = *(0 + r4); // lwz @ 0x807370BC
    r0 = *(0x10 + r4); // lbz @ 0x807370C0
    if (!=) goto 0x0x80737128;
    r0 = *(0x12b + r3); // lbz @ 0x807370CC
    if (==) goto 0x0x807370dc;
    /* b 0x80737128 */ // 0x807370D8
    r31 = *(0x1f0 + r3); // lwz @ 0x807370DC
    if (==) goto 0x0x80737120;
    r12 = *(0 + r31); // lwz @ 0x807370E8
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807370F0
    /* mtctr r12 */ // 0x807370F4
    /* bctrl  */ // 0x807370F8
    r0 = *(0xb0 + r30); // lbz @ 0x807370FC
    if (==) goto 0x0x80737120;
    r12 = *(0 + r31); // lwz @ 0x80737108
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80737110
    r12 = *(0x70 + r12); // lwz @ 0x80737114
    /* mtctr r12 */ // 0x80737118
    /* bctrl  */ // 0x8073711C
    /* li r0, 1 */ // 0x80737120
    *(0x92 + r30) = r0; // stb @ 0x80737124
    r0 = *(0x14 + r1); // lwz @ 0x80737128
    r31 = *(0xc + r1); // lwz @ 0x8073712C
    r30 = *(8 + r1); // lwz @ 0x80737130
    return;
}