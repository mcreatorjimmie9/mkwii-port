/* Function at 0x807BDA04, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807BDA04(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BDA10
    r31 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807BDA18
    r12 = *(0xc + r12); // lwz @ 0x807BDA1C
    /* mtctr r12 */ // 0x807BDA20
    /* bctrl  */ // 0x807BDA24
    /* li r0, 0 */ // 0x807BDA28
    *(0x1a0 + r31) = r0; // stb @ 0x807BDA2C
    *(0x1a2 + r31) = r0; // stb @ 0x807BDA30
    r31 = *(0xc + r1); // lwz @ 0x807BDA34
    r0 = *(0x14 + r1); // lwz @ 0x807BDA38
    return;
}