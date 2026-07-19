/* Function at 0x8070EE58, size=68 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8070EE58(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8070EE60
    /* lfs f0, 0(r4) */ // 0x8070EE68
    *(0x4c + r1) = r31; // stw @ 0x8070EE6C
    *(0x48 + r1) = r30; // stw @ 0x8070EE70
    r30 = r3;
    /* lfs f2, 0x34(r3) */ // 0x8070EE78
    /* lfs f1, 0x38(r3) */ // 0x8070EE7C
    /* lfs f3, 0x30(r3) */ // 0x8070EE80
    /* fadds f0, f0, f2 */ // 0x8070EE84
    /* stfs f3, 8(r1) */ // 0x8070EE88
    /* stfs f0, 0xc(r1) */ // 0x8070EE90
    /* stfs f1, 0x10(r1) */ // 0x8070EE94
    FUN_805E3430(r3); // bl 0x805E3430
}