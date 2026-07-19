/* Function at 0x805D6494, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6494(int r3, int r4, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6494
    r0 = r4 rlwinm 1; // rlwinm
    r4 = r7 + -0x7340; // 0x805D649C
    r4 = r6 * r4; // 0x805D64A0
    r3 = r3 + r4; // 0x805D64A4
    r3 = r3 + r0; // 0x805D64A8
    *(0xf4 + r3) = r5; // sth @ 0x805D64AC
    return;
}