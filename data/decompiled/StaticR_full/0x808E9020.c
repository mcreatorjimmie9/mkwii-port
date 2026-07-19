/* Function at 0x808E9020, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E9020(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E902C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E9034
    r12 = *(0x10 + r12); // lwz @ 0x808E9038
    /* mtctr r12 */ // 0x808E903C
    /* bctrl  */ // 0x808E9040
    if (!=) goto 0x0x808e9060;
    r0 = *(0x10 + r31); // lwz @ 0x808E904C
    if (!=) goto 0x0x808e9060;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r0 = *(0x14 + r1); // lwz @ 0x808E9060
    r31 = *(0xc + r1); // lwz @ 0x808E9064
    return;
}