/* Function at 0x8091A12C, size=1000 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30 */
/* Calls: 21 function(s) */

int FUN_8091A12C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0x4330 */ // 0x8091A134
    *(0xec + r1) = r31; // stw @ 0x8091A13C
    /* lis r31, 0 */ // 0x8091A140
    r31 = r31 + 0; // 0x8091A144
    *(0xe8 + r1) = r30; // stw @ 0x8091A148
    r30 = r3;
    /* lfd f1, 0xc8(r31) */ // 0x8091A150
    r7 = *(0xa0 + r3); // lwz @ 0x8091A154
    *(0xc8 + r1) = r6; // stw @ 0x8091A158
    r4 = *(0 + r7); // lwz @ 0x8091A15C
    *(0xd0 + r1) = r6; // stw @ 0x8091A160
    r0 = *(0x2a + r4); // lha @ 0x8091A164
    /* xoris r0, r0, 0x8000 */ // 0x8091A168
    *(0xcc + r1) = r0; // stw @ 0x8091A16C
    /* lfd f0, 0xc8(r1) */ // 0x8091A170
    /* fsubs f0, f0, f1 */ // 0x8091A174
    /* stfs f0, 0xb8(r3) */ // 0x8091A178
    r4 = *(0 + r7); // lwz @ 0x8091A17C
    r0 = *(0x2c + r4); // lha @ 0x8091A180
    *(0xbc + r3) = r0; // stw @ 0x8091A184
    r4 = *(0 + r7); // lwz @ 0x8091A188
    r0 = *(0x2e + r4); // lha @ 0x8091A18C
    /* xoris r0, r0, 0x8000 */ // 0x8091A190
    *(0xd4 + r1) = r0; // stw @ 0x8091A194
    /* lfd f0, 0xd0(r1) */ // 0x8091A198
    /* fsubs f0, f0, f1 */ // 0x8091A19C
    /* stfs f0, 0xc0(r3) */ // 0x8091A1A0
    r4 = *(0 + r7); // lwz @ 0x8091A1A4
    r5 = *(0x30 + r4); // lha @ 0x8091A1A8
    *(0xc4 + r3) = r5; // stw @ 0x8091A1AC
    r4 = *(0 + r7); // lwz @ 0x8091A1B4
    r0 = *(0x32 + r4); // lha @ 0x8091A1B8
    *(0xd0 + r3) = r0; // stw @ 0x8091A1BC
    r4 = *(0 + r7); // lwz @ 0x8091A1C0
    r0 = *(0x34 + r4); // lha @ 0x8091A1C4
    *(0xd4 + r3) = r0; // stw @ 0x8091A1C8
    if (!=) goto 0x0x8091a1d8;
    /* lfs f0, 0(r31) */ // 0x8091A1D0
    /* b 0x8091a1f4 */ // 0x8091A1D4
    *(0xdc + r1) = r5; // stw @ 0x8091A1D8
    /* lfd f2, 0xd0(r31) */ // 0x8091A1DC
    *(0xd8 + r1) = r6; // stw @ 0x8091A1E0
    /* lfs f0, 4(r31) */ // 0x8091A1E4
    /* lfd f1, 0xd8(r1) */ // 0x8091A1E8
    /* fsubs f1, f1, f2 */ // 0x8091A1EC
    /* fdivs f0, f0, f1 */ // 0x8091A1F0
    /* stfs f0, 0xc8(r3) */ // 0x8091A1F4
    /* li r4, 0 */ // 0x8091A1F8
    r3 = *(0x20 + r3); // lwz @ 0x8091A1FC
    /* lfs f1, 0(r31) */ // 0x8091A200
    r12 = *(0 + r3); // lwz @ 0x8091A204
    r12 = *(0x10 + r12); // lwz @ 0x8091A208
    /* mtctr r12 */ // 0x8091A20C
    /* bctrl  */ // 0x8091A210
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8091A220
    /* li r5, 1 */ // 0x8091A224
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 0xbc(r1) */ // 0x8091A22C
    r3 = r30;
    /* stfs f0, 0xf0(r30) */ // 0x8091A234
    /* lfs f0, 0xc0(r1) */ // 0x8091A238
    /* stfs f0, 0xf4(r30) */ // 0x8091A23C
    /* lfs f0, 0xc4(r1) */ // 0x8091A240
    /* stfs f0, 0xf8(r30) */ // 0x8091A244
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8091A250
    /* li r5, 0 */ // 0x8091A254
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 0xb0(r1) */ // 0x8091A25C
    /* lis r5, 0 */ // 0x8091A260
    /* stfs f0, 0xfc(r30) */ // 0x8091A264
    r4 = r5 + 0; // 0x8091A268
    r0 = *(0x194 + r30); // lbz @ 0x8091A26C
    /* li r3, 0x41 */ // 0x8091A270
    /* lfs f0, 0xb4(r1) */ // 0x8091A274
    /* stfs f0, 0x100(r30) */ // 0x8091A278
    /* lfs f0, 0(r31) */ // 0x8091A280
    /* lfs f1, 0xb8(r1) */ // 0x8091A284
    /* stfs f1, 0x104(r30) */ // 0x8091A288
    /* lfs f1, 0(r5) */ // 0x8091A28C
    /* stfs f1, 0x10c(r30) */ // 0x8091A290
    /* lfs f1, 4(r4) */ // 0x8091A294
    /* stfs f1, 0x110(r30) */ // 0x8091A298
    /* lfs f1, 8(r4) */ // 0x8091A29C
    /* stfs f1, 0x114(r30) */ // 0x8091A2A0
    /* lfs f1, 0(r5) */ // 0x8091A2A4
    /* stfs f1, 0xe4(r30) */ // 0x8091A2A8
    /* lfs f1, 4(r4) */ // 0x8091A2AC
    /* stfs f1, 0xe8(r30) */ // 0x8091A2B0
    /* lfs f1, 8(r4) */ // 0x8091A2B4
    /* stfs f1, 0xec(r30) */ // 0x8091A2B8
    *(0x190 + r30) = r3; // stw @ 0x8091A2BC
    /* stfs f0, 0x188(r30) */ // 0x8091A2C0
    /* stfs f0, 0x18c(r30) */ // 0x8091A2C4
    if (==) goto 0x0x8091a398;
    /* lis r31, 0 */ // 0x8091A2CC
    /* lfs f1, 0xb4(r30) */ // 0x8091A2D0
    r4 = r31 + 0; // 0x8091A2D8
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = *(0x20 + r30); // lwz @ 0x8091A2E0
    r4 = r4 + 0x18; // 0x8091A2EC
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    /* lfs f0, 0x98(r1) */ // 0x8091A2F4
    /* stfs f0, 0x178(r30) */ // 0x8091A2F8
    r0 = *(0xbc + r30); // lwz @ 0x8091A2FC
    /* lfs f0, 0x9c(r1) */ // 0x8091A300
    /* stfs f0, 0x17c(r30) */ // 0x8091A304
    /* lfs f0, 0xa0(r1) */ // 0x8091A30C
    /* stfs f0, 0x180(r30) */ // 0x8091A310
    if (!=) goto 0x0x8091a320;
    r3 = r30 + 0x178; // 0x8091A318
    /* b 0x8091a35c */ // 0x8091A31C
    /* lfs f1, 0xb4(r30) */ // 0x8091A320
    r4 = r31 + 0; // 0x8091A328
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    r3 = r30;
    FUN_808A1BCC(r3, r4, r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8091A33C
    /* li r5, 3 */ // 0x8091A340
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lfs f3, 0(r3) */ // 0x8091A35C
    /* stfs f3, 0xd8(r30) */ // 0x8091A360
    r0 = *(0x2c + r30); // lhz @ 0x8091A364
    /* lfs f2, 4(r3) */ // 0x8091A368
    /* stfs f2, 0xdc(r30) */ // 0x8091A36C
    r0 = r0 | 1; // 0x8091A370
    /* lfs f0, 0x18c(r30) */ // 0x8091A374
    /* lfs f1, 8(r3) */ // 0x8091A378
    /* fadds f0, f2, f0 */ // 0x8091A37C
    /* stfs f1, 0xe0(r30) */ // 0x8091A380
    *(0x2c + r30) = r0; // sth @ 0x8091A384
    /* stfs f3, 0x30(r30) */ // 0x8091A388
    /* stfs f0, 0x34(r30) */ // 0x8091A38C
    /* stfs f1, 0x38(r30) */ // 0x8091A390
    /* b 0x8091a4b0 */ // 0x8091A394
    /* lis r4, 0 */ // 0x8091A398
    /* lfs f1, 0xc4(r31) */ // 0x8091A39C
    r4 = r4 + 0; // 0x8091A3A4
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r4 = *(0x20 + r30); // lwz @ 0x8091A3AC
    r4 = r4 + 0x18; // 0x8091A3B8
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    /* lfs f0, 0x5c(r1) */ // 0x8091A3C0
    /* stfs f0, 0x178(r30) */ // 0x8091A3C4
    r0 = *(0xbc + r30); // lwz @ 0x8091A3C8
    /* lfs f0, 0x60(r1) */ // 0x8091A3CC
    /* stfs f0, 0x17c(r30) */ // 0x8091A3D0
    /* lfs f0, 0x64(r1) */ // 0x8091A3D8
    /* stfs f0, 0x180(r30) */ // 0x8091A3DC
    if (!=) goto 0x0x8091a3ec;
    r5 = r30 + 0x178; // 0x8091A3E4
    /* b 0x8091a428 */ // 0x8091A3E8
    /* lfs f1, 0xc4(r31) */ // 0x8091A3EC
    r4 = r30 + 0xf0; // 0x8091A3F4
    FUN_805A443C(r5, r3, r4); // bl 0x805A443C
    r3 = r30;
    FUN_808A1BCC(r3, r4, r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8091A408
    /* li r5, 3 */ // 0x8091A40C
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0(r5) */ // 0x8091A428
    /* stfs f0, 0xd8(r30) */ // 0x8091A430
    r4 = r30 + 0xf0; // 0x8091A434
    /* lfs f1, 0xb4(r30) */ // 0x8091A438
    /* lfs f0, 4(r5) */ // 0x8091A43C
    /* stfs f0, 0xdc(r30) */ // 0x8091A440
    /* lfs f0, 0xc4(r31) */ // 0x8091A444
    /* lfs f2, 8(r5) */ // 0x8091A448
    /* fsubs f1, f1, f0 */ // 0x8091A44C
    /* stfs f2, 0xe0(r30) */ // 0x8091A450
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0xd8; // 0x8091A45C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8091A468
    /* lfs f1, 0x18c(r30) */ // 0x8091A46C
    r4 = r4 + 0; // 0x8091A474
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r30); // lhz @ 0x8091A48C
    /* lfs f0, 0x10(r1) */ // 0x8091A490
    /* lfs f1, 0xc(r1) */ // 0x8091A494
    r0 = r0 | 1; // 0x8091A498
    /* lfs f2, 8(r1) */ // 0x8091A49C
    /* stfs f2, 0x30(r30) */ // 0x8091A4A0
    *(0x2c + r30) = r0; // sth @ 0x8091A4A4
    /* stfs f1, 0x34(r30) */ // 0x8091A4A8
    /* stfs f0, 0x38(r30) */ // 0x8091A4AC
    r12 = *(0 + r30); // lwz @ 0x8091A4B0
    r3 = r30;
    /* li r4, 1 */ // 0x8091A4B8
    r12 = *(0x68 + r12); // lwz @ 0x8091A4BC
    /* mtctr r12 */ // 0x8091A4C0
    /* bctrl  */ // 0x8091A4C4
    r3 = r30;
    /* li r4, 0 */ // 0x8091A4CC
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    /* li r4, 0 */ // 0x8091A4D4
    *(0x184 + r30) = r4; // stb @ 0x8091A4D8
    /* lis r3, 0 */ // 0x8091A4DC
    r3 = *(0 + r3); // lwz @ 0x8091A4E0
    r0 = *(0x20 + r3); // lwz @ 0x8091A4E4
    *(0xcc + r30) = r0; // stw @ 0x8091A4E8
    *(0x198 + r30) = r4; // stw @ 0x8091A4EC
    *(0x19c + r30) = r4; // stb @ 0x8091A4F0
    *(0x1a0 + r30) = r4; // stw @ 0x8091A4F4
    *(0x1a4 + r30) = r4; // stb @ 0x8091A4F8
    r31 = *(0xec + r1); // lwz @ 0x8091A4FC
    r30 = *(0xe8 + r1); // lwz @ 0x8091A500
    r0 = *(0xf4 + r1); // lwz @ 0x8091A504
    return;
}