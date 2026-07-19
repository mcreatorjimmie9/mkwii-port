/* Function at 0x8086290C, size=44 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8086290C(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80862914
    /* lfs f0, 0(r4) */ // 0x80862918
    *(0x54 + r1) = r0; // stw @ 0x80862920
    /* fmuls f1, f0, f1 */ // 0x80862924
    *(0x4c + r1) = r31; // stw @ 0x80862928
    r31 = r3;
    FUN_805E3430(r3); // bl 0x805E3430
}