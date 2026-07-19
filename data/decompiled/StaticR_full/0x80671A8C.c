/* Function at 0x80671A8C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80671A8C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80671A98
    r31 = r3;
    r4 = *(8 + r3); // lwz @ 0x80671AA0
    r0 = r4 + -3; // 0x80671AA4
    if (>) goto 0x0x80671ae4;
    r12 = *(0 + r3); // lwz @ 0x80671AB0
    r12 = *(0x48 + r12); // lwz @ 0x80671AB4
    /* mtctr r12 */ // 0x80671AB8
    /* bctrl  */ // 0x80671ABC
    r3 = r31 + 0x24; // 0x80671AC0
    FUN_8064DFE4(r3); // bl 0x8064DFE4
    r12 = *(0 + r31); // lwz @ 0x80671AC8
    r3 = r31;
    r12 = *(0x4c + r12); // lwz @ 0x80671AD0
    /* mtctr r12 */ // 0x80671AD4
    /* bctrl  */ // 0x80671AD8
    r3 = r31;
    FUN_80671E1C(r3, r3); // bl 0x80671E1C
    r0 = *(0x14 + r1); // lwz @ 0x80671AE4
    r31 = *(0xc + r1); // lwz @ 0x80671AE8
    return;
}