/* Function at 0x806DF104, size=132 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806DF104(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r4 = r3 + r4; // 0x806DF10C
    r3 = r3 + 0xa8; // 0x806DF110
    *(0x14 + r1) = r0; // stw @ 0x806DF114
    r5 = *(0xc0 + r4); // lbz @ 0x806DF118
    r0 = *(0x44 + r4); // lbz @ 0x806DF11C
    if (<=) goto 0x0x806df12c;
    r5 = r0;
    /* clrlwi r5, r5, 0x18 */ // 0x806DF12C
    /* lis r0, 0x4330 */ // 0x806DF130
    /* lis r4, 0 */ // 0x806DF134
    *(0xc + r1) = r5; // stw @ 0x806DF138
    /* lfd f2, 0(r4) */ // 0x806DF13C
    /* lis r4, 0 */ // 0x806DF140
    *(8 + r1) = r0; // stw @ 0x806DF144
    /* lfs f0, 0(r4) */ // 0x806DF148
    /* lfd f1, 8(r1) */ // 0x806DF14C
    /* fsubs f1, f1, f2 */ // 0x806DF150
    /* fmuls f1, f1, f0 */ // 0x806DF154
    FUN_805E3728(); // bl 0x805E3728
    /* lis r3, 0 */ // 0x806DF15C
    r0 = *(0x14 + r1); // lwz @ 0x806DF160
    r3 = r3 + 0; // 0x806DF164
    /* lfs f0, 8(r3) */ // 0x806DF168
    /* lfs f2, 0xc(r3) */ // 0x806DF16C
    /* fsubs f0, f0, f2 */ // 0x806DF170
    /* fmuls f0, f1, f0 */ // 0x806DF174
    /* fadds f1, f2, f0 */ // 0x806DF178
    return;
}