/* Function at 0x805D66FC, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D66FC(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D66FC
    /* slwi r0, r4, 1 */ // 0x805D6700
    r4 = r7 + -0x7340; // 0x805D6704
    r4 = r6 * r4; // 0x805D6708
    r3 = r3 + r4; // 0x805D670C
    r3 = r3 + r0; // 0x805D6710
    r0 = *(0x88 + r3); // lhz @ 0x805D6714
    r0 = r5 rlwimi 8; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D671C
    return;
}