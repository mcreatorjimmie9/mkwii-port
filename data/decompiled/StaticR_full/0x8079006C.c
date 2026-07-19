/* Function at 0x8079006C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8079006C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8079007C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80790084
    r30 = r3;
    if (!=) goto 0x0x807900ac;
    r0 = *(0x1d + r3); // lbz @ 0x80790090
    if (!=) goto 0x0x807900ac;
    r12 = *(0 + r3); // lwz @ 0x8079009C
    r12 = *(0x18 + r12); // lwz @ 0x807900A0
    /* mtctr r12 */ // 0x807900A4
    /* bctrl  */ // 0x807900A8
    *(0x1d + r30) = r31; // stb @ 0x807900AC
    r31 = *(0xc + r1); // lwz @ 0x807900B0
    r30 = *(8 + r1); // lwz @ 0x807900B4
    r0 = *(0x14 + r1); // lwz @ 0x807900B8
    return;
}