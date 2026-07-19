/* Function at 0x80782294, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80782294(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8078229C
    *(0x14 + r1) = r0; // stw @ 0x807822A0
    *(0xc + r1) = r31; // stw @ 0x807822A4
    r31 = r3;
    FUN_808A0A44(r4); // bl 0x808A0A44
    r0 = *(0xb4 + r31); // lbz @ 0x807822B0
    if (!=) goto 0x0x807822d8;
    /* lis r3, 0 */ // 0x807822BC
    r3 = *(0 + r3); // lwz @ 0x807822C0
    r12 = *(0 + r3); // lwz @ 0x807822C4
    r12 = *(0xc + r12); // lwz @ 0x807822C8
    /* mtctr r12 */ // 0x807822CC
    /* bctrl  */ // 0x807822D0
    /* b 0x807822ec */ // 0x807822D4
    r3 = *(0xb0 + r31); // lwz @ 0x807822D8
    r12 = *(0 + r3); // lwz @ 0x807822DC
    r12 = *(0xc + r12); // lwz @ 0x807822E0
    /* mtctr r12 */ // 0x807822E4
    /* bctrl  */ // 0x807822E8
    r0 = *(0x14 + r1); // lwz @ 0x807822EC
    r31 = *(0xc + r1); // lwz @ 0x807822F0
    return;
}