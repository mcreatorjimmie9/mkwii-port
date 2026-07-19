/* Function at 0x807E7434, size=256 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807E7434(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x807E7440
    /* lis r31, 0 */ // 0x807E7448
    r31 = r31 + 0; // 0x807E744C
    *(0x48 + r1) = r30; // stw @ 0x807E7450
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x807E7458
    /* lis r29, 0 */ // 0x807E745C
    r29 = r29 + 0; // 0x807E7460
    r4 = *(0xb0 + r3); // lwz @ 0x807E7464
    *(0x121 + r3) = r0; // stb @ 0x807E7468
    if (==) goto 0x0x807e7480;
    if (==) goto 0x0x807e7598;
    /* b 0x807e75a8 */ // 0x807E747C
    r0 = *(0xc0 + r3); // lwz @ 0x807E7480
    /* addic. r0, r0, -1 */ // 0x807E7484
    *(0xc0 + r3) = r0; // stw @ 0x807E7488
    if (!=) goto 0x0x807e74a0;
    r12 = *(0 + r3); // lwz @ 0x807E7490
    r12 = *(0x10c + r12); // lwz @ 0x807E7494
    /* mtctr r12 */ // 0x807E7498
    /* bctrl  */ // 0x807E749C
    r3 = *(0xc0 + r30); // lwz @ 0x807E74A0
    r0 = *(0x10c + r30); // lwz @ 0x807E74A4
    if (>) goto 0x0x807e75a8;
    r4 = *(0xc8 + r30); // lwz @ 0x807E74B0
    /* lis r0, 0x4330 */ // 0x807E74B4
    r3 = *(0x10 + r31); // lwz @ 0x807E74B8
    *(0x20 + r1) = r0; // stw @ 0x807E74BC
    r3 = r4 + r3; // 0x807E74C0
    /* lfd f2, 0x60(r29) */ // 0x807E74C4
    /* xoris r0, r3, 0x8000 */ // 0x807E74C8
    *(0x24 + r1) = r0; // stw @ 0x807E74CC
    /* lfs f0, 0x40(r29) */ // 0x807E74D0
    /* lfd f1, 0x20(r1) */ // 0x807E74D4
    *(0xc8 + r30) = r3; // stw @ 0x807E74D8
    /* fsubs f1, f1, f2 */ // 0x807E74DC
    /* fmuls f1, f1, f0 */ // 0x807E74E0
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x2c(r29) */ // 0x807E74E8
    r3 = r30;
    r0 = *(0x2c + r30); // lhz @ 0x807E74F0
    /* li r4, 0x242 */ // 0x807E74F4
    /* fmuls f2, f0, f1 */ // 0x807E74F8
    /* lfs f0, 0xd8(r30) */ // 0x807E74FC
    r0 = r0 | 1; // 0x807E7500
    *(0x2c + r30) = r0; // sth @ 0x807E7504
    /* lfs f1, 0(r29) */ // 0x807E7508
    /* fadds f0, f0, f2 */ // 0x807E750C
    /* stfs f0, 0x34(r30) */ // 0x807E7510
    FUN_808A0AC8(); // bl 0x808A0AC8
    r3 = *(0xc8 + r30); // lwz @ 0x807E7518
    r0 = *(0x10c + r30); // lwz @ 0x807E751C
    if (!=) goto 0x0x807e75a8;
    /* lfs f1, 0x28(r31) */ // 0x807E7528
    r4 = r30 + 0x114; // 0x807E7530
}