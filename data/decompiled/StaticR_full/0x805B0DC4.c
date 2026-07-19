/* Function at 0x805B0DC4, size=956 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805B0DC4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B0DD8
    r30 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x805B0DE0
    if (==) goto 0x0x805b0e3c;
    r3 = r0;
    FUN_805B5338(r3); // bl 0x805B5338
    r0 = *(0x10 + r30); // lwz @ 0x805B0DF4
    if (==) goto 0x0x805b0e3c;
    r3 = *(0x14 + r30); // lbz @ 0x805B0E00
    r0 = r3 + -1; // 0x805B0E04
    *(0x14 + r30) = r0; // stb @ 0x805B0E08
    /* clrlwi r0, r0, 0x18 */ // 0x805B0E0C
    /* extsb. r0, r0 */ // 0x805B0E10
    if (>=) goto 0x0x805b0e3c;
    r3 = *(0x20 + r30); // lwz @ 0x805B0E18
    r4 = *(0x18 + r30); // lwz @ 0x805B0E1C
    FUN_805B5278(); // bl 0x805B5278
    /* li r4, 0x2c */ // 0x805B0E24
    /* li r3, -1 */ // 0x805B0E28
    /* li r0, 0 */ // 0x805B0E2C
    *(0x10 + r30) = r4; // stw @ 0x805B0E30
    *(0x14 + r30) = r3; // stb @ 0x805B0E34
    *(0x18 + r30) = r0; // stw @ 0x805B0E38
    r3 = *(0x24 + r30); // lwz @ 0x805B0E3C
    if (==) goto 0x0x805b0e4c;
    FUN_805B5338(); // bl 0x805B5338
    if (==) goto 0x0x805b0e9c;
    r0 = *(0xc6 + r30); // lbz @ 0x805B0E54
    if (!=) goto 0x0x805b1080;
    r3 = *(0x20 + r30); // lwz @ 0x805B0E60
    if (==) goto 0x0x805b0e88;
    FUN_805B51E8(); // bl 0x805B51E8
    /* li r4, 0x2c */ // 0x805B0E70
    /* li r3, 0 */ // 0x805B0E74
    /* li r0, -1 */ // 0x805B0E78
    *(0x10 + r30) = r4; // stw @ 0x805B0E7C
    *(0x18 + r30) = r3; // stw @ 0x805B0E80
    *(0x14 + r30) = r0; // stb @ 0x805B0E84
    r3 = *(0x24 + r30); // lwz @ 0x805B0E88
    if (==) goto 0x0x805b1080;
    FUN_805B51E8(); // bl 0x805B51E8
    /* b 0x805b1080 */ // 0x805B0E98
    r3 = *(4 + r30); // lwz @ 0x805B0E9C
    r9 = *(0x2c + r30); // lhz @ 0x805B0EA0
    r8 = *(0x2e + r30); // lhz @ 0x805B0EA4
    /* lfs f1, 0x30(r30) */ // 0x805B0EAC
    /* lfs f0, 0x34(r30) */ // 0x805B0EB0
    r7 = *(0x38 + r30); // lbz @ 0x805B0EB4
    r6 = *(0x39 + r30); // lbz @ 0x805B0EB8
    r5 = *(0x3a + r30); // lbz @ 0x805B0EBC
    r4 = *(0x3b + r30); // lbz @ 0x805B0EC0
    r0 = *(0x3c + r30); // lbz @ 0x805B0EC4
    *(0x44 + r30) = r9; // sth @ 0x805B0EC8
    *(0x46 + r30) = r8; // sth @ 0x805B0ECC
    /* stfs f1, 0x48(r30) */ // 0x805B0ED0
    /* stfs f0, 0x4c(r30) */ // 0x805B0ED4
    *(0x50 + r30) = r7; // stb @ 0x805B0ED8
    *(0x51 + r30) = r6; // stb @ 0x805B0EDC
    *(0x52 + r30) = r5; // stb @ 0x805B0EE0
    *(0x53 + r30) = r4; // stb @ 0x805B0EE4
    *(0x54 + r30) = r0; // stb @ 0x805B0EE8
    if (==) goto 0x0x805b0f04;
    r12 = *(0 + r3); // lwz @ 0x805B0EF0
    r12 = *(0x10 + r12); // lwz @ 0x805B0EF4
    /* mtctr r12 */ // 0x805B0EF8
    /* bctrl  */ // 0x805B0EFC
    /* b 0x805b0f08 */ // 0x805B0F00
    /* li r3, -1 */ // 0x805B0F04
    if (==) goto 0x0x805b0f24;
    /* lis r3, 0 */ // 0x805B0F10
    r3 = *(0 + r3); // lwz @ 0x805B0F14
    r0 = *(0x168c + r3); // lbz @ 0x805B0F18
    if (!=) goto 0x0x805b0f74;
    r3 = *(4 + r30); // lwz @ 0x805B0F24
    r0 = *(8 + r3); // lhz @ 0x805B0F28
    *(0x2c + r30) = r0; // sth @ 0x805B0F2C
    r0 = *(0xa + r3); // lhz @ 0x805B0F30
    *(0x2e + r30) = r0; // sth @ 0x805B0F34
    /* lfs f0, 0xc(r3) */ // 0x805B0F38
    /* stfs f0, 0x30(r30) */ // 0x805B0F3C
    /* lfs f0, 0x10(r3) */ // 0x805B0F40
    /* stfs f0, 0x34(r30) */ // 0x805B0F44
    r0 = *(0x14 + r3); // lbz @ 0x805B0F48
    *(0x38 + r30) = r0; // stb @ 0x805B0F4C
    r0 = *(0x15 + r3); // lbz @ 0x805B0F50
    *(0x39 + r30) = r0; // stb @ 0x805B0F54
    r0 = *(0x16 + r3); // lbz @ 0x805B0F58
    *(0x3a + r30) = r0; // stb @ 0x805B0F5C
    r0 = *(0x17 + r3); // lbz @ 0x805B0F60
    *(0x3b + r30) = r0; // stb @ 0x805B0F64
    r0 = *(0x18 + r3); // lbz @ 0x805B0F68
    *(0x3c + r30) = r0; // stb @ 0x805B0F6C
    /* b 0x805b0fb0 */ // 0x805B0F70
    r0 = *(0x3c + r30); // lbz @ 0x805B0F74
    /* lis r3, 0 */ // 0x805B0F78
    /* lfs f0, 0(r3) */ // 0x805B0F7C
    /* li r4, 0 */ // 0x805B0F80
    /* li r3, 7 */ // 0x805B0F84
    r0 = r0 rlwinm 0; // rlwinm
    *(0x2c + r30) = r4; // sth @ 0x805B0F8C
    *(0x2e + r30) = r4; // sth @ 0x805B0F90
    /* stfs f0, 0x34(r30) */ // 0x805B0F94
    /* stfs f0, 0x30(r30) */ // 0x805B0F98
    *(0x38 + r30) = r3; // stb @ 0x805B0F9C
    *(0x39 + r30) = r3; // stb @ 0x805B0FA0
    *(0x3a + r30) = r4; // stb @ 0x805B0FA4
    *(0x3b + r30) = r4; // stb @ 0x805B0FA8
    *(0x3c + r30) = r0; // stb @ 0x805B0FAC
    /* lis r3, 0 */ // 0x805B0FB0
    r3 = *(0 + r3); // lwz @ 0x805B0FB4
    r0 = *(0x4156 + r3); // lbz @ 0x805B0FB8
    if (==) goto 0x0x805b1074;
    r0 = *(0x3c + r30); // lbz @ 0x805B0FC4
    /* rlwinm. r0, r0, 0x19, 0x1f, 0x1f */ // 0x805B0FC8
    if (==) goto 0x0x805b0fdc;
    r0 = *(0x54 + r30); // lbz @ 0x805B0FD0
    /* rlwinm. r0, r0, 0x19, 0x1f, 0x1f */ // 0x805B0FD4
    if (!=) goto 0x0x805b0fe4;
    /* li r0, 0 */ // 0x805B0FDC
    /* b 0x805b1028 */ // 0x805B0FE0
    /* lfs f0, 0x48(r30) */ // 0x805B0FE4
    /* lfs f1, 0x30(r30) */ // 0x805B0FE8
    /* fcmpu cr0, f1, f0 */ // 0x805B0FEC
    if (==) goto 0x0x805b0ffc;
    /* li r0, 0 */ // 0x805B0FF4
    /* b 0x805b1028 */ // 0x805B0FF8
    /* lfs f0, 0x4c(r30) */ // 0x805B0FFC
    /* lfs f1, 0x34(r30) */ // 0x805B1000
    /* fcmpu cr0, f1, f0 */ // 0x805B1004
    if (==) goto 0x0x805b1014;
    /* li r0, 0 */ // 0x805B100C
    /* b 0x805b1028 */ // 0x805B1010
    r3 = *(0x2c + r30); // lhz @ 0x805B1014
    r0 = *(0x44 + r30); // lhz @ 0x805B1018
    /* subf r0, r3, r0 */ // 0x805B101C
    /* cntlzw r0, r0 */ // 0x805B1020
    /* srwi r0, r0, 5 */ // 0x805B1024
    if (==) goto 0x0x805b1040;
    r3 = *(0xc2 + r30); // lhz @ 0x805B1030
    r0 = r3 + 1; // 0x805B1034
    *(0xc2 + r30) = r0; // sth @ 0x805B1038
    /* b 0x805b1048 */ // 0x805B103C
    /* li r0, 0 */ // 0x805B1040
    *(0xc2 + r30) = r0; // sth @ 0x805B1044
    r3 = *(4 + r30); // lwz @ 0x805B1048
    r0 = *(0x50 + r3); // lbz @ 0x805B104C
    if (!=) goto 0x0x805b1068;
    r3 = *(0xc4 + r30); // lhz @ 0x805B1058
    r0 = r3 + 1; // 0x805B105C
    *(0xc4 + r30) = r0; // sth @ 0x805B1060
    /* b 0x805b1080 */ // 0x805B1064
    /* li r0, 0 */ // 0x805B1068
    *(0xc4 + r30) = r0; // sth @ 0x805B106C
    /* b 0x805b1080 */ // 0x805B1070
    /* li r0, 0 */ // 0x805B1074
    *(0xc2 + r30) = r0; // sth @ 0x805B1078
    *(0xc4 + r30) = r0; // sth @ 0x805B107C
    r3 = *(0x5c + r30); // lhz @ 0x805B1080
    r6 = *(0x5e + r30); // lhz @ 0x805B1084
    /* lfs f8, 0x60(r30) */ // 0x805B1088
    /* lfs f7, 0x64(r30) */ // 0x805B108C
    /* lfs f6, 0x68(r30) */ // 0x805B1090
    /* lfs f5, 0x6c(r30) */ // 0x805B1094
    r5 = *(0x70 + r30); // lbz @ 0x805B1098
    r4 = *(0x71 + r30); // lbz @ 0x805B109C
    /* lfs f4, 0x74(r30) */ // 0x805B10A0
    /* lfs f3, 0x78(r30) */ // 0x805B10A4
    /* lfs f2, 0x7c(r30) */ // 0x805B10A8
    /* lfs f1, 0x80(r30) */ // 0x805B10AC
    /* lfs f0, 0x84(r30) */ // 0x805B10B0
    r0 = *(0x88 + r30); // lbz @ 0x805B10B4
    *(0x90 + r30) = r3; // sth @ 0x805B10B8
    r3 = *(8 + r30); // lwz @ 0x805B10BC
    *(0x92 + r30) = r6; // sth @ 0x805B10C0
    /* stfs f8, 0x94(r30) */ // 0x805B10C4
    /* stfs f7, 0x98(r30) */ // 0x805B10C8
    /* stfs f6, 0x9c(r30) */ // 0x805B10CC
    /* stfs f5, 0xa0(r30) */ // 0x805B10D0
    *(0xa4 + r30) = r5; // stb @ 0x805B10D4
    *(0xa5 + r30) = r4; // stb @ 0x805B10D8
    /* stfs f4, 0xa8(r30) */ // 0x805B10DC
    /* stfs f3, 0xac(r30) */ // 0x805B10E0
    /* stfs f2, 0xb0(r30) */ // 0x805B10E4
    /* stfs f1, 0xb4(r30) */ // 0x805B10E8
    /* stfs f0, 0xb8(r30) */ // 0x805B10EC
    *(0xbc + r30) = r0; // stb @ 0x805B10F0
    r0 = *(0x20 + r3); // lhz @ 0x805B10F4
    *(0x5c + r30) = r0; // sth @ 0x805B10F8
    r0 = *(0x22 + r3); // lhz @ 0x805B10FC
    *(0x5e + r30) = r0; // sth @ 0x805B1100
    /* lfs f0, 0x24(r3) */ // 0x805B1104
    /* stfs f0, 0x60(r30) */ // 0x805B1108
    /* lfs f0, 0x28(r3) */ // 0x805B110C
    /* stfs f0, 0x64(r30) */ // 0x805B1110
    /* lfs f0, 0x2c(r3) */ // 0x805B1114
    /* stfs f0, 0x68(r30) */ // 0x805B1118
    /* lfs f0, 0x30(r3) */ // 0x805B111C
    /* stfs f0, 0x6c(r30) */ // 0x805B1120
    r0 = *(0x34 + r3); // lbz @ 0x805B1124
    *(0x70 + r30) = r0; // stb @ 0x805B1128
    r0 = *(0x35 + r3); // lbz @ 0x805B112C
    *(0x71 + r30) = r0; // stb @ 0x805B1130
    /* lfs f0, 0x38(r3) */ // 0x805B1134
    /* stfs f0, 0x74(r30) */ // 0x805B1138
    /* lfs f0, 0x3c(r3) */ // 0x805B113C
    /* stfs f0, 0x78(r30) */ // 0x805B1140
    /* lfs f0, 0x40(r3) */ // 0x805B1144
    /* stfs f0, 0x7c(r30) */ // 0x805B1148
    /* lfs f0, 0x44(r3) */ // 0x805B114C
    /* stfs f0, 0x80(r30) */ // 0x805B1150
    /* lfs f0, 0x48(r3) */ // 0x805B1154
    /* stfs f0, 0x84(r30) */ // 0x805B1158
    r0 = *(0x4c + r3); // lbz @ 0x805B115C
    *(0x88 + r30) = r0; // stb @ 0x805B1160
    *(0xc6 + r30) = r31; // stb @ 0x805B1164
    r31 = *(0xc + r1); // lwz @ 0x805B1168
    r30 = *(8 + r1); // lwz @ 0x805B116C
    r0 = *(0x14 + r1); // lwz @ 0x805B1170
    return;
}