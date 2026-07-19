/* Function at 0x807F5AEC, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807F5AEC(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807F5AF8
    *(0xc + r1) = r31; // stw @ 0x807F5AFC
    r31 = r5;
    if (==) goto 0x0x807f5b10;
    if (!=) goto 0x0x807f5b20;
    r12 = *(0 + r3); // lwz @ 0x807F5B10
    r12 = *(0x108 + r12); // lwz @ 0x807F5B14
    /* mtctr r12 */ // 0x807F5B18
    /* bctrl  */ // 0x807F5B1C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807F5B24
    r0 = *(0x14 + r1); // lwz @ 0x807F5B28
    return;
}