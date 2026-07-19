/* Function at 0x805DA974, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_805DA974(int r3, int r4)
{
    /* lfs f2, 4(r4) */ // 0x805DA974
    /* lfs f0, 0(r4) */ // 0x805DA978
    /* fmuls f2, f2, f1 */ // 0x805DA97C
    /* fmuls f0, f0, f1 */ // 0x805DA980
    /* stfs f2, 4(r3) */ // 0x805DA984
    /* stfs f0, 0(r3) */ // 0x805DA988
    return;
}