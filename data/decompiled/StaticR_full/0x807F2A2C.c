/* Function at 0x807F2A2C, size=348 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807F2A2C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807F2A34
    /* li r0, 2 */ // 0x807F2A3C
    *(0x4c + r1) = r31; // stw @ 0x807F2A40
    /* lis r31, 0 */ // 0x807F2A44
    r31 = r31 + 0; // 0x807F2A48
    *(0x48 + r1) = r30; // stw @ 0x807F2A4C
    /* lis r30, 0 */ // 0x807F2A50
    r30 = r30 + 0; // 0x807F2A54
    *(0x44 + r1) = r29; // stw @ 0x807F2A58
    r29 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x807F2A60
    r12 = *(0 + r3); // lwz @ 0x807F2A64
    r12 = *(0x68 + r12); // lwz @ 0x807F2A68
    /* mtctr r12 */ // 0x807F2A6C
    /* bctrl  */ // 0x807F2A70
    r3 = *(0xb0 + r29); // lwz @ 0x807F2A74
    /* li r4, 0 */ // 0x807F2A78
    r12 = *(0 + r3); // lwz @ 0x807F2A7C
    r12 = *(0xc + r12); // lwz @ 0x807F2A80
    /* mtctr r12 */ // 0x807F2A84
    /* bctrl  */ // 0x807F2A88
    /* lfs f4, 0xc(r30) */ // 0x807F2A8C
    r3 = r29;
    /* lfs f0, 0x2c(r31) */ // 0x807F2A94
    r0 = *(0x2c + r29); // lhz @ 0x807F2A98
    /* fmuls f1, f4, f0 */ // 0x807F2A9C
    /* lfs f3, 8(r30) */ // 0x807F2AA0
    /* lfs f2, 0x14(r30) */ // 0x807F2AA4
    r0 = r0 | 8; // 0x807F2AA8
    /* lfs f0, 0x18(r30) */ // 0x807F2AAC
    /* fdivs f1, f1, f3 */ // 0x807F2AB0
    /* fmuls f1, f1, f2 */ // 0x807F2AB4
    /* fdivs f0, f1, f0 */ // 0x807F2AB8
    /* stfs f0, 0x12c(r29) */ // 0x807F2ABC
    /* lfs f0, 0x2c(r31) */ // 0x807F2AC0
    /* fmuls f0, f4, f0 */ // 0x807F2AC4
    *(0x2c + r29) = r0; // sth @ 0x807F2AC8
    /* fdivs f0, f0, f3 */ // 0x807F2ACC
    /* fmuls f0, f0, f2 */ // 0x807F2AD0
    /* stfs f0, 0x128(r29) */ // 0x807F2AD4
    /* stfs f0, 0x3c(r29) */ // 0x807F2AD8
    /* stfs f0, 0x40(r29) */ // 0x807F2ADC
    /* stfs f0, 0x44(r29) */ // 0x807F2AE0
    FUN_807F2CA0(); // bl 0x807F2CA0
    r0 = *(0xec + r29); // lwz @ 0x807F2AE8
    r3 = r29;
    *(0xe8 + r29) = r0; // stw @ 0x807F2AF0
    /* li r4, 0x2ee */ // 0x807F2AF4
    /* lfs f1, 0(r30) */ // 0x807F2AF8
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* lfs f1, 0x44(r31) */ // 0x807F2B00
    r4 = r29 + 0xb8; // 0x807F2B08
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r29 + 0x30; // 0x807F2B14
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x40(r31) */ // 0x807F2B20
    /* lis r3, 0 */ // 0x807F2B24
    /* lfs f0, 0x38(r31) */ // 0x807F2B28
    r4 = r29 + 0x30; // 0x807F2B2C
    /* fctiwz f3, f2 */ // 0x807F2B30
    /* lfs f1, 0x3c(r31) */ // 0x807F2B34
    /* fctiwz f0, f0 */ // 0x807F2B38
    r3 = *(0 + r3); // lwz @ 0x807F2B3C
    /* fctiwz f2, f1 */ // 0x807F2B40
    /* stfd f3, 0x20(r1) */ // 0x807F2B44
    /* stfd f2, 0x28(r1) */ // 0x807F2B48
    /* lfs f1, 0x34(r31) */ // 0x807F2B50
    /* li r9, 0xc */ // 0x807F2B54
    /* stfd f0, 0x30(r1) */ // 0x807F2B58
    r8 = *(0x24 + r1); // lwz @ 0x807F2B5C
    r7 = *(0x2c + r1); // lwz @ 0x807F2B60
    r6 = *(0x34 + r1); // lwz @ 0x807F2B64
    FUN_80818D00(r9); // bl 0x80818D00
    r0 = *(0x54 + r1); // lwz @ 0x807F2B6C
    r31 = *(0x4c + r1); // lwz @ 0x807F2B70
    r30 = *(0x48 + r1); // lwz @ 0x807F2B74
    r29 = *(0x44 + r1); // lwz @ 0x807F2B78
    return;
}