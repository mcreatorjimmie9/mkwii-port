/* Function at 0x806A3BF4, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806A3BF4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806A3C08
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806A3C10
    r29 = r3;
    r0 = *(0x46c + r3); // lwz @ 0x806A3C18
    if (==) goto 0x0x806a3c8c;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806A3C28
    r12 = *(0x68 + r12); // lwz @ 0x806A3C2C
    /* mtctr r12 */ // 0x806A3C30
    /* bctrl  */ // 0x806A3C34
    r0 = *(0 + r30); // lha @ 0x806A3C38
    *(0x10 + r3) = r0; // sth @ 0x806A3C3C
    r0 = *(2 + r30); // lha @ 0x806A3C40
    *(0x12 + r3) = r0; // sth @ 0x806A3C44
    r0 = *(4 + r30); // lha @ 0x806A3C48
    *(0x14 + r3) = r0; // sth @ 0x806A3C4C
    r0 = *(6 + r30); // lha @ 0x806A3C50
    *(0x16 + r3) = r0; // sth @ 0x806A3C54
    r3 = *(0x46c + r29); // lwz @ 0x806A3C58
    r12 = *(0 + r3); // lwz @ 0x806A3C5C
    r12 = *(0x68 + r12); // lwz @ 0x806A3C60
    /* mtctr r12 */ // 0x806A3C64
    /* bctrl  */ // 0x806A3C68
    r0 = *(0 + r31); // lha @ 0x806A3C6C
    *(0x18 + r3) = r0; // sth @ 0x806A3C70
    r0 = *(2 + r31); // lha @ 0x806A3C74
    *(0x1a + r3) = r0; // sth @ 0x806A3C78
    r0 = *(4 + r31); // lha @ 0x806A3C7C
    *(0x1c + r3) = r0; // sth @ 0x806A3C80
    r0 = *(6 + r31); // lha @ 0x806A3C84
    *(0x1e + r3) = r0; // sth @ 0x806A3C88
    r0 = *(0x24 + r1); // lwz @ 0x806A3C8C
    r31 = *(0x1c + r1); // lwz @ 0x806A3C90
    r30 = *(0x18 + r1); // lwz @ 0x806A3C94
    r29 = *(0x14 + r1); // lwz @ 0x806A3C98
    return;
}