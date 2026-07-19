/* Function at 0x805D5F4C, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5F4C(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5F4C
    r0 = r6 + -0x7340; // 0x805D5F50
    r0 = r5 * r0; // 0x805D5F54
    r3 = r3 + r0; // 0x805D5F58
    *(0x10 + r3) = r4; // stw @ 0x805D5F5C
    return;
}