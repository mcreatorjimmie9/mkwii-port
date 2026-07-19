/* Function at 0x807F27D4, size=60 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F27D4(int r3, int r4)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807F27DC
    *(0x84 + r1) = r0; // stw @ 0x807F27E0
    /* lfs f1, 0(r4) */ // 0x807F27E4
    *(0x7c + r1) = r31; // stw @ 0x807F27E8
    r31 = r3;
    /* lfs f0, 0xd8(r3) */ // 0x807F27F0
    /* fneg f2, f0 */ // 0x807F27F4
    /* lfs f0, 0x120(r3) */ // 0x807F27F8
    /* fmuls f1, f2, f1 */ // 0x807F27FC
    /* fadds f0, f0, f1 */ // 0x807F2800
    /* stfs f0, 0x120(r3) */ // 0x807F2804
    FUN_805E3430(r3); // bl 0x805E3430
}