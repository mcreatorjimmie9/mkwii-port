/* Function at 0x808586E4, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_808586E4(int r3, int r4)
{
    r0 = *(0x14b + r3); // lbz @ 0x808586E4
    if (==) goto 0x0x808586fc;
    r0 = *(0x146 + r3); // lbz @ 0x808586F0
    if (!=) goto 0x0x80858704;
    /* li r3, 0 */ // 0x808586FC
    return;
    r4 = *(0 + r3); // lwz @ 0x80858704
    r4 = *(4 + r4); // lwz @ 0x80858708
    r0 = *(0xc + r4); // lwz @ 0x8085870C
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x80858710
    if (==) goto 0x0x80858720;
    /* li r3, 0 */ // 0x80858718
    return;
    r0 = *(0xfa + r3); // lhz @ 0x80858720
    r3 = r3 + r0; // 0x80858724
    r0 = *(0x14c + r3); // lbz @ 0x80858728
    r3 = r0 rlwinm 0x1b; // rlwinm
    return;
}