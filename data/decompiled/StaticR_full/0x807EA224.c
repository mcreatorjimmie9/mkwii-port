/* Function at 0x807EA224, size=332 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */

int FUN_807EA224(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807EA22C
    *(0x34 + r1) = r0; // stw @ 0x807EA230
    *(0x2c + r1) = r31; // stw @ 0x807EA234
    r31 = r3;
    r0 = *(0x38 + r3); // lwz @ 0x807EA23C
    *(0x1c + r1) = r0; // stw @ 0x807EA240
    r7 = *(0x30 + r3); // lwz @ 0x807EA244
    /* lfs f1, 0x1c(r1) */ // 0x807EA248
    /* lfs f0, 0xec(r3) */ // 0x807EA24C
    r6 = *(0x34 + r3); // lwz @ 0x807EA250
    /* fsubs f0, f1, f0 */ // 0x807EA254
    *(0x14 + r1) = r7; // stw @ 0x807EA258
    r0 = *(0x2c + r3); // lhz @ 0x807EA25C
    *(0x18 + r1) = r6; // stw @ 0x807EA260
    /* lfs f2, 0x14(r1) */ // 0x807EA264
    r5 = r0 | 1; // 0x807EA268
    /* stfs f0, 0x1c(r1) */ // 0x807EA26C
    /* lfs f3, 0x18(r1) */ // 0x807EA270
    r0 = *(0x1c + r1); // lwz @ 0x807EA274
    *(0x10 + r1) = r0; // stw @ 0x807EA278
    r0 = *(0xb4 + r3); // lwz @ 0x807EA27C
    *(0x2c + r3) = r5; // sth @ 0x807EA280
    /* lfs f1, 0x10(r1) */ // 0x807EA284
    /* stfs f2, 0x30(r3) */ // 0x807EA28C
    /* stfs f3, 0x34(r3) */ // 0x807EA290
    /* stfs f0, 0x38(r3) */ // 0x807EA294
    /* lfs f0, 0(r4) */ // 0x807EA298
    *(8 + r1) = r7; // stw @ 0x807EA29C
    /* fadds f0, f1, f0 */ // 0x807EA2A0
    *(0xc + r1) = r6; // stw @ 0x807EA2A4
    /* stfs f0, 0x10(r1) */ // 0x807EA2A8
    if (>) goto 0x0x807ea2c0;
    r12 = *(0xb0 + r3); // lwzu @ 0x807EA2B0
    r12 = *(0x18 + r12); // lwz @ 0x807EA2B4
    /* mtctr r12 */ // 0x807EA2B8
    /* bctrl  */ // 0x807EA2BC
    r4 = *(0xb8 + r31); // lwz @ 0x807EA2C0
    /* lis r3, 0 */ // 0x807EA2C4
    /* lfs f0, 8(r1) */ // 0x807EA2C8
    r4 = *(0 + r4); // lwz @ 0x807EA2CC
    /* lfs f3, 0x14(r1) */ // 0x807EA2D0
    r0 = *(0x2c + r4); // lhz @ 0x807EA2D4
    /* lfs f1, 0xc(r1) */ // 0x807EA2D8
    r0 = r0 | 1; // 0x807EA2DC
    *(0x2c + r4) = r0; // sth @ 0x807EA2E0
    /* lfs f2, 0x18(r1) */ // 0x807EA2E4
    /* stfs f0, 0x30(r4) */ // 0x807EA2E8
    /* lfs f0, 0x10(r1) */ // 0x807EA2EC
    /* stfs f1, 0x34(r4) */ // 0x807EA2F0
    /* lfs f1, 0x1c(r1) */ // 0x807EA2F4
    /* stfs f0, 0x38(r4) */ // 0x807EA2F8
    /* lfs f0, 0(r3) */ // 0x807EA2FC
    r0 = *(0xb4 + r31); // lwz @ 0x807EA300
    /* fsubs f0, f1, f0 */ // 0x807EA304
    /* stfs f3, 8(r1) */ // 0x807EA308
    /* stfs f2, 0xc(r1) */ // 0x807EA310
    /* stfs f0, 0x10(r1) */ // 0x807EA314
    if (>) goto 0x0x807ea330;
    r12 = *(0xb0 + r31); // lwz @ 0x807EA31C
    r3 = r31 + 0xb0; // 0x807EA320
    r12 = *(0x18 + r12); // lwz @ 0x807EA324
    /* mtctr r12 */ // 0x807EA328
    /* bctrl  */ // 0x807EA32C
    r3 = *(0xb8 + r31); // lwz @ 0x807EA330
    /* lfs f0, 8(r1) */ // 0x807EA334
    r3 = *(4 + r3); // lwz @ 0x807EA338
    /* lfs f1, 0xc(r1) */ // 0x807EA33C
    r0 = *(0x2c + r3); // lhz @ 0x807EA340
    /* lfs f2, 0x10(r1) */ // 0x807EA344
    r0 = r0 | 1; // 0x807EA348
    *(0x2c + r3) = r0; // sth @ 0x807EA34C
    /* stfs f0, 0x30(r3) */ // 0x807EA350
    /* stfs f1, 0x34(r3) */ // 0x807EA354
    /* stfs f2, 0x38(r3) */ // 0x807EA358
    r31 = *(0x2c + r1); // lwz @ 0x807EA35C
    r0 = *(0x34 + r1); // lwz @ 0x807EA360
    return;
}