/* Function at 0x806B1BB0, size=1400 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r14 */
/* Calls: 14 function(s) */

int FUN_806B1BB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r14 */
    /* stmw r14, 0x28(r1) */ // 0x806B1BBC
    r15 = r3;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x806B1BCC
    r3 = *(0 + r3); // lwz @ 0x806B1BD0
    FUN_806E97D8(r3, r3); // bl 0x806E97D8
    /* lis r3, 0 */ // 0x806B1BD8
    r3 = *(0 + r3); // lwz @ 0x806B1BDC
    r3 = *(0x98 + r3); // lwz @ 0x806B1BE0
    r0 = *(0x2d0 + r3); // lwz @ 0x806B1BE4
    if (<=) goto 0x0x806b1c00;
    /* lis r3, 0 */ // 0x806B1BF0
    r3 = *(0 + r3); // lwz @ 0x806B1BF4
    FUN_805C123C(r3); // bl 0x805C123C
    /* b 0x806b1c0c */ // 0x806B1BFC
    /* lis r3, 0 */ // 0x806B1C00
    r3 = *(0 + r3); // lwz @ 0x806B1C04
    FUN_805BD9AC(r3); // bl 0x805BD9AC
    /* lis r16, 0 */ // 0x806B1C0C
    r3 = *(0 + r16); // lwz @ 0x806B1C10
    FUN_806EC5D4(r3); // bl 0x806EC5D4
    /* lis r14, 0 */ // 0x806B1C18
    /* li r0, 0 */ // 0x806B1C1C
    r4 = *(0 + r14); // lwz @ 0x806B1C20
    *(0x1784 + r4) = r3; // stw @ 0x806B1C24
    r3 = *(0 + r14); // lwz @ 0x806B1C28
    *(0x1764 + r3) = r0; // stw @ 0x806B1C2C
    r3 = *(0 + r16); // lwz @ 0x806B1C30
    FUN_806EC5B4(); // bl 0x806EC5B4
    r5 = *(0 + r14); // lwz @ 0x806B1C38
    /* lis r4, 0 */ // 0x806B1C3C
    *(0x1758 + r5) = r3; // stw @ 0x806B1C40
    r3 = *(0 + r4); // lwz @ 0x806B1C44
    r3 = *(0 + r3); // lwz @ 0x806B1C48
    r3 = *(0 + r3); // lwz @ 0x806B1C4C
    r0 = r3 + -0x58; // 0x806B1C50
    if (>) goto 0x0x806b1d10;
    /* lis r3, 0 */ // 0x806B1C5C
    /* slwi r0, r0, 2 */ // 0x806B1C60
    r3 = r3 + 0; // 0x806B1C64
    /* lwzx r3, r3, r0 */ // 0x806B1C68
    /* mtctr r3 */ // 0x806B1C6C
    /* bctr  */ // 0x806B1C70
    r3 = *(0 + r14); // lwz @ 0x806B1C74
    /* li r0, 8 */ // 0x806B1C78
    *(0x1760 + r3) = r0; // stw @ 0x806B1C7C
    r3 = *(0 + r14); // lwz @ 0x806B1C80
    r0 = *(0x1780 + r3); // lwz @ 0x806B1C84
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1C8C
    /* b 0x806b1d10 */ // 0x806B1C90
    r3 = *(0 + r14); // lwz @ 0x806B1C94
    /* li r0, 7 */ // 0x806B1C98
    *(0x1760 + r3) = r0; // stw @ 0x806B1C9C
    r3 = *(0 + r14); // lwz @ 0x806B1CA0
    r0 = *(0x1780 + r3); // lwz @ 0x806B1CA4
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1CAC
    /* b 0x806b1d10 */ // 0x806B1CB0
    r3 = *(0 + r14); // lwz @ 0x806B1CB4
    /* li r0, 7 */ // 0x806B1CB8
    *(0x1760 + r3) = r0; // stw @ 0x806B1CBC
    r3 = *(0 + r14); // lwz @ 0x806B1CC0
    r0 = *(0x1780 + r3); // lwz @ 0x806B1CC4
    r0 = r0 | 2; // 0x806B1CC8
    *(0x1780 + r3) = r0; // stw @ 0x806B1CCC
    /* b 0x806b1d10 */ // 0x806B1CD0
    r3 = *(0 + r14); // lwz @ 0x806B1CD4
    /* li r0, 9 */ // 0x806B1CD8
    *(0x1760 + r3) = r0; // stw @ 0x806B1CDC
    r3 = *(0 + r14); // lwz @ 0x806B1CE0
    r0 = *(0x1780 + r3); // lwz @ 0x806B1CE4
    r0 = r0 | 2; // 0x806B1CE8
    *(0x1780 + r3) = r0; // stw @ 0x806B1CEC
    /* b 0x806b1d10 */ // 0x806B1CF0
    r3 = *(0 + r14); // lwz @ 0x806B1CF4
    /* li r0, 0xa */ // 0x806B1CF8
    *(0x1760 + r3) = r0; // stw @ 0x806B1CFC
    r3 = *(0 + r14); // lwz @ 0x806B1D00
    r0 = *(0x1780 + r3); // lwz @ 0x806B1D04
    r0 = r0 | 2; // 0x806B1D08
    *(0x1780 + r3) = r0; // stw @ 0x806B1D0C
    /* lis r5, 0 */ // 0x806B1D10
    r3 = *(0 + r5); // lwz @ 0x806B1D14
    r3 = *(0 + r3); // lwz @ 0x806B1D18
    r4 = *(0 + r3); // lwz @ 0x806B1D1C
    r0 = r4 + -0x58; // 0x806B1D20
    if (>) goto 0x0x806b1ed8;
    /* lis r3, 0 */ // 0x806B1D2C
    /* slwi r0, r0, 2 */ // 0x806B1D30
    r3 = r3 + 0; // 0x806B1D34
    /* lwzx r3, r3, r0 */ // 0x806B1D38
    /* mtctr r3 */ // 0x806B1D3C
    /* bctr  */ // 0x806B1D40
    if (<) goto 0x0x806b1d54;
    if (<=) goto 0x0x806b1d74;
    if (<) goto 0x0x806b1d64;
    if (<=) goto 0x0x806b1d74;
    if (==) goto 0x0x806b1d74;
    if (!=) goto 0x0x806b1d7c;
    r0 = *(0x288 + r15); // lwz @ 0x806B1D74
    /* b 0x806b1d80 */ // 0x806B1D78
    /* li r0, 0 */ // 0x806B1D7C
    if (==) goto 0x0x806b1d9c;
    if (==) goto 0x0x806b1dc0;
    if (==) goto 0x0x806b1de4;
    /* b 0x806b1ed8 */ // 0x806B1D98
    /* lis r4, 0 */ // 0x806B1D9C
    /* li r0, 1 */ // 0x806B1DA0
    r3 = *(0 + r4); // lwz @ 0x806B1DA4
    *(0x175c + r3) = r0; // stw @ 0x806B1DA8
    r3 = *(0 + r4); // lwz @ 0x806B1DAC
    r0 = *(0x1780 + r3); // lwz @ 0x806B1DB0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1DB8
    /* b 0x806b1ed8 */ // 0x806B1DBC
    /* lis r4, 0 */ // 0x806B1DC0
    /* li r0, 2 */ // 0x806B1DC4
    r3 = *(0 + r4); // lwz @ 0x806B1DC8
    *(0x175c + r3) = r0; // stw @ 0x806B1DCC
    r3 = *(0 + r4); // lwz @ 0x806B1DD0
    r0 = *(0x1780 + r3); // lwz @ 0x806B1DD4
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1DDC
    /* b 0x806b1ed8 */ // 0x806B1DE0
    /* lis r4, 0 */ // 0x806B1DE4
    /* li r0, 2 */ // 0x806B1DE8
    r3 = *(0 + r4); // lwz @ 0x806B1DEC
    *(0x175c + r3) = r0; // stw @ 0x806B1DF0
    r3 = *(0 + r4); // lwz @ 0x806B1DF4
    r0 = *(0x1780 + r3); // lwz @ 0x806B1DF8
    r0 = r0 | 1; // 0x806B1DFC
    *(0x1780 + r3) = r0; // stw @ 0x806B1E00
    /* b 0x806b1ed8 */ // 0x806B1E04
    /* lis r4, 0 */ // 0x806B1E08
    /* li r0, 0 */ // 0x806B1E0C
    r3 = *(0 + r4); // lwz @ 0x806B1E10
    *(0x175c + r3) = r0; // stw @ 0x806B1E14
    r3 = *(0 + r4); // lwz @ 0x806B1E18
    r0 = *(0x1780 + r3); // lwz @ 0x806B1E1C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1E24
    r3 = *(0 + r5); // lwz @ 0x806B1E28
    r3 = *(0 + r3); // lwz @ 0x806B1E2C
    r0 = *(0 + r3); // lwz @ 0x806B1E30
    if (<) goto 0x0x806b1e44;
    if (<=) goto 0x0x806b1e64;
    if (<) goto 0x0x806b1e54;
    if (<=) goto 0x0x806b1e64;
    if (==) goto 0x0x806b1e64;
    if (!=) goto 0x0x806b1e6c;
    r0 = *(0x28c + r15); // lwz @ 0x806B1E64
    /* b 0x806b1e70 */ // 0x806B1E68
    /* li r0, 2 */ // 0x806B1E6C
    /* lis r3, 0 */ // 0x806B1E70
    r3 = *(0 + r3); // lwz @ 0x806B1E74
    *(0x1768 + r3) = r0; // stw @ 0x806B1E78
    /* b 0x806b1ed8 */ // 0x806B1E7C
    /* lis r4, 0 */ // 0x806B1E80
    /* li r5, 0 */ // 0x806B1E84
    r3 = *(0 + r4); // lwz @ 0x806B1E88
    *(0x175c + r3) = r5; // stw @ 0x806B1E8C
    r3 = *(0 + r4); // lwz @ 0x806B1E90
    r0 = *(0x1780 + r3); // lwz @ 0x806B1E94
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806B1E9C
    r3 = *(0 + r4); // lwz @ 0x806B1EA0
    *(0x1768 + r3) = r5; // stw @ 0x806B1EA4
    /* b 0x806b1ed8 */ // 0x806B1EA8
    /* lis r5, 0 */ // 0x806B1EAC
    /* li r4, 0 */ // 0x806B1EB0
    r3 = *(0 + r5); // lwz @ 0x806B1EB4
    /* li r0, 1 */ // 0x806B1EB8
    *(0x175c + r3) = r4; // stw @ 0x806B1EBC
    r4 = *(0 + r5); // lwz @ 0x806B1EC0
    r3 = *(0x1780 + r4); // lwz @ 0x806B1EC4
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r3; // stw @ 0x806B1ECC
    r3 = *(0 + r5); // lwz @ 0x806B1ED0
    *(0x1768 + r3) = r0; // stw @ 0x806B1ED4
    /* li r17, 0 */ // 0x806B1ED8
    /* li r19, 0 */ // 0x806B1EDC
    /* lis r31, 0 */ // 0x806B1EE0
    /* li r23, 0 */ // 0x806B1EE4
    /* lis r24, 0 */ // 0x806B1EE8
    /* lis r22, 0 */ // 0x806B1EEC
    /* li r25, 4 */ // 0x806B1EF0
    /* lis r26, 0 */ // 0x806B1EF4
    /* lis r28, 0 */ // 0x806B1EF8
    /* lis r27, 0 */ // 0x806B1EFC
    /* li r29, 1 */ // 0x806B1F00
    /* li r30, 0xf */ // 0x806B1F04
    /* li r14, 0x1388 */ // 0x806B1F08
    r0 = *(0 + r22); // lwz @ 0x806B1F10
    if (>) goto 0x0x806b1f24;
    r3 = r0 + r17; // 0x806B1F18
    r21 = *(0x2920 + r3); // lbz @ 0x806B1F1C
    /* b 0x806b1f28 */ // 0x806B1F20
    /* li r21, 0xff */ // 0x806B1F24
    if (>=) goto 0x0x806b22dc;
    r3 = *(0 + r26); // lwz @ 0x806B1F30
    r4 = r21;
    /* li r5, 0 */ // 0x806B1F38
    FUN_806EC638(r4, r5); // bl 0x806EC638
    r16 = r3;
    r3 = *(0 + r26); // lwz @ 0x806B1F44
    r4 = r21;
    /* li r5, 0 */ // 0x806B1F4C
    FUN_806EC688(r4, r5); // bl 0x806EC688
    /* li r4, 0 */ // 0x806B1F58
    /* li r0, 0 */ // 0x806B1F5C
    if (>) goto 0x0x806b1f68;
    /* li r0, 1 */ // 0x806B1F64
    if (==) goto 0x0x806b1f8c;
    /* li r0, 0 */ // 0x806B1F74
    if (>) goto 0x0x806b1f80;
    /* li r0, 1 */ // 0x806B1F7C
    if (==) goto 0x0x806b1f8c;
    /* li r4, 1 */ // 0x806B1F88
    if (<=) goto 0x0x806b1fc8;
    /* addic. r0, r17, -1 */ // 0x806B1F94
    r3 = *(0 + r22); // lwz @ 0x806B1F98
    if (<) goto 0x0x806b1fb4;
    if (>=) goto 0x0x806b1fb4;
    r3 = r3 + r17; // 0x806B1FA8
    r0 = *(0x291f + r3); // lbz @ 0x806B1FAC
    /* b 0x806b1fb8 */ // 0x806B1FB0
    /* li r0, 0xff */ // 0x806B1FB4
    if (!=) goto 0x0x806b1fc8;
    /* li r16, 1 */ // 0x806B1FC0
    /* b 0x806b1fcc */ // 0x806B1FC4
    /* li r16, 0 */ // 0x806B1FC8
    r0 = *(0x284 + r15); // lwz @ 0x806B1FCC
    r3 = r15;
    /* li r20, 0 */ // 0x806B1FD4
    /* mtctr r0 */ // 0x806B1FD8
    if (<=) goto 0x0x806b200c;
    r0 = *(0x1f4 + r3); // lbz @ 0x806B1FE4
    if (!=) goto 0x0x806b2000;
    r0 = *(0x1f5 + r3); // lbz @ 0x806B1FF0
    if (!=) goto 0x0x806b2000;
    /* b 0x806b2010 */ // 0x806B1FFC
    r3 = r3 + 0xc; // 0x806B2000
    r20 = r20 + 1; // 0x806B2004
    if (counter-- != 0) goto 0x0x806b1fe4;
    /* li r20, -1 */ // 0x806B200C
    if (==) goto 0x0x806b21a0;
    r3 = *(0 + r22); // lwz @ 0x806B2018
    r0 = *(0x291c + r3); // lwz @ 0x806B201C
    /* mulli r0, r0, 0x58 */ // 0x806B2020
    r3 = r3 + r0; // 0x806B2024
    r0 = *(0x59 + r3); // lbz @ 0x806B2028
    if (!=) goto 0x0x806b2068;
    /* clrlwi r3, r17, 0x18 */ // 0x806B2034
    r0 = *(0 + r24); // lwz @ 0x806B2038
    /* mulli r18, r3, 0xf0 */ // 0x806B203C
    r5 = r16;
    r6 = r17;
    r3 = r0 + r18; // 0x806B2048
    *(0xc28 + r3) = r23; // stw @ 0x806B204C
    r3 = *(0 + r31); // lwz @ 0x806B2050
    r4 = *(0x98 + r3); // lwz @ 0x806B2054
    r3 = r4 + 0x188; // 0x806B2058
    r4 = r4 + 0x238; // 0x806B205C
    FUN_8066E6F0(r3, r4); // bl 0x8066E6F0
    /* b 0x806b2098 */ // 0x806B2064
    /* clrlwi r3, r17, 0x18 */ // 0x806B2068
    r0 = *(0 + r24); // lwz @ 0x806B206C
    /* mulli r18, r3, 0xf0 */ // 0x806B2070
    r4 = r17;
    r5 = r21;
    r6 = r16;
    r3 = r0 + r18; // 0x806B2080
    *(0xc28 + r3) = r25; // stw @ 0x806B2084
    r3 = *(0 + r31); // lwz @ 0x806B2088
    r3 = *(0x98 + r3); // lwz @ 0x806B208C
    r3 = r3 + 0x188; // 0x806B2090
    FUN_8066E074(r3); // bl 0x8066E074
    r3 = *(0 + r26); // lwz @ 0x806B2098
    r4 = r21;
    r5 = r16;
    FUN_806EC638(r3, r4, r5); // bl 0x806EC638
    if (<=) goto 0x0x806b20b4;
    /* li r3, 0 */ // 0x806B20B0
    r0 = *(0 + r24); // lwz @ 0x806B20B4
    r4 = r21;
    r5 = r16;
    r6 = r0 + r18; // 0x806B20C0
    *(0xc24 + r6) = r3; // stw @ 0x806B20C4
    r3 = *(0 + r26); // lwz @ 0x806B20C8
    FUN_806EC688(r4, r5); // bl 0x806EC688
    if (<=) goto 0x0x806b20dc;
    /* li r3, 1 */ // 0x806B20D8
    r0 = *(0 + r24); // lwz @ 0x806B20DC
    r4 = r21;
    r5 = r16;
    r6 = r0 + r18; // 0x806B20E8
    *(0xc20 + r6) = r3; // stw @ 0x806B20EC
    r3 = *(0 + r26); // lwz @ 0x806B20F0
    FUN_806EC728(r4, r5); // bl 0x806EC728
    r6 = *(0 + r24); // lwz @ 0x806B20F8
    r4 = r21;
    r0 = *(0 + r3); // lha @ 0x806B2100
    r5 = r16;
    r6 = r6 + r18; // 0x806B2108
    *(0xcf9 + r6) = r0; // stb @ 0x806B210C
    r0 = *(2 + r3); // lhz @ 0x806B2110
    *(0xcf0 + r6) = r0; // sth @ 0x806B2114
    r3 = *(0 + r26); // lwz @ 0x806B2118
    FUN_806EC770(); // bl 0x806EC770
    r5 = *(0 + r31); // lwz @ 0x806B2120
    /* clrlwi r4, r17, 0x18 */ // 0x806B2124
}