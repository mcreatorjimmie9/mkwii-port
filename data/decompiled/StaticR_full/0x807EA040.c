/* Function at 0x807EA040, size=484 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */

int FUN_807EA040(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807EA054
    /* lis r30, 0 */ // 0x807EA058
    r30 = r30 + 0; // 0x807EA05C
    r3 = *(0x20 + r3); // lwz @ 0x807EA060
    r12 = *(0 + r3); // lwz @ 0x807EA064
    r12 = *(0x14 + r12); // lwz @ 0x807EA068
    /* mtctr r12 */ // 0x807EA06C
    /* bctrl  */ // 0x807EA070
    if (!=) goto 0x0x807ea0e8;
    r3 = *(0x20 + r31); // lwz @ 0x807EA07C
    r0 = *(0xe4 + r31); // lbz @ 0x807EA080
    /* lfs f2, 0xe8(r31) */ // 0x807EA084
    /* lfs f1, 0x20(r3) */ // 0x807EA088
    /* lfs f0, 0x70(r30) */ // 0x807EA090
    /* fsubs f1, f2, f1 */ // 0x807EA094
    /* fdivs f0, f1, f0 */ // 0x807EA098
    /* stfs f0, 0xec(r31) */ // 0x807EA09C
    if (==) goto 0x0x807ea0b0;
    /* lfs f0, 0x74(r30) */ // 0x807EA0A4
    /* stfs f0, 0xfc(r31) */ // 0x807EA0A8
    /* b 0x807ea0b8 */ // 0x807EA0AC
    /* lfs f0, 0x34(r30) */ // 0x807EA0B0
    /* stfs f0, 0xfc(r31) */ // 0x807EA0B4
    /* li r5, 0 */ // 0x807EA0B8
    /* li r0, 5 */ // 0x807EA0BC
    *(0x100 + r31) = r5; // stw @ 0x807EA0C0
    /* li r4, 0 */ // 0x807EA0C4
    r3 = *(0x20 + r31); // lwz @ 0x807EA0C8
    *(0xbc + r31) = r0; // stw @ 0x807EA0CC
    /* lfs f1, 0(r30) */ // 0x807EA0D0
    *(0xe4 + r31) = r5; // stb @ 0x807EA0D4
    r12 = *(0 + r3); // lwz @ 0x807EA0D8
    r12 = *(0x10 + r12); // lwz @ 0x807EA0DC
    /* mtctr r12 */ // 0x807EA0E0
    /* bctrl  */ // 0x807EA0E4
    r5 = *(0x20 + r31); // lwz @ 0x807EA0E8
    /* lis r3, 0 */ // 0x807EA0EC
    r0 = *(0x2c + r31); // lhz @ 0x807EA0F0
    r4 = *(0x20 + r5); // lwz @ 0x807EA0F4
    *(0x1c + r1) = r4; // stw @ 0x807EA0F8
    r4 = r0 | 1; // 0x807EA0FC
    r6 = *(0x18 + r5); // lwz @ 0x807EA100
    r5 = *(0x1c + r5); // lwz @ 0x807EA104
    /* lfs f0, 0xe8(r31) */ // 0x807EA108
    *(0x14 + r1) = r6; // stw @ 0x807EA10C
    r0 = *(0xb4 + r31); // lwz @ 0x807EA110
    *(0x18 + r1) = r5; // stw @ 0x807EA114
    /* lfs f2, 0x14(r1) */ // 0x807EA118
    /* stfs f0, 0x1c(r1) */ // 0x807EA120
    /* lfs f3, 0x18(r1) */ // 0x807EA124
    r0 = *(0x1c + r1); // lwz @ 0x807EA128
    *(0x10 + r1) = r0; // stw @ 0x807EA12C
    *(0x2c + r31) = r4; // sth @ 0x807EA130
    /* lfs f1, 0x10(r1) */ // 0x807EA134
    /* stfs f2, 0x30(r31) */ // 0x807EA138
    /* stfs f3, 0x34(r31) */ // 0x807EA13C
    /* stfs f0, 0x38(r31) */ // 0x807EA140
    /* lfs f0, 0(r3) */ // 0x807EA144
    *(8 + r1) = r6; // stw @ 0x807EA148
    /* fadds f0, f1, f0 */ // 0x807EA14C
    *(0xc + r1) = r5; // stw @ 0x807EA150
    /* stfs f0, 0x10(r1) */ // 0x807EA154
    if (>) goto 0x0x807ea170;
    r12 = *(0xb0 + r31); // lwz @ 0x807EA15C
    r3 = r31 + 0xb0; // 0x807EA160
    r12 = *(0x18 + r12); // lwz @ 0x807EA164
    /* mtctr r12 */ // 0x807EA168
    /* bctrl  */ // 0x807EA16C
    r4 = *(0xb8 + r31); // lwz @ 0x807EA170
    /* lis r3, 0 */ // 0x807EA174
    /* lfs f0, 8(r1) */ // 0x807EA178
    r4 = *(0 + r4); // lwz @ 0x807EA17C
    /* lfs f3, 0x14(r1) */ // 0x807EA180
    r0 = *(0x2c + r4); // lhz @ 0x807EA184
    /* lfs f1, 0xc(r1) */ // 0x807EA188
    r0 = r0 | 1; // 0x807EA18C
    *(0x2c + r4) = r0; // sth @ 0x807EA190
    /* lfs f2, 0x18(r1) */ // 0x807EA194
    /* stfs f0, 0x30(r4) */ // 0x807EA198
    /* lfs f0, 0x10(r1) */ // 0x807EA19C
    /* stfs f1, 0x34(r4) */ // 0x807EA1A0
    /* lfs f1, 0x1c(r1) */ // 0x807EA1A4
    /* stfs f0, 0x38(r4) */ // 0x807EA1A8
    /* lfs f0, 0(r3) */ // 0x807EA1AC
    r0 = *(0xb4 + r31); // lwz @ 0x807EA1B0
    /* fsubs f0, f1, f0 */ // 0x807EA1B4
    /* stfs f3, 8(r1) */ // 0x807EA1B8
    /* stfs f2, 0xc(r1) */ // 0x807EA1C0
    /* stfs f0, 0x10(r1) */ // 0x807EA1C4
    if (>) goto 0x0x807ea1e0;
    r12 = *(0xb0 + r31); // lwz @ 0x807EA1CC
    r3 = r31 + 0xb0; // 0x807EA1D0
    r12 = *(0x18 + r12); // lwz @ 0x807EA1D4
    /* mtctr r12 */ // 0x807EA1D8
    /* bctrl  */ // 0x807EA1DC
    r3 = *(0xb8 + r31); // lwz @ 0x807EA1E0
    /* lfs f0, 8(r1) */ // 0x807EA1E4
    r3 = *(4 + r3); // lwz @ 0x807EA1E8
    /* lfs f1, 0xc(r1) */ // 0x807EA1EC
    r0 = *(0x2c + r3); // lhz @ 0x807EA1F0
    /* lfs f2, 0x10(r1) */ // 0x807EA1F4
    r0 = r0 | 1; // 0x807EA1F8
    *(0x2c + r3) = r0; // sth @ 0x807EA1FC
    /* stfs f0, 0x30(r3) */ // 0x807EA200
    /* stfs f1, 0x34(r3) */ // 0x807EA204
    /* stfs f2, 0x38(r3) */ // 0x807EA208
    r31 = *(0x2c + r1); // lwz @ 0x807EA20C
    r30 = *(0x28 + r1); // lwz @ 0x807EA210
    r0 = *(0x34 + r1); // lwz @ 0x807EA214
    return;
}