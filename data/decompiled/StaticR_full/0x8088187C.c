/* Function at 0x8088187C, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8088187C(int r3, int r6)
{
    /* lis r6, 0 */ // 0x8088187C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r6); // lwz @ 0x80881884
    r3 = *(0xc + r3); // lwz @ 0x80881888
    /* lwzx r3, r3, r0 */ // 0x8088188C
    /* b 0x805c4c84 */ // 0x80881890
}