/* Function at 0x80645140, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80645140(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80645154
    r30 = r3;
    r3 = *(0x34 + r3); // lwz @ 0x8064515C
    r12 = *(0 + r3); // lwz @ 0x80645160
    r12 = *(0xc + r12); // lwz @ 0x80645164
    /* mtctr r12 */ // 0x80645168
    /* bctrl  */ // 0x8064516C
    r3 = *(0x38 + r30); // lwz @ 0x80645170
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x80645178
    r12 = *(0xc + r12); // lwz @ 0x8064517C
    /* mtctr r12 */ // 0x80645180
    /* bctrl  */ // 0x80645184
    r0 = *(0x14 + r1); // lwz @ 0x80645188
    r31 = *(0xc + r1); // lwz @ 0x8064518C
    r30 = *(8 + r1); // lwz @ 0x80645190
    return;
}