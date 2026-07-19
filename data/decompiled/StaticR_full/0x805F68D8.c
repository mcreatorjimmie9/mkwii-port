/* Function at 0x805F68D8, size=104 bytes */
/* Stack frame: 32 bytes */

void FUN_805F68D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x805F68DC
    /* lis r4, 0 */ // 0x805F68E0
    /* lis r7, 0 */ // 0x805F68E4
    r6 = *(0x34 + r3); // lhz @ 0x805F68E8
    /* lfd f1, 0(r4) */ // 0x805F68EC
    r4 = r7 + 0; // 0x805F68F0
    r5 = r6 | 0x20; // 0x805F68F4
    *(0x34 + r3) = r5; // sth @ 0x805F68F8
    r5 = r6 | 0x21; // 0x805F68FC
    r6 = *(0 + r7); // lhz @ 0x805F6900
    *(0xc + r1) = r6; // stw @ 0x805F6904
    *(8 + r1) = r0; // stw @ 0x805F6908
    /* lfd f0, 8(r1) */ // 0x805F690C
    *(0x34 + r3) = r5; // sth @ 0x805F6910
    /* fsubs f0, f0, f1 */ // 0x805F6914
    *(0x10 + r1) = r0; // stw @ 0x805F6918
    /* stfs f0, 8(r3) */ // 0x805F691C
    r0 = *(2 + r4); // lhz @ 0x805F6920
    *(0x14 + r1) = r0; // stw @ 0x805F6924
    /* lfd f0, 0x10(r1) */ // 0x805F6928
    *(0x34 + r3) = r5; // sth @ 0x805F692C
    /* fsubs f0, f0, f1 */ // 0x805F6930
    /* stfs f0, 0xc(r3) */ // 0x805F6934
    return;
}