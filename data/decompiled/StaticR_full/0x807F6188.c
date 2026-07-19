/* Function at 0x807F6188, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F6188(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F6194
    r31 = r3;
    FUN_807F66AC(); // bl 0x807F66AC
    r12 = *(0 + r31); // lwz @ 0x807F61A0
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F61A8
    /* mtctr r12 */ // 0x807F61AC
    /* bctrl  */ // 0x807F61B0
    r12 = *(0 + r31); // lwz @ 0x807F61B4
    r3 = r31;
    r12 = *(0xfc + r12); // lwz @ 0x807F61BC
    /* mtctr r12 */ // 0x807F61C0
    /* bctrl  */ // 0x807F61C4
    r0 = *(0x14 + r1); // lwz @ 0x807F61C8
    r31 = *(0xc + r1); // lwz @ 0x807F61CC
    return;
}