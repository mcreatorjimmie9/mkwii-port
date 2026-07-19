/* Function at 0x80886E24, size=276 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80886E24(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80886E2C
    *(0x3c + r1) = r31; // stw @ 0x80886E34
    *(0x38 + r1) = r30; // stw @ 0x80886E38
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x80886E40
    r31 = *(0x20 + r4); // lwz @ 0x80886E44
    r4 = r31;
    FUN_808874E4(r4); // bl 0x808874E4
    r4 = r30 + 0x134; // 0x80886E54
    FUN_805A86E4(r4, r3, r4); // bl 0x805A86E4
    r12 = *(0 + r30); // lwz @ 0x80886E5C
    r3 = r30;
    r12 = *(0x128 + r12); // lwz @ 0x80886E68
    /* mtctr r12 */ // 0x80886E6C
    /* bctrl  */ // 0x80886E70
    r3 = r30;
    r4 = r31;
    FUN_80886FE4(r3, r4); // bl 0x80886FE4
    /* stfs f1, 0x120(r30) */ // 0x80886E80
    /* frsp f1, f1 */ // 0x80886E84
    r4 = r30 + 0x134; // 0x80886E8C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r30 + 0x108; // 0x80886E98
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r0 = *(0x170 + r30); // lwz @ 0x80886EA4
    r3 = *(0x2c + r30); // lhz @ 0x80886EA8
    /* lfs f0, 0x10(r1) */ // 0x80886EB0
    /* lfs f1, 0xc(r1) */ // 0x80886EB4
    r0 = r3 | 1; // 0x80886EB8
    /* lfs f2, 8(r1) */ // 0x80886EBC
    /* stfs f2, 0x30(r30) */ // 0x80886EC0
    *(0x2c + r30) = r0; // sth @ 0x80886EC4
    /* stfs f1, 0x34(r30) */ // 0x80886EC8
    /* stfs f0, 0x38(r30) */ // 0x80886ECC
    if (!=) goto 0x0x80886eec;
    /* lis r4, 0 */ // 0x80886ED4
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80886EDC
    /* li r4, 0x2a9 */ // 0x80886EE0
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* b 0x80886f0c */ // 0x80886EE8
    r0 = *(0x174 + r30); // lwz @ 0x80886EEC
    if (!=) goto 0x0x80886f0c;
    /* lis r4, 0 */ // 0x80886EF8
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80886F00
    /* li r4, 0x2a9 */ // 0x80886F04
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* lis r4, 0 */ // 0x80886F0C
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80886F14
    /* li r4, 0x2aa */ // 0x80886F18
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x44 + r1); // lwz @ 0x80886F20
    r31 = *(0x3c + r1); // lwz @ 0x80886F24
    r30 = *(0x38 + r1); // lwz @ 0x80886F28
    return;
}