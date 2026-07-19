/* Function at 0x807CA300, size=396 bytes */
/* Stack frame: 32 bytes */

void FUN_807CA300(int r3, int r4, int r5, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x807CA304
    r7 = r7 + 0; // 0x807CA308
    r9 = *(0 + r5); // lwz @ 0x807CA30C
    r0 = *(0x16 + r7); // lhz @ 0x807CA310
    r8 = *(0x14 + r7); // lhz @ 0x807CA314
    /* and. r0, r9, r0 */ // 0x807CA318
    r8 = r9 & r8; // 0x807CA31C
    /* neg r0, r8 */ // 0x807CA320
    r0 = r0 | r8; // 0x807CA324
    /* srwi r0, r0, 0x1f */ // 0x807CA328
    if (==) goto 0x0x807ca340;
    r0 = *(0x10 + r7); // lhz @ 0x807CA330
    r0 = r9 & r0; // 0x807CA334
    /* cntlzw r0, r0 */ // 0x807CA338
    /* srwi r0, r0, 5 */ // 0x807CA33C
    /* li r10, 0 */ // 0x807CA344
    if (==) goto 0x0x807ca374;
    r0 = *(0x11 + r3); // lbz @ 0x807CA34C
    if (!=) goto 0x0x807ca3a4;
    r8 = *(0 + r4); // lhz @ 0x807CA358
    /* li r0, 1 */ // 0x807CA35C
    /* li r10, 1 */ // 0x807CA360
    r8 = r8 | 4; // 0x807CA364
    *(0 + r4) = r8; // sth @ 0x807CA368
    *(0x11 + r3) = r0; // stb @ 0x807CA36C
    /* b 0x807ca3a4 */ // 0x807CA370
    r0 = *(0x10 + r7); // lhz @ 0x807CA374
    /* and. r0, r9, r0 */ // 0x807CA378
    if (==) goto 0x0x807ca39c;
    r0 = *(0x11 + r3); // lbz @ 0x807CA380
    if (!=) goto 0x0x807ca3a4;
    r0 = *(0 + r4); // lhz @ 0x807CA38C
    r0 = r0 | 4; // 0x807CA390
    *(0 + r4) = r0; // sth @ 0x807CA394
    /* b 0x807ca3a4 */ // 0x807CA398
    /* li r0, 0 */ // 0x807CA39C
    *(0x11 + r3) = r0; // stb @ 0x807CA3A0
    r4 = *(8 + r3); // lwz @ 0x807CA3A4
    if (<=) goto 0x0x807ca3bc;
    r0 = r4 + -1; // 0x807CA3B0
    *(8 + r3) = r0; // stw @ 0x807CA3B4
    /* b 0x807ca434 */ // 0x807CA3B8
    /* li r0, 0 */ // 0x807CA3C0
    *(8 + r3) = r0; // stw @ 0x807CA3C4
    *(0xc + r3) = r0; // stw @ 0x807CA3C8
    if (==) goto 0x0x807ca40c;
    r4 = *(0 + r5); // lwz @ 0x807CA3D0
    /* clrlwi. r0, r4, 0x1f */ // 0x807CA3D4
    if (==) goto 0x0x807ca3f0;
    r4 = *(0x1a + r7); // lha @ 0x807CA3DC
    /* li r0, -1 */ // 0x807CA3E0
    *(8 + r3) = r4; // stw @ 0x807CA3E4
    *(0xc + r3) = r0; // stw @ 0x807CA3E8
    /* b 0x807ca434 */ // 0x807CA3EC
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x807CA3F0
    if (==) goto 0x0x807ca434;
    r4 = *(0x1a + r7); // lha @ 0x807CA3F8
    /* li r0, 1 */ // 0x807CA3FC
    *(8 + r3) = r4; // stw @ 0x807CA400
    *(0xc + r3) = r0; // stw @ 0x807CA404
    /* b 0x807ca434 */ // 0x807CA408
    r4 = *(8 + r5); // lwz @ 0x807CA40C
    r0 = *(0x10 + r7); // lhz @ 0x807CA410
    /* and. r0, r4, r0 */ // 0x807CA414
    if (==) goto 0x0x807ca434;
    /* lis r4, 0 */ // 0x807CA41C
    /* lfs f0, 0(r4) */ // 0x807CA420
    /* fctiwz f0, f0 */ // 0x807CA424
    /* stfd f0, 8(r1) */ // 0x807CA428
    r0 = *(0xc + r1); // lwz @ 0x807CA42C
    *(0 + r6) = r0; // stb @ 0x807CA430
    r8 = *(0xc + r3); // lwz @ 0x807CA434
    if (==) goto 0x0x807ca484;
    r5 = *(0x18 + r7); // lbz @ 0x807CA440
    /* lis r0, 0x4330 */ // 0x807CA444
    /* lis r4, 0 */ // 0x807CA448
    /* lis r3, 0 */ // 0x807CA44C
    r5 = r5 * r8; // 0x807CA450
    *(8 + r1) = r0; // stw @ 0x807CA454
    /* lfd f2, 0(r4) */ // 0x807CA458
    /* lfs f0, 0(r3) */ // 0x807CA45C
    /* xoris r0, r5, 0x8000 */ // 0x807CA460
    *(0xc + r1) = r0; // stw @ 0x807CA464
    /* lfd f1, 8(r1) */ // 0x807CA468
    /* fsubs f1, f1, f2 */ // 0x807CA46C
    /* fadds f0, f0, f1 */ // 0x807CA470
    /* fctiwz f0, f0 */ // 0x807CA474
    /* stfd f0, 0x10(r1) */ // 0x807CA478
    r0 = *(0x14 + r1); // lwz @ 0x807CA47C
    *(0 + r6) = r0; // stb @ 0x807CA480
    return;
}