/* Function at 0x805D61F0, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D61F0(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D61F0
    r0 = r6 + -0x7340; // 0x805D61F4
    r0 = r5 * r0; // 0x805D61F8
    r3 = r3 + r0; // 0x805D61FC
    *(0xc4 + r3) = r4; // stw @ 0x805D6200
    return;
}