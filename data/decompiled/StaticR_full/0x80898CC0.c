/* Function at 0x80898CC0, size=624 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80898CC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80898CC8
    *(0x5c + r1) = r31; // stw @ 0x80898CD0
    /* lis r31, 0 */ // 0x80898CD4
    r31 = r31 + 0; // 0x80898CD8
    *(0x58 + r1) = r30; // stw @ 0x80898CDC
    /* lis r30, 0 */ // 0x80898CE0
    r30 = r30 + 0; // 0x80898CE4
    *(0x54 + r1) = r29; // stw @ 0x80898CE8
    *(0x50 + r1) = r28; // stw @ 0x80898CEC
    r28 = r3;
    r6 = *(0 + r4); // lwz @ 0x80898CF4
    r4 = *(2 + r31); // lha @ 0x80898CF8
    r5 = *(0 + r31); // lha @ 0x80898CFC
    /* srwi r0, r4, 0x1f */ // 0x80898D00
    r29 = *(0x20 + r6); // lwz @ 0x80898D04
    r0 = r0 + r4; // 0x80898D08
    r0 = r0 >> 1; // srawi
    r0 = r5 + r0; // 0x80898D10
    if (>=) goto 0x0x80898d34;
    r0 = *(0x10c + r3); // lbz @ 0x80898D1C
    if (==) goto 0x0x80898d48;
    /* li r0, 0 */ // 0x80898D28
    *(0x10c + r3) = r0; // stb @ 0x80898D2C
    /* b 0x80898d48 */ // 0x80898D30
    r0 = *(0x10c + r3); // lbz @ 0x80898D34
    if (!=) goto 0x0x80898d48;
    /* li r0, 1 */ // 0x80898D40
    *(0x10c + r3) = r0; // stb @ 0x80898D44
    r3 = r28;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0x58 + r28); // lwz @ 0x80898D50
    r0 = *(0x5c + r28); // lwz @ 0x80898D54
    *(0xc + r1) = r0; // stw @ 0x80898D58
    r4 = *(0 + r31); // lha @ 0x80898D5C
    *(8 + r1) = r3; // stw @ 0x80898D60
    r3 = *(0x60 + r28); // lwz @ 0x80898D68
    r0 = *(0x64 + r28); // lwz @ 0x80898D6C
    *(0x14 + r1) = r0; // stw @ 0x80898D70
    *(0x10 + r1) = r3; // stw @ 0x80898D74
    r3 = *(0x68 + r28); // lwz @ 0x80898D78
    r0 = *(0x6c + r28); // lwz @ 0x80898D7C
    *(0x1c + r1) = r0; // stw @ 0x80898D80
    *(0x18 + r1) = r3; // stw @ 0x80898D84
    r3 = *(0x70 + r28); // lwz @ 0x80898D88
    r0 = *(0x74 + r28); // lwz @ 0x80898D8C
    *(0x24 + r1) = r0; // stw @ 0x80898D90
    *(0x20 + r1) = r3; // stw @ 0x80898D94
    r3 = *(0x78 + r28); // lwz @ 0x80898D98
    r0 = *(0x7c + r28); // lwz @ 0x80898D9C
    *(0x2c + r1) = r0; // stw @ 0x80898DA0
    *(0x28 + r1) = r3; // stw @ 0x80898DA4
    r3 = *(0x80 + r28); // lwz @ 0x80898DA8
    r0 = *(0x84 + r28); // lwz @ 0x80898DAC
    *(0x34 + r1) = r0; // stw @ 0x80898DB0
    *(0x30 + r1) = r3; // stw @ 0x80898DB4
    if (>) goto 0x0x80898dc4;
    /* lfs f0, 0x104(r28) */ // 0x80898DBC
    /* b 0x80898ea4 */ // 0x80898DC0
    r0 = *(2 + r31); // lha @ 0x80898DC4
    r0 = r4 + r0; // 0x80898DC8
    if (>) goto 0x0x80898e08;
    r0 = *(0x10d + r28); // lbz @ 0x80898DD4
    if (!=) goto 0x0x80898df8;
    /* lfs f1, 0(r30) */ // 0x80898DE0
    r3 = r28;
    /* li r4, 0x308 */ // 0x80898DE8
    FUN_808A0AC8(r3, r4); // bl 0x808A0AC8
    /* li r0, 1 */ // 0x80898DF0
    *(0x10d + r28) = r0; // stb @ 0x80898DF4
    /* lfs f1, 0x104(r28) */ // 0x80898DF8
    /* lfs f0, 4(r31) */ // 0x80898DFC
    /* fadds f0, f1, f0 */ // 0x80898E00
    /* b 0x80898ea4 */ // 0x80898E04
    /* lfs f1, 0(r30) */ // 0x80898E08
    r3 = r28;
    /* li r4, 0x307 */ // 0x80898E10
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    r0 = *(0 + r31); // lha @ 0x80898E18
    /* lis r3, 0x4330 */ // 0x80898E1C
    r6 = *(2 + r31); // lha @ 0x80898E20
    /* subf r5, r0, r29 */ // 0x80898E24
    *(0x38 + r1) = r3; // stw @ 0x80898E28
    r4 = r5 / r6; // 0x80898E2C
    /* xoris r0, r6, 0x8000 */ // 0x80898E30
    *(0x44 + r1) = r0; // stw @ 0x80898E34
    /* lfd f5, 8(r30) */ // 0x80898E38
    *(0x40 + r1) = r3; // stw @ 0x80898E3C
    /* lfs f3, 0x14(r30) */ // 0x80898E40
    r0 = r4 * r6; // 0x80898E44
    /* lfd f1, 0x40(r1) */ // 0x80898E48
    /* lfs f2, 0x10(r30) */ // 0x80898E4C
    /* fsubs f1, f1, f5 */ // 0x80898E50
    /* lfs f0, 0x18(r30) */ // 0x80898E54
    /* subf r0, r0, r5 */ // 0x80898E58
    /* xoris r0, r0, 0x8000 */ // 0x80898E5C
    *(0x3c + r1) = r0; // stw @ 0x80898E60
    /* lfd f4, 0x38(r1) */ // 0x80898E64
    /* fsubs f4, f4, f5 */ // 0x80898E68
    /* fsubs f3, f4, f3 */ // 0x80898E6C
    /* fmuls f2, f2, f3 */ // 0x80898E70
    /* fdivs f1, f2, f1 */ // 0x80898E74
    /* fmuls f1, f0, f1 */ // 0x80898E78
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f3, 4(r31) */ // 0x80898E80
    /* lfd f2, 0x20(r30) */ // 0x80898E84
    /* lfs f0, 0x28(r30) */ // 0x80898E88
    /* fmul f2, f2, f3 */ // 0x80898E8C
    /* lfs f3, 0x104(r28) */ // 0x80898E90
    /* fsubs f0, f0, f1 */ // 0x80898E94
    /* fmul f0, f2, f0 */ // 0x80898E98
    /* fadd f0, f3, f0 */ // 0x80898E9C
    /* frsp f0, f0 */ // 0x80898EA0
    /* stfs f0, 0x24(r1) */ // 0x80898EA4
    /* li r0, 0 */ // 0x80898EA8
    r3 = *(0x2c + r28); // lhz @ 0x80898EAC
    *(0x54 + r28) = r0; // stb @ 0x80898EB0
    r0 = r3 | 4; // 0x80898EB4
    *(0x2c + r28) = r0; // sth @ 0x80898EB8
    /* lfs f0, 8(r1) */ // 0x80898EBC
    /* stfs f0, 0x58(r28) */ // 0x80898EC0
    /* lfs f0, 0xc(r1) */ // 0x80898EC4
    /* stfs f0, 0x5c(r28) */ // 0x80898EC8
    /* lfs f0, 0x10(r1) */ // 0x80898ECC
    /* stfs f0, 0x60(r28) */ // 0x80898ED0
    /* lfs f0, 0x14(r1) */ // 0x80898ED4
    /* stfs f0, 0x64(r28) */ // 0x80898ED8
    /* lfs f0, 0x18(r1) */ // 0x80898EDC
    /* stfs f0, 0x68(r28) */ // 0x80898EE0
    /* lfs f0, 0x1c(r1) */ // 0x80898EE4
    /* stfs f0, 0x6c(r28) */ // 0x80898EE8
    /* lfs f0, 0x20(r1) */ // 0x80898EEC
    /* stfs f0, 0x70(r28) */ // 0x80898EF0
    /* lfs f0, 0x24(r1) */ // 0x80898EF4
    /* stfs f0, 0x74(r28) */ // 0x80898EF8
    /* lfs f0, 0x28(r1) */ // 0x80898EFC
    /* stfs f0, 0x78(r28) */ // 0x80898F00
    /* lfs f0, 0x2c(r1) */ // 0x80898F04
    /* stfs f0, 0x7c(r28) */ // 0x80898F08
    /* lfs f0, 0x30(r1) */ // 0x80898F0C
    /* stfs f0, 0x80(r28) */ // 0x80898F10
    /* lfs f0, 0x34(r1) */ // 0x80898F14
    /* stfs f0, 0x84(r28) */ // 0x80898F18
    /* lfs f0, 0x14(r1) */ // 0x80898F1C
    /* stfs f0, 0x30(r28) */ // 0x80898F20
    /* lfs f0, 0x24(r1) */ // 0x80898F24
    /* stfs f0, 0x34(r28) */ // 0x80898F28
    /* lfs f0, 0x34(r1) */ // 0x80898F2C
}