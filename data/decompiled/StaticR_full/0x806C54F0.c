/* Function at 0x806C54F0, size=848 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 22 function(s) */

int FUN_806C54F0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806C5504
    *(0x24 + r1) = r29; // stw @ 0x806C5508
    r0 = *(8 + r3); // lwz @ 0x806C550C
    if (!=) goto 0x0x806c5868;
    r3 = *(0x54 + r3); // lwz @ 0x806C5518
    r0 = r3 + -5; // 0x806C551C
    if (<=) goto 0x0x806c5848;
    if (==) goto 0x0x806c5554;
    if (==) goto 0x0x806c5634;
    if (==) goto 0x0x806c5698;
    if (==) goto 0x0x806c5754;
    if (==) goto 0x0x806c57b4;
    /* b 0x806c5868 */ // 0x806C5550
    /* lis r30, 0 */ // 0x806C5554
    r3 = *(0 + r30); // lwz @ 0x806C5558
    r3 = *(0x98 + r3); // lwz @ 0x806C555C
    r0 = *(0x4c4 + r3); // lwz @ 0x806C5560
    if (!=) goto 0x0x806c5604;
    /* li r0, 0 */ // 0x806C556C
    *(0x10 + r1) = r0; // stw @ 0x806C5570
    *(0xc + r1) = r0; // stw @ 0x806C557C
    *(8 + r1) = r0; // stw @ 0x806C5584
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    if (!=) goto 0x0x806c55e4;
    r0 = *(0x10 + r1); // lwz @ 0x806C5594
    if (!=) goto 0x0x806c55cc;
    r0 = *(0xc + r1); // lwz @ 0x806C55A0
    if (!=) goto 0x0x806c55cc;
    r0 = *(8 + r1); // lwz @ 0x806C55AC
    if (!=) goto 0x0x806c55cc;
    r3 = *(0 + r30); // lwz @ 0x806C55B8
    /* li r0, 2 */ // 0x806C55BC
    r3 = *(0x98 + r3); // lwz @ 0x806C55C0
    *(0x4c4 + r3) = r0; // stw @ 0x806C55C4
    /* b 0x806c5604 */ // 0x806C55C8
    /* lis r3, 0 */ // 0x806C55CC
    /* li r0, 1 */ // 0x806C55D0
    r3 = *(0 + r3); // lwz @ 0x806C55D4
    r3 = *(0x98 + r3); // lwz @ 0x806C55D8
    *(0x4c4 + r3) = r0; // stw @ 0x806C55DC
    /* b 0x806c5604 */ // 0x806C55E0
    if (==) goto 0x0x806c5868;
    if (==) goto 0x0x806c5868;
    r3 = *(0 + r30); // lwz @ 0x806C55F4
    /* li r0, 1 */ // 0x806C55F8
    r3 = *(0x98 + r3); // lwz @ 0x806C55FC
    *(0x4c4 + r3) = r0; // stw @ 0x806C5600
    /* lis r3, 0 */ // 0x806C5604
    r3 = *(0 + r3); // lwz @ 0x806C5608
    r3 = *(0x98 + r3); // lwz @ 0x806C560C
    r0 = *(0x4c4 + r3); // lwz @ 0x806C5610
    if (==) goto 0x0x806c5868;
    /* lis r3, 0 */ // 0x806C561C
    r3 = *(0 + r3); // lwz @ 0x806C5620
    FUN_806FBA08(r3); // bl 0x806FBA08
    /* li r0, 1 */ // 0x806C5628
    *(0x54 + r31) = r0; // stw @ 0x806C562C
    /* b 0x806c5868 */ // 0x806C5630
    /* lis r30, 0 */ // 0x806C5634
    r3 = *(0 + r30); // lwz @ 0x806C5638
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c5868;
    r3 = *(0 + r30); // lwz @ 0x806C5648
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806c5678;
    r3 = *(0 + r30); // lwz @ 0x806C5658
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x806c5678;
    /* lis r3, 0 */ // 0x806C5668
    r3 = *(0 + r3); // lwz @ 0x806C566C
    r3 = *(0x90 + r3); // lwz @ 0x806C5670
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r3, 0 */ // 0x806C5678
    r4 = r31 + 0x5c; // 0x806C567C
    r3 = *(0 + r3); // lwz @ 0x806C5680
    r5 = r31 + 0x29f4; // 0x806C5684
    FUN_806FB498(r3, r4, r5); // bl 0x806FB498
    /* li r0, 2 */ // 0x806C568C
    *(0x54 + r31) = r0; // stw @ 0x806C5690
    /* b 0x806c5868 */ // 0x806C5694
    /* lis r30, 0 */ // 0x806C5698
    r3 = *(0 + r30); // lwz @ 0x806C569C
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c5868;
    r3 = *(0 + r30); // lwz @ 0x806C56AC
    FUN_806F58E8(); // bl 0x806F58E8
    r0 = r3 + -1; // 0x806C56B4
    /* cntlzw r0, r0 */ // 0x806C56B8
    /* rlwinm. r29, r0, 0x1b, 5, 0x1f */ // 0x806C56BC
    if (!=) goto 0x0x806c56e4;
    r3 = *(0 + r30); // lwz @ 0x806C56C4
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x806c56e4;
    /* lis r3, 0 */ // 0x806C56D4
    r3 = *(0 + r3); // lwz @ 0x806C56D8
    r3 = *(0x90 + r3); // lwz @ 0x806C56DC
    FUN_806845A4(r3); // bl 0x806845A4
    if (==) goto 0x0x806c571c;
    r0 = *(0x5c + r31); // lwz @ 0x806C56EC
    if (==) goto 0x0x806c571c;
    /* li r0, 1 */ // 0x806C56F8
    *(0x58 + r31) = r0; // stb @ 0x806C56FC
    /* lis r3, 0 */ // 0x806C5700
    r4 = r31 + 0x5c; // 0x806C5704
    r3 = *(0 + r3); // lwz @ 0x806C5708
    FUN_806FB7F0(r3, r4); // bl 0x806FB7F0
    /* li r0, 3 */ // 0x806C5710
    *(0x54 + r31) = r0; // stw @ 0x806C5714
    /* b 0x806c5868 */ // 0x806C5718
    if (==) goto 0x0x806c5738;
    r0 = *(0x29f4 + r31); // lbz @ 0x806C5724
    if (==) goto 0x0x806c5738;
    /* li r0, 1 */ // 0x806C5730
    *(0x58 + r31) = r0; // stb @ 0x806C5734
    /* lis r3, 0 */ // 0x806C5738
    r4 = r31 + 0x1f0; // 0x806C573C
    r3 = *(0 + r3); // lwz @ 0x806C5740
    FUN_806FB3BC(r3, r4); // bl 0x806FB3BC
    /* li r0, 4 */ // 0x806C5748
    *(0x54 + r31) = r0; // stw @ 0x806C574C
    /* b 0x806c5868 */ // 0x806C5750
    /* lis r30, 0 */ // 0x806C5754
    r3 = *(0 + r30); // lwz @ 0x806C5758
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c5868;
    r3 = *(0 + r30); // lwz @ 0x806C5768
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806c5798;
    r3 = *(0 + r30); // lwz @ 0x806C5778
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x806c5798;
    /* lis r3, 0 */ // 0x806C5788
    r3 = *(0 + r3); // lwz @ 0x806C578C
    r3 = *(0x90 + r3); // lwz @ 0x806C5790
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r3, 0 */ // 0x806C5798
    r4 = r31 + 0x1f0; // 0x806C579C
    r3 = *(0 + r3); // lwz @ 0x806C57A0
    FUN_806FB3BC(r3, r4); // bl 0x806FB3BC
    /* li r0, 4 */ // 0x806C57A8
    *(0x54 + r31) = r0; // stw @ 0x806C57AC
    /* b 0x806c5868 */ // 0x806C57B0
    /* lis r30, 0 */ // 0x806C57B4
    r3 = *(0 + r30); // lwz @ 0x806C57B8
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806c5868;
    r3 = *(0 + r30); // lwz @ 0x806C57C8
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806c57f8;
    r3 = *(0 + r30); // lwz @ 0x806C57D8
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x806c57f8;
    /* lis r3, 0 */ // 0x806C57E8
    r3 = *(0 + r3); // lwz @ 0x806C57EC
    r3 = *(0x90 + r3); // lwz @ 0x806C57F0
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r5, 0 */ // 0x806C57F8
    r0 = *(0x1f0 + r31); // lbz @ 0x806C57FC
    r4 = *(0 + r5); // lwz @ 0x806C5800
    r3 = r31;
    r4 = *(0x98 + r4); // lwz @ 0x806C5808
    *(0x4c0 + r4) = r0; // stb @ 0x806C580C
    r4 = *(0 + r5); // lwz @ 0x806C5810
    r0 = *(0x1f1 + r31); // lbz @ 0x806C5814
    r4 = *(0x98 + r4); // lwz @ 0x806C5818
    *(0x4c1 + r4) = r0; // stb @ 0x806C581C
    r4 = *(0 + r5); // lwz @ 0x806C5820
    r0 = *(0x1f2 + r31); // lbz @ 0x806C5824
    r4 = *(0x98 + r4); // lwz @ 0x806C5828
    *(0x4c2 + r4) = r0; // stb @ 0x806C582C
    r4 = *(0 + r5); // lwz @ 0x806C5830
    r0 = *(0x1f3 + r31); // lbz @ 0x806C5834
    r4 = *(0x98 + r4); // lwz @ 0x806C5838
    *(0x4c3 + r4) = r0; // stb @ 0x806C583C
}