/* Function at 0x8088BEA4, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8088BEA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8088BEB0
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x8088BEB8
    if (==) goto 0x0x8088bedc;
    r3 = r0;
    r4 = r31 + 0x3c; // 0x8088BEC8
    r12 = *(0 + r3); // lwz @ 0x8088BECC
    r12 = *(0x14 + r12); // lwz @ 0x8088BED0
    /* mtctr r12 */ // 0x8088BED4
    /* bctrl  */ // 0x8088BED8
    r0 = *(0x90 + r31); // lbz @ 0x8088BEDC
    if (==) goto 0x0x8088bf00;
    r3 = *(0xc + r31); // lwz @ 0x8088BEE8
    r4 = r31 + 0x3c; // 0x8088BEEC
    r12 = *(0 + r3); // lwz @ 0x8088BEF0
    r12 = *(0x14 + r12); // lwz @ 0x8088BEF4
    /* mtctr r12 */ // 0x8088BEF8
    /* bctrl  */ // 0x8088BEFC
    r3 = *(0x178 + r31); // lwz @ 0x8088BF00
    if (==) goto 0x0x8088bf20;
    r12 = *(0 + r3); // lwz @ 0x8088BF0C
    r4 = r31 + 0x3c; // 0x8088BF10
    r12 = *(0x14 + r12); // lwz @ 0x8088BF14
    /* mtctr r12 */ // 0x8088BF18
    /* bctrl  */ // 0x8088BF1C
    r0 = *(0x14 + r1); // lwz @ 0x8088BF20
    r31 = *(0xc + r1); // lwz @ 0x8088BF24
    return;
}