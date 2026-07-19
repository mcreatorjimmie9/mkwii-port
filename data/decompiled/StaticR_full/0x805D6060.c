/* Function at 0x805D6060, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6060(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6060
    r0 = r6 + -0x7340; // 0x805D6064
    r0 = r5 * r0; // 0x805D6068
    r3 = r3 + r0; // 0x805D606C
    *(0x98 + r3) = r4; // stw @ 0x805D6070
    return;
}