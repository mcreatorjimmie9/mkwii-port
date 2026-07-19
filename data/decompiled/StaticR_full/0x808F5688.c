/* Function at 0x808F5688, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808F5688(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 2 */ // 0x808F569C
    *(8 + r1) = r30; // stw @ 0x808F56A0
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808F56A8
    r12 = *(0x134 + r12); // lwz @ 0x808F56AC
    /* mtctr r12 */ // 0x808F56B0
    /* bctrl  */ // 0x808F56B4
    r3 = *(0x104 + r30); // lwz @ 0x808F56B8
    if (==) goto 0x0x808f56cc;
    r4 = r31;
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F56CC
    /* li r0, 0 */ // 0x808F56D0
    /* lfs f0, 0(r3) */ // 0x808F56D4
    /* li r3, -1 */ // 0x808F56D8
    *(0x108 + r30) = r3; // stw @ 0x808F56DC
    *(0x10c + r30) = r0; // stw @ 0x808F56E0
    /* stfs f0, 0x110(r30) */ // 0x808F56E4
    *(0x118 + r30) = r0; // stb @ 0x808F56E8
    *(0x114 + r30) = r0; // stw @ 0x808F56EC
    r31 = *(0xc + r1); // lwz @ 0x808F56F0
    r30 = *(8 + r1); // lwz @ 0x808F56F4
    r0 = *(0x14 + r1); // lwz @ 0x808F56F8
    return;
}