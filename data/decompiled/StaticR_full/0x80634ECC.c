/* Function at 0x80634ECC, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80634ECC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80634EDC
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80634EE4
    r12 = *(0x14 + r12); // lwz @ 0x80634EE8
    /* mtctr r12 */ // 0x80634EEC
    /* bctrl  */ // 0x80634EF0
    r12 = *(0 + r30); // lwz @ 0x80634EF4
    r31 = r3;
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x80634F00
    /* mtctr r12 */ // 0x80634F04
    /* bctrl  */ // 0x80634F08
    if (==) goto 0x0x80634f20;
    r3 = *(0 + r3); // lwz @ 0x80634F14
    /* lfs f0, 0x24(r3) */ // 0x80634F18
    /* stfs f0, 0x34(r30) */ // 0x80634F1C
    /* lis r3, 0 */ // 0x80634F20
    /* li r0, 1 */ // 0x80634F24
    /* lfs f0, 0(r3) */ // 0x80634F28
    /* lis r3, 0 */ // 0x80634F2C
    /* stfs f0, 0x14(r30) */ // 0x80634F30
    *(0x51 + r30) = r0; // stb @ 0x80634F34
    r3 = *(0 + r3); // lwz @ 0x80634F38
    FUN_8079D8F8(r3); // bl 0x8079D8F8
    r3 = r30;
    /* li r4, 0 */ // 0x80634F44
    FUN_80632FC4(r3, r4); // bl 0x80632FC4
    r3 = *(0 + r31); // lwz @ 0x80634F4C
    r0 = *(0 + r3); // lbz @ 0x80634F50
    if (>) goto 0x0x80634fe0;
    /* lis r3, 0 */ // 0x80634F5C
    /* slwi r0, r0, 2 */ // 0x80634F60
    r3 = r3 + 0; // 0x80634F64
    /* lwzx r3, r3, r0 */ // 0x80634F68
    /* mtctr r3 */ // 0x80634F6C
    /* bctr  */ // 0x80634F70
    r3 = *(0x28 + r30); // lwz @ 0x80634F74
    r4 = r30 + 0x70; // 0x80634F78
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    /* b 0x80634fe0 */ // 0x80634F80
    r3 = *(0x28 + r30); // lwz @ 0x80634F84
    r4 = r30 + 0x9c; // 0x80634F88
    FUN_807CF1B4(r4, r4); // bl 0x807CF1B4
    /* b 0x80634fe0 */ // 0x80634F90
    r3 = *(0x28 + r30); // lwz @ 0x80634F94
}