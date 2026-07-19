/* Function at 0x806381C0, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806381C0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lfs f1, 0(r5) */ // 0x806381C8
    /* lfs f0, 4(r5) */ // 0x806381CC
    *(0x24 + r1) = r0; // stw @ 0x806381D0
    /* fmuls f1, f1, f1 */ // 0x806381D4
    /* fmuls f0, f0, f0 */ // 0x806381D8
    /* lfs f2, 8(r5) */ // 0x806381DC
    *(0x1c + r1) = r31; // stw @ 0x806381E0
    r31 = r5;
    /* fmuls f2, f2, f2 */ // 0x806381E8
    *(0x18 + r1) = r30; // stw @ 0x806381EC
    /* fadds f0, f1, f0 */ // 0x806381F0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806381F8
    r29 = r3;
    /* fadds f1, f2, f0 */ // 0x80638200
    FUN_805E3430(); // bl 0x805E3430
}