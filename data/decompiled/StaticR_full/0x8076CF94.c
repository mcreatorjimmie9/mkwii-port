/* Function at 0x8076CF94, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_8076CF94(int r3, int r4)
{
    r3 = *(0xc + r3); // lwz @ 0x8076CF94
    r0 = r4 rlwinm 4; // rlwinm
    r3 = r3 + r0; // 0x8076CF9C
    return;
}