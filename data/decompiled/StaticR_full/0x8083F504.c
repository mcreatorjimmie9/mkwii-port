/* Function at 0x8083F504, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F504(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8083F50C
    /* lis r5, 0 */ // 0x8083F510
    /* lfs f2, 0(r6) */ // 0x8083F514
    *(0x34 + r1) = r0; // stw @ 0x8083F518
    /* fmuls f1, f1, f2 */ // 0x8083F51C
    /* lfs f0, 0(r5) */ // 0x8083F520
    *(0x2c + r1) = r31; // stw @ 0x8083F524
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x8083F530
    r30 = r3;
    /* fmuls f1, f0, f1 */ // 0x8083F538
    FUN_805E3430(r4, r3); // bl 0x805E3430
}