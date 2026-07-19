/* Function at 0x805D6ADC, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6ADC(int r3, int r4, int r5, int r6)
{
    /* lis r5, 1 */ // 0x805D6ADC
    /* lis r6, 0x524b */ // 0x805D6AE0
    r0 = r5 + -0x7340; // 0x805D6AE4
    r0 = r4 * r0; // 0x805D6AE8
    r4 = r6 + 0x5044; // 0x805D6AEC
    r3 = r3 + r0; // 0x805D6AF0
    *(8 + r3) = r4; // stw @ 0x805D6AF4
    return;
}