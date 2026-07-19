/* Function at 0x808AA030, size=260 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808AA030(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x808AA044
    *(0x54 + r1) = r29; // stw @ 0x808AA048
    r3 = *(0x20 + r3); // lwz @ 0x808AA04C
    r12 = *(0 + r3); // lwz @ 0x808AA050
    r12 = *(0x14 + r12); // lwz @ 0x808AA054
    /* mtctr r12 */ // 0x808AA058
    /* bctrl  */ // 0x808AA05C
    r6 = *(0x20 + r31); // lwz @ 0x808AA060
    r0 = *(0x2c + r31); // lhz @ 0x808AA064
    /* lfs f0, 0x20(r6) */ // 0x808AA068
    /* lfs f1, 0x1c(r6) */ // 0x808AA06C
    r0 = r0 | 1; // 0x808AA070
    /* lfs f2, 0x18(r6) */ // 0x808AA074
    /* stfs f2, 0x30(r31) */ // 0x808AA078
    r3 = *(0xba + r31); // lha @ 0x808AA07C
    *(0x2c + r31) = r0; // sth @ 0x808AA080
    /* stfs f1, 0x34(r31) */ // 0x808AA084
    /* stfs f0, 0x38(r31) */ // 0x808AA088
    r0 = *(0x48 + r6); // lha @ 0x808AA08C
    if (==) goto 0x0x808aa1b4;
    r5 = *(0x24 + r6); // lwz @ 0x808AA098
    /* lis r4, 0 */ // 0x808AA09C
    r0 = *(0x28 + r6); // lwz @ 0x808AA0A0
    *(0x18 + r1) = r0; // stw @ 0x808AA0A8
    /* lfs f0, 0(r4) */ // 0x808AA0AC
    *(0x14 + r1) = r5; // stw @ 0x808AA0B0
    r0 = *(0x2c + r6); // lwz @ 0x808AA0B4
    *(0x1c + r1) = r0; // stw @ 0x808AA0B8
    /* stfs f0, 0x18(r1) */ // 0x808AA0BC
    FUN_805E3430(); // bl 0x805E3430
    /* lis r30, 0 */ // 0x808AA0C4
    r4 = r30 + 0; // 0x808AA0CC
    FUN_805C6D88(r3, r4, r5); // bl 0x805C6D88
    r3 = r30 + 0; // 0x808AA0D8
    /* lfs f8, 8(r1) */ // 0x808AA0DC
    /* lfs f7, 0xc(r1) */ // 0x808AA0E0
    /* li r0, 0 */ // 0x808AA0E4
    /* lfs f6, 0x10(r1) */ // 0x808AA0E8
    /* lfs f5, 0(r30) */ // 0x808AA0EC
    /* lfs f4, 4(r3) */ // 0x808AA0F0
    /* lfs f3, 8(r3) */ // 0x808AA0F4
    /* lfs f2, 0x14(r1) */ // 0x808AA0F8
    /* lfs f1, 0x18(r1) */ // 0x808AA0FC
    /* lfs f0, 0x1c(r1) */ // 0x808AA100
    /* stfs f8, 0x20(r1) */ // 0x808AA104
    /* stfs f7, 0x30(r1) */ // 0x808AA108
    /* stfs f6, 0x40(r1) */ // 0x808AA10C
    /* stfs f5, 0x24(r1) */ // 0x808AA110
    /* stfs f4, 0x34(r1) */ // 0x808AA114
    /* stfs f3, 0x44(r1) */ // 0x808AA118
    /* stfs f2, 0x28(r1) */ // 0x808AA11C
    /* stfs f1, 0x38(r1) */ // 0x808AA120
    /* stfs f0, 0x48(r1) */ // 0x808AA124
    r3 = *(0x2c + r31); // lhz @ 0x808AA128
    *(0x54 + r31) = r0; // stb @ 0x808AA12C
    r0 = r3 | 4; // 0x808AA130
}