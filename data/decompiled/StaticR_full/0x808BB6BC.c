/* Function at 0x808BB6BC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808BB6BC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808BB6C8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808BB6D0
    r12 = *(0x10 + r12); // lwz @ 0x808BB6D4
    /* mtctr r12 */ // 0x808BB6D8
    /* bctrl  */ // 0x808BB6DC
    if (!=) goto 0x0x808bb6fc;
    r0 = *(0x10 + r31); // lwz @ 0x808BB6E8
    if (!=) goto 0x0x808bb6fc;
    r3 = r31;
    FUN_80671C64(r3); // bl 0x80671C64
    r3 = r31;
    FUN_808B4C20(r3, r3); // bl 0x808B4C20
    r0 = *(0x14 + r1); // lwz @ 0x808BB704
    r31 = *(0xc + r1); // lwz @ 0x808BB708
    return;
}