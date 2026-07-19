/* Function at 0x805BE738, size=776 bytes */
/* Stack frame: 32 bytes */

int FUN_805BE738(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    r0 = *(0xb50 + r3); // lwz @ 0x805BE73C
    if (!=) goto 0x0x805be780;
    r4 = *(0xb6c + r3); // lbz @ 0x805BE748
    if (>) goto 0x0x805be780;
    r0 = *(0xb54 + r3); // lwz @ 0x805BE754
    if (==) goto 0x0x805be780;
    r0 = *(0xb68 + r3); // lwz @ 0x805BE760
    /* lis r5, 0 */ // 0x805BE764
    r5 = r5 + 0; // 0x805BE768
    r4 = r4 rlwinm 2; // rlwinm
    /* slwi r0, r0, 4 */ // 0x805BE770
    r0 = r5 + r0; // 0x805BE774
    /* lwzx r0, r4, r0 */ // 0x805BE778
    *(0xb48 + r3) = r0; // stw @ 0x805BE77C
    r4 = *(0xb50 + r3); // lwz @ 0x805BE780
    /* li r0, 0 */ // 0x805BE784
    if (<) goto 0x0x805be79c;
    if (>) goto 0x0x805be79c;
    /* li r0, 1 */ // 0x805BE798
    if (==) goto 0x0x805bea38;
    /* li r11, 1 */ // 0x805BE7A4
    /* li r9, 2 */ // 0x805BE7A8
    *(9 + r1) = r9; // stb @ 0x805BE7AC
    /* li r8, 3 */ // 0x805BE7B0
    /* li r7, 4 */ // 0x805BE7B4
    /* li r6, 5 */ // 0x805BE7B8
    *(0xa + r1) = r8; // stb @ 0x805BE7BC
    /* li r4, 6 */ // 0x805BE7C0
    /* li r10, 7 */ // 0x805BE7C4
    /* li r9, 8 */ // 0x805BE7C8
    *(0xb + r1) = r7; // stb @ 0x805BE7CC
    /* li r8, 9 */ // 0x805BE7D0
    /* li r7, 0xa */ // 0x805BE7D4
    *(0xc + r1) = r6; // stb @ 0x805BE7DC
    /* li r6, 0xb */ // 0x805BE7E0
    /* li r12, 1 */ // 0x805BE7E4
    /* li r0, 3 */ // 0x805BE7E8
    *(0xd + r1) = r4; // stb @ 0x805BE7EC
    /* li r4, 0xc */ // 0x805BE7F0
    *(8 + r1) = r11; // stb @ 0x805BE7F4
    *(0xe + r1) = r10; // stb @ 0x805BE7F8
    *(0xf + r1) = r9; // stb @ 0x805BE7FC
    *(0x10 + r1) = r8; // stb @ 0x805BE800
    *(0x11 + r1) = r7; // stb @ 0x805BE804
    *(0x12 + r1) = r6; // stb @ 0x805BE808
    *(0x13 + r1) = r4; // stb @ 0x805BE80C
    /* clrlwi r7, r12, 0x18 */ // 0x805BE810
    /* li r9, 0 */ // 0x805BE814
    /* mtctr r0 */ // 0x805BE818
    /* clrlwi r4, r9, 0x18 */ // 0x805BE81C
    /* mulli r6, r4, 0xf0 */ // 0x805BE820
    r6 = r3 + r6; // 0x805BE824
    r8 = *(0x18 + r6); // lwz @ 0x805BE828
    if (==) goto 0x0x805be848;
    r6 = *(0xe9 + r6); // lbz @ 0x805BE834
    if (!=) goto 0x0x805be848;
    /* stbx r11, r5, r4 */ // 0x805BE840
    r9 = r9 + 1; // 0x805BE848
    /* clrlwi r4, r9, 0x18 */ // 0x805BE84C
    /* mulli r6, r4, 0xf0 */ // 0x805BE850
    r6 = r3 + r6; // 0x805BE854
    r8 = *(0x18 + r6); // lwz @ 0x805BE858
    if (==) goto 0x0x805be878;
    r6 = *(0xe9 + r6); // lbz @ 0x805BE864
    if (!=) goto 0x0x805be878;
    /* stbx r11, r5, r4 */ // 0x805BE870
    r9 = r9 + 1; // 0x805BE878
    /* clrlwi r4, r9, 0x18 */ // 0x805BE87C
    /* mulli r6, r4, 0xf0 */ // 0x805BE880
    r6 = r3 + r6; // 0x805BE884
    r8 = *(0x18 + r6); // lwz @ 0x805BE888
    if (==) goto 0x0x805be8a8;
    r6 = *(0xe9 + r6); // lbz @ 0x805BE894
    if (!=) goto 0x0x805be8a8;
    /* stbx r11, r5, r4 */ // 0x805BE8A0
    r9 = r9 + 1; // 0x805BE8A8
    /* clrlwi r4, r9, 0x18 */ // 0x805BE8AC
    /* mulli r6, r4, 0xf0 */ // 0x805BE8B0
    r6 = r3 + r6; // 0x805BE8B4
    r8 = *(0x18 + r6); // lwz @ 0x805BE8B8
    if (==) goto 0x0x805be8d8;
    r6 = *(0xe9 + r6); // lbz @ 0x805BE8C4
    if (!=) goto 0x0x805be8d8;
    /* stbx r11, r5, r4 */ // 0x805BE8D0
    r9 = r9 + 1; // 0x805BE8D8
    if (counter-- != 0) goto 0x0x805be81c;
    if (<=) goto 0x0x805be810;
    /* li r0, 3 */ // 0x805BE8EC
    /* li r7, 0 */ // 0x805BE8F4
    /* mtctr r0 */ // 0x805BE8F8
    /* clrlwi r0, r7, 0x18 */ // 0x805BE8FC
    /* mulli r5, r0, 0xf0 */ // 0x805BE900
    r5 = r3 + r5; // 0x805BE904
    r6 = *(0x18 + r5); // lwz @ 0x805BE908
    if (==) goto 0x0x805be928;
    r5 = *(0xe9 + r5); // lbz @ 0x805BE914
    if (!=) goto 0x0x805be928;
    /* stbx r11, r4, r0 */ // 0x805BE920
    r7 = r7 + 1; // 0x805BE928
    /* clrlwi r0, r7, 0x18 */ // 0x805BE92C
    /* mulli r5, r0, 0xf0 */ // 0x805BE930
    r5 = r3 + r5; // 0x805BE934
    r6 = *(0x18 + r5); // lwz @ 0x805BE938
    if (==) goto 0x0x805be958;
    r5 = *(0xe9 + r5); // lbz @ 0x805BE944
    if (!=) goto 0x0x805be958;
    /* stbx r11, r4, r0 */ // 0x805BE950
    r7 = r7 + 1; // 0x805BE958
    /* clrlwi r0, r7, 0x18 */ // 0x805BE95C
    /* mulli r5, r0, 0xf0 */ // 0x805BE960
    r5 = r3 + r5; // 0x805BE964
    r6 = *(0x18 + r5); // lwz @ 0x805BE968
    if (==) goto 0x0x805be988;
    r5 = *(0xe9 + r5); // lbz @ 0x805BE974
    if (!=) goto 0x0x805be988;
    /* stbx r11, r4, r0 */ // 0x805BE980
    r7 = r7 + 1; // 0x805BE988
    /* clrlwi r0, r7, 0x18 */ // 0x805BE98C
    /* mulli r5, r0, 0xf0 */ // 0x805BE990
    r5 = r3 + r5; // 0x805BE994
    r6 = *(0x18 + r5); // lwz @ 0x805BE998
    if (==) goto 0x0x805be9b8;
    r5 = *(0xe9 + r5); // lbz @ 0x805BE9A4
    if (!=) goto 0x0x805be9b8;
    /* stbx r11, r4, r0 */ // 0x805BE9B0
    r7 = r7 + 1; // 0x805BE9B8
    if (counter-- != 0) goto 0x0x805be8fc;
    /* li r0, 0 */ // 0x805BE9C0
    r8 = *(8 + r1); // lbz @ 0x805BE9C4
    /* mulli r10, r0, 0xf0 */ // 0x805BE9C8
    r7 = *(9 + r1); // lbz @ 0x805BE9CC
    r6 = *(0xa + r1); // lbz @ 0x805BE9D0
    /* li r0, 6 */ // 0x805BE9D4
    r5 = *(0xb + r1); // lbz @ 0x805BE9D8
    r9 = r3 + r10; // 0x805BE9DC
    *(0xe9 + r9) = r8; // stb @ 0x805BE9E0
    /* mulli r10, r0, 0xf0 */ // 0x805BE9E4
    r4 = *(0xc + r1); // lbz @ 0x805BE9E8
    *(0x1d9 + r9) = r7; // stb @ 0x805BE9EC
    r0 = *(0xd + r1); // lbz @ 0x805BE9F0
    *(0x2c9 + r9) = r6; // stb @ 0x805BE9F4
    r8 = *(0xe + r1); // lbz @ 0x805BE9F8
    *(0x3b9 + r9) = r5; // stb @ 0x805BE9FC
    r7 = *(0xf + r1); // lbz @ 0x805BEA00
    *(0x4a9 + r9) = r4; // stb @ 0x805BEA04
    r6 = *(0x10 + r1); // lbz @ 0x805BEA08
    *(0x599 + r9) = r0; // stb @ 0x805BEA0C
    r9 = r3 + r10; // 0x805BEA10
    r5 = *(0x11 + r1); // lbz @ 0x805BEA14
    *(0xe9 + r9) = r8; // stb @ 0x805BEA18
    r4 = *(0x12 + r1); // lbz @ 0x805BEA1C
    *(0x1d9 + r9) = r7; // stb @ 0x805BEA20
    r0 = *(0x13 + r1); // lbz @ 0x805BEA24
    *(0x2c9 + r9) = r6; // stb @ 0x805BEA28
    *(0x3b9 + r9) = r5; // stb @ 0x805BEA2C
    *(0x4a9 + r9) = r4; // stb @ 0x805BEA30
    *(0x599 + r9) = r0; // stb @ 0x805BEA34
    return;
}