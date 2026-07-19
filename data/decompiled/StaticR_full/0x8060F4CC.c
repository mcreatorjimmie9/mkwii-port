/* Function at 0x8060F4CC, size=1180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 30 function(s) */

int FUN_8060F4CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8060F4DC
    r31 = r31 + 0; // 0x8060F4E0
    *(0x18 + r1) = r30; // stw @ 0x8060F4E4
    *(0x14 + r1) = r29; // stw @ 0x8060F4E8
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060F4F0
    r5 = *(4 + r4); // lwz @ 0x8060F4F4
    r6 = *(0xc + r5); // lwz @ 0x8060F4F8
    /* rlwinm. r0, r6, 0, 0x11, 0x11 */ // 0x8060F4FC
    if (==) goto 0x0x8060f7a0;
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F508
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F510
    /* li r4, 1 */ // 0x8060F514
    r3 = *(0x68 + r3); // lwz @ 0x8060F518
    /* lwzx r3, r3, r0 */ // 0x8060F51C
    *(0x6a + r3) = r4; // stb @ 0x8060F520
    r3 = *(0 + r29); // lwz @ 0x8060F524
    r5 = *(4 + r3); // lwz @ 0x8060F528
    r6 = *(4 + r5); // lwz @ 0x8060F52C
    /* rlwinm. r0, r6, 0, 0xd, 0xd */ // 0x8060F530
    if (==) goto 0x0x8060f74c;
    r0 = *(0x236 + r29); // lha @ 0x8060F538
    if (<=) goto 0x0x8060f68c;
    /* lis r3, 0x80c */ // 0x8060F544
    r4 = *(0xc + r5); // lwz @ 0x8060F548
    r0 = r3 + 0x100; // 0x8060F54C
    /* and. r0, r4, r0 */ // 0x8060F550
    /* li r3, 0 */ // 0x8060F554
    if (!=) goto 0x0x8060f57c;
    /* rlwinm. r0, r6, 0, 0x1b, 0x1b */ // 0x8060F55C
    if (!=) goto 0x0x8060f57c;
    r0 = *(0x14 + r5); // lwz @ 0x8060F564
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060F568
    if (!=) goto 0x0x8060f57c;
    r0 = *(8 + r5); // lwz @ 0x8060F570
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F574
    if (==) goto 0x0x8060f580;
    /* li r3, 1 */ // 0x8060F57C
    if (!=) goto 0x0x8060f694;
    r30 = *(0x240 + r31); // lha @ 0x8060F588
    r3 = r29;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F594
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F59C
    r3 = *(0x68 + r3); // lwz @ 0x8060F5A0
    /* lwzx r3, r3, r0 */ // 0x8060F5A4
    FUN_80733560(r4); // bl 0x80733560
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r29); // lhz @ 0x8060F5B8
    /* li r3, 0 */ // 0x8060F5BC
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F5C0
    if (==) goto 0x0x8060f5d4;
    r0 = *(0x10c + r29); // lha @ 0x8060F5C8
    if (<=) goto 0x0x8060f5f0;
    r0 = *(0x118 + r29); // lhz @ 0x8060F5D4
    /* li r3, 1 */ // 0x8060F5D8
    *(0x10c + r29) = r30; // sth @ 0x8060F5DC
    r0 = r0 | 1; // 0x8060F5E0
    *(0x118 + r29) = r0; // sth @ 0x8060F5E4
    /* lfs f0, 0x3a0(r31) */ // 0x8060F5E8
    /* stfs f0, 0x124(r29) */ // 0x8060F5EC
    if (==) goto 0x0x8060f668;
    r4 = *(0 + r29); // lwz @ 0x8060F5F8
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8060F600
    r0 = *(4 + r4); // lwz @ 0x8060F604
    r0 = r0 | 0x10; // 0x8060F608
    *(4 + r4) = r0; // stw @ 0x8060F60C
    /* lfs f1, 0x124(r29) */ // 0x8060F610
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r29;
    /* li r4, 6 */ // 0x8060F61C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r29;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F62C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F634
    /* clrlwi r4, r30, 0x10 */ // 0x8060F638
    r3 = *(0x68 + r3); // lwz @ 0x8060F63C
    /* lwzx r3, r3, r0 */ // 0x8060F640
    FUN_807336DC(); // bl 0x807336DC
    r3 = r29;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r29;
    /* li r4, 4 */ // 0x8060F658
    /* li r5, 0 */ // 0x8060F65C
    /* li r6, 1 */ // 0x8060F660
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r0 = *(0x240 + r31); // lha @ 0x8060F668
    /* lis r4, 0 */ // 0x8060F66C
    /* lfs f1, 0(r4) */ // 0x8060F670
    r3 = r29;
    *(0x23a + r29) = r0; // sth @ 0x8060F678
    /* li r4, 3 */ // 0x8060F67C
    /* li r5, 1 */ // 0x8060F680
    FUN_8061DC98(r3, r4, r5); // bl 0x8061DC98
    /* b 0x8060f694 */ // 0x8060F688
    r0 = *(0x258 + r31); // lha @ 0x8060F68C
    *(0x238 + r29) = r0; // sth @ 0x8060F690
    r4 = *(0 + r29); // lwz @ 0x8060F694
    /* lis r3, 0 */ // 0x8060F698
    r4 = *(4 + r4); // lwz @ 0x8060F69C
    r0 = *(0xc + r4); // lwz @ 0x8060F6A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060F6A8
    r0 = *(0x254 + r29); // lhz @ 0x8060F6AC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x254 + r29) = r0; // sth @ 0x8060F6B4
    r3 = *(0 + r3); // lwz @ 0x8060F6B8
    r0 = *(0xb78 + r3); // lwz @ 0x8060F6BC
    if (!=) goto 0x0x8060f720;
    r3 = *(0xb70 + r3); // lwz @ 0x8060F6C8
    /* li r4, 0 */ // 0x8060F6CC
    r0 = r3 + -3; // 0x8060F6D0
    if (>) goto 0x0x8060f6f0;
    /* li r3, 1 */ // 0x8060F6DC
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060F6E4
    if (==) goto 0x0x8060f6f0;
    r4 = r3;
    if (==) goto 0x0x8060f720;
    r4 = *(0 + r29); // lwz @ 0x8060F6F8
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8060F700
    r0 = *(8 + r4); // lwz @ 0x8060F704
    r0 = r0 | 0x100; // 0x8060F708
    *(8 + r4) = r0; // stw @ 0x8060F70C
    r0 = *(0x124 + r31); // lha @ 0x8060F710
    *(0x1a8 + r29) = r0; // sth @ 0x8060F714
    FUN_8061E908(); // bl 0x8061E908
    FUN_805FA010(); // bl 0x805FA010
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F728
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F730
    r3 = *(0x68 + r3); // lwz @ 0x8060F734
    /* lwzx r3, r3, r0 */ // 0x8060F738
    FUN_8074257C(r4); // bl 0x8074257C
    r3 = r29;
    /* li r4, 1 */ // 0x8060F744
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r3 = *(0x236 + r29); // lha @ 0x8060F74C
    r0 = r3 + -1; // 0x8060F750
    *(0x236 + r29) = r0; // sth @ 0x8060F754
    /* extsh. r0, r0 */ // 0x8060F758
    if (>=) goto 0x0x8060f768;
    /* li r0, 0 */ // 0x8060F760
    *(0x236 + r29) = r0; // sth @ 0x8060F764
    r0 = *(0x254 + r29); // lhz @ 0x8060F768
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F76C
    if (==) goto 0x0x8060f930;
    r3 = *(0 + r29); // lwz @ 0x8060F774
    r3 = *(4 + r3); // lwz @ 0x8060F778
    r0 = *(4 + r3); // lwz @ 0x8060F77C
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8060F780
    if (==) goto 0x0x8060f930;
    r3 = *(0x258 + r31); // lha @ 0x8060F788
    r0 = *(0x254 + r29); // lhz @ 0x8060F78C
    *(0x236 + r29) = r3; // sth @ 0x8060F790
    r0 = r0 rlwinm 0; // rlwinm
    *(0x254 + r29) = r0; // sth @ 0x8060F798
    /* b 0x8060f930 */ // 0x8060F79C
    r0 = *(0x238 + r3); // lha @ 0x8060F7A0
    if (<=) goto 0x0x8060f920;
    r7 = *(4 + r5); // lwz @ 0x8060F7AC
    /* rlwinm. r0, r7, 0, 0x17, 0x17 */ // 0x8060F7B0
    if (==) goto 0x0x8060f900;
    /* lis r3, 0x80c */ // 0x8060F7B8
    /* li r4, 0 */ // 0x8060F7BC
    r0 = r3 + 0x100; // 0x8060F7C0
    /* and. r0, r6, r0 */ // 0x8060F7C4
    if (!=) goto 0x0x8060f7ec;
    /* rlwinm. r0, r7, 0, 0x1b, 0x1b */ // 0x8060F7CC
    if (!=) goto 0x0x8060f7ec;
    r0 = *(0x14 + r5); // lwz @ 0x8060F7D4
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060F7D8
    if (!=) goto 0x0x8060f7ec;
    r0 = *(8 + r5); // lwz @ 0x8060F7E0
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F7E4
    if (==) goto 0x0x8060f7f0;
    /* li r4, 1 */ // 0x8060F7EC
    if (!=) goto 0x0x8060f8f8;
    r30 = *(0x240 + r31); // lha @ 0x8060F7F8
    r3 = r29;
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F804
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F80C
    r3 = *(0x68 + r3); // lwz @ 0x8060F810
    /* lwzx r3, r3, r0 */ // 0x8060F814
    FUN_80733560(r4); // bl 0x80733560
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r29); // lhz @ 0x8060F828
    /* li r3, 0 */ // 0x8060F82C
    /* clrlwi. r0, r0, 0x1f */ // 0x8060F830
    if (==) goto 0x0x8060f844;
    r0 = *(0x10c + r29); // lha @ 0x8060F838
    if (<=) goto 0x0x8060f860;
    r0 = *(0x118 + r29); // lhz @ 0x8060F844
    /* li r3, 1 */ // 0x8060F848
    *(0x10c + r29) = r30; // sth @ 0x8060F84C
    r0 = r0 | 1; // 0x8060F850
    *(0x118 + r29) = r0; // sth @ 0x8060F854
    /* lfs f0, 0x3a0(r31) */ // 0x8060F858
    /* stfs f0, 0x124(r29) */ // 0x8060F85C
    if (==) goto 0x0x8060f8d8;
    r4 = *(0 + r29); // lwz @ 0x8060F868
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8060F870
    r0 = *(4 + r4); // lwz @ 0x8060F874
    r0 = r0 | 0x10; // 0x8060F878
    *(4 + r4) = r0; // stw @ 0x8060F87C
    /* lfs f1, 0x124(r29) */ // 0x8060F880
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r29;
    /* li r4, 6 */ // 0x8060F88C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r29;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060F89C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060F8A4
    /* clrlwi r4, r30, 0x10 */ // 0x8060F8A8
    r3 = *(0x68 + r3); // lwz @ 0x8060F8AC
    /* lwzx r3, r3, r0 */ // 0x8060F8B0
    FUN_807336DC(); // bl 0x807336DC
    r3 = r29;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r29;
    /* li r4, 4 */ // 0x8060F8C8
    /* li r5, 0 */ // 0x8060F8CC
    /* li r6, 1 */ // 0x8060F8D0
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r0 = *(0x240 + r31); // lha @ 0x8060F8D8
    /* lis r4, 0 */ // 0x8060F8DC
    /* lfs f1, 0(r4) */ // 0x8060F8E0
    r3 = r29;
    *(0x23a + r29) = r0; // sth @ 0x8060F8E8
    /* li r4, 3 */ // 0x8060F8EC
    /* li r5, 1 */ // 0x8060F8F0
    FUN_8061DC98(r3, r4, r5); // bl 0x8061DC98
    /* li r0, 0 */ // 0x8060F8F8
    *(0x238 + r29) = r0; // sth @ 0x8060F8FC
    r3 = *(0x238 + r29); // lha @ 0x8060F900
    r0 = r3 + -1; // 0x8060F904
    *(0x238 + r29) = r0; // sth @ 0x8060F908
    /* extsh. r0, r0 */ // 0x8060F90C
    if (>=) goto 0x0x8060f930;
    /* li r0, 0 */ // 0x8060F914
    *(0x238 + r29) = r0; // sth @ 0x8060F918
    /* b 0x8060f930 */ // 0x8060F91C
    r3 = *(4 + r4); // lwz @ 0x8060F920
    r0 = *(8 + r3); // lwz @ 0x8060F924
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x8060F92C
    r3 = *(0x23a + r29); // lha @ 0x8060F930
    r0 = r3 + -1; // 0x8060F934
    *(0x23a + r29) = r0; // sth @ 0x8060F938
    /* extsh. r0, r0 */ // 0x8060F93C
    if (>=) goto 0x0x8060f94c;
    /* li r0, 0 */ // 0x8060F944
    *(0x23a + r29) = r0; // sth @ 0x8060F948
    r0 = *(0x24 + r1); // lwz @ 0x8060F94C
    r31 = *(0x1c + r1); // lwz @ 0x8060F950
    r30 = *(0x18 + r1); // lwz @ 0x8060F954
    r29 = *(0x14 + r1); // lwz @ 0x8060F958
    return;
}