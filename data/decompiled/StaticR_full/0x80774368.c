/* Function at 0x80774368, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80774368(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80774374
    r31 = r5;
    FUN_805E3430(); // bl 0x805E3430
}