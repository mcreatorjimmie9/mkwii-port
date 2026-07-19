/* Function at 0x80635460, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80635460(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8063546C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80635474
    r12 = *(0x14 + r12); // lwz @ 0x80635478
    /* mtctr r12 */ // 0x8063547C
    /* bctrl  */ // 0x80635480
    r3 = *(0 + r3); // lwz @ 0x80635484
    /* lfs f1, 0x30(r3) */ // 0x80635488
    /* lfs f2, 0x2c(r3) */ // 0x8063548C
    /* lfs f0, 0x34(r3) */ // 0x80635490
    /* stfs f0, 0x18(r31) */ // 0x80635494
    /* stfs f0, 0x1c(r31) */ // 0x80635498
    r31 = *(0x1c + r1); // lwz @ 0x8063549C
    r0 = *(0x24 + r1); // lwz @ 0x806354A0
    /* stfs f2, 8(r1) */ // 0x806354A4
    /* stfs f1, 0xc(r1) */ // 0x806354A8
    /* stfs f0, 0x10(r1) */ // 0x806354AC
    return;
}