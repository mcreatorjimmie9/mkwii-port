/* Function at 0x8090B7B4, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8090B7B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8090B7BC
    *(0x14 + r1) = r0; // stw @ 0x8090B7C0
    *(0xc + r1) = r31; // stw @ 0x8090B7C4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8090B7CC
    r12 = *(0x12c + r12); // lwz @ 0x8090B7D0
    /* mtctr r12 */ // 0x8090B7D4
    /* bctrl  */ // 0x8090B7D8
    r4 = *(0x2c + r31); // lhz @ 0x8090B7DC
    /* li r0, 0 */ // 0x8090B7E0
    *(0x54 + r31) = r0; // stb @ 0x8090B7E4
    r0 = r4 | 4; // 0x8090B7E8
    *(0x2c + r31) = r0; // sth @ 0x8090B7EC
    /* lfs f0, 0(r3) */ // 0x8090B7F0
    /* stfs f0, 0x58(r31) */ // 0x8090B7F4
    /* lfs f0, 4(r3) */ // 0x8090B7F8
    /* stfs f0, 0x5c(r31) */ // 0x8090B7FC
    /* lfs f0, 8(r3) */ // 0x8090B800
    /* stfs f0, 0x60(r31) */ // 0x8090B804
    /* lfs f0, 0xc(r3) */ // 0x8090B808
    /* stfs f0, 0x64(r31) */ // 0x8090B80C
    /* lfs f0, 0x10(r3) */ // 0x8090B810
    /* stfs f0, 0x68(r31) */ // 0x8090B814
    /* lfs f0, 0x14(r3) */ // 0x8090B818
    /* stfs f0, 0x6c(r31) */ // 0x8090B81C
    /* lfs f0, 0x18(r3) */ // 0x8090B820
    /* stfs f0, 0x70(r31) */ // 0x8090B824
    /* lfs f0, 0x1c(r3) */ // 0x8090B828
    /* stfs f0, 0x74(r31) */ // 0x8090B82C
    /* lfs f0, 0x20(r3) */ // 0x8090B830
    /* stfs f0, 0x78(r31) */ // 0x8090B834
    /* lfs f0, 0x24(r3) */ // 0x8090B838
    /* stfs f0, 0x7c(r31) */ // 0x8090B83C
    /* lfs f0, 0x28(r3) */ // 0x8090B840
    /* stfs f0, 0x80(r31) */ // 0x8090B844
    /* lfs f0, 0x2c(r3) */ // 0x8090B848
    /* stfs f0, 0x84(r31) */ // 0x8090B84C
    /* lfs f0, 0xc(r3) */ // 0x8090B850
    /* stfs f0, 0x30(r31) */ // 0x8090B854
    /* lfs f0, 0x1c(r3) */ // 0x8090B858
    /* stfs f0, 0x34(r31) */ // 0x8090B85C
    /* lfs f0, 0x2c(r3) */ // 0x8090B860
    /* stfs f0, 0x38(r31) */ // 0x8090B864
    r31 = *(0xc + r1); // lwz @ 0x8090B868
    r0 = *(0x14 + r1); // lwz @ 0x8090B86C
    return;
}