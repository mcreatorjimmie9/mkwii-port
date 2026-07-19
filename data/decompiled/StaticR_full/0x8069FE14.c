/* Function at 0x8069FE14, size=212 bytes */
/* Stack frame: 0 bytes */

void FUN_8069FE14(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8069FE14
    r5 = *(0 + r5); // lwz @ 0x8069FE18
    r5 = *(0 + r5); // lwz @ 0x8069FE1C
    /* lfs f0, 0x3f0(r5) */ // 0x8069FE20
    /* fneg f0, f0 */ // 0x8069FE24
    /* fmuls f0, f0, f1 */ // 0x8069FE28
    /* stfs f0, 0(r4) */ // 0x8069FE2C
    r4 = *(0x64 + r3); // lwz @ 0x8069FE30
    r4 = *(8 + r4); // lwz @ 0x8069FE34
    if (==) goto 0x0x8069fe74;
    /* lfs f2, 0x34(r3) */ // 0x8069FE40
    /* lfs f0, 0x28(r4) */ // 0x8069FE44
    /* lfs f1, 0x1c(r3) */ // 0x8069FE48
    /* fmuls f3, f2, f0 */ // 0x8069FE4C
    /* lfs f2, 0x38(r3) */ // 0x8069FE50
    /* lfs f0, 0x20(r3) */ // 0x8069FE54
    /* fadds f1, f1, f3 */ // 0x8069FE58
    /* stfs f1, 0x4c(r3) */ // 0x8069FE5C
    /* lfs f1, 0x2c(r4) */ // 0x8069FE60
    /* fmuls f1, f2, f1 */ // 0x8069FE64
    /* fadds f0, f0, f1 */ // 0x8069FE68
    /* stfs f0, 0x50(r3) */ // 0x8069FE6C
    /* b 0x8069fe94 */ // 0x8069FE70
    /* lfs f3, 0x1c(r3) */ // 0x8069FE74
    /* lfs f2, 0x34(r3) */ // 0x8069FE78
    /* lfs f1, 0x20(r3) */ // 0x8069FE7C
    /* lfs f0, 0x38(r3) */ // 0x8069FE80
    /* fadds f2, f3, f2 */ // 0x8069FE84
    /* fadds f0, f1, f0 */ // 0x8069FE88
    /* stfs f2, 0x4c(r3) */ // 0x8069FE8C
    /* stfs f0, 0x50(r3) */ // 0x8069FE90
    r5 = *(0x30 + r3); // lbz @ 0x8069FE94
    r4 = *(0x48 + r3); // lbz @ 0x8069FE98
    r5 = r5 + 1; // 0x8069FE9C
    /* lfs f1, 0x24(r3) */ // 0x8069FEA0
    r0 = r4 + 1; // 0x8069FEA4
    /* lfs f0, 0x3c(r3) */ // 0x8069FEA8
    r4 = r5 * r0; // 0x8069FEAC
    /* lfs f3, 0x28(r3) */ // 0x8069FEB0
    /* fadds f4, f1, f0 */ // 0x8069FEB4
    /* lfs f2, 0x40(r3) */ // 0x8069FEB8
    /* lfs f1, 0x2c(r3) */ // 0x8069FEBC
    /* lfs f0, 0x44(r3) */ // 0x8069FEC0
    /* fmuls f2, f3, f2 */ // 0x8069FEC4
    r0 = r4 + -1; // 0x8069FEC8
    /* fmuls f0, f1, f0 */ // 0x8069FECC
    r0 = r0 rlwinm 0x18; // rlwinm
    /* stfs f4, 0x54(r3) */ // 0x8069FED4
    /* stfs f2, 0x58(r3) */ // 0x8069FED8
    /* stfs f0, 0x5c(r3) */ // 0x8069FEDC
    *(0x60 + r3) = r0; // stb @ 0x8069FEE0
    return;
}