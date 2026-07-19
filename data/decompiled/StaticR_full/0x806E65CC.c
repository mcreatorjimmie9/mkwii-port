/* Function at 0x806E65CC, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E65CC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806E65D8
    r31 = r3;
    r3 = r3 + 8; // 0x806E65E0
    FUN_805E3430(r3); // bl 0x805E3430
}