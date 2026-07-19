/* Function at 0x8061DECC, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DECC(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061DECC
    r3 = *(4 + r3); // lwz @ 0x8061DED0
    r0 = *(0x14 + r3); // lwz @ 0x8061DED4
    r3 = r0 rlwinm 0x1f; // rlwinm
    return;
}