/* Function at 0x805F62A4, size=48 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805F62A4(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x74 + r1) = r29; // stw @ 0x805F62BC
    r29 = r4;
    *(0x70 + r1) = r28; // stw @ 0x805F62C4
    r28 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}