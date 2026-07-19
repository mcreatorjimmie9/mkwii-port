/* Function at 0x805C4C84, size=312 bytes */
/* Stack frame: 0 bytes */

int FUN_805C4C84(int r3, int r4, int r6, int r7, int r8, int r9, int r10)
{
    if (>=) goto 0x0x805c4cb4;
    r3 = *(0x3c + r3); // lwz @ 0x805C4C8C
    r0 = *(4 + r3); // lhz @ 0x805C4C90
    *(4 + r5) = r0; // sth @ 0x805C4C94
    r0 = *(6 + r3); // lbz @ 0x805C4C98
    *(6 + r5) = r0; // stb @ 0x805C4C9C
    r0 = *(8 + r3); // lhz @ 0x805C4CA0
    *(8 + r5) = r0; // sth @ 0x805C4CA4
    r0 = *(0xa + r3); // lbz @ 0x805C4CA8
    *(0xa + r5) = r0; // stb @ 0x805C4CAC
    return;
    /* lis r6, 0 */ // 0x805C4CB4
    r6 = *(0 + r6); // lwz @ 0x805C4CB8
    r6 = *(0x14 + r6); // lwz @ 0x805C4CBC
    r0 = *(0x40 + r6); // lbz @ 0x805C4CC0
    if (==) goto 0x0x805c4cf0;
    /* li r6, 1 */ // 0x805C4CCC
    /* li r4, 0x63 */ // 0x805C4CD0
    /* li r3, 0x3b */ // 0x805C4CD4
    /* li r0, 0x3e7 */ // 0x805C4CD8
    *(0xa + r5) = r6; // stb @ 0x805C4CDC
    *(4 + r5) = r4; // sth @ 0x805C4CE0
    *(6 + r5) = r3; // stb @ 0x805C4CE4
    *(8 + r5) = r0; // sth @ 0x805C4CE8
    return;
    r6 = r4 + -2; // 0x805C4CF0
    r0 = r4 + -1; // 0x805C4CF4
    /* mulli r12, r6, 0xc */ // 0x805C4CF8
    r6 = *(0x3c + r3); // lwz @ 0x805C4CFC
    /* li r10, 0 */ // 0x805C4D00
    /* li r9, 0 */ // 0x805C4D04
    r7 = r6 + r12; // 0x805C4D08
    /* mulli r11, r0, 0xc */ // 0x805C4D0C
    r4 = *(8 + r7); // lhz @ 0x805C4D10
    r6 = r6 + r11; // 0x805C4D14
    r0 = *(8 + r6); // lhz @ 0x805C4D18
    /* subf. r8, r4, r0 */ // 0x805C4D1C
    if (>=) goto 0x0x805c4d2c;
    /* li r9, -1 */ // 0x805C4D24
    r8 = r8 + 0x3e8; // 0x805C4D28
    r4 = *(6 + r7); // lbz @ 0x805C4D2C
    r0 = *(6 + r6); // lbz @ 0x805C4D30
    /* subf r0, r4, r0 */ // 0x805C4D34
    /* add. r9, r9, r0 */ // 0x805C4D38
    if (>=) goto 0x0x805c4d48;
    /* li r10, -1 */ // 0x805C4D40
    r9 = r9 + 0x3c; // 0x805C4D44
    r4 = *(4 + r7); // lhz @ 0x805C4D48
    r0 = *(4 + r6); // lhz @ 0x805C4D4C
    /* subf r0, r4, r0 */ // 0x805C4D50
    /* add. r10, r10, r0 */ // 0x805C4D54
    if (>=) goto 0x0x805c4d68;
    /* li r10, 0 */ // 0x805C4D5C
    /* li r9, 0 */ // 0x805C4D60
    /* li r8, 0 */ // 0x805C4D64
    /* li r0, 1 */ // 0x805C4D68
    *(0xa + r5) = r0; // stb @ 0x805C4D6C
    *(4 + r5) = r10; // sth @ 0x805C4D70
    *(6 + r5) = r9; // stb @ 0x805C4D74
    *(8 + r5) = r8; // sth @ 0x805C4D78
    r4 = *(0x3c + r3); // lwz @ 0x805C4D7C
    r3 = r4 + r11; // 0x805C4D80
    r0 = *(0xa + r3); // lbz @ 0x805C4D84
    if (==) goto 0x0x805c4da0;
    r3 = r4 + r12; // 0x805C4D90
    r0 = *(0xa + r3); // lbz @ 0x805C4D94
    /* bnelr  */ // 0x805C4D9C
    /* lis r3, 1 */ // 0x805C4DA0
    /* li r0, 0 */ // 0x805C4DA4
    r3 = r3 + -1; // 0x805C4DA8
    *(4 + r5) = r3; // sth @ 0x805C4DAC
    *(6 + r5) = r0; // stb @ 0x805C4DB0
    *(8 + r5) = r0; // sth @ 0x805C4DB4
    return;
}