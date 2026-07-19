/* Function at 0x805CF9A0, size=212 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_805CF9A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -176(r1) */
    /* saved r23 */
    /* mulli r0, r4, 0x1c */ // 0x805CF9AC
    /* stmw r23, 0x8c(r1) */ // 0x805CF9B0
    r30 = r3;
    r3 = r3 + r0; // 0x805CF9B8
    /* lis r29, 0 */ // 0x805CF9BC
    r31 = r3 + 8; // 0x805CF9C0
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    r3 = r31;
    r29 = r29 + 0; // 0x805CF9E0
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805cfadc;
    if (<) goto 0x0x805cfa00;
    /* li r8, 0 */ // 0x805CF9F8
    /* b 0x805cfa0c */ // 0x805CF9FC
    /* slwi r0, r24, 2 */ // 0x805CFA00
    r3 = r29 + 0x130; // 0x805CFA04
    /* lwzx r8, r3, r0 */ // 0x805CFA08
    /* lis r4, 0 */ // 0x805CFA0C
    r4 = r4 + 0; // 0x805CFA14
    r5 = r4 + 0xab; // 0x805CFA1C
    /* li r4, 0x80 */ // 0x805CFA20
    if (<) goto 0x0x805cfa30;
    /* li r6, 0 */ // 0x805CFA28
    /* b 0x805cfa3c */ // 0x805CFA2C
    /* slwi r0, r23, 2 */ // 0x805CFA30
    r6 = r29 + 0x1f0; // 0x805CFA34
    /* lwzx r6, r6, r0 */ // 0x805CFA38
    /* slwi r10, r25, 2 */ // 0x805CFA3C
    r7 = r29 + 0x280; // 0x805CFA40
    /* slwi r0, r26, 2 */ // 0x805CFA44
    r9 = r29 + 0x28c; // 0x805CFA48
    /* lwzx r7, r7, r10 */ // 0x805CFA4C
    /* lwzx r9, r9, r0 */ // 0x805CFA50
    /* crclr cr1eq */ // 0x805CFA54
    FUN_805E3430(r9); // bl 0x805E3430
    *(0x4dc + r30) = r31; // stw @ 0x805CFA5C
    r3 = r30 + 0x4e8; // 0x805CFA60
    /* li r5, 0x40 */ // 0x805CFA68
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805CFA70
}