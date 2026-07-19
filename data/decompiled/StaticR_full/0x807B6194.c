/* Function at 0x807B6194, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B6194(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B6194
    r3 = *(4 + r3); // lwz @ 0x807B6198
    r0 = *(4 + r3); // lwz @ 0x807B619C
    r3 = r0 rlwinm 0x1d; // rlwinm
    return;
}