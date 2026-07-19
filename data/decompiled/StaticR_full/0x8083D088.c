/* Function at 0x8083D088, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083D088(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r5;
    *(0x14 + r1) = r0; // stw @ 0x8083D094
    *(0xc + r1) = r31; // stw @ 0x8083D098
    r31 = r3;
    FUN_8082D304(r4); // bl 0x8082D304
    r0 = *(0x78 + r31); // lwz @ 0x8083D0A4
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x8083D0A8
    if (!=) goto 0x0x8083d0d0;
    r0 = *(0x78 + r31); // lwz @ 0x8083D0B0
    /* lis r3, 0 */ // 0x8083D0B4
    /* lfs f0, 0(r3) */ // 0x8083D0B8
    r0 = r0 | 0x800; // 0x8083D0BC
    *(0x78 + r31) = r0; // stw @ 0x8083D0C0
    /* stfs f0, 0x150(r31) */ // 0x8083D0C4
    /* stfs f0, 0x154(r31) */ // 0x8083D0C8
    /* stfs f0, 0x158(r31) */ // 0x8083D0CC
    r0 = *(0x14 + r1); // lwz @ 0x8083D0D0
    r31 = *(0xc + r1); // lwz @ 0x8083D0D4
    return;
}