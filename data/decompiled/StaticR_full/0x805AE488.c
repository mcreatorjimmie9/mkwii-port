/* Function at 0x805AE488, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_805AE488(int r3, int r4, int r5)
{
    r0 = *(0x14 + r3); // lbz @ 0x805AE488
    /* lis r4, 0 */ // 0x805AE48C
    /* lfs f0, 0(r4) */ // 0x805AE490
    /* li r5, 0 */ // 0x805AE494
    /* li r4, 7 */ // 0x805AE498
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r5; // sth @ 0x805AE4A0
    *(6 + r3) = r5; // sth @ 0x805AE4A4
    /* stfs f0, 0xc(r3) */ // 0x805AE4A8
    /* stfs f0, 8(r3) */ // 0x805AE4AC
    *(0x10 + r3) = r4; // stb @ 0x805AE4B0
    *(0x11 + r3) = r4; // stb @ 0x805AE4B4
    *(0x12 + r3) = r5; // stb @ 0x805AE4B8
    *(0x13 + r3) = r5; // stb @ 0x805AE4BC
    *(0x14 + r3) = r0; // stb @ 0x805AE4C0
    return;
}