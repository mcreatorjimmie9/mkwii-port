/* Function at 0x80676748, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80676748(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8067675C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80676764
    r29 = r3;
    r0 = *(0x174 + r3); // lwz @ 0x8067676C
    if (==) goto 0x0x806767e0;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x8067677C
    r12 = *(0x68 + r12); // lwz @ 0x80676780
    /* mtctr r12 */ // 0x80676784
    /* bctrl  */ // 0x80676788
    r0 = *(0 + r30); // lha @ 0x8067678C
    *(0x10 + r3) = r0; // sth @ 0x80676790
    r0 = *(2 + r30); // lha @ 0x80676794
    *(0x12 + r3) = r0; // sth @ 0x80676798
    r0 = *(4 + r30); // lha @ 0x8067679C
    *(0x14 + r3) = r0; // sth @ 0x806767A0
    r0 = *(6 + r30); // lha @ 0x806767A4
    *(0x16 + r3) = r0; // sth @ 0x806767A8
    r3 = *(0x174 + r29); // lwz @ 0x806767AC
    r12 = *(0 + r3); // lwz @ 0x806767B0
    r12 = *(0x68 + r12); // lwz @ 0x806767B4
    /* mtctr r12 */ // 0x806767B8
    /* bctrl  */ // 0x806767BC
    r0 = *(0 + r31); // lha @ 0x806767C0
    *(0x18 + r3) = r0; // sth @ 0x806767C4
    r0 = *(2 + r31); // lha @ 0x806767C8
    *(0x1a + r3) = r0; // sth @ 0x806767CC
    r0 = *(4 + r31); // lha @ 0x806767D0
    *(0x1c + r3) = r0; // sth @ 0x806767D4
    r0 = *(6 + r31); // lha @ 0x806767D8
    *(0x1e + r3) = r0; // sth @ 0x806767DC
    r0 = *(0x24 + r1); // lwz @ 0x806767E0
    r31 = *(0x1c + r1); // lwz @ 0x806767E4
    r30 = *(0x18 + r1); // lwz @ 0x806767E8
    r29 = *(0x14 + r1); // lwz @ 0x806767EC
    return;
}