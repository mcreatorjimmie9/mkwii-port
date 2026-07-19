/* Function at 0x8061DEF4, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DEF4(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8061DEF4
    r3 = *(4 + r3); // lwz @ 0x8061DEF8
    r0 = *(0x14 + r3); // lwz @ 0x8061DEFC
    r3 = r0 rlwinm 0x1a; // rlwinm
    return;
}