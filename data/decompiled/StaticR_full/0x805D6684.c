/* Function at 0x805D6684, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6684(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6684
    /* slwi r0, r4, 1 */ // 0x805D6688
    r4 = r7 + -0x7340; // 0x805D668C
    r4 = r6 * r4; // 0x805D6690
    r3 = r3 + r4; // 0x805D6694
    r3 = r3 + r0; // 0x805D6698
    r0 = *(0x88 + r3); // lhz @ 0x805D669C
    r0 = r5 rlwimi 0xc; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D66A4
    return;
}