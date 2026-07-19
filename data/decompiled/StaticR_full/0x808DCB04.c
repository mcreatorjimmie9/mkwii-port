/* Function at 0x808DCB04, size=876 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808DCB04(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r11, 0x4330 */ // 0x808DCB0C
    /* lis r7, 0 */ // 0x808DCB10
    *(0xc4 + r1) = r0; // stw @ 0x808DCB14
    r8 = r3;
    *(0xbc + r1) = r31; // stw @ 0x808DCB1C
    r31 = r6;
    *(0xb8 + r1) = r30; // stw @ 0x808DCB24
    r30 = r5;
    *(0xb4 + r1) = r29; // stw @ 0x808DCB2C
    r29 = r4;
    r10 = *(0 + r7); // lwz @ 0x808DCB34
    /* lis r7, 0 */ // 0x808DCB38
    r9 = *(0x104 + r3); // lwz @ 0x808DCB3C
    r7 = r7 + 0; // 0x808DCB40
    r10 = *(0x20 + r10); // lwz @ 0x808DCB44
    r0 = *(0x108 + r3); // lwz @ 0x808DCB48
    *(0x30 + r1) = r0; // stw @ 0x808DCB4C
    *(0x2c + r1) = r9; // stw @ 0x808DCB50
    r0 = *(0x10c + r3); // lwz @ 0x808DCB54
    *(0x34 + r1) = r0; // stw @ 0x808DCB58
    r5 = *(0x124 + r3); // lwz @ 0x808DCB5C
    r0 = *(0x118 + r3); // lwz @ 0x808DCB60
    r4 = r10 / r5; // 0x808DCB64
    *(0x98 + r1) = r11; // stw @ 0x808DCB68
    *(0xa0 + r1) = r11; // stw @ 0x808DCB6C
    r4 = r4 * r5; // 0x808DCB70
    /* subf r9, r4, r10 */ // 0x808DCB74
    if (>=) goto 0x0x808dcb88;
    /* li r5, 0 */ // 0x808DCB80
    /* b 0x808dcbb8 */ // 0x808DCB84
    r6 = *(0x11c + r3); // lwz @ 0x808DCB88
    r4 = r0 + r6; // 0x808DCB8C
    if (>=) goto 0x0x808dcba0;
    /* li r5, 1 */ // 0x808DCB98
    /* b 0x808dcbb8 */ // 0x808DCB9C
    /* slwi r4, r0, 1 */ // 0x808DCBA0
    /* li r5, 3 */ // 0x808DCBA4
    r4 = r4 + r6; // 0x808DCBA8
    if (>=) goto 0x0x808dcbb8;
    /* li r5, 2 */ // 0x808DCBB4
    if (==) goto 0x0x808dcbdc;
    if (==) goto 0x0x808dcc10;
    if (==) goto 0x0x808dcc18;
    if (==) goto 0x0x808dcd08;
    /* b 0x808dcdfc */ // 0x808DCBD8
    r0 = *(0x110 + r3); // lbz @ 0x808DCBDC
    /* li r4, 1 */ // 0x808DCBE0
    if (==) goto 0x0x808dcbf0;
    /* li r4, -1 */ // 0x808DCBEC
    /* xoris r0, r4, 0x8000 */ // 0x808DCBF0
    *(0x9c + r1) = r0; // stw @ 0x808DCBF4
    /* lfd f2, 0x10(r7) */ // 0x808DCBF8
    /* lfd f1, 0x98(r1) */ // 0x808DCBFC
    /* lfs f0, 0x114(r3) */ // 0x808DCC00
    /* fsubs f1, f1, f2 */ // 0x808DCC04
    /* fmuls f4, f0, f1 */ // 0x808DCC08
    /* b 0x808dce00 */ // 0x808DCC0C
    /* lfs f4, 0(r7) */ // 0x808DCC10
    /* b 0x808dce00 */ // 0x808DCC14
    if (>=) goto 0x0x808dcc38;
    /* xoris r4, r9, 0x8000 */ // 0x808DCC20
    *(0xa4 + r1) = r4; // stw @ 0x808DCC24
    /* lfd f1, 0x10(r7) */ // 0x808DCC28
    /* lfd f0, 0xa0(r1) */ // 0x808DCC2C
    /* fsubs f0, f0, f1 */ // 0x808DCC30
    /* b 0x808dccb0 */ // 0x808DCC34
    r6 = *(0x11c + r3); // lwz @ 0x808DCC38
    r10 = r0 + r6; // 0x808DCC3C
    if (>=) goto 0x0x808dcc64;
    /* subf r4, r0, r9 */ // 0x808DCC48
    /* lfd f1, 0x10(r7) */ // 0x808DCC4C
    /* xoris r4, r4, 0x8000 */ // 0x808DCC50
    *(0x9c + r1) = r4; // stw @ 0x808DCC54
    /* lfd f0, 0x98(r1) */ // 0x808DCC58
    /* fsubs f0, f0, f1 */ // 0x808DCC5C
    /* b 0x808dccb0 */ // 0x808DCC60
    /* slwi r5, r0, 1 */ // 0x808DCC64
    r4 = r5 + r6; // 0x808DCC68
    if (>=) goto 0x0x808dcc90;
    /* subf r4, r10, r9 */ // 0x808DCC74
    /* lfd f1, 0x10(r7) */ // 0x808DCC78
    /* xoris r4, r4, 0x8000 */ // 0x808DCC7C
    *(0xa4 + r1) = r4; // stw @ 0x808DCC80
    /* lfd f0, 0xa0(r1) */ // 0x808DCC84
    /* fsubs f0, f0, f1 */ // 0x808DCC88
    /* b 0x808dccb0 */ // 0x808DCC8C
    /* neg r4, r5 */ // 0x808DCC90
    /* lfd f1, 0x10(r7) */ // 0x808DCC94
    /* subf r4, r6, r4 */ // 0x808DCC98
    r4 = r4 + r9; // 0x808DCC9C
    /* xoris r4, r4, 0x8000 */ // 0x808DCCA0
    *(0x9c + r1) = r4; // stw @ 0x808DCCA4
    /* lfd f0, 0x98(r1) */ // 0x808DCCA8
    /* fsubs f0, f0, f1 */ // 0x808DCCAC
    /* fctiwz f0, f0 */ // 0x808DCCB0
    r4 = *(0x110 + r3); // lbz @ 0x808DCCB4
    /* li r5, 1 */ // 0x808DCCB8
    /* stfd f0, 0xa8(r1) */ // 0x808DCCBC
    r4 = *(0xac + r1); // lwz @ 0x808DCCC4
    if (==) goto 0x0x808dccd0;
    /* li r5, -1 */ // 0x808DCCCC
    r4 = r4 * r5; // 0x808DCCD0
    /* xoris r0, r0, 0x8000 */ // 0x808DCCD4
    *(0x9c + r1) = r0; // stw @ 0x808DCCD8
    /* lfd f3, 0x10(r7) */ // 0x808DCCDC
    /* lfd f0, 0x98(r1) */ // 0x808DCCE0
    /* lfs f1, 0x114(r3) */ // 0x808DCCE4
    /* xoris r0, r4, 0x8000 */ // 0x808DCCE8
    *(0xa4 + r1) = r0; // stw @ 0x808DCCEC
    /* fsubs f0, f0, f3 */ // 0x808DCCF0
    /* lfd f2, 0xa0(r1) */ // 0x808DCCF4
    /* fsubs f2, f2, f3 */ // 0x808DCCF8
    /* fmuls f1, f1, f2 */ // 0x808DCCFC
    /* fdivs f4, f1, f0 */ // 0x808DCD00
    /* b 0x808dce00 */ // 0x808DCD04
    if (>=) goto 0x0x808dcd28;
    /* xoris r4, r9, 0x8000 */ // 0x808DCD10
    *(0xa4 + r1) = r4; // stw @ 0x808DCD14
    /* lfd f1, 0x10(r7) */ // 0x808DCD18
    /* lfd f0, 0xa0(r1) */ // 0x808DCD1C
    /* fsubs f0, f0, f1 */ // 0x808DCD20
    /* b 0x808dcda0 */ // 0x808DCD24
    r6 = *(0x11c + r3); // lwz @ 0x808DCD28
    r10 = r0 + r6; // 0x808DCD2C
    if (>=) goto 0x0x808dcd54;
    /* subf r4, r0, r9 */ // 0x808DCD38
    /* lfd f1, 0x10(r7) */ // 0x808DCD3C
    /* xoris r4, r4, 0x8000 */ // 0x808DCD40
    *(0x9c + r1) = r4; // stw @ 0x808DCD44
    /* lfd f0, 0x98(r1) */ // 0x808DCD48
    /* fsubs f0, f0, f1 */ // 0x808DCD4C
    /* b 0x808dcda0 */ // 0x808DCD50
    /* slwi r5, r0, 1 */ // 0x808DCD54
    r4 = r5 + r6; // 0x808DCD58
    if (>=) goto 0x0x808dcd80;
    /* subf r4, r10, r9 */ // 0x808DCD64
    /* lfd f1, 0x10(r7) */ // 0x808DCD68
    /* xoris r4, r4, 0x8000 */ // 0x808DCD6C
    *(0xa4 + r1) = r4; // stw @ 0x808DCD70
    /* lfd f0, 0xa0(r1) */ // 0x808DCD74
    /* fsubs f0, f0, f1 */ // 0x808DCD78
    /* b 0x808dcda0 */ // 0x808DCD7C
    /* neg r4, r5 */ // 0x808DCD80
    /* lfd f1, 0x10(r7) */ // 0x808DCD84
    /* subf r4, r6, r4 */ // 0x808DCD88
    r4 = r4 + r9; // 0x808DCD8C
    /* xoris r4, r4, 0x8000 */ // 0x808DCD90
    *(0x9c + r1) = r4; // stw @ 0x808DCD94
    /* lfd f0, 0x98(r1) */ // 0x808DCD98
    /* fsubs f0, f0, f1 */ // 0x808DCD9C
    /* fctiwz f0, f0 */ // 0x808DCDA0
    r4 = *(0x110 + r3); // lbz @ 0x808DCDA4
    /* li r5, 1 */ // 0x808DCDA8
    /* stfd f0, 0xa8(r1) */ // 0x808DCDAC
    r4 = *(0xac + r1); // lwz @ 0x808DCDB4
    if (==) goto 0x0x808dcdc0;
    /* li r5, -1 */ // 0x808DCDBC
    /* subf r4, r4, r0 */ // 0x808DCDC0
    /* xoris r0, r0, 0x8000 */ // 0x808DCDC4
    r4 = r5 * r4; // 0x808DCDC8
    *(0x9c + r1) = r0; // stw @ 0x808DCDCC
    /* lfd f3, 0x10(r7) */ // 0x808DCDD0
    /* lfd f0, 0x98(r1) */ // 0x808DCDD4
    /* lfs f1, 0x114(r3) */ // 0x808DCDD8
    /* fsubs f0, f0, f3 */ // 0x808DCDDC
    /* xoris r0, r4, 0x8000 */ // 0x808DCDE0
    *(0xa4 + r1) = r0; // stw @ 0x808DCDE4
    /* lfd f2, 0xa0(r1) */ // 0x808DCDE8
    /* fsubs f2, f2, f3 */ // 0x808DCDEC
    /* fmuls f1, f1, f2 */ // 0x808DCDF0
    /* fdivs f4, f1, f0 */ // 0x808DCDF4
    /* b 0x808dce00 */ // 0x808DCDF8
    /* lfs f4, 0(r7) */ // 0x808DCDFC
    /* lfs f0, 0x18(r7) */ // 0x808DCE00
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DCE04
    if (>=) goto 0x0x808dce14;
    /* fmr f4, f0 */ // 0x808DCE0C
    /* b 0x808dce24 */ // 0x808DCE10
    /* lfs f0, 0x1c(r7) */ // 0x808DCE14
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DCE18
    if (<=) goto 0x0x808dce24;
    /* fmr f4, f0 */ // 0x808DCE20
    /* fabs f2, f4 */ // 0x808DCE24
    /* lfs f3, 0x20(r7) */ // 0x808DCE28
    /* lfs f1, 0x1c(r7) */ // 0x808DCE2C
    /* lfs f0, 0(r7) */ // 0x808DCE30
    /* fmuls f2, f3, f2 */ // 0x808DCE34
    /* fdivs f1, f2, f1 */ // 0x808DCE38
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808DCE3C
    if (>=) goto 0x0x808dce48;
    /* b 0x808dce4c */ // 0x808DCE44
    /* .byte 0xfc, 0x01, 0x18, 0x40 */ // 0x808DCE48
    /* lfs f1, 0x24(r7) */ // 0x808DCE4C
    /* lfs f0, 0x28(r7) */ // 0x808DCE54
    /* fmuls f1, f1, f4 */ // 0x808DCE5C
    r5 = r8 + 0x30; // 0x808DCE60
    /* fdivs f0, f1, f0 */ // 0x808DCE64
    /* stfs f0, 0x34(r1) */ // 0x808DCE68
    FUN_805E3430(r4, r5); // bl 0x805E3430
}