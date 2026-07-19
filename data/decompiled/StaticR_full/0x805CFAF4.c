/* Function at 0x805CFAF4, size=212 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_805CFAF4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -176(r1) */
    /* saved r23 */
    /* mulli r0, r4, 0x1c */ // 0x805CFB00
    /* stmw r23, 0x8c(r1) */ // 0x805CFB04
    r30 = r3;
    r3 = r3 + r0; // 0x805CFB0C
    /* lis r29, 0 */ // 0x805CFB10
    r31 = r3 + 0x158; // 0x805CFB14
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    r3 = r31;
    r29 = r29 + 0; // 0x805CFB34
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805cfc30;
    if (<) goto 0x0x805cfb54;
    /* li r8, 0 */ // 0x805CFB4C
    /* b 0x805cfb60 */ // 0x805CFB50
    /* slwi r0, r24, 2 */ // 0x805CFB54
    r3 = r29 + 0x130; // 0x805CFB58
    /* lwzx r8, r3, r0 */ // 0x805CFB5C
    /* lis r4, 0 */ // 0x805CFB60
    r4 = r4 + 0; // 0x805CFB68
    r5 = r4 + 0xbf; // 0x805CFB70
    /* li r4, 0x80 */ // 0x805CFB74
    if (<) goto 0x0x805cfb84;
    /* li r6, 0 */ // 0x805CFB7C
    /* b 0x805cfb90 */ // 0x805CFB80
    /* slwi r0, r23, 2 */ // 0x805CFB84
    r6 = r29 + 0x1f0; // 0x805CFB88
    /* lwzx r6, r6, r0 */ // 0x805CFB8C
    /* slwi r10, r25, 2 */ // 0x805CFB90
    r7 = r29 + 0x280; // 0x805CFB94
    /* slwi r0, r26, 2 */ // 0x805CFB98
    r9 = r29 + 0x28c; // 0x805CFB9C
    /* lwzx r7, r7, r10 */ // 0x805CFBA0
    /* lwzx r9, r9, r0 */ // 0x805CFBA4
    /* crclr cr1eq */ // 0x805CFBA8
    FUN_805E3430(r9); // bl 0x805E3430
    *(0x4dc + r30) = r31; // stw @ 0x805CFBB0
    r3 = r30 + 0x4e8; // 0x805CFBB4
    /* li r5, 0x40 */ // 0x805CFBBC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805CFBC4
}