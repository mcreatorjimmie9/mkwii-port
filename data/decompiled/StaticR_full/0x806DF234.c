/* Function at 0x806DF234, size=432 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806DF234(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, -0x8000 */ // 0x806DF23C
    /* li r8, 0 */ // 0x806DF240
    *(0x24 + r1) = r0; // stw @ 0x806DF244
    /* li r6, 0 */ // 0x806DF248
    *(0x1c + r1) = r31; // stw @ 0x806DF24C
    /* lis r31, 0 */ // 0x806DF250
    r31 = r31 + 0; // 0x806DF254
    *(0x18 + r1) = r30; // stw @ 0x806DF258
    r30 = r3;
    /* lfs f3, 0x10(r31) */ // 0x806DF260
    r0 = *(4 + r3); // lwz @ 0x806DF264
    r7 = *(0x3c + r3); // lwz @ 0x806DF268
    /* cntlzw r0, r0 */ // 0x806DF26C
    /* lfd f1, 0x18(r31) */ // 0x806DF270
    r5 = r0 rlwinm 0x1b; // rlwinm
    r0 = r4 + -1; // 0x806DF278
    /* neg r4, r5 */ // 0x806DF27C
    r9 = r0 & r4; // 0x806DF280
    /* lis r0, 0x4330 */ // 0x806DF284
    /* mtctr r7 */ // 0x806DF288
    if (<=) goto 0x0x806df2ec;
    r4 = *(0x34 + r3); // lwz @ 0x806DF294
    /* lwzx r4, r4, r6 */ // 0x806DF298
    r5 = *(0x174 + r4); // lwz @ 0x806DF29C
    if (<) goto 0x0x806df2e4;
    if (>) goto 0x0x806df2e4;
    r5 = *(0x184 + r4); // lwz @ 0x806DF2B0
    if (<) goto 0x0x806df2e4;
    /* xoris r4, r5, 0x8000 */ // 0x806DF2BC
    *(0xc + r1) = r4; // stw @ 0x806DF2C0
    r8 = r8 + 1; // 0x806DF2C8
    *(8 + r1) = r0; // stw @ 0x806DF2CC
    /* lfd f0, 8(r1) */ // 0x806DF2D0
    /* fsubs f0, f0, f1 */ // 0x806DF2D4
    /* fadds f3, f3, f0 */ // 0x806DF2D8
    if (>=) goto 0x0x806df2e4;
    r9 = r5;
    r6 = r6 + 4; // 0x806DF2E4
    if (counter-- != 0) goto 0x0x806df294;
    if (<=) goto 0x0x806df330;
    /* lis r4, 0x4330 */ // 0x806DF2F4
    /* xoris r0, r8, 0x8000 */ // 0x806DF2F8
    *(0xc + r1) = r0; // stw @ 0x806DF2FC
    /* xoris r0, r9, 0x8000 */ // 0x806DF300
    /* lfd f2, 0x18(r31) */ // 0x806DF304
    *(8 + r1) = r4; // stw @ 0x806DF308
    /* lfd f0, 8(r1) */ // 0x806DF30C
    *(0x14 + r1) = r0; // stw @ 0x806DF310
    /* fsubs f0, f0, f2 */ // 0x806DF314
    *(0x10 + r1) = r4; // stw @ 0x806DF318
    /* fdivs f1, f3, f0 */ // 0x806DF31C
    /* lfd f0, 0x10(r1) */ // 0x806DF320
    /* stfs f1, 8(r3) */ // 0x806DF324
    /* fsubs f0, f0, f2 */ // 0x806DF328
    /* stfs f0, 0xc(r3) */ // 0x806DF32C
    r3 = r30;
    FUN_806DE5D0(r3); // bl 0x806DE5D0
    r0 = *(0x3c + r30); // lwz @ 0x806DF338
    /* li r6, 0 */ // 0x806DF33C
    /* li r7, 0 */ // 0x806DF340
    /* li r4, 0 */ // 0x806DF344
    /* mtctr r0 */ // 0x806DF348
    if (<=) goto 0x0x806df380;
    r5 = *(0x34 + r30); // lwz @ 0x806DF354
    /* lwzx r3, r5, r4 */ // 0x806DF358
    r0 = *(0x174 + r3); // lwz @ 0x806DF35C
    if (!=) goto 0x0x806df374;
    /* slwi r0, r7, 2 */ // 0x806DF368
    /* lwzx r6, r5, r0 */ // 0x806DF36C
    /* b 0x806df380 */ // 0x806DF370
    r4 = r4 + 4; // 0x806DF374
    r7 = r7 + 1; // 0x806DF378
    if (counter-- != 0) goto 0x0x806df354;
    if (==) goto 0x0x806df3cc;
    /* lfs f2, 0x48(r31) */ // 0x806DF388
    /* lis r3, 0x5c */ // 0x806DF38C
    /* lfs f0, 0xc(r30) */ // 0x806DF390
    r3 = r3 + -0x7281; // 0x806DF394
    /* lfs f1, 8(r30) */ // 0x806DF398
    /* fmuls f2, f2, f0 */ // 0x806DF39C
    /* lfs f0, 0x4c(r31) */ // 0x806DF3A0
    /* fadds f1, f2, f1 */ // 0x806DF3A4
    /* fdivs f0, f1, f0 */ // 0x806DF3A8
    /* fctiwz f0, f0 */ // 0x806DF3AC
    /* stfd f0, 0x10(r1) */ // 0x806DF3B0
    r0 = *(0x14 + r1); // lwz @ 0x806DF3B4
    if (>=) goto 0x0x806df3c8;
    /* stfd f0, 8(r1) */ // 0x806DF3C0
    r3 = *(0xc + r1); // lwz @ 0x806DF3C4
    *(0x184 + r6) = r3; // stw @ 0x806DF3C8
    r0 = *(0x24 + r1); // lwz @ 0x806DF3CC
    r31 = *(0x1c + r1); // lwz @ 0x806DF3D0
    r30 = *(0x18 + r1); // lwz @ 0x806DF3D4
    return;
}