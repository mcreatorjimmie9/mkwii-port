/* Function at 0x805EBEF0, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805EBEF0(int r3, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x805EBF08
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x805EBF10
    r28 = r3;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
}