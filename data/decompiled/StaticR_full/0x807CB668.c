/* Function at 0x807CB668, size=28 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807CB668(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807CB674
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}