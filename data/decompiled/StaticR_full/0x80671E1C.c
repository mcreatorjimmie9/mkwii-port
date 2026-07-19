/* Function at 0x80671E1C, size=332 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80671E1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x80671E24
    r7 = r7 + 0; // 0x80671E2C
    *(0x3c + r1) = r31; // stw @ 0x80671E30
    *(0x38 + r1) = r30; // stw @ 0x80671E34
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x80671E3C
    if (==) goto 0x0x80671e54;
    if (==) goto 0x0x80671e84;
    /* b 0x80671f54 */ // 0x80671E50
    r4 = *(0x10 + r3); // lwz @ 0x80671E54
    if (==) goto 0x0x80671e6c;
    if (==) goto 0x0x80671e78;
    /* b 0x80671eb8 */ // 0x80671E68
    /* lfs f6, 8(r7) */ // 0x80671E6C
    /* lfs f5, 4(r7) */ // 0x80671E70
    /* b 0x80671eb8 */ // 0x80671E74
    /* lfs f6, 4(r7) */ // 0x80671E78
    /* lfs f5, 8(r7) */ // 0x80671E7C
    /* b 0x80671eb8 */ // 0x80671E80
    r4 = *(0x10 + r3); // lwz @ 0x80671E84
    if (==) goto 0x0x80671e9c;
    if (==) goto 0x0x80671ea8;
    /* b 0x80671eb8 */ // 0x80671E98
    /* lfs f6, 8(r7) */ // 0x80671E9C
    /* lfs f5, 0(r7) */ // 0x80671EA0
    /* b 0x80671eb8 */ // 0x80671EA4
    /* lfs f6, 4(r7) */ // 0x80671EA8
    /* lfs f5, 0(r7) */ // 0x80671EAC
    /* b 0x80671eb8 */ // 0x80671EB0
    /* b 0x80671f54 */ // 0x80671EB4
    r0 = *(0x1c + r3); // lwz @ 0x80671EBC
    if (!=) goto 0x0x80671ecc;
    /* lfs f4, 0x18(r3) */ // 0x80671EC4
    /* b 0x80671ed0 */ // 0x80671EC8
    /* lfs f4, 0(r7) */ // 0x80671ECC
    /* lis r4, 0 */ // 0x80671ED0
    /* xoris r6, r0, 0x8000 */ // 0x80671ED4
    /* lfs f0, 0(r4) */ // 0x80671ED8
    /* lis r0, 0x4330 */ // 0x80671EDC
    *(0x34 + r1) = r6; // stw @ 0x80671EE0
    /* lis r5, 0 */ // 0x80671EE4
    /* fdivs f0, f6, f0 */ // 0x80671EE8
    /* lfd f2, 0x10(r7) */ // 0x80671EEC
    *(0x30 + r1) = r0; // stw @ 0x80671EF0
    r5 = r5 + 0; // 0x80671EF4
    /* lfs f3, 0x14(r3) */ // 0x80671EF8
    /* li r31, 1 */ // 0x80671EFC
    /* lfd f1, 0x30(r1) */ // 0x80671F00
    r6 = *(8 + r3); // lwz @ 0x80671F08
    r0 = *(0x10 + r3); // lwz @ 0x80671F0C
    /* fsubs f1, f1, f2 */ // 0x80671F10
    *(0xc + r1) = r0; // stw @ 0x80671F14
    r3 = r3 + 0x24; // 0x80671F18
    /* fsubs f1, f1, f4 */ // 0x80671F1C
    *(8 + r1) = r5; // stw @ 0x80671F20
    *(0x10 + r1) = r6; // stw @ 0x80671F24
    /* stfs f3, 0x14(r1) */ // 0x80671F28
    /* stfs f6, 0x18(r1) */ // 0x80671F2C
    /* stfs f0, 0x1c(r1) */ // 0x80671F30
    /* stfs f5, 0x20(r1) */ // 0x80671F34
    /* stfs f1, 0x24(r1) */ // 0x80671F38
    *(0x28 + r1) = r31; // stb @ 0x80671F3C
    FUN_8064E1DC(); // bl 0x8064E1DC
    r0 = *(0x28 + r1); // lbz @ 0x80671F44
    if (==) goto 0x0x80671f54;
    *(0xc + r30) = r31; // stb @ 0x80671F50
    r0 = *(0x44 + r1); // lwz @ 0x80671F54
    r31 = *(0x3c + r1); // lwz @ 0x80671F58
    r30 = *(0x38 + r1); // lwz @ 0x80671F5C
}