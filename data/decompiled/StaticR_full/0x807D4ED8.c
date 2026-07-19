/* Function at 0x807D4ED8, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D4ED8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807D4EEC
    r29 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D4EF4
    r4 = *(0x38 + r3); // lwz @ 0x807D4EF8
    r12 = *(0xc + r12); // lwz @ 0x807D4EFC
    r30 = *(0 + r4); // lwz @ 0x807D4F00
    /* mtctr r12 */ // 0x807D4F04
    /* bctrl  */ // 0x807D4F08
    /* lis r3, 0 */ // 0x807D4F0C
    r4 = *(0x50 + r29); // lwz @ 0x807D4F10
    /* lfs f1, 0(r3) */ // 0x807D4F14
    /* lis r31, 0 */ // 0x807D4F18
    /* stfs f1, 8(r4) */ // 0x807D4F1C
    /* li r0, 0 */ // 0x807D4F20
    /* lfs f0, 0(r31) */ // 0x807D4F24
    r3 = r30;
    /* stfs f1, 4(r4) */ // 0x807D4F2C
    /* stfs f1, 0(r4) */ // 0x807D4F30
    /* stfs f1, 0xc(r4) */ // 0x807D4F34
    /* stfs f1, 0x10(r4) */ // 0x807D4F38
    /* stfs f0, 0x14(r4) */ // 0x807D4F3C
    /* stfs f1, 0x18(r4) */ // 0x807D4F40
    /* stfs f1, 0x20(r4) */ // 0x807D4F44
    *(0x24 + r4) = r0; // stb @ 0x807D4F48
    *(0x25 + r4) = r0; // stb @ 0x807D4F4C
    *(0x26 + r4) = r0; // stb @ 0x807D4F50
    *(0x27 + r4) = r0; // stb @ 0x807D4F54
    *(0x28 + r4) = r0; // stb @ 0x807D4F58
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lis r4, 0 */ // 0x807D4F60
    /* lfs f1, 0x20(r3) */ // 0x807D4F64
    /* lfs f0, 0(r4) */ // 0x807D4F68
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D4F6C
    if (<=) goto 0x0x807d4f88;
    /* lis r4, 0 */ // 0x807D4F74
    r3 = *(0x50 + r29); // lwz @ 0x807D4F78
    /* lfs f0, 0(r4) */ // 0x807D4F7C
    /* stfs f0, 0x14(r3) */ // 0x807D4F80
    /* b 0x807d4f94 */ // 0x807D4F84
    r3 = *(0x50 + r29); // lwz @ 0x807D4F88
    /* lfs f0, 0(r31) */ // 0x807D4F8C
    /* stfs f0, 0x14(r3) */ // 0x807D4F90
    r12 = *(0x34 + r29); // lwz @ 0x807D4F94
    r3 = r29;
    r4 = *(0x50 + r29); // lwz @ 0x807D4F9C
    r12 = *(0x60 + r12); // lwz @ 0x807D4FA0
    /* mtctr r12 */ // 0x807D4FA4
    /* bctrl  */ // 0x807D4FA8
    r12 = *(0x34 + r29); // lwz @ 0x807D4FAC
    r3 = r29;
    r4 = *(0x50 + r29); // lwz @ 0x807D4FB4
    r12 = *(0x5c + r12); // lwz @ 0x807D4FB8
    /* mtctr r12 */ // 0x807D4FBC
    /* bctrl  */ // 0x807D4FC0
    r0 = *(0x24 + r1); // lwz @ 0x807D4FC4
    r31 = *(0x1c + r1); // lwz @ 0x807D4FC8
    r30 = *(0x18 + r1); // lwz @ 0x807D4FCC
    r29 = *(0x14 + r1); // lwz @ 0x807D4FD0
    return;
}