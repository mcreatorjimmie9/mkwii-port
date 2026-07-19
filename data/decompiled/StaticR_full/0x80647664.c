/* Function at 0x80647664, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_80647664(int r3, int r4)
{
    r3 = *(0x24 + r3); // lwz @ 0x80647664
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x8064766C
    r3 = r3 + 8; // 0x80647670
    return;
}