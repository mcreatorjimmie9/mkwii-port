/* Function at 0x808CF554, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_808CF554(int r3, int r4)
{
    /* lis r4, 0 */ // 0x808CF554
    /* li r0, 0 */ // 0x808CF558
    r4 = *(0 + r4); // lwz @ 0x808CF55C
    r4 = *(0 + r4); // lwz @ 0x808CF560
    *(0x389 + r4) = r0; // stb @ 0x808CF564
    r4 = *(4 + r3); // lwz @ 0x808CF568
    r0 = r4 + -1; // 0x808CF56C
    *(4 + r3) = r0; // stw @ 0x808CF570
    return;
}