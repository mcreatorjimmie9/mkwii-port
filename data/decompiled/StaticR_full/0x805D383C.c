/* Function at 0x805D383C, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_805D383C(int r3, int r4, int r5, int r6)
{
    /* lis r5, 1 */ // 0x805D383C
    r6 = *(0x14 + r3); // lwz @ 0x805D3840
    r0 = r5 + -0x7340; // 0x805D3844
    r0 = r4 * r0; // 0x805D3848
    r5 = r6 + r0; // 0x805D384C
    r5 = *(8 + r5); // lwz @ 0x805D3850
    /* addis r0, r5, -0x524b */ // 0x805D3854
    /* bnelr  */ // 0x805D385C
    *(0x36 + r3) = r4; // sth @ 0x805D3860
    /* lis r3, 0 */ // 0x805D3864
    r3 = *(0 + r3); // lwz @ 0x805D3868
    /* b 0x806eea44 */ // 0x805D386C
}