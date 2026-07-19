/* Function at 0x806B98AC, size=1344 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r25 */
/* Calls: 31 function(s) */

int FUN_806B98AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -448(r1) */
    /* saved r25 */
    /* li r4, 1 */ // 0x806B98B4
    /* li r5, 0 */ // 0x806B98B8
    *(0x1c4 + r1) = r0; // stw @ 0x806B98BC
    /* stmw r25, 0x1a4(r1) */ // 0x806B98C0
    /* lis r29, 0 */ // 0x806B98C4
    r27 = r3;
    r29 = r29 + 0; // 0x806B98CC
    r12 = *(0x58 + r3); // lwz @ 0x806B98D0
    r12 = *(0x10 + r12); // lwz @ 0x806B98D4
    /* mtctr r12 */ // 0x806B98D8
    r3 = r3 + 0x58; // 0x806B98DC
    /* bctrl  */ // 0x806B98E0
    r3 = r27;
    r4 = r27 + 0x58; // 0x806B98E8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r27 + 0x58; // 0x806B98F0
    /* li r4, 0 */ // 0x806B98F4
    FUN_8066821C(r3, r4, r3, r4); // bl 0x8066821C
    /* lis r3, 0 */ // 0x806B98FC
    r3 = *(0 + r3); // lwz @ 0x806B9900
    r3 = *(0 + r3); // lwz @ 0x806B9904
    r0 = *(0 + r3); // lwz @ 0x806B9908
    if (==) goto 0x0x806b9930;
    if (==) goto 0x0x806b9930;
    if (==) goto 0x0x806b9994;
    if (==) goto 0x0x806b9994;
    /* b 0x806b99f4 */ // 0x806B992C
    /* lis r3, 0 */ // 0x806B9930
    r5 = *(0 + r3); // lwz @ 0x806B9934
    r0 = *(0x36 + r5); // lha @ 0x806B9938
    if (<) goto 0x0x806b9960;
    /* lis r3, 1 */ // 0x806B9944
    /* clrlwi r4, r0, 0x18 */ // 0x806B9948
    r0 = r3 + -0x6c10; // 0x806B994C
    r0 = r0 * r4; // 0x806B9950
    r3 = r5 + r0; // 0x806B9954
    r3 = r3 + 0x38; // 0x806B9958
    /* b 0x806b9964 */ // 0x806B995C
    /* li r3, 0 */ // 0x806B9960
    /* addis r3, r3, 1 */ // 0x806B9964
    /* li r4, 0x39 */ // 0x806B9968
    r3 = r3 + -0x7008; // 0x806B996C
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x806b99f4;
    r3 = r27 + 0x58; // 0x806B997C
    r5 = r27 + 0x44; // 0x806B9980
    /* li r4, 2 */ // 0x806B9984
    /* li r6, 0 */ // 0x806B9988
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    /* b 0x806b99f4 */ // 0x806B9990
    /* lis r3, 0 */ // 0x806B9994
    r5 = *(0 + r3); // lwz @ 0x806B9998
    r0 = *(0x36 + r5); // lha @ 0x806B999C
    if (<) goto 0x0x806b99c4;
    /* lis r3, 1 */ // 0x806B99A8
    /* clrlwi r4, r0, 0x18 */ // 0x806B99AC
    r0 = r3 + -0x6c10; // 0x806B99B0
    r0 = r0 * r4; // 0x806B99B4
    r3 = r5 + r0; // 0x806B99B8
    r3 = r3 + 0x38; // 0x806B99BC
    /* b 0x806b99c8 */ // 0x806B99C0
    /* li r3, 0 */ // 0x806B99C4
    /* addis r3, r3, 1 */ // 0x806B99C8
    /* li r4, 0x38 */ // 0x806B99CC
    r3 = r3 + -0x7008; // 0x806B99D0
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x806b99f4;
    r3 = r27 + 0x58; // 0x806B99E0
    r5 = r27 + 0x44; // 0x806B99E4
    /* li r4, 2 */ // 0x806B99E8
    /* li r6, 0 */ // 0x806B99EC
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r27;
    /* li r4, 6 */ // 0x806B99F8
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    /* lis r3, 0 */ // 0x806B9A00
    r3 = *(0 + r3); // lwz @ 0x806B9A04
    r3 = *(0 + r3); // lwz @ 0x806B9A08
    r0 = *(0 + r3); // lwz @ 0x806B9A0C
    if (<) goto 0x0x806b9a20;
    if (<=) goto 0x0x806b9a34;
    if (<) goto 0x0x806b9a50;
    if (<=) goto 0x0x806b9a44;
    /* b 0x806b9a50 */ // 0x806B9A30
    /* lis r3, 0 */ // 0x806B9A34
    r3 = r3 + 0; // 0x806B9A38
    r28 = r3 + 0x18; // 0x806B9A3C
    /* b 0x806b9a50 */ // 0x806B9A40
    /* lis r3, 0 */ // 0x806B9A44
    r3 = r3 + 0; // 0x806B9A48
    r28 = r3 + 0x2c; // 0x806B9A4C
    r3 = r27;
    r5 = r27 + 0x19c; // 0x806B9A54
    /* li r4, 0 */ // 0x806B9A58
    /* li r6, 0 */ // 0x806B9A5C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r30, 0 */ // 0x806B9A64
    r30 = r30 + 0; // 0x806B9A6C
    r4 = r27 + 0x19c; // 0x806B9A70
    r25 = r30 + 0x41; // 0x806B9A74
    FUN_8064E324(r3, r4); // bl 0x8064E324
    r31 = r29 + 0x28; // 0x806B9A7C
    r26 = *(0x28 + r29); // lwz @ 0x806B9A80
    r12 = *(4 + r31); // lwz @ 0x806B9A84
    r5 = r25;
    r11 = *(8 + r31); // lwz @ 0x806B9A8C
    r6 = r28;
    r10 = *(0xc + r31); // lwz @ 0x806B9A94
    r9 = *(0x10 + r31); // lwz @ 0x806B9A9C
    r4 = r30 + 0x56; // 0x806B9AA0
    r8 = *(0x14 + r31); // lwz @ 0x806B9AA4
    r0 = *(0x18 + r31); // lwz @ 0x806B9AAC
    *(0x94 + r1) = r26; // stw @ 0x806B9AB0
    *(0x98 + r1) = r12; // stw @ 0x806B9AB4
    *(0x9c + r1) = r11; // stw @ 0x806B9AB8
    *(0xa0 + r1) = r10; // stw @ 0x806B9ABC
    *(0xa4 + r1) = r9; // stw @ 0x806B9AC0
    *(0xa8 + r1) = r8; // stw @ 0x806B9AC4
    *(0xac + r1) = r0; // stw @ 0x806B9AC8
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9AD4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r27;
    r5 = r27 + 0x310; // 0x806B9AE0
    /* li r4, 1 */ // 0x806B9AE4
    /* li r6, 0 */ // 0x806B9AE8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r25 = r30 + 0x5d; // 0x806B9AF0
    r4 = r27 + 0x310; // 0x806B9AF8
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r26 = *(0x28 + r29); // lwz @ 0x806B9B00
    r5 = r25;
    r12 = *(4 + r31); // lwz @ 0x806B9B08
    r6 = r28;
    r11 = *(8 + r31); // lwz @ 0x806B9B10
    r10 = *(0xc + r31); // lwz @ 0x806B9B18
    r4 = r30 + 0x71; // 0x806B9B1C
    r9 = *(0x10 + r31); // lwz @ 0x806B9B20
    r8 = *(0x14 + r31); // lwz @ 0x806B9B28
    r0 = *(0x18 + r31); // lwz @ 0x806B9B2C
    *(0x78 + r1) = r26; // stw @ 0x806B9B30
    *(0x7c + r1) = r12; // stw @ 0x806B9B34
    *(0x80 + r1) = r11; // stw @ 0x806B9B38
    *(0x84 + r1) = r10; // stw @ 0x806B9B3C
    *(0x88 + r1) = r9; // stw @ 0x806B9B40
    *(0x8c + r1) = r8; // stw @ 0x806B9B44
    *(0x90 + r1) = r0; // stw @ 0x806B9B48
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9B54
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r27;
    r5 = r27 + 0x484; // 0x806B9B60
    /* li r4, 2 */ // 0x806B9B64
    /* li r6, 0 */ // 0x806B9B68
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r25 = r30 + 0x78; // 0x806B9B70
    r4 = r27 + 0x484; // 0x806B9B78
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r26 = *(0x28 + r29); // lwz @ 0x806B9B80
    r5 = r25;
    r12 = *(4 + r31); // lwz @ 0x806B9B88
    r6 = r28;
    r11 = *(8 + r31); // lwz @ 0x806B9B90
    r10 = *(0xc + r31); // lwz @ 0x806B9B98
    r4 = r30 + 0x8a; // 0x806B9B9C
    r9 = *(0x10 + r31); // lwz @ 0x806B9BA0
    r8 = *(0x14 + r31); // lwz @ 0x806B9BA8
    r0 = *(0x18 + r31); // lwz @ 0x806B9BAC
    *(0x5c + r1) = r26; // stw @ 0x806B9BB0
    *(0x60 + r1) = r12; // stw @ 0x806B9BB4
    *(0x64 + r1) = r11; // stw @ 0x806B9BB8
    *(0x68 + r1) = r10; // stw @ 0x806B9BBC
    *(0x6c + r1) = r9; // stw @ 0x806B9BC0
    *(0x70 + r1) = r8; // stw @ 0x806B9BC4
    *(0x74 + r1) = r0; // stw @ 0x806B9BC8
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9BD4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r27;
    r5 = r27 + 0x5f8; // 0x806B9BE0
    /* li r4, 3 */ // 0x806B9BE4
    /* li r6, 0 */ // 0x806B9BE8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r25 = r30 + 0x91; // 0x806B9BF0
    r4 = r27 + 0x5f8; // 0x806B9BF8
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r26 = *(0x28 + r29); // lwz @ 0x806B9C00
    r5 = r25;
    r12 = *(4 + r31); // lwz @ 0x806B9C08
    r6 = r28;
    r11 = *(8 + r31); // lwz @ 0x806B9C10
    r10 = *(0xc + r31); // lwz @ 0x806B9C18
    r4 = r30 + 0xa2; // 0x806B9C1C
    r9 = *(0x10 + r31); // lwz @ 0x806B9C20
    r8 = *(0x14 + r31); // lwz @ 0x806B9C28
    r0 = *(0x18 + r31); // lwz @ 0x806B9C2C
    *(0x40 + r1) = r26; // stw @ 0x806B9C30
    *(0x44 + r1) = r12; // stw @ 0x806B9C34
    *(0x48 + r1) = r11; // stw @ 0x806B9C38
    *(0x4c + r1) = r10; // stw @ 0x806B9C3C
    *(0x50 + r1) = r9; // stw @ 0x806B9C40
    *(0x54 + r1) = r8; // stw @ 0x806B9C44
    *(0x58 + r1) = r0; // stw @ 0x806B9C48
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9C54
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r27;
    r5 = r27 + 0x76c; // 0x806B9C60
    /* li r4, 4 */ // 0x806B9C64
    /* li r6, 0 */ // 0x806B9C68
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r25 = r30 + 0xa9; // 0x806B9C70
    r4 = r27 + 0x76c; // 0x806B9C78
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r26 = *(0x28 + r29); // lwz @ 0x806B9C80
    r5 = r25;
    r12 = *(4 + r31); // lwz @ 0x806B9C88
    r6 = r28;
    r11 = *(8 + r31); // lwz @ 0x806B9C90
    r10 = *(0xc + r31); // lwz @ 0x806B9C98
    r4 = r30 + 0xbe; // 0x806B9C9C
    r9 = *(0x10 + r31); // lwz @ 0x806B9CA0
    r8 = *(0x14 + r31); // lwz @ 0x806B9CA8
    r0 = *(0x18 + r31); // lwz @ 0x806B9CAC
    *(0x24 + r1) = r26; // stw @ 0x806B9CB0
    *(0x28 + r1) = r12; // stw @ 0x806B9CB4
    *(0x2c + r1) = r11; // stw @ 0x806B9CB8
    *(0x30 + r1) = r10; // stw @ 0x806B9CBC
    *(0x34 + r1) = r9; // stw @ 0x806B9CC0
    *(0x38 + r1) = r8; // stw @ 0x806B9CC4
    *(0x3c + r1) = r0; // stw @ 0x806B9CC8
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9CD4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r27;
    r5 = r27 + 0x8e0; // 0x806B9CE0
    /* li r4, 5 */ // 0x806B9CE4
    /* li r6, 0 */ // 0x806B9CE8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r25 = r30 + 0xc5; // 0x806B9CF0
    r4 = r27 + 0x8e0; // 0x806B9CF8
    FUN_8064E324(r6, r3, r4); // bl 0x8064E324
    r26 = *(0x28 + r29); // lwz @ 0x806B9D00
    r5 = r25;
    r12 = *(4 + r31); // lwz @ 0x806B9D08
    r6 = r28;
    r11 = *(8 + r31); // lwz @ 0x806B9D10
    r10 = *(0xc + r31); // lwz @ 0x806B9D18
    r4 = r30 + 0xd9; // 0x806B9D1C
    r9 = *(0x10 + r31); // lwz @ 0x806B9D20
    r8 = *(0x14 + r31); // lwz @ 0x806B9D28
    r0 = *(0x18 + r31); // lwz @ 0x806B9D2C
    *(8 + r1) = r26; // stw @ 0x806B9D30
    *(0xc + r1) = r12; // stw @ 0x806B9D34
    *(0x10 + r1) = r11; // stw @ 0x806B9D38
    *(0x14 + r1) = r10; // stw @ 0x806B9D3C
    *(0x18 + r1) = r9; // stw @ 0x806B9D40
    *(0x1c + r1) = r8; // stw @ 0x806B9D44
    *(0x20 + r1) = r0; // stw @ 0x806B9D48
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B9D54
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    /* lis r3, 0 */ // 0x806B9D5C
    r3 = *(0 + r3); // lwz @ 0x806B9D60
    r3 = *(0 + r3); // lwz @ 0x806B9D64
    r0 = *(0 + r3); // lwz @ 0x806B9D68
    if (<) goto 0x0x806b9d7c;
    if (<=) goto 0x0x806b9d90;
    if (<) goto 0x0x806b9dc4;
    if (<=) goto 0x0x806b9dac;
    /* b 0x806b9dc4 */ // 0x806B9D8C
    r4 = r29 + 0x48; // 0x806B9D90
    /* li r3, 0xb */ // 0x806B9D94
    /* li r0, 0x1892 */ // 0x806B9D98
    *(0xa54 + r27) = r4; // stw @ 0x806B9D9C
    *(0xa58 + r27) = r3; // stw @ 0x806B9DA0
    *(0xa5c + r27) = r0; // stw @ 0x806B9DA4
    /* b 0x806b9dc4 */ // 0x806B9DA8
    r4 = r29 + 0xf8; // 0x806B9DAC
    /* li r3, 0x12 */ // 0x806B9DB0
    /* li r0, 0x1f7c */ // 0x806B9DB4
    *(0xa54 + r27) = r4; // stw @ 0x806B9DB8
    *(0xa58 + r27) = r3; // stw @ 0x806B9DBC
    *(0xa5c + r27) = r0; // stw @ 0x806B9DC0
    /* li r0, 1 */ // 0x806B9DC4
    /* li r3, 0 */ // 0x806B9DC8
    *(0xa60 + r27) = r3; // stw @ 0x806B9DCC
    *(0xa64 + r27) = r0; // stb @ 0x806B9DD0
    *(0xa66 + r27) = r0; // stb @ 0x806B9DD4
    r0 = *(0x1c4 + r1); // lwz @ 0x806B9DDC
    return;
}