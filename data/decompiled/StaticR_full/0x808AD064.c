/* Function at 0x808AD064, size=356 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808AD064(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0 */ // 0x808AD078
    *(0x28 + r1) = r30; // stw @ 0x808AD07C
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x808AD084
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808AD090
    r0 = *(0x54 + r29); // lbz @ 0x808AD094
    r4 = r4 + 0; // 0x808AD098
    *(0 + r29) = r4; // stw @ 0x808AD09C
    r5 = *(0xa0 + r29); // lwz @ 0x808AD0A0
    /* lis r3, 0x4330 */ // 0x808AD0A4
    *(0x18 + r1) = r3; // stw @ 0x808AD0A8
    /* lis r4, 0 */ // 0x808AD0AC
    r5 = *(0 + r5); // lwz @ 0x808AD0B0
    /* lfd f1, 0(r4) */ // 0x808AD0B8
    r0 = *(0x2a + r5); // lha @ 0x808AD0BC
    r7 = *(0x30 + r29); // lwz @ 0x808AD0C0
    /* xoris r0, r0, 0x8000 */ // 0x808AD0C4
    *(0x1c + r1) = r0; // stw @ 0x808AD0C8
    r6 = *(0x34 + r29); // lwz @ 0x808AD0CC
    /* lfd f0, 0x18(r1) */ // 0x808AD0D0
    r5 = *(0x38 + r29); // lwz @ 0x808AD0D4
    /* fsubs f0, f0, f1 */ // 0x808AD0D8
    r4 = *(0x3c + r29); // lwz @ 0x808AD0DC
    r3 = *(0x40 + r29); // lwz @ 0x808AD0E0
    r0 = *(0x44 + r29); // lwz @ 0x808AD0E4
    /* stfs f0, 0xb4(r29) */ // 0x808AD0E8
    *(0xc0 + r29) = r7; // stw @ 0x808AD0EC
    *(0xc4 + r29) = r6; // stw @ 0x808AD0F0
    *(0xc8 + r29) = r5; // stw @ 0x808AD0F4
    *(0xcc + r29) = r4; // stw @ 0x808AD0F8
    *(0xd0 + r29) = r3; // stw @ 0x808AD0FC
    *(0xd4 + r29) = r0; // stw @ 0x808AD100
    if (==) goto 0x0x808ad110;
    r4 = r29 + 0x48; // 0x808AD108
    /* b 0x808ad140 */ // 0x808AD10C
    /* li r0, 1 */ // 0x808AD110
    *(0x54 + r29) = r0; // stb @ 0x808AD114
    r4 = r29 + 0x58; // 0x808AD11C
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808AD124
    r4 = r29 + 0x48; // 0x808AD128
    /* stfs f0, 0x48(r29) */ // 0x808AD12C
    /* lfs f0, 0xc(r1) */ // 0x808AD130
    /* stfs f0, 0x4c(r29) */ // 0x808AD134
    /* lfs f0, 0x10(r1) */ // 0x808AD138
    /* stfs f0, 0x50(r29) */ // 0x808AD13C
    r6 = *(0 + r4); // lwz @ 0x808AD140
    /* li r0, 0 */ // 0x808AD144
    r5 = *(4 + r4); // lwz @ 0x808AD148
    /* lis r3, 0 */ // 0x808AD14C
    r4 = *(8 + r4); // lwz @ 0x808AD150
    *(0xd8 + r29) = r6; // stw @ 0x808AD154
    *(0xdc + r29) = r5; // stw @ 0x808AD158
    *(0xe0 + r29) = r4; // stw @ 0x808AD15C
    *(0x104 + r29) = r0; // stw @ 0x808AD160
    *(0x108 + r29) = r31; // stw @ 0x808AD164
    r3 = *(0 + r3); // lwz @ 0x808AD168
    r0 = *(0x55 + r3); // lbz @ 0x808AD16C
    if (==) goto 0x0x808ad1d0;
    if (!=) goto 0x0x808ad1d0;
    /* lis r3, 0 */ // 0x808AD180
    r3 = *(0 + r3); // lwz @ 0x808AD184
    r0 = *(0x24 + r3); // lbz @ 0x808AD188
    if (!=) goto 0x0x808ad1d0;
    r0 = *(0x128 + r3); // lwz @ 0x808AD194
    if (!=) goto 0x0x808ad1d0;
    /* li r3, 0x118 */ // 0x808AD1A0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808ad1bc;
    r4 = r30;
    /* li r5, 1 */ // 0x808AD1B4
    FUN_808AD064(r4, r5); // bl 0x808AD064
    *(0x104 + r29) = r3; // stw @ 0x808AD1BC
    r12 = *(0 + r3); // lwz @ 0x808AD1C0
    r12 = *(0x20 + r12); // lwz @ 0x808AD1C4
}