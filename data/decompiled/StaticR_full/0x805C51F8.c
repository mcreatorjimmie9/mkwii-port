/* Function at 0x805C51F8, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_805C51F8(int r3, int r5)
{
    r5 = *(0x14 + r3); // lwz @ 0x805C51F8
    if (==) goto 0x0x805c5250;
    r0 = *(0x14 + r5); // lhz @ 0x805C5204
    *(4 + r4) = r0; // sth @ 0x805C5208
    r0 = *(0x16 + r5); // lbz @ 0x805C520C
    *(6 + r4) = r0; // stb @ 0x805C5210
    r0 = *(0x18 + r5); // lhz @ 0x805C5214
    *(8 + r4) = r0; // sth @ 0x805C5218
    r0 = *(0x1a + r5); // lbz @ 0x805C521C
    *(0xa + r4) = r0; // stb @ 0x805C5220
    r3 = *(0x14 + r3); // lwz @ 0x805C5224
    r0 = *(0x40 + r3); // lbz @ 0x805C5228
    /* beqlr  */ // 0x805C5230
    /* lis r3, 1 */ // 0x805C5234
    /* li r0, 0 */ // 0x805C5238
    r3 = r3 + -1; // 0x805C523C
    *(4 + r4) = r3; // sth @ 0x805C5240
    *(6 + r4) = r0; // stb @ 0x805C5244
    *(8 + r4) = r0; // sth @ 0x805C5248
    return;
    /* li r0, 0 */ // 0x805C5250
    /* li r3, 1 */ // 0x805C5254
    *(0xa + r4) = r3; // stb @ 0x805C5258
    *(4 + r4) = r0; // sth @ 0x805C525C
    *(6 + r4) = r0; // stb @ 0x805C5260
    *(8 + r4) = r0; // sth @ 0x805C5264
    return;
}