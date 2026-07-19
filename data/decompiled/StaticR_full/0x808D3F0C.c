/* Function at 0x808D3F0C, size=468 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808D3F0C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808D3F14
    r4 = r4 + 0; // 0x808D3F1C
    r4 = r4 + 0x99; // 0x808D3F20
    *(0x6c + r1) = r31; // stw @ 0x808D3F24
    r31 = r3;
    r3 = r3 + 0xa8; // 0x808D3F2C
    *(0x68 + r1) = r30; // stw @ 0x808D3F30
    *(0x64 + r1) = r29; // stw @ 0x808D3F34
    FUN_80665D1C(r3); // bl 0x80665D1C
    *(0x174 + r31) = r3; // stw @ 0x808D3F3C
    r3 = *(0x178 + r31); // lwz @ 0x808D3F44
    FUN_80669A0C(r4, r5); // bl 0x80669A0C
    r6 = *(0x20 + r1); // lha @ 0x808D3F50
    /* lis r0, 0x4330 */ // 0x808D3F54
    r5 = *(0x18 + r1); // lha @ 0x808D3F58
    /* lis r4, 0 */ // 0x808D3F5C
    *(0x28 + r1) = r0; // stw @ 0x808D3F60
    /* lis r3, 0 */ // 0x808D3F64
    r0 = r6 + r5; // 0x808D3F68
    /* lfd f2, 0(r4) */ // 0x808D3F6C
    /* xoris r0, r0, 0x8000 */ // 0x808D3F70
    *(0x2c + r1) = r0; // stw @ 0x808D3F74
    /* lfs f0, 0(r3) */ // 0x808D3F78
    /* li r8, 0xff */ // 0x808D3F7C
    /* lfd f1, 0x28(r1) */ // 0x808D3F80
    /* fsubs f1, f1, f2 */ // 0x808D3F84
    /* fmuls f0, f0, f1 */ // 0x808D3F88
    /* fctiwz f0, f0 */ // 0x808D3F8C
    /* stfd f0, 0x30(r1) */ // 0x808D3F90
    r0 = *(0x34 + r1); // lwz @ 0x808D3F94
    if (>=) goto 0x0x808d3fa4;
    r8 = r0;
    r6 = *(0x22 + r1); // lha @ 0x808D3FA4
    /* lis r0, 0x4330 */ // 0x808D3FA8
    r5 = *(0x1a + r1); // lha @ 0x808D3FAC
    /* lis r4, 0 */ // 0x808D3FB0
    *(0x38 + r1) = r0; // stw @ 0x808D3FB4
    /* lis r3, 0 */ // 0x808D3FB8
    r0 = r6 + r5; // 0x808D3FBC
    /* lfd f2, 0(r4) */ // 0x808D3FC0
    /* xoris r0, r0, 0x8000 */ // 0x808D3FC4
    *(0x3c + r1) = r0; // stw @ 0x808D3FC8
    /* lfs f0, 0(r3) */ // 0x808D3FCC
    /* li r7, 0xff */ // 0x808D3FD0
    /* lfd f1, 0x38(r1) */ // 0x808D3FD4
    *(0x10 + r1) = r8; // stb @ 0x808D3FD8
    /* fsubs f1, f1, f2 */ // 0x808D3FDC
    /* fmuls f0, f0, f1 */ // 0x808D3FE0
    /* fctiwz f0, f0 */ // 0x808D3FE4
    /* stfd f0, 0x40(r1) */ // 0x808D3FE8
    r0 = *(0x44 + r1); // lwz @ 0x808D3FEC
    if (>=) goto 0x0x808d3ffc;
    r7 = r0;
    r6 = *(0x24 + r1); // lha @ 0x808D3FFC
    /* lis r0, 0x4330 */ // 0x808D4000
    r5 = *(0x1c + r1); // lha @ 0x808D4004
    /* lis r4, 0 */ // 0x808D4008
    *(0x48 + r1) = r0; // stw @ 0x808D400C
    /* lis r3, 0 */ // 0x808D4010
    r0 = r6 + r5; // 0x808D4014
    /* lfs f0, 0(r3) */ // 0x808D4018
    /* xoris r0, r0, 0x8000 */ // 0x808D401C
    *(0x4c + r1) = r0; // stw @ 0x808D4020
    /* lfd f2, 0(r4) */ // 0x808D4024
    /* li r3, 0xff */ // 0x808D4028
    /* lfd f1, 0x48(r1) */ // 0x808D402C
    *(0x11 + r1) = r7; // stb @ 0x808D4030
    /* fsubs f1, f1, f2 */ // 0x808D4034
    /* fmuls f0, f0, f1 */ // 0x808D4038
    /* fctiwz f0, f0 */ // 0x808D403C
    /* stfd f0, 0x50(r1) */ // 0x808D4040
    r0 = *(0x54 + r1); // lwz @ 0x808D4044
    if (>=) goto 0x0x808d4054;
    r3 = r0;
    /* li r0, 0xff */ // 0x808D4054
    *(0x12 + r1) = r3; // stb @ 0x808D4058
    /* li r29, 1 */ // 0x808D405C
    *(0x13 + r1) = r0; // stb @ 0x808D4060
    r30 = *(0x10 + r1); // lwz @ 0x808D4064
    *(0xc + r1) = r30; // stw @ 0x808D4068
    r4 = r29;
    r3 = *(0x174 + r31); // lwz @ 0x808D4074
    r12 = *(0 + r3); // lwz @ 0x808D4078
    r12 = *(0x28 + r12); // lwz @ 0x808D407C
    /* mtctr r12 */ // 0x808D4080
    /* bctrl  */ // 0x808D4084
    r29 = r29 + 1; // 0x808D4088
    if (<) goto 0x0x808d4068;
    /* li r0, 0xff */ // 0x808D4094
    *(8 + r1) = r0; // stb @ 0x808D4098
    /* li r4, 0 */ // 0x808D40A0
    *(9 + r1) = r0; // stb @ 0x808D40A4
    *(0xa + r1) = r0; // stb @ 0x808D40A8
    *(0xb + r1) = r0; // stb @ 0x808D40AC
    r3 = *(0x174 + r31); // lwz @ 0x808D40B0
    r12 = *(0 + r3); // lwz @ 0x808D40B4
    r12 = *(0x28 + r12); // lwz @ 0x808D40B8
    /* mtctr r12 */ // 0x808D40BC
    /* bctrl  */ // 0x808D40C0
    r0 = *(0x74 + r1); // lwz @ 0x808D40C4
    r31 = *(0x6c + r1); // lwz @ 0x808D40C8
    r30 = *(0x68 + r1); // lwz @ 0x808D40CC
    r29 = *(0x64 + r1); // lwz @ 0x808D40D0
    return;
}