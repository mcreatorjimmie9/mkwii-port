/* Function at 0x8076D190, size=152 bytes */
/* Stack frame: 32 bytes */

void FUN_8076D190(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0x4330 */ // 0x8076D194
    /* lis r7, 0 */ // 0x8076D198
    r0 = *(0x46 + r3); // lha @ 0x8076D19C
    r8 = *(8 + r3); // lwz @ 0x8076D1A0
    /* slwi r4, r0, 4 */ // 0x8076D1A4
    r0 = *(0x48 + r3); // lha @ 0x8076D1A8
    r5 = r8 + r4; // 0x8076D1AC
    *(8 + r1) = r6; // stw @ 0x8076D1B0
    r5 = *(0xc + r5); // lhz @ 0x8076D1B4
    /* lis r4, 0 */ // 0x8076D1B8
    *(0xc + r1) = r5; // stw @ 0x8076D1BC
    /* slwi r0, r0, 4 */ // 0x8076D1C0
    /* lfd f2, 0(r7) */ // 0x8076D1C4
    r5 = r8 + r0; // 0x8076D1C8
    /* lfd f1, 8(r1) */ // 0x8076D1CC
    /* lfs f0, 0(r4) */ // 0x8076D1D0
    /* fsubs f1, f1, f2 */ // 0x8076D1D4
    *(0x10 + r1) = r6; // stw @ 0x8076D1D8
    /* stfs f1, 0x34(r3) */ // 0x8076D1DC
    /* fcmpu cr0, f0, f1 */ // 0x8076D1E0
    r0 = *(0xc + r5); // lhz @ 0x8076D1E4
    *(0x14 + r1) = r0; // stw @ 0x8076D1E8
    /* lfd f0, 0x10(r1) */ // 0x8076D1EC
    /* fsubs f0, f0, f2 */ // 0x8076D1F0
    /* stfs f0, 0x38(r3) */ // 0x8076D1F4
    if (!=) goto 0x0x8076d204;
    /* lfs f0, 0x10(r3) */ // 0x8076D1FC
    /* stfs f0, 0x34(r3) */ // 0x8076D200
    /* lis r4, 0 */ // 0x8076D204
    /* lfs f0, 0x38(r3) */ // 0x8076D208
    /* lfs f1, 0(r4) */ // 0x8076D20C
    /* fcmpu cr0, f1, f0 */ // 0x8076D210
    if (!=) goto 0x0x8076d220;
    /* lfs f0, 0x10(r3) */ // 0x8076D218
    /* stfs f0, 0x38(r3) */ // 0x8076D21C
    return;
}