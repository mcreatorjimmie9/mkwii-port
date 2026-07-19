/* Function at 0x805D661C, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D661C(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D661C
    r0 = r6 + -0x7340; // 0x805D6620
    r0 = r5 * r0; // 0x805D6624
    r3 = r3 + r0; // 0x805D6628
    r0 = *(0xf2 + r3); // lhz @ 0x805D662C
    r0 = r4 rlwimi 0xe; // rlwimi
    *(0xf2 + r3) = r0; // sth @ 0x805D6634
    return;
}