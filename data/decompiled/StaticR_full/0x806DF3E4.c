/* Function at 0x806DF3E4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806DF3E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r4 = r3 + r4; // 0x806DF3EC
    /* lis r5, 0 */ // 0x806DF3F0
    *(0x14 + r1) = r0; // stw @ 0x806DF3F4
    /* lis r0, 0x4330 */ // 0x806DF3F8
    /* lfd f2, 0(r5) */ // 0x806DF3FC
    r3 = r3 + 0xa8; // 0x806DF400
    r4 = *(0x44 + r4); // lbz @ 0x806DF404
    *(0xc + r1) = r4; // stw @ 0x806DF408
    /* lis r4, 0 */ // 0x806DF40C
    /* lfs f0, 0(r4) */ // 0x806DF410
    *(8 + r1) = r0; // stw @ 0x806DF414
    /* lfd f1, 8(r1) */ // 0x806DF418
    /* fsubs f1, f1, f2 */ // 0x806DF41C
    /* fmuls f1, f1, f0 */ // 0x806DF420
    FUN_805E3728(); // bl 0x805E3728
    /* lis r3, 0 */ // 0x806DF428
    r0 = *(0x14 + r1); // lwz @ 0x806DF42C
    r3 = r3 + 0; // 0x806DF430
    /* lfs f0, 8(r3) */ // 0x806DF434
    /* lfs f2, 0xc(r3) */ // 0x806DF438
    /* fsubs f0, f0, f2 */ // 0x806DF43C
    /* fmuls f0, f1, f0 */ // 0x806DF440
    /* fadds f1, f2, f0 */ // 0x806DF444
    return;
}