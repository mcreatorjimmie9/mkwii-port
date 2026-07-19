/* Function at 0x80808F34, size=520 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_80808F34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x80808F3C
    /* lfs f0, 0(r5) */ // 0x80808F44
    *(0x4c + r1) = r31; // stw @ 0x80808F48
    r31 = r6;
    *(0x48 + r1) = r30; // stw @ 0x80808F50
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x80808F58
    r29 = r3;
    /* stfs f0, 0x2c(r1) */ // 0x80808F60
    /* stfs f0, 0x30(r1) */ // 0x80808F64
    /* stfs f0, 0x34(r1) */ // 0x80808F68
    r4 = *(0x24 + r3); // lwz @ 0x80808F6C
    r0 = *(0x14 + r3); // lwz @ 0x80808F70
    if (!=) goto 0x0x80808fec;
    r3 = *(0x10 + r3); // lwz @ 0x80808F7C
    r0 = *(0xe4 + r3); // lwz @ 0x80808F80
    if (>=) goto 0x0x80808fac;
    /* lis r5, 0 */ // 0x80808F8C
    r3 = r30;
    r4 = r5 + 0; // 0x80808F94
    /* lfs f1, 0(r5) */ // 0x80808F98
    /* lfs f2, 4(r4) */ // 0x80808F9C
    /* lfs f3, 8(r4) */ // 0x80808FA0
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80808fe0 */ // 0x80808FA8
    if (!=) goto 0x0x80808fe0;
    r0 = *(0xf8 + r3); // lbz @ 0x80808FB0
    if (==) goto 0x0x80808fe0;
    /* lfs f1, 0xe8(r3) */ // 0x80808FBC
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f1, 0x20(r1) */ // 0x80808FCC
    r3 = r30;
    /* lfs f2, 0x24(r1) */ // 0x80808FD4
    /* lfs f3, 0x28(r1) */ // 0x80808FD8
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x18 + r29); // lwz @ 0x80808FE0
    *(0x24 + r29) = r0; // stw @ 0x80808FE4
    /* b 0x80809124 */ // 0x80808FE8
    r0 = *(0x18 + r3); // lwz @ 0x80808FEC
    if (!=) goto 0x0x80809068;
    r3 = *(0x10 + r3); // lwz @ 0x80808FF8
    r0 = *(0xe4 + r3); // lwz @ 0x80808FFC
    if (>=) goto 0x0x80809028;
    /* lis r5, 0 */ // 0x80809008
    r3 = r30;
    r4 = r5 + 0; // 0x80809010
    /* lfs f1, 0(r5) */ // 0x80809014
    /* lfs f2, 4(r4) */ // 0x80809018
    /* lfs f3, 8(r4) */ // 0x8080901C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8080905c */ // 0x80809024
    if (!=) goto 0x0x8080905c;
    r0 = *(0xf8 + r3); // lbz @ 0x8080902C
    if (==) goto 0x0x8080905c;
    /* lfs f1, 0xe8(r3) */ // 0x80809038
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f1, 0x14(r1) */ // 0x80809048
    r3 = r30;
    /* lfs f2, 0x18(r1) */ // 0x80809050
    /* lfs f3, 0x1c(r1) */ // 0x80809054
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x1c + r29); // lwz @ 0x8080905C
    *(0x24 + r29) = r0; // stw @ 0x80809060
    /* b 0x80809124 */ // 0x80809064
    r0 = *(0x1c + r3); // lwz @ 0x80809068
    if (!=) goto 0x0x808090e4;
    r3 = *(0x10 + r3); // lwz @ 0x80809074
    r0 = *(0xe4 + r3); // lwz @ 0x80809078
    if (>=) goto 0x0x808090a4;
    /* lis r5, 0 */ // 0x80809084
    r3 = r30;
    r4 = r5 + 0; // 0x8080908C
    /* lfs f1, 0(r5) */ // 0x80809090
    /* lfs f2, 4(r4) */ // 0x80809094
    /* lfs f3, 8(r4) */ // 0x80809098
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x808090d8 */ // 0x808090A0
    if (!=) goto 0x0x808090d8;
    r0 = *(0xf8 + r3); // lbz @ 0x808090A8
    if (==) goto 0x0x808090d8;
    /* lfs f1, 0xe8(r3) */ // 0x808090B4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f1, 8(r1) */ // 0x808090C4
    r3 = r30;
    /* lfs f2, 0xc(r1) */ // 0x808090CC
    /* lfs f3, 0x10(r1) */ // 0x808090D0
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = *(0x20 + r29); // lwz @ 0x808090D8
    *(0x24 + r29) = r0; // stw @ 0x808090DC
    /* b 0x80809124 */ // 0x808090E0
    r0 = *(0x20 + r3); // lwz @ 0x808090E4
    if (!=) goto 0x0x80809124;
    r3 = *(0x10 + r3); // lwz @ 0x808090F0
    r0 = *(0xe4 + r3); // lwz @ 0x808090F4
    if (>=) goto 0x0x8080911c;
    /* lis r5, 0 */ // 0x80809100
    r3 = r30;
    r4 = r5 + 0; // 0x80809108
    /* lfs f1, 0(r5) */ // 0x8080910C
    /* lfs f2, 4(r4) */ // 0x80809110
    /* lfs f3, 8(r4) */ // 0x80809114
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0x14 + r29); // lwz @ 0x8080911C
    *(0x24 + r29) = r0; // stw @ 0x80809120
    r0 = *(0x24 + r29); // lwz @ 0x80809124
    *(6 + r31) = r0; // sth @ 0x80809128
    r31 = *(0x4c + r1); // lwz @ 0x8080912C
    r30 = *(0x48 + r1); // lwz @ 0x80809130
    r29 = *(0x44 + r1); // lwz @ 0x80809134
    r0 = *(0x54 + r1); // lwz @ 0x80809138
}