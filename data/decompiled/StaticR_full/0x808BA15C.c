/* Function at 0x808BA15C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808BA15C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808BA168
    r31 = r3;
    FUN_808B4C20(); // bl 0x808B4C20
    r12 = *(0 + r31); // lwz @ 0x808BA174
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808BA17C
    /* mtctr r12 */ // 0x808BA180
    /* bctrl  */ // 0x808BA184
    if (!=) goto 0x0x808ba1a4;
    r0 = *(0x10 + r31); // lwz @ 0x808BA190
    if (!=) goto 0x0x808ba1a4;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r0 = *(0x14 + r1); // lwz @ 0x808BA1A4
    r31 = *(0xc + r1); // lwz @ 0x808BA1A8
    return;
}