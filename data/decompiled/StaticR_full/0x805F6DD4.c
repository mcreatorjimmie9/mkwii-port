/* Function at 0x805F6DD4, size=124 bytes */
/* Stack frame: 0 bytes */

void FUN_805F6DD4(int r3, int r4, int r5)
{
    /* lfs f3, 8(r4) */ // 0x805F6DD4
    /* lfs f2, 0(r5) */ // 0x805F6DD8
    /* lfs f1, 4(r4) */ // 0x805F6DDC
    /* fmuls f7, f3, f2 */ // 0x805F6DE0
    /* lfs f0, 0(r4) */ // 0x805F6DE4
    /* fmuls f4, f1, f2 */ // 0x805F6DE8
    /* lfs f3, 0x18(r4) */ // 0x805F6DEC
    /* fmuls f1, f0, f2 */ // 0x805F6DF0
    /* lfs f5, 4(r5) */ // 0x805F6DF4
    /* lfs f0, 0x10(r4) */ // 0x805F6DF8
    /* fmuls f6, f3, f5 */ // 0x805F6DFC
    /* lfs f2, 0x14(r4) */ // 0x805F6E00
    /* fmuls f0, f0, f5 */ // 0x805F6E04
    /* lfs f8, 0x28(r4) */ // 0x805F6E08
    /* fmuls f3, f2, f5 */ // 0x805F6E0C
    /* lfs f9, 8(r5) */ // 0x805F6E10
    /* lfs f5, 0x24(r4) */ // 0x805F6E14
    /* fadds f6, f7, f6 */ // 0x805F6E18
    /* lfs f2, 0x20(r4) */ // 0x805F6E1C
    /* fmuls f8, f8, f9 */ // 0x805F6E20
    /* fadds f3, f4, f3 */ // 0x805F6E24
    /* fmuls f5, f5, f9 */ // 0x805F6E28
    /* fadds f0, f1, f0 */ // 0x805F6E2C
    /* fmuls f2, f2, f9 */ // 0x805F6E30
    /* fadds f4, f8, f6 */ // 0x805F6E34
    /* fadds f1, f5, f3 */ // 0x805F6E38
    /* fadds f0, f2, f0 */ // 0x805F6E3C
    /* stfs f4, 8(r3) */ // 0x805F6E40
    /* stfs f1, 4(r3) */ // 0x805F6E44
    /* stfs f0, 0(r3) */ // 0x805F6E48
    return;
}