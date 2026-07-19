/* Function at 0x805A95AC, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_805A95AC(int r3, int r4, int r8)
{
    /* li r0, 0x26 */ // 0x805A95AC
    r8 = r4 + -1; // 0x805A95B4
    r12 = *(0xb + r1); // lbz @ 0x805A95B8
    /* mtctr r0 */ // 0x805A95BC
    r4 = *(1 + r8); // lbz @ 0x805A95C0
    /* lbzu r0, 2(r8) */ // 0x805A95C4
    *(1 + r11) = r4; // stb @ 0x805A95C8
    /* stbu r0, 2(r11) */ // 0x805A95CC
    if (counter-- != 0) goto 0x0x805a95c0;
    r0 = *(0x18 + r3); // lhz @ 0x805A95D4
    *(0x70 + r3) = r5; // stw @ 0x805A95D8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x18 + r3) = r0; // sth @ 0x805A95E0
    *(0x74 + r3) = r6; // sth @ 0x805A95E4
    *(0x76 + r3) = r7; // sth @ 0x805A95E8
    *(0x14 + r3) = r10; // stw @ 0x805A95EC
    *(0x10 + r3) = r9; // stw @ 0x805A95F0
    *(0x6f + r3) = r12; // stb @ 0x805A95F4
    return;
}