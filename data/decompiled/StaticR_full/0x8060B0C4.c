/* Function at 0x8060B0C4, size=400 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060B0C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8060B0D0
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060B0D8
    r4 = *(4 + r4); // lwz @ 0x8060B0DC
    r0 = *(8 + r4); // lwz @ 0x8060B0E0
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x8060B0E4
    if (!=) goto 0x0x8060b240;
    r0 = *(4 + r4); // lwz @ 0x8060B0EC
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8060B0F0
    if (==) goto 0x0x8060b240;
    /* lis r4, 0 */ // 0x8060B0F8
    /* lfs f1, 0x3c(r3) */ // 0x8060B0FC
    /* lfs f0, 0(r4) */ // 0x8060B100
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060B104
    if (<=) goto 0x0x8060b130;
    /* lis r4, 0 */ // 0x8060B10C
    /* lfs f0, 0(r4) */ // 0x8060B110
    r4 = r4 + 0; // 0x8060B114
    /* stfs f0, 0x38(r3) */ // 0x8060B118
    /* lfs f0, 4(r4) */ // 0x8060B11C
    /* stfs f0, 0x3c(r3) */ // 0x8060B120
    /* lfs f0, 8(r4) */ // 0x8060B124
    /* stfs f0, 0x40(r3) */ // 0x8060B128
    /* b 0x8060b19c */ // 0x8060B12C
    /* lis r6, 0 */ // 0x8060B130
    /* lis r4, 0 */ // 0x8060B134
    r5 = r6 + 0; // 0x8060B138
    /* lfs f6, 0x3c(r3) */ // 0x8060B13C
    /* lfs f0, 4(r5) */ // 0x8060B140
    /* lfs f1, 0(r6) */ // 0x8060B144
    /* lfs f7, 0x38(r3) */ // 0x8060B148
    /* fsubs f2, f0, f6 */ // 0x8060B14C
    /* lfs f0, 8(r5) */ // 0x8060B150
    /* lfs f5, 0x40(r3) */ // 0x8060B154
    /* fsubs f1, f1, f7 */ // 0x8060B158
    /* lfs f3, 0(r4) */ // 0x8060B15C
    /* fsubs f4, f0, f5 */ // 0x8060B160
    /* fmuls f1, f1, f3 */ // 0x8060B164
    /* fmuls f0, f2, f3 */ // 0x8060B168
    /* fmuls f3, f4, f3 */ // 0x8060B16C
    /* stfs f1, 0x14(r1) */ // 0x8060B170
    /* fadds f2, f7, f1 */ // 0x8060B174
    /* fadds f1, f6, f0 */ // 0x8060B178
    /* stfs f0, 0x18(r1) */ // 0x8060B17C
    /* fadds f0, f5, f3 */ // 0x8060B180
    /* stfs f3, 0x1c(r1) */ // 0x8060B184
    /* stfs f2, 0x38(r3) */ // 0x8060B188
    /* stfs f1, 0x3c(r3) */ // 0x8060B18C
    /* stfs f0, 0x40(r3) */ // 0x8060B190
    r3 = r3 + 0x38; // 0x8060B194
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8060B19C
    /* lfs f1, 0x48(r31) */ // 0x8060B1A0
    /* lfs f0, 0(r3) */ // 0x8060B1A4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060B1A8
    if (<=) goto 0x0x8060b1d4;
    /* lis r3, 0 */ // 0x8060B1B0
    /* lfs f0, 0(r3) */ // 0x8060B1B4
    r3 = r3 + 0; // 0x8060B1B8
    /* stfs f0, 0x44(r31) */ // 0x8060B1BC
    /* lfs f0, 4(r3) */ // 0x8060B1C0
    /* stfs f0, 0x48(r31) */ // 0x8060B1C4
    /* lfs f0, 8(r3) */ // 0x8060B1C8
    /* stfs f0, 0x4c(r31) */ // 0x8060B1CC
    /* b 0x8060b240 */ // 0x8060B1D0
    /* lis r3, 0 */ // 0x8060B1D4
    /* lis r4, 0 */ // 0x8060B1D8
    r5 = r3 + 0; // 0x8060B1DC
    /* lfs f1, 0(r3) */ // 0x8060B1E0
    /* lfs f0, 4(r5) */ // 0x8060B1E4
    r3 = r31 + 0x44; // 0x8060B1E8
    /* lfs f6, 0x48(r31) */ // 0x8060B1EC
    /* lfs f7, 0x44(r31) */ // 0x8060B1F0
    /* fsubs f2, f0, f6 */ // 0x8060B1F4
    /* lfs f0, 8(r5) */ // 0x8060B1F8
    /* lfs f5, 0x4c(r31) */ // 0x8060B1FC
    /* fsubs f1, f1, f7 */ // 0x8060B200
    /* lfs f3, 0(r4) */ // 0x8060B204
    /* fsubs f4, f0, f5 */ // 0x8060B208
    /* fmuls f1, f1, f3 */ // 0x8060B20C
    /* fmuls f0, f2, f3 */ // 0x8060B210
    /* fmuls f3, f4, f3 */ // 0x8060B214
    /* stfs f1, 8(r1) */ // 0x8060B218
    /* fadds f2, f7, f1 */ // 0x8060B21C
    /* fadds f1, f6, f0 */ // 0x8060B220
    /* stfs f0, 0xc(r1) */ // 0x8060B224
    /* fadds f0, f5, f3 */ // 0x8060B228
    /* stfs f3, 0x10(r1) */ // 0x8060B22C
    /* stfs f2, 0x44(r31) */ // 0x8060B230
    /* stfs f1, 0x48(r31) */ // 0x8060B234
    /* stfs f0, 0x4c(r31) */ // 0x8060B238
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x34 + r1); // lwz @ 0x8060B240
    r31 = *(0x2c + r1); // lwz @ 0x8060B244
    return;
}