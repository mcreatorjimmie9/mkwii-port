/* Function at 0x806EEF44, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EEF44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r5 = *(0 + r4); // lwz @ 0x806EEF4C
    r6 = *(4 + r4); // lwz @ 0x806EEF54
    *(0x1c + r1) = r31; // stw @ 0x806EEF58
    *(0x18 + r1) = r30; // stw @ 0x806EEF5C
    r30 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}