/* Function at 0x805D9918, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805D9918(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805D9918
    /* lis r3, 0 */ // 0x805D991C
    r0 = *(0 + r4); // lwz @ 0x805D9920
    r3 = r3 + 0; // 0x805D9924
    /* mulli r0, r0, 0xc */ // 0x805D9928
    /* lhzx r3, r3, r0 */ // 0x805D992C
    return;
}