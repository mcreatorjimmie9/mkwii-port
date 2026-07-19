/* Function at 0x805D8BAC, size=576 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 4 function(s) */

int FUN_805D8BAC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* addis r9, r3, 2 */ // 0x805D8BB4
    *(0x34 + r1) = r0; // stw @ 0x805D8BB8
    /* stmw r23, 0xc(r1) */ // 0x805D8BBC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r23 = r7;
    r31 = r8;
    r0 = *(0x5002 + r9); // lbz @ 0x805D8BD8
    if (!=) goto 0x0x805d8bf4;
    /* li r0, 0 */ // 0x805D8BE4
    *(0x5000 + r9) = r0; // stb @ 0x805D8BE8
    *(0x5004 + r9) = r0; // stw @ 0x805D8BEC
    /* b 0x805d8dd8 */ // 0x805D8BF0
    r4 = *(0x18 + r27); // lwz @ 0x805D8BF4
    r3 = r23;
    FUN_805AC6AC(r3); // bl 0x805AC6AC
    if (!=) goto 0x0x805d8cbc;
    /* li r25, 0 */ // 0x805D8C08
    /* li r24, 0 */ // 0x805D8C0C
    r26 = *(0xb8 + r23); // lwz @ 0x805D8C10
    /* clrlwi r3, r24, 0x18 */ // 0x805D8C14
    FUN_805E0FBC(); // bl 0x805E0FBC
    if (!=) goto 0x0x805d8c30;
    r30 = r24;
    /* li r25, 1 */ // 0x805D8C28
    /* b 0x805d8c3c */ // 0x805D8C2C
    r24 = r24 + 1; // 0x805D8C30
    if (<) goto 0x0x805d8c10;
    if (!=) goto 0x0x805d8c5c;
    /* addis r3, r27, 2 */ // 0x805D8C44
    /* li r0, 0 */ // 0x805D8C48
    *(0x5000 + r3) = r0; // stb @ 0x805D8C4C
    /* li r0, 0xa */ // 0x805D8C50
    *(0x5004 + r3) = r0; // stw @ 0x805D8C54
    /* b 0x805d8dd8 */ // 0x805D8C58
    /* lis r3, 1 */ // 0x805D8C5C
    /* clrlwi r0, r30, 0x18 */ // 0x805D8C60
    r4 = r3 + -0x6c10; // 0x805D8C64
    r4 = r28 * r4; // 0x805D8C68
    /* li r3, 1 */ // 0x805D8C6C
    r6 = r3 << r0; // slw
    r3 = r27 + r4; // 0x805D8C74
    r5 = r3 + 0x38; // 0x805D8C78
    /* addis r4, r5, 1 */ // 0x805D8C7C
    r3 = *(-0x6da0 + r4); // lwz @ 0x805D8C80
    /* and. r0, r3, r6 */ // 0x805D8C84
    if (!=) goto 0x0x805d8c98;
    r0 = r3 | r6; // 0x805D8C8C
    *(-0x6da0 + r4) = r0; // stw @ 0x805D8C90
    /* li r31, 1 */ // 0x805D8C94
    /* addis r3, r5, 1 */ // 0x805D8C98
    r0 = *(-0x6ff4 + r3); // lwz @ 0x805D8C9C
    /* and. r0, r0, r6 */ // 0x805D8CA0
    if (!=) goto 0x0x805d8d34;
    r0 = *(-0x6ff4 + r3); // lwz @ 0x805D8CA8
    /* li r31, 1 */ // 0x805D8CAC
    r0 = r0 | r6; // 0x805D8CB0
    *(-0x6ff4 + r3) = r0; // stw @ 0x805D8CB4
    /* b 0x805d8d34 */ // 0x805D8CB8
    if (!=) goto 0x0x805d8d00;
    /* lis r3, 1 */ // 0x805D8CC4
    /* li r0, 1 */ // 0x805D8CC8
    r3 = r3 + -0x6c10; // 0x805D8CCC
    r3 = r28 * r3; // 0x805D8CD0
    r5 = r0 << r30; // slw
    r3 = r27 + r3; // 0x805D8CD8
    r3 = r3 + 0x38; // 0x805D8CDC
    /* addis r4, r3, 1 */ // 0x805D8CE0
    r3 = *(-0x6d9c + r4); // lwz @ 0x805D8CE4
    /* and. r0, r3, r5 */ // 0x805D8CE8
    if (!=) goto 0x0x805d8d34;
    r0 = r3 | r5; // 0x805D8CF0
    *(-0x6d9c + r4) = r0; // stw @ 0x805D8CF4
    /* li r31, 1 */ // 0x805D8CF8
    /* b 0x805d8d34 */ // 0x805D8CFC
    if (!=) goto 0x0x805d8d34;
    /* lis r3, 1 */ // 0x805D8D08
    r0 = r3 + -0x6c10; // 0x805D8D0C
    r0 = r28 * r0; // 0x805D8D10
    r3 = r27 + r0; // 0x805D8D14
    r3 = r3 + 0x38; // 0x805D8D18
    /* addis r3, r3, 1 */ // 0x805D8D1C
    r0 = *(-0x6d98 + r3); // lbz @ 0x805D8D20
    if (!=) goto 0x0x805d8d34;
    /* li r31, 1 */ // 0x805D8D2C
    *(-0x6d98 + r3) = r31; // stb @ 0x805D8D30
    /* clrlwi. r0, r31, 0x18 */ // 0x805D8D34
    *(0x24 + r27) = r31; // stb @ 0x805D8D38
    if (==) goto 0x0x805d8d70;
    /* lis r3, 1 */ // 0x805D8D40
    /* li r26, 0 */ // 0x805D8D44
    r31 = r3 + -0x6c10; // 0x805D8D48
    /* clrlwi r4, r26, 0x18 */ // 0x805D8D4C
    r3 = r27;
    r0 = r4 * r31; // 0x805D8D54
    r5 = r27 + r0; // 0x805D8D58
    r5 = r5 + 0x38; // 0x805D8D5C
    FUN_805D5334(r3, r5); // bl 0x805D5334
    r26 = r26 + 1; // 0x805D8D64
    if (<) goto 0x0x805d8d4c;
    r0 = r29 + -2; // 0x805D8D70
    if (>) goto 0x0x805d8d84;
    /* li r3, 0 */ // 0x805D8D7C
    /* b 0x805d8db0 */ // 0x805D8D80
    /* lis r3, 0 */ // 0x805D8D84
    /* slwi r0, r29, 2 */ // 0x805D8D88
    r3 = r3 + 0; // 0x805D8D8C
    /* clrlwi r4, r30, 0x18 */ // 0x805D8D90
    /* lwzx r0, r3, r0 */ // 0x805D8D94
    /* mulli r3, r28, 0x42 */ // 0x805D8D98
    r0 = r4 + r0; // 0x805D8D9C
    r0 = r3 + r0; // 0x805D8DA0
    /* mulli r3, r0, 0x2800 */ // 0x805D8DA4
    /* addis r3, r3, 3 */ // 0x805D8DA8
    r3 = r3 + -0x8000; // 0x805D8DAC
    /* addis r5, r27, 2 */ // 0x805D8DB0
    /* li r0, 1 */ // 0x805D8DB4
    /* lis r4, 0 */ // 0x805D8DB8
    *(0x20 + r27) = r3; // stw @ 0x805D8DBC
    r3 = *(0x1c + r27); // lwz @ 0x805D8DC0
    r4 = r4 + 0; // 0x805D8DC4
    *(0x5000 + r5) = r0; // stb @ 0x805D8DC8
    /* li r5, 0 */ // 0x805D8DCC
    /* li r6, 0 */ // 0x805D8DD0
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r0 = *(0x34 + r1); // lwz @ 0x805D8DDC
    return;
}