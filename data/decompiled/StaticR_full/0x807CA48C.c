/* Function at 0x807CA48C, size=404 bytes */
/* Stack frame: 32 bytes */

void FUN_807CA48C(int r3, int r4, int r5, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x807CA490
    r7 = r7 + 0; // 0x807CA494
    r9 = *(0 + r5); // lwz @ 0x807CA498
    r0 = *(0x16 + r7); // lhz @ 0x807CA49C
    r8 = *(0x14 + r7); // lhz @ 0x807CA4A0
    /* and. r0, r9, r0 */ // 0x807CA4A4
    r8 = r9 & r8; // 0x807CA4A8
    /* neg r0, r8 */ // 0x807CA4AC
    r0 = r0 | r8; // 0x807CA4B0
    /* srwi r0, r0, 0x1f */ // 0x807CA4B4
    if (==) goto 0x0x807ca4cc;
    r0 = *(0x10 + r7); // lhz @ 0x807CA4BC
    r0 = r9 & r0; // 0x807CA4C0
    /* cntlzw r0, r0 */ // 0x807CA4C4
    /* srwi r0, r0, 5 */ // 0x807CA4C8
    /* li r10, 0 */ // 0x807CA4D0
    if (==) goto 0x0x807ca500;
    r0 = *(0x11 + r3); // lbz @ 0x807CA4D8
    if (!=) goto 0x0x807ca534;
    r8 = *(0 + r4); // lhz @ 0x807CA4E4
    /* li r0, 1 */ // 0x807CA4E8
    /* li r10, 1 */ // 0x807CA4EC
    r8 = r8 | 4; // 0x807CA4F0
    *(0 + r4) = r8; // sth @ 0x807CA4F4
    *(0x11 + r3) = r0; // stb @ 0x807CA4F8
    /* b 0x807ca534 */ // 0x807CA4FC
    /* lis r8, 0 */ // 0x807CA500
    r0 = *(0 + r8); // lhz @ 0x807CA504
    /* and. r0, r9, r0 */ // 0x807CA508
    if (==) goto 0x0x807ca52c;
    r0 = *(0x11 + r3); // lbz @ 0x807CA510
    if (!=) goto 0x0x807ca534;
    r0 = *(0 + r4); // lhz @ 0x807CA51C
    r0 = r0 | 4; // 0x807CA520
    *(0 + r4) = r0; // sth @ 0x807CA524
    /* b 0x807ca534 */ // 0x807CA528
    /* li r0, 0 */ // 0x807CA52C
    *(0x11 + r3) = r0; // stb @ 0x807CA530
    r4 = *(8 + r3); // lwz @ 0x807CA534
    if (<=) goto 0x0x807ca54c;
    r0 = r4 + -1; // 0x807CA540
    *(8 + r3) = r0; // stw @ 0x807CA544
    /* b 0x807ca5c8 */ // 0x807CA548
    /* li r0, 0 */ // 0x807CA550
    *(8 + r3) = r0; // stw @ 0x807CA554
    *(0xc + r3) = r0; // stw @ 0x807CA558
    if (==) goto 0x0x807ca59c;
    r4 = *(0 + r5); // lwz @ 0x807CA560
    /* clrlwi. r0, r4, 0x1f */ // 0x807CA564
    if (==) goto 0x0x807ca580;
    r4 = *(0x1a + r7); // lha @ 0x807CA56C
    /* li r0, -1 */ // 0x807CA570
    *(8 + r3) = r4; // stw @ 0x807CA574
    *(0xc + r3) = r0; // stw @ 0x807CA578
    /* b 0x807ca5c8 */ // 0x807CA57C
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x807CA580
    if (==) goto 0x0x807ca5c8;
    r4 = *(0x1a + r7); // lha @ 0x807CA588
    /* li r0, 1 */ // 0x807CA58C
    *(8 + r3) = r4; // stw @ 0x807CA590
    *(0xc + r3) = r0; // stw @ 0x807CA594
    /* b 0x807ca5c8 */ // 0x807CA598
    /* lis r4, 0 */ // 0x807CA59C
    r5 = *(8 + r5); // lwz @ 0x807CA5A0
    r0 = *(0 + r4); // lhz @ 0x807CA5A4
    /* and. r0, r5, r0 */ // 0x807CA5A8
    if (==) goto 0x0x807ca5c8;
    /* lis r4, 0 */ // 0x807CA5B0
    /* lfs f0, 0(r4) */ // 0x807CA5B4
    /* fctiwz f0, f0 */ // 0x807CA5B8
    /* stfd f0, 8(r1) */ // 0x807CA5BC
    r0 = *(0xc + r1); // lwz @ 0x807CA5C0
    *(0 + r6) = r0; // stb @ 0x807CA5C4
    r8 = *(0xc + r3); // lwz @ 0x807CA5C8
    if (==) goto 0x0x807ca618;
    r5 = *(0x18 + r7); // lbz @ 0x807CA5D4
    /* lis r0, 0x4330 */ // 0x807CA5D8
    /* lis r4, 0 */ // 0x807CA5DC
    /* lis r3, 0 */ // 0x807CA5E0
    r5 = r5 * r8; // 0x807CA5E4
    *(8 + r1) = r0; // stw @ 0x807CA5E8
    /* lfd f2, 0(r4) */ // 0x807CA5EC
    /* lfs f0, 0(r3) */ // 0x807CA5F0
    /* xoris r0, r5, 0x8000 */ // 0x807CA5F4
    *(0xc + r1) = r0; // stw @ 0x807CA5F8
    /* lfd f1, 8(r1) */ // 0x807CA5FC
    /* fsubs f1, f1, f2 */ // 0x807CA600
    /* fadds f0, f0, f1 */ // 0x807CA604
    /* fctiwz f0, f0 */ // 0x807CA608
    /* stfd f0, 0x10(r1) */ // 0x807CA60C
    r0 = *(0x14 + r1); // lwz @ 0x807CA610
    *(0 + r6) = r0; // stb @ 0x807CA614
    return;
}