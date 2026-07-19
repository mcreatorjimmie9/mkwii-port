/* Function at 0x808E9D84, size=748 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 16 function(s) */

int FUN_808E9D84(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808E9D90
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = *(0x240 + r4); // lwz @ 0x808E9DA0
    if (!=) goto 0x0x808e9dbc;
    if (!=) goto 0x0x808e9ec0;
    FUN_808B3CF4(); // bl 0x808B3CF4
    /* b 0x808e9ec0 */ // 0x808E9DB8
    r12 = *(0 + r3); // lwz @ 0x808E9DBC
    r12 = *(0x70 + r12); // lwz @ 0x808E9DC0
    /* mtctr r12 */ // 0x808E9DC4
    /* bctrl  */ // 0x808E9DC8
    r4 = r29;
    /* li r5, 0 */ // 0x808E9DD0
    FUN_8066B6CC(r4, r5); // bl 0x8066B6CC
    r31 = *(0x240 + r28); // lwz @ 0x808E9DD8
    /* lis r3, 0 */ // 0x808E9DDC
    r3 = *(0 + r3); // lwz @ 0x808E9DE0
    /* srwi r4, r31, 0x1f */ // 0x808E9DE4
    /* clrlwi r0, r31, 0x1f */ // 0x808E9DE8
    r0 = r0 ^ r4; // 0x808E9DEC
    r3 = r3 + 0x34; // 0x808E9DF0
    /* subf r30, r4, r0 */ // 0x808E9DF4
    r4 = r4 + r31; // 0x808E9DF8
    /* cntlzw r0, r30 */ // 0x808E9DFC
    r4 = r4 >> 1; // srawi
    /* srwi r5, r0, 5 */ // 0x808E9E04
    FUN_8067F484(); // bl 0x8067F484
    if (!=) goto 0x0x808e9e70;
    /* lis r3, 0 */ // 0x808E9E14
    r5 = *(0 + r3); // lwz @ 0x808E9E18
    r0 = *(0x36 + r5); // lha @ 0x808E9E1C
    if (<) goto 0x0x808e9e44;
    /* lis r3, 1 */ // 0x808E9E28
    /* clrlwi r4, r0, 0x18 */ // 0x808E9E2C
    r0 = r3 + -0x6c10; // 0x808E9E30
    r0 = r0 * r4; // 0x808E9E34
    r3 = r5 + r0; // 0x808E9E38
    r3 = r3 + 0x38; // 0x808E9E3C
    /* b 0x808e9e48 */ // 0x808E9E40
    /* li r3, 0 */ // 0x808E9E44
    /* li r0, 1 */ // 0x808E9E4C
    if (!=) goto 0x0x808e9e58;
    /* li r0, 2 */ // 0x808E9E54
    /* addis r4, r3, 1 */ // 0x808E9E58
    /* lis r3, 0 */ // 0x808E9E5C
    *(-0x6edc + r4) = r0; // stw @ 0x808E9E60
    r3 = *(0 + r3); // lwz @ 0x808E9E64
    r3 = *(0x90 + r3); // lwz @ 0x808E9E68
    FUN_806845FC(r3); // bl 0x806845FC
    /* li r6, 1 */ // 0x808E9E74
    if (!=) goto 0x0x808e9e80;
    /* li r6, 2 */ // 0x808E9E7C
    /* lis r4, 0 */ // 0x808E9E80
    /* slwi r3, r29, 2 */ // 0x808E9E84
    r5 = *(0 + r4); // lwz @ 0x808E9E88
    /* li r4, 1 */ // 0x808E9E90
    /* li r0, -1 */ // 0x808E9E94
    r5 = *(0x98 + r5); // lwz @ 0x808E9E98
    r3 = r5 + r3; // 0x808E9E9C
    *(0x164 + r3) = r6; // stw @ 0x808E9EA0
    r3 = *(0x48 + r27); // lwz @ 0x808E9EA4
    if (!=) goto 0x0x808e9eb0;
    r0 = r4;
    r0 = r31 + r0; // 0x808E9EB0
    /* slwi r0, r0, 2 */ // 0x808E9EB4
    /* lwzx r3, r3, r0 */ // 0x808E9EB8
    *(0x80 + r3) = r4; // stb @ 0x808E9EBC
    r3 = r27;
    FUN_808B4A98(r3); // bl 0x808B4A98
    if (==) goto 0x0x808ea05c;
    /* lis r3, 0 */ // 0x808E9ED0
    r3 = *(0 + r3); // lwz @ 0x808E9ED4
    r3 = *(0 + r3); // lwz @ 0x808E9ED8
    r3 = *(0 + r3); // lwz @ 0x808E9EDC
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808e9f28;
    r4 = *(0x6cc + r27); // lwz @ 0x808E9EEC
    if (!=) goto 0x0x808e9f18;
    /* li r0, -1 */ // 0x808E9EF8
    *(0x3e8 + r27) = r0; // stw @ 0x808E9EFC
    r3 = r28;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r27;
    /* li r4, 0 */ // 0x808E9F0C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808ea05c */ // 0x808E9F14
    r3 = r27;
    r5 = r28;
    FUN_808B3FE8(r4, r3, r5); // bl 0x808B3FE8
    /* b 0x808ea05c */ // 0x808E9F24
    /* lis r3, 0 */ // 0x808E9F28
    r5 = *(0 + r3); // lwz @ 0x808E9F2C
    r0 = *(0x36 + r5); // lha @ 0x808E9F30
    if (<) goto 0x0x808e9f58;
    /* lis r3, 1 */ // 0x808E9F3C
    /* clrlwi r4, r0, 0x18 */ // 0x808E9F40
    r0 = r3 + -0x6c10; // 0x808E9F44
    r0 = r0 * r4; // 0x808E9F48
    r3 = r5 + r0; // 0x808E9F4C
    r29 = r3 + 0x38; // 0x808E9F50
    /* b 0x808e9f5c */ // 0x808E9F54
    /* li r29, 0 */ // 0x808E9F58
    /* lis r3, 0 */ // 0x808E9F5C
    r3 = *(0 + r3); // lwz @ 0x808E9F60
    r0 = *(0x1760 + r3); // lwz @ 0x808E9F64
    if (==) goto 0x0x808e9f78;
    if (!=) goto 0x0x808ea024;
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r29, 1 */ // 0x808E9F7C
    /* slwi r0, r3, 2 */ // 0x808E9F80
    r3 = r4 + r0; // 0x808E9F84
    r0 = *(-0x6ea8 + r3); // lwz @ 0x808E9F88
    if (!=) goto 0x0x808ea024;
    /* lis r30, 0 */ // 0x808E9F94
    r3 = *(0 + r30); // lwz @ 0x808E9F98
    r0 = *(0x1760 + r3); // lwz @ 0x808E9F9C
    if (==) goto 0x0x808e9fb4;
    if (==) goto 0x0x808e9fec;
    /* b 0x808ea024 */ // 0x808E9FB0
    /* lis r29, 0 */ // 0x808E9FB4
    r3 = *(0 + r29); // lwz @ 0x808E9FB8
    r3 = *(0x98 + r3); // lwz @ 0x808E9FBC
    FUN_80661B1C(); // bl 0x80661B1C
    r4 = *(0 + r29); // lwz @ 0x808E9FC4
    r3 = r27;
    r6 = *(0 + r30); // lwz @ 0x808E9FCC
    r5 = r28;
    r7 = *(0x98 + r4); // lwz @ 0x808E9FD4
    /* li r4, 0x1b */ // 0x808E9FD8
    r0 = *(0xfc + r7); // lwz @ 0x808E9FDC
    *(0x1758 + r6) = r0; // stw @ 0x808E9FE0
    FUN_808B3FE8(r5, r4); // bl 0x808B3FE8
    /* b 0x808ea05c */ // 0x808E9FE8
    /* lis r29, 0 */ // 0x808E9FEC
    r3 = *(0 + r29); // lwz @ 0x808E9FF0
    r3 = *(0x98 + r3); // lwz @ 0x808E9FF4
    FUN_806615B0(); // bl 0x806615B0
    r4 = *(0 + r29); // lwz @ 0x808E9FFC
    r3 = r27;
    r6 = *(0 + r30); // lwz @ 0x808EA004
    r5 = r28;
    r7 = *(0x98 + r4); // lwz @ 0x808EA00C
    /* li r4, 0x1a */ // 0x808EA010
    r0 = *(0x78 + r7); // lwz @ 0x808EA014
    *(0x1758 + r6) = r0; // stw @ 0x808EA018
    FUN_808B3FE8(r5, r4); // bl 0x808B3FE8
    /* b 0x808ea05c */ // 0x808EA020
    /* lis r3, 0 */ // 0x808EA024
    r3 = *(0 + r3); // lwz @ 0x808EA028
    r0 = *(0x1760 + r3); // lwz @ 0x808EA02C
    if (!=) goto 0x0x808ea04c;
    r3 = r27;
    r5 = r28;
    /* li r4, 0x78 */ // 0x808EA040
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808ea05c */ // 0x808EA048
    r3 = r27;
    r5 = r28;
    /* li r4, 0x6e */ // 0x808EA054
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808EA060
    return;
}