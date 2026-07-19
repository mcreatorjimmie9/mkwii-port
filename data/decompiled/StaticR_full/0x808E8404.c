/* Function at 0x808E8404, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808E8404(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808E8410
    r31 = r3;
    FUN_808B3318(); // bl 0x808B3318
    r12 = *(0x6c4 + r31); // lwz @ 0x808E841C
    r3 = r31 + 0x6c4; // 0x808E8420
    r12 = *(0xc + r12); // lwz @ 0x808E8424
    /* mtctr r12 */ // 0x808E8428
    /* bctrl  */ // 0x808E842C
    /* li r0, 0x69 */ // 0x808E8430
    *(0x3ec + r31) = r0; // stw @ 0x808E8434
    r31 = *(0xc + r1); // lwz @ 0x808E8438
    r0 = *(0x14 + r1); // lwz @ 0x808E843C
    return;
}