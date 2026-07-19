/* Function at 0x805C9194, size=844 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805C9194(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805C91AC
    *(0x10 + r1) = r28; // stw @ 0x805C91B0
    FUN_805C8544(); // bl 0x805C8544
    r3 = *(0x40 + r31); // lwz @ 0x805C91B8
    /* li r6, 0xc */ // 0x805C91BC
    /* li r5, 0 */ // 0x805C91C0
    /* li r0, -1 */ // 0x805C91C4
    *(0 + r3) = r6; // stb @ 0x805C91C8
    /* lis r3, 0 */ // 0x805C91CC
    r4 = *(0x40 + r31); // lwz @ 0x805C91D0
    *(1 + r4) = r6; // stb @ 0x805C91D4
    r4 = *(0x40 + r31); // lwz @ 0x805C91D8
    *(0xe + r4) = r5; // sth @ 0x805C91DC
    *(0x104 + r31) = r0; // sth @ 0x805C91E0
    *(0x114 + r31) = r5; // sth @ 0x805C91E4
    *(0x106 + r31) = r5; // stb @ 0x805C91E8
    r3 = *(0 + r3); // lwz @ 0x805C91EC
    FUN_805C1C44(); // bl 0x805C1C44
    /* clrlwi r0, r3, 0x10 */ // 0x805C91F4
    /* li r11, 0xb3 */ // 0x805C91F8
    if (<) goto 0x0x805c920c;
    r0 = r3 + -1; // 0x805C9204
    /* clrlwi r11, r0, 0x10 */ // 0x805C9208
    /* lis r3, -0x7777 */ // 0x805C920C
    /* li r6, 1 */ // 0x805C9210
    r0 = r3 + -0x7777; // 0x805C9214
    /* li r5, 0 */ // 0x805C9218
    /* mulhw r0, r0, r11 */ // 0x805C921C
    *(0x112 + r31) = r6; // stb @ 0x805C9220
    /* li r9, 0 */ // 0x805C9224
    *(0x110 + r31) = r5; // sth @ 0x805C9228
    /* li r10, 0 */ // 0x805C922C
    /* li r4, -1 */ // 0x805C9230
    r0 = r0 + r11; // 0x805C9234
    /* lis r3, 0 */ // 0x805C9238
    r7 = r0 >> 5; // srawi
    /* li r12, 2 */ // 0x805C9240
    /* srwi r8, r7, 0x1f */ // 0x805C9244
    /* li r0, 0x10 */ // 0x805C9248
    r7 = r7 + r8; // 0x805C924C
    *(0x10c + r31) = r7; // sth @ 0x805C9250
    /* clrlwi r7, r7, 0x10 */ // 0x805C9254
    /* mulli r7, r7, 0x3c */ // 0x805C9258
    /* subf r7, r7, r11 */ // 0x805C925C
    *(0x10e + r31) = r7; // stb @ 0x805C9260
    r7 = r10 rlwinm 1; // rlwinm
    /* li r28, 2 */ // 0x805C9268
    r7 = r31 + r7; // 0x805C926C
    *(0xa4 + r7) = r4; // sth @ 0x805C9270
    *(0xbc + r7) = r4; // sth @ 0x805C9274
    r7 = *(4 + r31); // lwz @ 0x805C9278
    r7 = *(0x2d + r7); // lbz @ 0x805C927C
    if (==) goto 0x0x805c928c;
    /* li r28, 0 */ // 0x805C9288
    r8 = r10 rlwinm 2; // rlwinm
    /* li r11, 0 */ // 0x805C9290
    r7 = r31 + r8; // 0x805C9294
    *(0xd4 + r7) = r28; // stw @ 0x805C9298
    r28 = *(0x44 + r7); // lwz @ 0x805C929C
    *(0x86 + r28) = r5; // sth @ 0x805C92A0
    /* mtctr r12 */ // 0x805C92A4
    r28 = *(0x44 + r7); // lwz @ 0x805C92A8
    r28 = r28 + r11; // 0x805C92AC
    *(0x88 + r28) = r5; // stb @ 0x805C92B0
    r28 = *(0x44 + r7); // lwz @ 0x805C92B4
    r28 = r28 + r11; // 0x805C92B8
    *(0x94 + r28) = r6; // stb @ 0x805C92BC
    r28 = *(0x44 + r7); // lwz @ 0x805C92C0
    r28 = r28 + r11; // 0x805C92C4
    *(0x89 + r28) = r5; // stb @ 0x805C92C8
    r28 = *(0x44 + r7); // lwz @ 0x805C92CC
    r28 = r28 + r11; // 0x805C92D0
    *(0x95 + r28) = r6; // stb @ 0x805C92D4
    r28 = *(0x44 + r7); // lwz @ 0x805C92D8
    r28 = r28 + r11; // 0x805C92DC
    *(0x8a + r28) = r5; // stb @ 0x805C92E0
    r28 = *(0x44 + r7); // lwz @ 0x805C92E4
    r28 = r28 + r11; // 0x805C92E8
    *(0x96 + r28) = r6; // stb @ 0x805C92EC
    r28 = *(0x44 + r7); // lwz @ 0x805C92F0
    r28 = r28 + r11; // 0x805C92F4
    *(0x8b + r28) = r5; // stb @ 0x805C92F8
    r28 = *(0x44 + r7); // lwz @ 0x805C92FC
    r28 = r28 + r11; // 0x805C9300
    *(0x97 + r28) = r6; // stb @ 0x805C9304
    r28 = *(0x44 + r7); // lwz @ 0x805C9308
    r28 = r28 + r11; // 0x805C930C
    *(0x8c + r28) = r5; // stb @ 0x805C9310
    r28 = *(0x44 + r7); // lwz @ 0x805C9314
    r28 = r28 + r11; // 0x805C9318
    *(0x98 + r28) = r6; // stb @ 0x805C931C
    r28 = *(0x44 + r7); // lwz @ 0x805C9320
    r28 = r28 + r11; // 0x805C9324
    *(0x8d + r28) = r5; // stb @ 0x805C9328
    r28 = *(0x44 + r7); // lwz @ 0x805C932C
    r28 = r28 + r11; // 0x805C9330
    *(0x99 + r28) = r6; // stb @ 0x805C9338
    if (counter-- != 0) goto 0x0x805c92a8;
    r28 = *(0x40 + r31); // lwz @ 0x805C9340
    /* clrlwi r29, r10, 0x18 */ // 0x805C9344
    /* mulli r11, r29, 0xf0 */ // 0x805C9348
    r28 = r28 + r29; // 0x805C934C
    *(0x10 + r28) = r5; // stb @ 0x805C9350
    r28 = *(0x40 + r31); // lwz @ 0x805C9354
    r28 = r28 + r29; // 0x805C9358
    *(0x1c + r28) = r6; // stb @ 0x805C935C
    r28 = *(0 + r3); // lwz @ 0x805C9360
    r11 = r28 + r11; // 0x805C9364
    r11 = *(0x38 + r11); // lwz @ 0x805C9368
    if (!=) goto 0x0x805c9390;
    r11 = *(0x40 + r31); // lwz @ 0x805C9374
    /* stbx r10, r11, r9 */ // 0x805C9378
    r11 = *(0x104 + r31); // lha @ 0x805C937C
    if (>=) goto 0x0x805c938c;
    *(0x104 + r31) = r29; // sth @ 0x805C9388
    r9 = r9 + 1; // 0x805C938C
    r11 = r31 + r8; // 0x805C9390
    r8 = *(0x44 + r7); // lwz @ 0x805C9394
    r7 = *(0x74 + r11); // lwz @ 0x805C9398
    r29 = r8 + -4; // 0x805C939C
    r28 = r7 + -4; // 0x805C93A0
    /* mtctr r0 */ // 0x805C93A4
    r30 = *(4 + r29); // lwz @ 0x805C93A8
    r11 = *(8 + r29); // lwzu @ 0x805C93AC
    *(4 + r28) = r30; // stw @ 0x805C93B0
    if (counter-- != 0) goto 0x0x805c93a8;
    r11 = *(0x80 + r8); // lbz @ 0x805C93BC
    *(0x80 + r7) = r11; // stb @ 0x805C93C4
    r11 = *(0x81 + r8); // lbz @ 0x805C93CC
    *(0x81 + r7) = r11; // stb @ 0x805C93D0
    r11 = *(0x82 + r8); // lbz @ 0x805C93D4
    *(0x82 + r7) = r11; // stb @ 0x805C93D8
    r11 = *(0x83 + r8); // lbz @ 0x805C93DC
    *(0x83 + r7) = r11; // stb @ 0x805C93E0
    r11 = *(0x84 + r8); // lbz @ 0x805C93E4
    *(0x84 + r7) = r11; // stb @ 0x805C93E8
    r11 = *(0x85 + r8); // lbz @ 0x805C93EC
    *(0x85 + r7) = r11; // stb @ 0x805C93F0
    r11 = *(0x86 + r8); // lhz @ 0x805C93F4
    *(0x86 + r7) = r11; // sth @ 0x805C93F8
    r11 = *(0x89 + r8); // lbz @ 0x805C93FC
    r30 = *(0x88 + r8); // lbz @ 0x805C9400
    *(0x88 + r7) = r30; // stb @ 0x805C9404
    *(0x89 + r7) = r11; // stb @ 0x805C9408
    r11 = *(0x8b + r8); // lbz @ 0x805C940C
    r30 = *(0x8a + r8); // lbz @ 0x805C9410
    *(0x8a + r7) = r30; // stb @ 0x805C9414
    *(0x8b + r7) = r11; // stb @ 0x805C9418
    r11 = *(0x8d + r8); // lbz @ 0x805C941C
    r30 = *(0x8c + r8); // lbz @ 0x805C9420
    *(0x8c + r7) = r30; // stb @ 0x805C9424
    *(0x8d + r7) = r11; // stb @ 0x805C9428
    r11 = *(0x8f + r8); // lbz @ 0x805C942C
    r30 = *(0x8e + r8); // lbz @ 0x805C9430
    *(0x8e + r7) = r30; // stb @ 0x805C9434
    *(0x8f + r7) = r11; // stb @ 0x805C9438
    r11 = *(0x90 + r8); // lbz @ 0x805C943C
    *(0x90 + r7) = r11; // stb @ 0x805C9440
    r11 = *(0x91 + r8); // lbz @ 0x805C9444
    *(0x91 + r7) = r11; // stb @ 0x805C9448
    r11 = *(0x92 + r8); // lbz @ 0x805C944C
    *(0x92 + r7) = r11; // stb @ 0x805C9450
    r11 = *(0x93 + r8); // lbz @ 0x805C9454
    *(0x93 + r7) = r11; // stb @ 0x805C9458
    r11 = *(0x95 + r8); // lbz @ 0x805C945C
    r30 = *(0x94 + r8); // lbz @ 0x805C9460
    *(0x94 + r7) = r30; // stb @ 0x805C9464
    *(0x95 + r7) = r11; // stb @ 0x805C9468
    r11 = *(0x97 + r8); // lbz @ 0x805C946C
    r30 = *(0x96 + r8); // lbz @ 0x805C9470
    *(0x96 + r7) = r30; // stb @ 0x805C9474
    *(0x97 + r7) = r11; // stb @ 0x805C9478
    r11 = *(0x99 + r8); // lbz @ 0x805C947C
    r30 = *(0x98 + r8); // lbz @ 0x805C9480
    *(0x98 + r7) = r30; // stb @ 0x805C9484
    *(0x99 + r7) = r11; // stb @ 0x805C9488
    r11 = *(0x9b + r8); // lbz @ 0x805C948C
    r30 = *(0x9a + r8); // lbz @ 0x805C9490
    *(0x9a + r7) = r30; // stb @ 0x805C9494
    *(0x9b + r7) = r11; // stb @ 0x805C9498
    r11 = *(0x9c + r8); // lbz @ 0x805C949C
    *(0x9c + r7) = r11; // stb @ 0x805C94A0
    r11 = *(0x9d + r8); // lbz @ 0x805C94A4
    *(0x9d + r7) = r11; // stb @ 0x805C94A8
    r11 = *(0x9e + r8); // lbz @ 0x805C94AC
    *(0x9e + r7) = r11; // stb @ 0x805C94B0
    r8 = *(0x9f + r8); // lbz @ 0x805C94B4
    *(0x9f + r7) = r8; // stb @ 0x805C94B8
    if (<) goto 0x0x805c9264;
    r0 = *(0x24 + r1); // lwz @ 0x805C94C0
    r31 = *(0x1c + r1); // lwz @ 0x805C94C4
    r30 = *(0x18 + r1); // lwz @ 0x805C94C8
    r29 = *(0x14 + r1); // lwz @ 0x805C94CC
    r28 = *(0x10 + r1); // lwz @ 0x805C94D0
    return;
}