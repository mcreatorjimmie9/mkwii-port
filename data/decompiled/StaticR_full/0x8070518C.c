/* Function at 0x8070518C, size=48 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8070518C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r26 */
    /* stmw r26, 0x48(r1) */ // 0x80705198
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r30 = r6;
    r29 = r7;
    /* li r4, 0x40 */ // 0x807051B4
    FUN_805E3430(r3, r4); // bl 0x805E3430
}