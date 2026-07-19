/* Function at 0x805D61B8, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D61B8(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D61B8
    r0 = r6 + -0x7340; // 0x805D61BC
    r0 = r5 * r0; // 0x805D61C0
    r3 = r3 + r0; // 0x805D61C4
    *(0xc0 + r3) = r4; // stw @ 0x805D61C8
    return;
}