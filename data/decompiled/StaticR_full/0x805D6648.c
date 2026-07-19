/* Function at 0x805D6648, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6648(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6648
    /* slwi r0, r4, 1 */ // 0x805D664C
    r4 = r7 + -0x7340; // 0x805D6650
    r4 = r6 * r4; // 0x805D6654
    r3 = r3 + r4; // 0x805D6658
    r3 = r3 + r0; // 0x805D665C
    r0 = *(0x88 + r3); // lhz @ 0x805D6660
    r0 = r5 rlwimi 0xe; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D6668
    return;
}