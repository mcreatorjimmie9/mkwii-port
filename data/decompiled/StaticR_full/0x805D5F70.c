/* Function at 0x805D5F70, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5F70(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5F70
    r0 = r6 + -0x7340; // 0x805D5F74
    r0 = r5 * r0; // 0x805D5F78
    r3 = r3 + r0; // 0x805D5F7C
    r0 = *(0xf2 + r3); // lhz @ 0x805D5F80
    r0 = r4 rlwimi 0xd; // rlwimi
    *(0xf2 + r3) = r0; // sth @ 0x805D5F88
    return;
}