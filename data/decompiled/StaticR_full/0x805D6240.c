/* Function at 0x805D6240, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6240(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6240
    /* lis r3, 2 */ // 0x805D6244
    r0 = *(-0x6d60 + r4); // lwz @ 0x805D6248
    r3 = r3 + -0x7961; // 0x805D624C
    /* bgelr  */ // 0x805D6254
    r3 = r0;
    return;
}