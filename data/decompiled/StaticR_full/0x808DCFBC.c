/* Function at 0x808DCFBC, size=860 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808DCFBC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r8, 0x4330 */ // 0x808DCFC4
    /* lis r5, 0 */ // 0x808DCFC8
    *(0x44 + r1) = r0; // stw @ 0x808DCFCC
    *(0x3c + r1) = r31; // stw @ 0x808DCFD0
    r31 = r3;
    r7 = *(0 + r5); // lwz @ 0x808DCFD8
    /* lis r5, 0 */ // 0x808DCFDC
    r6 = *(0x104 + r3); // lwz @ 0x808DCFE0
    r5 = r5 + 0; // 0x808DCFE4
    r7 = *(0x20 + r7); // lwz @ 0x808DCFE8
    r0 = *(0x108 + r3); // lwz @ 0x808DCFEC
    *(0xc + r1) = r0; // stw @ 0x808DCFF0
    /* subf r7, r4, r7 */ // 0x808DCFF4
    *(8 + r1) = r6; // stw @ 0x808DCFF8
    r0 = *(0x10c + r3); // lwz @ 0x808DCFFC
    *(0x10 + r1) = r0; // stw @ 0x808DD000
    r6 = *(0x124 + r3); // lwz @ 0x808DD004
    r0 = *(0x118 + r3); // lwz @ 0x808DD008
    r4 = r7 / r6; // 0x808DD00C
    *(0x18 + r1) = r8; // stw @ 0x808DD010
    *(0x20 + r1) = r8; // stw @ 0x808DD014
    r4 = r4 * r6; // 0x808DD018
    /* subf r8, r4, r7 */ // 0x808DD01C
    if (>=) goto 0x0x808dd030;
    /* li r6, 0 */ // 0x808DD028
    /* b 0x808dd060 */ // 0x808DD02C
    r7 = *(0x11c + r3); // lwz @ 0x808DD030
    r4 = r0 + r7; // 0x808DD034
    if (>=) goto 0x0x808dd048;
    /* li r6, 1 */ // 0x808DD040
    /* b 0x808dd060 */ // 0x808DD044
    /* slwi r4, r0, 1 */ // 0x808DD048
    /* li r6, 3 */ // 0x808DD04C
    r4 = r4 + r7; // 0x808DD050
    if (>=) goto 0x0x808dd060;
    /* li r6, 2 */ // 0x808DD05C
    if (==) goto 0x0x808dd084;
    if (==) goto 0x0x808dd0b8;
    if (==) goto 0x0x808dd0c0;
    if (==) goto 0x0x808dd1b0;
    /* b 0x808dd2a4 */ // 0x808DD080
    r0 = *(0x110 + r3); // lbz @ 0x808DD084
    /* li r4, 1 */ // 0x808DD088
    if (==) goto 0x0x808dd098;
    /* li r4, -1 */ // 0x808DD094
    /* xoris r0, r4, 0x8000 */ // 0x808DD098
    *(0x1c + r1) = r0; // stw @ 0x808DD09C
    /* lfd f2, 0x10(r5) */ // 0x808DD0A0
    /* lfd f1, 0x18(r1) */ // 0x808DD0A4
    /* lfs f0, 0x114(r3) */ // 0x808DD0A8
    /* fsubs f1, f1, f2 */ // 0x808DD0AC
    /* fmuls f4, f0, f1 */ // 0x808DD0B0
    /* b 0x808dd2a8 */ // 0x808DD0B4
    /* lfs f4, 0(r5) */ // 0x808DD0B8
    /* b 0x808dd2a8 */ // 0x808DD0BC
    if (>=) goto 0x0x808dd0e0;
    /* xoris r4, r8, 0x8000 */ // 0x808DD0C8
    *(0x24 + r1) = r4; // stw @ 0x808DD0CC
    /* lfd f1, 0x10(r5) */ // 0x808DD0D0
    /* lfd f0, 0x20(r1) */ // 0x808DD0D4
    /* fsubs f0, f0, f1 */ // 0x808DD0D8
    /* b 0x808dd158 */ // 0x808DD0DC
    r7 = *(0x11c + r3); // lwz @ 0x808DD0E0
    r9 = r0 + r7; // 0x808DD0E4
    if (>=) goto 0x0x808dd10c;
    /* subf r4, r0, r8 */ // 0x808DD0F0
    /* lfd f1, 0x10(r5) */ // 0x808DD0F4
    /* xoris r4, r4, 0x8000 */ // 0x808DD0F8
    *(0x1c + r1) = r4; // stw @ 0x808DD0FC
    /* lfd f0, 0x18(r1) */ // 0x808DD100
    /* fsubs f0, f0, f1 */ // 0x808DD104
    /* b 0x808dd158 */ // 0x808DD108
    /* slwi r6, r0, 1 */ // 0x808DD10C
    r4 = r6 + r7; // 0x808DD110
    if (>=) goto 0x0x808dd138;
    /* subf r4, r9, r8 */ // 0x808DD11C
    /* lfd f1, 0x10(r5) */ // 0x808DD120
    /* xoris r4, r4, 0x8000 */ // 0x808DD124
    *(0x24 + r1) = r4; // stw @ 0x808DD128
    /* lfd f0, 0x20(r1) */ // 0x808DD12C
    /* fsubs f0, f0, f1 */ // 0x808DD130
    /* b 0x808dd158 */ // 0x808DD134
    /* neg r4, r6 */ // 0x808DD138
    /* lfd f1, 0x10(r5) */ // 0x808DD13C
    /* subf r4, r7, r4 */ // 0x808DD140
    r4 = r4 + r8; // 0x808DD144
    /* xoris r4, r4, 0x8000 */ // 0x808DD148
    *(0x1c + r1) = r4; // stw @ 0x808DD14C
    /* lfd f0, 0x18(r1) */ // 0x808DD150
    /* fsubs f0, f0, f1 */ // 0x808DD154
    /* fctiwz f0, f0 */ // 0x808DD158
    r4 = *(0x110 + r3); // lbz @ 0x808DD15C
    /* li r6, 1 */ // 0x808DD160
    /* stfd f0, 0x28(r1) */ // 0x808DD164
    r4 = *(0x2c + r1); // lwz @ 0x808DD16C
    if (==) goto 0x0x808dd178;
    /* li r6, -1 */ // 0x808DD174
    r4 = r4 * r6; // 0x808DD178
    /* xoris r0, r0, 0x8000 */ // 0x808DD17C
    *(0x1c + r1) = r0; // stw @ 0x808DD180
    /* lfd f3, 0x10(r5) */ // 0x808DD184
    /* lfd f0, 0x18(r1) */ // 0x808DD188
    /* lfs f1, 0x114(r3) */ // 0x808DD18C
    /* xoris r0, r4, 0x8000 */ // 0x808DD190
    *(0x24 + r1) = r0; // stw @ 0x808DD194
    /* fsubs f0, f0, f3 */ // 0x808DD198
    /* lfd f2, 0x20(r1) */ // 0x808DD19C
    /* fsubs f2, f2, f3 */ // 0x808DD1A0
    /* fmuls f1, f1, f2 */ // 0x808DD1A4
    /* fdivs f4, f1, f0 */ // 0x808DD1A8
    /* b 0x808dd2a8 */ // 0x808DD1AC
    if (>=) goto 0x0x808dd1d0;
    /* xoris r4, r8, 0x8000 */ // 0x808DD1B8
    *(0x24 + r1) = r4; // stw @ 0x808DD1BC
    /* lfd f1, 0x10(r5) */ // 0x808DD1C0
    /* lfd f0, 0x20(r1) */ // 0x808DD1C4
    /* fsubs f0, f0, f1 */ // 0x808DD1C8
    /* b 0x808dd248 */ // 0x808DD1CC
    r7 = *(0x11c + r3); // lwz @ 0x808DD1D0
    r9 = r0 + r7; // 0x808DD1D4
    if (>=) goto 0x0x808dd1fc;
    /* subf r4, r0, r8 */ // 0x808DD1E0
    /* lfd f1, 0x10(r5) */ // 0x808DD1E4
    /* xoris r4, r4, 0x8000 */ // 0x808DD1E8
    *(0x1c + r1) = r4; // stw @ 0x808DD1EC
    /* lfd f0, 0x18(r1) */ // 0x808DD1F0
    /* fsubs f0, f0, f1 */ // 0x808DD1F4
    /* b 0x808dd248 */ // 0x808DD1F8
    /* slwi r6, r0, 1 */ // 0x808DD1FC
    r4 = r6 + r7; // 0x808DD200
    if (>=) goto 0x0x808dd228;
    /* subf r4, r9, r8 */ // 0x808DD20C
    /* lfd f1, 0x10(r5) */ // 0x808DD210
    /* xoris r4, r4, 0x8000 */ // 0x808DD214
    *(0x24 + r1) = r4; // stw @ 0x808DD218
    /* lfd f0, 0x20(r1) */ // 0x808DD21C
    /* fsubs f0, f0, f1 */ // 0x808DD220
    /* b 0x808dd248 */ // 0x808DD224
    /* neg r4, r6 */ // 0x808DD228
    /* lfd f1, 0x10(r5) */ // 0x808DD22C
    /* subf r4, r7, r4 */ // 0x808DD230
    r4 = r4 + r8; // 0x808DD234
    /* xoris r4, r4, 0x8000 */ // 0x808DD238
    *(0x1c + r1) = r4; // stw @ 0x808DD23C
    /* lfd f0, 0x18(r1) */ // 0x808DD240
    /* fsubs f0, f0, f1 */ // 0x808DD244
    /* fctiwz f0, f0 */ // 0x808DD248
    r4 = *(0x110 + r3); // lbz @ 0x808DD24C
    /* li r6, 1 */ // 0x808DD250
    /* stfd f0, 0x28(r1) */ // 0x808DD254
    r4 = *(0x2c + r1); // lwz @ 0x808DD25C
    if (==) goto 0x0x808dd268;
    /* li r6, -1 */ // 0x808DD264
    /* subf r4, r4, r0 */ // 0x808DD268
    /* xoris r0, r0, 0x8000 */ // 0x808DD26C
    r4 = r6 * r4; // 0x808DD270
    *(0x1c + r1) = r0; // stw @ 0x808DD274
    /* lfd f3, 0x10(r5) */ // 0x808DD278
    /* lfd f0, 0x18(r1) */ // 0x808DD27C
    /* lfs f1, 0x114(r3) */ // 0x808DD280
    /* fsubs f0, f0, f3 */ // 0x808DD284
    /* xoris r0, r4, 0x8000 */ // 0x808DD288
    *(0x24 + r1) = r0; // stw @ 0x808DD28C
    /* lfd f2, 0x20(r1) */ // 0x808DD290
    /* fsubs f2, f2, f3 */ // 0x808DD294
    /* fmuls f1, f1, f2 */ // 0x808DD298
    /* fdivs f4, f1, f0 */ // 0x808DD29C
    /* b 0x808dd2a8 */ // 0x808DD2A0
    /* lfs f4, 0(r5) */ // 0x808DD2A4
    /* lfs f0, 0x18(r5) */ // 0x808DD2A8
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DD2AC
    if (>=) goto 0x0x808dd2bc;
    /* fmr f4, f0 */ // 0x808DD2B4
    /* b 0x808dd2cc */ // 0x808DD2B8
    /* lfs f0, 0x1c(r5) */ // 0x808DD2BC
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x808DD2C0
    if (<=) goto 0x0x808dd2cc;
    /* fmr f4, f0 */ // 0x808DD2C8
    /* fabs f2, f4 */ // 0x808DD2CC
    /* lfs f3, 0x20(r5) */ // 0x808DD2D0
    /* lfs f1, 0x1c(r5) */ // 0x808DD2D4
    /* lfs f0, 0(r5) */ // 0x808DD2D8
    /* fmuls f2, f3, f2 */ // 0x808DD2DC
    /* fdivs f1, f2, f1 */ // 0x808DD2E0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808DD2E4
    if (>=) goto 0x0x808dd2f0;
    /* b 0x808dd2f4 */ // 0x808DD2EC
    /* .byte 0xfc, 0x01, 0x18, 0x40 */ // 0x808DD2F0
    /* lfs f1, 0x24(r5) */ // 0x808DD2F4
    /* lfs f0, 0x28(r5) */ // 0x808DD2FC
    r5 = r31 + 0x30; // 0x808DD300
    /* fmuls f1, f1, f4 */ // 0x808DD304
    r3 = r3 + 0x12c; // 0x808DD308
    /* fdivs f0, f1, f0 */ // 0x808DD30C
    /* stfs f0, 0x10(r1) */ // 0x808DD310
    FUN_805E3430(r5, r3); // bl 0x805E3430
}