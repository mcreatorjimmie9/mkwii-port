/* Function at 0x80605D10, size=756 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80605D10(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80605D20
    r31 = r31 + 0; // 0x80605D24
    *(0x18 + r1) = r30; // stw @ 0x80605D28
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80605D30
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80605D38
    r28 = r4;
    FUN_8061E0F0(); // bl 0x8061E0F0
    /* lfs f1, 0x18(r3) */ // 0x80605D44
    /* lis r8, 0 */ // 0x80605D48
    /* lfs f0, 0x10(r30) */ // 0x80605D4C
    /* lis r6, 0 */ // 0x80605D50
    /* lfs f7, 0(r31) */ // 0x80605D54
    /* lis r4, 0 */ // 0x80605D58
    /* fmuls f0, f0, f1 */ // 0x80605D5C
    /* stfs f7, 0x24(r30) */ // 0x80605D60
    /* lis r9, 0 */ // 0x80605D64
    /* lfs f6, 4(r31) */ // 0x80605D68
    /* stfs f0, 0x14(r30) */ // 0x80605D6C
    r7 = r8 + 0; // 0x80605D70
    /* stfs f0, 0x1c(r30) */ // 0x80605D74
    r5 = r6 + 0; // 0x80605D78
    r3 = r4 + 0; // 0x80605D7C
    /* li r0, 0 */ // 0x80605D80
    /* stfs f0, 0x18(r30) */ // 0x80605D84
    /* stfs f7, 0x28(r30) */ // 0x80605D8C
    /* stfs f7, 0x20(r30) */ // 0x80605D90
    /* lfs f0, 0(r9) */ // 0x80605D94
    /* stfs f0, 0x2c(r30) */ // 0x80605D98
    /* stfs f7, 0x30(r30) */ // 0x80605D9C
    /* stfs f6, 0x34(r30) */ // 0x80605DA0
    /* lfs f2, 0(r8) */ // 0x80605DA4
    /* stfs f2, 0x44(r30) */ // 0x80605DA8
    /* lfs f1, 4(r7) */ // 0x80605DAC
    /* stfs f1, 0x48(r30) */ // 0x80605DB0
    /* lfs f0, 8(r7) */ // 0x80605DB4
    /* stfs f0, 0x4c(r30) */ // 0x80605DB8
    /* stfs f2, 0x38(r30) */ // 0x80605DBC
    /* stfs f1, 0x3c(r30) */ // 0x80605DC0
    /* stfs f0, 0x40(r30) */ // 0x80605DC4
    /* lfs f5, 0(r6) */ // 0x80605DC8
    /* stfs f5, 0x80(r30) */ // 0x80605DCC
    /* frsp f2, f5 */ // 0x80605DD0
    /* lfs f4, 4(r5) */ // 0x80605DD4
    /* stfs f4, 0x84(r30) */ // 0x80605DD8
    /* frsp f1, f4 */ // 0x80605DDC
    /* lfs f3, 8(r5) */ // 0x80605DE0
    /* stfs f3, 0x88(r30) */ // 0x80605DE4
    /* frsp f0, f3 */ // 0x80605DE8
    /* stfs f5, 0x74(r30) */ // 0x80605DEC
    /* stfs f4, 0x78(r30) */ // 0x80605DF0
    /* stfs f3, 0x7c(r30) */ // 0x80605DF4
    /* stfs f5, 0x68(r30) */ // 0x80605DF8
    /* stfs f4, 0x6c(r30) */ // 0x80605DFC
    /* stfs f3, 0x70(r30) */ // 0x80605E00
    /* stfs f5, 0x5c(r30) */ // 0x80605E04
    /* stfs f4, 0x60(r30) */ // 0x80605E08
    /* stfs f3, 0x64(r30) */ // 0x80605E0C
    /* stfs f2, 0x50(r30) */ // 0x80605E10
    /* stfs f1, 0x54(r30) */ // 0x80605E14
    /* stfs f0, 0x58(r30) */ // 0x80605E18
    /* lfs f0, 0(r4) */ // 0x80605E1C
    /* stfs f0, 0x8c(r30) */ // 0x80605E20
    /* lfs f0, 4(r3) */ // 0x80605E24
    /* stfs f0, 0x90(r30) */ // 0x80605E28
    /* lfs f0, 8(r3) */ // 0x80605E2C
    /* stfs f0, 0x94(r30) */ // 0x80605E30
    *(0x98 + r30) = r0; // stb @ 0x80605E34
    /* stfs f7, 0x9c(r30) */ // 0x80605E38
    /* stfs f7, 0xa0(r30) */ // 0x80605E3C
    /* lfs f0, 0(r6) */ // 0x80605E40
    /* stfs f0, 0xa4(r30) */ // 0x80605E44
    /* lfs f0, 4(r5) */ // 0x80605E48
    /* stfs f0, 0xa8(r30) */ // 0x80605E4C
    /* lfs f0, 8(r5) */ // 0x80605E50
    /* stfs f0, 0xac(r30) */ // 0x80605E54
    /* stfs f7, 0xb4(r30) */ // 0x80605E58
    /* stfs f7, 0xb0(r30) */ // 0x80605E5C
    /* stfs f6, 0xb8(r30) */ // 0x80605E60
    /* stfs f6, 0xbc(r30) */ // 0x80605E64
    /* stfs f6, 0xc0(r30) */ // 0x80605E68
    /* stfs f6, 0xc4(r30) */ // 0x80605E6C
    if (!=) goto 0x0x80605e78;
    *(0xc8 + r30) = r0; // sth @ 0x80605E74
    /* li r0, 0 */ // 0x80605E78
    *(0xcc + r30) = r0; // stw @ 0x80605E7C
    /* lis r6, 0 */ // 0x80605E80
    /* lis r4, 0 */ // 0x80605E84
    *(0xd0 + r30) = r0; // stw @ 0x80605E88
    r5 = r6 + 0; // 0x80605E8C
    r3 = r4 + 0; // 0x80605E90
    /* lfs f0, 0(r6) */ // 0x80605E98
    /* stfs f0, 0xd4(r30) */ // 0x80605E9C
    /* lfs f2, 4(r31) */ // 0x80605EA0
    /* lfs f0, 4(r5) */ // 0x80605EA4
    /* stfs f0, 0xd8(r30) */ // 0x80605EA8
    /* lfs f1, 0(r31) */ // 0x80605EAC
    /* lfs f0, 8(r5) */ // 0x80605EB0
    /* stfs f0, 0xdc(r30) */ // 0x80605EB4
    /* lfs f0, 0xc(r31) */ // 0x80605EB8
    /* lfs f3, 0(r4) */ // 0x80605EBC
    /* stfs f3, 0xe0(r30) */ // 0x80605EC0
    /* lfs f3, 4(r3) */ // 0x80605EC4
    /* stfs f3, 0xe4(r30) */ // 0x80605EC8
    /* lfs f3, 8(r3) */ // 0x80605ECC
    /* stfs f3, 0xe8(r30) */ // 0x80605ED0
    *(0xec + r30) = r0; // stw @ 0x80605ED4
    /* stfs f2, 0xf0(r30) */ // 0x80605ED8
    /* stfs f1, 0xf4(r30) */ // 0x80605EDC
    /* stfs f1, 0xf8(r30) */ // 0x80605EE0
    *(0xfc + r30) = r0; // sth @ 0x80605EE4
    *(0x100 + r30) = r0; // sth @ 0x80605EE8
    *(0xfe + r30) = r0; // sth @ 0x80605EEC
    *(0x102 + r30) = r0; // sth @ 0x80605EF0
    /* stfs f1, 0x104(r30) */ // 0x80605EF4
    *(0x10c + r30) = r0; // sth @ 0x80605EF8
    *(0x10e + r30) = r0; // sth @ 0x80605EFC
    *(0x110 + r30) = r0; // sth @ 0x80605F00
    *(0x112 + r30) = r0; // sth @ 0x80605F04
    *(0x114 + r30) = r0; // sth @ 0x80605F08
    *(0x116 + r30) = r0; // sth @ 0x80605F0C
    /* stfs f2, 0x11c(r30) */ // 0x80605F10
    /* stfs f2, 0x120(r30) */ // 0x80605F14
    /* stfs f0, 0x128(r30) */ // 0x80605F18
    *(0x12c + r30) = r0; // sth @ 0x80605F1C
    *(0x12e + r30) = r0; // sth @ 0x80605F20
    /* stfs f1, 0x140(r30) */ // 0x80605F24
    *(0x148 + r30) = r0; // sth @ 0x80605F28
    *(0x14c + r30) = r0; // sth @ 0x80605F2C
    *(0x14e + r30) = r0; // sth @ 0x80605F30
    *(0x150 + r30) = r0; // sth @ 0x80605F34
    *(0x152 + r30) = r0; // sth @ 0x80605F38
    /* stfs f1, 0x158(r30) */ // 0x80605F3C
    /* stfs f1, 0x15c(r30) */ // 0x80605F40
    /* stfs f2, 0x160(r30) */ // 0x80605F44
    if (!=) goto 0x0x80605fb8;
    /* lfs f0, 0x38(r31) */ // 0x80605F4C
    /* lis r4, 0 */ // 0x80605F50
    /* stfs f2, 0x164(r30) */ // 0x80605F54
    r3 = r4 + 0; // 0x80605F58
    /* stfs f2, 0x168(r30) */ // 0x80605F5C
    /* stfs f2, 0x16c(r30) */ // 0x80605F60
    /* stfs f2, 0x170(r30) */ // 0x80605F64
    /* stfs f2, 0x174(r30) */ // 0x80605F68
    /* stfs f2, 0x178(r30) */ // 0x80605F6C
    /* stfs f2, 0x17c(r30) */ // 0x80605F70
    /* stfs f2, 0x180(r30) */ // 0x80605F74
    /* stfs f2, 0x184(r30) */ // 0x80605F78
    *(0x188 + r30) = r0; // sth @ 0x80605F7C
    *(0x18a + r30) = r0; // sth @ 0x80605F80
    *(0x18c + r30) = r0; // sth @ 0x80605F84
    *(0x18e + r30) = r0; // sth @ 0x80605F88
    *(0x190 + r30) = r0; // stb @ 0x80605F8C
    *(0x192 + r30) = r0; // sth @ 0x80605F90
    *(0x194 + r30) = r0; // sth @ 0x80605F94
    *(0x196 + r30) = r0; // stb @ 0x80605F98
    /* stfs f0, 0x198(r30) */ // 0x80605F9C
    /* lfs f0, 0(r4) */ // 0x80605FA0
    /* stfs f0, 0x19c(r30) */ // 0x80605FA4
    /* lfs f0, 4(r3) */ // 0x80605FA8
    /* stfs f0, 0x1a0(r30) */ // 0x80605FAC
    /* lfs f0, 8(r3) */ // 0x80605FB0
    /* stfs f0, 0x1a4(r30) */ // 0x80605FB4
    /* lfs f2, 0(r31) */ // 0x80605FB8
    /* li r29, 0 */ // 0x80605FBC
    /* lfs f0, 0x18(r30) */ // 0x80605FC0
    r3 = r30 + 0x1d0; // 0x80605FC4
    /* fmr f3, f2 */ // 0x80605FC8
    *(0x1a8 + r30) = r29; // sth @ 0x80605FCC
    /* fmr f4, f2 */ // 0x80605FD0
    /* lfs f1, 4(r31) */ // 0x80605FD4
    *(0x1aa + r30) = r29; // sth @ 0x80605FD8
    *(0x1ac + r30) = r29; // sth @ 0x80605FDC
    /* stfs f2, 0x1b0(r30) */ // 0x80605FE0
    /* stfs f2, 0x1b4(r30) */ // 0x80605FE4
    /* stfs f2, 0x1b8(r30) */ // 0x80605FE8
    /* stfs f0, 0x1bc(r30) */ // 0x80605FEC
    *(0x1c0 + r30) = r29; // stw @ 0x80605FF0
    *(0x1c4 + r30) = r29; // sth @ 0x80605FF4
    /* stfs f2, 0x1c8(r30) */ // 0x80605FF8
    *(0x1cc + r30) = r29; // sth @ 0x80605FFC
    FUN_805E3430(); // bl 0x805E3430
}