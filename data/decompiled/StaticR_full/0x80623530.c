/* Function at 0x80623530, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80623530(int r3)
{
    r0 = *(0x14 + r3); // lwz @ 0x80623530
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // stw @ 0x80623538
    return;
}