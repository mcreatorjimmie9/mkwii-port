/* Function at 0x80788F04, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80788F04(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x10; // 0x80788F14
    *(8 + r1) = r30; // stw @ 0x80788F18
    /* li r30, 0 */ // 0x80788F1C
    r12 = *(8 + r31); // lwz @ 0x80788F20
    r3 = r31;
    r12 = *(8 + r12); // lwz @ 0x80788F28
    /* mtctr r12 */ // 0x80788F2C
    /* bctrl  */ // 0x80788F30
    r30 = r30 + 1; // 0x80788F34
    r31 = r31 + 0x1c; // 0x80788F38
    if (<) goto 0x0x80788f20;
    r0 = *(0x14 + r1); // lwz @ 0x80788F44
    r31 = *(0xc + r1); // lwz @ 0x80788F48
    r30 = *(8 + r1); // lwz @ 0x80788F4C
    return;
}