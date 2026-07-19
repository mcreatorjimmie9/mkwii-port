/* Function at 0x806E9E64, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E9E64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x806E9E74
    *(8 + r1) = r30; // stw @ 0x806E9E78
    r30 = r3;
    *(0 + r3) = r31; // stw @ 0x806E9E80
    *(4 + r3) = r4; // stw @ 0x806E9E84
    *(8 + r3) = r31; // stw @ 0x806E9E88
    r3 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
}