/* Function at 0x807B6180, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B6180(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B6180
    r3 = *(4 + r3); // lwz @ 0x807B6184
    r0 = *(8 + r3); // lwz @ 0x807B6188
    r3 = r0 rlwinm 3; // rlwinm
    return;
}