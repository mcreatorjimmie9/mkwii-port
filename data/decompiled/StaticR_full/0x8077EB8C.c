/* Function at 0x8077EB8C, size=204 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8077EB8C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8077EB94
    /* lis r5, 0 */ // 0x8077EB98
    r4 = r4 + 0; // 0x8077EBA0
    *(0x2c + r1) = r31; // stw @ 0x8077EBA4
    *(0x28 + r1) = r30; // stw @ 0x8077EBA8
    *(0x24 + r1) = r29; // stw @ 0x8077EBAC
    r29 = r3;
    /* lfs f1, 0(r5) */ // 0x8077EBB8
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r29 + 0xf0; // 0x8077EBC4
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x8077EBD0
    /* lis r30, 0 */ // 0x8077EBD4
    /* stfs f0, 0x120(r29) */ // 0x8077EBD8
    /* lis r31, 0 */ // 0x8077EBDC
    r3 = *(8 + r29); // lwz @ 0x8077EBE0
    /* li r4, 0 */ // 0x8077EBE4
    /* lfs f0, 0xc(r1) */ // 0x8077EBE8
    /* stfs f0, 0x124(r29) */ // 0x8077EBEC
    /* lfs f1, 0(r30) */ // 0x8077EBF0
    /* lfs f0, 0x10(r1) */ // 0x8077EBF4
    /* stfs f0, 0x128(r29) */ // 0x8077EBF8
    /* lfs f2, 0(r31) */ // 0x8077EBFC
    r3 = *(0x28 + r3); // lwz @ 0x8077EC00
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x8077EC08
    /* li r4, 1 */ // 0x8077EC0C
    r3 = *(0x28 + r3); // lwz @ 0x8077EC10
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8077EC18
    /* lfs f1, 0(r31) */ // 0x8077EC1C
    r12 = *(0x1c + r12); // lwz @ 0x8077EC20
    /* mtctr r12 */ // 0x8077EC24
    /* bctrl  */ // 0x8077EC28
    /* lfs f1, 0(r30) */ // 0x8077EC2C
    r3 = r29;
    /* li r4, 0x334 */ // 0x8077EC34
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x34 + r1); // lwz @ 0x8077EC3C
    r31 = *(0x2c + r1); // lwz @ 0x8077EC40
    r30 = *(0x28 + r1); // lwz @ 0x8077EC44
    r29 = *(0x24 + r1); // lwz @ 0x8077EC48
    return;
}