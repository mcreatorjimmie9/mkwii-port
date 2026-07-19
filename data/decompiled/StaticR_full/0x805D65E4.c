/* Function at 0x805D65E4, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_805D65E4(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D65E4
    /* slwi r0, r6, 2 */ // 0x805D65E8
    r6 = r7 + -0x7340; // 0x805D65EC
    r7 = *(0 + r4); // lwz @ 0x805D65F0
    r4 = r5 * r6; // 0x805D65F4
    r3 = r3 + r4; // 0x805D65F8
    r3 = r3 + r0; // 0x805D65FC
    *(0x14 + r3) = r7; // stw @ 0x805D6600
    return;
}