/* Function at 0x80637E20, size=108 bytes */
/* Stack frame: 32 bytes */

void FUN_80637E20(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lfs f9, 0(r4) */ // 0x80637E20
    /* lfs f0, 0(r5) */ // 0x80637E24
    /* lfs f8, 4(r4) */ // 0x80637E28
    /* fsubs f6, f0, f9 */ // 0x80637E2C
    /* lfs f2, 4(r5) */ // 0x80637E30
    /* lfs f7, 8(r4) */ // 0x80637E34
    /* lfs f0, 8(r5) */ // 0x80637E38
    /* fsubs f5, f2, f8 */ // 0x80637E3C
    /* fsubs f4, f0, f7 */ // 0x80637E44
    /* fmuls f3, f1, f6 */ // 0x80637E48
    /* stfs f9, 0(r3) */ // 0x80637E4C
    /* fmuls f2, f1, f5 */ // 0x80637E50
    /* fmuls f0, f1, f4 */ // 0x80637E54
    /* stfs f8, 4(r3) */ // 0x80637E58
    /* fadds f3, f9, f3 */ // 0x80637E5C
    /* fadds f1, f8, f2 */ // 0x80637E60
    /* stfs f7, 8(r3) */ // 0x80637E64
    /* fadds f0, f7, f0 */ // 0x80637E68
    /* stfs f6, 8(r1) */ // 0x80637E6C
    /* stfs f5, 0xc(r1) */ // 0x80637E70
    /* stfs f4, 0x10(r1) */ // 0x80637E74
    /* stfs f3, 0(r3) */ // 0x80637E78
    /* stfs f1, 4(r3) */ // 0x80637E7C
    /* stfs f0, 8(r3) */ // 0x80637E80
    return;
}