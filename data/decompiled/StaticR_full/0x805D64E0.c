/* Function at 0x805D64E0, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D64E0(int r3, int r4, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D64E0
    r0 = r4 rlwinm 1; // rlwinm
    r4 = r7 + -0x7340; // 0x805D64E8
    r4 = r6 * r4; // 0x805D64EC
    r3 = r3 + r4; // 0x805D64F0
    r3 = r3 + r0; // 0x805D64F4
    *(0x126 + r3) = r5; // sth @ 0x805D64F8
    return;
}