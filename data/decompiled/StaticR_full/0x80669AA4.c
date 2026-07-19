/* Function at 0x80669AA4, size=180 bytes */
/* Stack frame: 0 bytes */

int FUN_80669AA4(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* li r0, 5 */ // 0x80669AA4
    r11 = *(0x70 + r3); // lwz @ 0x80669AA8
    /* li r10, 0 */ // 0x80669AAC
    /* li r9, 0 */ // 0x80669AB0
    /* li r5, 0 */ // 0x80669AB4
    /* li r7, 1 */ // 0x80669AB8
    /* mtctr r0 */ // 0x80669ABC
    r8 = r7 << r9; // slw
    /* and. r0, r11, r8 */ // 0x80669AC4
    if (==) goto 0x0x80669af0;
    r6 = *(0x3c + r3); // lwz @ 0x80669ACC
    r0 = *(4 + r6); // lwz @ 0x80669AD0
    /* and. r0, r8, r0 */ // 0x80669AD4
    if (==) goto 0x0x80669af0;
    r6 = r6 + r5; // 0x80669ADC
    r0 = *(0x54 + r6); // lwz @ 0x80669AE0
    if (!=) goto 0x0x80669af0;
    r10 = r10 | r8; // 0x80669AEC
    r9 = r9 + 1; // 0x80669AF0
    r5 = r5 + 0x5c; // 0x80669AF4
    if (counter-- != 0) goto 0x0x80669ac0;
    if (!=) goto 0x0x80669b20;
    /* li r3, 0 */ // 0x80669B04
    /* li r0, 0x46 */ // 0x80669B08
    *(0 + r4) = r3; // sth @ 0x80669B0C
    *(2 + r4) = r3; // sth @ 0x80669B10
    *(4 + r4) = r3; // sth @ 0x80669B14
    *(6 + r4) = r0; // sth @ 0x80669B18
    return;
    r0 = *(0x78 + r3); // lwz @ 0x80669B20
    /* lis r3, 0 */ // 0x80669B24
    r3 = r3 + 0; // 0x80669B28
    /* mulli r0, r0, 0x18 */ // 0x80669B2C
    r7 = r3 + r0; // 0x80669B30
    r6 = *(0x10 + r7); // lha @ 0x80669B34
    r5 = *(0x12 + r7); // lha @ 0x80669B38
    r3 = *(0x14 + r7); // lha @ 0x80669B3C
    r0 = *(0x16 + r7); // lha @ 0x80669B40
    *(0 + r4) = r6; // sth @ 0x80669B44
    *(2 + r4) = r5; // sth @ 0x80669B48
    *(4 + r4) = r3; // sth @ 0x80669B4C
    *(6 + r4) = r0; // sth @ 0x80669B50
    return;
}