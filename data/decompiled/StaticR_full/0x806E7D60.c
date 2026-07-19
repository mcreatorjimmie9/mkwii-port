/* Function at 0x806E7D60, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E7D60(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806E7D70
    r31 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}