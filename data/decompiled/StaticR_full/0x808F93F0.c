/* Function at 0x808F93F0, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_808F93F0(int r4)
{
    r0 = *(0x18 + r4); // lwz @ 0x808F93F0
    *(0x18 + r3) = r0; // stw @ 0x808F93F4
    r0 = *(0x1c + r4); // lwz @ 0x808F93F8
    *(0x1c + r3) = r0; // stw @ 0x808F93FC
    r0 = *(0x20 + r4); // lwz @ 0x808F9400
    *(0x20 + r3) = r0; // stw @ 0x808F9404
    r0 = *(0x24 + r4); // lha @ 0x808F9408
    *(0x24 + r3) = r0; // sth @ 0x808F940C
    r0 = *(0x26 + r4); // lbz @ 0x808F9410
    *(0x26 + r3) = r0; // stb @ 0x808F9414
    r0 = *(0x27 + r4); // lbz @ 0x808F9418
    *(0x27 + r3) = r0; // stb @ 0x808F941C
    return;
}