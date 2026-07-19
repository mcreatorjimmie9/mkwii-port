/* Function at 0x8079C810, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8079C810(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8079C818
    /* lfs f2, 0xc(r4) */ // 0x8079C81C
    *(0x14 + r1) = r0; // stw @ 0x8079C820
    /* lfs f0, 0(r5) */ // 0x8079C824
    *(0xc + r1) = r31; // stw @ 0x8079C828
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8079C830
    r30 = r3;
    /* lfs f1, 0x28(r3) */ // 0x8079C838
    /* fadds f1, f1, f2 */ // 0x8079C83C
    /* stfs f1, 0x28(r3) */ // 0x8079C840
    /* fmuls f1, f0, f1 */ // 0x8079C844
    FUN_805E3430(); // bl 0x805E3430
}