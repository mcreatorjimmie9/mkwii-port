/* Function at 0x807FF02C, size=296 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807FF02C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807FF040
    r31 = r31 + 0; // 0x807FF044
    *(0x28 + r1) = r30; // stw @ 0x807FF048
    *(0x24 + r1) = r29; // stw @ 0x807FF04C
    r29 = r3;
    r5 = *(0x104 + r3); // lwz @ 0x807FF054
    r30 = *(0x10 + r5); // lwz @ 0x807FF058
    r3 = *(0x6c + r30); // lwz @ 0x807FF05C
    if (==) goto 0x0x807ff078;
    if (==) goto 0x0x807ff094;
    if (==) goto 0x0x807ff0b0;
    /* b 0x807ff0c8 */ // 0x807FF074
    /* lfs f0, 0x30(r31) */ // 0x807FF078
    /* stfs f0, 0x64(r3) */ // 0x807FF07C
    /* lfs f0, 0x34(r31) */ // 0x807FF080
    /* stfs f0, 0x68(r3) */ // 0x807FF084
    /* lfs f0, 0x38(r31) */ // 0x807FF088
    /* stfs f0, 0x6c(r3) */ // 0x807FF08C
    /* b 0x807ff0c8 */ // 0x807FF090
    /* lfs f0, 0(r31) */ // 0x807FF094
    /* stfs f0, 0x64(r3) */ // 0x807FF098
    /* lfs f0, 0x34(r31) */ // 0x807FF09C
    /* stfs f0, 0x68(r3) */ // 0x807FF0A0
    /* lfs f0, 0x38(r31) */ // 0x807FF0A4
    /* stfs f0, 0x6c(r3) */ // 0x807FF0A8
    /* b 0x807ff0c8 */ // 0x807FF0AC
    /* lfs f0, 0x3c(r31) */ // 0x807FF0B0
    /* stfs f0, 0x64(r3) */ // 0x807FF0B4
    /* lfs f0, 0x34(r31) */ // 0x807FF0B8
    /* stfs f0, 0x68(r3) */ // 0x807FF0BC
    /* lfs f0, 0x38(r31) */ // 0x807FF0C0
    /* stfs f0, 0x6c(r3) */ // 0x807FF0C4
    /* lfs f1, 0(r31) */ // 0x807FF0C8
    /* lis r5, 0 */ // 0x807FF0CC
    /* stfs f1, 0x70(r3) */ // 0x807FF0D0
    r4 = r5 + 0; // 0x807FF0D4
    /* lfs f0, 0x34(r31) */ // 0x807FF0D8
    /* stfs f0, 0x74(r3) */ // 0x807FF0DC
    /* stfs f1, 0x78(r3) */ // 0x807FF0E0
    /* lfs f0, 0(r5) */ // 0x807FF0E4
    /* stfs f0, 0x7c(r3) */ // 0x807FF0E8
    /* lfs f0, 4(r4) */ // 0x807FF0EC
    /* stfs f0, 0x80(r3) */ // 0x807FF0F0
    /* lfs f0, 8(r4) */ // 0x807FF0F4
    /* stfs f0, 0x84(r3) */ // 0x807FF0F8
    r12 = *(0 + r3); // lwz @ 0x807FF0FC
    r12 = *(0x14 + r12); // lwz @ 0x807FF100
    /* mtctr r12 */ // 0x807FF104
    /* bctrl  */ // 0x807FF108
    /* lfs f1, 0x158(r29) */ // 0x807FF10C
    /* li r0, 1 */ // 0x807FF110
    /* lfs f0, 8(r31) */ // 0x807FF114
    /* fmuls f0, f0, f1 */ // 0x807FF118
    /* stfs f0, 0x28(r30) */ // 0x807FF11C
    /* stfs f0, 0x2c(r30) */ // 0x807FF120
    /* stfs f0, 0x30(r30) */ // 0x807FF124
    *(0x118 + r29) = r0; // stb @ 0x807FF128
    r31 = *(0x2c + r1); // lwz @ 0x807FF12C
    r30 = *(0x28 + r1); // lwz @ 0x807FF130
    r29 = *(0x24 + r1); // lwz @ 0x807FF134
    r0 = *(0x34 + r1); // lwz @ 0x807FF138
    /* stfs f0, 8(r1) */ // 0x807FF13C
    /* stfs f0, 0xc(r1) */ // 0x807FF140
    /* stfs f0, 0x10(r1) */ // 0x807FF144
    return;
}