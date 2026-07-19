/* Function at 0x807DE2D4, size=508 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807DE2D4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807DE2DC
    r31 = r3;
    *(0xb8 + r1) = r30; // stw @ 0x807DE2EC
    *(0xb4 + r1) = r29; // stw @ 0x807DE2F0
    /* lis r29, 0 */ // 0x807DE2F4
    r29 = r29 + 0; // 0x807DE2F8
    *(0xb0 + r1) = r28; // stw @ 0x807DE2FC
    r5 = *(0x8c + r3); // lwz @ 0x807DE300
    r0 = *(0 + r4); // lwz @ 0x807DE304
    r0 = r5 + r0; // 0x807DE308
    *(0x8c + r3) = r0; // stw @ 0x807DE30C
    if (!=) goto 0x0x807de330;
    /* lfs f0, 0x274(r29) */ // 0x807DE318
    /* li r0, 1 */ // 0x807DE31C
    /* stfs f0, 0xc8(r3) */ // 0x807DE320
    *(8 + r3) = r0; // stw @ 0x807DE324
    *(0xf9 + r3) = r0; // stb @ 0x807DE328
    /* b 0x807de35c */ // 0x807DE32C
    /* xoris r3, r0, 0x8000 */ // 0x807DE330
    /* lis r0, 0x4330 */ // 0x807DE334
    *(0xa4 + r1) = r3; // stw @ 0x807DE338
    /* lfd f2, 0x298(r29) */ // 0x807DE33C
    *(0xa0 + r1) = r0; // stw @ 0x807DE340
    /* lfs f0, 0x284(r29) */ // 0x807DE344
    /* lfd f1, 0xa0(r1) */ // 0x807DE348
    /* fsubs f1, f1, f2 */ // 0x807DE34C
    /* fmuls f1, f1, f0 */ // 0x807DE350
    FUN_805E3430(); // bl 0x805E3430
    /* stfs f1, 0xc8(r31) */ // 0x807DE358
    /* lis r3, 0 */ // 0x807DE35C
    r3 = r3 + 0; // 0x807DE360
    r0 = *(4 + r3); // lwz @ 0x807DE364
    if (>) goto 0x0x807de380;
    r12 = *(0 + r3); // lwz @ 0x807DE370
    r12 = *(0x18 + r12); // lwz @ 0x807DE374
    /* mtctr r12 */ // 0x807DE378
    /* bctrl  */ // 0x807DE37C
    /* lis r30, 0 */ // 0x807DE380
    /* lfs f1, 0xc8(r31) */ // 0x807DE384
    r30 = r30 + 0; // 0x807DE388
    r5 = *(8 + r30); // lwz @ 0x807DE390
    r4 = r31 + 0xac; // 0x807DE394
    r5 = *(0 + r5); // lwz @ 0x807DE398
    r28 = *(0x6c + r5); // lwz @ 0x807DE39C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r31 + 0x90; // 0x807DE3A8
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x28(r1) */ // 0x807DE3B4
    /* stfs f0, 0x64(r28) */ // 0x807DE3BC
    r4 = r31 + 0xb8; // 0x807DE3C0
    /* lfs f0, 0x2c(r1) */ // 0x807DE3C4
    /* stfs f0, 0x68(r28) */ // 0x807DE3C8
    /* lfs f0, 0x30(r1) */ // 0x807DE3CC
    /* stfs f0, 0x6c(r28) */ // 0x807DE3D0
    /* lfs f1, 0xc8(r31) */ // 0x807DE3D4
    FUN_805A443C(); // bl 0x805A443C
    r4 = r31 + 0x9c; // 0x807DE3E0
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x10(r1) */ // 0x807DE3EC
    /* stfs f0, 0x70(r28) */ // 0x807DE3F0
    /* lfs f0, 0x14(r1) */ // 0x807DE3F4
    /* stfs f0, 0x74(r28) */ // 0x807DE3F8
    /* lfs f0, 0x18(r1) */ // 0x807DE3FC
    /* stfs f0, 0x78(r28) */ // 0x807DE400
    r0 = *(4 + r30); // lwz @ 0x807DE404
    if (>) goto 0x0x807de424;
    r12 = *(0 + r30); // lwz @ 0x807DE410
    r3 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x807DE418
    /* mtctr r12 */ // 0x807DE41C
    /* bctrl  */ // 0x807DE420
    /* lis r3, 0 */ // 0x807DE424
    /* lfs f1, 0xc4(r31) */ // 0x807DE428
    /* lfs f0, 0xc8(r31) */ // 0x807DE42C
    r3 = r3 + 0; // 0x807DE430
    r3 = *(8 + r3); // lwz @ 0x807DE434
    /* fmuls f1, f1, f0 */ // 0x807DE438
    /* lfs f0, 0xa8(r31) */ // 0x807DE43C
    r30 = *(0 + r3); // lwz @ 0x807DE440
    /* fadds f2, f0, f1 */ // 0x807DE444
    /* lfs f0, 0x10(r30) */ // 0x807DE448
    /* fcmpu cr0, f0, f2 */ // 0x807DE44C
    if (==) goto 0x0x807de484;
    /* lfs f1, 0x2ac(r29) */ // 0x807DE454
    /* lfs f0, 0x2b0(r29) */ // 0x807DE45C
    /* fmuls f1, f2, f1 */ // 0x807DE464
    /* stfs f2, 0x10(r30) */ // 0x807DE468
    /* fmuls f1, f0, f1 */ // 0x807DE46C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0xc(r1) */ // 0x807DE474
    /* lfs f0, 8(r1) */ // 0x807DE478
    /* fdivs f0, f1, f0 */ // 0x807DE47C
    /* stfs f0, 0x14(r30) */ // 0x807DE480
    /* lfs f3, 0xd8(r31) */ // 0x807DE484
    /* lfs f2, 0xc8(r31) */ // 0x807DE488
    /* lfs f1, 0xd0(r31) */ // 0x807DE48C
    /* lfs f0, 0xfc(r31) */ // 0x807DE490
    /* fmuls f3, f3, f2 */ // 0x807DE494
    /* lfs f2, 0xe0(r31) */ // 0x807DE498
    /* fsubs f1, f1, f0 */ // 0x807DE49C
    /* lfs f0, 0x27c(r29) */ // 0x807DE4A0
    /* fadds f2, f2, f3 */ // 0x807DE4A4
    /* stfs f1, 0xd0(r31) */ // 0x807DE4A8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DE4AC
    /* stfs f2, 0xcc(r31) */ // 0x807DE4B0
    if (>=) goto 0x0x807de4c4;
    /* lfs f0, 0x280(r29) */ // 0x807DE4B8
    /* fadds f0, f1, f0 */ // 0x807DE4BC
    /* stfs f0, 0xd0(r31) */ // 0x807DE4C0
    /* lfs f1, 0xd0(r31) */ // 0x807DE4C4
    /* lis r4, 0 */ // 0x807DE4C8
    /* lfs f0, 0x284(r29) */ // 0x807DE4CC
}