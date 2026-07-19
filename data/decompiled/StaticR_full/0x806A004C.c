/* Function at 0x806A004C, size=388 bytes */
/* Stack frame: 0 bytes */

int FUN_806A004C(int r3, int r4, int r5, int r6, int r7)
{
    r6 = *(0x64 + r3); // lwz @ 0x806A004C
    r7 = *(8 + r6); // lwz @ 0x806A0050
    if (==) goto 0x0x806a00e4;
    /* lfs f1, 4(r3) */ // 0x806A005C
    /* lfs f0, 0x28(r7) */ // 0x806A0060
    r4 = *(0x18 + r3); // lbz @ 0x806A0064
    /* fmuls f1, f1, f0 */ // 0x806A0068
    /* lfs f0, 0x1c(r7) */ // 0x806A006C
    /* lfs f5, 8(r3) */ // 0x806A0070
    r5 = r4 + 1; // 0x806A0074
    /* lfs f3, 0xc(r3) */ // 0x806A0078
    /* fadds f0, f0, f1 */ // 0x806A007C
    /* lfs f2, 0x10(r3) */ // 0x806A0080
    /* stfs f0, 0x1c(r3) */ // 0x806A0084
    /* lfs f1, 0x14(r3) */ // 0x806A0088
    /* lfs f4, 0x2c(r7) */ // 0x806A008C
    /* lfs f0, 0x20(r7) */ // 0x806A0090
    /* fmuls f4, f5, f4 */ // 0x806A0094
    /* fadds f0, f0, f4 */ // 0x806A0098
    /* stfs f0, 0x20(r3) */ // 0x806A009C
    /* lfs f0, 0x24(r7) */ // 0x806A00A0
    /* fadds f0, f3, f0 */ // 0x806A00A4
    /* stfs f0, 0x24(r3) */ // 0x806A00A8
    /* lfs f0, 0x28(r7) */ // 0x806A00AC
    /* fmuls f0, f2, f0 */ // 0x806A00B0
    /* stfs f0, 0x28(r3) */ // 0x806A00B4
    /* lfs f0, 0x2c(r7) */ // 0x806A00B8
    /* fmuls f0, f1, f0 */ // 0x806A00BC
    /* stfs f0, 0x2c(r3) */ // 0x806A00C0
    r4 = *(8 + r6); // lwz @ 0x806A00C4
    r4 = *(0x30 + r4); // lbz @ 0x806A00C8
    r0 = r4 + 1; // 0x806A00CC
    r4 = r5 * r0; // 0x806A00D0
    r0 = r4 + -1; // 0x806A00D4
    r0 = r0 rlwinm 0x18; // rlwinm
    *(0x30 + r3) = r0; // stb @ 0x806A00DC
    /* b 0x806a0114 */ // 0x806A00E0
    /* lfs f4, 4(r3) */ // 0x806A00E4
    /* lfs f3, 8(r3) */ // 0x806A00E8
    /* lfs f2, 0xc(r3) */ // 0x806A00EC
    /* lfs f1, 0x10(r3) */ // 0x806A00F0
    /* lfs f0, 0x14(r3) */ // 0x806A00F4
    r0 = *(0x18 + r3); // lbz @ 0x806A00F8
    /* stfs f4, 0x1c(r3) */ // 0x806A00FC
    /* stfs f3, 0x20(r3) */ // 0x806A0100
    /* stfs f2, 0x24(r3) */ // 0x806A0104
    /* stfs f1, 0x28(r3) */ // 0x806A0108
    /* stfs f0, 0x2c(r3) */ // 0x806A010C
    *(0x30 + r3) = r0; // stb @ 0x806A0110
    r4 = *(0x64 + r3); // lwz @ 0x806A0114
    r4 = *(8 + r4); // lwz @ 0x806A0118
    if (==) goto 0x0x806a0158;
    /* lfs f2, 0x34(r3) */ // 0x806A0124
    /* lfs f0, 0x28(r4) */ // 0x806A0128
    /* lfs f1, 0x1c(r3) */ // 0x806A012C
    /* fmuls f3, f2, f0 */ // 0x806A0130
    /* lfs f2, 0x38(r3) */ // 0x806A0134
    /* lfs f0, 0x20(r3) */ // 0x806A0138
    /* fadds f1, f1, f3 */ // 0x806A013C
    /* stfs f1, 0x4c(r3) */ // 0x806A0140
    /* lfs f1, 0x2c(r4) */ // 0x806A0144
    /* fmuls f1, f2, f1 */ // 0x806A0148
    /* fadds f0, f0, f1 */ // 0x806A014C
    /* stfs f0, 0x50(r3) */ // 0x806A0150
    /* b 0x806a0178 */ // 0x806A0154
    /* lfs f3, 0x1c(r3) */ // 0x806A0158
    /* lfs f2, 0x34(r3) */ // 0x806A015C
    /* lfs f1, 0x20(r3) */ // 0x806A0160
    /* lfs f0, 0x38(r3) */ // 0x806A0164
    /* fadds f2, f3, f2 */ // 0x806A0168
    /* fadds f0, f1, f0 */ // 0x806A016C
    /* stfs f2, 0x4c(r3) */ // 0x806A0170
    /* stfs f0, 0x50(r3) */ // 0x806A0174
    r5 = *(0x30 + r3); // lbz @ 0x806A0178
    r4 = *(0x48 + r3); // lbz @ 0x806A017C
    r5 = r5 + 1; // 0x806A0180
    /* lfs f1, 0x24(r3) */ // 0x806A0184
    r0 = r4 + 1; // 0x806A0188
    /* lfs f0, 0x3c(r3) */ // 0x806A018C
    r4 = r5 * r0; // 0x806A0190
    /* lfs f3, 0x28(r3) */ // 0x806A0194
    /* fadds f4, f1, f0 */ // 0x806A0198
    /* lfs f2, 0x40(r3) */ // 0x806A019C
    /* lfs f1, 0x2c(r3) */ // 0x806A01A0
    /* lfs f0, 0x44(r3) */ // 0x806A01A4
    /* fmuls f2, f3, f2 */ // 0x806A01A8
    r0 = r4 + -1; // 0x806A01AC
    /* fmuls f0, f1, f0 */ // 0x806A01B0
    r0 = r0 rlwinm 0x18; // rlwinm
    /* stfs f4, 0x54(r3) */ // 0x806A01B8
    /* stfs f2, 0x58(r3) */ // 0x806A01BC
    /* stfs f0, 0x5c(r3) */ // 0x806A01C0
    *(0x60 + r3) = r0; // stb @ 0x806A01C4
    r3 = r3 + 0x68; // 0x806A01C8
    /* b 0x8064e168 */ // 0x806A01CC
}