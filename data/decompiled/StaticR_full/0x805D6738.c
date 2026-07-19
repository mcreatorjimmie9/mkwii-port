/* Function at 0x805D6738, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6738(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6738
    /* slwi r0, r4, 1 */ // 0x805D673C
    r4 = r7 + -0x7340; // 0x805D6740
    r4 = r6 * r4; // 0x805D6744
    r3 = r3 + r4; // 0x805D6748
    r3 = r3 + r0; // 0x805D674C
    r0 = *(0x88 + r3); // lhz @ 0x805D6750
    r0 = r5 rlwimi 6; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D6758
    return;
}