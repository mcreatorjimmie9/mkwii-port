/* Function at 0x80811668, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80811668(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80811670
    *(0x1c + r1) = r31; // stw @ 0x80811678
    /* lis r31, 0 */ // 0x8081167C
    r31 = r31 + 0; // 0x80811680
    *(0x18 + r1) = r30; // stw @ 0x80811684
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x8081168C
    r3 = *(0x20 + r3); // lwz @ 0x80811690
    r12 = *(0 + r3); // lwz @ 0x80811694
    r12 = *(0x10 + r12); // lwz @ 0x80811698
    /* mtctr r12 */ // 0x8081169C
    /* bctrl  */ // 0x808116A0
    /* li r0, 0 */ // 0x808116A4
    *(0xc8 + r30) = r0; // stw @ 0x808116A8
    r4 = *(0xa0 + r30); // lwz @ 0x808116AC
    r3 = *(0x20 + r30); // lwz @ 0x808116B0
    r4 = *(0 + r4); // lwz @ 0x808116B4
    r0 = *(0x32 + r4); // lha @ 0x808116B8
    *(0xe0 + r30) = r0; // stw @ 0x808116BC
    FUN_8076D150(); // bl 0x8076D150
    /* lfs f0, 4(r31) */ // 0x808116C4
    /* lis r0, 0x4330 */ // 0x808116C8
    r3 = *(0xa0 + r30); // lwz @ 0x808116CC
    /* fmuls f0, f1, f0 */ // 0x808116D0
    *(8 + r1) = r0; // stw @ 0x808116D4
    /* lfs f2, 0xc(r31) */ // 0x808116D8
    /* stfs f0, 0xd0(r30) */ // 0x808116DC
    /* lfs f0, 0x10(r31) */ // 0x808116E0
    r3 = *(0 + r3); // lwz @ 0x808116E4
    /* lfd f4, 0x18(r31) */ // 0x808116E8
    /* fmuls f1, f2, f0 */ // 0x808116EC
    r0 = *(0x2a + r3); // lha @ 0x808116F0
    /* lfs f3, 8(r31) */ // 0x808116F4
    /* xoris r0, r0, 0x8000 */ // 0x808116F8
    *(0xc + r1) = r0; // stw @ 0x808116FC
    /* lfd f0, 8(r1) */ // 0x80811700
    /* stfs f2, 0xdc(r30) */ // 0x80811704
    /* fsubs f0, f0, f4 */ // 0x80811708
    /* fdivs f0, f3, f0 */ // 0x8081170C
    /* stfs f0, 0xd8(r30) */ // 0x80811710
    FUN_805E3430(); // bl 0x805E3430
}