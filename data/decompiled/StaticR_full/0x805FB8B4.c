/* Function at 0x805FB8B4, size=156 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */

int FUN_805FB8B4(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x805FB8C0
    r31 = r4;
    r12 = *(0xc + r3); // lwz @ 0x805FB8CC
    r12 = *(0x44 + r12); // lwz @ 0x805FB8D0
    /* mtctr r12 */ // 0x805FB8D4
    /* bctrl  */ // 0x805FB8D8
    /* lfs f0, 8(r1) */ // 0x805FB8DC
    /* stfs f0, 0x1c(r31) */ // 0x805FB8E0
    /* lfs f0, 0xc(r1) */ // 0x805FB8E4
    /* stfs f0, 0x20(r31) */ // 0x805FB8E8
    /* lfs f0, 0x10(r1) */ // 0x805FB8EC
    /* stfs f0, 0x24(r31) */ // 0x805FB8F0
    /* lfs f0, 0x14(r1) */ // 0x805FB8F4
    /* stfs f0, 0x28(r31) */ // 0x805FB8F8
    /* lfs f0, 0x18(r1) */ // 0x805FB8FC
    /* stfs f0, 0x2c(r31) */ // 0x805FB900
    /* lfs f0, 0x1c(r1) */ // 0x805FB904
    /* stfs f0, 0x30(r31) */ // 0x805FB908
    /* lfs f0, 0x20(r1) */ // 0x805FB90C
    /* stfs f0, 0x34(r31) */ // 0x805FB910
    /* lfs f0, 0x24(r1) */ // 0x805FB914
    /* stfs f0, 0x38(r31) */ // 0x805FB918
    /* lfs f0, 0x28(r1) */ // 0x805FB91C
    /* stfs f0, 0x3c(r31) */ // 0x805FB920
    /* lfs f0, 0x2c(r1) */ // 0x805FB924
    /* stfs f0, 0x40(r31) */ // 0x805FB928
    /* lfs f0, 0x30(r1) */ // 0x805FB92C
    /* stfs f0, 0x44(r31) */ // 0x805FB930
    /* lfs f0, 0x34(r1) */ // 0x805FB934
    /* stfs f0, 0x48(r31) */ // 0x805FB938
    r31 = *(0x3c + r1); // lwz @ 0x805FB93C
    r0 = *(0x44 + r1); // lwz @ 0x805FB940
    return;
}