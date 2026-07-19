/* Function at 0x80665890, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80665890(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806658A0
    r30 = r4;
    r31 = *(0 + r3); // lwz @ 0x806658A8
    /* b 0x806658cc */ // 0x806658AC
    r12 = *(0 + r31); // lwz @ 0x806658B0
    r3 = r31;
    r4 = r30;
    r12 = *(8 + r12); // lwz @ 0x806658BC
    /* mtctr r12 */ // 0x806658C0
    /* bctrl  */ // 0x806658C4
    r31 = *(4 + r31); // lwz @ 0x806658C8
    if (!=) goto 0x0x806658b0;
    r0 = *(0x14 + r1); // lwz @ 0x806658D4
    r31 = *(0xc + r1); // lwz @ 0x806658D8
    r30 = *(8 + r1); // lwz @ 0x806658DC
    return;
}