/* Function at 0x806770E4, size=152 bytes */
/* Stack frame: 32 bytes */

void FUN_806770E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0x4330 */ // 0x806770E8
    r0 = r4 + -1; // 0x806770EC
    /* lis r6, 0 */ // 0x806770F0
    /* xoris r4, r0, 0x8000 */ // 0x806770F4
    *(0xc + r1) = r4; // stw @ 0x806770F8
    r6 = r6 + 0; // 0x806770FC
    r0 = *(0x190 + r3); // lwz @ 0x80677100
    *(8 + r1) = r5; // stw @ 0x80677104
    /* lis r4, 0 */ // 0x80677108
    /* xoris r0, r0, 0x8000 */ // 0x8067710C
    /* lfd f5, 0x138(r6) */ // 0x80677110
    /* lfd f0, 8(r1) */ // 0x80677114
    *(0x14 + r1) = r0; // stw @ 0x80677118
    /* fsubs f4, f0, f5 */ // 0x8067711C
    /* lfs f3, 0x160(r6) */ // 0x80677120
    *(0x10 + r1) = r5; // stw @ 0x80677124
    /* lfs f0, 0x168(r6) */ // 0x80677128
    /* lfd f2, 0x10(r1) */ // 0x8067712C
    /* fmuls f3, f3, f4 */ // 0x80677130
    /* stfs f0, 0x1a4(r3) */ // 0x80677134
    /* fsubs f0, f2, f5 */ // 0x80677138
    /* lfs f1, 0x164(r6) */ // 0x8067713C
    /* fsubs f0, f0, f3 */ // 0x80677140
    /* fmuls f1, f1, f0 */ // 0x80677144
    /* stfs f1, 0x1a0(r3) */ // 0x80677148
    r4 = *(0 + r4); // lwz @ 0x8067714C
    r0 = *(0x58 + r4); // lwz @ 0x80677150
    if (!=) goto 0x0x8067716c;
    /* lis r4, 0 */ // 0x8067715C
    /* lfs f0, 0(r4) */ // 0x80677160
    /* fmuls f0, f1, f0 */ // 0x80677164
    /* stfs f0, 0x1a0(r3) */ // 0x80677168
    /* li r0, 2 */ // 0x8067716C
    *(0x18c + r3) = r0; // stw @ 0x80677170
    return;
}