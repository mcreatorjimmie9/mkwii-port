/* Function at 0x807052F0, size=28 bytes */
/* Stack frame: 528 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807052F0(int r3)
{
    /* Stack frame: -528(r1) */
    /* saved r31 */
    *(0x20c + r1) = r31; // stw @ 0x807052FC
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}