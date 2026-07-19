/* Function at 0x8060278C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8060278C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806027A0
    r30 = r3;
    r3 = r3 + 4; // 0x806027A8
    FUN_8061E03C(r3); // bl 0x8061E03C
    r4 = r3;
    r5 = r31;
    FUN_806026B4(r3, r4, r5, r3); // bl 0x806026B4
    r3 = r30 + 4; // 0x806027C0
    FUN_8061E59C(r4, r5, r3, r3); // bl 0x8061E59C
    /* lfs f0, 8(r1) */ // 0x806027C8
    /* stfs f0, 0x48(r3) */ // 0x806027CC
    /* lfs f0, 0xc(r1) */ // 0x806027D0
    /* stfs f0, 0x4c(r3) */ // 0x806027D4
    /* lfs f0, 0x10(r1) */ // 0x806027D8
    /* stfs f0, 0x50(r3) */ // 0x806027DC
    /* li r3, 6 */ // 0x806027E0
    r31 = *(0x1c + r1); // lwz @ 0x806027E4
    r30 = *(0x18 + r1); // lwz @ 0x806027E8
    r0 = *(0x24 + r1); // lwz @ 0x806027EC
    return;
}