/* Function at 0x805F77A8, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F77A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805F77BC
    r30 = r4;
    r0 = *(0x1c + r3); // lwz @ 0x805F77C4
    if (==) goto 0x0x805f78a0;
    r3 = r3 + 0xa4; // 0x805F77D0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805f78a0;
    r3 = r31;
    r4 = r30;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}