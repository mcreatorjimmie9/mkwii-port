/* Function at 0x805CCFE0, size=516 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_805CCFE0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x805CCFE8
    *(0x34 + r1) = r0; // stw @ 0x805CCFEC
    /* mulli r0, r4, 0xf0 */ // 0x805CCFF0
    /* stmw r25, 0x14(r1) */ // 0x805CCFF4
    r28 = r3;
    r29 = r4;
    r3 = *(0 + r5); // lwz @ 0x805CD000
    r3 = r3 + r0; // 0x805CD004
    r0 = *(0x38 + r3); // lwz @ 0x805CD008
    if (==) goto 0x0x805cd1d0;
    /* lis r3, 0 */ // 0x805CD014
    r3 = *(0 + r3); // lwz @ 0x805CD018
    FUN_806E38D0(r3); // bl 0x806E38D0
    r12 = *(0x14c + r28); // lwz @ 0x805CD020
    r31 = r3;
    r3 = r28 + 0x14c; // 0x805CD028
    /* li r5, 0 */ // 0x805CD02C
    r12 = *(0x10 + r12); // lwz @ 0x805CD030
    r4 = r31;
    /* mtctr r12 */ // 0x805CD038
    /* bctrl  */ // 0x805CD03C
    r12 = *(0x154 + r28); // lwz @ 0x805CD040
    r5 = r3;
    r3 = r28 + 0x154; // 0x805CD048
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD050
    /* mtctr r12 */ // 0x805CD054
    /* bctrl  */ // 0x805CD058
    r12 = *(0x15c + r28); // lwz @ 0x805CD05C
    r5 = r3;
    r3 = r28 + 0x15c; // 0x805CD064
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD06C
    /* mtctr r12 */ // 0x805CD070
    /* bctrl  */ // 0x805CD074
    r12 = *(0x164 + r28); // lwz @ 0x805CD078
    r5 = r3;
    r3 = r28 + 0x164; // 0x805CD080
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD088
    /* mtctr r12 */ // 0x805CD08C
    /* bctrl  */ // 0x805CD090
    /* mulli r4, r29, 0x14 */ // 0x805CD094
    r0 = *(0x150 + r28); // lhz @ 0x805CD098
    /* li r26, 0 */ // 0x805CD09C
    r5 = r3;
    r25 = r28 + r4; // 0x805CD0A4
    /* li r30, 0 */ // 0x805CD0A8
    *(0x14 + r25) = r0; // sth @ 0x805CD0AC
    /* li r27, 1 */ // 0x805CD0B0
    r0 = *(0x158 + r28); // lhz @ 0x805CD0B4
    *(0x16 + r25) = r0; // sth @ 0x805CD0B8
    r0 = *(0x160 + r28); // lhz @ 0x805CD0BC
    *(0x18 + r25) = r0; // sth @ 0x805CD0C0
    *(0x12 + r25) = r26; // stb @ 0x805CD0C4
    /* b 0x805cd1c0 */ // 0x805CD0C8
    r12 = *(0x12c + r28); // lwz @ 0x805CD0CC
    r3 = r28 + 0x12c; // 0x805CD0D0
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD0D8
    /* mtctr r12 */ // 0x805CD0DC
    /* bctrl  */ // 0x805CD0E0
    r12 = *(0x134 + r28); // lwz @ 0x805CD0E4
    r5 = r3;
    r3 = r28 + 0x134; // 0x805CD0EC
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD0F4
    /* mtctr r12 */ // 0x805CD0F8
    /* bctrl  */ // 0x805CD0FC
    r12 = *(0x13c + r28); // lwz @ 0x805CD100
    r5 = r3;
    r3 = r28 + 0x13c; // 0x805CD108
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD110
    /* mtctr r12 */ // 0x805CD114
    /* bctrl  */ // 0x805CD118
    r12 = *(0x144 + r28); // lwz @ 0x805CD11C
    r5 = r3;
    r3 = r28 + 0x144; // 0x805CD124
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD12C
    /* mtctr r12 */ // 0x805CD130
    /* bctrl  */ // 0x805CD134
    r0 = *(0x130 + r28); // lbz @ 0x805CD138
    r5 = r3;
    if (!=) goto 0x0x805cd18c;
    r4 = *(0x138 + r28); // lbz @ 0x805CD148
    if (!=) goto 0x0x805cd174;
    r0 = *(0x140 + r28); // lbz @ 0x805CD154
    if (!=) goto 0x0x805cd174;
    r0 = *(0x148 + r28); // lhz @ 0x805CD160
    if (!=) goto 0x0x805cd174;
    *(0x12 + r25) = r26; // stb @ 0x805CD16C
    /* b 0x805cd18c */ // 0x805CD170
    r3 = *(0x148 + r28); // lhz @ 0x805CD174
    r0 = *(0x140 + r28); // lbz @ 0x805CD178
    *(0x12 + r25) = r27; // stb @ 0x805CD17C
    *(0xc + r25) = r4; // sth @ 0x805CD180
    *(0xe + r25) = r0; // stb @ 0x805CD184
    *(0x10 + r25) = r3; // sth @ 0x805CD188
    r12 = *(0x16c + r28); // lwz @ 0x805CD18C
    r3 = r28 + 0x16c; // 0x805CD190
    r4 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x805CD198
    /* mtctr r12 */ // 0x805CD19C
    /* bctrl  */ // 0x805CD1A0
    r0 = *(0x130 + r28); // lbz @ 0x805CD1A4
    r5 = r3;
    if (!=) goto 0x0x805cd1bc;
    r0 = *(0x170 + r28); // lhz @ 0x805CD1B4
    *(0x1a + r25) = r0; // sth @ 0x805CD1B8
    r30 = r30 + 1; // 0x805CD1BC
    r0 = *(0x168 + r28); // lbz @ 0x805CD1C0
    /* clrlwi r3, r30, 0x18 */ // 0x805CD1C4
    if (<) goto 0x0x805cd0cc;
    r0 = *(0x34 + r1); // lwz @ 0x805CD1D4
    return;
}