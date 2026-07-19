/* Function at 0x80881964, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80881964(int r3)
{
    r0 = *(0xb90 + r3); // lwz @ 0x80881964
    r3 = r0 rlwinm 0x1e; // rlwinm
    return;
}