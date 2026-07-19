/* Function at 0x806288B4, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806288B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806288C8
    r30 = r3;
    /* li r3, 0x84 */ // 0x806288D0
    FUN_805E3430(r3); // bl 0x805E3430
}