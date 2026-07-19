/* Function at 0x807AAFEC, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807AAFEC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807AAFF8
    r31 = r3;
    FUN_805E3430(); // bl 0x805E3430
}