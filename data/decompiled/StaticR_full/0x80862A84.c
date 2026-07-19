/* Function at 0x80862A84, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80862A84(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80862A8C
    /* lfs f0, 0(r4) */ // 0x80862A90
    *(0x54 + r1) = r0; // stw @ 0x80862A98
    /* fmuls f1, f0, f1 */ // 0x80862A9C
    *(0x4c + r1) = r31; // stw @ 0x80862AA0
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}