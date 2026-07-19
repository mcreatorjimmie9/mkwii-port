/* Function at 0x805EC038, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805EC038(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x805EC04C
    r30 = r3;
    r3 = r5;
    FUN_805E3430(r3); // bl 0x805E3430
}