/* Function at 0x808A1CC4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808A1CC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808A1CD8
    r30 = r3;
    r0 = *(0xc + r3); // lwz @ 0x808A1CE0
    *(0x9c + r3) = r4; // stb @ 0x808A1CE4
    if (==) goto 0x0x808a1d04;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x808A1CF4
    r12 = *(0xc + r12); // lwz @ 0x808A1CF8
    /* mtctr r12 */ // 0x808A1CFC
    /* bctrl  */ // 0x808A1D00
    r3 = *(0x10 + r30); // lwz @ 0x808A1D04
    if (==) goto 0x0x808a1d24;
    r12 = *(0 + r3); // lwz @ 0x808A1D10
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x808A1D18
    /* mtctr r12 */ // 0x808A1D1C
    /* bctrl  */ // 0x808A1D20
    r0 = *(0x14 + r1); // lwz @ 0x808A1D24
    r31 = *(0xc + r1); // lwz @ 0x808A1D28
    r30 = *(8 + r1); // lwz @ 0x808A1D2C
    return;
}