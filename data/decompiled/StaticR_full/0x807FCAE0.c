/* Function at 0x807FCAE0, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807FCAE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807FCAEC
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807FCAF4
    r12 = *(0 + r3); // lwz @ 0x807FCAF8
    r12 = *(0x14 + r12); // lwz @ 0x807FCAFC
    /* mtctr r12 */ // 0x807FCB00
    /* bctrl  */ // 0x807FCB04
    if (!=) goto 0x0x807fcb44;
    /* li r0, 0 */ // 0x807FCB10
    *(0xb0 + r31) = r0; // stw @ 0x807FCB14
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x807FCB1C
    r12 = *(0x90 + r12); // lwz @ 0x807FCB20
    /* mtctr r12 */ // 0x807FCB24
    /* bctrl  */ // 0x807FCB28
    r12 = *(0 + r31); // lwz @ 0x807FCB2C
    r3 = r31;
    /* li r4, 0 */ // 0x807FCB34
    r12 = *(0x68 + r12); // lwz @ 0x807FCB38
    /* mtctr r12 */ // 0x807FCB3C
    /* bctrl  */ // 0x807FCB40
    r0 = *(0x14 + r1); // lwz @ 0x807FCB44
    r31 = *(0xc + r1); // lwz @ 0x807FCB48
    return;
}