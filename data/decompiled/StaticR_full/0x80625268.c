/* Function at 0x80625268, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80625268(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    r5 = r31;
    *(8 + r1) = r30; // stw @ 0x80625280
    r30 = r3;
    r3 = r3 + 0x24; // 0x80625288
    r4 = r3;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}