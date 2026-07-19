/* Function at 0x8085A160, size=52 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8085A160(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x8085A16C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = *(0x120 + r3); // lwz @ 0x8085A188
    /* slwi r3, r0, 2 */ // 0x8085A18C
    FUN_805E3430(); // bl 0x805E3430
}