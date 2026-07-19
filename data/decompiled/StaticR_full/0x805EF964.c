/* Function at 0x805EF964, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805EF964(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    r4 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805EF980
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x805EF988
    r0 = *(0xc + r6); // lwz @ 0x805EF990
    *(8 + r1) = r0; // stw @ 0x805EF994
    FUN_805E3430(r3); // bl 0x805E3430
}