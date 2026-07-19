/* Function at 0x805D6308, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6308(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6308
    r0 = r6 + -0x7340; // 0x805D630C
    r0 = r5 * r0; // 0x805D6310
    r3 = r3 + r0; // 0x805D6314
    *(0xd8 + r3) = r4; // stw @ 0x805D6318
    return;
}