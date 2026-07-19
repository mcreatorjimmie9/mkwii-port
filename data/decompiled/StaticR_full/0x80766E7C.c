/* Function at 0x80766E7C, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80766E7C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x80766E88
    *(0xc + r1) = r31; // stw @ 0x80766E8C
    /* lis r31, 0 */ // 0x80766E90
    r31 = r31 + 0; // 0x80766E94
    *(8 + r1) = r30; // stw @ 0x80766E98
    r30 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x80766EA0
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f3, 0x58(r30) */ // 0x80766EA8
    /* stfs f3, 0xb4(r30) */ // 0x80766EAC
    /* lfs f2, 4(r31) */ // 0x80766EB0
    /* lfs f3, 0x5c(r30) */ // 0x80766EB4
    /* stfs f3, 0xb8(r30) */ // 0x80766EB8
    /* lfs f1, 0x20(r31) */ // 0x80766EBC
    /* lfs f3, 0x60(r30) */ // 0x80766EC0
    /* stfs f3, 0xbc(r30) */ // 0x80766EC4
    /* lfs f0, 0x24(r31) */ // 0x80766EC8
    /* lfs f3, 0x64(r30) */ // 0x80766ECC
    /* stfs f3, 0xc0(r30) */ // 0x80766ED0
    /* lfs f3, 0x68(r30) */ // 0x80766ED4
    /* stfs f3, 0xc4(r30) */ // 0x80766ED8
    /* lfs f3, 0x6c(r30) */ // 0x80766EDC
    /* stfs f3, 0xc8(r30) */ // 0x80766EE0
    /* lfs f3, 0x70(r30) */ // 0x80766EE4
    /* stfs f3, 0xcc(r30) */ // 0x80766EE8
    /* lfs f3, 0x74(r30) */ // 0x80766EEC
    /* stfs f3, 0xd0(r30) */ // 0x80766EF0
    /* lfs f3, 0x78(r30) */ // 0x80766EF4
    /* stfs f3, 0xd4(r30) */ // 0x80766EF8
    /* lfs f3, 0x7c(r30) */ // 0x80766EFC
    /* stfs f3, 0xd8(r30) */ // 0x80766F00
    /* lfs f3, 0x80(r30) */ // 0x80766F04
    /* stfs f3, 0xdc(r30) */ // 0x80766F08
    /* lfs f3, 0x84(r30) */ // 0x80766F0C
    /* stfs f3, 0xe0(r30) */ // 0x80766F10
    /* stfs f2, 0xf0(r30) */ // 0x80766F14
    /* stfs f1, 0xf4(r30) */ // 0x80766F18
    /* stfs f0, 0xf8(r30) */ // 0x80766F1C
    r31 = *(0xc + r1); // lwz @ 0x80766F20
    r30 = *(8 + r1); // lwz @ 0x80766F24
    r0 = *(0x14 + r1); // lwz @ 0x80766F28
    return;
}