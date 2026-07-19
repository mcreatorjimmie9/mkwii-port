/* Function at 0x805D62B0, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D62B0(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D62B0
    /* lis r3, 2 */ // 0x805D62B4
    r0 = *(-0x6d5c + r4); // lwz @ 0x805D62B8
    r3 = r3 + -0x7961; // 0x805D62BC
    /* bgelr  */ // 0x805D62C4
    r3 = r0;
    return;
}