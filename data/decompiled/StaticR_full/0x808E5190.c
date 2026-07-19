/* Function at 0x808E5190, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E5190(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E519C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E51A4
    r12 = *(0x10 + r12); // lwz @ 0x808E51A8
    /* mtctr r12 */ // 0x808E51AC
    /* bctrl  */ // 0x808E51B0
    if (!=) goto 0x0x808e51d0;
    r0 = *(0x10 + r31); // lwz @ 0x808E51BC
    if (!=) goto 0x0x808e51d0;
    r3 = r31;
    FUN_80671C3C(r3); // bl 0x80671C3C
    r3 = r31;
    FUN_808B4B7C(r3, r3); // bl 0x808B4B7C
    r0 = *(0x14 + r1); // lwz @ 0x808E51D8
    r31 = *(0xc + r1); // lwz @ 0x808E51DC
    return;
}