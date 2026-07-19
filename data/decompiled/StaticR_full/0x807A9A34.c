/* Function at 0x807A9A34, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807A9A34(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807A9A44
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}