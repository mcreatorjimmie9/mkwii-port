/* Function at 0x806E6648, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E6648(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x806E6658
    *(8 + r1) = r30; // stw @ 0x806E665C
    r30 = r3;
    *(0x2757 + r3) = r31; // stb @ 0x806E6664
    r3 = r3 + 8; // 0x806E6668
    FUN_805E3430(r3); // bl 0x805E3430
}