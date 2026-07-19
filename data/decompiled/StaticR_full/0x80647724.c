/* Function at 0x80647724, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_80647724(int r3, int r4)
{
    r0 = r4 rlwinm 2; // rlwinm
    r3 = r3 + r0; // 0x80647728
    r3 = *(0x2c + r3); // lwz @ 0x8064772C
    return;
}