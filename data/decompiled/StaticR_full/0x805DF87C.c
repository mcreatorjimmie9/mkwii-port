/* Function at 0x805DF87C, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_805DF87C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805DF87C
    r4 = r4 + 0; // 0x805DF880
    r0 = *(0xa0 + r4); // lwz @ 0x805DF884
    if (==) goto 0x0x805df8b0;
    r0 = *(0xa4 + r4); // lbz @ 0x805DF890
    if (!=) goto 0x0x805df8b0;
    /* li r0, 4 */ // 0x805DF89C
    *(0xa5 + r4) = r0; // stb @ 0x805DF8A0
    /* li r3, 1 */ // 0x805DF8A4
    *(0xa4 + r4) = r0; // stb @ 0x805DF8A8
    return;
    /* li r3, 0 */ // 0x805DF8B0
    return;
}