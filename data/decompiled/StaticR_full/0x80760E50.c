/* Function at 0x80760E50, size=384 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80760E50(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80760E60
    r31 = r31 + 0; // 0x80760E64
    *(0x28 + r1) = r30; // stw @ 0x80760E68
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x80760E70
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x80760E78
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x80760E80
    r12 = *(0x90 + r12); // lwz @ 0x80760E84
    /* mtctr r12 */ // 0x80760E88
    /* bctrl  */ // 0x80760E8C
    /* lfs f1, 4(r31) */ // 0x80760E90
    r3 = r28;
    /* li r4, 0x22a */ // 0x80760E98
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    /* lfs f0, 0x20(r31) */ // 0x80760EA0
    /* li r3, 0 */ // 0x80760EA8
    /* li r0, 1 */ // 0x80760EAC
    /* stfs f0, 0x12c(r28) */ // 0x80760EB0
    /* stfs f0, 0x130(r28) */ // 0x80760EB4
    *(0x134 + r28) = r3; // sth @ 0x80760EB8
    *(0x136 + r28) = r0; // stb @ 0x80760EBC
    *(0x138 + r28) = r3; // stw @ 0x80760EC0
    if (==) goto 0x0x80760fb0;
    r5 = r31 + 0; // 0x80760EC8
    r8 = *(0 + r31); // lbz @ 0x80760ECC
    r7 = *(1 + r5); // lbz @ 0x80760ED0
    r3 = r28 + 0x30; // 0x80760ED4
    r6 = *(2 + r5); // lbz @ 0x80760ED8
    r4 = r28 + 0xec; // 0x80760EDC
    r0 = *(3 + r5); // lbz @ 0x80760EE0
    *(8 + r1) = r8; // stb @ 0x80760EE8
    /* lfs f1, 0x38(r31) */ // 0x80760EEC
    *(9 + r1) = r7; // stb @ 0x80760EF0
    *(0xa + r1) = r6; // stb @ 0x80760EF4
    *(0xb + r1) = r0; // stb @ 0x80760EF8
    FUN_80745650(); // bl 0x80745650
    r0 = *(0x104 + r28); // lbz @ 0x80760F00
    if (==) goto 0x0x80760f3c;
    /* lis r4, 0 */ // 0x80760F0C
    /* lfs f1, 0(r4) */ // 0x80760F14
    r4 = r28 + 0xec; // 0x80760F18
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lis r3, 0 */ // 0x80760F20
    r7 = r29;
    r3 = *(0 + r3); // lwz @ 0x80760F28
    r5 = r28 + 0x30; // 0x80760F2C
    /* li r4, 3 */ // 0x80760F34
    FUN_80825050(r7, r5, r6, r4); // bl 0x80825050
    r12 = *(0 + r28); // lwz @ 0x80760F3C
    r3 = r28;
    r12 = *(0x24 + r12); // lwz @ 0x80760F44
    /* mtctr r12 */ // 0x80760F48
    /* bctrl  */ // 0x80760F4C
    /* lis r4, 0 */ // 0x80760F50
    /* lis r5, 0 */ // 0x80760F54
    r6 = *(0 + r4); // lwz @ 0x80760F58
    /* clrlwi r4, r3, 0x10 */ // 0x80760F5C
    r3 = *(0 + r5); // lwz @ 0x80760F60
    r0 = *(0xb70 + r6); // lwz @ 0x80760F64
    if (!=) goto 0x0x80760fb0;
    r0 = *(0xb9e + r6); // lhz @ 0x80760F70
    if (!=) goto 0x0x80760fb0;
    r31 = *(0x10 + r3); // lwz @ 0x80760F80
    if (<) goto 0x0x80760fa4;
    r12 = *(0 + r31); // lwz @ 0x80760F88
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x80760F90
    /* mtctr r12 */ // 0x80760F94
    /* bctrl  */ // 0x80760F98
    if (==) goto 0x0x80760fb0;
    r3 = *(8 + r31); // lwz @ 0x80760FA4
    r0 = r3 + 1; // 0x80760FA8
    *(8 + r31) = r0; // stw @ 0x80760FAC
    r0 = *(0x34 + r1); // lwz @ 0x80760FB0
    r31 = *(0x2c + r1); // lwz @ 0x80760FB4
    r30 = *(0x28 + r1); // lwz @ 0x80760FB8
    r29 = *(0x24 + r1); // lwz @ 0x80760FBC
    r28 = *(0x20 + r1); // lwz @ 0x80760FC0
    return;
}