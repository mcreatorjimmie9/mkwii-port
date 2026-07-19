/* Function at 0x80811AB0, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_80811AB0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x80811AB4
    /* lis r5, 0 */ // 0x80811AB8
    /* lis r4, 0 */ // 0x80811ABC
    r6 = *(0xa0 + r3); // lwz @ 0x80811AC0
    *(8 + r1) = r0; // stw @ 0x80811AC4
    r6 = *(0 + r6); // lwz @ 0x80811AC8
    /* lfd f2, 0(r5) */ // 0x80811ACC
    r0 = *(0x30 + r6); // lha @ 0x80811AD0
    /* lfs f0, 0(r4) */ // 0x80811AD4
    /* xoris r0, r0, 0x8000 */ // 0x80811AD8
    *(0xc + r1) = r0; // stw @ 0x80811ADC
    /* lfd f1, 8(r1) */ // 0x80811AE0
    /* fsubs f1, f1, f2 */ // 0x80811AE4
    /* fmuls f0, f1, f0 */ // 0x80811AE8
    /* stfs f0, 0xb4(r3) */ // 0x80811AEC
    return;
}