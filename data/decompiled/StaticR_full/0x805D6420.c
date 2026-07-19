/* Function at 0x805D6420, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6420(int r3, int r4, int r5)
{
    /* lis r5, 1 */ // 0x805D6420
    r0 = r5 + -0x7340; // 0x805D6424
    r0 = r4 * r0; // 0x805D6428
    r3 = r3 + r0; // 0x805D642C
    /* stfs f1, 0xec(r3) */ // 0x805D6430
    return;
}