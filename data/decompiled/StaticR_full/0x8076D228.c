/* Function at 0x8076D228, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_8076D228(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8076D228
    /* lfs f3, 0x40(r3) */ // 0x8076D22C
    /* lfs f1, 0(r4) */ // 0x8076D230
    /* lfs f0, 0x38(r3) */ // 0x8076D234
    /* fsubs f2, f1, f3 */ // 0x8076D238
    /* lfs f1, 0x34(r3) */ // 0x8076D23C
    /* fmuls f0, f3, f0 */ // 0x8076D240
    /* fmuls f1, f2, f1 */ // 0x8076D244
    /* fadds f1, f1, f0 */ // 0x8076D248
    /* stfs f1, 0x30(r3) */ // 0x8076D24C
    r12 = *(0 + r3); // lwz @ 0x8076D250
    r12 = *(0x18 + r12); // lwz @ 0x8076D254
    /* mtctr r12 */ // 0x8076D258
    /* bctr  */ // 0x8076D25C
}