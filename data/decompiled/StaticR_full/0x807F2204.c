/* Function at 0x807F2204, size=556 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807F2204(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xb8 + r1) = r30; // stw @ 0x807F2218
    /* lis r30, 0 */ // 0x807F221C
    r30 = r30 + 0; // 0x807F2220
    *(0xb4 + r1) = r29; // stw @ 0x807F2224
    /* lis r29, 0 */ // 0x807F2228
    r29 = r29 + 0; // 0x807F222C
    r3 = *(0x20 + r3); // lwz @ 0x807F2230
    r12 = *(0 + r3); // lwz @ 0x807F2234
    r12 = *(0x14 + r12); // lwz @ 0x807F2238
    /* mtctr r12 */ // 0x807F223C
    /* bctrl  */ // 0x807F2240
    if (==) goto 0x0x807f2258;
    if (==) goto 0x0x807f2290;
    /* b 0x807f23a8 */ // 0x807F2254
    r0 = *(0xd4 + r31); // lbz @ 0x807F2258
    if (!=) goto 0x0x807f23a8;
    /* lfs f0, 8(r30) */ // 0x807F2264
    /* stfs f0, 0xcc(r31) */ // 0x807F2268
    r3 = *(0x20 + r31); // lwz @ 0x807F226C
    /* lfs f1, 0(r30) */ // 0x807F2270
    /* lfs f0, 0x1c(r30) */ // 0x807F2274
    r12 = *(0 + r3); // lwz @ 0x807F2278
    /* fdivs f1, f1, f0 */ // 0x807F227C
    r12 = *(0x18 + r12); // lwz @ 0x807F2280
    /* mtctr r12 */ // 0x807F2284
    /* bctrl  */ // 0x807F2288
    /* b 0x807f23a8 */ // 0x807F228C
    /* li r0, 2 */ // 0x807F2290
    *(0xb4 + r31) = r0; // stw @ 0x807F2294
    r3 = r31;
    /* li r4, 0 */ // 0x807F229C
    r12 = *(0 + r31); // lwz @ 0x807F22A0
    r12 = *(0x68 + r12); // lwz @ 0x807F22A4
    /* mtctr r12 */ // 0x807F22A8
    /* bctrl  */ // 0x807F22AC
    r3 = *(0xb0 + r31); // lwz @ 0x807F22B0
    /* li r4, 0 */ // 0x807F22B4
    r12 = *(0 + r3); // lwz @ 0x807F22B8
    r12 = *(0xc + r12); // lwz @ 0x807F22BC
    /* mtctr r12 */ // 0x807F22C0
    /* bctrl  */ // 0x807F22C4
    /* lfs f4, 0xc(r29) */ // 0x807F22C8
    r3 = r31;
    /* lfs f0, 0x2c(r30) */ // 0x807F22D0
    r0 = *(0x2c + r31); // lhz @ 0x807F22D4
    /* fmuls f1, f4, f0 */ // 0x807F22D8
    /* lfs f3, 8(r29) */ // 0x807F22DC
    /* lfs f2, 0x14(r29) */ // 0x807F22E0
    r0 = r0 | 8; // 0x807F22E4
    /* lfs f0, 0x18(r29) */ // 0x807F22E8
    /* fdivs f1, f1, f3 */ // 0x807F22EC
    /* fmuls f1, f1, f2 */ // 0x807F22F0
    /* fdivs f0, f1, f0 */ // 0x807F22F4
    /* stfs f0, 0x12c(r31) */ // 0x807F22F8
    /* lfs f0, 0x2c(r30) */ // 0x807F22FC
    /* fmuls f0, f4, f0 */ // 0x807F2300
    *(0x2c + r31) = r0; // sth @ 0x807F2304
    /* fdivs f0, f0, f3 */ // 0x807F2308
    /* fmuls f0, f0, f2 */ // 0x807F230C
    /* stfs f0, 0x128(r31) */ // 0x807F2310
    /* stfs f0, 0x3c(r31) */ // 0x807F2314
    /* stfs f0, 0x40(r31) */ // 0x807F2318
    /* stfs f0, 0x44(r31) */ // 0x807F231C
    FUN_807F2CA0(); // bl 0x807F2CA0
    r0 = *(0xec + r31); // lwz @ 0x807F2324
    r3 = r31;
    *(0xe8 + r31) = r0; // stw @ 0x807F232C
    /* li r4, 0x2ee */ // 0x807F2330
    /* lfs f1, 0(r29) */ // 0x807F2334
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* lfs f1, 0x44(r30) */ // 0x807F233C
    r4 = r31 + 0xb8; // 0x807F2344
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r31 + 0x30; // 0x807F2350
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x40(r30) */ // 0x807F235C
    /* lis r3, 0 */ // 0x807F2360
    /* lfs f0, 0x38(r30) */ // 0x807F2364
    r4 = r31 + 0x30; // 0x807F2368
    /* fctiwz f3, f2 */ // 0x807F236C
    /* lfs f1, 0x3c(r30) */ // 0x807F2370
    /* fctiwz f0, f0 */ // 0x807F2374
    r3 = *(0 + r3); // lwz @ 0x807F2378
    /* fctiwz f2, f1 */ // 0x807F237C
    /* stfd f3, 0x98(r1) */ // 0x807F2380
    /* stfd f2, 0xa0(r1) */ // 0x807F2384
    /* lfs f1, 0x34(r30) */ // 0x807F238C
    /* li r9, 0xc */ // 0x807F2390
    /* stfd f0, 0xa8(r1) */ // 0x807F2394
    r8 = *(0x9c + r1); // lwz @ 0x807F2398
    r7 = *(0xa4 + r1); // lwz @ 0x807F239C
    r6 = *(0xac + r1); // lwz @ 0x807F23A0
    FUN_80818D00(r9); // bl 0x80818D00
    /* lfs f1, 0xcc(r31) */ // 0x807F23A8
    r3 = r31;
    r4 = *(0x20 + r31); // lwz @ 0x807F23B0
    /* lfs f0, 0x1c(r29) */ // 0x807F23B4
    r6 = *(0x18 + r4); // lwz @ 0x807F23B8
    r5 = *(0x1c + r4); // lwz @ 0x807F23BC
    /* fsubs f1, f1, f0 */ // 0x807F23C0
    r4 = *(0x20 + r4); // lwz @ 0x807F23C4
    r0 = *(0x2c + r31); // lhz @ 0x807F23C8
    /* lfs f0, 0x34(r31) */ // 0x807F23CC
    *(0x14 + r1) = r6; // stw @ 0x807F23D0
    r0 = r0 | 1; // 0x807F23D4
    /* fadds f3, f1, f0 */ // 0x807F23D8
    *(0x1c + r1) = r4; // stw @ 0x807F23DC
    /* lfs f2, 0x14(r1) */ // 0x807F23E0
    *(0x2c + r31) = r0; // sth @ 0x807F23E4
    /* lfs f0, 0x1c(r1) */ // 0x807F23E8
    *(0x2c + r31) = r0; // sth @ 0x807F23EC
    *(0x18 + r1) = r5; // stw @ 0x807F23F0
    /* stfs f2, 0x30(r31) */ // 0x807F23F4
    /* stfs f0, 0x38(r31) */ // 0x807F23F8
    /* stfs f1, 0xcc(r31) */ // 0x807F23FC
    *(0x2c + r31) = r0; // sth @ 0x807F2400
    /* stfs f3, 0x34(r31) */ // 0x807F2404
    FUN_807F28DC(); // bl 0x807F28DC
    /* lfs f0, 0xd8(r31) */ // 0x807F240C
    /* lfs f1, 0x20(r29) */ // 0x807F2414
    /* fneg f2, f0 */ // 0x807F2418
    /* lfs f0, 0x120(r31) */ // 0x807F241C
    /* fmuls f1, f2, f1 */ // 0x807F2420
    /* fadds f0, f0, f1 */ // 0x807F2424
    /* stfs f0, 0x120(r31) */ // 0x807F2428
    FUN_805E3430(); // bl 0x805E3430
}