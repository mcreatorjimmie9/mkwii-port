/* Function at 0x807BE55C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807BE55C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BE568
    r31 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807BE570
    r12 = *(0xc + r12); // lwz @ 0x807BE574
    /* mtctr r12 */ // 0x807BE578
    /* bctrl  */ // 0x807BE57C
    /* li r0, 0 */ // 0x807BE580
    *(0x1a0 + r31) = r0; // stb @ 0x807BE584
    *(0x1a2 + r31) = r0; // stb @ 0x807BE588
    r31 = *(0xc + r1); // lwz @ 0x807BE58C
    r0 = *(0x14 + r1); // lwz @ 0x807BE590
    return;
}