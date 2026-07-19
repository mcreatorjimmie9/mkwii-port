/* Function at 0x8064B298, size=552 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8064B298(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x8064B2B0
    /* lis r29, 0 */ // 0x8064B2B4
    r3 = *(0 + r29); // lwz @ 0x8064B2B8
    FUN_806F8AB8(); // bl 0x806F8AB8
    *(0x254 + r30) = r3; // stb @ 0x8064B2C0
    /* lis r4, 0 */ // 0x8064B2C4
    /* lis r3, 0 */ // 0x8064B2C8
    /* li r31, 0 */ // 0x8064B2CC
    r4 = *(0 + r4); // lwz @ 0x8064B2D0
    r3 = *(0 + r3); // lwz @ 0x8064B2D4
    r4 = *(0x98 + r4); // lwz @ 0x8064B2D8
    r0 = *(0x36 + r3); // lha @ 0x8064B2DC
    r3 = r4 + r0; // 0x8064B2E0
    r0 = *(0x4c0 + r3); // lbz @ 0x8064B2E4
    *(0x255 + r30) = r0; // stb @ 0x8064B2E8
    r3 = *(0 + r29); // lwz @ 0x8064B2EC
    FUN_806F946C(); // bl 0x806F946C
    if (==) goto 0x0x8064b314;
    r3 = *(0 + r29); // lwz @ 0x8064B2FC
    FUN_806F946C(); // bl 0x806F946C
    r0 = *(0 + r3); // lwz @ 0x8064B304
    if (<=) goto 0x0x8064b314;
    /* li r31, 1 */ // 0x8064B310
    *(0x256 + r30) = r31; // stb @ 0x8064B314
    /* li r31, 0 */ // 0x8064B318
    /* lis r3, 0 */ // 0x8064B31C
    *(0xc + r1) = r31; // stb @ 0x8064B324
    r3 = *(0 + r3); // lwz @ 0x8064B328
    *(0x10 + r1) = r31; // stw @ 0x8064B32C
    FUN_806F9214(r3, r4); // bl 0x806F9214
    if (!=) goto 0x0x8064b34c;
    r0 = *(0x18 + r1); // lwz @ 0x8064B33C
    if (!=) goto 0x0x8064b34c;
    /* li r31, 1 */ // 0x8064B348
    /* li r0, 0 */ // 0x8064B34C
    *(0x257 + r30) = r31; // stb @ 0x8064B350
    /* lis r3, 0 */ // 0x8064B354
    *(0x258 + r30) = r0; // stb @ 0x8064B358
    r3 = *(0 + r3); // lwz @ 0x8064B35C
    r3 = *(0 + r3); // lwz @ 0x8064B360
    r31 = *(0x298 + r3); // lwz @ 0x8064B364
    if (!=) goto 0x0x8064b378;
    /* li r31, 0 */ // 0x8064B370
    /* b 0x8064b3cc */ // 0x8064B374
    /* lis r29, 0 */ // 0x8064B378
    r29 = r29 + 0; // 0x8064B37C
    if (==) goto 0x0x8064b3c8;
    r12 = *(0 + r31); // lwz @ 0x8064B384
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x8064B38C
    /* mtctr r12 */ // 0x8064B390
    /* bctrl  */ // 0x8064B394
    /* b 0x8064b3b0 */ // 0x8064B398
    if (!=) goto 0x0x8064b3ac;
    /* li r0, 1 */ // 0x8064B3A4
    /* b 0x8064b3bc */ // 0x8064B3A8
    r3 = *(0 + r3); // lwz @ 0x8064B3AC
    if (!=) goto 0x0x8064b39c;
    /* li r0, 0 */ // 0x8064B3B8
    if (==) goto 0x0x8064b3c8;
    /* b 0x8064b3cc */ // 0x8064B3C4
    /* li r31, 0 */ // 0x8064B3C8
    if (==) goto 0x0x8064b3e0;
    r0 = *(0xc98 + r31); // lbz @ 0x8064B3D4
    *(0x259 + r30) = r0; // stb @ 0x8064B3D8
    /* b 0x8064b3e8 */ // 0x8064B3DC
    /* li r0, 0 */ // 0x8064B3E0
    *(0x259 + r30) = r0; // stb @ 0x8064B3E4
    /* li r29, 0 */ // 0x8064B3E8
    /* lis r31, 0 */ // 0x8064B3EC
    r3 = *(0 + r31); // lwz @ 0x8064B3F0
    r4 = r29;
    FUN_806F8E64(r4); // bl 0x806F8E64
    if (==) goto 0x0x8064b410;
    /* li r0, 1 */ // 0x8064B404
    *(0x25a + r30) = r0; // stb @ 0x8064B408
    /* b 0x8064b41c */ // 0x8064B40C
    r29 = r29 + 1; // 0x8064B410
    if (<) goto 0x0x8064b3f0;
    /* lis r3, 0 */ // 0x8064B41C
    /* lis r4, 0 */ // 0x8064B420
    r3 = *(0 + r3); // lwz @ 0x8064B424
    /* li r31, 0 */ // 0x8064B428
    r3 = *(0x68 + r3); // lwz @ 0x8064B42C
    r0 = r3 + -1; // 0x8064B430
    /* cntlzw r0, r0 */ // 0x8064B434
    /* srwi r0, r0, 5 */ // 0x8064B438
    *(0x25b + r30) = r0; // stb @ 0x8064B43C
    r3 = *(0 + r4); // lwz @ 0x8064B440
    /* addis r3, r3, 2 */ // 0x8064B444
    r3 = *(0x4ffc + r3); // lwz @ 0x8064B448
    /* addis r3, r3, 2 */ // 0x8064B44C
    r0 = *(0x330c + r3); // lwz @ 0x8064B450
    r0 = r0 rlwinm 0x1d; // rlwinm
    /* xori r0, r0, 1 */ // 0x8064B458
    *(0x25c + r30) = r0; // stb @ 0x8064B45C
    r3 = *(0 + r4); // lwz @ 0x8064B460
    /* addis r4, r3, 2 */ // 0x8064B464
    r4 = *(0x4ffc + r4); // lwz @ 0x8064B468
    /* addis r4, r4, 2 */ // 0x8064B46C
    r0 = *(0x330c + r4); // lwz @ 0x8064B470
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8064B474
    if (==) goto 0x0x8064b490;
    FUN_805D9544(r4); // bl 0x805D9544
    if (!=) goto 0x0x8064b490;
    /* li r31, 1 */ // 0x8064B48C
    *(0x25d + r30) = r31; // stb @ 0x8064B490
    /* lis r3, 0 */ // 0x8064B494
    r3 = *(0 + r3); // lwz @ 0x8064B498
    FUN_806F5920(r3); // bl 0x806F5920
    *(0x25e + r30) = r3; // stb @ 0x8064B4A0
    r31 = *(0x3c + r1); // lwz @ 0x8064B4A4
    r30 = *(0x38 + r1); // lwz @ 0x8064B4A8
    r29 = *(0x34 + r1); // lwz @ 0x8064B4AC
    r0 = *(0x44 + r1); // lwz @ 0x8064B4B0
    return;
}