/* Function at 0x8062A3CC, size=128 bytes */
/* Stack frame: 32 bytes */

void FUN_8062A3CC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* lfs f2, 4(r4) */ // 0x8062A3D0
    /* lfs f5, 0x88(r3) */ // 0x8062A3D4
    /* lfs f0, 8(r4) */ // 0x8062A3D8
    /* fsubs f2, f2, f5 */ // 0x8062A3DC
    /* lfs f6, 0x8c(r3) */ // 0x8062A3E0
    /* lfs f3, 0(r4) */ // 0x8062A3E4
    /* lfs f8, 0x84(r3) */ // 0x8062A3E8
    /* fsubs f0, f0, f6 */ // 0x8062A3EC
    /* fmuls f4, f2, f1 */ // 0x8062A3F0
    /* fsubs f7, f3, f8 */ // 0x8062A3F4
    /* stfs f2, 0xc(r1) */ // 0x8062A3F8
    /* fmuls f3, f0, f1 */ // 0x8062A3FC
    r4 = *(4 + r3); // lwz @ 0x8062A400
    /* fadds f2, f5, f4 */ // 0x8062A404
    /* fmuls f5, f7, f1 */ // 0x8062A408
    /* fadds f0, f6, f3 */ // 0x8062A40C
    /* stfs f7, 8(r1) */ // 0x8062A410
    /* fadds f1, f8, f5 */ // 0x8062A414
    /* stfs f2, 0x88(r3) */ // 0x8062A418
    /* stfs f0, 0x8c(r3) */ // 0x8062A41C
    /* stfs f1, 0x84(r3) */ // 0x8062A420
    /* stfs f1, 0xb0(r4) */ // 0x8062A424
    /* lfs f0, 0x88(r3) */ // 0x8062A428
    /* stfs f0, 0xb4(r4) */ // 0x8062A42C
    /* lfs f0, 0x8c(r3) */ // 0x8062A430
    /* stfs f5, 8(r1) */ // 0x8062A434
    /* stfs f4, 0xc(r1) */ // 0x8062A438
    /* stfs f3, 0x10(r1) */ // 0x8062A43C
    /* stfs f0, 0xb8(r4) */ // 0x8062A440
    return;
}