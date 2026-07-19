/* Function at 0x808D5A30, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D5A30(int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x808D5A38
    /* lis r6, 0 */ // 0x808D5A3C
    /* lfs f2, 0(r5) */ // 0x808D5A40
    /* fabs f4, f1 */ // 0x808D5A44
    /* lfs f3, 0(r6) */ // 0x808D5A48
    /* fmuls f0, f2, f1 */ // 0x808D5A4C
    *(0x14 + r1) = r0; // stw @ 0x808D5A50
    /* fmuls f3, f3, f4 */ // 0x808D5A54
    /* fmuls f0, f0, f1 */ // 0x808D5A58
    /* stfs f3, 4(r4) */ // 0x808D5A5C
    /* fsubs f0, f2, f0 */ // 0x808D5A60
    /* fctiwz f0, f0 */ // 0x808D5A64
    /* stfd f0, 8(r1) */ // 0x808D5A68
    r0 = *(0xc + r1); // lwz @ 0x808D5A6C
    *(0x14 + r4) = r0; // stb @ 0x808D5A70
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x808D5A78
    return;
}