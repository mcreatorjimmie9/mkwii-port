/* Function at 0x808D5238, size=328 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D5238(int r3, int r4, int r5)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808D5248
    r31 = r31 + 0; // 0x808D524C
    *(0xe8 + r1) = r30; // stw @ 0x808D5250
    r30 = r3;
    *(0xe4 + r1) = r29; // stw @ 0x808D5258
    r0 = *(0x254 + r3); // lwz @ 0x808D525C
    if (==) goto 0x0x808d5304;
    r4 = *(0x64 + r3); // lwz @ 0x808D5268
    r0 = *(0x244 + r3); // lwz @ 0x808D526C
    r4 = *(0xc + r4); // lwz @ 0x808D5274
    r4 = *(0x38 + r4); // lwz @ 0x808D5278
    r4 = *(4 + r4); // lwz @ 0x808D527C
    r29 = r0 & r4; // 0x808D5280
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* clrlwi. r0, r29, 0x1f */ // 0x808D5288
    if (==) goto 0x0x808d529c;
    /* li r0, 0 */ // 0x808D5290
    *(0x80 + r1) = r0; // stw @ 0x808D5294
    /* b 0x808d52f4 */ // 0x808D5298
    /* rlwinm. r0, r29, 0, 0x1e, 0x1e */ // 0x808D529C
    if (==) goto 0x0x808d52b0;
    /* li r0, 1 */ // 0x808D52A4
    *(0x80 + r1) = r0; // stw @ 0x808D52A8
    /* b 0x808d52f4 */ // 0x808D52AC
    /* rlwinm. r0, r29, 0, 0x1d, 0x1d */ // 0x808D52B0
    if (==) goto 0x0x808d52c4;
    /* li r0, 2 */ // 0x808D52B8
    *(0x80 + r1) = r0; // stw @ 0x808D52BC
    /* b 0x808d52f4 */ // 0x808D52C0
    /* rlwinm. r0, r29, 0, 0x1c, 0x1c */ // 0x808D52C4
    if (==) goto 0x0x808d52d8;
    /* li r0, 3 */ // 0x808D52CC
    *(0x80 + r1) = r0; // stw @ 0x808D52D0
    /* b 0x808d52f4 */ // 0x808D52D4
    /* rlwinm. r0, r29, 0, 0x1b, 0x1b */ // 0x808D52D8
    if (==) goto 0x0x808d52ec;
    /* li r0, 4 */ // 0x808D52E0
    *(0x80 + r1) = r0; // stw @ 0x808D52E4
    /* b 0x808d52f4 */ // 0x808D52E8
    /* li r0, 0 */ // 0x808D52EC
    *(0x80 + r1) = r0; // stw @ 0x808D52F0
    r4 = *(0x254 + r30); // lwz @ 0x808D52F4
    r3 = r30;
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r0 = *(0x258 + r30); // lwz @ 0x808D5304
    if (!=) goto 0x0x808d5364;
    /* lfs f2, 0x25c(r30) */ // 0x808D5310
    /* lfs f0, 0(r31) */ // 0x808D5314
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x808D5318
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808D531C
    if (!=) goto 0x0x808d535c;
    /* lfs f1, 4(r31) */ // 0x808D5324
    r3 = *(0x260 + r30); // lwz @ 0x808D5328
    /* fmuls f2, f1, f2 */ // 0x808D532C
    /* lfs f0, 8(r31) */ // 0x808D5330
    /* fabs f2, f2 */ // 0x808D5334
    /* fsubs f1, f1, f2 */ // 0x808D5338
    /* fctiwz f1, f1 */ // 0x808D533C
    /* stfd f1, 0xd0(r1) */ // 0x808D5340
    r0 = *(0xd4 + r1); // lwz @ 0x808D5344
    *(0xb8 + r3) = r0; // stb @ 0x808D5348
    /* lfs f1, 0x25c(r30) */ // 0x808D534C
    /* fadds f0, f1, f0 */ // 0x808D5350
    /* stfs f0, 0x25c(r30) */ // 0x808D5354
    /* b 0x808d5364 */ // 0x808D5358
    /* li r0, 1 */ // 0x808D535C
    *(0x80 + r30) = r0; // stb @ 0x808D5360
    r0 = *(0xf4 + r1); // lwz @ 0x808D5364
    r31 = *(0xec + r1); // lwz @ 0x808D5368
    r30 = *(0xe8 + r1); // lwz @ 0x808D536C
    r29 = *(0xe4 + r1); // lwz @ 0x808D5370
    return;
}