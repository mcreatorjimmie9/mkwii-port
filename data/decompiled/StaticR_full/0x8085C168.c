/* Function at 0x8085C168, size=332 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8085C168(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8085C178
    r31 = r31 + 0; // 0x8085C17C
    *(0x48 + r1) = r30; // stw @ 0x8085C180
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x8085C188
    r29 = r3;
    r5 = *(0x10 + r3); // lwz @ 0x8085C190
    /* li r3, 0 */ // 0x8085C194
    r0 = *(0x6dc + r5); // lwz @ 0x8085C198
    if (<=) goto 0x0x8085c1a8;
    /* li r3, 1 */ // 0x8085C1A4
    if (==) goto 0x0x8085c1d4;
    /* addic. r0, r1, 8 */ // 0x8085C1B0
    if (==) goto 0x0x8085c1c4;
    r3 = *(0 + r4); // lwz @ 0x8085C1B8
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x10 + r29); // lwz @ 0x8085C1C4
    r3 = *(0x6e0 + r3); // lwz @ 0x8085C1CC
    FUN_8082D58C(r4, r4); // bl 0x8082D58C
    r0 = *(0x23e + r29); // lbz @ 0x8085C1D4
    if (!=) goto 0x0x8085c2d0;
    r0 = *(0x23d + r29); // lbz @ 0x8085C1E0
    if (==) goto 0x0x8085c26c;
    r3 = *(0x10 + r29); // lwz @ 0x8085C1EC
    FUN_808584B8(); // bl 0x808584B8
    if (==) goto 0x0x8085c234;
    r0 = *(0x23f + r29); // lbz @ 0x8085C1FC
    /* lfs f2, 0xc4(r31) */ // 0x8085C200
    if (==) goto 0x0x8085c214;
    /* lfs f0, 0x124(r31) */ // 0x8085C20C
    /* fmuls f2, f2, f0 */ // 0x8085C210
    /* lfs f0, 0x244(r29) */ // 0x8085C214
    /* lfs f1, 0xb0(r31) */ // 0x8085C218
    /* fadds f0, f0, f2 */ // 0x8085C21C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8085C220
    if (<=) goto 0x0x8085c22c;
    /* b 0x8085c268 */ // 0x8085C228
    /* fmr f1, f0 */ // 0x8085C22C
    /* b 0x8085c268 */ // 0x8085C230
    r0 = *(0x23f + r29); // lbz @ 0x8085C234
    /* lfs f2, 0x128(r31) */ // 0x8085C238
    if (==) goto 0x0x8085c24c;
    /* lfs f0, 0x124(r31) */ // 0x8085C244
    /* fmuls f2, f2, f0 */ // 0x8085C248
    /* lfs f0, 0x244(r29) */ // 0x8085C24C
    /* lfs f1, 0(r31) */ // 0x8085C250
    /* fsubs f0, f0, f2 */ // 0x8085C254
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8085C258
    if (>=) goto 0x0x8085c264;
    /* b 0x8085c268 */ // 0x8085C260
    /* fmr f1, f0 */ // 0x8085C264
    /* stfs f1, 0x244(r29) */ // 0x8085C268
    /* lfs f1, 0(r31) */ // 0x8085C26C
    /* lfs f0, 0x244(r29) */ // 0x8085C270
    /* fcmpu cr0, f1, f0 */ // 0x8085C274
    if (==) goto 0x0x8085c2d0;
    /* addic. r4, r29, 0xe4 */ // 0x8085C27C
    if (==) goto 0x0x8085c28c;
    r3 = *(0 + r30); // lwz @ 0x8085C284
    FUN_805E3430(); // bl 0x805E3430
    r3 = r29 + 0xe4; // 0x8085C28C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r5 = *(0x10 + r29); // lwz @ 0x8085C298
    r3 = r29;
    /* lfs f1, 0x244(r29) */ // 0x8085C2A0
    r4 = r5 + 0x570; // 0x8085C2A8
    r5 = r5 + 0x5d0; // 0x8085C2AC
    /* li r7, 1 */ // 0x8085C2B0
}