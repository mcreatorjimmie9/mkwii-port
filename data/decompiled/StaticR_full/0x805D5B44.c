/* Function at 0x805D5B44, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5B44(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r6, 1 */ // 0x805D5B44
    r11 = *(0 + r4); // lbz @ 0x805D5B48
    r0 = r6 + -0x7340; // 0x805D5B4C
    r10 = *(1 + r4); // lbz @ 0x805D5B50
    r0 = r5 * r0; // 0x805D5B54
    r9 = *(2 + r4); // lbz @ 0x805D5B58
    r8 = *(3 + r4); // lbz @ 0x805D5B5C
    r7 = *(4 + r4); // lbz @ 0x805D5B60
    r6 = *(5 + r4); // lbz @ 0x805D5B64
    r5 = *(6 + r4); // lbz @ 0x805D5B68
    r3 = r3 + r0; // 0x805D5B6C
    r0 = *(7 + r4); // lbz @ 0x805D5B70
    *(0x30 + r3) = r11; // stb @ 0x805D5B74
    *(0x31 + r3) = r10; // stb @ 0x805D5B78
    *(0x32 + r3) = r9; // stb @ 0x805D5B7C
    *(0x33 + r3) = r8; // stb @ 0x805D5B80
    *(0x34 + r3) = r7; // stb @ 0x805D5B84
    *(0x35 + r3) = r6; // stb @ 0x805D5B88
    *(0x36 + r3) = r5; // stb @ 0x805D5B8C
    *(0x37 + r3) = r0; // stb @ 0x805D5B90
    return;
}