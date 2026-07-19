/* Function at 0x806E4920, size=1116 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r14 */
/* Calls: 5 function(s) */

int FUN_806E4920(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r14 */
    /* stmw r14, 0x38(r1) */ // 0x806E492C
    r15 = r3;
    /* li r17, 0 */ // 0x806E4934
    /* lis r26, 0 */ // 0x806E4938
    /* lis r27, 0 */ // 0x806E493C
    /* lis r28, 0 */ // 0x806E4940
    /* li r24, 1 */ // 0x806E4944
    /* lis r23, 0 */ // 0x806E4948
    /* li r25, 0 */ // 0x806E494C
    /* lis r29, 1 */ // 0x806E4950
    /* lis r30, 0 */ // 0x806E4954
    /* li r31, 2 */ // 0x806E4958
    /* li r14, 2 */ // 0x806E495C
    r5 = *(0 + r27); // lwz @ 0x806E4960
    /* clrlwi r0, r17, 0x18 */ // 0x806E4964
    r18 = r24 << r0; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806E496C
    /* mulli r0, r0, 0x58 */ // 0x806E4970
    r3 = r5 + r0; // 0x806E4974
    r0 = *(0x48 + r3); // lwz @ 0x806E4978
    /* and. r0, r18, r0 */ // 0x806E497C
    if (==) goto 0x0x806e4d5c;
    r0 = *(0x59 + r3); // lbz @ 0x806E4984
    if (==) goto 0x0x806e4d5c;
    r4 = *(0 + r23); // lwz @ 0x806E4990
    r3 = *(0 + r26); // lwz @ 0x806E4994
    r0 = *(0x20 + r4); // lwz @ 0x806E4998
    *(8 + r1) = r0; // stw @ 0x806E499C
    r0 = *(0xb94 + r3); // lwz @ 0x806E49A0
    *(0xc + r1) = r0; // stw @ 0x806E49A4
    r0 = *(0x291c + r5); // lwz @ 0x806E49A8
    /* mulli r0, r0, 0x58 */ // 0x806E49AC
    r4 = r5 + r0; // 0x806E49B0
    r5 = *(0x59 + r4); // lbz @ 0x806E49B4
    r0 = *(0x48 + r4); // lwz @ 0x806E49B8
    r4 = r24 << r5; // slw
    /* and. r0, r4, r0 */ // 0x806E49C0
    if (==) goto 0x0x806e49d0;
    r0 = *(0x10 + r15); // lhz @ 0x806E49C8
    /* b 0x806e49d4 */ // 0x806E49CC
    /* li r0, 0 */ // 0x806E49D0
    *(0x14 + r1) = r0; // sth @ 0x806E49D4
    /* li r6, 0 */ // 0x806E49D8
    r0 = *(0xb78 + r3); // lwz @ 0x806E49DC
    if (!=) goto 0x0x806e49ec;
    r6 = r6 | 0x8000; // 0x806E49E8
    r7 = r3 + 0x28; // 0x806E49EC
    /* li r5, 0 */ // 0x806E49F0
    /* mtctr r31 */ // 0x806E49F4
    /* clrlwi r0, r5, 0x18 */ // 0x806E49F8
    /* mulli r0, r0, 0xf0 */ // 0x806E49FC
    r4 = r7 + r0; // 0x806E4A00
    r0 = *(0xcc + r4); // lwz @ 0x806E4A04
    if (!=) goto 0x0x806e4a18;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4A14
    r5 = r5 + 1; // 0x806E4A18
    /* clrlwi r0, r5, 0x18 */ // 0x806E4A1C
    /* mulli r0, r0, 0xf0 */ // 0x806E4A20
    r4 = r7 + r0; // 0x806E4A24
    r0 = *(0xcc + r4); // lwz @ 0x806E4A28
    if (!=) goto 0x0x806e4a3c;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4A38
    r5 = r5 + 1; // 0x806E4A3C
    /* clrlwi r0, r5, 0x18 */ // 0x806E4A40
    /* mulli r0, r0, 0xf0 */ // 0x806E4A44
    r4 = r7 + r0; // 0x806E4A48
    r0 = *(0xcc + r4); // lwz @ 0x806E4A4C
    if (!=) goto 0x0x806e4a60;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4A5C
    r5 = r5 + 1; // 0x806E4A60
    /* clrlwi r0, r5, 0x18 */ // 0x806E4A64
    /* mulli r0, r0, 0xf0 */ // 0x806E4A68
    r4 = r7 + r0; // 0x806E4A6C
    r0 = *(0xcc + r4); // lwz @ 0x806E4A70
    if (!=) goto 0x0x806e4a84;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4A80
    r5 = r5 + 1; // 0x806E4A84
    /* clrlwi r0, r5, 0x18 */ // 0x806E4A88
    /* mulli r0, r0, 0xf0 */ // 0x806E4A8C
    r4 = r7 + r0; // 0x806E4A90
    r0 = *(0xcc + r4); // lwz @ 0x806E4A94
    if (!=) goto 0x0x806e4aa8;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4AA4
    r5 = r5 + 1; // 0x806E4AA8
    /* clrlwi r0, r5, 0x18 */ // 0x806E4AAC
    /* mulli r0, r0, 0xf0 */ // 0x806E4AB0
    r4 = r7 + r0; // 0x806E4AB4
    r0 = *(0xcc + r4); // lwz @ 0x806E4AB8
    if (!=) goto 0x0x806e4acc;
    r0 = r24 << r5; // slw
    r6 = r6 | r0; // 0x806E4AC8
    r5 = r5 + 1; // 0x806E4ACC
    if (counter-- != 0) goto 0x0x806e49f8;
    *(0x10 + r1) = r6; // stw @ 0x806E4AD4
    r4 = *(0 + r26); // lwz @ 0x806E4AD8
    r0 = *(0xb68 + r4); // lwz @ 0x806E4ADC
    *(0x1e + r1) = r0; // stb @ 0x806E4AE0
    *(0x1f + r1) = r25; // stb @ 0x806E4AE4
    r0 = *(0xb90 + r4); // lwz @ 0x806E4AE8
    /* clrlwi. r0, r0, 0x1f */ // 0x806E4AEC
    if (==) goto 0x0x806e4afc;
    /* li r0, 3 */ // 0x806E4AF4
    /* b 0x806e4b10 */ // 0x806E4AF8
    r3 = *(0xb6c + r3); // lwz @ 0x806E4AFC
    /* li r0, 1 */ // 0x806E4B00
    if (!=) goto 0x0x806e4b10;
    /* li r0, 2 */ // 0x806E4B0C
    *(0x2c + r1) = r0; // stb @ 0x806E4B10
    r0 = r17 rlwinm 3; // rlwinm
    r6 = *(0 + r27); // lwz @ 0x806E4B18
    r4 = *(0x12 + r15); // lha @ 0x806E4B20
    /* li r7, 0 */ // 0x806E4B24
    r3 = r6 + r0; // 0x806E4B28
    r0 = *(0x2964 + r3); // lwz @ 0x806E4B2C
    r3 = r4 >> 0x1f; // srawi
    /* subfc r0, r0, r4 */ // 0x806E4B34
    *(0x1a + r1) = r0; // sth @ 0x806E4B38
    /* mtctr r14 */ // 0x806E4B3C
    if (<) goto 0x0x806e4b5c;
    if (>=) goto 0x0x806e4b5c;
    r3 = r6 + r7; // 0x806E4B50
    r0 = *(0x2920 + r3); // lbz @ 0x806E4B54
    /* b 0x806e4b60 */ // 0x806E4B58
    /* li r0, 0xff */ // 0x806E4B5C
    /* addic. r7, r7, 1 */ // 0x806E4B60
    *(0x18 + r5) = r0; // stb @ 0x806E4B64
    if (<) goto 0x0x806e4b80;
    if (>=) goto 0x0x806e4b80;
    r3 = r6 + r7; // 0x806E4B74
    r0 = *(0x2920 + r3); // lbz @ 0x806E4B78
    /* b 0x806e4b84 */ // 0x806E4B7C
    /* li r0, 0xff */ // 0x806E4B80
    /* addic. r7, r7, 1 */ // 0x806E4B84
    *(0x19 + r5) = r0; // stb @ 0x806E4B88
    if (<) goto 0x0x806e4ba4;
    if (>=) goto 0x0x806e4ba4;
    r3 = r6 + r7; // 0x806E4B98
    r0 = *(0x2920 + r3); // lbz @ 0x806E4B9C
    /* b 0x806e4ba8 */ // 0x806E4BA0
    /* li r0, 0xff */ // 0x806E4BA4
    /* addic. r7, r7, 1 */ // 0x806E4BA8
    *(0x1a + r5) = r0; // stb @ 0x806E4BAC
    if (<) goto 0x0x806e4bc8;
    if (>=) goto 0x0x806e4bc8;
    r3 = r6 + r7; // 0x806E4BBC
    r0 = *(0x2920 + r3); // lbz @ 0x806E4BC0
    /* b 0x806e4bcc */ // 0x806E4BC4
    /* li r0, 0xff */ // 0x806E4BC8
    /* addic. r7, r7, 1 */ // 0x806E4BCC
    *(0x1b + r5) = r0; // stb @ 0x806E4BD0
    if (<) goto 0x0x806e4bec;
    if (>=) goto 0x0x806e4bec;
    r3 = r6 + r7; // 0x806E4BE0
    r0 = *(0x2920 + r3); // lbz @ 0x806E4BE4
    /* b 0x806e4bf0 */ // 0x806E4BE8
    /* li r0, 0xff */ // 0x806E4BEC
    /* addic. r7, r7, 1 */ // 0x806E4BF0
    *(0x1c + r5) = r0; // stb @ 0x806E4BF4
    if (<) goto 0x0x806e4c10;
    if (>=) goto 0x0x806e4c10;
    r3 = r6 + r7; // 0x806E4C04
    r0 = *(0x2920 + r3); // lbz @ 0x806E4C08
    /* b 0x806e4c14 */ // 0x806E4C0C
    /* li r0, 0xff */ // 0x806E4C10
    *(0x1d + r5) = r0; // stb @ 0x806E4C14
    r5 = r5 + 6; // 0x806E4C18
    r7 = r7 + 1; // 0x806E4C1C
    if (counter-- != 0) goto 0x0x806e4b40;
    /* li r16, 0 */ // 0x806E4C28
    r19 = r21;
    /* li r20, 0 */ // 0x806E4C30
    /* b 0x806e4ca4 */ // 0x806E4C34
    r4 = r16;
    FUN_806E9970(r4); // bl 0x806E9970
    /* clrlwi r0, r3, 0x18 */ // 0x806E4C40
    r5 = *(0 + r26); // lwz @ 0x806E4C44
    /* mulli r0, r0, 0xf0 */ // 0x806E4C48
    r3 = *(0 + r27); // lwz @ 0x806E4C4C
    r4 = r16;
    r5 = r5 + r0; // 0x806E4C54
    r22 = *(0x30 + r5); // lwz @ 0x806E4C58
    FUN_806E9970(r4); // bl 0x806E9970
    /* clrlwi r0, r3, 0x18 */ // 0x806E4C60
    r5 = *(0 + r26); // lwz @ 0x806E4C64
    /* mulli r4, r0, 0xf0 */ // 0x806E4C68
    r3 = *(0 + r28); // lwz @ 0x806E4C6C
    r0 = r22 rlwinm 8; // rlwinm
    r4 = r5 + r4; // 0x806E4C78
    r4 = *(0x34 + r4); // lwz @ 0x806E4C7C
    r0 = r4 rlwimi 0; // rlwimi
    *(0xe + r21) = r0; // sth @ 0x806E4C84
    r21 = r21 + 2; // 0x806E4C88
    r0 = *(0x98 + r3); // lwz @ 0x806E4C8C
    r3 = r0 + r20; // 0x806E4C90
    r20 = r20 + 0xc; // 0x806E4C94
    r0 = *(0x228 + r3); // lbz @ 0x806E4C98
    *(0x14 + r19) = r0; // stb @ 0x806E4C9C
    r3 = *(0 + r27); // lwz @ 0x806E4CA4
    r0 = *(0x291c + r3); // lwz @ 0x806E4CA8
    /* mulli r0, r0, 0x58 */ // 0x806E4CAC
    r4 = r3 + r0; // 0x806E4CB0
    r0 = *(0x58 + r4); // lbz @ 0x806E4CB4
    if (<) goto 0x0x806e4c38;
    if (!=) goto 0x0x806e4cd4;
    r0 = r29 + -1; // 0x806E4CC8
    *(0x18 + r1) = r0; // sth @ 0x806E4CCC
    *(0x1d + r1) = r25; // stb @ 0x806E4CD0
    r0 = *(0 + r27); // lwz @ 0x806E4CD4
    r16 = r17 rlwinm 2; // rlwinm
    /* li r5, 0x28 */ // 0x806E4CE0
    r3 = r0 + r16; // 0x806E4CE4
    r0 = *(0x276c + r3); // lwz @ 0x806E4CE8
    /* mulli r0, r0, 0x30 */ // 0x806E4CEC
    r3 = r0 + r3; // 0x806E4CF0
    r3 = *(0xf0 + r3); // lwz @ 0x806E4CF4
    r3 = *(4 + r3); // lwz @ 0x806E4CF8
    FUN_806E9F64(); // bl 0x806E9F64
    r7 = *(0 + r27); // lwz @ 0x806E4D00
    r6 = r7 + r16; // 0x806E4D08
    r0 = *(0x291c + r7); // lwz @ 0x806E4D0C
    r3 = *(0x276c + r6); // lwz @ 0x806E4D10
    /* mulli r0, r0, 0x58 */ // 0x806E4D14
    /* mulli r5, r3, 0x30 */ // 0x806E4D18
    r3 = r7 + r0; // 0x806E4D1C
    r0 = *(0x58 + r3); // lbz @ 0x806E4D20
    r3 = r5 + r6; // 0x806E4D24
    r3 = *(0xf0 + r3); // lwz @ 0x806E4D28
    /* slwi r5, r0, 6 */ // 0x806E4D2C
    r3 = *(0x10 + r3); // lwz @ 0x806E4D30
    FUN_806E9F64(); // bl 0x806E9F64
    r3 = *(0 + r30); // lwz @ 0x806E4D38
    r0 = *(0 + r3); // lbz @ 0x806E4D3C
    if (==) goto 0x0x806e4d5c;
    r0 = *(4 + r15); // lwz @ 0x806E4D48
    /* and. r0, r0, r18 */ // 0x806E4D4C
    if (!=) goto 0x0x806e4d5c;
    /* clrlwi r4, r17, 0x18 */ // 0x806E4D54
    FUN_806F4A78(); // bl 0x806F4A78
    if (<) goto 0x0x806e4960;
    r0 = *(0x84 + r1); // lwz @ 0x806E4D6C
    return;
}