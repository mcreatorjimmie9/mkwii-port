/* Function at 0x8074CE7C, size=292 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8074CE7C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8074CE8C
    r31 = r31 + 0; // 0x8074CE90
    *(0x28 + r1) = r30; // stw @ 0x8074CE94
    r30 = r3;
    FUN_8074BB7C(); // bl 0x8074BB7C
    r3 = *(0x20 + r30); // lwz @ 0x8074CEA0
    /* li r4, 0 */ // 0x8074CEA4
    /* lfs f1, 0(r31) */ // 0x8074CEA8
    r12 = *(0 + r3); // lwz @ 0x8074CEAC
    r12 = *(0x10 + r12); // lwz @ 0x8074CEB0
    /* mtctr r12 */ // 0x8074CEB4
    /* bctrl  */ // 0x8074CEB8
    r5 = *(0x20 + r30); // lwz @ 0x8074CEBC
    r0 = *(0x2c + r30); // lhz @ 0x8074CEC4
    /* lfs f0, 0x20(r5) */ // 0x8074CEC8
    r4 = r5 + 0x24; // 0x8074CECC
    /* lfs f2, 0x1c(r5) */ // 0x8074CED0
    r0 = r0 | 1; // 0x8074CED4
    /* lfs f1, 0x18(r5) */ // 0x8074CED8
    /* stfs f1, 0x30(r30) */ // 0x8074CEDC
    /* lfs f1, 0x78(r31) */ // 0x8074CEE0
    *(0x2c + r30) = r0; // sth @ 0x8074CEE4
    /* stfs f2, 0x34(r30) */ // 0x8074CEE8
    /* stfs f0, 0x38(r30) */ // 0x8074CEEC
    FUN_805A443C(); // bl 0x805A443C
    r4 = *(0x20 + r30); // lwz @ 0x8074CEF4
    r4 = r4 + 0x18; // 0x8074CF00
    FUN_805A4464(r3, r5, r4); // bl 0x805A4464
    r3 = r30;
    FUN_8074C9DC(r5, r4, r3, r4); // bl 0x8074C9DC
    r4 = *(0xa0 + r30); // lwz @ 0x8074CF14
    /* lis r0, 0x4330 */ // 0x8074CF18
    r3 = *(0x20 + r30); // lwz @ 0x8074CF1C
    r4 = *(0 + r4); // lwz @ 0x8074CF20
    r12 = *(0 + r3); // lwz @ 0x8074CF24
    r4 = *(0x2c + r4); // lha @ 0x8074CF28
    *(0x20 + r1) = r0; // stw @ 0x8074CF2C
    /* xoris r0, r4, 0x8000 */ // 0x8074CF30
    /* lfd f1, 0x80(r31) */ // 0x8074CF34
    *(0x24 + r1) = r0; // stw @ 0x8074CF38
    r12 = *(0x18 + r12); // lwz @ 0x8074CF3C
    /* lfd f0, 0x20(r1) */ // 0x8074CF40
    /* fsubs f1, f0, f1 */ // 0x8074CF44
    /* mtctr r12 */ // 0x8074CF48
    /* bctrl  */ // 0x8074CF4C
    /* lfs f1, 0(r31) */ // 0x8074CF50
    /* li r5, 0 */ // 0x8074CF54
    /* lfs f0, 0x60(r31) */ // 0x8074CF58
    /* li r0, 2 */ // 0x8074CF5C
    /* stfs f1, 0x148(r30) */ // 0x8074CF60
    r3 = r30;
    /* li r4, 0 */ // 0x8074CF68
    *(0x14c + r30) = r5; // stb @ 0x8074CF6C
    *(0x14d + r30) = r5; // stb @ 0x8074CF70
    *(0x14e + r30) = r5; // sth @ 0x8074CF74
    *(0x150 + r30) = r5; // sth @ 0x8074CF78
    /* stfs f0, 0x11c(r30) */ // 0x8074CF7C
    *(0x130 + r30) = r0; // stw @ 0x8074CF80
    FUN_808A0A44(); // bl 0x808A0A44
    r0 = *(0x34 + r1); // lwz @ 0x8074CF88
    r31 = *(0x2c + r1); // lwz @ 0x8074CF8C
    r30 = *(0x28 + r1); // lwz @ 0x8074CF90
    return;
}