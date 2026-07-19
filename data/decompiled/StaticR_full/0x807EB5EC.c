/* Function at 0x807EB5EC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807EB5EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 3 */ // 0x807EB5F4
    *(0xc + r1) = r31; // stw @ 0x807EB5FC
    *(8 + r1) = r30; // stw @ 0x807EB600
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x807EB608
    r3 = *(0x28 + r5); // lwz @ 0x807EB60C
    FUN_805E7060(); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807EB614
    r31 = r3;
    r12 = *(0x18 + r12); // lwz @ 0x807EB61C
    /* mtctr r12 */ // 0x807EB620
    /* bctrl  */ // 0x807EB624
    /* fabs f0, f1 */ // 0x807EB628
    r12 = *(0 + r31); // lwz @ 0x807EB62C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x807EB634
    /* fneg f1, f0 */ // 0x807EB638
    /* mtctr r12 */ // 0x807EB63C
    /* bctrl  */ // 0x807EB640
    /* li r0, 0 */ // 0x807EB644
    *(0x12c + r30) = r0; // stb @ 0x807EB648
    r31 = *(0xc + r1); // lwz @ 0x807EB64C
    r30 = *(8 + r1); // lwz @ 0x807EB650
    r0 = *(0x14 + r1); // lwz @ 0x807EB654
    return;
}