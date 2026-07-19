/* Function at 0x807F1D94, size=812 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_807F1D94(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xf8 + r1) = r30; // stw @ 0x807F1DA8
    /* lis r30, 0 */ // 0x807F1DAC
    r30 = r30 + 0; // 0x807F1DB0
    *(0xf4 + r1) = r29; // stw @ 0x807F1DB4
    /* lis r29, 0 */ // 0x807F1DB8
    r29 = r29 + 0; // 0x807F1DBC
    r0 = *(0xb4 + r3); // lwz @ 0x807F1DC0
    if (==) goto 0x0x807f1de0;
    if (==) goto 0x0x807f2098;
    if (==) goto 0x0x807f20a0;
    /* b 0x807f2144 */ // 0x807F1DDC
    r3 = *(0x20 + r3); // lwz @ 0x807F1DE0
    r12 = *(0 + r3); // lwz @ 0x807F1DE4
    r12 = *(0x14 + r12); // lwz @ 0x807F1DE8
    /* mtctr r12 */ // 0x807F1DEC
    /* bctrl  */ // 0x807F1DF0
    if (==) goto 0x0x807f1e08;
    if (==) goto 0x0x807f1e40;
    /* b 0x807f1f58 */ // 0x807F1E04
    r0 = *(0xd4 + r31); // lbz @ 0x807F1E08
    if (!=) goto 0x0x807f1f58;
    /* lfs f0, 8(r30) */ // 0x807F1E14
    /* stfs f0, 0xcc(r31) */ // 0x807F1E18
    r3 = *(0x20 + r31); // lwz @ 0x807F1E1C
    /* lfs f1, 0(r30) */ // 0x807F1E20
    /* lfs f0, 0x1c(r30) */ // 0x807F1E24
    r12 = *(0 + r3); // lwz @ 0x807F1E28
    /* fdivs f1, f1, f0 */ // 0x807F1E2C
    r12 = *(0x18 + r12); // lwz @ 0x807F1E30
    /* mtctr r12 */ // 0x807F1E34
    /* bctrl  */ // 0x807F1E38
    /* b 0x807f1f58 */ // 0x807F1E3C
    /* li r0, 2 */ // 0x807F1E40
    *(0xb4 + r31) = r0; // stw @ 0x807F1E44
    r3 = r31;
    /* li r4, 0 */ // 0x807F1E4C
    r12 = *(0 + r31); // lwz @ 0x807F1E50
    r12 = *(0x68 + r12); // lwz @ 0x807F1E54
    /* mtctr r12 */ // 0x807F1E58
    /* bctrl  */ // 0x807F1E5C
    r3 = *(0xb0 + r31); // lwz @ 0x807F1E60
    /* li r4, 0 */ // 0x807F1E64
    r12 = *(0 + r3); // lwz @ 0x807F1E68
    r12 = *(0xc + r12); // lwz @ 0x807F1E6C
    /* mtctr r12 */ // 0x807F1E70
    /* bctrl  */ // 0x807F1E74
    /* lfs f4, 0xc(r29) */ // 0x807F1E78
    r3 = r31;
    /* lfs f0, 0x2c(r30) */ // 0x807F1E80
    r0 = *(0x2c + r31); // lhz @ 0x807F1E84
    /* fmuls f1, f4, f0 */ // 0x807F1E88
    /* lfs f3, 8(r29) */ // 0x807F1E8C
    /* lfs f2, 0x14(r29) */ // 0x807F1E90
    r0 = r0 | 8; // 0x807F1E94
    /* lfs f0, 0x18(r29) */ // 0x807F1E98
    /* fdivs f1, f1, f3 */ // 0x807F1E9C
    /* fmuls f1, f1, f2 */ // 0x807F1EA0
    /* fdivs f0, f1, f0 */ // 0x807F1EA4
    /* stfs f0, 0x12c(r31) */ // 0x807F1EA8
    /* lfs f0, 0x2c(r30) */ // 0x807F1EAC
    /* fmuls f0, f4, f0 */ // 0x807F1EB0
    *(0x2c + r31) = r0; // sth @ 0x807F1EB4
    /* fdivs f0, f0, f3 */ // 0x807F1EB8
    /* fmuls f0, f0, f2 */ // 0x807F1EBC
    /* stfs f0, 0x128(r31) */ // 0x807F1EC0
    /* stfs f0, 0x3c(r31) */ // 0x807F1EC4
    /* stfs f0, 0x40(r31) */ // 0x807F1EC8
    /* stfs f0, 0x44(r31) */ // 0x807F1ECC
    FUN_807F2CA0(); // bl 0x807F2CA0
    r0 = *(0xec + r31); // lwz @ 0x807F1ED4
    r3 = r31;
    *(0xe8 + r31) = r0; // stw @ 0x807F1EDC
    /* li r4, 0x2ee */ // 0x807F1EE0
    /* lfs f1, 0(r29) */ // 0x807F1EE4
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* lfs f1, 0x44(r30) */ // 0x807F1EEC
    r4 = r31 + 0xb8; // 0x807F1EF4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r31 + 0x30; // 0x807F1F00
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x40(r30) */ // 0x807F1F0C
    /* lis r3, 0 */ // 0x807F1F10
    /* lfs f0, 0x38(r30) */ // 0x807F1F14
    r4 = r31 + 0x30; // 0x807F1F18
    /* fctiwz f3, f2 */ // 0x807F1F1C
    /* lfs f1, 0x3c(r30) */ // 0x807F1F20
    /* fctiwz f0, f0 */ // 0x807F1F24
    r3 = *(0 + r3); // lwz @ 0x807F1F28
    /* fctiwz f2, f1 */ // 0x807F1F2C
    /* stfd f3, 0xd8(r1) */ // 0x807F1F30
    /* stfd f2, 0xe0(r1) */ // 0x807F1F34
    /* lfs f1, 0x34(r30) */ // 0x807F1F3C
    /* li r9, 0xc */ // 0x807F1F40
    /* stfd f0, 0xe8(r1) */ // 0x807F1F44
    r8 = *(0xdc + r1); // lwz @ 0x807F1F48
    r7 = *(0xe4 + r1); // lwz @ 0x807F1F4C
    r6 = *(0xec + r1); // lwz @ 0x807F1F50
    FUN_80818D00(r9); // bl 0x80818D00
    /* lfs f1, 0xcc(r31) */ // 0x807F1F58
    r3 = r31;
    r4 = *(0x20 + r31); // lwz @ 0x807F1F60
    /* lfs f0, 0x1c(r29) */ // 0x807F1F64
    r6 = *(0x18 + r4); // lwz @ 0x807F1F68
    r5 = *(0x1c + r4); // lwz @ 0x807F1F6C
    /* fsubs f1, f1, f0 */ // 0x807F1F70
    r4 = *(0x20 + r4); // lwz @ 0x807F1F74
    r0 = *(0x2c + r31); // lhz @ 0x807F1F78
    /* lfs f0, 0x34(r31) */ // 0x807F1F7C
    *(0x20 + r1) = r6; // stw @ 0x807F1F80
    r0 = r0 | 1; // 0x807F1F84
    /* fadds f0, f1, f0 */ // 0x807F1F88
    *(0x28 + r1) = r4; // stw @ 0x807F1F8C
    /* lfs f2, 0x20(r1) */ // 0x807F1F90
    *(0x2c + r31) = r0; // sth @ 0x807F1F94
    /* lfs f3, 0x28(r1) */ // 0x807F1F98
    *(0x2c + r31) = r0; // sth @ 0x807F1F9C
    *(0x24 + r1) = r5; // stw @ 0x807F1FA0
    /* stfs f2, 0x30(r31) */ // 0x807F1FA4
    /* stfs f3, 0x38(r31) */ // 0x807F1FA8
    /* stfs f1, 0xcc(r31) */ // 0x807F1FAC
    *(0x2c + r31) = r0; // sth @ 0x807F1FB0
    /* stfs f0, 0x34(r31) */ // 0x807F1FB4
    FUN_807F28DC(); // bl 0x807F28DC
    /* lfs f0, 0xd8(r31) */ // 0x807F1FBC
    /* lfs f1, 0x20(r29) */ // 0x807F1FC4
    /* fneg f2, f0 */ // 0x807F1FC8
    /* lfs f0, 0x120(r31) */ // 0x807F1FCC
    /* fmuls f1, f2, f1 */ // 0x807F1FD0
    /* fadds f0, f0, f1 */ // 0x807F1FD4
    /* stfs f0, 0x120(r31) */ // 0x807F1FD8
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f1, 0x120(r31) */ // 0x807F1FE0
    /* lfs f0, 0(r29) */ // 0x807F1FE8
    /* stfs f1, 0x2c(r1) */ // 0x807F1FF0
    /* stfs f0, 0x30(r1) */ // 0x807F1FF4
    /* stfs f0, 0x34(r1) */ // 0x807F1FF8
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = r31 + 0xf0; // 0x807F2004
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r3 = *(0x2c + r31); // lhz @ 0x807F2010
    /* li r0, 0 */ // 0x807F2014
    *(0x54 + r31) = r0; // stb @ 0x807F2018
    r0 = r3 | 4; // 0x807F201C
    *(0x2c + r31) = r0; // sth @ 0x807F2020
    /* lfs f0, 0x78(r1) */ // 0x807F2024
    /* stfs f0, 0x58(r31) */ // 0x807F2028
    /* lfs f0, 0x7c(r1) */ // 0x807F202C
    /* stfs f0, 0x5c(r31) */ // 0x807F2030
    /* lfs f0, 0x80(r1) */ // 0x807F2034
    /* stfs f0, 0x60(r31) */ // 0x807F2038
    /* lfs f0, 0x84(r1) */ // 0x807F203C
    /* stfs f0, 0x64(r31) */ // 0x807F2040
    /* lfs f0, 0x88(r1) */ // 0x807F2044
    /* stfs f0, 0x68(r31) */ // 0x807F2048
    /* lfs f0, 0x8c(r1) */ // 0x807F204C
    /* stfs f0, 0x6c(r31) */ // 0x807F2050
    /* lfs f0, 0x90(r1) */ // 0x807F2054
    /* stfs f0, 0x70(r31) */ // 0x807F2058
    /* lfs f0, 0x94(r1) */ // 0x807F205C
    /* stfs f0, 0x74(r31) */ // 0x807F2060
    /* lfs f0, 0x98(r1) */ // 0x807F2064
    /* stfs f0, 0x78(r31) */ // 0x807F2068
    /* lfs f0, 0x9c(r1) */ // 0x807F206C
    /* stfs f0, 0x7c(r31) */ // 0x807F2070
    /* lfs f0, 0xa0(r1) */ // 0x807F2074
    /* stfs f0, 0x80(r31) */ // 0x807F2078
    /* lfs f2, 0x30(r31) */ // 0x807F207C
    /* lfs f1, 0x34(r31) */ // 0x807F2080
    /* lfs f0, 0x38(r31) */ // 0x807F2084
    /* stfs f2, 0x64(r31) */ // 0x807F2088
    /* stfs f1, 0x74(r31) */ // 0x807F208C
    /* stfs f0, 0x84(r31) */ // 0x807F2090
    /* b 0x807f2144 */ // 0x807F2094
    FUN_807F25DC(); // bl 0x807F25DC
    /* b 0x807f2144 */ // 0x807F209C
    r0 = *(0xe0 + r3); // lwz @ 0x807F20A0
    if (>=) goto 0x0x807f2144;
    /* li r0, 0 */ // 0x807F20AC
    *(0xb4 + r3) = r0; // stw @ 0x807F20B0
    r3 = *(0x20 + r3); // lwz @ 0x807F20B4
    /* lfs f1, 0(r30) */ // 0x807F20B8
    r12 = *(0 + r3); // lwz @ 0x807F20BC
}