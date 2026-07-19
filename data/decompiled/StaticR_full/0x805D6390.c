/* Function at 0x805D6390, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6390(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D6390
    /* lis r3, 2 */ // 0x805D6394
    r0 = *(-0x6d4c + r4); // lwz @ 0x805D6398
    r3 = r3 + -0x7961; // 0x805D639C
    /* bgelr  */ // 0x805D63A4
    r3 = r0;
    return;
}