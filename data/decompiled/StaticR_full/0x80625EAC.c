/* Function at 0x80625EAC, size=276 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_80625EAC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80625EB4
    /* lfs f0, 0(r4) */ // 0x80625EBC
    *(0x2c + r1) = r31; // stw @ 0x80625EC4
    *(0x28 + r1) = r30; // stw @ 0x80625EC8
    *(0x24 + r1) = r29; // stw @ 0x80625ECC
    r29 = r3;
    r5 = *(0 + r3); // lwz @ 0x80625ED4
    r5 = *(4 + r5); // lwz @ 0x80625ED8
    r0 = *(0x14 + r5); // lwz @ 0x80625EDC
    r0 = r0 | 0x400; // 0x80625EE0
    *(0x14 + r5) = r0; // stw @ 0x80625EE4
    /* stfs f0, 8(r1) */ // 0x80625EE8
    /* stfs f0, 0xc(r1) */ // 0x80625EEC
    /* stfs f0, 0x10(r1) */ // 0x80625EF0
    FUN_8061EEE0(); // bl 0x8061EEE0
    r3 = r29;
    FUN_806239F8(r3); // bl 0x806239F8
    r3 = *(0x1c + r29); // lwz @ 0x80625F00
    FUN_80621E10(r3); // bl 0x80621E10
    r3 = *(0x10 + r29); // lwz @ 0x80625F08
    r12 = *(0xc + r3); // lwz @ 0x80625F0C
    r12 = *(0x10 + r12); // lwz @ 0x80625F10
    /* mtctr r12 */ // 0x80625F14
    /* bctrl  */ // 0x80625F18
    r3 = *(0x14 + r29); // lwz @ 0x80625F1C
    FUN_805F70BC(); // bl 0x805F70BC
    r3 = r29;
    FUN_8061EE94(r3); // bl 0x8061EE94
    /* li r4, 0 */ // 0x80625F2C
    FUN_80645140(r3, r4); // bl 0x80645140
    r3 = r29;
    FUN_8061DFF8(r3, r4, r3); // bl 0x8061DFF8
    FUN_806121A4(r4, r3); // bl 0x806121A4
    r3 = r29;
    /* li r4, -1 */ // 0x80625F44
    FUN_8061F000(r3, r3, r4); // bl 0x8061F000
    /* lis r3, 0 */ // 0x80625F4C
    r3 = *(0 + r3); // lwz @ 0x80625F50
    if (==) goto 0x0x80625f60;
    FUN_8090A670(r3); // bl 0x8090A670
    FUN_80825764(r3); // bl 0x80825764
    /* lis r31, 0 */ // 0x80625F64
    r3 = r29;
    r30 = *(0 + r31); // lwz @ 0x80625F6C
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r30;
    /* clrlwi r4, r0, 0x18 */ // 0x80625F7C
    /* li r5, 0 */ // 0x80625F80
    FUN_807AE41C(r3, r5); // bl 0x807AE41C
    r30 = *(0 + r31); // lwz @ 0x80625F88
    r3 = r29;
    FUN_8061E2D8(r5, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r30;
    /* clrlwi r4, r0, 0x18 */ // 0x80625F9C
    FUN_807AE49C(r3, r3); // bl 0x807AE49C
    r0 = *(0x34 + r1); // lwz @ 0x80625FA4
    r31 = *(0x2c + r1); // lwz @ 0x80625FA8
    r30 = *(0x28 + r1); // lwz @ 0x80625FAC
    r29 = *(0x24 + r1); // lwz @ 0x80625FB0
    return;
}