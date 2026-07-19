/* Function at 0x806E7DE4, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E7DE4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x806E7DF4
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806E7E00
    FUN_805E3430(r4, r3); // bl 0x805E3430
}