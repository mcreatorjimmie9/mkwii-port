/* Function at 0x808D5A88, size=88 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D5A88(int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x808D5A90
    /* lis r6, 0 */ // 0x808D5A94
    /* lfs f2, 0(r5) */ // 0x808D5A98
    /* fabs f4, f1 */ // 0x808D5A9C
    /* lfs f3, 0(r6) */ // 0x808D5AA0
    /* fmuls f0, f2, f1 */ // 0x808D5AA4
    *(0x14 + r1) = r0; // stw @ 0x808D5AA8
    /* fmuls f3, f3, f4 */ // 0x808D5AAC
    /* fmuls f0, f0, f1 */ // 0x808D5AB0
    /* stfs f3, 4(r4) */ // 0x808D5AB4
    /* fsubs f0, f2, f0 */ // 0x808D5AB8
    /* fctiwz f0, f0 */ // 0x808D5ABC
    /* stfd f0, 8(r1) */ // 0x808D5AC0
    r0 = *(0xc + r1); // lwz @ 0x808D5AC4
    *(0x14 + r4) = r0; // stb @ 0x808D5AC8
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x808D5AD0
    return;
}