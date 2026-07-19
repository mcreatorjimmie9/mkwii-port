/* Function at 0x805C9F78, size=444 bytes */
/* Stack frame: 0 bytes */

int FUN_805C9F78(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* beqlr  */ // 0x805C9F7C
    /* li r0, 4 */ // 0x805C9F80
    r3 = r4;
    /* li r9, 0 */ // 0x805C9F88
    /* li r10, 0 */ // 0x805C9F8C
    /* mtctr r0 */ // 0x805C9F90
    r0 = *(4 + r3); // lhz @ 0x805C9F94
    if (!=) goto 0x0x805c9fcc;
    r0 = *(0 + r3); // lwz @ 0x805C9FA0
    if (!=) goto 0x0x805c9fcc;
    r0 = *(6 + r3); // lbz @ 0x805C9FAC
    if (!=) goto 0x0x805c9fcc;
    r0 = *(7 + r3); // lbz @ 0x805C9FB8
    if (!=) goto 0x0x805c9fcc;
    /* li r9, 1 */ // 0x805C9FC4
    /* b 0x805ca08c */ // 0x805C9FC8
    r0 = *(0xc + r3); // lhz @ 0x805C9FCC
    if (!=) goto 0x0x805ca008;
    r0 = *(8 + r3); // lwz @ 0x805C9FDC
    if (!=) goto 0x0x805ca008;
    r0 = *(0xe + r3); // lbz @ 0x805C9FE8
    if (!=) goto 0x0x805ca008;
    r0 = *(0xf + r3); // lbz @ 0x805C9FF4
    if (!=) goto 0x0x805ca008;
    /* li r9, 1 */ // 0x805CA000
    /* b 0x805ca08c */ // 0x805CA004
    r0 = *(0x14 + r3); // lhz @ 0x805CA008
    if (!=) goto 0x0x805ca044;
    r0 = *(0x10 + r3); // lwz @ 0x805CA018
    if (!=) goto 0x0x805ca044;
    r0 = *(0x16 + r3); // lbz @ 0x805CA024
    if (!=) goto 0x0x805ca044;
    r0 = *(0x17 + r3); // lbz @ 0x805CA030
    if (!=) goto 0x0x805ca044;
    /* li r9, 1 */ // 0x805CA03C
    /* b 0x805ca08c */ // 0x805CA040
    r0 = *(0x1c + r3); // lhz @ 0x805CA044
    if (!=) goto 0x0x805ca080;
    r0 = *(0x18 + r3); // lwz @ 0x805CA054
    if (!=) goto 0x0x805ca080;
    r0 = *(0x1e + r3); // lbz @ 0x805CA060
    if (!=) goto 0x0x805ca080;
    r0 = *(0x1f + r3); // lbz @ 0x805CA06C
    if (!=) goto 0x0x805ca080;
    /* li r9, 1 */ // 0x805CA078
    /* b 0x805ca08c */ // 0x805CA07C
    r3 = r3 + 0x20; // 0x805CA084
    if (counter-- != 0) goto 0x0x805c9f94;
    if (!=) goto 0x0x805ca0e0;
    /* li r0, 0x10 */ // 0x805CA094
    r3 = r4;
    /* li r10, 0 */ // 0x805CA09C
    /* mtctr r0 */ // 0x805CA0A0
    r0 = *(0 + r3); // lwz @ 0x805CA0A4
    if (!=) goto 0x0x805ca0d4;
    /* extsh r0, r10 */ // 0x805CA0B0
    /* li r9, 1 */ // 0x805CA0B4
    /* slwi r0, r0, 3 */ // 0x805CA0B8
    /* stwx r5, r4, r0 */ // 0x805CA0BC
    r3 = r4 + r0; // 0x805CA0C0
    *(4 + r3) = r6; // sth @ 0x805CA0C4
    *(6 + r3) = r7; // stb @ 0x805CA0C8
    *(7 + r3) = r8; // stb @ 0x805CA0CC
    /* b 0x805ca0e0 */ // 0x805CA0D0
    r3 = r3 + 8; // 0x805CA0D8
    if (counter-- != 0) goto 0x0x805ca0a4;
    /* bnelr  */ // 0x805CA0E4
    /* li r0, 0x10 */ // 0x805CA0E8
    r3 = r4;
    /* li r9, 0 */ // 0x805CA0F0
    /* mtctr r0 */ // 0x805CA0F4
    r0 = *(0 + r3); // lwz @ 0x805CA0F8
    if (!=) goto 0x0x805ca124;
    /* extsh r0, r9 */ // 0x805CA104
    /* slwi r0, r0, 3 */ // 0x805CA108
    /* stwx r5, r4, r0 */ // 0x805CA10C
    r3 = r4 + r0; // 0x805CA110
    *(4 + r3) = r6; // sth @ 0x805CA114
    *(6 + r3) = r7; // stb @ 0x805CA118
    *(7 + r3) = r8; // stb @ 0x805CA11C
    return;
    r9 = r9 + 1; // 0x805CA124
    r3 = r3 + 8; // 0x805CA128
    if (counter-- != 0) goto 0x0x805ca0f8;
    return;
}