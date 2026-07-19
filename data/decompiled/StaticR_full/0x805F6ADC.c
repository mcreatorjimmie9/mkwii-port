/* Function at 0x805F6ADC, size=124 bytes */
/* Stack frame: 32 bytes */

void FUN_805F6ADC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0x4330 */ // 0x805F6AE0
    /* lis r4, 0 */ // 0x805F6AE4
    /* lis r7, 0 */ // 0x805F6AE8
    r4 = *(0 + r4); // lwz @ 0x805F6AEC
    /* lis r5, 0 */ // 0x805F6AF0
    r0 = *(0x34 + r3); // lhz @ 0x805F6AF4
    r7 = r7 + 0; // 0x805F6AF8
    /* mulli r8, r4, 0xc */ // 0x805F6AFC
    /* lfd f1, 0(r5) */ // 0x805F6B00
    /* lis r4, 0 */ // 0x805F6B04
    *(8 + r1) = r6; // stw @ 0x805F6B08
    /* lfs f3, 0(r4) */ // 0x805F6B0C
    r0 = r0 | 1; // 0x805F6B10
    r5 = r7 + r8; // 0x805F6B14
    /* lhzx r7, r7, r8 */ // 0x805F6B18
    r5 = *(2 + r5); // lhz @ 0x805F6B1C
    *(0xc + r1) = r7; // stw @ 0x805F6B20
    /* lfd f0, 8(r1) */ // 0x805F6B24
    *(0x14 + r1) = r5; // stw @ 0x805F6B28
    /* fsubs f2, f0, f1 */ // 0x805F6B2C
    *(0x10 + r1) = r6; // stw @ 0x805F6B30
    /* lfd f0, 0x10(r1) */ // 0x805F6B34
    /* stfs f3, 0x40(r3) */ // 0x805F6B38
    /* fsubs f0, f0, f1 */ // 0x805F6B3C
    /* stfs f3, 0x44(r3) */ // 0x805F6B40
    /* stfs f2, 8(r3) */ // 0x805F6B44
    *(0x34 + r3) = r0; // sth @ 0x805F6B48
    /* stfs f0, 0xc(r3) */ // 0x805F6B4C
    return;
}