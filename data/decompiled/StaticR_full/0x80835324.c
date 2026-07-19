/* Function at 0x80835324, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80835324(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80835330
    r31 = r3;
    FUN_80829394(); // bl 0x80829394
    r3 = *(0x330 + r31); // lwz @ 0x8083533C
    /* li r4, 0 */ // 0x80835340
    r12 = *(0 + r3); // lwz @ 0x80835344
    r12 = *(0xc + r12); // lwz @ 0x80835348
    /* mtctr r12 */ // 0x8083534C
    /* bctrl  */ // 0x80835350
    r0 = *(0x14 + r1); // lwz @ 0x80835354
    r31 = *(0xc + r1); // lwz @ 0x80835358
    return;
}