/* Function at 0x80798B8C, size=904 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80798B8C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* lis r4, 1 */ // 0x80798B94
    *(0x44 + r1) = r0; // stw @ 0x80798B98
    /* li r0, -1 */ // 0x80798B9C
    r4 = r4 + -1; // 0x80798BA0
    /* stmw r27, 0x2c(r1) */ // 0x80798BA4
    r31 = r3;
    /* li r28, 0 */ // 0x80798BB0
    /* li r29, 1 */ // 0x80798BB4
    /* li r30, 4 */ // 0x80798BB8
    *(0x18 + r1) = r4; // sth @ 0x80798BBC
    *(0x1a + r1) = r0; // sth @ 0x80798BC0
    *(0x1c + r1) = r4; // sth @ 0x80798BC4
    *(0x1e + r1) = r0; // sth @ 0x80798BC8
    *(0x20 + r1) = r4; // sth @ 0x80798BCC
    *(0x22 + r1) = r0; // sth @ 0x80798BD0
    *(0x24 + r1) = r4; // sth @ 0x80798BD4
    *(0x26 + r1) = r0; // sth @ 0x80798BD8
    /* b 0x80798ca8 */ // 0x80798BDC
    r3 = *(0xdc + r31); // lwz @ 0x80798BE0
    r4 = r28;
    FUN_8061E9B4(r4); // bl 0x8061E9B4
    /* li r4, 0 */ // 0x80798BEC
    /* mtctr r30 */ // 0x80798BF0
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798BF8
    if (==) goto 0x0x80798c04;
    /* b 0x80798c9c */ // 0x80798C00
    r4 = r4 + 1; // 0x80798C04
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C0C
    if (==) goto 0x0x80798c18;
    /* b 0x80798c9c */ // 0x80798C14
    r4 = r4 + 1; // 0x80798C18
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C20
    if (==) goto 0x0x80798c2c;
    /* b 0x80798c9c */ // 0x80798C28
    r4 = r4 + 1; // 0x80798C2C
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C34
    if (==) goto 0x0x80798c40;
    /* b 0x80798c9c */ // 0x80798C3C
    r4 = r4 + 1; // 0x80798C40
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C48
    if (==) goto 0x0x80798c54;
    /* b 0x80798c9c */ // 0x80798C50
    r4 = r4 + 1; // 0x80798C54
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C5C
    if (==) goto 0x0x80798c68;
    /* b 0x80798c9c */ // 0x80798C64
    r4 = r4 + 1; // 0x80798C68
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C70
    if (==) goto 0x0x80798c7c;
    /* b 0x80798c9c */ // 0x80798C78
    r4 = r4 + 1; // 0x80798C7C
    r0 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x80798C84
    if (==) goto 0x0x80798c90;
    /* b 0x80798c9c */ // 0x80798C8C
    r4 = r4 + 1; // 0x80798C90
    if (counter-- != 0) goto 0x0x80798bf4;
    /* li r4, 0 */ // 0x80798C98
    *(0 + r27) = r4; // sth @ 0x80798C9C
    r27 = r27 + 2; // 0x80798CA0
    r28 = r28 + 1; // 0x80798CA4
    r0 = *(0xe2 + r31); // lbz @ 0x80798CA8
    if (<) goto 0x0x80798be0;
    /* li r28, 0 */ // 0x80798CB8
    /* b 0x80798cd8 */ // 0x80798CBC
    r3 = *(0xdc + r31); // lwz @ 0x80798CC0
    r4 = r28;
    FUN_8061E9EC(r4); // bl 0x8061E9EC
    *(0 + r29) = r3; // sth @ 0x80798CCC
    r29 = r29 + 2; // 0x80798CD0
    r28 = r28 + 1; // 0x80798CD4
    r0 = *(0xe2 + r31); // lbz @ 0x80798CD8
    if (<) goto 0x0x80798cc0;
    r8 = *(0xe2 + r31); // lbz @ 0x80798CE4
    /* li r3, 0 */ // 0x80798CE8
    /* cmpwi cr1, r8, 0 */
    if (<=) goto 0x0x80798e28;
    r5 = r8 + -8; // 0x80798CF8
    if (<=) goto 0x0x80798dd8;
    /* li r6, 0 */ // 0x80798D00
    if (<) goto 0x0x80798d1c;
    /* lis r4, -0x8000 */ // 0x80798D08
    r0 = r4 + -2; // 0x80798D0C
    if (>) goto 0x0x80798d1c;
    /* li r6, 1 */ // 0x80798D18
    if (==) goto 0x0x80798dd8;
    r0 = r5 + 7; // 0x80798D24
    /* srwi r0, r0, 3 */ // 0x80798D2C
    /* mtctr r0 */ // 0x80798D38
    if (<=) goto 0x0x80798dd8;
    r0 = *(0 + r4); // lhz @ 0x80798D44
    r3 = r3 + 8; // 0x80798D48
    *(0 + r6) = r0; // sth @ 0x80798D4C
    r0 = *(0 + r7); // lha @ 0x80798D50
    *(2 + r6) = r0; // sth @ 0x80798D54
    r0 = *(2 + r4); // lhz @ 0x80798D58
    *(4 + r6) = r0; // sth @ 0x80798D5C
    r0 = *(2 + r7); // lha @ 0x80798D60
    *(6 + r6) = r0; // sth @ 0x80798D64
    r0 = *(4 + r4); // lhz @ 0x80798D68
    *(8 + r6) = r0; // sth @ 0x80798D6C
    r0 = *(4 + r7); // lha @ 0x80798D70
    *(0xa + r6) = r0; // sth @ 0x80798D74
    r0 = *(6 + r4); // lhz @ 0x80798D78
    *(0xc + r6) = r0; // sth @ 0x80798D7C
    r0 = *(6 + r7); // lha @ 0x80798D80
    *(0xe + r6) = r0; // sth @ 0x80798D84
    r0 = *(8 + r4); // lhz @ 0x80798D88
    *(0x10 + r6) = r0; // sth @ 0x80798D8C
    r0 = *(8 + r7); // lha @ 0x80798D90
    *(0x12 + r6) = r0; // sth @ 0x80798D94
    r0 = *(0xa + r4); // lhz @ 0x80798D98
    *(0x14 + r6) = r0; // sth @ 0x80798D9C
    r0 = *(0xa + r7); // lha @ 0x80798DA0
    *(0x16 + r6) = r0; // sth @ 0x80798DA4
    r0 = *(0xc + r4); // lhz @ 0x80798DA8
    *(0x18 + r6) = r0; // sth @ 0x80798DAC
    r0 = *(0xc + r7); // lha @ 0x80798DB0
    *(0x1a + r6) = r0; // sth @ 0x80798DB4
    r0 = *(0xe + r4); // lhz @ 0x80798DB8
    r4 = r4 + 0x10; // 0x80798DBC
    *(0x1c + r6) = r0; // sth @ 0x80798DC0
    r0 = *(0xe + r7); // lha @ 0x80798DC4
    r7 = r7 + 0x10; // 0x80798DC8
    *(0x1e + r6) = r0; // sth @ 0x80798DCC
    r6 = r6 + 0x20; // 0x80798DD0
    if (counter-- != 0) goto 0x0x80798d44;
    /* slwi r7, r3, 1 */ // 0x80798DD8
    /* slwi r0, r3, 2 */ // 0x80798DE4
    r4 = r4 + r7; // 0x80798DEC
    r5 = r5 + r0; // 0x80798DF0
    r6 = r6 + r7; // 0x80798DF4
    /* b 0x80798e1c */ // 0x80798DF8
    r0 = *(0 + r4); // lhz @ 0x80798DFC
    r4 = r4 + 2; // 0x80798E00
    *(0 + r5) = r0; // sth @ 0x80798E04
    r3 = r3 + 1; // 0x80798E08
    r0 = *(0 + r6); // lha @ 0x80798E0C
    r6 = r6 + 2; // 0x80798E10
    *(2 + r5) = r0; // sth @ 0x80798E14
    r5 = r5 + 4; // 0x80798E18
    r8 = *(0xe2 + r31); // lbz @ 0x80798E1C
    if (<) goto 0x0x80798dfc;
    /* lis r3, 1 */ // 0x80798E28
    r9 = r3 + -1; // 0x80798E30
    /* li r10, 0 */ // 0x80798E34
    /* clrlwi r3, r8, 0x18 */ // 0x80798E38
    /* lis r6, 0 */ // 0x80798E3C
    /* li r0, 0x10 */ // 0x80798E40
    /* b 0x80798e88 */ // 0x80798E44
    r8 = r6 + 0; // 0x80798E48
    r5 = *(0 + r7); // lhz @ 0x80798E4C
    /* li r11, 0 */ // 0x80798E50
    /* mtctr r0 */ // 0x80798E54
    r4 = *(0 + r8); // lwz @ 0x80798E58
    if (!=) goto 0x0x80798e74;
    if (<=) goto 0x0x80798e80;
    r9 = r11;
    /* b 0x80798e80 */ // 0x80798E70
    r8 = r8 + 4; // 0x80798E74
    if (counter-- != 0) goto 0x0x80798e58;
    r7 = r7 + 4; // 0x80798E80
    if (<) goto 0x0x80798e48;
    /* addis r0, r9, 0 */ // 0x80798E90
    if (!=) goto 0x0x80798ea8;
    /* li r0, 0 */ // 0x80798E9C
    *(0xf0 + r31) = r0; // sth @ 0x80798EA0
    /* b 0x80798ebc */ // 0x80798EA4
    /* lis r3, 0 */ // 0x80798EA8
    /* slwi r0, r9, 2 */ // 0x80798EAC
    r3 = r3 + 0; // 0x80798EB0
    /* lwzx r0, r3, r0 */ // 0x80798EB4
    *(0xf0 + r31) = r0; // sth @ 0x80798EB8
    r0 = *(0xe2 + r31); // lbz @ 0x80798EBC
    /* li r5, 0 */ // 0x80798EC4
    /* mtctr r0 */ // 0x80798EC8
    if (<=) goto 0x0x80798efc;
    r3 = *(0xf0 + r31); // lhz @ 0x80798ED4
    r0 = *(0 + r4); // lhz @ 0x80798ED8
    if (!=) goto 0x0x80798ef4;
    r0 = *(2 + r4); // lha @ 0x80798EE4
    if (<=) goto 0x0x80798ef4;
    r5 = r0;
    r4 = r4 + 4; // 0x80798EF4
    if (counter-- != 0) goto 0x0x80798ed4;
    *(0xf2 + r31) = r5; // sth @ 0x80798EFC
    r0 = *(0x44 + r1); // lwz @ 0x80798F04
    return;
}