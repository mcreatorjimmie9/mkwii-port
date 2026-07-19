/* Function at 0x805A0390, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_805A0390(int r3, int r4, int r7)
{
    r7 = *(0x14 + r3); // lwz @ 0x805A0390
    /* li r3, 0 */ // 0x805A0394
    /* beqlr  */ // 0x805A039C
    r7 = *(4 + r7); // lwz @ 0x805A03A0
    r0 = r4 rlwinm 2; // rlwinm
    /* li r3, 1 */ // 0x805A03A8
    r4 = r7 + r0; // 0x805A03AC
    r7 = *(8 + r4); // lhz @ 0x805A03B0
    r4 = *(0xa + r4); // lhz @ 0x805A03B4
    r0 = r7 + 7; // 0x805A03B8
    *(0 + r6) = r4; // sth @ 0x805A03BC
    r0 = r0 >> 3; // srawi
    /* addze r0, r0 */ // 0x805A03C4
    *(0 + r5) = r0; // sth @ 0x805A03C8
    return;
}