/* Function at 0x80858694, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_80858694(int r3, int r4)
{
    r0 = *(0x14b + r3); // lbz @ 0x80858694
    if (==) goto 0x0x808586ac;
    r0 = *(0x146 + r3); // lbz @ 0x808586A0
    if (!=) goto 0x0x808586b4;
    /* li r3, 0 */ // 0x808586AC
    return;
    r4 = *(0 + r3); // lwz @ 0x808586B4
    r4 = *(4 + r4); // lwz @ 0x808586B8
    r0 = *(0xc + r4); // lwz @ 0x808586BC
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x808586C0
    if (==) goto 0x0x808586d0;
    /* li r3, 0 */ // 0x808586C8
    return;
    r0 = *(0xfa + r3); // lhz @ 0x808586D0
    r3 = r3 + r0; // 0x808586D4
    r0 = *(0x14c + r3); // lbz @ 0x808586D8
    r3 = r0 rlwinm 0x1c; // rlwinm
    return;
}