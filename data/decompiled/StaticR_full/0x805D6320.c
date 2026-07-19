/* Function at 0x805D6320, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6320(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6320
    /* lis r3, 2 */ // 0x805D6324
    r0 = *(-0x6d54 + r4); // lwz @ 0x805D6328
    r3 = r3 + -0x7961; // 0x805D632C
    /* bgelr  */ // 0x805D6334
    r3 = r0;
    return;
}