/* Function at 0x805D6578, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6578(int r3, int r4, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6578
    r0 = r4 rlwinm 1; // rlwinm
    r4 = r7 + -0x7340; // 0x805D6580
    r4 = r6 * r4; // 0x805D6584
    r3 = r3 + r4; // 0x805D6588
    r3 = r3 + r0; // 0x805D658C
    *(0x1ae + r3) = r5; // sth @ 0x805D6590
    return;
}