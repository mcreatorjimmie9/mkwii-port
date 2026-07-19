/* Function at 0x807A8B10, size=40 bytes */
/* Stack frame: 1152 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A8B10(int r3, int r5)
{
    /* Stack frame: -1152(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x474 + r1) = r29; // stw @ 0x807A8B2C
    r29 = r3;
    FUN_805E3430(r5); // bl 0x805E3430
}