/* Function at 0x805C70D8, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805C70D8(int r3, int r4, int r5)
{
    /* slwi r0, r5, 2 */ // 0x805C70D8
    r5 = r4 + r0; // 0x805C70DC
    /* lfsx f0, r4, r0 */ // 0x805C70E0
    /* lfs f1, 0x10(r5) */ // 0x805C70E4
    /* lfs f2, 0x20(r5) */ // 0x805C70E8
    /* stfs f0, 0(r3) */ // 0x805C70EC
    /* stfs f1, 4(r3) */ // 0x805C70F0
    /* stfs f2, 8(r3) */ // 0x805C70F4
    return;
}