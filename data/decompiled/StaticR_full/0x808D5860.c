/* Function at 0x808D5860, size=108 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D5860(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808D5868
    r5 = *(0x64 + r3); // lwz @ 0x808D586C
    r5 = *(0xc + r5); // lwz @ 0x808D5870
    r0 = *(4 + r5); // lwz @ 0x808D5874
    if (!=) goto 0x0x808d5894;
    /* lis r5, 0 */ // 0x808D5880
    /* fabs f2, f1 */ // 0x808D5884
    /* lfs f0, 0(r5) */ // 0x808D5888
    /* fmuls f0, f0, f2 */ // 0x808D588C
    /* stfs f0, 4(r4) */ // 0x808D5890
    /* lis r5, 0 */ // 0x808D5894
    /* lfs f2, 0(r5) */ // 0x808D5898
    /* fmuls f0, f2, f1 */ // 0x808D589C
    /* fmuls f0, f0, f1 */ // 0x808D58A0
    /* fsubs f0, f2, f0 */ // 0x808D58A4
    /* fctiwz f0, f0 */ // 0x808D58A8
    /* stfd f0, 8(r1) */ // 0x808D58AC
    r0 = *(0xc + r1); // lwz @ 0x808D58B0
    *(0x14 + r4) = r0; // stb @ 0x808D58B4
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x808D58BC
    return;
}