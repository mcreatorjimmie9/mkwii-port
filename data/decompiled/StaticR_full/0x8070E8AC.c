/* Function at 0x8070E8AC, size=732 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8070E8AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r6, 0x4330 */ // 0x8070E8B4
    /* lis r5, 0 */ // 0x8070E8B8
    *(0x54 + r1) = r0; // stw @ 0x8070E8BC
    /* li r0, 0 */ // 0x8070E8C0
    r5 = r5 + 0; // 0x8070E8C4
    *(0x4c + r1) = r31; // stw @ 0x8070E8C8
    /* lis r31, 0 */ // 0x8070E8CC
    r31 = r31 + 0; // 0x8070E8D0
    *(0x48 + r1) = r30; // stw @ 0x8070E8D4
    r30 = r3;
    /* lfs f1, 0x70(r31) */ // 0x8070E8DC
    *(0x44 + r1) = r29; // stw @ 0x8070E8E0
    /* lfd f0, 0x60(r31) */ // 0x8070E8E4
    *(0x10c + r3) = r0; // stw @ 0x8070E8E8
    /* lfs f6, 0x74(r31) */ // 0x8070E8EC
    *(0x1ac + r3) = r0; // stw @ 0x8070E8F0
    /* lfs f5, 0x78(r31) */ // 0x8070E8F4
    *(0x1c5 + r3) = r0; // stb @ 0x8070E8F8
    /* lfs f4, 0x7c(r31) */ // 0x8070E8FC
    r4 = *(8 + r5); // lwz @ 0x8070E900
    /* lfs f2, 0xc(r5) */ // 0x8070E904
    /* xoris r4, r4, 0x8000 */ // 0x8070E908
    *(8 + r1) = r6; // stw @ 0x8070E90C
    /* fsubs f2, f1, f2 */ // 0x8070E910
    r7 = *(0x160 + r3); // lwz @ 0x8070E914
    *(0xc + r1) = r4; // stw @ 0x8070E918
    /* lfd f3, 8(r1) */ // 0x8070E91C
    *(0x10 + r1) = r6; // stw @ 0x8070E920
    /* fsubs f7, f3, f0 */ // 0x8070E924
    /* lfs f3, 0x80(r31) */ // 0x8070E928
    /* fmuls f7, f7, f2 */ // 0x8070E92C
    /* fmuls f6, f6, f7 */ // 0x8070E930
    /* fdivs f6, f6, f1 */ // 0x8070E934
    /* fctiwz f6, f6 */ // 0x8070E938
    /* stfd f6, 0x18(r1) */ // 0x8070E93C
    r10 = *(0x1c + r1); // lwz @ 0x8070E940
    *(0x170 + r3) = r10; // stw @ 0x8070E944
    r4 = *(8 + r5); // lwz @ 0x8070E948
    /* xoris r4, r4, 0x8000 */ // 0x8070E94C
    *(0x14 + r1) = r4; // stw @ 0x8070E950
    /* lfd f6, 0x10(r1) */ // 0x8070E954
    /* fsubs f6, f6, f0 */ // 0x8070E958
    /* fmuls f6, f6, f2 */ // 0x8070E95C
    /* fmuls f5, f5, f6 */ // 0x8070E960
    /* fdivs f5, f5, f1 */ // 0x8070E964
    /* fctiwz f5, f5 */ // 0x8070E968
    /* stfd f5, 0x20(r1) */ // 0x8070E96C
    r4 = *(0x24 + r1); // lwz @ 0x8070E970
    *(0x174 + r3) = r4; // stw @ 0x8070E974
    r4 = r10 + r4; // 0x8070E978
    r6 = *(8 + r5); // lwz @ 0x8070E97C
    /* lfs f5, 0xc(r5) */ // 0x8070E980
    /* xoris r6, r6, 0x8000 */ // 0x8070E984
    *(0xc + r1) = r6; // stw @ 0x8070E988
    /* lfd f6, 8(r1) */ // 0x8070E98C
    /* fsubs f6, f6, f0 */ // 0x8070E990
    /* fmuls f5, f6, f5 */ // 0x8070E994
    /* fdivs f5, f5, f1 */ // 0x8070E998
    /* fctiwz f5, f5 */ // 0x8070E99C
    /* stfd f5, 0x28(r1) */ // 0x8070E9A0
    r6 = *(0x2c + r1); // lwz @ 0x8070E9A4
    *(0x178 + r3) = r6; // stw @ 0x8070E9A8
    r6 = r4 + r6; // 0x8070E9AC
    r8 = *(8 + r5); // lwz @ 0x8070E9B0
    /* xoris r8, r8, 0x8000 */ // 0x8070E9B4
    *(0x14 + r1) = r8; // stw @ 0x8070E9B8
    /* lfd f5, 0x10(r1) */ // 0x8070E9BC
    /* fsubs f5, f5, f0 */ // 0x8070E9C0
    /* fmuls f5, f5, f2 */ // 0x8070E9C4
    /* fmuls f4, f4, f5 */ // 0x8070E9C8
    /* fdivs f4, f4, f1 */ // 0x8070E9CC
    /* fctiwz f4, f4 */ // 0x8070E9D0
    /* stfd f4, 0x30(r1) */ // 0x8070E9D4
    r9 = *(0x34 + r1); // lwz @ 0x8070E9D8
    *(0x17c + r3) = r9; // stw @ 0x8070E9DC
    r8 = *(8 + r5); // lwz @ 0x8070E9E0
    /* xoris r8, r8, 0x8000 */ // 0x8070E9E4
    *(0xc + r1) = r8; // stw @ 0x8070E9E8
    /* lfd f4, 8(r1) */ // 0x8070E9EC
    *(0x184 + r3) = r7; // stw @ 0x8070E9F0
    /* fsubs f4, f4, f0 */ // 0x8070E9F4
    *(0x188 + r3) = r0; // stw @ 0x8070E9F8
    /* fmuls f2, f4, f2 */ // 0x8070E9FC
    *(0x18c + r3) = r10; // stw @ 0x8070EA00
    *(0x190 + r3) = r4; // stw @ 0x8070EA04
    /* fmuls f2, f3, f2 */ // 0x8070EA08
    *(0x194 + r3) = r6; // stw @ 0x8070EA0C
    /* fdivs f1, f2, f1 */ // 0x8070EA10
    /* fctiwz f1, f1 */ // 0x8070EA14
    /* stfd f1, 0x38(r1) */ // 0x8070EA18
    r8 = *(0x3c + r1); // lwz @ 0x8070EA1C
    *(0x180 + r3) = r8; // stw @ 0x8070EA20
    /* xoris r4, r10, 0x8000 */ // 0x8070EA24
    *(0x14 + r1) = r4; // stw @ 0x8070EA28
    r7 = r6 + r9; // 0x8070EA2C
    /* lfs f5, 0x168(r3) */ // 0x8070EA30
    /* lfs f2, 0x4c(r31) */ // 0x8070EA34
    r6 = r7 + r8; // 0x8070EA38
    /* lfd f1, 0x10(r1) */ // 0x8070EA3C
    /* xoris r4, r9, 0x8000 */ // 0x8070EA40
    /* fsubs f2, f5, f2 */ // 0x8070EA44
    *(0x198 + r3) = r7; // stw @ 0x8070EA48
    /* fsubs f1, f1, f0 */ // 0x8070EA4C
    /* lfs f3, 0x84(r31) */ // 0x8070EA50
    *(0x14 + r1) = r4; // stw @ 0x8070EA54
    /* li r4, 0 */ // 0x8070EA58
    /* fdivs f4, f2, f1 */ // 0x8070EA5C
    /* lfd f1, 0x10(r1) */ // 0x8070EA60
    *(0x19c + r3) = r6; // stw @ 0x8070EA64
    /* lfs f2, 0x88(r31) */ // 0x8070EA68
    /* stfs f4, 0x1a0(r3) */ // 0x8070EA6C
    /* fsubs f1, f1, f0 */ // 0x8070EA70
    r6 = *(0x10 + r5); // lwz @ 0x8070EA74
    /* xoris r6, r6, 0x8000 */ // 0x8070EA78
    *(0xc + r1) = r6; // stw @ 0x8070EA7C
    /* lfd f4, 8(r1) */ // 0x8070EA80
    /* fsubs f0, f4, f0 */ // 0x8070EA84
    /* fdivs f0, f3, f0 */ // 0x8070EA88
    /* stfs f0, 0x14(r5) */ // 0x8070EA8C
    r29 = *(0x15c + r3); // lwz @ 0x8070EA90
    /* lfs f0, 0xb4(r29) */ // 0x8070EA94
    /* fmuls f0, f0, f5 */ // 0x8070EA98
    /* stfs f0, 0x1a8(r3) */ // 0x8070EA9C
    /* fadds f0, f2, f0 */ // 0x8070EAA0
    /* fdivs f0, f0, f1 */ // 0x8070EAA4
    /* stfs f0, 0x1b8(r3) */ // 0x8070EAA8
    r3 = r29;
    *(0xbc + r29) = r0; // stb @ 0x8070EAB0
    r12 = *(0 + r29); // lwz @ 0x8070EAB4
    r12 = *(0x68 + r12); // lwz @ 0x8070EAB8
    /* mtctr r12 */ // 0x8070EABC
    /* bctrl  */ // 0x8070EAC0
    r12 = *(0 + r29); // lwz @ 0x8070EAC4
    r3 = r29;
    r12 = *(0x90 + r12); // lwz @ 0x8070EACC
    /* mtctr r12 */ // 0x8070EAD0
    /* bctrl  */ // 0x8070EAD4
    r3 = *(0x15c + r30); // lwz @ 0x8070EAD8
    /* li r4, 0 */ // 0x8070EADC
    /* lfs f0, 0x168(r30) */ // 0x8070EAE0
    /* lfs f1, 0xb4(r3) */ // 0x8070EAE4
    r0 = *(0x2c + r3); // lhz @ 0x8070EAE8
    /* fmuls f0, f1, f0 */ // 0x8070EAEC
    /* lfs f2, 0x34(r30) */ // 0x8070EAF0
    r0 = r0 | 1; // 0x8070EAF4
    /* lfs f1, 0(r31) */ // 0x8070EAF8
    *(0x2c + r3) = r0; // sth @ 0x8070EAFC
    /* fsubs f0, f2, f0 */ // 0x8070EB00
    /* lfs f2, 0x4c(r31) */ // 0x8070EB04
    /* stfs f0, 0x34(r3) */ // 0x8070EB08
    r3 = *(8 + r30); // lwz @ 0x8070EB0C
    r3 = *(0x28 + r3); // lwz @ 0x8070EB10
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r30); // lwz @ 0x8070EB18
    /* li r4, 2 */ // 0x8070EB1C
    r3 = *(0x28 + r3); // lwz @ 0x8070EB20
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070EB28
    r12 = *(8 + r12); // lwz @ 0x8070EB2C
    /* mtctr r12 */ // 0x8070EB30
    /* bctrl  */ // 0x8070EB34
    /* stfs f1, 0x1c8(r30) */ // 0x8070EB38
    /* li r4, 2 */ // 0x8070EB3C
    r3 = *(8 + r30); // lwz @ 0x8070EB40
    r3 = *(0x28 + r3); // lwz @ 0x8070EB44
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8070EB4C
    /* lfs f1, 0(r31) */ // 0x8070EB50
    r12 = *(0x14 + r12); // lwz @ 0x8070EB54
    /* mtctr r12 */ // 0x8070EB58
    /* bctrl  */ // 0x8070EB5C
    r3 = r30;
    /* li r4, 0 */ // 0x8070EB64
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x54 + r1); // lwz @ 0x8070EB6C
    r31 = *(0x4c + r1); // lwz @ 0x8070EB70
    r30 = *(0x48 + r1); // lwz @ 0x8070EB74
    r29 = *(0x44 + r1); // lwz @ 0x8070EB78
    return;
}