/* Function at 0x808CF530, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_808CF530(int r3, int r4)
{
    /* lis r4, 0 */ // 0x808CF530
    /* li r0, 1 */ // 0x808CF534
    r4 = *(0 + r4); // lwz @ 0x808CF538
    r4 = *(0 + r4); // lwz @ 0x808CF53C
    *(0x389 + r4) = r0; // stb @ 0x808CF540
    r4 = *(4 + r3); // lwz @ 0x808CF544
    r0 = r4 + 1; // 0x808CF548
    *(4 + r3) = r0; // stw @ 0x808CF54C
    return;
}