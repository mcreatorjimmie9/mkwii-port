/* Function at 0x8073DFBC, size=488 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8073DFBC(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x8073DFC8
    r31 = r3;
    r4 = *(0x124 + r3); // lwz @ 0x8073DFD0
    if (!=) goto 0x0x8073dfe8;
    r0 = *(0x318 + r3); // lwz @ 0x8073DFDC
    if (==) goto 0x0x8073e190;
    if (!=) goto 0x0x8073dffc;
    r0 = *(0x318 + r3); // lwz @ 0x8073DFF0
    if (==) goto 0x0x8073e190;
    /* lfs f1, 0xa50(r31) */ // 0x8073DFFC
    r4 = r31 + 0x6dc; // 0x8073E004
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f1, 0xa50(r31) */ // 0x8073E00C
    r4 = r31 + 0x7ec; // 0x8073E014
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0xa50(r31) */ // 0x8073E01C
    r4 = r31 + 0x7f8; // 0x8073E024
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r0 = *(0x124 + r31); // lwz @ 0x8073E02C
    if (!=) goto 0x0x8073e0f4;
    r3 = *(0x318 + r31); // lwz @ 0x8073E038
    r12 = *(0 + r3); // lwz @ 0x8073E03C
    r12 = *(0x14 + r12); // lwz @ 0x8073E040
    /* mtctr r12 */ // 0x8073E044
    /* bctrl  */ // 0x8073E048
    r3 = *(0x318 + r31); // lwz @ 0x8073E04C
    r4 = r31 + 0x6f4; // 0x8073E050
    r12 = *(0 + r3); // lwz @ 0x8073E054
    r12 = *(0x78 + r12); // lwz @ 0x8073E058
    /* mtctr r12 */ // 0x8073E05C
    /* bctrl  */ // 0x8073E060
    r4 = r31 + 0x7d4; // 0x8073E068
    r5 = r31 + 0x7e0; // 0x8073E06C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8073E074
    /* lfs f1, 0(r4) */ // 0x8073E07C
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = *(0x318 + r31); // lwz @ 0x8073E088
    r12 = *(0 + r3); // lwz @ 0x8073E090
    r12 = *(0x74 + r12); // lwz @ 0x8073E094
    /* mtctr r12 */ // 0x8073E098
    /* bctrl  */ // 0x8073E09C
    r3 = *(0x318 + r31); // lwz @ 0x8073E0A0
    r12 = *(0 + r3); // lwz @ 0x8073E0A8
    r12 = *(0x4c + r12); // lwz @ 0x8073E0AC
    /* mtctr r12 */ // 0x8073E0B0
    /* bctrl  */ // 0x8073E0B4
    r0 = *(0xb0 + r31); // lbz @ 0x8073E0B8
    if (==) goto 0x0x8073e0dc;
    r3 = *(0x318 + r31); // lwz @ 0x8073E0C4
    r4 = r31 + 0x738; // 0x8073E0C8
    r12 = *(0 + r3); // lwz @ 0x8073E0CC
    r12 = *(0x58 + r12); // lwz @ 0x8073E0D0
    /* mtctr r12 */ // 0x8073E0D4
    /* bctrl  */ // 0x8073E0D8
    r3 = *(0x318 + r31); // lwz @ 0x8073E0DC
    r12 = *(0 + r3); // lwz @ 0x8073E0E0
    r12 = *(0x80 + r12); // lwz @ 0x8073E0E4
    /* mtctr r12 */ // 0x8073E0E8
    /* bctrl  */ // 0x8073E0EC
    /* b 0x8073e190 */ // 0x8073E0F0
    if (!=) goto 0x0x8073e190;
    r3 = *(0x318 + r31); // lwz @ 0x8073E0FC
    r12 = *(0 + r3); // lwz @ 0x8073E100
    r12 = *(0x14 + r12); // lwz @ 0x8073E104
    /* mtctr r12 */ // 0x8073E108
    /* bctrl  */ // 0x8073E10C
    r3 = *(0x318 + r31); // lwz @ 0x8073E110
    r4 = r31 + 0x7e0; // 0x8073E114
    r12 = *(0 + r3); // lwz @ 0x8073E118
    r12 = *(0x74 + r12); // lwz @ 0x8073E11C
    /* mtctr r12 */ // 0x8073E120
    /* bctrl  */ // 0x8073E124
    r3 = *(0x318 + r31); // lwz @ 0x8073E128
    r4 = r31 + 0x6f4; // 0x8073E12C
    r12 = *(0 + r3); // lwz @ 0x8073E130
    r12 = *(0x78 + r12); // lwz @ 0x8073E134
    /* mtctr r12 */ // 0x8073E138
    /* bctrl  */ // 0x8073E13C
    r3 = *(0x318 + r31); // lwz @ 0x8073E140
    r12 = *(0 + r3); // lwz @ 0x8073E148
    r12 = *(0x4c + r12); // lwz @ 0x8073E14C
    /* mtctr r12 */ // 0x8073E150
    /* bctrl  */ // 0x8073E154
    r0 = *(0xb0 + r31); // lbz @ 0x8073E158
    if (==) goto 0x0x8073e17c;
    r3 = *(0x318 + r31); // lwz @ 0x8073E164
    r4 = r31 + 0x738; // 0x8073E168
    r12 = *(0 + r3); // lwz @ 0x8073E16C
    r12 = *(0x58 + r12); // lwz @ 0x8073E170
    /* mtctr r12 */ // 0x8073E174
    /* bctrl  */ // 0x8073E178
    r3 = *(0x318 + r31); // lwz @ 0x8073E17C
    r12 = *(0 + r3); // lwz @ 0x8073E180
    r12 = *(0x80 + r12); // lwz @ 0x8073E184
    /* mtctr r12 */ // 0x8073E188
    /* bctrl  */ // 0x8073E18C
    r0 = *(0x54 + r1); // lwz @ 0x8073E190
    r31 = *(0x4c + r1); // lwz @ 0x8073E194
    return;
}