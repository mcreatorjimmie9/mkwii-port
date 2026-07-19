/* Function at 0x80735EBC, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80735EBC(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x80735EBC
    /* lfs f3, 8(r4) */ // 0x80735EC0
    /* lfs f0, 0(r5) */ // 0x80735EC4
    /* lfs f2, 4(r4) */ // 0x80735EC8
    /* fdivs f4, f0, f1 */ // 0x80735ECC
    /* lfs f0, 0(r4) */ // 0x80735ED0
    /* fmuls f3, f3, f4 */ // 0x80735ED4
    /* fmuls f1, f2, f4 */ // 0x80735ED8
    /* fmuls f0, f0, f4 */ // 0x80735EDC
    /* stfs f3, 8(r3) */ // 0x80735EE0
    /* stfs f0, 0(r3) */ // 0x80735EE4
    /* stfs f1, 4(r3) */ // 0x80735EE8
    return;
}