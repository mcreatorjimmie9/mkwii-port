/* Function at 0x8083D0E4, size=92 bytes */
/* Stack frame: 16 bytes */

void FUN_8083D0E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* xoris r4, r4, 0x8000 */ // 0x8083D0E8
    /* lis r0, 0x4330 */ // 0x8083D0EC
    /* lis r5, 0 */ // 0x8083D0F0
    *(0xc + r1) = r4; // stw @ 0x8083D0F4
    /* lis r6, 0 */ // 0x8083D0F8
    /* lfd f1, 0(r5) */ // 0x8083D0FC
    *(8 + r1) = r0; // stw @ 0x8083D100
    r4 = *(0xa4 + r3); // lwz @ 0x8083D104
    /* lfd f0, 8(r1) */ // 0x8083D108
    /* fsubs f0, f0, f1 */ // 0x8083D10C
    /* stfs f0, 0x1a0(r3) */ // 0x8083D110
    r5 = *(0 + r6); // lwzu @ 0x8083D114
    r0 = *(4 + r6); // lwz @ 0x8083D118
    *(0x178 + r3) = r0; // stw @ 0x8083D11C
    *(0x174 + r3) = r5; // stw @ 0x8083D120
    r0 = *(8 + r6); // lwz @ 0x8083D124
    *(0x17c + r3) = r0; // stw @ 0x8083D128
    r0 = *(0x20 + r4); // lwz @ 0x8083D12C
    r0 = r0 | 0x10; // 0x8083D130
    *(0x20 + r4) = r0; // stw @ 0x8083D134
    return;
}