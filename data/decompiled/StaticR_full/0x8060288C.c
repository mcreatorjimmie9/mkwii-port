/* Function at 0x8060288C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8060288C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806028A0
    r30 = r3;
    r3 = r3 + 4; // 0x806028A8
    FUN_8061E03C(r3); // bl 0x8061E03C
    r4 = r3;
    r5 = r31;
    FUN_80601794(r3, r4, r5, r3); // bl 0x80601794
    /* lfs f1, 0x20(r30) */ // 0x806028C0
    /* li r3, -1 */ // 0x806028C4
    /* lfs f0, 8(r1) */ // 0x806028C8
    r0 = *(0x2c + r30); // lwz @ 0x806028CC
    /* fadds f0, f1, f0 */ // 0x806028D0
    /* lfs f2, 0x24(r30) */ // 0x806028D4
    /* lfs f1, 0x28(r30) */ // 0x806028D8
    r0 = r0 | 4; // 0x806028DC
    /* stfs f0, 0x20(r30) */ // 0x806028E0
    /* lfs f0, 0xc(r1) */ // 0x806028E4
    /* fadds f0, f2, f0 */ // 0x806028E8
    /* stfs f0, 0x24(r30) */ // 0x806028EC
    /* lfs f0, 0x10(r1) */ // 0x806028F0
    /* fadds f0, f1, f0 */ // 0x806028F4
    *(0x2c + r30) = r0; // stw @ 0x806028F8
    /* stfs f0, 0x28(r30) */ // 0x806028FC
    r31 = *(0x1c + r1); // lwz @ 0x80602900
    r30 = *(0x18 + r1); // lwz @ 0x80602904
    r0 = *(0x24 + r1); // lwz @ 0x80602908
    return;
}