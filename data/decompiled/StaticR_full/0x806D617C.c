/* Function at 0x806D617C, size=944 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806D617C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806D6190
    r0 = *(0x60 + r3); // lwz @ 0x806D6194
    if (<) goto 0x0x806d6514;
    /* lis r3, 0 */ // 0x806D61A0
    /* li r0, 0 */ // 0x806D61A4
    *(8 + r1) = r0; // stb @ 0x806D61A8
    r3 = *(0 + r3); // lwz @ 0x806D61B0
    *(0xc + r1) = r0; // stw @ 0x806D61B4
    FUN_806F9214(r4); // bl 0x806F9214
    r3 = *(0x10 + r1); // lwz @ 0x806D61BC
    r0 = *(0x5c + r31); // lwz @ 0x806D61C0
    if (!=) goto 0x0x806d6514;
    r0 = *(0x58 + r31); // lwz @ 0x806D61CC
    if (==) goto 0x0x806d61e4;
    if (==) goto 0x0x806d61ec;
    /* b 0x806d61f0 */ // 0x806D61E0
    /* li r6, 1 */ // 0x806D61E4
    /* b 0x806d61f0 */ // 0x806D61E8
    /* li r6, 0 */ // 0x806D61EC
    /* lis r3, 0 */ // 0x806D61F0
    r0 = *(0x6e + r31); // lbz @ 0x806D61F4
    r3 = *(0 + r3); // lwz @ 0x806D61F8
    r4 = r31 + 0x6e; // 0x806D61FC
    /* addis r3, r3, 2 */ // 0x806D6204
    r3 = *(0x4ffc + r3); // lwz @ 0x806D6208
    /* addis r5, r3, 2 */ // 0x806D620C
    r5 = r5 + 0x3308; // 0x806D6210
    if (!=) goto 0x0x806d6230;
    /* mulli r0, r6, 0x54 */ // 0x806D6218
    r3 = r5 + r0; // 0x806D621C
    r0 = *(0x3730 + r3); // lwz @ 0x806D6220
    /* clrlwi r0, r0, 1 */ // 0x806D6224
    *(0x3730 + r3) = r0; // stw @ 0x806D6228
    /* b 0x806d62e0 */ // 0x806D622C
    /* mulli r9, r6, 0x54 */ // 0x806D6230
    r7 = r31 + 0x68; // 0x806D6234
    /* li r3, 0x63 */ // 0x806D6238
    r6 = r5 + r9; // 0x806D623C
    r0 = *(0x3730 + r6); // lwz @ 0x806D6240
    r0 = r0 | 0x8000; // 0x806D6244
    *(0x3730 + r6) = r0; // stw @ 0x806D6248
    r0 = *(0x10 + r1); // lwz @ 0x806D624C
    *(0x3734 + r6) = r0; // stw @ 0x806D6250
    r0 = *(0x68 + r31); // lhz @ 0x806D6254
    if (>) goto 0x0x806d6264;
    r3 = r0;
    r0 = *(0x3730 + r6); // lwz @ 0x806D6264
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0x3730 + r6) = r0; // stw @ 0x806D626C
    r0 = *(0 + r7); // lhz @ 0x806D6270
    if (<=) goto 0x0x806d6284;
    /* li r3, 0x3b */ // 0x806D627C
    /* b 0x806d6288 */ // 0x806D6280
    r3 = *(0x6a + r31); // lbz @ 0x806D6284
    r0 = *(0x3730 + r6); // lwz @ 0x806D6288
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0x3730 + r6) = r0; // stw @ 0x806D6290
    r0 = *(0 + r7); // lhz @ 0x806D6294
    if (<=) goto 0x0x806d62a8;
    /* li r0, 0x3e7 */ // 0x806D62A0
    /* b 0x806d62ac */ // 0x806D62A4
    r0 = *(0x6c + r31); // lhz @ 0x806D62A8
    r3 = r5 + r9; // 0x806D62AC
    r5 = *(0x3730 + r6); // lwz @ 0x806D62B0
    r5 = r0 rlwimi 7; // rlwimi
    *(0x3730 + r6) = r5; // stw @ 0x806D62B8
    /* li r0, 0x26 */ // 0x806D62BC
    r6 = r3 + 0x3737; // 0x806D62C0
    r5 = r31 + 0x6f; // 0x806D62C4
    /* mtctr r0 */ // 0x806D62C8
    r3 = *(1 + r5); // lbz @ 0x806D62CC
    /* lbzu r0, 2(r5) */ // 0x806D62D0
    *(1 + r6) = r3; // stb @ 0x806D62D4
    /* stbu r0, 2(r6) */ // 0x806D62D8
    if (counter-- != 0) goto 0x0x806d62cc;
    r0 = *(0x58 + r31); // lwz @ 0x806D62E0
    if (!=) goto 0x0x806d6504;
    /* lis r3, 0 */ // 0x806D62EC
    /* li r0, 0 */ // 0x806D62F0
    r3 = *(0 + r3); // lwz @ 0x806D62F4
    /* li r5, 0 */ // 0x806D62F8
    /* li r6, 0 */ // 0x806D62FC
    /* li r7, 0 */ // 0x806D6300
    /* addis r3, r3, 2 */ // 0x806D6304
    r12 = *(0x4ffc + r3); // lwz @ 0x806D6308
    /* addis r30, r12, 2 */ // 0x806D630C
    r9 = *(0x6a8c + r30); // lwz @ 0x806D6310
    /* srwi r9, r9, 0x1f */ // 0x806D6314
    if (!=) goto 0x0x806d632c;
    r8 = *(0x6a90 + r30); // lwz @ 0x806D6320
    /* li r11, 1 */ // 0x806D6324
    /* b 0x806d6330 */ // 0x806D6328
    /* li r11, 0 */ // 0x806D632C
    r10 = *(0x10 + r1); // lwz @ 0x806D6330
    /* neg r9, r11 */ // 0x806D6334
    r11 = r9 | r11; // 0x806D6338
    r9 = *(0x6a8c + r30); // lwz @ 0x806D633C
    /* subf r8, r8, r10 */ // 0x806D6340
    /* cntlzw r10, r8 */ // 0x806D6344
    /* srwi r11, r11, 0x1f */ // 0x806D6348
    /* srwi r10, r10, 5 */ // 0x806D634C
    /* srwi r8, r9, 0x1f */ // 0x806D6350
    r10 = r11 & r10; // 0x806D6354
    /* neg r8, r10 */ // 0x806D635C
    r8 = r8 | r10; // 0x806D6360
    /* srwi r8, r8, 0x1f */ // 0x806D6364
    if (!=) goto 0x0x806d6384;
    r5 = r9 rlwinm 8; // rlwinm
    r6 = r9 rlwinm 0xf; // rlwinm
    r7 = r9 rlwinm 0x19; // rlwinm
    /* li r0, 1 */ // 0x806D6378
    /* li r9, 1 */ // 0x806D637C
    /* b 0x806d6388 */ // 0x806D6380
    /* li r9, 0 */ // 0x806D6384
    r10 = r8 & r9; // 0x806D6388
    /* addis r8, r12, 2 */ // 0x806D638C
    /* neg r9, r10 */ // 0x806D6390
    r8 = *(0x6a8c + r8); // lwz @ 0x806D6394
    r9 = r9 | r10; // 0x806D6398
    /* srwi r9, r9, 0x1f */ // 0x806D639C
    /* srwi r8, r8, 0x1f */ // 0x806D63A0
    r9 = r9 & r8; // 0x806D63A4
    /* neg r8, r9 */ // 0x806D63A8
    r8 = r8 | r9; // 0x806D63AC
    /* rlwinm. r8, r8, 1, 0x1f, 0x1f */ // 0x806D63B0
    if (==) goto 0x0x806d6438;
    r8 = *(0x6e + r31); // lbz @ 0x806D63B8
    if (!=) goto 0x0x806d63cc;
    /* li r0, 0 */ // 0x806D63C4
    /* b 0x806d6430 */ // 0x806D63C8
    if (!=) goto 0x0x806d63dc;
    /* li r0, 1 */ // 0x806D63D4
    /* b 0x806d6430 */ // 0x806D63D8
    r8 = *(0x68 + r31); // lhz @ 0x806D63DC
    /* clrlwi r0, r5, 0x10 */ // 0x806D63E0
    if (>=) goto 0x0x806d63f4;
    /* li r0, 1 */ // 0x806D63EC
    /* b 0x806d6430 */ // 0x806D63F0
    if (!=) goto 0x0x806d642c;
    r5 = *(0x6a + r31); // lbz @ 0x806D63F8
    /* clrlwi r0, r6, 0x18 */ // 0x806D63FC
    if (>=) goto 0x0x806d6410;
    /* li r0, 1 */ // 0x806D6408
    /* b 0x806d6430 */ // 0x806D640C
    if (!=) goto 0x0x806d642c;
    r5 = *(0x6c + r31); // lhz @ 0x806D6414
    /* clrlwi r0, r7, 0x10 */ // 0x806D6418
    if (>=) goto 0x0x806d642c;
    /* li r0, 1 */ // 0x806D6424
    /* b 0x806d6430 */ // 0x806D6428
    /* li r0, 0 */ // 0x806D642C
    if (==) goto 0x0x806d6504;
    r0 = *(0 + r4); // lbz @ 0x806D6438
    r3 = *(0x4ffc + r3); // lwz @ 0x806D643C
    /* addis r5, r3, 2 */ // 0x806D6444
    if (!=) goto 0x0x806d645c;
    r0 = *(0x6a8c + r5); // lwz @ 0x806D644C
    /* clrlwi r0, r0, 1 */ // 0x806D6450
    *(0x6a8c + r5) = r0; // stw @ 0x806D6454
    /* b 0x806d6504 */ // 0x806D6458
    r0 = *(0x6a8c + r5); // lwz @ 0x806D645C
    r6 = r5 + 0x6a8c; // 0x806D6460
    r4 = r31 + 0x68; // 0x806D6464
    /* li r3, 0x63 */ // 0x806D6468
    r0 = r0 | 0x8000; // 0x806D646C
    *(0x6a8c + r5) = r0; // stw @ 0x806D6470
    r0 = *(0x10 + r1); // lwz @ 0x806D6474
    *(0x6a90 + r5) = r0; // stw @ 0x806D6478
    r0 = *(0x68 + r31); // lhz @ 0x806D647C
    if (>) goto 0x0x806d648c;
    r3 = r0;
    r0 = *(0 + r6); // lwz @ 0x806D648C
    r0 = r3 rlwimi 0x18; // rlwimi
    *(0 + r6) = r0; // stw @ 0x806D6494
    r0 = *(0 + r4); // lhz @ 0x806D6498
    if (<=) goto 0x0x806d64ac;
    /* li r3, 0x3b */ // 0x806D64A4
    /* b 0x806d64b0 */ // 0x806D64A8
    r3 = *(0x6a + r31); // lbz @ 0x806D64AC
    r0 = *(0 + r6); // lwz @ 0x806D64B0
    r0 = r3 rlwimi 0x11; // rlwimi
    *(0 + r6) = r0; // stw @ 0x806D64B8
    r0 = *(0 + r4); // lhz @ 0x806D64BC
    if (<=) goto 0x0x806d64d0;
    /* li r4, 0x3e7 */ // 0x806D64C8
    /* b 0x806d64d4 */ // 0x806D64CC
    r4 = *(0x6c + r31); // lhz @ 0x806D64D0
    r3 = *(0 + r6); // lwz @ 0x806D64D4
    /* li r0, 0x26 */ // 0x806D64D8
    r3 = r4 rlwimi 7; // rlwimi
    *(0 + r6) = r3; // stw @ 0x806D64E0
    r5 = r5 + 0x6a93; // 0x806D64E4
    r4 = r31 + 0x6f; // 0x806D64E8
    /* mtctr r0 */ // 0x806D64EC
    r3 = *(1 + r4); // lbz @ 0x806D64F0
    /* lbzu r0, 2(r4) */ // 0x806D64F4
    *(1 + r5) = r3; // stb @ 0x806D64F8
    /* stbu r0, 2(r5) */ // 0x806D64FC
    if (counter-- != 0) goto 0x0x806d64f0;
    /* lis r3, 0 */ // 0x806D6504
    r3 = *(0 + r3); // lwz @ 0x806D6508
    r3 = *(0x90 + r3); // lwz @ 0x806D650C
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x34 + r1); // lwz @ 0x806D6514
    r31 = *(0x2c + r1); // lwz @ 0x806D6518
    r30 = *(0x28 + r1); // lwz @ 0x806D651C
    return;
}