/* Function at 0x805D6340, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6340(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6340
    r0 = r6 + -0x7340; // 0x805D6344
    r0 = r5 * r0; // 0x805D6348
    r3 = r3 + r0; // 0x805D634C
    *(0xdc + r3) = r4; // stw @ 0x805D6350
    return;
}