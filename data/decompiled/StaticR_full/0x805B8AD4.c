/* Function at 0x805B8AD4, size=88 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_805B8AD4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r26 */
    /* stmw r26, 0x28(r1) */ // 0x805B8AE4
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    FUN_805E34E4(); // bl 0x805E34E4
    if (!=) goto 0x0x805b8b10;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r30 = *(0xc94 + r3); // lwz @ 0x805B8B0C
    if (!=) goto 0x0x805b8b1c;
    r4 = r30;
    /* li r3, 0xb8 */ // 0x805B8B20
    /* li r5, 4 */ // 0x805B8B24
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}