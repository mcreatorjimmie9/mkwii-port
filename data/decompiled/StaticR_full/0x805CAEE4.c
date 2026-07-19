/* Function at 0x805CAEE4, size=276 bytes */
/* Stack frame: 0 bytes */

int FUN_805CAEE4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r0 = r4 rlwinm 1; // rlwinm
    r6 = r3 + r0; // 0x805CAEE8
    r0 = *(0xbc + r6); // lha @ 0x805CAEEC
    /* bgtlr  */ // 0x805CAEF4
    /* lis r8, 0 */ // 0x805CAEF8
    r11 = *(0x114 + r3); // lha @ 0x805CAEFC
    r9 = *(0 + r8); // lwz @ 0x805CAF00
    /* lis r8, 1 */ // 0x805CAF04
    /* lis r7, -0x7fff */ // 0x805CAF08
    r0 = r4 rlwinm 2; // rlwinm
    r10 = *(0x20 + r9); // lwz @ 0x805CAF10
    r9 = r7 + -0x7fff; // 0x805CAF14
    r7 = r3 + r0; // 0x805CAF18
    r0 = r5 rlwinm 3; // rlwinm
    r9 = r9 * r10; // 0x805CAF20
    r7 = *(0x44 + r7); // lwz @ 0x805CAF24
    r8 = r8 + -1; // 0x805CAF28
    r5 = r7 + r0; // 0x805CAF2C
    r0 = *(4 + r5); // lhz @ 0x805CAF30
    /* srwi r9, r9, 0xf */ // 0x805CAF38
    r5 = r9 * r8; // 0x805CAF3C
    /* subf r5, r5, r10 */ // 0x805CAF40
    /* clrlwi r5, r5, 0x10 */ // 0x805CAF44
    /* subf r7, r5, r0 */ // 0x805CAF48
    if (>=) goto 0x0x805caf54;
    /* subf r7, r11, r7 */ // 0x805CAF50
    if (>=) goto 0x0x805caf8c;
    /* subfic r7, r7, 0x46 */ // 0x805CAF5C
    /* lis r5, 0x6666 */ // 0x805CAF60
    r0 = r7 + 9; // 0x805CAF64
    r5 = r5 + 0x6667; // 0x805CAF68
    /* mulhw r0, r5, r0 */ // 0x805CAF6C
    r0 = r0 >> 2; // srawi
    /* srwi r5, r0, 0x1f */ // 0x805CAF74
    r7 = r0 + r5; // 0x805CAF78
    if (<=) goto 0x0x805cafc8;
    /* li r7, 3 */ // 0x805CAF84
    /* b 0x805cafc8 */ // 0x805CAF88
    if (<=) goto 0x0x805cafc4;
    /* lis r5, 0x6666 */ // 0x805CAF94
    r0 = r7 + -0x79; // 0x805CAF98
    r5 = r5 + 0x6667; // 0x805CAF9C
    /* mulhw r0, r5, r0 */ // 0x805CAFA0
    r0 = r0 >> 2; // srawi
    /* srwi r5, r0, 0x1f */ // 0x805CAFA8
    r0 = r0 + r5; // 0x805CAFAC
    if (<=) goto 0x0x805cafbc;
    /* li r0, 3 */ // 0x805CAFB8
    /* neg r7, r0 */ // 0x805CAFBC
    /* b 0x805cafc8 */ // 0x805CAFC0
    /* li r7, 0 */ // 0x805CAFC4
    r5 = *(0x40 + r3); // lwz @ 0x805CAFC8
    /* li r0, 0x5a */ // 0x805CAFCC
    r5 = r5 + r4; // 0x805CAFD0
    *(0x10 + r5) = r7; // stb @ 0x805CAFD4
    r3 = *(0x40 + r3); // lwz @ 0x805CAFD8
    r4 = r3 + r4; // 0x805CAFDC
    r3 = *(0x1c + r4); // lbz @ 0x805CAFE0
    /* cntlzw r3, r3 */ // 0x805CAFE4
    /* srwi r3, r3, 5 */ // 0x805CAFE8
    *(0x1c + r4) = r3; // stb @ 0x805CAFEC
    *(0xbc + r6) = r0; // sth @ 0x805CAFF0
    return;
}