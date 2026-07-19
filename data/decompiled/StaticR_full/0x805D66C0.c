/* Function at 0x805D66C0, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_805D66C0(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D66C0
    /* slwi r0, r4, 1 */ // 0x805D66C4
    r4 = r7 + -0x7340; // 0x805D66C8
    r4 = r6 * r4; // 0x805D66CC
    r3 = r3 + r4; // 0x805D66D0
    r3 = r3 + r0; // 0x805D66D4
    r0 = *(0x88 + r3); // lhz @ 0x805D66D8
    r0 = r5 rlwimi 0xa; // rlwimi
    *(0x88 + r3) = r0; // sth @ 0x805D66E0
    return;
}