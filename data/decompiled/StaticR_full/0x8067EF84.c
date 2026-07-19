/* Function at 0x8067EF84, size=1048 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 10 function(s) */

int FUN_8067EF84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x8067EF8C
    *(0x24 + r1) = r0; // stw @ 0x8067EF90
    /* stmw r26, 8(r1) */ // 0x8067EF94
    r26 = r3;
    r3 = *(0 + r4); // lwz @ 0x8067EF9C
    r3 = *(0 + r3); // lwz @ 0x8067EFA0
    FUN_8068608C(); // bl 0x8068608C
    if (==) goto 0x0x8067efd8;
    r0 = *(8 + r3); // lwz @ 0x8067EFB0
    if (!=) goto 0x0x8067efcc;
    r3 = *(0x38 + r3); // lwz @ 0x8067EFBC
    r0 = *(8 + r3); // lwz @ 0x8067EFC0
    *(0x58 + r26) = r0; // stw @ 0x8067EFC4
    /* b 0x8067efe0 */ // 0x8067EFC8
    /* li r0, 0 */ // 0x8067EFCC
    *(0x58 + r26) = r0; // stw @ 0x8067EFD0
    /* b 0x8067efe0 */ // 0x8067EFD4
    /* li r0, 0 */ // 0x8067EFD8
    *(0x58 + r26) = r0; // stw @ 0x8067EFDC
    r29 = r26 + 4; // 0x8067EFE0
    /* li r28, 0 */ // 0x8067EFE4
    /* lis r30, 0 */ // 0x8067EFE8
    /* lis r31, 0 */ // 0x8067EFEC
    /* li r27, 0 */ // 0x8067EFF0
    r0 = *(8 + r29); // lwz @ 0x8067EFF4
    if (==) goto 0x0x8067f01c;
    if (==) goto 0x0x8067f098;
    if (==) goto 0x0x8067f1fc;
    if (==) goto 0x0x8067f2d8;
    /* b 0x8067f378 */ // 0x8067F018
    if (==) goto 0x0x8067f048;
    if (==) goto 0x0x8067f054;
    if (==) goto 0x0x8067f060;
    if (==) goto 0x0x8067f06c;
    if (==) goto 0x0x8067f078;
    /* b 0x8067f084 */ // 0x8067F044
    r3 = *(0 + r30); // lwz @ 0x8067F048
    r3 = r3 + 4; // 0x8067F04C
    /* b 0x8067f088 */ // 0x8067F050
    r3 = *(0 + r30); // lwz @ 0x8067F054
    r3 = r3 + 0xf0; // 0x8067F058
    /* b 0x8067f088 */ // 0x8067F05C
    r3 = *(0 + r30); // lwz @ 0x8067F060
    r3 = r3 + 0x1dc; // 0x8067F064
    /* b 0x8067f088 */ // 0x8067F068
    r3 = *(0 + r30); // lwz @ 0x8067F06C
    r3 = r3 + 0x2c8; // 0x8067F070
    /* b 0x8067f088 */ // 0x8067F074
    r3 = *(0 + r30); // lwz @ 0x8067F078
    r3 = r3 + 0x15b4; // 0x8067F07C
    /* b 0x8067f088 */ // 0x8067F080
    /* li r3, 0 */ // 0x8067F084
    *(0xc + r29) = r3; // stw @ 0x8067F088
    FUN_8067FEA4(r3, r3); // bl 0x8067FEA4
    *(4 + r29) = r3; // stw @ 0x8067F090
    /* b 0x8067f378 */ // 0x8067F094
    r3 = *(0 + r31); // lwz @ 0x8067F098
    /* li r26, 0 */ // 0x8067F09C
    r3 = *(0x54 + r3); // lwz @ 0x8067F0A0
    r3 = *(0x24 + r3); // lwz @ 0x8067F0A4
    r12 = *(0 + r3); // lwz @ 0x8067F0A8
    r12 = *(0xc + r12); // lwz @ 0x8067F0AC
    /* mtctr r12 */ // 0x8067F0B0
    /* bctrl  */ // 0x8067F0B4
    /* subfic r4, r3, 1 */ // 0x8067F0B8
    r0 = r3 + -1; // 0x8067F0BC
    r0 = r4 | r0; // 0x8067F0C0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8067F0C4
    if (!=) goto 0x0x8067f164;
    if (==) goto 0x0x8067f0f8;
    if (==) goto 0x0x8067f110;
    if (==) goto 0x0x8067f128;
    if (==) goto 0x0x8067f140;
    if (==) goto 0x0x8067f158;
    /* b 0x8067f164 */ // 0x8067F0F4
    r3 = *(0 + r30); // lwz @ 0x8067F0F8
    /* li r4, 0 */ // 0x8067F0FC
    /* li r5, 0 */ // 0x8067F100
    FUN_805B3AE8(r4, r5); // bl 0x805B3AE8
    r26 = r3;
    /* b 0x8067f164 */ // 0x8067F10C
    r3 = *(0 + r30); // lwz @ 0x8067F110
    /* li r4, 1 */ // 0x8067F114
    /* li r5, 0 */ // 0x8067F118
    FUN_805B3AE8(r4, r5); // bl 0x805B3AE8
    r26 = r3;
    /* b 0x8067f164 */ // 0x8067F124
    r3 = *(0 + r30); // lwz @ 0x8067F128
    /* li r4, 2 */ // 0x8067F12C
    /* li r5, 0 */ // 0x8067F130
    FUN_805B3AE8(r4, r5); // bl 0x805B3AE8
    r26 = r3;
    /* b 0x8067f164 */ // 0x8067F13C
    r3 = *(0 + r30); // lwz @ 0x8067F140
    /* li r4, 3 */ // 0x8067F144
    /* li r5, 0 */ // 0x8067F148
    FUN_805B3AE8(r4, r5); // bl 0x805B3AE8
    r26 = r3;
    /* b 0x8067f164 */ // 0x8067F154
    r3 = *(0 + r30); // lwz @ 0x8067F158
    FUN_805B37F4(r5); // bl 0x805B37F4
    r26 = r3;
    if (==) goto 0x0x8067f378;
    if (==) goto 0x0x8067f198;
    if (==) goto 0x0x8067f1a4;
    if (==) goto 0x0x8067f1b0;
    if (==) goto 0x0x8067f1bc;
    if (==) goto 0x0x8067f1c8;
    /* b 0x8067f1d4 */ // 0x8067F194
    r3 = *(0 + r30); // lwz @ 0x8067F198
    r3 = r3 + 4; // 0x8067F19C
    /* b 0x8067f1d8 */ // 0x8067F1A0
    r3 = *(0 + r30); // lwz @ 0x8067F1A4
    r3 = r3 + 0xf0; // 0x8067F1A8
    /* b 0x8067f1d8 */ // 0x8067F1AC
    r3 = *(0 + r30); // lwz @ 0x8067F1B0
    r3 = r3 + 0x1dc; // 0x8067F1B4
    /* b 0x8067f1d8 */ // 0x8067F1B8
    r3 = *(0 + r30); // lwz @ 0x8067F1BC
    r3 = r3 + 0x2c8; // 0x8067F1C0
    /* b 0x8067f1d8 */ // 0x8067F1C4
    r3 = *(0 + r30); // lwz @ 0x8067F1C8
    r3 = r3 + 0x15b4; // 0x8067F1CC
    /* b 0x8067f1d8 */ // 0x8067F1D0
    /* li r3, 0 */ // 0x8067F1D4
    *(0xc + r29) = r3; // stw @ 0x8067F1D8
    FUN_8067FEA4(r3, r3); // bl 0x8067FEA4
    *(4 + r29) = r3; // stw @ 0x8067F1E4
    if (==) goto 0x0x8067f378;
    r0 = *(4 + r29); // lwz @ 0x8067F1EC
    *(0 + r29) = r0; // stw @ 0x8067F1F0
    *(8 + r29) = r27; // stw @ 0x8067F1F4
    /* b 0x8067f378 */ // 0x8067F1F8
    if (==) goto 0x0x8067f228;
    if (==) goto 0x0x8067f234;
    if (==) goto 0x0x8067f240;
    if (==) goto 0x0x8067f24c;
    if (==) goto 0x0x8067f258;
    /* b 0x8067f264 */ // 0x8067F224
    r3 = *(0 + r30); // lwz @ 0x8067F228
    r3 = r3 + 4; // 0x8067F22C
    /* b 0x8067f268 */ // 0x8067F230
    r3 = *(0 + r30); // lwz @ 0x8067F234
    r3 = r3 + 0xf0; // 0x8067F238
    /* b 0x8067f268 */ // 0x8067F23C
    r3 = *(0 + r30); // lwz @ 0x8067F240
    r3 = r3 + 0x1dc; // 0x8067F244
    /* b 0x8067f268 */ // 0x8067F248
    r3 = *(0 + r30); // lwz @ 0x8067F24C
    r3 = r3 + 0x2c8; // 0x8067F250
    /* b 0x8067f268 */ // 0x8067F254
    r3 = *(0 + r30); // lwz @ 0x8067F258
    r3 = r3 + 0x15b4; // 0x8067F25C
    /* b 0x8067f268 */ // 0x8067F260
    /* li r3, 0 */ // 0x8067F264
    *(0xc + r29) = r3; // stw @ 0x8067F268
    FUN_8067FEA4(r3, r3); // bl 0x8067FEA4
    *(4 + r29) = r3; // stw @ 0x8067F270
    r0 = *(0 + r29); // lwz @ 0x8067F278
    if (!=) goto 0x0x8067f288;
    /* li r0, 0 */ // 0x8067F280
    /* b 0x8067f2ac */ // 0x8067F284
    if (!=) goto 0x0x8067f298;
    /* li r0, 0 */ // 0x8067F290
    /* b 0x8067f2ac */ // 0x8067F294
    r4 = r3 rlwinm 0; // rlwinm
    r0 = r0 rlwinm 0; // rlwinm
    /* subf r0, r4, r0 */ // 0x8067F2A0
    /* cntlzw r0, r0 */ // 0x8067F2A4
    /* srwi r0, r0, 5 */ // 0x8067F2A8
    if (==) goto 0x0x8067f378;
    r5 = *(0xc + r29); // lwz @ 0x8067F2B4
    r4 = *(0x5c + r5); // lhz @ 0x8067F2B8
    r0 = *(0x90 + r5); // lhz @ 0x8067F2BC
    /* clrlwi r4, r4, 0x1f */ // 0x8067F2C0
    /* andc. r0, r4, r0 */ // 0x8067F2C4
    if (==) goto 0x0x8067f378;
    *(0 + r29) = r3; // stw @ 0x8067F2CC
    *(8 + r29) = r27; // stw @ 0x8067F2D0
    /* b 0x8067f378 */ // 0x8067F2D4
    if (==) goto 0x0x8067f304;
    if (==) goto 0x0x8067f310;
    if (==) goto 0x0x8067f31c;
    if (==) goto 0x0x8067f328;
    if (==) goto 0x0x8067f334;
    /* b 0x8067f340 */ // 0x8067F300
    r3 = *(0 + r30); // lwz @ 0x8067F304
    r3 = r3 + 4; // 0x8067F308
    /* b 0x8067f344 */ // 0x8067F30C
    r3 = *(0 + r30); // lwz @ 0x8067F310
    r3 = r3 + 0xf0; // 0x8067F314
    /* b 0x8067f344 */ // 0x8067F318
    r3 = *(0 + r30); // lwz @ 0x8067F31C
    r3 = r3 + 0x1dc; // 0x8067F320
    /* b 0x8067f344 */ // 0x8067F324
    r3 = *(0 + r30); // lwz @ 0x8067F328
    r3 = r3 + 0x2c8; // 0x8067F32C
    /* b 0x8067f344 */ // 0x8067F330
    r3 = *(0 + r30); // lwz @ 0x8067F334
    r3 = r3 + 0x15b4; // 0x8067F338
    /* b 0x8067f344 */ // 0x8067F33C
    /* li r3, 0 */ // 0x8067F340
    *(0xc + r29) = r3; // stw @ 0x8067F344
    FUN_8067FEA4(r3, r3); // bl 0x8067FEA4
    *(4 + r29) = r3; // stw @ 0x8067F34C
    r0 = *(0 + r29); // lwz @ 0x8067F350
    if (!=) goto 0x0x8067f378;
    r4 = *(0xc + r29); // lwz @ 0x8067F35C
    r3 = *(0x5c + r4); // lhz @ 0x8067F360
    r0 = *(0x90 + r4); // lhz @ 0x8067F364
    /* clrlwi r3, r3, 0x1f */ // 0x8067F368
    /* andc. r0, r3, r0 */ // 0x8067F36C
    if (==) goto 0x0x8067f378;
    *(8 + r29) = r27; // stw @ 0x8067F374
    r28 = r28 + 1; // 0x8067F378
    r29 = r29 + 0x10; // 0x8067F37C
    if (<) goto 0x0x8067eff4;
    r0 = *(0x24 + r1); // lwz @ 0x8067F38C
    return;
}