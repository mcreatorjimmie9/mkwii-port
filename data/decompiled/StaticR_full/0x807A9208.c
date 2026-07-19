/* Function at 0x807A9208, size=404 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807A9208(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x807A9210
    /* li r6, 0 */ // 0x807A9214
    *(0x14 + r1) = r0; // stw @ 0x807A9218
    /* li r0, 6 */ // 0x807A921C
    r5 = r5 + 0; // 0x807A9220
    /* mtctr r0 */ // 0x807A9224
    r0 = *(0 + r5); // lwz @ 0x807A9228
    if (!=) goto 0x0x807a9248;
    r0 = *(4 + r5); // lbz @ 0x807A9234
    if (!=) goto 0x0x807a9248;
    /* li r3, 0 */ // 0x807A9240
    /* b 0x807a9394 */ // 0x807A9244
    r0 = *(0x10 + r5); // lwz @ 0x807A9248
    if (!=) goto 0x0x807a9268;
    r0 = *(0x14 + r5); // lbz @ 0x807A9254
    if (!=) goto 0x0x807a9268;
    /* li r3, 0 */ // 0x807A9260
    /* b 0x807a9394 */ // 0x807A9264
    r0 = *(0x20 + r5); // lwz @ 0x807A9268
    if (!=) goto 0x0x807a9288;
    r0 = *(0x24 + r5); // lbz @ 0x807A9274
    if (!=) goto 0x0x807a9288;
    /* li r3, 0 */ // 0x807A9280
    /* b 0x807a9394 */ // 0x807A9284
    r0 = *(0x30 + r5); // lwz @ 0x807A9288
    if (!=) goto 0x0x807a92a8;
    r0 = *(0x34 + r5); // lbz @ 0x807A9294
    if (!=) goto 0x0x807a92a8;
    /* li r3, 0 */ // 0x807A92A0
    /* b 0x807a9394 */ // 0x807A92A4
    r0 = *(0x40 + r5); // lwz @ 0x807A92A8
    if (!=) goto 0x0x807a92c8;
    r0 = *(0x44 + r5); // lbz @ 0x807A92B4
    if (!=) goto 0x0x807a92c8;
    /* li r3, 0 */ // 0x807A92C0
    /* b 0x807a9394 */ // 0x807A92C4
    r0 = *(0x50 + r5); // lwz @ 0x807A92C8
    if (!=) goto 0x0x807a92e8;
    r0 = *(0x54 + r5); // lbz @ 0x807A92D4
    if (!=) goto 0x0x807a92e8;
    /* li r3, 0 */ // 0x807A92E0
    /* b 0x807a9394 */ // 0x807A92E4
    r0 = *(0x60 + r5); // lwz @ 0x807A92E8
    if (!=) goto 0x0x807a9308;
    r0 = *(0x64 + r5); // lbz @ 0x807A92F4
    if (!=) goto 0x0x807a9308;
    /* li r3, 0 */ // 0x807A9300
    /* b 0x807a9394 */ // 0x807A9304
    r0 = *(0x70 + r5); // lwz @ 0x807A9308
    if (!=) goto 0x0x807a9328;
    r0 = *(0x74 + r5); // lbz @ 0x807A9314
    if (!=) goto 0x0x807a9328;
    /* li r3, 0 */ // 0x807A9320
    /* b 0x807a9394 */ // 0x807A9324
    r5 = r5 + 0x80; // 0x807A9328
    r6 = r6 + 7; // 0x807A932C
    if (counter-- != 0) goto 0x0x807a9228;
    /* lis r6, 0 */ // 0x807A9334
    /* li r0, 0x30 */ // 0x807A9338
    r6 = r6 + 0; // 0x807A933C
    /* li r7, 0 */ // 0x807A9340
    /* mtctr r0 */ // 0x807A9344
    r5 = *(0 + r6); // lwz @ 0x807A9348
    /* addis r0, r5, 1 */ // 0x807A934C
    if (!=) goto 0x0x807a9384;
    /* lis r6, 0 */ // 0x807A9358
    /* slwi r0, r7, 4 */ // 0x807A935C
    r6 = r6 + 0; // 0x807A9360
    /* stwux r3, r6, r0 */ // 0x807A9364
    /* lis r5, 0 */ // 0x807A9368
    *(4 + r6) = r4; // stb @ 0x807A936C
    r3 = r5 + 0; // 0x807A9370
    r4 = r6;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* li r3, 1 */ // 0x807A937C
    /* b 0x807a9394 */ // 0x807A9380
    r6 = r6 + 0x10; // 0x807A9384
    r7 = r7 + 1; // 0x807A9388
    if (counter-- != 0) goto 0x0x807a9348;
    /* li r3, 0 */ // 0x807A9390
    r0 = *(0x14 + r1); // lwz @ 0x807A9394
}