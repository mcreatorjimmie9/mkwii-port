/* Function at 0x805AEE58, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805AEE58(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805AEE6C
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x805AEE74
    r12 = *(0x38 + r12); // lwz @ 0x805AEE78
    /* mtctr r12 */ // 0x805AEE7C
    /* bctrl  */ // 0x805AEE80
    r0 = *(0x18 + r29); // lbz @ 0x805AEE84
    /* lis r31, 0 */ // 0x805AEE88
    /* lfs f0, 0(r31) */ // 0x805AEE8C
    /* li r30, 0 */ // 0x805AEE90
    /* li r6, 7 */ // 0x805AEE94
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r29) = r30; // sth @ 0x805AEE9C
    r3 = r29 + 0x90; // 0x805AEEA0
    /* li r4, 0 */ // 0x805AEEA4
    /* li r5, 0x840 */ // 0x805AEEA8
    *(0xa + r29) = r30; // sth @ 0x805AEEAC
    /* stfs f0, 0x10(r29) */ // 0x805AEEB0
    /* stfs f0, 0xc(r29) */ // 0x805AEEB4
    *(0x14 + r29) = r6; // stb @ 0x805AEEB8
    *(0x15 + r29) = r6; // stb @ 0x805AEEBC
    *(0x16 + r29) = r30; // stb @ 0x805AEEC0
    *(0x17 + r29) = r30; // stb @ 0x805AEEC4
    *(0x18 + r29) = r0; // stb @ 0x805AEEC8
    FUN_805E3430(); // bl 0x805E3430
}