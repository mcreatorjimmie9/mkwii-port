/* Function at 0x80742334, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80742334(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80742340
    r31 = r3;
    r3 = *(0x158 + r3); // lwz @ 0x80742348
    FUN_805EEF04(); // bl 0x805EEF04
    r3 = *(0x158 + r31); // lwz @ 0x80742350
    /* li r4, 0 */ // 0x80742354
    r12 = *(0 + r3); // lwz @ 0x80742358
    r12 = *(0xc + r12); // lwz @ 0x8074235C
    /* mtctr r12 */ // 0x80742360
    /* bctrl  */ // 0x80742364
    r0 = *(0x14 + r1); // lwz @ 0x80742368
    r31 = *(0xc + r1); // lwz @ 0x8074236C
    return;
}