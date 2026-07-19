/* Function at 0x8087F214, size=448 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8087F214(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -256(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r0, 0x4330 */ // 0x8087F220
    /* lis r31, 0 */ // 0x8087F228
    r31 = r31 + 0; // 0x8087F22C
    *(0xf8 + r1) = r30; // stw @ 0x8087F230
    r30 = r5;
    *(0xf4 + r1) = r29; // stw @ 0x8087F238
    r29 = r4;
    *(0xf0 + r1) = r28; // stw @ 0x8087F240
    r28 = r3;
    *(0xd0 + r1) = r0; // stw @ 0x8087F24C
    *(0xd8 + r1) = r0; // stw @ 0x8087F250
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* xoris r0, r29, 0x8000 */ // 0x8087F258
    *(0xd4 + r1) = r0; // stw @ 0x8087F25C
    /* lfd f2, 0x130(r31) */ // 0x8087F260
    /* lis r4, 0 */ // 0x8087F264
    /* lfd f0, 0xd0(r1) */ // 0x8087F268
    /* li r3, 0 */ // 0x8087F26C
    /* lfs f1, 0x138(r31) */ // 0x8087F270
    /* fsubs f2, f0, f2 */ // 0x8087F274
    /* lfs f0, 0x188(r28) */ // 0x8087F278
    /* fmuls f1, f1, f2 */ // 0x8087F27C
    /* stfs f1, 0x180(r28) */ // 0x8087F280
    /* fadds f0, f1, f0 */ // 0x8087F284
    /* fctiwz f0, f0 */ // 0x8087F288
    /* stfd f0, 0xe0(r1) */ // 0x8087F28C
    r0 = *(0xe4 + r1); // lwz @ 0x8087F290
    *(0x18c + r28) = r0; // stw @ 0x8087F294
    r4 = *(0 + r4); // lwz @ 0x8087F298
    r0 = *(0xb70 + r4); // lwz @ 0x8087F29C
    if (<) goto 0x0x8087f2b4;
    if (>) goto 0x0x8087f2b4;
    /* li r3, 1 */ // 0x8087F2B0
    if (==) goto 0x0x8087f350;
    /* xoris r0, r29, 0x8000 */ // 0x8087F2BC
    *(0xdc + r1) = r0; // stw @ 0x8087F2C0
    /* lfd f2, 0x130(r31) */ // 0x8087F2C4
    /* lfd f1, 0xd8(r1) */ // 0x8087F2C8
    /* lfs f0, 0x128(r31) */ // 0x8087F2CC
    /* fsubs f1, f1, f2 */ // 0x8087F2D0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8087F2D4
    if (<=) goto 0x0x8087f314;
    *(0xd4 + r1) = r0; // stw @ 0x8087F2DC
    /* lfs f1, 0x138(r31) */ // 0x8087F2E0
    /* lfd f0, 0xd0(r1) */ // 0x8087F2E4
    /* lfs f3, 0x13c(r31) */ // 0x8087F2E8
    /* fsubs f0, f0, f2 */ // 0x8087F2EC
    /* fdivs f0, f0, f1 */ // 0x8087F2F0
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8087F2F4
    if (<=) goto 0x0x8087f300;
    /* b 0x8087f348 */ // 0x8087F2FC
    *(0xdc + r1) = r0; // stw @ 0x8087F300
    /* lfd f0, 0xd8(r1) */ // 0x8087F304
    /* fsubs f0, f0, f2 */ // 0x8087F308
    /* fdivs f3, f0, f1 */ // 0x8087F30C
    /* b 0x8087f348 */ // 0x8087F310
    *(0xd4 + r1) = r0; // stw @ 0x8087F314
    /* lfs f1, 0x138(r31) */ // 0x8087F318
    /* lfd f0, 0xd0(r1) */ // 0x8087F31C
    /* lfs f3, 0x140(r31) */ // 0x8087F320
    /* fsubs f0, f0, f2 */ // 0x8087F324
    /* fdivs f0, f0, f1 */ // 0x8087F328
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x8087F32C
    if (>=) goto 0x0x8087f338;
    /* b 0x8087f348 */ // 0x8087F334
    *(0xdc + r1) = r0; // stw @ 0x8087F338
    /* lfd f0, 0xd8(r1) */ // 0x8087F33C
    /* fsubs f0, f0, f2 */ // 0x8087F340
    /* fdivs f3, f0, f1 */ // 0x8087F344
    /* stfs f3, 0x184(r28) */ // 0x8087F348
    /* b 0x8087f380 */ // 0x8087F34C
    /* xoris r0, r29, 0x8000 */ // 0x8087F350
    *(0xd4 + r1) = r0; // stw @ 0x8087F354
    /* lfd f2, 0x130(r31) */ // 0x8087F358
    /* lfd f1, 0xd0(r1) */ // 0x8087F35C
    /* lfs f0, 0x128(r31) */ // 0x8087F360
    /* fsubs f1, f1, f2 */ // 0x8087F364
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8087F368
    if (<=) goto 0x0x8087f378;
    /* lfs f0, 0x13c(r31) */ // 0x8087F370
    /* b 0x8087f37c */ // 0x8087F374
    /* lfs f0, 0x140(r31) */ // 0x8087F378
    /* stfs f0, 0x184(r28) */ // 0x8087F37C
    /* neg r0, r29 */ // 0x8087F380
    /* lis r4, 0 */ // 0x8087F384
    /* andc r0, r0, r29 */ // 0x8087F388
    *(0x17c + r28) = r30; // stb @ 0x8087F38C
    /* srwi r0, r0, 0x1f */ // 0x8087F390
    r4 = r4 + 0; // 0x8087F394
    *(0x17d + r28) = r0; // stb @ 0x8087F398
    r3 = r28;
    r4 = r4 + 0x112; // 0x8087F3A0
    *(8 + r1) = r29; // stw @ 0x8087F3A8
    /* li r5, 0x523 */ // 0x8087F3AC
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r0 = *(0x104 + r1); // lwz @ 0x8087F3B4
    r31 = *(0xfc + r1); // lwz @ 0x8087F3B8
    r30 = *(0xf8 + r1); // lwz @ 0x8087F3BC
    r29 = *(0xf4 + r1); // lwz @ 0x8087F3C0
    r28 = *(0xf0 + r1); // lwz @ 0x8087F3C4
    return;
}