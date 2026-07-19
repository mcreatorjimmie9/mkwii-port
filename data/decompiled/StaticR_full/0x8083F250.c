/* Function at 0x8083F250, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8083F250(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3 + 0xc; // 0x8083F258
    *(0xc + r1) = r31; // stw @ 0x8083F260
    /* lis r31, 0 */ // 0x8083F264
    r31 = r31 + 0; // 0x8083F268
    /* lfs f2, 0xc(r31) */ // 0x8083F26C
    *(8 + r1) = r30; // stw @ 0x8083F270
    r30 = r3;
    /* fmuls f1, f1, f2 */ // 0x8083F278
    /* lfs f0, 0x10(r31) */ // 0x8083F27C
    r3 = r3 + 4; // 0x8083F280
    /* fmuls f1, f0, f1 */ // 0x8083F284
    FUN_805E3430(r3); // bl 0x805E3430
}