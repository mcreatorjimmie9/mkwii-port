/* Function at 0x80635D6C, size=488 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80635D6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80635D74
    *(0xc + r1) = r31; // stw @ 0x80635D7C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80635D84
    r4 = *(0 + r4); // lwz @ 0x80635D88
    r0 = *(0x1a4 + r3); // lbz @ 0x80635D8C
    r4 = *(0x44 + r4); // lwz @ 0x80635D90
    /* neg r0, r4 */ // 0x80635D98
    r0 = r0 | r4; // 0x80635D9C
    /* srwi r0, r0, 0x1f */ // 0x80635DA0
    *(0x1a6 + r3) = r0; // stb @ 0x80635DA4
    if (!=) goto 0x0x80635f3c;
    if (==) goto 0x0x80635f3c;
    r3 = *(0x2c + r3); // lwz @ 0x80635DB4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r30, 0 */ // 0x80635DBC
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r30); // lwz @ 0x80635DC4
    r3 = *(0xc + r3); // lwz @ 0x80635DC8
    /* lwzx r3, r3, r0 */ // 0x80635DCC
    r0 = *(0x38 + r3); // lwz @ 0x80635DD0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80635DD4
    if (==) goto 0x0x80635f3c;
    r3 = *(0x2c + r31); // lwz @ 0x80635DDC
    FUN_8061E2D8(); // bl 0x8061E2D8
    r4 = *(0 + r30); // lwz @ 0x80635DE4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0xc + r4); // lwz @ 0x80635DEC
    /* lwzx r3, r3, r0 */ // 0x80635DF0
    r0 = *(0x38 + r3); // lwz @ 0x80635DF4
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x80635DF8
    if (!=) goto 0x0x80635f3c;
    /* lis r3, 0 */ // 0x80635E00
    r4 = *(0x1aa + r31); // lha @ 0x80635E04
    r0 = *(0 + r3); // lha @ 0x80635E08
    if (<) goto 0x0x80635e28;
    /* li r3, 1 */ // 0x80635E14
    /* li r0, 0 */ // 0x80635E18
    *(0x1a4 + r31) = r3; // stb @ 0x80635E1C
    *(0x1a5 + r31) = r0; // stb @ 0x80635E20
    /* b 0x80635e30 */ // 0x80635E24
    /* li r0, 1 */ // 0x80635E28
    *(0x1a5 + r31) = r0; // stb @ 0x80635E2C
    r0 = *(0x1aa + r31); // lha @ 0x80635E30
    if (!=) goto 0x0x80635f1c;
    /* lis r4, 0 */ // 0x80635E3C
    r3 = *(0x28 + r31); // lwz @ 0x80635E40
    r5 = *(0 + r4); // lwz @ 0x80635E44
    r4 = r31 + 0xf4; // 0x80635E48
    r0 = *(0x44 + r5); // lwz @ 0x80635E4C
    *(8 + r31) = r0; // stw @ 0x80635E50
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    r12 = *(0 + r31); // lwz @ 0x80635E58
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80635E60
    /* mtctr r12 */ // 0x80635E64
    /* bctrl  */ // 0x80635E68
    if (==) goto 0x0x80635e80;
    r3 = *(0 + r3); // lwz @ 0x80635E74
    /* lfs f0, 0x24(r3) */ // 0x80635E78
    /* stfs f0, 0x34(r31) */ // 0x80635E7C
    /* lis r30, 0 */ // 0x80635E80
    /* li r0, 1 */ // 0x80635E84
    /* lfs f0, 0(r30) */ // 0x80635E88
    /* lis r3, 0 */ // 0x80635E8C
    /* stfs f0, 0x14(r31) */ // 0x80635E90
    *(0x51 + r31) = r0; // stb @ 0x80635E94
    r3 = *(0 + r3); // lwz @ 0x80635E98
    FUN_8079D8F8(r3); // bl 0x8079D8F8
    r3 = r31;
    /* li r4, 0 */ // 0x80635EA4
    FUN_80632FC4(r3, r4); // bl 0x80632FC4
    r3 = *(4 + r31); // lwz @ 0x80635EAC
    FUN_8062FC6C(r3, r4); // bl 0x8062FC6C
    /* li r0, 0 */ // 0x80635EB4
    *(0x1b8 + r31) = r0; // sth @ 0x80635EB8
    /* lfs f0, 0(r30) */ // 0x80635EBC
    /* stfs f0, 0x1d0(r31) */ // 0x80635EC0
    *(0x1ba + r31) = r0; // sth @ 0x80635EC4
    /* stfs f0, 0x1d4(r31) */ // 0x80635EC8
    *(0x1bc + r31) = r0; // sth @ 0x80635ECC
    /* stfs f0, 0x1d8(r31) */ // 0x80635ED0
    *(0x1be + r31) = r0; // sth @ 0x80635ED4
    /* stfs f0, 0x1dc(r31) */ // 0x80635ED8
    *(0x1c0 + r31) = r0; // sth @ 0x80635EDC
    /* stfs f0, 0x1e0(r31) */ // 0x80635EE0
    *(0x1c2 + r31) = r0; // sth @ 0x80635EE4
    /* stfs f0, 0x1e4(r31) */ // 0x80635EE8
    *(0x1c4 + r31) = r0; // sth @ 0x80635EEC
    /* stfs f0, 0x1e8(r31) */ // 0x80635EF0
    *(0x1c6 + r31) = r0; // sth @ 0x80635EF4
    /* stfs f0, 0x1ec(r31) */ // 0x80635EF8
    *(0x1c8 + r31) = r0; // sth @ 0x80635EFC
    /* stfs f0, 0x1f0(r31) */ // 0x80635F00
    *(0x1ca + r31) = r0; // sth @ 0x80635F04
    /* stfs f0, 0x1f4(r31) */ // 0x80635F08
    *(0x1cc + r31) = r0; // sth @ 0x80635F0C
    /* stfs f0, 0x1f8(r31) */ // 0x80635F10
    *(0x1ce + r31) = r0; // sth @ 0x80635F14
    /* stfs f0, 0x1fc(r31) */ // 0x80635F18
    /* lis r3, 0 */ // 0x80635F1C
    r3 = *(0 + r3); // lwz @ 0x80635F20
    FUN_805C1588(r3); // bl 0x805C1588
    if (!=) goto 0x0x80635f3c;
    r3 = *(0x1aa + r31); // lha @ 0x80635F30
    r0 = r3 + 1; // 0x80635F34
    *(0x1aa + r31) = r0; // sth @ 0x80635F38
    r0 = *(0x14 + r1); // lwz @ 0x80635F3C
    r31 = *(0xc + r1); // lwz @ 0x80635F40
    r30 = *(8 + r1); // lwz @ 0x80635F44
    return;
}