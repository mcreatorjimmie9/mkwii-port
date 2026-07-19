/* Function at 0x8060BB84, size=172 bytes */
/* Stack frame: 0 bytes */

void FUN_8060BB84(int r3, int r4, int r5)
{
    r0 = *(0x254 + r3); // lhz @ 0x8060BB84
    /* lis r4, 0 */ // 0x8060BB88
    /* lfs f0, 0(r4) */ // 0x8060BB8C
    /* li r5, 0 */ // 0x8060BB90
    r0 = r0 rlwinm 0; // rlwinm
    *(0x254 + r3) = r0; // sth @ 0x8060BB98
    r4 = *(0 + r3); // lwz @ 0x8060BB9C
    /* stfs f0, 0x9c(r3) */ // 0x8060BBA0
    *(0xcc + r3) = r5; // stw @ 0x8060BBA4
    *(0xd0 + r3) = r5; // stw @ 0x8060BBA8
    *(0xfc + r3) = r5; // sth @ 0x8060BBAC
    *(0x100 + r3) = r5; // sth @ 0x8060BBB0
    *(0xfe + r3) = r5; // sth @ 0x8060BBB4
    *(0x102 + r3) = r5; // sth @ 0x8060BBB8
    /* stfs f0, 0x104(r3) */ // 0x8060BBBC
    r4 = *(4 + r4); // lwz @ 0x8060BBC0
    r0 = *(4 + r4); // lwz @ 0x8060BBC4
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8060BBCC
    r4 = *(0 + r3); // lwz @ 0x8060BBD0
    r4 = *(4 + r4); // lwz @ 0x8060BBD4
    r0 = *(4 + r4); // lwz @ 0x8060BBD8
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8060BBE0
    r4 = *(0 + r3); // lwz @ 0x8060BBE4
    r4 = *(4 + r4); // lwz @ 0x8060BBE8
    r0 = *(8 + r4); // lwz @ 0x8060BBEC
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x8060BBF4
    r4 = *(0 + r3); // lwz @ 0x8060BBF8
    r4 = *(4 + r4); // lwz @ 0x8060BBFC
    r0 = *(4 + r4); // lwz @ 0x8060BC00
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8060BC08
    r4 = *(0 + r3); // lwz @ 0x8060BC0C
    r4 = *(4 + r4); // lwz @ 0x8060BC10
    r0 = *(4 + r4); // lwz @ 0x8060BC14
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8060BC1C
    /* stfs f0, 0x1c8(r3) */ // 0x8060BC20
    *(0xcc + r3) = r5; // stw @ 0x8060BC24
    *(0x1cc + r3) = r5; // sth @ 0x8060BC28
    return;
}