/* Function at 0x8088ECE4, size=348 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8088ECE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x4330 */ // 0x8088ECEC
    *(0x4c + r1) = r31; // stw @ 0x8088ECF4
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x8088ECFC
    r0 = *(0x170 + r3); // lwz @ 0x8088ED00
    *(0x30 + r1) = r4; // stw @ 0x8088ED04
    *(0x38 + r1) = r4; // stw @ 0x8088ED0C
    if (!=) goto 0x0x8088ee28;
    r0 = *(0x178 + r31); // lwz @ 0x8088ED14
    /* lis r30, 0 */ // 0x8088ED18
    /* lis r3, 0 */ // 0x8088ED1C
    /* lfd f2, 0(r30) */ // 0x8088ED20
    /* xoris r0, r0, 0x8000 */ // 0x8088ED24
    *(0x34 + r1) = r0; // stw @ 0x8088ED28
    /* lfs f0, 0(r3) */ // 0x8088ED2C
    /* lfd f1, 0x30(r1) */ // 0x8088ED34
    r4 = r31 + 0x17c; // 0x8088ED38
    /* fsubs f1, f1, f2 */ // 0x8088ED3C
    /* fmuls f1, f0, f1 */ // 0x8088ED40
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r31 + 0x164; // 0x8088ED4C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x178 + r31); // lwz @ 0x8088ED58
    /* lfd f1, 0(r30) */ // 0x8088ED60
    r4 = r31 + 0x188; // 0x8088ED64
    /* xoris r0, r0, 0x8000 */ // 0x8088ED68
    *(0x3c + r1) = r0; // stw @ 0x8088ED6C
    r5 = *(0x2c + r31); // lhz @ 0x8088ED70
    /* lfd f0, 0x38(r1) */ // 0x8088ED74
    /* lfs f2, 0x1c(r1) */ // 0x8088ED78
    r0 = r5 | 1; // 0x8088ED7C
    /* fsubs f1, f0, f1 */ // 0x8088ED80
    /* lfs f3, 0x18(r1) */ // 0x8088ED84
    /* lfs f0, 0x14(r1) */ // 0x8088ED88
    /* stfs f0, 0x30(r31) */ // 0x8088ED8C
    *(0x2c + r31) = r0; // sth @ 0x8088ED90
    /* stfs f3, 0x34(r31) */ // 0x8088ED94
    /* stfs f2, 0x38(r31) */ // 0x8088ED98
    FUN_805A443C(); // bl 0x805A443C
    r6 = *(0x178 + r31); // lwz @ 0x8088EDA0
    /* lis r4, 0 */ // 0x8088EDA4
    r3 = *(0x2c + r31); // lhz @ 0x8088EDA8
    /* li r5, 1 */ // 0x8088EDAC
    /* xoris r0, r6, 0x8000 */ // 0x8088EDB0
    *(0x34 + r1) = r0; // stw @ 0x8088EDB4
    /* lfd f3, 0(r30) */ // 0x8088EDB8
    *(0x3c + r1) = r0; // stw @ 0x8088EDC0
    r3 = r3 | 3; // 0x8088EDC4
    /* lfd f1, 0x30(r1) */ // 0x8088EDC8
    r0 = r6 + 1; // 0x8088EDCC
    /* lfd f0, 0x38(r1) */ // 0x8088EDD0
    /* fsubs f2, f1, f3 */ // 0x8088EDD4
    /* lfs f1, 0(r4) */ // 0x8088EDD8
    /* fsubs f0, f0, f3 */ // 0x8088EDDC
    /* lfs f3, 0x10(r1) */ // 0x8088EDE0
    /* lfs f4, 0xc(r1) */ // 0x8088EDE4
    /* fmuls f2, f1, f2 */ // 0x8088EDE8
    /* fmuls f1, f1, f0 */ // 0x8088EDEC
    /* lfs f5, 8(r1) */ // 0x8088EDF0
    /* lfs f0, 0x168(r31) */ // 0x8088EDF4
    *(0x54 + r31) = r5; // stb @ 0x8088EDF8
    /* fmuls f1, f2, f1 */ // 0x8088EDFC
    /* stfs f5, 0x48(r31) */ // 0x8088EE00
    /* fsubs f0, f0, f1 */ // 0x8088EE04
    /* stfs f4, 0x4c(r31) */ // 0x8088EE08
    /* stfs f3, 0x50(r31) */ // 0x8088EE0C
    *(0x2c + r31) = r3; // sth @ 0x8088EE10
    /* stfs f0, 0x34(r31) */ // 0x8088EE14
    *(0x178 + r31) = r0; // stw @ 0x8088EE18
    if (<=) goto 0x0x8088ee28;
    /* li r0, 2 */ // 0x8088EE20
    *(0x170 + r31) = r0; // stw @ 0x8088EE24
    r0 = *(0x54 + r1); // lwz @ 0x8088EE28
    r31 = *(0x4c + r1); // lwz @ 0x8088EE2C
    r30 = *(0x48 + r1); // lwz @ 0x8088EE30
    return;
}