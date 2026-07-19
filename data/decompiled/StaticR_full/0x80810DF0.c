/* Function at 0x80810DF0, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80810DF0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80810DF8
    *(0x14 + r1) = r0; // stw @ 0x80810DFC
    /* li r0, 0 */ // 0x80810E00
    *(0xc + r1) = r31; // stw @ 0x80810E04
    r31 = r3;
    /* lfs f2, 0x30(r3) */ // 0x80810E0C
    /* lfs f1, 0x34(r3) */ // 0x80810E10
    /* lfs f0, 0x38(r3) */ // 0x80810E14
    /* stfs f2, 0xc0(r3) */ // 0x80810E18
    /* stfs f1, 0xc4(r3) */ // 0x80810E1C
    /* stfs f0, 0xc8(r3) */ // 0x80810E20
    *(0xb0 + r3) = r0; // stb @ 0x80810E24
    FUN_808A0A44(); // bl 0x808A0A44
    /* li r0, 1 */ // 0x80810E2C
    *(0xcc + r31) = r0; // stb @ 0x80810E30
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x80810E38
    r12 = *(0x24 + r12); // lwz @ 0x80810E3C
    /* mtctr r12 */ // 0x80810E40
    /* bctrl  */ // 0x80810E44
    /* clrlwi r0, r3, 0x10 */ // 0x80810E48
    if (!=) goto 0x0x80810e74;
    r4 = *(8 + r31); // lwz @ 0x80810E54
    /* lis r3, 0 */ // 0x80810E58
    /* lis r5, 0 */ // 0x80810E5C
    /* lfs f1, 0(r3) */ // 0x80810E60
    r3 = *(0x28 + r4); // lwz @ 0x80810E64
    /* li r4, 0 */ // 0x80810E68
    /* lfs f2, 0(r5) */ // 0x80810E6C
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x80810E74
    r31 = *(0xc + r1); // lwz @ 0x80810E78
    return;
}