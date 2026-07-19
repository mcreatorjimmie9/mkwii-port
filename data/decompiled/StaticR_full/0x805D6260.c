/* Function at 0x805D6260, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6260(int r3, int r4, int r5)
{
    /* lis r5, 1 */ // 0x805D6260
    r0 = r5 + -0x7340; // 0x805D6264
    r0 = r4 * r0; // 0x805D6268
    r3 = r3 + r0; // 0x805D626C
    /* stfs f1, 0xcc(r3) */ // 0x805D6270
    return;
}