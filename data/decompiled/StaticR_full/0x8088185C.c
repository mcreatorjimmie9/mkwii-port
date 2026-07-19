/* Function at 0x8088185C, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8088185C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8088185C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80881864
    r3 = *(0xc + r3); // lwz @ 0x80881868
    /* lwzx r3, r3, r0 */ // 0x8088186C
    r0 = *(0x38 + r3); // lwz @ 0x80881870
    r3 = r0 rlwinm 0x1f; // rlwinm
    return;
}