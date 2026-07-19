/* Function at 0x805D615C, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D615C(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D615C
    r0 = r6 + -0x7340; // 0x805D6160
    r0 = r5 * r0; // 0x805D6164
    r3 = r3 + r0; // 0x805D6168
    *(0xb4 + r3) = r4; // stw @ 0x805D616C
    return;
}