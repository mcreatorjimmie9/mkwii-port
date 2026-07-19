/* Function at 0x805D10E8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D10E8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805D10F4
    r31 = r3;
    FUN_805D0844(); // bl 0x805D0844
    r3 = *(0x614 + r31); // lwz @ 0x805D1100
    r12 = *(0 + r3); // lwz @ 0x805D1104
    r12 = *(0x1c + r12); // lwz @ 0x805D1108
    /* mtctr r12 */ // 0x805D110C
    /* bctrl  */ // 0x805D1110
    /* li r0, 0 */ // 0x805D1114
    *(0x614 + r31) = r0; // stw @ 0x805D1118
    *(0x60c + r31) = r0; // stb @ 0x805D111C
    r0 = *(0x14 + r1); // lwz @ 0x805D1120
    r31 = *(0xc + r1); // lwz @ 0x805D1124
    return;
}