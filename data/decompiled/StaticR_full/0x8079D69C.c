/* Function at 0x8079D69C, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8079D69C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8079D6A8
    r31 = r3;
    r0 = *(0x175 + r3); // lbz @ 0x8079D6B0
    if (!=) goto 0x0x8079d6c8;
    /* li r0, 0 */ // 0x8079D6BC
    *(0x175 + r3) = r0; // stb @ 0x8079D6C0
    /* b 0x8079d780 */ // 0x8079D6C4
    r12 = *(0 + r4); // lwz @ 0x8079D6C8
    r3 = r4;
    r12 = *(8 + r12); // lwz @ 0x8079D6D0
    /* mtctr r12 */ // 0x8079D6D4
    /* bctrl  */ // 0x8079D6D8
    /* lfs f0, 0(r3) */ // 0x8079D6DC
    /* lis r5, 0 */ // 0x8079D6E0
    /* stfs f0, 0x84(r31) */ // 0x8079D6E4
    r4 = r31 + 0x84; // 0x8079D6E8
    /* lfs f0, 4(r3) */ // 0x8079D6EC
    /* stfs f0, 0x88(r31) */ // 0x8079D6F0
    /* lfs f0, 8(r3) */ // 0x8079D6F4
    /* stfs f0, 0x8c(r31) */ // 0x8079D6F8
    /* lfs f0, 0xc(r3) */ // 0x8079D6FC
    /* stfs f0, 0x90(r31) */ // 0x8079D700
    /* lfs f0, 0x10(r3) */ // 0x8079D704
    /* stfs f0, 0x94(r31) */ // 0x8079D708
    /* lfs f0, 0x14(r3) */ // 0x8079D70C
    /* stfs f0, 0x98(r31) */ // 0x8079D710
    /* lfs f0, 0x18(r3) */ // 0x8079D714
    /* stfs f0, 0x9c(r31) */ // 0x8079D718
    /* lfs f0, 0x1c(r3) */ // 0x8079D71C
    /* stfs f0, 0xa0(r31) */ // 0x8079D720
    /* lfs f0, 0x20(r3) */ // 0x8079D724
    /* stfs f0, 0xa4(r31) */ // 0x8079D728
    /* lfs f0, 0x24(r3) */ // 0x8079D72C
    /* stfs f0, 0xa8(r31) */ // 0x8079D730
    /* lfs f0, 0x28(r3) */ // 0x8079D734
    /* stfs f0, 0xac(r31) */ // 0x8079D738
    /* lfs f0, 0x2c(r3) */ // 0x8079D73C
    /* stfs f0, 0xb0(r31) */ // 0x8079D740
    /* lfs f3, 0xb0(r31) */ // 0x8079D744
    /* lfs f1, 0x90(r31) */ // 0x8079D748
    /* fneg f0, f3 */ // 0x8079D74C
    /* lfs f2, 0xa0(r31) */ // 0x8079D750
    /* stfs f1, 0x144(r31) */ // 0x8079D754
    /* stfs f2, 0x148(r31) */ // 0x8079D758
    /* stfs f0, 0x14c(r31) */ // 0x8079D75C
    r3 = *(0 + r5); // lwz @ 0x8079D760
    /* stfs f1, 8(r1) */ // 0x8079D764
    r3 = r3 + 0x6e4; // 0x8079D768
    /* stfs f2, 0xc(r1) */ // 0x8079D76C
    /* stfs f3, 0x10(r1) */ // 0x8079D770
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 1 */ // 0x8079D778
    *(0x175 + r31) = r0; // stb @ 0x8079D77C
    r0 = *(0x24 + r1); // lwz @ 0x8079D780
    r31 = *(0x1c + r1); // lwz @ 0x8079D784
}