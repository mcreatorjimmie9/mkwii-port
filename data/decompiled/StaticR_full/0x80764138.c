/* Function at 0x80764138, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80764138(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80764148
    /* lfs f2, 0(r31) */ // 0x8076414C
    *(0x18 + r1) = r30; // stw @ 0x80764150
    /* lis r30, 0 */ // 0x80764154
    /* lfs f1, 0(r30) */ // 0x80764158
    *(0x14 + r1) = r29; // stw @ 0x8076415C
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x80764164
    r3 = *(0x28 + r4); // lwz @ 0x80764168
    /* li r4, 3 */ // 0x8076416C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x80764174
    /* li r4, 0 */ // 0x80764178
    /* lfs f1, 0(r30) */ // 0x8076417C
    r3 = *(0x28 + r3); // lwz @ 0x80764180
    /* lfs f2, 0(r31) */ // 0x80764184
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x8076418C
    /* li r4, 0 */ // 0x80764190
    r3 = *(0x28 + r3); // lwz @ 0x80764194
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8076419C
    r12 = *(0xc + r12); // lwz @ 0x807641A0
    /* mtctr r12 */ // 0x807641A4
    /* bctrl  */ // 0x807641A8
    r3 = *(0xd4 + r29); // lwz @ 0x807641AC
    /* li r4, 0 */ // 0x807641B0
    /* lfs f2, 0(r31) */ // 0x807641B4
    r3 = *(8 + r3); // lwz @ 0x807641B8
    r3 = *(0x28 + r3); // lwz @ 0x807641BC
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x807641C4
    r31 = *(0x1c + r1); // lwz @ 0x807641C8
    r30 = *(0x18 + r1); // lwz @ 0x807641CC
    r29 = *(0x14 + r1); // lwz @ 0x807641D0
    return;
}