/* Function at 0x805A443C, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805A443C(int r3, int r4)
{
    /* lfs f3, 8(r4) */ // 0x805A443C
    /* lfs f2, 4(r4) */ // 0x805A4440
    /* lfs f0, 0(r4) */ // 0x805A4444
    /* fmuls f3, f3, f1 */ // 0x805A4448
    /* fmuls f2, f2, f1 */ // 0x805A444C
    /* fmuls f0, f0, f1 */ // 0x805A4450
    /* stfs f3, 8(r3) */ // 0x805A4454
    /* stfs f0, 0(r3) */ // 0x805A4458
    /* stfs f2, 4(r3) */ // 0x805A445C
    return;
}