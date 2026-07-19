/* Function at 0x806A185C, size=1088 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r22 */
/* Calls: 28 function(s) */

int FUN_806A185C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -176(r1) */
    /* saved r22 */
    r12 = *(0xc0 + r1); // lwz @ 0x806A1868
    /* stmw r22, 0x88(r1) */ // 0x806A186C
    r26 = r6;
    r11 = *(0xc4 + r1); // lwz @ 0x806A1874
    r25 = r3;
    r6 = *(0xd3 + r1); // lbz @ 0x806A187C
    r22 = r7;
    r0 = *(0xd7 + r1); // lbz @ 0x806A1884
    r31 = r8;
    r29 = *(0xb8 + r1); // lwz @ 0x806A188C
    r27 = r9;
    r30 = *(0xbc + r1); // lwz @ 0x806A1894
    r28 = r10;
    r24 = *(0xcb + r1); // lbz @ 0x806A189C
    r23 = *(0xcf + r1); // lbz @ 0x806A18A0
    *(0x208 + r3) = r4; // stw @ 0x806A18A4
    r4 = r25;
    *(0x204 + r3) = r5; // stw @ 0x806A18AC
    *(0x214 + r3) = r12; // stw @ 0x806A18B0
    *(0x200 + r3) = r11; // stw @ 0x806A18B4
    *(0x210 + r3) = r6; // stb @ 0x806A18B8
    *(0x212 + r3) = r0; // stb @ 0x806A18BC
    FUN_8064E324(r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806A18C8
    r4 = r26;
    r5 = r22;
    r6 = r31;
    r7 = r7 + 0; // 0x806A18DC
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    r5 = r24;
    r6 = r23;
    r3 = r25 + 0x218; // 0x806A18EC
    /* li r4, 2 */ // 0x806A18F0
    FUN_80669214(r5, r6, r3, r4); // bl 0x80669214
    /* li r4, -1 */ // 0x806A18FC
    FUN_8064E32C(r3, r4, r3, r4); // bl 0x8064E32C
    r3 = r25;
    /* li r4, 3 */ // 0x806A1908
    FUN_8069FEE8(r3, r4, r3, r4); // bl 0x8069FEE8
    r31 = r25 + 0x2b4; // 0x806A1910
    /* li r24, 0 */ // 0x806A1914
    r23 = r31;
    r3 = r25;
    r4 = r24;
    r5 = r23;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r24 = r24 + 1; // 0x806A192C
    r23 = r23 + 0x188; // 0x806A1930
    if (<) goto 0x0x806a191c;
    r3 = *(0x214 + r25); // lwz @ 0x806A193C
    r12 = *(0 + r3); // lwz @ 0x806A1940
    r12 = *(8 + r12); // lwz @ 0x806A1944
    /* mtctr r12 */ // 0x806A1948
    /* bctrl  */ // 0x806A194C
    r5 = r3;
    r3 = r25;
    /* li r4, 2 */ // 0x806A1958
    FUN_8069FEF8(r5, r3, r4); // bl 0x8069FEF8
    r0 = *(0x24c + r25); // lwz @ 0x806A1960
    /* li r23, 1 */ // 0x806A1964
    *(0x438 + r25) = r0; // stw @ 0x806A1968
    r4 = r25 + 0x2b4; // 0x806A1970
    *(0x428 + r25) = r23; // stb @ 0x806A1974
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r24, 0 */ // 0x806A197C
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r24 + 0; // 0x806A1990
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* lis r27, 0 */ // 0x806A1998
    r3 = r25 + 0x35c; // 0x806A199C
    r27 = r27 + 0; // 0x806A19A0
    r4 = r27 + 0xe; // 0x806A19A4
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x42c + r25) = r3; // stw @ 0x806A19AC
    r4 = r27 + 0x1c; // 0x806A19B0
    r3 = r25 + 0x35c; // 0x806A19B4
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x430 + r25) = r3; // stw @ 0x806A19BC
    r4 = r27 + 0x27; // 0x806A19C0
    r3 = r25 + 0x35c; // 0x806A19C4
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x434 + r25) = r3; // stw @ 0x806A19CC
    /* li r4, -1 */ // 0x806A19D4
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r4 = *(0x24c + r25); // lwz @ 0x806A19DC
    *(0x5b0 + r25) = r23; // stb @ 0x806A19E4
    r0 = r4 + 0x28; // 0x806A19E8
    r4 = r25 + 0x43c; // 0x806A19EC
    *(0x5c0 + r25) = r0; // stw @ 0x806A19F0
    FUN_8064E324(r3, r4); // bl 0x8064E324
    r4 = r26;
    r5 = r29;
    r6 = r30;
    r7 = r24 + 0; // 0x806A1A08
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    r4 = r27 + 0x37; // 0x806A1A10
    r3 = r25 + 0x4e4; // 0x806A1A14
    FUN_80665D1C(r3, r7, r4, r3); // bl 0x80665D1C
    *(0x5b4 + r25) = r3; // stw @ 0x806A1A1C
    r4 = r27 + 0x45; // 0x806A1A20
    r3 = r25 + 0x4e4; // 0x806A1A24
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x5b8 + r25) = r3; // stw @ 0x806A1A2C
    r4 = r27 + 0x50; // 0x806A1A30
    r3 = r25 + 0x4e4; // 0x806A1A34
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x5bc + r25) = r3; // stw @ 0x806A1A3C
    /* li r4, -1 */ // 0x806A1A44
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r4 = r27 + 0x60; // 0x806A1A4C
    r3 = r25 + 0xa8; // 0x806A1A50
    FUN_80665D1C(r3, r4, r4, r3); // bl 0x80665D1C
    r24 = r3;
    if (!=) goto 0x0x806a1a6c;
    /* li r24, 0 */ // 0x806A1A64
    /* b 0x806a1abc */ // 0x806A1A68
    /* lis r23, 0 */ // 0x806A1A6C
    r23 = r23 + 0; // 0x806A1A70
    if (==) goto 0x0x806a1ab8;
    r12 = *(0 + r3); // lwz @ 0x806A1A78
    r12 = *(0xc + r12); // lwz @ 0x806A1A7C
    /* mtctr r12 */ // 0x806A1A80
    /* bctrl  */ // 0x806A1A84
    /* b 0x806a1aa0 */ // 0x806A1A88
    if (!=) goto 0x0x806a1a9c;
    /* li r0, 1 */ // 0x806A1A94
    /* b 0x806a1aac */ // 0x806A1A98
    r3 = *(0 + r3); // lwz @ 0x806A1A9C
    if (!=) goto 0x0x806a1a8c;
    /* li r0, 0 */ // 0x806A1AA8
    if (==) goto 0x0x806a1ab8;
    /* b 0x806a1abc */ // 0x806A1AB4
    /* li r24, 0 */ // 0x806A1AB8
    r3 = r25 + 0x174; // 0x806A1ABC
    r0 = r25 + 0x188; // 0x806A1AC0
    /* lis r23, 0 */ // 0x806A1AC4
    *(0x224 + r25) = r24; // stw @ 0x806A1AC8
    r27 = r25 + 0x19c; // 0x806A1ACC
    r26 = r25 + 0x1b0; // 0x806A1AD0
    *(0x23c + r25) = r3; // stw @ 0x806A1AD4
    r23 = r23 + 0; // 0x806A1AD8
    /* li r30, 0 */ // 0x806A1ADC
    /* li r29, 0 */ // 0x806A1AE0
    *(0x240 + r25) = r0; // stw @ 0x806A1AE4
    /* lis r28, 0 */ // 0x806A1AE8
    r3 = r31 + 0xa8; // 0x806A1AEC
    r4 = r28 + 0; // 0x806A1AF0
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    r24 = r3;
    if (!=) goto 0x0x806a1b0c;
    /* li r24, 0 */ // 0x806A1B04
    /* b 0x806a1b54 */ // 0x806A1B08
    if (==) goto 0x0x806a1b50;
    r12 = *(0 + r3); // lwz @ 0x806A1B10
    r12 = *(0xc + r12); // lwz @ 0x806A1B14
    /* mtctr r12 */ // 0x806A1B18
    /* bctrl  */ // 0x806A1B1C
    /* b 0x806a1b38 */ // 0x806A1B20
    if (!=) goto 0x0x806a1b34;
    /* li r0, 1 */ // 0x806A1B2C
    /* b 0x806a1b44 */ // 0x806A1B30
    r3 = *(0 + r3); // lwz @ 0x806A1B34
    if (!=) goto 0x0x806a1b24;
    /* li r0, 0 */ // 0x806A1B40
    if (==) goto 0x0x806a1b50;
    /* b 0x806a1b54 */ // 0x806A1B4C
    /* li r24, 0 */ // 0x806A1B50
    r3 = *(0x24c + r25); // lwz @ 0x806A1B54
    r30 = r30 + 1; // 0x806A1B58
    r31 = r31 + 0x188; // 0x806A1B60
    /* stwx r24, r3, r29 */ // 0x806A1B64
    r0 = *(0x24c + r25); // lwz @ 0x806A1B68
    r3 = r0 + r29; // 0x806A1B6C
    *(0x18 + r3) = r27; // stw @ 0x806A1B70
    r0 = *(0x24c + r25); // lwz @ 0x806A1B74
    r3 = r0 + r29; // 0x806A1B78
    r29 = r29 + 0x28; // 0x806A1B7C
    *(0x1c + r3) = r26; // stw @ 0x806A1B80
    if (<) goto 0x0x806a1aec;
    r3 = r25 + 0x218; // 0x806A1B88
    r5 = r25 + 0x1c4; // 0x806A1B8C
    /* li r4, 0 */ // 0x806A1B90
    /* li r6, 0 */ // 0x806A1B94
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = r25 + 0x218; // 0x806A1B9C
    r5 = r25 + 0x1d8; // 0x806A1BA0
    /* li r4, 6 */ // 0x806A1BA4
    /* li r6, 1 */ // 0x806A1BA8
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = r25 + 0x218; // 0x806A1BB0
    r5 = r25 + 0x1ec; // 0x806A1BB4
    /* li r4, 5 */ // 0x806A1BB8
    /* li r6, 1 */ // 0x806A1BBC
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r4 = *(0x200 + r25); // lwz @ 0x806A1BC4
    r3 = r25 + 0x218; // 0x806A1BC8
    FUN_806692E0(r4, r6, r3); // bl 0x806692E0
    r3 = *(0x64 + r25); // lwz @ 0x806A1BD0
    r3 = *(0xc + r3); // lwz @ 0x806A1BD4
    r24 = *(0x38 + r3); // lwz @ 0x806A1BD8
    if (!=) goto 0x0x806a1bec;
    /* li r24, 0 */ // 0x806A1BE4
    /* b 0x806a1c40 */ // 0x806A1BE8
    /* lis r23, 0 */ // 0x806A1BEC
    r23 = r23 + 0; // 0x806A1BF0
    if (==) goto 0x0x806a1c3c;
    r12 = *(0 + r24); // lwz @ 0x806A1BF8
    r3 = r24;
    r12 = *(8 + r12); // lwz @ 0x806A1C00
    /* mtctr r12 */ // 0x806A1C04
    /* bctrl  */ // 0x806A1C08
    /* b 0x806a1c24 */ // 0x806A1C0C
    if (!=) goto 0x0x806a1c20;
    /* li r0, 1 */ // 0x806A1C18
    /* b 0x806a1c30 */ // 0x806A1C1C
    r3 = *(0 + r3); // lwz @ 0x806A1C20
    if (!=) goto 0x0x806a1c10;
    /* li r0, 0 */ // 0x806A1C2C
    if (==) goto 0x0x806a1c3c;
    /* b 0x806a1c40 */ // 0x806A1C38
    /* li r24, 0 */ // 0x806A1C3C
    r3 = r24;
    r4 = r25 + 0x218; // 0x806A1C44
    FUN_8066A310(r3, r4); // bl 0x8066A310
    /* lis r26, 0 */ // 0x806A1C4C
    r3 = r25 + 0xa8; // 0x806A1C50
    r26 = r26 + 0; // 0x806A1C54
    r4 = r26 + 0x66; // 0x806A1C58
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x2ac + r25) = r3; // stw @ 0x806A1C60
    r4 = r26 + 0x74; // 0x806A1C64
    r3 = r25 + 0xa8; // 0x806A1C68
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x2b0 + r25) = r3; // stw @ 0x806A1C70
    r3 = r25;
    r12 = *(0 + r25); // lwz @ 0x806A1C78
    r12 = *(0x3c + r12); // lwz @ 0x806A1C7C
    /* mtctr r12 */ // 0x806A1C80
    /* bctrl  */ // 0x806A1C84
    r0 = *(0xb4 + r1); // lwz @ 0x806A1C8C
    return;
}