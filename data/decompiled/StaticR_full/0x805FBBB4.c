/* Function at 0x805FBBB4, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FBBB4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x805FBBC0
    r31 = r3;
    FUN_8061E098(); // bl 0x8061E098
    r3 = *(0x7c + r3); // lwz @ 0x805FBBCC
    /* lis r0, 0x4330 */ // 0x805FBBD0
    /* lis r4, 0 */ // 0x805FBBD4
    /* lis r5, 0 */ // 0x805FBBD8
    /* xoris r3, r3, 0x8000 */ // 0x805FBBDC
    *(0xc + r1) = r3; // stw @ 0x805FBBE0
    /* lfd f1, 0(r4) */ // 0x805FBBE4
    *(8 + r1) = r0; // stw @ 0x805FBBE8
    /* lfs f2, 0(r5) */ // 0x805FBBEC
    /* lfd f0, 8(r1) */ // 0x805FBBF0
    /* fsubs f0, f0, f1 */ // 0x805FBBF4
    /* fmuls f0, f0, f2 */ // 0x805FBBF8
    /* stfs f0, 0xa0(r31) */ // 0x805FBBFC
    r31 = *(0x1c + r1); // lwz @ 0x805FBC00
    r0 = *(0x24 + r1); // lwz @ 0x805FBC04
    return;
}