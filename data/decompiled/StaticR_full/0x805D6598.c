/* Function at 0x805D6598, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6598(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r8, 1 */ // 0x805D6598
    r0 = r6 rlwinm 3; // rlwinm
    r6 = r8 + -0x7340; // 0x805D65A0
    r4 = r4 * r6; // 0x805D65A4
    r3 = r3 + r4; // 0x805D65A8
    r0 = r3 + r0; // 0x805D65AC
    r3 = r0 + r7; // 0x805D65B0
    r0 = *(0x55f8 + r3); // lbz @ 0x805D65B4
    r0 = r0 | 0x80; // 0x805D65B8
    r0 = r5 rlwimi 4; // rlwimi
    *(0x55f8 + r3) = r0; // stb @ 0x805D65C0
    return;
}