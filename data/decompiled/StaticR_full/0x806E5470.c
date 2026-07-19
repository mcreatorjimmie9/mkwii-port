/* Function at 0x806E5470, size=404 bytes */
/* Stack frame: 32 bytes */

void FUN_806E5470(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    r0 = *(0 + r3); // lha @ 0x806E5474
    if (>) goto 0x0x806e5490;
    /* lis r4, 0 */ // 0x806E5480
    /* li r0, 1 */ // 0x806E5484
    r4 = *(0 + r4); // lwz @ 0x806E5488
    *(0x2e + r4) = r0; // stb @ 0x806E548C
    r0 = *(0 + r3); // lha @ 0x806E5490
    if (<=) goto 0x0x806e54dc;
    /* xoris r4, r0, 0x8000 */ // 0x806E549C
    /* lis r0, 0x4330 */ // 0x806E54A0
    *(0xc + r1) = r4; // stw @ 0x806E54A4
    /* lis r5, 0 */ // 0x806E54A8
    /* lis r4, 0 */ // 0x806E54AC
    /* lfd f1, 0(r5) */ // 0x806E54B0
    *(8 + r1) = r0; // stw @ 0x806E54B4
    r4 = *(0 + r4); // lwz @ 0x806E54B8
    /* lfd f0, 8(r1) */ // 0x806E54BC
    /* lfs f2, 0x7c(r4) */ // 0x806E54C0
    /* fsubs f0, f0, f1 */ // 0x806E54C4
    /* fsubs f0, f0, f2 */ // 0x806E54C8
    /* fctiwz f0, f0 */ // 0x806E54CC
    /* stfd f0, 0x10(r1) */ // 0x806E54D0
    r0 = *(0x14 + r1); // lwz @ 0x806E54D4
    *(0 + r3) = r0; // sth @ 0x806E54D8
    /* li r0, 6 */ // 0x806E54DC
    /* li r8, 0 */ // 0x806E54E0
    /* lis r7, 0 */ // 0x806E54E4
    /* li r5, 1 */ // 0x806E54E8
    /* mtctr r0 */ // 0x806E54EC
    r9 = *(0 + r7); // lwz @ 0x806E54F0
    /* clrlwi r0, r8, 0x18 */ // 0x806E54F4
    r4 = r5 << r0; // slw
    r6 = *(0x291c + r9); // lwz @ 0x806E54FC
    /* mulli r0, r6, 0x58 */ // 0x806E5500
    r6 = r9 + r0; // 0x806E5504
    r0 = *(0x48 + r6); // lwz @ 0x806E5508
    /* and. r0, r4, r0 */ // 0x806E550C
    if (==) goto 0x0x806e5570;
    r0 = *(0x59 + r6); // lbz @ 0x806E5514
    if (==) goto 0x0x806e5570;
    r0 = r8 rlwinm 5; // rlwinm
    r6 = r8 rlwinm 2; // rlwinm
    r4 = r9 + r0; // 0x806E5528
    r0 = *(0x27a0 + r4); // lwz @ 0x806E552C
    /* mulli r0, r0, 0x30 */ // 0x806E5530
    r0 = r9 + r0; // 0x806E5534
    r4 = r0 + r6; // 0x806E5538
    r4 = *(0x150 + r4); // lwz @ 0x806E553C
    r4 = *(4 + r4); // lwz @ 0x806E5540
    r0 = *(8 + r4); // lwz @ 0x806E5544
    if (==) goto 0x0x806e5570;
    r0 = *(0 + r3); // lha @ 0x806E5550
    r4 = *(0 + r4); // lwz @ 0x806E5554
    if (<=) goto 0x0x806e5570;
    r4 = *(0x12 + r4); // lha @ 0x806E5560
    if (<=) goto 0x0x806e5570;
    *(0 + r3) = r4; // sth @ 0x806E556C
    r9 = *(0 + r7); // lwz @ 0x806E5570
    r8 = r8 + 1; // 0x806E5574
    /* clrlwi r0, r8, 0x18 */ // 0x806E5578
    r6 = *(0x291c + r9); // lwz @ 0x806E557C
    r4 = r5 << r0; // slw
    /* mulli r0, r6, 0x58 */ // 0x806E5584
    r6 = r9 + r0; // 0x806E5588
    r0 = *(0x48 + r6); // lwz @ 0x806E558C
    /* and. r0, r4, r0 */ // 0x806E5590
    if (==) goto 0x0x806e55f4;
    r0 = *(0x59 + r6); // lbz @ 0x806E5598
    if (==) goto 0x0x806e55f4;
    r0 = r8 rlwinm 5; // rlwinm
    r6 = r8 rlwinm 2; // rlwinm
    r4 = r9 + r0; // 0x806E55AC
    r0 = *(0x27a0 + r4); // lwz @ 0x806E55B0
    /* mulli r0, r0, 0x30 */ // 0x806E55B4
    r0 = r9 + r0; // 0x806E55B8
    r4 = r0 + r6; // 0x806E55BC
    r4 = *(0x150 + r4); // lwz @ 0x806E55C0
    r4 = *(4 + r4); // lwz @ 0x806E55C4
    r0 = *(8 + r4); // lwz @ 0x806E55C8
    if (==) goto 0x0x806e55f4;
    r0 = *(0 + r3); // lha @ 0x806E55D4
    r4 = *(0 + r4); // lwz @ 0x806E55D8
    if (<=) goto 0x0x806e55f4;
    r4 = *(0x12 + r4); // lha @ 0x806E55E4
    if (<=) goto 0x0x806e55f4;
    *(0 + r3) = r4; // sth @ 0x806E55F0
    r8 = r8 + 1; // 0x806E55F4
    if (counter-- != 0) goto 0x0x806e54f0;
    return;
}