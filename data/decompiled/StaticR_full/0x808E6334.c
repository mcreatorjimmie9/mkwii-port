/* Function at 0x808E6334, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E6334(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E6340
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808E6348
    if (!=) goto 0x0x808e6364;
    r4 = *(0x3ec + r3); // lwz @ 0x808E6354
    r3 = r3 + 0x6d0; // 0x808E6358
    FUN_806CAD54(r3); // bl 0x806CAD54
    /* b 0x808e6380 */ // 0x808E6360
    r12 = *(0 + r3); // lwz @ 0x808E6364
    r12 = *(0x10 + r12); // lwz @ 0x808E6368
    /* mtctr r12 */ // 0x808E636C
    /* bctrl  */ // 0x808E6370
    r4 = r3;
    r3 = r31 + 0x6d0; // 0x808E6378
    FUN_806CAD54(r4, r3); // bl 0x806CAD54
    r0 = *(0x14 + r1); // lwz @ 0x808E6380
    r31 = *(0xc + r1); // lwz @ 0x808E6384
    return;
}