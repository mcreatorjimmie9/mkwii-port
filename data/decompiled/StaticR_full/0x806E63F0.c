/* Function at 0x806E63F0, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E63F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806E6408
    r30 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}