/* Function at 0x805D5FF0, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5FF0(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5FF0
    r4 = *(4 + r4); // lhz @ 0x805D5FF4
    r0 = r6 + -0x7340; // 0x805D5FF8
    r0 = r5 * r0; // 0x805D5FFC
    r3 = r3 + r0; // 0x805D6000
    *(0xba + r3) = r4; // sth @ 0x805D6004
    return;
}