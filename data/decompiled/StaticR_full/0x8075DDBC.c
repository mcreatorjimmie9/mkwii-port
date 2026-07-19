/* Function at 0x8075DDBC, size=652 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8075DDBC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0x4330 */ // 0x8075DDC4
    /* lis r5, 0 */ // 0x8075DDC8
    *(0x24 + r1) = r0; // stw @ 0x8075DDCC
    /* lis r4, 0 */ // 0x8075DDD0
    /* lfd f2, 0(r5) */ // 0x8075DDD4
    *(0x1c + r1) = r31; // stw @ 0x8075DDD8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8075DDE0
    r0 = *(0x1c0 + r3); // lwz @ 0x8075DDE4
    *(8 + r1) = r6; // stw @ 0x8075DDE8
    /* lfs f0, 0(r4) */ // 0x8075DDEC
    *(0xc + r1) = r0; // stw @ 0x8075DDF0
    /* lfd f1, 8(r1) */ // 0x8075DDF4
    *(0x10 + r1) = r6; // stw @ 0x8075DDF8
    /* fsubs f1, f1, f2 */ // 0x8075DDFC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075DE00
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8075DE04
    if (!=) goto 0x0x8075de1c;
    r0 = *(0x1d4 + r3); // lwz @ 0x8075DE0C
    if (!=) goto 0x0x8075de1c;
    FUN_8075E048(); // bl 0x8075E048
    r0 = *(0x1d4 + r31); // lwz @ 0x8075DE1C
    if (==) goto 0x0x8075deb8;
    *(0xc + r1) = r0; // stw @ 0x8075DE28
    /* lis r4, 0 */ // 0x8075DE2C
    r0 = *(0x1c0 + r31); // lwz @ 0x8075DE30
    /* lis r3, 0 */ // 0x8075DE34
    /* lfd f3, 0(r4) */ // 0x8075DE38
    /* lfd f0, 8(r1) */ // 0x8075DE3C
    *(0x14 + r1) = r0; // stw @ 0x8075DE40
    /* fsubs f1, f0, f3 */ // 0x8075DE44
    /* lfs f0, 0(r3) */ // 0x8075DE48
    /* lfd f2, 0x10(r1) */ // 0x8075DE4C
    /* fsubs f2, f2, f3 */ // 0x8075DE50
    /* fadds f0, f1, f0 */ // 0x8075DE54
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8075DE58
    if (<=) goto 0x0x8075deb8;
    r12 = *(0 + r31); // lwz @ 0x8075DE60
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x8075DE68
    /* mtctr r12 */ // 0x8075DE6C
    /* bctrl  */ // 0x8075DE70
    /* li r0, 0 */ // 0x8075DE74
    *(0x1bd + r31) = r0; // stb @ 0x8075DE78
    r30 = *(0xd4 + r31); // lwz @ 0x8075DE7C
    /* li r4, 0 */ // 0x8075DE80
    r3 = *(8 + r30); // lwz @ 0x8075DE84
    r3 = *(0x28 + r3); // lwz @ 0x8075DE88
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8075DE90
    r12 = *(0xc + r12); // lwz @ 0x8075DE94
    /* mtctr r12 */ // 0x8075DE98
    /* bctrl  */ // 0x8075DE9C
    r5 = *(8 + r30); // lwz @ 0x8075DEA0
    /* lis r3, 0 */ // 0x8075DEA4
    /* lfs f2, 0(r3) */ // 0x8075DEA8
    /* li r4, 0 */ // 0x8075DEAC
    r3 = *(0x28 + r5); // lwz @ 0x8075DEB0
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    r3 = *(0x1c0 + r31); // lwz @ 0x8075DEB8
    r0 = *(0x164 + r31); // lhz @ 0x8075DEBC
    if (<) goto 0x0x8075dfa4;
    r0 = *(0x1d9 + r31); // lbz @ 0x8075DEC8
    if (==) goto 0x0x8075df90;
    r12 = *(0 + r31); // lwz @ 0x8075DED4
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x8075DEDC
    /* mtctr r12 */ // 0x8075DEE0
    /* bctrl  */ // 0x8075DEE4
    r0 = *(0x2c + r31); // lhz @ 0x8075DEE8
    r3 = r31;
    /* lfs f0, 0x15c(r31) */ // 0x8075DEF0
    r0 = r0 | 8; // 0x8075DEF4
    *(0x2c + r31) = r0; // sth @ 0x8075DEF8
    /* stfs f0, 0x3c(r31) */ // 0x8075DEFC
    /* stfs f0, 0x40(r31) */ // 0x8075DF00
    /* stfs f0, 0x44(r31) */ // 0x8075DF04
    r12 = *(0 + r31); // lwz @ 0x8075DF08
    r12 = *(0x24 + r12); // lwz @ 0x8075DF0C
    /* mtctr r12 */ // 0x8075DF10
    /* bctrl  */ // 0x8075DF14
    /* lis r4, 0 */ // 0x8075DF18
    r0 = r3;
    r4 = *(0 + r4); // lwz @ 0x8075DF20
    /* lis r5, 0 */ // 0x8075DF24
    r12 = *(0 + r31); // lwz @ 0x8075DF28
    r0 = r0 rlwinm 1; // rlwinm
    r6 = *(4 + r4); // lwz @ 0x8075DF30
    /* lis r4, 0 */ // 0x8075DF34
    /* lfd f1, 0(r5) */ // 0x8075DF38
    r3 = r31;
    r5 = *(0xc + r6); // lwz @ 0x8075DF40
    r6 = *(8 + r6); // lwz @ 0x8075DF44
    /* lhax r0, r5, r0 */ // 0x8075DF48
    /* lfs f2, 0(r4) */ // 0x8075DF4C
    /* mulli r0, r0, 0x74 */ // 0x8075DF50
    r12 = *(0x88 + r12); // lwz @ 0x8075DF54
    r4 = r6 + r0; // 0x8075DF58
    r0 = *(0x6c + r4); // lha @ 0x8075DF5C
    /* xoris r0, r0, 0x8000 */ // 0x8075DF60
    *(0x14 + r1) = r0; // stw @ 0x8075DF64
    /* lfd f0, 0x10(r1) */ // 0x8075DF68
    /* fsubs f1, f0, f1 */ // 0x8075DF6C
    /* mtctr r12 */ // 0x8075DF70
    /* bctrl  */ // 0x8075DF74
    r3 = *(0xdc + r31); // lwz @ 0x8075DF78
    /* li r4, 0 */ // 0x8075DF7C
    r12 = *(0 + r3); // lwz @ 0x8075DF80
    r12 = *(0xc + r12); // lwz @ 0x8075DF84
    /* mtctr r12 */ // 0x8075DF88
    /* bctrl  */ // 0x8075DF8C
    /* li r0, 0 */ // 0x8075DF90
    *(0x1d9 + r31) = r0; // stb @ 0x8075DF94
    *(0x218 + r31) = r0; // stb @ 0x8075DF98
    *(0x228 + r31) = r0; // stw @ 0x8075DF9C
    /* b 0x8075dfdc */ // 0x8075DFA0
    r0 = *(0x162 + r31); // lhz @ 0x8075DFA4
    if (<) goto 0x0x8075dfbc;
    /* li r0, 1 */ // 0x8075DFB0
    *(0x228 + r31) = r0; // stw @ 0x8075DFB4
    /* b 0x8075dfc4 */ // 0x8075DFB8
    /* li r0, 0 */ // 0x8075DFBC
    *(0x228 + r31) = r0; // stw @ 0x8075DFC0
    /* lis r3, 0 */ // 0x8075DFC4
    /* lfs f1, 0x21c(r31) */ // 0x8075DFC8
    r3 = *(0 + r3); // lwz @ 0x8075DFCC
    r4 = r31 + 0x30; // 0x8075DFD0
    /* li r5, 9 */ // 0x8075DFD4
    FUN_808256E8(r3, r4, r5); // bl 0x808256E8
    r0 = *(0x1d9 + r31); // lbz @ 0x8075DFDC
    if (!=) goto 0x0x8075e010;
    r3 = *(0x20 + r31); // lwz @ 0x8075DFE8
    r0 = *(0x2c + r31); // lhz @ 0x8075DFEC
    /* lfs f0, 0x20(r3) */ // 0x8075DFF0
    /* lfs f1, 0x1c(r3) */ // 0x8075DFF4
    r0 = r0 | 1; // 0x8075DFF8
    /* lfs f2, 0x18(r3) */ // 0x8075DFFC
    /* stfs f2, 0x30(r31) */ // 0x8075E000
    *(0x2c + r31) = r0; // sth @ 0x8075E004
    /* stfs f1, 0x34(r31) */ // 0x8075E008
    /* stfs f0, 0x38(r31) */ // 0x8075E00C
    r0 = *(0x1d9 + r31); // lbz @ 0x8075E010
    if (!=) goto 0x0x8075e024;
    r3 = r31;
    FUN_8075E260(r3); // bl 0x8075E260
    r3 = *(0x1c0 + r31); // lwz @ 0x8075E024
    r0 = r3 + 1; // 0x8075E028
    *(0x1c0 + r31) = r0; // stw @ 0x8075E02C
    r31 = *(0x1c + r1); // lwz @ 0x8075E030
    r30 = *(0x18 + r1); // lwz @ 0x8075E034
    r0 = *(0x24 + r1); // lwz @ 0x8075E038
    return;
}