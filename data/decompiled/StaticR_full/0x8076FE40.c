/* Function at 0x8076FE40, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076FE40(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8076FE4C
    r31 = r3;
    /* lfs f2, 0x4c(r3) */ // 0x8076FE54
    /* lfs f0, 0x50(r3) */ // 0x8076FE58
    /* fmuls f2, f2, f2 */ // 0x8076FE5C
    /* lfs f3, 0x54(r3) */ // 0x8076FE60
    /* fmuls f0, f0, f0 */ // 0x8076FE64
    /* stfs f1, 0x30(r3) */ // 0x8076FE68
    /* fmuls f1, f3, f3 */ // 0x8076FE6C
    /* fadds f0, f2, f0 */ // 0x8076FE70
    /* fadds f1, f1, f0 */ // 0x8076FE74
    FUN_805E3430(); // bl 0x805E3430
}