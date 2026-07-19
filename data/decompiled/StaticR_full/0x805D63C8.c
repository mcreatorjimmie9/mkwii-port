/* Function at 0x805D63C8, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D63C8(int r3, int r4)
{
    /* addis r4, r3, 1 */ // 0x805D63C8
    /* lis r3, 2 */ // 0x805D63CC
    r0 = *(-0x6d48 + r4); // lwz @ 0x805D63D0
    r3 = r3 + -0x7961; // 0x805D63D4
    /* bgelr  */ // 0x805D63DC
    r3 = r0;
    return;
}