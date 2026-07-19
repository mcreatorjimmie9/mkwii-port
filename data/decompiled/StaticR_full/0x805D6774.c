/* Function at 0x805D6774, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6774(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6774
    /* slwi r0, r4, 1 */ // 0x805D6778
    r4 = r7 + -0x7340; // 0x805D677C
    r4 = r6 * r4; // 0x805D6780
    r3 = r3 + r4; // 0x805D6784
    r3 = r3 + r0; // 0x805D6788
    r0 = *(0x88 + r3); // lhz @ 0x805D678C
    r0 = r5 rlwimi 2; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D6794
    return;
}