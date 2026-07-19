/* Function at 0x8082D58C, size=120 bytes */
/* Stack frame: 0 bytes */

void FUN_8082D58C(int r3, int r4, int r5)
{
    /* lfs f3, 0xb8(r3) */ // 0x8082D58C
    /* lis r5, 0 */ // 0x8082D590
    /* lfs f0, 0x20(r4) */ // 0x8082D594
    /* lfs f2, 0x10(r4) */ // 0x8082D598
    /* fneg f1, f3 */ // 0x8082D59C
    /* fmuls f4, f3, f0 */ // 0x8082D5A0
    /* lfs f0, 0(r5) */ // 0x8082D5A4
    /* lfs f6, 0(r4) */ // 0x8082D5A8
    /* fmuls f2, f3, f2 */ // 0x8082D5AC
    /* lfs f5, 0x1c(r4) */ // 0x8082D5B0
    /* fmuls f3, f3, f6 */ // 0x8082D5B4
    /* fmuls f0, f0, f1 */ // 0x8082D5B8
    /* lfs f6, 0xc(r4) */ // 0x8082D5BC
    /* lfs f1, 0x2c(r4) */ // 0x8082D5C0
    /* fadds f5, f5, f2 */ // 0x8082D5C4
    /* lfs f2, 0x28(r4) */ // 0x8082D5C8
    /* lfs f7, 0x18(r4) */ // 0x8082D5CC
    /* fadds f4, f1, f4 */ // 0x8082D5D0
    /* lfs f8, 8(r4) */ // 0x8082D5D4
    /* fmuls f2, f0, f2 */ // 0x8082D5D8
    /* fmuls f1, f0, f7 */ // 0x8082D5DC
    /* fadds f3, f6, f3 */ // 0x8082D5E0
    /* fmuls f0, f0, f8 */ // 0x8082D5E4
    /* fadds f2, f4, f2 */ // 0x8082D5E8
    /* fadds f1, f5, f1 */ // 0x8082D5EC
    /* fadds f0, f3, f0 */ // 0x8082D5F0
    /* stfs f2, 0x94(r3) */ // 0x8082D5F4
    /* stfs f0, 0x8c(r3) */ // 0x8082D5F8
    /* stfs f1, 0x90(r3) */ // 0x8082D5FC
    return;
}