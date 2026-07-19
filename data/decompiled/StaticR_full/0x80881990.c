/* Function at 0x80881990, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_80881990(int r3, int r5)
{
    /* lis r5, 0 */ // 0x80881990
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r5); // lwz @ 0x80881998
    r3 = *(0xc + r3); // lwz @ 0x8088199C
    /* lwzx r3, r3, r0 */ // 0x808819A0
    r3 = *(0x40 + r3); // lwz @ 0x808819A4
    r0 = *(4 + r3); // lhz @ 0x808819A8
    *(4 + r4) = r0; // sth @ 0x808819AC
    r0 = *(6 + r3); // lbz @ 0x808819B0
    *(6 + r4) = r0; // stb @ 0x808819B4
    r0 = *(8 + r3); // lhz @ 0x808819B8
    *(8 + r4) = r0; // sth @ 0x808819BC
    r0 = *(0xa + r3); // lbz @ 0x808819C0
    *(0xa + r4) = r0; // stb @ 0x808819C4
    return;
}