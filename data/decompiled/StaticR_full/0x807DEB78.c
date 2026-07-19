/* Function at 0x807DEB78, size=528 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807DEB78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807DEB80
    /* li r0, 0 */ // 0x807DEB88
    r4 = r4 + 0; // 0x807DEB8C
    *(0x2c + r1) = r31; // stw @ 0x807DEB90
    /* lis r31, 0 */ // 0x807DEB94
    r31 = r31 + 0; // 0x807DEB98
    *(0x28 + r1) = r30; // stw @ 0x807DEB9C
    /* lis r30, 0 */ // 0x807DEBA0
    r30 = r30 + 0; // 0x807DEBA4
    *(0x24 + r1) = r29; // stw @ 0x807DEBA8
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x807DEBB0
    *(0x30 + r3) = r0; // stb @ 0x807DEBB4
    *(0x31 + r3) = r0; // stb @ 0x807DEBB8
    *(0x32 + r3) = r0; // stb @ 0x807DEBBC
    r0 = *(4 + r4); // lwz @ 0x807DEBC0
    if (>) goto 0x0x807debe0;
    r12 = *(0 + r4); // lwz @ 0x807DEBCC
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x807DEBD4
    /* mtctr r12 */ // 0x807DEBD8
    /* bctrl  */ // 0x807DEBDC
    FUN_805D9918(r3); // bl 0x805D9918
    /* clrlwi r3, r3, 0x10 */ // 0x807DEBE4
    /* lis r0, 0x4330 */ // 0x807DEBE8
    *(0x14 + r1) = r3; // stw @ 0x807DEBEC
    /* lis r3, 0 */ // 0x807DEBF0
    /* lfd f1, 0x2b8(r31) */ // 0x807DEBF4
    r3 = r3 + 0; // 0x807DEBF8
    *(0x10 + r1) = r0; // stw @ 0x807DEBFC
    /* lfd f0, 0x10(r1) */ // 0x807DEC00
    /* fsubs f0, f0, f1 */ // 0x807DEC04
    /* stfs f0, 0x20(r29) */ // 0x807DEC08
    r0 = *(4 + r3); // lwz @ 0x807DEC0C
    if (>) goto 0x0x807dec28;
    r12 = *(0 + r3); // lwz @ 0x807DEC18
    r12 = *(0x18 + r12); // lwz @ 0x807DEC1C
    /* mtctr r12 */ // 0x807DEC20
    /* bctrl  */ // 0x807DEC24
    FUN_805D9934(); // bl 0x805D9934
    /* clrlwi r3, r3, 0x10 */ // 0x807DEC2C
    /* lis r0, 0x4330 */ // 0x807DEC30
    *(0x14 + r1) = r3; // stw @ 0x807DEC34
    /* lis r3, 0 */ // 0x807DEC38
    /* lfd f1, 0x2b8(r31) */ // 0x807DEC3C
    r3 = r3 + 0; // 0x807DEC40
    *(0x10 + r1) = r0; // stw @ 0x807DEC44
    /* lfd f0, 0x10(r1) */ // 0x807DEC48
    /* fsubs f0, f0, f1 */ // 0x807DEC4C
    /* stfs f0, 0x24(r29) */ // 0x807DEC50
    r0 = *(4 + r3); // lwz @ 0x807DEC54
    if (>) goto 0x0x807dec70;
    r12 = *(0 + r3); // lwz @ 0x807DEC60
    r12 = *(0x18 + r12); // lwz @ 0x807DEC64
    /* mtctr r12 */ // 0x807DEC68
    /* bctrl  */ // 0x807DEC6C
    /* lis r28, 0 */ // 0x807DEC70
    /* lfs f0, 0xc(r30) */ // 0x807DEC74
    r28 = r28 + 0; // 0x807DEC78
    r6 = r30 + 0xc; // 0x807DEC7C
    r3 = *(8 + r28); // lwz @ 0x807DEC80
    r5 = r30 + 0x24; // 0x807DEC84
    r4 = r30 + 0x3c; // 0x807DEC88
    r3 = *(0 + r3); // lwz @ 0x807DEC8C
    r3 = *(0x6c + r3); // lwz @ 0x807DEC90
    /* stfs f0, 0x64(r3) */ // 0x807DEC94
    /* lfs f0, 4(r6) */ // 0x807DEC98
    /* stfs f0, 0x68(r3) */ // 0x807DEC9C
    /* lfs f0, 8(r6) */ // 0x807DECA0
    /* stfs f0, 0x6c(r3) */ // 0x807DECA4
    /* lfs f0, 0x24(r30) */ // 0x807DECA8
    /* stfs f0, 0x70(r3) */ // 0x807DECAC
    /* lfs f0, 4(r5) */ // 0x807DECB0
    /* stfs f0, 0x74(r3) */ // 0x807DECB4
    /* lfs f0, 8(r5) */ // 0x807DECB8
    /* stfs f0, 0x78(r3) */ // 0x807DECBC
    /* lfs f0, 0x3c(r30) */ // 0x807DECC0
    /* stfs f0, 0x7c(r3) */ // 0x807DECC4
    /* lfs f0, 4(r4) */ // 0x807DECC8
    /* stfs f0, 0x80(r3) */ // 0x807DECCC
    /* lfs f0, 8(r4) */ // 0x807DECD0
    /* stfs f0, 0x84(r3) */ // 0x807DECD4
    r12 = *(0 + r3); // lwz @ 0x807DECD8
    r12 = *(0x14 + r12); // lwz @ 0x807DECDC
    /* mtctr r12 */ // 0x807DECE0
    /* bctrl  */ // 0x807DECE4
    r0 = *(4 + r28); // lwz @ 0x807DECE8
    if (>) goto 0x0x807ded08;
    r12 = *(0 + r28); // lwz @ 0x807DECF4
    r3 = r28;
    r12 = *(0x18 + r12); // lwz @ 0x807DECFC
    /* mtctr r12 */ // 0x807DED00
    /* bctrl  */ // 0x807DED04
    /* lis r3, 0 */ // 0x807DED08
    /* lfs f2, 0x294(r31) */ // 0x807DED0C
    r3 = r3 + 0; // 0x807DED10
    r3 = *(8 + r3); // lwz @ 0x807DED14
    r28 = *(0 + r3); // lwz @ 0x807DED18
    /* lfs f0, 0x10(r28) */ // 0x807DED1C
    /* fcmpu cr0, f0, f2 */ // 0x807DED20
    if (==) goto 0x0x807ded58;
    /* lfs f1, 0x2ac(r31) */ // 0x807DED28
    /* lfs f0, 0x2b0(r31) */ // 0x807DED30
    /* fmuls f1, f2, f1 */ // 0x807DED38
    /* stfs f2, 0x10(r28) */ // 0x807DED3C
    /* fmuls f1, f0, f1 */ // 0x807DED40
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0xc(r1) */ // 0x807DED48
    /* lfs f0, 8(r1) */ // 0x807DED4C
    /* fdivs f0, f1, f0 */ // 0x807DED50
    /* stfs f0, 0x14(r28) */ // 0x807DED54
    r3 = *(0x34 + r29); // lwz @ 0x807DED58
    r12 = *(0 + r3); // lwz @ 0x807DED5C
    r12 = *(8 + r12); // lwz @ 0x807DED60
    /* mtctr r12 */ // 0x807DED64
    /* bctrl  */ // 0x807DED68
    /* li r0, 0 */ // 0x807DED6C
    *(0x38 + r29) = r0; // stb @ 0x807DED70
    *(0x39 + r29) = r0; // stb @ 0x807DED74
    r31 = *(0x2c + r1); // lwz @ 0x807DED78
    r30 = *(0x28 + r1); // lwz @ 0x807DED7C
    r29 = *(0x24 + r1); // lwz @ 0x807DED80
    r28 = *(0x20 + r1); // lwz @ 0x807DED84
}