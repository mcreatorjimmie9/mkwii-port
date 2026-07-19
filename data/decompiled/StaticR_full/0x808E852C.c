/* Function at 0x808E852C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E852C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E8538
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808E8540
    r12 = *(0x10 + r12); // lwz @ 0x808E8544
    /* mtctr r12 */ // 0x808E8548
    /* bctrl  */ // 0x808E854C
    if (!=) goto 0x0x808e856c;
    r0 = *(0x10 + r31); // lwz @ 0x808E8558
    if (!=) goto 0x0x808e856c;
    r3 = r31;
    FUN_80671C3C(r3); // bl 0x80671C3C
    r0 = *(0x14 + r1); // lwz @ 0x808E856C
    r31 = *(0xc + r1); // lwz @ 0x808E8570
    return;
}