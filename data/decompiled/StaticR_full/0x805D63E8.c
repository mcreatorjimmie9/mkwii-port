/* Function at 0x805D63E8, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D63E8(int r3, int r4, int r5)
{
    /* lis r5, 1 */ // 0x805D63E8
    r0 = r5 + -0x7340; // 0x805D63EC
    r0 = r4 * r0; // 0x805D63F0
    r3 = r3 + r0; // 0x805D63F4
    /* stfs f1, 0xe8(r3) */ // 0x805D63F8
    return;
}