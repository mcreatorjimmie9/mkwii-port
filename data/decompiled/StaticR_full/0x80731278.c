/* Function at 0x80731278, size=424 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80731278(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0x4011 */ // 0x80731280
    /* rlwinm. r10, r5, 0, 1, 1 */ // 0x80731284
    *(0x14 + r1) = r0; // stw @ 0x80731288
    r0 = r7 + -0x7000; // 0x8073128C
    r7 = r5 & r0; // 0x80731290
    *(0xc + r1) = r31; // stw @ 0x80731294
    /* neg r0, r7 */ // 0x80731298
    r0 = r0 | r7; // 0x8073129C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807312A4
    r30 = r3;
    /* li r7, 0 */ // 0x807312AC
    /* srwi r4, r0, 0x1f */ // 0x807312B0
    if (==) goto 0x0x807312c4;
    if (!=) goto 0x0x807312c4;
    /* li r7, 1 */ // 0x807312C0
    /* rlwinm. r0, r5, 0, 0x13, 0x13 */ // 0x807312C4
    /* li r8, 0 */ // 0x807312C8
    if (==) goto 0x0x807312dc;
    if (!=) goto 0x0x807312dc;
    /* li r8, 1 */ // 0x807312D8
    /* rlwinm. r0, r5, 0, 0x12, 0x12 */ // 0x807312DC
    /* li r0, 0 */ // 0x807312E0
    if (==) goto 0x0x807312fc;
    if (==) goto 0x0x807312f8;
    if (!=) goto 0x0x807312fc;
    /* li r0, 1 */ // 0x807312F8
    r4 = r4 | r0; // 0x807312FC
    /* rlwinm. r0, r5, 0, 0xb, 0xb */ // 0x80731300
    /* neg r0, r4 */ // 0x80731304
    /* li r5, 0 */ // 0x80731308
    r0 = r0 | r4; // 0x8073130C
    /* srwi r4, r0, 0x1f */ // 0x80731310
    if (==) goto 0x0x80731324;
    if (!=) goto 0x0x80731324;
    /* li r5, 1 */ // 0x80731320
    /* li r9, 0 */ // 0x80731328
    if (==) goto 0x0x8073133c;
    if (!=) goto 0x0x8073133c;
    /* li r9, 1 */ // 0x80731338
    /* li r10, 0 */ // 0x80731340
    if (==) goto 0x0x80731354;
    if (!=) goto 0x0x80731354;
    /* li r10, 1 */ // 0x80731350
    /* li r5, 1 */ // 0x80731358
    /* li r0, 0 */ // 0x8073135C
    if (!=) goto 0x0x8073136c;
    if (==) goto 0x0x80731370;
    /* li r0, 1 */ // 0x8073136C
    if (!=) goto 0x0x80731384;
    if (!=) goto 0x0x80731384;
    /* li r5, 0 */ // 0x80731380
    if (!=) goto 0x0x80731408;
    if (==) goto 0x0x807313a0;
    r3 = r30;
    FUN_807362BC(r3); // bl 0x807362BC
    /* b 0x80731408 */ // 0x8073139C
    if (==) goto 0x0x80731408;
    if (!=) goto 0x0x80731408;
    r3 = *(0x118 + r3); // lwz @ 0x807313B0
    FUN_8061DC28(); // bl 0x8061DC28
    r5 = *(8 + r3); // lwz @ 0x807313B8
    /* clrlwi r0, r31, 0x18 */ // 0x807313BC
    /* mulli r4, r0, 0x30 */ // 0x807313C0
    r3 = *(0x7b0 + r30); // lwz @ 0x807313C4
    r5 = *(0x8c + r5); // lwz @ 0x807313C8
    r0 = r3 + 1; // 0x807313CC
    /* lfs f1, 0x7a4(r30) */ // 0x807313D0
    r3 = r5 + r4; // 0x807313D4
    /* lfs f0, 0xc(r3) */ // 0x807313D8
    /* lfs f2, 0x7a8(r30) */ // 0x807313DC
    /* fadds f0, f1, f0 */ // 0x807313E0
    /* lfs f1, 0x7ac(r30) */ // 0x807313E4
    /* stfs f0, 0x7a4(r30) */ // 0x807313E8
    /* lfs f0, 0x10(r3) */ // 0x807313EC
    /* fadds f0, f2, f0 */ // 0x807313F0
    /* stfs f0, 0x7a8(r30) */ // 0x807313F4
    /* lfs f0, 0x14(r3) */ // 0x807313F8
    /* fadds f0, f1, f0 */ // 0x807313FC
    *(0x7b0 + r30) = r0; // stw @ 0x80731400
    /* stfs f0, 0x7ac(r30) */ // 0x80731404
    r0 = *(0x14 + r1); // lwz @ 0x80731408
    r31 = *(0xc + r1); // lwz @ 0x8073140C
    r30 = *(8 + r1); // lwz @ 0x80731410
    return;
}