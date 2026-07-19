/* Function at 0x8070F3E0, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8070F3E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8070F3E8
    *(0x14 + r1) = r0; // stw @ 0x8070F3EC
    *(0xc + r1) = r31; // stw @ 0x8070F3F0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8070F3F8
    r12 = *(0x130 + r12); // lwz @ 0x8070F3FC
    /* mtctr r12 */ // 0x8070F400
    /* bctrl  */ // 0x8070F404
    r0 = *(0x2c + r31); // lhz @ 0x8070F408
    /* lfs f2, 0x34(r31) */ // 0x8070F40C
    /* lfs f0, 0x1a8(r31) */ // 0x8070F410
    r0 = r0 | 8; // 0x8070F414
    *(0x2c + r31) = r0; // sth @ 0x8070F418
    /* fsubs f2, f2, f0 */ // 0x8070F41C
    /* lfs f0, 0x1b0(r31) */ // 0x8070F420
    r3 = *(0x15c + r31); // lwz @ 0x8070F424
    /* stfs f1, 0x3c(r31) */ // 0x8070F428
    /* fadds f0, f0, f2 */ // 0x8070F42C
    /* stfs f1, 0x40(r31) */ // 0x8070F430
    /* stfs f1, 0x44(r31) */ // 0x8070F434
    r0 = *(0x2c + r3); // lhz @ 0x8070F438
    r0 = r0 | 1; // 0x8070F43C
    *(0x2c + r3) = r0; // sth @ 0x8070F440
    /* stfs f0, 0x34(r3) */ // 0x8070F444
    r3 = *(0x15c + r31); // lwz @ 0x8070F448
    /* lfs f0, 0x168(r31) */ // 0x8070F44C
    r0 = *(0x2c + r3); // lhz @ 0x8070F450
    r0 = r0 | 8; // 0x8070F454
    *(0x2c + r3) = r0; // sth @ 0x8070F458
    /* stfs f0, 0x3c(r3) */ // 0x8070F45C
    /* stfs f0, 0x40(r3) */ // 0x8070F460
    /* stfs f0, 0x44(r3) */ // 0x8070F464
    r31 = *(0xc + r1); // lwz @ 0x8070F468
    r0 = *(0x14 + r1); // lwz @ 0x8070F46C
    return;
}