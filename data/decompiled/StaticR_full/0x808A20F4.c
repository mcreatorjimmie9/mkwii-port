/* Function at 0x808A20F4, size=592 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808A20F4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808A20FC
    *(0x34 + r1) = r0; // stw @ 0x808A2100
    r4 = r4 + 0; // 0x808A2104
    *(0x2c + r1) = r31; // stw @ 0x808A2108
    r31 = r3;
    r0 = *(4 + r4); // lwz @ 0x808A2110
    if (>) goto 0x0x808a2130;
    r12 = *(0 + r4); // lwz @ 0x808A211C
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x808A2124
    /* mtctr r12 */ // 0x808A2128
    /* bctrl  */ // 0x808A212C
    /* lis r4, 0 */ // 0x808A2130
    r4 = r4 + 0; // 0x808A2138
    r4 = *(8 + r4); // lwz @ 0x808A213C
    r4 = *(0 + r4); // lwz @ 0x808A2140
    r4 = *(0x6c + r4); // lwz @ 0x808A2144
    r12 = *(0 + r4); // lwz @ 0x808A2148
    r12 = *(0x20 + r12); // lwz @ 0x808A214C
    /* mtctr r12 */ // 0x808A2150
    /* bctrl  */ // 0x808A2154
    /* lis r4, 0 */ // 0x808A2158
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x808A2160
    /* stfs f0, 0x18(r1) */ // 0x808A2164
    r12 = *(0 + r31); // lwz @ 0x808A2168
    r0 = *(0x34 + r31); // lwz @ 0x808A216C
    *(0xc + r1) = r0; // stw @ 0x808A2170
    r4 = *(0x30 + r31); // lwz @ 0x808A2174
    r0 = *(0x38 + r31); // lwz @ 0x808A2178
    r12 = *(0x30 + r12); // lwz @ 0x808A217C
    *(8 + r1) = r4; // stw @ 0x808A2180
    *(0x10 + r1) = r0; // stw @ 0x808A2184
    /* stfs f0, 0xc(r1) */ // 0x808A2188
    /* mtctr r12 */ // 0x808A218C
    /* bctrl  */ // 0x808A2190
    if (==) goto 0x0x808a21b8;
    r12 = *(0 + r31); // lwz @ 0x808A219C
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x808A21A4
    /* mtctr r12 */ // 0x808A21A8
    /* bctrl  */ // 0x808A21AC
    /* lfs f1, 0xc(r3) */ // 0x808A21B0
    /* b 0x808a21f0 */ // 0x808A21B4
    /* lfs f3, 8(r1) */ // 0x808A21B8
    /* lfs f2, 0x14(r1) */ // 0x808A21BC
    /* lfs f1, 0xc(r1) */ // 0x808A21C0
    /* fsubs f4, f3, f2 */ // 0x808A21C4
    /* lfs f0, 0x18(r1) */ // 0x808A21C8
    /* lfs f2, 0x10(r1) */ // 0x808A21CC
    /* fsubs f3, f1, f0 */ // 0x808A21D0
    /* lfs f0, 0x1c(r1) */ // 0x808A21D4
    /* fmuls f1, f4, f4 */ // 0x808A21D8
    /* fsubs f2, f2, f0 */ // 0x808A21DC
    /* fmuls f0, f3, f3 */ // 0x808A21E0
    /* fmuls f2, f2, f2 */ // 0x808A21E4
    /* fadds f0, f1, f0 */ // 0x808A21E8
    /* fadds f1, f2, f0 */ // 0x808A21EC
    /* lis r3, 0 */ // 0x808A21F0
    /* lfs f0, 0(r3) */ // 0x808A21F4
    /* fmuls f0, f0, f0 */ // 0x808A21F8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808A21FC
    if (<=) goto 0x0x808a229c;
    r0 = *(0x98 + r31); // lbz @ 0x808A2204
    if (!=) goto 0x0x808a2248;
    r3 = *(8 + r31); // lwz @ 0x808A2210
    /* li r4, 0 */ // 0x808A2214
    r3 = *(0x28 + r3); // lwz @ 0x808A2218
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808A2220
    r12 = *(0xc + r12); // lwz @ 0x808A2224
    /* mtctr r12 */ // 0x808A2228
    /* bctrl  */ // 0x808A222C
    r5 = *(0xc + r31); // lwz @ 0x808A2230
    /* lis r3, 0 */ // 0x808A2234
    /* lfs f2, 0(r3) */ // 0x808A2238
    /* li r4, 0 */ // 0x808A223C
    r3 = *(0x28 + r5); // lwz @ 0x808A2240
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    r3 = *(8 + r31); // lwz @ 0x808A2248
    /* li r4, 0 */ // 0x808A224C
    r12 = *(0 + r3); // lwz @ 0x808A2250
    r12 = *(0xc + r12); // lwz @ 0x808A2254
    /* mtctr r12 */ // 0x808A2258
    /* bctrl  */ // 0x808A225C
    /* li r0, 0 */ // 0x808A2260
    *(0x9b + r31) = r0; // stb @ 0x808A2264
    r3 = *(0xc + r31); // lwz @ 0x808A2268
    /* li r4, 1 */ // 0x808A226C
    r12 = *(0 + r3); // lwz @ 0x808A2270
    r12 = *(0xc + r12); // lwz @ 0x808A2274
    /* mtctr r12 */ // 0x808A2278
    /* bctrl  */ // 0x808A227C
    r0 = *(0x2c + r31); // lhz @ 0x808A2280
    /* li r3, 1 */ // 0x808A2284
    *(0x9c + r31) = r3; // stb @ 0x808A2288
    r0 = r0 | 4; // 0x808A228C
    *(0x98 + r31) = r3; // stb @ 0x808A2290
    *(0x2c + r31) = r0; // sth @ 0x808A2294
    /* b 0x808a2330 */ // 0x808A2298
    r0 = *(0x98 + r31); // lbz @ 0x808A229C
    if (==) goto 0x0x808a22e0;
    r3 = *(0xc + r31); // lwz @ 0x808A22A8
    /* li r4, 0 */ // 0x808A22AC
    r3 = *(0x28 + r3); // lwz @ 0x808A22B0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x808A22B8
    r12 = *(0xc + r12); // lwz @ 0x808A22BC
    /* mtctr r12 */ // 0x808A22C0
    /* bctrl  */ // 0x808A22C4
    r5 = *(8 + r31); // lwz @ 0x808A22C8
    /* lis r3, 0 */ // 0x808A22CC
    /* lfs f2, 0(r3) */ // 0x808A22D0
    /* li r4, 0 */ // 0x808A22D4
    r3 = *(0x28 + r5); // lwz @ 0x808A22D8
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    r3 = *(8 + r31); // lwz @ 0x808A22E0
    /* li r4, 1 */ // 0x808A22E4
    r12 = *(0 + r3); // lwz @ 0x808A22E8
    r12 = *(0xc + r12); // lwz @ 0x808A22EC
    /* mtctr r12 */ // 0x808A22F0
    /* bctrl  */ // 0x808A22F4
    /* li r0, 1 */ // 0x808A22F8
    *(0x9b + r31) = r0; // stb @ 0x808A22FC
    r3 = *(0xc + r31); // lwz @ 0x808A2300
    /* li r4, 0 */ // 0x808A2304
    r12 = *(0 + r3); // lwz @ 0x808A2308
    r12 = *(0xc + r12); // lwz @ 0x808A230C
    /* mtctr r12 */ // 0x808A2310
    /* bctrl  */ // 0x808A2314
    r0 = *(0x2c + r31); // lhz @ 0x808A2318
    /* li r3, 0 */ // 0x808A231C
    *(0x9c + r31) = r3; // stb @ 0x808A2320
    r0 = r0 | 4; // 0x808A2324
    *(0x98 + r31) = r3; // stb @ 0x808A2328
    *(0x2c + r31) = r0; // sth @ 0x808A232C
    r0 = *(0x34 + r1); // lwz @ 0x808A2330
    r31 = *(0x2c + r1); // lwz @ 0x808A2334
    return;
}