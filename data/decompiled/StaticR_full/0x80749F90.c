/* Function at 0x80749F90, size=864 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80749F90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80749FA8
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80749FB0
    if (==) goto 0x0x80749fd4;
    if (==) goto 0x0x8074a094;
    if (==) goto 0x0x8074a154;
    if (==) goto 0x0x8074a214;
    /* b 0x8074a2d0 */ // 0x80749FD0
    r0 = *(0x15c + r3); // lbz @ 0x80749FD4
    if (!=) goto 0x0x8074a2d0;
    r0 = *(0x180 + r3); // lbz @ 0x80749FE0
    if (==) goto 0x0x8074a2d0;
    r12 = *(0 + r3); // lwz @ 0x80749FEC
    r12 = *(0x24 + r12); // lwz @ 0x80749FF0
    /* mtctr r12 */ // 0x80749FF4
    /* bctrl  */ // 0x80749FF8
    /* lis r4, 0 */ // 0x80749FFC
    /* lis r5, 0 */ // 0x8074A000
    r6 = *(0 + r4); // lwz @ 0x8074A004
    /* clrlwi r4, r3, 0x10 */ // 0x8074A008
    r3 = *(0 + r5); // lwz @ 0x8074A00C
    r0 = *(0xb70 + r6); // lwz @ 0x8074A010
    if (!=) goto 0x0x8074a05c;
    r0 = *(0xb9e + r6); // lhz @ 0x8074A01C
    if (!=) goto 0x0x8074a05c;
    r29 = *(0x10 + r3); // lwz @ 0x8074A02C
    if (<) goto 0x0x8074a050;
    r12 = *(0 + r29); // lwz @ 0x8074A034
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x8074A03C
    /* mtctr r12 */ // 0x8074A040
    /* bctrl  */ // 0x8074A044
    if (==) goto 0x0x8074a05c;
    r3 = *(8 + r29); // lwz @ 0x8074A050
    r0 = r3 + 1; // 0x8074A054
    *(8 + r29) = r0; // stw @ 0x8074A058
    r0 = *(0xb4 + r30); // lhz @ 0x8074A05C
    /* li r3, 1 */ // 0x8074A060
    *(0x15c + r30) = r3; // stb @ 0x8074A064
    if (!=) goto 0x0x8074a2d0;
    r4 = *(8 + r30); // lwz @ 0x8074A070
    /* lis r3, 0 */ // 0x8074A074
    /* lis r5, 0 */ // 0x8074A078
    /* lfs f1, 0(r3) */ // 0x8074A07C
    r3 = *(0x28 + r4); // lwz @ 0x8074A080
    /* li r4, 1 */ // 0x8074A084
    /* lfs f2, 0(r5) */ // 0x8074A088
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x8074a2d0 */ // 0x8074A090
    r0 = *(0x15c + r3); // lbz @ 0x8074A094
    if (!=) goto 0x0x8074a2d0;
    r0 = *(0x180 + r3); // lbz @ 0x8074A0A0
    if (==) goto 0x0x8074a2d0;
    r12 = *(0 + r3); // lwz @ 0x8074A0AC
    r12 = *(0x24 + r12); // lwz @ 0x8074A0B0
    /* mtctr r12 */ // 0x8074A0B4
    /* bctrl  */ // 0x8074A0B8
    /* lis r4, 0 */ // 0x8074A0BC
    /* lis r5, 0 */ // 0x8074A0C0
    r6 = *(0 + r4); // lwz @ 0x8074A0C4
    /* clrlwi r4, r3, 0x10 */ // 0x8074A0C8
    r3 = *(0 + r5); // lwz @ 0x8074A0CC
    r0 = *(0xb70 + r6); // lwz @ 0x8074A0D0
    if (!=) goto 0x0x8074a11c;
    r0 = *(0xb9e + r6); // lhz @ 0x8074A0DC
    if (!=) goto 0x0x8074a11c;
    r29 = *(0x10 + r3); // lwz @ 0x8074A0EC
    if (<) goto 0x0x8074a110;
    r12 = *(0 + r29); // lwz @ 0x8074A0F4
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x8074A0FC
    /* mtctr r12 */ // 0x8074A100
    /* bctrl  */ // 0x8074A104
    if (==) goto 0x0x8074a11c;
    r3 = *(8 + r29); // lwz @ 0x8074A110
    r0 = r3 + 1; // 0x8074A114
    *(8 + r29) = r0; // stw @ 0x8074A118
    r0 = *(0xb4 + r30); // lhz @ 0x8074A11C
    /* li r3, 1 */ // 0x8074A120
    *(0x15c + r30) = r3; // stb @ 0x8074A124
    if (!=) goto 0x0x8074a2d0;
    r4 = *(8 + r30); // lwz @ 0x8074A130
    /* lis r3, 0 */ // 0x8074A134
    /* lis r5, 0 */ // 0x8074A138
    /* lfs f1, 0(r3) */ // 0x8074A13C
    r3 = *(0x28 + r4); // lwz @ 0x8074A140
    /* li r4, 1 */ // 0x8074A144
    /* lfs f2, 0(r5) */ // 0x8074A148
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x8074a2d0 */ // 0x8074A150
    r0 = *(0x15c + r3); // lbz @ 0x8074A154
    if (!=) goto 0x0x8074a2d0;
    r0 = *(0x180 + r3); // lbz @ 0x8074A160
    if (==) goto 0x0x8074a2d0;
    r12 = *(0 + r3); // lwz @ 0x8074A16C
    r12 = *(0x24 + r12); // lwz @ 0x8074A170
    /* mtctr r12 */ // 0x8074A174
    /* bctrl  */ // 0x8074A178
    /* lis r4, 0 */ // 0x8074A17C
    /* lis r5, 0 */ // 0x8074A180
    r6 = *(0 + r4); // lwz @ 0x8074A184
    /* clrlwi r4, r3, 0x10 */ // 0x8074A188
    r3 = *(0 + r5); // lwz @ 0x8074A18C
    r0 = *(0xb70 + r6); // lwz @ 0x8074A190
    if (!=) goto 0x0x8074a1dc;
    r0 = *(0xb9e + r6); // lhz @ 0x8074A19C
    if (!=) goto 0x0x8074a1dc;
    r29 = *(0x10 + r3); // lwz @ 0x8074A1AC
    if (<) goto 0x0x8074a1d0;
    r12 = *(0 + r29); // lwz @ 0x8074A1B4
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x8074A1BC
    /* mtctr r12 */ // 0x8074A1C0
    /* bctrl  */ // 0x8074A1C4
    if (==) goto 0x0x8074a1dc;
    r3 = *(8 + r29); // lwz @ 0x8074A1D0
    r0 = r3 + 1; // 0x8074A1D4
    *(8 + r29) = r0; // stw @ 0x8074A1D8
    r0 = *(0xb4 + r30); // lhz @ 0x8074A1DC
    /* li r3, 1 */ // 0x8074A1E0
    *(0x15c + r30) = r3; // stb @ 0x8074A1E4
    if (!=) goto 0x0x8074a2d0;
    r4 = *(8 + r30); // lwz @ 0x8074A1F0
    /* lis r3, 0 */ // 0x8074A1F4
    /* lis r5, 0 */ // 0x8074A1F8
    /* lfs f1, 0(r3) */ // 0x8074A1FC
    r3 = *(0x28 + r4); // lwz @ 0x8074A200
    /* li r4, 1 */ // 0x8074A204
    /* lfs f2, 0(r5) */ // 0x8074A208
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x8074a2d0 */ // 0x8074A210
    r0 = *(0x15c + r3); // lbz @ 0x8074A214
    if (!=) goto 0x0x8074a2d0;
    r0 = *(0x180 + r3); // lbz @ 0x8074A220
    if (==) goto 0x0x8074a2d0;
    r12 = *(0 + r3); // lwz @ 0x8074A22C
    r12 = *(0x24 + r12); // lwz @ 0x8074A230
    /* mtctr r12 */ // 0x8074A234
    /* bctrl  */ // 0x8074A238
    /* lis r4, 0 */ // 0x8074A23C
    /* lis r5, 0 */ // 0x8074A240
    r6 = *(0 + r4); // lwz @ 0x8074A244
    /* clrlwi r4, r3, 0x10 */ // 0x8074A248
    r3 = *(0 + r5); // lwz @ 0x8074A24C
    r0 = *(0xb70 + r6); // lwz @ 0x8074A250
    if (!=) goto 0x0x8074a29c;
    r0 = *(0xb9e + r6); // lhz @ 0x8074A25C
    if (!=) goto 0x0x8074a29c;
    r29 = *(0x10 + r3); // lwz @ 0x8074A26C
    if (<) goto 0x0x8074a290;
    r12 = *(0 + r29); // lwz @ 0x8074A274
    r3 = r29;
    r12 = *(0x38 + r12); // lwz @ 0x8074A27C
    /* mtctr r12 */ // 0x8074A280
    /* bctrl  */ // 0x8074A284
    if (==) goto 0x0x8074a29c;
    r3 = *(8 + r29); // lwz @ 0x8074A290
    r0 = r3 + 1; // 0x8074A294
    *(8 + r29) = r0; // stw @ 0x8074A298
    r0 = *(0xb4 + r30); // lhz @ 0x8074A29C
    /* li r3, 1 */ // 0x8074A2A0
    *(0x15c + r30) = r3; // stb @ 0x8074A2A4
    if (!=) goto 0x0x8074a2d0;
    r4 = *(8 + r30); // lwz @ 0x8074A2B0
    /* lis r3, 0 */ // 0x8074A2B4
    /* lis r5, 0 */ // 0x8074A2B8
    /* lfs f1, 0(r3) */ // 0x8074A2BC
    r3 = *(0x28 + r4); // lwz @ 0x8074A2C0
    /* li r4, 1 */ // 0x8074A2C4
    /* lfs f2, 0(r5) */ // 0x8074A2C8
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x8074A2D4
    r30 = *(0x18 + r1); // lwz @ 0x8074A2D8
    r29 = *(0x14 + r1); // lwz @ 0x8074A2DC
    r0 = *(0x24 + r1); // lwz @ 0x8074A2E0
    return;
}