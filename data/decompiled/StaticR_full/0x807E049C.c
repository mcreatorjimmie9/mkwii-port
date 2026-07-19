/* Function at 0x807E049C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807E049C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807E04AC
    r4 = r31 + 0; // 0x807E04B0
    *(0x18 + r1) = r30; // stw @ 0x807E04B4
    /* lis r30, 0 */ // 0x807E04B8
    r30 = r30 + 0; // 0x807E04BC
    *(0x14 + r1) = r29; // stw @ 0x807E04C0
    /* lis r29, 0 */ // 0x807E04C4
    r29 = r29 + 0; // 0x807E04C8
    /* lfs f0, 0x18(r30) */ // 0x807E04CC
    r3 = r29 + 0xc; // 0x807E04D0
    /* stfs f0, 0xc(r29) */ // 0x807E04D4
    r5 = r29 + 0; // 0x807E04D8
    /* stfs f0, 4(r3) */ // 0x807E04DC
    /* stfs f0, 8(r3) */ // 0x807E04E0
    FUN_8091EFA4(r3, r5); // bl 0x8091EFA4
    /* lfs f1, 0(r30) */ // 0x807E04E8
    r3 = r29 + 0x24; // 0x807E04EC
    /* lfs f0, 0x1c(r30) */ // 0x807E04F0
    r4 = r31 + 0; // 0x807E04F4
    /* stfs f1, 0x24(r29) */ // 0x807E04F8
    r5 = r29 + 0x18; // 0x807E04FC
    /* stfs f0, 4(r3) */ // 0x807E0500
    /* stfs f0, 8(r3) */ // 0x807E0504
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807E050C
    r31 = *(0x1c + r1); // lwz @ 0x807E0510
    r30 = *(0x18 + r1); // lwz @ 0x807E0514
    r29 = *(0x14 + r1); // lwz @ 0x807E0518
    return;
}