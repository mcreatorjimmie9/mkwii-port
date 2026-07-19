/* Function at 0x805F1C60, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805F1C60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805F1C7C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805F1C84
    r28 = r3;
    FUN_805E3430(); // bl 0x805E3430
}