/* Function at 0x8062D100, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062D100(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8062D10C
    r31 = r3;
    r3 = r4;
    r4 = r31;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}