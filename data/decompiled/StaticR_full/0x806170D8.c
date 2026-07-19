/* Function at 0x806170D8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806170D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806170EC
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x806170F8
    /* li r0, 0 */ // 0x806170FC
    /* lfs f0, 0(r3) */ // 0x80617100
    /* lis r3, 0 */ // 0x80617104
    r3 = r3 + 0; // 0x80617108
    *(0xc + r30) = r3; // stw @ 0x8061710C
    r3 = r30;
    *(0x58 + r30) = r0; // stb @ 0x80617114
    *(0x60 + r30) = r0; // sth @ 0x80617118
    *(0x64 + r30) = r31; // stw @ 0x8061711C
    *(0xa6 + r30) = r0; // sth @ 0x80617120
    *(0xa8 + r30) = r0; // stw @ 0x80617124
    *(0xac + r30) = r0; // stw @ 0x80617128
    *(0xb0 + r30) = r0; // stw @ 0x8061712C
    *(0x14 + r30) = r0; // stw @ 0x80617130
    *(0x54 + r30) = r0; // stb @ 0x80617134
    *(0x55 + r30) = r0; // stb @ 0x80617138
    *(0x56 + r30) = r0; // sth @ 0x8061713C
    /* stfs f0, 0x50(r30) */ // 0x80617140
    *(0x1c + r30) = r0; // stw @ 0x80617144
    r31 = *(0xc + r1); // lwz @ 0x80617148
    r30 = *(8 + r1); // lwz @ 0x8061714C
    r0 = *(0x14 + r1); // lwz @ 0x80617150
    return;
}