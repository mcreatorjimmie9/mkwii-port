/* Function at 0x806DC034, size=1304 bytes */
/* Stack frame: 432 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 15 function(s) */

int FUN_806DC034(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -432(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 1 */ // 0x806DC03C
    /* li r0, 0 */ // 0x806DC044
    *(0x1a8 + r1) = r30; // stw @ 0x806DC04C
    r30 = r3;
    *(0x1a4 + r1) = r29; // stw @ 0x806DC054
    *(0x1a0 + r1) = r28; // stw @ 0x806DC058
    *(0x180 + r3) = r4; // stw @ 0x806DC05C
    /* li r4, 0 */ // 0x806DC060
    *(0x1b1 + r3) = r0; // stb @ 0x806DC064
    r3 = r3 + 0x1b4; // 0x806DC068
    FUN_806692E0(r4, r3); // bl 0x806692E0
    r0 = *(0x174 + r30); // lwz @ 0x806DC070
    if (==) goto 0x0x806dc098;
    if (==) goto 0x0x806dc128;
    if (==) goto 0x0x806dc3f0;
    if (==) goto 0x0x806dc460;
    /* b 0x806dc52c */ // 0x806DC094
    r3 = *(0x188 + r30); // lwz @ 0x806DC098
    r4 = *(0x17c + r30); // lwz @ 0x806DC09C
    r3 = r3 + 0x174; // 0x806DC0A0
    FUN_8066E0EC(r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806DC0A8
    r0 = r0 | r3; // 0x806DC0AC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806DC0B0
    if (!=) goto 0x0x806dc52c;
    /* lis r31, 0 */ // 0x806DC0B8
    r4 = *(0x178 + r30); // lwz @ 0x806DC0BC
    r3 = *(0 + r31); // lwz @ 0x806DC0C0
    r3 = *(0 + r3); // lwz @ 0x806DC0C4
    r3 = *(0x404 + r3); // lwz @ 0x806DC0C8
    FUN_80659884(); // bl 0x80659884
    if (==) goto 0x0x806dc52c;
    r3 = *(0 + r31); // lwz @ 0x806DC0D8
    r4 = *(0x178 + r30); // lwz @ 0x806DC0DC
    r3 = *(0 + r3); // lwz @ 0x806DC0E0
    r3 = *(0x404 + r3); // lwz @ 0x806DC0E4
    FUN_80659814(); // bl 0x80659814
    /* li r0, 0x26 */ // 0x806DC0EC
    r4 = r3 + 0x21; // 0x806DC0F4
    /* mtctr r0 */ // 0x806DC0F8
    r3 = *(1 + r4); // lbz @ 0x806DC0FC
    /* lbzu r0, 2(r4) */ // 0x806DC100
    *(1 + r5) = r3; // stb @ 0x806DC104
    /* stbu r0, 2(r5) */ // 0x806DC108
    if (counter-- != 0) goto 0x0x806dc0fc;
    r3 = *(0x188 + r30); // lwz @ 0x806DC110
    r4 = *(0x17c + r30); // lwz @ 0x806DC118
    r3 = r3 + 0x174; // 0x806DC11C
    FUN_8066DDCC(r5, r3); // bl 0x8066DDCC
    /* b 0x806dc52c */ // 0x806DC124
    r28 = *(0x188 + r30); // lwz @ 0x806DC128
    r0 = *(0xc3c + r28); // lwz @ 0x806DC12C
    if (==) goto 0x0x806dc144;
    if (==) goto 0x0x806dc14c;
    /* b 0x806dc150 */ // 0x806DC140
    /* li r31, 1 */ // 0x806DC144
    /* b 0x806dc150 */ // 0x806DC148
    /* li r31, 0 */ // 0x806DC14C
    if (!=) goto 0x0x806dc160;
    /* li r28, 0 */ // 0x806DC158
    /* b 0x806dc1b4 */ // 0x806DC15C
    /* lis r29, 0 */ // 0x806DC160
    r29 = r29 + 0; // 0x806DC164
    if (==) goto 0x0x806dc1b0;
    r12 = *(0 + r28); // lwz @ 0x806DC16C
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x806DC174
    /* mtctr r12 */ // 0x806DC178
    /* bctrl  */ // 0x806DC17C
    /* b 0x806dc198 */ // 0x806DC180
    if (!=) goto 0x0x806dc194;
    /* li r0, 1 */ // 0x806DC18C
    /* b 0x806dc1a4 */ // 0x806DC190
    r3 = *(0 + r3); // lwz @ 0x806DC194
    if (!=) goto 0x0x806dc184;
    /* li r0, 0 */ // 0x806DC1A0
    if (==) goto 0x0x806dc1b0;
    /* b 0x806dc1b4 */ // 0x806DC1AC
    /* li r28, 0 */ // 0x806DC1B0
    if (==) goto 0x0x806dc234;
    r3 = *(0x188 + r30); // lwz @ 0x806DC1BC
    /* lis r4, 0 */ // 0x806DC1C0
    r4 = *(0 + r4); // lwz @ 0x806DC1C4
    r3 = *(0xc38 + r3); // lwz @ 0x806DC1C8
    /* addis r28, r4, 2 */ // 0x806DC1CC
    FUN_805E0ED8(r4); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x806DC1D4
    if (<) goto 0x0x806dc3d8;
    /* clrlwi r0, r3, 0x10 */ // 0x806DC1DC
    r3 = *(0x4ffc + r28); // lwz @ 0x806DC1E0
    /* mulli r0, r0, 0xa0 */ // 0x806DC1E4
    /* addis r3, r3, 2 */ // 0x806DC1E8
    r3 = r3 + 0x3308; // 0x806DC1EC
    /* mulli r4, r31, 0x50 */ // 0x806DC1F0
    r0 = r3 + r0; // 0x806DC1F4
    r3 = r0 + r4; // 0x806DC1F8
    r0 = *(0x2330 + r3); // lwz @ 0x806DC1FC
    /* srwi r0, r0, 0x1f */ // 0x806DC200
    if (!=) goto 0x0x806dc3d8;
    /* li r0, 0x26 */ // 0x806DC20C
    r4 = r3 + 0x2333; // 0x806DC214
    /* mtctr r0 */ // 0x806DC218
    r3 = *(1 + r4); // lbz @ 0x806DC21C
    /* lbzu r0, 2(r4) */ // 0x806DC220
    *(1 + r5) = r3; // stb @ 0x806DC224
    /* stbu r0, 2(r5) */ // 0x806DC228
    if (counter-- != 0) goto 0x0x806dc21c;
    /* b 0x806dc3d8 */ // 0x806DC230
    r28 = *(0x188 + r30); // lwz @ 0x806DC234
    if (!=) goto 0x0x806dc248;
    /* li r28, 0 */ // 0x806DC240
    /* b 0x806dc29c */ // 0x806DC244
    /* lis r29, 0 */ // 0x806DC248
    r29 = r29 + 0; // 0x806DC24C
    if (==) goto 0x0x806dc298;
    r12 = *(0 + r28); // lwz @ 0x806DC254
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x806DC25C
    /* mtctr r12 */ // 0x806DC260
    /* bctrl  */ // 0x806DC264
    /* b 0x806dc280 */ // 0x806DC268
    if (!=) goto 0x0x806dc27c;
    /* li r0, 1 */ // 0x806DC274
    /* b 0x806dc28c */ // 0x806DC278
    r3 = *(0 + r3); // lwz @ 0x806DC27C
    if (!=) goto 0x0x806dc26c;
    /* li r0, 0 */ // 0x806DC288
    if (==) goto 0x0x806dc298;
    /* b 0x806dc29c */ // 0x806DC294
    /* li r28, 0 */ // 0x806DC298
    if (==) goto 0x0x806dc3d8;
    /* lis r3, 0 */ // 0x806DC2A4
    /* li r0, 0 */ // 0x806DC2A8
    *(8 + r1) = r0; // stb @ 0x806DC2AC
    r3 = *(0 + r3); // lwz @ 0x806DC2B4
    *(0xc + r1) = r0; // stw @ 0x806DC2B8
    FUN_806F9214(r4); // bl 0x806F9214
    r4 = *(0x188 + r30); // lwz @ 0x806DC2C0
    r3 = *(0x10 + r1); // lwz @ 0x806DC2C4
    r0 = *(0xc38 + r4); // lwz @ 0x806DC2C8
    if (!=) goto 0x0x806dc32c;
    /* lis r3, 0 */ // 0x806DC2D4
    r3 = *(0 + r3); // lwz @ 0x806DC2D8
    /* mulli r0, r31, 0x54 */ // 0x806DC2DC
    /* addis r3, r3, 2 */ // 0x806DC2E0
    r3 = *(0x4ffc + r3); // lwz @ 0x806DC2E4
    /* addis r3, r3, 2 */ // 0x806DC2E8
    r3 = r3 + 0x3308; // 0x806DC2EC
    r3 = r3 + r0; // 0x806DC2F0
    r0 = *(0x3730 + r3); // lwz @ 0x806DC2F4
    /* srwi r0, r0, 0x1f */ // 0x806DC2F8
    if (!=) goto 0x0x806dc3d8;
    /* li r0, 0x26 */ // 0x806DC304
    r4 = r3 + 0x3737; // 0x806DC30C
    /* mtctr r0 */ // 0x806DC310
    r3 = *(1 + r4); // lbz @ 0x806DC314
    /* lbzu r0, 2(r4) */ // 0x806DC318
    *(1 + r5) = r3; // stb @ 0x806DC31C
    /* stbu r0, 2(r5) */ // 0x806DC320
    if (counter-- != 0) goto 0x0x806dc314;
    /* b 0x806dc3d8 */ // 0x806DC328
    r0 = *(0xc3c + r4); // lwz @ 0x806DC32C
    if (==) goto 0x0x806dc344;
    if (==) goto 0x0x806dc34c;
    /* b 0x806dc350 */ // 0x806DC340
    /* li r31, 1 */ // 0x806DC344
    /* b 0x806dc350 */ // 0x806DC348
    /* li r31, 0 */ // 0x806DC34C
    /* lis r4, 0 */ // 0x806DC350
    /* li r0, 0 */ // 0x806DC354
    r4 = r4 + 0; // 0x806DC358
    *(0xc8 + r1) = r4; // stw @ 0x806DC35C
    /* lis r3, 0 */ // 0x806DC360
    r5 = r31;
    *(0xd2 + r1) = r0; // stb @ 0x806DC368
    r3 = *(0 + r3); // lwz @ 0x806DC370
    /* li r7, 0 */ // 0x806DC374
    *(0xcc + r1) = r0; // sth @ 0x806DC378
    *(0xce + r1) = r0; // stb @ 0x806DC37C
    *(0xd0 + r1) = r0; // sth @ 0x806DC380
    *(0xd4 + r1) = r4; // stw @ 0x806DC384
    *(0xde + r1) = r0; // stb @ 0x806DC388
    *(0xd8 + r1) = r0; // sth @ 0x806DC38C
    *(0xda + r1) = r0; // stb @ 0x806DC390
    *(0xdc + r1) = r0; // sth @ 0x806DC394
    r4 = *(0x188 + r30); // lwz @ 0x806DC398
    r4 = *(0xc38 + r4); // lwz @ 0x806DC39C
    FUN_806F81F4(); // bl 0x806F81F4
    if (==) goto 0x0x806dc3d8;
    /* li r0, 9 */ // 0x806DC3AC
    /* mtctr r0 */ // 0x806DC3B8
    r3 = *(4 + r4); // lwz @ 0x806DC3BC
    r0 = *(8 + r4); // lwzu @ 0x806DC3C0
    *(4 + r5) = r3; // stw @ 0x806DC3C4
    *(8 + r5) = r0; // stwu @ 0x806DC3C8
    if (counter-- != 0) goto 0x0x806dc3bc;
    r0 = *(4 + r4); // lwz @ 0x806DC3D0
    *(4 + r5) = r0; // stw @ 0x806DC3D4
    r3 = *(0x188 + r30); // lwz @ 0x806DC3D8
    r4 = *(0x17c + r30); // lwz @ 0x806DC3E0
    r3 = r3 + 0x174; // 0x806DC3E4
    FUN_8066DDCC(r5, r3); // bl 0x8066DDCC
    /* b 0x806dc52c */ // 0x806DC3EC
    /* lis r3, 0 */ // 0x806DC3F0
    r3 = *(0 + r3); // lwz @ 0x806DC3F4
    FUN_806F946C(r3, r3); // bl 0x806F946C
    r0 = *(0 + r3); // lwz @ 0x806DC3FC
    r6 = r3;
    /* li r7, 0 */ // 0x806DC404
    /* li r8, 0 */ // 0x806DC408
    /* mtctr r0 */ // 0x806DC40C
    if (<=) goto 0x0x806dc448;
    r4 = *(0x188 + r30); // lwz @ 0x806DC418
    r5 = *(4 + r6); // lwz @ 0x806DC41C
    r0 = *(0xc38 + r4); // lwz @ 0x806DC420
    if (!=) goto 0x0x806dc43c;
    /* mulli r0, r8, 0x70 */ // 0x806DC42C
    r3 = r3 + r0; // 0x806DC430
    r7 = r3 + 4; // 0x806DC434
    /* b 0x806dc448 */ // 0x806DC438
    r6 = r6 + 0x70; // 0x806DC43C
    r8 = r8 + 1; // 0x806DC440
    if (counter-- != 0) goto 0x0x806dc418;
    r3 = *(0x188 + r30); // lwz @ 0x806DC448
    r5 = r7 + 0x14; // 0x806DC44C
    r4 = *(0x17c + r30); // lwz @ 0x806DC450
    r3 = r3 + 0x174; // 0x806DC454
    FUN_8066DDCC(r5, r3); // bl 0x8066DDCC
    /* b 0x806dc52c */ // 0x806DC45C
    /* lis r3, 0 */ // 0x806DC460
    r3 = *(0 + r3); // lwz @ 0x806DC464
    r3 = *(0 + r3); // lwz @ 0x806DC468
    r29 = *(0x2a4 + r3); // lwz @ 0x806DC46C
    if (!=) goto 0x0x806dc480;
    /* li r29, 0 */ // 0x806DC478
    /* b 0x806dc4d4 */ // 0x806DC47C
    /* lis r28, 0 */ // 0x806DC480
    r28 = r28 + 0; // 0x806DC484
    if (==) goto 0x0x806dc4d0;
    r12 = *(0 + r29); // lwz @ 0x806DC48C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DC494
    /* mtctr r12 */ // 0x806DC498
    /* bctrl  */ // 0x806DC49C
    /* b 0x806dc4b8 */ // 0x806DC4A0
    if (!=) goto 0x0x806dc4b4;
    /* li r0, 1 */ // 0x806DC4AC
    /* b 0x806dc4c4 */ // 0x806DC4B0
    r3 = *(0 + r3); // lwz @ 0x806DC4B4
    if (!=) goto 0x0x806dc4a4;
    /* li r0, 0 */ // 0x806DC4C0
    if (==) goto 0x0x806dc4d0;
    /* b 0x806dc4d4 */ // 0x806DC4CC
    /* li r29, 0 */ // 0x806DC4D0
    r3 = *(0x188 + r30); // lwz @ 0x806DC4D4
    r28 = *(0xc38 + r3); // lwz @ 0x806DC4D8
    r3 = r28;
    FUN_805E52A4(r3); // bl 0x805E52A4
    if (!=) goto 0x0x806dc504;
    r3 = r29;
    r6 = r28;
    /* li r4, 0x26 */ // 0x806DC4F4
    /* li r5, 0 */ // 0x806DC4F8
    FUN_8065F900(r3, r6, r4, r5); // bl 0x8065F900
    /* b 0x806dc518 */ // 0x806DC500
    r3 = r29;
    r6 = r28;
    /* li r4, 0x25 */ // 0x806DC50C
    /* li r5, 0 */ // 0x806DC510
    FUN_8065F900(r3, r6, r4, r5); // bl 0x8065F900
    r6 = *(0x188 + r30); // lwz @ 0x806DC518
    r5 = r3 + 0x18; // 0x806DC51C
    r4 = *(0x17c + r30); // lwz @ 0x806DC520
    r3 = r6 + 0x174; // 0x806DC524
    FUN_8066DDCC(r5, r3); // bl 0x8066DDCC
    r0 = *(0x1b4 + r1); // lwz @ 0x806DC52C
    r31 = *(0x1ac + r1); // lwz @ 0x806DC530
    r30 = *(0x1a8 + r1); // lwz @ 0x806DC534
    r29 = *(0x1a4 + r1); // lwz @ 0x806DC538
    r28 = *(0x1a0 + r1); // lwz @ 0x806DC53C
    return;
}