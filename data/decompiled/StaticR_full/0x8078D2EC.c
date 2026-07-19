/* Function at 0x8078D2EC, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8078D2EC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3 + 8; // 0x8078D2FC
    *(0x14 + r1) = r29; // stw @ 0x8078D304
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8078D30C
    r28 = r3;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}