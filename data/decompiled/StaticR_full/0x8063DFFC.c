/* Function at 0x8063DFFC, size=176 bytes */
/* Stack frame: 0 bytes */

int FUN_8063DFFC(int r3, int r4, int r5, int r6)
{
    /* lfs f0, 4(r4) */ // 0x8063DFFC
    /* lis r6, 0 */ // 0x8063E000
    /* lfs f8, 0(r6) */ // 0x8063E004
    /* lis r6, 0 */ // 0x8063E008
    /* fmuls f7, f0, f0 */ // 0x8063E00C
    /* lfs f1, 8(r4) */ // 0x8063E010
    /* lfs f0, 0(r4) */ // 0x8063E014
    r4 = r3 + 0x34; // 0x8063E018
    /* fmuls f4, f1, f1 */ // 0x8063E01C
    /* lfs f1, 4(r5) */ // 0x8063E020
    /* fmuls f2, f0, f0 */ // 0x8063E024
    /* stfs f8, 4(r3) */ // 0x8063E028
    /* lfs f0, 8(r5) */ // 0x8063E02C
    /* fmuls f3, f1, f1 */ // 0x8063E030
    /* stfs f8, 8(r3) */ // 0x8063E034
    /* fadds f6, f7, f4 */ // 0x8063E038
    /* fmuls f1, f0, f0 */ // 0x8063E03C
    /* lfs f0, 0(r5) */ // 0x8063E040
    /* stfs f8, 0xc(r3) */ // 0x8063E044
    /* fadds f5, f4, f2 */ // 0x8063E048
    /* lfs f9, 0(r6) */ // 0x8063E04C
    /* fadds f4, f2, f7 */ // 0x8063E050
    /* stfs f8, 0x10(r3) */ // 0x8063E054
    /* fmuls f0, f0, f0 */ // 0x8063E058
    /* fadds f2, f3, f1 */ // 0x8063E05C
    /* stfs f8, 0x14(r3) */ // 0x8063E060
    /* fmuls f6, f9, f6 */ // 0x8063E064
    /* fadds f1, f1, f0 */ // 0x8063E068
    /* stfs f8, 0x1c(r3) */ // 0x8063E06C
    /* fmuls f5, f9, f5 */ // 0x8063E070
    /* fmuls f4, f9, f4 */ // 0x8063E074
    /* stfs f8, 0x20(r3) */ // 0x8063E078
    /* fadds f0, f0, f3 */ // 0x8063E07C
    /* fadds f2, f6, f2 */ // 0x8063E080
    /* stfs f8, 0x24(r3) */ // 0x8063E084
    /* fadds f1, f5, f1 */ // 0x8063E088
    /* fadds f0, f4, f0 */ // 0x8063E08C
    /* stfs f8, 0x28(r3) */ // 0x8063E090
    /* stfs f8, 0x30(r3) */ // 0x8063E094
    /* stfs f2, 4(r3) */ // 0x8063E098
    /* stfs f1, 0x18(r3) */ // 0x8063E09C
    /* stfs f0, 0x2c(r3) */ // 0x8063E0A0
    r3 = r3 + 4; // 0x8063E0A4
    /* b 0x805e3430 */ // 0x8063E0A8
}