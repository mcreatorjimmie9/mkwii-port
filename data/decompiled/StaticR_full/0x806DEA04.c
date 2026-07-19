/* Function at 0x806DEA04, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_806DEA04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x806DEA08
    /* lis r5, 0 */ // 0x806DEA0C
    *(0xc + r1) = r4; // stw @ 0x806DEA10
    /* lis r4, 0 */ // 0x806DEA14
    /* lfd f3, 0(r5) */ // 0x806DEA18
    *(8 + r1) = r0; // stw @ 0x806DEA1C
    /* lfs f1, 0xc(r3) */ // 0x806DEA20
    /* lfd f0, 8(r1) */ // 0x806DEA24
    /* lfs f2, 0x10(r3) */ // 0x806DEA28
    /* fsubs f3, f0, f3 */ // 0x806DEA2C
    /* lfs f0, 0(r4) */ // 0x806DEA30
    /* fsubs f1, f1, f2 */ // 0x806DEA34
    /* fmuls f1, f3, f1 */ // 0x806DEA38
    /* fdivs f0, f1, f0 */ // 0x806DEA3C
    /* fadds f1, f2, f0 */ // 0x806DEA40
    return;
}