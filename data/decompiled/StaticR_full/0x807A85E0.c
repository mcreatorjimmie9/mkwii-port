/* Function at 0x807A85E0, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A85E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807A85F0
    r30 = r4;
    FUN_805E3430(); // bl 0x805E3430
}