/* Function at 0x80764C88, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80764C88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80764C98
    r31 = r31 + 0; // 0x80764C9C
    *(8 + r1) = r30; // stw @ 0x80764CA0
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80764CA8
    r12 = *(0x90 + r12); // lwz @ 0x80764CAC
    /* mtctr r12 */ // 0x80764CB0
    /* bctrl  */ // 0x80764CB4
    /* lfs f0, 0(r31) */ // 0x80764CB8
    /* li r0, 0 */ // 0x80764CBC
    *(0x124 + r30) = r0; // stw @ 0x80764CC0
    /* lis r4, 0 */ // 0x80764CC4
    /* lfs f1, 0xb4(r31) */ // 0x80764CC8
    /* lis r3, 0 */ // 0x80764CCC
    /* stfs f0, 0x150(r30) */ // 0x80764CD0
    /* lfs f3, 0xb8(r31) */ // 0x80764CD4
    /* lfs f0, 0(r4) */ // 0x80764CD8
    /* lfs f4, 0(r3) */ // 0x80764CDC
    /* fmuls f5, f1, f0 */ // 0x80764CE0
    /* lfs f0, 0x108(r30) */ // 0x80764CE4
    /* lfs f2, 0x100(r30) */ // 0x80764CE8
    /* lfs f1, 0x104(r30) */ // 0x80764CEC
    /* fdivs f4, f5, f4 */ // 0x80764CF0
    /* stfs f0, 0x164(r30) */ // 0x80764CF4
    /* lfs f5, 0x34(r30) */ // 0x80764CF8
    /* stfs f2, 0x15c(r30) */ // 0x80764CFC
    /* stfs f1, 0x160(r30) */ // 0x80764D00
    /* stfs f5, 0x14c(r30) */ // 0x80764D04
    /* fdivs f0, f3, f4 */ // 0x80764D08
    /* stfs f4, 0x158(r30) */ // 0x80764D0C
    *(0x168 + r30) = r0; // stb @ 0x80764D10
    /* stfs f0, 0x154(r30) */ // 0x80764D14
    r31 = *(0xc + r1); // lwz @ 0x80764D18
    r30 = *(8 + r1); // lwz @ 0x80764D1C
    r0 = *(0x14 + r1); // lwz @ 0x80764D20
    return;
}