/* Function at 0x807FF444, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_807FF444(int r3, int r4, int r5)
{
    /* lfs f0, 0(r4) */ // 0x807FF444
    /* li r0, 1 */ // 0x807FF448
    /* stfs f0, 0x1a0(r3) */ // 0x807FF44C
    /* lfs f0, 4(r4) */ // 0x807FF450
    /* stfs f0, 0x1a4(r3) */ // 0x807FF454
    /* lfs f0, 8(r4) */ // 0x807FF458
    /* stfs f0, 0x1a8(r3) */ // 0x807FF45C
    /* lfs f0, 0(r5) */ // 0x807FF460
    /* stfs f0, 0x1ac(r3) */ // 0x807FF464
    /* lfs f0, 4(r5) */ // 0x807FF468
    /* stfs f0, 0x1b0(r3) */ // 0x807FF46C
    /* lfs f0, 8(r5) */ // 0x807FF470
    /* stfs f0, 0x1b4(r3) */ // 0x807FF474
    *(0x1b8 + r3) = r0; // stb @ 0x807FF478
    return;
}