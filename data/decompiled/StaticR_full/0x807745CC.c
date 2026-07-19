/* Function at 0x807745CC, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807745CC(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807745D8
    r31 = r5;
    FUN_805E3430(); // bl 0x805E3430
}