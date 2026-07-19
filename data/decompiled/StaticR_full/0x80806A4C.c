/* Function at 0x80806A4C, size=300 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80806A4C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80806A5C
    r30 = r3;
    r0 = *(0xe0 + r3); // lwz @ 0x80806A64
    if (!=) goto 0x0x80806b60;
    r5 = *(0xe4 + r3); // lwz @ 0x80806A70
    r6 = *(0x140 + r3); // lwz @ 0x80806A74
    if (==) goto 0x0x80806b20;
    r0 = r5 + 1; // 0x80806A80
    /* li r5, 1 */ // 0x80806A84
    *(0xf8 + r3) = r5; // stb @ 0x80806A8C
    *(0xe4 + r3) = r0; // stw @ 0x80806A90
    if (!=) goto 0x0x80806a9c;
    *(0xf9 + r3) = r5; // stb @ 0x80806A98
    /* lis r31, 0 */ // 0x80806A9C
    /* slwi r0, r4, 2 */ // 0x80806AA0
    /* lfs f0, 0(r31) */ // 0x80806AA4
    r4 = r3 + r0; // 0x80806AA8
    /* stfs f0, 0xe8(r3) */ // 0x80806AAC
    r3 = *(0xb4 + r4); // lwz @ 0x80806AB0
    r12 = *(0 + r3); // lwz @ 0x80806AB4
    r12 = *(0xec + r12); // lwz @ 0x80806AB8
    /* mtctr r12 */ // 0x80806ABC
    /* bctrl  */ // 0x80806AC0
    /* lfs f1, 0(r31) */ // 0x80806AC4
    r3 = r30;
    /* li r4, 0x255 */ // 0x80806ACC
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = *(0x10c + r30); // lwz @ 0x80806AD4
    r12 = *(0 + r3); // lwz @ 0x80806AD8
    r12 = *(0xc + r12); // lwz @ 0x80806ADC
    /* mtctr r12 */ // 0x80806AE0
    /* bctrl  */ // 0x80806AE4
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0x10c + r30); // lwz @ 0x80806AF0
    r4 = r30 + 0x58; // 0x80806AF4
    r12 = *(0 + r3); // lwz @ 0x80806AF8
    r12 = *(0x78 + r12); // lwz @ 0x80806AFC
    /* mtctr r12 */ // 0x80806B00
    /* bctrl  */ // 0x80806B04
    r3 = *(0x10c + r30); // lwz @ 0x80806B08
    r12 = *(0 + r3); // lwz @ 0x80806B0C
    r12 = *(0x80 + r12); // lwz @ 0x80806B10
    /* mtctr r12 */ // 0x80806B14
    /* bctrl  */ // 0x80806B18
    /* b 0x80806b60 */ // 0x80806B1C
    if (==) goto 0x0x80806b60;
    r4 = *(8 + r3); // lwz @ 0x80806B28
    /* lis r3, 0 */ // 0x80806B2C
    /* lis r5, 0 */ // 0x80806B30
    /* lfs f1, 0(r3) */ // 0x80806B34
    r3 = *(0x28 + r4); // lwz @ 0x80806B38
    /* li r4, 1 */ // 0x80806B3C
    /* lfs f2, 0(r5) */ // 0x80806B40
    /* li r5, 1 */ // 0x80806B44
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lis r3, 0 */ // 0x80806B4C
    /* li r0, 1 */ // 0x80806B50
    r3 = *(0 + r3); // lwz @ 0x80806B54
    *(0xf4 + r30) = r3; // stw @ 0x80806B58
    *(0xf0 + r30) = r0; // stb @ 0x80806B5C
    r0 = *(0x14 + r1); // lwz @ 0x80806B60
    r31 = *(0xc + r1); // lwz @ 0x80806B64
    r30 = *(8 + r1); // lwz @ 0x80806B68
    return;
}