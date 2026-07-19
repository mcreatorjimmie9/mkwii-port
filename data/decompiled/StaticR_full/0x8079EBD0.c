/* Function at 0x8079EBD0, size=1284 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8079EBD0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8079EBE4
    *(0x34 + r1) = r29; // stw @ 0x8079EBE8
    r4 = *(0x40 + r3); // lwz @ 0x8079EBEC
    r0 = r4 + -1; // 0x8079EBF0
    if (<=) goto 0x0x8079f0bc;
    if (==) goto 0x0x8079ec0c;
    /* b 0x8079eca4 */ // 0x8079EC04
    /* b 0x8079f0bc */ // 0x8079EC08
    r6 = *(0x14 + r3); // lbz @ 0x8079EC0C
    /* lis r5, 0 */ // 0x8079EC10
    /* li r4, 4 */ // 0x8079EC14
    r0 = r6 + 1; // 0x8079EC18
    *(0x14 + r3) = r0; // stb @ 0x8079EC1C
    r3 = *(0 + r5); // lwz @ 0x8079EC20
    FUN_805C5788(r5, r4); // bl 0x805C5788
    r0 = *(0x14 + r31); // lbz @ 0x8079EC28
    r29 = r3;
    if (<) goto 0x0x8079ec9c;
    r0 = *(0x15 + r31); // lbz @ 0x8079EC38
    /* li r4, 0xb4 */ // 0x8079EC3C
    *(0x14 + r31) = r4; // stb @ 0x8079EC40
    if (!=) goto 0x0x8079ec9c;
    if (!=) goto 0x0x8079ec9c;
    /* lis r3, 0 */ // 0x8079EC54
    r3 = *(0 + r3); // lwz @ 0x8079EC58
    r4 = *(0x10 + r3); // lwz @ 0x8079EC5C
    r0 = r4 + -0x68; // 0x8079EC60
    if (<=) goto 0x0x8079ec84;
    r0 = r4 + -0x70; // 0x8079EC6C
    if (<=) goto 0x0x8079ec84;
    r0 = r4 + -0x74; // 0x8079EC78
    if (>) goto 0x0x8079ec9c;
    r12 = *(0 + r3); // lwz @ 0x8079EC84
    /* li r4, 0xdc */ // 0x8079EC88
    /* li r5, -1 */ // 0x8079EC8C
    r12 = *(0x20 + r12); // lwz @ 0x8079EC90
    /* mtctr r12 */ // 0x8079EC94
    /* bctrl  */ // 0x8079EC98
    *(0x15 + r31) = r29; // stb @ 0x8079EC9C
    /* b 0x8079ecc4 */ // 0x8079ECA0
    /* lis r4, 0 */ // 0x8079ECA4
    r4 = *(0 + r4); // lwz @ 0x8079ECA8
    r0 = *(0x28 + r4); // lwz @ 0x8079ECAC
    if (!=) goto 0x0x8079ecc4;
    /* li r4, 7 */ // 0x8079ECB8
    FUN_8079E0C0(r4); // bl 0x8079E0C0
    /* b 0x8079f0bc */ // 0x8079ECC0
    r0 = *(0x40 + r31); // lwz @ 0x8079ECC4
    if (==) goto 0x0x8079ece4;
    if (==) goto 0x0x8079ee70;
    if (==) goto 0x0x8079eea0;
    /* b 0x8079f0bc */ // 0x8079ECE0
    r3 = *(0x44 + r31); // lwz @ 0x8079ECE4
    r0 = r3 + -9; // 0x8079ECE8
    if (<=) goto 0x0x8079ecfc;
    if (!=) goto 0x0x8079f0bc;
    /* lis r4, 0 */ // 0x8079ECFC
    /* lis r3, 0 */ // 0x8079ED00
    /* li r0, 0 */ // 0x8079ED04
    *(0x2a + r1) = r0; // stb @ 0x8079ED08
    r4 = r4 + 0; // 0x8079ED0C
    r3 = *(0 + r3); // lwz @ 0x8079ED10
    *(0x20 + r1) = r4; // stw @ 0x8079ED14
    *(0x24 + r1) = r0; // sth @ 0x8079ED1C
    *(0x26 + r1) = r0; // stb @ 0x8079ED20
    *(0x28 + r1) = r0; // sth @ 0x8079ED24
    FUN_805C51F8(r4); // bl 0x805C51F8
    /* lis r3, 0 */ // 0x8079ED2C
    r3 = r3 + 0; // 0x8079ED30
    r4 = *(0xa + r3); // lbz @ 0x8079ED34
    if (!=) goto 0x0x8079ed48;
    /* li r0, 0 */ // 0x8079ED40
    /* b 0x8079edb0 */ // 0x8079ED44
    r0 = *(0x3a + r31); // lbz @ 0x8079ED48
    if (!=) goto 0x0x8079ed5c;
    /* li r0, 1 */ // 0x8079ED54
    /* b 0x8079edb0 */ // 0x8079ED58
    r0 = *(0x34 + r31); // lhz @ 0x8079ED5C
    r5 = *(4 + r3); // lhz @ 0x8079ED60
    if (>=) goto 0x0x8079ed74;
    /* li r0, 1 */ // 0x8079ED6C
    /* b 0x8079edb0 */ // 0x8079ED70
    if (!=) goto 0x0x8079edac;
    r0 = *(0x36 + r31); // lbz @ 0x8079ED78
    r5 = *(6 + r3); // lbz @ 0x8079ED7C
    if (>=) goto 0x0x8079ed90;
    /* li r0, 1 */ // 0x8079ED88
    /* b 0x8079edb0 */ // 0x8079ED8C
    if (!=) goto 0x0x8079edac;
    r3 = *(8 + r3); // lhz @ 0x8079ED94
    r0 = *(0x38 + r31); // lhz @ 0x8079ED98
    if (>=) goto 0x0x8079edac;
    /* li r0, 1 */ // 0x8079EDA4
    /* b 0x8079edb0 */ // 0x8079EDA8
    /* li r0, 0 */ // 0x8079EDAC
    if (==) goto 0x0x8079ee4c;
    r0 = *(0x2a + r1); // lbz @ 0x8079EDB8
    if (!=) goto 0x0x8079edcc;
    /* li r0, 0 */ // 0x8079EDC4
    /* b 0x8079ee38 */ // 0x8079EDC8
    if (!=) goto 0x0x8079eddc;
    /* li r0, 1 */ // 0x8079EDD4
    /* b 0x8079ee38 */ // 0x8079EDD8
    /* lis r4, 0 */ // 0x8079EDDC
    r3 = *(0x24 + r1); // lhz @ 0x8079EDE0
    r4 = r4 + 0; // 0x8079EDE4
    r0 = *(4 + r4); // lhz @ 0x8079EDE8
    if (>=) goto 0x0x8079edfc;
    /* li r0, 1 */ // 0x8079EDF4
    /* b 0x8079ee38 */ // 0x8079EDF8
    if (!=) goto 0x0x8079ee34;
    r0 = *(6 + r4); // lbz @ 0x8079EE00
    r3 = *(0x26 + r1); // lbz @ 0x8079EE04
    if (>=) goto 0x0x8079ee18;
    /* li r0, 1 */ // 0x8079EE10
    /* b 0x8079ee38 */ // 0x8079EE14
    if (!=) goto 0x0x8079ee34;
    r3 = *(0x28 + r1); // lhz @ 0x8079EE1C
    r0 = *(8 + r4); // lhz @ 0x8079EE20
    if (>) goto 0x0x8079ee34;
    /* li r0, 1 */ // 0x8079EE2C
    /* b 0x8079ee38 */ // 0x8079EE30
    /* li r0, 0 */ // 0x8079EE34
    if (==) goto 0x0x8079ee4c;
    r3 = r31;
    /* li r4, 5 */ // 0x8079EE44
    FUN_8079E0C0(r3, r4); // bl 0x8079E0C0
    r0 = *(0x24 + r1); // lhz @ 0x8079EE4C
    *(0x34 + r31) = r0; // sth @ 0x8079EE50
    r0 = *(0x26 + r1); // lbz @ 0x8079EE54
    *(0x36 + r31) = r0; // stb @ 0x8079EE58
    r0 = *(0x28 + r1); // lhz @ 0x8079EE5C
    *(0x38 + r31) = r0; // sth @ 0x8079EE60
    r0 = *(0x2a + r1); // lbz @ 0x8079EE64
    *(0x3a + r31) = r0; // stb @ 0x8079EE68
    /* b 0x8079f0bc */ // 0x8079EE6C
    /* lis r3, 0 */ // 0x8079EE70
    r3 = *(0 + r3); // lwz @ 0x8079EE74
    r3 = *(0x1c + r3); // lwz @ 0x8079EE78
    if (==) goto 0x0x8079f0bc;
    r0 = *(0 + r3); // lwz @ 0x8079EE84
    if (!=) goto 0x0x8079f0bc;
    r3 = r31;
    /* li r4, 6 */ // 0x8079EE94
    FUN_8079E0C0(r3, r4); // bl 0x8079E0C0
    /* b 0x8079f0bc */ // 0x8079EE9C
    r3 = *(0x44 + r31); // lwz @ 0x8079EEA0
    r0 = r3 + -9; // 0x8079EEA4
    if (<=) goto 0x0x8079eeb8;
    if (!=) goto 0x0x8079f08c;
    /* lis r4, 0 */ // 0x8079EEB8
    /* lis r3, 0 */ // 0x8079EEBC
    /* li r30, 0 */ // 0x8079EEC0
    *(0x1e + r1) = r30; // stb @ 0x8079EEC4
    r29 = r4 + 0; // 0x8079EEC8
    r3 = *(0 + r3); // lwz @ 0x8079EECC
    *(0x14 + r1) = r29; // stw @ 0x8079EED0
    *(0x18 + r1) = r30; // sth @ 0x8079EED8
    *(0x1a + r1) = r30; // stb @ 0x8079EEDC
    *(0x1c + r1) = r30; // sth @ 0x8079EEE0
    FUN_805C51F8(r4); // bl 0x805C51F8
    /* li r10, 0xa */ // 0x8079EEE8
    r4 = *(0x1e + r1); // lbz @ 0x8079EEEC
    /* li r3, 1 */ // 0x8079EEF0
    r5 = *(0x18 + r1); // lhz @ 0x8079EEF4
    /* li r8, 0 */ // 0x8079EEF8
    r6 = *(0x1a + r1); // lbz @ 0x8079EEFC
    r7 = *(0x1c + r1); // lhz @ 0x8079EF00
    /* mtctr r10 */ // 0x8079EF04
    *(8 + r1) = r29; // stw @ 0x8079EF0C
    *(0x12 + r1) = r3; // stb @ 0x8079EF10
    *(0xc + r1) = r30; // sth @ 0x8079EF14
    *(0xe + r1) = r10; // stb @ 0x8079EF18
    *(0x10 + r1) = r30; // sth @ 0x8079EF1C
    if (!=) goto 0x0x8079ef2c;
    /* li r0, 0 */ // 0x8079EF24
    /* b 0x8079ef90 */ // 0x8079EF28
    r0 = *(0x3a + r31); // lbz @ 0x8079EF2C
    if (!=) goto 0x0x8079ef40;
    /* li r0, 1 */ // 0x8079EF38
    /* b 0x8079ef90 */ // 0x8079EF3C
    r0 = *(0x34 + r31); // lhz @ 0x8079EF40
    if (>=) goto 0x0x8079ef54;
    /* li r0, 1 */ // 0x8079EF4C
    /* b 0x8079ef90 */ // 0x8079EF50
    if (!=) goto 0x0x8079ef8c;
    r0 = *(0x36 + r31); // lbz @ 0x8079EF5C
    /* clrlwi r9, r10, 0x18 */ // 0x8079EF60
    if (>=) goto 0x0x8079ef74;
    /* li r0, 1 */ // 0x8079EF6C
    /* b 0x8079ef90 */ // 0x8079EF70
    if (!=) goto 0x0x8079ef8c;
    r0 = *(0x38 + r31); // lhz @ 0x8079EF78
    if (>=) goto 0x0x8079ef8c;
    /* li r0, 1 */ // 0x8079EF84
    /* b 0x8079ef90 */ // 0x8079EF88
    /* li r0, 0 */ // 0x8079EF8C
    if (==) goto 0x0x8079f060;
    if (!=) goto 0x0x8079efa8;
    /* li r0, 0 */ // 0x8079EFA0
    /* b 0x8079f000 */ // 0x8079EFA4
    if (!=) goto 0x0x8079efb8;
    /* li r0, 1 */ // 0x8079EFB0
    /* b 0x8079f000 */ // 0x8079EFB4
    r0 = *(0xc + r1); // lhz @ 0x8079EFB8
    if (>=) goto 0x0x8079efcc;
    /* li r0, 1 */ // 0x8079EFC4
    /* b 0x8079f000 */ // 0x8079EFC8
    if (!=) goto 0x0x8079effc;
    r0 = *(0xe + r1); // lbz @ 0x8079EFD0
    if (>=) goto 0x0x8079efe4;
    /* li r0, 1 */ // 0x8079EFDC
    /* b 0x8079f000 */ // 0x8079EFE0
    if (!=) goto 0x0x8079effc;
    r0 = *(0x10 + r1); // lhz @ 0x8079EFE8
    if (>) goto 0x0x8079effc;
    /* li r0, 1 */ // 0x8079EFF4
    /* b 0x8079f000 */ // 0x8079EFF8
    /* li r0, 0 */ // 0x8079EFFC
    if (==) goto 0x0x8079f060;
    /* clrlwi r0, r0, 0x18 */ // 0x8079F00C
    if (>) goto 0x0x8079f03c;
    /* lis r3, 0 */ // 0x8079F018
    /* li r4, 0xeb */ // 0x8079F01C
    r3 = *(0 + r3); // lwz @ 0x8079F020
    /* li r5, -1 */ // 0x8079F024
    r12 = *(0 + r3); // lwz @ 0x8079F028
    r12 = *(0x20 + r12); // lwz @ 0x8079F02C
    /* mtctr r12 */ // 0x8079F030
    /* bctrl  */ // 0x8079F034
    /* b 0x8079f068 */ // 0x8079F038
    /* lis r3, 0 */ // 0x8079F03C
    /* li r4, 0xec */ // 0x8079F040
    r3 = *(0 + r3); // lwz @ 0x8079F044
    /* li r5, -1 */ // 0x8079F048
    r12 = *(0 + r3); // lwz @ 0x8079F04C
    r12 = *(0x20 + r12); // lwz @ 0x8079F050
    /* mtctr r12 */ // 0x8079F054
    /* bctrl  */ // 0x8079F058
    /* b 0x8079f068 */ // 0x8079F05C
    if (counter-- != 0) goto 0x0x8079ef08;
    r0 = *(0x18 + r1); // lhz @ 0x8079F068
    *(0x34 + r31) = r0; // sth @ 0x8079F06C
    r0 = *(0x1a + r1); // lbz @ 0x8079F070
    *(0x36 + r31) = r0; // stb @ 0x8079F074
    r0 = *(0x1c + r1); // lhz @ 0x8079F078
    *(0x38 + r31) = r0; // sth @ 0x8079F07C
    r0 = *(0x1e + r1); // lbz @ 0x8079F080
    *(0x3a + r31) = r0; // stb @ 0x8079F084
    /* b 0x8079f0bc */ // 0x8079F088
    /* lis r3, 0 */ // 0x8079F08C
    r0 = *(0x3f + r31); // lbz @ 0x8079F090
    r3 = *(0 + r3); // lwz @ 0x8079F094
    /* slwi r0, r0, 2 */ // 0x8079F098
    r3 = *(0xc + r3); // lwz @ 0x8079F09C
    /* lwzx r3, r3, r0 */ // 0x8079F0A0
    r0 = *(0x38 + r3); // lwz @ 0x8079F0A4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8079F0A8
    if (==) goto 0x0x8079f0bc;
    r3 = r31;
    /* li r4, 7 */ // 0x8079F0B4
    FUN_8079E0C0(r3, r4); // bl 0x8079E0C0
    r0 = *(0x44 + r1); // lwz @ 0x8079F0BC
    r31 = *(0x3c + r1); // lwz @ 0x8079F0C0
    r30 = *(0x38 + r1); // lwz @ 0x8079F0C4
    r29 = *(0x34 + r1); // lwz @ 0x8079F0C8
}