/* Function at 0x8088A49C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8088A49C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8088A4A8
    r31 = r3;
    FUN_808A01F4(); // bl 0x808A01F4
    r3 = *(0x178 + r31); // lwz @ 0x8088A4B4
    if (==) goto 0x0x8088a4d4;
    r12 = *(0 + r3); // lwz @ 0x8088A4C0
    /* li r4, 0 */ // 0x8088A4C4
    r12 = *(0xc + r12); // lwz @ 0x8088A4C8
    /* mtctr r12 */ // 0x8088A4CC
    /* bctrl  */ // 0x8088A4D0
    r3 = r31;
    /* li r4, 0 */ // 0x8088A4D8
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x8088A4E0
    r31 = *(0xc + r1); // lwz @ 0x8088A4E4
    return;
}