/* Function at 0x805F3130, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F3130(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    r3 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805F3148
    r30 = r4;
    r4 = r6;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}