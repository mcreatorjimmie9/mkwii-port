/* Function at 0x805D6180, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6180(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6180
    r0 = r6 + -0x7340; // 0x805D6184
    r0 = r5 * r0; // 0x805D6188
    r3 = r3 + r0; // 0x805D618C
    *(0xbc + r3) = r4; // stw @ 0x805D6190
    return;
}