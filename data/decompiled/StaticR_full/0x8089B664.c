/* Function at 0x8089B664, size=164 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8089B664(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8089B66C
    *(0x44 + r1) = r0; // stw @ 0x8089B670
    *(0x3c + r1) = r31; // stw @ 0x8089B674
    r31 = r3;
    r4 = r31;
    r6 = *(0x30 + r3); // lwz @ 0x8089B680
    r0 = *(0x34 + r3); // lwz @ 0x8089B684
    *(0x24 + r1) = r0; // stw @ 0x8089B688
    r5 = *(0 + r5); // lwz @ 0x8089B68C
    *(0x20 + r1) = r6; // stw @ 0x8089B690
    r0 = *(0x38 + r3); // lwz @ 0x8089B694
    *(0x28 + r1) = r0; // stw @ 0x8089B69C
    r5 = *(0x20 + r5); // lwz @ 0x8089B6A0
    FUN_8089B708(r3); // bl 0x8089B708
    r0 = *(0x2c + r31); // lhz @ 0x8089B6A8
    /* lfs f0, 0x1c(r1) */ // 0x8089B6B0
    r4 = r31 + 0x30; // 0x8089B6B4
    /* lfs f1, 0x18(r1) */ // 0x8089B6B8
    r0 = r0 | 1; // 0x8089B6BC
    /* lfs f2, 0x14(r1) */ // 0x8089B6C0
    /* stfs f2, 0x30(r31) */ // 0x8089B6C8
    *(0x2c + r31) = r0; // sth @ 0x8089B6CC
    /* stfs f1, 0x34(r31) */ // 0x8089B6D0
    /* stfs f0, 0x38(r31) */ // 0x8089B6D4
    FUN_805A4498(r5); // bl 0x805A4498
    r12 = *(0 + r31); // lwz @ 0x8089B6DC
    r3 = r31;
    r12 = *(0x128 + r12); // lwz @ 0x8089B6E8
    /* mtctr r12 */ // 0x8089B6EC
    /* bctrl  */ // 0x8089B6F0
    r0 = *(0x44 + r1); // lwz @ 0x8089B6F4
    r31 = *(0x3c + r1); // lwz @ 0x8089B6F8
    return;
}