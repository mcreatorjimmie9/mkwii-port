/* Function at 0x805D65C8, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805D65C8(int r3, int r4, int r5)
{
    /* addis r3, r3, 1 */ // 0x805D65C8
    r0 = r4 rlwinm 5; // rlwinm
    r3 = r3 + r0; // 0x805D65D0
    r0 = r5 rlwinm 2; // rlwinm
    r3 = r3 + r0; // 0x805D65D8
    r3 = *(-0x6fdc + r3); // lwz @ 0x805D65DC
    return;
}