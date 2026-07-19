/* Function at 0x807A89D0, size=40 bytes */
/* Stack frame: 1120 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A89D0(int r3, int r5)
{
    /* Stack frame: -1120(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x454 + r1) = r29; // stw @ 0x807A89EC
    r29 = r3;
    FUN_805E3430(r5); // bl 0x805E3430
}