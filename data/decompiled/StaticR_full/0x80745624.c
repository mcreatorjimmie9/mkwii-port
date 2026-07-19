/* Function at 0x80745624, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_80745624(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x80745624
    /* lfs f0, 0(r5) */ // 0x80745628
    /* fmuls f2, f0, f2 */ // 0x8074562C
    /* fdivs f0, f2, f1 */ // 0x80745630
    /* stfs f0, 0(r3) */ // 0x80745634
    /* fmuls f0, f0, f0 */ // 0x80745638
    /* fdivs f0, f0, f2 */ // 0x8074563C
    /* stfs f0, 0(r4) */ // 0x80745640
    return;
}