/* Function at 0x808E6B14, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E6B14(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E6B20
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E6B28
    r12 = *(0x10 + r12); // lwz @ 0x808E6B2C
    /* mtctr r12 */ // 0x808E6B30
    /* bctrl  */ // 0x808E6B34
    if (!=) goto 0x0x808e6b54;
    r0 = *(0x10 + r31); // lwz @ 0x808E6B40
    if (!=) goto 0x0x808e6b54;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r3 = r31;
    FUN_808B4C20(r3, r3); // bl 0x808B4C20
    r0 = *(0x14 + r1); // lwz @ 0x808E6B5C
    r31 = *(0xc + r1); // lwz @ 0x808E6B60
    return;
}