/* Function at 0x80790180, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80790180(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80790190
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80790198
    r30 = r3;
    if (!=) goto 0x0x807901bc;
    r12 = *(0 + r31); // lwz @ 0x807901A4
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x807901AC
    /* mtctr r12 */ // 0x807901B0
    /* bctrl  */ // 0x807901B4
    r5 = r3;
    r0 = *(0x9f + r30); // lbz @ 0x807901BC
    if (!=) goto 0x0x807901d8;
    r4 = r31;
    r3 = r30 + 0x94; // 0x807901CC
    /* clrlwi r5, r5, 0x10 */ // 0x807901D0
    FUN_8078FE10(r4, r3); // bl 0x8078FE10
    r0 = *(0x14 + r1); // lwz @ 0x807901D8
    r31 = *(0xc + r1); // lwz @ 0x807901DC
    r30 = *(8 + r1); // lwz @ 0x807901E0
    return;
}