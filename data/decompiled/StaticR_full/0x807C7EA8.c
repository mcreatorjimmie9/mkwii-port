/* Function at 0x807C7EA8, size=288 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807C7EA8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807C7EB8
    *(0x38 + r1) = r30; // stw @ 0x807C7EBC
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x807C7EC4
    /* lis r29, 0 */ // 0x807C7EC8
    r29 = r29 + 0; // 0x807C7ECC
    /* lfs f0, 0(r29) */ // 0x807C7ED0
    /* stfs f0, 0xc(r3) */ // 0x807C7ED4
    /* stfs f0, 0x10(r3) */ // 0x807C7ED8
    r3 = *(0 + r31); // lwz @ 0x807C7EDC
    r3 = *(0x8c + r3); // lwz @ 0x807C7EE0
    FUN_807C16F8(); // bl 0x807C16F8
    *(8 + r30) = r3; // stw @ 0x807C7EE8
    r3 = *(4 + r30); // lwz @ 0x807C7EEC
    r3 = *(0 + r3); // lwz @ 0x807C7EF0
    r3 = *(0x10 + r3); // lwz @ 0x807C7EF4
    r3 = *(0x144 + r3); // lwz @ 0x807C7EF8
    r12 = *(0x34 + r3); // lwz @ 0x807C7EFC
    r12 = *(0x3c + r12); // lwz @ 0x807C7F00
    /* mtctr r12 */ // 0x807C7F04
    /* bctrl  */ // 0x807C7F08
    /* lfs f1, 0(r29) */ // 0x807C7F0C
    /* lis r4, 0 */ // 0x807C7F10
    *(0x14 + r30) = r3; // stw @ 0x807C7F14
    /* lfs f0, 0x10(r29) */ // 0x807C7F18
    /* stfs f1, 0x18(r30) */ // 0x807C7F1C
    /* lfs f1, 0(r4) */ // 0x807C7F20
    /* stfs f1, 0x28(r30) */ // 0x807C7F24
    /* stfs f0, 0x24(r30) */ // 0x807C7F28
    r3 = *(0 + r31); // lwz @ 0x807C7F2C
    FUN_807C0004(); // bl 0x807C0004
    r4 = r29 + 0x14; // 0x807C7F34
    r12 = *(0x14 + r29); // lwz @ 0x807C7F38
    r11 = *(4 + r4); // lwz @ 0x807C7F3C
    /* slwi r0, r3, 2 */ // 0x807C7F40
    r10 = *(8 + r4); // lwz @ 0x807C7F44
    r9 = *(0xc + r4); // lwz @ 0x807C7F4C
    r8 = *(0x10 + r4); // lwz @ 0x807C7F50
    r7 = *(0x14 + r4); // lwz @ 0x807C7F54
    r6 = *(0x18 + r4); // lwz @ 0x807C7F58
    r5 = *(0x1c + r4); // lwz @ 0x807C7F5C
    r4 = *(0x20 + r4); // lwz @ 0x807C7F60
    *(8 + r1) = r12; // stw @ 0x807C7F64
    *(0xc + r1) = r11; // stw @ 0x807C7F68
    *(0x10 + r1) = r10; // stw @ 0x807C7F6C
    *(0x14 + r1) = r9; // stw @ 0x807C7F70
    *(0x18 + r1) = r8; // stw @ 0x807C7F74
    *(0x1c + r1) = r7; // stw @ 0x807C7F78
    *(0x20 + r1) = r6; // stw @ 0x807C7F7C
    *(0x24 + r1) = r5; // stw @ 0x807C7F80
    *(0x28 + r1) = r4; // stw @ 0x807C7F84
    /* lfsx f0, r3, r0 */ // 0x807C7F88
    /* stfs f0, 0x20(r30) */ // 0x807C7F8C
    r3 = *(0 + r31); // lwz @ 0x807C7F90
    FUN_807BFFB8(); // bl 0x807BFFB8
    /* lis r4, 0 */ // 0x807C7F98
    /* slwi r0, r3, 2 */ // 0x807C7F9C
    r4 = r4 + 0; // 0x807C7FA0
    /* lfsx f0, r4, r0 */ // 0x807C7FA4
    /* stfs f0, 0x1c(r30) */ // 0x807C7FA8
    r31 = *(0x3c + r1); // lwz @ 0x807C7FAC
    r30 = *(0x38 + r1); // lwz @ 0x807C7FB0
    r29 = *(0x34 + r1); // lwz @ 0x807C7FB4
    r0 = *(0x44 + r1); // lwz @ 0x807C7FB8
    return;
}