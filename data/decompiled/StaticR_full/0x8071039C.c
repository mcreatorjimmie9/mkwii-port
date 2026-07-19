/* Function at 0x8071039C, size=84 bytes */
/* Stack frame: 16 bytes */

int FUN_8071039C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807103A4
    r12 = *(0 + r3); // lwz @ 0x807103A8
    r12 = *(0x24 + r12); // lwz @ 0x807103AC
    /* mtctr r12 */ // 0x807103B0
    /* bctrl  */ // 0x807103B4
    /* lis r4, 0 */ // 0x807103B8
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807103C0
    r4 = *(4 + r3); // lwz @ 0x807103C4
    r3 = *(0xc + r4); // lwz @ 0x807103C8
    r4 = *(8 + r4); // lwz @ 0x807103CC
    /* lhax r0, r3, r0 */ // 0x807103D0
    /* mulli r0, r0, 0x74 */ // 0x807103D4
    r3 = r4 + r0; // 0x807103D8
    r0 = *(0x14 + r1); // lwz @ 0x807103DC
    r3 = r3 + 2; // 0x807103E0
    return;
}