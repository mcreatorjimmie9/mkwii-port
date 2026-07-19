/* Function at 0x805D652C, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D652C(int r3, int r4, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D652C
    r0 = r4 rlwinm 1; // rlwinm
    r4 = r7 + -0x7340; // 0x805D6534
    r4 = r6 * r4; // 0x805D6538
    r3 = r3 + r4; // 0x805D653C
    r3 = r3 + r0; // 0x805D6540
    *(0x16e + r3) = r5; // sth @ 0x805D6544
    return;
}