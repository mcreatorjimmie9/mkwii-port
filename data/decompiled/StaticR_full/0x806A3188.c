/* Function at 0x806A3188, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806A3188(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A319C
    r30 = r3;
    r0 = *(0x17c + r3); // lwz @ 0x806A31A4
    if (==) goto 0x0x806a3218;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806A31B4
    r12 = *(0x68 + r12); // lwz @ 0x806A31B8
    /* mtctr r12 */ // 0x806A31BC
    /* bctrl  */ // 0x806A31C0
    r0 = *(0 + r31); // lha @ 0x806A31C4
    *(0x10 + r3) = r0; // sth @ 0x806A31C8
    r0 = *(2 + r31); // lha @ 0x806A31CC
    *(0x12 + r3) = r0; // sth @ 0x806A31D0
    r0 = *(4 + r31); // lha @ 0x806A31D4
    *(0x14 + r3) = r0; // sth @ 0x806A31D8
    r0 = *(6 + r31); // lha @ 0x806A31DC
    *(0x16 + r3) = r0; // sth @ 0x806A31E0
    r3 = *(0x17c + r30); // lwz @ 0x806A31E4
    r12 = *(0 + r3); // lwz @ 0x806A31E8
    r12 = *(0x68 + r12); // lwz @ 0x806A31EC
    /* mtctr r12 */ // 0x806A31F0
    /* bctrl  */ // 0x806A31F4
    r0 = *(0 + r31); // lha @ 0x806A31F8
    *(0x18 + r3) = r0; // sth @ 0x806A31FC
    r0 = *(2 + r31); // lha @ 0x806A3200
    *(0x1a + r3) = r0; // sth @ 0x806A3204
    r0 = *(4 + r31); // lha @ 0x806A3208
    *(0x1c + r3) = r0; // sth @ 0x806A320C
    r0 = *(6 + r31); // lha @ 0x806A3210
    *(0x1e + r3) = r0; // sth @ 0x806A3214
    r0 = *(0x14 + r1); // lwz @ 0x806A3218
    r31 = *(0xc + r1); // lwz @ 0x806A321C
    r30 = *(8 + r1); // lwz @ 0x806A3220
    return;
}