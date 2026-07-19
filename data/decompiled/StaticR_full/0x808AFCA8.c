/* Function at 0x808AFCA8, size=1004 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808AFCA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x88 + r1) = r30; // stw @ 0x808AFCBC
    r30 = r4;
    *(0x84 + r1) = r29; // stw @ 0x808AFCC4
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x808AFCCC
    r12 = *(0x18 + r12); // lwz @ 0x808AFCD0
    /* mtctr r12 */ // 0x808AFCD4
    /* bctrl  */ // 0x808AFCD8
    /* lfs f8, 4(r31) */ // 0x808AFCDC
    /* lis r3, 0 */ // 0x808AFCE0
    /* lfs f2, 0x48(r29) */ // 0x808AFCE4
    /* li r0, 1 */ // 0x808AFCE8
    /* lfs f9, 0(r31) */ // 0x808AFCEC
    /* lfs f0, 0x44(r29) */ // 0x808AFCF0
    /* fmuls f2, f2, f8 */ // 0x808AFCF4
    /* lfs f7, 8(r31) */ // 0x808AFCF8
    /* fmuls f3, f0, f9 */ // 0x808AFCFC
    /* lfs f5, 0x4c(r29) */ // 0x808AFD00
    /* fsubs f4, f2, f1 */ // 0x808AFD04
    /* lfs f0, 0(r3) */ // 0x808AFD08
    /* fmuls f6, f5, f7 */ // 0x808AFD0C
    /* lfs f2, 0x50(r29) */ // 0x808AFD10
    /* fsubs f3, f3, f1 */ // 0x808AFD14
    /* stfs f9, 0x5c(r29) */ // 0x808AFD18
    /* fmuls f5, f0, f4 */ // 0x808AFD1C
    /* lfs f4, 0x54(r29) */ // 0x808AFD20
    /* stfs f8, 0x60(r29) */ // 0x808AFD24
    /* fsubs f6, f6, f1 */ // 0x808AFD28
    /* fadds f10, f2, f3 */ // 0x808AFD2C
    /* lfs f3, 0x58(r29) */ // 0x808AFD30
    /* fadds f2, f4, f5 */ // 0x808AFD34
    /* stfs f7, 0x64(r29) */ // 0x808AFD38
    r3 = *(0x24 + r29); // lwz @ 0x808AFD3C
    /* fadds f3, f3, f6 */ // 0x808AFD40
    /* stfs f10, 0(r3) */ // 0x808AFD44
    /* stfs f2, 4(r3) */ // 0x808AFD48
    /* stfs f3, 8(r3) */ // 0x808AFD4C
    /* lfs f7, 0x48(r29) */ // 0x808AFD50
    /* lfs f6, 0x60(r29) */ // 0x808AFD54
    /* lfs f5, 0x44(r29) */ // 0x808AFD58
    /* lfs f4, 0x5c(r29) */ // 0x808AFD5C
    /* fmuls f6, f7, f6 */ // 0x808AFD60
    /* lfs f9, 0x4c(r29) */ // 0x808AFD64
    /* fmuls f5, f5, f4 */ // 0x808AFD68
    /* lfs f8, 0x64(r29) */ // 0x808AFD6C
    /* fsubs f7, f6, f1 */ // 0x808AFD70
    /* lfs f4, 0x50(r29) */ // 0x808AFD74
    /* fmuls f6, f9, f8 */ // 0x808AFD78
    *(0x20 + r29) = r0; // stb @ 0x808AFD7C
    /* fsubs f5, f5, f1 */ // 0x808AFD80
    /* lfs f8, 0x58(r29) */ // 0x808AFD84
    /* fsubs f9, f6, f1 */ // 0x808AFD88
    /* lfs f6, 0x54(r29) */ // 0x808AFD8C
    /* fmuls f7, f0, f7 */ // 0x808AFD90
    /* stfs f10, 0x68(r1) */ // 0x808AFD94
    /* fadds f11, f4, f5 */ // 0x808AFD98
    r3 = *(0x24 + r29); // lwz @ 0x808AFD9C
    /* fadds f10, f6, f7 */ // 0x808AFDA0
    /* stfs f2, 0x6c(r1) */ // 0x808AFDA4
    /* fsubs f12, f8, f9 */ // 0x808AFDA8
    /* stfs f11, 0xc(r3) */ // 0x808AFDAC
    /* stfs f10, 0x10(r3) */ // 0x808AFDB0
    /* stfs f12, 0x14(r3) */ // 0x808AFDB4
    /* lfs f5, 0x48(r29) */ // 0x808AFDB8
    /* lfs f4, 0x60(r29) */ // 0x808AFDBC
    /* lfs f8, 0x4c(r29) */ // 0x808AFDC0
    /* fmuls f6, f5, f4 */ // 0x808AFDC4
    /* lfs f7, 0x64(r29) */ // 0x808AFDC8
    /* lfs f5, 0x44(r29) */ // 0x808AFDCC
    /* fmuls f9, f8, f7 */ // 0x808AFDD0
    /* lfs f4, 0x5c(r29) */ // 0x808AFDD4
    /* fsubs f7, f6, f1 */ // 0x808AFDD8
    /* fmuls f4, f5, f4 */ // 0x808AFDDC
    /* lfs f8, 0x58(r29) */ // 0x808AFDE0
    /* fsubs f9, f9, f1 */ // 0x808AFDE4
    /* fmuls f7, f0, f7 */ // 0x808AFDE8
    /* lfs f6, 0x54(r29) */ // 0x808AFDEC
    /* fsubs f5, f4, f1 */ // 0x808AFDF0
    /* lfs f4, 0x50(r29) */ // 0x808AFDF4
    /* fadds f8, f8, f9 */ // 0x808AFDF8
    /* fsubs f6, f6, f7 */ // 0x808AFDFC
    /* fadds f2, f4, f5 */ // 0x808AFE00
    /* stfs f3, 0x70(r1) */ // 0x808AFE04
    r3 = *(0x24 + r29); // lwz @ 0x808AFE08
    /* stfs f11, 0x5c(r1) */ // 0x808AFE0C
    /* stfs f10, 0x60(r1) */ // 0x808AFE10
    /* stfs f12, 0x64(r1) */ // 0x808AFE14
    *(0x20 + r29) = r0; // stb @ 0x808AFE18
    /* stfs f2, 0x50(r1) */ // 0x808AFE1C
    /* stfs f6, 0x54(r1) */ // 0x808AFE20
    /* stfs f8, 0x58(r1) */ // 0x808AFE24
    /* stfs f2, 0x18(r3) */ // 0x808AFE28
    /* stfs f6, 0x1c(r3) */ // 0x808AFE2C
    /* stfs f8, 0x20(r3) */ // 0x808AFE30
    /* lfs f5, 0x48(r29) */ // 0x808AFE34
    /* lfs f4, 0x60(r29) */ // 0x808AFE38
    /* lfs f3, 0x44(r29) */ // 0x808AFE3C
    /* lfs f2, 0x5c(r29) */ // 0x808AFE40
    /* fmuls f4, f5, f4 */ // 0x808AFE44
    /* lfs f7, 0x4c(r29) */ // 0x808AFE48
    /* fmuls f3, f3, f2 */ // 0x808AFE4C
    /* lfs f6, 0x64(r29) */ // 0x808AFE50
    /* fsubs f5, f4, f1 */ // 0x808AFE54
    /* lfs f2, 0x50(r29) */ // 0x808AFE58
    /* fmuls f4, f7, f6 */ // 0x808AFE5C
    *(0x20 + r29) = r0; // stb @ 0x808AFE60
    /* fsubs f3, f3, f1 */ // 0x808AFE64
    /* lfs f6, 0x58(r29) */ // 0x808AFE68
    /* fsubs f7, f4, f1 */ // 0x808AFE6C
    /* lfs f4, 0x54(r29) */ // 0x808AFE70
    /* fmuls f5, f0, f5 */ // 0x808AFE74
    r3 = *(0x24 + r29); // lwz @ 0x808AFE78
    /* fsubs f10, f2, f3 */ // 0x808AFE7C
    /* fadds f2, f4, f5 */ // 0x808AFE80
    /* stfs f10, 0x24(r3) */ // 0x808AFE84
    /* fadds f3, f6, f7 */ // 0x808AFE88
    /* stfs f2, 0x28(r3) */ // 0x808AFE8C
    /* stfs f3, 0x2c(r3) */ // 0x808AFE90
    /* lfs f7, 0x48(r29) */ // 0x808AFE94
    /* lfs f6, 0x60(r29) */ // 0x808AFE98
    /* lfs f5, 0x44(r29) */ // 0x808AFE9C
    /* lfs f4, 0x5c(r29) */ // 0x808AFEA0
    /* fmuls f6, f7, f6 */ // 0x808AFEA4
    /* lfs f9, 0x4c(r29) */ // 0x808AFEA8
    /* fmuls f5, f5, f4 */ // 0x808AFEAC
    /* lfs f8, 0x64(r29) */ // 0x808AFEB0
    /* fsubs f7, f6, f1 */ // 0x808AFEB4
    /* lfs f4, 0x50(r29) */ // 0x808AFEB8
    /* fmuls f6, f9, f8 */ // 0x808AFEBC
    *(0x20 + r29) = r0; // stb @ 0x808AFEC0
    /* fsubs f5, f5, f1 */ // 0x808AFEC4
    /* lfs f8, 0x58(r29) */ // 0x808AFEC8
    /* fsubs f9, f6, f1 */ // 0x808AFECC
    /* lfs f6, 0x54(r29) */ // 0x808AFED0
    /* fmuls f7, f0, f7 */ // 0x808AFED4
    /* stfs f10, 0x44(r1) */ // 0x808AFED8
    /* fadds f11, f4, f5 */ // 0x808AFEDC
    r3 = *(0x24 + r29); // lwz @ 0x808AFEE0
    /* fsubs f10, f6, f7 */ // 0x808AFEE4
    /* stfs f2, 0x48(r1) */ // 0x808AFEE8
    /* fsubs f12, f8, f9 */ // 0x808AFEEC
    /* stfs f11, 0x30(r3) */ // 0x808AFEF0
    /* stfs f10, 0x34(r3) */ // 0x808AFEF4
    /* stfs f12, 0x38(r3) */ // 0x808AFEF8
    /* lfs f5, 0x48(r29) */ // 0x808AFEFC
    /* lfs f4, 0x60(r29) */ // 0x808AFF00
    /* lfs f8, 0x4c(r29) */ // 0x808AFF04
    /* fmuls f6, f5, f4 */ // 0x808AFF08
    /* lfs f7, 0x64(r29) */ // 0x808AFF0C
    /* lfs f5, 0x44(r29) */ // 0x808AFF10
    /* fmuls f9, f8, f7 */ // 0x808AFF14
    /* lfs f4, 0x5c(r29) */ // 0x808AFF18
    /* fsubs f7, f6, f1 */ // 0x808AFF1C
    /* fmuls f4, f5, f4 */ // 0x808AFF20
    /* lfs f8, 0x58(r29) */ // 0x808AFF24
    /* fsubs f9, f9, f1 */ // 0x808AFF28
    /* fmuls f7, f0, f7 */ // 0x808AFF2C
    /* lfs f6, 0x54(r29) */ // 0x808AFF30
    /* fsubs f5, f4, f1 */ // 0x808AFF34
    /* lfs f4, 0x50(r29) */ // 0x808AFF38
    /* fsubs f8, f8, f9 */ // 0x808AFF3C
    /* fadds f6, f6, f7 */ // 0x808AFF40
    /* fsubs f2, f4, f5 */ // 0x808AFF44
    /* stfs f3, 0x4c(r1) */ // 0x808AFF48
    r6 = *(0x24 + r29); // lwz @ 0x808AFF4C
    /* stfs f11, 0x38(r1) */ // 0x808AFF50
    /* stfs f10, 0x3c(r1) */ // 0x808AFF54
    /* stfs f12, 0x40(r1) */ // 0x808AFF58
    *(0x20 + r29) = r0; // stb @ 0x808AFF5C
    /* stfs f2, 0x2c(r1) */ // 0x808AFF60
    /* stfs f6, 0x30(r1) */ // 0x808AFF64
    /* stfs f8, 0x34(r1) */ // 0x808AFF68
    /* stfs f2, 0x3c(r6) */ // 0x808AFF6C
    /* lis r3, 0 */ // 0x808AFF70
    /* lfs f2, 0(r3) */ // 0x808AFF74
    r3 = r29;
    /* stfs f6, 0x40(r6) */ // 0x808AFF7C
    r4 = r30;
    /* stfs f8, 0x44(r6) */ // 0x808AFF88
    /* lfs f6, 0x48(r29) */ // 0x808AFF8C
    /* lfs f5, 0x60(r29) */ // 0x808AFF90
    /* lfs f4, 0x44(r29) */ // 0x808AFF94
    /* lfs f3, 0x5c(r29) */ // 0x808AFF98
    /* fmuls f5, f6, f5 */ // 0x808AFF9C
    /* lfs f8, 0x4c(r29) */ // 0x808AFFA0
    /* fmuls f4, f4, f3 */ // 0x808AFFA4
    /* lfs f7, 0x64(r29) */ // 0x808AFFA8
    /* fsubs f6, f5, f1 */ // 0x808AFFAC
    /* lfs f3, 0x50(r29) */ // 0x808AFFB0
    /* fmuls f5, f8, f7 */ // 0x808AFFB4
    *(0x20 + r29) = r0; // stb @ 0x808AFFB8
    /* fsubs f4, f4, f1 */ // 0x808AFFBC
    /* lfs f7, 0x58(r29) */ // 0x808AFFC0
    /* fsubs f8, f5, f1 */ // 0x808AFFC4
    /* lfs f5, 0x54(r29) */ // 0x808AFFC8
    /* fmuls f6, f0, f6 */ // 0x808AFFCC
    r6 = *(0x24 + r29); // lwz @ 0x808AFFD0
    /* fsubs f9, f3, f4 */ // 0x808AFFD4
    /* fsubs f10, f5, f6 */ // 0x808AFFD8
    /* stfs f9, 0x48(r6) */ // 0x808AFFDC
    /* fadds f8, f7, f8 */ // 0x808AFFE0
    /* stfs f10, 0x4c(r6) */ // 0x808AFFE4
    /* stfs f8, 0x50(r6) */ // 0x808AFFE8
    /* lfs f6, 0x48(r29) */ // 0x808AFFEC
    /* lfs f5, 0x60(r29) */ // 0x808AFFF0
    /* lfs f4, 0x44(r29) */ // 0x808AFFF4
    /* fmuls f5, f6, f5 */ // 0x808AFFF8
    /* lfs f3, 0x5c(r29) */ // 0x808AFFFC
    /* lfs f7, 0x4c(r29) */ // 0x808B0000
    /* fmuls f4, f4, f3 */ // 0x808B0004
    /* lfs f6, 0x64(r29) */ // 0x808B0008
    /* fsubs f5, f5, f1 */ // 0x808B000C
    /* fmuls f7, f7, f6 */ // 0x808B0010
    /* lfs f3, 0x50(r29) */ // 0x808B0014
    /* fsubs f4, f4, f1 */ // 0x808B0018
    /* fmuls f0, f0, f5 */ // 0x808B001C
    *(0x20 + r29) = r0; // stb @ 0x808B0020
    /* fsubs f7, f7, f1 */ // 0x808B0024
    /* lfs f1, 0x54(r29) */ // 0x808B0028
    /* fsubs f3, f3, f4 */ // 0x808B002C
    /* lfs f6, 0x58(r29) */ // 0x808B0030
    /* fsubs f0, f1, f0 */ // 0x808B0034
    r6 = *(0x24 + r29); // lwz @ 0x808B0038
    /* fsubs f1, f6, f7 */ // 0x808B003C
    /* stfs f9, 0x20(r1) */ // 0x808B0040
    /* stfs f3, 0x54(r6) */ // 0x808B0044
    /* stfs f0, 0x58(r6) */ // 0x808B0048
    /* stfs f1, 0x5c(r6) */ // 0x808B004C
    *(0x20 + r29) = r0; // stb @ 0x808B0050
    /* stfs f10, 0x24(r1) */ // 0x808B0054
    /* stfs f8, 0x28(r1) */ // 0x808B0058
    /* stfs f3, 0x14(r1) */ // 0x808B005C
    /* stfs f0, 0x18(r1) */ // 0x808B0060
    /* stfs f1, 0x1c(r1) */ // 0x808B0064
    /* stfs f2, 8(r1) */ // 0x808B0068
    /* stfs f2, 0xc(r1) */ // 0x808B006C
    /* stfs f2, 0x10(r1) */ // 0x808B0070
    FUN_808B2878(); // bl 0x808B2878
    r0 = *(0x94 + r1); // lwz @ 0x808B0078
    r31 = *(0x8c + r1); // lwz @ 0x808B007C
    r30 = *(0x88 + r1); // lwz @ 0x808B0080
    r29 = *(0x84 + r1); // lwz @ 0x808B0084
    return;
}