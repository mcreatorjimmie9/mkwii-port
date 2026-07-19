/* Function at 0x808818C0, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_808818C0(int r3)
{
    r0 = *(4 + r3); // lhz @ 0x808818C0
    if (<=) goto 0x0x808818e8;
    /* li r0, 0x63 */ // 0x808818CC
    *(0 + r4) = r0; // stb @ 0x808818D0
    /* li r3, 0x3b */ // 0x808818D4
    *(0 + r5) = r3; // stb @ 0x808818D8
    /* li r0, 0x3e7 */ // 0x808818DC
    *(0 + r6) = r0; // sth @ 0x808818E0
    return;
    *(0 + r4) = r0; // stb @ 0x808818E8
    r0 = *(6 + r3); // lbz @ 0x808818EC
    *(0 + r5) = r0; // stb @ 0x808818F0
    r0 = *(8 + r3); // lhz @ 0x808818F4
    *(0 + r6) = r0; // sth @ 0x808818F8
    return;
}