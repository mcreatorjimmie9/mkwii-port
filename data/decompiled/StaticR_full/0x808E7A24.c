/* Function at 0x808E7A24, size=972 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_808E7A24(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0xf8 + r1) = r30; // stw @ 0x808E7A38
    r30 = r3;
    *(0xf4 + r1) = r29; // stw @ 0x808E7A40
    r5 = *(0x840 + r3); // lwz @ 0x808E7A44
    r0 = *(0x83c + r3); // lwz @ 0x808E7A48
    r7 = *(0x240 + r4); // lwz @ 0x808E7A4C
    /* slwi r5, r5, 2 */ // 0x808E7A50
    r6 = *(0x6c4 + r3); // lwz @ 0x808E7A54
    /* mulli r0, r0, 0xa */ // 0x808E7A58
    /* lwzx r5, r6, r5 */ // 0x808E7A60
    r5 = r5 + r0; // 0x808E7A64
    if (==) goto 0x0x808e7a80;
    if (==) goto 0x0x808e7a88;
    if (==) goto 0x0x808e7db0;
    /* b 0x808e7dd4 */ // 0x808E7A7C
    FUN_808B3CF4(); // bl 0x808B3CF4
    /* b 0x808e7dd4 */ // 0x808E7A84
    r0 = *(0 + r5); // lha @ 0x808E7A88
    r3 = *(0xcec + r3); // lwz @ 0x808E7A8C
    /* clrlwi r0, r0, 0x18 */ // 0x808E7A90
    /* mulli r0, r0, 0x70 */ // 0x808E7A94
    r3 = *(0 + r3); // lwz @ 0x808E7A98
    r3 = r3 + r0; // 0x808E7A9C
    r0 = *(0x10 + r3); // lhz @ 0x808E7AA0
    *(0x78 + r1) = r0; // sth @ 0x808E7AA4
    r0 = *(0x12 + r3); // lhz @ 0x808E7AA8
    *(0x7a + r1) = r0; // sth @ 0x808E7AAC
    r0 = *(0x14 + r3); // lbz @ 0x808E7AB0
    *(0x7c + r1) = r0; // stb @ 0x808E7AB4
    r0 = *(0x15 + r3); // lbz @ 0x808E7AB8
    *(0x7d + r1) = r0; // stb @ 0x808E7ABC
    r0 = *(0x16 + r3); // lbz @ 0x808E7AC0
    *(0x7e + r1) = r0; // stb @ 0x808E7AC4
    r0 = *(0x17 + r3); // lbz @ 0x808E7AC8
    *(0x7f + r1) = r0; // stb @ 0x808E7ACC
    r0 = *(0x18 + r3); // lwz @ 0x808E7AD0
    *(0x80 + r1) = r0; // stw @ 0x808E7AD4
    r0 = *(0x1c + r3); // lwz @ 0x808E7AD8
    *(0x84 + r1) = r0; // stw @ 0x808E7ADC
    r4 = *(0x20 + r3); // lbz @ 0x808E7AE0
    r0 = *(0x21 + r3); // lbz @ 0x808E7AE4
    *(0x89 + r1) = r0; // stb @ 0x808E7AE8
    *(0x88 + r1) = r4; // stb @ 0x808E7AEC
    r4 = *(0x22 + r3); // lbz @ 0x808E7AF0
    r0 = *(0x23 + r3); // lbz @ 0x808E7AF4
    *(0x8b + r1) = r0; // stb @ 0x808E7AF8
    *(0x8a + r1) = r4; // stb @ 0x808E7AFC
    r4 = *(0x24 + r3); // lbz @ 0x808E7B00
    r0 = *(0x25 + r3); // lbz @ 0x808E7B04
    *(0x8d + r1) = r0; // stb @ 0x808E7B08
    *(0x8c + r1) = r4; // stb @ 0x808E7B0C
    r4 = *(0x26 + r3); // lbz @ 0x808E7B10
    r0 = *(0x27 + r3); // lbz @ 0x808E7B14
    *(0x8f + r1) = r0; // stb @ 0x808E7B18
    *(0x8e + r1) = r4; // stb @ 0x808E7B1C
    r0 = *(0x28 + r3); // lbz @ 0x808E7B20
    *(0x90 + r1) = r0; // stb @ 0x808E7B24
    r0 = *(0x29 + r3); // lbz @ 0x808E7B28
    *(0x91 + r1) = r0; // stb @ 0x808E7B2C
    r0 = *(0x2a + r3); // lbz @ 0x808E7B30
    *(0x92 + r1) = r0; // stb @ 0x808E7B34
    r0 = *(0x2b + r3); // lbz @ 0x808E7B38
    *(0x93 + r1) = r0; // stb @ 0x808E7B3C
    r0 = *(0x2c + r3); // lwz @ 0x808E7B40
    *(0x94 + r1) = r0; // stw @ 0x808E7B44
    r4 = *(0x30 + r3); // lbz @ 0x808E7B48
    r0 = *(0x31 + r3); // lbz @ 0x808E7B4C
    *(0x99 + r1) = r0; // stb @ 0x808E7B50
    *(0x98 + r1) = r4; // stb @ 0x808E7B54
    r4 = *(0x32 + r3); // lbz @ 0x808E7B58
    r0 = *(0x33 + r3); // lbz @ 0x808E7B5C
    *(0x9b + r1) = r0; // stb @ 0x808E7B60
    *(0x9a + r1) = r4; // stb @ 0x808E7B64
    r4 = *(0x34 + r3); // lbz @ 0x808E7B68
    r0 = *(0x35 + r3); // lbz @ 0x808E7B6C
    *(0x9d + r1) = r0; // stb @ 0x808E7B70
    *(0x9c + r1) = r4; // stb @ 0x808E7B74
    r4 = *(0x36 + r3); // lbz @ 0x808E7B78
    r0 = *(0x37 + r3); // lbz @ 0x808E7B7C
    *(0x9f + r1) = r0; // stb @ 0x808E7B80
    *(0x9e + r1) = r4; // stb @ 0x808E7B84
    r0 = *(0x38 + r3); // lbz @ 0x808E7B88
    *(0xa0 + r1) = r0; // stb @ 0x808E7B8C
    r0 = *(0x39 + r3); // lbz @ 0x808E7B90
    *(0xa1 + r1) = r0; // stb @ 0x808E7B94
    r0 = *(0x3a + r3); // lbz @ 0x808E7B98
    *(0xa2 + r1) = r0; // stb @ 0x808E7B9C
    r0 = *(0x3b + r3); // lbz @ 0x808E7BA0
    *(0xa3 + r1) = r0; // stb @ 0x808E7BA4
    r0 = *(0x3c + r3); // lhz @ 0x808E7BA8
    *(0xa4 + r1) = r0; // sth @ 0x808E7BAC
    r0 = *(0x3e + r3); // lbz @ 0x808E7BB0
    *(0xa6 + r1) = r0; // stb @ 0x808E7BB4
    r0 = *(0x3f + r3); // lbz @ 0x808E7BB8
    *(0xa7 + r1) = r0; // stb @ 0x808E7BBC
    r0 = *(0x40 + r3); // lwz @ 0x808E7BC0
    *(0xa8 + r1) = r0; // stw @ 0x808E7BC4
    r0 = *(0x44 + r3); // lwz @ 0x808E7BC8
    *(0xac + r1) = r0; // stw @ 0x808E7BCC
    r0 = *(0x48 + r3); // lwz @ 0x808E7BD0
    *(0xb0 + r1) = r0; // stw @ 0x808E7BD4
    r0 = *(0x4c + r3); // lwz @ 0x808E7BD8
    *(0xb4 + r1) = r0; // stw @ 0x808E7BDC
    r0 = *(0x50 + r3); // lwz @ 0x808E7BE0
    *(0xb8 + r1) = r0; // stw @ 0x808E7BE4
    r0 = *(0x54 + r3); // lwz @ 0x808E7BE8
    *(0xbc + r1) = r0; // stw @ 0x808E7BEC
    r0 = *(0x58 + r3); // lhz @ 0x808E7BF0
    *(0xc0 + r1) = r0; // sth @ 0x808E7BF4
    r4 = *(0x5a + r3); // lhz @ 0x808E7BF8
    r0 = *(0x5c + r3); // lhz @ 0x808E7BFC
    *(0xc4 + r1) = r0; // sth @ 0x808E7C00
    *(0xc2 + r1) = r4; // sth @ 0x808E7C04
    r4 = *(0x5e + r3); // lhz @ 0x808E7C08
    r0 = *(0x60 + r3); // lhz @ 0x808E7C0C
    *(0xc8 + r1) = r0; // sth @ 0x808E7C10
    *(0xc6 + r1) = r4; // sth @ 0x808E7C14
    r4 = *(0x62 + r3); // lhz @ 0x808E7C18
    /* li r0, 0xe */ // 0x808E7C1C
    *(0xca + r1) = r4; // sth @ 0x808E7C20
    r7 = *(0x64 + r3); // lwz @ 0x808E7C2C
    *(0xcc + r1) = r7; // stw @ 0x808E7C30
    r7 = *(0x68 + r3); // lhz @ 0x808E7C34
    *(0xd0 + r1) = r7; // sth @ 0x808E7C38
    r8 = *(0x6a + r3); // lbz @ 0x808E7C3C
    r7 = *(0x6b + r3); // lbz @ 0x808E7C40
    *(0xd3 + r1) = r7; // stb @ 0x808E7C44
    *(0xd2 + r1) = r8; // stb @ 0x808E7C48
    r8 = *(0x6c + r3); // lbz @ 0x808E7C4C
    r7 = *(0x6d + r3); // lbz @ 0x808E7C50
    *(0xd5 + r1) = r7; // stb @ 0x808E7C54
    *(0xd4 + r1) = r8; // stb @ 0x808E7C58
    r8 = *(0x6e + r3); // lbz @ 0x808E7C5C
    r7 = *(0x6f + r3); // lbz @ 0x808E7C60
    *(0xd7 + r1) = r7; // stb @ 0x808E7C64
    *(0xd6 + r1) = r8; // stb @ 0x808E7C68
    r8 = *(0x70 + r3); // lbz @ 0x808E7C6C
    r7 = *(0x71 + r3); // lbz @ 0x808E7C70
    *(0xd9 + r1) = r7; // stb @ 0x808E7C74
    *(0xd8 + r1) = r8; // stb @ 0x808E7C78
    r8 = *(0x72 + r3); // lbz @ 0x808E7C7C
    r7 = *(0x73 + r3); // lbz @ 0x808E7C80
    *(0xdb + r1) = r7; // stb @ 0x808E7C84
    *(0xda + r1) = r8; // stb @ 0x808E7C88
    r8 = *(0x74 + r3); // lbz @ 0x808E7C8C
    r7 = *(0x75 + r3); // lbz @ 0x808E7C90
    *(0xdd + r1) = r7; // stb @ 0x808E7C94
    *(0xdc + r1) = r8; // stb @ 0x808E7C98
    r8 = *(0x76 + r3); // lbz @ 0x808E7C9C
    r7 = *(0x77 + r3); // lbz @ 0x808E7CA0
    *(0xdf + r1) = r7; // stb @ 0x808E7CA4
    *(0xde + r1) = r8; // stb @ 0x808E7CA8
    r8 = *(0x78 + r3); // lbz @ 0x808E7CAC
    r7 = *(0x79 + r3); // lbz @ 0x808E7CB0
    *(0xe1 + r1) = r7; // stb @ 0x808E7CB4
    *(0xe0 + r1) = r8; // stb @ 0x808E7CB8
    r7 = *(0x7a + r3); // lbz @ 0x808E7CBC
    *(0xe2 + r1) = r7; // stb @ 0x808E7CC0
    r7 = *(0x7b + r3); // lbz @ 0x808E7CC4
    *(0xe3 + r1) = r7; // stb @ 0x808E7CC8
    r7 = *(0x7c + r3); // lbz @ 0x808E7CCC
    *(0xe4 + r1) = r7; // stb @ 0x808E7CD0
    r7 = *(0x7d + r3); // lbz @ 0x808E7CD4
    *(0xe5 + r1) = r7; // stb @ 0x808E7CD8
    r7 = *(0x7e + r3); // lbz @ 0x808E7CDC
    *(0xe6 + r1) = r7; // stb @ 0x808E7CE0
    r3 = *(0x7f + r3); // lbz @ 0x808E7CE4
    *(0xe7 + r1) = r3; // stb @ 0x808E7CE8
    /* mtctr r0 */ // 0x808E7CEC
    r3 = *(4 + r4); // lwz @ 0x808E7CF0
    r0 = *(8 + r4); // lwzu @ 0x808E7CF4
    *(4 + r6) = r3; // stw @ 0x808E7CF8
    *(8 + r6) = r0; // stwu @ 0x808E7CFC
    if (counter-- != 0) goto 0x0x808e7cf0;
    /* lis r7, 0 */ // 0x808E7D04
    r6 = *(0xf + r1); // lbz @ 0x808E7D08
    r3 = *(0 + r7); // lwz @ 0x808E7D0C
    /* li r0, 0xe */ // 0x808E7D10
    *(0x175c + r3) = r6; // stw @ 0x808E7D18
    r3 = *(0 + r7); // lwz @ 0x808E7D1C
    r6 = *(0xc + r1); // lbz @ 0x808E7D20
    *(0x1758 + r3) = r6; // stw @ 0x808E7D24
    r3 = *(0 + r7); // lwz @ 0x808E7D28
    r6 = *(0xd + r1); // lbz @ 0x808E7D2C
    *(0xc24 + r3) = r6; // stw @ 0x808E7D30
    r3 = *(0 + r7); // lwz @ 0x808E7D34
    r6 = *(0xe + r1); // lbz @ 0x808E7D38
    *(0xc20 + r3) = r6; // stw @ 0x808E7D3C
    r3 = *(0 + r7); // lwz @ 0x808E7D40
    r6 = r3 + 0x1788; // 0x808E7D44
    /* mtctr r0 */ // 0x808E7D48
    r3 = *(4 + r4); // lwz @ 0x808E7D4C
    r0 = *(8 + r4); // lwzu @ 0x808E7D50
    *(4 + r6) = r3; // stw @ 0x808E7D54
    *(8 + r6) = r0; // stwu @ 0x808E7D58
    if (counter-- != 0) goto 0x0x808e7d4c;
    r29 = *(8 + r5); // lha @ 0x808E7D60
    r0 = r29 + -1; // 0x808E7D64
    if (<=) goto 0x0x808e7d7c;
    if (==) goto 0x0x808e7d9c;
    /* b 0x808e7dd4 */ // 0x808E7D78
    /* li r3, 0x7d */ // 0x808E7D7C
    FUN_808E875C(r3); // bl 0x808E875C
    *(0x930 + r3) = r29; // stw @ 0x808E7D84
    r3 = r30;
    r5 = r31;
    /* li r4, 0x7d */ // 0x808E7D90
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808e7dd4 */ // 0x808E7D98
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6d */ // 0x808E7DA4
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808e7dd4 */ // 0x808E7DAC
    r29 = *(6 + r5); // lha @ 0x808E7DB0
    /* li r3, 0x7e */ // 0x808E7DB4
    FUN_808EB974(r4, r3); // bl 0x808EB974
    /* lis r4, 0 */ // 0x808E7DBC
    *(0x6c4 + r3) = r29; // stw @ 0x808E7DC0
    /* lfs f1, 0(r4) */ // 0x808E7DC4
    r3 = r30;
    /* li r4, 0x7e */ // 0x808E7DCC
    FUN_808B37C4(r4, r3, r4); // bl 0x808B37C4
    r0 = *(0x104 + r1); // lwz @ 0x808E7DD4
    r31 = *(0xfc + r1); // lwz @ 0x808E7DD8
    r30 = *(0xf8 + r1); // lwz @ 0x808E7DDC
    r29 = *(0xf4 + r1); // lwz @ 0x808E7DE0
    return;
}