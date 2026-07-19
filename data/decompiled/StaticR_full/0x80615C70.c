/* Function at 0x80615C70, size=932 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80615C70(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80615C80
    r31 = r31 + 0; // 0x80615C84
    *(0x38 + r1) = r30; // stw @ 0x80615C88
    /* lis r30, 0 */ // 0x80615C8C
    r30 = r30 + 0; // 0x80615C90
    *(0x34 + r1) = r29; // stw @ 0x80615C94
    r29 = r3;
    r12 = *(0xc + r3); // lwz @ 0x80615C9C
    r12 = *(0x74 + r12); // lwz @ 0x80615CA0
    /* mtctr r12 */ // 0x80615CA4
    /* bctrl  */ // 0x80615CA8
    r3 = *(0x2b6 + r29); // lha @ 0x80615CAC
    r0 = r3 + -1; // 0x80615CB0
    *(0x2b6 + r29) = r0; // sth @ 0x80615CB4
    /* extsh. r0, r0 */ // 0x80615CB8
    if (>=) goto 0x0x80615cc8;
    /* li r0, 0 */ // 0x80615CC0
    *(0x2b6 + r29) = r0; // sth @ 0x80615CC4
    r3 = *(0 + r29); // lwz @ 0x80615CC8
    r3 = *(4 + r3); // lwz @ 0x80615CCC
    r0 = *(4 + r3); // lwz @ 0x80615CD0
    /* rlwinm. r0, r0, 0, 2, 2 */ // 0x80615CD4
    if (==) goto 0x0x80615e24;
    r0 = *(8 + r3); // lwz @ 0x80615CDC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1c */ // 0x80615CE0
    if (!=) goto 0x0x80615cfc;
    /* lfs f1, 4(r31) */ // 0x80615CE8
    r3 = r29;
    /* li r4, 6 */ // 0x80615CF0
    /* li r5, 1 */ // 0x80615CF4
    FUN_8061DC98(r3, r4, r5); // bl 0x8061DC98
    r4 = *(0 + r29); // lwz @ 0x80615CFC
    /* li r5, 0 */ // 0x80615D00
    r3 = *(4 + r4); // lwz @ 0x80615D04
    r0 = *(0x14 + r3); // lwz @ 0x80615D08
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80615D0C
    if (==) goto 0x0x80615d50;
    r3 = *(4 + r4); // lwz @ 0x80615D14
    /* lfs f0, 0xb8(r30) */ // 0x80615D18
    /* lfs f1, 0x88(r3) */ // 0x80615D1C
    /* fabs f1, f1 */ // 0x80615D20
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80615D24
    if (<=) goto 0x0x80615d50;
    r3 = *(0x2bc + r29); // lha @ 0x80615D2C
    r0 = r3 + 1; // 0x80615D30
    *(0x2bc + r29) = r0; // sth @ 0x80615D34
    /* extsh r3, r0 */ // 0x80615D38
    r0 = *(0x100 + r30); // lha @ 0x80615D3C
    if (<=) goto 0x0x80615d58;
    /* li r5, 1 */ // 0x80615D48
    /* b 0x80615d58 */ // 0x80615D4C
    /* li r0, 0 */ // 0x80615D50
    *(0x2bc + r29) = r0; // sth @ 0x80615D54
    r4 = *(0x2a8 + r29); // lwz @ 0x80615D58
    r3 = *(0x2c0 + r29); // lwz @ 0x80615D5C
    r4 = r4 + 1; // 0x80615D60
    *(0x2a8 + r29) = r4; // stw @ 0x80615D64
    r0 = *(0x2c + r3); // lha @ 0x80615D68
    if (>) goto 0x0x80615da8;
    if (!=) goto 0x0x80615da8;
    r12 = *(0xc + r29); // lwz @ 0x80615D7C
    r3 = r29;
    r12 = *(0x3c + r12); // lwz @ 0x80615D84
    /* mtctr r12 */ // 0x80615D88
    /* bctrl  */ // 0x80615D8C
    if (!=) goto 0x0x80615dc0;
    r3 = *(0x2a8 + r29); // lwz @ 0x80615D98
    r0 = *(0x1f4 + r30); // lha @ 0x80615D9C
    if (<) goto 0x0x80615dc0;
    r12 = *(0xc + r29); // lwz @ 0x80615DA8
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x80615DB0
    /* mtctr r12 */ // 0x80615DB4
    /* bctrl  */ // 0x80615DB8
    /* b 0x80615e88 */ // 0x80615DBC
    /* lfs f1, 0x2a0(r29) */ // 0x80615DC0
    r3 = r29;
    /* lfs f0, 0x1d0(r30) */ // 0x80615DC8
    /* fadds f0, f1, f0 */ // 0x80615DCC
    /* stfs f0, 0x2a0(r29) */ // 0x80615DD0
    FUN_8061DC48(r3); // bl 0x8061DC48
    r0 = *(0xa4 + r3); // lwz @ 0x80615DD8
    *(0x20 + r1) = r0; // stw @ 0x80615DDC
    r4 = *(0xa8 + r3); // lwz @ 0x80615DE0
    /* lfs f1, 0x20(r1) */ // 0x80615DE4
    /* lfs f0, 0x88(r31) */ // 0x80615DE8
    r0 = *(0xac + r3); // lwz @ 0x80615DEC
    r3 = r29;
    /* fmuls f0, f1, f0 */ // 0x80615DF4
    *(0x24 + r1) = r4; // stw @ 0x80615DF8
    *(0x28 + r1) = r0; // stw @ 0x80615DFC
    /* stfs f0, 0x20(r1) */ // 0x80615E00
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 0x20(r1) */ // 0x80615E08
    /* stfs f0, 0xa4(r3) */ // 0x80615E0C
    /* lfs f0, 0x24(r1) */ // 0x80615E10
    /* stfs f0, 0xa8(r3) */ // 0x80615E14
    /* lfs f0, 0x28(r1) */ // 0x80615E18
    /* stfs f0, 0xac(r3) */ // 0x80615E1C
    /* b 0x80615e88 */ // 0x80615E20
    r0 = *(0xc + r3); // lwz @ 0x80615E24
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80615E28
    if (==) goto 0x0x80615e44;
    /* lfs f1, 0x2a0(r29) */ // 0x80615E30
    /* lfs f0, 0x1d4(r30) */ // 0x80615E34
    /* fsubs f0, f1, f0 */ // 0x80615E38
    /* stfs f0, 0x2a0(r29) */ // 0x80615E3C
    /* b 0x80615e88 */ // 0x80615E40
    /* lfs f1, 0x2a0(r29) */ // 0x80615E44
    /* lfs f0, 0(r31) */ // 0x80615E48
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80615E4C
    if (<=) goto 0x0x80615e88;
    /* lfs f1, 0x2b8(r29) */ // 0x80615E54
    /* lfs f0, 0x1dc(r30) */ // 0x80615E58
    /* fsubs f1, f1, f0 */ // 0x80615E5C
    /* stfs f1, 0x2b8(r29) */ // 0x80615E60
    /* lfs f0, 0x1e0(r30) */ // 0x80615E64
    /* fneg f0, f0 */ // 0x80615E68
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80615E6C
    if (<=) goto 0x0x80615e78;
    /* stfs f0, 0x2b8(r29) */ // 0x80615E74
    /* lfs f1, 0x2a0(r29) */ // 0x80615E78
    /* lfs f0, 0x2b8(r29) */ // 0x80615E7C
    /* fadds f0, f1, f0 */ // 0x80615E80
    /* stfs f0, 0x2a0(r29) */ // 0x80615E84
    /* lfs f1, 0(r31) */ // 0x80615E88
    /* lfs f0, 0x2a0(r29) */ // 0x80615E8C
    /* lfs f2, 0x2a4(r29) */ // 0x80615E90
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80615E94
    if (<=) goto 0x0x80615ea4;
    /* stfs f1, 0x2a0(r29) */ // 0x80615E9C
    /* b 0x80615eb0 */ // 0x80615EA0
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80615EA4
    if (>=) goto 0x0x80615eb0;
    /* stfs f2, 0x2a0(r29) */ // 0x80615EAC
    /* lfs f1, 0x2a0(r29) */ // 0x80615EB0
    /* lfs f0, 0(r31) */ // 0x80615EB4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80615EB8
    if (<=) goto 0x0x80615fe4;
    r0 = *(0x74 + r29); // lwz @ 0x80615EC0
    /* lis r4, 0 */ // 0x80615EC4
    *(0x14 + r1) = r0; // stw @ 0x80615EC8
    r3 = r4 + 0; // 0x80615ECC
    r5 = *(0x78 + r29); // lwz @ 0x80615ED0
    *(0x18 + r1) = r5; // stw @ 0x80615ED4
    /* lfs f2, 0x14(r1) */ // 0x80615ED8
    /* lfs f0, 0(r4) */ // 0x80615EDC
    r0 = *(0x7c + r29); // lwz @ 0x80615EE0
    /* fmuls f2, f2, f0 */ // 0x80615EE4
    *(0x1c + r1) = r0; // stw @ 0x80615EE8
    /* lfs f1, 0x18(r1) */ // 0x80615EEC
    /* lfs f0, 4(r3) */ // 0x80615EF0
    /* lfs f4, 0x1c(r1) */ // 0x80615EF4
    /* fmuls f1, f1, f0 */ // 0x80615EF8
    /* lfs f3, 8(r3) */ // 0x80615EFC
    /* lfs f0, 0x1f8(r30) */ // 0x80615F00
    /* fmuls f3, f4, f3 */ // 0x80615F04
    /* fadds f1, f2, f1 */ // 0x80615F08
    /* fadds f1, f3, f1 */ // 0x80615F0C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80615F10
    if (<=) goto 0x0x80615f40;
    r3 = *(0x2a8 + r29); // lwz @ 0x80615F18
    r0 = *(0x1f4 + r30); // lha @ 0x80615F1C
    if (<) goto 0x0x80615f40;
    r12 = *(0xc + r29); // lwz @ 0x80615F28
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x80615F30
    /* mtctr r12 */ // 0x80615F34
    /* bctrl  */ // 0x80615F38
    /* b 0x80615fcc */ // 0x80615F3C
    /* fabs f3, f1 */ // 0x80615F40
    /* lfs f0, 0(r31) */ // 0x80615F44
    /* lfs f2, 4(r31) */ // 0x80615F48
    r3 = r29;
    /* lfs f1, 0x2a0(r29) */ // 0x80615F50
    /* fsubs f2, f2, f3 */ // 0x80615F54
    /* stfs f0, 0xc(r1) */ // 0x80615F58
    /* fmuls f1, f1, f2 */ // 0x80615F5C
    /* stfs f0, 0x10(r1) */ // 0x80615F60
    /* fneg f0, f1 */ // 0x80615F64
    /* stfs f0, 8(r1) */ // 0x80615F68
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f2, 0xe4(r3) */ // 0x80615F70
    /* lfs f0, 8(r1) */ // 0x80615F74
    /* lfs f1, 0xc(r1) */ // 0x80615F78
    /* fadds f2, f2, f0 */ // 0x80615F7C
    /* lfs f0, 0x10(r1) */ // 0x80615F80
    /* stfs f2, 0xe4(r3) */ // 0x80615F84
    /* lfs f2, 0xe8(r3) */ // 0x80615F88
    /* fadds f1, f2, f1 */ // 0x80615F8C
    /* stfs f1, 0xe8(r3) */ // 0x80615F90
    /* lfs f1, 0xec(r3) */ // 0x80615F94
    /* fadds f0, f1, f0 */ // 0x80615F98
    /* stfs f0, 0xec(r3) */ // 0x80615F9C
    r0 = *(0x2ac + r29); // lbz @ 0x80615FA0
    if (==) goto 0x0x80615fcc;
    r3 = *(0x2b4 + r29); // lhz @ 0x80615FAC
    r0 = r3 + 1; // 0x80615FB0
    *(0x2b4 + r29) = r0; // sth @ 0x80615FB4
    r0 = *(0x1e4 + r30); // lha @ 0x80615FB8
    if (<=) goto 0x0x80615fcc;
    /* li r0, 0 */ // 0x80615FC4
    *(0x2ac + r29) = r0; // stb @ 0x80615FC8
    r3 = *(0 + r29); // lwz @ 0x80615FCC
    r3 = *(4 + r3); // lwz @ 0x80615FD0
    r0 = *(0xc + r3); // lwz @ 0x80615FD4
    r0 = r0 | 0x10; // 0x80615FD8
    *(0xc + r3) = r0; // stw @ 0x80615FDC
    /* b 0x80615ff8 */ // 0x80615FE0
    r3 = *(0 + r29); // lwz @ 0x80615FE4
    r3 = *(4 + r3); // lwz @ 0x80615FE8
    r0 = *(0xc + r3); // lwz @ 0x80615FEC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80615FF4
    r0 = *(0x44 + r1); // lwz @ 0x80615FF8
    r31 = *(0x3c + r1); // lwz @ 0x80615FFC
    r30 = *(0x38 + r1); // lwz @ 0x80616000
    r29 = *(0x34 + r1); // lwz @ 0x80616004
    return;
}