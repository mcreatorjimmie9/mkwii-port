/* Function at 0x8076D048, size=72 bytes */
/* Stack frame: 0 bytes */

void FUN_8076D048(int r3, int r4)
{
    r0 = *(0x44 + r3); // lbz @ 0x8076D048
    if (==) goto 0x0x8076d060;
    /* li r0, 0 */ // 0x8076D054
    *(0x44 + r3) = r0; // stb @ 0x8076D058
    /* b 0x8076d068 */ // 0x8076D05C
    /* li r0, 1 */ // 0x8076D060
    *(0x44 + r3) = r0; // stb @ 0x8076D064
    /* lis r4, 0 */ // 0x8076D068
    /* lfs f0, 0x40(r3) */ // 0x8076D06C
    /* lfs f1, 0(r4) */ // 0x8076D070
    r4 = *(0x46 + r3); // lha @ 0x8076D074
    r0 = *(0x48 + r3); // lha @ 0x8076D078
    /* fsubs f0, f1, f0 */ // 0x8076D07C
    *(0x46 + r3) = r0; // sth @ 0x8076D080
    *(0x48 + r3) = r4; // sth @ 0x8076D084
    /* stfs f0, 0x40(r3) */ // 0x8076D088
    return;
}