/* Function at 0x8061F1F8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8061F1F8(int r3, int r5)
{
    r5 = *(0 + r3); // lwz @ 0x8061F1F8
    r5 = *(0x44 + r5); // lwz @ 0x8061F1FC
    *(0x21 + r5) = r4; // stb @ 0x8061F200
    r3 = *(0 + r3); // lwz @ 0x8061F204
    r3 = *(0x48 + r3); // lwz @ 0x8061F208
    *(0x21 + r3) = r4; // stb @ 0x8061F20C
    return;
}