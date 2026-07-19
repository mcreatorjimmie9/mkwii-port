/* Function at 0x805D6AFC, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6AFC(int r4, int r5, int r6, int r7)
{
    r7 = *(0 + r4); // lbz @ 0x805D6AFC
    r6 = *(1 + r4); // lbz @ 0x805D6B00
    r5 = *(2 + r4); // lbz @ 0x805D6B04
    r0 = *(3 + r4); // lbz @ 0x805D6B08
    *(0 + r3) = r7; // stb @ 0x805D6B0C
    *(1 + r3) = r6; // stb @ 0x805D6B10
    *(2 + r3) = r5; // stb @ 0x805D6B14
    *(3 + r3) = r0; // stb @ 0x805D6B18
    return;
}