/* Function at 0x8075D104, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8075D104(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8075D10C
    /* li r0, 0 */ // 0x8075D114
    *(0xc + r1) = r31; // stw @ 0x8075D118
    /* lis r31, 0 */ // 0x8075D11C
    r31 = r31 + 0; // 0x8075D120
    *(8 + r1) = r30; // stw @ 0x8075D124
    r30 = r3;
    *(0x1bd + r3) = r4; // stb @ 0x8075D12C
    *(0x220 + r3) = r0; // stb @ 0x8075D130
    *(0x221 + r3) = r0; // stb @ 0x8075D134
    *(0x1c0 + r3) = r0; // stw @ 0x8075D138
    r12 = *(0 + r3); // lwz @ 0x8075D13C
    r12 = *(0x90 + r12); // lwz @ 0x8075D140
    /* mtctr r12 */ // 0x8075D144
    /* bctrl  */ // 0x8075D148
    /* lfs f0, 0x14(r31) */ // 0x8075D14C
    /* lis r4, 0 */ // 0x8075D150
    /* stfs f0, 0x200(r30) */ // 0x8075D154
    /* lis r3, 0 */ // 0x8075D158
    /* lfs f1, 0x74(r31) */ // 0x8075D15C
    /* lfs f0, 0(r4) */ // 0x8075D160
    /* lfs f3, 0(r3) */ // 0x8075D164
    /* fmuls f4, f1, f0 */ // 0x8075D168
    /* lfs f0, 0x180(r30) */ // 0x8075D16C
    /* lfs f2, 0x178(r30) */ // 0x8075D170
    /* lfs f1, 0x17c(r30) */ // 0x8075D174
    /* fdivs f4, f4, f3 */ // 0x8075D178
    /* lfs f5, 0x34(r30) */ // 0x8075D17C
    /* lfs f3, 0x78(r31) */ // 0x8075D180
    /* stfs f0, 0x214(r30) */ // 0x8075D184
    /* stfs f2, 0x20c(r30) */ // 0x8075D188
    /* stfs f1, 0x210(r30) */ // 0x8075D18C
    /* fdivs f0, f3, f4 */ // 0x8075D190
    /* stfs f4, 0x208(r30) */ // 0x8075D194
    /* stfs f5, 0x1c4(r30) */ // 0x8075D198
    /* stfs f0, 0x204(r30) */ // 0x8075D19C
    r31 = *(0xc + r1); // lwz @ 0x8075D1A0
    r30 = *(8 + r1); // lwz @ 0x8075D1A4
    r0 = *(0x14 + r1); // lwz @ 0x8075D1A8
    return;
}