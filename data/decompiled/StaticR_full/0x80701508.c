/* Function at 0x80701508, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80701508(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80701518
    r30 = r3;
    r3 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
}