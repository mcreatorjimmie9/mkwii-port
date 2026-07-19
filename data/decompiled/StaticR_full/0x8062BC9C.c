/* Function at 0x8062BC9C, size=96 bytes */
/* Stack frame: 32 bytes */

void FUN_8062BC9C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* lfs f2, 0(r4) */ // 0x8062BCA0
    /* lfs f7, 0(r3) */ // 0x8062BCA4
    /* lfs f0, 4(r4) */ // 0x8062BCA8
    /* fsubs f3, f2, f7 */ // 0x8062BCAC
    /* lfs f6, 4(r3) */ // 0x8062BCB0
    /* lfs f2, 8(r4) */ // 0x8062BCB4
    /* lfs f5, 8(r3) */ // 0x8062BCB8
    /* fsubs f4, f0, f6 */ // 0x8062BCBC
    /* fmuls f0, f3, f1 */ // 0x8062BCC0
    /* fsubs f3, f2, f5 */ // 0x8062BCC4
    /* fmuls f4, f4, f1 */ // 0x8062BCC8
    /* stfs f0, 8(r1) */ // 0x8062BCCC
    /* fadds f2, f7, f0 */ // 0x8062BCD0
    /* fmuls f3, f3, f1 */ // 0x8062BCD4
    /* stfs f4, 0xc(r1) */ // 0x8062BCD8
    /* fadds f1, f6, f4 */ // 0x8062BCDC
    /* stfs f3, 0x10(r1) */ // 0x8062BCE0
    /* fadds f0, f5, f3 */ // 0x8062BCE4
    /* stfs f2, 0(r3) */ // 0x8062BCE8
    /* stfs f1, 4(r3) */ // 0x8062BCEC
    /* stfs f0, 8(r3) */ // 0x8062BCF0
    return;
}