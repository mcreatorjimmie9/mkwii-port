/* Function at 0x80884E18, size=280 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80884E18(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80884E20
    *(0x2c + r1) = r31; // stw @ 0x80884E28
    r31 = r4;
    *(0x28 + r1) = r30; // stw @ 0x80884E30
    r30 = r3;
    FUN_8089BC74(); // bl 0x8089BC74
    r0 = *(0x54 + r30); // lbz @ 0x80884E3C
    /* lis r8, 0 */ // 0x80884E40
    r7 = *(0x30 + r30); // lwz @ 0x80884E44
    r8 = r8 + 0; // 0x80884E48
    r6 = *(0x34 + r30); // lwz @ 0x80884E4C
    r5 = *(0x38 + r30); // lwz @ 0x80884E54
    r4 = *(0x3c + r30); // lwz @ 0x80884E58
    r3 = *(0x40 + r30); // lwz @ 0x80884E5C
    r0 = *(0x44 + r30); // lwz @ 0x80884E60
    *(0 + r30) = r8; // stw @ 0x80884E64
    *(0x108 + r30) = r7; // stw @ 0x80884E68
    *(0x10c + r30) = r6; // stw @ 0x80884E6C
    *(0x110 + r30) = r5; // stw @ 0x80884E70
    *(0x114 + r30) = r4; // stw @ 0x80884E74
    *(0x118 + r30) = r3; // stw @ 0x80884E78
    *(0x11c + r30) = r0; // stw @ 0x80884E7C
    if (==) goto 0x0x80884e8c;
    r4 = r30 + 0x48; // 0x80884E84
    /* b 0x80884ebc */ // 0x80884E88
    /* li r0, 1 */ // 0x80884E8C
    *(0x54 + r30) = r0; // stb @ 0x80884E90
    r4 = r30 + 0x58; // 0x80884E98
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80884EA0
    r4 = r30 + 0x48; // 0x80884EA4
    /* stfs f0, 0x48(r30) */ // 0x80884EA8
    /* lfs f0, 0xc(r1) */ // 0x80884EAC
    /* stfs f0, 0x4c(r30) */ // 0x80884EB0
    /* lfs f0, 0x10(r1) */ // 0x80884EB4
    /* stfs f0, 0x50(r30) */ // 0x80884EB8
    r6 = *(0 + r4); // lwz @ 0x80884EBC
    /* li r0, 0 */ // 0x80884EC0
    r5 = *(4 + r4); // lwz @ 0x80884EC4
    r3 = r30;
    r4 = *(8 + r4); // lwz @ 0x80884ECC
    *(0x120 + r30) = r6; // stw @ 0x80884ED0
    *(0x124 + r30) = r5; // stw @ 0x80884ED4
    *(0x128 + r30) = r4; // stw @ 0x80884ED8
    r4 = *(0 + r31); // lwz @ 0x80884EDC
    r4 = *(0x30 + r4); // lha @ 0x80884EE0
    /* slwi r4, r4, 1 */ // 0x80884EE4
    *(0x138 + r30) = r4; // sth @ 0x80884EE8
    *(0x13a + r30) = r0; // sth @ 0x80884EEC
    r4 = *(0 + r31); // lwz @ 0x80884EF0
    r0 = *(0x2e + r4); // lha @ 0x80884EF4
    *(0x13c + r30) = r0; // sth @ 0x80884EF8
    r4 = *(0 + r31); // lwz @ 0x80884EFC
    r0 = *(0x32 + r4); // lha @ 0x80884F00
    *(0x13e + r30) = r0; // sth @ 0x80884F04
    r4 = *(0 + r31); // lwz @ 0x80884F08
    r0 = *(0x2c + r4); // lha @ 0x80884F0C
    *(0x144 + r30) = r0; // sth @ 0x80884F10
    r12 = *(0 + r30); // lwz @ 0x80884F14
    r12 = *(0x28 + r12); // lwz @ 0x80884F18
    /* mtctr r12 */ // 0x80884F1C
    /* bctrl  */ // 0x80884F20
    /* lis r4, 0 */ // 0x80884F24
    r4 = r4 + 0; // 0x80884F28
    FUN_805E3430(r4, r4); // bl 0x805E3430
}