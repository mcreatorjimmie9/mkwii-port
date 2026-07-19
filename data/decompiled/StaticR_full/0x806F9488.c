/* Function at 0x806F9488, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F9488(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806F9494
    r31 = r3;
    r3 = *(0x757c + r3); // lwz @ 0x806F949C
    FUN_805E3430(); // bl 0x805E3430
}