/* Function at 0x80684A18, size=932 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80684A18(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = *(0x14 + r3); // lbz @ 0x80684A24
    if (!=) goto 0x0x80684dac;
    r0 = *(0xc + r3); // lwz @ 0x80684A30
    if (!=) goto 0x0x80684dac;
    /* li r0, 1 */ // 0x80684A3C
    *(1 + r3) = r0; // stb @ 0x80684A40
    /* li r0, 0x26 */ // 0x80684A44
    r9 = r3 + 0x3b; // 0x80684A48
    *(0x18 + r3) = r4; // stw @ 0x80684A4C
    r8 = r7 + 0x17; // 0x80684A50
    *(0x1c + r3) = r5; // stw @ 0x80684A54
    *(0x20 + r3) = r6; // stb @ 0x80684A58
    r4 = *(0 + r7); // lbz @ 0x80684A5C
    *(0x24 + r3) = r4; // stb @ 0x80684A60
    r5 = *(2 + r7); // lhz @ 0x80684A64
    r4 = *(4 + r7); // lhz @ 0x80684A68
    *(0x28 + r3) = r4; // sth @ 0x80684A6C
    *(0x26 + r3) = r5; // sth @ 0x80684A70
    r5 = *(6 + r7); // lhz @ 0x80684A74
    r4 = *(8 + r7); // lhz @ 0x80684A78
    *(0x2c + r3) = r4; // sth @ 0x80684A7C
    *(0x2a + r3) = r5; // sth @ 0x80684A80
    r5 = *(0xa + r7); // lhz @ 0x80684A84
    r4 = *(0xc + r7); // lhz @ 0x80684A88
    *(0x30 + r3) = r4; // sth @ 0x80684A8C
    *(0x2e + r3) = r5; // sth @ 0x80684A90
    r5 = *(0xe + r7); // lhz @ 0x80684A94
    r4 = *(0x10 + r7); // lhz @ 0x80684A98
    *(0x34 + r3) = r4; // sth @ 0x80684A9C
    *(0x32 + r3) = r5; // sth @ 0x80684AA0
    r4 = *(0x12 + r7); // lhz @ 0x80684AA4
    *(0x36 + r3) = r4; // sth @ 0x80684AA8
    r4 = *(0x14 + r7); // lhz @ 0x80684AAC
    *(0x38 + r3) = r4; // sth @ 0x80684AB0
    r4 = *(0x16 + r7); // lhz @ 0x80684AB4
    *(0x3a + r3) = r4; // sth @ 0x80684AB8
    /* mtctr r0 */ // 0x80684ABC
    r4 = *(1 + r8); // lbz @ 0x80684AC0
    /* lbzu r0, 2(r8) */ // 0x80684AC4
    *(1 + r9) = r4; // stb @ 0x80684AC8
    /* stbu r0, 2(r9) */ // 0x80684ACC
    if (counter-- != 0) goto 0x0x80684ac0;
    r0 = *(0x64 + r7); // lbz @ 0x80684AD4
    r5 = r3 + 0x98; // 0x80684AD8
    *(0x88 + r3) = r0; // stb @ 0x80684ADC
    r8 = r3 + 0xc8; // 0x80684AE0
    r4 = r7 + 0x74; // 0x80684AE8
    r0 = *(0x6c + r7); // lhz @ 0x80684AEC
    *(0x90 + r3) = r0; // sth @ 0x80684AF0
    r0 = *(0x6e + r7); // lbz @ 0x80684AF4
    *(0x92 + r3) = r0; // stb @ 0x80684AF8
    r0 = *(0x70 + r7); // lhz @ 0x80684AFC
    *(0x94 + r3) = r0; // sth @ 0x80684B00
    r0 = *(0x72 + r7); // lbz @ 0x80684B04
    *(0x96 + r3) = r0; // stb @ 0x80684B08
    if (>=) goto 0x0x80684d24;
    /* lis r6, 0x2aab */ // 0x80684B14
    /* subf r11, r10, r8 */ // 0x80684B18
    r9 = r3 + 0x68; // 0x80684B1C
    r0 = r6 + -0x5555; // 0x80684B24
    /* mulhw r0, r0, r12 */ // 0x80684B28
    r0 = r0 >> 1; // srawi
    /* srwi r6, r0, 0x1f */ // 0x80684B30
    r31 = r0 + r6; // 0x80684B34
    r30 = r31 + 1; // 0x80684B38
    if (<=) goto 0x0x80684cd8;
    /* li r6, 0 */ // 0x80684B48
    /* li r8, 0 */ // 0x80684B4C
    if (>) goto 0x0x80684b78;
    /* rlwinm. r0, r11, 0, 0, 0 */ // 0x80684B54
    /* li r10, 1 */ // 0x80684B58
    if (!=) goto 0x0x80684b6c;
    /* rlwinm. r0, r12, 0, 0, 0 */ // 0x80684B60
    if (==) goto 0x0x80684b6c;
    /* li r10, 0 */ // 0x80684B68
    if (==) goto 0x0x80684b78;
    /* li r8, 1 */ // 0x80684B74
    if (==) goto 0x0x80684ba8;
    /* rlwinm. r10, r31, 0, 0, 0 */ // 0x80684B80
    /* li r8, 1 */ // 0x80684B84
    if (!=) goto 0x0x80684b9c;
    r0 = r30 rlwinm 0; // rlwinm
    if (==) goto 0x0x80684b9c;
    /* li r8, 0 */ // 0x80684B98
    if (==) goto 0x0x80684ba8;
    /* li r6, 1 */ // 0x80684BA4
    if (==) goto 0x0x80684cd8;
    r6 = r9 + 0x5f; // 0x80684BB0
    /* li r0, 0x60 */ // 0x80684BB4
    /* subf r6, r5, r6 */ // 0x80684BB8
    r6 = r6 u/ r0; // 0x80684BBC
    /* mtctr r6 */ // 0x80684BC0
    if (>=) goto 0x0x80684cd8;
    r0 = *(4 + r4); // lhz @ 0x80684BCC
    *(4 + r5) = r0; // sth @ 0x80684BD0
    r0 = *(6 + r4); // lbz @ 0x80684BD4
    *(6 + r5) = r0; // stb @ 0x80684BD8
    r0 = *(8 + r4); // lhz @ 0x80684BDC
    *(8 + r5) = r0; // sth @ 0x80684BE0
    r0 = *(0xa + r4); // lbz @ 0x80684BE4
    *(0xa + r5) = r0; // stb @ 0x80684BE8
    r0 = *(0x10 + r4); // lhz @ 0x80684BEC
    *(0x10 + r5) = r0; // sth @ 0x80684BF0
    r0 = *(0x12 + r4); // lbz @ 0x80684BF4
    *(0x12 + r5) = r0; // stb @ 0x80684BF8
    r0 = *(0x14 + r4); // lhz @ 0x80684BFC
    *(0x14 + r5) = r0; // sth @ 0x80684C00
    r0 = *(0x16 + r4); // lbz @ 0x80684C04
    *(0x16 + r5) = r0; // stb @ 0x80684C08
    r0 = *(0x1c + r4); // lhz @ 0x80684C0C
    *(0x1c + r5) = r0; // sth @ 0x80684C10
    r0 = *(0x1e + r4); // lbz @ 0x80684C14
    *(0x1e + r5) = r0; // stb @ 0x80684C18
    r0 = *(0x20 + r4); // lhz @ 0x80684C1C
    *(0x20 + r5) = r0; // sth @ 0x80684C20
    r0 = *(0x22 + r4); // lbz @ 0x80684C24
    *(0x22 + r5) = r0; // stb @ 0x80684C28
    r0 = *(0x28 + r4); // lhz @ 0x80684C2C
    *(0x28 + r5) = r0; // sth @ 0x80684C30
    r0 = *(0x2a + r4); // lbz @ 0x80684C34
    *(0x2a + r5) = r0; // stb @ 0x80684C38
    r0 = *(0x2c + r4); // lhz @ 0x80684C3C
    *(0x2c + r5) = r0; // sth @ 0x80684C40
    r0 = *(0x2e + r4); // lbz @ 0x80684C44
    *(0x2e + r5) = r0; // stb @ 0x80684C48
    r0 = *(0x34 + r4); // lhz @ 0x80684C4C
    *(0x34 + r5) = r0; // sth @ 0x80684C50
    r0 = *(0x36 + r4); // lbz @ 0x80684C54
    *(0x36 + r5) = r0; // stb @ 0x80684C58
    r0 = *(0x38 + r4); // lhz @ 0x80684C5C
    *(0x38 + r5) = r0; // sth @ 0x80684C60
    r0 = *(0x3a + r4); // lbz @ 0x80684C64
    *(0x3a + r5) = r0; // stb @ 0x80684C68
    r0 = *(0x40 + r4); // lhz @ 0x80684C6C
    *(0x40 + r5) = r0; // sth @ 0x80684C70
    r0 = *(0x42 + r4); // lbz @ 0x80684C74
    *(0x42 + r5) = r0; // stb @ 0x80684C78
    r0 = *(0x44 + r4); // lhz @ 0x80684C7C
    *(0x44 + r5) = r0; // sth @ 0x80684C80
    r0 = *(0x46 + r4); // lbz @ 0x80684C84
    *(0x46 + r5) = r0; // stb @ 0x80684C88
    r0 = *(0x4c + r4); // lhz @ 0x80684C8C
    *(0x4c + r5) = r0; // sth @ 0x80684C90
    r0 = *(0x4e + r4); // lbz @ 0x80684C94
    *(0x4e + r5) = r0; // stb @ 0x80684C98
    r0 = *(0x50 + r4); // lhz @ 0x80684C9C
    *(0x50 + r5) = r0; // sth @ 0x80684CA0
    r0 = *(0x52 + r4); // lbz @ 0x80684CA4
    *(0x52 + r5) = r0; // stb @ 0x80684CA8
    r0 = *(0x58 + r4); // lhz @ 0x80684CAC
    *(0x58 + r5) = r0; // sth @ 0x80684CB0
    r0 = *(0x5a + r4); // lbz @ 0x80684CB4
    *(0x5a + r5) = r0; // stb @ 0x80684CB8
    r0 = *(0x5c + r4); // lhz @ 0x80684CBC
    *(0x5c + r5) = r0; // sth @ 0x80684CC0
    r0 = *(0x5e + r4); // lbz @ 0x80684CC4
    r4 = r4 + 0x60; // 0x80684CC8
    *(0x5e + r5) = r0; // stb @ 0x80684CCC
    r5 = r5 + 0x60; // 0x80684CD0
    if (counter-- != 0) goto 0x0x80684bcc;
    r8 = r3 + 0xc8; // 0x80684CD8
    /* li r0, 0xc */ // 0x80684CDC
    r6 = r8 + 0xb; // 0x80684CE0
    /* subf r6, r5, r6 */ // 0x80684CE4
    r6 = r6 u/ r0; // 0x80684CE8
    /* mtctr r6 */ // 0x80684CEC
    if (>=) goto 0x0x80684d24;
    r0 = *(4 + r4); // lhz @ 0x80684CF8
    *(4 + r5) = r0; // sth @ 0x80684CFC
    r0 = *(6 + r4); // lbz @ 0x80684D00
    *(6 + r5) = r0; // stb @ 0x80684D04
    r0 = *(8 + r4); // lhz @ 0x80684D08
    *(8 + r5) = r0; // sth @ 0x80684D0C
    r0 = *(0xa + r4); // lbz @ 0x80684D10
    r4 = r4 + 0xc; // 0x80684D14
    *(0xa + r5) = r0; // stb @ 0x80684D18
    r5 = r5 + 0xc; // 0x80684D1C
    if (counter-- != 0) goto 0x0x80684cf8;
    r0 = *(0xa8 + r7); // lhz @ 0x80684D24
    *(0xcc + r3) = r0; // sth @ 0x80684D28
    r0 = *(0xaa + r7); // lbz @ 0x80684D2C
    *(0xce + r3) = r0; // stb @ 0x80684D30
    r0 = *(0xac + r7); // lhz @ 0x80684D34
    *(0xd0 + r3) = r0; // sth @ 0x80684D38
    r0 = *(0xae + r7); // lbz @ 0x80684D3C
    *(0xd2 + r3) = r0; // stb @ 0x80684D40
    r0 = *(0xb0 + r7); // lwz @ 0x80684D44
    *(0xd4 + r3) = r0; // stw @ 0x80684D48
    r0 = *(0xb4 + r7); // lwz @ 0x80684D4C
    *(0xd8 + r3) = r0; // stw @ 0x80684D50
    r0 = *(0xb8 + r7); // lwz @ 0x80684D54
    *(0xdc + r3) = r0; // stw @ 0x80684D58
    r0 = *(0xbc + r7); // lwz @ 0x80684D5C
    *(0xe0 + r3) = r0; // stw @ 0x80684D60
    r0 = *(0xc0 + r7); // lbz @ 0x80684D64
    *(0xe4 + r3) = r0; // stb @ 0x80684D68
    r0 = *(0xc1 + r7); // lbz @ 0x80684D6C
    *(0xe5 + r3) = r0; // stb @ 0x80684D70
    r0 = *(0xc2 + r7); // lbz @ 0x80684D74
    *(0xe6 + r3) = r0; // stb @ 0x80684D78
    r0 = *(0xc3 + r7); // lbz @ 0x80684D7C
    *(0xe7 + r3) = r0; // stb @ 0x80684D80
    r0 = *(0xc4 + r7); // lwz @ 0x80684D84
    *(0xe8 + r3) = r0; // stw @ 0x80684D88
    r0 = *(0xc8 + r7); // lbz @ 0x80684D8C
    *(0xec + r3) = r0; // stb @ 0x80684D90
    r0 = *(0xcc + r7); // lwz @ 0x80684D94
    *(0xf0 + r3) = r0; // stw @ 0x80684D98
    r0 = *(0xd0 + r7); // lwz @ 0x80684D9C
    *(0xf4 + r3) = r0; // stw @ 0x80684DA0
    r0 = *(0xd4 + r7); // lwz @ 0x80684DA4
    *(0xf8 + r3) = r0; // stw @ 0x80684DA8
    r31 = *(0xc + r1); // lwz @ 0x80684DAC
    r30 = *(8 + r1); // lwz @ 0x80684DB0
    return;
}