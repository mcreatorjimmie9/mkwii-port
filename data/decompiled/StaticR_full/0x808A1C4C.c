/* Function at 0x808A1C4C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808A1C4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808A1C60
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x808A1C68
    *(0x9b + r3) = r4; // stb @ 0x808A1C6C
    if (==) goto 0x0x808a1c8c;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x808A1C7C
    r12 = *(0xc + r12); // lwz @ 0x808A1C80
    /* mtctr r12 */ // 0x808A1C84
    /* bctrl  */ // 0x808A1C88
    r3 = *(0x10 + r30); // lwz @ 0x808A1C8C
    if (==) goto 0x0x808a1cac;
    r12 = *(0 + r3); // lwz @ 0x808A1C98
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x808A1CA0
    /* mtctr r12 */ // 0x808A1CA4
    /* bctrl  */ // 0x808A1CA8
    r0 = *(0x14 + r1); // lwz @ 0x808A1CAC
    r31 = *(0xc + r1); // lwz @ 0x808A1CB0
    r30 = *(8 + r1); // lwz @ 0x808A1CB4
    return;
}