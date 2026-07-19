/* Function at 0x805C0464, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805C0464(int r3)
{
    r0 = *(0xb70 + r3); // lwz @ 0x805C0464
    r3 = r0 rlwinm 0x1f; // rlwinm
    return;
}