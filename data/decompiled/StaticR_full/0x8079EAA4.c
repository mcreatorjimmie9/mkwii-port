/* Function at 0x8079EAA4, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8079EAA4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8079EAB4
    r30 = r3;
    r0 = *(0x71 + r3); // lbz @ 0x8079EABC
    if (==) goto 0x0x8079eb20;
    r0 = *(0x40 + r3); // lwz @ 0x8079EAC8
    if (<) goto 0x0x8079eb20;
    if (>) goto 0x0x8079eb20;
    /* lis r3, 0 */ // 0x8079EADC
    r3 = *(0 + r3); // lwz @ 0x8079EAE0
    r3 = *(0x1c + r3); // lwz @ 0x8079EAE4
    if (==) goto 0x0x8079eb20;
    r3 = *(0 + r3); // lwz @ 0x8079EAF0
    /* li r31, 0 */ // 0x8079EAF4
    if (==) goto 0x0x8079eb1c;
    r12 = *(0 + r3); // lwz @ 0x8079EB00
    r12 = *(0x14 + r12); // lwz @ 0x8079EB04
    /* mtctr r12 */ // 0x8079EB08
    /* bctrl  */ // 0x8079EB0C
    if (==) goto 0x0x8079eb1c;
    /* li r31, 1 */ // 0x8079EB18
    *(0x71 + r30) = r31; // stb @ 0x8079EB1C
    r3 = *(0x71 + r30); // lbz @ 0x8079EB20
    r31 = *(0xc + r1); // lwz @ 0x8079EB24
    r30 = *(8 + r1); // lwz @ 0x8079EB28
    r0 = *(0x14 + r1); // lwz @ 0x8079EB2C
    return;
}