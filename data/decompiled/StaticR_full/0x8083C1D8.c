/* Function at 0x8083C1D8, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083C1D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8083C1E0
    *(0x14 + r1) = r0; // stw @ 0x8083C1E4
    *(0xc + r1) = r31; // stw @ 0x8083C1E8
    r31 = r3;
    r5 = *(0xb0 + r3); // lwz @ 0x8083C1F0
    r0 = *(0xc + r5); // lwz @ 0x8083C1F4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r5) = r0; // stw @ 0x8083C1FC
    FUN_80829CD8(); // bl 0x80829CD8
    /* lis r3, 0 */ // 0x8083C204
    r4 = *(0xb0 + r31); // lwz @ 0x8083C208
    /* lfs f0, 0(r3) */ // 0x8083C20C
    /* stfs f1, 4(r4) */ // 0x8083C210
    /* fadds f0, f1, f0 */ // 0x8083C214
    /* stfs f0, 8(r4) */ // 0x8083C218
    r0 = *(0xc + r4); // lwz @ 0x8083C21C
    r0 = r0 | 0x800; // 0x8083C220
    *(0xc + r4) = r0; // stw @ 0x8083C224
    r31 = *(0xc + r1); // lwz @ 0x8083C228
    r0 = *(0x14 + r1); // lwz @ 0x8083C22C
    return;
}