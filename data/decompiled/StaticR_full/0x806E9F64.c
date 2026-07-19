/* Function at 0x806E9F64, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E9F64(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x806E9F78
    r30 = r3;
    r3 = *(0 + r3); // lwz @ 0x806E9F80
    FUN_805E3430(); // bl 0x805E3430
}