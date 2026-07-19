/* Function at 0x8074DDC0, size=780 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 17 function(s) */

int FUN_8074DDC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8074DDC8
    /* lis r31, 0 */ // 0x8074DDD4
    r31 = r31 + 0; // 0x8074DDD8
    *(0x48 + r1) = r30; // stw @ 0x8074DDDC
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x8074DDE4
    r4 = *(0 + r4); // lwz @ 0x8074DDE8
    r0 = *(0xb0 + r3); // lwz @ 0x8074DDEC
    r4 = *(0x20 + r4); // lwz @ 0x8074DDF0
    if (>=) goto 0x0x8074deec;
    r4 = *(0x134 + r3); // lwz @ 0x8074DDFC
    r0 = *(0x158 + r3); // lhz @ 0x8074DE00
    if (<=) goto 0x0x8074de18;
    /* li r0, 1 */ // 0x8074DE0C
    *(0x130 + r3) = r0; // stw @ 0x8074DE10
    *(0x160 + r3) = r0; // stb @ 0x8074DE14
    r3 = *(8 + r3); // lwz @ 0x8074DE18
    /* li r4, 0 */ // 0x8074DE1C
    r3 = *(0x28 + r3); // lwz @ 0x8074DE20
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074DE28
    if (==) goto 0x0x8074de5c;
    r0 = *(0x120 + r30); // lwz @ 0x8074DE34
    if (!=) goto 0x0x8074de5c;
    r3 = *(8 + r30); // lwz @ 0x8074DE40
    /* li r4, 0 */ // 0x8074DE44
    /* lfs f1, 0(r31) */ // 0x8074DE48
    /* li r5, 1 */ // 0x8074DE4C
    r3 = *(0x28 + r3); // lwz @ 0x8074DE50
    /* lfs f2, 0x60(r31) */ // 0x8074DE54
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0x154 + r30); // lwz @ 0x8074DE5C
    /* lfs f0, 0x180(r30) */ // 0x8074DE60
    /* lfs f1, 0x40(r3) */ // 0x8074DE64
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074DE68
    if (<=) goto 0x0x8074de78;
    /* li r0, 2 */ // 0x8074DE70
    *(0x130 + r30) = r0; // stw @ 0x8074DE74
    r3 = *(8 + r30); // lwz @ 0x8074DE78
    /* li r4, 0 */ // 0x8074DE7C
    r3 = *(0x28 + r3); // lwz @ 0x8074DE80
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074DE88
    if (==) goto 0x0x8074debc;
    r0 = *(0x120 + r30); // lwz @ 0x8074DE94
    if (!=) goto 0x0x8074debc;
    r3 = *(8 + r30); // lwz @ 0x8074DEA0
    /* li r4, 0 */ // 0x8074DEA4
    /* lfs f1, 0(r31) */ // 0x8074DEA8
    /* li r5, 1 */ // 0x8074DEAC
    r3 = *(0x28 + r3); // lwz @ 0x8074DEB0
    /* lfs f2, 0x60(r31) */ // 0x8074DEB4
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lfs f1, 0x94(r31) */ // 0x8074DEBC
    r4 = r30 + 0x148; // 0x8074DEC4
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x8074DED0
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r3 = r30;
    FUN_8074C9DC(r4, r5, r3, r4); // bl 0x8074C9DC
    /* b 0x8074df90 */ // 0x8074DEE8
    r0 = *(0x130 + r3); // lwz @ 0x8074DEEC
    if (<) goto 0x0x8074df48;
    /* li r5, -1 */ // 0x8074DEF8
    /* li r6, 0 */ // 0x8074DEFC
    *(0x12c + r3) = r0; // sth @ 0x8074DF00
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0x13c + r3); // lwz @ 0x8074DF08
    *(0x130 + r3) = r5; // stw @ 0x8074DF0C
    r5 = *(0x140 + r3); // lwz @ 0x8074DF10
    *(0x134 + r3) = r6; // stw @ 0x8074DF14
    /* lhzx r0, r4, r0 */ // 0x8074DF18
    /* mulli r0, r0, 0x1c */ // 0x8074DF1C
    r29 = r5 + r0; // 0x8074DF20
    r3 = r29 + 4; // 0x8074DF24
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8074df70;
    r3 = *(0x144 + r30); // lwz @ 0x8074DF34
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x8074df70 */ // 0x8074DF44
    r4 = *(0x134 + r3); // lwz @ 0x8074DF48
    r0 = *(0x12c + r3); // lhz @ 0x8074DF4C
    r4 = r4 + 1; // 0x8074DF50
    *(0x134 + r3) = r4; // stw @ 0x8074DF54
    r4 = *(0x13c + r3); // lwz @ 0x8074DF58
    /* slwi r0, r0, 1 */ // 0x8074DF5C
    r3 = *(0x140 + r3); // lwz @ 0x8074DF60
    /* lhzx r0, r4, r0 */ // 0x8074DF64
    /* mulli r0, r0, 0x1c */ // 0x8074DF68
    r29 = r3 + r0; // 0x8074DF6C
    r3 = r29 + 0x10; // 0x8074DF70
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8074df90;
    r3 = *(0x144 + r30); // lwz @ 0x8074DF80
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    FUN_8074C2F0(r3); // bl 0x8074C2F0
    r12 = *(0 + r30); // lwz @ 0x8074DF98
    r3 = r30;
    r12 = *(0xf0 + r12); // lwz @ 0x8074DFA0
    /* mtctr r12 */ // 0x8074DFA4
    /* bctrl  */ // 0x8074DFA8
    /* lfs f3, 0xb4(r30) */ // 0x8074DFAC
    /* lfs f2, 0xb8(r30) */ // 0x8074DFB4
    r4 = r30 + 0xb4; // 0x8074DFB8
    /* lfs f0, 0xbc(r30) */ // 0x8074DFBC
    r5 = r30 + 0x104; // 0x8074DFC0
    /* lfs f1, 0x11c(r30) */ // 0x8074DFC4
    /* stfs f3, 0xc0(r30) */ // 0x8074DFC8
    /* stfs f2, 0xc4(r30) */ // 0x8074DFCC
    /* stfs f0, 0xc8(r30) */ // 0x8074DFD0
    FUN_8074CB64(r5); // bl 0x8074CB64
    /* lfs f0, 0x14(r1) */ // 0x8074DFD8
    /* stfs f0, 0xb4(r30) */ // 0x8074DFDC
    /* fmuls f2, f0, f0 */ // 0x8074DFE0
    /* lfs f0, 0x64(r31) */ // 0x8074DFE4
    /* lfs f1, 0x18(r1) */ // 0x8074DFE8
    /* stfs f1, 0xb8(r30) */ // 0x8074DFEC
    /* fmuls f1, f1, f1 */ // 0x8074DFF0
    /* lfs f3, 0x1c(r1) */ // 0x8074DFF4
    /* stfs f3, 0xbc(r30) */ // 0x8074DFF8
    /* fmuls f3, f3, f3 */ // 0x8074DFFC
    /* fadds f1, f2, f1 */ // 0x8074E000
    /* fadds f1, f3, f1 */ // 0x8074E004
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074E008
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074E00C
    /* mfcr r0 */ // 0x8074E010
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074E014
    if (==) goto 0x0x8074e034;
    /* lfs f1, 0(r31) */ // 0x8074E01C
    /* lfs f0, 0x60(r31) */ // 0x8074E020
    /* stfs f1, 0xb4(r30) */ // 0x8074E024
    /* stfs f1, 0xb8(r30) */ // 0x8074E028
    /* stfs f0, 0xbc(r30) */ // 0x8074E02C
    /* b 0x8074e03c */ // 0x8074E030
    r3 = r30 + 0xb4; // 0x8074E034
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8074E03C
    /* lfs f1, 0(r4) */ // 0x8074E044
    r4 = r30 + 0xcc; // 0x8074E048
    r5 = r30 + 0xec; // 0x8074E04C
    FUN_8074CB64(r4, r3, r4, r5); // bl 0x8074CB64
    /* lfs f0, 8(r1) */ // 0x8074E054
    /* stfs f0, 0xcc(r30) */ // 0x8074E058
    /* fmuls f2, f0, f0 */ // 0x8074E05C
    /* lfs f0, 0x64(r31) */ // 0x8074E060
    /* lfs f1, 0xc(r1) */ // 0x8074E064
    /* stfs f1, 0xd0(r30) */ // 0x8074E068
    /* fmuls f1, f1, f1 */ // 0x8074E06C
    /* lfs f3, 0x10(r1) */ // 0x8074E070
    /* stfs f3, 0xd4(r30) */ // 0x8074E074
    /* fmuls f3, f3, f3 */ // 0x8074E078
    /* fadds f1, f2, f1 */ // 0x8074E07C
    /* fadds f1, f3, f1 */ // 0x8074E080
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074E084
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8074E088
    /* mfcr r0 */ // 0x8074E08C
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x8074E090
    if (==) goto 0x0x8074e0b0;
    /* lfs f1, 0(r31) */ // 0x8074E098
    /* lfs f0, 0x60(r31) */ // 0x8074E09C
    /* stfs f1, 0xcc(r30) */ // 0x8074E0A0
    /* stfs f0, 0xd0(r30) */ // 0x8074E0A4
    /* stfs f1, 0xd4(r30) */ // 0x8074E0A8
    /* b 0x8074e0b8 */ // 0x8074E0AC
    r3 = r30 + 0xcc; // 0x8074E0B0
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r4 = r30 + 0xcc; // 0x8074E0BC
    r5 = r30 + 0xb4; // 0x8074E0C0
    FUN_808A1E9C(r3, r3, r4, r5); // bl 0x808A1E9C
    r3 = *(0x120 + r30); // lwz @ 0x8074E0C8
}