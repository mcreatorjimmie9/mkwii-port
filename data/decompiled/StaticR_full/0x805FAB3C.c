/* Function at 0x805FAB3C, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805FAB3C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805FAB3C
    /* li r0, 0 */ // 0x805FAB40
    /* lfs f0, 0(r4) */ // 0x805FAB44
    *(0x20 + r3) = r0; // sth @ 0x805FAB48
    /* stfs f0, 0x10(r3) */ // 0x805FAB4C
    /* stfs f0, 0x18(r3) */ // 0x805FAB50
    *(0x1e + r3) = r0; // stb @ 0x805FAB54
    *(0x1f + r3) = r0; // stb @ 0x805FAB58
    return;
}