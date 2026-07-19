/* Function at 0x805CFC48, size=212 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805CFC48(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -160(r1) */
    /* saved r27 */
    /* mulli r0, r4, 0x1c */ // 0x805CFC54
    /* stmw r27, 0x8c(r1) */ // 0x805CFC58
    r27 = r5;
    r3 = r3 + r0; // 0x805CFC60
    r28 = r6;
    r31 = r3 + 8; // 0x805CFC68
    r29 = r7;
    r30 = r8;
    r3 = r31;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805cfd20;
    if (!=) goto 0x0x805cfccc;
    /* lis r4, 0 */ // 0x805CFC8C
    r4 = r4 + 0; // 0x805CFC94
    r5 = r4 + 0xd3; // 0x805CFC9C
    /* li r4, 0x80 */ // 0x805CFCA0
    if (<) goto 0x0x805cfcb0;
    /* li r6, 0 */ // 0x805CFCA8
    /* b 0x805cfcc0 */ // 0x805CFCAC
    /* lis r6, 0 */ // 0x805CFCB0
    /* slwi r0, r27, 2 */ // 0x805CFCB4
    r6 = r6 + 0; // 0x805CFCB8
    /* lwzx r6, r6, r0 */ // 0x805CFCBC
    /* crclr cr1eq */ // 0x805CFCC0
    FUN_805E3430(r6, r6); // bl 0x805E3430
    /* b 0x805cfd08 */ // 0x805CFCC8
    /* lis r4, 0 */ // 0x805CFCCC
    r4 = r4 + 0; // 0x805CFCD4
    r5 = r4 + 0xef; // 0x805CFCDC
    /* li r4, 0x80 */ // 0x805CFCE0
    if (<) goto 0x0x805cfcf0;
    /* li r6, 0 */ // 0x805CFCE8
    /* b 0x805cfd00 */ // 0x805CFCEC
    /* lis r6, 0 */ // 0x805CFCF0
    /* slwi r0, r27, 2 */ // 0x805CFCF4
    r6 = r6 + 0; // 0x805CFCF8
    /* lwzx r6, r6, r0 */ // 0x805CFCFC
    /* crclr cr1eq */ // 0x805CFD00
    FUN_805E3430(r6, r6); // bl 0x805E3430
    r3 = r31;
    r5 = r29;
    r6 = r30;
    /* li r7, 0 */ // 0x805CFD18
}