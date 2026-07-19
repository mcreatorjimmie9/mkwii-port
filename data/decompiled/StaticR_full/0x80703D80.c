/* Function at 0x80703D80, size=64 bytes */
/* Stack frame: 704 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_80703D80(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -704(r1) */
    /* saved r24 */
    /* stmw r24, 0x2a0(r1) */ // 0x80703D8C
    r25 = r4;
    r26 = r5;
    r24 = r3;
    r31 = r3 + 0x18; // 0x80703D9C
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    /* li r4, 0 */ // 0x80703DB4
    /* li r5, 0x80 */ // 0x80703DB8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}