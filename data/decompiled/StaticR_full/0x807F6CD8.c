/* Function at 0x807F6CD8, size=384 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807F6CD8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x807F6CE4
    r31 = r3;
    FUN_808A2028(); // bl 0x808A2028
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x807F6CF8
    r0 = *(0x5c + r31); // lwz @ 0x807F6D00
    *(0x24 + r1) = r0; // stw @ 0x807F6D08
    *(0x20 + r1) = r5; // stw @ 0x807F6D0C
    /* lfs f0, 0x24(r1) */ // 0x807F6D10
    r5 = *(0x60 + r31); // lwz @ 0x807F6D14
    r0 = *(0x64 + r31); // lwz @ 0x807F6D18
    *(0x2c + r1) = r0; // stw @ 0x807F6D1C
    *(0x28 + r1) = r5; // stw @ 0x807F6D20
    r5 = *(0x68 + r31); // lwz @ 0x807F6D24
    r0 = *(0x6c + r31); // lwz @ 0x807F6D28
    *(0x34 + r1) = r0; // stw @ 0x807F6D2C
    *(0x30 + r1) = r5; // stw @ 0x807F6D30
    /* lfs f1, 0x34(r1) */ // 0x807F6D34
    r5 = *(0x70 + r31); // lwz @ 0x807F6D38
    r0 = *(0x74 + r31); // lwz @ 0x807F6D3C
    *(0x3c + r1) = r0; // stw @ 0x807F6D40
    *(0x38 + r1) = r5; // stw @ 0x807F6D44
    r5 = *(0x78 + r31); // lwz @ 0x807F6D48
    r0 = *(0x7c + r31); // lwz @ 0x807F6D4C
    *(0x44 + r1) = r0; // stw @ 0x807F6D50
    *(0x40 + r1) = r5; // stw @ 0x807F6D54
    /* lfs f2, 0x44(r1) */ // 0x807F6D58
    r5 = *(0x80 + r31); // lwz @ 0x807F6D5C
    r0 = *(0x84 + r31); // lwz @ 0x807F6D60
    *(0x4c + r1) = r0; // stw @ 0x807F6D64
    *(0x48 + r1) = r5; // stw @ 0x807F6D68
    /* stfs f0, 0x14(r1) */ // 0x807F6D6C
    /* stfs f1, 0x18(r1) */ // 0x807F6D70
    /* stfs f2, 0x1c(r1) */ // 0x807F6D74
    FUN_805A4400(); // bl 0x805A4400
    /* lfs f2, 8(r1) */ // 0x807F6D7C
    /* li r0, 0 */ // 0x807F6D80
    /* lfs f1, 0xc(r1) */ // 0x807F6D84
    /* lfs f0, 0x10(r1) */ // 0x807F6D88
    /* stfs f2, 0x14(r1) */ // 0x807F6D8C
    /* stfs f1, 0x18(r1) */ // 0x807F6D90
    /* stfs f0, 0x1c(r1) */ // 0x807F6D94
    /* stfs f2, 0x24(r1) */ // 0x807F6D98
    /* stfs f1, 0x34(r1) */ // 0x807F6D9C
    /* stfs f0, 0x44(r1) */ // 0x807F6DA0
    r4 = *(0xe8 + r31); // lwz @ 0x807F6DA4
    r3 = *(0x2c + r4); // lhz @ 0x807F6DA8
    r3 = r3 | 4; // 0x807F6DAC
    *(0x2c + r4) = r3; // sth @ 0x807F6DB0
    *(0x54 + r4) = r0; // stb @ 0x807F6DB4
    /* lfs f0, 0x20(r1) */ // 0x807F6DB8
    /* stfs f0, 0x58(r4) */ // 0x807F6DBC
    /* lfs f0, 0x24(r1) */ // 0x807F6DC0
    /* stfs f0, 0x5c(r4) */ // 0x807F6DC4
    /* lfs f0, 0x28(r1) */ // 0x807F6DC8
    /* stfs f0, 0x60(r4) */ // 0x807F6DCC
    /* lfs f0, 0x2c(r1) */ // 0x807F6DD0
    /* stfs f0, 0x64(r4) */ // 0x807F6DD4
    /* lfs f0, 0x30(r1) */ // 0x807F6DD8
    /* stfs f0, 0x68(r4) */ // 0x807F6DDC
    /* lfs f0, 0x34(r1) */ // 0x807F6DE0
    /* stfs f0, 0x6c(r4) */ // 0x807F6DE4
    /* lfs f0, 0x38(r1) */ // 0x807F6DE8
    /* stfs f0, 0x70(r4) */ // 0x807F6DEC
    /* lfs f0, 0x3c(r1) */ // 0x807F6DF0
    /* stfs f0, 0x74(r4) */ // 0x807F6DF4
    /* lfs f0, 0x40(r1) */ // 0x807F6DF8
    /* stfs f0, 0x78(r4) */ // 0x807F6DFC
    /* lfs f0, 0x44(r1) */ // 0x807F6E00
    /* stfs f0, 0x7c(r4) */ // 0x807F6E04
    /* lfs f0, 0x48(r1) */ // 0x807F6E08
    /* stfs f0, 0x80(r4) */ // 0x807F6E0C
    /* lfs f0, 0x4c(r1) */ // 0x807F6E10
    /* stfs f0, 0x84(r4) */ // 0x807F6E14
    /* lfs f0, 0x2c(r1) */ // 0x807F6E18
    /* stfs f0, 0x30(r4) */ // 0x807F6E1C
    /* lfs f0, 0x3c(r1) */ // 0x807F6E20
    /* stfs f0, 0x34(r4) */ // 0x807F6E24
    /* lfs f0, 0x4c(r1) */ // 0x807F6E28
    /* stfs f0, 0x38(r4) */ // 0x807F6E2C
    r3 = *(0xe8 + r31); // lwz @ 0x807F6E30
    r12 = *(0 + r3); // lwz @ 0x807F6E34
    r12 = *(0x6c + r12); // lwz @ 0x807F6E38
    /* mtctr r12 */ // 0x807F6E3C
    /* bctrl  */ // 0x807F6E40
    r0 = *(0x64 + r1); // lwz @ 0x807F6E44
    r31 = *(0x5c + r1); // lwz @ 0x807F6E48
    return;
}