/* Function at 0x805BF0E8, size=712 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805BF0E8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, 0 */ // 0x805BF0F4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805BF104
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x805BF10C
    *(0xa + r1) = r0; // stb @ 0x805BF110
    *(9 + r1) = r0; // stb @ 0x805BF114
    *(8 + r1) = r0; // stb @ 0x805BF118
    r0 = *(0xb70 + r3); // lwz @ 0x805BF11C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805BF120
    if (==) goto 0x0x805bf12c;
    FUN_805BEF64(); // bl 0x805BEF64
    r3 = r29;
    FUN_805BE738(r3); // bl 0x805BE738
    /* li r5, 0 */ // 0x805BF134
    /* li r0, -1 */ // 0x805BF138
    /* mulli r8, r5, 0xf0 */ // 0x805BF13C
    r3 = r29;
    /* li r5, 6 */ // 0x805BF144
    r7 = r29 + r8; // 0x805BF14C
    *(0xd + r7) = r0; // stb @ 0x805BF154
    /* mulli r8, r5, 0xf0 */ // 0x805BF158
    *(0xe + r7) = r0; // stb @ 0x805BF160
    *(0xfd + r7) = r0; // stb @ 0x805BF164
    *(0xfe + r7) = r0; // stb @ 0x805BF168
    *(0x1ed + r7) = r0; // stb @ 0x805BF16C
    *(0x1ee + r7) = r0; // stb @ 0x805BF170
    *(0x2dd + r7) = r0; // stb @ 0x805BF174
    *(0x2de + r7) = r0; // stb @ 0x805BF178
    *(0x3cd + r7) = r0; // stb @ 0x805BF17C
    *(0x3ce + r7) = r0; // stb @ 0x805BF180
    *(0x4bd + r7) = r0; // stb @ 0x805BF184
    *(0x4be + r7) = r0; // stb @ 0x805BF188
    r7 = r29 + r8; // 0x805BF18C
    *(0xd + r7) = r0; // stb @ 0x805BF190
    *(0xe + r7) = r0; // stb @ 0x805BF194
    *(0xfd + r7) = r0; // stb @ 0x805BF198
    *(0xfe + r7) = r0; // stb @ 0x805BF19C
    *(0x1ed + r7) = r0; // stb @ 0x805BF1A0
    *(0x1ee + r7) = r0; // stb @ 0x805BF1A4
    *(0x2dd + r7) = r0; // stb @ 0x805BF1A8
    *(0x2de + r7) = r0; // stb @ 0x805BF1AC
    *(0x3cd + r7) = r0; // stb @ 0x805BF1B0
    *(0x3ce + r7) = r0; // stb @ 0x805BF1B4
    *(0x4bd + r7) = r0; // stb @ 0x805BF1B8
    *(0x4be + r7) = r0; // stb @ 0x805BF1BC
    *(0xb64 + r29) = r0; // stb @ 0x805BF1C0
    *(0xb65 + r29) = r0; // stb @ 0x805BF1C4
    *(0xb66 + r29) = r0; // stb @ 0x805BF1C8
    *(0xb67 + r29) = r0; // stb @ 0x805BF1CC
    FUN_805BECE0(); // bl 0x805BECE0
    r0 = *(0xb54 + r29); // lwz @ 0x805BF1D4
    r31 = *(9 + r1); // lbz @ 0x805BF1D8
    if (!=) goto 0x0x805bf1ec;
    /* li r0, 1 */ // 0x805BF1E4
    *(9 + r1) = r0; // stb @ 0x805BF1E8
    r0 = *(0xb6c + r29); // lbz @ 0x805BF1EC
    if (!=) goto 0x0x805bf354;
    r4 = *(0xb50 + r29); // lwz @ 0x805BF1F8
    /* li r0, 0 */ // 0x805BF1FC
    r3 = *(0xa + r1); // lbz @ 0x805BF200
    if (<) goto 0x0x805bf218;
    if (>) goto 0x0x805bf218;
    /* li r0, 1 */ // 0x805BF214
    if (!=) goto 0x0x805bf354;
    /* li r4, 0 */ // 0x805BF224
    if (==) goto 0x0x805bf354;
    r0 = r3 + 0xf8; // 0x805BF230
    if (<=) goto 0x0x805bf320;
    /* clrlwi r5, r0, 0x18 */ // 0x805BF238
    /* li r11, 0 */ // 0x805BF23C
    r0 = r5 + 7; // 0x805BF240
    /* srwi r0, r0, 3 */ // 0x805BF244
    /* mtctr r0 */ // 0x805BF248
    if (<=) goto 0x0x805bf320;
    /* clrlwi r7, r4, 0x18 */ // 0x805BF254
    r5 = r4 + 1; // 0x805BF258
    /* mulli r6, r7, 0xf0 */ // 0x805BF25C
    r0 = r4 + 2; // 0x805BF260
    /* clrlwi r10, r5, 0x18 */ // 0x805BF264
    /* clrlwi r9, r0, 0x18 */ // 0x805BF268
    r12 = r29 + r6; // 0x805BF26C
    r0 = r4 + 3; // 0x805BF270
    *(0xe0 + r12) = r11; // sth @ 0x805BF274
    /* clrlwi r8, r0, 0x18 */ // 0x805BF278
    /* subf r28, r7, r3 */ // 0x805BF27C
    r0 = r4 + 4; // 0x805BF280
    *(0xe9 + r12) = r28; // stb @ 0x805BF284
    /* clrlwi r7, r0, 0x18 */ // 0x805BF288
    r6 = r4 + 5; // 0x805BF28C
    r5 = r4 + 6; // 0x805BF290
    *(0xe8 + r12) = r28; // stb @ 0x805BF294
    r0 = r4 + 7; // 0x805BF298
    /* clrlwi r6, r6, 0x18 */ // 0x805BF29C
    /* clrlwi r5, r5, 0x18 */ // 0x805BF2A0
    *(0x1d0 + r12) = r11; // sth @ 0x805BF2A4
    /* subf r10, r10, r3 */ // 0x805BF2A8
    /* clrlwi r0, r0, 0x18 */ // 0x805BF2AC
    /* subf r9, r9, r3 */ // 0x805BF2B0
    *(0x1d9 + r12) = r10; // stb @ 0x805BF2B4
    /* subf r8, r8, r3 */ // 0x805BF2B8
    /* subf r7, r7, r3 */ // 0x805BF2BC
    /* subf r6, r6, r3 */ // 0x805BF2C0
    *(0x1d8 + r12) = r10; // stb @ 0x805BF2C4
    /* subf r5, r5, r3 */ // 0x805BF2C8
    /* subf r0, r0, r3 */ // 0x805BF2CC
    r4 = r4 + 8; // 0x805BF2D0
    *(0x2c0 + r12) = r11; // sth @ 0x805BF2D4
    *(0x2c9 + r12) = r9; // stb @ 0x805BF2D8
    *(0x2c8 + r12) = r9; // stb @ 0x805BF2DC
    *(0x3b0 + r12) = r11; // sth @ 0x805BF2E0
    *(0x3b9 + r12) = r8; // stb @ 0x805BF2E4
    *(0x3b8 + r12) = r8; // stb @ 0x805BF2E8
    *(0x4a0 + r12) = r11; // sth @ 0x805BF2EC
    *(0x4a9 + r12) = r7; // stb @ 0x805BF2F0
    *(0x4a8 + r12) = r7; // stb @ 0x805BF2F4
    *(0x590 + r12) = r11; // sth @ 0x805BF2F8
    *(0x599 + r12) = r6; // stb @ 0x805BF2FC
    *(0x598 + r12) = r6; // stb @ 0x805BF300
    *(0x680 + r12) = r11; // sth @ 0x805BF304
    *(0x689 + r12) = r5; // stb @ 0x805BF308
    *(0x688 + r12) = r5; // stb @ 0x805BF30C
    *(0x770 + r12) = r11; // sth @ 0x805BF310
    *(0x779 + r12) = r0; // stb @ 0x805BF314
    *(0x778 + r12) = r0; // stb @ 0x805BF318
    if (counter-- != 0) goto 0x0x805bf254;
    /* li r5, 0 */ // 0x805BF320
    /* b 0x805bf348 */ // 0x805BF324
    /* clrlwi r6, r4, 0x18 */ // 0x805BF328
    r4 = r4 + 1; // 0x805BF32C
    /* mulli r0, r6, 0xf0 */ // 0x805BF330
    /* subf r7, r6, r3 */ // 0x805BF334
    r6 = r29 + r0; // 0x805BF338
    *(0xe0 + r6) = r5; // sth @ 0x805BF33C
    *(0xe9 + r6) = r7; // stb @ 0x805BF340
    *(0xe8 + r6) = r7; // stb @ 0x805BF344
    /* clrlwi r0, r4, 0x18 */ // 0x805BF348
    if (<) goto 0x0x805bf328;
    r4 = *(9 + r1); // lbz @ 0x805BF354
    r3 = r29;
    FUN_805BEA40(r3); // bl 0x805BEA40
    r3 = r29;
    r4 = r30;
    FUN_805BE280(r3, r3, r4); // bl 0x805BE280
    r3 = r29;
    FUN_805BEE7C(r3, r4, r3); // bl 0x805BEE7C
    r0 = *(0xa + r1); // lbz @ 0x805BF374
    *(4 + r29) = r0; // stb @ 0x805BF378
    r0 = *(9 + r1); // lbz @ 0x805BF37C
    *(5 + r29) = r0; // stb @ 0x805BF380
    *(7 + r29) = r31; // stb @ 0x805BF384
    r0 = *(8 + r1); // lbz @ 0x805BF388
    *(6 + r29) = r0; // stb @ 0x805BF38C
    r31 = *(0x1c + r1); // lwz @ 0x805BF390
    r30 = *(0x18 + r1); // lwz @ 0x805BF394
    r29 = *(0x14 + r1); // lwz @ 0x805BF398
    r28 = *(0x10 + r1); // lwz @ 0x805BF39C
    r0 = *(0x24 + r1); // lwz @ 0x805BF3A0
    return;
}