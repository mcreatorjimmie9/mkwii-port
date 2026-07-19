/* Function at 0x805D60A8, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D60A8(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D60A8
    r0 = r6 + -0x7340; // 0x805D60AC
    r0 = r5 * r0; // 0x805D60B0
    r3 = r3 + r0; // 0x805D60B4
    *(0xa0 + r3) = r4; // stw @ 0x805D60B8
    return;
}