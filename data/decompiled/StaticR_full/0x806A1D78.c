/* Function at 0x806A1D78, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806A1D78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A1D84
    r31 = r3;
    *(0x204 + r3) = r4; // stw @ 0x806A1D8C
    r3 = *(0x214 + r3); // lwz @ 0x806A1D90
    r12 = *(0 + r3); // lwz @ 0x806A1D94
    r12 = *(0x18 + r12); // lwz @ 0x806A1D98
    /* mtctr r12 */ // 0x806A1D9C
    /* bctrl  */ // 0x806A1DA0
    r3 = *(0x29c + r31); // lwz @ 0x806A1DA4
    if (==) goto 0x0x806a1dcc;
    r12 = *(0 + r3); // lwz @ 0x806A1DB0
    r4 = r31;
    /* li r5, -1 */ // 0x806A1DB8
    r6 = *(0x204 + r31); // lwz @ 0x806A1DBC
    r12 = *(8 + r12); // lwz @ 0x806A1DC0
    /* mtctr r12 */ // 0x806A1DC4
    /* bctrl  */ // 0x806A1DC8
    r0 = *(0x14 + r1); // lwz @ 0x806A1DCC
    r31 = *(0xc + r1); // lwz @ 0x806A1DD0
    return;
}