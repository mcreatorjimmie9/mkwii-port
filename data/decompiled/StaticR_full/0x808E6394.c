/* Function at 0x808E6394, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E6394(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E63A0
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808E63A8
    if (!=) goto 0x0x808e63d4;
    r12 = *(0 + r3); // lwz @ 0x808E63B4
    r12 = *(0x10 + r12); // lwz @ 0x808E63B8
    /* mtctr r12 */ // 0x808E63BC
    /* bctrl  */ // 0x808E63C0
    r4 = r3;
    r3 = r31 + 0x6d0; // 0x808E63C8
    FUN_806CAD54(r4, r3); // bl 0x806CAD54
    /* b 0x808e63e0 */ // 0x808E63D0
    r4 = *(0x3ec + r3); // lwz @ 0x808E63D4
    r3 = r3 + 0x6d0; // 0x808E63D8
    FUN_806CAD54(r3, r3); // bl 0x806CAD54
    r0 = *(0x14 + r1); // lwz @ 0x808E63E0
    r31 = *(0xc + r1); // lwz @ 0x808E63E4
    return;
}