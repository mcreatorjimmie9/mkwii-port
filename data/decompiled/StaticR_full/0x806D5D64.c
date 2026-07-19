/* Function at 0x806D5D64, size=1048 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806D5D64(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x806D5D7C
    *(0x20 + r1) = r28; // stw @ 0x806D5D80
    r0 = *(0x60 + r3); // lwz @ 0x806D5D84
    if (<) goto 0x0x806d615c;
    r0 = *(0x58 + r3); // lwz @ 0x806D5D90
    if (==) goto 0x0x806d5da8;
    if (==) goto 0x0x806d5db0;
    /* b 0x806d5db4 */ // 0x806D5DA4
    /* li r28, 1 */ // 0x806D5DA8
    /* b 0x806d5db4 */ // 0x806D5DAC
    /* li r28, 0 */ // 0x806D5DB0
    /* lis r4, 0 */ // 0x806D5DB4
    r31 = *(0x5c + r3); // lwz @ 0x806D5DB8
    r4 = *(0 + r4); // lwz @ 0x806D5DBC
    r3 = r31;
    /* addis r29, r4, 2 */ // 0x806D5DC4
    FUN_805E0ED8(r4, r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806D5DCC
    if (<) goto 0x0x806d5ec8;
    r0 = *(0x6e + r30); // lbz @ 0x806D5DD4
    r4 = *(0x4ffc + r29); // lwz @ 0x806D5DD8
    /* addis r4, r4, 2 */ // 0x806D5DE0
    r4 = r4 + 0x3308; // 0x806D5DE4
    if (!=) goto 0x0x806d5e10;
    /* clrlwi r0, r3, 0x10 */ // 0x806D5DEC
    /* mulli r3, r0, 0xa0 */ // 0x806D5DF0
    /* mulli r0, r28, 0x50 */ // 0x806D5DF4
    r3 = r4 + r3; // 0x806D5DF8
    r3 = r3 + r0; // 0x806D5DFC
    r0 = *(0x2330 + r3); // lwz @ 0x806D5E00
    /* clrlwi r0, r0, 1 */ // 0x806D5E04
    *(0x2330 + r3) = r0; // stw @ 0x806D5E08
    /* b 0x806d5ec8 */ // 0x806D5E0C
    /* clrlwi r0, r3, 0x10 */ // 0x806D5E10
    r5 = r30 + 0x68; // 0x806D5E14
    /* mulli r8, r0, 0xa0 */ // 0x806D5E18
    /* li r3, 0x63 */ // 0x806D5E1C
    /* mulli r7, r28, 0x50 */ // 0x806D5E20
    r0 = r4 + r8; // 0x806D5E24
    r6 = r0 + r7; // 0x806D5E28
    r0 = *(0x2330 + r6); // lwz @ 0x806D5E2C
    r0 = r0 | 0x8000; // 0x806D5E30
    *(0x2330 + r6) = r0; // stw @ 0x806D5E34
    r0 = *(0x68 + r30); // lhz @ 0x806D5E38
    if (>) goto 0x0x806d5e48;
    r3 = r0;
    r0 = *(0x2330 + r6); // lwz @ 0x806D5E48
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0x2330 + r6) = r0; // stw @ 0x806D5E50
    r0 = *(0 + r5); // lhz @ 0x806D5E54
    if (<=) goto 0x0x806d5e68;
    /* li r3, 0x3b */ // 0x806D5E60
    /* b 0x806d5e6c */ // 0x806D5E64
    r3 = *(0x6a + r30); // lbz @ 0x806D5E68
    r0 = *(0x2330 + r6); // lwz @ 0x806D5E6C
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0x2330 + r6) = r0; // stw @ 0x806D5E74
    r0 = *(0 + r5); // lhz @ 0x806D5E78
    if (<=) goto 0x0x806d5e8c;
    /* li r5, 0x3e7 */ // 0x806D5E84
    /* b 0x806d5e90 */ // 0x806D5E88
    r5 = *(0x6c + r30); // lhz @ 0x806D5E8C
    r0 = r4 + r8; // 0x806D5E90
    r4 = *(0x2330 + r6); // lwz @ 0x806D5E94
    r3 = r0 + r7; // 0x806D5E98
    r4 = r5 rlwimi 7; // rlwimi
    *(0x2330 + r6) = r4; // stw @ 0x806D5EA0
    /* li r0, 0x26 */ // 0x806D5EA4
    r5 = r3 + 0x2333; // 0x806D5EA8
    r4 = r30 + 0x6f; // 0x806D5EAC
    /* mtctr r0 */ // 0x806D5EB0
    r3 = *(1 + r4); // lbz @ 0x806D5EB4
    /* lbzu r0, 2(r4) */ // 0x806D5EB8
    *(1 + r5) = r3; // stb @ 0x806D5EBC
    /* stbu r0, 2(r5) */ // 0x806D5EC0
    if (counter-- != 0) goto 0x0x806d5eb4;
    r0 = *(0x58 + r30); // lwz @ 0x806D5EC8
    if (!=) goto 0x0x806d614c;
    /* lis r3, 0 */ // 0x806D5ED4
    /* li r0, 0 */ // 0x806D5ED8
    r4 = *(0 + r3); // lwz @ 0x806D5EDC
    /* lis r3, 0 */ // 0x806D5EE0
    r3 = r3 + 0; // 0x806D5EE4
    *(8 + r1) = r3; // stw @ 0x806D5EE8
    r3 = r31;
    /* addis r29, r4, 2 */ // 0x806D5EF0
    *(0x12 + r1) = r0; // stb @ 0x806D5EF4
    *(0xc + r1) = r0; // sth @ 0x806D5EF8
    *(0xe + r1) = r0; // stb @ 0x806D5EFC
    *(0x10 + r1) = r0; // sth @ 0x806D5F00
    FUN_805E0ED8(); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806D5F08
    if (>=) goto 0x0x806d5f18;
    /* li r6, 0 */ // 0x806D5F10
    /* b 0x806d5f6c */ // 0x806D5F14
    /* clrlwi r0, r3, 0x10 */ // 0x806D5F18
    r3 = *(0x4ffc + r29); // lwz @ 0x806D5F1C
    /* mulli r0, r0, 0xa0 */ // 0x806D5F20
    /* addis r3, r3, 2 */ // 0x806D5F24
    r3 = r3 + 0x3308; // 0x806D5F28
    r3 = r3 + r0; // 0x806D5F2C
    r3 = *(0x2380 + r3); // lwz @ 0x806D5F30
    /* srwi r0, r3, 0x1f */ // 0x806D5F34
    if (!=) goto 0x0x806d5f68;
    r5 = r3 rlwinm 0x19; // rlwinm
    r4 = r3 rlwinm 0xf; // rlwinm
    r3 = r3 rlwinm 8; // rlwinm
    /* li r0, 1 */ // 0x806D5F4C
    *(0x12 + r1) = r0; // stb @ 0x806D5F50
    /* li r6, 1 */ // 0x806D5F54
    *(0xc + r1) = r3; // sth @ 0x806D5F58
    *(0xe + r1) = r4; // stb @ 0x806D5F5C
    *(0x10 + r1) = r5; // sth @ 0x806D5F60
    /* b 0x806d5f6c */ // 0x806D5F64
    /* li r6, 0 */ // 0x806D5F68
    /* lis r3, 0 */ // 0x806D5F6C
    /* neg r0, r6 */ // 0x806D5F70
    r4 = *(0 + r3); // lwz @ 0x806D5F74
    r0 = r0 | r6; // 0x806D5F78
    r3 = r31;
    /* srwi r29, r0, 0x1f */ // 0x806D5F80
    /* addis r28, r4, 2 */ // 0x806D5F84
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806D5F8C
    if (>=) goto 0x0x806d5f9c;
    /* li r0, 0 */ // 0x806D5F94
    /* b 0x806d5fb8 */ // 0x806D5F98
    /* clrlwi r0, r3, 0x10 */ // 0x806D5F9C
    r3 = *(0x4ffc + r28); // lwz @ 0x806D5FA0
    /* mulli r0, r0, 0xa0 */ // 0x806D5FA4
    /* addis r3, r3, 2 */ // 0x806D5FA8
    r3 = r3 + r0; // 0x806D5FAC
    r0 = *(0x5688 + r3); // lwz @ 0x806D5FB0
    /* srwi r0, r0, 0x1f */ // 0x806D5FB4
    r3 = r29 & r0; // 0x806D5FB8
    /* neg r0, r3 */ // 0x806D5FBC
    r0 = r0 | r3; // 0x806D5FC0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806D5FC4
    if (==) goto 0x0x806d6050;
    r0 = *(0x6e + r30); // lbz @ 0x806D5FCC
    if (!=) goto 0x0x806d5fe0;
    /* li r0, 0 */ // 0x806D5FD8
    /* b 0x806d6048 */ // 0x806D5FDC
    r0 = *(0x12 + r1); // lbz @ 0x806D5FE0
    if (!=) goto 0x0x806d5ff4;
    /* li r0, 1 */ // 0x806D5FEC
    /* b 0x806d6048 */ // 0x806D5FF0
    r0 = *(0xc + r1); // lhz @ 0x806D5FF4
    r3 = *(0x68 + r30); // lhz @ 0x806D5FF8
    if (>=) goto 0x0x806d600c;
    /* li r0, 1 */ // 0x806D6004
    /* b 0x806d6048 */ // 0x806D6008
    if (!=) goto 0x0x806d6044;
    r0 = *(0xe + r1); // lbz @ 0x806D6010
    r3 = *(0x6a + r30); // lbz @ 0x806D6014
    if (>=) goto 0x0x806d6028;
    /* li r0, 1 */ // 0x806D6020
    /* b 0x806d6048 */ // 0x806D6024
    if (!=) goto 0x0x806d6044;
    r3 = *(0x6c + r30); // lhz @ 0x806D602C
    r0 = *(0x10 + r1); // lhz @ 0x806D6030
    if (>=) goto 0x0x806d6044;
    /* li r0, 1 */ // 0x806D603C
    /* b 0x806d6048 */ // 0x806D6040
    /* li r0, 0 */ // 0x806D6044
    if (==) goto 0x0x806d614c;
    /* lis r4, 0 */ // 0x806D6050
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x806D6058
    /* addis r28, r4, 2 */ // 0x806D605C
    FUN_805E0ED8(r4, r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806D6064
    if (<) goto 0x0x806d614c;
    r0 = *(0x6e + r30); // lbz @ 0x806D606C
    r4 = *(0x4ffc + r28); // lwz @ 0x806D6070
    /* addis r4, r4, 2 */ // 0x806D6078
    r4 = r4 + 0x3308; // 0x806D607C
    if (!=) goto 0x0x806d60a0;
    /* clrlwi r0, r3, 0x10 */ // 0x806D6084
    /* mulli r0, r0, 0xa0 */ // 0x806D6088
    r3 = r4 + r0; // 0x806D608C
    r0 = *(0x2380 + r3); // lwz @ 0x806D6090
    /* clrlwi r0, r0, 1 */ // 0x806D6094
    *(0x2380 + r3) = r0; // stw @ 0x806D6098
    /* b 0x806d614c */ // 0x806D609C
    /* clrlwi r0, r3, 0x10 */ // 0x806D60A0
    r6 = r30 + 0x68; // 0x806D60A4
    /* mulli r7, r0, 0xa0 */ // 0x806D60A8
    /* li r3, 0x63 */ // 0x806D60AC
    r5 = r4 + r7; // 0x806D60B0
    r0 = *(0x2380 + r5); // lwz @ 0x806D60B4
    r0 = r0 | 0x8000; // 0x806D60B8
    *(0x2380 + r5) = r0; // stw @ 0x806D60BC
    r0 = *(0x68 + r30); // lhz @ 0x806D60C0
    if (>) goto 0x0x806d60d0;
    r3 = r0;
    r0 = *(0x2380 + r5); // lwz @ 0x806D60D0
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0x2380 + r5) = r0; // stw @ 0x806D60D8
    r0 = *(0 + r6); // lhz @ 0x806D60DC
    if (<=) goto 0x0x806d60f0;
    /* li r3, 0x3b */ // 0x806D60E8
    /* b 0x806d60f4 */ // 0x806D60EC
    r3 = *(0x6a + r30); // lbz @ 0x806D60F0
    r0 = *(0x2380 + r5); // lwz @ 0x806D60F4
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0x2380 + r5) = r0; // stw @ 0x806D60FC
    r0 = *(0 + r6); // lhz @ 0x806D6100
    if (<=) goto 0x0x806d6114;
    /* li r0, 0x3e7 */ // 0x806D610C
    /* b 0x806d6118 */ // 0x806D6110
    r0 = *(0x6c + r30); // lhz @ 0x806D6114
    r3 = r4 + r7; // 0x806D6118
    r4 = *(0x2380 + r5); // lwz @ 0x806D611C
    r4 = r0 rlwimi 7; // rlwimi
    *(0x2380 + r5) = r4; // stw @ 0x806D6124
    /* li r0, 0x26 */ // 0x806D6128
    r5 = r3 + 0x2383; // 0x806D612C
    r4 = r30 + 0x6f; // 0x806D6130
    /* mtctr r0 */ // 0x806D6134
    r3 = *(1 + r4); // lbz @ 0x806D6138
    /* lbzu r0, 2(r4) */ // 0x806D613C
    *(1 + r5) = r3; // stb @ 0x806D6140
    /* stbu r0, 2(r5) */ // 0x806D6144
    if (counter-- != 0) goto 0x0x806d6138;
    /* lis r3, 0 */ // 0x806D614C
    r3 = *(0 + r3); // lwz @ 0x806D6150
    r3 = *(0x90 + r3); // lwz @ 0x806D6154
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x34 + r1); // lwz @ 0x806D615C
    r31 = *(0x2c + r1); // lwz @ 0x806D6160
    r30 = *(0x28 + r1); // lwz @ 0x806D6164
    r29 = *(0x24 + r1); // lwz @ 0x806D6168
    r28 = *(0x20 + r1); // lwz @ 0x806D616C
    return;
}