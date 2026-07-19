/* Function at 0x807DFD68, size=800 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807DFD68(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x807DFD7C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807DFD84
    r0 = *(0x1a0 + r3); // lwz @ 0x807DFD88
    if (!=) goto 0x0x807dff30;
    r7 = *(0x9c + r4); // lwz @ 0x807DFD94
    /* li r4, 3 */ // 0x807DFD98
    r0 = *(0xb0 + r3); // lwz @ 0x807DFD9C
    /* li r6, 7 */ // 0x807DFDA0
    r5 = r7 rlwinm 3; // rlwinm
    /* srwi r7, r7, 0x1f */ // 0x807DFDA8
    r5 = r3 + r5; // 0x807DFDAC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x807DFDB0
    r29 = *(4 + r5); // lwz @ 0x807DFDB4
    *(0x10 + r3) = r7; // stw @ 0x807DFDB8
    r5 = r29;
    r3 = *(0xc + r3); // lwz @ 0x807DFDC0
    if (!=) goto 0x0x807dfdcc;
    /* li r6, 6 */ // 0x807DFDC8
    r7 = r30 + 0x14; // 0x807DFDCC
    FUN_8085FDE0(r5, r6, r7); // bl 0x8085FDE0
    r3 = *(4 + r31); // lwz @ 0x807DFDD4
    /* li r0, 0x26 */ // 0x807DFDD8
    *(0x18 + r30) = r3; // stw @ 0x807DFDDC
    r5 = r30 + 0x23; // 0x807DFDE0
    r4 = r31 + 0xf; // 0x807DFDE4
    r3 = *(8 + r31); // lbz @ 0x807DFDE8
    *(0x1c + r30) = r3; // stb @ 0x807DFDEC
    r3 = *(9 + r31); // lbz @ 0x807DFDF0
    *(0x1d + r30) = r3; // stb @ 0x807DFDF4
    r3 = *(0xc + r31); // lwz @ 0x807DFDF8
    *(0x20 + r30) = r3; // stw @ 0x807DFDFC
    /* mtctr r0 */ // 0x807DFE00
    r3 = *(1 + r4); // lbz @ 0x807DFE04
    /* lbzu r0, 2(r4) */ // 0x807DFE08
    *(1 + r5) = r3; // stb @ 0x807DFE0C
    /* stbu r0, 2(r5) */ // 0x807DFE10
    if (counter-- != 0) goto 0x0x807dfe04;
    r0 = *(0x5c + r31); // lwz @ 0x807DFE18
    r5 = r29;
    *(0x70 + r30) = r0; // stw @ 0x807DFE20
    /* li r4, 3 */ // 0x807DFE24
    r3 = *(0xc + r30); // lwz @ 0x807DFE28
    /* li r6, 7 */ // 0x807DFE2C
    r0 = *(0x60 + r31); // lbz @ 0x807DFE30
    *(0x74 + r30) = r0; // stb @ 0x807DFE34
    r0 = *(0x61 + r31); // lbz @ 0x807DFE38
    *(0x75 + r30) = r0; // stb @ 0x807DFE3C
    r0 = *(0x62 + r31); // lbz @ 0x807DFE40
    *(0x76 + r30) = r0; // stb @ 0x807DFE44
    r0 = *(0x63 + r31); // lbz @ 0x807DFE48
    *(0x77 + r30) = r0; // stb @ 0x807DFE4C
    r0 = *(0x64 + r31); // lwz @ 0x807DFE50
    *(0x78 + r30) = r0; // stw @ 0x807DFE54
    r7 = *(0x68 + r31); // lwz @ 0x807DFE58
    r0 = *(0x6c + r31); // lwz @ 0x807DFE5C
    *(0x80 + r30) = r0; // stw @ 0x807DFE60
    *(0x7c + r30) = r7; // stw @ 0x807DFE64
    r7 = *(0x70 + r31); // lwz @ 0x807DFE68
    r0 = *(0x74 + r31); // lwz @ 0x807DFE6C
    *(0x88 + r30) = r0; // stw @ 0x807DFE70
    *(0x84 + r30) = r7; // stw @ 0x807DFE74
    r7 = *(0x78 + r31); // lwz @ 0x807DFE78
    r0 = *(0x7c + r31); // lwz @ 0x807DFE7C
    *(0x90 + r30) = r0; // stw @ 0x807DFE80
    *(0x8c + r30) = r7; // stw @ 0x807DFE84
    r7 = *(0x80 + r31); // lwz @ 0x807DFE88
    r0 = *(0x84 + r31); // lwz @ 0x807DFE8C
    *(0x98 + r30) = r0; // stw @ 0x807DFE90
    *(0x94 + r30) = r7; // stw @ 0x807DFE94
    r7 = *(0x88 + r31); // lwz @ 0x807DFE98
    r0 = *(0x8c + r31); // lwz @ 0x807DFE9C
    *(0xa0 + r30) = r0; // stw @ 0x807DFEA0
    *(0x9c + r30) = r7; // stw @ 0x807DFEA4
    r7 = *(0x90 + r31); // lwz @ 0x807DFEA8
    r0 = *(0x94 + r31); // lwz @ 0x807DFEAC
    *(0xa8 + r30) = r0; // stw @ 0x807DFEB0
    *(0xa4 + r30) = r7; // stw @ 0x807DFEB4
    r0 = *(0x9c + r31); // lwz @ 0x807DFEB8
    r7 = *(0x98 + r31); // lwz @ 0x807DFEBC
    *(0xac + r30) = r7; // stw @ 0x807DFEC0
    /* rlwinm. r7, r0, 1, 0x1f, 0x1f */ // 0x807DFEC4
    *(0xb0 + r30) = r0; // stw @ 0x807DFEC8
    r0 = *(0xa0 + r31); // lwz @ 0x807DFECC
    *(0xb4 + r30) = r0; // stw @ 0x807DFED0
    r0 = *(0xa4 + r31); // lbz @ 0x807DFED4
    *(0xb8 + r30) = r0; // stb @ 0x807DFED8
    r0 = *(0xa5 + r31); // lbz @ 0x807DFEDC
    *(0xb9 + r30) = r0; // stb @ 0x807DFEE0
    r0 = *(0xa6 + r31); // lbz @ 0x807DFEE4
    *(0xba + r30) = r0; // stb @ 0x807DFEE8
    r0 = *(0xa8 + r31); // lwz @ 0x807DFEEC
    *(0xbc + r30) = r0; // stw @ 0x807DFEF0
    r0 = *(0xac + r31); // lbz @ 0x807DFEF4
    *(0xc0 + r30) = r0; // stb @ 0x807DFEF8
    r0 = *(0xad + r31); // lbz @ 0x807DFEFC
    *(0xc1 + r30) = r0; // stb @ 0x807DFF00
    r0 = *(0xae + r31); // lbz @ 0x807DFF04
    *(0xc2 + r30) = r0; // stb @ 0x807DFF08
    r0 = *(0xb0 + r31); // lwz @ 0x807DFF0C
    *(0xc4 + r30) = r0; // stw @ 0x807DFF10
    r0 = *(0xb4 + r31); // lwz @ 0x807DFF14
    *(0xc8 + r30) = r0; // stw @ 0x807DFF18
    if (!=) goto 0x0x807dff24;
    /* li r6, 6 */ // 0x807DFF20
    r7 = r30 + 0x14; // 0x807DFF24
    FUN_8085FDC8(r6, r7); // bl 0x8085FDC8
    /* b 0x807e006c */ // 0x807DFF2C
    /* li r0, 1 */ // 0x807DFF30
    *(0x19c + r3) = r0; // stb @ 0x807DFF34
    /* li r0, 0x26 */ // 0x807DFF38
    r7 = r3 + 0xdb; // 0x807DFF3C
    r5 = *(4 + r4); // lwz @ 0x807DFF40
    r6 = r4 + 0xf; // 0x807DFF44
    *(0xd0 + r3) = r5; // stw @ 0x807DFF48
    r5 = *(8 + r4); // lbz @ 0x807DFF4C
    *(0xd4 + r3) = r5; // stb @ 0x807DFF50
    r5 = *(9 + r4); // lbz @ 0x807DFF54
    *(0xd5 + r3) = r5; // stb @ 0x807DFF58
    r5 = *(0xc + r4); // lwz @ 0x807DFF5C
    *(0xd8 + r3) = r5; // stw @ 0x807DFF60
    /* mtctr r0 */ // 0x807DFF64
    r5 = *(1 + r6); // lbz @ 0x807DFF68
    /* lbzu r0, 2(r6) */ // 0x807DFF6C
    *(1 + r7) = r5; // stb @ 0x807DFF70
    /* stbu r0, 2(r7) */ // 0x807DFF74
    if (counter-- != 0) goto 0x0x807dff68;
    r0 = *(0x5c + r4); // lwz @ 0x807DFF7C
    *(0x128 + r3) = r0; // stw @ 0x807DFF80
    r0 = *(0x60 + r4); // lbz @ 0x807DFF84
    *(0x12c + r3) = r0; // stb @ 0x807DFF88
    r0 = *(0x61 + r4); // lbz @ 0x807DFF8C
    *(0x12d + r3) = r0; // stb @ 0x807DFF90
    r0 = *(0x62 + r4); // lbz @ 0x807DFF94
    *(0x12e + r3) = r0; // stb @ 0x807DFF98
    r0 = *(0x63 + r4); // lbz @ 0x807DFF9C
    *(0x12f + r3) = r0; // stb @ 0x807DFFA0
    r0 = *(0x64 + r4); // lwz @ 0x807DFFA4
    *(0x130 + r3) = r0; // stw @ 0x807DFFA8
    r5 = *(0x68 + r4); // lwz @ 0x807DFFAC
    r0 = *(0x6c + r4); // lwz @ 0x807DFFB0
    *(0x138 + r3) = r0; // stw @ 0x807DFFB4
    *(0x134 + r3) = r5; // stw @ 0x807DFFB8
    r5 = *(0x70 + r4); // lwz @ 0x807DFFBC
    r0 = *(0x74 + r4); // lwz @ 0x807DFFC0
    *(0x140 + r3) = r0; // stw @ 0x807DFFC4
    *(0x13c + r3) = r5; // stw @ 0x807DFFC8
    r5 = *(0x78 + r4); // lwz @ 0x807DFFCC
    r0 = *(0x7c + r4); // lwz @ 0x807DFFD0
    *(0x148 + r3) = r0; // stw @ 0x807DFFD4
    *(0x144 + r3) = r5; // stw @ 0x807DFFD8
    r5 = *(0x80 + r4); // lwz @ 0x807DFFDC
    r0 = *(0x84 + r4); // lwz @ 0x807DFFE0
    *(0x150 + r3) = r0; // stw @ 0x807DFFE4
    *(0x14c + r3) = r5; // stw @ 0x807DFFE8
    r5 = *(0x88 + r4); // lwz @ 0x807DFFEC
    r0 = *(0x8c + r4); // lwz @ 0x807DFFF0
    *(0x158 + r3) = r0; // stw @ 0x807DFFF4
    *(0x154 + r3) = r5; // stw @ 0x807DFFF8
    r5 = *(0x90 + r4); // lwz @ 0x807DFFFC
    r0 = *(0x94 + r4); // lwz @ 0x807E0000
    *(0x160 + r3) = r0; // stw @ 0x807E0004
    *(0x15c + r3) = r5; // stw @ 0x807E0008
    r5 = *(0x98 + r4); // lwz @ 0x807E000C
    r0 = *(0x9c + r4); // lwz @ 0x807E0010
    *(0x168 + r3) = r0; // stw @ 0x807E0014
    *(0x164 + r3) = r5; // stw @ 0x807E0018
    r0 = *(0xa0 + r4); // lwz @ 0x807E001C
    *(0x16c + r3) = r0; // stw @ 0x807E0020
    r0 = *(0xa4 + r4); // lbz @ 0x807E0024
    *(0x170 + r3) = r0; // stb @ 0x807E0028
    r0 = *(0xa5 + r4); // lbz @ 0x807E002C
    *(0x171 + r3) = r0; // stb @ 0x807E0030
    r0 = *(0xa6 + r4); // lbz @ 0x807E0034
    *(0x172 + r3) = r0; // stb @ 0x807E0038
    r0 = *(0xa8 + r4); // lwz @ 0x807E003C
    *(0x174 + r3) = r0; // stw @ 0x807E0040
    r0 = *(0xac + r4); // lbz @ 0x807E0044
    *(0x178 + r3) = r0; // stb @ 0x807E0048
    r0 = *(0xad + r4); // lbz @ 0x807E004C
    *(0x179 + r3) = r0; // stb @ 0x807E0050
    r0 = *(0xae + r4); // lbz @ 0x807E0054
    *(0x17a + r3) = r0; // stb @ 0x807E0058
    r0 = *(0xb0 + r4); // lwz @ 0x807E005C
    *(0x17c + r3) = r0; // stw @ 0x807E0060
    r0 = *(0xb4 + r4); // lwz @ 0x807E0064
    *(0x180 + r3) = r0; // stw @ 0x807E0068
    r0 = *(0x24 + r1); // lwz @ 0x807E006C
    r31 = *(0x1c + r1); // lwz @ 0x807E0070
    r30 = *(0x18 + r1); // lwz @ 0x807E0074
    r29 = *(0x14 + r1); // lwz @ 0x807E0078
    return;
}