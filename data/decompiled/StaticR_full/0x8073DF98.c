/* Function at 0x8073DF98, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8073DF98(int r4, int r5, int r6, int r7)
{
    r7 = *(0 + r4); // lbz @ 0x8073DF98
    r6 = *(1 + r4); // lbz @ 0x8073DF9C
    r5 = *(2 + r4); // lbz @ 0x8073DFA0
    r0 = *(3 + r4); // lbz @ 0x8073DFA4
    *(0 + r3) = r7; // stb @ 0x8073DFA8
    *(1 + r3) = r6; // stb @ 0x8073DFAC
    *(2 + r3) = r5; // stb @ 0x8073DFB0
    *(3 + r3) = r0; // stb @ 0x8073DFB4
    return;
}