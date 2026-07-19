/* Function at 0x80736F7C, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80736F7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736F8C
    r30 = r3;
    r31 = *(0x274 + r3); // lwz @ 0x80736F94
    if (==) goto 0x0x80736fd8;
    r12 = *(0 + r31); // lwz @ 0x80736FA0
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80736FA8
    /* mtctr r12 */ // 0x80736FAC
    /* bctrl  */ // 0x80736FB0
    r0 = *(0xb0 + r30); // lbz @ 0x80736FB4
    if (==) goto 0x0x80736fd8;
    r12 = *(0 + r31); // lwz @ 0x80736FC0
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80736FC8
    r12 = *(0x70 + r12); // lwz @ 0x80736FCC
    /* mtctr r12 */ // 0x80736FD0
    /* bctrl  */ // 0x80736FD4
    r0 = *(0x14 + r1); // lwz @ 0x80736FD8
    r31 = *(0xc + r1); // lwz @ 0x80736FDC
    r30 = *(8 + r1); // lwz @ 0x80736FE0
    return;
}