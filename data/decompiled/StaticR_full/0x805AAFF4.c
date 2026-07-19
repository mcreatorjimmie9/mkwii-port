/* Function at 0x805AAFF4, size=728 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 15 function(s) */

int FUN_805AAFF4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805AB008
    r12 = *(0 + r3); // lwz @ 0x805AB00C
    r12 = *(0x28 + r12); // lwz @ 0x805AB010
    /* mtctr r12 */ // 0x805AB014
    /* bctrl  */ // 0x805AB018
    if (==) goto 0x0x805ab134;
    r0 = *(0x2541 + r31); // lbz @ 0x805AB024
    if (!=) goto 0x0x805ab04c;
    /* li r0, 1 */ // 0x805AB030
    *(0x2541 + r31) = r0; // stb @ 0x805AB034
    /* lis r3, 0 */ // 0x805AB038
    r0 = *(0 + r3); // lwz @ 0x805AB03C
    r0 = r0 | 2; // 0x805AB040
    *(0 + r3) = r0; // stw @ 0x805AB044
    /* b 0x805ab2c8 */ // 0x805AB048
    /* lis r3, 0 */ // 0x805AB04C
    r3 = *(0 + r3); // lwz @ 0x805AB050
    FUN_805B351C(r3); // bl 0x805B351C
    /* lis r3, 0 */ // 0x805AB058
    r3 = *(0 + r3); // lwz @ 0x805AB05C
    FUN_805ADD40(r3, r3); // bl 0x805ADD40
    /* lis r3, 0 */ // 0x805AB064
    r3 = *(0 + r3); // lwz @ 0x805AB068
    FUN_80698A98(r3, r3); // bl 0x80698A98
    FUN_805F47FC(r3); // bl 0x805F47FC
    /* lis r3, 0 */ // 0x805AB074
    r3 = *(0 + r3); // lwz @ 0x805AB078
    r3 = *(0x40 + r3); // lwz @ 0x805AB07C
    r12 = *(0 + r3); // lwz @ 0x805AB080
    r12 = *(0xc + r12); // lwz @ 0x805AB084
    /* mtctr r12 */ // 0x805AB088
    /* bctrl  */ // 0x805AB08C
    /* li r30, 0 */ // 0x805AB090
    /* b 0x805ab114 */ // 0x805AB094
    FUN_805B9838(); // bl 0x805B9838
    r12 = *(0 + r31); // lwz @ 0x805AB09C
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x805AB0A4
    /* mtctr r12 */ // 0x805AB0A8
    /* bctrl  */ // 0x805AB0AC
    FUN_8062AB58(r3); // bl 0x8062AB58
    r4 = *(0x2534 + r31); // lwz @ 0x805AB0B4
    r3 = r31;
    r0 = r4 + 1; // 0x805AB0BC
    *(0x2534 + r31) = r0; // stw @ 0x805AB0C0
    r12 = *(0 + r31); // lwz @ 0x805AB0C4
    r12 = *(0x28 + r12); // lwz @ 0x805AB0C8
    /* mtctr r12 */ // 0x805AB0CC
    /* bctrl  */ // 0x805AB0D0
    if (!=) goto 0x0x805ab110;
    /* lis r5, 0 */ // 0x805AB0DC
    /* li r0, 0 */ // 0x805AB0E0
    r4 = *(0 + r5); // lwz @ 0x805AB0E4
    r3 = r31;
    r4 = r4 rlwinm 0; // rlwinm
    *(0 + r5) = r4; // stw @ 0x805AB0F0
    *(0x2541 + r31) = r0; // stb @ 0x805AB0F4
    r12 = *(0 + r31); // lwz @ 0x805AB0F8
    r12 = *(0x48 + r12); // lwz @ 0x805AB0FC
    /* mtctr r12 */ // 0x805AB100
    /* bctrl  */ // 0x805AB104
    FUN_805F47FC(); // bl 0x805F47FC
    /* b 0x805ab2c8 */ // 0x805AB10C
    r30 = r30 + 1; // 0x805AB110
    r12 = *(0 + r31); // lwz @ 0x805AB114
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x805AB11C
    /* mtctr r12 */ // 0x805AB120
    /* bctrl  */ // 0x805AB124
    if (<) goto 0x0x805ab098;
    /* b 0x805ab2c8 */ // 0x805AB130
    FUN_805B9838(); // bl 0x805B9838
    /* lis r4, 0 */ // 0x805AB138
    r3 = r31;
    r0 = *(0 + r4); // lwz @ 0x805AB140
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r4) = r0; // stw @ 0x805AB148
    r12 = *(0 + r31); // lwz @ 0x805AB14C
    r12 = *(0x54 + r12); // lwz @ 0x805AB150
    /* mtctr r12 */ // 0x805AB154
    /* bctrl  */ // 0x805AB158
    *(0x2540 + r31) = r3; // stb @ 0x805AB15C
    /* lis r4, 0 */ // 0x805AB160
    /* clrlwi r5, r3, 0x18 */ // 0x805AB164
    r3 = *(0 + r4); // lwz @ 0x805AB168
    r0 = *(0x4154 + r3); // lbz @ 0x805AB16C
    if (==) goto 0x0x805ab17c;
    *(0x4154 + r3) = r5; // stb @ 0x805AB178
    /* lis r3, 0 */ // 0x805AB17C
    /* li r4, 0 */ // 0x805AB180
    r3 = *(0 + r3); // lwz @ 0x805AB184
    r3 = *(0 + r3); // lwz @ 0x805AB188
    r0 = *(0x38b + r3); // lbz @ 0x805AB18C
    if (!=) goto 0x0x805ab1a8;
    r0 = *(0x38c + r3); // lbz @ 0x805AB198
    if (!=) goto 0x0x805ab1a8;
    /* li r4, 1 */ // 0x805AB1A4
    /* lis r3, 0 */ // 0x805AB1A8
    r3 = *(0 + r3); // lwz @ 0x805AB1AC
    r0 = *(0x168c + r3); // lbz @ 0x805AB1B0
    if (==) goto 0x0x805ab1c0;
    *(0x168c + r3) = r4; // stb @ 0x805AB1BC
    /* lis r3, 0 */ // 0x805AB1C0
    r3 = *(0 + r3); // lwz @ 0x805AB1C4
    FUN_805B351C(r3); // bl 0x805B351C
    r12 = *(0 + r31); // lwz @ 0x805AB1CC
    r3 = r31;
    r12 = *(0x50 + r12); // lwz @ 0x805AB1D4
    /* mtctr r12 */ // 0x805AB1D8
    /* bctrl  */ // 0x805AB1DC
    if (==) goto 0x0x805ab224;
    r0 = *(0x2540 + r31); // lbz @ 0x805AB1E8
    if (==) goto 0x0x805ab208;
    /* lis r3, 0 */ // 0x805AB1F4
    r0 = *(0 + r3); // lwz @ 0x805AB1F8
    r0 = r0 | 1; // 0x805AB1FC
    *(0 + r3) = r0; // stw @ 0x805AB200
    /* b 0x805ab23c */ // 0x805AB204
    r12 = *(0 + r31); // lwz @ 0x805AB208
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x805AB210
    /* mtctr r12 */ // 0x805AB214
    /* bctrl  */ // 0x805AB218
    FUN_8062AB58(r3); // bl 0x8062AB58
    /* b 0x805ab23c */ // 0x805AB220
    r12 = *(0 + r31); // lwz @ 0x805AB224
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x805AB22C
    /* mtctr r12 */ // 0x805AB230
    /* bctrl  */ // 0x805AB234
    FUN_8062AB58(r3); // bl 0x8062AB58
    FUN_805F47FC(r3); // bl 0x805F47FC
    /* lis r3, 0 */ // 0x805AB240
    r3 = *(0 + r3); // lwz @ 0x805AB244
    r12 = *(0 + r3); // lwz @ 0x805AB248
    r12 = *(0xc + r12); // lwz @ 0x805AB24C
    /* mtctr r12 */ // 0x805AB250
    /* bctrl  */ // 0x805AB254
    /* lis r30, 0 */ // 0x805AB258
    r3 = *(0 + r30); // lwz @ 0x805AB25C
    FUN_805ADD40(); // bl 0x805ADD40
    r0 = *(0x252c + r31); // lwz @ 0x805AB264
    if (==) goto 0x0x805ab2b0;
    /* li r4, 0 */ // 0x805AB270
    *(0x2531 + r31) = r4; // stb @ 0x805AB274
    r3 = *(0 + r30); // lwz @ 0x805AB278
    r0 = *(0x4c + r3); // lbz @ 0x805AB27C
    if (==) goto 0x0x805ab2a0;
    r0 = *(0x2530 + r31); // lbz @ 0x805AB288
    if (!=) goto 0x0x805ab2b0;
    /* li r0, 1 */ // 0x805AB294
    *(0x2531 + r31) = r0; // stb @ 0x805AB298
    /* b 0x805ab2b0 */ // 0x805AB29C
    r0 = *(0x2530 + r31); // lbz @ 0x805AB2A0
    if (==) goto 0x0x805ab2b0;
    *(0x2530 + r31) = r4; // stb @ 0x805AB2AC
    /* lis r3, 0 */ // 0x805AB2B0
    r3 = *(0 + r3); // lwz @ 0x805AB2B4
    FUN_807A7A38(r3); // bl 0x807A7A38
    r3 = *(0x2534 + r31); // lwz @ 0x805AB2BC
    r0 = r3 + 1; // 0x805AB2C0
    *(0x2534 + r31) = r0; // stw @ 0x805AB2C4
    FUN_805E3430(); // bl 0x805E3430
}