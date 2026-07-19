/* Function at 0x8073BE28, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8073BE28(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073BE38
    r30 = r3;
    r31 = *(0x250 + r3); // lwz @ 0x8073BE40
    if (==) goto 0x0x8073beb0;
    r12 = *(0 + r31); // lwz @ 0x8073BE4C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073BE54
    /* mtctr r12 */ // 0x8073BE58
    /* bctrl  */ // 0x8073BE5C
    r12 = *(0 + r31); // lwz @ 0x8073BE60
    r3 = r31;
    r4 = r30 + 0x6d0; // 0x8073BE68
    r12 = *(0x74 + r12); // lwz @ 0x8073BE6C
    /* mtctr r12 */ // 0x8073BE70
    /* bctrl  */ // 0x8073BE74
    r0 = *(0xb0 + r30); // lbz @ 0x8073BE78
    if (==) goto 0x0x8073be9c;
    r12 = *(0 + r31); // lwz @ 0x8073BE84
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8073BE8C
    r12 = *(0x70 + r12); // lwz @ 0x8073BE90
    /* mtctr r12 */ // 0x8073BE94
    /* bctrl  */ // 0x8073BE98
    r12 = *(0 + r31); // lwz @ 0x8073BE9C
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x8073BEA4
    /* mtctr r12 */ // 0x8073BEA8
    /* bctrl  */ // 0x8073BEAC
    /* li r0, 1 */ // 0x8073BEB0
    *(9 + r30) = r0; // stb @ 0x8073BEB4
    r31 = *(0xc + r1); // lwz @ 0x8073BEB8
    r30 = *(8 + r1); // lwz @ 0x8073BEBC
    r0 = *(0x14 + r1); // lwz @ 0x8073BEC0
    return;
}