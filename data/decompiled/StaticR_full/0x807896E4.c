/* Function at 0x807896E4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807896E4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x10; // 0x807896F4
    *(8 + r1) = r30; // stw @ 0x807896F8
    /* li r30, 0 */ // 0x807896FC
    r12 = *(8 + r31); // lwz @ 0x80789700
    r3 = r31;
    r12 = *(8 + r12); // lwz @ 0x80789708
    /* mtctr r12 */ // 0x8078970C
    /* bctrl  */ // 0x80789710
    r30 = r30 + 1; // 0x80789714
    r31 = r31 + 0x1c; // 0x80789718
    if (<) goto 0x0x80789700;
    r0 = *(0x14 + r1); // lwz @ 0x80789724
    r31 = *(0xc + r1); // lwz @ 0x80789728
    r30 = *(8 + r1); // lwz @ 0x8078972C
    return;
}