/* Function at 0x805C55AC, size=436 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805C55AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805C55B4
    *(0x14 + r1) = r0; // stw @ 0x805C55B8
    r4 = *(0 + r3); // lwz @ 0x805C55BC
    r3 = *(0x20 + r4); // lwz @ 0x805C55C0
    if (==) goto 0x0x805c55d4;
    r3 = *(4 + r3); // lhz @ 0x805C55CC
    /* b 0x805c55d8 */ // 0x805C55D0
    /* li r3, 0 */ // 0x805C55D4
    /* neg r0, r3 */ // 0x805C55D8
    r0 = r0 | r3; // 0x805C55DC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C55E0
    if (==) goto 0x0x805c560c;
    r3 = *(0x1c + r4); // lwz @ 0x805C55E8
    if (==) goto 0x0x805c55fc;
    r3 = *(4 + r3); // lhz @ 0x805C55F4
    /* b 0x805c5600 */ // 0x805C55F8
    /* li r3, 0 */ // 0x805C55FC
    /* neg r0, r3 */ // 0x805C5600
    r0 = r0 | r3; // 0x805C5604
    /* srwi r0, r0, 0x1f */ // 0x805C5608
    if (!=) goto 0x0x805c561c;
    /* li r3, 0 */ // 0x805C5614
    /* b 0x805c5750 */ // 0x805C5618
    /* lis r3, 0 */ // 0x805C561C
    r3 = *(0 + r3); // lwz @ 0x805C5620
    r0 = *(0xb90 + r3); // lwz @ 0x805C5624
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805C5628
    if (==) goto 0x0x805c5668;
    /* li r4, 0 */ // 0x805C5630
    FUN_805C14C8(r4); // bl 0x805C14C8
    /* extsb. r0, r3 */ // 0x805C5638
    if (>=) goto 0x0x805c5648;
    /* li r3, 0 */ // 0x805C5640
    /* b 0x805c5750 */ // 0x805C5644
    /* lis r4, 0 */ // 0x805C5648
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x805C5650
    r3 = *(0xc + r3); // lwz @ 0x805C5654
    /* lwzx r3, r3, r0 */ // 0x805C5658
    r0 = *(0x38 + r3); // lwz @ 0x805C565C
    r3 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805c5750 */ // 0x805C5664
    r6 = *(0x24 + r3); // lbz @ 0x805C5668
    /* li r9, 0 */ // 0x805C566C
    /* li r10, 0 */ // 0x805C5670
    if (!=) goto 0x0x805c5698;
    /* lis r3, 0 */ // 0x805C567C
    r3 = *(0 + r3); // lwz @ 0x805C5680
    r3 = *(0xc + r3); // lwz @ 0x805C5684
    r3 = *(0 + r3); // lwz @ 0x805C5688
    r0 = *(0x38 + r3); // lwz @ 0x805C568C
    r3 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x805c5750 */ // 0x805C5694
    /* lis r4, 0 */ // 0x805C5698
    r7 = r3 + 0x28; // 0x805C569C
    r8 = *(0 + r4); // lwz @ 0x805C56A0
    /* li r11, 0 */ // 0x805C56A4
    /* mtctr r6 */ // 0x805C56A8
    if (<=) goto 0x0x805c574c;
    /* subf r0, r11, r6 */ // 0x805C56B4
    r5 = *(0x18 + r8); // lwz @ 0x805C56B8
    /* clrlwi r0, r0, 0x18 */ // 0x805C56BC
    r4 = *(0xc + r8); // lwz @ 0x805C56C0
    r5 = r5 + r0; // 0x805C56C4
    /* li r12, 0 */ // 0x805C56C8
    r5 = *(-1 + r5); // lbz @ 0x805C56CC
    /* slwi r0, r5, 2 */ // 0x805C56D0
    /* lwzx r4, r4, r0 */ // 0x805C56D4
    r0 = *(0x38 + r4); // lwz @ 0x805C56D8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C56DC
    if (!=) goto 0x0x805c5734;
    r4 = *(0xb74 + r3); // lwz @ 0x805C56E4
    r0 = r4 + -2; // 0x805C56E8
    if (>) goto 0x0x805c56fc;
    /* li r12, 1 */ // 0x805C56F4
    /* b 0x805c5734 */ // 0x805C56F8
    /* mulli r0, r5, 0xf0 */ // 0x805C56FC
    r9 = r9 + 1; // 0x805C5700
    r4 = r7 + r0; // 0x805C5704
    r0 = *(0x10 + r4); // lwz @ 0x805C5708
    if (!=) goto 0x0x805c5718;
    /* li r10, 1 */ // 0x805C5714
    /* li r12, 0 */ // 0x805C571C
    if (==) goto 0x0x805c5734;
    /* clrlwi r0, r9, 0x18 */ // 0x805C5724
    if (<=) goto 0x0x805c5734;
    /* li r12, 1 */ // 0x805C5730
    if (==) goto 0x0x805c5744;
    /* li r3, 0 */ // 0x805C573C
    /* b 0x805c5750 */ // 0x805C5740
    if (counter-- != 0) goto 0x0x805c56b4;
    /* li r3, 1 */ // 0x805C574C
    r0 = *(0x14 + r1); // lwz @ 0x805C5750
    return;
}