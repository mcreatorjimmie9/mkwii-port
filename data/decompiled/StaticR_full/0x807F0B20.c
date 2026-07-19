/* Function at 0x807F0B20, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_807F0B20(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807F0B2C
    r31 = r3;
    r0 = *(0xcc + r3); // lwz @ 0x807F0B34
    if (>=) goto 0x0x807f0bc0;
    /* li r0, 0 */ // 0x807F0B40
    *(0xb0 + r3) = r0; // stw @ 0x807F0B44
    /* lis r4, 0 */ // 0x807F0B48
    /* lis r5, 0 */ // 0x807F0B4C
    /* lfs f0, 0(r4) */ // 0x807F0B50
    /* lis r0, 0x4330 */ // 0x807F0B54
    /* stfs f0, 0xc4(r3) */ // 0x807F0B58
    /* li r4, 1 */ // 0x807F0B5C
    r7 = *(0xa0 + r3); // lwz @ 0x807F0B60
    *(8 + r1) = r0; // stw @ 0x807F0B64
    r6 = *(0 + r7); // lwz @ 0x807F0B68
    /* lfd f1, 0(r5) */ // 0x807F0B6C
    r0 = *(0x30 + r6); // lha @ 0x807F0B70
    /* xoris r0, r0, 0x8000 */ // 0x807F0B74
    *(0xc + r1) = r0; // stw @ 0x807F0B78
    /* lfd f0, 8(r1) */ // 0x807F0B7C
    /* fsubs f0, f0, f1 */ // 0x807F0B80
    /* stfs f0, 0xbc(r3) */ // 0x807F0B84
    r5 = *(0 + r7); // lwz @ 0x807F0B88
    r0 = *(0x2c + r5); // lha @ 0x807F0B8C
    *(0xcc + r3) = r0; // stw @ 0x807F0B90
    r12 = *(0 + r3); // lwz @ 0x807F0B94
    r12 = *(0x68 + r12); // lwz @ 0x807F0B98
    /* mtctr r12 */ // 0x807F0B9C
    /* bctrl  */ // 0x807F0BA0
    r12 = *(0 + r31); // lwz @ 0x807F0BA4
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807F0BAC
    /* mtctr r12 */ // 0x807F0BB0
    /* bctrl  */ // 0x807F0BB4
    /* li r0, 1 */ // 0x807F0BB8
    *(0x10c + r31) = r0; // stb @ 0x807F0BBC
    r0 = *(0x24 + r1); // lwz @ 0x807F0BC0
    r31 = *(0x1c + r1); // lwz @ 0x807F0BC4
    return;
}