/* Function at 0x8091EA68, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8091EA68(int r3, int r4, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8091EA70
    *(0x14 + r1) = r0; // stw @ 0x8091EA74
    *(0xc + r1) = r31; // stw @ 0x8091EA78
    r31 = r3;
    r3 = *(0 + r6); // lwz @ 0x8091EA80
    FUN_8090B0E8(r6); // bl 0x8090B0E8
    r4 = *(0x28 + r31); // lwz @ 0x8091EA88
    r0 = r3 rlwinm 2; // rlwinm
    r31 = *(0xc + r1); // lwz @ 0x8091EA90
    /* lwzx r3, r4, r0 */ // 0x8091EA94
    r0 = *(0x14 + r1); // lwz @ 0x8091EA98
    return;
}