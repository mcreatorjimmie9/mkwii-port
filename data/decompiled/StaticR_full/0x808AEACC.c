/* Function at 0x808AEACC, size=416 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808AEACC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808AEAD4
    /* lis r0, 0x4330 */ // 0x808AEADC
    *(0x3c + r1) = r31; // stw @ 0x808AEAE0
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x808AEAE8
    r30 = r3;
    *(8 + r1) = r0; // stw @ 0x808AEAF0
    *(0x10 + r1) = r0; // stw @ 0x808AEAF4
    FUN_8089F578(); // bl 0x8089F578
    /* lfs f0, 0x34(r30) */ // 0x808AEAFC
    /* lis r3, 0 */ // 0x808AEB00
    r3 = r3 + 0; // 0x808AEB04
    *(0 + r30) = r3; // stw @ 0x808AEB08
    /* lis r3, 0 */ // 0x808AEB0C
    /* lis r5, 0 */ // 0x808AEB10
    /* stfs f0, 0xb0(r30) */ // 0x808AEB14
    /* lis r4, 0 */ // 0x808AEB18
    /* lfd f7, 0(r3) */ // 0x808AEB1C
    r3 = r30;
    r6 = *(0 + r31); // lwz @ 0x808AEB24
    /* lfs f2, 0(r5) */ // 0x808AEB28
    r0 = *(0x2a + r6); // lha @ 0x808AEB2C
    /* xoris r0, r0, 0x8000 */ // 0x808AEB30
    *(0xc + r1) = r0; // stw @ 0x808AEB34
    /* lfd f0, 8(r1) */ // 0x808AEB38
    /* fsubs f0, f0, f7 */ // 0x808AEB3C
    /* fdivs f6, f0, f2 */ // 0x808AEB40
    /* stfs f6, 0xc4(r30) */ // 0x808AEB44
    r5 = *(0 + r31); // lwz @ 0x808AEB48
    r0 = *(0x2e + r5); // lha @ 0x808AEB4C
    /* xoris r0, r0, 0x8000 */ // 0x808AEB50
    *(0x14 + r1) = r0; // stw @ 0x808AEB54
    /* lfd f0, 0x10(r1) */ // 0x808AEB58
    /* fsubs f5, f0, f7 */ // 0x808AEB5C
    /* stfs f5, 0xe0(r30) */ // 0x808AEB60
    /* fdivs f0, f5, f6 */ // 0x808AEB64
    r5 = *(0 + r31); // lwz @ 0x808AEB68
    r0 = *(0x30 + r5); // lha @ 0x808AEB6C
    *(0xcc + r30) = r0; // stw @ 0x808AEB70
    /* xoris r5, r0, 0x8000 */ // 0x808AEB74
    r6 = *(0 + r31); // lwz @ 0x808AEB78
    r0 = *(0x32 + r6); // lha @ 0x808AEB7C
    /* fctiwz f0, f0 */ // 0x808AEB80
    /* xoris r0, r0, 0x8000 */ // 0x808AEB84
    *(0xc + r1) = r0; // stw @ 0x808AEB88
    /* lfd f1, 8(r1) */ // 0x808AEB8C
    /* stfd f0, 0x18(r1) */ // 0x808AEB90
    /* fsubs f4, f1, f7 */ // 0x808AEB94
    r6 = *(0x1c + r1); // lwz @ 0x808AEB98
    /* stfs f4, 0xe4(r30) */ // 0x808AEB9C
    r7 = *(0 + r31); // lwz @ 0x808AEBA0
    r0 = *(0x34 + r7); // lha @ 0x808AEBA4
    *(0xd0 + r30) = r0; // stw @ 0x808AEBA8
    /* xoris r0, r0, 0x8000 */ // 0x808AEBAC
    r7 = *(0 + r31); // lwz @ 0x808AEBB0
    r7 = *(0x2c + r7); // lha @ 0x808AEBB4
    /* xoris r7, r7, 0x8000 */ // 0x808AEBB8
    *(0x14 + r1) = r7; // stw @ 0x808AEBBC
    /* lfd f0, 0x10(r1) */ // 0x808AEBC0
    /* fsubs f3, f0, f7 */ // 0x808AEBC4
    *(0x14 + r1) = r5; // stw @ 0x808AEBC8
    /* stfs f3, 0xe8(r30) */ // 0x808AEBCC
    /* lfd f0, 0x10(r1) */ // 0x808AEBD0
    r5 = *(0 + r31); // lwz @ 0x808AEBD4
    /* fsubs f1, f0, f7 */ // 0x808AEBD8
    r5 = *(0x36 + r5); // lha @ 0x808AEBDC
    /* xoris r5, r5, 0x8000 */ // 0x808AEBE0
    *(0xc + r1) = r5; // stw @ 0x808AEBE4
    /* lfd f0, 8(r1) */ // 0x808AEBE8
    /* stfs f5, 0xec(r30) */ // 0x808AEBEC
    /* fsubs f0, f0, f7 */ // 0x808AEBF0
    *(0xc + r1) = r0; // stw @ 0x808AEBF4
    /* fdivs f2, f0, f2 */ // 0x808AEBF8
    /* lfd f0, 8(r1) */ // 0x808AEBFC
    *(0xd4 + r30) = r6; // stw @ 0x808AEC00
    /* stfs f2, 0xc8(r30) */ // 0x808AEC04
    /* fsubs f0, f0, f7 */ // 0x808AEC08
    /* fmuls f1, f1, f2 */ // 0x808AEC0C
    /* fmuls f0, f0, f2 */ // 0x808AEC10
    /* fadds f1, f5, f1 */ // 0x808AEC14
    /* fadds f0, f4, f0 */ // 0x808AEC18
    /* fsubs f1, f4, f1 */ // 0x808AEC1C
    /* fsubs f0, f3, f0 */ // 0x808AEC20
    /* fdivs f1, f1, f6 */ // 0x808AEC24
    /* fdivs f0, f0, f6 */ // 0x808AEC28
    /* fctiwz f1, f1 */ // 0x808AEC2C
    /* fctiwz f0, f0 */ // 0x808AEC30
    /* stfd f1, 0x20(r1) */ // 0x808AEC34
    /* stfd f0, 0x28(r1) */ // 0x808AEC38
    r5 = *(0x24 + r1); // lwz @ 0x808AEC3C
    r0 = *(0x2c + r1); // lwz @ 0x808AEC40
    *(0xd8 + r30) = r5; // stw @ 0x808AEC44
    *(0xdc + r30) = r0; // stw @ 0x808AEC48
    r4 = *(0 + r4); // lwz @ 0x808AEC4C
    *(0x50 + r4) = r30; // stw @ 0x808AEC50
    r31 = *(0x3c + r1); // lwz @ 0x808AEC54
    r30 = *(0x38 + r1); // lwz @ 0x808AEC58
    r0 = *(0x44 + r1); // lwz @ 0x808AEC5C
    return;
}