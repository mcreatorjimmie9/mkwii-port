/* Function at 0x80862EB0, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80862EB0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* cmpwi cr1, r3, 0 */
    /* li r10, 0 */ // 0x80862EBC
    *(0x24 + r1) = r0; // stw @ 0x80862EC0
    /* stmw r26, 8(r1) */ // 0x80862EC4
    r29 = r3;
    r30 = r4;
    r31 = r5;
    if (<=) goto 0x0x80862f70;
    r8 = r3 + -8; // 0x80862EDC
    if (<=) goto 0x0x80862f4c;
    /* li r9, 0 */ // 0x80862EE4
    if (<) goto 0x0x80862f00;
    /* lis r7, -0x8000 */ // 0x80862EEC
    r0 = r7 + -2; // 0x80862EF0
    if (>) goto 0x0x80862f00;
    /* li r9, 1 */ // 0x80862EFC
    if (==) goto 0x0x80862f4c;
    r0 = r8 + 7; // 0x80862F08
    /* li r7, 0 */ // 0x80862F0C
    /* srwi r0, r0, 3 */ // 0x80862F10
    /* mtctr r0 */ // 0x80862F14
    if (<=) goto 0x0x80862f4c;
    r8 = r5 + r10; // 0x80862F20
    /* stbx r7, r5, r10 */ // 0x80862F24
    *(1 + r8) = r7; // stb @ 0x80862F2C
    *(2 + r8) = r7; // stb @ 0x80862F30
    *(3 + r8) = r7; // stb @ 0x80862F34
    *(4 + r8) = r7; // stb @ 0x80862F38
    *(5 + r8) = r7; // stb @ 0x80862F3C
    *(6 + r8) = r7; // stb @ 0x80862F40
    *(7 + r8) = r7; // stb @ 0x80862F44
    if (counter-- != 0) goto 0x0x80862f20;
    /* subf r0, r10, r3 */ // 0x80862F4C
    r5 = r5 + r10; // 0x80862F50
    /* li r7, 0 */ // 0x80862F54
    /* mtctr r0 */ // 0x80862F58
    if (>=) goto 0x0x80862f70;
    *(0 + r5) = r7; // stb @ 0x80862F64
    r5 = r5 + 1; // 0x80862F68
    if (counter-- != 0) goto 0x0x80862f64;
    /* slwi r0, r4, 2 */ // 0x80862F70
    /* lis r27, 0 */ // 0x80862F74
    r26 = r6 + r0; // 0x80862F78
    /* li r28, 1 */ // 0x80862F7C
    /* b 0x80862fcc */ // 0x80862F80
    r3 = *(0 + r27); // lwz @ 0x80862F84
    r4 = r29;
    r3 = *(8 + r3); // lwz @ 0x80862F8C
    FUN_805E364C(r4); // bl 0x805E364C
    r4 = r31;
    /* li r5, 0 */ // 0x80862F98
    r0 = *(0 + r4); // lbz @ 0x80862F9C
    if (!=) goto 0x0x80862fc0;
    /* addic. r3, r3, -1 */ // 0x80862FA8
    if (>=) goto 0x0x80862fc0;
    /* stbx r28, r31, r5 */ // 0x80862FB0
    r29 = r29 + -1; // 0x80862FB4
    *(0 + r26) = r5; // stw @ 0x80862FB8
    /* b 0x80862fcc */ // 0x80862FBC
    r5 = r5 + 1; // 0x80862FC0
    r4 = r4 + 1; // 0x80862FC4
    /* b 0x80862f9c */ // 0x80862FC8
    /* addic. r30, r30, -1 */ // 0x80862FCC
    r26 = r26 + -4; // 0x80862FD0
    if (>=) goto 0x0x80862f84;
    r0 = *(0x24 + r1); // lwz @ 0x80862FDC
    return;
}