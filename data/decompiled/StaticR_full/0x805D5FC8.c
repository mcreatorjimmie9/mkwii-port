/* Function at 0x805D5FC8, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5FC8(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5FC8
    r4 = *(4 + r4); // lhz @ 0x805D5FCC
    r0 = r6 + -0x7340; // 0x805D5FD0
    r0 = r5 * r0; // 0x805D5FD4
    r3 = r3 + r0; // 0x805D5FD8
    *(0xb8 + r3) = r4; // sth @ 0x805D5FDC
    return;
}