/* Function at 0x805DF740, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_805DF740(int r3, int r4, int r5)
{
    /* lis r3, 0 */ // 0x805DF740
    r3 = r3 + 0; // 0x805DF744
    r0 = *(0xa0 + r3); // lwz @ 0x805DF748
    if (==) goto 0x0x805df798;
    r0 = *(0xa4 + r3); // lbz @ 0x805DF754
    if (==) goto 0x0x805df768;
    if (!=) goto 0x0x805df798;
    /* lis r5, 0 */ // 0x805DF768
    /* li r3, 2 */ // 0x805DF76C
    r5 = r5 + 0; // 0x805DF770
    /* li r4, 0 */ // 0x805DF774
    /* li r0, -1 */ // 0x805DF778
    *(0xa4 + r5) = r3; // stb @ 0x805DF77C
    /* li r3, 1 */ // 0x805DF780
    *(0xd0 + r5) = r4; // stw @ 0x805DF784
    *(0xd4 + r5) = r4; // stw @ 0x805DF788
    *(0xcc + r5) = r0; // stw @ 0x805DF78C
    *(0xc8 + r5) = r0; // stw @ 0x805DF790
    return;
    /* li r3, 0 */ // 0x805DF798
    return;
}