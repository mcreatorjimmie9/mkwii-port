/* Function at 0x80881970, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_80881970(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80881970
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80881978
    r3 = *(0xc + r3); // lwz @ 0x8088197C
    /* lwzx r3, r3, r0 */ // 0x80881980
    r0 = *(0x38 + r3); // lwz @ 0x80881984
    r3 = r0 rlwinm 0x1a; // rlwinm
    return;
}