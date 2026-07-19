/* Function at 0x805B915C, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B915C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B9170
    r30 = r3;
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
}