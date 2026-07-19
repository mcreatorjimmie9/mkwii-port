/* Function at 0x805A7FD4, size=76 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A7FD4(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805A7FDC
    *(0x54 + r1) = r0; // stw @ 0x805A7FE0
    /* lfs f4, 0(r5) */ // 0x805A7FE4
    *(0x4c + r1) = r31; // stw @ 0x805A7FE8
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x805A7FF0
    /* lfs f2, 0x14(r4) */ // 0x805A7FF4
    /* lfs f1, 0x10(r4) */ // 0x805A7FF8
    /* fmuls f3, f4, f2 */ // 0x805A7FFC
    /* lfs f0, 0xc(r4) */ // 0x805A8000
    /* fmuls f2, f4, f1 */ // 0x805A8004
    /* fmuls f1, f4, f0 */ // 0x805A8008
    /* stfs f3, 0xc(r3) */ // 0x805A800C
    /* stfs f1, 4(r3) */ // 0x805A8010
    /* stfs f2, 8(r3) */ // 0x805A8014
    FUN_805E3430(r3); // bl 0x805E3430
}