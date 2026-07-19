/* Function at 0x8070E028, size=440 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8070E028(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8070E034
    r31 = r3;
    r0 = *(0xbc + r3); // lbz @ 0x8070E03C
    if (==) goto 0x0x8070e0d4;
    r12 = *(0 + r3); // lwz @ 0x8070E048
    /* lis r4, 0 */ // 0x8070E04C
    /* lfs f1, 0x40(r3) */ // 0x8070E050
    /* lfs f0, 0xb8(r3) */ // 0x8070E054
    r12 = *(0x88 + r12); // lwz @ 0x8070E058
    /* fmuls f1, f0, f1 */ // 0x8070E05C
    /* lfs f2, 0(r4) */ // 0x8070E060
    /* mtctr r12 */ // 0x8070E064
    /* bctrl  */ // 0x8070E068
    r0 = *(0xbd + r31); // lbz @ 0x8070E06C
    if (!=) goto 0x0x8070e0e8;
    r3 = *(0xb0 + r31); // lwz @ 0x8070E078
    r12 = *(0 + r3); // lwz @ 0x8070E07C
    r12 = *(0xc + r12); // lwz @ 0x8070E080
    /* mtctr r12 */ // 0x8070E084
    /* bctrl  */ // 0x8070E088
    r3 = *(0xb0 + r31); // lwz @ 0x8070E08C
    r4 = r31 + 0x30; // 0x8070E090
    r12 = *(0 + r3); // lwz @ 0x8070E094
    r12 = *(0x74 + r12); // lwz @ 0x8070E098
    /* mtctr r12 */ // 0x8070E09C
    /* bctrl  */ // 0x8070E0A0
    r3 = *(0xb0 + r31); // lwz @ 0x8070E0A4
    /* lfs f1, 0x40(r31) */ // 0x8070E0A8
    r12 = *(0 + r3); // lwz @ 0x8070E0AC
    r12 = *(0x6c + r12); // lwz @ 0x8070E0B0
    /* mtctr r12 */ // 0x8070E0B4
    /* bctrl  */ // 0x8070E0B8
    r3 = *(0xb0 + r31); // lwz @ 0x8070E0BC
    r12 = *(0 + r3); // lwz @ 0x8070E0C0
    r12 = *(0x80 + r12); // lwz @ 0x8070E0C4
    /* mtctr r12 */ // 0x8070E0C8
    /* bctrl  */ // 0x8070E0CC
    /* b 0x8070e0e8 */ // 0x8070E0D0
    r3 = *(0xb0 + r3); // lwz @ 0x8070E0D4
    r12 = *(0 + r3); // lwz @ 0x8070E0D8
    r12 = *(0x10 + r12); // lwz @ 0x8070E0DC
    /* mtctr r12 */ // 0x8070E0E0
    /* bctrl  */ // 0x8070E0E4
    r0 = *(0xbd + r31); // lbz @ 0x8070E0E8
    if (==) goto 0x0x8070e1cc;
    r3 = *(0xb0 + r31); // lwz @ 0x8070E0F4
    r12 = *(0 + r3); // lwz @ 0x8070E0F8
    r12 = *(0x14 + r12); // lwz @ 0x8070E0FC
    /* mtctr r12 */ // 0x8070E100
    /* bctrl  */ // 0x8070E104
    r3 = *(0xb0 + r31); // lwz @ 0x8070E108
    r4 = r31 + 0x30; // 0x8070E10C
    r12 = *(0 + r3); // lwz @ 0x8070E110
    r12 = *(0x74 + r12); // lwz @ 0x8070E114
    /* mtctr r12 */ // 0x8070E118
    /* bctrl  */ // 0x8070E11C
    r3 = *(0xb0 + r31); // lwz @ 0x8070E120
    /* lfs f1, 0x40(r31) */ // 0x8070E124
    r12 = *(0 + r3); // lwz @ 0x8070E128
    r12 = *(0x6c + r12); // lwz @ 0x8070E12C
    /* mtctr r12 */ // 0x8070E130
    /* bctrl  */ // 0x8070E134
    r3 = *(0xb0 + r31); // lwz @ 0x8070E138
    r12 = *(0 + r3); // lwz @ 0x8070E13C
    r12 = *(0x80 + r12); // lwz @ 0x8070E140
    /* mtctr r12 */ // 0x8070E144
    /* bctrl  */ // 0x8070E148
    r3 = *(8 + r31); // lwz @ 0x8070E14C
    /* li r4, 2 */ // 0x8070E150
    r3 = *(0x28 + r3); // lwz @ 0x8070E154
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x8070e18c;
    r3 = *(8 + r31); // lwz @ 0x8070E164
    /* li r4, 2 */ // 0x8070E168
    r3 = *(0x28 + r3); // lwz @ 0x8070E16C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070E174
    /* lis r4, 0 */ // 0x8070E178
    /* lfs f1, 0(r4) */ // 0x8070E17C
    r12 = *(0x10 + r12); // lwz @ 0x8070E180
    /* mtctr r12 */ // 0x8070E184
    /* bctrl  */ // 0x8070E188
    r3 = *(8 + r31); // lwz @ 0x8070E18C
    /* li r4, 0 */ // 0x8070E190
    r3 = *(0x28 + r3); // lwz @ 0x8070E194
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x8070e1cc;
    r3 = *(8 + r31); // lwz @ 0x8070E1A4
    /* li r4, 0 */ // 0x8070E1A8
    r3 = *(0x28 + r3); // lwz @ 0x8070E1AC
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070E1B4
    /* lis r4, 0 */ // 0x8070E1B8
    /* lfs f1, 0(r4) */ // 0x8070E1BC
    r12 = *(0x10 + r12); // lwz @ 0x8070E1C0
    /* mtctr r12 */ // 0x8070E1C4
    /* bctrl  */ // 0x8070E1C8
    r0 = *(0x14 + r1); // lwz @ 0x8070E1CC
    r31 = *(0xc + r1); // lwz @ 0x8070E1D0
    return;
}