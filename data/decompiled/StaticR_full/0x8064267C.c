/* Function at 0x8064267C, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8064267C(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8064267C
    /* lis r4, 0 */ // 0x80642680
    /* lfs f1, 0(r5) */ // 0x80642684
    /* li r5, 0 */ // 0x80642688
    /* lfs f0, 0(r4) */ // 0x8064268C
    /* li r0, 1 */ // 0x80642690
    *(0x60 + r3) = r5; // stw @ 0x80642694
    /* stfs f1, 0x6c(r3) */ // 0x80642698
    /* stfs f1, 0x70(r3) */ // 0x8064269C
    /* stfs f1, 0x74(r3) */ // 0x806426A0
    /* stfs f0, 0x68(r3) */ // 0x806426A4
    *(0x64 + r3) = r0; // stb @ 0x806426A8
    return;
}