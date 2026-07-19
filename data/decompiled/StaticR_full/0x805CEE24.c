/* Function at 0x805CEE24, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805CEE24(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805CEE30
    r27 = r4;
    /* mulli r31, r27, 0x54 */ // 0x805CEE38
    r26 = r3;
    r28 = r5;
    r4 = r6;
    r3 = r3 + r31; // 0x805CEE48
    r29 = r7;
    r30 = r8;
    *(0x33c + r3) = r5; // stw @ 0x805CEE54
    r3 = r3 + 0x344; // 0x805CEE58
    /* li r5, 0x40 */ // 0x805CEE5C
    FUN_805E3430(r3, r5); // bl 0x805E3430
}