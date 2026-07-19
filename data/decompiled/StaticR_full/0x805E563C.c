/* Function at 0x805E563C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E563C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E5648
    r31 = r3;
    r3 = r3 + 4; // 0x805E5650
    FUN_805E3430(r3); // bl 0x805E3430
}