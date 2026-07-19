/* Function at 0x808D53D8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D53D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808D53E0
    r5 = *(0x64 + r3); // lwz @ 0x808D53E4
    r5 = *(0xc + r5); // lwz @ 0x808D53E8
    r0 = *(4 + r5); // lwz @ 0x808D53EC
    if (!=) goto 0x0x808d540c;
    /* lis r5, 0 */ // 0x808D53F8
    /* fabs f2, f1 */ // 0x808D53FC
    /* lfs f0, 0(r5) */ // 0x808D5400
    /* fmuls f0, f0, f2 */ // 0x808D5404
    /* stfs f0, 4(r4) */ // 0x808D5408
    /* lis r5, 0 */ // 0x808D540C
    /* lfs f0, 0(r5) */ // 0x808D5410
    /* fmuls f1, f0, f1 */ // 0x808D5414
    /* fabs f1, f1 */ // 0x808D5418
    /* fsubs f0, f0, f1 */ // 0x808D541C
    /* fctiwz f0, f0 */ // 0x808D5420
    /* stfd f0, 8(r1) */ // 0x808D5424
    r0 = *(0xc + r1); // lwz @ 0x808D5428
    *(0x14 + r4) = r0; // stb @ 0x808D542C
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x808D5434
    return;
}