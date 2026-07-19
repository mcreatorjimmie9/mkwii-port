/* Function at 0x806426B0, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_806426B0(int r3, int r4, int r5)
{
    /* li r0, 1 */ // 0x806426B0
    *(0x60 + r3) = r0; // stw @ 0x806426B4
    /* lis r4, 0 */ // 0x806426B8
    /* lis r5, 0 */ // 0x806426BC
    /* lfs f2, 0(r4) */ // 0x806426C0
    /* lis r4, 0 */ // 0x806426C4
    /* lfs f1, 0(r5) */ // 0x806426C8
    /* lfs f0, 0(r4) */ // 0x806426CC
    /* stfs f1, 0x6c(r3) */ // 0x806426D0
    /* stfs f2, 0x70(r3) */ // 0x806426D4
    /* stfs f1, 0x74(r3) */ // 0x806426D8
    /* stfs f0, 0x68(r3) */ // 0x806426DC
    *(0x64 + r3) = r0; // stb @ 0x806426E0
    return;
}