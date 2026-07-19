/* Function at 0x80836F4C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80836F4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80836F5C
    r31 = r31 + 0; // 0x80836F60
    *(8 + r1) = r30; // stw @ 0x80836F64
    r30 = r3;
    FUN_8082E01C(); // bl 0x8082E01C
    /* lfs f1, 0x134(r31) */ // 0x80836F70
    /* lis r3, 0 */ // 0x80836F74
    /* lfs f0, 0x158(r31) */ // 0x80836F78
    r3 = r3 + 0; // 0x80836F7C
    /* stfs f1, 0x2dc(r30) */ // 0x80836F80
    /* li r4, 0 */ // 0x80836F84
    r0 = *(0x78 + r30); // lwz @ 0x80836F88
    /* stfs f0, 0x2e0(r30) */ // 0x80836F8C
    /* lfs f4, 0x30c(r30) */ // 0x80836F90
    r0 = r0 | 0x400; // 0x80836F94
    /* lfs f5, 0x28c(r3) */ // 0x80836F98
    /* lfs f3, 0x310(r30) */ // 0x80836F9C
    /* lfs f2, 0x314(r30) */ // 0x80836FA0
    /* lfs f1, 0x15c(r31) */ // 0x80836FA4
    /* lfs f0, 0x160(r31) */ // 0x80836FA8
    /* stfs f5, 0x140(r30) */ // 0x80836FAC
    r3 = *(0x9c + r30); // lwz @ 0x80836FB0
    *(0x78 + r30) = r0; // stw @ 0x80836FB4
    /* stfs f4, 0x324(r30) */ // 0x80836FB8
    /* stfs f3, 0x328(r30) */ // 0x80836FBC
    /* stfs f2, 0x32c(r30) */ // 0x80836FC0
    /* stfs f1, 0x2f0(r30) */ // 0x80836FC4
    /* stfs f0, 0x2f8(r30) */ // 0x80836FC8
    r3 = *(0x28 + r3); // lwz @ 0x80836FCC
    FUN_805E7060(); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80836FD4
    /* lfs f1, 0x164(r31) */ // 0x80836FD8
    r12 = *(0x1c + r12); // lwz @ 0x80836FDC
    /* mtctr r12 */ // 0x80836FE0
    /* bctrl  */ // 0x80836FE4
    r0 = *(0x14 + r1); // lwz @ 0x80836FE8
    r31 = *(0xc + r1); // lwz @ 0x80836FEC
    r30 = *(8 + r1); // lwz @ 0x80836FF0
    return;
}