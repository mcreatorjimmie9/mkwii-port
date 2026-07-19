/* Function at 0x805D6198, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6198(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6198
    /* lis r3, 2 */ // 0x805D619C
    r0 = *(-0x6d6c + r4); // lwz @ 0x805D61A0
    r3 = r3 + -0x7961; // 0x805D61A4
    /* bgelr  */ // 0x805D61AC
    r3 = r0;
    return;
}