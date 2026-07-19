/* Function at 0x8064CFAC, size=556 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 8 function(s) */

int FUN_8064CFAC(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x8064CFB8
    r30 = r3;
    r31 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x8064CFC4
    if (==) goto 0x0x8064cfe4;
    if (==) goto 0x0x8064d00c;
    if (==) goto 0x0x8064d1b0;
    /* b 0x8064d1c4 */ // 0x8064CFE0
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064CFEC
    r3 = r30;
    /* li r4, 0x7d */ // 0x8064CFF4
    /* li r5, 0 */ // 0x8064CFF8
    r12 = *(0x1c + r12); // lwz @ 0x8064CFFC
    /* mtctr r12 */ // 0x8064D000
    /* bctrl  */ // 0x8064D004
    /* b 0x8064d1c4 */ // 0x8064D008
    /* lis r28, 0 */ // 0x8064D00C
    /* li r0, 0 */ // 0x8064D010
    *(8 + r1) = r0; // stb @ 0x8064D014
    r3 = *(0 + r28); // lwz @ 0x8064D01C
    *(0xc + r1) = r0; // stw @ 0x8064D020
    FUN_806F9214(r4); // bl 0x806F9214
    r29 = r3;
    if (!=) goto 0x0x8064d0a0;
    r3 = *(0x14 + r1); // lwz @ 0x8064D034
    r0 = r3 + -1; // 0x8064D038
    if (>) goto 0x0x8064d0a0;
    r3 = *(0 + r28); // lwz @ 0x8064D044
    FUN_807032AC(); // bl 0x807032AC
    r0 = *(0x10 + r1); // lwz @ 0x8064D04C
    if (>) goto 0x0x8064d078;
    r3 = *(0 + r28); // lwz @ 0x8064D058
    FUN_807032AC(); // bl 0x807032AC
    r0 = *(0x10 + r1); // lwz @ 0x8064D060
    if (!=) goto 0x0x8064d0a0;
    r0 = *(0x20 + r1); // lbz @ 0x8064D06C
    if (!=) goto 0x0x8064d0a0;
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x8064D080
    r3 = r30;
    /* li r4, 0x7e */ // 0x8064D088
    /* li r5, 0 */ // 0x8064D08C
    r12 = *(0x1c + r12); // lwz @ 0x8064D090
    /* mtctr r12 */ // 0x8064D094
    /* bctrl  */ // 0x8064D098
    /* b 0x8064d1c4 */ // 0x8064D09C
    /* lis r3, 0 */ // 0x8064D0A0
    r3 = *(0 + r3); // lwz @ 0x8064D0A4
    r3 = *(0 + r3); // lwz @ 0x8064D0A8
    r27 = *(0x13c + r3); // lwz @ 0x8064D0AC
    if (!=) goto 0x0x8064d0c0;
    /* li r27, 0 */ // 0x8064D0B8
    /* b 0x8064d114 */ // 0x8064D0BC
    /* lis r28, 0 */ // 0x8064D0C0
    r28 = r28 + 0; // 0x8064D0C4
    if (==) goto 0x0x8064d110;
    r12 = *(0 + r27); // lwz @ 0x8064D0CC
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x8064D0D4
    /* mtctr r12 */ // 0x8064D0D8
    /* bctrl  */ // 0x8064D0DC
    /* b 0x8064d0f8 */ // 0x8064D0E0
    if (!=) goto 0x0x8064d0f4;
    /* li r0, 1 */ // 0x8064D0EC
    /* b 0x8064d104 */ // 0x8064D0F0
    r3 = *(0 + r3); // lwz @ 0x8064D0F4
    if (!=) goto 0x0x8064d0e4;
    /* li r0, 0 */ // 0x8064D100
    if (==) goto 0x0x8064d110;
    /* b 0x8064d114 */ // 0x8064D10C
    /* li r27, 0 */ // 0x8064D110
    r12 = *(0 + r27); // lwz @ 0x8064D114
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x8064D11C
    /* mtctr r12 */ // 0x8064D120
    /* bctrl  */ // 0x8064D124
    if (==) goto 0x0x8064d168;
    r0 = *(0x10 + r1); // lwz @ 0x8064D130
    if (!=) goto 0x0x8064d168;
    r0 = *(0x20 + r1); // lbz @ 0x8064D13C
    if (!=) goto 0x0x8064d168;
    r12 = *(0 + r27); // lwz @ 0x8064D148
    r3 = r27;
    /* li r4, 0x1999 */ // 0x8064D150
    /* li r5, 0 */ // 0x8064D154
    r12 = *(0x68 + r12); // lwz @ 0x8064D158
    /* mtctr r12 */ // 0x8064D15C
    /* bctrl  */ // 0x8064D160
    /* b 0x8064d184 */ // 0x8064D164
    r12 = *(0 + r27); // lwz @ 0x8064D168
    r3 = r27;
    /* li r4, 0x1996 */ // 0x8064D170
    /* li r5, 0 */ // 0x8064D174
    r12 = *(0x68 + r12); // lwz @ 0x8064D178
    /* mtctr r12 */ // 0x8064D17C
    /* bctrl  */ // 0x8064D180
    r12 = *(0 + r30); // lwz @ 0x8064D184
    r3 = r30;
    /* li r4, 0x4d */ // 0x8064D18C
    /* li r5, 0 */ // 0x8064D190
    r12 = *(0x24 + r12); // lwz @ 0x8064D194
    /* mtctr r12 */ // 0x8064D198
    /* bctrl  */ // 0x8064D19C
    r3 = r31;
    /* li r4, 0 */ // 0x8064D1A4
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x8064d1c4 */ // 0x8064D1AC
    r3 = r31;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x8064D1BC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x44 + r1); // lwz @ 0x8064D1C8
    return;
}