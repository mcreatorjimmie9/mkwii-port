/* Function at 0x808E8580, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E8580(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E858C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E8594
    r12 = *(0x10 + r12); // lwz @ 0x808E8598
    /* mtctr r12 */ // 0x808E859C
    /* bctrl  */ // 0x808E85A0
    if (!=) goto 0x0x808e85c0;
    r0 = *(0x10 + r31); // lwz @ 0x808E85AC
    if (!=) goto 0x0x808e85c0;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r0 = *(0x14 + r1); // lwz @ 0x808E85C0
    r31 = *(0xc + r1); // lwz @ 0x808E85C4
    return;
}