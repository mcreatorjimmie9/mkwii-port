/* Function at 0x808D30B0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D30B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808D30B8
    /* lis r4, 0 */ // 0x808D30BC
    *(0x14 + r1) = r0; // stw @ 0x808D30C0
    r4 = r4 + 0; // 0x808D30C4
    /* lfs f0, 0(r5) */ // 0x808D30C8
    r4 = r4 + 0xe4; // 0x808D30CC
    *(0xc + r1) = r31; // stw @ 0x808D30D0
    r31 = r3;
    /* stfs f0, 0x174(r3) */ // 0x808D30D8
    r3 = r3 + 0xa8; // 0x808D30DC
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    /* li r4, 0 */ // 0x808D30E4
    *(0x178 + r31) = r3; // stw @ 0x808D30E8
    /* li r0, 0xff */ // 0x808D30EC
    *(0x189 + r31) = r4; // stb @ 0x808D30F0
    *(0xb8 + r3) = r0; // stb @ 0x808D30F4
    r31 = *(0xc + r1); // lwz @ 0x808D30F8
    r0 = *(0x14 + r1); // lwz @ 0x808D30FC
    return;
}