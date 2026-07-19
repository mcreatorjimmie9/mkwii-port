/* Function at 0x808B9E70, size=532 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 10 function(s) */

int FUN_808B9E70(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808B9E7C
    r29 = r3;
    r30 = r5;
    r0 = *(8 + r3); // lwz @ 0x808B9E88
    if (!=) goto 0x0x808ba070;
    /* lis r28, 0 */ // 0x808B9E94
    r31 = *(0x240 + r5); // lwz @ 0x808B9E98
    r3 = *(0 + r28); // lwz @ 0x808B9E9C
    r4 = *(0 + r3); // lwz @ 0x808B9EA0
    r3 = *(0 + r4); // lwz @ 0x808B9EA4
    if (==) goto 0x0x808b9eb8;
    if (!=) goto 0x0x808b9f4c;
    r27 = *(0x2a8 + r4); // lwz @ 0x808B9EB8
    if (!=) goto 0x0x808b9ecc;
    /* li r27, 0 */ // 0x808B9EC4
    /* b 0x808b9f20 */ // 0x808B9EC8
    /* lis r28, 0 */ // 0x808B9ECC
    r28 = r28 + 0; // 0x808B9ED0
    if (==) goto 0x0x808b9f1c;
    r12 = *(0 + r27); // lwz @ 0x808B9ED8
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x808B9EE0
    /* mtctr r12 */ // 0x808B9EE4
    /* bctrl  */ // 0x808B9EE8
    /* b 0x808b9f04 */ // 0x808B9EEC
    if (!=) goto 0x0x808b9f00;
    /* li r0, 1 */ // 0x808B9EF8
    /* b 0x808b9f10 */ // 0x808B9EFC
    r3 = *(0 + r3); // lwz @ 0x808B9F00
    if (!=) goto 0x0x808b9ef0;
    /* li r0, 0 */ // 0x808B9F0C
    if (==) goto 0x0x808b9f1c;
    /* b 0x808b9f20 */ // 0x808B9F18
    /* li r27, 0 */ // 0x808B9F1C
    r3 = r27;
    r4 = r31;
    FUN_8067EBC4(r3, r4); // bl 0x8067EBC4
    /* li r0, -1 */ // 0x808B9F2C
    *(0x3e8 + r29) = r0; // stw @ 0x808B9F30
    r3 = r30;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 1 */ // 0x808B9F40
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808ba068 */ // 0x808B9F48
    FUN_808CF8D8(r3, r4); // bl 0x808CF8D8
    if (==) goto 0x0x808ba000;
    r3 = *(0 + r28); // lwz @ 0x808B9F58
    r3 = *(0x98 + r3); // lwz @ 0x808B9F5C
    *(0x14c + r3) = r31; // stw @ 0x808B9F60
    r3 = *(0 + r28); // lwz @ 0x808B9F64
    r3 = *(0 + r3); // lwz @ 0x808B9F68
    r27 = *(0x250 + r3); // lwz @ 0x808B9F6C
    if (!=) goto 0x0x808b9f80;
    /* li r27, 0 */ // 0x808B9F78
    /* b 0x808b9fd4 */ // 0x808B9F7C
    /* lis r28, 0 */ // 0x808B9F80
    r28 = r28 + 0; // 0x808B9F84
    if (==) goto 0x0x808b9fd0;
    r12 = *(0 + r27); // lwz @ 0x808B9F8C
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x808B9F94
    /* mtctr r12 */ // 0x808B9F98
    /* bctrl  */ // 0x808B9F9C
    /* b 0x808b9fb8 */ // 0x808B9FA0
    if (!=) goto 0x0x808b9fb4;
    /* li r0, 1 */ // 0x808B9FAC
    /* b 0x808b9fc4 */ // 0x808B9FB0
    r3 = *(0 + r3); // lwz @ 0x808B9FB4
    if (!=) goto 0x0x808b9fa4;
    /* li r0, 0 */ // 0x808B9FC0
    if (==) goto 0x0x808b9fd0;
    /* b 0x808b9fd4 */ // 0x808B9FCC
    /* li r27, 0 */ // 0x808B9FD0
    r3 = r27;
    r4 = r31;
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* li r0, -1 */ // 0x808B9FE0
    *(0x3e8 + r29) = r0; // stw @ 0x808B9FE4
    r3 = r30;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r29;
    /* li r4, 0 */ // 0x808B9FF4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808ba068 */ // 0x808B9FFC
    r3 = *(0 + r28); // lwz @ 0x808BA000
    /* lis r4, 0 */ // 0x808BA004
    r3 = *(0x98 + r3); // lwz @ 0x808BA008
    *(0x14c + r3) = r31; // stw @ 0x808BA00C
    r3 = *(0 + r4); // lwz @ 0x808BA010
    *(0x1758 + r3) = r31; // stw @ 0x808BA014
    r3 = *(0 + r4); // lwz @ 0x808BA018
    r0 = *(0x1760 + r3); // lwz @ 0x808BA01C
    if (==) goto 0x0x808ba034;
    if (==) goto 0x0x808ba048;
    /* b 0x808ba068 */ // 0x808BA030
    r3 = r29;
    r5 = r30;
    /* li r4, 0x70 */ // 0x808BA03C
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808ba068 */ // 0x808BA044
    r3 = r29;
    r5 = r30;
    /* li r4, 0x1a */ // 0x808BA050
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    r3 = *(0 + r28); // lwz @ 0x808BA058
    r4 = r31;
    r3 = *(0x98 + r3); // lwz @ 0x808BA060
    FUN_80661730(r4, r4); // bl 0x80661730
    /* li r0, 1 */ // 0x808BA068
    *(0x215c + r29) = r0; // stb @ 0x808BA06C
    r0 = *(0x24 + r1); // lwz @ 0x808BA074
    return;
}