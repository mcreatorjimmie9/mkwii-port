/* Function at 0x807A87D8, size=44 bytes */
/* Stack frame: 1712 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A87D8(int r3, int r4, int r5)
{
    /* Stack frame: -1712(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x6a8 + r1) = r30; // stw @ 0x807A87F0
    r30 = r3;
    *(0x6a4 + r1) = r29; // stw @ 0x807A87F8
    r29 = r4;
    FUN_805E3430(r5); // bl 0x805E3430
}