/* Function at 0x805EE0A8, size=44 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805EE0A8(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r26 */
    /* stmw r26, 0x48(r1) */ // 0x805EE0B4
    r28 = r4;
    r29 = r5;
    r27 = r3;
    /* li r30, 0 */ // 0x805EE0C4
    r3 = r28;
    r4 = r29;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}