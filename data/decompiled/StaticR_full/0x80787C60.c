/* Function at 0x80787C60, size=540 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80787C60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80787C74
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80787C7C
    r29 = r3;
    r0 = *(0x10 + r3); // lbz @ 0x80787C84
    if (==) goto 0x0x80787ca0;
    /* li r0, 0 */ // 0x80787C90
    *(0x10 + r3) = r0; // stb @ 0x80787C94
    /* li r3, 0 */ // 0x80787C98
    /* b 0x80787e60 */ // 0x80787C9C
    r5 = *(0x1c + r3); // lwz @ 0x80787CA0
    if (==) goto 0x0x80787cd8;
    r5 = *(0 + r5); // lwz @ 0x80787CAC
    if (==) goto 0x0x80787cd8;
    if (==) goto 0x0x80787cc4;
    r0 = *(0x90 + r5); // lwz @ 0x80787CBC
    /* b 0x80787cc8 */ // 0x80787CC0
    /* li r0, -1 */ // 0x80787CC4
    if (!=) goto 0x0x80787cd8;
    /* li r3, 0 */ // 0x80787CD0
    /* b 0x80787e60 */ // 0x80787CD4
    /* addis r0, r4, 1 */ // 0x80787CD8
    if (!=) goto 0x0x80787cec;
    /* li r3, 0 */ // 0x80787CE4
    /* b 0x80787e60 */ // 0x80787CE8
    if (!=) goto 0x0x80787d18;
    /* lis r5, 7 */ // 0x80787CF4
    /* lis r4, 0x1b */ // 0x80787CF8
    r0 = r5 + 0x11a8; // 0x80787CFC
    *(0x2c + r3) = r0; // stw @ 0x80787D00
    r0 = r4 + -0x2000; // 0x80787D04
    /* lis r4, 0 */ // 0x80787D08
    *(0x30 + r3) = r0; // stw @ 0x80787D0C
    r3 = *(0 + r4); // lwz @ 0x80787D10
    FUN_808F7D9C(r4); // bl 0x808F7D9C
    r4 = *(0x20 + r29); // lwz @ 0x80787D18
    if (==) goto 0x0x80787da0;
    r3 = *(0 + r4); // lwz @ 0x80787D24
    if (==) goto 0x0x80787d38;
    r0 = *(0x90 + r3); // lwz @ 0x80787D30
    /* b 0x80787d3c */ // 0x80787D34
    /* li r0, -1 */ // 0x80787D38
    if (!=) goto 0x0x80787da0;
    r0 = *(0x24 + r29); // lbz @ 0x80787D44
    if (==) goto 0x0x80787d58;
    /* li r3, 0 */ // 0x80787D50
    /* b 0x80787e60 */ // 0x80787D54
    /* li r0, 0 */ // 0x80787D58
    *(0x1c + r29) = r4; // stw @ 0x80787D5C
    r3 = r29;
    *(0x20 + r29) = r0; // stw @ 0x80787D64
    *(0x26 + r29) = r31; // sth @ 0x80787D68
    FUN_80788420(r3); // bl 0x80788420
    r0 = *(0x26 + r29); // lha @ 0x80787D70
    if (>) goto 0x0x80787d98;
    r3 = *(0x1c + r29); // lwz @ 0x80787D7C
    r3 = *(0 + r3); // lwz @ 0x80787D80
    if (==) goto 0x0x80787d90;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, -1 */ // 0x80787D90
    *(0x26 + r29) = r0; // sth @ 0x80787D94
    r3 = *(0x1c + r29); // lwz @ 0x80787D98
    /* b 0x80787e60 */ // 0x80787D9C
    /* li r0, 2 */ // 0x80787DA0
    r6 = r29;
    /* li r5, 0 */ // 0x80787DA8
    /* li r3, 0 */ // 0x80787DAC
    /* mtctr r0 */ // 0x80787DB0
    r0 = *(0x14 + r6); // lwz @ 0x80787DB4
    if (!=) goto 0x0x80787dd0;
    /* slwi r0, r3, 2 */ // 0x80787DC0
    r3 = r29 + r0; // 0x80787DC4
    r5 = r3 + 0x14; // 0x80787DC8
    /* b 0x80787ddc */ // 0x80787DCC
    r6 = r6 + 4; // 0x80787DD0
    r3 = r3 + 1; // 0x80787DD4
    if (counter-- != 0) goto 0x0x80787db4;
    if (!=) goto 0x0x80787dfc;
    r3 = *(0 + r4); // lwz @ 0x80787DE4
    if (==) goto 0x0x80787df8;
    /* li r4, 0 */ // 0x80787DF0
    FUN_805E3430(r4); // bl 0x805E3430
    r5 = *(0x20 + r29); // lwz @ 0x80787DF8
    r0 = *(0x20 + r29); // lwz @ 0x80787DFC
    *(0x1c + r29) = r5; // stw @ 0x80787E00
    if (!=) goto 0x0x80787e14;
    /* li r0, 0 */ // 0x80787E0C
    *(0x20 + r29) = r0; // stw @ 0x80787E10
    /* extsh. r0, r31 */ // 0x80787E14
    *(0x26 + r29) = r31; // sth @ 0x80787E18
    if (<=) goto 0x0x80787e44;
    /* lis r3, 0 */ // 0x80787E20
    r5 = r30;
    r3 = *(0 + r3); // lwz @ 0x80787E28
    r12 = *(0xf8 + r3); // lwzu @ 0x80787E2C
    r4 = *(0x1c + r29); // lwz @ 0x80787E30
    r12 = *(0x44 + r12); // lwz @ 0x80787E34
    /* mtctr r12 */ // 0x80787E38
    /* bctrl  */ // 0x80787E3C
    /* b 0x80787e5c */ // 0x80787E40
    r4 = *(0x1c + r29); // lwz @ 0x80787E44
    r3 = r29;
    r5 = r30;
    FUN_80788220(r3, r5); // bl 0x80788220
    /* li r0, -1 */ // 0x80787E54
    *(0x26 + r29) = r0; // sth @ 0x80787E58
    r3 = *(0x1c + r29); // lwz @ 0x80787E5C
    r0 = *(0x24 + r1); // lwz @ 0x80787E60
    r31 = *(0x1c + r1); // lwz @ 0x80787E64
    r30 = *(0x18 + r1); // lwz @ 0x80787E68
    r29 = *(0x14 + r1); // lwz @ 0x80787E6C
    return;
}