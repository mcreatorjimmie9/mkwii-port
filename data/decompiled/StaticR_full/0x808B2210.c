/* Function at 0x808B2210, size=292 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808B2210(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808B2218
    r5 = r5 + 0; // 0x808B2220
    /* stfd f31, 0x48(r1) */ // 0x808B2224
    /* fmr f31, f2 */ // 0x808B2228
    *(0x44 + r1) = r31; // stw @ 0x808B222C
    r31 = r3;
    *(0x40 + r1) = r30; // stw @ 0x808B2234
    /* lis r30, 0 */ // 0x808B2238
    *(0x3c + r1) = r29; // stw @ 0x808B223C
    r29 = r4;
    /* stfs f1, 0x20(r3) */ // 0x808B2244
    *(0 + r3) = r5; // stw @ 0x808B2248
    /* stfs f2, 0x24(r3) */ // 0x808B224C
    r5 = *(0 + r4); // lwz @ 0x808B2250
    r0 = *(4 + r4); // lwz @ 0x808B2254
    *(0x2c + r3) = r0; // stw @ 0x808B2258
    *(0x28 + r3) = r5; // stw @ 0x808B225C
    r0 = *(8 + r4); // lwz @ 0x808B2260
    *(0x30 + r3) = r0; // stw @ 0x808B2264
    /* stfs f1, 0x34(r3) */ // 0x808B2268
    /* fmr f1, f31 */ // 0x808B226C
    /* stfs f2, 0x38(r3) */ // 0x808B2270
    r5 = *(0 + r4); // lwz @ 0x808B2274
    r0 = *(4 + r4); // lwz @ 0x808B2278
    *(0x40 + r3) = r0; // stw @ 0x808B227C
    *(0x3c + r3) = r5; // stw @ 0x808B2280
    r0 = *(8 + r4); // lwz @ 0x808B2284
    *(0x44 + r3) = r0; // stw @ 0x808B2288
    r5 = *(0 + r4); // lwz @ 0x808B228C
    r0 = *(4 + r4); // lwz @ 0x808B2290
    *(0x4c + r3) = r0; // stw @ 0x808B2294
    *(0x48 + r3) = r5; // stw @ 0x808B2298
    r0 = *(8 + r4); // lwz @ 0x808B229C
    r4 = r30 + 0; // 0x808B22A0
    *(0x50 + r3) = r0; // stw @ 0x808B22A4
    FUN_805A443C(r4, r3); // bl 0x805A443C
    r4 = r29;
    FUN_805A4464(r3, r4, r3, r5); // bl 0x805A4464
    r5 = *(0x20 + r1); // lwz @ 0x808B22C0
    /* fmr f1, f31 */ // 0x808B22C4
    r0 = *(0x24 + r1); // lwz @ 0x808B22C8
    *(0x58 + r31) = r0; // stw @ 0x808B22D0
    r4 = r30 + 0; // 0x808B22D4
    *(0x54 + r31) = r5; // stw @ 0x808B22D8
    r0 = *(0x28 + r1); // lwz @ 0x808B22DC
    *(0x5c + r31) = r0; // stw @ 0x808B22E0
    FUN_805A443C(r4); // bl 0x805A443C
    r4 = r29;
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    r4 = *(8 + r1); // lwz @ 0x808B22F8
    r3 = r31;
    r0 = *(0xc + r1); // lwz @ 0x808B2300
    *(0x64 + r31) = r0; // stw @ 0x808B2304
    *(0x60 + r31) = r4; // stw @ 0x808B2308
    r0 = *(0x10 + r1); // lwz @ 0x808B230C
    *(0x68 + r31) = r0; // stw @ 0x808B2310
    /* lfd f31, 0x48(r1) */ // 0x808B2314
    r31 = *(0x44 + r1); // lwz @ 0x808B2318
    r30 = *(0x40 + r1); // lwz @ 0x808B231C
    r29 = *(0x3c + r1); // lwz @ 0x808B2320
    r0 = *(0x54 + r1); // lwz @ 0x808B2324
    return;
}