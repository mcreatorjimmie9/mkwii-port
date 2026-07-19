/* Function at 0x80842ECC, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_80842ECC(int r3, int r4, int r5)
{
    r0 = *(0 + r3); // lwz @ 0x80842ECC
    r5 = r4;
    r4 = r3;
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 0x100; // 0x80842EDC
    *(0 + r3) = r0; // stw @ 0x80842EE0
    r3 = *(4 + r3); // lwz @ 0x80842EE4
    r12 = *(0 + r3); // lwz @ 0x80842EE8
    r12 = *(0x110 + r12); // lwz @ 0x80842EEC
    /* mtctr r12 */ // 0x80842EF0
    /* bctr  */ // 0x80842EF4
}