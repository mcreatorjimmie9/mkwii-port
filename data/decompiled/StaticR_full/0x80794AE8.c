/* Function at 0x80794AE8, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80794AE8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80794AF8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80794B00
    r30 = r3;
    if (==) goto 0x0x80794b90;
    /* addic. r3, r3, 0xc8 */ // 0x80794B0C
    if (==) goto 0x0x80794b18;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r30, 0xc4 */ // 0x80794B18
    if (==) goto 0x0x80794b24;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r30, 0xc0 */ // 0x80794B24
    if (==) goto 0x0x80794b30;
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r3, r30, 0xbc */ // 0x80794B30
    if (==) goto 0x0x80794b3c;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80794b80;
    if (==) goto 0x0x80794b80;
    r3 = r30 + 0x94; // 0x80794B48
    /* li r4, 0 */ // 0x80794B4C
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x80794b80;
    /* lis r4, 0 */ // 0x80794B5C
    r3 = r30 + 0x80; // 0x80794B60
    r4 = r4 + 0; // 0x80794B64
    /* li r5, 4 */ // 0x80794B68
    /* li r6, 4 */ // 0x80794B6C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80794B78
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80794b90;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80794B94
    r30 = *(8 + r1); // lwz @ 0x80794B98
    r0 = *(0x14 + r1); // lwz @ 0x80794B9C
}