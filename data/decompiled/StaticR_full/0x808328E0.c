/* Function at 0x808328E0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808328E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r5;
    *(0x14 + r1) = r0; // stw @ 0x808328EC
    *(0xc + r1) = r31; // stw @ 0x808328F0
    r31 = r3;
    FUN_8082D304(r4); // bl 0x8082D304
    r0 = *(0x78 + r31); // lwz @ 0x808328FC
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x80832900
    if (!=) goto 0x0x80832928;
    r0 = *(0x78 + r31); // lwz @ 0x80832908
    /* lis r3, 0 */ // 0x8083290C
    /* lfs f0, 0(r3) */ // 0x80832910
    r0 = r0 | 0x800; // 0x80832914
    *(0x78 + r31) = r0; // stw @ 0x80832918
    /* stfs f0, 0x150(r31) */ // 0x8083291C
    /* stfs f0, 0x154(r31) */ // 0x80832920
    /* stfs f0, 0x158(r31) */ // 0x80832924
    r0 = *(0x14 + r1); // lwz @ 0x80832928
    r31 = *(0xc + r1); // lwz @ 0x8083292C
    return;
}