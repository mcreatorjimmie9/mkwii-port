/* Function at 0x80705D48, size=36 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_80705D48(int r3, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r24 */
    /* stmw r24, 0x30(r1) */ // 0x80705D54
    r24 = r3;
    r25 = r5;
    r29 = r6;
    /* li r3, 0x400 */ // 0x80705D64
    FUN_805E3430(r3); // bl 0x805E3430
}