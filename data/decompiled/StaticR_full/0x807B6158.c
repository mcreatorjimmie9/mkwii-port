/* Function at 0x807B6158, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B6158(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B6158
    r3 = *(4 + r3); // lwz @ 0x807B615C
    r0 = *(4 + r3); // lwz @ 0x807B6160
    r3 = r0 rlwinm 0xe; // rlwinm
    return;
}