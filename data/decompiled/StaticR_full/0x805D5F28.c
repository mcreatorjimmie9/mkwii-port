/* Function at 0x805D5F28, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5F28(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5F28
    r0 = r6 + -0x7340; // 0x805D5F2C
    r0 = r5 * r0; // 0x805D5F30
    r3 = r3 + r0; // 0x805D5F34
    *(0xc + r3) = r4; // stw @ 0x805D5F38
    return;
}