/* Function at 0x80778DF8, size=332 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80778DF8(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80778E00
    r5 = r5 + 0; // 0x80778E08
    *(0x4c + r1) = r31; // stw @ 0x80778E0C
    r31 = r4;
    *(0x48 + r1) = r30; // stw @ 0x80778E14
    r30 = r3;
    FUN_807771B8(r5); // bl 0x807771B8
    /* lis r5, 0 */ // 0x80778E20
    /* lis r0, 0x4330 */ // 0x80778E24
    r5 = r5 + 0; // 0x80778E28
    /* lis r3, 0 */ // 0x80778E2C
    r4 = r5 + 0xf4; // 0x80778E30
    *(0 + r30) = r5; // stw @ 0x80778E34
    /* lfd f4, 0(r3) */ // 0x80778E38
    r3 = r30;
    *(0xb4 + r30) = r4; // stw @ 0x80778E40
    /* lfs f2, 0x30(r30) */ // 0x80778E44
    r4 = *(0 + r31); // lwz @ 0x80778E48
    *(0x38 + r1) = r0; // stw @ 0x80778E4C
    r0 = *(0x2a + r4); // lha @ 0x80778E50
    *(0x54a + r30) = r0; // sth @ 0x80778E54
    /* lfs f1, 0x34(r30) */ // 0x80778E58
    r4 = *(0 + r31); // lwz @ 0x80778E5C
    /* lfs f0, 0x38(r30) */ // 0x80778E60
    r0 = *(0x2c + r4); // lha @ 0x80778E64
    *(0x54c + r30) = r0; // sth @ 0x80778E68
    r4 = *(0 + r31); // lwz @ 0x80778E6C
    r0 = *(0x2e + r4); // lha @ 0x80778E70
    /* xoris r0, r0, 0x8000 */ // 0x80778E74
    *(0x3c + r1) = r0; // stw @ 0x80778E78
    /* lfd f3, 0x38(r1) */ // 0x80778E7C
    /* stfs f2, 0xe8(r30) */ // 0x80778E80
    /* fsubs f2, f3, f4 */ // 0x80778E84
    /* stfs f1, 0xec(r30) */ // 0x80778E88
    /* stfs f2, 0x550(r30) */ // 0x80778E8C
    /* stfs f0, 0xf0(r30) */ // 0x80778E90
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x80778E9C
    /* li r5, 2 */ // 0x80778EA0
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 0x2c(r1) */ // 0x80778EA8
    r3 = r30;
    /* stfs f0, 0x118(r30) */ // 0x80778EB0
    /* lfs f0, 0x30(r1) */ // 0x80778EB4
    /* stfs f0, 0x11c(r30) */ // 0x80778EB8
    /* lfs f0, 0x34(r1) */ // 0x80778EBC
    /* stfs f0, 0x120(r30) */ // 0x80778EC0
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x80778ECC
    /* li r5, 0 */ // 0x80778ED0
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 0x20(r1) */ // 0x80778ED8
    /* stfs f0, 0x124(r30) */ // 0x80778EE0
    r4 = r30 + 0x124; // 0x80778EE4
    /* lfs f1, 0x550(r30) */ // 0x80778EE8
    /* lfs f0, 0x24(r1) */ // 0x80778EEC
    /* stfs f0, 0x128(r30) */ // 0x80778EF0
    /* lfs f0, 0x28(r1) */ // 0x80778EF4
    /* stfs f0, 0x12c(r30) */ // 0x80778EF8
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0xe8; // 0x80778F04
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x80778F10
    r3 = r30;
    /* stfs f0, 0xf4(r30) */ // 0x80778F18
    /* lfs f0, 0xc(r1) */ // 0x80778F1C
    /* stfs f0, 0xf8(r30) */ // 0x80778F20
    /* lfs f0, 0x10(r1) */ // 0x80778F24
    /* stfs f0, 0xfc(r30) */ // 0x80778F28
    r31 = *(0x4c + r1); // lwz @ 0x80778F2C
    r30 = *(0x48 + r1); // lwz @ 0x80778F30
    r0 = *(0x54 + r1); // lwz @ 0x80778F34
    return;
}