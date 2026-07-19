/* Function at 0x8078DEC8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078DEC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8078DED4
    r31 = r3;
    r3 = r3 + 0x94; // 0x8078DEDC
    FUN_807900D0(r3); // bl 0x807900D0
    r12 = *(0 + r31); // lwz @ 0x8078DEE4
    r4 = r3;
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x8078DEF0
    /* mtctr r12 */ // 0x8078DEF4
    /* bctrl  */ // 0x8078DEF8
    r0 = *(0x14 + r1); // lwz @ 0x8078DEFC
    r31 = *(0xc + r1); // lwz @ 0x8078DF00
    return;
}