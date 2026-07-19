/* Function at 0x808CC03C, size=1128 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r31 */
/* Calls: 14 function(s) */

int FUN_808CC03C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -448(r1) */
    /* saved r31 */
    *(0x1bc + r1) = r31; // stw @ 0x808CC048
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808CC050
    if (!=) goto 0x0x808cc094;
    r0 = *(4 + r3); // lwz @ 0x808CC05C
    if (<) goto 0x0x808cc070;
    if (<=) goto 0x0x808cc078;
    if (!=) goto 0x0x808cc094;
    /* lis r3, 0 */ // 0x808CC078
    r3 = *(0 + r3); // lwz @ 0x808CC07C
    FUN_807A2604(r3); // bl 0x807A2604
    r3 = r31;
    /* li r4, 0xd3 */ // 0x808CC088
    /* li r5, -1 */ // 0x808CC08C
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* lis r3, 0 */ // 0x808CC094
    /* li r5, 1 */ // 0x808CC098
    r4 = *(0 + r3); // lwz @ 0x808CC09C
    /* li r3, 0 */ // 0x808CC0A0
    r4 = *(0x26 + r4); // lbz @ 0x808CC0A4
    /* cmpwi cr1, r4, 0 */
    if (<=) goto 0x0x808cc180;
    r7 = r4 + -8; // 0x808CC0B4
    if (<=) goto 0x0x808cc15c;
    /* li r8, 0 */ // 0x808CC0BC
    if (<) goto 0x0x808cc0d8;
    /* lis r6, -0x8000 */ // 0x808CC0C4
    r0 = r6 + -2; // 0x808CC0C8
    if (>) goto 0x0x808cc0d8;
    /* li r8, 1 */ // 0x808CC0D4
    if (==) goto 0x0x808cc15c;
    r0 = r7 + 7; // 0x808CC0E0
    /* li r10, 1 */ // 0x808CC0E4
    /* srwi r0, r0, 3 */ // 0x808CC0E8
    /* mtctr r0 */ // 0x808CC0EC
    if (<=) goto 0x0x808cc15c;
    r8 = r10 << r3; // slw
    r7 = r3 + 1; // 0x808CC0FC
    r6 = r3 + 2; // 0x808CC100
    r0 = r3 + 3; // 0x808CC104
    r8 = r5 | r8; // 0x808CC108
    r5 = r10 << r7; // slw
    r11 = r8 | r5; // 0x808CC110
    r9 = r10 << r6; // slw
    r7 = r3 + 4; // 0x808CC118
    r8 = r10 << r0; // slw
    r9 = r11 | r9; // 0x808CC120
    r6 = r3 + 5; // 0x808CC124
    r5 = r3 + 6; // 0x808CC128
    r0 = r3 + 7; // 0x808CC12C
    r8 = r9 | r8; // 0x808CC130
    r7 = r10 << r7; // slw
    r7 = r8 | r7; // 0x808CC138
    r6 = r10 << r6; // slw
    r6 = r7 | r6; // 0x808CC140
    r5 = r10 << r5; // slw
    r5 = r6 | r5; // 0x808CC148
    r0 = r10 << r0; // slw
    r5 = r5 | r0; // 0x808CC150
    r3 = r3 + 8; // 0x808CC154
    if (counter-- != 0) goto 0x0x808cc0f8;
    /* subf r0, r3, r4 */ // 0x808CC15C
    /* li r6, 1 */ // 0x808CC160
    /* mtctr r0 */ // 0x808CC164
    if (>=) goto 0x0x808cc180;
    r0 = r6 << r3; // slw
    r3 = r3 + 1; // 0x808CC174
    r5 = r5 | r0; // 0x808CC178
    if (counter-- != 0) goto 0x0x808cc170;
    r12 = *(0x11c + r31); // lwz @ 0x808CC180
    r0 = r4 + -2; // 0x808CC184
    /* li r6, 2 */ // 0x808CC188
    r7 = *(0x44 + r31); // lwz @ 0x808CC18C
    /* orc r4, r4, r6 */ // 0x808CC190
    /* srwi r0, r0, 1 */ // 0x808CC194
    /* subf r0, r0, r4 */ // 0x808CC198
    r12 = *(0x1c + r12); // lwz @ 0x808CC19C
    /* li r4, 1 */ // 0x808CC1A0
    r3 = r31 + 0x11c; // 0x808CC1A4
    /* srwi r6, r0, 0x1f */ // 0x808CC1A8
    r4 = r4 << r7; // slw
    /* mtctr r12 */ // 0x808CC1B0
    /* bctrl  */ // 0x808CC1B4
    r0 = *(0x54 + r31); // lwz @ 0x808CC1B8
    if (>) goto 0x0x808cc1d4;
    r3 = r31 + 0x11c; // 0x808CC1C4
    /* li r4, 2 */ // 0x808CC1C8
    FUN_8066A380(r3, r4); // bl 0x8066A380
    /* b 0x808cc1e0 */ // 0x808CC1D0
    r3 = r31 + 0x11c; // 0x808CC1D4
    /* li r4, 1 */ // 0x808CC1D8
    FUN_8066A380(r4, r3, r4); // bl 0x8066A380
    r3 = *(0x48 + r31); // lwz @ 0x808CC1E0
    r4 = *(0x44 + r31); // lwz @ 0x808CC1E4
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    r0 = *(4 + r31); // lwz @ 0x808CC1EC
    if (!=) goto 0x0x808cc200;
    /* li r0, 0x21 */ // 0x808CC1F8
    *(0x58 + r31) = r0; // stw @ 0x808CC1FC
    r0 = *(4 + r31); // lwz @ 0x808CC200
    if (!=) goto 0x0x808cc22c;
    /* lis r3, 0 */ // 0x808CC20C
    r3 = *(0 + r3); // lwz @ 0x808CC210
    r3 = *(0 + r3); // lwz @ 0x808CC214
    r0 = *(0 + r3); // lwz @ 0x808CC218
    if (!=) goto 0x0x808cc22c;
    r3 = *(0x50 + r31); // lwz @ 0x808CC224
    FUN_806AEB28(); // bl 0x806AEB28
    r12 = *(0 + r31); // lwz @ 0x808CC22C
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808CC234
    /* mtctr r12 */ // 0x808CC238
    /* bctrl  */ // 0x808CC23C
    if (==) goto 0x0x808cc494;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(4 + r31); // lwz @ 0x808CC250
    if (==) goto 0x0x808cc270;
    if (==) goto 0x0x808cc404;
    if (==) goto 0x0x808cc42c;
    /* b 0x808cc470 */ // 0x808CC26C
    /* lis r3, 0 */ // 0x808CC270
    /* li r0, 0 */ // 0x808CC274
    r3 = *(0 + r3); // lwz @ 0x808CC278
    /* lis r7, 0 */ // 0x808CC27C
    r7 = r7 + 0; // 0x808CC280
    *(0xc + r1) = r0; // sth @ 0x808CC284
    r4 = *(0xc + r3); // lwz @ 0x808CC288
    *(0xe + r1) = r0; // stb @ 0x808CC290
    r4 = *(0 + r4); // lwz @ 0x808CC294
    *(0x10 + r1) = r0; // sth @ 0x808CC298
    r8 = *(0x40 + r4); // lwz @ 0x808CC29C
    *(0x12 + r1) = r0; // stb @ 0x808CC2A0
    r6 = *(4 + r8); // lhz @ 0x808CC2A4
    r5 = *(6 + r8); // lbz @ 0x808CC2A8
    r4 = *(8 + r8); // lhz @ 0x808CC2AC
    r0 = *(0xa + r8); // lbz @ 0x808CC2B0
    *(8 + r1) = r7; // stw @ 0x808CC2B4
    *(0xc + r1) = r6; // sth @ 0x808CC2B8
    *(0xe + r1) = r5; // stb @ 0x808CC2BC
    *(0x10 + r1) = r4; // sth @ 0x808CC2C0
    *(0x12 + r1) = r0; // stb @ 0x808CC2C4
    FUN_805ABE9C(); // bl 0x805ABE9C
    /* lis r4, 0 */ // 0x808CC2CC
    r4 = *(0 + r4); // lwz @ 0x808CC2D4
    r4 = *(0xc0c + r4); // lwz @ 0x808CC2D8
    FUN_805AC3BC(r4, r3); // bl 0x805AC3BC
    r0 = *(0x12 + r1); // lbz @ 0x808CC2E0
    r3 = *(0xc0 + r1); // lhz @ 0x808CC2E4
    r4 = *(0xc2 + r1); // lbz @ 0x808CC2EC
    r5 = *(0xc4 + r1); // lhz @ 0x808CC2F0
    r0 = *(0xc6 + r1); // lbz @ 0x808CC2F4
    if (!=) goto 0x0x808cc304;
    /* li r4, 0 */ // 0x808CC2FC
    /* b 0x808cc35c */ // 0x808CC300
    if (!=) goto 0x0x808cc314;
    /* li r4, 1 */ // 0x808CC30C
    /* b 0x808cc35c */ // 0x808CC310
    r0 = *(0xc + r1); // lhz @ 0x808CC314
    if (>=) goto 0x0x808cc328;
    /* li r4, 1 */ // 0x808CC320
    /* b 0x808cc35c */ // 0x808CC324
    if (!=) goto 0x0x808cc358;
    r0 = *(0xe + r1); // lbz @ 0x808CC32C
    if (>=) goto 0x0x808cc340;
    /* li r4, 1 */ // 0x808CC338
    /* b 0x808cc35c */ // 0x808CC33C
    if (!=) goto 0x0x808cc358;
    r0 = *(0x10 + r1); // lhz @ 0x808CC344
    if (>) goto 0x0x808cc358;
    /* li r4, 1 */ // 0x808CC350
    /* b 0x808cc35c */ // 0x808CC354
    /* li r4, 0 */ // 0x808CC358
    /* neg r0, r4 */ // 0x808CC35C
    /* lis r3, 0 */ // 0x808CC360
    r0 = r0 | r4; // 0x808CC364
    r4 = r0 >> 0x1f; // srawi
    r0 = r4 + 0x533; // 0x808CC36C
    *(0x340 + r31) = r0; // stw @ 0x808CC370
    r5 = *(0 + r3); // lwz @ 0x808CC374
    r0 = *(0x36 + r5); // lha @ 0x808CC378
    if (<) goto 0x0x808cc3a0;
    /* lis r3, 1 */ // 0x808CC384
    /* clrlwi r4, r0, 0x18 */ // 0x808CC388
    r0 = r3 + -0x6c10; // 0x808CC38C
    r0 = r0 * r4; // 0x808CC390
    r3 = r5 + r0; // 0x808CC394
    r3 = r3 + 0x38; // 0x808CC398
    /* b 0x808cc3a4 */ // 0x808CC39C
    /* li r3, 0 */ // 0x808CC3A0
    /* addis r3, r3, 1 */ // 0x808CC3A4
    r0 = *(-0x6d74 + r3); // lwz @ 0x808CC3A8
    *(0xf0 + r1) = r0; // stw @ 0x808CC3AC
    r0 = *(0x36 + r5); // lha @ 0x808CC3B0
    if (<) goto 0x0x808cc3d8;
    /* lis r3, 1 */ // 0x808CC3BC
    /* clrlwi r4, r0, 0x18 */ // 0x808CC3C0
    r0 = r3 + -0x6c10; // 0x808CC3C4
    r0 = r0 * r4; // 0x808CC3C8
    r3 = r5 + r0; // 0x808CC3CC
    r3 = r3 + 0x38; // 0x808CC3D0
    /* b 0x808cc3dc */ // 0x808CC3D4
    /* li r3, 0 */ // 0x808CC3D8
    /* addis r3, r3, 1 */ // 0x808CC3DC
    /* lis r4, 0 */ // 0x808CC3E0
    r0 = *(-0x6d70 + r3); // lwz @ 0x808CC3E4
    *(0xf4 + r1) = r0; // stw @ 0x808CC3EC
    r4 = r4 + 0; // 0x808CC3F0
    /* li r5, 0xc */ // 0x808CC3F4
    /* li r6, 5 */ // 0x808CC3F8
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x808cc470 */ // 0x808CC400
    /* li r0, 0x451 */ // 0x808CC404
    *(0x340 + r31) = r0; // stw @ 0x808CC408
    /* lis r3, 0 */ // 0x808CC40C
    /* li r4, 1 */ // 0x808CC410
    r3 = *(0 + r3); // lwz @ 0x808CC414
    r3 = *(0x98 + r3); // lwz @ 0x808CC418
    r3 = r3 + 0x188; // 0x808CC41C
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    *(0x138 + r1) = r3; // stw @ 0x808CC424
    /* b 0x808cc470 */ // 0x808CC428
    /* lis r3, 0 */ // 0x808CC42C
    r3 = *(0 + r3); // lwz @ 0x808CC430
    r3 = *(0 + r3); // lwz @ 0x808CC434
    r0 = *(0 + r3); // lwz @ 0x808CC438
    if (!=) goto 0x0x808cc470;
    /* li r0, 0x45e */ // 0x808CC444
    *(0x340 + r31) = r0; // stw @ 0x808CC448
    r3 = *(0x48 + r31); // lwz @ 0x808CC44C
    /* li r4, 0x455 */ // 0x808CC450
    /* li r5, 0 */ // 0x808CC454
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    r3 = *(0x48 + r31); // lwz @ 0x808CC45C
    /* li r4, 0x454 */ // 0x808CC460
    /* li r5, 0 */ // 0x808CC464
    r3 = r3 + 0x254; // 0x808CC468
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    r12 = *(0 + r31); // lwz @ 0x808CC470
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808CC478
    /* mtctr r12 */ // 0x808CC47C
    /* bctrl  */ // 0x808CC480
    r4 = r3;
    r3 = *(0x4c + r31); // lwz @ 0x808CC488
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    r0 = *(0x1c4 + r1); // lwz @ 0x808CC494
    r31 = *(0x1bc + r1); // lwz @ 0x808CC498
}