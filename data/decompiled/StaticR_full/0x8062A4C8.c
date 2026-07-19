/* Function at 0x8062A4C8, size=128 bytes */
/* Stack frame: 32 bytes */

void FUN_8062A4C8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* lfs f2, 4(r4) */ // 0x8062A4CC
    /* lfs f5, 0x94(r3) */ // 0x8062A4D0
    /* lfs f0, 8(r4) */ // 0x8062A4D4
    /* fsubs f2, f2, f5 */ // 0x8062A4D8
    /* lfs f6, 0x98(r3) */ // 0x8062A4DC
    /* lfs f3, 0(r4) */ // 0x8062A4E0
    /* lfs f8, 0x90(r3) */ // 0x8062A4E4
    /* fsubs f0, f0, f6 */ // 0x8062A4E8
    /* fmuls f4, f2, f1 */ // 0x8062A4EC
    /* fsubs f7, f3, f8 */ // 0x8062A4F0
    /* stfs f2, 0xc(r1) */ // 0x8062A4F4
    /* fmuls f3, f0, f1 */ // 0x8062A4F8
    r4 = *(4 + r3); // lwz @ 0x8062A4FC
    /* fadds f2, f5, f4 */ // 0x8062A500
    /* fmuls f5, f7, f1 */ // 0x8062A504
    /* fadds f0, f6, f3 */ // 0x8062A508
    /* stfs f7, 8(r1) */ // 0x8062A50C
    /* fadds f1, f8, f5 */ // 0x8062A510
    /* stfs f2, 0x94(r3) */ // 0x8062A514
    /* stfs f0, 0x98(r3) */ // 0x8062A518
    /* stfs f1, 0x90(r3) */ // 0x8062A51C
    /* stfs f1, 0xc8(r4) */ // 0x8062A520
    /* lfs f0, 0x94(r3) */ // 0x8062A524
    /* stfs f0, 0xcc(r4) */ // 0x8062A528
    /* lfs f0, 0x98(r3) */ // 0x8062A52C
    /* stfs f5, 8(r1) */ // 0x8062A530
    /* stfs f4, 0xc(r1) */ // 0x8062A534
    /* stfs f3, 0x10(r1) */ // 0x8062A538
    /* stfs f0, 0xd0(r4) */ // 0x8062A53C
    return;
}