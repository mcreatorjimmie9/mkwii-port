/* Function at 0x805A86E4, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805A86E4(int r3, int r4)
{
    /* lfs f3, 8(r4) */ // 0x805A86E4
    /* lfs f2, 4(r4) */ // 0x805A86E8
    /* lfs f0, 0(r4) */ // 0x805A86EC
    /* fmuls f3, f3, f1 */ // 0x805A86F0
    /* fmuls f2, f2, f1 */ // 0x805A86F4
    /* fmuls f0, f0, f1 */ // 0x805A86F8
    /* stfs f3, 8(r3) */ // 0x805A86FC
    /* stfs f0, 0(r3) */ // 0x805A8700
    /* stfs f2, 4(r3) */ // 0x805A8704
    return;
}