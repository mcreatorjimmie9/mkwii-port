/* Function at 0x808C8140, size=1596 bytes */
/* Stack frame: 544 bytes */
/* Saved registers: r27 */
/* Calls: 21 function(s) */

int FUN_808C8140(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -544(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x808C8148
    /* li r6, 0 */ // 0x808C814C
    *(0x224 + r1) = r0; // stw @ 0x808C8150
    /* li r0, -1 */ // 0x808C8154
    /* stmw r27, 0x20c(r1) */ // 0x808C8158
    r29 = r3;
    /* li r31, 0 */ // 0x808C8160
    /* lis r27, 0 */ // 0x808C8164
    r4 = *(0 + r5); // lwz @ 0x808C8168
    r3 = *(0x98 + r4); // lwz @ 0x808C816C
    *(0x3d0 + r3) = r6; // stb @ 0x808C8170
    r3 = *(0 + r5); // lwz @ 0x808C8174
    r3 = *(0x98 + r3); // lwz @ 0x808C8178
    *(0x3d8 + r3) = r6; // stb @ 0x808C817C
    r3 = *(0 + r5); // lwz @ 0x808C8180
    r3 = *(0x98 + r3); // lwz @ 0x808C8184
    *(0x3d4 + r3) = r0; // stw @ 0x808C8188
    /* b 0x808c8224 */ // 0x808C818C
    /* clrlwi. r4, r31, 0x18 */ // 0x808C8190
    if (!=) goto 0x0x808c81d4;
    r3 = *(0 + r27); // lwz @ 0x808C8198
    /* mulli r28, r4, 0xc */ // 0x808C819C
    r3 = *(0xc + r3); // lwz @ 0x808C81A0
    r4 = r29 + r28; // 0x808C81A4
    r3 = *(0 + r3); // lwz @ 0x808C81A8
    r3 = *(0x40 + r3); // lwz @ 0x808C81AC
    r0 = *(4 + r3); // lhz @ 0x808C81B0
    *(0x1ac + r4) = r0; // sth @ 0x808C81B4
    r0 = *(6 + r3); // lbz @ 0x808C81B8
    *(0x1ae + r4) = r0; // stb @ 0x808C81BC
    r0 = *(8 + r3); // lhz @ 0x808C81C0
    *(0x1b0 + r4) = r0; // sth @ 0x808C81C4
    r0 = *(0xa + r3); // lbz @ 0x808C81C8
    *(0x1b2 + r4) = r0; // stb @ 0x808C81CC
    /* b 0x808c81f0 */ // 0x808C81D0
    r3 = *(0 + r27); // lwz @ 0x808C81D4
    /* mulli r28, r4, 0xc */ // 0x808C81D8
    r3 = *(0xc + r3); // lwz @ 0x808C81DC
    r5 = r29 + r28; // 0x808C81E0
    r3 = *(0 + r3); // lwz @ 0x808C81E4
    r5 = r5 + 0x1a8; // 0x808C81E8
    FUN_805C4C84(r5); // bl 0x805C4C84
    r3 = *(0x44 + r29); // lwz @ 0x808C81F0
    r30 = r31 rlwinm 2; // rlwinm
    r4 = r29 + r28; // 0x808C81F8
    /* lwzx r3, r3, r30 */ // 0x808C81FC
    r4 = r4 + 0x1a8; // 0x808C8200
    FUN_80881A60(r4); // bl 0x80881A60
    r3 = *(0x44 + r29); // lwz @ 0x808C8208
    /* lwzx r3, r3, r30 */ // 0x808C820C
    r12 = *(0 + r3); // lwz @ 0x808C8210
    r12 = *(0x50 + r12); // lwz @ 0x808C8214
    /* mtctr r12 */ // 0x808C8218
    /* bctrl  */ // 0x808C821C
    r31 = r31 + 1; // 0x808C8220
    r0 = *(0x48 + r29); // lbz @ 0x808C8224
    /* clrlwi r3, r31, 0x18 */ // 0x808C8228
    if (<) goto 0x0x808c8190;
    /* lis r3, 0 */ // 0x808C8234
    r5 = *(0 + r3); // lwz @ 0x808C8238
    r0 = *(0x36 + r5); // lha @ 0x808C823C
    if (<) goto 0x0x808c8264;
    /* lis r3, 1 */ // 0x808C8248
    /* clrlwi r4, r0, 0x18 */ // 0x808C824C
    r0 = r3 + -0x6c10; // 0x808C8250
    r0 = r0 * r4; // 0x808C8254
    r3 = r5 + r0; // 0x808C8258
    r31 = r3 + 0x38; // 0x808C825C
    /* b 0x808c8268 */ // 0x808C8260
    /* li r31, 0 */ // 0x808C8264
    /* lis r28, 0 */ // 0x808C8268
    r3 = r31;
    r5 = *(0 + r28); // lwz @ 0x808C8270
    r4 = r29 + 0x1a8; // 0x808C8274
    r5 = *(0xb68 + r5); // lwz @ 0x808C8278
    FUN_805D7C58(r3, r4); // bl 0x805D7C58
    /* lis r27, 0 */ // 0x808C8280
    r4 = *(0 + r27); // lwz @ 0x808C8288
    r30 = r3;
    r4 = *(0x98 + r4); // lwz @ 0x808C8290
    *(0x4b4 + r4) = r3; // stw @ 0x808C8294
    if (==) goto 0x0x808c8374;
    /* lis r3, 0 */ // 0x808C829C
    /* li r0, 0 */ // 0x808C82A0
    r3 = r3 + 0; // 0x808C82A4
    *(0x110 + r1) = r3; // stw @ 0x808C82A8
    r3 = *(0 + r27); // lwz @ 0x808C82AC
    /* li r4, 0 */ // 0x808C82B0
    *(0x114 + r1) = r0; // sth @ 0x808C82B4
    r5 = *(0 + r28); // lwz @ 0x808C82B8
    r3 = r3 + 0x34; // 0x808C82BC
    *(0x116 + r1) = r0; // stb @ 0x808C82C0
    *(0x118 + r1) = r0; // sth @ 0x808C82C4
    *(0x11a + r1) = r0; // stb @ 0x808C82C8
    r0 = *(0x1ac + r29); // lhz @ 0x808C82CC
    *(0x114 + r1) = r0; // sth @ 0x808C82D0
    r0 = *(0x1ae + r29); // lbz @ 0x808C82D4
    *(0x116 + r1) = r0; // stb @ 0x808C82D8
    r0 = *(0x1b0 + r29); // lhz @ 0x808C82DC
    *(0x118 + r1) = r0; // sth @ 0x808C82E0
    r0 = *(0x1b2 + r29); // lbz @ 0x808C82E4
    *(0x11a + r1) = r0; // stb @ 0x808C82E8
    r0 = *(0x34 + r5); // lwz @ 0x808C82EC
    *(0x11c + r1) = r0; // stw @ 0x808C82F0
    r0 = *(0x30 + r5); // lwz @ 0x808C82F4
    *(0x120 + r1) = r0; // stw @ 0x808C82F8
    FUN_8067F3BC(); // bl 0x8067F3BC
    FUN_80680010(); // bl 0x80680010
    *(0x124 + r1) = r3; // stw @ 0x808C8304
    /* li r4, 0 */ // 0x808C8308
    r3 = *(0 + r27); // lwz @ 0x808C830C
    r3 = *(0x98 + r3); // lwz @ 0x808C8310
    r3 = r3 + 0x188; // 0x808C8314
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    r4 = r3;
    r4 = r4 + 0x94; // 0x808C8324
    FUN_805B71B8(r3, r4, r3, r4); // bl 0x805B71B8
    /* li r0, 9 */ // 0x808C832C
    /* mtctr r0 */ // 0x808C8338
    r3 = *(4 + r4); // lwz @ 0x808C833C
    r0 = *(8 + r4); // lwzu @ 0x808C8340
    *(4 + r5) = r3; // stw @ 0x808C8344
    *(8 + r5) = r0; // stwu @ 0x808C8348
    if (counter-- != 0) goto 0x0x808c833c;
    r0 = *(4 + r4); // lwz @ 0x808C8350
    /* lis r6, 0 */ // 0x808C8354
    *(4 + r5) = r0; // stw @ 0x808C8358
    r3 = r31;
    r5 = r30;
    r6 = *(0 + r6); // lwz @ 0x808C8368
    r6 = *(0xb68 + r6); // lwz @ 0x808C836C
    FUN_805D7AE8(r3, r5, r4); // bl 0x805D7AE8
    if (!=) goto 0x0x808c841c;
    r12 = *(0x1d8 + r29); // lwz @ 0x808C837C
    r3 = r29 + 0x1d8; // 0x808C8380
    r12 = *(0x54 + r12); // lwz @ 0x808C8384
    /* mtctr r12 */ // 0x808C8388
    /* bctrl  */ // 0x808C838C
    /* li r0, 0 */ // 0x808C8390
    *(0x258 + r29) = r0; // stb @ 0x808C8394
    /* lis r3, 0 */ // 0x808C8398
    /* li r5, 0 */ // 0x808C839C
    r4 = *(0 + r3); // lwz @ 0x808C83A0
    /* li r0, 1 */ // 0x808C83A4
    /* lis r3, 0 */ // 0x808C83A8
    r4 = *(0x98 + r4); // lwz @ 0x808C83AC
    *(0x3d8 + r4) = r0; // stb @ 0x808C83B0
    r3 = *(0 + r3); // lwz @ 0x808C83B4
    r3 = *(0xec + r3); // lwz @ 0x808C83B8
    r0 = *(0x14 + r3); // lwz @ 0x808C83BC
    if (==) goto 0x0x808c83ec;
    r3 = *(0x1ac + r29); // lhz @ 0x808C83C8
    /* li r0, 0x63 */ // 0x808C83CC
    if (>) goto 0x0x808c83dc;
    r0 = r3;
    /* clrlwi r0, r0, 0x18 */ // 0x808C83DC
    if (>=) goto 0x0x808c83ec;
    /* li r5, 1 */ // 0x808C83E8
    /* lis r3, 0 */ // 0x808C83EC
    r3 = *(0 + r3); // lwz @ 0x808C83F0
    r3 = *(0x98 + r3); // lwz @ 0x808C83F4
    *(0x3d0 + r3) = r5; // stb @ 0x808C83F8
    r3 = *(0x44 + r29); // lwz @ 0x808C83FC
    r3 = *(0 + r3); // lwz @ 0x808C8400
    FUN_80881E18(); // bl 0x80881E18
    r3 = r29;
    /* li r4, 0xdd */ // 0x808C840C
    /* li r5, -1 */ // 0x808C8410
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x808c8444 */ // 0x808C8418
    /* li r0, 1 */ // 0x808C841C
    *(0x258 + r29) = r0; // stb @ 0x808C8420
    /* lis r4, 0 */ // 0x808C8424
    r3 = *(0 + r4); // lwz @ 0x808C8428
    /* li r0, 0 */ // 0x808C842C
    r3 = *(0x98 + r3); // lwz @ 0x808C8430
    *(0x3d8 + r3) = r0; // stb @ 0x808C8434
    r3 = *(0 + r4); // lwz @ 0x808C8438
    r3 = *(0x98 + r3); // lwz @ 0x808C843C
    *(0x3d0 + r3) = r0; // stb @ 0x808C8440
    r5 = *(0x1b8 + r29); // lhz @ 0x808C8444
    /* lis r6, 0 */ // 0x808C8448
    r4 = *(0x1ba + r29); // lbz @ 0x808C844C
    r6 = r6 + 0; // 0x808C8450
    r3 = *(0x1bc + r29); // lhz @ 0x808C8454
    r7 = r29 + 0x18; // 0x808C8458
    r0 = *(0x1be + r29); // lbz @ 0x808C845C
    /* li r30, 1 */ // 0x808C8460
    *(8 + r1) = r6; // stw @ 0x808C8464
    /* li r6, 2 */ // 0x808C8468
    *(0xc + r1) = r5; // sth @ 0x808C846C
    *(0xe + r1) = r4; // stb @ 0x808C8470
    *(0x10 + r1) = r3; // sth @ 0x808C8474
    *(0x12 + r1) = r0; // stb @ 0x808C8478
    /* b 0x808c8530 */ // 0x808C847C
    r0 = *(0x1b2 + r7); // lbz @ 0x808C8480
    if (!=) goto 0x0x808c8494;
    /* li r0, 0 */ // 0x808C848C
    /* b 0x808c84fc */ // 0x808C8490
    r0 = *(0x12 + r1); // lbz @ 0x808C8494
    if (!=) goto 0x0x808c84a8;
    /* li r0, 1 */ // 0x808C84A0
    /* b 0x808c84fc */ // 0x808C84A4
    r0 = *(0xc + r1); // lhz @ 0x808C84A8
    r3 = *(0x1ac + r7); // lhz @ 0x808C84AC
    if (>=) goto 0x0x808c84c0;
    /* li r0, 1 */ // 0x808C84B8
    /* b 0x808c84fc */ // 0x808C84BC
    if (!=) goto 0x0x808c84f8;
    r0 = *(0xe + r1); // lbz @ 0x808C84C4
    r3 = *(0x1ae + r7); // lbz @ 0x808C84C8
    if (>=) goto 0x0x808c84dc;
    /* li r0, 1 */ // 0x808C84D4
    /* b 0x808c84fc */ // 0x808C84D8
    if (!=) goto 0x0x808c84f8;
    r3 = *(0x1b0 + r7); // lhz @ 0x808C84E0
    r0 = *(0x10 + r1); // lhz @ 0x808C84E4
    if (>=) goto 0x0x808c84f8;
    /* li r0, 1 */ // 0x808C84F0
    /* b 0x808c84fc */ // 0x808C84F4
    /* li r0, 0 */ // 0x808C84F8
    if (==) goto 0x0x808c8528;
    r5 = *(0x1ac + r7); // lhz @ 0x808C8504
    r30 = r6;
    r4 = *(0x1ae + r7); // lbz @ 0x808C850C
    r3 = *(0x1b0 + r7); // lhz @ 0x808C8510
    r0 = *(0x1b2 + r7); // lbz @ 0x808C8514
    *(0xc + r1) = r5; // sth @ 0x808C8518
    *(0xe + r1) = r4; // stb @ 0x808C851C
    *(0x10 + r1) = r3; // sth @ 0x808C8520
    *(0x12 + r1) = r0; // stb @ 0x808C8524
    r7 = r7 + 0xc; // 0x808C8528
    r6 = r6 + 1; // 0x808C852C
    r0 = *(0x48 + r29); // lbz @ 0x808C8530
    if (<) goto 0x0x808c8480;
    /* lis r4, 0 */ // 0x808C853C
    r3 = r31;
    r5 = *(0 + r4); // lwz @ 0x808C8544
    /* li r4, 5 */ // 0x808C8548
    r5 = *(0xb68 + r5); // lwz @ 0x808C854C
    FUN_805D7994(r4, r3, r4); // bl 0x805D7994
    if (==) goto 0x0x808c85ec;
    r0 = *(0x56 + r3); // lbz @ 0x808C855C
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x808c85ec;
    if (==) goto 0x0x808c85ec;
    if (==) goto 0x0x808c86a0;
    r0 = *(0x12 + r1); // lbz @ 0x808C8570
    if (!=) goto 0x0x808c8584;
    /* li r0, 0 */ // 0x808C857C
    /* b 0x808c85e4 */ // 0x808C8580
    if (!=) goto 0x0x808c8590;
    /* li r0, 1 */ // 0x808C8588
    /* b 0x808c85e4 */ // 0x808C858C
    r0 = *(0x50 + r3); // lhz @ 0x808C8590
    r4 = *(0xc + r1); // lhz @ 0x808C8594
    if (>=) goto 0x0x808c85a8;
    /* li r0, 1 */ // 0x808C85A0
    /* b 0x808c85e4 */ // 0x808C85A4
    if (!=) goto 0x0x808c85e0;
    r0 = *(0x52 + r3); // lbz @ 0x808C85AC
    r4 = *(0xe + r1); // lbz @ 0x808C85B0
    if (>=) goto 0x0x808c85c4;
    /* li r0, 1 */ // 0x808C85BC
    /* b 0x808c85e4 */ // 0x808C85C0
    if (!=) goto 0x0x808c85e0;
    r4 = *(0x10 + r1); // lhz @ 0x808C85C8
    r0 = *(0x54 + r3); // lhz @ 0x808C85CC
    if (>=) goto 0x0x808c85e0;
    /* li r0, 1 */ // 0x808C85D8
    /* b 0x808c85e4 */ // 0x808C85DC
    /* li r0, 0 */ // 0x808C85E0
    if (==) goto 0x0x808c86a0;
    /* mulli r4, r30, 0xc */ // 0x808C85EC
    /* li r0, 0 */ // 0x808C85F0
    /* lis r3, 0 */ // 0x808C85F4
    *(0x64 + r1) = r0; // sth @ 0x808C85F8
    /* lis r27, 0 */ // 0x808C85FC
    r3 = r3 + 0; // 0x808C8600
    r6 = r29 + r4; // 0x808C8604
    *(0x60 + r1) = r3; // stw @ 0x808C8608
    /* lis r28, 0 */ // 0x808C860C
    r5 = *(0 + r27); // lwz @ 0x808C8610
    *(0x66 + r1) = r0; // stb @ 0x808C8614
    /* li r4, 0 */ // 0x808C8618
    r3 = *(0 + r28); // lwz @ 0x808C861C
    *(0x68 + r1) = r0; // sth @ 0x808C8620
    r3 = r3 + 0x34; // 0x808C8624
    *(0x6a + r1) = r0; // stb @ 0x808C8628
    r0 = *(0x1ac + r6); // lhz @ 0x808C862C
    *(0x64 + r1) = r0; // sth @ 0x808C8630
    r0 = *(0x1ae + r6); // lbz @ 0x808C8634
    *(0x66 + r1) = r0; // stb @ 0x808C8638
    r0 = *(0x1b0 + r6); // lhz @ 0x808C863C
    *(0x68 + r1) = r0; // sth @ 0x808C8640
    r0 = *(0x1b2 + r6); // lbz @ 0x808C8644
    *(0x6a + r1) = r0; // stb @ 0x808C8648
    r0 = *(0x34 + r5); // lwz @ 0x808C864C
    *(0x6c + r1) = r0; // stw @ 0x808C8650
    r0 = *(0x30 + r5); // lwz @ 0x808C8654
    *(0x70 + r1) = r0; // stw @ 0x808C8658
    FUN_8067F3BC(); // bl 0x8067F3BC
    FUN_80680010(); // bl 0x80680010
    *(0x74 + r1) = r3; // stw @ 0x808C8664
    r3 = r31;
    r6 = *(0 + r27); // lwz @ 0x808C866C
    /* li r5, 5 */ // 0x808C8674
    r6 = *(0xb68 + r6); // lwz @ 0x808C8678
    FUN_805D79F4(r3, r4, r5); // bl 0x805D79F4
    r3 = *(0 + r28); // lwz @ 0x808C8680
    /* slwi r0, r30, 2 */ // 0x808C8684
    r3 = *(0x98 + r3); // lwz @ 0x808C8688
    *(0x3d4 + r3) = r30; // stw @ 0x808C868C
    r3 = *(0x44 + r29); // lwz @ 0x808C8690
    /* lwzx r3, r3, r0 */ // 0x808C8694
    FUN_80881E18(); // bl 0x80881E18
    /* b 0x808c86b4 */ // 0x808C869C
    /* lis r3, 0 */ // 0x808C86A0
    /* li r0, -1 */ // 0x808C86A4
    r3 = *(0 + r3); // lwz @ 0x808C86A8
    r3 = *(0x98 + r3); // lwz @ 0x808C86AC
    *(0x3d4 + r3) = r0; // stw @ 0x808C86B0
    /* lis r3, 0 */ // 0x808C86B4
    r3 = *(0 + r3); // lwz @ 0x808C86B8
    r3 = *(0x98 + r3); // lwz @ 0x808C86BC
    r0 = *(0x3d0 + r3); // lbz @ 0x808C86C0
    if (==) goto 0x0x808c8758;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    /* li r4, 0 */ // 0x808C86D8
    FUN_805AC748(r3, r3, r4); // bl 0x805AC748
    r0 = *(0x128 + r1); // lbz @ 0x808C86E0
    /* li r3, 0 */ // 0x808C86E4
    if (==) goto 0x0x808c8700;
    r0 = *(0x1fc + r1); // lwz @ 0x808C86F0
    if (==) goto 0x0x808c8700;
    /* li r3, 1 */ // 0x808C86FC
    if (==) goto 0x0x808c8740;
    /* lis r4, 0 */ // 0x808C8708
    /* lis r3, 0 */ // 0x808C870C
    r5 = *(0 + r4); // lwz @ 0x808C8710
    r3 = *(0 + r3); // lwz @ 0x808C8718
    /* li r4, 0 */ // 0x808C871C
    r0 = *(0xb68 + r5); // lwz @ 0x808C8720
    r3 = *(0x90 + r3); // lwz @ 0x808C8724
    /* clrlwi r5, r0, 0x18 */ // 0x808C8728
    FUN_80684670(r4); // bl 0x80684670
    r3 = r29 + 0x370; // 0x808C8730
    /* li r4, 0x45b */ // 0x808C8734
    /* li r5, 0 */ // 0x808C8738
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* lis r4, 0 */ // 0x808C8740
    r4 = r4 + 0; // 0x808C8748
    /* li r5, 0xc */ // 0x808C874C
    /* li r6, 5 */ // 0x808C8750
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808C8758
    r3 = *(0 + r3); // lwz @ 0x808C875C
    r3 = *(0x90 + r3); // lwz @ 0x808C8760
    FUN_806845FC(r6, r3); // bl 0x806845FC
    r0 = *(0x224 + r1); // lwz @ 0x808C876C
    return;
}