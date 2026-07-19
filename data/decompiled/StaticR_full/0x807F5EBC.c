/* Function at 0x807F5EBC, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807F5EBC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807F5EC4
    *(0x18 + r1) = r30; // stw @ 0x807F5ED0
    /* lis r30, 0 */ // 0x807F5ED4
    /* lfs f1, 0(r30) */ // 0x807F5ED8
    *(0x14 + r1) = r29; // stw @ 0x807F5EDC
    /* li r29, 0 */ // 0x807F5EE0
    *(0x10 + r1) = r28; // stw @ 0x807F5EE4
    r28 = r3;
    *(0xc0 + r3) = r29; // stw @ 0x807F5EEC
    *(0xdc + r3) = r29; // stw @ 0x807F5EF0
    r3 = *(0x20 + r3); // lwz @ 0x807F5EF4
    r12 = *(0 + r3); // lwz @ 0x807F5EF8
    r12 = *(0x10 + r12); // lwz @ 0x807F5EFC
    /* mtctr r12 */ // 0x807F5F00
    /* bctrl  */ // 0x807F5F04
    r5 = *(0x20 + r28); // lwz @ 0x807F5F08
    /* lis r31, 0 */ // 0x807F5F0C
    r3 = *(8 + r28); // lwz @ 0x807F5F10
    /* li r4, 0 */ // 0x807F5F14
    /* lfs f0, 0x24(r5) */ // 0x807F5F18
    /* stfs f0, 0xb4(r28) */ // 0x807F5F1C
    /* lfs f1, 0(r30) */ // 0x807F5F20
    /* lfs f0, 0x28(r5) */ // 0x807F5F24
    /* stfs f0, 0xb8(r28) */ // 0x807F5F28
    /* lfs f2, 0(r31) */ // 0x807F5F2C
    /* lfs f0, 0x2c(r5) */ // 0x807F5F30
    /* stfs f0, 0xbc(r28) */ // 0x807F5F34
    *(0xb0 + r28) = r29; // stw @ 0x807F5F38
    r3 = *(0x28 + r3); // lwz @ 0x807F5F3C
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(0xe8 + r28); // lwz @ 0x807F5F44
    /* li r4, 0 */ // 0x807F5F48
    /* lfs f1, 0(r30) */ // 0x807F5F4C
    r3 = *(8 + r3); // lwz @ 0x807F5F50
    /* lfs f2, 0(r31) */ // 0x807F5F54
    r3 = *(0x28 + r3); // lwz @ 0x807F5F58
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = r28;
    /* li r4, 0 */ // 0x807F5F64
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    /* li r0, 1 */ // 0x807F5F6C
    *(0xd4 + r28) = r0; // stb @ 0x807F5F70
    r31 = *(0x1c + r1); // lwz @ 0x807F5F74
    r30 = *(0x18 + r1); // lwz @ 0x807F5F78
    r29 = *(0x14 + r1); // lwz @ 0x807F5F7C
    r28 = *(0x10 + r1); // lwz @ 0x807F5F80
    r0 = *(0x24 + r1); // lwz @ 0x807F5F84
    return;
}