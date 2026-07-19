/* Function at 0x805EF3C8, size=56 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EF3C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* stmw r27, 0x5c(r1) */ // 0x805EF3D4
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    /* li r31, 0 */ // 0x805EF3E8
    /* b 0x805ef448 */ // 0x805EF3EC
    r4 = r28;
    r5 = r31;
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}