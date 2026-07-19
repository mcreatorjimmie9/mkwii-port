/* Function at 0x8077EA58, size=308 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8077EA58(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8077EA60
    /* lfs f1, 0(r4) */ // 0x8077EA68
    /* li r4, 0x333 */ // 0x8077EA6C
    *(0x4c + r1) = r31; // stw @ 0x8077EA70
    *(0x48 + r1) = r30; // stw @ 0x8077EA74
    r30 = r3;
    FUN_808A0AC8(r4); // bl 0x808A0AC8
    r3 = *(0xc0 + r30); // lwz @ 0x8077EA80
    /* lis r0, 0x4330 */ // 0x8077EA84
    *(0x3c + r1) = r3; // stw @ 0x8077EA88
    /* lis r4, 0 */ // 0x8077EA8C
    /* lis r3, 0 */ // 0x8077EA90
    /* lfd f2, 0(r4) */ // 0x8077EA94
    *(0x38 + r1) = r0; // stw @ 0x8077EA98
    /* lis r31, 0 */ // 0x8077EA9C
    /* lfs f0, 0(r3) */ // 0x8077EAA0
    /* lfd f1, 0x38(r1) */ // 0x8077EAA4
    /* lfs f3, 0x114(r30) */ // 0x8077EAA8
    /* fsubs f4, f1, f2 */ // 0x8077EAAC
    /* lfs f1, 0xf4(r30) */ // 0x8077EAB0
    /* lfs f2, 0x124(r30) */ // 0x8077EAB4
    /* fmuls f4, f0, f4 */ // 0x8077EAB8
    /* lfs f0, 0(r31) */ // 0x8077EABC
    /* fadds f0, f1, f0 */ // 0x8077EAC0
    /* fsubs f1, f3, f4 */ // 0x8077EAC4
    /* fadds f4, f2, f1 */ // 0x8077EAC8
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x8077EACC
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8077EAD0
    if (!=) goto 0x0x8077eb44;
    /* li r0, 2 */ // 0x8077EAD8
    *(0xbc + r30) = r0; // stw @ 0x8077EADC
    r4 = r30 + 0x120; // 0x8077EAE4
    r5 = r30 + 0xf0; // 0x8077EAE8
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8077EAF0
    /* lfs f1, 0(r31) */ // 0x8077EAF4
    r4 = r4 + 0; // 0x8077EAFC
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8077EB14
    /* lfs f1, 0(r4) */ // 0x8077EB1C
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x8077EB28
    /* stfs f0, 0x120(r30) */ // 0x8077EB2C
    /* lfs f0, 0xc(r1) */ // 0x8077EB30
    /* stfs f0, 0x124(r30) */ // 0x8077EB34
    /* lfs f0, 0x10(r1) */ // 0x8077EB38
    /* stfs f0, 0x128(r30) */ // 0x8077EB3C
    /* b 0x8077eb74 */ // 0x8077EB40
    /* lfs f2, 0xfc(r30) */ // 0x8077EB44
    /* lfs f1, 0x110(r30) */ // 0x8077EB48
    /* lfs f0, 0x104(r30) */ // 0x8077EB4C
    /* fmuls f3, f2, f1 */ // 0x8077EB50
    /* lfs f2, 0x120(r30) */ // 0x8077EB54
    /* fmuls f1, f0, f1 */ // 0x8077EB58
    /* lfs f0, 0x128(r30) */ // 0x8077EB5C
    /* stfs f4, 0x124(r30) */ // 0x8077EB60
    /* fadds f2, f2, f3 */ // 0x8077EB64
    /* fadds f0, f0, f1 */ // 0x8077EB68
    /* stfs f2, 0x120(r30) */ // 0x8077EB6C
    /* stfs f0, 0x128(r30) */ // 0x8077EB70
    r0 = *(0x54 + r1); // lwz @ 0x8077EB74
    r31 = *(0x4c + r1); // lwz @ 0x8077EB78
    r30 = *(0x48 + r1); // lwz @ 0x8077EB7C
    return;
}