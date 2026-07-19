/* Function at 0x805EC098, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EC098(int r3, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805EC0A4
    r28 = r5;
    r27 = r3;
    r29 = r6;
    r30 = r7;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
}