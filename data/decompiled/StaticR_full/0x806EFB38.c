/* Function at 0x806EFB38, size=348 bytes */
/* Stack frame: 0 bytes */

int FUN_806EFB38(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* lis r6, 0 */ // 0x806EFB38
    /* li r0, 2 */ // 0x806EFB3C
    r9 = *(0 + r6); // lwz @ 0x806EFB40
    /* li r8, -1 */ // 0x806EFB44
    /* li r7, 0 */ // 0x806EFB48
    /* mtctr r0 */ // 0x806EFB4C
    r6 = r9 + r7; // 0x806EFB50
    r0 = *(0x2920 + r6); // lbz @ 0x806EFB54
    if (!=) goto 0x0x806efb70;
    r8 = r8 + 1; // 0x806EFB60
    if (!=) goto 0x0x806efb70;
    /* b 0x806efc30 */ // 0x806EFB6C
    r7 = r7 + 1; // 0x806EFB70
    r6 = r9 + r7; // 0x806EFB74
    r0 = *(0x2920 + r6); // lbz @ 0x806EFB78
    if (!=) goto 0x0x806efb94;
    r8 = r8 + 1; // 0x806EFB84
    if (!=) goto 0x0x806efb94;
    /* b 0x806efc30 */ // 0x806EFB90
    r7 = r7 + 1; // 0x806EFB94
    r6 = r9 + r7; // 0x806EFB98
    r0 = *(0x2920 + r6); // lbz @ 0x806EFB9C
    if (!=) goto 0x0x806efbb8;
    r8 = r8 + 1; // 0x806EFBA8
    if (!=) goto 0x0x806efbb8;
    /* b 0x806efc30 */ // 0x806EFBB4
    r7 = r7 + 1; // 0x806EFBB8
    r6 = r9 + r7; // 0x806EFBBC
    r0 = *(0x2920 + r6); // lbz @ 0x806EFBC0
    if (!=) goto 0x0x806efbdc;
    r8 = r8 + 1; // 0x806EFBCC
    if (!=) goto 0x0x806efbdc;
    /* b 0x806efc30 */ // 0x806EFBD8
    r7 = r7 + 1; // 0x806EFBDC
    r6 = r9 + r7; // 0x806EFBE0
    r0 = *(0x2920 + r6); // lbz @ 0x806EFBE4
    if (!=) goto 0x0x806efc00;
    r8 = r8 + 1; // 0x806EFBF0
    if (!=) goto 0x0x806efc00;
    /* b 0x806efc30 */ // 0x806EFBFC
    r7 = r7 + 1; // 0x806EFC00
    r6 = r9 + r7; // 0x806EFC04
    r0 = *(0x2920 + r6); // lbz @ 0x806EFC08
    if (!=) goto 0x0x806efc24;
    r8 = r8 + 1; // 0x806EFC14
    if (!=) goto 0x0x806efc24;
    /* b 0x806efc30 */ // 0x806EFC20
    r7 = r7 + 1; // 0x806EFC24
    if (counter-- != 0) goto 0x0x806efb50;
    /* li r7, -1 */ // 0x806EFC2C
    /* li r0, 0xc */ // 0x806EFC30
    /* li r6, 0 */ // 0x806EFC34
    /* mtctr r0 */ // 0x806EFC38
    /* clrlwi r0, r6, 0x18 */ // 0x806EFC3C
    /* mulli r4, r0, 0x30 */ // 0x806EFC40
    r5 = r3 + r4; // 0x806EFC44
    r0 = *(0x34 + r5); // lwz @ 0x806EFC48
    if (>) goto 0x0x806efc58;
    /* b 0x806efc5c */ // 0x806EFC54
    /* li r0, -1 */ // 0x806EFC58
    if (==) goto 0x0x806efc84;
    r3 = r3 + r4; // 0x806EFC64
    /* li r4, 1 */ // 0x806EFC68
    r0 = *(0x38 + r3); // lwz @ 0x806EFC6C
    r3 = r4 << r7; // slw
    r0 = r3 & r0; // 0x806EFC74
    /* cntlzw r0, r0 */ // 0x806EFC78
    /* srwi r3, r0, 5 */ // 0x806EFC7C
    return;
    r6 = r6 + 1; // 0x806EFC84
    if (counter-- != 0) goto 0x0x806efc3c;
    /* li r3, 2 */ // 0x806EFC8C
    return;
}