/* Function at 0x805EBC30, size=400 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_805EBC30(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r11 = r5;
    *(0x34 + r1) = r0; // stw @ 0x805EBC40
    /* li r0, 0 */ // 0x805EBC44
    *(0x2c + r1) = r31; // stw @ 0x805EBC48
    r31 = r9;
    *(0x28 + r1) = r30; // stw @ 0x805EBC50
    r30 = r7;
    *(0x24 + r1) = r29; // stw @ 0x805EBC58
    /* li r29, 0 */ // 0x805EBC5C
    *(0x20 + r1) = r28; // stw @ 0x805EBC60
    r28 = r3;
    *(0x1c + r1) = r0; // stw @ 0x805EBC68
    if (==) goto 0x0x805ebc8c;
    if (==) goto 0x0x805ebcb8;
    if (==) goto 0x0x805ebce8;
    if (==) goto 0x0x805ebd2c;
    /* b 0x805ebde4 */ // 0x805EBC88
    r0 = *(0xc + r3); // lwz @ 0x805EBC8C
    /* lis r3, 0 */ // 0x805EBC90
    *(0x18 + r1) = r0; // stw @ 0x805EBC94
    r6 = *(0 + r3); // lwz @ 0x805EBC9C
    r3 = *(0x18 + r7); // lwz @ 0x805EBCA4
    r6 = r6 + 1; // 0x805EBCA8
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r29 = r3;
    /* b 0x805ebde4 */ // 0x805EBCB4
    r0 = *(0xc + r3); // lwz @ 0x805EBCB8
    /* lis r3, 0 */ // 0x805EBCBC
    *(0x14 + r1) = r0; // stw @ 0x805EBCC0
    r6 = r11;
    r8 = *(0 + r3); // lwz @ 0x805EBCC8
    r3 = *(0x18 + r7); // lwz @ 0x805EBCD0
    r7 = r8 + 1; // 0x805EBCD8
    FUN_805E3430(r4, r5, r7); // bl 0x805E3430
    r29 = r3;
    /* b 0x805ebde4 */ // 0x805EBCE4
    /* li r4, 0 */ // 0x805EBCE8
    r3 = r3 + 0xc; // 0x805EBCEC
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = r3;
    r3 = r28 + 0xc; // 0x805EBCF8
    /* li r4, 0 */ // 0x805EBCFC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    *(0x10 + r1) = r3; // stw @ 0x805EBD04
    *(0xc + r1) = r31; // stw @ 0x805EBD14
    /* li r7, 1 */ // 0x805EBD18
    r3 = *(0x18 + r30); // lwz @ 0x805EBD1C
    FUN_805E3430(r5, r6, r7); // bl 0x805E3430
    r29 = r3;
    /* b 0x805ebde4 */ // 0x805EBD28
    /* lis r4, 0 */ // 0x805EBD2C
    r4 = *(0 + r4); // lwz @ 0x805EBD34
    r4 = *(0x54 + r4); // lwz @ 0x805EBD38
    r4 = *(0x18 + r4); // lwz @ 0x805EBD3C
    r0 = r4 + -2; // 0x805EBD40
    /* cntlzw r0, r0 */ // 0x805EBD44
    /* srwi r29, r0, 5 */ // 0x805EBD48
    if (!=) goto 0x0x805ebd70;
    r3 = *(0x14 + r3); // lwz @ 0x805EBD50
    r0 = *(4 + r3); // lwz @ 0x805EBD54
    if (!=) goto 0x0x805ebd68;
    r0 = *(0 + r3); // lwz @ 0x805EBD60
    /* b 0x805ebd74 */ // 0x805EBD64
    /* li r0, 0 */ // 0x805EBD68
    /* b 0x805ebd74 */ // 0x805EBD6C
    /* li r0, 0 */ // 0x805EBD70
    r4 = *(0x20 + r7); // lwz @ 0x805EBD78
    r3 = r6;
    r5 = r8;
    r6 = r11;
    r7 = r0;
    /* li r8, 0 */ // 0x805EBD8C
    if (==) goto 0x0x805ebda0;
    if (<) goto 0x0x805ebda0;
    /* li r8, 1 */ // 0x805EBD9C
    /* neg r0, r8 */ // 0x805EBDA0
    r0 = r0 | r8; // 0x805EBDA4
    r0 = r0 >> 0x1f; // srawi
    r8 = r0 rlwinm 0; // rlwinm
    FUN_805B6268(r8); // bl 0x805B6268
    r29 = r3;
    if (==) goto 0x0x805ebdd0;
}