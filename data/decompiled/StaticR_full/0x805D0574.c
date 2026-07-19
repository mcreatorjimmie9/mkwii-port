/* Function at 0x805D0574, size=24 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D0574(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805D0580
    r31 = r3;
    FUN_805E3430(); // bl 0x805E3430
}