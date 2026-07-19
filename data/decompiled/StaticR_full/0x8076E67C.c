/* Function at 0x8076E67C, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8076E67C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8076E694
    r29 = r3;
    FUN_8076CFA4(); // bl 0x8076CFA4
    /* lis r3, 0 */ // 0x8076E6A0
    /* lis r31, 0 */ // 0x8076E6A4
    r3 = r3 + 0; // 0x8076E6A8
    *(0 + r29) = r3; // stw @ 0x8076E6AC
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8076E6B4
    FUN_80770F48(r3, r4); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E6BC
    r12 = *(0x14 + r12); // lwz @ 0x8076E6C0
    /* mtctr r12 */ // 0x8076E6C4
    /* bctrl  */ // 0x8076E6C8
    *(0x4c + r29) = r3; // stw @ 0x8076E6CC
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8076E6D4
    FUN_80770F48(r4); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E6DC
    r12 = *(0x18 + r12); // lwz @ 0x8076E6E0
    /* mtctr r12 */ // 0x8076E6E4
    /* bctrl  */ // 0x8076E6E8
    *(0x50 + r29) = r3; // stw @ 0x8076E6EC
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8076E6F4
    FUN_80770F48(r4); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E6FC
    r12 = *(0x1c + r12); // lwz @ 0x8076E700
    /* mtctr r12 */ // 0x8076E704
    /* bctrl  */ // 0x8076E708
    /* stfs f1, 0x54(r29) */ // 0x8076E70C
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x8076E714
    FUN_80770F48(r4); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E71C
    r12 = *(0x20 + r12); // lwz @ 0x8076E720
    /* mtctr r12 */ // 0x8076E724
    /* bctrl  */ // 0x8076E728
    *(0x58 + r29) = r3; // stw @ 0x8076E72C
    /* lis r5, 0 */ // 0x8076E730
    r3 = r29;
    /* li r4, 0 */ // 0x8076E738
    r12 = *(0 + r29); // lwz @ 0x8076E73C
    /* lfs f1, 0(r5) */ // 0x8076E740
    r12 = *(0x10 + r12); // lwz @ 0x8076E744
    /* mtctr r12 */ // 0x8076E748
    /* bctrl  */ // 0x8076E74C
    r31 = *(0x1c + r1); // lwz @ 0x8076E750
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8076E758
    r29 = *(0x14 + r1); // lwz @ 0x8076E75C
    r0 = *(0x24 + r1); // lwz @ 0x8076E760
    return;
}