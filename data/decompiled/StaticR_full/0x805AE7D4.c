/* Function at 0x805AE7D4, size=236 bytes */
/* Stack frame: 0 bytes */

void FUN_805AE7D4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r0 = *(0x8c + r3); // lbz @ 0x805AE7D4
    /* lis r6, 0 */ // 0x805AE7D8
    /* lfs f1, 0(r6) */ // 0x805AE7DC
    /* lis r4, 0 */ // 0x805AE7E0
    /* li r9, 0 */ // 0x805AE7E4
    /* li r8, 7 */ // 0x805AE7E8
    /* lfs f0, 0(r4) */ // 0x805AE7EC
    /* lis r11, 0 */ // 0x805AE7F0
    r5 = *(0x4c + r3); // lbz @ 0x805AE7F4
    /* lis r10, 0 */ // 0x805AE7F8
    r7 = *(0x18 + r3); // lbz @ 0x805AE7FC
    /* lis r6, 0 */ // 0x805AE800
    r6 = r6 + 0; // 0x805AE804
    r7 = r7 rlwinm 0; // rlwinm
    r0 = r0 rlwinm 0; // rlwinm
    r4 = r5 rlwinm 0; // rlwinm
    *(0 + r3) = r11; // stw @ 0x805AE81C
    *(4 + r3) = r10; // stw @ 0x805AE820
    *(8 + r3) = r9; // sth @ 0x805AE824
    *(0xa + r3) = r9; // sth @ 0x805AE828
    /* stfs f1, 0x10(r3) */ // 0x805AE82C
    /* stfs f1, 0xc(r3) */ // 0x805AE830
    *(0x14 + r3) = r8; // stb @ 0x805AE834
    *(0x15 + r3) = r8; // stb @ 0x805AE838
    *(0x16 + r3) = r9; // stb @ 0x805AE83C
    *(0x17 + r3) = r9; // stb @ 0x805AE840
    *(0x18 + r3) = r7; // stb @ 0x805AE844
    *(0x1c + r3) = r6; // stw @ 0x805AE848
    *(0x20 + r3) = r9; // sth @ 0x805AE84C
    *(0x22 + r3) = r9; // sth @ 0x805AE850
    /* stfs f1, 0x28(r3) */ // 0x805AE854
    /* stfs f1, 0x24(r3) */ // 0x805AE858
    *(0x34 + r3) = r8; // stb @ 0x805AE85C
    *(0x35 + r3) = r8; // stb @ 0x805AE860
    /* stfs f0, 0x38(r3) */ // 0x805AE864
    /* stfs f0, 0x3c(r3) */ // 0x805AE868
    /* stfs f1, 0x44(r3) */ // 0x805AE86C
    /* stfs f1, 0x40(r3) */ // 0x805AE870
    /* stfs f1, 0x48(r3) */ // 0x805AE874
    *(0x4c + r3) = r4; // stb @ 0x805AE878
    *(0x50 + r3) = r9; // stb @ 0x805AE87C
    *(0x54 + r3) = r8; // stw @ 0x805AE880
    *(0x58 + r3) = r9; // stb @ 0x805AE884
    *(0x5c + r3) = r6; // stw @ 0x805AE888
    *(0x60 + r3) = r9; // sth @ 0x805AE88C
    *(0x62 + r3) = r9; // sth @ 0x805AE890
    /* stfs f1, 0x68(r3) */ // 0x805AE894
    /* stfs f1, 0x64(r3) */ // 0x805AE898
    *(0x74 + r3) = r8; // stb @ 0x805AE89C
    *(0x75 + r3) = r8; // stb @ 0x805AE8A0
    /* stfs f0, 0x78(r3) */ // 0x805AE8A4
    /* stfs f0, 0x7c(r3) */ // 0x805AE8A8
    /* stfs f1, 0x84(r3) */ // 0x805AE8AC
    /* stfs f1, 0x80(r3) */ // 0x805AE8B0
    /* stfs f1, 0x88(r3) */ // 0x805AE8B4
    *(0x8c + r3) = r0; // stb @ 0x805AE8B8
    return;
}