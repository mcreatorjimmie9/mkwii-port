/* Function at 0x8070A714, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8070A714(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8070A720
    r27 = r4;
    r26 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r3 = r27;
    /* li r4, 0 */ // 0x8070A73C
    FUN_805E3430(r3, r4); // bl 0x805E3430
}