/* Function at 0x808FECBC, size=604 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808FECBC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x808FECC4
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808FECD4
    *(0x24 + r1) = r29; // stw @ 0x808FECD8
    *(0x20 + r1) = r28; // stw @ 0x808FECDC
    r0 = *(0x14c + r3); // lwz @ 0x808FECE0
    r4 = *(0 + r4); // lwz @ 0x808FECE4
    if (>) goto 0x0x808fed80;
    r0 = *(0x54 + r3); // lbz @ 0x808FECF0
    if (==) goto 0x0x808fed04;
    r5 = r3 + 0x48; // 0x808FECFC
    /* b 0x808fed34 */ // 0x808FED00
    /* li r0, 1 */ // 0x808FED04
    *(0x54 + r3) = r0; // stb @ 0x808FED08
    r4 = r31 + 0x58; // 0x808FED10
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808FED18
    r5 = r31 + 0x48; // 0x808FED1C
    /* stfs f0, 0x48(r31) */ // 0x808FED20
    /* lfs f0, 0xc(r1) */ // 0x808FED24
    /* stfs f0, 0x4c(r31) */ // 0x808FED28
    /* lfs f0, 0x10(r1) */ // 0x808FED2C
    /* stfs f0, 0x50(r31) */ // 0x808FED30
    /* lis r3, 0 */ // 0x808FED34
    /* lis r4, 0 */ // 0x808FED38
    /* lfs f0, 0(r3) */ // 0x808FED3C
    /* lis r0, 0x4330 */ // 0x808FED40
    /* lfs f1, 4(r5) */ // 0x808FED44
    /* lis r3, 0 */ // 0x808FED48
    r28 = *(0 + r4); // lwz @ 0x808FED4C
    /* fdivs f2, f1, f0 */ // 0x808FED50
    *(0x1c + r1) = r28; // stw @ 0x808FED54
    /* lfd f1, 0(r3) */ // 0x808FED58
    *(0x18 + r1) = r0; // stw @ 0x808FED5C
    /* lfd f0, 0x18(r1) */ // 0x808FED60
    /* fsubs f0, f0, f1 */ // 0x808FED64
    /* fmuls f1, f2, f0 */ // 0x808FED68
    FUN_805E3430(); // bl 0x805E3430
    r0 = r3 u/ r28; // 0x808FED70
    r0 = r0 * r28; // 0x808FED74
    /* subf r0, r0, r3 */ // 0x808FED78
    *(0x14c + r31) = r0; // stw @ 0x808FED7C
    r12 = *(0 + r31); // lwz @ 0x808FED80
    r3 = r31;
    /* li r4, 1 */ // 0x808FED88
    r12 = *(0x68 + r12); // lwz @ 0x808FED8C
    /* mtctr r12 */ // 0x808FED90
    /* bctrl  */ // 0x808FED94
    r12 = *(0 + r31); // lwz @ 0x808FED98
    r3 = r31;
    /* li r4, 1 */ // 0x808FEDA0
    r12 = *(0xf0 + r12); // lwz @ 0x808FEDA4
    /* mtctr r12 */ // 0x808FEDA8
    /* bctrl  */ // 0x808FEDAC
    /* li r29, 0 */ // 0x808FEDB0
    /* li r28, 0 */ // 0x808FEDB4
    /* li r30, 0 */ // 0x808FEDB8
    /* b 0x808fedf4 */ // 0x808FEDBC
    r0 = *(0x314 + r31); // lwz @ 0x808FEDC0
    r3 = r0 + r28; // 0x808FEDC4
    *(8 + r3) = r30; // stw @ 0x808FEDC8
    r3 = *(0x314 + r31); // lwz @ 0x808FEDCC
    /* lwzx r3, r3, r28 */ // 0x808FEDD0
    if (==) goto 0x0x808fedec;
    r12 = *(0 + r3); // lwz @ 0x808FEDDC
    r12 = *(0x10 + r12); // lwz @ 0x808FEDE0
    /* mtctr r12 */ // 0x808FEDE4
    /* bctrl  */ // 0x808FEDE8
    r28 = r28 + 0x64; // 0x808FEDEC
    r29 = r29 + 1; // 0x808FEDF0
    r0 = *(0x310 + r31); // lwz @ 0x808FEDF4
    if (<) goto 0x0x808fedc0;
    r4 = *(0x314 + r31); // lwz @ 0x808FEE00
    r3 = *(0xc8 + r4); // lwz @ 0x808FEE04
    if (==) goto 0x0x808fee64;
    r0 = *(0xd4 + r4); // lbz @ 0x808FEE10
    if (==) goto 0x0x808fee64;
    r0 = *(0xcc + r4); // lbz @ 0x808FEE1C
    if (!=) goto 0x0x808fee48;
    r5 = *(0xd8 + r4); // lwz @ 0x808FEE28
    if (==) goto 0x0x808fee48;
    /* lis r4, 0x101 */ // 0x808FEE34
    r0 = *(0x20 + r5); // lwz @ 0x808FEE38
    r4 = r4 + 0x101; // 0x808FEE3C
    /* andc. r0, r4, r0 */ // 0x808FEE40
    if (==) goto 0x0x808fee64;
    r12 = *(0 + r3); // lwz @ 0x808FEE48
    r12 = *(0xc + r12); // lwz @ 0x808FEE4C
    /* mtctr r12 */ // 0x808FEE50
    /* bctrl  */ // 0x808FEE54
    r3 = *(0x314 + r31); // lwz @ 0x808FEE58
    /* li r0, -1 */ // 0x808FEE5C
    *(0xd0 + r3) = r0; // stw @ 0x808FEE60
    r3 = *(0x314 + r31); // lwz @ 0x808FEE64
    r4 = r31 + 0x3c; // 0x808FEE68
    /* lfs f0, 0x3c(r31) */ // 0x808FEE6C
    /* stfs f0, 0xe8(r3) */ // 0x808FEE70
    /* lfs f0, 0x40(r31) */ // 0x808FEE74
    /* stfs f0, 0xec(r3) */ // 0x808FEE78
    /* lfs f0, 0x44(r31) */ // 0x808FEE7C
    /* stfs f0, 0xf0(r3) */ // 0x808FEE80
    r3 = *(0x314 + r31); // lwz @ 0x808FEE84
    r3 = *(0xc8 + r3); // lwz @ 0x808FEE88
    if (==) goto 0x0x808feea4;
    r12 = *(0 + r3); // lwz @ 0x808FEE94
    r12 = *(0x70 + r12); // lwz @ 0x808FEE98
    /* mtctr r12 */ // 0x808FEE9C
    /* bctrl  */ // 0x808FEEA0
    r3 = *(0x314 + r31); // lwz @ 0x808FEEA4
    r4 = r31 + 0x30; // 0x808FEEA8
    /* lfs f0, 0x30(r31) */ // 0x808FEEAC
    /* stfs f0, 0xdc(r3) */ // 0x808FEEB0
    /* lfs f0, 0x34(r31) */ // 0x808FEEB4
    /* stfs f0, 0xe0(r3) */ // 0x808FEEB8
    /* lfs f0, 0x38(r31) */ // 0x808FEEBC
    /* stfs f0, 0xe4(r3) */ // 0x808FEEC0
    r3 = *(0x314 + r31); // lwz @ 0x808FEEC4
    /* lfs f0, 0x30(r31) */ // 0x808FEEC8
    /* stfs f0, 0x100(r3) */ // 0x808FEECC
    /* lfs f0, 0x34(r31) */ // 0x808FEED0
    /* stfs f0, 0x110(r3) */ // 0x808FEED4
    /* lfs f0, 0x38(r31) */ // 0x808FEED8
    /* stfs f0, 0x120(r3) */ // 0x808FEEDC
    r3 = *(0x314 + r31); // lwz @ 0x808FEEE0
    r3 = *(0xc8 + r3); // lwz @ 0x808FEEE4
    if (==) goto 0x0x808fef00;
    r12 = *(0 + r3); // lwz @ 0x808FEEF0
    r12 = *(0x74 + r12); // lwz @ 0x808FEEF4
    /* mtctr r12 */ // 0x808FEEF8
    /* bctrl  */ // 0x808FEEFC
    /* li r0, 1 */ // 0x808FEF00
    *(0x16d + r31) = r0; // stb @ 0x808FEF04
    r31 = *(0x2c + r1); // lwz @ 0x808FEF08
    r30 = *(0x28 + r1); // lwz @ 0x808FEF0C
    r29 = *(0x24 + r1); // lwz @ 0x808FEF10
    r28 = *(0x20 + r1); // lwz @ 0x808FEF14
}