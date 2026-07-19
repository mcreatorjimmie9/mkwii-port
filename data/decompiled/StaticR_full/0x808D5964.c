/* Function at 0x808D5964, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808D5964(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808D596C
    /* lis r5, 0 */ // 0x808D5970
    /* lfs f2, 0(r4) */ // 0x808D5974
    *(0x24 + r1) = r0; // stw @ 0x808D5978
    /* fmuls f0, f2, f1 */ // 0x808D597C
    /* lfs f3, 0(r5) */ // 0x808D5980
    *(0x1c + r1) = r31; // stw @ 0x808D5984
    /* lis r31, 0 */ // 0x808D5988
    r31 = r31 + 0; // 0x808D598C
    /* fmuls f0, f0, f1 */ // 0x808D5990
    *(0x18 + r1) = r30; // stw @ 0x808D5994
    r4 = r31 + 0x256; // 0x808D5998
    /* fsubs f0, f2, f0 */ // 0x808D599C
    *(0x14 + r1) = r29; // stw @ 0x808D59A0
    r29 = r3;
    /* stfs f3, 0x7c(r3) */ // 0x808D59A8
    r3 = r3 + 0xa8; // 0x808D59AC
    /* fctiwz f0, f0 */ // 0x808D59B0
    /* stfd f0, 8(r1) */ // 0x808D59B4
    r30 = *(0xc + r1); // lwz @ 0x808D59B8
    FUN_80665D1C(r3); // bl 0x80665D1C
    *(0xb8 + r3) = r30; // stb @ 0x808D59C0
    r4 = r31 + 0x262; // 0x808D59C4
    r3 = r29 + 0xa8; // 0x808D59C8
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    *(0xb8 + r3) = r30; // stb @ 0x808D59D0
    r4 = r31 + 0x26c; // 0x808D59D4
    r3 = r29 + 0xa8; // 0x808D59D8
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0xb8 + r3) = r30; // stb @ 0x808D59E0
    r31 = *(0x1c + r1); // lwz @ 0x808D59E4
    r30 = *(0x18 + r1); // lwz @ 0x808D59E8
    r29 = *(0x14 + r1); // lwz @ 0x808D59EC
    r0 = *(0x24 + r1); // lwz @ 0x808D59F0
    return;
}