/* Function at 0x8064FBD0, size=1652 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 20 function(s) */

int FUN_8064FBD0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -448(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x1b4 + r1) = r29; // stw @ 0x8064FBE8
    r0 = *(8 + r3); // lwz @ 0x8064FBEC
    if (!=) goto 0x0x8065022c;
    r0 = *(0x54 + r3); // lwz @ 0x8064FBF8
    if (==) goto 0x0x8064fc20;
    if (==) goto 0x0x8064fcac;
    if (==) goto 0x0x806500ac;
    if (==) goto 0x0x80650138;
    /* b 0x8065022c */ // 0x8064FC1C
    /* lis r3, 0 */ // 0x8064FC20
    r3 = *(0 + r3); // lwz @ 0x8064FC24
    r3 = *(0 + r3); // lwz @ 0x8064FC28
    r29 = *(0x2a4 + r3); // lwz @ 0x8064FC2C
    if (!=) goto 0x0x8064fc40;
    /* li r29, 0 */ // 0x8064FC38
    /* b 0x8064fc94 */ // 0x8064FC3C
    /* lis r31, 0 */ // 0x8064FC40
    r31 = r31 + 0; // 0x8064FC44
    if (==) goto 0x0x8064fc90;
    r12 = *(0 + r29); // lwz @ 0x8064FC4C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8064FC54
    /* mtctr r12 */ // 0x8064FC58
    /* bctrl  */ // 0x8064FC5C
    /* b 0x8064fc78 */ // 0x8064FC60
    if (!=) goto 0x0x8064fc74;
    /* li r0, 1 */ // 0x8064FC6C
    /* b 0x8064fc84 */ // 0x8064FC70
    r3 = *(0 + r3); // lwz @ 0x8064FC74
    if (!=) goto 0x0x8064fc64;
    /* li r0, 0 */ // 0x8064FC80
    if (==) goto 0x0x8064fc90;
    /* b 0x8064fc94 */ // 0x8064FC8C
    /* li r29, 0 */ // 0x8064FC90
    r0 = *(0x94 + r29); // lwz @ 0x8064FC94
    if (!=) goto 0x0x8065022c;
    r3 = r30;
    FUN_80650918(r3); // bl 0x80650918
    /* b 0x8065022c */ // 0x8064FCA8
    /* lis r31, 0 */ // 0x8064FCAC
    r3 = *(0 + r31); // lwz @ 0x8064FCB0
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x8065022c;
    r3 = *(0 + r31); // lwz @ 0x8064FCC0
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x80650024;
    r0 = *(0x70 + r30); // lbz @ 0x8064FCD0
    if (==) goto 0x0x8064ff7c;
    r4 = r30 + 0x74; // 0x8064FCE0
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    /* lis r3, 0 */ // 0x8064FCE8
    r3 = *(0 + r3); // lwz @ 0x8064FCEC
    r3 = *(0 + r3); // lwz @ 0x8064FCF0
    r29 = *(0x2a4 + r3); // lwz @ 0x8064FCF4
    if (!=) goto 0x0x8064fd08;
    /* li r29, 0 */ // 0x8064FD00
    /* b 0x8064fd5c */ // 0x8064FD04
    /* lis r31, 0 */ // 0x8064FD08
    r31 = r31 + 0; // 0x8064FD0C
    if (==) goto 0x0x8064fd58;
    r12 = *(0 + r29); // lwz @ 0x8064FD14
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8064FD1C
    /* mtctr r12 */ // 0x8064FD20
    /* bctrl  */ // 0x8064FD24
    /* b 0x8064fd40 */ // 0x8064FD28
    if (!=) goto 0x0x8064fd3c;
    /* li r0, 1 */ // 0x8064FD34
    /* b 0x8064fd4c */ // 0x8064FD38
    r3 = *(0 + r3); // lwz @ 0x8064FD3C
    if (!=) goto 0x0x8064fd2c;
    /* li r0, 0 */ // 0x8064FD48
    if (==) goto 0x0x8064fd58;
    /* b 0x8064fd5c */ // 0x8064FD54
    /* li r29, 0 */ // 0x8064FD58
    r3 = r29;
    r4 = r30 + 0x74; // 0x8064FD60
    /* li r5, 1 */ // 0x8064FD64
    FUN_8065FB58(r3, r4, r5); // bl 0x8065FB58
    /* li r0, 2 */ // 0x8064FD6C
    *(0x54 + r30) = r0; // stw @ 0x8064FD70
    /* lis r3, 0 */ // 0x8064FD74
    r4 = *(0 + r3); // lwz @ 0x8064FD78
    r3 = *(0x194 + r1); // lwz @ 0x8064FD7C
    r5 = *(0 + r4); // lwz @ 0x8064FD80
    r4 = r3 + -7; // 0x8064FD84
    r3 = *(0x404 + r5); // lwz @ 0x8064FD88
    FUN_80659814(r4); // bl 0x80659814
    /* lis r4, 0 */ // 0x8064FD90
    /* li r0, 0 */ // 0x8064FD94
    r4 = r4 + 0; // 0x8064FD98
    *(0xb8 + r1) = r4; // stw @ 0x8064FD9C
    r5 = *(0x188 + r1); // lwz @ 0x8064FDA0
    r31 = r3;
    *(0xbc + r1) = r0; // sth @ 0x8064FDA8
    *(0xbe + r1) = r0; // stb @ 0x8064FDB0
    *(0xc0 + r1) = r0; // sth @ 0x8064FDB4
    *(0xc2 + r1) = r0; // stb @ 0x8064FDB8
    FUN_805A93AC(r4); // bl 0x805A93AC
    r0 = *(0xc2 + r1); // lbz @ 0x8064FDC0
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x8064fe48;
    r0 = *(0x17e + r1); // lbz @ 0x8064FDCC
    if (!=) goto 0x0x8064fde0;
    /* li r0, 0 */ // 0x8064FDD8
    /* b 0x8064fe40 */ // 0x8064FDDC
    if (!=) goto 0x0x8064fdec;
    /* li r0, 1 */ // 0x8064FDE4
    /* b 0x8064fe40 */ // 0x8064FDE8
    r0 = *(0xbc + r1); // lhz @ 0x8064FDEC
    r3 = *(0x178 + r1); // lhz @ 0x8064FDF0
    if (>=) goto 0x0x8064fe04;
    /* li r0, 1 */ // 0x8064FDFC
    /* b 0x8064fe40 */ // 0x8064FE00
    if (!=) goto 0x0x8064fe3c;
    r0 = *(0xbe + r1); // lbz @ 0x8064FE08
    r3 = *(0x17a + r1); // lbz @ 0x8064FE0C
    if (>=) goto 0x0x8064fe20;
    /* li r0, 1 */ // 0x8064FE18
    /* b 0x8064fe40 */ // 0x8064FE1C
    if (!=) goto 0x0x8064fe3c;
    r3 = *(0x17c + r1); // lhz @ 0x8064FE24
    r0 = *(0xc0 + r1); // lhz @ 0x8064FE28
    if (>=) goto 0x0x8064fe3c;
    /* li r0, 1 */ // 0x8064FE34
    /* b 0x8064fe40 */ // 0x8064FE38
    /* li r0, 0 */ // 0x8064FE3C
    if (==) goto 0x0x8064fef0;
    /* lis r4, 0 */ // 0x8064FE48
    /* li r0, 9 */ // 0x8064FE4C
    /* li r3, 0 */ // 0x8064FE50
    *(0x58 + r1) = r3; // sth @ 0x8064FE54
    r4 = r4 + 0; // 0x8064FE58
    *(0x54 + r1) = r4; // stw @ 0x8064FE60
    *(0x5a + r1) = r3; // stb @ 0x8064FE68
    *(0x5c + r1) = r3; // sth @ 0x8064FE6C
    *(0x5e + r1) = r3; // stb @ 0x8064FE70
    /* mtctr r0 */ // 0x8064FE74
    r3 = *(4 + r4); // lwz @ 0x8064FE78
    r0 = *(8 + r4); // lwzu @ 0x8064FE7C
    *(4 + r5) = r3; // stw @ 0x8064FE80
    *(8 + r5) = r0; // stwu @ 0x8064FE84
    if (counter-- != 0) goto 0x0x8064fe78;
    r0 = *(4 + r4); // lwz @ 0x8064FE8C
    r3 = r31;
    *(4 + r5) = r0; // stw @ 0x8064FE94
    r5 = *(0x178 + r1); // lhz @ 0x8064FE9C
    r10 = *(0x17a + r1); // lbz @ 0x8064FEA0
    r9 = *(0x17c + r1); // lhz @ 0x8064FEA4
    r8 = *(0x17e + r1); // lbz @ 0x8064FEA8
    r7 = *(0x180 + r1); // lwz @ 0x8064FEAC
    r6 = *(0x184 + r1); // lwz @ 0x8064FEB0
    r0 = *(0x18c + r1); // lwz @ 0x8064FEB4
    *(0x58 + r1) = r5; // sth @ 0x8064FEB8
    r5 = *(0x188 + r1); // lwz @ 0x8064FEBC
    *(0x5a + r1) = r10; // stb @ 0x8064FEC0
    *(0x5c + r1) = r9; // sth @ 0x8064FEC4
    *(0x5e + r1) = r8; // stb @ 0x8064FEC8
    *(0x60 + r1) = r7; // stw @ 0x8064FECC
    *(0x64 + r1) = r6; // stw @ 0x8064FED0
    *(0x68 + r1) = r0; // stw @ 0x8064FED4
    FUN_805A9498(); // bl 0x805A9498
    /* lis r3, 0 */ // 0x8064FEDC
    r3 = *(0 + r3); // lwz @ 0x8064FEE0
    r3 = *(0 + r3); // lwz @ 0x8064FEE4
    r3 = *(0x404 + r3); // lwz @ 0x8064FEE8
    FUN_80659138(r3); // bl 0x80659138
    r4 = *(0x287c + r30); // lwz @ 0x8064FEF0
    /* lis r3, 0 */ // 0x8064FEF4
    r0 = r4 + 1; // 0x8064FEF8
    *(0x287c + r30) = r0; // stw @ 0x8064FEFC
    r5 = *(0 + r3); // lwz @ 0x8064FF00
    r0 = *(0x36 + r5); // lha @ 0x8064FF04
    if (<) goto 0x0x8064ff2c;
    /* lis r3, 1 */ // 0x8064FF10
    /* clrlwi r4, r0, 0x18 */ // 0x8064FF14
    r0 = r3 + -0x6c10; // 0x8064FF18
    r0 = r0 * r4; // 0x8064FF1C
    r3 = r5 + r0; // 0x8064FF20
    r3 = r3 + 0x38; // 0x8064FF24
    /* b 0x8064ff30 */ // 0x8064FF28
    /* li r3, 0 */ // 0x8064FF2C
    /* addis r5, r3, 1 */ // 0x8064FF30
    /* lis r3, 2 */ // 0x8064FF34
    r4 = *(-0x6d58 + r5); // lwz @ 0x8064FF38
    r0 = r3 + -0x7961; // 0x8064FF3C
    if (>=) goto 0x0x8064ff50;
    r0 = r4 + 1; // 0x8064FF48
    *(-0x6d58 + r5) = r0; // stw @ 0x8064FF4C
    /* lis r3, 0 */ // 0x8064FF50
    r3 = *(0 + r3); // lwz @ 0x8064FF54
    r3 = *(0x90 + r3); // lwz @ 0x8064FF58
    FUN_806845FC(r3); // bl 0x806845FC
    /* lis r4, 0 */ // 0x8064FF60
    r4 = r4 + 0; // 0x8064FF68
    /* li r5, 0xc */ // 0x8064FF6C
    /* li r6, 5 */ // 0x8064FF70
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8065022c */ // 0x8064FF78
    r3 = *(0 + r31); // lwz @ 0x8064FF7C
    r4 = r30 + 0x2875; // 0x8064FF80
    FUN_806FB3BC(r6, r4); // bl 0x806FB3BC
    if (==) goto 0x0x8064ff9c;
    /* li r0, 3 */ // 0x8064FF90
    *(0x54 + r30) = r0; // stw @ 0x8064FF94
    /* b 0x8065022c */ // 0x8064FF98
    /* lis r3, 0 */ // 0x8064FF9C
    r3 = *(0 + r3); // lwz @ 0x8064FFA0
    r3 = *(0 + r3); // lwz @ 0x8064FFA4
    r29 = *(0x144 + r3); // lwz @ 0x8064FFA8
    if (!=) goto 0x0x8064ffbc;
    /* li r29, 0 */ // 0x8064FFB4
    /* b 0x80650010 */ // 0x8064FFB8
    /* lis r31, 0 */ // 0x8064FFBC
    r31 = r31 + 0; // 0x8064FFC0
    if (==) goto 0x0x8065000c;
    r12 = *(0 + r29); // lwz @ 0x8064FFC8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8064FFD0
    /* mtctr r12 */ // 0x8064FFD4
    /* bctrl  */ // 0x8064FFD8
    /* b 0x8064fff4 */ // 0x8064FFDC
    if (!=) goto 0x0x8064fff0;
    /* li r0, 1 */ // 0x8064FFE8
    /* b 0x80650000 */ // 0x8064FFEC
    r3 = *(0 + r3); // lwz @ 0x8064FFF0
    if (!=) goto 0x0x8064ffe0;
    /* li r0, 0 */ // 0x8064FFFC
    if (==) goto 0x0x8065000c;
    /* b 0x80650010 */ // 0x80650008
    /* li r29, 0 */ // 0x8065000C
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 4 */ // 0x80650018
    *(0x54 + r30) = r0; // stw @ 0x8065001C
    /* b 0x8065022c */ // 0x80650020
    /* lis r3, 0 */ // 0x80650024
    r3 = *(0 + r3); // lwz @ 0x80650028
    r3 = *(0 + r3); // lwz @ 0x8065002C
    r29 = *(0x144 + r3); // lwz @ 0x80650030
    if (!=) goto 0x0x80650044;
    /* li r29, 0 */ // 0x8065003C
    /* b 0x80650098 */ // 0x80650040
    /* lis r31, 0 */ // 0x80650044
    r31 = r31 + 0; // 0x80650048
    if (==) goto 0x0x80650094;
    r12 = *(0 + r29); // lwz @ 0x80650050
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80650058
    /* mtctr r12 */ // 0x8065005C
    /* bctrl  */ // 0x80650060
    /* b 0x8065007c */ // 0x80650064
    if (!=) goto 0x0x80650078;
    /* li r0, 1 */ // 0x80650070
    /* b 0x80650088 */ // 0x80650074
    r3 = *(0 + r3); // lwz @ 0x80650078
    if (!=) goto 0x0x80650068;
    /* li r0, 0 */ // 0x80650084
    if (==) goto 0x0x80650094;
    /* b 0x80650098 */ // 0x80650090
    /* li r29, 0 */ // 0x80650094
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 4 */ // 0x806500A0
    *(0x54 + r30) = r0; // stw @ 0x806500A4
    /* b 0x8065022c */ // 0x806500A8
    /* lis r3, 0 */ // 0x806500AC
    r3 = *(0 + r3); // lwz @ 0x806500B0
    r3 = *(0 + r3); // lwz @ 0x806500B4
    r29 = *(0x2a4 + r3); // lwz @ 0x806500B8
    if (!=) goto 0x0x806500cc;
    /* li r29, 0 */ // 0x806500C4
    /* b 0x80650120 */ // 0x806500C8
    /* lis r31, 0 */ // 0x806500CC
    r31 = r31 + 0; // 0x806500D0
    if (==) goto 0x0x8065011c;
    r12 = *(0 + r29); // lwz @ 0x806500D8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806500E0
    /* mtctr r12 */ // 0x806500E4
    /* bctrl  */ // 0x806500E8
    /* b 0x80650104 */ // 0x806500EC
    if (!=) goto 0x0x80650100;
    /* li r0, 1 */ // 0x806500F8
    /* b 0x80650110 */ // 0x806500FC
    r3 = *(0 + r3); // lwz @ 0x80650100
    if (!=) goto 0x0x806500f0;
    /* li r0, 0 */ // 0x8065010C
    if (==) goto 0x0x8065011c;
    /* b 0x80650120 */ // 0x80650118
    /* li r29, 0 */ // 0x8065011C
    r0 = *(0x94 + r29); // lwz @ 0x80650120
    if (!=) goto 0x0x8065022c;
    r3 = r30;
    FUN_80650918(r3); // bl 0x80650918
    /* b 0x8065022c */ // 0x80650134
    /* lis r31, 0 */ // 0x80650138
    r3 = *(0 + r31); // lwz @ 0x8065013C
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x8065022c;
    r3 = *(0 + r31); // lwz @ 0x8065014C
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x80650184;
    /* lis r4, 0 */ // 0x8065015C
    /* lis r3, 0 */ // 0x80650160
    r4 = *(0 + r4); // lwz @ 0x80650164
    r3 = *(0 + r3); // lwz @ 0x80650168
    r5 = *(0x36 + r4); // lha @ 0x8065016C
    r0 = *(0x98 + r3); // lwz @ 0x80650170
    r4 = r30 + r5; // 0x80650174
    r3 = r0 + r5; // 0x80650178
    r0 = *(0x2875 + r4); // lbz @ 0x8065017C
    *(0x4c0 + r3) = r0; // stb @ 0x80650180
    /* lis r3, 0 */ // 0x80650184
    r3 = *(0 + r3); // lwz @ 0x80650188
    FUN_806F58E8(r3); // bl 0x806F58E8
    if (!=) goto 0x0x806501a8;
    /* lis r3, 0 */ // 0x80650198
    r3 = *(0 + r3); // lwz @ 0x8065019C
    r3 = *(0x90 + r3); // lwz @ 0x806501A0
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r3, 0 */ // 0x806501A8
    r3 = *(0 + r3); // lwz @ 0x806501AC
    r3 = *(0 + r3); // lwz @ 0x806501B0
    r29 = *(0x144 + r3); // lwz @ 0x806501B4
    if (!=) goto 0x0x806501c8;
    /* li r29, 0 */ // 0x806501C0
    /* b 0x8065021c */ // 0x806501C4
    /* lis r31, 0 */ // 0x806501C8
    r31 = r31 + 0; // 0x806501CC
    if (==) goto 0x0x80650218;
    r12 = *(0 + r29); // lwz @ 0x806501D4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806501DC
    /* mtctr r12 */ // 0x806501E0
    /* bctrl  */ // 0x806501E4
    /* b 0x80650200 */ // 0x806501E8
    if (!=) goto 0x0x806501fc;
    /* li r0, 1 */ // 0x806501F4
    /* b 0x8065020c */ // 0x806501F8
    r3 = *(0 + r3); // lwz @ 0x806501FC
    if (!=) goto 0x0x806501ec;
    /* li r0, 0 */ // 0x80650208
    if (==) goto 0x0x80650218;
    /* b 0x8065021c */ // 0x80650214
    /* li r29, 0 */ // 0x80650218
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 4 */ // 0x80650224
    *(0x54 + r30) = r0; // stw @ 0x80650228
    r0 = *(0x1c4 + r1); // lwz @ 0x8065022C
    r31 = *(0x1bc + r1); // lwz @ 0x80650230
    r30 = *(0x1b8 + r1); // lwz @ 0x80650234
    r29 = *(0x1b4 + r1); // lwz @ 0x80650238
}