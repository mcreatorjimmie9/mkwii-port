/* Function at 0x805DAA2C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805DAA2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805DAA34
    /* lfs f0, 0(r4) */ // 0x805DAA3C
    *(0xc + r1) = r31; // stw @ 0x805DAA40
    /* li r31, 0 */ // 0x805DAA44
    /* fmuls f1, f0, f1 */ // 0x805DAA48
    *(8 + r1) = r30; // stw @ 0x805DAA4C
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}