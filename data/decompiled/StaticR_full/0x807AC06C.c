/* Function at 0x807AC06C, size=296 bytes */
/* Stack frame: 0 bytes */

void FUN_807AC06C(int r3, int r4)
{
    /* fabs f2, f1 */ // 0x807AC06C
    /* lfs f0, 0x14(r3) */ // 0x807AC070
    /* lfs f1, 0xc(r3) */ // 0x807AC074
    /* lis r4, 0 */ // 0x807AC078
    /* stfs f1, 0x10(r3) */ // 0x807AC07C
    r4 = r4 + 0; // 0x807AC080
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807AC084
    if (<=) goto 0x0x807ac090;
    /* stfs f2, 0x14(r3) */ // 0x807AC08C
    r0 = *(0x1c + r3); // lwz @ 0x807AC090
    /* lfs f0, 8(r3) */ // 0x807AC094
    /* stfs f0, 0xc(r3) */ // 0x807AC09C
    if (<=) goto 0x0x807ac188;
    r0 = *(0x28 + r3); // lbz @ 0x807AC0A4
    if (!=) goto 0x0x807ac188;
    r0 = *(0x18 + r3); // lwz @ 0x807AC0B0
    if (<=) goto 0x0x807ac0e0;
    /* lfs f1, 0x14(r3) */ // 0x807AC0BC
    /* lfs f0, 0x18(r4) */ // 0x807AC0C0
    /* lfs f2, 0x1c(r4) */ // 0x807AC0C4
    /* fsubs f3, f1, f0 */ // 0x807AC0C8
    /* lfs f1, 8(r4) */ // 0x807AC0CC
    /* lfs f0, 4(r3) */ // 0x807AC0D0
    /* fmuls f2, f2, f3 */ // 0x807AC0D4
    /* fmuls f4, f1, f0 */ // 0x807AC0D8
    /* b 0x807ac100 */ // 0x807AC0DC
    /* lfs f1, 0x14(r3) */ // 0x807AC0E0
    /* lfs f0, 0x10(r4) */ // 0x807AC0E4
    /* lfs f2, 0x14(r4) */ // 0x807AC0E8
    /* fsubs f3, f1, f0 */ // 0x807AC0EC
    /* lfs f1, 4(r4) */ // 0x807AC0F0
    /* lfs f0, 4(r3) */ // 0x807AC0F4
    /* fmuls f2, f2, f3 */ // 0x807AC0F8
    /* fmuls f4, f1, f0 */ // 0x807AC0FC
    /* lis r4, 0 */ // 0x807AC100
    /* lfs f0, 0(r4) */ // 0x807AC104
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807AC108
    if (>=) goto 0x0x807ac114;
    /* fmr f2, f0 */ // 0x807AC110
    /* lfs f3, 4(r3) */ // 0x807AC114
    /* lis r4, 0 */ // 0x807AC118
    /* lfs f0, 0(r4) */ // 0x807AC11C
    /* fmuls f2, f2, f3 */ // 0x807AC120
    /* lfs f1, 0xc(r3) */ // 0x807AC124
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x807AC128
    /* fadds f1, f1, f2 */ // 0x807AC12C
    /* stfs f1, 0xc(r3) */ // 0x807AC130
    if (<=) goto 0x0x807ac15c;
    /* .byte 0xfc, 0x01, 0x20, 0x40 */ // 0x807AC138
    if (<=) goto 0x0x807ac148;
    /* fmr f1, f4 */ // 0x807AC140
    /* b 0x807ac154 */ // 0x807AC144
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AC148
    if (>=) goto 0x0x807ac154;
    /* fmr f1, f0 */ // 0x807AC150
    /* stfs f1, 0xc(r3) */ // 0x807AC154
    /* b 0x807ac17c */ // 0x807AC158
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807AC15C
    if (<=) goto 0x0x807ac16c;
    /* fmr f1, f0 */ // 0x807AC164
    /* b 0x807ac178 */ // 0x807AC168
    /* .byte 0xfc, 0x01, 0x20, 0x40 */ // 0x807AC16C
    if (>=) goto 0x0x807ac178;
    /* fmr f1, f4 */ // 0x807AC174
    /* stfs f1, 0xc(r3) */ // 0x807AC178
    r4 = *(0x1c + r3); // lwz @ 0x807AC17C
    r0 = r4 + -1; // 0x807AC180
    *(0x1c + r3) = r0; // stw @ 0x807AC184
    /* li r0, 0 */ // 0x807AC188
    *(0x28 + r3) = r0; // stb @ 0x807AC18C
    return;
}