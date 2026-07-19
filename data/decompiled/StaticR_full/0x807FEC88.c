/* Function at 0x807FEC88, size=756 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_807FEC88(int r3, int r4, int r5)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x807FEC90
    *(0xe4 + r1) = r29; // stw @ 0x807FECA0
    r29 = r3;
    *(0xe0 + r1) = r28; // stw @ 0x807FECAC
    /* lis r28, 0 */ // 0x807FECB0
    r28 = r28 + 0; // 0x807FECB4
    FUN_807FF014(r3); // bl 0x807FF014
    /* li r4, 0 */ // 0x807FECC0
    FUN_807FF014(r3, r4); // bl 0x807FF014
    r3 = *(0x104 + r29); // lwz @ 0x807FECC8
    /* lfs f10, 0x30(0) */ // 0x807FECCC
    r31 = *(0x10 + r3); // lwz @ 0x807FECD0
    /* lfs f11, 0x34(0) */ // 0x807FECD4
    r30 = *(0x6c + r31); // lwz @ 0x807FECD8
    /* lfs f1, 8(r28) */ // 0x807FECDC
    /* lfs f5, 0x74(r30) */ // 0x807FECE0
    /* lfs f9, 0x7c(r30) */ // 0x807FECE4
    /* lfs f8, 0x80(r30) */ // 0x807FECE8
    /* fadds f2, f5, f11 */ // 0x807FECEC
    /* lfs f7, 0x84(r30) */ // 0x807FECF0
    /* lfs f6, 0x70(r30) */ // 0x807FECF4
    /* lfs f4, 0x78(r30) */ // 0x807FECF8
    /* lfs f0, 0x64(r30) */ // 0x807FECFC
    /* stfs f0, 0x54(r1) */ // 0x807FED00
    /* lfs f0, 0x24(r28) */ // 0x807FED04
    /* lfs f3, 0x68(r30) */ // 0x807FED08
    /* fmuls f1, f1, f0 */ // 0x807FED0C
    /* stfs f3, 0x58(r1) */ // 0x807FED10
    /* fadds f0, f3, f11 */ // 0x807FED14
    /* lfs f3, 0x6c(r30) */ // 0x807FED18
    /* stfs f3, 0x5c(r1) */ // 0x807FED1C
    /* stfs f0, 0x58(r1) */ // 0x807FED20
    /* lfs f0, 0x114(r29) */ // 0x807FED24
    /* stfs f5, 0x70(r1) */ // 0x807FED28
    /* fadds f0, f0, f11 */ // 0x807FED2C
    /* stfs f9, 0x60(r1) */ // 0x807FED30
    /* stfs f0, 0x114(r29) */ // 0x807FED34
    /* lfs f0, 0x5c(r1) */ // 0x807FED38
    /* stfs f1, 0x48(r1) */ // 0x807FED3C
    /* fadds f0, f0, f10 */ // 0x807FED40
    /* stfs f1, 0x4c(r1) */ // 0x807FED44
    /* stfs f0, 0x5c(r1) */ // 0x807FED48
    /* stfs f1, 0x50(r1) */ // 0x807FED4C
    r0 = *(0x2e + 0); // lhz @ 0x807FED50
    /* stfs f8, 0x64(r1) */ // 0x807FED54
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x807FED58
    /* stfs f7, 0x68(r1) */ // 0x807FED5C
    /* stfs f6, 0x6c(r1) */ // 0x807FED60
    /* stfs f4, 0x74(r1) */ // 0x807FED64
    /* stfs f2, 0x70(r1) */ // 0x807FED68
    if (==) goto 0x0x807fed9c;
    /* lfs f0, 0x13c(r29) */ // 0x807FED70
    /* lfs f2, 0x140(r29) */ // 0x807FED74
    /* fadds f0, f0, f1 */ // 0x807FED78
    /* lfs f1, 0x144(r29) */ // 0x807FED7C
    /* stfs f0, 0x13c(r29) */ // 0x807FED80
    /* lfs f0, 0x4c(r1) */ // 0x807FED84
    /* fadds f0, f2, f0 */ // 0x807FED88
    /* stfs f0, 0x140(r29) */ // 0x807FED8C
    /* lfs f0, 0x50(r1) */ // 0x807FED90
    /* fadds f0, f1, f0 */ // 0x807FED94
    /* stfs f0, 0x144(r29) */ // 0x807FED98
    r0 = *(0x2e + 0); // lhz @ 0x807FED9C
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x807FEDA0
    if (==) goto 0x0x807fede4;
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f1, 0x13c(r29) */ // 0x807FEDB4
    /* lfs f0, 0x3c(r1) */ // 0x807FEDB8
    /* lfs f2, 0x140(r29) */ // 0x807FEDBC
    /* fadds f0, f1, f0 */ // 0x807FEDC0
    /* lfs f1, 0x144(r29) */ // 0x807FEDC4
    /* stfs f0, 0x13c(r29) */ // 0x807FEDC8
    /* lfs f0, 0x40(r1) */ // 0x807FEDCC
    /* fadds f0, f2, f0 */ // 0x807FEDD0
    /* stfs f0, 0x140(r29) */ // 0x807FEDD4
    /* lfs f0, 0x44(r1) */ // 0x807FEDD8
    /* fadds f0, f1, f0 */ // 0x807FEDDC
    /* stfs f0, 0x144(r29) */ // 0x807FEDE0
    r3 = *(0x2e + 0); // lhz @ 0x807FEDE4
    /* clrlwi. r4, r3, 0x1f */ // 0x807FEDE8
    if (!=) goto 0x0x807fedf8;
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x807FEDF0
    if (==) goto 0x0x807feea4;
    /* lfs f1, 0(r28) */ // 0x807FEDFC
    if (==) goto 0x0x807fee0c;
    /* lfs f1, 8(r28) */ // 0x807FEE04
    /* b 0x807fee18 */ // 0x807FEE08
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x807FEE0C
    if (==) goto 0x0x807fee18;
    /* lfs f1, 0x28(r28) */ // 0x807FEE14
    /* lis r4, 0 */ // 0x807FEE18
    /* lfs f0, 0x2c(r28) */ // 0x807FEE1C
    r3 = r4 + 0; // 0x807FEE20
    /* lfs f3, 0(r4) */ // 0x807FEE24
    /* fmuls f1, f1, f0 */ // 0x807FEE28
    /* lfs f2, 4(r3) */ // 0x807FEE2C
    /* lfs f0, 8(r3) */ // 0x807FEE30
    /* lis r4, 0 */ // 0x807FEE34
    /* stfs f3, 0xb4(r1) */ // 0x807FEE38
    /* stfs f2, 0xc4(r1) */ // 0x807FEE40
    r4 = r4 + 0; // 0x807FEE44
    /* stfs f0, 0xd4(r1) */ // 0x807FEE48
    FUN_805E3430(r3, r4); // bl 0x805E3430
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lfs f2, 0x30(r1) */ // 0x807FEE60
    /* lfs f1, 0x34(r1) */ // 0x807FEE68
    /* lfs f0, 0x38(r1) */ // 0x807FEE70
    r5 = r29 + 0x108; // 0x807FEE74
    /* stfs f2, 0x54(r1) */ // 0x807FEE78
    /* stfs f1, 0x58(r1) */ // 0x807FEE7C
    /* stfs f0, 0x5c(r1) */ // 0x807FEE80
    FUN_805E3430(r5); // bl 0x805E3430
    /* lfs f0, 0x24(r1) */ // 0x807FEE88
    /* stfs f0, 0x108(r29) */ // 0x807FEE8C
    /* lfs f0, 0x28(r1) */ // 0x807FEE90
    /* stfs f0, 0x10c(r29) */ // 0x807FEE94
    /* lfs f0, 0x2c(r1) */ // 0x807FEE98
    /* stfs f0, 0x110(r29) */ // 0x807FEE9C
    /* b 0x807fef4c */ // 0x807FEEA0
    /* rlwinm. r4, r3, 0, 0x1c, 0x1c */ // 0x807FEEA4
    if (!=) goto 0x0x807feeb4;
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x807FEEAC
    if (==) goto 0x0x807fef4c;
    /* lfs f1, 0(r28) */ // 0x807FEEB8
    if (==) goto 0x0x807feec8;
    /* lfs f1, 8(r28) */ // 0x807FEEC0
    /* b 0x807feed4 */ // 0x807FEEC4
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x807FEEC8
    if (==) goto 0x0x807feed4;
    /* lfs f1, 0x28(r28) */ // 0x807FEED0
    /* lis r4, 0 */ // 0x807FEED4
    /* lfs f0, 0x2c(r28) */ // 0x807FEED8
    r3 = r4 + 0; // 0x807FEEDC
    /* lfs f3, 0(r4) */ // 0x807FEEE0
    /* fmuls f1, f1, f0 */ // 0x807FEEE4
    /* lfs f2, 4(r3) */ // 0x807FEEE8
    /* lfs f0, 8(r3) */ // 0x807FEEEC
    /* stfs f3, 0x84(r1) */ // 0x807FEEF4
    r4 = r29 + 0x108; // 0x807FEEF8
    /* stfs f2, 0x94(r1) */ // 0x807FEEFC
    /* stfs f0, 0xa4(r1) */ // 0x807FEF00
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lfs f1, 0x58(r1) */ // 0x807FEF08
    /* lfs f0, 0x114(r29) */ // 0x807FEF10
    /* fsubs f0, f1, f0 */ // 0x807FEF1C
    /* stfs f0, 0x58(r1) */ // 0x807FEF20
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* lfs f2, 0x18(r1) */ // 0x807FEF28
    /* lfs f1, 0x1c(r1) */ // 0x807FEF2C
    /* lfs f0, 0x20(r1) */ // 0x807FEF30
    /* stfs f2, 0x54(r1) */ // 0x807FEF34
    /* stfs f1, 0x58(r1) */ // 0x807FEF38
    /* stfs f0, 0x5c(r1) */ // 0x807FEF3C
    /* lfs f0, 0x114(r29) */ // 0x807FEF40
    /* fadds f0, f1, f0 */ // 0x807FEF44
    /* stfs f0, 0x58(r1) */ // 0x807FEF48
    r3 = *(0x2e + 0); // lhz @ 0x807FEF4C
    r0 = *(0x46 + 0); // lhz @ 0x807FEF50
    /* andc r0, r3, r0 */ // 0x807FEF54
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x807FEF58
    if (==) goto 0x0x807fef80;
    r0 = *(0x118 + r29); // lbz @ 0x807FEF60
    if (==) goto 0x0x807fef78;
    /* li r0, 0 */ // 0x807FEF6C
    *(0x118 + r29) = r0; // stb @ 0x807FEF70
    /* b 0x807fef80 */ // 0x807FEF74
    /* li r0, 1 */ // 0x807FEF78
}