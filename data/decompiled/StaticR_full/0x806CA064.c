/* Function at 0x806CA064, size=656 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_806CA064(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x806CA07C
    *(0x30 + r1) = r28; // stw @ 0x806CA080
    r0 = *(0x17e + r3); // lbz @ 0x806CA084
    if (==) goto 0x0x806ca14c;
    r4 = *(0x17c + r3); // lha @ 0x806CA090
    r0 = r4 + -0x32; // 0x806CA094
    *(0x17c + r3) = r0; // sth @ 0x806CA098
    /* extsh. r0, r0 */ // 0x806CA09C
    if (>) goto 0x0x806ca174;
    r4 = *(0x178 + r3); // lwz @ 0x806CA0A4
    /* li r0, 0 */ // 0x806CA0A8
    *(0x174 + r3) = r4; // stw @ 0x806CA0AC
    *(0x17c + r3) = r0; // sth @ 0x806CA0B4
    if (==) goto 0x0x806ca174;
    *(0x17e + r3) = r0; // stb @ 0x806CA0BC
    /* lis r3, 0 */ // 0x806CA0C0
    r3 = *(0 + r3); // lwz @ 0x806CA0C4
    r3 = *(0 + r3); // lwz @ 0x806CA0C8
    r29 = *(0x204 + r3); // lwz @ 0x806CA0CC
    if (!=) goto 0x0x806ca0e0;
    /* li r29, 0 */ // 0x806CA0D8
    /* b 0x806ca134 */ // 0x806CA0DC
    /* lis r31, 0 */ // 0x806CA0E0
    r31 = r31 + 0; // 0x806CA0E4
    if (==) goto 0x0x806ca130;
    r12 = *(0 + r29); // lwz @ 0x806CA0EC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806CA0F4
    /* mtctr r12 */ // 0x806CA0F8
    /* bctrl  */ // 0x806CA0FC
    /* b 0x806ca118 */ // 0x806CA100
    if (!=) goto 0x0x806ca114;
    /* li r0, 1 */ // 0x806CA10C
    /* b 0x806ca124 */ // 0x806CA110
    r3 = *(0 + r3); // lwz @ 0x806CA114
    if (!=) goto 0x0x806ca104;
    /* li r0, 0 */ // 0x806CA120
    if (==) goto 0x0x806ca130;
    /* b 0x806ca134 */ // 0x806CA12C
    /* li r29, 0 */ // 0x806CA130
    if (==) goto 0x0x806ca174;
    r4 = *(0x174 + r30); // lwz @ 0x806CA13C
    r3 = r29;
    FUN_806CCB40(r3); // bl 0x806CCB40
    /* b 0x806ca174 */ // 0x806CA148
    r0 = *(0x174 + r3); // lwz @ 0x806CA14C
    if (==) goto 0x0x806ca174;
    r4 = *(0x17c + r3); // lha @ 0x806CA158
    /* li r0, 0xff */ // 0x806CA15C
    r4 = r4 + 0x32; // 0x806CA160
    if (>) goto 0x0x806ca170;
    r0 = r4;
    *(0x17c + r3) = r0; // sth @ 0x806CA170
    r0 = *(0x174 + r30); // lwz @ 0x806CA174
    /* li r3, 0 */ // 0x806CA178
    if (!=) goto 0x0x806ca194;
    r0 = *(0x17c + r30); // lha @ 0x806CA184
    if (!=) goto 0x0x806ca194;
    /* li r3, 1 */ // 0x806CA190
    *(0x80 + r30) = r3; // stb @ 0x806CA194
    /* lis r3, 0 */ // 0x806CA198
    r3 = *(0 + r3); // lwz @ 0x806CA19C
    r3 = *(0 + r3); // lwz @ 0x806CA1A0
    r29 = *(0x204 + r3); // lwz @ 0x806CA1A4
    if (!=) goto 0x0x806ca1b8;
    /* li r29, 0 */ // 0x806CA1B0
    /* b 0x806ca20c */ // 0x806CA1B4
    /* lis r31, 0 */ // 0x806CA1B8
    r31 = r31 + 0; // 0x806CA1BC
    if (==) goto 0x0x806ca208;
    r12 = *(0 + r29); // lwz @ 0x806CA1C4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806CA1CC
    /* mtctr r12 */ // 0x806CA1D0
    /* bctrl  */ // 0x806CA1D4
    /* b 0x806ca1f0 */ // 0x806CA1D8
    if (!=) goto 0x0x806ca1ec;
    /* li r0, 1 */ // 0x806CA1E4
    /* b 0x806ca1fc */ // 0x806CA1E8
    r3 = *(0 + r3); // lwz @ 0x806CA1EC
    if (!=) goto 0x0x806ca1dc;
    /* li r0, 0 */ // 0x806CA1F8
    if (==) goto 0x0x806ca208;
    /* b 0x806ca20c */ // 0x806CA204
    /* li r29, 0 */ // 0x806CA208
    if (==) goto 0x0x806ca3d4;
    r0 = *(0x174 + r30); // lwz @ 0x806CA214
    r3 = r29;
    /* li r4, 0 */ // 0x806CA21C
    if (!=) goto 0x0x806ca234;
    r0 = *(0x17c + r30); // lha @ 0x806CA228
    if (==) goto 0x0x806ca238;
    /* li r4, 1 */ // 0x806CA234
    FUN_806CCBEC(r4); // bl 0x806CCBEC
    r3 = r29;
    FUN_806CCC2C(r4, r3); // bl 0x806CCC2C
    r28 = r3;
    if (==) goto 0x0x806ca3d4;
    /* lis r4, 0 */ // 0x806CA250
    r3 = r30 + 0xa8; // 0x806CA254
    r4 = r4 + 0; // 0x806CA258
    r4 = r4 + 0x3d; // 0x806CA25C
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r31 = r3;
    if (!=) goto 0x0x806ca278;
    /* li r31, 0 */ // 0x806CA270
    /* b 0x806ca2c8 */ // 0x806CA274
    /* lis r29, 0 */ // 0x806CA278
    r29 = r29 + 0; // 0x806CA27C
    if (==) goto 0x0x806ca2c4;
    r12 = *(0 + r3); // lwz @ 0x806CA284
    r12 = *(0xc + r12); // lwz @ 0x806CA288
    /* mtctr r12 */ // 0x806CA28C
    /* bctrl  */ // 0x806CA290
    /* b 0x806ca2ac */ // 0x806CA294
    if (!=) goto 0x0x806ca2a8;
    /* li r0, 1 */ // 0x806CA2A0
    /* b 0x806ca2b8 */ // 0x806CA2A4
    r3 = *(0 + r3); // lwz @ 0x806CA2A8
    if (!=) goto 0x0x806ca298;
    /* li r0, 0 */ // 0x806CA2B4
    if (==) goto 0x0x806ca2c4;
    /* b 0x806ca2c8 */ // 0x806CA2C0
    /* li r31, 0 */ // 0x806CA2C4
    r4 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x28 + r1); // lwz @ 0x806CA2D4
    /* li r4, 0 */ // 0x806CA2D8
    *(0x14 + r1) = r4; // stw @ 0x806CA2DC
    r3 = r31;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x28 + r1) = r0; // stw @ 0x806CA2E8
    *(0x26 + r1) = r4; // sth @ 0x806CA2EC
    r12 = *(0 + r31); // lwz @ 0x806CA2F0
}